#ifndef office4_h
#define office4_h

#include "emptyRoom.h"
#include "entityTypes.h"
#include "entityExpressions.h"


const uint8_t PROGMEM office4_map[542] = {
    // array length (16 bit, little endian), map width, map height (in rooms)
    30, 2, 7, 6,
    // room indices (16 bit, little endian), 84 bytes
    // room 0, index 0
    0, 0,
    // room 1, index 11
    11, 0,
    // room 2, index 24
    24, 0,
    // room 3, index 35
    35, 0,
    // room 4, index 47
    47, 0,
    // room 5, index 57
    57, 0,
    // room 6, index 68
    68, 0,
    // room 7, index 71
    71, 0,
    // room 8, index 82
    82, 0,
    // room 9, index 95
    95, 0,
    // room 10, index 108
    108, 0,
    // room 11, index 120
    120, 0,
    // room 12, index 129
    129, 0,
    // room 13, index 132
    132, 0,
    // room 14, index 135
    135, 0,
    // room 15, index 147
    147, 0,
    // room 16, index 160
    160, 0,
    // room 17, index 174
    174, 0,
    // room 18, index 186
    186, 0,
    // room 19, index 198
    198, 0,
    // room 20, index 211
    211, 0,
    // room 21, index 224
    224, 0,
    // room 22, index 235
    235, 0,
    // room 23, index 246
    246, 0,
    // room 24, index 259
    3, 1,
    // room 25, index 267
    11, 1,
    // room 26, index 273
    17, 1,
    // room 27, index 283
    27, 1,
    // room 28, index 295
    39, 1,
    // room 29, index 307
    51, 1,
    // room 30, index 320
    64, 1,
    // room 31, index 334
    78, 1,
    // room 32, index 343
    87, 1,
    // room 33, index 354
    98, 1,
    // room 34, index 366
    110, 1,
    // room 35, index 374
    118, 1,
    // room 36, index 386
    130, 1,
    // room 37, index 400
    144, 1,
    // room 38, index 414
    158, 1,
    // room 39, index 424
    168, 1,
    // room 40, index 434
    178, 1,
    // room 41, index 446
    190, 1,

    // compressed room data, 454 bytes
    0x1f, 0x2b, 0x20, 0x55, 0x50, 0x2, 0x5, 0x55, 0x0, 0x2f, 0x20, 0xbb, 0x4b, 0xbb, 0x9f, 0x20, 0xc0, 0x4, 0x0, 0xc, 0x0, 0x43, 0x33, 0xa0, 0x1f, 0x2b, 0x20, 0xf0, 0x50, 0x2f, 0x20, 0x83, 0x33, 0x3, 0x30, 0xf2, 0xb9, 0x5, 0x55, 0x7, 0xc0, 0x55, 0x50, 0x7c, 0xf, 0x13, 0xa0, 0x1f, 0x1b, 0x92, 0xf1, 0xc, 0x2f, 0x20, 0x80, 0xf0, 0x3a, 0x1b, 0xb0, 0xbb, 0x92, 0xf1, 0xc, 0xf2, 0xc, 0x8f, 0x13, 0xa0, 0xff, 0xf, 0x50, 0x2f, 0x20, 0x20, 0x55, 0x50, 0x2, 0x5, 0x55, 0x0, 0x2f, 0x20, 0x0, 0x1b, 0xbb, 0x90, 0x2, 0x0, 0xc, 0xf2, 0xc, 0x0, 0x83, 0x33, 0xa0, 0x1b, 0xbb, 0xb, 0x92, 0xf0, 0x50, 0x2, 0xf0, 0x50, 0xc8, 0x33, 0x30, 0x3a, 0x2f, 0x1b, 0x90, 0x5, 0x50, 0x5c, 0x2f, 0x10, 0xc2, 0xf, 0x3, 0xa0, 0x40, 0xf2, 0x40, 0x47, 0xf0, 0x40, 0x0, 0xf6, 0x40, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0x20, 0x55, 0x50, 0x2, 0x5, 0x55, 0x0, 0x2f, 0x20, 0x8f, 0x13, 0x40, 0x0, 0x1b, 0xbb, 0x9f, 0x20, 0xc0, 0x2, 0x0, 0xc, 0x40, 0x83, 0x33, 0xa0, 0x1b, 0xbb, 0x4, 0x92, 0x55, 0xf0, 0x2, 0x55, 0x0, 0x5c, 0x83, 0x33, 0x3, 0xa0, 0x20, 0xf1, 0x40, 0x4, 0x74, 0x44, 0x20, 0x0, 0x44, 0x42, 0xf, 0x14, 0x1f, 0x1b, 0x92, 0xf0, 0x5, 0xc2, 0xf0, 0x5, 0xc8, 0x33, 0x30, 0xc, 0x1f, 0x2b, 0x25, 0x50, 0x55, 0x2, 0x55, 0x5, 0x50, 0x20, 0x0, 0x55, 0x0, 0xb1, 0x9b, 0xbb, 0x9f, 0x0, 0x50, 0xcf, 0x0, 0x50, 0xc0, 0x55, 0x0, 0xc, 0x4f, 0x1b, 0x42, 0xf1, 0xc, 0x20, 0x55, 0x0, 0xc2, 0xf1, 0xc, 0x40, 0xf1, 0x42, 0xf, 0x14, 0x20, 0x0, 0x64, 0x42, 0xf, 0x14, 0x1b, 0xbb, 0xb, 0x92, 0x0, 0x5, 0x5c, 0x25, 0x50, 0x0, 0xc8, 0xf2, 0x30, 0x20, 0xf1, 0x42, 0xf2, 0x2, 0xf2, 0xf, 0x33, 0xf0, 0x40, 0x44, 0xfa, 0xf, 0x33, 0x20, 0x0, 0x55, 0xf1, 0x5, 0x5f, 0x10, 0x55, 0xf, 0x33, 0x5, 0x50, 0x0, 0xc0, 0x55, 0x5, 0x5c, 0xf0, 0x5, 0x5c, 0xf2, 0x3a, 0x2f, 0x10, 0xc2, 0x5, 0x50, 0xc, 0x20, 0x55, 0x0, 0x2, 0xf2, 0x0, 0x20, 0x44, 0x0, 0x2, 0x0, 0x74, 0x33, 0x0, 0xf1, 0xb3, 0x3, 0x30, 0x33, 0x44, 0xbb, 0x19, 0xb4, 0x45, 0x0, 0x9, 0xbb, 0xb0, 0x80, 0xa0, 0x33, 0x30, 0x0, 0xf3, 0xb0, 0x1b, 0x90, 0x5, 0xf1, 0x5, 0xf4, 0x0, 0xf2, 0xb9, 0x5, 0x0, 0x5, 0xc0, 0x5, 0x0, 0x5c, 0xf2, 0xc, 0x1f, 0xb, 0x6b, 0x2f, 0x0, 0x60, 0x2f, 0x0, 0x60, 0x2f, 0x0, 0x60, 0xf2, 0xb9, 0xf2, 0xc, 0xf2, 0xc, 0xf2, 0xc, 0x2f, 0x10, 0xc2, 0x5, 0x50, 0xc, 0x20, 0x55, 0x0, 0xc4, 0xf1, 0x3a, 0x20, 0xb9, 0xb, 0x92, 0x0, 0xc0, 0xc, 0x20, 0xc, 0x0, 0xc8, 0x33, 0xa3, 0x3a, 0x2b, 0x94, 0x0, 0x2, 0xc, 0x20, 0x50, 0x20, 0xc2, 0x5, 0x8, 0x3a, 0x83, 0x33, 0xf4, 0x5, 0x0, 0x50, 0xc0, 0x50, 0x5, 0xc, 0xf2, 0x37, 0xf2, 0xc, 0x5, 0x55, 0x0, 0xcf, 0x20, 0xcf, 0x17, 0x3a, 0x2f, 0x0, 0x60, 0x2f, 0x0, 0x60, 0x2f, 0x0, 0x60, 0xf1, 0x36, 0x30, 0xf2, 0xc, 0xf2, 0xc, 0xf2, 0xc, 0xf2, 0x3a
};

