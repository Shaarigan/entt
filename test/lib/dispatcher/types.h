#ifndef ENTT_LIB_DISPATCHER_TYPES_H
#define ENTT_LIB_DISPATCHER_TYPES_H

#include <entt/lib/attribute.h>

struct ENTT_API message {
    int payload;
};

struct ENTT_API event: message {};

#endif // ENTT_LIB_DISPATCHER_TYPES_H
