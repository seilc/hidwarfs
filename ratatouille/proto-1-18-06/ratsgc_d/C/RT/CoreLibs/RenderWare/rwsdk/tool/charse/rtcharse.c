/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\tool\charse\rtcharse.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8042DD94 -> 0x8042E758
*/
static unsigned char charSetBits[91][15]; // size: 0x555, address: 0x804EBF78
static char __dbFunctionName[23]; // size: 0x17, address: 0x804EC4CD
// Range: 0x8042DD94 -> 0x8042DE48
unsigned char * _rtCharsetAtariFontGet(struct RtCharsetDesc * desc /* r3 */, int * rasSize /* r4 */) {
    // Local variables
    int count; // r29
    int tilewidth; // r30
    int tileheight; // r28
    int size; // r31

    // References
    // -> static unsigned char charSetBits[91][15];
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EC4E4
// Range: 0x8042DE48 -> 0x8042DF10
static unsigned char * CharsetGlyphSet(const unsigned char * charBitsIn /* r30 */, struct RtCharsetDesc * desc /* r27 */, unsigned char * charRow /* r26 */, int stride /* r1+0x8 */) {
    // Local variables
    unsigned char charPixels; // r31
    unsigned char * target; // r29
    int i; // r28
    int height_internal; // r25
    int width_internal; // r24

    // References
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EC4F4
// Range: 0x8042DF10 -> 0x8042DFF4
static struct RwImage * CharsetImageSet(struct RwImage * image /* r26 */) {
    // Local variables
    unsigned char * const charBase; // r25
    unsigned int stride; // r29
    struct RtCharsetDesc desc; // r1+0xC
    int i; // r1+0x8
    int j; // r28
    const unsigned char * charBitsIn; // r27
    int row; // r30
    int column; // r31
    unsigned char * charRow; // r24

    // References
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EC504
// Range: 0x8042DFF4 -> 0x8042E284
struct RwRaster * RtCharsetSetColors(struct RwRaster * charSet /* r29 */, const struct RwRGBA * foreGround /* r26 */, const struct RwRGBA * backGround /* r27 */) {
    // Local variables
    struct RwRaster * result; // r25
    struct RwImage * image; // r30
    struct RtCharsetDesc desc; // r1+0x14
    int rasSize; // r1+0x8
    struct RwRGBA * palette; // r28
    struct RwImage * new_image; // r24
    struct RwError _rwErrorCode; // r1+0xC

    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EC517
// Range: 0x8042E284 -> 0x8042E424
int RtCharsetDestroy(struct RwRaster * charSet /* r30 */) {
    // Local variables
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[17];
    // -> struct _RtCharsetBuffer _rtgBuffer;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EC528
// Range: 0x8042E424 -> 0x8042E5C0
struct RwRaster * RtCharsetCreate(const struct RwRGBA * foreGround /* r27 */, const struct RwRGBA * backGround /* r28 */) {
    // Local variables
    struct RwRaster * result; // r29
    struct RtCharsetDesc desc; // r1+0x14
    int rasSize; // r1+0x8
    struct RwRaster * charSet; // r30
    struct RwError _rwErrorCode; // r1+0xC

    // References
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804EC538
// Range: 0x8042E5C0 -> 0x8042E758
int RtCharsetOpen() {
    // References
    // -> struct _RtCharsetBuffer _rtgBuffer;
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[14];
}


