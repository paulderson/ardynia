#ifndef officex_h
#define officex_h

#include "emptyRoom.h"
#include "entityTypes.h"
#include "entityExpressions.h"


const uint8_t PROGMEM officex_map[794] = {
    // array length (16 bit, little endian), map width, map height (in rooms)
    26, 3, 8, 8,
    // room indices (16 bit, little endian), 128 bytes
    // room 0, index 0
    0, 0,
    // room 1, index 11
    11, 0,
    // room 2, index 20
    20, 0,
    // room 3, index 27
    27, 0,
    // room 4, index 37
    37, 0,
    // room 5, index 51
    51, 0,
    // room 6, index 63
    63, 0,
    // room 7, index 76
    76, 0,
    // room 8, index 84
    84, 0,
    // room 9, index 96
    96, 0,
    // room 10, index 110
    110, 0,
    // room 11, index 120
    120, 0,
    // room 12, index 128
    128, 0,
    // room 13, index 142
    142, 0,
    // room 14, index 154
    154, 0,
    // room 15, index 161
    161, 0,
    // room 16, index 172
    172, 0,
    // room 17, index 183
    183, 0,
    // room 18, index 192
    192, 0,
    // room 19, index 202
    202, 0,
    // room 20, index 211
    211, 0,
    // room 21, index 218
    218, 0,
    // room 22, index 228
    228, 0,
    // room 23, index 240
    240, 0,
    // room 24, index 252
    252, 0,
    // room 25, index 263
    7, 1,
    // room 26, index 272
    16, 1,
    // room 27, index 283
    27, 1,
    // room 28, index 293
    37, 1,
    // room 29, index 305
    49, 1,
    // room 30, index 315
    59, 1,
    // room 31, index 323
    67, 1,
    // room 32, index 334
    78, 1,
    // room 33, index 346
    90, 1,
    // room 34, index 357
    101, 1,
    // room 35, index 367
    111, 1,
    // room 36, index 377
    121, 1,
    // room 37, index 387
    131, 1,
    // room 38, index 397
    141, 1,
    // room 39, index 409
    153, 1,
    // room 40, index 420
    164, 1,
    // room 41, index 430
    174, 1,
    // room 42, index 439
    183, 1,
    // room 43, index 449
    193, 1,
    // room 44, index 463
    207, 1,
    // room 45, index 474
    218, 1,
    // room 46, index 482
    226, 1,
    // room 47, index 494
    238, 1,
    // room 48, index 504
    248, 1,
    // room 49, index 513
    1, 2,
    // room 50, index 523
    11, 2,
    // room 51, index 528
    16, 2,
    // room 52, index 540
    28, 2,
    // room 53, index 552
    40, 2,
    // room 54, index 559
    47, 2,
    // room 55, index 571
    59, 2,
    // room 56, index 582
    70, 2,
    // room 57, index 595
    83, 2,
    // room 58, index 607
    95, 2,
    // room 59, index 616
    104, 2,
    // room 60, index 625
    113, 2,
    // room 61, index 634
    122, 2,
    // room 62, index 643
    131, 2,
    // room 63, index 651
    139, 2,

    // compressed room data, 662 bytes
    0x1f, 0x1b, 0x92, 0xf1, 0xc, 0x2f, 0x20, 0x44, 0x40, 0x44, 0x40, 0x1f, 0x1b, 0x42, 0xf1, 0x4, 0xf3, 0x8, 0xf1, 0x34, 0xf5, 0x4f, 0x10, 0x4f, 0x20, 0xf3, 0x40, 0x4f, 0x1b, 0x4f, 0x20, 0x4f, 0x20, 0x44, 0xf0, 0x30, 0x40, 0x44, 0x46, 0x64, 0x44, 0x4, 0x66, 0x40, 0x4f, 0x0, 0x40, 0x40, 0x40, 0x4, 0x0, 0x4b, 0xb6, 0xbb, 0x40, 0x0, 0x60, 0x4, 0xf0, 0x6f, 0x20, 0x60, 0x4, 0x4b, 0xbb, 0x4b, 0x44, 0x4, 0xf2, 0x4, 0x4, 0x4, 0x43, 0x40, 0x44, 0x40, 0x4b, 0xf1, 0x4f, 0x20, 0x44, 0xf1, 0xf, 0x44, 0x44, 0x10, 0x94, 0x44, 0xf1, 0x4, 0x44, 0xf0, 0xf, 0x4, 0xa, 0x44, 0x1b, 0xb6, 0x44, 0x42, 0x0, 0x60, 0x0, 0x20, 0x6, 0x0, 0xf0, 0x46, 0x44, 0x40, 0x1f, 0x1b, 0x9f, 0x20, 0xcf, 0x30, 0x83, 0x30, 0x33, 0xa0, 0x1f, 0xb, 0x4, 0x2f, 0x90, 0x8f, 0x3, 0x4, 0x40, 0x40, 0x4, 0x0, 0x4, 0x0, 0x40, 0x0, 0xf0, 0x40, 0x43, 0x30, 0x33, 0x30, 0x0, 0x6, 0x0, 0x90, 0x0, 0x60, 0xc, 0x0, 0x6, 0x5f, 0x40, 0x40, 0x4b, 0xbb, 0xf0, 0x4f, 0x60, 0xf6, 0x40, 0x1f, 0x1b, 0x9f, 0x20, 0xc2, 0xf1, 0xc, 0x83, 0x30, 0x33, 0xa0, 0x44, 0x40, 0x44, 0x42, 0xf2, 0x2, 0xf1, 0xc, 0x8f, 0x13, 0xa0, 0x1f, 0x1b, 0x9f, 0x20, 0xc2, 0xf2, 0x8, 0xf1, 0x3a, 0x1b, 0xb0, 0xbb, 0x92, 0xf1, 0xc, 0xf3, 0x2, 0xf1, 0xc, 0xf1, 0x40, 0x44, 0xf1, 0x4, 0xf3, 0x4, 0xf1, 0x34, 0xfa, 0x6f, 0x30, 0x66, 0x60, 0x66, 0x60, 0x2f, 0x10, 0x42, 0xf1, 0x4, 0x2f, 0x20, 0x4f, 0x10, 0x40, 0xf0, 0x46, 0xbf, 0x4, 0x6, 0x4, 0xf0, 0x5, 0xf, 0x14, 0x63, 0x40, 0x44, 0x40, 0xf0, 0x4f, 0x10, 0x42, 0xf1, 0xc, 0x44, 0x40, 0x44, 0x40, 0x1f, 0x1b, 0x92, 0xf2, 0x2, 0xf1, 0xc, 0x44, 0x40, 0x44, 0x40, 0x1f, 0x1b, 0x9f, 0x30, 0x2f, 0x10, 0xc8, 0xf1, 0x3a, 0x2f, 0x10, 0xcf, 0x20, 0xc6, 0x66, 0x0, 0xc, 0x8f, 0x3, 0x4, 0x66, 0xf1, 0x2, 0xf2, 0x2, 0xf2, 0x8, 0x33, 0x3, 0x30, 0x66, 0x60, 0xf2, 0x60, 0x64, 0x46, 0x66, 0xf0, 0x6, 0x66, 0x6, 0x44, 0x1f, 0x10, 0x4f, 0x20, 0xc2, 0xf1, 0xc, 0x8f, 0x13, 0xa0, 0xf8, 0x40, 0x44, 0x4f, 0x0, 0x44, 0xf1, 0x4, 0x44, 0x40, 0x44, 0x4f, 0x20, 0xc4, 0xf1, 0xc, 0x4f, 0x13, 0xa0, 0x1b, 0xb0, 0xbb, 0x92, 0xf1, 0xc, 0x2f, 0x10, 0xc8, 0x33, 0x3, 0x3a, 0x1f, 0x1b, 0x92, 0xf1, 0xc, 0x2f, 0x10, 0xc8, 0x33, 0x3, 0x3a, 0x1f, 0xb, 0x4, 0x2f, 0x10, 0x42, 0xf2, 0x8, 0xf1, 0x3a, 0x44, 0x40, 0xf2, 0x40, 0x44, 0x4f, 0x20, 0xc8, 0xf1, 0x3a, 0x66, 0x60, 0xf2, 0x60, 0xf2, 0x60, 0xf2, 0x60, 0x66, 0x60, 0x4f, 0x1b, 0x42, 0xf2, 0x2, 0xf1, 0x4, 0x4f, 0x13, 0x40, 0x4f, 0x10, 0x40, 0x6, 0x66, 0xc, 0x40, 0x66, 0x60, 0xc4, 0xf1, 0xc, 0x44, 0xf1, 0x64, 0x4f, 0x0, 0x64, 0xf1, 0x6, 0x40, 0xf1, 0x40, 0x1b, 0xb0, 0xbb, 0xb2, 0xf2, 0x2, 0xf2, 0x8, 0xf1, 0x3a, 0xf2, 0xb9, 0xf2, 0xc, 0xf2, 0xc, 0x8f, 0x10, 0xc0, 0x1f, 0x1b, 0x92, 0xf1, 0xc, 0x2f, 0x20, 0x8f, 0x13, 0xa0, 0x1b, 0xb6, 0xbb, 0x42, 0x0, 0x50, 0x44, 0x0, 0x5, 0x4, 0x8, 0x33, 0x63, 0x44, 0x66, 0x60, 0xf2, 0x60, 0x66, 0x6f, 0x0, 0xf2, 0x60, 0x66, 0x60, 0xf3, 0x4f, 0x20, 0xc8, 0xf1, 0xc, 0xf3, 0x40, 0x4f, 0x10, 0xc2, 0x4, 0x44, 0xc, 0x20, 0x40, 0x40, 0xc8, 0xf1, 0xc, 0x44, 0x4b, 0xf2, 0x40, 0xf2, 0x40, 0xf2, 0x40, 0x44, 0x40, 0x1f, 0x1b, 0x92, 0xf2, 0x2, 0xf2, 0x8, 0xf1, 0x3a, 0x1f, 0x10, 0xcf, 0x20, 0xcf, 0x30, 0x20, 0x0, 0x66, 0x60, 0xfa, 0x4f, 0x30, 0xf3, 0x40, 0x4b, 0xb6, 0xbb, 0x42, 0x0, 0x60, 0x4, 0x0, 0x6, 0x0, 0xf4, 0x40, 0x46, 0x60, 0x66, 0x64, 0x66, 0x6, 0x66, 0x46, 0x6f, 0x0, 0xf3, 0x40, 0x1f, 0x1b, 0x42, 0xf9, 0x8, 0xf2, 0x30, 0x4f, 0x10, 0xc4, 0x40, 0x40, 0x4c, 0x0, 0x4, 0x0, 0xc3, 0xf1, 0x4, 0x1f, 0x1b, 0x92, 0xf1, 0xc, 0x2f, 0x10, 0xc8, 0x33, 0x3, 0x3a, 0x1b, 0x6f, 0xb, 0x20, 0x6f, 0x0, 0x20, 0x6f, 0x0, 0x83, 0x60, 0x33, 0x30, 0xf0, 0x6, 0x66, 0xf0, 0x6, 0xc, 0xf0, 0x5, 0xc, 0xf0, 0x35, 0x3a, 0x44, 0xf0, 0xb4, 0x4f, 0x20, 0x4f, 0x10, 0xf4, 0x40, 0xf4, 0x4f, 0x20, 0x4f, 0x10, 0xf0, 0x40, 0x44, 0x40, 0x1f, 0x1b, 0x9f, 0x30, 0x4f, 0x20, 0x4f, 0x13, 0x40, 0x44, 0xf0, 0xb4, 0xf2, 0x4, 0x4, 0xf1, 0xf, 0x34, 0x4f, 0x10, 0x44, 0xf8, 0x4, 0x4f, 0x13, 0x40, 0x4f, 0x1b, 0x4f, 0x20, 0x44, 0xf0, 0x4, 0x44, 0xf0, 0x34, 0x40
};