const uint8_t PROGMEM office4_room0_0[] = {
    5, // number of entities

    // entity 0
    miscAndEntityType(0, POT),
    xy(16, 48),

    // entity 1
    miscAndEntityType(HEART, POT),
    xy(24, 8),

    // entity 2
    miscAndEntityType(0, POT),
    xy(64, 48),

    // entity 3
    miscAndEntityType(HEART, POT),
    xy(88, 48),

    // entity 4
    miscAndEntityType(0, POT),
    xy(88, 28),
};



const uint8_t PROGMEM office4_room0_5[] = {
    5, // number of entities

    // entity 0
    miscAndEntityType(0, SKELETON),
    xy(16, 8),

    // entity 1
    miscAndEntityType(0, SKELETON),
    xy(88, 16),

    // entity 2
    miscAndEntityType(LAST_ENEMY_HAS_KEY, SKELETON),
    xy(16, 28),

    // entity 3
    miscAndEntityType(0, SKELETON),
    xy(64, 12),

    // entity 4
    miscAndEntityType(0, SKELETON),
    xy(72, 40),
};



const uint8_t PROGMEM office4_room1_0[] = {
    9, // number of entities

    // entity 0
    miscAndEntityType(KEY, CHEST),
    xy(96, 16),

    // entity 1
    miscAndEntityType(VERTICAL, TRIGGER_DOOR),
    xy(32, 16),

    // entity 2
    miscAndEntityType(SLAM_SHUT, BAT),
    xy(72, 16),

    // entity 3
    miscAndEntityType(SLAM_SHUT, BAT),
    xy(56, 16),

    // entity 4
    miscAndEntityType(SLAM_SHUT, BAT),
    xy(56, 52),

    // entity 5
    miscAndEntityType(SLAM_SHUT, BAT),
    xy(96, 44),

    // entity 6
    miscAndEntityType(SLAM_SHUT, BAT),
    xy(88, 36),

    // entity 7
    miscAndEntityType(SLAM_SHUT, BAT),
    xy(72, 44),

    // entity 8
    miscAndEntityType(SLAM_SHUT, BAT),
    xy(64, 20),
};



