/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\driver\gcn\dlraster.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8045959C -> 0x8045CB68
*/
static char __dbFunctionName[24]; // size: 0x18, address: 0x804EEAF0
int _RwGameCubeRasterExtOffset; // size: 0x4, address: 0x80D6C420
// Range: 0x8045959C -> 0x804595F4
void _rwDlRasterPluginAttach() {
    // Local variables
    struct RwGameCubeRasterExtension rasExt; // r1+0x8

    // References
    // -> int _RwGameCubeRasterExtOffset;
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EEB08
// Range: 0x804595F4 -> 0x80459890
static unsigned int DlRasterGetMipLevelSize(struct RwRaster * raster /* r26 */, unsigned char mipLevel /* r22 */) {
    // Local variables
    unsigned int width; // r31
    unsigned int height; // r30
    unsigned int size; // r29
    struct RwRaster * parent; // r27
    struct RwGameCubeRasterExtension * rasExt; // r25
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EEB20
// Range: 0x80459890 -> 0x8045993C
static unsigned int DlRasterGetMipLevelOffset(struct RwRaster * raster /* r29 */, unsigned char level /* r30 */) {
    // Local variables
    unsigned int offset; // r31

    // References
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EEB3A
// Range: 0x8045993C -> 0x804599C8
unsigned int _rwDlRasterGetSize(struct RwRaster * raster /* r30 */) {
    // Local variables
    unsigned int size; // r31
    int numMipLevels; // r1+0x8

    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EEB4D
// Range: 0x804599C8 -> 0x80459BC8
unsigned int _rwDlRasterGetStride(struct RwRaster * raster /* r28 */, unsigned char level /* r26 */) {
    // Local variables
    unsigned int stride; // r29
    int width; // r31
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EEB62
// Range: 0x80459BC8 -> 0x80459C8C
static unsigned char DlRasterFindNumMipLevels(struct RwRaster * raster /* r31 */) {
    // References
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804EEB7B
// Range: 0x80459C8C -> 0x80459D64
int _rwDlRasterGetNumMipLevels(void * mipLevels /* r28 */, void * rasterIn /* r29 */) {
    // Local variables
    struct RwGameCubeRasterExtension * rasExt; // r31

    // References
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804EEB96
// Range: 0x80459D64 -> 0x8045A224
static void DlRasterTile(void * dstBuffer /* r21 */, void * srcBuffer /* r18 */, int width /* r29 */, int height /* r19 */, int depth /* r1+0x8 */, int stride /* r20 */) {
    // Local variables
    int tilesX; // r1+0x64
    int y; // r28
    unsigned char * line; // r1+0x60
    int tiles; // r1+0x5C
    int tdy; // r1+0x58
    int x; // r24
    unsigned int numPixels; // r1+0x54
    unsigned int byteOffset; // r1+0x50
    int tilesX; // r1+0x4C
    int y; // r27
    unsigned char * line; // r1+0x48
    int tiles; // r1+0x44
    int tdy; // r1+0x40
    int x; // r23
    unsigned int numPixels; // r1+0x3C
    unsigned int byteOffset; // r1+0x38
    int tilesX; // r1+0x34
    int y; // r26
    unsigned short * line; // r1+0x30
    int tiles; // r1+0x2C
    int tdy; // r1+0x28
    int x; // r22
    unsigned int numPixels; // r1+0x24
    unsigned int byteOffset; // r1+0x20
    int tilesX; // r1+0x1C
    int y; // r25
    unsigned char * line; // r17
    int tiles; // r1+0x18
    int tdy; // r1+0x14
    int x; // r30
    unsigned int tb; // r1+0x10
    unsigned int index; // r1+0xC
    struct RwError _rwErrorCode; // r1+0x68

    // References
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EEBA3
// Range: 0x8045A224 -> 0x8045A6E4
static void DlRasterUntile(void * dstBuffer /* r18 */, void * srcBuffer /* r21 */, int width /* r29 */, int height /* r19 */, int depth /* r1+0x8 */, int stride /* r20 */) {
    // Local variables
    int tilesX; // r1+0x64
    int y; // r28
    unsigned char * line; // r1+0x60
    int tiles; // r1+0x5C
    int tdy; // r1+0x58
    int x; // r24
    unsigned int numPixels; // r1+0x54
    unsigned int byteOffset; // r1+0x50
    int tilesX; // r1+0x4C
    int y; // r27
    unsigned char * line; // r1+0x48
    int tiles; // r1+0x44
    int tdy; // r1+0x40
    int x; // r23
    unsigned int numPixels; // r1+0x3C
    unsigned int byteOffset; // r1+0x38
    int tilesX; // r1+0x34
    int y; // r26
    unsigned short * line; // r1+0x30
    int tiles; // r1+0x2C
    int tdy; // r1+0x28
    int x; // r22
    unsigned int numPixels; // r1+0x24
    unsigned int byteOffset; // r1+0x20
    int tilesX; // r1+0x1C
    int y; // r25
    unsigned char * line; // r17
    int tiles; // r1+0x18
    int tdy; // r1+0x14
    int x; // r30
    unsigned int tb; // r1+0x10
    unsigned int index; // r1+0xC
    struct RwError _rwErrorCode; // r1+0x68

    // References
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EEBB2
// Range: 0x8045A6E4 -> 0x8045ACB8
int _rwDlRasterLock(void * pixelsIn /* r1+0x8 */, void * rasterIn /* r1+0xC */, int accessMode /* r26 */) {
    // Local variables
    unsigned char * * pixels; // r21
    struct RwRaster * raster; // r31
    struct RwRaster * parentRaster; // r29
    struct RwGameCubeRasterExtension * rasExt; // r30
    unsigned char * lockedPixels; // r20
    int pitch; // r25
    unsigned char mipLevel; // r27
    int height; // r24
    int width; // r23
    int height; // r22
    struct RwError _rwErrorCode; // r1+0x24
    struct RwError _rwErrorCode; // r1+0x1C
    struct RwError _rwErrorCode; // r1+0x14

    // References
    // -> static char __dbFunctionName[16];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EEBC2
// Range: 0x8045ACB8 -> 0x8045AF30
int _rwDlRasterUnlock(void * rasterIn /* r1+0x8 */) {
    // Local variables
    struct RwRaster * raster; // r31
    struct RwRaster * parentRaster; // r29
    struct RwGameCubeRasterExtension * rasExt; // r30
    struct RwError _rwErrorCode; // r1+0xC

    // References
    // -> static char __dbFunctionName[18];
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EEBD4
// Range: 0x8045AF30 -> 0x8045B104
int _rwDlRasterLockPalette(void * palette /* r1+0x8 */, void * rasterIn /* r1+0xC */, int accessMode /* r27 */) {
    // Local variables
    unsigned char * * cppPalette; // r30
    struct RwRaster * raster; // r31
    int format; // r28
    struct RwGameCubeRasterExtension * rasExt; // r29
    struct RwError _rwErrorCode; // r1+0x10

    // References
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EEBEB
// Range: 0x8045B104 -> 0x8045B27C
int _rwDlRasterUnlockPalette(void * rasterIn /* r1+0x8 */) {
    // Local variables
    struct RwRaster * raster; // r31
    struct RwGameCubeRasterExtension * rasExt; // r30
    struct RwError _rwErrorCode; // r1+0xC

    // References
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EEC04
// Range: 0x8045B27C -> 0x8045BE18
static int DlGetRasterFormat(struct RwRaster * raster /* r30 */, int flags /* r27 */) {
    // Local variables
    unsigned int format; // r28
    struct RwGameCubeRasterExtension * rasExt; // r31
    struct RwError _rwErrorCode; // r1+0x58
    struct RwError _rwErrorCode; // r1+0x50
    struct RwError _rwErrorCode; // r1+0x48
    struct RwError _rwErrorCode; // r1+0x40
    struct RwError _rwErrorCode; // r1+0x38
    struct RwError _rwErrorCode; // r1+0x30
    struct RwError _rwErrorCode; // r1+0x28
    struct RwError _rwErrorCode; // r1+0x20
    struct RwError _rwErrorCode; // r1+0x18
    struct RwError _rwErrorCode; // r1+0x10
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[18];
    // -> struct _GXRenderModeObj * _RwDlRenderMode;
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EEC16
// Range: 0x8045BE18 -> 0x8045C20C
int _rwDlTextureRasterCreate(struct RwRaster * raster /* r29 */, unsigned char numLods /* r25 */) {
    // Local variables
    unsigned int rasterSize; // r28
    struct RwGameCubeRasterExtension * rasExt; // r31
    unsigned int tmpRasterSize; // r24
    unsigned int paletteSize; // r27
    struct RwError _rwErrorCode; // r1+0x10
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[25];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EEC2F
// Range: 0x8045C20C -> 0x8045C7C4
int _rwDlRasterCreate(void * rasterIn /* r1+0x8 */, int flags /* r1+0xC */) {
    // Local variables
    struct RwRaster * raster; // r31
    struct RwGameCubeRasterExtension * rasExt; // r30
    int format; // r28
    unsigned int maxWidthBit; // r27
    unsigned int maxHeightBit; // r26
    struct RwError _rwErrorCode; // r1+0x38
    struct RwError _rwErrorCode; // r1+0x30
    struct RwError _rwErrorCode; // r1+0x28
    struct RwError _rwErrorCode; // r1+0x20
    struct RwError _rwErrorCode; // r1+0x18
    struct RwError _rwErrorCode; // r1+0x10

    // References
    // -> static char __dbFunctionName[18];
    // -> unsigned short _RwDlTokenLastSeen;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EEC41
// Range: 0x8045C7C4 -> 0x8045C9A0
int _rwDlRasterDestroy(void * rasterIn /* r1+0x8 */) {
    // Local variables
    struct RwRaster * raster; // r31
    struct RwGameCubeRasterExtension * rasExt; // r30
    struct RwError _rwErrorCode; // r1+0xC

    // References
    // -> static char __dbFunctionName[19];
    // -> void * RwEngineInstance;
    // -> struct RwTexture * _RwDlTexture;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EEC54
int _RwGameCubeTextureExtOffset; // size: 0x4, address: 0x80D6C438
// total size: 0x24
struct _rwDlTextureExt {
    // Members
    unsigned int texObj[8]; // offset 0x0, size 0x20
    unsigned int flags; // offset 0x20, size 0x4
};
// Range: 0x8045C9A0 -> 0x8045CA34
int _rwDlTextureSetRaster(void * textureIn /* r30 */, void * rasterIn /* r1+0x8 */) {
    // Local variables
    struct _rwDlTextureExt * texExt; // r31

    // References
    // -> int _RwGameCubeTextureExtOffset;
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EEC6A
// Range: 0x8045CA34 -> 0x8045CA9C
int _rwDlRasterSubRaster(void * raster /* r3 */, void * pIn /* r4 */) {
    // Local variables
    struct RwRaster * ras; // r31
    struct RwRaster * rpIn; // r30

    // References
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[29]; // size: 0x1D, address: 0x804EEC7F
// Range: 0x8045CA9C -> 0x8045CB68
struct RwGameCubeRasterExtension * RwGameCubeRasterGetExtension(struct RwRaster * raster /* r30 */) {
    // Local variables
    struct RwGameCubeRasterExtension * rasExt; // r29

    // References
    // -> static char __dbFunctionName[29];
    // -> int _RwGameCubeRasterExtOffset;
}


