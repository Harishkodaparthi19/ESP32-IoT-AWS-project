#ifndef SYS_SOCKET_H
#define SYS_SOCKET_H

#include <stdio.h>
#include <stdint.h>

// Define dummy types
typedef int SOCKET;
typedef int socklen_t;

// Stub struct for sockaddr
struct sockaddr {
    uint16_t sa_family;
    char sa_data[14];
};

// Stub functions
static inline SOCKET socket(int domain, int type, int protocol) {
    printf("[SIM] socket created (stub)\n");
    return 0;
}

static inline int connect(SOCKET sock, const struct sockaddr *addr, socklen_t len) {
    printf("[SIM] socket connected (stub)\n");
    return 0;
}

static inline int send(SOCKET sock, const void *buf, size_t len, int flags) {
    printf("[SIM] socket send %zu bytes (stub)\n", len);
    return (int)len;
}

static inline int recv(SOCKET sock, void *buf, size_t len, int flags) {
    printf("[SIM] socket recv (stub)\n");
    return 0;
}

static inline int close(SOCKET sock) {
    printf("[SIM] socket closed (stub)\n");
    return 0;
}

#endif // SYS_SOCKET_H