const uint8_t PROGMEM office4_room1_1[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(0, SNAKE),
    xy(96, 16),
};



const uint8_t PROGMEM office4_room1_2[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(HEART, CHEST),
    xy(40, 16),

    // entity 1
    miscAndEntityType(HEART, CHEST),
    xy(96, 20),

    // entity 2
    miscAndEntityType(HEART, CHEST),
    xy(64, 12),
};



const uint8_t PROGMEM office4_room1_3[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(2, TELEPORTER),
    xy(64, 44),
};



const uint8_t PROGMEM office4_room1_4[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(1, TELEPORTER),
    xy(56, 24),

    // entity 1
    miscAndEntityType(0, LOCK),
    xy(32, 16),
};



const uint8_t PROGMEM office4_room1_5[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(0, SNAKE),
    xy(80, 44),

    // entity 1
    miscAndEntityType(0, SNAKE),
    xy(40, 36),
};



const uint8_t PROGMEM office4_room2_0[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(0, SNAKE),
    xy(48, 40),

    // entity 1
    miscAndEntityType(0, SNAKE),
    xy(16, 44),
};



const uint8_t PROGMEM office4_room2_3[] = {
    4, // number of entities

    // entity 0
    miscAndEntityType(THREE_SWITCHES_ONE_BOOMERANG, SWITCH),
    xy(16, 16),

    // entity 1
    miscAndEntityType(0, SWITCH),
    xy(40, 20),

    // entity 2
    miscAndEntityType(0, SWITCH),
    xy(40, 28),

    // entity 3
    miscAndEntityType(0, SWITCH),
    xy(56, 36),
};



const uint8_t PROGMEM office4_room2_5[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(0, BLOB),
    xy(24, 48),
};



const uint8_t PROGMEM office4_room3_0[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(LAST_ENEMY_HAS_HEART_CONTAINER, SNAKE),
    xy(16, 16),

    // entity 1
    miscAndEntityType(0, BLOB),
    xy(72, 20),

    // entity 2
    miscAndEntityType(0, BAT),
    xy(72, 44),
};



const uint8_t PROGMEM office4_room3_2[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(3, TELEPORTER),
    xy(56, 28),
};



