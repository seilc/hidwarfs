/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\driver\gcn\dlsprite.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8045E4D0 -> 0x804601C4
*/
static struct RwRaster * _RwDlRasterTarget; // size: 0x4, address: 0x80D6C430
static float projVector[7]; // size: 0x1C, address: 0x805595A0
static float posMatrix[3][4]; // size: 0x30, address: 0x805595BC
static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EEF30
// Range: 0x8045E4D0 -> 0x8045E980
static void _rwDlRasterRenderQuadInit(struct RwRect * rect /* r31 */) {
    // References
    // -> static float posMatrix[3][4];
    // -> static float projVector[7];
    // -> struct _GXRenderModeObj * _RwDlRenderMode;
    // -> int _RwDlHalfHeight;
    // -> static struct RwRaster * _RwDlRasterTarget;
    // -> int _RwDlFSAATop;
    // -> int _RwDlFSAA;
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EEF4A
// Range: 0x8045E980 -> 0x8045F048
static void _rwDlRasterRenderQuad(struct RwRaster * raster /* r31 */, struct RwRect * rect /* r30 */, int scaled /* r27 */, int alpha /* r1+0x8 */) {
    // Local variables
    int fogEnable; // r1+0x1C
    enum RwTextureFilterMode filterMode; // r1+0x18
    enum RwTextureAddressMode addressModeU; // r1+0x14
    enum RwTextureAddressMode addressModeV; // r1+0x10
    struct RwRaster * curRaster; // r1+0xC
    struct RwRaster * parentRaster; // r29
    float recipWidth; // f31
    float recipHeight; // f30
    float recipWidth; // f29
    float recipHeight; // f28

    // References
    // -> struct _rwDlStateCache _RwDlStateCache;
    // -> static struct RwRaster * _RwDlRasterTarget;
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EEF60
// Range: 0x8045F048 -> 0x8045F380
static int _rwDlRasterRenderGeneric(struct RwRaster * raster /* r31 */, struct RwRect * rect /* r30 */, int scaled /* r29 */, int alpha /* r1+0x8 */) {
    // Local variables
    struct RwRect scissorRect; // r1+0x24
    struct RwError _rwErrorCode; // r1+0x1C
    struct RwError _rwErrorCode; // r1+0x14
    struct RwError _rwErrorCode; // r1+0xC

    // References
    // -> static char __dbFunctionName[25];
    // -> static struct RwRaster * _RwDlRasterTarget;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EEF79
// Range: 0x8045F380 -> 0x8045F3D0
int _rwDlRasterRender(void * rasterIn /* r1+0x8 */, void * rectIn /* r1+0xC */) {
    // References
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EEF8B
// Range: 0x8045F3D0 -> 0x8045F420
int _rwDlRasterRenderFast(void * rasterIn /* r1+0x8 */, void * rectIn /* r1+0xC */) {
    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EEFA1
// Range: 0x8045F420 -> 0x8045F470
int _rwDlRasterRenderScaled(void * rasterIn /* r1+0x8 */, void * rectIn /* r1+0xC */) {
    // References
    // -> static char __dbFunctionName[24];
}

static float projVector[7]; // size: 0x1C, address: 0x80559658
static float posMatrix[3][4]; // size: 0x30, address: 0x80559674
static char __dbFunctionName[33]; // size: 0x21, address: 0x804EEFB9
// Range: 0x8045F470 -> 0x8045F834
static void _rwDlRasterCamera_ZClearRectInit(struct RwRaster * raster /* r30 */) {
    // Local variables
    struct RwGameCubeRasterExtension * rasExt; // r29

    // References
    // -> static float posMatrix[3][4];
    // -> static float projVector[7];
    // -> struct _GXRenderModeObj * _RwDlRenderMode;
    // -> int _RwDlHalfHeight;
    // -> int _RwDlFSAATop;
    // -> int _RwDlFSAA;
    // -> enum _GXPixelFmt _RwDlPixelFormat;
    // -> enum _GXPixelFmt _RwDlCurPixelFormat;
    // -> static char __dbFunctionName[33];
}

static char __dbFunctionName[29]; // size: 0x1D, address: 0x804EEFDA
// Range: 0x8045F834 -> 0x8045FBA0
void _rwDlRasterCamera_ZClearRect(struct RwRaster * raster /* r26 */, struct RwRect * rect /* r31 */, struct RwRGBA * color /* r30 */, int clearFlags /* r28 */) {
    // Local variables
    int enableFog; // r29
    struct _GXColor clearColor; // r1+0xC

    // References
    // -> struct _rwDlStateCache _RwDlStateCache;
    // -> static char __dbFunctionName[29];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EEFF7
// Range: 0x8045FBA0 -> 0x804600D0
static int _rwDlRasterClearGeneric(struct RwRaster * raster /* r1+0x8 */, struct RwRect * rect /* r31 */, int packedColor /* r30 */) {
    // Local variables
    struct RwRGBA color; // r1+0xC
    int rasterLocked; // r29
    int y; // r28
    unsigned char color; // r20
    unsigned char * pixel; // r19
    int y; // r27
    unsigned char * pixel; // r18
    int y; // r26
    unsigned short color; // r17
    int x; // r22
    unsigned short * pixel; // r25
    int y; // r24
    int x; // r21
    unsigned int * pixel; // r23
    struct RwError _rwErrorCode; // r1+0x18
    struct RwError _rwErrorCode; // r1+0x10

    // References
    // -> static char __dbFunctionName[24];
    // -> static struct RwRaster * _RwDlRasterTarget;
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EF00F
// Range: 0x804600D0 -> 0x8046011C
int _rwDlRasterClearRect(void * rectIn /* r1+0x8 */, int packedColor /* r1+0xC */) {
    // References
    // -> static struct RwRaster * _RwDlRasterTarget;
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EF024
// Range: 0x8046011C -> 0x8046018C
int _rwDlRasterClear(int packedColor /* r1+0x8 */) {
    // Local variables
    struct RwRect rect; // r1+0xC

    // References
    // -> static struct RwRaster * _RwDlRasterTarget;
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EF035
// Range: 0x8046018C -> 0x804601C4
int _rwDlSetRasterContext(void * rasIn /* r4 */) {
    // Local variables
    struct RwRaster * raster; // r31

    // References
    // -> static struct RwRaster * _RwDlRasterTarget;
    // -> static char __dbFunctionName[22];
}


