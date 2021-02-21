#include "lock.h"
#include "../state.h"
#include "../sfx.h"
#include "player.h"

void triggerLock(Entity* me) {
    if (me->type == LOCK) {
        State::setCurrentRoomTriggered();
    }
    me->type = UNSET;
    Sfx::play(Sfx::pickUpItem);
}

EntityType Lock::onCollide(Entity* me, Entity& other, Player& player) {
    if (other.type == PLAYER) {
        if (me->type == LOCK && State::gameState.numKeys > 0) {
            State::gameState.numKeys -= 1;
            triggerLock(me);
        } else if (me->type == BOSS_LOCK && State::gameState.bossKeys > 0) {
            triggerLock(me);
        }
    }

    return UNSET;
}
