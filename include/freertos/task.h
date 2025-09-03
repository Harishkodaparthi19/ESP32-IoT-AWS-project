#ifndef FREERTOS_TASK_H
#define FREERTOS_TASK_H

#include <stdint.h>
#include <stdio.h>

// Dummy task handle type
typedef void* TaskHandle_t;

typedef void* QueueHandle_t;

// Stub for task creation
static inline void xTaskCreate(void (*task)(void*),
                               const char * const name,
                               uint32_t stackDepth,
                               void *params,
                               uint32_t priority,
                               TaskHandle_t *handle) {
    printf("[SIM] Task '%s' created (stub)\n", name);
}

// Stub for task delay
static inline void vTaskDelay(int ms) {
    printf("[SIM] Task delay %d ms (stub)\n", ms);
}

// Stub for task delete
static inline void vTaskDelete(TaskHandle_t handle) {
    printf("[SIM] Task deleted (stub)\n");
}

#endif // FREERTOS_TASK_H
