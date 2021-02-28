#ifndef officex_h
#define officex_h

#include "emptyRoom.h"
#include "entityTypes.h"
#include "entityExpressions.h"


const uint8_t PROGMEM officex_map[493] = {
    // array length (16 bit, little endian), map width, map height (in rooms)
    237, 1, 8, 8,
    // room indices (16 bit, little endian), 128 bytes
    // room 0, index 0
    0, 0,
    // room 1, index 7
    7, 0,
    // room 2, index 14
    14, 0,
    // room 3, index 19
    19, 0,
    // room 4, index 25
    25, 0,
    // room 5, index 33
    33, 0,
    // room 6, index 39
    39, 0,
    // room 7, index 49
    49, 0,
    // room 8, index 60
    60, 0,
    // room 9, index 65
    65, 0,
    // room 10, index 77
    77, 0,
    // room 11, index 80
    80, 0,
    // room 12, index 83
    83, 0,
    // room 13, index 86
    86, 0,
    // room 14, index 95
    95, 0,
    // room 15, index 103
    103, 0,
    // room 16, index 114
    114, 0,
    // room 17, index 117
    117, 0,
    // room 18, index 120
    120, 0,
    // room 19, index 123
    123, 0,
    // room 20, index 126
    126, 0,
    // room 21, index 133
    133, 0,
    // room 22, index 142
    142, 0,
    // room 23, index 145
    145, 0,
    // room 24, index 148
    148, 0,
    // room 25, index 151
    151, 0,
    // room 26, index 154
    154, 0,
    // room 27, index 157
    157, 0,
    // room 28, index 160
    160, 0,
    // room 29, index 172
    172, 0,
    // room 30, index 181
    181, 0,
    // room 31, index 184
    184, 0,
    // room 32, index 187
    187, 0,
    // room 33, index 190
    190, 0,
    // room 34, index 193
    193, 0,
    // room 35, index 196
    196, 0,
    // room 36, index 199
    199, 0,
    // room 37, index 209
    209, 0,
    // room 38, index 212
    212, 0,
    // room 39, index 215
    215, 0,
    // room 40, index 218
    218, 0,
    // room 41, index 221
    221, 0,
    // room 42, index 224
    224, 0,
    // room 43, index 227
    227, 0,
    // room 44, index 234
    234, 0,
    // room 45, index 245
    245, 0,
    // room 46, index 248
    248, 0,
    // room 47, index 251
    251, 0,
    // room 48, index 254
    254, 0,
    // room 49, index 257
    1, 1,
    // room 50, index 260
    4, 1,
    // room 51, index 263
    7, 1,
    // room 52, index 266
    10, 1,
    // room 53, index 278
    22, 1,
    // room 54, index 286
    30, 1,
    // room 55, index 299
    43, 1,
    // room 56, index 310
    54, 1,
    // room 57, index 313
    57, 1,
    // room 58, index 316
    60, 1,
    // room 59, index 319
    63, 1,
    // room 60, index 322
    66, 1,
    // room 61, index 327
    71, 1,
    // room 62, index 340
    84, 1,
    // room 63, index 353
    97, 1,

    // compressed room data, 361 bytes
    0xf4, 0x6f, 0x20, 0x6f, 0x20, 0xf3, 0x60, 0xf3, 0x6f, 0xa0, 0x66, 0x0, 0x6, 0x60, 0xf3, 0x6f, 0xa0, 0xf3, 0x60, 0xf3, 0x6f, 0xa0, 0xf0, 0x64, 0x44, 0xf1, 0x64, 0x4f, 0x10, 0x44, 0xf3, 0xf, 0x34, 0xfa, 0x4f, 0x30, 0xf1, 0x40, 0x40, 0x1f, 0x1b, 0x92, 0xf1, 0xc, 0xf2, 0xc, 0x80, 0xf0, 0x3a, 0x7f, 0x1b, 0x92, 0xf1, 0xc, 0x2f, 0x10, 0xc8, 0x30, 0x30, 0x3a, 0xfa, 0x6f, 0x30, 0xf3, 0x60, 0x66, 0x0, 0x60, 0x6, 0x0, 0x6f, 0x10, 0x6f, 0x0, 0x66, 0xf1, 0x0, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xf1, 0x40, 0x44, 0xf1, 0x4, 0x4f, 0x10, 0xf4, 0x40, 0x60, 0xf2, 0x60, 0xf2, 0x6f, 0x20, 0xf3, 0x60, 0x1b, 0xb, 0xb, 0x92, 0xf1, 0xc, 0xf2, 0xc, 0x8f, 0x13, 0xa0, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xfd, 0x6f, 0x0, 0x66, 0x60, 0x66, 0x60, 0xf3, 0x4, 0x4f, 0x20, 0x4f, 0x10, 0x44, 0xf1, 0x0, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0x66, 0x60, 0xf2, 0x60, 0x64, 0x46, 0x66, 0xf0, 0x6, 0x66, 0x6, 0x44, 0x1f, 0x20, 0x44, 0xf2, 0x4, 0xf1, 0x4, 0x4f, 0x10, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0x66, 0x60, 0xf2, 0x60, 0xf2, 0x60, 0xf2, 0x60, 0x66, 0x60, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xf8, 0x4, 0x4f, 0x10, 0x4f, 0x20, 0x44, 0x66, 0x60, 0xf2, 0x60, 0x66, 0x6f, 0x0, 0xf2, 0x60, 0x66, 0x60, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0x66, 0x60, 0x66, 0x64, 0x66, 0x6, 0x66, 0x46, 0x6f, 0x0, 0xf3, 0x40, 0xf4, 0x4f, 0x50, 0xf0, 0x64, 0x66, 0x60, 0x66, 0x4b, 0xbb, 0x6b, 0x4f, 0x0, 0x60, 0x4f, 0x16, 0x0, 0x60, 0x0, 0x60, 0x60, 0xf0, 0x46, 0xb9, 0x40, 0x0, 0x60, 0xcf, 0x0, 0x60, 0xcf, 0x36, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0x1f, 0x1b, 0x9f, 0xf0, 0x0, 0x46, 0x66, 0x6, 0x64, 0xf0, 0x6, 0x64, 0xf0, 0x6, 0xf, 0x4, 0x66, 0x60, 0x60, 0x0, 0x60, 0xb6, 0x6, 0x6, 0x66, 0x0, 0x6f, 0x0, 0x66, 0xf1, 0x40, 0xf2, 0xb4, 0xf1, 0x60, 0x4f, 0x20, 0xf4, 0x40
};

