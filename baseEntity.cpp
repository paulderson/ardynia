#include "baseEntity.h"

const uint8_t BOUNCE_AMOUNT = 8;

bool BaseEntity::overlaps(BaseEntity* other) {
    return !(
        other->x                 >= x + width  ||
        other->x + other->width  <= x          ||
        other->y                 >= y + height ||
        other->y + other->height <= y
    );
}

void BaseEntity::bounceBack(void) {
    int16_t nx, ny;

    switch (dir) {
        case UP:
            nx = x;
            ny = y + BOUNCE_AMOUNT;
            break;
        case DOWN:
            nx = x;
            ny = y - BOUNCE_AMOUNT;
            break;
        case LEFT:
            nx = x + BOUNCE_AMOUNT;
            ny = y;
            break;
        case RIGHT:
            nx = x - BOUNCE_AMOUNT;
            ny = y;
            break;
    }

    Direction curDir = dir;
    moveTo(nx, ny);
    dir = curDir;
}

