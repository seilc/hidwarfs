/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\world\bamateri.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804104B4 -> 0x80411BE4
*/
static struct RwPluginRegistry materialTKList; // size: 0x18, address: 0x80551158
static struct RwSurfaceProperties defaultSurfaceProperties; // size: 0xC, address: 0x80551170
static char __dbFunctionName[22]; // size: 0x16, address: 0x804EA470
static unsigned int lastSeenRightsPluginId; // size: 0x4, address: 0x80D6C2A4
static unsigned int lastSeenExtraData; // size: 0x4, address: 0x80D6C2A0
// Range: 0x804104B4 -> 0x80410580
struct RwStream * _rpReadMaterialRights(struct RwStream * s /* r30 */, int len /* r31 */) {
    // References
    // -> static unsigned int lastSeenExtraData;
    // -> static unsigned int lastSeenRightsPluginId;
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EA486
// Range: 0x80410580 -> 0x8041069C
struct RwStream * _rpWriteMaterialRights(struct RwStream * s /* r29 */, void * obj /* r28 */) {
    // Local variables
    const struct RpMaterial * mat; // r31

    // References
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EA49D
// Range: 0x8041069C -> 0x80410738
int _rpSizeMaterialRights(void * obj /* r30 */) {
    // Local variables
    const struct RpMaterial * mat; // r31

    // References
    // -> static char __dbFunctionName[22];
}

static int _rpMaterialFreeListBlockSize; // size: 0x4, address: 0x80D68564
static int _rpMaterialFreeListPreallocBlocks; // size: 0x4, address: 0x80D68568
static char __dbFunctionName[16]; // size: 0x10, address: 0x804EA4B3
static struct RwModuleInfo materialModule; // size: 0x8, address: 0x80D6C2A8
static struct RwFreeList _rpMaterialFreeList; // size: 0x30, address: 0x80D5C598
// Range: 0x80410738 -> 0x804107E4
void * _rpMaterialOpen(void * instance /* r1+0x8 */, int offset /* r1+0xC */) {
    // References
    // -> static struct RwModuleInfo materialModule;
    // -> void * RwEngineInstance;
    // -> static struct RwFreeList _rpMaterialFreeList;
    // -> static int _rpMaterialFreeListPreallocBlocks;
    // -> static int _rpMaterialFreeListBlockSize;
    // -> static struct RwPluginRegistry materialTKList;
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EA4C3
// Range: 0x804107E4 -> 0x80410864
void * _rpMaterialClose(void * instance /* r1+0x8 */) {
    // References
    // -> static struct RwModuleInfo materialModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EA4D4
// Range: 0x80410864 -> 0x8041099C
struct RpMaterial * RpMaterialCreate() {
    // Local variables
    struct RpMaterial * material; // r31
    struct RwRGBA color; // r1+0x8

    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwPluginRegistry materialTKList;
    // -> static struct RwSurfaceProperties defaultSurfaceProperties;
    // -> static struct RwModuleInfo materialModule;
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EA4E5
// Range: 0x8041099C -> 0x80410ABC
int RpMaterialDestroy(struct RpMaterial * material /* r31 */) {
    // References
    // -> static struct RwModuleInfo materialModule;
    // -> void * RwEngineInstance;
    // -> static struct RwPluginRegistry materialTKList;
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EA4F7
// Range: 0x80410ABC -> 0x80410C6C
struct RpMaterial * RpMaterialClone(struct RpMaterial * material /* r30 */) {
    // Local variables
    struct RpMaterial * newMaterial; // r31
    struct RwTexture * texture; // r28
    struct RxPipeline * pipeline; // r1+0x8
    const struct RwSurfaceProperties * surfaceProperties; // r27

    // References
    // -> static struct RwPluginRegistry materialTKList;
    // -> static char __dbFunctionName[16];
    // -> static struct RwModuleInfo materialModule;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EA507
// Range: 0x80410C6C -> 0x80410D54
struct RpMaterial * RpMaterialAddRef(struct RpMaterial * material /* r1+0x8 */) {
    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwModuleInfo materialModule;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EA518
// Range: 0x80410D54 -> 0x80410E78
struct RpMaterial * RpMaterialSetColor(struct RpMaterial * material /* r1+0x8 */, const struct RwRGBA * color /* r29 */) {
    // References
    // -> static char __dbFunctionName[19];
    // -> static struct RwModuleInfo materialModule;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EA52B
// Range: 0x80410E78 -> 0x80410F44
struct RwRGBA * RpMaterialGetColor(const struct RpMaterial * material /* r30 */) {
    // References
    // -> static char __dbFunctionName[19];
    // -> static struct RwModuleInfo materialModule;
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804EA53E
// Range: 0x80410F44 -> 0x80411060
struct RpMaterial * RpMaterialSetSurfaceProperties(struct RpMaterial * material /* r1+0x8 */, const struct RwSurfaceProperties * surfaceProperties /* r29 */) {
    // References
    // -> static char __dbFunctionName[31];
    // -> static struct RwModuleInfo materialModule;
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804EA55D
// Range: 0x80411060 -> 0x8041112C
struct RwSurfaceProperties * RpMaterialGetSurfaceProperties(const struct RpMaterial * material /* r30 */) {
    // References
    // -> static char __dbFunctionName[31];
    // -> static struct RwModuleInfo materialModule;
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EA57C
// Range: 0x8041112C -> 0x80411224
struct RpMaterial * RpMaterialSetTexture(struct RpMaterial * material /* r31 */, struct RwTexture * texture /* r29 */) {
    // References
    // -> static char __dbFunctionName[21];
    // -> static struct RwModuleInfo materialModule;
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EA591
// Range: 0x80411224 -> 0x804112F0
struct RwTexture * RpMaterialGetTexture(const struct RpMaterial * material /* r30 */) {
    // References
    // -> static char __dbFunctionName[21];
    // -> static struct RwModuleInfo materialModule;
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EA5A6
// Range: 0x804112F0 -> 0x804113C4
int RpMaterialRegisterPlugin(int size /* r29 */, unsigned int pluginID /* r1+0x8 */, void * (* constructCB)(void *, int, int) /* r1+0xC */, void * (* destructCB)(void *, int, int) /* r1+0x10 */, void * (* copyCB)(void *, void *, int, int) /* r1+0x14 */) {
    // Local variables
    int plug; // r30

    // References
    // -> static struct RwPluginRegistry materialTKList;
    // -> static char __dbFunctionName[25];
    // -> static struct RwModuleInfo materialModule;
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804EA5BF
// Range: 0x804113C4 -> 0x804114AC
int RpMaterialRegisterPluginStream(unsigned int pluginID /* r1+0x8 */, struct RwStream * (* readCB)(struct RwStream *, int, void *, int, int) /* r27 */, struct RwStream * (* writeCB)(struct RwStream *, int, void *, int, int) /* r28 */, int (* getSizeCB)(void *, int, int) /* r29 */) {
    // Local variables
    int plug; // r30

    // References
    // -> static struct RwPluginRegistry materialTKList;
    // -> static char __dbFunctionName[31];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EA5DE
// total size: 0x1C
struct RpMaterialChunkInfo {
    // Members
    int flags; // offset 0x0, size 0x4
    struct RwRGBA color; // offset 0x4, size 0x4
    int unused; // offset 0x8, size 0x4
    int textured; // offset 0xC, size 0x4
    struct RwSurfaceProperties surfaceProps; // offset 0x10, size 0xC
};
// Range: 0x804114AC -> 0x804118A4
struct RpMaterial * RpMaterialStreamRead(struct RwStream * stream /* r29 */) {
    // Local variables
    unsigned int size; // r1+0x10
    unsigned int version; // r1+0xC
    struct RpMaterial * material; // r31
    struct RpMaterialChunkInfo mat; // r1+0x24
    struct RwRGBA tmp; // r1+0x8
    struct RwError _rwErrorCode; // r1+0x1C
    struct RwError _rwErrorCode; // r1+0x14

    // References
    // -> static char __dbFunctionName[21];
    // -> static unsigned int lastSeenExtraData;
    // -> static unsigned int lastSeenRightsPluginId;
    // -> static struct RwPluginRegistry materialTKList;
    // -> static struct RwModuleInfo materialModule;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EA5F3
// Range: 0x804118A4 -> 0x804119A4
unsigned int RpMaterialStreamGetSize(const struct RpMaterial * material /* r31 */) {
    // Local variables
    unsigned int size; // r29

    // References
    // -> static struct RwPluginRegistry materialTKList;
    // -> static char __dbFunctionName[24];
    // -> static struct RwModuleInfo materialModule;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EA60B
// Range: 0x804119A4 -> 0x80411BE4
struct RpMaterial * RpMaterialStreamWrite(const struct RpMaterial * material /* r31 */, struct RwStream * stream /* r29 */) {
    // Local variables
    struct RpMaterialChunkInfo mat; // r1+0x8
    const struct RwSurfaceProperties * source; // r28
    const struct RwRGBA * color; // r27

    // References
    // -> static struct RwPluginRegistry materialTKList;
    // -> static char __dbFunctionName[22];
    // -> static struct RwModuleInfo materialModule;
}


