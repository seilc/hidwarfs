/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\baframe.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80443968 -> 0x80445A20
*/
static int _rwFrameFreeListBlockSize; // size: 0x4, address: 0x80D68918
static int _rwFrameFreeListPreallocBlocks; // size: 0x4, address: 0x80D6891C
static char __dbFunctionName[13]; // size: 0xD, address: 0x804ED830
static struct RwModuleInfo frameModule; // size: 0x8, address: 0x80D6C378
static struct RwFreeList frameFreeList; // size: 0x30, address: 0x80D5D810
// Range: 0x80443968 -> 0x80443A3C
void * _rwFrameOpen(void * instance /* r1+0x8 */, int offset /* r1+0xC */) {
    // References
    // -> static struct RwModuleInfo frameModule;
    // -> void * RwEngineInstance;
    // -> static struct RwFreeList frameFreeList;
    // -> static int _rwFrameFreeListPreallocBlocks;
    // -> static int _rwFrameFreeListBlockSize;
    // -> struct RwPluginRegistry frameTKList;
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804ED83D
// Range: 0x80443A3C -> 0x80443ABC
void * _rwFrameClose(void * instance /* r1+0x8 */) {
    // References
    // -> static struct RwModuleInfo frameModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804ED84B
// Range: 0x80443ABC -> 0x80443C1C
static void rwSetHierarchyRoot(struct RwFrame * frame /* r31 */, struct RwFrame * root /* r29 */) {
    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804ED85E
// Range: 0x80443C1C -> 0x80443D10
struct RwFrame * RwFrameGetParent(const struct RwFrame * frame /* r30 */) {
    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwModuleInfo frameModule;
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804ED86F
// Range: 0x80443D10 -> 0x80443E10
int RwFrameDirty(const struct RwFrame * frame /* r31 */) {
    // Local variables
    int ret; // r29

    // References
    // -> static char __dbFunctionName[13];
    // -> static struct RwModuleInfo frameModule;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804ED87C
// Range: 0x80443E10 -> 0x80443EFC
static void rwFrameInternalInit(struct RwFrame * frame /* r31 */) {
    // References
    // -> struct RwPluginRegistry frameTKList;
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804ED890
// Range: 0x80443EFC -> 0x80444024
struct RwFrame * RwFrameCreate() {
    // Local variables
    struct RwFrame * frame; // r30

    // References
    // -> static char __dbFunctionName[14];
    // -> static struct RwModuleInfo frameModule;
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804ED89E
// Range: 0x80444024 -> 0x8044412C
static void _rwFrameInternalDeInit(struct RwFrame * frame /* r31 */) {
    // Local variables
    struct RwFrame * parent; // r28
    struct RwFrame * child; // r30

    // References
    // -> static char __dbFunctionName[23];
    // -> struct RwPluginRegistry frameTKList;
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804ED8B5
// Range: 0x8044412C -> 0x80444274
int RwFrameDestroy(struct RwFrame * frame /* r30 */) {
    // References
    // -> static struct RwModuleInfo frameModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804ED8C4
// Range: 0x80444274 -> 0x8044431C
static void FrameDestroyRecurseDeInitLeaf(struct RwFrame * frame /* r31 */) {
    // References
    // -> struct RwPluginRegistry frameTKList;
    // -> static char __dbFunctionName[30];
}

static char __dbFunctionName[33]; // size: 0x21, address: 0x804ED8E2
// Range: 0x8044431C -> 0x804443B8
static void rwFrameDestroyRecurseDestroyLeaf(struct RwFrame * frame /* r31 */) {
    // References
    // -> static struct RwModuleInfo frameModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[33];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804ED903
// Range: 0x804443B8 -> 0x80444488
static void rwFrameDestroyRecurse(struct RwFrame * frame /* r30 */) {
    // Local variables
    struct RwFrame * child; // r31
    struct RwFrame * nextChild; // r28

    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804ED919
// Range: 0x80444488 -> 0x80444584
int RwFrameDestroyHierarchy(struct RwFrame * frame /* r30 */) {
    // References
    // -> static char __dbFunctionName[24];
    // -> static struct RwModuleInfo frameModule;
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804ED931
// Range: 0x80444584 -> 0x804446F0
struct RwFrame * RwFrameUpdateObjects(struct RwFrame * frame /* r31 */) {
    // Local variables
    unsigned int oldFlags; // r29

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[21];
    // -> static struct RwModuleInfo frameModule;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804ED946
// Range: 0x804446F0 -> 0x804447E4
struct RwMatrixTag * RwFrameGetMatrix(struct RwFrame * frame /* r30 */) {
    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwModuleInfo frameModule;
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804ED957
// Range: 0x804447E4 -> 0x804448F4
struct RwMatrixTag * RwFrameGetLTM(struct RwFrame * frame /* r31 */) {
    // References
    // -> static char __dbFunctionName[14];
    // -> static struct RwModuleInfo frameModule;
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804ED965
// Range: 0x804448F4 -> 0x804449E8
struct RwFrame * RwFrameGetRoot(const struct RwFrame * frame /* r30 */) {
    // References
    // -> static char __dbFunctionName[15];
    // -> static struct RwModuleInfo frameModule;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804ED974
// Range: 0x804449E8 -> 0x80444B68
static int rwFrameIsAParentOf(struct RwFrame * frame /* r28 */, struct RwFrame * child /* r30 */) {
    // Local variables
    struct RwFrame * parent; // r29

    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804ED987
// Range: 0x80444B68 -> 0x80444D60
struct RwFrame * RwFrameAddChildNoUpdate(struct RwFrame * parent /* r29 */, struct RwFrame * child /* r30 */) {
    // References
    // -> static char __dbFunctionName[24];
    // -> static struct RwModuleInfo frameModule;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804ED99F
// Range: 0x80444D60 -> 0x80444F98
struct RwFrame * RwFrameAddChild(struct RwFrame * parent /* r29 */, struct RwFrame * child /* r31 */) {
    // References
    // -> static char __dbFunctionName[16];
    // -> static struct RwModuleInfo frameModule;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804ED9AF
// Range: 0x80444F98 -> 0x8044511C
struct RwFrame * RwFrameRemoveChild(struct RwFrame * child /* r31 */) {
    // Local variables
    struct RwFrame * curFrame; // r30

    // References
    // -> static char __dbFunctionName[19];
    // -> static struct RwModuleInfo frameModule;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804ED9C2
// Range: 0x8044511C -> 0x80445278
struct RwFrame * RwFrameForAllChildren(struct RwFrame * frame /* r30 */, struct RwFrame * (* callBack)(struct RwFrame *, void *) /* r27 */, void * data /* r1+0x8 */) {
    // Local variables
    struct RwFrame * childFrame; // r29
    struct RwFrame * nextChildFrame; // r28

    // References
    // -> static char __dbFunctionName[22];
    // -> static struct RwModuleInfo frameModule;
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804ED9D8
// Range: 0x80445278 -> 0x80445390
int RwFrameCount(struct RwFrame * frame /* r31 */) {
    // Local variables
    int numFrames; // r29

    // References
    // -> static char __dbFunctionName[13];
    // -> static struct RwModuleInfo frameModule;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804ED9E5
// Range: 0x80445390 -> 0x804454C8
struct RwFrame * RwFrameTranslate(struct RwFrame * frame /* r30 */, const struct RwV3d * translation /* r29 */, enum RwOpCombineType combineOp /* r1+0x8 */) {
    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwModuleInfo frameModule;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804ED9F6
// Range: 0x804454C8 -> 0x80445600
struct RwFrame * RwFrameTransform(struct RwFrame * frame /* r30 */, const struct RwMatrixTag * transform /* r29 */, enum RwOpCombineType combineOp /* r1+0x8 */) {
    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwModuleInfo frameModule;
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804EDA07
// Range: 0x80445600 -> 0x80445740
struct RwFrame * RwFrameRotate(struct RwFrame * frame /* r30 */, const struct RwV3d * axis /* r29 */, float angle /* r1+0x8 */, enum RwOpCombineType combineOp /* r1+0xC */) {
    // References
    // -> static char __dbFunctionName[14];
    // -> static struct RwModuleInfo frameModule;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EDA15
// Range: 0x80445740 -> 0x80445844
struct RwFrame * RwFrameSetIdentity(struct RwFrame * frame /* r31 */) {
    // References
    // -> static char __dbFunctionName[19];
    // -> static struct RwModuleInfo frameModule;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EDA28
// Range: 0x80445844 -> 0x8044594C
struct RwFrame * RwFrameOrthoNormalize(struct RwFrame * frame /* r31 */) {
    // References
    // -> static char __dbFunctionName[22];
    // -> static struct RwModuleInfo frameModule;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EDA3E
// Range: 0x8044594C -> 0x80445A20
int RwFrameRegisterPlugin(int size /* r29 */, unsigned int pluginID /* r1+0x8 */, void * (* constructCB)(void *, int, int) /* r1+0xC */, void * (* destructCB)(void *, int, int) /* r1+0x10 */, void * (* copyCB)(void *, void *, int, int) /* r1+0x14 */) {
    // Local variables
    int ret; // r30

    // References
    // -> struct RwPluginRegistry frameTKList;
    // -> static char __dbFunctionName[22];
    // -> static struct RwModuleInfo frameModule;
}


