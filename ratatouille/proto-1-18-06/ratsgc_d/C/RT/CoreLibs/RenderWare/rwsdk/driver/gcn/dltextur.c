/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\driver\gcn\dltextur.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804609D4 -> 0x804615F4
*/
// total size: 0x8
struct __rwFilterParams {
    // Members
    enum _GXTexFilter min; // offset 0x0, size 0x4
    enum _GXTexFilter mag; // offset 0x4, size 0x4
};
static struct __rwFilterParams _RwDlFilterModeConvTable[7]; // size: 0x38, address: 0x805597B0
enum _GXTexWrapMode {
    GX_CLAMP = 0,
    GX_REPEAT = 1,
    GX_MIRROR = 2,
    GX_MAX_TEXWRAPMODE = 3,
};
static enum _GXTexWrapMode _RwDlAddressConvTable[5]; // size: 0x14, address: 0x805597E8
static struct RwTexture * _RwDlTextureCache[8]; // size: 0x20, address: 0x805597FC
static char __dbFunctionName[18]; // size: 0x12, address: 0x804EF0A0
// Range: 0x804609D4 -> 0x80460A10
static void * _rwDlTextureConst(void * object /* r3 */) {
    // Local variables
    struct _rwDlTextureExt * texExt; // r31

    // References
    // -> int _RwGameCubeTextureExtOffset;
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EF0B2
// Range: 0x80460A10 -> 0x80460A84
static void * _rwDlTextureDest(void * object /* r3 */) {
    // Local variables
    int i; // r31

    // References
    // -> static struct RwTexture * _RwDlTextureCache[8];
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EF0C3
// Range: 0x80460A84 -> 0x80460ADC
void _rwDlTextureCacheInit() {
    // Local variables
    unsigned int numTextures; // r31

    // References
    // -> static struct RwTexture * _RwDlTextureCache[8];
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EF0D9
// Range: 0x80460ADC -> 0x80460B3C
void _rwDlTexturePluginAttach() {
    // Local variables
    struct _rwDlTextureExt texExt; // r1+0x8

    // References
    // -> int _RwGameCubeTextureExtOffset;
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EF0F2
enum _GXTexFilter {
    GX_NEAR = 0,
    GX_LINEAR = 1,
    GX_NEAR_MIP_NEAR = 2,
    GX_LIN_MIP_NEAR = 3,
    GX_NEAR_MIP_LIN = 4,
    GX_LIN_MIP_LIN = 5,
};
// Range: 0x80460B3C -> 0x804610A0
static void _rwGameCubeTextureSetLOD(struct RwTexture * texture /* r29 */, float lodBias /* f31 */, int biasClamp /* r1+0x10 */, int edgeLod /* r1+0x14 */, unsigned int maxAniso /* r23 */, int name /* r1+0x18 */) {
    // Local variables
    struct RwRaster * raster; // r30
    struct _rwDlTextureExt * texExt; // r28
    struct RwGameCubeRasterExtension * rasExt; // r27
    int format; // r26
    enum _GXTexFilter minTexFilter; // r25
    enum _GXTexFilter magTexFilter; // r24
    struct RwError _rwErrorCode; // r1+0x24
    struct RwError _rwErrorCode; // r1+0x1C
    unsigned int tlutName; // r22

    // References
    // -> static struct __rwFilterParams _RwDlFilterModeConvTable[7];
    // -> static char __dbFunctionName[25];
    // -> static enum _GXTexWrapMode _RwDlAddressConvTable[5];
    // -> int _RwGameCubeTextureExtOffset;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EF10B
// Range: 0x804610A0 -> 0x8046155C
void _rwDlTextureSet(struct RwTexture * texture /* r29 */, int index /* r26 */) {
    // Local variables
    struct RwRaster * raster; // r28
    struct RwGameCubeRasterExtension * rasExt; // r27
    struct _rwDlTextureExt * texExt; // r31
    struct RwError _rwErrorCode; // r1+0x10
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static struct RwTexture * _RwDlTextureCache[8];
    // -> static char __dbFunctionName[16];
    // -> int _RwGameCubeTextureExtOffset;
    // -> struct RwRaster * _RwDlRasterWhite;
    // -> struct RwTexture * _RwDlTexture;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EF11B
// Range: 0x8046155C -> 0x804615F4
void RwGameCubeTextureSetLOD(struct RwTexture * texture /* r31 */, float lodBias /* r1+0x8 */, int biasClamp /* r1+0xC */, int edgeLod /* r1+0x10 */, unsigned int maxAniso /* r1+0x14 */) {
    // References
    // -> static char __dbFunctionName[24];
}


