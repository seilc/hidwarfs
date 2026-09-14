/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\driver\gcn\dl2drend.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80452DDC -> 0x80454458
*/
enum _GXPrimitive {
    GX_POINTS = 184,
    GX_LINES = 168,
    GX_LINESTRIP = 176,
    GX_TRIANGLES = 144,
    GX_TRIANGLESTRIP = 152,
    GX_TRIANGLEFAN = 160,
    GX_QUADS = 128,
};
static enum _GXPrimitive _rwDlPrimConvTbl[7]; // size: 0x1C, address: 0x805580B0
static float projVector[7]; // size: 0x1C, address: 0x805580CC
static float posMatrix[3][4]; // size: 0x30, address: 0x805580E8
static char __dbFunctionName[25]; // size: 0x19, address: 0x804EE560
struct RwTexture * _RwDlTexture; // size: 0x4, address: 0x80D6C42C
enum /* @enum$22dl2drend_c */ {
    VI_TVMODE_NTSC_INT = 0,
    VI_TVMODE_NTSC_DS = 1,
    VI_TVMODE_NTSC_PROG = 2,
    VI_TVMODE_PAL_INT = 4,
    VI_TVMODE_PAL_DS = 5,
    VI_TVMODE_EURGB60_INT = 20,
    VI_TVMODE_EURGB60_DS = 21,
    VI_TVMODE_MPAL_INT = 8,
    VI_TVMODE_MPAL_DS = 9,
    VI_TVMODE_DEBUG_INT = 12,
    VI_TVMODE_DEBUG_PAL_INT = 16,
    VI_TVMODE_DEBUG_PAL_DS = 17,
};
enum /* @enum$23dl2drend_c */ {
    VI_XFBMODE_SF = 0,
    VI_XFBMODE_DF = 1,
};
// total size: 0x3C
struct _GXRenderModeObj {
    // Members
    enum /* @enum$22dl2drend_c */ {
        VI_TVMODE_NTSC_INT = 0,
        VI_TVMODE_NTSC_DS = 1,
        VI_TVMODE_NTSC_PROG = 2,
        VI_TVMODE_PAL_INT = 4,
        VI_TVMODE_PAL_DS = 5,
        VI_TVMODE_EURGB60_INT = 20,
        VI_TVMODE_EURGB60_DS = 21,
        VI_TVMODE_MPAL_INT = 8,
        VI_TVMODE_MPAL_DS = 9,
        VI_TVMODE_DEBUG_INT = 12,
        VI_TVMODE_DEBUG_PAL_INT = 16,
        VI_TVMODE_DEBUG_PAL_DS = 17,
    } viTVmode; // offset 0x0, size 0x4
    unsigned short fbWidth; // offset 0x4, size 0x2
    unsigned short efbHeight; // offset 0x6, size 0x2
    unsigned short xfbHeight; // offset 0x8, size 0x2
    unsigned short viXOrigin; // offset 0xA, size 0x2
    unsigned short viYOrigin; // offset 0xC, size 0x2
    unsigned short viWidth; // offset 0xE, size 0x2
    unsigned short viHeight; // offset 0x10, size 0x2
    enum /* @enum$23dl2drend_c */ {
        VI_XFBMODE_SF = 0,
        VI_XFBMODE_DF = 1,
    } xFBmode; // offset 0x14, size 0x4
    unsigned char field_rendering; // offset 0x18, size 0x1
    unsigned char aa; // offset 0x19, size 0x1
    unsigned char sample_pattern[12][2]; // offset 0x1A, size 0x18
    unsigned char vfilter[7]; // offset 0x32, size 0x7
};
struct _GXRenderModeObj * _RwDlRenderMode; // size: 0x4, address: 0x80D6C410
static float _rwDlProjectionMatrix[7]; // size: 0x1C, address: 0x80D5DD30
// Range: 0x80452DDC -> 0x80453134
void _rw2DRenderPrimitiveInit() {
    // Local variables
    struct RwCamera * camera; // r30
    struct RwRaster * raster; // r31

    // References
    // -> static float posMatrix[3][4];
    // -> static float projVector[7];
    // -> static float _rwDlProjectionMatrix[7];
    // -> struct _GXRenderModeObj * _RwDlRenderMode;
    // -> void * RwEngineInstance;
    // -> struct RwTexture * _RwDlTexture;
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EE579
int _RwDlFSAA; // size: 0x4, address: 0x80D6C3B0
int _RwDlFSAATop; // size: 0x4, address: 0x80D68A78
int _RwDlHalfHeight; // size: 0x4, address: 0x80D6C40C
// Range: 0x80453134 -> 0x804535A0
static void _rw2DRenderPrimativeTerm() {
    // Local variables
    struct RwCamera * camera; // r30
    struct RwRaster * raster; // r31

    // References
    // -> static float _rwDlProjectionMatrix[7];
    // -> int _RwDlHalfHeight;
    // -> struct _GXRenderModeObj * _RwDlRenderMode;
    // -> int _RwDlFSAATop;
    // -> int _RwDlFSAA;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EE592
// Range: 0x804535A0 -> 0x804537A8
int _rwDlIm2DRenderTriangle(// total size: 0x18
struct {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    unsigned char r; // offset 0xC, size 0x1
    unsigned char g; // offset 0xD, size 0x1
    unsigned char b; // offset 0xE, size 0x1
    unsigned char a; // offset 0xF, size 0x1
    float u; // offset 0x10, size 0x4
    float v; // offset 0x14, size 0x4
} * verts /* r28 */, int vert1 /* r1+0x8 */, int vert2 /* r1+0xC */, int vert3 /* r1+0x10 */) {
    // Local variables
    // total size: 0x18
    struct {
        // Members
        float x; // offset 0x0, size 0x4
        float y; // offset 0x4, size 0x4
        float z; // offset 0x8, size 0x4
        unsigned char r; // offset 0xC, size 0x1
        unsigned char g; // offset 0xD, size 0x1
        unsigned char b; // offset 0xE, size 0x1
        unsigned char a; // offset 0xF, size 0x1
        float u; // offset 0x10, size 0x4
        float v; // offset 0x14, size 0x4
    } * dlVert0; // r31
    // total size: 0x18
    struct {
        // Members
        float x; // offset 0x0, size 0x4
        float y; // offset 0x4, size 0x4
        float z; // offset 0x8, size 0x4
        unsigned char r; // offset 0xC, size 0x1
        unsigned char g; // offset 0xD, size 0x1
        unsigned char b; // offset 0xE, size 0x1
        unsigned char a; // offset 0xF, size 0x1
        float u; // offset 0x10, size 0x4
        float v; // offset 0x14, size 0x4
    } * dlVert1; // r30
    // total size: 0x18
    struct {
        // Members
        float x; // offset 0x0, size 0x4
        float y; // offset 0x4, size 0x4
        float z; // offset 0x8, size 0x4
        unsigned char r; // offset 0xC, size 0x1
        unsigned char g; // offset 0xD, size 0x1
        unsigned char b; // offset 0xE, size 0x1
        unsigned char a; // offset 0xF, size 0x1
        float u; // offset 0x10, size 0x4
        float v; // offset 0x14, size 0x4
    } * dlVert2; // r29

    // References
    // -> struct RwTexture * _RwDlTexture;
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EE5AA
// Range: 0x804537A8 -> 0x8045392C
int _rwDlIm2DRenderLine(// total size: 0x18
struct {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    unsigned char r; // offset 0xC, size 0x1
    unsigned char g; // offset 0xD, size 0x1
    unsigned char b; // offset 0xE, size 0x1
    unsigned char a; // offset 0xF, size 0x1
    float u; // offset 0x10, size 0x4
    float v; // offset 0x14, size 0x4
} * verts /* r29 */, int vert1 /* r1+0x8 */, int vert2 /* r1+0xC */) {
    // Local variables
    // total size: 0x18
    struct {
        // Members
        float x; // offset 0x0, size 0x4
        float y; // offset 0x4, size 0x4
        float z; // offset 0x8, size 0x4
        unsigned char r; // offset 0xC, size 0x1
        unsigned char g; // offset 0xD, size 0x1
        unsigned char b; // offset 0xE, size 0x1
        unsigned char a; // offset 0xF, size 0x1
        float u; // offset 0x10, size 0x4
        float v; // offset 0x14, size 0x4
    } * dlVert0; // r31
    // total size: 0x18
    struct {
        // Members
        float x; // offset 0x0, size 0x4
        float y; // offset 0x4, size 0x4
        float z; // offset 0x8, size 0x4
        unsigned char r; // offset 0xC, size 0x1
        unsigned char g; // offset 0xD, size 0x1
        unsigned char b; // offset 0xE, size 0x1
        unsigned char a; // offset 0xF, size 0x1
        float u; // offset 0x10, size 0x4
        float v; // offset 0x14, size 0x4
    } * dlVert1; // r30

    // References
    // -> struct RwTexture * _RwDlTexture;
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EE5BE
// Range: 0x8045392C -> 0x80453E78
int _rwDlIm2DRenderPrimitive(enum RwPrimitiveType primType /* r26 */, // total size: 0x18
struct {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    unsigned char r; // offset 0xC, size 0x1
    unsigned char g; // offset 0xD, size 0x1
    unsigned char b; // offset 0xE, size 0x1
    unsigned char a; // offset 0xF, size 0x1
    float u; // offset 0x10, size 0x4
    float v; // offset 0x14, size 0x4
} * verts /* r31 */, int numVertices /* r29 */) {
    // Local variables
    int numLines; // r28
    int numTriangles; // r27
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[25];
    // -> struct RwTexture * _RwDlTexture;
    // -> static enum _GXPrimitive _rwDlPrimConvTbl[7];
}

static char __dbFunctionName[32]; // size: 0x20, address: 0x804EE5D7
// Range: 0x80453E78 -> 0x80454458
int _rwDlIm2DRenderIndexedPrimitive(enum RwPrimitiveType primType /* r19 */, // total size: 0x18
struct {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    unsigned char r; // offset 0xC, size 0x1
    unsigned char g; // offset 0xD, size 0x1
    unsigned char b; // offset 0xE, size 0x1
    unsigned char a; // offset 0xF, size 0x1
    float u; // offset 0x10, size 0x4
    float v; // offset 0x14, size 0x4
} * verts /* r24 */, unsigned short * indices /* r30 */, int numIndices /* r22 */) {
    // Local variables
    // total size: 0x18
    struct {
        // Members
        float x; // offset 0x0, size 0x4
        float y; // offset 0x4, size 0x4
        float z; // offset 0x8, size 0x4
        unsigned char r; // offset 0xC, size 0x1
        unsigned char g; // offset 0xD, size 0x1
        unsigned char b; // offset 0xE, size 0x1
        unsigned char a; // offset 0xF, size 0x1
        float u; // offset 0x10, size 0x4
        float v; // offset 0x14, size 0x4
    } * curVert; // r26
    // total size: 0x18
    struct {
        // Members
        float x; // offset 0x0, size 0x4
        float y; // offset 0x4, size 0x4
        float z; // offset 0x8, size 0x4
        unsigned char r; // offset 0xC, size 0x1
        unsigned char g; // offset 0xD, size 0x1
        unsigned char b; // offset 0xE, size 0x1
        unsigned char a; // offset 0xF, size 0x1
        float u; // offset 0x10, size 0x4
        float v; // offset 0x14, size 0x4
    } * curVert; // r25
    int numLines; // r21
    // total size: 0x18
    struct {
        // Members
        float x; // offset 0x0, size 0x4
        float y; // offset 0x4, size 0x4
        float z; // offset 0x8, size 0x4
        unsigned char r; // offset 0xC, size 0x1
        unsigned char g; // offset 0xD, size 0x1
        unsigned char b; // offset 0xE, size 0x1
        unsigned char a; // offset 0xF, size 0x1
        float u; // offset 0x10, size 0x4
        float v; // offset 0x14, size 0x4
    } * curVert; // r28
    // total size: 0x18
    struct {
        // Members
        float x; // offset 0x0, size 0x4
        float y; // offset 0x4, size 0x4
        float z; // offset 0x8, size 0x4
        unsigned char r; // offset 0xC, size 0x1
        unsigned char g; // offset 0xD, size 0x1
        unsigned char b; // offset 0xE, size 0x1
        unsigned char a; // offset 0xF, size 0x1
        float u; // offset 0x10, size 0x4
        float v; // offset 0x14, size 0x4
    } * curVert; // r27
    int numTriangles; // r20
    // total size: 0x18
    struct {
        // Members
        float x; // offset 0x0, size 0x4
        float y; // offset 0x4, size 0x4
        float z; // offset 0x8, size 0x4
        unsigned char r; // offset 0xC, size 0x1
        unsigned char g; // offset 0xD, size 0x1
        unsigned char b; // offset 0xE, size 0x1
        unsigned char a; // offset 0xF, size 0x1
        float u; // offset 0x10, size 0x4
        float v; // offset 0x14, size 0x4
    } * curVert; // r31
    // total size: 0x18
    struct {
        // Members
        float x; // offset 0x0, size 0x4
        float y; // offset 0x4, size 0x4
        float z; // offset 0x8, size 0x4
        unsigned char r; // offset 0xC, size 0x1
        unsigned char g; // offset 0xD, size 0x1
        unsigned char b; // offset 0xE, size 0x1
        unsigned char a; // offset 0xF, size 0x1
        float u; // offset 0x10, size 0x4
        float v; // offset 0x14, size 0x4
    } * curVert; // r29
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[32];
    // -> struct RwTexture * _RwDlTexture;
    // -> static enum _GXPrimitive _rwDlPrimConvTbl[7];
}


