#ifndef officex_h
#define officex_h

#include "emptyRoom.h"
#include "entityTypes.h"
#include "entityExpressions.h"


const uint8_t PROGMEM officex_map[461] = {
    // array length (16 bit, little endian), map width, map height (in rooms)
    205, 1, 8, 8,
    // room indices (16 bit, little endian), 128 bytes
    // room 0, index 0
    0, 0,
    // room 1, index 3
    3, 0,
    // room 2, index 7
    7, 0,
    // room 3, index 11
    11, 0,
    // room 4, index 17
    17, 0,
    // room 5, index 23
    23, 0,
    // room 6, index 32
    32, 0,
    // room 7, index 35
    35, 0,
    // room 8, index 46
    46, 0,
    // room 9, index 51
    51, 0,
    // room 10, index 64
    64, 0,
    // room 11, index 67
    67, 0,
    // room 12, index 70
    70, 0,
    // room 13, index 73
    73, 0,
    // room 14, index 76
    76, 0,
    // room 15, index 79
    79, 0,
    // room 16, index 86
    86, 0,
    // room 17, index 89
    89, 0,
    // room 18, index 93
    93, 0,
    // room 19, index 96
    96, 0,
    // room 20, index 99
    99, 0,
    // room 21, index 106
    106, 0,
    // room 22, index 115
    115, 0,
    // room 23, index 118
    118, 0,
    // room 24, index 121
    121, 0,
    // room 25, index 124
    124, 0,
    // room 26, index 127
    127, 0,
    // room 27, index 130
    130, 0,
    // room 28, index 133
    133, 0,
    // room 29, index 145
    145, 0,
    // room 30, index 154
    154, 0,
    // room 31, index 157
    157, 0,
    // room 32, index 160
    160, 0,
    // room 33, index 163
    163, 0,
    // room 34, index 166
    166, 0,
    // room 35, index 169
    169, 0,
    // room 36, index 172
    172, 0,
    // room 37, index 182
    182, 0,
    // room 38, index 185
    185, 0,
    // room 39, index 188
    188, 0,
    // room 40, index 191
    191, 0,
    // room 41, index 194
    194, 0,
    // room 42, index 197
    197, 0,
    // room 43, index 200
    200, 0,
    // room 44, index 207
    207, 0,
    // room 45, index 218
    218, 0,
    // room 46, index 221
    221, 0,
    // room 47, index 224
    224, 0,
    // room 48, index 227
    227, 0,
    // room 49, index 230
    230, 0,
    // room 50, index 233
    233, 0,
    // room 51, index 236
    236, 0,
    // room 52, index 239
    239, 0,
    // room 53, index 251
    251, 0,
    // room 54, index 258
    2, 1,
    // room 55, index 270
    14, 1,
    // room 56, index 281
    25, 1,
    // room 57, index 284
    28, 1,
    // room 58, index 287
    31, 1,
    // room 59, index 290
    34, 1,
    // room 60, index 293
    37, 1,
    // room 61, index 298
    42, 1,
    // room 62, index 308
    52, 1,
    // room 63, index 321
    65, 1,

    // compressed room data, 329 bytes
    0xff, 0xf, 0x50, 0xff, 0xf, 0x30, 0x66, 0xff, 0x0, 0xf, 0x36, 0xff, 0x0, 0xf, 0x6, 0x44, 0x40, 0xf1, 0x4, 0x4f, 0xa0, 0xf3, 0x40, 0x1f, 0x1b, 0x9f, 0x20, 0xcf, 0x30, 0x8f, 0x13, 0xa0, 0xff, 0xf, 0x50, 0x1f, 0x1b, 0x92, 0xf1, 0xc, 0xf2, 0xc, 0x83, 0x30, 0x33, 0xa0, 0xf4, 0x6f, 0x90, 0xf3, 0x60, 0x66, 0x60, 0x6, 0x6, 0x60, 0x6, 0xf1, 0x6, 0x0, 0x6, 0x66, 0xf0, 0x0, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0x0, 0x40, 0x4f, 0x0, 0x44, 0x4f, 0xc0, 0xfa, 0x6f, 0xa0, 0xf4, 0x6f, 0xf0, 0x0, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xfd, 0x6f, 0x0, 0x66, 0x60, 0x66, 0x60, 0xf3, 0x4, 0x4f, 0x20, 0x4f, 0x10, 0x44, 0xf1, 0x0, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0x66, 0x60, 0xf2, 0x60, 0x64, 0x46, 0x66, 0xf0, 0x6, 0x66, 0x6, 0x44, 0x1f, 0x20, 0x44, 0xf2, 0x4, 0xf1, 0x4, 0x4f, 0x10, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0x66, 0x60, 0xf2, 0x60, 0xf2, 0x60, 0xf2, 0x60, 0x66, 0x60, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xf8, 0x4, 0x4f, 0x10, 0x4f, 0x20, 0x44, 0x66, 0x60, 0xf2, 0x60, 0x66, 0x6f, 0x0, 0xf2, 0x60, 0x66, 0x60, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0x66, 0x60, 0x66, 0x64, 0x66, 0x6, 0x66, 0x46, 0x6f, 0x0, 0xf3, 0x40, 0xf4, 0x4f, 0x80, 0x64, 0x66, 0x60, 0x66, 0x4b, 0xbb, 0x6b, 0x9f, 0x0, 0x60, 0xcf, 0x16, 0x0, 0xf1, 0x60, 0x60, 0xf0, 0x46, 0x44, 0xf0, 0x6, 0xc, 0xf0, 0x6, 0xc, 0xf3, 0x60, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0xff, 0xf, 0x50, 0x1f, 0x1b, 0x9f, 0xf0, 0x0, 0x4f, 0x10, 0x64, 0xf1, 0x6, 0x4f, 0x20, 0xf0, 0x46, 0x66, 0x60, 0x0, 0x60, 0xb6, 0x6, 0x6, 0x66, 0x0, 0x6f, 0x0, 0x66, 0xf1, 0x40, 0xf2, 0xb4, 0xf1, 0x60, 0x4f, 0x20, 0xf4, 0x40
};