const uint8_t PROGMEM office4_room4_0[] = {
    4, // number of entities

    // entity 0
    miscAndEntityType(LAST_ENEMY_HAS_BOSS_KEY, GIANT_BAT),
    xy(80, 24),

    // entity 1
    miscAndEntityType(0, TRIGGER_DOOR),
    xy(16, 56),

    // entity 2
    miscAndEntityType(SLAM_SHUT, BAT),
    xy(56, 48),

    // entity 3
    miscAndEntityType(VERTICAL, TRIGGER_DOOR),
    xy(104, 32),
};



const uint8_t PROGMEM office4_room4_1[] = {
    4, // number of entities

    // entity 0
    miscAndEntityType(0, TELEPORTER),
    xy(56, 28),

    // entity 1
    miscAndEntityType(LAST_TORCH_OPENS_DOORS, TORCH),
    xy(16, 40),

    // entity 2
    miscAndEntityType(0, TRIGGER_DOOR),
    xy(16, 0),

    // entity 3
    miscAndEntityType(LAST_TORCH_OPENS_DOORS, TORCH),
    xy(56, 44),
};



const uint8_t PROGMEM office4_room4_2[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(SWORD, CHEST),
    xy(16, 20),
};



const uint8_t PROGMEM office4_room4_3[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(0, LOCK),
    xy(64, 0),
};



const uint8_t PROGMEM office4_room4_4[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(BOOMERANG, CHEST),
    xy(88, 8),
};



const uint8_t PROGMEM office4_room4_5[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(0, SECRET_WALL),
    xy(96, 52),
};



const uint8_t PROGMEM office4_room5_0[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(HEART, CHEST),
    xy(40, 24),

    // entity 1
    miscAndEntityType(4, TELEPORTER),
    xy(48, 0),
};



const uint8_t PROGMEM office4_room5_4[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(OPEN_CHESTS_IN_RIGHT_ORDER, SUNKEN_BRIDGE),
    xy(88, 28),

    // entity 1
    miscAndEntityType(0, BAT),
    xy(56, 20),

    // entity 2
    miscAndEntityType(0, SWITCH),
    xy(48, 28),
};



const uint8_t PROGMEM office4_room6_0[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(0, SECRET_WALL),
    xy(32, 32),

    // entity 1
    miscAndEntityType(0, SUNKEN_BRIDGE),
    xy(64, 48),

    // entity 2
    miscAndEntityType(0, SECRET_WALL),
    xy(80, 24),
};



const uint8_t PROGMEM office4_room6_1[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(0, SECRET_WALL),
    xy(72, 36),
};



const uint8_t PROGMEM office4_room6_4[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(RING, CHEST),
    xy(72, 24),
};

const uint8_t PROGMEM office4_teleporters[] = {
    // dest x, dest y (in rooms)
    4, 5,
    4, 2,
    0, 1,
    4, 3,
    7, 0,
};





const uint8_t * const PROGMEM office4_row0[7] = {
    office4_room0_0,
    office4_room1_0,
    office4_room2_0,
    office4_room3_0,
    office4_room4_0,
    office4_room5_0,
    office4_room6_0
};


const uint8_t * const PROGMEM office4_row1[7] = {
    empty_room,
    office4_room1_1,
    empty_room,
    empty_room,
    office4_room4_1,
    empty_room,
    office4_room6_1
};


const uint8_t * const PROGMEM office4_row2[7] = {
    empty_room,
    office4_room1_2,
    empty_room,
    office4_room3_2,
    office4_room4_2,
    empty_room,
    empty_room
};


const uint8_t * const PROGMEM office4_row3[7] = {
    empty_room,
    office4_room1_3,
    office4_room2_3,
    empty_room,
    office4_room4_3,
    empty_room,
    empty_room
};


const uint8_t * const PROGMEM office4_row4[7] = {
    empty_room,
    office4_room1_4,
    empty_room,
    empty_room,
    office4_room4_4,
    office4_room5_4,
    office4_room6_4
};


const uint8_t * const PROGMEM office4_row5[7] = {
    office4_room0_5,
    office4_room1_5,
    office4_room2_5,
    empty_room,
    office4_room4_5,
    empty_room,
    empty_room
};


const uint8_t * const* const PROGMEM office4_entities[6] = {
    office4_row0,
    office4_row1,
    office4_row2,
    office4_row3,
    office4_row4,
    office4_row5
};


#endif