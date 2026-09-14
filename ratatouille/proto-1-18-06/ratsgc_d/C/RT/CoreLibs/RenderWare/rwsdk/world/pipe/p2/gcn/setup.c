/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\world\pipe\p2\gcn\setup.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80424044 -> 0x80424F40
*/
static struct _GXColor OpaqueWhite; // size: 0x4, address: 0x80D71F28
static struct _GXColor OpaqueBlack; // size: 0x4, address: 0x80D71F2C
static char __dbFunctionName[9]; // size: 0x9, address: 0x804EBA18
// Range: 0x80424044 -> 0x804241B4
static void MatFunc1(struct RwRGBAReal * ambientColor /* r30 */, struct RwRGBA * materialColor /* r31 */, float ambientCoef /* f31 */) {
    // Local variables
    struct _GXColor ambMatColor; // r1+0x10

    // References
    // -> static char __dbFunctionName[9];
}

static char __dbFunctionName[9]; // size: 0x9, address: 0x804EBA21
// Range: 0x804241B4 -> 0x8042429C
static void MatFunc2(struct RwRGBAReal * ambientColor /* r31 */, float ambientCoef /* r1+0x8 */) {
    // Local variables
    struct _GXColor ambColor; // r1+0x10
    float ambCoef; // f31

    // References
    // -> static char __dbFunctionName[9];
}

static char __dbFunctionName[9]; // size: 0x9, address: 0x804EBA2A
// Range: 0x8042429C -> 0x80424384
static void MatFunc3(struct RwRGBAReal * ambientColor /* r31 */, float ambientCoef /* r1+0x8 */) {
    // Local variables
    struct _GXColor ambColor; // r1+0x10
    float ambCoef; // f31

    // References
    // -> static char __dbFunctionName[9];
}

static char __dbFunctionName[9]; // size: 0x9, address: 0x804EBA33
// Range: 0x80424384 -> 0x804244A4
static void MatFunc4(struct RwRGBAReal * ambientColor /* r31 */, struct RwRGBA * materialColor /* r1+0x8 */, float ambientCoef /* r1+0xC */) {
    // Local variables
    struct _GXColor ambColor; // r1+0x18
    float ambCoef; // f31

    // References
    // -> static char __dbFunctionName[9];
}

static char __dbFunctionName[9]; // size: 0x9, address: 0x804EBA3C
// Range: 0x804244A4 -> 0x80424518
static void MatFunc5(struct RwRGBA * materialColor /* r1+0x8 */) {
    // References
    // -> static char __dbFunctionName[9];
}

static char __dbFunctionName[9]; // size: 0x9, address: 0x804EBA45
// Range: 0x80424518 -> 0x80424600
static void MatFunc6(struct RwRGBAReal * ambientColor /* r31 */, float ambientCoef /* r1+0x8 */) {
    // Local variables
    struct _GXColor ambColor; // r1+0x10
    float ambCoef; // f31

    // References
    // -> static char __dbFunctionName[9];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EBA4E
// Range: 0x80424600 -> 0x80424F40
void (* _rwDlObjectRenderSetup(unsigned int flags /* r27 */, unsigned int lightMask /* r21 */, int ambient /* r1+0x8 */, int prelightAlpha /* r23 */))(struct RwRGBAReal *, struct RwRGBA *, float) {
    // Local variables
    void (* matFunc)(struct RwRGBAReal *, struct RwRGBA *, float); // r29
    unsigned char chanLightingColEnable; // r24
    unsigned char chanLightingAlpEnable; // r31
    enum _GXColorSrc chanMatColSrc; // r25
    enum _GXColorSrc chanMatAlpSrc; // r28
    enum _GXColorSrc chanAmbColSrc; // r26
    enum _GXColorSrc chanAmbAlpSrc; // r30
    unsigned char numTevStages; // r22

    // References
    // -> static struct _GXColor OpaqueWhite;
    // -> static struct _GXColor OpaqueBlack;
    // -> static char __dbFunctionName[23];
}


