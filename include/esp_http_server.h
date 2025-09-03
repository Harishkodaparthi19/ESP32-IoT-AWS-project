#ifndef ESP_HTTP_SERVER_H
#define ESP_HTTP_SERVER_H

#include <stdio.h>
#include "esp_err.h"

// Dummy HTTP server handle
typedef void* httpd_handle_t;

// Dummy server config struct
typedef struct {
    int task_priority;
    int stack_size;
    int server_port;
} httpd_config_t;

// Dummy request/response types
typedef struct {
    int method;
    const char *uri;
} httpd_req_t;

typedef esp_err_t (*httpd_uri_func_t)(httpd_req_t *req);

typedef struct {
    const char *uri;
    int method;
    httpd_uri_func_t handler;
    void *user_ctx;
} httpd_uri_t;

// Stub functions
static inline esp_err_t httpd_start(httpd_handle_t *handle, const httpd_config_t *config) {
    printf("[SIM] HTTP server started on port %d (stub)\n", config->server_port);
    *handle = (httpd_handle_t)1; // fake handle
    return ESP_OK;
}

static inline esp_err_t httpd_stop(httpd_handle_t handle) {
    printf("[SIM] HTTP server stopped (stub)\n");
    return ESP_OK;
}

static inline esp_err_t httpd_register_uri_handler(httpd_handle_t handle, const httpd_uri_t *uri_handler) {
    printf("[SIM] Registered URI handler for %s (stub)\n", uri_handler->uri);
    return ESP_OK;
}

static inline esp_err_t httpd_resp_send(httpd_req_t *req, const char *buf, int buf_len) {
    printf("[SIM] HTTP response sent: %.*s\n", buf_len, buf);
    return ESP_OK;
}

#endif // ESP_HTTP_SERVER_H