const uint8_t PROGMEM officex_room0_1[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(3, TELEPORTER),
    xy(0, 32),
};



const uint8_t PROGMEM officex_room1_0[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(0, BAT),
    xy(24, 12),
};



const uint8_t PROGMEM officex_room2_0[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(0, BAT),
    xy(48, 12),
};



const uint8_t PROGMEM officex_room3_0[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(0, BAT),
    xy(48, 12),
};



const uint8_t PROGMEM officex_room4_0[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(0, BOSS_LOCK),
    xy(80, 32),

    // entity 1
    miscAndEntityType(0, BAT),
    xy(32, 4),
};



const uint8_t PROGMEM officex_room4_2[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(1, TELEPORTER),
    xy(96, 32),
};



const uint8_t PROGMEM officex_room4_3[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(0, TELEPORTER),
    xy(104, 36),

    // entity 1
    miscAndEntityType(0, BAT),
    xy(32, 24),
};



const uint8_t PROGMEM officex_room4_4[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(0, BAT),
    xy(16, 16),

    // entity 1
    miscAndEntityType(0, BAT),
    xy(104, 44),
};



const uint8_t PROGMEM officex_room4_5[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(2, TELEPORTER),
    xy(0, 32),

    // entity 1
    miscAndEntityType(0, BAT),
    xy(96, 32),
};



