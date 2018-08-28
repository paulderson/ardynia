#ifndef entityTemplates_h
#define entityTemplates_h

#include <Arduino.h>
#include "entityTypes.h"
#include "entity.h"
#include "bitmaps.h"
#include "blob.h"
#include "sword.h"
#include "boomerang.h"

const uint8_t PROGMEM entityProperties[] = {
    // 0 SWORD
    16,           // width
    16,           // height
    DOWN,         // direction
    0,            // health
    1,            // damage
    20,           // duration

    // 1 BLOB
    8,
    8,
    DOWN,
    2, // health
    1, // damage
    0, // duration

    // 2 OVERWORLD_DOOR
    16,
    16,
    DOWN,
    0,
    0,
    0,

    // 3, BUMPER
    0,
    0,
    DOWN,
    0,
    0,
    0,

    // 4, BOMB
    16,
    16,
    DOWN,
    0,
    1,
    120,

    // 5, BOOMERANG
    16,
    16,
    DOWN,
    0,
    0,
    20,

    // 6, CANDLE
    0,
    0,
    DOWN,
    0,
    0,
    0,

    // 7, CHEST
    0,
    0,
    DOWN,
    0,
    0,
    0,

    // 8, KEY
    8,
    8,
    DOWN,
    0,
    0,
    0,

    // 9, LOCK
    0,
    0,
    DOWN,
    0,
    0,
    0,

    // 10, BUSH
    0,
    0,
    DOWN,
    0,
    0,
    0,

    // 11, ENEMY2
    0,
    0,
    DOWN,
    0,
    0,
    0,

    // 12, ENEMY3
    0,
    0,
    DOWN,
    0,
    0,
    0,

    // 13, ENEMY4
    0,
    0,
    DOWN,
    0,
    0,
    0,

    // 14, ENEMY5
    0,
    0,
    DOWN,
    0,
    0,
    0,

    // 15, ENEMY6
    0,
    0,
    DOWN,
    0,
    0,
    0,

    // 16, BOSS1
    0,
    0,
    DOWN,
    0,
    0,
    0,

    // 17, BOSS2
    0,
    0,
    DOWN,
    0,
    0,
    0,

    // 18, BOSS3
    0,
    0,
    DOWN,
    0,
    0,
    0,

    // 19, HEART
    8,
    8,
    DOWN,
    0,
    0,
    180,

    // 20, HEART_CONTAINER
    0,
    0,
    DOWN,
    0,
    0,
    0,
};

const void* const PROGMEM entityPointers[] = {
    // 0 SWORD
    sword_tiles,        // tiles
    sword_mask,         // masks
    Sword::spawn,       // spawn
    Sword::update,      // update
    NULL,               // render
    NULL,               // onCollide

    // 1 BLOB
    blob_tiles,
    blob_mask,
    NULL,
    Blob::update,
    NULL,
    Blob::onCollide,

    // 2 OVERWORLD_DOOR
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,

    // 3 BUMPER
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    
    // 4 BOMB
    itemIcons_tiles,
    itemIcons_mask,
    NULL,
    NULL,
    NULL,
    NULL,

    // 5 BOOMERANG
    itemIcons_tiles,
    itemIcons_mask,
    Boomerang::spawn,
    Boomerang::update,
    NULL,
    Boomerang::onCollide,

    // 6 CANDLE
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,

    // 7 CHEST
    chest_tiles,
    chest_mask,
    NULL,
    NULL,
    NULL,
    NULL,

    // 8 KEY
    key_tiles,
    key_mask,
    NULL,
    NULL,
    NULL,
    NULL,

    // 9 LOCK
    lock_tiles,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,

    // 10 BUSH
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,

    // 11 ENEMY2
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,

    // 12 ENEMY3
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,

    // 13 ENEMY4
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,

    // 15 ENEMY5
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,

    // 16 ENEMY6
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,

    // 17 BOSS1
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,

    // 18 BOSS2
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,

    // 19 BOSS3
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,

    // 19 HEART
    heart_tiles,
    heart_mask,
    NULL,
    NULL,
    NULL,
    NULL,

    // 20 HEART_CONTAINER
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
};

void loadEntity(Entity& entity, EntityType entityType);

#endif

