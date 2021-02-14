#ifndef ghost_h
#define ghost_h

#include "../entity.h"
#include "../entityTypes.h"

struct Ghost {
    static EntityType update(Entity* me, Entity& player, uint8_t frame);
};

#endif

