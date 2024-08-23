#include "mqtt/client.h"
#include "./VehicleRegistration.pb.h"
#include <iostream>
#include <chrono>
#include <thread>
#include <string>

// 서버 주소와 클라이언트 ID
const std::string SERVER_ADDRESS{"ssl://43.203.128.43:8883"};
const std::string CLIENT_ID{"AM_Client"};
const std::string TOPIC{"t2am/register"};

// 사용자 이름 및 비밀번호
const std::string USERNAME{"dmlee"};
const std::string PASSWORD{"ehdals12"};

// CA 인증서 경로
const std::string CA_CERTS_PATH{"/etc/mosquitto/certs/ca.crt"};

class mqtt_client : public virtual mqtt::callback, public virtual mqtt::iaction_listener {
    mqtt::async_client cli_;
    
    void on_failure(const mqtt::token& tok) override {
        std::cerr << "Operation failed." << std::endl;
        auto topics = tok.get_topics();
        if (topics && !topics->empty()) {
            std::cerr << "\tFailed to subscribe to: " << (*topics)[0] << std::endl;
        }
    }

    void on_success(const mqtt::token& tok) override {
        std::cout << "Operation succeeded." << std::endl;
        auto topics = tok.get_topics();
        if (topics && !topics->empty()) {
            std::cout << "\tSuccessfully subscribed to: " << (*topics)[0] << std::endl;
        }
    }

    void connected(const std::string& cause) override {
        std::cout << "Connected: " << cause << std::endl;
        try {
            cli_.subscribe("t2am/register/response", 1); // QoS 1
            std::cout << "Subscribed to t2am/register/response" << std::endl;
        } catch (const mqtt::exception& exc) {
            std::cerr << "Subscription failed: " << exc.what() << std::endl;
        }
    }

    void connection_lost(const std::string& cause) override {
        std::cerr << "Connection lost: " << cause << std::endl;
        if (!cause.empty()) {
            std::cerr << "Cause: " << cause << std::endl;
        }
    }

    void message_arrived(mqtt::const_message_ptr msg) override {
        std::cout << "Message arrived: " << msg->get_topic() << std::endl;
        std::cout << "\tPayload: '" << msg->to_string() << "'" << std::endl;
    }

public:
    mqtt_client() : cli_(SERVER_ADDRESS, CLIENT_ID) {
        cli_.set_callback(*this);
    }

    void start() {
        mqtt::ssl_options sslopts;
        sslopts.set_trust_store(CA_CERTS_PATH);  // CA 인증서 설정
        sslopts.set_verify(true);  // 서버 인증서 검증 활성화
        sslopts.set_ssl_version(MQTT_SSL_VERSION_TLS_1_2);  // TLS 1.2 버전 명시

        mqtt::connect_options conn_opts;
        conn_opts.set_keep_alive_interval(20);
        conn_opts.set_clean_session(true);
        conn_opts.set_automatic_reconnect(1, 30); // 최소 및 최대 재연결 간격
        conn_opts.set_ssl(sslopts);
        conn_opts.set_user_name(USERNAME);  // 사용자 이름 설정
        conn_opts.set_password(PASSWORD);  // 비밀번호 설정

        try {
            cli_.connect(conn_opts);
        } catch (const mqtt::exception& exc) {
            std::cerr << "Connection failed: " << exc.what() << std::endl;
        }
    }

    void send_registration() {
        whereable::t2am::VehicleRegistration message;
        message.mutable_header()->set_version(240729001); // Version format: 240729.001
        message.mutable_header()->set_class_info(0x00010002); // Message class: 1 (request), Sender class: 2 (client)
        message.mutable_header()->set_timestamp(std::chrono::system_clock::now().time_since_epoch().count());

        std::string payload;
        message.SerializeToString(&payload);
        mqtt::message_ptr pubmsg = mqtt::make_message(TOPIC, payload, 1, false); // QoS 1, Retain false
        cli_.publish(pubmsg);
    }
};

int main() {
    mqtt_client client;
    client.start();
    std::this_thread::sleep_for(std::chrono::seconds(2)); // Wait for connection setup
    client.send_registration();
    while (true) {
        std::this_thread::sleep_for(std::chrono::seconds(1)); // Prevent high CPU usage
    }
    return 0;
}
