#ifndef spriteBitmaps_h
#define spriteBitmaps_h

const uint8_t PROGMEM bat_plus_mask[] = {
    // width, height,
    8, 8,
    // frame 0 
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    // mask 0 
    0x38,0x1c,0x16,0x38,0x38,0x16,0x1c,0x38,
    // frame 1 
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    // mask 1 
    0x00,0x70,0xbc,0x38,0x38,0xbc,0x70,0x00,
};

const uint8_t PROGMEM blobMother_plus_mask[] = {
    // width, height,
    16, 16,
    // frame 0 
    0x00,0x00,0xe0,0xf0,0x38,0x3c,0xfc,0x3c,0x3c,0xfc,0xfc,0xd8,0xf0,0xe0,0x00,0x00,0x00,0x1c,0x37,0x2f,0x3e,0x3e,0x3f,0x3e,0x3e,0x3f,0x3f,0x3f,0x3f,0x2f,0x3c,0x00,
    // mask 0 
    0x00,0xe0,0xf0,0xf8,0xfc,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfc,0xf8,0xf0,0xe0,0x00,0x3c,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x3c,
};

const uint8_t PROGMEM blob_plus_mask[] = {
    // width, height,
    8, 8,
    // frame 0 
    0x00,0x3c,0x66,0x7e,0x66,0x7e,0x3c,0x00,
    // mask 0 
    0x3c,0x7e,0xff,0xff,0xff,0xff,0x7e,0x3c,
    // frame 1 
    0x00,0x78,0x48,0x78,0x48,0x78,0x78,0x00,
    // mask 1 
    0x78,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0x78,
};

const uint8_t PROGMEM ghost_plus_mask[] = {
    // width, height,
    8, 16,
    // frame 0 
    0xf0,0x0c,0xf2,0x9a,0xfa,0x92,0x0c,0xf0,0x7f,0x00,0x2f,0x5f,0x3f,0x4f,0x20,0x7f,
    // mask 0 
    0xf0,0xfc,0xfe,0xfe,0xfe,0xfe,0xfc,0xf0,0x7f,0x3f,0x3f,0x7f,0x3f,0x7f,0x3f,0x7f,
};

const uint8_t PROGMEM heart_plus_mask[] = {
    // width, height,
    7, 8,
    // frame 0 
    0x00,0x0c,0x1c,0x38,0x1c,0x0c,0x00,
    // mask 0 
    0x0c,0x1e,0x3e,0x7c,0x3e,0x1e,0x0c,
};

const uint8_t PROGMEM itemIcons_plus_mask[] = {
    // width, height,
    10, 16,
    // frame 0 
    0x00,0x00,0x00,0x00,0x00,0x80,0xc0,0xe0,0x60,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x01,0x00,0x00,0x00,
    // mask 0 
    0x00,0x00,0x00,0x00,0x80,0xc0,0xe0,0xf0,0xf0,0x70,0x10,0x38,0x1d,0x0f,0x07,0x0f,0x03,0x01,0x00,0x00,
    // frame 1 
    0x00,0xc0,0xe0,0xf0,0xf0,0x70,0x30,0x30,0x30,0x00,0x00,0x0f,0x0f,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
    // mask 1 
    0xc0,0xe0,0xf0,0xf8,0xf8,0xf8,0x78,0x78,0x78,0x30,0x0f,0x1f,0x1f,0x0f,0x01,0x00,0x00,0x00,0x00,0x00,
    // frame 2 
    0x00,0x00,0x00,0x40,0x40,0x80,0x00,0x00,0x00,0x00,0x00,0x07,0x0f,0x08,0x00,0x00,0x00,0x00,0x00,0x00,
    // mask 2 
    0x00,0x80,0xc0,0xf0,0xe8,0xc8,0x88,0x10,0x00,0x00,0x07,0x0f,0x1f,0x1f,0x1f,0x1f,0x0f,0x07,0x00,0x00,
    // frame 3 
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x0c,0x00,
    // mask 3 
    0x00,0x00,0x00,0xc0,0xd8,0xe0,0x00,0x00,0x00,0x00,0x08,0x18,0x18,0x1f,0x1f,0x1f,0x18,0x1c,0x1e,0x0c,
    // frame 4 
    0x00,0x00,0x78,0xcc,0x84,0x84,0xcc,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0x1f,0x18,0x00,0x00,0x00,
    // mask 4 
    0x00,0x78,0xfc,0xfe,0xce,0xce,0xfe,0xfc,0x78,0x00,0x00,0x00,0x00,0x3f,0x3f,0x3f,0x3f,0x3c,0x00,0x00,
    // frame 5 
    0x00,0x00,0xc0,0xc0,0x80,0x00,0x80,0xc0,0xc0,0x00,0x00,0x00,0x01,0x02,0x04,0x08,0x04,0x02,0x01,0x00,
    // mask 5 
    0x00,0xc0,0xe0,0xe0,0xc0,0x80,0xc0,0xe0,0xe0,0xc0,0x00,0x01,0x03,0x07,0x0f,0x1f,0x0f,0x07,0x03,0x01,
};

const uint8_t PROGMEM key_plus_mask[] = {
    // width, height,
    5, 8,
    // frame 0 
    0x0e,0xf1,0x85,0x91,0xee,
    // mask 0 
    0x0e,0xff,0xff,0xff,0xee,
};