const uint8_t PROGMEM officex_room0_1[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(3, TELEPORTER),
    xy(8, 36),
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
    xy(96, 36),

    // entity 1
    miscAndEntityType(0, BAT),
    xy(32, 4),
};



const uint8_t PROGMEM officex_room4_2[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(1, TELEPORTER),
    xy(112, 40),
};



const uint8_t PROGMEM officex_room4_3[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(0, TELEPORTER),
    xy(104, 44),

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
    xy(8, 44),

    // entity 1
    miscAndEntityType(0, BAT),
    xy(96, 32),
};



const uint8_t PROGMEM officex_room4_6[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(VERTICAL, TRIGGER_DOOR),
    xy(104, 36),

    // entity 1
    miscAndEntityType(SLAM_SHUT, SKELETON),
    xy(80, 40),

    // entity 2
    miscAndEntityType(0, BAT),
    xy(24, 20),
};



const uint8_t PROGMEM officex_room5_0[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(0, NEMESIS),
    xy(72, 36),
};



const uint8_t PROGMEM officex_room5_6[] = {
    5, // number of entities

    // entity 0
    miscAndEntityType(HEART, CHEST),
    xy(64, 28),

    // entity 1
    miscAndEntityType(0, POT),
    xy(24, 20),

    // entity 2
    miscAndEntityType(0, POT),
    xy(48, 20),

    // entity 3
    miscAndEntityType(0, POT),
    xy(88, 16),

    // entity 4
    miscAndEntityType(KEY, CHEST),
    xy(40, 24),
};



const uint8_t PROGMEM officex_room6_6[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(0, LOCK),
    xy(96, 20),
};



const uint8_t PROGMEM officex_room7_0[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(BOSS_KEY, CHEST),
    xy(24, 16),

    // entity 1
    miscAndEntityType(4, TELEPORTER),
    xy(48, 60),

    // entity 2
    miscAndEntityType(0, BOSS_LOCK),
    xy(88, 24),
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
    xy(88, 32),

    // entity 7
    miscAndEntityType(0, SWITCH),
    xy(88, 24),
};

const uint8_t PROGMEM officex_teleporters[] = {
    // dest x, dest y (in rooms)
    3, 2,
    1, 4,
    4, 1,
    1, 3,
    5, 0,
};





const uint8_t * const PROGMEM officex_row0[8] = {
    empty_room,
    officex_room1_0,
    officex_room2_0,
    officex_room3_0,
    officex_room4_0,
    officex_room5_0,
    empty_room,
    officex_room7_0
};


const uint8_t * const PROGMEM officex_row1[8] = {
    officex_room0_1,
    empty_room,
    empty_room,
    empty_room,
    empty_room,
    empty_room,
    empty_room,
    empty_room
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
    empty_room,
    empty_room,
    empty_room
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