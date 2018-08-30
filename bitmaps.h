#ifndef bitmaps_h
#define bitmaps_h

const unsigned char PROGMEM bat_tiles[] = {
    // width, height,
    8, 8,
    // FRAME 00
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    // FRAME 01
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const unsigned char PROGMEM bat_mask[] = {
    // FRAME 00
    0x38, 0x1c, 0x1e, 0x38, 0x38, 0x1e, 0x1c, 0x38, 
    // FRAME 01
    0x00, 0x70, 0xbf, 0x38, 0x38, 0xbf, 0x70, 0x00,
};

const unsigned char PROGMEM bat_plus_mask[] = {
    // width, height,
    8, 8,
    // FRAME 00
    0x00, 0x38, 0x00, 0x1c, 0x00, 0x1e, 0x00, 0x38, 
    0x00, 0x38, 0x00, 0x1e, 0x00, 0x1c, 0x00, 0x38, 
    
    // FRAME 01
    0x00, 0x00, 0x00, 0x70, 0x00, 0xbf, 0x00, 0x38, 
    0x00, 0x38, 0x00, 0xbf, 0x00, 0x70, 0x00, 0x00,
};

const unsigned char PROGMEM blob_tiles[] = {
    // width, height,
    8, 8,
    // FRAME 00
    0x00, 0x3c, 0x66, 0x7e, 0x66, 0x7e, 0x3c, 0x00, 
    // FRAME 01
    0x00, 0x78, 0x48, 0x78, 0x48, 0x78, 0x78, 0x00,
};

const unsigned char PROGMEM blob_mask[] = {
    // FRAME 00
    0x3c, 0x7e, 0xff, 0xff, 0xff, 0xff, 0x7e, 0x3c, 
    // FRAME 01
    0x78, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0x78,
};

const unsigned char PROGMEM blob_plus_mask[] = {
    // width, height,
    8, 8,
    // FRAME 00
    0x00, 0x3c, 0x3c, 0x7e, 0x66, 0xff, 0x7e, 0xff, 
    0x66, 0xff, 0x7e, 0xff, 0x3c, 0x7e, 0x00, 0x3c, 
    
    // FRAME 01
    0x00, 0x78, 0x78, 0xfc, 0x48, 0xfc, 0x78, 0xfc, 
    0x48, 0xfc, 0x78, 0xfc, 0x78, 0xfc, 0x00, 0x78,
};

const unsigned char PROGMEM chest_tiles[] = {
    // width, height,
    16, 16,
    // FRAME 00
    0x00, 0xfe, 0xfe, 0x01, 0xad, 0x2d, 0xad, 0x2d, 0xad, 0x2d, 0xad, 0x2d, 0x01, 0xfe, 0xfe, 0x00, 
    0x00, 0x13, 0x17, 0x10, 0x12, 0x05, 0x3a, 0x49, 0x4a, 0x39, 0x02, 0x15, 0x10, 0x17, 0x13, 0x00, 
    // FRAME 01
    0x00, 0xf8, 0x2c, 0x14, 0x2c, 0x14, 0x2c, 0x14, 0x2c, 0x14, 0x2c, 0x14, 0x2c, 0x14, 0xf8, 0x00, 
    0x00, 0x07, 0x0c, 0x0c, 0x0c, 0x0c, 0x3c, 0x3c, 0x3c, 0x3c, 0x0c, 0x0c, 0x0c, 0x0c, 0x07, 0x00,
};

const unsigned char PROGMEM chest_mask[] = {
    // FRAME 00
    0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 
    0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 
    // FRAME 01
    0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 
    0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f,
};

const unsigned char PROGMEM chest_plus_mask[] = {
    // width, height,
    16, 16,
    // FRAME 00
    0x00, 0xfe, 0xfe, 0xff, 0xfe, 0xff, 0x01, 0xff, 0xad, 0xff, 0x2d, 0xff, 0xad, 0xff, 0x2d, 0xff, 
    0xad, 0xff, 0x2d, 0xff, 0xad, 0xff, 0x2d, 0xff, 0x01, 0xff, 0xfe, 0xff, 0xfe, 0xff, 0x00, 0xfe, 
    0x00, 0x7f, 0x13, 0xff, 0x17, 0xff, 0x10, 0xff, 0x12, 0xff, 0x05, 0xff, 0x3a, 0xff, 0x49, 0xff, 
    0x4a, 0xff, 0x39, 0xff, 0x02, 0xff, 0x15, 0xff, 0x10, 0xff, 0x17, 0xff, 0x13, 0xff, 0x00, 0x7f, 
    
    // FRAME 01
    0x00, 0xfc, 0xf8, 0xff, 0x2c, 0xff, 0x14, 0xff, 0x2c, 0xff, 0x14, 0xff, 0x2c, 0xff, 0x14, 0xff, 
    0x2c, 0xff, 0x14, 0xff, 0x2c, 0xff, 0x14, 0xff, 0x2c, 0xff, 0x14, 0xff, 0xf8, 0xff, 0x00, 0xfc, 
    0x00, 0x7f, 0x07, 0xff, 0x0c, 0xff, 0x0c, 0xff, 0x0c, 0xff, 0x0c, 0xff, 0x3c, 0xff, 0x3c, 0xff, 
    0x3c, 0xff, 0x3c, 0xff, 0x0c, 0xff, 0x0c, 0xff, 0x0c, 0xff, 0x0c, 0xff, 0x07, 0xff, 0x00, 0x7f,
};

const unsigned char PROGMEM dungeon_tiles[] = {
    // width, height,
    16, 16,
    // FRAME 00
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    // FRAME 01
    0x00, 0xfc, 0xf8, 0xf2, 0xe6, 0x0e, 0x9e, 0x1e, 0x5e, 0xde, 0xc0, 0xde, 0xde, 0x1e, 0xde, 0xde, 
    0x00, 0xdf, 0xdf, 0xdf, 0xdf, 0x00, 0xfb, 0xfb, 0xfa, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 
    // FRAME 02
    0x00, 0xdf, 0xdf, 0xdf, 0xdf, 0x00, 0xfb, 0xfb, 0xfb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0xdf, 0xdf, 0xdf, 0xdf, 0x00, 0xfb, 0xfb, 0xfb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    // FRAME 03
    0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x80, 0x80, 
    0x7b, 0x7b, 0x03, 0x7b, 0x7b, 0x78, 0x7b, 0x7b, 0x7b, 0x7b, 0x03, 0x7b, 0x7b, 0x78, 0x7b, 0x7b, 
    // FRAME 04
    0x00, 0xa6, 0x50, 0x28, 0x50, 0xa3, 0x42, 0x81, 0xca, 0xdf, 0x8a, 0x85, 0x8a, 0xbf, 0x0a, 0x00, 
    0x00, 0x68, 0x50, 0x60, 0x05, 0x42, 0x45, 0x00, 0x03, 0x0a, 0x1f, 0x0a, 0x07, 0x2a, 0x1f, 0x00, 
    // FRAME 05
    0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 
    0x00, 0x00, 0x00, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x00, 0x00, 0x00, 
    // FRAME 06
    0x30, 0x30, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 
    0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x0c, 0x0c, 0x0c, 0x00, 0x00, 0xc0, 0xc0, 
    // FRAME 07
    0xce, 0x6e, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x6e, 0xce, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const unsigned char PROGMEM dungeon_mask[] = {
    // FRAME 00
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    // FRAME 01
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    // FRAME 02
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    // FRAME 03
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    // FRAME 04
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    // FRAME 05
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    // FRAME 06
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    // FRAME 07
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
};

const unsigned char PROGMEM dungeon_plus_mask[] = {
    // width, height,
    16, 16,
    // FRAME 00
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
    
    // FRAME 01
    0x00, 0xff, 0xfc, 0xff, 0xf8, 0xff, 0xf2, 0xff, 0xe6, 0xff, 0x0e, 0xff, 0x9e, 0xff, 0x1e, 0xff, 
    0x5e, 0xff, 0xde, 0xff, 0xc0, 0xff, 0xde, 0xff, 0xde, 0xff, 0x1e, 0xff, 0xde, 0xff, 0xde, 0xff, 
    0x00, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0x00, 0xff, 0xfb, 0xff, 0xfb, 0xff, 
    0xfa, 0xff, 0x00, 0xff, 0x01, 0xff, 0x01, 0xff, 0x01, 0xff, 0x00, 0xff, 0x01, 0xff, 0x01, 0xff, 
    
    // FRAME 02
    0x00, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0x00, 0xff, 0xfb, 0xff, 0xfb, 0xff, 
    0xfb, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
    0x00, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0x00, 0xff, 0xfb, 0xff, 0xfb, 0xff, 
    0xfb, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
    
    // FRAME 03
    0x80, 0xff, 0x80, 0xff, 0x80, 0xff, 0x80, 0xff, 0x80, 0xff, 0x00, 0xff, 0x80, 0xff, 0x80, 0xff, 
    0x80, 0xff, 0x80, 0xff, 0x80, 0xff, 0x80, 0xff, 0x80, 0xff, 0x00, 0xff, 0x80, 0xff, 0x80, 0xff, 
    0x7b, 0xff, 0x7b, 0xff, 0x03, 0xff, 0x7b, 0xff, 0x7b, 0xff, 0x78, 0xff, 0x7b, 0xff, 0x7b, 0xff, 
    0x7b, 0xff, 0x7b, 0xff, 0x03, 0xff, 0x7b, 0xff, 0x7b, 0xff, 0x78, 0xff, 0x7b, 0xff, 0x7b, 0xff, 
    
    // FRAME 04
    0x00, 0xff, 0xa6, 0xff, 0x50, 0xff, 0x28, 0xff, 0x50, 0xff, 0xa3, 0xff, 0x42, 0xff, 0x81, 0xff, 
    0xca, 0xff, 0xdf, 0xff, 0x8a, 0xff, 0x85, 0xff, 0x8a, 0xff, 0xbf, 0xff, 0x0a, 0xff, 0x00, 0xff, 
    0x00, 0xff, 0x68, 0xff, 0x50, 0xff, 0x60, 0xff, 0x05, 0xff, 0x42, 0xff, 0x45, 0xff, 0x00, 0xff, 
    0x03, 0xff, 0x0a, 0xff, 0x1f, 0xff, 0x0a, 0xff, 0x07, 0xff, 0x2a, 0xff, 0x1f, 0xff, 0x00, 0xff, 
    
    // FRAME 05
    0x00, 0xff, 0x80, 0xff, 0x80, 0xff, 0x80, 0xff, 0x80, 0xff, 0x80, 0xff, 0x80, 0xff, 0x80, 0xff, 
    0x80, 0xff, 0x80, 0xff, 0x80, 0xff, 0x80, 0xff, 0x80, 0xff, 0x80, 0xff, 0x80, 0xff, 0x00, 0xff, 
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0xaa, 0xff, 0xaa, 0xff, 0xaa, 0xff, 0xaa, 0xff, 0xaa, 0xff, 
    0xaa, 0xff, 0xaa, 0xff, 0xaa, 0xff, 0xaa, 0xff, 0xaa, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
    
    // FRAME 06
    0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x30, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
    0x00, 0xff, 0x00, 0xff, 0x0c, 0xff, 0x0c, 0xff, 0x0c, 0xff, 0x0c, 0xff, 0x0c, 0xff, 0x0c, 0xff, 
    0xc0, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
    0x0c, 0xff, 0x0c, 0xff, 0x0c, 0xff, 0x0c, 0xff, 0x00, 0xff, 0x00, 0xff, 0xc0, 0xff, 0xc0, 0xff, 
    
    // FRAME 07
    0xce, 0xff, 0x6e, 0xff, 0x06, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x06, 0xff, 0x6e, 0xff, 0xce, 0xff, 
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
};

const unsigned char PROGMEM ghost_tiles[] = {
    // width, height,
    8, 16,
    // FRAME 00
    0xf0, 0x0c, 0xf2, 0x9a, 0xfa, 0x92, 0x0c, 0xf0, 
    0x7f, 0x00, 0x2f, 0x5f, 0x3f, 0x4f, 0x20, 0x7f,
};

const unsigned char PROGMEM ghost_mask[] = {
    // FRAME 00
    0xf0, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xf0, 
    0x7f, 0x3f, 0x3f, 0x7f, 0x3f, 0x7f, 0x3f, 0x7f,
};

const unsigned char PROGMEM ghost_plus_mask[] = {
    // width, height,
    8, 16,
    // FRAME 00
    0xf0, 0xf0, 0x0c, 0xfc, 0xf2, 0xfe, 0x9a, 0xfe, 
    0xfa, 0xfe, 0x92, 0xfe, 0x0c, 0xfc, 0xf0, 0xf0, 
    0x7f, 0x7f, 0x00, 0x3f, 0x2f, 0x3f, 0x5f, 0x7f, 
    0x3f, 0x3f, 0x4f, 0x7f, 0x20, 0x3f, 0x7f, 0x7f,
};

const unsigned char PROGMEM heartDot_tiles[] = {
    // width, height,
    3, 8,
    // FRAME 00
    0x03, 0x06, 0x03, 
    // FRAME 01
    0x04, 0x04, 0x04,
};

const unsigned char PROGMEM heartDot_mask[] = {
    // FRAME 00
    0xff, 0xff, 0xff, 
    // FRAME 01
    0xff, 0xff, 0xff,
};

const unsigned char PROGMEM heartDot_plus_mask[] = {
    // width, height,
    3, 8,
    // FRAME 00
    0x03, 0xff, 0x06, 
    0xff, 0x03, 0xff, 
    
    // FRAME 01
    0x04, 0xff, 0x04, 
    0xff, 0x04, 0xff,
};

const unsigned char PROGMEM heart_tiles[] = {
    // width, height,
    7, 8,
    // FRAME 00
    0x00, 0x0c, 0x1c, 0x38, 0x1c, 0x0c, 0x00,
};

const unsigned char PROGMEM heart_mask[] = {
    // FRAME 00
    0x0c, 0x1e, 0x3e, 0x7c, 0x3e, 0x1e, 0x0c,
};

const unsigned char PROGMEM heart_plus_mask[] = {
    // width, height,
    7, 8,
    // FRAME 00
    0x00, 0x0c, 0x0c, 0x1e, 0x1c, 0x3e, 0x38, 
    0x7c, 0x1c, 0x3e, 0x0c, 0x1e, 0x00, 0x0c,
};

const unsigned char PROGMEM hudBFrame_tiles[] = {
    // width, height,
    15, 16,
    // FRAME 00
    0x1f, 0x15, 0x0a, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 
    0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40,
};

const unsigned char PROGMEM hudBFrame_mask[] = {
    // FRAME 00
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
};

const unsigned char PROGMEM hudBFrame_plus_mask[] = {
    // width, height,
    15, 16,
    // FRAME 00
    0x1f, 0xff, 0x15, 0xff, 0x0a, 0xff, 0x00, 0xff, 0x01, 0xff, 0x01, 0xff, 0x01, 0xff, 0x01, 
    0xff, 0x01, 0xff, 0x01, 0xff, 0x01, 0xff, 0x01, 0xff, 0x01, 0xff, 0x01, 0xff, 0x02, 0xff, 
    0x40, 0xff, 0x80, 0xff, 0x80, 0xff, 0x80, 0xff, 0x80, 0xff, 0x80, 0xff, 0x80, 0xff, 0x80, 
    0xff, 0x80, 0xff, 0x80, 0xff, 0x80, 0xff, 0x80, 0xff, 0x80, 0xff, 0x80, 0xff, 0x40, 0xff,
};

const unsigned char PROGMEM itemIcons_tiles[] = {
    // width, height,
    11, 16,
    // FRAME 00
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0x70, 0x30, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 
    // FRAME 01
    0x00, 0xc0, 0xe0, 0xf0, 0xf0, 0x70, 0x30, 0x30, 0x30, 0x30, 0x00, 
    0x00, 0x1f, 0x1f, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    // FRAME 02
    0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x07, 0x0f, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    // FRAME 03
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00,
};

const unsigned char PROGMEM itemIcons_mask[] = {
    // FRAME 00
    0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0xf0, 0xf8, 0x78, 0x38, 
    0x10, 0x38, 0x1d, 0x0f, 0x07, 0x0f, 0x03, 0x01, 0x00, 0x00, 0x00, 
    // FRAME 01
    0xc0, 0xe0, 0xf0, 0xf8, 0xf8, 0xf8, 0x78, 0x78, 0x78, 0x78, 0x30, 
    0x1f, 0x3f, 0x3f, 0x1f, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    // FRAME 02
    0x00, 0x00, 0x80, 0xc0, 0xf0, 0xe8, 0xc8, 0x88, 0x10, 0x00, 0x00, 
    0x00, 0x07, 0x0f, 0x1f, 0x1f, 0x1f, 0x1f, 0x0f, 0x07, 0x00, 0x00, 
    // FRAME 03
    0x00, 0x00, 0x00, 0xc0, 0xd8, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x08, 0x18, 0x18, 0x1f, 0x1f, 0x1f, 0x18, 0x1c, 0x1e, 0x0c, 0x00,
};

const unsigned char PROGMEM itemIcons_plus_mask[] = {
    // width, height,
    11, 16,
    // FRAME 00
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 
    0xc0, 0xc0, 0xe0, 0xe0, 0xf0, 0x70, 0xf8, 0x30, 0x78, 0x00, 0x38, 
    0x00, 0x10, 0x00, 0x38, 0x00, 0x1d, 0x00, 0x0f, 0x01, 0x07, 0x03, 
    0x0f, 0x01, 0x03, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    
    // FRAME 01
    0x00, 0xc0, 0xc0, 0xe0, 0xe0, 0xf0, 0xf0, 0xf8, 0xf0, 0xf8, 0x70, 
    0xf8, 0x30, 0x78, 0x30, 0x78, 0x30, 0x78, 0x30, 0x78, 0x00, 0x30, 
    0x00, 0x1f, 0x1f, 0x3f, 0x1f, 0x3f, 0x01, 0x1f, 0x00, 0x01, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    
    // FRAME 02
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0xc0, 0x40, 0xf0, 0x40, 
    0xe8, 0x80, 0xc8, 0x00, 0x88, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x07, 0x07, 0x0f, 0x0f, 0x1f, 0x08, 0x1f, 0x00, 
    0x1f, 0x00, 0x1f, 0x00, 0x0f, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 
    
    // FRAME 03
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0xd8, 0x00, 
    0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x08, 0x00, 0x18, 0x00, 0x18, 0x00, 0x1f, 0x07, 0x1f, 0x00, 
    0x1f, 0x00, 0x18, 0x00, 0x1c, 0x0c, 0x1e, 0x00, 0x0c, 0x00, 0x00,
};

const unsigned char PROGMEM key_tiles[] = {
    // width, height,
    5, 8,
    // FRAME 00
    0x0e, 0xf1, 0x85, 0x91, 0xee,
};

const unsigned char PROGMEM key_mask[] = {
    // FRAME 00
    0x0e, 0xff, 0xff, 0xff, 0xee,
};

const unsigned char PROGMEM key_plus_mask[] = {
    // width, height,
    5, 8,
    // FRAME 00
    0x0e, 0x0e, 0xf1, 0xff, 0x85, 
    0xff, 0x91, 0xff, 0xee, 0xee,
};

const unsigned char PROGMEM lock_tiles[] = {
    // width, height,
    8, 8,
    // FRAME 00
    0xff, 0x81, 0x8d, 0xbd, 0xbd, 0x8d, 0x81, 0xff,
};

const unsigned char PROGMEM lock_mask[] = {
    // FRAME 00
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
};

const unsigned char PROGMEM lock_plus_mask[] = {
    // width, height,
    8, 8,
    // FRAME 00
    0xff, 0xff, 0x81, 0xff, 0x8d, 0xff, 0xbd, 0xff, 
    0xbd, 0xff, 0x8d, 0xff, 0x81, 0xff, 0xff, 0xff,
};

const unsigned char PROGMEM oldMan_tiles[] = {
    // width, height,
    8, 16,
    // FRAME 00
    0x00, 0x00, 0x3c, 0x26, 0x1c, 0x24, 0x00, 0x00, 
    0x00, 0x04, 0xae, 0x2c, 0xac, 0x23, 0x00, 0x00,
};

const unsigned char PROGMEM oldMan_mask[] = {
    // FRAME 00
    0x7e, 0xff, 0xff, 0xff, 0xff, 0xff, 0x67, 0x00, 
    0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
};

const unsigned char PROGMEM oldMan_plus_mask[] = {
    // width, height,
    8, 16,
    // FRAME 00
    0x00, 0x7e, 0x00, 0xff, 0x3c, 0xff, 0x26, 0xff, 
    0x1c, 0xff, 0x24, 0xff, 0x00, 0x67, 0x00, 0x00, 
    0x00, 0xfe, 0x04, 0xff, 0xae, 0xff, 0x2c, 0xff, 
    0xac, 0xff, 0x23, 0xff, 0x00, 0xff, 0x00, 0x00,
};

const unsigned char PROGMEM overworld_tiles[] = {
    // width, height,
    16, 16,
    // FRAME 00
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    // FRAME 01
    0x00, 0xc0, 0xa0, 0xc0, 0x80, 0x40, 0x06, 0x0c, 0x16, 0x5a, 0x14, 0x9c, 0x54, 0x88, 0x80, 0x04, 
    0x00, 0x41, 0x2f, 0x06, 0x01, 0x32, 0x40, 0x00, 0x00, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
    // FRAME 02
    0x30, 0xf8, 0x78, 0x10, 0x00, 0x08, 0xbc, 0x28, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0x00, 0xf8, 0xa5, 0x5a, 0x38, 0x34, 0x38, 0x29, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    // FRAME 03
    0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 
    0x01, 0x29, 0x1c, 0x28, 0x08, 0x20, 0x14, 0x60, 0x38, 0x3d, 0x35, 0x78, 0x00, 0x06, 0x51, 0x20, 
    // FRAME 04
    0x00, 0xa6, 0x50, 0x28, 0x50, 0xa3, 0x42, 0x81, 0xca, 0xdf, 0x8a, 0x85, 0x8a, 0xbf, 0x0a, 0x00, 
    0x00, 0x68, 0x50, 0x60, 0x05, 0x42, 0x45, 0x00, 0x03, 0x0a, 0x1f, 0x0a, 0x07, 0x2a, 0x1f, 0x00, 
    // FRAME 05
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0x78, 0x5f, 0x57, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x57, 0x5f, 0x78, 
    // FRAME 06
    0x40, 0x00, 0x10, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x40, 
    0x80, 0x08, 0x08, 0x40, 0x40, 0x02, 0x02, 0x00, 0x10, 0x10, 0x00, 0x00, 0x04, 0x04, 0x00, 0x80, 
    // FRAME 07
    0x0a, 0x5c, 0xaa, 0x0e, 0x04, 0x06, 0x06, 0x02, 0x04, 0x04, 0x06, 0x06, 0x0c, 0xb6, 0x5a, 0x14, 
    0xc0, 0xb5, 0x9b, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x9b, 0xb5, 0xc0, 
    // FRAME 08
    0xff, 0xff, 0xbf, 0xdf, 0xbf, 0xdf, 0xef, 0xff, 0xff, 0xff, 0x7f, 0xbf, 0x7f, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xf7, 0xeb, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff,
};

const unsigned char PROGMEM overworld_mask[] = {
    // FRAME 00
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    // FRAME 01
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    // FRAME 02
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    // FRAME 03
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    // FRAME 04
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    // FRAME 05
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    // FRAME 06
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    // FRAME 07
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    // FRAME 08
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
};

const unsigned char PROGMEM overworld_plus_mask[] = {
    // width, height,
    16, 16,
    // FRAME 00
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    
    // FRAME 01
    0x00, 0xff, 0xc0, 0xff, 0xa0, 0xff, 0xc0, 0xff, 0x80, 0xff, 0x40, 0xff, 0x06, 0xff, 0x0c, 0xff, 
    0x16, 0xff, 0x5a, 0xff, 0x14, 0xff, 0x9c, 0xff, 0x54, 0xff, 0x88, 0xff, 0x80, 0xff, 0x04, 0xff, 
    0x00, 0xff, 0x41, 0xff, 0x2f, 0xff, 0x06, 0xff, 0x01, 0xff, 0x32, 0xff, 0x40, 0xff, 0x00, 0xff, 
    0x00, 0xff, 0xfe, 0xff, 0xfe, 0xff, 0xfe, 0xff, 0xfe, 0xff, 0xfe, 0xff, 0xfe, 0xff, 0xfe, 0xff, 
    
    // FRAME 02
    0x30, 0xff, 0xf8, 0xff, 0x78, 0xff, 0x10, 0xff, 0x00, 0xff, 0x08, 0xff, 0xbc, 0xff, 0x28, 0xff, 
    0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0x00, 0xff, 0xf8, 0xff, 0xa5, 0xff, 0x5a, 0xff, 0x38, 0xff, 0x34, 0xff, 0x38, 0xff, 0x29, 0xff, 
    0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    
    // FRAME 03
    0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 
    0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 
    0x01, 0xff, 0x29, 0xff, 0x1c, 0xff, 0x28, 0xff, 0x08, 0xff, 0x20, 0xff, 0x14, 0xff, 0x60, 0xff, 
    0x38, 0xff, 0x3d, 0xff, 0x35, 0xff, 0x78, 0xff, 0x00, 0xff, 0x06, 0xff, 0x51, 0xff, 0x20, 0xff, 
    
    // FRAME 04
    0x00, 0xff, 0xa6, 0xff, 0x50, 0xff, 0x28, 0xff, 0x50, 0xff, 0xa3, 0xff, 0x42, 0xff, 0x81, 0xff, 
    0xca, 0xff, 0xdf, 0xff, 0x8a, 0xff, 0x85, 0xff, 0x8a, 0xff, 0xbf, 0xff, 0x0a, 0xff, 0x00, 0xff, 
    0x00, 0xff, 0x68, 0xff, 0x50, 0xff, 0x60, 0xff, 0x05, 0xff, 0x42, 0xff, 0x45, 0xff, 0x00, 0xff, 
    0x03, 0xff, 0x0a, 0xff, 0x1f, 0xff, 0x0a, 0xff, 0x07, 0xff, 0x2a, 0xff, 0x1f, 0xff, 0x00, 0xff, 
    
    // FRAME 05
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0x78, 0xff, 0x5f, 0xff, 0x57, 0xff, 0x55, 0xff, 0x55, 0xff, 0x55, 0xff, 0x55, 0xff, 0x55, 0xff, 
    0x55, 0xff, 0x55, 0xff, 0x55, 0xff, 0x55, 0xff, 0x55, 0xff, 0x57, 0xff, 0x5f, 0xff, 0x78, 0xff, 
    
    // FRAME 06
    0x40, 0xff, 0x00, 0xff, 0x10, 0xff, 0x00, 0xff, 0x00, 0xff, 0x01, 0xff, 0x01, 0xff, 0x00, 0xff, 
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x04, 0xff, 0x04, 0xff, 0x00, 0xff, 0x00, 0xff, 0x40, 0xff, 
    0x80, 0xff, 0x08, 0xff, 0x08, 0xff, 0x40, 0xff, 0x40, 0xff, 0x02, 0xff, 0x02, 0xff, 0x00, 0xff, 
    0x10, 0xff, 0x10, 0xff, 0x00, 0xff, 0x00, 0xff, 0x04, 0xff, 0x04, 0xff, 0x00, 0xff, 0x80, 0xff, 
    
    // FRAME 07
    0x0a, 0xff, 0x5c, 0xff, 0xaa, 0xff, 0x0e, 0xff, 0x04, 0xff, 0x06, 0xff, 0x06, 0xff, 0x02, 0xff, 
    0x04, 0xff, 0x04, 0xff, 0x06, 0xff, 0x06, 0xff, 0x0c, 0xff, 0xb6, 0xff, 0x5a, 0xff, 0x14, 0xff, 
    0xc0, 0xff, 0xb5, 0xff, 0x9b, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0xff, 
    0xc0, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0x9b, 0xff, 0xb5, 0xff, 0xc0, 0xff, 
    
    // FRAME 08
    0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xef, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xbf, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xeb, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
};

const unsigned char PROGMEM playerWalk_tiles[] = {
    // width, height,
    16, 16,
    // FRAME 00
    0x00, 0xf8, 0x24, 0x42, 0xf1, 0x81, 0xe1, 0xf1, 0xe1, 0x01, 0x35, 0x19, 0x02, 0x04, 0xf8, 0x00, 
    0x00, 0x00, 0x01, 0x3e, 0x60, 0xd9, 0x99, 0x9d, 0x86, 0x86, 0x9a, 0x9c, 0xe0, 0x10, 0x0f, 0x00, 
    // FRAME 01
    0x00, 0xf0, 0x48, 0x84, 0xe2, 0x02, 0xc2, 0xe2, 0xc2, 0x02, 0x6a, 0x32, 0x04, 0x08, 0xf0, 0x00, 
    0x00, 0x01, 0x1a, 0xe4, 0x99, 0x83, 0x9b, 0x9b, 0x9d, 0x9c, 0x9c, 0x80, 0x98, 0xd8, 0x27, 0x18, 
    // FRAME 02
    0x00, 0xe0, 0x18, 0x64, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x64, 0x18, 0xe0, 0x00, 
    0x00, 0x07, 0x78, 0x88, 0x90, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0x90, 0x90, 0xc0, 0x32, 0x0d, 0x00, 
    // FRAME 03
    0xf0, 0x08, 0x04, 0x62, 0x81, 0x81, 0x01, 0x81, 0x81, 0x01, 0x81, 0x81, 0x62, 0x04, 0xf8, 0x00, 
    0x0f, 0x10, 0x6c, 0x86, 0x91, 0x9b, 0x9a, 0xbb, 0xbb, 0xa2, 0x9b, 0x99, 0xee, 0x10, 0x0f, 0x00, 
    // FRAME 04
    0xf0, 0x48, 0x84, 0xe2, 0x02, 0xc2, 0xe2, 0xc2, 0x02, 0x6a, 0x32, 0x04, 0x08, 0xf0, 0x00, 0x00, 
    0x25, 0x26, 0x44, 0x41, 0x9b, 0x83, 0x9b, 0x9d, 0x9c, 0x9c, 0x98, 0x80, 0x98, 0x5f, 0x24, 0x18, 
    // FRAME 05
    0x00, 0xf0, 0x0c, 0x32, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x32, 0x0c, 0xf0, 0x00, 
    0x00, 0x07, 0x18, 0x20, 0x40, 0x90, 0xb0, 0xb0, 0xb0, 0xb0, 0x90, 0x90, 0xc0, 0x32, 0x0d, 0x00, 
    // FRAME 06
    0xe0, 0x10, 0x08, 0xc4, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xc4, 0x08, 0xf0, 0x00, 
    0x07, 0x08, 0x18, 0x2c, 0x53, 0x57, 0x54, 0xb7, 0xb7, 0xb4, 0x97, 0x83, 0x80, 0xf0, 0x0f, 0x00, 
    // FRAME 07
    0xe0, 0x10, 0x0e, 0x01, 0x8d, 0xcd, 0x09, 0xc2, 0xc2, 0x09, 0xcd, 0x8d, 0x01, 0x0e, 0xf0, 0x00, 
    0x41, 0xb6, 0x88, 0x80, 0x99, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x9b, 0x89, 0x80, 0x9e, 0xa1, 0x40, 
    // FRAME 08
    0x00, 0xf8, 0x04, 0x02, 0x61, 0xf1, 0xc1, 0xf1, 0xf1, 0xc1, 0xf1, 0x65, 0x02, 0x04, 0xf8, 0x00, 
    0x00, 0x03, 0x3e, 0x78, 0x7c, 0x1e, 0x7e, 0x7e, 0x3e, 0x7e, 0x7e, 0x7e, 0x3c, 0x78, 0x1f, 0x00,
};

const unsigned char PROGMEM playerWalk_mask[] = {
    // FRAME 00
    0x00, 0xf8, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xf8, 0x00, 
    0x00, 0x00, 0x01, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x0f, 0x00, 
    // FRAME 01
    0x00, 0xf0, 0xf8, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xf8, 0xf0, 0x00, 
    0x00, 0x01, 0x1b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x18, 
    // FRAME 02
    0x00, 0xe0, 0xf8, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xf8, 0xe0, 0x00, 
    0x00, 0x07, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x0d, 0x00, 
    // FRAME 03
    0xf0, 0xf8, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xf8, 0x00, 
    0x0f, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x0f, 0x00, 
    // FRAME 04
    0xf0, 0xf8, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xf8, 0xf0, 0x00, 0x00, 
    0x3d, 0x3f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x3c, 0x18, 
    // FRAME 05
    0x00, 0xf0, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xf0, 0x00, 
    0x00, 0x07, 0x1f, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x0d, 0x00, 
    // FRAME 06
    0xe0, 0xf0, 0xf8, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xf8, 0xf0, 0x00, 
    0x07, 0x0f, 0x1f, 0x3f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x00, 
    // FRAME 07
    0xe0, 0xf0, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xf0, 0x00, 
    0x41, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0x40, 
    // FRAME 08
    0x00, 0xf8, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xf8, 0x00, 
    0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x1e,
};

const unsigned char PROGMEM playerWalk_plus_mask[] = {
    // width, height,
    16, 16,
    // FRAME 00
    0x00, 0x00, 0xf8, 0xf8, 0x24, 0xfc, 0x42, 0xfe, 0xf1, 0xff, 0x81, 0xff, 0xe1, 0xff, 0xf1, 0xff, 
    0xe1, 0xff, 0x01, 0xff, 0x35, 0xff, 0x19, 0xff, 0x02, 0xfe, 0x04, 0xfc, 0xf8, 0xf8, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x3e, 0x3f, 0x60, 0x7f, 0xd9, 0xff, 0x99, 0xff, 0x9d, 0xff, 
    0x86, 0xff, 0x86, 0xff, 0x9a, 0xff, 0x9c, 0xff, 0xe0, 0xff, 0x10, 0x1f, 0x0f, 0x0f, 0x00, 0x00, 
    
    // FRAME 01
    0x00, 0x00, 0xf0, 0xf0, 0x48, 0xf8, 0x84, 0xfc, 0xe2, 0xfe, 0x02, 0xfe, 0xc2, 0xfe, 0xe2, 0xfe, 
    0xc2, 0xfe, 0x02, 0xfe, 0x6a, 0xfe, 0x32, 0xfe, 0x04, 0xfc, 0x08, 0xf8, 0xf0, 0xf0, 0x00, 0x00, 
    0x00, 0x00, 0x01, 0x01, 0x1a, 0x1b, 0xe4, 0xff, 0x99, 0xff, 0x83, 0xff, 0x9b, 0xff, 0x9b, 0xff, 
    0x9d, 0xff, 0x9c, 0xff, 0x9c, 0xff, 0x80, 0xff, 0x98, 0xff, 0xd8, 0xff, 0x27, 0x3f, 0x18, 0x18, 
    
    // FRAME 02
    0x00, 0x00, 0xe0, 0xe0, 0x18, 0xf8, 0x64, 0xfc, 0x02, 0xfe, 0x02, 0xfe, 0x02, 0xfe, 0x02, 0xfe, 
    0x02, 0xfe, 0x02, 0xfe, 0x02, 0xfe, 0x02, 0xfe, 0x64, 0xfc, 0x18, 0xf8, 0xe0, 0xe0, 0x00, 0x00, 
    0x00, 0x00, 0x07, 0x07, 0x78, 0x7f, 0x88, 0xff, 0x90, 0xff, 0xb0, 0xff, 0xb0, 0xff, 0xb0, 0xff, 
    0xb0, 0xff, 0xb0, 0xff, 0x90, 0xff, 0x90, 0xff, 0xc0, 0xff, 0x32, 0x3f, 0x0d, 0x0d, 0x00, 0x00, 
    
    // FRAME 03
    0xf0, 0xf0, 0x08, 0xf8, 0x04, 0xfc, 0x62, 0xfe, 0x81, 0xff, 0x81, 0xff, 0x01, 0xff, 0x81, 0xff, 
    0x81, 0xff, 0x01, 0xff, 0x81, 0xff, 0x81, 0xff, 0x62, 0xfe, 0x04, 0xfc, 0xf8, 0xf8, 0x00, 0x00, 
    0x0f, 0x0f, 0x10, 0x1f, 0x6c, 0x7f, 0x86, 0xff, 0x91, 0xff, 0x9b, 0xff, 0x9a, 0xff, 0xbb, 0xff, 
    0xbb, 0xff, 0xa2, 0xff, 0x9b, 0xff, 0x99, 0xff, 0xee, 0xff, 0x10, 0x1f, 0x0f, 0x0f, 0x00, 0x00, 
    
    // FRAME 04
    0xf0, 0xf0, 0x48, 0xf8, 0x84, 0xfc, 0xe2, 0xfe, 0x02, 0xfe, 0xc2, 0xfe, 0xe2, 0xfe, 0xc2, 0xfe, 
    0x02, 0xfe, 0x6a, 0xfe, 0x32, 0xfe, 0x04, 0xfc, 0x08, 0xf8, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00, 
    0x25, 0x3d, 0x26, 0x3f, 0x44, 0x7f, 0x41, 0x7f, 0x9b, 0xff, 0x83, 0xff, 0x9b, 0xff, 0x9d, 0xff, 
    0x9c, 0xff, 0x9c, 0xff, 0x98, 0xff, 0x80, 0xff, 0x98, 0xff, 0x5f, 0x7f, 0x24, 0x3c, 0x18, 0x18, 
    
    // FRAME 05
    0x00, 0x00, 0xf0, 0xf0, 0x0c, 0xfc, 0x32, 0xfe, 0x01, 0xff, 0x01, 0xff, 0x01, 0xff, 0x01, 0xff, 
    0x01, 0xff, 0x01, 0xff, 0x01, 0xff, 0x01, 0xff, 0x32, 0xfe, 0x0c, 0xfc, 0xf0, 0xf0, 0x00, 0x00, 
    0x00, 0x00, 0x07, 0x07, 0x18, 0x1f, 0x20, 0x3f, 0x40, 0x7f, 0x90, 0xff, 0xb0, 0xff, 0xb0, 0xff, 
    0xb0, 0xff, 0xb0, 0xff, 0x90, 0xff, 0x90, 0xff, 0xc0, 0xff, 0x32, 0x3f, 0x0d, 0x0d, 0x00, 0x00, 
    
    // FRAME 06
    0xe0, 0xe0, 0x10, 0xf0, 0x08, 0xf8, 0xc4, 0xfc, 0x02, 0xfe, 0x02, 0xfe, 0x02, 0xfe, 0x02, 0xfe, 
    0x02, 0xfe, 0x02, 0xfe, 0x02, 0xfe, 0x02, 0xfe, 0xc4, 0xfc, 0x08, 0xf8, 0xf0, 0xf0, 0x00, 0x00, 
    0x07, 0x07, 0x08, 0x0f, 0x18, 0x1f, 0x2c, 0x3f, 0x53, 0x7f, 0x57, 0x7f, 0x54, 0x7f, 0xb7, 0xff, 
    0xb7, 0xff, 0xb4, 0xff, 0x97, 0xff, 0x83, 0xff, 0x80, 0xff, 0xf0, 0xff, 0x0f, 0x0f, 0x00, 0x00, 
    
    // FRAME 07
    0xe0, 0xe0, 0x10, 0xf0, 0x0e, 0xfe, 0x01, 0xff, 0x8d, 0xff, 0xcd, 0xff, 0x09, 0xff, 0xc2, 0xfe, 
    0xc2, 0xfe, 0x09, 0xff, 0xcd, 0xff, 0x8d, 0xff, 0x01, 0xff, 0x0e, 0xfe, 0xf0, 0xf0, 0x00, 0x00, 
    0x41, 0x41, 0xb6, 0xf7, 0x88, 0xff, 0x80, 0xff, 0x99, 0xff, 0xbb, 0xff, 0xbb, 0xff, 0xbb, 0xff, 
    0xbb, 0xff, 0xbb, 0xff, 0x9b, 0xff, 0x89, 0xff, 0x80, 0xff, 0x9e, 0xff, 0xa1, 0xe1, 0x40, 0x40, 
    
    // FRAME 08
    0x00, 0x00, 0xf8, 0xf8, 0x04, 0xfc, 0x02, 0xfe, 0x61, 0xff, 0xf1, 0xff, 0xc1, 0xff, 0xf1, 0xff, 
    0xf1, 0xff, 0xc1, 0xff, 0xf1, 0xff, 0x65, 0xff, 0x02, 0xfe, 0x04, 0xfc, 0xf8, 0xf8, 0x00, 0x00, 
    0x00, 0x00, 0x03, 0x7f, 0x3e, 0xff, 0x78, 0xff, 0x7c, 0xff, 0x1e, 0xff, 0x7e, 0xff, 0x7e, 0xff, 
    0x3e, 0xff, 0x7e, 0xff, 0x7e, 0xff, 0x7e, 0xff, 0x3c, 0xff, 0x78, 0xff, 0x1f, 0x7f, 0x00, 0x1e,
};

const unsigned char PROGMEM spike_tiles[] = {
    // width, height,
    8, 8,
    // FRAME 00
    0x24, 0x66, 0xdb, 0x24, 0x24, 0xdb, 0x66, 0x24,
};

const unsigned char PROGMEM spike_mask[] = {
    // FRAME 00
    0x24, 0x66, 0xff, 0x3c, 0x3c, 0xff, 0x66, 0x24,
};

const unsigned char PROGMEM spike_plus_mask[] = {
    // width, height,
    8, 8,
    // FRAME 00
    0x24, 0x24, 0x66, 0x66, 0xdb, 0xff, 0x24, 0x3c, 
    0x24, 0x3c, 0xdb, 0xff, 0x66, 0x66, 0x24, 0x24,
};

const unsigned char PROGMEM sword_tiles[] = {
    // width, height,
    16, 16,
    // FRAME 00
    0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
    // FRAME 01
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const unsigned char PROGMEM sword_mask[] = {
    // FRAME 00
    0x00, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xe0, 0xc0, 0x80, 0x80, 
    0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x07, 0x03, 0x01, 0x01, 
    // FRAME 01
    0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xfc, 0xff, 0xff, 0xfc, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x7f, 0x7f, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const unsigned char PROGMEM sword_plus_mask[] = {
    // width, height,
    16, 16,
    // FRAME 00
    0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0x80, 0xc0, 0x80, 0xc0, 0x80, 0xc0, 0x80, 0xc0, 0x80, 0xc0, 
    0x80, 0xc0, 0x80, 0xc0, 0x80, 0xc0, 0x00, 0xc0, 0x00, 0xe0, 0x00, 0xc0, 0x00, 0x80, 0x00, 0x80, 
    0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x01, 0x03, 0x01, 0x03, 0x01, 0x03, 0x01, 0x03, 0x01, 0x03, 
    0x01, 0x03, 0x01, 0x03, 0x01, 0x03, 0x01, 0x03, 0x00, 0x07, 0x00, 0x03, 0x00, 0x01, 0x00, 0x01, 
    
    // FRAME 01
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0xfc, 0xe0, 0xff, 
    0xf0, 0xff, 0x00, 0xfc, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x3f, 0x7f, 
    0x3f, 0x7f, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

#endif