const uint8_t PROGMEM officex_room0_0[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(0, TRIGGER_DOOR),
    xy(56, 60),

    // entity 1
    miscAndEntityType(0, POT),
    xy(16, 40),

    // entity 2
    miscAndEntityType(0, LOCK),
    xy(48, 48),
};



const uint8_t PROGMEM officex_room0_1[] = {
    5, // number of entities

    // entity 0
    miscAndEntityType(0, TRIGGER_DOOR),
    xy(48, 60),

    // entity 1
    miscAndEntityType(SLAM_SHUT, SNAKE),
    xy(80, 36),

    // entity 2
    miscAndEntityType(SLAM_SHUT, SNAKE),
    xy(16, 20),

    // entity 3
    miscAndEntityType(SLAM_SHUT, SNAKE),
    xy(32, 36),

    // entity 4
    miscAndEntityType(SLAM_SHUT, SNAKE),
    xy(64, 44),
};



const uint8_t PROGMEM officex_room0_2[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(0, BOSS_LOCK),
    xy(96, 20),
};



const uint8_t PROGMEM officex_room0_3[] = {
    4, // number of entities

    // entity 0
    miscAndEntityType(0, CHEST),
    xy(48, 20),

    // entity 1
    miscAndEntityType(0, CHEST),
    xy(80, 20),

    // entity 2
    miscAndEntityType(0, CHEST),
    xy(16, 20),

    // entity 3
    miscAndEntityType(OPEN_CHESTS_IN_RIGHT_ORDER, SUNKEN_BRIDGE),
    xy(8, 40),
};



