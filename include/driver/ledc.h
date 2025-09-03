#ifndef DRIVER_LEDC_H
#define DRIVER_LEDC_H

#include <stdio.h>
#include <stdint.h>

// ===== Timer config struct =====
typedef struct {
    int speed_mode;
    int duty_resolution;
    int timer_num;
    int freq_hz;
    int clk_cfg;
} ledc_timer_config_t;

// ===== Channel config struct =====
typedef struct {
    int gpio_num;
    int speed_mode;
    int channel;
    int intr_type;
    int timer_sel;
    int duty;
    int hpoint;
} ledc_channel_config_t;

// ===== Info struct (used in rgb_led.c) =====
typedef struct {
    int channel;
    int gpio;
    int mode;
    int timer_index;
} ledc_info_t;

// ===== Constants =====
#define LEDC_CHANNEL_0 0
#define LEDC_CHANNEL_1 1
#define LEDC_CHANNEL_2 2
#define LEDC_HIGH_SPEED_MODE 0
#define LEDC_TIMER_0 0
#define LEDC_TIMER_8_BIT 8
#define LEDC_INTR_DISABLE 0

// ===== Stub functions =====
static inline int ledc_timer_config(const ledc_timer_config_t *config) {
    printf("[SIM] LEDC timer configured\n");
    return 0;
}
static inline int ledc_channel_config(const ledc_channel_config_t *config) {
    printf("[SIM] LEDC channel %d on GPIO %d\n", config->channel, config->gpio_num);
    return 0;
}
static inline int ledc_set_duty(int speed_mode, int channel, int duty) {
    printf("[SIM] Duty %d on channel %d\n", duty, channel);
    return 0;
}
static inline int ledc_update_duty(int speed_mode, int channel) {
    printf("[SIM] Duty updated on channel %d\n", channel);
    return 0;
}

#endif // DRIVER_LEDC_H
