/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\world\baclump.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80403FA8 -> 0x8040A450
*/
static struct RwPluginRegistry atomicTKList; // size: 0x18, address: 0x80550618
static struct RwPluginRegistry clumpTKList; // size: 0x18, address: 0x80550630
static int _rpClumpCameraExtOffset; // size: 0x4, address: 0x80D6C278
static int _rpClumpLightExtOffset; // size: 0x4, address: 0x80D6C27C
static char __dbFunctionName[22]; // size: 0x16, address: 0x804E98D0
// Range: 0x80403FA8 -> 0x80404018
static void ClumpTidyDestroyClump(void * object /* r31 */) {
    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804E98E6
// Range: 0x80404018 -> 0x80404088
static void ClumpTidyDestroyAtomic(void * object /* r31 */) {
    // References
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804E98FD
static unsigned int lastSeenRightsPluginId; // size: 0x4, address: 0x80D6C284
static unsigned int lastSeenExtraData; // size: 0x4, address: 0x80D6C280
// Range: 0x80404088 -> 0x80404154
struct RwStream * _rpReadAtomicRights(struct RwStream * s /* r30 */, int len /* r31 */) {
    // References
    // -> static unsigned int lastSeenExtraData;
    // -> static unsigned int lastSeenRightsPluginId;
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804E9911
// Range: 0x80404154 -> 0x80404270
struct RwStream * _rpWriteAtomicRights(struct RwStream * s /* r29 */, void * obj /* r28 */) {
    // Local variables
    const struct RpAtomic * at; // r31

    // References
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804E9926
// Range: 0x80404270 -> 0x8040430C
int _rpSizeAtomicRights(void * obj /* r30 */) {
    // Local variables
    const struct RpAtomic * at; // r31

    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[12]; // size: 0xC, address: 0x804E993A
// Range: 0x8040430C -> 0x804043E8
static struct RpAtomic * CountAtomic(struct RpAtomic * atomic /* r31 */, void * pData /* r30 */) {
    // References
    // -> static char __dbFunctionName[12];
}

static char __dbFunctionName[11]; // size: 0xB, address: 0x804E9946
// Range: 0x804043E8 -> 0x804044C4
static struct RpLight * CountLight(struct RpLight * light /* r31 */, void * pData /* r30 */) {
    // References
    // -> static char __dbFunctionName[11];
}

static char __dbFunctionName[12]; // size: 0xC, address: 0x804E9951
// Range: 0x804044C4 -> 0x804045A0
static struct RwCamera * CountCamera(struct RwCamera * camera /* r31 */, void * pData /* r30 */) {
    // References
    // -> static char __dbFunctionName[12];
}

static char __dbFunctionName[11]; // size: 0xB, address: 0x804E995D
// Range: 0x804045A0 -> 0x80404674
static struct RwObjectHasFrame * AtomicSync(struct RwObjectHasFrame * object /* r31 */) {
    // Local variables
    struct RpAtomic * atomic; // r30
    struct RpInterpolator * interpolator; // r29

    // References
    // -> static char __dbFunctionName[11];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804E9968
int _rxPipelineGlobalsOffset; // size: 0x4, address: 0x80D6C458
// Range: 0x80404674 -> 0x80404724
struct RpAtomic * AtomicDefaultRenderCallBack(struct RpAtomic * atomic /* r31 */) {
    // Local variables
    struct RxPipeline * pipeline; // r30

    // References
    // -> int _rxPipelineGlobalsOffset;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[28];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804E9984
// Range: 0x80404724 -> 0x804047EC
static struct rpGeometryList * GeometryListDeinitialize(struct rpGeometryList * geomList /* r31 */) {
    // Local variables
    int i; // r30

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804E999D
// Range: 0x804047EC -> 0x804048D4
static int GeometryListFindGeometry(const struct rpGeometryList * geomList /* r30 */, const struct RpGeometry * geom /* r28 */, int * npIndex /* r29 */) {
    // Local variables
    int i; // r31

    // References
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804E99B6
// Range: 0x804048D4 -> 0x80404984
static unsigned int GeometryListStreamGetSize(const struct rpGeometryList * geomList /* r30 */) {
    // Local variables
    unsigned int size; // r29
    int i; // r31
    struct RpGeometry * geom; // r28

    // References
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804E99D0
// Range: 0x80404984 -> 0x80404BB4
static struct rpGeometryList * GeometryListInitialize(struct rpGeometryList * geomList /* r31 */, struct RpClump * clump /* r27 */) {
    // Local variables
    int numGeoms; // r29
    struct RpGeometry * * fppCur; // r25
    struct RwLLLink * cur; // r28
    struct RwLLLink * end; // r24
    struct RwError _rwErrorCode; // r1+0x8
    struct RpAtomic * apAtom; // r23
    struct RpGeometry * geom; // r26

    // References
    // -> static char __dbFunctionName[23];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E99E7
// Range: 0x80404BB4 -> 0x80404D2C
static struct rpGeometryList * GeometryListStreamWrite(const struct rpGeometryList * geomList /* r31 */, struct RwStream * stream /* r29 */) {
    // Local variables
    int gl; // r1+0x8
    int i; // r30
    struct RpGeometry * geom; // r28

    // References
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804E99FF
// Range: 0x80404D2C -> 0x804050C8
static struct rpGeometryList * GeometryListStreamRead(struct RwStream * stream /* r29 */, struct rpGeometryList * geomList /* r31 */) {
    // Local variables
    int gl; // r1+0x10
    int i; // r30
    unsigned int size; // r1+0xC
    unsigned int version; // r1+0x8
    struct RwError _rwErrorCode; // r1+0x1C
    struct RwError _rwErrorCode; // r1+0x14

    // References
    // -> static char __dbFunctionName[23];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804E9A16
// total size: 0xC
struct RpClumpCameraExt {
    // Members
    struct RpClump * clump; // offset 0x0, size 0x4
    struct RwLLLink inClumpLink; // offset 0x4, size 0x8
};
// Range: 0x804050C8 -> 0x8040515C
static void * ClumpInitCameraExt(void * object /* r30 */) {
    // Local variables
    struct RpClumpCameraExt * cameraExt; // r31

    // References
    // -> static char __dbFunctionName[19];
    // -> static int _rpClumpCameraExtOffset;
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804E9A29
// Range: 0x8040515C -> 0x8040522C
static void * ClumpDeInitCameraExt(void * object /* r29 */) {
    // Local variables
    struct RpClumpCameraExt * cameraExt; // r31

    // References
    // -> static char __dbFunctionName[21];
    // -> static int _rpClumpCameraExtOffset;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804E9A3E
// total size: 0xC
struct RpClumpLightExt {
    // Members
    struct RpClump * clump; // offset 0x0, size 0x4
    struct RwLLLink inClumpLink; // offset 0x4, size 0x8
};
// Range: 0x8040522C -> 0x804052C0
static void * ClumpInitLightExt(void * object /* r30 */) {
    // Local variables
    struct RpClumpLightExt * lightExt; // r31

    // References
    // -> static char __dbFunctionName[18];
    // -> static int _rpClumpLightExtOffset;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804E9A50
// Range: 0x804052C0 -> 0x80405390
static void * ClumpDeInitLightExt(void * object /* r29 */) {
    // Local variables
    struct RpClumpLightExt * lightExt; // r31

    // References
    // -> static char __dbFunctionName[20];
    // -> static int _rpClumpLightExtOffset;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804E9A64
// Range: 0x80405390 -> 0x80405450
static struct RpLight * DestroyClumpLight(struct RpLight * light /* r31 */) {
    // Local variables
    const struct RpClumpLightExt * lightExt; // r30

    // References
    // -> static char __dbFunctionName[18];
    // -> static int _rpClumpLightExtOffset;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804E9A76
// Range: 0x80405450 -> 0x80405510
static struct RwCamera * DestroyClumpCamera(struct RwCamera * camera /* r31 */) {
    // Local variables
    const struct RpClumpCameraExt * cameraExt; // r30

    // References
    // -> static char __dbFunctionName[19];
    // -> static int _rpClumpCameraExtOffset;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804E9A89
// Range: 0x80405510 -> 0x804056B0
static struct RpLight * ClumpLightStreamWrite(struct RpLight * light /* r30 */, void * pData /* r1+0x8 */) {
    // Local variables
    struct RpClumpStreamWriteStatus * status; // r31
    int frameIndex; // r1+0xC

    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804E9A9F
// Range: 0x804056B0 -> 0x80405878
static struct RwCamera * ClumpCameraStreamWrite(struct RwCamera * camera /* r29 */, void * pData /* r1+0x8 */) {
    // Local variables
    struct RpClumpStreamWriteStatus * status; // r31
    int frameIndex; // r1+0xC

    // References
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804E9AB6
// Range: 0x80405878 -> 0x80405970
static struct RpLight * ClumpLightAddSize(struct RpLight * light /* r30 */, void * pData /* r1+0x8 */) {
    // Local variables
    unsigned int * size; // r31

    // References
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804E9AC8
// Range: 0x80405970 -> 0x80405A68
static struct RwCamera * ClumpCameraAddSize(struct RwCamera * camera /* r30 */, void * pData /* r1+0x8 */) {
    // Local variables
    unsigned int * size; // r31

    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804E9ADB
// Range: 0x80405A68 -> 0x80405AD4
static struct RpClump * ClumpCallBack(struct RpClump * clump /* r31 */) {
    // References
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804E9AE9
// Range: 0x80405AD4 -> 0x80405B78
static struct RpAtomic * DestroyClumpAtomic(struct RpAtomic * atomic /* r31 */) {
    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804E9AFC
static struct RwModuleInfo clumpModule; // size: 0x8, address: 0x80D6C288
// Range: 0x80405B78 -> 0x80405C48
static unsigned int AtomicStreamGetSizeActual(struct RpAtomic * atomic /* r29 */) {
    // Local variables
    unsigned int size; // r30

    // References
    // -> static char __dbFunctionName[26];
    // -> static struct RwModuleInfo clumpModule;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804E9B16
// Range: 0x80405C48 -> 0x80405D54
static struct RpAtomic * ClumpAtomicAddSize(struct RpAtomic * atomic /* r30 */, void * pData /* r1+0x8 */) {
    // Local variables
    unsigned int * size; // r31

    // References
    // -> static struct RwPluginRegistry atomicTKList;
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804E9B29
// Range: 0x80405D54 -> 0x80405E1C
static unsigned int ClumpAtomicStreamGetSize(struct RpAtomic * atomic /* r30 */) {
    // Local variables
    unsigned int size; // r31

    // References
    // -> static struct RwPluginRegistry atomicTKList;
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804E9B42
// total size: 0x10
struct rpAtomicBinary {
    // Members
    int frameIndex; // offset 0x0, size 0x4
    int geomIndex; // offset 0x4, size 0x4
    int flags; // offset 0x8, size 0x4
    int unused; // offset 0xC, size 0x4
};
// Range: 0x80405E1C -> 0x804060A0
static struct RpAtomic * ClumpAtomicStreamWrite(struct RpAtomic * atomic /* r30 */, void * pData /* r1+0x8 */) {
    // Local variables
    struct RpClumpStreamWriteStatus * status; // r31
    struct rpAtomicBinary a; // r1+0xC

    // References
    // -> static struct RwPluginRegistry atomicTKList;
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804E9B59
// Range: 0x804060A0 -> 0x804067AC
static struct RpAtomic * ClumpAtomicStreamRead(struct RwStream * stream /* r28 */, struct rwFrameList * fl /* r26 */, struct rpGeometryList * gl /* r27 */) {
    // Local variables
    int status; // r30
    unsigned int size; // r1+0xC
    unsigned int version; // r1+0x8
    struct RwError _rwErrorCode; // r1+0x40
    struct RpAtomic * atom; // r31
    struct rpAtomicBinary a; // r1+0x48
    struct RpGeometry * geom; // r25
    struct RwError _rwErrorCode; // r1+0x38
    struct RwError _rwErrorCode; // r1+0x30
    struct RwError _rwErrorCode; // r1+0x28
    struct RwError _rwErrorCode; // r1+0x20
    struct RwError _rwErrorCode; // r1+0x18
    struct RwError _rwErrorCode; // r1+0x10

    // References
    // -> static char __dbFunctionName[22];
    // -> static unsigned int lastSeenExtraData;
    // -> static unsigned int lastSeenRightsPluginId;
    // -> static struct RwPluginRegistry atomicTKList;
}

static char __dbFunctionName[34]; // size: 0x22, address: 0x804E9B6F
// Range: 0x804067AC -> 0x80406980
void _rpAtomicResyncInterpolatedSphere(struct RpAtomic * atomic /* r29 */) {
    // Local variables
    struct RpGeometry * geom; // r30
    struct RpInterpolator * interpolator; // r31
    struct RpMorphTarget * startMorphTarget; // r28
    struct RpMorphTarget * endMorphTarget; // r27
    float scale; // f31

    // References
    // -> static char __dbFunctionName[34];
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804E9B91
// Range: 0x80406980 -> 0x80406BB0
struct RwSphere * RpAtomicGetWorldBoundingSphere(struct RpAtomic * atomic /* r31 */) {
    // Local variables
    struct RwMatrixTag * matrix; // r30
    struct RwFrame * frame; // r29
    float atomicXScale2; // f29
    float atomicYScale2; // f31
    float atomicZScale2; // f30
    float atomicScale; // f25
    float atomicScale2; // f24
    struct RwV3d * right; // r28
    struct RwV3d * up; // r27
    struct RwV3d * at; // r26

    // References
    // -> static char __dbFunctionName[31];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804E9BB0
// Range: 0x80406BB0 -> 0x80406C80
void * _rpClumpClose(void * instance /* r1+0x8 */) {
    // References
    // -> static struct RwModuleInfo clumpModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[14];
}

static int _rpAtomicFreeListBlockSize; // size: 0x4, address: 0x80D684E4
static int _rpAtomicFreeListPreallocBlocks; // size: 0x4, address: 0x80D684E8
static int _rpClumpFreeListBlockSize; // size: 0x4, address: 0x80D684EC
static int _rpClumpFreeListPreallocBlocks; // size: 0x4, address: 0x80D684F0
static char __dbFunctionName[13]; // size: 0xD, address: 0x804E9BBE
static struct RwFreeList _rpAtomicFreeList; // size: 0x30, address: 0x80D5C508
static struct RwFreeList _rpClumpFreeList; // size: 0x30, address: 0x80D5C538
// Range: 0x80406C80 -> 0x80406DA0
void * _rpClumpOpen(void * instance /* r1+0x8 */, int offset /* r1+0xC */) {
    // References
    // -> static struct RwModuleInfo clumpModule;
    // -> void * RwEngineInstance;
    // -> static struct RwFreeList _rpClumpFreeList;
    // -> static int _rpClumpFreeListPreallocBlocks;
    // -> static int _rpClumpFreeListBlockSize;
    // -> static struct RwPluginRegistry clumpTKList;
    // -> static struct RwFreeList _rpAtomicFreeList;
    // -> static int _rpAtomicFreeListPreallocBlocks;
    // -> static int _rpAtomicFreeListBlockSize;
    // -> static struct RwPluginRegistry atomicTKList;
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804E9BCB
// Range: 0x80406DA0 -> 0x80406E48
int _rpClumpRegisterExtensions() {
    // References
    // -> static int _rpClumpLightExtOffset;
    // -> static int _rpClumpCameraExtOffset;
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804E9BE6
// Range: 0x80406E48 -> 0x80406F30
int RpClumpGetNumAtomics(struct RpClump * clump /* r30 */) {
    // Local variables
    int nNumAtomics; // r1+0x8

    // References
    // -> static char __dbFunctionName[21];
    // -> static struct RwModuleInfo clumpModule;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804E9BFB
// Range: 0x80406F30 -> 0x80407018
int RpClumpGetNumLights(struct RpClump * clump /* r30 */) {
    // Local variables
    int nNumLights; // r1+0x8

    // References
    // -> static char __dbFunctionName[20];
    // -> static struct RwModuleInfo clumpModule;
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804E9C0F
// Range: 0x80407018 -> 0x80407100
int RpClumpGetNumCameras(struct RpClump * clump /* r30 */) {
    // Local variables
    int nNumCameras; // r1+0x8

    // References
    // -> static char __dbFunctionName[21];
    // -> static struct RwModuleInfo clumpModule;
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804E9C24
// Range: 0x80407100 -> 0x804071EC
struct RpAtomic * RpAtomicRender(struct RpAtomic * atomic /* r31 */) {
    // References
    // -> static char __dbFunctionName[15];
    // -> static struct RwModuleInfo clumpModule;
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804E9C33
// Range: 0x804071EC -> 0x80407350
struct RpClump * RpClumpForAllAtomics(struct RpClump * clump /* r30 */, struct RpAtomic * (* callback)(struct RpAtomic *, void *) /* r25 */, void * pData /* r1+0x8 */) {
    // Local variables
    struct RwLLLink * cur; // r29
    struct RwLLLink * end; // r27
    struct RwLLLink * next; // r26
    struct RpAtomic * atomic; // r28

    // References
    // -> static char __dbFunctionName[21];
    // -> static struct RwModuleInfo clumpModule;
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804E9C48
// Range: 0x80407350 -> 0x804074BC
struct RpClump * RpClumpForAllCameras(struct RpClump * clump /* r30 */, struct RwCamera * (* callback)(struct RwCamera *, void *) /* r25 */, void * pData /* r1+0x8 */) {
    // Local variables
    struct RwLLLink * cur; // r29
    struct RwLLLink * end; // r27
    struct RwLLLink * next; // r26
    struct RwCamera * camera; // r28

    // References
    // -> static char __dbFunctionName[21];
    // -> static int _rpClumpCameraExtOffset;
    // -> static struct RwModuleInfo clumpModule;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804E9C5D
// Range: 0x804074BC -> 0x80407628
struct RpClump * RpClumpForAllLights(struct RpClump * clump /* r30 */, struct RpLight * (* callback)(struct RpLight *, void *) /* r25 */, void * pData /* r1+0x8 */) {
    // Local variables
    struct RwLLLink * cur; // r29
    struct RwLLLink * end; // r27
    struct RwLLLink * next; // r26
    struct RpLight * light; // r28

    // References
    // -> static char __dbFunctionName[20];
    // -> static int _rpClumpLightExtOffset;
    // -> static struct RwModuleInfo clumpModule;
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804E9C71
// Range: 0x80407628 -> 0x8040782C
struct RpAtomic * RpAtomicCreate() {
    // Local variables
    struct RpAtomic * atomic; // r31

    // References
    // -> static struct RwPluginRegistry atomicTKList;
    // -> static struct RwModuleInfo clumpModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804E9C80
// Range: 0x8040782C -> 0x80407994
struct RpAtomic * RpAtomicSetGeometry(struct RpAtomic * atomic /* r31 */, struct RpGeometry * geometry /* r30 */, unsigned int flags /* r1+0x8 */) {
    // Local variables
    struct RwFrame * frame; // r28

    // References
    // -> static char __dbFunctionName[20];
    // -> static struct RwModuleInfo clumpModule;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804E9C94
// Range: 0x80407994 -> 0x80407A60
struct RpGeometry * RpAtomicGetGeometry(const struct RpAtomic * atomic /* r31 */) {
    // References
    // -> static char __dbFunctionName[20];
    // -> static struct RwModuleInfo clumpModule;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804E9CA8
// Range: 0x80407A60 -> 0x80407B84
int RpAtomicDestroy(struct RpAtomic * atomic /* r31 */) {
    // References
    // -> static struct RwModuleInfo clumpModule;
    // -> void * RwEngineInstance;
    // -> static struct RwPluginRegistry atomicTKList;
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804E9CB8
// Range: 0x80407B84 -> 0x80407C70
void RpAtomicSetRenderCallBack(struct RpAtomic * atomic /* r31 */, struct RpAtomic * (* callback)(struct RpAtomic *) /* r1+0x8 */) {
    // References
    // -> static char __dbFunctionName[26];
    // -> static struct RwModuleInfo clumpModule;
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804E9CD2
// Range: 0x80407C70 -> 0x80407D3C
struct RpAtomic * (* RpAtomicGetRenderCallBack(const struct RpAtomic * atomic /* r31 */))(struct RpAtomic *) {
    // References
    // -> static char __dbFunctionName[26];
    // -> static struct RwModuleInfo clumpModule;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804E9CEC
// Range: 0x80407D3C -> 0x80407E08
struct RpClump * RpAtomicGetClump(const struct RpAtomic * atomic /* r31 */) {
    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwModuleInfo clumpModule;
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804E9CFD
// Range: 0x80407E08 -> 0x80407EEC
struct RwSphere * RpAtomicGetBoundingSphere(struct RpAtomic * atomic /* r31 */) {
    // References
    // -> static char __dbFunctionName[26];
    // -> static struct RwModuleInfo clumpModule;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804E9D17
// Range: 0x80407EEC -> 0x80407FD8
struct RpClump * RpClumpSetCallBack(struct RpClump * clump /* r31 */, struct RpClump * (* callback)(struct RpClump *, void *) /* r29 */) {
    // References
    // -> static char __dbFunctionName[19];
    // -> static struct RwModuleInfo clumpModule;
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804E9D2A
// Range: 0x80407FD8 -> 0x80408150
struct RpClump * RpClumpCreate() {
    // Local variables
    struct RpClump * clump; // r31

    // References
    // -> static struct RwPluginRegistry clumpTKList;
    // -> static struct RwModuleInfo clumpModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804E9D38
// Range: 0x80408150 -> 0x804082A4
int RpClumpDestroy(struct RpClump * clump /* r31 */) {
    // Local variables
    struct RwFrame * frame; // r29

    // References
    // -> static struct RwModuleInfo clumpModule;
    // -> void * RwEngineInstance;
    // -> static struct RwPluginRegistry clumpTKList;
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804E9D47
// Range: 0x804082A4 -> 0x804083E8
struct RpClump * RpClumpAddAtomic(struct RpClump * clump /* r31 */, struct RpAtomic * atomic /* r30 */) {
    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwModuleInfo clumpModule;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804E9D58
// Range: 0x804083E8 -> 0x80408524
struct RpClump * RpClumpRemoveAtomic(struct RpClump * clump /* r29 */, struct RpAtomic * atomic /* r31 */) {
    // References
    // -> static char __dbFunctionName[20];
    // -> static struct RwModuleInfo clumpModule;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804E9D6C
// Range: 0x80408524 -> 0x80408670
struct RpClump * RpClumpAddLight(struct RpClump * clump /* r31 */, struct RpLight * light /* r28 */) {
    // Local variables
    struct RpClumpLightExt * lightExt; // r30

    // References
    // -> static char __dbFunctionName[16];
    // -> static struct RwModuleInfo clumpModule;
    // -> static int _rpClumpLightExtOffset;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804E9D7C
// Range: 0x80408670 -> 0x804087C4
struct RpClump * RpClumpRemoveLight(struct RpClump * clump /* r28 */, struct RpLight * light /* r29 */) {
    // Local variables
    struct RpClumpLightExt * lightExt; // r31

    // References
    // -> static char __dbFunctionName[19];
    // -> static struct RwModuleInfo clumpModule;
    // -> static int _rpClumpLightExtOffset;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804E9D8F
// Range: 0x804087C4 -> 0x80408910
struct RpClump * RpClumpAddCamera(struct RpClump * clump /* r31 */, struct RwCamera * camera /* r28 */) {
    // Local variables
    struct RpClumpCameraExt * cameraExt; // r30

    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwModuleInfo clumpModule;
    // -> static int _rpClumpCameraExtOffset;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804E9DA0
// Range: 0x80408910 -> 0x80408A64
struct RpClump * RpClumpRemoveCamera(struct RpClump * clump /* r28 */, struct RwCamera * camera /* r29 */) {
    // Local variables
    struct RpClumpCameraExt * cameraExt; // r31

    // References
    // -> static char __dbFunctionName[20];
    // -> static struct RwModuleInfo clumpModule;
    // -> static int _rpClumpCameraExtOffset;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804E9DB4
// Range: 0x80408A64 -> 0x80408B60
unsigned int RpAtomicStreamGetSize(struct RpAtomic * atomic /* r30 */) {
    // Local variables
    unsigned int size; // r31

    // References
    // -> static struct RwPluginRegistry atomicTKList;
    // -> static char __dbFunctionName[22];
    // -> static struct RwModuleInfo clumpModule;
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804E9DCA
// total size: 0x8
struct rwFrameList {
    // Members
    struct RwFrame * * frames; // offset 0x0, size 0x4
    int numFrames; // offset 0x4, size 0x4
};
// total size: 0x8
struct rpGeometryList {
    // Members
    struct RpGeometry * * geometries; // offset 0x0, size 0x4
    int numGeoms; // offset 0x4, size 0x4
};
// Range: 0x80408B60 -> 0x80408D14
unsigned int RpClumpStreamGetSize(struct RpClump * clump /* r31 */) {
    // Local variables
    unsigned int size; // r1+0x8
    struct rwFrameList fl; // r1+0x14
    struct rpGeometryList gl; // r1+0xC

    // References
    // -> static struct RwPluginRegistry clumpTKList;
    // -> static char __dbFunctionName[21];
    // -> static struct RwModuleInfo clumpModule;
}

// total size: 0x18
struct RpClumpStreamWriteStatus {
    // Members
    struct RwStream * stream; // offset 0x0, size 0x4
    struct rwFrameList fl; // offset 0x4, size 0x8
    struct rpGeometryList gl; // offset 0xC, size 0x8
    int success; // offset 0x14, size 0x4
};
static char __dbFunctionName[19]; // size: 0x13, address: 0x804E9DDF
// total size: 0xC
struct RpClumpChunkInfo {
    // Members
    int numAtomics; // offset 0x0, size 0x4
    int numLights; // offset 0x4, size 0x4
    int numCameras; // offset 0x8, size 0x4
};
// Range: 0x80408D14 -> 0x80409004
struct RpClump * RpClumpStreamWrite(struct RpClump * clump /* r31 */, struct RwStream * stream /* r30 */) {
    // Local variables
    struct RpClumpChunkInfo cl; // r1+0x8
    struct RpClumpStreamWriteStatus streamStatus; // r1+0x14

    // References
    // -> static struct RwPluginRegistry clumpTKList;
    // -> static char __dbFunctionName[19];
    // -> static struct RwModuleInfo clumpModule;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804E9DF2
// Range: 0x80409004 -> 0x80409B04
struct RpClump * RpClumpStreamRead(struct RwStream * stream /* r30 */) {
    // Local variables
    int status; // r31
    unsigned int size; // r1+0x18
    unsigned int version; // r1+0x14
    struct RwError _rwErrorCode; // r1+0x7C
    struct RpClump * clump; // r29
    struct RpAtomic * atom; // r24
    struct RpClumpChunkInfo cl; // r1+0x84
    struct rwFrameList fl; // r1+0x74
    struct rpGeometryList gl; // r1+0x6C
    int i; // r28
    unsigned int chunkversion; // r1+0x10
    struct RwError _rwErrorCode; // r1+0x64
    struct RwError _rwErrorCode; // r1+0x5C
    struct RwError _rwErrorCode; // r1+0x54
    struct RwError _rwErrorCode; // r1+0x4C
    struct RwError _rwErrorCode; // r1+0x44
    struct RwError _rwErrorCode; // r1+0x3C
    struct RpLight * light; // r26
    int frameIndex; // r1+0xC
    struct RwError _rwErrorCode; // r1+0x34
    struct RwCamera * camera; // r25
    int frameIndex; // r1+0x8
    struct RwError _rwErrorCode; // r1+0x2C
    struct RwError _rwErrorCode; // r1+0x24
    struct RwError _rwErrorCode; // r1+0x1C

    // References
    // -> static char __dbFunctionName[18];
    // -> static struct RwPluginRegistry clumpTKList;
    // -> static struct RwModuleInfo clumpModule;
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804E9E04
// Range: 0x80409B04 -> 0x80409BD8
int RpAtomicRegisterPlugin(int size /* r29 */, unsigned int pluginID /* r1+0x8 */, void * (* constructCB)(void *, int, int) /* r1+0xC */, void * (* destructCB)(void *, int, int) /* r1+0x10 */, void * (* copyCB)(void *, void *, int, int) /* r1+0x14 */) {
    // Local variables
    int plug; // r30

    // References
    // -> static struct RwPluginRegistry atomicTKList;
    // -> static char __dbFunctionName[23];
    // -> static struct RwModuleInfo clumpModule;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804E9E1B
// Range: 0x80409BD8 -> 0x80409CAC
int RpClumpRegisterPlugin(int size /* r29 */, unsigned int pluginID /* r1+0x8 */, void * (* constructCB)(void *, int, int) /* r1+0xC */, void * (* destructCB)(void *, int, int) /* r1+0x10 */, void * (* copyCB)(void *, void *, int, int) /* r1+0x14 */) {
    // Local variables
    int plug; // r30

    // References
    // -> static struct RwPluginRegistry clumpTKList;
    // -> static char __dbFunctionName[22];
    // -> static struct RwModuleInfo clumpModule;
}

static char __dbFunctionName[29]; // size: 0x1D, address: 0x804E9E31
// Range: 0x80409CAC -> 0x80409D94
int RpAtomicRegisterPluginStream(unsigned int pluginID /* r1+0x8 */, struct RwStream * (* readCB)(struct RwStream *, int, void *, int, int) /* r27 */, struct RwStream * (* writeCB)(struct RwStream *, int, void *, int, int) /* r28 */, int (* getSizeCB)(void *, int, int) /* r29 */) {
    // Local variables
    int plug; // r30

    // References
    // -> static struct RwPluginRegistry atomicTKList;
    // -> static char __dbFunctionName[29];
}

static char __dbFunctionName[32]; // size: 0x20, address: 0x804E9E4E
// Range: 0x80409D94 -> 0x80409E24
int RpAtomicSetStreamAlwaysCallBack(unsigned int pluginID /* r1+0x8 */, int (* alwaysCB)(void *, int, int) /* r29 */) {
    // Local variables
    int plug; // r30

    // References
    // -> static struct RwPluginRegistry atomicTKList;
    // -> static char __dbFunctionName[32];
}

static char __dbFunctionName[32]; // size: 0x20, address: 0x804E9E6E
// Range: 0x80409E24 -> 0x80409EB4
int RpAtomicSetStreamRightsCallBack(unsigned int pluginID /* r1+0x8 */, int (* rightsCB)(void *, int, int, unsigned int) /* r29 */) {
    // Local variables
    int plug; // r30

    // References
    // -> static struct RwPluginRegistry atomicTKList;
    // -> static char __dbFunctionName[32];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E9E8E
// Range: 0x80409EB4 -> 0x80409F0C
int RpAtomicGetPluginOffset(unsigned int pluginID /* r1+0x8 */) {
    // Local variables
    int offset; // r31

    // References
    // -> static struct RwPluginRegistry atomicTKList;
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804E9EA6
// Range: 0x80409F0C -> 0x80409FDC
struct RwFrame * RpAtomicGetFrame(const struct RpAtomic * atomic /* r30 */) {
    // Local variables
    struct RwFrame * frameRet; // r29

    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwModuleInfo clumpModule;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804E9EB7
// Range: 0x80409FDC -> 0x8040A0C8
struct RpAtomic * RpAtomicSetFrame(struct RpAtomic * atomic /* r31 */, struct RwFrame * frame /* r1+0x8 */) {
    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwModuleInfo clumpModule;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804E9EC8
// Range: 0x8040A0C8 -> 0x8040A1DC
struct RpClump * RpClumpSetFrame(struct RpClump * clump /* r1+0x8 */, struct RwFrame * frame /* r29 */) {
    // References
    // -> static char __dbFunctionName[16];
    // -> static struct RwModuleInfo clumpModule;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804E9ED8
// Range: 0x8040A1DC -> 0x8040A2A8
struct RwFrame * RpClumpGetFrame(const struct RpClump * clump /* r30 */) {
    // References
    // -> static char __dbFunctionName[16];
    // -> static struct RwModuleInfo clumpModule;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804E9EE8
// Range: 0x8040A2A8 -> 0x8040A384
struct RpAtomic * RpAtomicSetFlags(struct RpAtomic * atomic /* r31 */, unsigned int flags /* r1+0x8 */) {
    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwModuleInfo clumpModule;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804E9EF9
// Range: 0x8040A384 -> 0x8040A450
unsigned int RpAtomicGetFlags(const struct RpAtomic * atomic /* r30 */) {
    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwModuleInfo clumpModule;
}