const uint8_t PROGMEM officex_room0_4[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(0, TRIGGER_DOOR),
    xy(48, 56),

    // entity 1
    miscAndEntityType(0, TRIGGER_DOOR),
    xy(48, 0),
};



const uint8_t PROGMEM officex_room0_5[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(0, POT),
    xy(16, 36),
};



const uint8_t PROGMEM officex_room0_6[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(KEY, POT),
    xy(16, 28),

    // entity 1
    miscAndEntityType(0, SNAKE),
    xy(48, 52),

    // entity 2
    miscAndEntityType(0, SNAKE),
    xy(32, 8),
};



const uint8_t PROGMEM officex_room0_7[] = {
    5, // number of entities

    // entity 0
    miscAndEntityType(0, TELEPORTER),
    xy(48, 60),

    // entity 1
    miscAndEntityType(KEY, CHEST),
    xy(16, 16),

    // entity 2
    miscAndEntityType(0, SWITCH),
    xy(16, 44),

    // entity 3
    miscAndEntityType(0, SUNKEN_BRIDGE),
    xy(32, 32),

    // entity 4
    miscAndEntityType(0, POT),
    xy(72, 48),
};



const uint8_t PROGMEM officex_room1_0[] = {
    7, // number of entities

    // entity 0
    miscAndEntityType(0, LOCK),
    xy(0, 32),

    // entity 1
    miscAndEntityType(0, POT),
    xy(64, 16),

    // entity 2
    miscAndEntityType(0, BAT),
    xy(24, 12),

    // entity 3
    miscAndEntityType(0, BAT),
    xy(48, 52),

    // entity 4
    miscAndEntityType(0, BAT),
    xy(32, 28),

    // entity 5
    miscAndEntityType(0, BAT),
    xy(88, 8),

    // entity 6
    miscAndEntityType(0, BAT),
    xy(56, 12),
};



