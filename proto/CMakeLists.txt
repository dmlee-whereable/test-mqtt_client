# 현재 디렉토리에 있는 모든 .proto 파일 찾기
file(GLOB PROTO_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.proto)

# Proto 파일을 C++ 코드로 컴파일
protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS ${PROTO_FILES})

# 생성된 소스 파일을 라이브러리로 추가
add_library(vehicle_registration_proto ${PROTO_SRCS} ${PROTO_HDRS})

# Protobuf 라이브러리 링크
target_link_libraries(vehicle_registration_proto ${Protobuf_LIBRARIES})

# 포함 디렉토리 지정
target_include_directories(vehicle_registration_proto PUBLIC ${CMAKE_CURRENT_BINARY_DIR})
