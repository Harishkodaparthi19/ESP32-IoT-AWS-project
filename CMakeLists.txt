cmake_minimum_required(VERSION 3.10)

# Project name
project(esp32_aws_iot_simulation C)

# Use C11 standard
set(CMAKE_C_STANDARD 11)

# Include header files
include_directories(include)

# Collect all source files
set(SOURCES
    src/main.c
    src/rgb_led.c
    src/wifi_app.c
    src/http_server.c
    src/aws_iot.c
    src/dht22.c
    src/sntp_time_sync.c
    src/wifi_reset_button.c
)

# Create executable
add_executable(esp32_aws_iot ${SOURCES})

# Link pthread (for multithreading on Linux)
target_link_libraries(esp32_aws_iot pthread)