const uint8_t PROGMEM officex_room1_1[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(HEART, CHEST),
    xy(16, 16),

    // entity 1
    miscAndEntityType(0, SUNKEN_BRIDGE),
    xy(48, 16),

    // entity 2
    miscAndEntityType(0, SWITCH),
    xy(32, 32),
};



const uint8_t PROGMEM officex_room1_2[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(SLAM_SHUT, NEMESIS),
    xy(88, 20),

    // entity 1
    miscAndEntityType(VERTICAL, TRIGGER_DOOR),
    xy(0, 16),

    // entity 2
    miscAndEntityType(0, POT),
    xy(32, 36),
};



const uint8_t PROGMEM officex_room1_3[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(0, LOCK),
    xy(96, 16),
};



const uint8_t PROGMEM officex_room1_4[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(2, TELEPORTER),
    xy(48, 60),
};



const uint8_t PROGMEM officex_room1_5[] = {
    5, // number of entities

    // entity 0
    miscAndEntityType(0, POT),
    xy(96, 20),

    // entity 1
    miscAndEntityType(0, BAT),
    xy(48, 8),

    // entity 2
    miscAndEntityType(0, BAT),
    xy(80, 20),

    // entity 3
    miscAndEntityType(LAST_ENEMY_HAS_KEY, BAT),
    xy(96, 36),

    // entity 4
    miscAndEntityType(0, BAT),
    xy(0, 60),
};



const uint8_t PROGMEM officex_room1_6[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(0, LOCK),
    xy(96, 32),
};



const uint8_t PROGMEM officex_room1_7[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(0, BLOB),
    xy(96, 36),

    // entity 1
    miscAndEntityType(0, BLOB),
    xy(96, 44),

    // entity 2
    miscAndEntityType(KEY, CHEST),
    xy(80, 24),
};



const uint8_t PROGMEM officex_room2_0[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(0, SECRET_WALL),
    xy(0, 32),
};



