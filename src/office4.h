#ifndef office4_h
#define office4_h

#include "emptyRoom.h"
#include "entityTypes.h"
#include "entityExpressions.h"


const uint8_t PROGMEM office4_map[535] = {
    // array length (16 bit, little endian), map width, map height (in rooms)
    23, 2, 7, 6,
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
    // room 5, index 58
    58, 0,
    // room 6, index 61
    61, 0,
    // room 7, index 64
    64, 0,
    // room 8, index 75
    75, 0,
    // room 9, index 88
    88, 0,
    // room 10, index 101
    101, 0,
    // room 11, index 113
    113, 0,
    // room 12, index 122
    122, 0,
    // room 13, index 125
    125, 0,
    // room 14, index 128
    128, 0,
    // room 15, index 140
    140, 0,
    // room 16, index 153
    153, 0,
    // room 17, index 167
    167, 0,
    // room 18, index 179
    179, 0,
    // room 19, index 191
    191, 0,
    // room 20, index 204
    204, 0,
    // room 21, index 217
    217, 0,
    // room 22, index 228
    228, 0,
    // room 23, index 239
    239, 0,
    // room 24, index 252
    252, 0,
    // room 25, index 260
    4, 1,
    // room 26, index 266
    10, 1,
    // room 27, index 276
    20, 1,
    // room 28, index 288
    32, 1,
    // room 29, index 300
    44, 1,
    // room 30, index 313
    57, 1,
    // room 31, index 327
    71, 1,
    // room 32, index 336
    80, 1,
    // room 33, index 347
    91, 1,
    // room 34, index 359
    103, 1,
    // room 35, index 367
    111, 1,
    // room 36, index 379
    123, 1,
    // room 37, index 393
    137, 1,
    // room 38, index 407
    151, 1,
    // room 39, index 417
    161, 1,
    // room 40, index 427
    171, 1,
    // room 41, index 439
    183, 1,

    // compressed room data, 447 bytes
    0x1f, 0x2b, 0x20, 0x55, 0x50, 0x2, 0x5, 0x55, 0x0, 0x2f, 0x20, 0xbb, 0x4b, 0xbb, 0x9f, 0x20, 0xc0, 0x4, 0x0, 0xc, 0x0, 0x43, 0x33, 0xa0, 0x1f, 0x2b, 0x20, 0xf0, 0x50, 0x2f, 0x20, 0x83, 0x33, 0x3, 0x30, 0xf2, 0xb9, 0x5, 0x55, 0x7, 0xc0, 0x55, 0x50, 0x7c, 0xf, 0x13, 0xa0, 0x1f, 0x1b, 0x97, 0xf1, 0xc, 0x7f, 0x10, 0xc8, 0xf, 0x3, 0xa0, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0x2f, 0x20, 0x20, 0x55, 0x50, 0x2, 0x5, 0x55, 0x0, 0x2f, 0x20, 0x0, 0x1b, 0xbb, 0x90, 0x2, 0x0, 0xc, 0xf2, 0xc, 0x0, 0x83, 0x33, 0xa0, 0x1b, 0xbb, 0xb, 0x92, 0xf0, 0x50, 0x2, 0xf0, 0x50, 0xc8, 0x33, 0x30, 0x3a, 0x2f, 0x1b, 0x90, 0x5, 0x50, 0x5c, 0x2f, 0x10, 0xc2, 0xf, 0x3, 0xa0, 0x40, 0xf2, 0x40, 0x47, 0xf0, 0x40, 0x0, 0xf6, 0x40, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0x20, 0x55, 0x50, 0x2, 0x5, 0x55, 0x0, 0x2f, 0x20, 0x8f, 0x13, 0x40, 0x0, 0x1b, 0xbb, 0x9f, 0x20, 0xc0, 0x2, 0x0, 0xc, 0x40, 0x83, 0x33, 0xa0, 0x1b, 0xbb, 0x4, 0x92, 0x55, 0xf0, 0x2, 0x55, 0x0, 0x5c, 0x83, 0x33, 0x3, 0xa0, 0x20, 0xf1, 0x40, 0x4, 0x74, 0x44, 0x20, 0x0, 0x44, 0x42, 0xf, 0x14, 0x1f, 0x1b, 0x92, 0xf0, 0x5, 0xc2, 0xf0, 0x5, 0xc8, 0x33, 0x30, 0xc, 0x1f, 0x2b, 0x25, 0x50, 0x55, 0x2, 0x55, 0x5, 0x50, 0x20, 0x0, 0x55, 0x0, 0xb1, 0x9b, 0xbb, 0x9f, 0x0, 0x50, 0xcf, 0x0, 0x50, 0xc0, 0x55, 0x0, 0xc, 0x4f, 0x1b, 0x42, 0xf1, 0xc, 0x20, 0x55, 0x0, 0xc2, 0xf1, 0xc, 0x40, 0xf1, 0x42, 0xf, 0x14, 0x20, 0x0, 0x64, 0x42, 0xf, 0x14, 0x1b, 0xbb, 0xb, 0x92, 0x0, 0x5, 0x5c, 0x25, 0x50, 0x0, 0xc8, 0xf2, 0x30, 0x20, 0xf1, 0x42, 0xf2, 0x2, 0xf2, 0xf, 0x33, 0xf0, 0x40, 0x44, 0xfa, 0xf, 0x33, 0x20, 0x0, 0x55, 0xf1, 0x5, 0x5f, 0x10, 0x55, 0xf, 0x33, 0x5, 0x50, 0x0, 0xc0, 0x55, 0x5, 0x5c, 0xf0, 0x5, 0x5c, 0xf2, 0x3a, 0x2f, 0x10, 0xc2, 0x5, 0x50, 0xc, 0x20, 0x55, 0x0, 0x2, 0xf2, 0x0, 0x20, 0x44, 0x0, 0x2, 0x0, 0x74, 0x33, 0x0, 0xf1, 0xb3, 0x3, 0x30, 0x33, 0x44, 0xbb, 0x19, 0xb4, 0x45, 0x0, 0x9, 0xbb, 0xb0, 0x80, 0xa0, 0x33, 0x30, 0x0, 0xf3, 0xb0, 0x1b, 0x90, 0x5, 0xf1, 0x5, 0xf4, 0x0, 0xf2, 0xb9, 0x5, 0x0, 0x5, 0xc0, 0x5, 0x0, 0x5c, 0xf2, 0xc, 0x1f, 0xb, 0x6b, 0x2f, 0x0, 0x60, 0x2f, 0x0, 0x60, 0x2f, 0x0, 0x60, 0xf2, 0xb9, 0xf2, 0xc, 0xf2, 0xc, 0xf2, 0xc, 0x2f, 0x10, 0xc2, 0x5, 0x50, 0xc, 0x20, 0x55, 0x0, 0xc4, 0xf1, 0x3a, 0x20, 0xb9, 0xb, 0x92, 0x0, 0xc0, 0xc, 0x20, 0xc, 0x0, 0xc8, 0x33, 0xa3, 0x3a, 0x2b, 0x94, 0x0, 0x2, 0xc, 0x20, 0x50, 0x20, 0xc2, 0x5, 0x8, 0x3a, 0x83, 0x33, 0xf4, 0x5, 0x0, 0x50, 0xc0, 0x50, 0x5, 0xc, 0xf2, 0x37, 0xf2, 0xc, 0x5, 0x55, 0x0, 0xcf, 0x20, 0xcf, 0x17, 0x3a, 0x2f, 0x0, 0x60, 0x2f, 0x0, 0x60, 0x2f, 0x0, 0x60, 0xf1, 0x36, 0x30, 0xf2, 0xc, 0xf2, 0xc, 0xf2, 0xc, 0xf2, 0x3a
};

