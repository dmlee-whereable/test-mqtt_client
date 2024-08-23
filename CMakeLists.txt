cmake_minimum_required(VERSION 3.5)
project(VehicleRegistrationProject VERSION 1.0 DESCRIPTION "Vehicle Registration System")

# 설정: C++11을 사용하고자 함
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Google Protocol Buffers 찾기
find_package(Protobuf REQUIRED)

# Paho MQTT C++ 라이브러리 찾기
find_package(PahoMqttCpp REQUIRED)

# 시스템의 기본 include 경로 추가
include_directories(/usr/include)

# proto 디렉토리에 있는 .proto 파일을 처리하기 위해 추가
add_subdirectory(proto)

# client.cpp 파일 컴파일
add_executable(client client.cpp)

# Proto 파일에서 생성된 소스 파일과 Paho MQTT 라이브러리를 client 실행 파일에 링크
target_link_libraries(client PRIVATE ${Protobuf_LIBRARIES} vehicle_registration_proto PahoMqttCpp::paho-mqttpp3)

# include 디렉토리 추가 (protobuf 생성 파일 포함)
target_include_directories(client PRIVATE ${Protobuf_INCLUDE_DIRS} ${CMAKE_CURRENT_BINARY_DIR})