const uint8_t PROGMEM officex_room2_1[] = {
    4, // number of entities

    // entity 0
    miscAndEntityType(0, TRIGGER_DOOR),
    xy(48, 60),

    // entity 1
    miscAndEntityType(SLAM_SHUT, GIANT_BAT),
    xy(48, 16),

    // entity 2
    miscAndEntityType(0, SUNKEN_BRIDGE),
    xy(80, 32),

    // entity 3
    miscAndEntityType(0, SUNKEN_BRIDGE),
    xy(16, 32),
};



const uint8_t PROGMEM officex_room2_2[] = {
    4, // number of entities

    // entity 0
    miscAndEntityType(0, BOSS_LOCK),
    xy(48, 0),

    // entity 1
    miscAndEntityType(0, SUNKEN_BRIDGE),
    xy(32, 36),

    // entity 2
    miscAndEntityType(0, SUNKEN_BRIDGE),
    xy(16, 32),

    // entity 3
    miscAndEntityType(0, SWITCH),
    xy(32, 8),
};



const uint8_t PROGMEM officex_room2_3[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(0, SWITCH),
    xy(96, 20),

    // entity 1
    miscAndEntityType(0, SUNKEN_BRIDGE),
    xy(16, 36),
};



const uint8_t PROGMEM officex_room2_4[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(0, LOCK),
    xy(96, 32),

    // entity 1
    miscAndEntityType(0, SNAKE),
    xy(16, 12),

    // entity 2
    miscAndEntityType(0, SNAKE),
    xy(40, 52),
};



const uint8_t PROGMEM officex_room2_5[] = {
    7, // number of entities

    // entity 0
    miscAndEntityType(LAST_ENEMY_HAS_BOSS_KEY, SKELETON),
    xy(16, 8),

    // entity 1
    miscAndEntityType(LAST_ENEMY_HAS_BOSS_KEY, SKELETON),
    xy(16, 52),

    // entity 2
    miscAndEntityType(LAST_ENEMY_HAS_BOSS_KEY, SNAKE),
    xy(48, 12),

    // entity 3
    miscAndEntityType(LAST_ENEMY_HAS_BOSS_KEY, BLOB),
    xy(56, 52),

    // entity 4
    miscAndEntityType(LAST_ENEMY_HAS_BOSS_KEY, SNAKE),
    xy(48, 24),

    // entity 5
    miscAndEntityType(LAST_ENEMY_HAS_BOSS_KEY, SNAKE),
    xy(32, 40),

    // entity 6
    miscAndEntityType(LAST_ENEMY_HAS_BOSS_KEY, SKELETON),
    xy(32, 52),
};



const uint8_t PROGMEM officex_room2_6[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(0, LOCK),
    xy(96, 32),

    // entity 1
    miscAndEntityType(0, BLOB),
    xy(56, 36),
};



const uint8_t PROGMEM officex_room2_7[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(LAST_ENEMY_HAS_BOSS_KEY, SNAKE),
    xy(48, 32),

    // entity 1
    miscAndEntityType(0, SNAKE),
    xy(48, 44),

    // entity 2
    miscAndEntityType(0, SNAKE),
    xy(32, 36),
};



const uint8_t PROGMEM officex_room3_0[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(LAST_TORCH_OPENS_DOORS, SPIKE),
    xy(32, 28),

    // entity 1
    miscAndEntityType(LAST_TORCH_OPENS_DOORS, SPIKE),
    xy(64, 48),
};



const uint8_t PROGMEM officex_room3_1[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(0, POT),
    xy(88, 52),

    // entity 1
    miscAndEntityType(SLAM_SHUT, GIANT_BAT),
    xy(16, 20),
};



const uint8_t PROGMEM officex_room3_3[] = {
    5, // number of entities

    // entity 0
    miscAndEntityType(LAST_ENEMY_HAS_BOSS_KEY, SKELETON),
    xy(16, 20),

    // entity 1
    miscAndEntityType(0, SNAKE),
    xy(16, 32),

    // entity 2
    miscAndEntityType(0, BLOB),
    xy(88, 20),

    // entity 3
    miscAndEntityType(0, SNAKE),
    xy(80, 48),

    // entity 4
    miscAndEntityType(0, SNAKE),
    xy(56, 28),
};



const uint8_t PROGMEM officex_room3_4[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(0, LOCK),
    xy(48, 0),

    // entity 1
    miscAndEntityType(0, SNAKE),
    xy(56, 40),
};



