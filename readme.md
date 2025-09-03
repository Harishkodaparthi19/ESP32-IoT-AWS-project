# ESP32 IoT AWS Project

This project demonstrates an **ESP32-based IoT application** with WiFi management, RGB LED status indication, and groundwork for AWS IoT Core integration.  
It supports running on **real ESP32 hardware** via ESP-IDF, as well as compiling in a **simulation mode** on a PC using stubbed headers.

---

## 📌 Features

- **WiFi Application Manager**
  - Dual-mode (AP + STA)
  - Connection retries and event handling
  - Stores WiFi credentials in NVS (Non-Volatile Storage)

- **RGB LED Indicators**
  - Purple → WiFi application started
  - Green → HTTP server started
  - Cyan → WiFi connected

- **HTTP Server (stubbed)**
  - Placeholder for web-based configuration

- **Simulation Mode**
  - Stub headers for ESP-IDF (`esp_wifi.h`, `esp_netif.h`, `driver/ledc.h`, etc.)
  - Allows building and testing logic on a PC without ESP32 hardware

---

## 📂 Project Structure

ESP32-IoT-AWS-project/
│
├── src/ # Application source files
│ ├── main.c
│ ├── rgb_led.c
│ └── wifi_app.c
│
├── include/ # Header files + stubs for simulation
│ ├── rgb_led.h
│ ├── wifi_app.h
│ ├── esp_wifi.h
│ ├── esp_wifi_types.h
│ ├── esp_netif.h
│ ├── driver/
│ │ └── ledc.h
│
├── web/ # Web server assets
├── build/ # CMake build output (ignored in Git)
├── output/ # ESP-IDF build output (ignored in Git)
├── CMakeLists.txt # CMake build definition
├── .gitignore # Ignore build artifacts
└── README.md # This file

---

## ⚙️ Build Instructions

### 🔹 ESP32 Hardware Build (ESP-IDF)

1. Install [ESP-IDF](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/).  
2. Set the target:
   ```bash
   idf.py set-target esp32

idf.py build flash monitor
