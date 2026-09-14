/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\world\pipe\p2\gcn\vtxfmt.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8041F960 -> 0x80420930
*/
int _rpDlGeomVtxFmtOffset; // size: 0x4, address: 0x80D6C2E0
int _rpDlWorldVtxFmtOffset; // size: 0x4, address: 0x80D6C2E4
static char __dbFunctionName[17]; // size: 0x11, address: 0x804EB3B8
static struct RwModuleInfo _RpVtxFmtModule; // size: 0x8, address: 0x80D6C2E8
static struct RpGameCubeVtxFmt _RpDlVtxFmtDefault; // size: 0x18, address: 0x80D5C658
enum _GXAttr {
    GX_VA_PNMTXIDX = 0,
    GX_VA_TEX0MTXIDX = 1,
    GX_VA_TEX1MTXIDX = 2,
    GX_VA_TEX2MTXIDX = 3,
    GX_VA_TEX3MTXIDX = 4,
    GX_VA_TEX4MTXIDX = 5,
    GX_VA_TEX5MTXIDX = 6,
    GX_VA_TEX6MTXIDX = 7,
    GX_VA_TEX7MTXIDX = 8,
    GX_VA_POS = 9,
    GX_VA_NRM = 10,
    GX_VA_CLR0 = 11,
    GX_VA_CLR1 = 12,
    GX_VA_TEX0 = 13,
    GX_VA_TEX1 = 14,
    GX_VA_TEX2 = 15,
    GX_VA_TEX3 = 16,
    GX_VA_TEX4 = 17,
    GX_VA_TEX5 = 18,
    GX_VA_TEX6 = 19,
    GX_VA_TEX7 = 20,
    GX_POS_MTX_ARRAY = 21,
    GX_NRM_MTX_ARRAY = 22,
    GX_TEX_MTX_ARRAY = 23,
    GX_LIGHT_ARRAY = 24,
    GX_VA_NBT = 25,
    GX_VA_MAX_ATTR = 26,
    GX_VA_NULL = 255,
};
// Range: 0x8041F960 -> 0x8041FD40
void _rwDlVtxFmtSetup(struct RpGameCubeVtxFmt * fmt /* r29 */, struct RxGameCubePipeData * pipeData /* r26 */) {
    // Local variables
    unsigned int count; // r30
    struct RxGameCubeVertexBuffer * vbHeader; // r31
    enum _GXAttr texCoord; // r27

    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RpGameCubeVtxFmt _RpDlVtxFmtDefault;
    // -> static struct RwModuleInfo _RpVtxFmtModule;
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804EB3C9
// Range: 0x8041FD40 -> 0x8041FDB0
struct RpGameCubeVtxFmt * _rpGameCubeVtxFmtGetDefault() {
    // References
    // -> static struct RpGameCubeVtxFmt _RpDlVtxFmtDefault;
    // -> static char __dbFunctionName[28];
    // -> static struct RwModuleInfo _RpVtxFmtModule;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EB3E5
// Range: 0x8041FDB0 -> 0x8041FDD4
static void * _rxDlVertexFmtConst(void * object /* r3 */, int offsetInObject /* r4 */) {
    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EB3F9
// Range: 0x8041FDD4 -> 0x8041FE40
static void * _rxDlVertexFmtDest(void * object /* r30 */, int offsetInObject /* r1+0x8 */) {
    // Local variables
    struct RpGameCubeVtxFmt * * vtxFmt; // r31

    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EB40C
// Range: 0x8041FE40 -> 0x8041FEA8
static void * _rpDlVtxFmtOpen(void * object /* r1+0x8 */) {
    // References
    // -> static struct RpGameCubeVtxFmt _RpDlVtxFmtDefault;
    // -> static struct RwModuleInfo _RpVtxFmtModule;
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EB41C
// Range: 0x8041FEA8 -> 0x8041FF28
static void * _rpDlVtxFmtClose(void * object /* r1+0x8 */) {
    // References
    // -> static struct RwModuleInfo _RpVtxFmtModule;
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EB42D
// Range: 0x8041FF28 -> 0x80420008
int _rpDlVtxFmtPluginAttach() {
    // Local variables
    int rpDlEngineVtxFmtOffset; // r31

    // References
    // -> int _rpDlWorldVtxFmtOffset;
    // -> int _rpDlGeomVtxFmtOffset;
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804EB445
enum RpGameCubeCompType {
    rpU8 = 0,
    rpS8 = 1,
    rpU16 = 2,
    rpS16 = 3,
    rpF32 = 4,
    rpGAMECUBECOMPFLAGSFORCEENUMSIZEINT = 2147483647,
};
// Range: 0x80420008 -> 0x804200EC
void RpGameCubeVtxFmtSetPosition(struct RpGameCubeVtxFmt * fmt /* r31 */, enum RpGameCubeCompType type /* r1+0x8 */, unsigned char frac /* r1+0xC */) {
    // References
    // -> static char __dbFunctionName[28];
    // -> static struct RwModuleInfo _RpVtxFmtModule;
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EB461
// Range: 0x804200EC -> 0x80420204
void RpGameCubeVtxFmtSetNormal(struct RpGameCubeVtxFmt * fmt /* r30 */, enum RpGameCubeCompType type /* r29 */, int nbt /* r1+0x8 */) {
    // References
    // -> static char __dbFunctionName[26];
    // -> static struct RwModuleInfo _RpVtxFmtModule;
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804EB47B
// Range: 0x80420204 -> 0x80420320
void RpGameCubeVtxFmtSetTexCoord(struct RpGameCubeVtxFmt * fmt /* r30 */, enum RwTextureCoordinateIndex index /* r29 */, enum RpGameCubeCompType type /* r1+0x8 */, unsigned char frac /* r1+0xC */) {
    // References
    // -> static char __dbFunctionName[28];
    // -> static struct RwModuleInfo _RpVtxFmtModule;
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804EB497
enum RpGameCubeColorCompType {
    rpRGB565 = 0,
    rpRGB8 = 1,
    rpRGBX8 = 2,
    rpRGBA4 = 3,
    rpRGBA6 = 4,
    rpRGBA8 = 5,
    rpGAMECUBECOLORCOMPFLAGSFORCEENUMSIZEINT = 2147483647,
};
// Range: 0x80420320 -> 0x804203F8
void RpGameCubeVtxFmtSetPreLight(struct RpGameCubeVtxFmt * fmt /* r30 */, enum RpGameCubeColorCompType type /* r1+0x8 */) {
    // References
    // -> static char __dbFunctionName[28];
    // -> static struct RwModuleInfo _RpVtxFmtModule;
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EB4B3
// Range: 0x804203F8 -> 0x80420510
void RpGameCubeVtxFmtInit(struct RpGameCubeVtxFmt * fmt /* r31 */) {
    // Local variables
    int i; // r30

    // References
    // -> static char __dbFunctionName[21];
    // -> static struct RwModuleInfo _RpVtxFmtModule;
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EB4C8
// Range: 0x80420510 -> 0x804205EC
struct RpGameCubeVtxFmt * RpGameCubeVtxFmtCreate() {
    // Local variables
    struct RpGameCubeVtxFmt * fmt; // r31

    // References
    // -> static char __dbFunctionName[23];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static struct RwModuleInfo _RpVtxFmtModule;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EB4DF
// Range: 0x804205EC -> 0x804206E4
void RpGameCubeVtxFmtDestroy(struct RpGameCubeVtxFmt * fmt /* r31 */) {
    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[24];
    // -> static struct RwModuleInfo _RpVtxFmtModule;
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804EB4F7
// Range: 0x804206E4 -> 0x804207E0
void RpGameCubeGeometrySetVtxFmt(struct RpGeometry * geometry /* r28 */, struct RpGameCubeVtxFmt * fmt /* r29 */) {
    // Local variables
    struct RpGameCubeVtxFmt * * vtxFmt; // r31

    // References
    // -> int _rpDlGeomVtxFmtOffset;
    // -> static char __dbFunctionName[28];
    // -> static struct RwModuleInfo _RpVtxFmtModule;
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804EB513
// Range: 0x804207E0 -> 0x80420888
struct RpGameCubeVtxFmt * RpGameCubeGeometryGetVtxFmt(struct RpGeometry * geometry /* r30 */) {
    // References
    // -> int _rpDlGeomVtxFmtOffset;
    // -> static char __dbFunctionName[28];
    // -> static struct RwModuleInfo _RpVtxFmtModule;
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EB52F
// Range: 0x80420888 -> 0x80420930
struct RpGameCubeVtxFmt * RpGameCubeWorldGetVtxFmt(struct RpWorld * world /* r30 */) {
    // References
    // -> int _rpDlWorldVtxFmtOffset;
    // -> static char __dbFunctionName[25];
    // -> static struct RwModuleInfo _RpVtxFmtModule;
}