const uint8_t PROGMEM officex_room3_5[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(VERTICAL, TRIGGER_DOOR),
    xy(0, 32),

    // entity 1
    miscAndEntityType(VERTICAL, TRIGGER_DOOR),
    xy(104, 16),

    // entity 2
    miscAndEntityType(SLAM_SHUT, BLOB_MOTHER),
    xy(16, 36),
};



const uint8_t PROGMEM officex_room3_6[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(BOOMERANG, CHEST),
    xy(32, 24),

    // entity 1
    miscAndEntityType(VERTICAL, TRIGGER_DOOR),
    xy(0, 32),

    // entity 2
    miscAndEntityType(0, SWITCH),
    xy(80, 16),
};



const uint8_t PROGMEM officex_room3_7[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(0, SECRET_WALL),
    xy(0, 16),

    // entity 1
    miscAndEntityType(0, POT),
    xy(88, 36),

    // entity 2
    miscAndEntityType(0, POT),
    xy(24, 36),
};



const uint8_t PROGMEM officex_room4_0[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(VERTICAL, TRIGGER_DOOR),
    xy(32, 32),

    // entity 1
    miscAndEntityType(LAST_TORCH_OPENS_DOORS, TORCH),
    xy(16, 24),

    // entity 2
    miscAndEntityType(0, TORCH),
    xy(48, 52),
};



const uint8_t PROGMEM officex_room4_1[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(KEY, CHEST),
    xy(48, 12),
};



const uint8_t PROGMEM officex_room4_2[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(3, TELEPORTER),
    xy(112, 40),
};



const uint8_t PROGMEM officex_room4_3[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(1, TELEPORTER),
    xy(104, 40),

    // entity 1
    miscAndEntityType(0, BAT),
    xy(32, 24),
};



const uint8_t PROGMEM officex_room4_5[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(5, TELEPORTER),
    xy(8, 44),

    // entity 1
    miscAndEntityType(0, LOCK),
    xy(0, 16),
};



const uint8_t PROGMEM officex_room4_6[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(HEART, CHEST),
    xy(104, 40),
};



const uint8_t PROGMEM officex_room4_7[] = {
    4, // number of entities

    // entity 0
    miscAndEntityType(0, SWITCH),
    xy(64, 44),

    // entity 1
    miscAndEntityType(THREE_SWITCHES_ONE_BOOMERANG, SWITCH),
    xy(64, 16),

    // entity 2
    miscAndEntityType(0, SWITCH),
    xy(32, 16),

    // entity 3
    miscAndEntityType(0, SWITCH),
    xy(48, 44),
};



const uint8_t PROGMEM officex_room5_0[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(0, TORCH),
    xy(24, 20),

    // entity 1
    miscAndEntityType(0, SNAKE),
    xy(32, 12),

    // entity 2
    miscAndEntityType(0, SNAKE),
    xy(8, 28),
};



const uint8_t PROGMEM officex_room5_1[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(RING, CHEST),
    xy(8, 60),

    // entity 1
    miscAndEntityType(0, SKELETON),
    xy(32, 56),
};



const uint8_t PROGMEM officex_room5_2[] = {
    5, // number of entities

    // entity 0
    miscAndEntityType(4, TELEPORTER),
    xy(16, 40),

    // entity 1
    miscAndEntityType(0, LOCK),
    xy(32, 60),

    // entity 2
    miscAndEntityType(0, LOCK),
    xy(96, 32),

    // entity 3
    miscAndEntityType(0, SKELETON),
    xy(48, 36),

    // entity 4
    miscAndEntityType(0, SKELETON),
    xy(40, 36),
};



const uint8_t PROGMEM officex_room5_3[] = {
    5, // number of entities

    // entity 0
    miscAndEntityType(VERTICAL, TRIGGER_DOOR),
    xy(56, 12),

    // entity 1
    miscAndEntityType(0, TORCH),
    xy(24, 48),

    // entity 2
    miscAndEntityType(LAST_TORCH_OPENS_DOORS, TORCH),
    xy(80, 48),

    // entity 3
    miscAndEntityType(KEY, POT),
    xy(80, 20),

    // entity 4
    miscAndEntityType(0, SKELETON),
    xy(96, 48),
};



