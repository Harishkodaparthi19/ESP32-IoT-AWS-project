#ifndef ESP_WIFI_TYPES_H
#define ESP_WIFI_TYPES_H

typedef enum {
    WIFI_MODE_NULL = 0,
    WIFI_MODE_STA,
    WIFI_MODE_AP,
    WIFI_MODE_APSTA
} wifi_mode_t;

typedef struct {
    char ssid[32];
    char password[64];
} wifi_config_t;

#endif // ESP_WIFI_TYPES_H