const uint8_t PROGMEM office4_room0_0[] = {
    5, // number of entities

    // entity 0
    miscAndEntityType(BOMB, POT),
    xy(8, 48),

    // entity 1
    miscAndEntityType(BOMB, POT),
    xy(56, 52),

    // entity 2
    miscAndEntityType(BOMB, POT),
    xy(24, 20),

    // entity 3
    miscAndEntityType(BOMB, POT),
    xy(88, 52),

    // entity 4
    miscAndEntityType(BOMB, POT),
    xy(88, 28),
};



const uint8_t PROGMEM office4_room0_2[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(LAST_TORCH_OPENS_DOORS, TORCH),
    xy(16, 44),

    // entity 1
    miscAndEntityType(LAST_TORCH_OPENS_DOORS, TORCH),
    xy(16, 20),
};



const uint8_t PROGMEM office4_room0_3[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(0, SWITCH),
    xy(88, 40),
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
    4, // number of entities

    // entity 0
    miscAndEntityType(BOOMERANG, CHEST),
    xy(80, 16),

    // entity 1
    miscAndEntityType(BOMB, CHEST),
    xy(96, 44),

    // entity 2
    miscAndEntityType(HEART, CHEST),
    xy(72, 44),

    // entity 3
    miscAndEntityType(0, SNAKE),
    xy(96, 16),
};



