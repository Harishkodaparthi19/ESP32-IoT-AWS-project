#ifndef LWIP_NETDB_H
#define LWIP_NETDB_H

#include <stdio.h>
#include <stdint.h>

// Stub addrinfo struct
struct addrinfo {
    int ai_family;
    int ai_socktype;
    int ai_protocol;
    size_t ai_addrlen;
    struct sockaddr *ai_addr;
    char *ai_canonname;
    struct addrinfo *ai_next;
};

// Stub functions
static inline int getaddrinfo(const char *node, const char *service,
                              const struct addrinfo *hints,
                              struct addrinfo **res) {
    printf("[SIM] getaddrinfo called for %s:%s (stub)\n", node, service);
    *res = NULL;
    return 0;
}

static inline void freeaddrinfo(struct addrinfo *res) {
    printf("[SIM] freeaddrinfo called (stub)\n");
}

#endif // LWIP_NETDB_H