const uint8_t PROGMEM officex_room5_4[] = {
    6, // number of entities

    // entity 0
    miscAndEntityType(BOMB, CHEST),
    xy(16, 28),

    // entity 1
    miscAndEntityType(0, SPIKE),
    xy(40, 8),

    // entity 2
    miscAndEntityType(0, LOCK),
    xy(40, 60),

    // entity 3
    miscAndEntityType(0, SPIKE),
    xy(40, 48),

    // entity 4
    miscAndEntityType(0, SPIKE),
    xy(56, 8),

    // entity 5
    miscAndEntityType(0, SPIKE),
    xy(56, 48),
};



const uint8_t PROGMEM officex_room5_5[] = {
    8, // number of entities

    // entity 0
    miscAndEntityType(0, LOCK),
    xy(24, 0),

    // entity 1
    miscAndEntityType(0, SWITCH),
    xy(88, 16),

    // entity 2
    miscAndEntityType(0, SWITCH),
    xy(88, 36),

    // entity 3
    miscAndEntityType(0, SWITCH),
    xy(56, 36),

    // entity 4
    miscAndEntityType(THREE_SWITCHES_ONE_BOOMERANG, HEART),
    xy(96, 44),

    // entity 5
    miscAndEntityType(0, LOCK),
    xy(16, 40),

    // entity 6
    miscAndEntityType(0, SNAKE),
    xy(80, 44),

    // entity 7
    miscAndEntityType(0, SNAKE),
    xy(40, 44),
};



const uint8_t PROGMEM officex_room5_6[] = {
    10, // number of entities

    // entity 0
    miscAndEntityType(HEART, CHEST),
    xy(96, 40),

    // entity 1
    miscAndEntityType(KEY, POT),
    xy(16, 16),

    // entity 2
    miscAndEntityType(0, POT),
    xy(32, 16),

    // entity 3
    miscAndEntityType(0, POT),
    xy(64, 16),

    // entity 4
    miscAndEntityType(0, POT),
    xy(80, 16),

    // entity 5
    miscAndEntityType(0, CHEST),
    xy(72, 40),

    // entity 6
    miscAndEntityType(0, CHEST),
    xy(40, 40),

    // entity 7
    miscAndEntityType(0, CHEST),
    xy(56, 36),

    // entity 8
    miscAndEntityType(0, CHEST),
    xy(24, 44),

    // entity 9
    miscAndEntityType(0, LOCK),
    xy(40, 8),
};



const uint8_t PROGMEM officex_room5_7[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(0, BLOB),
    xy(48, 36),

    // entity 1
    miscAndEntityType(0, LOCK),
    xy(96, 32),

    // entity 2
    miscAndEntityType(OPEN_CHESTS_IN_RIGHT_ORDER, SUNKEN_BRIDGE),
    xy(80, 28),
};



const uint8_t PROGMEM officex_room6_0[] = {
    5, // number of entities

    // entity 0
    miscAndEntityType(7, TELEPORTER),
    xy(48, 60),

    // entity 1
    miscAndEntityType(0, TORCH),
    xy(80, 36),

    // entity 2
    miscAndEntityType(VERTICAL, TRIGGER_DOOR),
    xy(0, 32),

    // entity 3
    miscAndEntityType(VERTICAL, TRIGGER_DOOR),
    xy(104, 16),

    // entity 4
    miscAndEntityType(0, SWITCH),
    xy(24, 44),
};



const uint8_t PROGMEM officex_room6_2[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(0, SECRET_WALL),
    xy(64, 32),

    // entity 1
    miscAndEntityType(KEY, CHEST),
    xy(80, 20),
};



const uint8_t PROGMEM officex_room6_3[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(0, SECRET_WALL),
    xy(96, 16),
};



const uint8_t PROGMEM officex_room6_4[] = {
    4, // number of entities

    // entity 0
    miscAndEntityType(0, LOCK),
    xy(0, 16),

    // entity 1
    miscAndEntityType(0, BAT),
    xy(56, 32),

    // entity 2
    miscAndEntityType(0, BAT),
    xy(64, 40),

    // entity 3
    miscAndEntityType(0, BAT),
    xy(48, 44),
};



const uint8_t PROGMEM officex_room6_5[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(LAST_ENEMY_HAS_KEY, SNAKE),
    xy(16, 32),

    // entity 1
    miscAndEntityType(0, SNAKE),
    xy(80, 20),

    // entity 2
    miscAndEntityType(0, SNAKE),
    xy(96, 32),
};



