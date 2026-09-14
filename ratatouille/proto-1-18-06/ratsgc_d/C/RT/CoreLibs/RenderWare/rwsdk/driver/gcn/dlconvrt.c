/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\driver\gcn\dlconvrt.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804544EC -> 0x80457180
*/
static char __dbFunctionName[13]; // size: 0xD, address: 0x804EE5F8
// Range: 0x804544EC -> 0x80454534
int _rwDlFindMSB(int num /* r3 */) {
    // Local variables
    int pos; // r31

    // References
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EE605
// Range: 0x80454534 -> 0x80454588
static unsigned int _rwDlConv8888To555(struct RwRGBA * pixIn /* r3 */) {
    // Local variables
    unsigned int pixOut; // r31

    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EE618
// Range: 0x80454588 -> 0x804545D8
static unsigned int _rwDlConv8888To565(struct RwRGBA * pixIn /* r3 */) {
    // Local variables
    unsigned int pixOut; // r31

    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EE62B
// Range: 0x804545D8 -> 0x80454668
static unsigned int _rwDlConv8888To555or3444(struct RwRGBA * pixIn /* r3 */) {
    // Local variables
    unsigned int pixOut; // r31

    // References
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EE644
// Range: 0x80454668 -> 0x804546B8
static unsigned int _rwDlConv8888ToDl888(struct RwRGBA * pixIn /* r3 */) {
    // Local variables
    unsigned int pixOut; // r31

    // References
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EE659
// Range: 0x804546B8 -> 0x80454710
static unsigned int _rwDlConv8888ToDl8888(struct RwRGBA * pixIn /* r3 */) {
    // Local variables
    unsigned int pixOut; // r31

    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EE66F
// Range: 0x80454710 -> 0x80454980
int _rwDlRGBToPixel(void * pixelOut /* r1+0x8 */, void * colIn /* r30 */, int format /* r1+0xC */) {
    // Local variables
    struct RwRGBA * rgba; // r31
    int pixVal; // r1+0x10
    struct RwError _rwErrorCode; // r1+0x1C
    struct RwError _rwErrorCode; // r1+0x14

    // References
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EE67F
// Range: 0x80454980 -> 0x804549C8
static void _rwDlConv555To8888(struct RwRGBA * pixOut /* r3 */, unsigned int pixIn /* r4 */) {
    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EE692
// Range: 0x804549C8 -> 0x80454A10
static void _rwDlConv565To8888(struct RwRGBA * pixOut /* r3 */, unsigned int pixIn /* r4 */) {
    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EE6A5
// Range: 0x80454A10 -> 0x80454A94
static void _rwDlConv1555To8888(struct RwRGBA * pixOut /* r3 */, unsigned int pixIn /* r4 */) {
    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EE6B9
// Range: 0x80454A94 -> 0x80454B1C
static void _rwDlConv4444To8888(struct RwRGBA * pixOut /* r3 */, unsigned int pixIn /* r4 */) {
    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EE6CD
// Range: 0x80454B1C -> 0x80454B60
static void _rwDlConvDl888To8888(struct RwRGBA * pixOut /* r3 */, unsigned int pixIn /* r4 */) {
    // References
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EE6E2
// Range: 0x80454B60 -> 0x80454BA8
static void _rwDlConvDl8888To8888(struct RwRGBA * pixOut /* r3 */, unsigned int pixIn /* r4 */) {
    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EE6F8
// Range: 0x80454BA8 -> 0x80454E20
int _rwDlPixelToRGB(void * rgbOut /* r1+0x8 */, void * pixel /* r29 */, int format /* r1+0xC */) {
    // Local variables
    struct RwRGBA * rgba; // r31
    int pixVal; // r30
    struct RwError _rwErrorCode; // r1+0x18
    struct RwError _rwErrorCode; // r1+0x10

    // References
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EE708
// Range: 0x80454E20 -> 0x8045504C
static void (* _rwDlSelectUnconvertFn(int format /* r1+0x8 */))(struct RwRGBA *, unsigned int) {
    // Local variables
    void (* result)(struct RwRGBA *, unsigned int); // r31
    struct RwError _rwErrorCode; // r1+0x14
    struct RwError _rwErrorCode; // r1+0xC

    // References
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EE71F
// Range: 0x8045504C -> 0x804552CC
static void _rwDlImage4GetFromRaster(struct RwImage * image /* r27 */, struct RwRaster * raster /* r31 */) {
    // Local variables
    void (* unConvFn)(struct RwRGBA *, unsigned int); // r25
    int y; // r30
    unsigned short paletteEntry; // r24
    int x; // r26
    unsigned char * srcPixel; // r28
    unsigned char * dstPixel; // r29
    struct RwError _rwErrorCode; // r1+0x10
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EE738
// Range: 0x804552CC -> 0x804555EC
static void _rwDlImage8GetFromRaster(struct RwImage * image /* r28 */, struct RwRaster * raster /* r31 */) {
    // Local variables
    void (* unConvFn)(struct RwRGBA *, unsigned int); // r21
    int y; // r30
    unsigned short paletteEntry; // r20
    int x; // r23
    unsigned char * srcPixel; // r26
    unsigned char * dstPixel; // r27
    int y; // r29
    unsigned short paletteEntry; // r19
    int x; // r22
    unsigned char * srcPixel; // r25
    unsigned char * dstPixel; // r24
    struct RwError _rwErrorCode; // r1+0x10
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EE751
// Range: 0x804555EC -> 0x80455A90
static void _rwDlImage32GetFromRaster(struct RwImage * image /* r30 */, struct RwRaster * raster /* r31 */) {
    // Local variables
    void (* unConvFn)(struct RwRGBA *, unsigned int); // r23
    int y; // r29
    struct RwRGBA palette[16]; // r1+0x2C
    unsigned short paletteEntry; // r1+0xA
    int x; // r18
    unsigned char * srcPixel; // r26
    struct RwRGBA * dstPixel; // r27
    int y; // r28
    struct RwRGBA palette[256]; // r1+0x6C
    unsigned short paletteEntry; // r1+0x8
    int x; // r17
    unsigned char * srcPixel; // r22
    struct RwRGBA * dstPixel; // r21
    int j; // r25
    int i; // r1+0x18
    unsigned short * srcPixel; // r20
    struct RwRGBA * dstPixel; // r1+0x14
    struct RwError _rwErrorCode; // r1+0x24
    int y; // r24
    int x; // r1+0x10
    unsigned int * srcPixel; // r19
    struct RwRGBA * dstPixel; // r1+0xC
    struct RwError _rwErrorCode; // r1+0x1C

    // References
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EE76B
// Range: 0x80455A90 -> 0x80455CBC
int _rwDlImageGetFromRaster(void * imageIn /* r1+0x8 */, void * rasterIn /* r1+0xC */) {
    // Local variables
    struct RwImage * image; // r29
    struct RwRaster * raster; // r31
    int format; // r25
    int rasterLocked; // r28
    int paletteLocked; // r27
    struct RwGameCubeRasterExtension * rasExt; // r26
    struct RwError _rwErrorCode; // r1+0x10

    // References
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EE783
// Range: 0x80455CBC -> 0x80455F10
static unsigned int (* _rwDlSelectConvertFn(struct RwRaster * raster /* r30 */))(struct RwRGBA *) {
    // Local variables
    unsigned int (* convFn)(struct RwRGBA *); // r31
    struct RwError _rwErrorCode; // r1+0x10
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EE798
// Range: 0x80455F10 -> 0x80456098
static struct RwImage * _rwDolphinPalettizeImage(struct RwImage * srcImage /* r30 */, int depth /* r29 */) {
    // Local variables
    struct RwPalQuant palQuant; // r1+0x8
    struct RwImage * palImage; // r31

    // References
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[35]; // size: 0x23, address: 0x804EE7B1
// Range: 0x80456098 -> 0x80456330
static void _rwDlRasterPalletized4SetFromImage(struct RwRaster * raster /* r31 */, struct RwImage * image /* r30 */) {
    // Local variables
    struct RwGameCubeRasterExtension * rasExt; // r23
    unsigned int (* convFn)(struct RwRGBA *); // r21
    int y; // r28
    int x; // r24
    unsigned char * srcPixel; // r29
    unsigned char * dstPixel; // r26
    int x; // r27
    unsigned short * palette; // r22
    struct RwImage * palImage; // r25
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[35];
}

static char __dbFunctionName[35]; // size: 0x23, address: 0x804EE7D4
// Range: 0x80456330 -> 0x804565CC
static void _rwDlRasterPalletized8SetFromImage(struct RwRaster * raster /* r31 */, struct RwImage * image /* r30 */) {
    // Local variables
    struct RwGameCubeRasterExtension * rasExt; // r1+0x8
    unsigned int (* convFn)(struct RwRGBA *); // r21
    int y; // r29
    struct RwGameCubeRasterExtension * rasExt; // r23
    int x; // r24
    unsigned char * srcPixel; // r27
    unsigned char * dstPixel; // r26
    int x; // r28
    unsigned short * palette; // r22
    struct RwImage * palImage; // r25
    struct RwError _rwErrorCode; // r1+0xC

    // References
    // -> static char __dbFunctionName[35];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EE7F7
// Range: 0x804565CC -> 0x80456810
static void _rwDlRaster16SetFromImage(struct RwRaster * raster /* r31 */, struct RwImage * image /* r30 */) {
    // Local variables
    unsigned int (* convFn)(struct RwRGBA *); // r21
    int y; // r29
    unsigned short palette[256]; // r1+0x10
    int x; // r24
    unsigned char * srcPixel; // r27
    unsigned short * dstPixel; // r26
    int y; // r28
    int x; // r23
    struct RwRGBA * srcPixel; // r22
    unsigned short * dstPixel; // r25
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EE811
// Range: 0x80456810 -> 0x80456A4C
static void _rwDlRaster32SetFromImage(struct RwRaster * raster /* r31 */, struct RwImage * image /* r30 */) {
    // Local variables
    unsigned int (* convFn)(struct RwRGBA *); // r21
    int y; // r29
    unsigned int palette[256]; // r1+0x10
    int x; // r24
    unsigned char * srcPixel; // r27
    unsigned int * dstPixel; // r26
    int y; // r28
    int x; // r23
    struct RwRGBA * srcPixel; // r22
    unsigned int * dstPixel; // r25
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EE82B
// Range: 0x80456A4C -> 0x80456DC0
int _rwDlRasterSetFromImage(void * rasterIn /* r1+0x8 */, void * imageIn /* r1+0xC */) {
    // Local variables
    struct RwImage * image; // r28
    struct RwRaster * raster; // r31
    int format; // r29
    int rasterLocked; // r27
    int paletteLocked; // r26
    struct RwGameCubeRasterExtension * rasExt; // r25
    struct RwError _rwErrorCode; // r1+0x18
    struct RwError _rwErrorCode; // r1+0x10

    // References
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EE843
// Range: 0x80456DC0 -> 0x80456F98
static unsigned int _rwDlImageFindFormat(struct RwImage * image /* r30 */) {
    // Local variables
    int depth; // r27
    unsigned int format; // r31
    int mask; // r25
    int width; // r18
    int height; // r17
    int y; // r24
    unsigned char * cpIn; // r23
    struct RwRGBA * rpPal; // r26
    int x; // r22
    unsigned char * cpInCur; // r29
    int width; // r1+0xC
    int height; // r1+0x8
    int y; // r21
    unsigned char * cpIn; // r20
    int x; // r19
    struct RwRGBA * rpInCur; // r28

    // References
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804EE858
// Range: 0x80456F98 -> 0x80457180
int _rwDlImageFindRasterFormat(void * rasterIn /* r1+0x8 */, void * imageIn /* r1+0xC */, int flags /* r28 */) {
    // Local variables
    struct RwRaster * raster; // r31
    struct RwImage * image; // r30
    int format; // r29
    struct RwError _rwErrorCode; // r1+0x10

    // References
    // -> static char __dbFunctionName[27];
}


