#ifndef FREERTOS_EVENT_GROUPS_H
#define FREERTOS_EVENT_GROUPS_H
#define BIT0 (1 << 0)
#define BIT1 (1 << 1)
#define BIT2 (1 << 2)
#define BIT3 (1 << 3)
#include <stdint.h>
#include <stdio.h>

// Dummy event group handle type
typedef void* EventGroupHandle_t;
typedef uint32_t EventBits_t;

// Stub functions
static inline EventGroupHandle_t xEventGroupCreate(void) {
    printf("[SIM] Event group created (stub)\n");
    return NULL;
}

static inline EventBits_t xEventGroupWaitBits(EventGroupHandle_t group,
                                              EventBits_t bitsToWaitFor,
                                              int clearOnExit,
                                              int waitForAllBits,
                                              int ticksToWait) {
    printf("[SIM] Event group wait bits (stub)\n");
    return bitsToWaitFor;
}

static inline void xEventGroupSetBits(EventGroupHandle_t group, EventBits_t bits) {
    printf("[SIM] Event group set bits (stub)\n");
}

#endif // FREERTOS_EVENT_GROUPS_H