const uint8_t PROGMEM officex_room6_6[] = {
    4, // number of entities

    // entity 0
    miscAndEntityType(0, SECRET_WALL),
    xy(0, 32),

    // entity 1
    miscAndEntityType(0, BAT),
    xy(56, 24),

    // entity 2
    miscAndEntityType(0, BAT),
    xy(24, 24),

    // entity 3
    miscAndEntityType(0, BAT),
    xy(88, 24),
};



const uint8_t PROGMEM officex_room6_7[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(0, LOCK),
    xy(96, 16),

    // entity 1
    miscAndEntityType(0, BLOB_MOTHER),
    xy(56, 44),
};



const uint8_t PROGMEM officex_room7_0[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(0, TORCH),
    xy(24, 12),

    // entity 1
    miscAndEntityType(KEY, CHEST),
    xy(64, 32),
};



const uint8_t PROGMEM officex_room7_1[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(VERTICAL, TRIGGER_DOOR),
    xy(0, 16),

    // entity 1
    miscAndEntityType(0, TRIGGER_DOOR),
    xy(48, 60),
};



const uint8_t PROGMEM officex_room7_2[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(0, BOSS_LOCK),
    xy(48, 4),

    // entity 1
    miscAndEntityType(BOMB, POT),
    xy(24, 28),

    // entity 2
    miscAndEntityType(BOMB, POT),
    xy(80, 28),
};



const uint8_t PROGMEM officex_room7_3[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(0, LOCK),
    xy(48, 0),

    // entity 1
    miscAndEntityType(0, SNAKE),
    xy(80, 44),

    // entity 2
    miscAndEntityType(0, SNAKE),
    xy(16, 48),
};



const uint8_t PROGMEM officex_room7_5[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(0, BLOB),
    xy(48, 20),
};



const uint8_t PROGMEM officex_room7_6[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(0, BOMB),
    xy(32, 16),

    // entity 1
    miscAndEntityType(0, HEART),
    xy(72, 16),

    // entity 2
    miscAndEntityType(6, TELEPORTER),
    xy(48, 60),
};



const uint8_t PROGMEM officex_room7_7[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(0, KEY),
    xy(80, 20),

    // entity 1
    miscAndEntityType(0, SPIKE),
    xy(48, 48),

    // entity 2
    miscAndEntityType(0, SPIKE),
    xy(48, 8),
};

const uint8_t PROGMEM officex_teleporters[] = {
    // dest x, dest y (in rooms)
    4, 5,
    3, 2,
    1, 3,
    1, 4,
    1, 4,
    4, 1,
    6, 1,
    4, 3,
};





const uint8_t * const PROGMEM officex_row0[8] = {
    officex_room0_0,
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
    officex_room1_1,
    officex_room2_1,
    officex_room3_1,
    officex_room4_1,
    officex_room5_1,
    empty_room,
    officex_room7_1
};


const uint8_t * const PROGMEM officex_row2[8] = {
    officex_room0_2,
    officex_room1_2,
    officex_room2_2,
    empty_room,
    officex_room4_2,
    officex_room5_2,
    officex_room6_2,
    officex_room7_2
};


const uint8_t * const PROGMEM officex_row3[8] = {
    officex_room0_3,
    officex_room1_3,
    officex_room2_3,
    officex_room3_3,
    officex_room4_3,
    officex_room5_3,
    officex_room6_3,
    officex_room7_3
};


const uint8_t * const PROGMEM officex_row4[8] = {
    officex_room0_4,
    officex_room1_4,
    officex_room2_4,
    officex_room3_4,
    empty_room,
    officex_room5_4,
    officex_room6_4,
    empty_room
};


const uint8_t * const PROGMEM officex_row5[8] = {
    officex_room0_5,
    officex_room1_5,
    officex_room2_5,
    officex_room3_5,
    officex_room4_5,
    officex_room5_5,
    officex_room6_5,
    officex_room7_5
};


const uint8_t * const PROGMEM officex_row6[8] = {
    officex_room0_6,
    officex_room1_6,
    officex_room2_6,
    officex_room3_6,
    officex_room4_6,
    officex_room5_6,
    officex_room6_6,
    officex_room7_6
};


const uint8_t * const PROGMEM officex_row7[8] = {
    officex_room0_7,
    officex_room1_7,
    officex_room2_7,
    officex_room3_7,
    officex_room4_7,
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