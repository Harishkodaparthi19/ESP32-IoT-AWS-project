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

## ⚙️ Build Instructions

### 🔹 ESP32 Hardware Build (ESP-IDF)

1. Install [ESP-IDF](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/).  
2. Set the target:
   ```bash
   idf.py set-target esp32

idf.py build flash monitor