const uint8_t PROGMEM officex_room4_6[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(VERTICAL, TRIGGER_DOOR),
    xy(104, 32),

    // entity 1
    miscAndEntityType(SLAM_SHUT, SKELETON),
    xy(80, 40),

    // entity 2
    miscAndEntityType(0, BAT),
    xy(24, 20),
};



const uint8_t PROGMEM officex_room5_0[] = {
    5, // number of entities

    // entity 0
    miscAndEntityType(0, SECRET_WALL),
    xy(80, 48),

    // entity 1
    miscAndEntityType(0, BOSS_LOCK),
    xy(16, 32),

    // entity 2
    miscAndEntityType(0, BOSS_LOCK),
    xy(32, 32),

    // entity 3
    miscAndEntityType(0, BOSS_LOCK),
    xy(48, 32),

    // entity 4
    miscAndEntityType(0, BOSS_LOCK),
    xy(64, 32),
};



const uint8_t PROGMEM officex_room5_1[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(HEART, CHEST),
    xy(24, 20),
};



const uint8_t PROGMEM officex_room5_6[] = {
    4, // number of entities

    // entity 0
    miscAndEntityType(0, POT),
    xy(48, 20),

    // entity 1
    miscAndEntityType(0, POT),
    xy(88, 16),

    // entity 2
    miscAndEntityType(0, SWITCH),
    xy(32, 36),

    // entity 3
    miscAndEntityType(0, SUNKEN_BRIDGE),
    xy(64, 36),
};



const uint8_t PROGMEM officex_room5_7[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(0, SUNKEN_BRIDGE),
    xy(80, 36),

    // entity 1
    miscAndEntityType(0, SWITCH),
    xy(56, 56),

    // entity 2
    miscAndEntityType(0, BAT),
    xy(32, 28),
};



const uint8_t PROGMEM officex_room6_0[] = {
    5, // number of entities

    // entity 0
    miscAndEntityType(SLAM_SHUT, BLOB_MOTHER),
    xy(88, 16),

    // entity 1
    miscAndEntityType(VERTICAL, TRIGGER_DOOR),
    xy(0, 32),

    // entity 2
    miscAndEntityType(0, TRIGGER_DOOR),
    xy(16, 60),

    // entity 3
    miscAndEntityType(SLAM_SHUT, BLOB_MOTHER),
    xy(40, 16),

    // entity 4
    miscAndEntityType(SLAM_SHUT, GIANT_BAT),
    xy(72, 40),
};



const uint8_t PROGMEM officex_room6_1[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(0, BOSS_LOCK),
    xy(80, 32),

    // entity 1
    miscAndEntityType(0, TRIGGER_DOOR),
    xy(16, 0),
};



const uint8_t PROGMEM officex_room6_6[] = {
    4, // number of entities

    // entity 0
    miscAndEntityType(0, LOCK),
    xy(96, 32),

    // entity 1
    miscAndEntityType(0, SWITCH),
    xy(96, 52),

    // entity 2
    miscAndEntityType(0, SUNKEN_BRIDGE),
    xy(64, 20),

    // entity 3
    miscAndEntityType(0, BAT),
    xy(48, 24),
};



const uint8_t PROGMEM officex_room6_7[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(0, BAT),
    xy(48, 12),

    // entity 1
    miscAndEntityType(0, BAT),
    xy(32, 36),
};



const uint8_t PROGMEM officex_room7_0[] = {
    5, // number of entities

    // entity 0
    miscAndEntityType(0, CHEST),
    xy(56, 24),

    // entity 1
    miscAndEntityType(0, CHEST),
    xy(24, 24),

    // entity 2
    miscAndEntityType(0, CHEST),
    xy(88, 24),

    // entity 3
    miscAndEntityType(OPEN_CHESTS_IN_RIGHT_ORDER, SUNKEN_BRIDGE),
    xy(80, 36),

    // entity 4
    miscAndEntityType(4, TELEPORTER),
    xy(0, 4),
};



