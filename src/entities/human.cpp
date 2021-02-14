#include "human.h"
#include "../util.h"
#include "../state.h"

// Stolen from blob

EntityType Human::update(Entity* me, Entity& player, uint8_t frame) {
    if (frame == random(0, 61)) {
        me->moveTowardsOtherEntity(player, 1);
        me->currentFrame = 1;
        me->duration = 10;
    }

    if (me->duration > 0) {
        me->duration -= 1;
        if (me->duration == 0) {
            me->currentFrame = 0;
        }
    }

    return UNSET;
}

