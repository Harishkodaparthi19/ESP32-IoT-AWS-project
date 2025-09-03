#ifndef NVS_FLASH_H
#define NVS_FLASH_H

#include "esp_err.h"

#define ESP_ERR_NVS_NO_FREE_PAGES   -100
#define ESP_ERR_NVS_NEW_VERSION_FOUND -101

static inline esp_err_t nvs_flash_init() {
    printf("[SIM] NVS flash initialized (stub)\n");
    return ESP_OK;
}

static inline esp_err_t nvs_flash_erase() {
    printf("[SIM] NVS flash erased (stub)\n");
    return ESP_OK;
}

#define ESP_ERROR_CHECK(x) do { \
    esp_err_t err = (x); \
    if (err != ESP_OK) { \
        printf("[ERROR] ESP_ERROR_CHECK failed: %d\n", err); \
    } \
} while(0)

#endif