const uint8_t PROGMEM player_plus_mask[] = {
    // width, height,
    16, 16,
    // frame 0 
    0x00,0xf8,0x24,0x42,0xf1,0x81,0xe1,0xf1,0xe1,0x01,0x35,0x19,0x02,0x04,0xf8,0x00,0x00,0x00,0x01,0x3e,0x60,0xd9,0x99,0x9d,0x86,0x86,0x9a,0x9c,0xe0,0x10,0x0f,0x00,
    // mask 0 
    0x00,0xf8,0xfc,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfc,0xf8,0x00,0x00,0x00,0x01,0x3f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0x0f,0x00,
    // frame 1 
    0x00,0xf0,0x48,0x84,0xe2,0x02,0xc2,0xe2,0xc2,0x02,0x6a,0x32,0x04,0x08,0xf0,0x00,0x00,0x01,0x1a,0xe4,0x99,0x83,0x9b,0x9b,0x9d,0x9c,0x9c,0x80,0x98,0xd8,0x27,0x18,
    // mask 1 
    0x00,0xf0,0xf8,0xfc,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfc,0xf8,0xf0,0x00,0x00,0x01,0x1b,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x18,
    // frame 2 
    0x00,0xe0,0x18,0x64,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x64,0x18,0xe0,0x00,0x00,0x07,0x78,0x88,0x90,0xb0,0xb0,0xb0,0xb0,0xb0,0x90,0x90,0xc0,0x32,0x0d,0x00,
    // mask 2 
    0x00,0xe0,0xf8,0xfc,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfc,0xf8,0xe0,0x00,0x00,0x07,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x0d,0x00,
    // frame 3 
    0xf0,0x08,0x04,0x62,0x81,0x81,0x01,0x81,0x81,0x01,0x81,0x81,0x62,0x04,0xf8,0x00,0x0f,0x10,0x6c,0x86,0x91,0x9b,0x9a,0xbb,0xbb,0xa2,0x9b,0x99,0xee,0x10,0x0f,0x00,
    // mask 3 
    0xf0,0xf8,0xfc,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfc,0xf8,0x00,0x0f,0x1f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0x0f,0x00,
    // frame 4 
    0xf0,0x48,0x84,0xe2,0x02,0xc2,0xe2,0xc2,0x02,0x6a,0x32,0x04,0x08,0xf0,0x00,0x00,0x25,0x26,0x44,0x41,0x9b,0x83,0x9b,0x9d,0x9c,0x9c,0x98,0x80,0x98,0x5f,0x24,0x18,
    // mask 4 
    0xf0,0xf8,0xfc,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfc,0xf8,0xf0,0x00,0x00,0x3d,0x3f,0x7f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x3c,0x18,
    // frame 5 
    0x00,0xf0,0x0c,0x32,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x32,0x0c,0xf0,0x00,0x00,0x07,0x18,0x20,0x40,0x90,0xb0,0xb0,0xb0,0xb0,0x90,0x90,0xc0,0x32,0x0d,0x00,
    // mask 5 
    0x00,0xf0,0xfc,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfc,0xf0,0x00,0x00,0x07,0x1f,0x3f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x0d,0x00,
    // frame 6 
    0xe0,0x10,0x08,0xc4,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0xc4,0x08,0xf0,0x00,0x07,0x08,0x18,0x2c,0x53,0x57,0x54,0xb7,0xb7,0xb4,0x97,0x83,0x80,0xf0,0x0f,0x00,
    // mask 6 
    0xe0,0xf0,0xf8,0xfc,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfc,0xf8,0xf0,0x00,0x07,0x0f,0x1f,0x3f,0x7f,0x7f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0x00,
    // frame 7 
    0xe0,0x10,0x08,0x04,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x04,0x08,0xf0,0x00,0x07,0x08,0x18,0x20,0x43,0x46,0x54,0x54,0x54,0x54,0x56,0x43,0x40,0x30,0x0f,0x00,
    // mask 7 
    0xe0,0xf0,0xf8,0xfc,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfc,0xf8,0xf0,0x00,0x07,0x0f,0x1f,0x3f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x3f,0x0f,0x00,
};

const uint8_t PROGMEM skeleton_plus_mask[] = {
    // width, height,
    15, 16,
    // frame 0 
    0x00,0x80,0x00,0x00,0x3c,0x66,0xe6,0xbe,0xbe,0xe6,0x66,0x3c,0x00,0x00,0x00,0x00,0x43,0x6b,0x09,0x08,0x00,0x11,0x14,0x14,0x05,0x60,0x41,0x04,0x06,0x00,
    // mask 0 
    0xc0,0xc0,0xe0,0xfc,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfc,0x80,0x00,0xe7,0xff,0xff,0xff,0x1f,0x3f,0x3f,0x3f,0x3f,0xff,0xff,0xff,0xcf,0x0f,0x0f,
};

const uint8_t PROGMEM sword_plus_mask[] = {
    // width, height,
    15, 16,
    // frame 0 
    0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,
    // mask 0 
    0x80,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xe0,0xc0,0x80,0x80,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x07,0x03,0x01,0x01,
    // frame 1 
    0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    // mask 1 
    0x00,0x00,0x00,0x00,0x08,0xfc,0xff,0xff,0xfc,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,0x7f,0x7f,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,
};

#endif