const uint8_t PROGMEM office4_room1_2[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(SWORD, CHEST),
    xy(56, 20),
};



const uint8_t PROGMEM office4_room1_3[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(3, TELEPORTER),
    xy(64, 44),
};



const uint8_t PROGMEM office4_room1_4[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(2, TELEPORTER),
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
    3, // number of entities

    // entity 0
    miscAndEntityType(SLAM_SHUT, BLOB),
    xy(56, 12),

    // entity 1
    miscAndEntityType(0, SNAKE),
    xy(48, 40),

    // entity 2
    miscAndEntityType(0, SNAKE),
    xy(16, 44),
};



const uint8_t PROGMEM office4_room2_5[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(0, BLOB),
    xy(24, 48),
};



const uint8_t PROGMEM office4_room3_2[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(4, TELEPORTER),
    xy(56, 28),
};



const uint8_t PROGMEM office4_room4_1[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(0, TELEPORTER),
    xy(56, 28),
};



const uint8_t PROGMEM office4_room4_5[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(0, SECRET_WALL),
    xy(104, 56),
};



const uint8_t PROGMEM office4_room5_0[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(RING, CHEST),
    xy(40, 40),

    // entity 1
    miscAndEntityType(0, LOCK),
    xy(16, 36),

    // entity 2
    miscAndEntityType(0, HEART),
    xy(64, 32),
};



const uint8_t PROGMEM office4_room5_1[] = {
    4, // number of entities

    // entity 0
    miscAndEntityType(0, SWITCH),
    xy(96, 24),

    // entity 1
    miscAndEntityType(0, TRIGGER_DOOR),
    xy(56, 40),

    // entity 2
    miscAndEntityType(0, SWITCH),
    xy(96, 48),

    // entity 3
    miscAndEntityType(0, SECRET_WALL),
    xy(24, 32),
};



const uint8_t PROGMEM office4_room5_4[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(OPEN_CHESTS_IN_RIGHT_ORDER, SUNKEN_BRIDGE),
    xy(88, 28),
};



const uint8_t PROGMEM office4_room6_0[] = {
    4, // number of entities

    // entity 0
    miscAndEntityType(1, TELEPORTER),
    xy(96, 52),

    // entity 1
    miscAndEntityType(5, TELEPORTER),
    xy(48, 52),

    // entity 2
    miscAndEntityType(6, TELEPORTER),
    xy(8, 44),

    // entity 3
    miscAndEntityType(7, TELEPORTER),
    xy(72, 36),
};



const uint8_t PROGMEM office4_room6_1[] = {
    5, // number of entities

    // entity 0
    miscAndEntityType(0, SUNKEN_BRIDGE),
    xy(16, 52),

    // entity 1
    miscAndEntityType(0, SECRET_WALL),
    xy(8, 40),

    // entity 2
    miscAndEntityType(0, SECRET_WALL),
    xy(72, 40),

    // entity 3
    miscAndEntityType(0, SUNKEN_BRIDGE),
    xy(32, 44),

    // entity 4
    miscAndEntityType(0, SECRET_WALL),
    xy(48, 40),
};

const uint8_t PROGMEM office4_teleporters[] = {
    // dest x, dest y (in rooms)
    4, 5,
    0, 7,
    4, 2,
    1, 4,
    4, 3,
    7, 4,
    7, 5,
    7, 6,
};





const uint8_t * const PROGMEM office4_row0[7] = {
    office4_room0_0,
    office4_room1_0,
    office4_room2_0,
    empty_room,
    empty_room,
    office4_room5_0,
    office4_room6_0
};


const uint8_t * const PROGMEM office4_row1[7] = {
    empty_room,
    office4_room1_1,
    empty_room,
    empty_room,
    office4_room4_1,
    office4_room5_1,
    office4_room6_1
};


const uint8_t * const PROGMEM office4_row2[7] = {
    office4_room0_2,
    office4_room1_2,
    empty_room,
    office4_room3_2,
    empty_room,
    empty_room,
    empty_room
};


const uint8_t * const PROGMEM office4_row3[7] = {
    office4_room0_3,
    office4_room1_3,
    empty_room,
    empty_room,
    empty_room,
    empty_room,
    empty_room
};


const uint8_t * const PROGMEM office4_row4[7] = {
    empty_room,
    office4_room1_4,
    empty_room,
    empty_room,
    empty_room,
    office4_room5_4,
    empty_room
};


const uint8_t * const PROGMEM office4_row5[7] = {
    empty_room,
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