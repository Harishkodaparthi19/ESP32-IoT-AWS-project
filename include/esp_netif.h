#ifndef ESP_NETIF_H
#define ESP_NETIF_H

#include <stdio.h>

// Stub type for network interface
typedef struct {
    int dummy;
} esp_netif_t;

// Stub init function
static inline void esp_netif_init() {
    printf("[SIM] esp_netif initialized (stub)\n");
}

// Stub create default WiFi station
static inline esp_netif_t* esp_netif_create_default_wifi_sta() {
    printf("[SIM] Created default WiFi STA (stub)\n");
    return NULL;
}

// Stub create default WiFi access point
static inline esp_netif_t* esp_netif_create_default_wifi_ap() {
    printf("[SIM] Created default WiFi AP (stub)\n");
    return NULL;
}

#endif // ESP_NETIF_H