const uint8_t PROGMEM officex_room7_1[] = {
    4, // number of entities

    // entity 0
    miscAndEntityType(0, TRIGGER_DOOR),
    xy(32, 0),

    // entity 1
    miscAndEntityType(SLAM_SHUT, NEMESIS),
    xy(72, 36),

    // entity 2
    miscAndEntityType(0, TRIGGER_DOOR),
    xy(64, 0),

    // entity 3
    miscAndEntityType(VERTICAL, TRIGGER_DOOR),
    xy(0, 32),
};



const uint8_t PROGMEM officex_room7_6[] = {
    8, // number of entities

    // entity 0
    miscAndEntityType(0, BAT),
    xy(56, 48),

    // entity 1
    miscAndEntityType(0, SUNKEN_BRIDGE),
    xy(72, 36),

    // entity 2
    miscAndEntityType(0, BAT),
    xy(16, 28),

    // entity 3
    miscAndEntityType(0, BLOB),
    xy(40, 44),

    // entity 4
    miscAndEntityType(0, SKELETON),
    xy(16, 44),

    // entity 5
    miscAndEntityType(0, SKELETON),
    xy(56, 20),

    // entity 6
    miscAndEntityType(BOMB, CHEST),
    xy(88, 16),

    // entity 7
    miscAndEntityType(0, SWITCH),
    xy(96, 36),
};



const uint8_t PROGMEM officex_room7_7[] = {
    4, // number of entities

    // entity 0
    miscAndEntityType(0, SUNKEN_BRIDGE),
    xy(0, 20),

    // entity 1
    miscAndEntityType(0, SWITCH),
    xy(48, 36),

    // entity 2
    miscAndEntityType(0, BAT),
    xy(88, 12),

    // entity 3
    miscAndEntityType(0, BAT),
    xy(88, 40),
};

const uint8_t PROGMEM officex_teleporters[] = {
    // dest x, dest y (in rooms)
    3, 2,
    1, 4,
    5, 1,
    1, 3,
    4, 0,
};





const uint8_t * const PROGMEM officex_row0[8] = {
    empty_room,
    officex_room1_0,
    officex_room2_0,
    officex_room3_0,
    officex_room4_0,
    officex_room5_0,
    officex_room6_0,
    officex_room7_0
};


const uint8_t * const PROGMEM officex_row1[8] = {
    officex_room0_1,
    empty_room,
    empty_room,
    empty_room,
    empty_room,
    officex_room5_1,
    officex_room6_1,
    officex_room7_1
};


const uint8_t * const PROGMEM officex_row2[8] = {
    empty_room,
    empty_room,
    empty_room,
    empty_room,
    officex_room4_2,
    empty_room,
    empty_room,
    empty_room
};


const uint8_t * const PROGMEM officex_row3[8] = {
    empty_room,
    empty_room,
    empty_room,
    empty_room,
    officex_room4_3,
    empty_room,
    empty_room,
    empty_room
};


const uint8_t * const PROGMEM officex_row4[8] = {
    empty_room,
    empty_room,
    empty_room,
    empty_room,
    officex_room4_4,
    empty_room,
    empty_room,
    empty_room
};


const uint8_t * const PROGMEM officex_row5[8] = {
    empty_room,
    empty_room,
    empty_room,
    empty_room,
    officex_room4_5,
    empty_room,
    empty_room,
    empty_room
};


const uint8_t * const PROGMEM officex_row6[8] = {
    empty_room,
    empty_room,
    empty_room,
    empty_room,
    officex_room4_6,
    officex_room5_6,
    officex_room6_6,
    officex_room7_6
};


const uint8_t * const PROGMEM officex_row7[8] = {
    empty_room,
    empty_room,
    empty_room,
    empty_room,
    empty_room,
    officex_room5_7,
    officex_room6_7,
    officex_room7_7
};


const uint8_t * const* const PROGMEM officex_entities[8] = {
    officex_row0,
    officex_row1,
    officex_row2,
    officex_row3,
    officex_row4,
    officex_row5,
    officex_row6,
    officex_row7
};


#endif