/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\world\balight.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8040EB4C -> 0x804104B4
*/
static struct RwPluginRegistry lightTKList; // size: 0x18, address: 0x80550FD8
static char __dbFunctionName[22]; // size: 0x16, address: 0x804EA2F0
// Range: 0x8040EB4C -> 0x8040EBBC
static void LightTidyDestroyLight(void * object /* r31 */) {
    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[10]; // size: 0xA, address: 0x804EA306
// Range: 0x8040EBBC -> 0x8040EC58
static struct RwObjectHasFrame * LightSync(struct RwObjectHasFrame * type /* r31 */) {
    // References
    // -> static char __dbFunctionName[10];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EA310
static struct RwModuleInfo lightModule; // size: 0x8, address: 0x80D6C298
// Range: 0x8040EC58 -> 0x8040ED24
float RpLightGetRadius(const struct RpLight * light /* r31 */) {
    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwModuleInfo lightModule;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EA321
// Range: 0x8040ED24 -> 0x8040EE50
struct RpLight * RpLightSetRadius(struct RpLight * light /* r31 */, float radius /* f31 */) {
    // Local variables
    struct RwFrame * frame; // r29

    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwModuleInfo lightModule;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EA332
// Range: 0x8040EE50 -> 0x8040EF1C
struct RwRGBAReal * RpLightGetColor(const struct RpLight * light /* r30 */) {
    // References
    // -> static char __dbFunctionName[16];
    // -> static struct RwModuleInfo lightModule;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EA342
// Range: 0x8040EF1C -> 0x8040F064
struct RpLight * RpLightSetColor(struct RpLight * light /* r31 */, const struct RwRGBAReal * color /* r29 */) {
    // References
    // -> static char __dbFunctionName[16];
    // -> static struct RwModuleInfo lightModule;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EA352
// Range: 0x8040F064 -> 0x8040F3D0
float RpLightGetConeAngle(const struct RpLight * light /* r29 */) {
    // Local variables
    float result; // f30
    float z; // f31
    float p; // f27
    float q; // f26
    float r; // f25
    float w; // f24
    float s; // f29
    float c; // f23
    float df; // f28
    int hx; // r31
    int ix; // r30
    union _rwIEEEFloatShapeType gf_u; // r1+0x10
    int idf; // r27
    union _rwIEEEFloatShapeType gf_u; // r1+0xC
    union _rwIEEEFloatShapeType sf_u; // r1+0x8

    // References
    // -> static char __dbFunctionName[20];
    // -> static struct RwModuleInfo lightModule;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EA366
// Range: 0x8040F3D0 -> 0x8040F508
struct RpLight * RpLightSetConeAngle(struct RpLight * light /* r30 */, float angle /* f31 */) {
    // Local variables
    float minusCosAngle; // f30

    // References
    // -> static char __dbFunctionName[20];
    // -> static struct RwModuleInfo lightModule;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EA37A
// Range: 0x8040F508 -> 0x8040F5DC
int RpLightRegisterPlugin(int size /* r29 */, unsigned int pluginID /* r1+0x8 */, void * (* constructCB)(void *, int, int) /* r1+0xC */, void * (* destructCB)(void *, int, int) /* r1+0x10 */, void * (* copyCB)(void *, void *, int, int) /* r1+0x14 */) {
    // Local variables
    int plug; // r30

    // References
    // -> static struct RwPluginRegistry lightTKList;
    // -> static char __dbFunctionName[22];
    // -> static struct RwModuleInfo lightModule;
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804EA390
// Range: 0x8040F5DC -> 0x8040F6C4
int RpLightRegisterPluginStream(unsigned int pluginID /* r1+0x8 */, struct RwStream * (* readCB)(struct RwStream *, int, void *, int, int) /* r27 */, struct RwStream * (* writeCB)(struct RwStream *, int, void *, int, int) /* r28 */, int (* getSizeCB)(void *, int, int) /* r29 */) {
    // Local variables
    int plug; // r30

    // References
    // -> static struct RwPluginRegistry lightTKList;
    // -> static char __dbFunctionName[28];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EA3AC
// Range: 0x8040F6C4 -> 0x8040F7A8
unsigned int RpLightStreamGetSize(const struct RpLight * light /* r29 */) {
    // Local variables
    unsigned int size; // r30

    // References
    // -> static struct RwPluginRegistry lightTKList;
    // -> static char __dbFunctionName[21];
    // -> static struct RwModuleInfo lightModule;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EA3C1
// total size: 0x18
struct RpLightChunkInfo {
    // Members
    float radius; // offset 0x0, size 0x4
    float red; // offset 0x4, size 0x4
    float green; // offset 0x8, size 0x4
    float blue; // offset 0xC, size 0x4
    float minusCosAngle; // offset 0x10, size 0x4
    unsigned int typeAndFlags; // offset 0x14, size 0x4
};
enum RpLightType {
    rpNALIGHTTYPE = 0,
    rpLIGHTDIRECTIONAL = 1,
    rpLIGHTAMBIENT = 2,
    rpLIGHTPOINT = 128,
    rpLIGHTSPOT = 129,
    rpLIGHTSPOTSOFT = 130,
    rpLIGHTTYPEFORCEENUMSIZEINT = 2147483647,
};
// Range: 0x8040F7A8 -> 0x8040F990
struct RpLight * RpLightStreamWrite(const struct RpLight * light /* r31 */, struct RwStream * stream /* r29 */) {
    // Local variables
    struct RpLightChunkInfo lite; // r1+0x8
    enum RpLightType type; // r28

    // References
    // -> static struct RwPluginRegistry lightTKList;
    // -> static char __dbFunctionName[19];
    // -> static struct RwModuleInfo lightModule;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EA3D4
// Range: 0x8040F990 -> 0x8040FCA4
struct RpLight * RpLightStreamRead(struct RwStream * stream /* r29 */) {
    // Local variables
    unsigned int size; // r1+0xC
    unsigned int version; // r1+0x8
    struct RpLight * light; // r31
    struct RpLightChunkInfo lite; // r1+0x18
    float TanAngle2; // f31
    float CosAngle2; // f30
    float CosAngle; // f29
    struct RwError _rwErrorCode; // r1+0x10

    // References
    // -> static char __dbFunctionName[18];
    // -> static struct RwPluginRegistry lightTKList;
    // -> static struct RwModuleInfo lightModule;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EA3E6
// Range: 0x8040FCA4 -> 0x8040FD8C
struct RpLight * RpLightSetFrame(struct RpLight * light /* r1+0x8 */, struct RwFrame * frame /* r1+0xC */) {
    // References
    // -> static char __dbFunctionName[16];
    // -> static struct RwModuleInfo lightModule;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EA3F6
// Range: 0x8040FD8C -> 0x8040FE58
struct RwFrame * RpLightGetFrame(const struct RpLight * light /* r30 */) {
    // References
    // -> static char __dbFunctionName[16];
    // -> static struct RwModuleInfo lightModule;
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EA406
// Range: 0x8040FE58 -> 0x8040FF24
enum RpLightType RpLightGetType(const struct RpLight * light /* r30 */) {
    // References
    // -> static char __dbFunctionName[15];
    // -> static struct RwModuleInfo lightModule;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EA415
// Range: 0x8040FF24 -> 0x80410010
struct RpLight * RpLightSetFlags(struct RpLight * light /* r1+0x8 */, unsigned int flags /* r1+0xC */) {
    // References
    // -> static char __dbFunctionName[16];
    // -> static struct RwModuleInfo lightModule;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EA425
// Range: 0x80410010 -> 0x804100DC
unsigned int RpLightGetFlags(const struct RpLight * light /* r30 */) {
    // References
    // -> static char __dbFunctionName[16];
    // -> static struct RwModuleInfo lightModule;
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EA435
// Range: 0x804100DC -> 0x804101DC
int RpLightDestroy(struct RpLight * light /* r31 */) {
    // References
    // -> static struct RwModuleInfo lightModule;
    // -> void * RwEngineInstance;
    // -> static struct RwPluginRegistry lightTKList;
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804EA444
// Range: 0x804101DC -> 0x80410380
struct RpLight * RpLightCreate(int type /* r1+0x8 */) {
    // Local variables
    struct RpLight * light; // r31

    // References
    // -> static struct RwPluginRegistry lightTKList;
    // -> void * RwEngineInstance;
    // -> static struct RwModuleInfo lightModule;
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804EA452
// Range: 0x80410380 -> 0x80410408
void * _rpLightClose(void * instance /* r1+0x8 */) {
    // References
    // -> static struct RwModuleInfo lightModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[14];
}

static int _rpLightFreeListBlockSize; // size: 0x4, address: 0x80D68558
static int _rpLightFreeListPreallocBlocks; // size: 0x4, address: 0x80D6855C
static char __dbFunctionName[13]; // size: 0xD, address: 0x804EA460
static struct RwFreeList _rpLightFreeList; // size: 0x30, address: 0x80D5C568
// Range: 0x80410408 -> 0x804104B4
void * _rpLightOpen(void * instance /* r1+0x8 */, int offset /* r1+0xC */) {
    // References
    // -> static struct RwModuleInfo lightModule;
    // -> void * RwEngineInstance;
    // -> static struct RwFreeList _rpLightFreeList;
    // -> static int _rpLightFreeListPreallocBlocks;
    // -> static int _rpLightFreeListBlockSize;
    // -> static struct RwPluginRegistry lightTKList;
    // -> static char __dbFunctionName[13];
}


