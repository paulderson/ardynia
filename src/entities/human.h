#ifndef human_h
#define human_h

#include "../entity.h"
#include "../entityTypes.h"

struct Human {
    static EntityType update(Entity* me, Entity& player, uint8_t frame);
};

#endif
