/*
    Compile unit: C:\TestBuild\in\GAME\zFXRibbonPool.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned int ribbonCount; // size: 0x4, address: 0x609014
static class xFXRibbon * ribbonPool; // size: 0x4, address: 0x609018
static unsigned char * ribbonInUse; // size: 0x4, address: 0x60901C
unsigned int gActiveHeap; // size: 0x4, address: 0x608A5C
// total size: 0x1C
class tier_queue_allocator {
    // Members
public:
    class block_data * blocks; // offset 0x0, size 0x4
    unsigned int _unit_size; // offset 0x4, size 0x4
    unsigned int _block_size; // offset 0x8, size 0x4
    unsigned int _block_size_shift; // offset 0xC, size 0x4
    unsigned int _max_blocks; // offset 0x10, size 0x4
    unsigned int _max_blocks_shift; // offset 0x14, size 0x4
    unsigned char head; // offset 0x18, size 0x1
};
// total size: 0x34
class RwRaster {
    // Members
public:
    class RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    signed int width; // offset 0xC, size 0x4
    signed int height; // offset 0x10, size 0x4
    signed int depth; // offset 0x14, size 0x4
    signed int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    signed int originalWidth; // offset 0x28, size 0x4
    signed int originalHeight; // offset 0x2C, size 0x4
    signed int originalStride; // offset 0x30, size 0x4
};
// total size: 0x8
class block_data {
    // Members
public:
    unsigned char prev; // offset 0x0, size 0x1
    unsigned char next; // offset 0x1, size 0x1
    unsigned short flags; // offset 0x2, size 0x2
    void * data; // offset 0x4, size 0x4
};
// total size: 0x4
class xColor_tag {
    // Members
public:
    union { // inferred
        struct { // inferred
            unsigned char r; // offset 0x0, size 0x1
            unsigned char g; // offset 0x1, size 0x1
            unsigned char b; // offset 0x2, size 0x1
            unsigned char a; // offset 0x3, size 0x1
        };
        class RwRGBA rgba; // offset 0x0, size 0x4
    };
};
// total size: 0x48
class activity_data {
    // Members
public:
    class xFXRibbon * owner; // offset 0x0, size 0x4
    class activity_data * * position; // offset 0x4, size 0x4
    class tier_queue joints; // offset 0x8, size 0x30
    signed int curve_index; // offset 0x38, size 0x4
    float ilife; // offset 0x3C, size 0x4
    unsigned int mtime; // offset 0x40, size 0x4
    unsigned int mlife; // offset 0x44, size 0x4
};
// total size: 0x10
class xFXRibbon {
    // Members
public:
    float texture_offset; // offset 0x0, size 0x4
    float texture_increment_scale; // offset 0x4, size 0x4
    class activity_data * act; // offset 0x8, size 0x4
    class config_type * cfg; // offset 0xC, size 0x4
};
// total size: 0x20
class config_type {
    // Members
public:
    float life_time; // offset 0x0, size 0x4
    unsigned int blend_src; // offset 0x4, size 0x4
    unsigned int blend_dst; // offset 0x8, size 0x4
    float pivot; // offset 0xC, size 0x4
    signed int flags; // offset 0x10, size 0x4
    class curve_node * curve; // offset 0x14, size 0x4
    signed int curve_size; // offset 0x18, size 0x4
    class RwRaster * raster; // offset 0x1C, size 0x4
};
// total size: 0x4
class RwRGBA {
    // Members
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0xC
class curve_node {
    // Members
public:
    float time; // offset 0x0, size 0x4
    class xColor_tag color; // offset 0x4, size 0x4
    float scale; // offset 0x8, size 0x4
};
// total size: 0x30
class tier_queue {
    // Members
public:
    unsigned int first; // offset 0x0, size 0x4
    unsigned int _size; // offset 0x4, size 0x4
    unsigned int wrap_mask; // offset 0x8, size 0x4
    class tier_queue_allocator * alloc; // offset 0xC, size 0x4
    unsigned char blocks[32]; // offset 0x10, size 0x20
};

/*
    Compile unit: C:\TestBuild\in\GAME\zFXRibbonPool.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E4170 -> 0x002E419C
*/
// Range: 0x2E4170 -> 0x2E419C
void zFXRibbonPool_SceneReset() {
    /* anonymous block */ {
        // Range: 0x2E4170 -> 0x2E419C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zFXRibbonPool.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E41A0 -> 0x002E41DC
*/
// Range: 0x2E41A0 -> 0x2E41DC
void zFXRibbonPoolDelete(class xFXRibbon * & ribbon /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2E41A0 -> 0x2E41DC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zFXRibbonPool.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E41E0 -> 0x002E4404
*/
// Range: 0x2E41E0 -> 0x2E4404
class xFXRibbon * zFXRibbonPoolNew() {
    /* anonymous block */ {
        // Range: 0x2E41E0 -> 0x2E4404
        unsigned int index; // r16
        unsigned int i; // r6
        float remainingTime; // r4
        unsigned int i; // r9
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zFXRibbonPool.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E4410 -> 0x002E44E0
*/
// Range: 0x2E4410 -> 0x2E44E0
void zFXRibbonPoolInit(unsigned int maxNumRibbons /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2E4410 -> 0x2E44E0
        unsigned int i; // r17
    }
}


