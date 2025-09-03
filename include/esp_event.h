#ifndef ESP_EVENT_H
#define ESP_EVENT_H

#include <stdio.h>

typedef const char* esp_event_base_t;

static inline void esp_event_loop_create_default() {
    printf("[SIM] esp_event_loop_create_default (stub)\n");
}

static inline void esp_event_handler_register(esp_event_base_t base, int32_t event_id,
                                              void (*event_handler)(void*, esp_event_base_t, int32_t, void*),
                                              void* arg) {
    printf("[SIM] esp_event_handler_register for base %s id %d (stub)\n", base, event_id);
}

#endif // ESP_EVENT_H
