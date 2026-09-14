/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\driver\gcn\dlrendst.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8045CB68 -> 0x8045E4D0
*/
enum _GXFogType {
    GX_FOG_NONE = 0,
    GX_FOG_PERSP_LIN = 2,
    GX_FOG_PERSP_EXP = 4,
    GX_FOG_PERSP_EXP2 = 5,
    GX_FOG_PERSP_REVEXP = 6,
    GX_FOG_PERSP_REVEXP2 = 7,
    GX_FOG_ORTHO_LIN = 10,
    GX_FOG_ORTHO_EXP = 12,
    GX_FOG_ORTHO_EXP2 = 13,
    GX_FOG_ORTHO_REVEXP = 14,
    GX_FOG_ORTHO_REVEXP2 = 15,
    GX_FOG_LIN = 2,
    GX_FOG_EXP = 4,
    GX_FOG_EXP2 = 5,
    GX_FOG_REVEXP = 6,
    GX_FOG_REVEXP2 = 7,
};
static enum _GXFogType _RwDlFogConvTable[4]; // size: 0x10, address: 0x80559210
static enum _GXBlendFactor _RwDlBlendConvTable[12]; // size: 0x30, address: 0x80559220
struct RwRaster * _RwDlRasterWhite; // size: 0x4, address: 0x80D6C428
static char __dbFunctionName[21]; // size: 0x15, address: 0x804EECA0
enum _GXCompare {
    GX_NEVER = 0,
    GX_LESS = 1,
    GX_EQUAL = 2,
    GX_LEQUAL = 3,
    GX_GREATER = 4,
    GX_NEQUAL = 5,
    GX_GEQUAL = 6,
    GX_ALWAYS = 7,
};
// total size: 0x50
struct _rwDlStateCache {
    // Members
    int zWriteEnable; // offset 0x0, size 0x4
    int zTestEnable; // offset 0x4, size 0x4
    enum _GXCompare zCompare; // offset 0x8, size 0x4
    enum RwCullMode cullMode; // offset 0xC, size 0x4
    int fogEnable; // offset 0x10, size 0x4
    enum RwFogType fogType; // offset 0x14, size 0x4
    unsigned int packedFogColor; // offset 0x18, size 0x4
    struct RwRGBA fogColor; // offset 0x1C, size 0x4
    int userFarFogPlane; // offset 0x20, size 0x4
    float nearFogPlane; // offset 0x24, size 0x4
    float farFogPlane; // offset 0x28, size 0x4
    float nearPlane; // offset 0x2C, size 0x4
    float farPlane; // offset 0x30, size 0x4
    enum RwBlendFunction srcBlend; // offset 0x34, size 0x4
    enum RwBlendFunction dstBlend; // offset 0x38, size 0x4
    int zBeforeTex; // offset 0x3C, size 0x4
    int comp0; // offset 0x40, size 0x4
    int comp1; // offset 0x44, size 0x4
    int op; // offset 0x48, size 0x4
    unsigned char ref0; // offset 0x4C, size 0x1
    unsigned char ref1; // offset 0x4D, size 0x1
    unsigned char userDefined; // offset 0x4E, size 0x1
    unsigned char pad[1]; // offset 0x4F, size 0x1
};
struct _rwDlStateCache _RwDlStateCache; // size: 0x50, address: 0x80D5DDE8
// Range: 0x8045CB68 -> 0x8045CFB4
void _rwDlRenderStateOpen() {
    // Local variables
    struct _GXColor white; // r1+0x1C
    unsigned char * pixels; // r31

    // References
    // -> struct RwRaster * _RwDlRasterWhite;
    // -> struct RwTexture * _RwDlTexture;
    // -> struct _rwDlStateCache _RwDlStateCache;
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EECB5
// Range: 0x8045CFB4 -> 0x8045D014
void _rwDlRenderStateClose() {
    // References
    // -> struct RwTexture * _RwDlTexture;
    // -> struct RwRaster * _RwDlRasterWhite;
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EECCB
// Range: 0x8045D014 -> 0x8045D268
int _rwDlGetRenderState(enum RwRenderState state /* r1+0x8 */, void * param /* r31 */) {
    // References
    // -> struct _rwDlStateCache _RwDlStateCache;
    // -> struct RwTexture * _RwDlTexture;
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EECDF
// Range: 0x8045D268 -> 0x8045D43C
int _rwDlRenderStateFogEnable(int fog /* r1+0x8 */) {
    // Local variables
    struct RwCamera * camera; // r31

    // References
    // -> struct _rwDlStateCache _RwDlStateCache;
    // -> static enum _GXFogType _RwDlFogConvTable[4];
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EECF9
// Range: 0x8045D43C -> 0x8045D560
static int _rwDlRenderStateFogColor(unsigned int fogColor /* r30 */) {
    // Local variables
    struct RwCamera * camera; // r31

    // References
    // -> struct _rwDlStateCache _RwDlStateCache;
    // -> static enum _GXFogType _RwDlFogConvTable[4];
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EED12
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};
// Range: 0x8045D560 -> 0x8045D684
static int _rwDlRenderStateFogType(enum RwFogType fogType /* r30 */) {
    // Local variables
    struct RwCamera * camera; // r31

    // References
    // -> struct _rwDlStateCache _RwDlStateCache;
    // -> static enum _GXFogType _RwDlFogConvTable[4];
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804EED2A
// Range: 0x8045D684 -> 0x8045D6A4
static int _rwDlRenderStateFogDensity() {
    // References
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804EED45
// Range: 0x8045D6A4 -> 0x8045D704
static int _rwDlRenderStateTextureAddress(enum RwTextureAddressMode addressMode /* r31 */) {
    // References
    // -> struct RwTexture * _RwDlTexture;
    // -> static char __dbFunctionName[31];
}

static char __dbFunctionName[32]; // size: 0x20, address: 0x804EED64
// Range: 0x8045D704 -> 0x8045D764
static int _rwDlRenderStateTextureAddressU(enum RwTextureAddressMode addressMode /* r31 */) {
    // References
    // -> struct RwTexture * _RwDlTexture;
    // -> static char __dbFunctionName[32];
}

static char __dbFunctionName[32]; // size: 0x20, address: 0x804EED84
// Range: 0x8045D764 -> 0x8045D7C4
static int _rwDlRenderStateTextureAddressV(enum RwTextureAddressMode addressMode /* r31 */) {
    // References
    // -> struct RwTexture * _RwDlTexture;
    // -> static char __dbFunctionName[32];
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804EEDA4
// Range: 0x8045D7C4 -> 0x8045D80C
static int _rwDlRenderStateTextureFilter(enum RwTextureFilterMode filterMode /* r1+0x8 */) {
    // References
    // -> struct RwTexture * _RwDlTexture;
    // -> static char __dbFunctionName[30];
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804EEDC2
// Range: 0x8045D80C -> 0x8045D870
static int _rwDlRenderStateTextureRaster(struct RwRaster * raster /* r31 */) {
    // References
    // -> struct RwTexture * _RwDlTexture;
    // -> static char __dbFunctionName[30];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804EEDE0
// Range: 0x8045D870 -> 0x8045D93C
void _rwDlRenderStateSetZCompLoc(int zBeforeTex /* r31 */) {
    // References
    // -> struct _rwDlStateCache _RwDlStateCache;
    // -> static char __dbFunctionName[28];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EEDFC
// Range: 0x8045D93C -> 0x8045D9D0
void _rwDlTextureRasterFlush() {
    // Local variables
    struct RwGameCubeRasterExtension * rasExt; // r31

    // References
    // -> struct RwTexture * _RwDlTexture;
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[29]; // size: 0x1D, address: 0x804EEE14
// Range: 0x8045D9D0 -> 0x8045DA94
static int _rwDlRenderStateZWriteEnable(int enable /* r1+0x8 */) {
    // References
    // -> struct _rwDlStateCache _RwDlStateCache;
    // -> static char __dbFunctionName[29];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804EEE31
// Range: 0x8045DA94 -> 0x8045DB80
static int _rwDlRenderStateZTestEnable(int enable /* r1+0x8 */) {
    // References
    // -> struct _rwDlStateCache _RwDlStateCache;
    // -> static char __dbFunctionName[28];
}

static char __dbFunctionName[32]; // size: 0x20, address: 0x804EEE4D
enum _GXBlendFactor {
    GX_BL_ZERO = 0,
    GX_BL_ONE = 1,
    GX_BL_SRCCLR = 2,
    GX_BL_INVSRCCLR = 3,
    GX_BL_SRCALPHA = 4,
    GX_BL_INVSRCALPHA = 5,
    GX_BL_DSTALPHA = 6,
    GX_BL_INVDSTALPHA = 7,
    GX_BL_DSTCLR = 2,
    GX_BL_INVDSTCLR = 3,
};
// Range: 0x8045DB80 -> 0x8045DC90
void _rwDlSetRenderStateSrcDestBlend(enum RwBlendFunction srcBlend /* r29 */, enum RwBlendFunction dstBlend /* r30 */) {
    // Local variables
    enum _GXBlendFactor gxSrcBlend; // r28
    enum _GXBlendFactor gxDstBlend; // r27

    // References
    // -> static enum _GXBlendFactor _RwDlBlendConvTable[12];
    // -> static char __dbFunctionName[32];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EEE6D
// Range: 0x8045DC90 -> 0x8045DDBC
static int _rwDlRenderStateSrcBlend(enum RwBlendFunction srcBlend /* r31 */) {
    // Local variables
    enum _GXBlendFactor gxSrcBlend; // r29
    enum _GXBlendFactor gxDstBlend; // r28

    // References
    // -> struct _rwDlStateCache _RwDlStateCache;
    // -> static enum _GXBlendFactor _RwDlBlendConvTable[12];
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EEE86
// Range: 0x8045DDBC -> 0x8045DED8
static int _rwDlRenderStateDstBlend(enum RwBlendFunction dstBlend /* r31 */) {
    // Local variables
    enum _GXBlendFactor gxSrcBlend; // r29
    enum _GXBlendFactor gxDstBlend; // r28

    // References
    // -> struct _rwDlStateCache _RwDlStateCache;
    // -> static enum _GXBlendFactor _RwDlBlendConvTable[12];
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EEE9F
// Range: 0x8045DED8 -> 0x8045DF80
static int _rwDlRenderStateCullMode(enum RwCullMode cullMode /* r31 */) {
    // References
    // -> struct _rwDlStateCache _RwDlStateCache;
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[33]; // size: 0x21, address: 0x804EEEB8
enum RwAlphaTestFunction {
    rwALPHATESTFUNCTIONNAALPHATESTFUNCTION = 0,
    rwALPHATESTFUNCTIONNEVER = 1,
    rwALPHATESTFUNCTIONLESS = 2,
    rwALPHATESTFUNCTIONEQUAL = 3,
    rwALPHATESTFUNCTIONLESSEQUAL = 4,
    rwALPHATESTFUNCTIONGREATER = 5,
    rwALPHATESTFUNCTIONNOTEQUAL = 6,
    rwALPHATESTFUNCTIONGREATEREQUAL = 7,
    rwALPHATESTFUNCTIONALWAYS = 8,
    rwALPHATESTFUNCTIONFORCEENUMSIZEINT = 2147483647,
};
// Range: 0x8045DF80 -> 0x8045E128
static int rwDlRenderStateAlphaTestFunction(enum RwAlphaTestFunction function /* r31 */) {
    // References
    // -> struct _rwDlStateCache _RwDlStateCache;
    // -> static char __dbFunctionName[33];
}

static char __dbFunctionName[36]; // size: 0x24, address: 0x804EEED9
// Range: 0x8045E128 -> 0x8045E234
static int rwDlRenderStateAlphaTestFunctionRef(int ref /* r31 */) {
    // References
    // -> struct _rwDlStateCache _RwDlStateCache;
    // -> static char __dbFunctionName[36];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EEEFD
// Range: 0x8045E234 -> 0x8045E3D4
int _rwDlSetRenderState(enum RwRenderState state /* r1+0x8 */, void * param /* r30 */) {
    // Local variables
    int result; // r31

    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EEF11
// Range: 0x8045E3D4 -> 0x8045E4D0
void RwGameCubeSetAlphaCompare(int comp0 /* r1+0x8 */, unsigned char ref0 /* r1+0xC */, int op /* r1+0x10 */, int comp1 /* r1+0x14 */, unsigned char ref1 /* r1+0x18 */) {
    // References
    // -> struct _rwDlStateCache _RwDlStateCache;
    // -> static char __dbFunctionName[26];
}


