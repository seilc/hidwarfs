/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\world\baworld.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80417C80 -> 0x8041A8B8
*/
static char __dbFunctionName[16]; // size: 0x10, address: 0x804EAA88
// Range: 0x80417C80 -> 0x80417D18
static struct RpWorldSector * WorldFindSector(struct RpWorldSector * sector /* r29 */, void * data /* r30 */) {
    // Local variables
    struct rpWorldFindSectorData * findSectorData; // r31

    // References
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EAA98
// Range: 0x80417D18 -> 0x80417E58
static void WorldSectorRenderAtomics(struct RpWorldSector * worldSector /* r28 */) {
    // Local variables
    struct RwLLLink * cur; // r30
    struct RwLLLink * end; // r25
    struct RpTie * tie; // r27
    struct RpAtomic * atomic; // r31
    const struct RwSphere * atomicBoundingSphere; // r26

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EAAB1
// Range: 0x80417E58 -> 0x80417EDC
static struct RpWorldSector * WorldSectorRender(struct RpWorldSector * sector /* r31 */) {
    // References
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804EAAC3
// Range: 0x80417EDC -> 0x8041837C
static struct RpWorld * WorldBuildMeshAtomicSector(struct RpWorld * world /* r1+0x10 */, struct RpBuildMesh * buildMesh /* r1+0x14 */, struct RpWorldSector * worldSector /* r29 */, struct RpMaterial * * matBase /* r1+0x18 */) {
    // Local variables
    struct RpMeshHeader * mesh; // r1+0x34
    int i; // r20
    struct RwTexture * * textureArray; // r25
    struct RwRaster * * rasterArray; // r24
    struct RxPipeline * * pipelineArray; // r23
    unsigned short numTex; // r19
    unsigned short numRas; // r18
    unsigned short numPip; // r17
    unsigned int numMaterials; // r22
    struct RpTriangle * tri; // r30
    struct RpMaterial * material; // r1+0x30
    unsigned short texIndex; // r28
    unsigned short rasIndex; // r27
    unsigned short pipIndex; // r26
    struct RxPipeline * pipeline; // r1+0x2C
    struct RwTexture * texture; // r21
    struct RwRaster * raster; // r1+0x28

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[27];
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804EAADE
// total size: 0x18
struct RpLightTie {
    // Members
    struct RwLLLink lightInWorldSector; // offset 0x0, size 0x8
    struct RpLight * light; // offset 0x8, size 0x4
    struct RwLLLink WorldSectorInLight; // offset 0xC, size 0x8
    struct RpWorldSector * sect; // offset 0x14, size 0x4
};
// Range: 0x8041837C -> 0x804184C4
void _rpWorldSectorDeinstanceAll(struct RpSector * sector /* r28 */) {
    // Local variables
    struct RpWorldSector * worldSector; // r31
    struct RwLLLink * cur; // r30
    struct RwLLLink * end; // r27
    struct RpTie * tie; // r26
    struct RpLightTie * lightTie; // r25
    struct RpPlaneSector * planeSector; // r29

    // References
    // -> struct RwPluginRegistry sectorTKList;
    // -> static char __dbFunctionName[28];
}

static char __dbFunctionName[29]; // size: 0x1D, address: 0x804EAAFA
// Range: 0x804184C4 -> 0x80418750
void _rpWorldSectorDestroyRecurse(struct RpSector * sector /* r27 */) {
    // Local variables
    struct RpWorldSector * worldSector; // r31
    struct RwLLLink * cur; // r29
    struct RwLLLink * end; // r26
    struct RpTie * tie; // r25
    struct RpLightTie * lightTie; // r24
    int i; // r28
    struct RpPlaneSector * planeSector; // r30

    // References
    // -> void * RwEngineInstance;
    // -> struct RwPluginRegistry sectorTKList;
    // -> static char __dbFunctionName[29];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EAB17
// Range: 0x80418750 -> 0x804187FC
static struct RpLight * WorldRemoveLight(struct RpLight * light /* r31 */, void * data /* r1+0x8 */) {
    // References
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EAB28
// Range: 0x804187FC -> 0x804188A8
static struct RpClump * WorldRemoveClump(struct RpClump * clump /* r31 */, void * data /* r1+0x8 */) {
    // References
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[11]; // size: 0xB, address: 0x804EAB39
static struct RwModuleInfo worldModule; // size: 0x8, address: 0x80D6C2C0
// Range: 0x804188A8 -> 0x8041892C
static void * WorldClose(void * instance /* r1+0x8 */) {
    // References
    // -> static struct RwModuleInfo worldModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[11];
}

static char __dbFunctionName[10]; // size: 0xA, address: 0x804EAB44
static struct RwFreeList _rpWorldListFreeList; // size: 0x30, address: 0x80D5C5C8
// Range: 0x8041892C -> 0x80418A2C
static void * WorldOpen(void * instance /* r1+0x8 */, int offset /* r1+0xC */) {
    // References
    // -> static struct RwModuleInfo worldModule;
    // -> void * RwEngineInstance;
    // -> static struct RwFreeList _rpWorldListFreeList;
    // -> static char __dbFunctionName[10];
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804EAB4E
// Range: 0x80418A2C -> 0x80418B20
struct RpWorldSector * _rpSectorDefaultRenderCallBack(struct RpWorldSector * sector /* r31 */) {
    // Local variables
    struct RxPipeline * pipeline; // r30

    // References
    // -> int _rxPipelineGlobalsOffset;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[31];
}

static char __dbFunctionName[33]; // size: 0x21, address: 0x804EAB6D
// Range: 0x80418B20 -> 0x80418CBC
struct RpWorld * _rpWorldSetupSectorBoundingBoxes(struct RpWorld * world /* r28 */) {
    // Local variables
    int nStack; // r30
    struct RpSector * sector; // r29
    struct RpSector * sectorStack[64]; // r1+0x20
    struct RwBBox bbox; // r1+0x8
    struct RwBBox bboxStack[64]; // r1+0x120
    struct RpWorldSector * worldSector; // r27
    struct RpPlaneSector * plane; // r31

    // References
    // -> static char __dbFunctionName[33];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EAB8E
// total size: 0x10
struct RpListedWorld {
    // Members
    struct RpWorld * world; // offset 0x0, size 0x4
    unsigned int memorySize; // offset 0x4, size 0x4
    struct RwLLLink nextEl; // offset 0x8, size 0x8
};
// Range: 0x80418CBC -> 0x80418DF0
void _rpWorldRegisterWorld(struct RpWorld * world /* r30 */, unsigned int memorySize /* r1+0x8 */) {
    // Local variables
    struct RpListedWorld * listedWorld; // r31

    // References
    // -> static struct RwModuleInfo worldModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EABA4
// Range: 0x80418DF0 -> 0x80418F0C
void _rpWorldUnregisterWorld(struct RpWorld * world /* r29 */) {
    // Local variables
    struct RwLLLink * cur; // r30
    struct RwLLLink * end; // r28
    struct RpListedWorld * listedWorld; // r31

    // References
    // -> static struct RwModuleInfo worldModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[12]; // size: 0xC, address: 0x804EABBC
// Range: 0x80418F0C -> 0x80419058
struct RpWorld * RpWorldLock(struct RpWorld * world /* r27 */) {
    // Local variables
    struct RpSector * sector; // r31
    struct RpSector * sectorStack[64]; // r1+0x8
    int stack; // r29
    struct RpWorldSector * worldSector; // r30
    struct RpPlaneSector * planeSector; // r28

    // References
    // -> static char __dbFunctionName[12];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804EABC8
// Range: 0x80419058 -> 0x804191C0
struct RpWorld * RpWorldUnlock(struct RpWorld * world /* r31 */) {
    // Local variables
    struct RpSector * sector; // r30
    struct RpSector * sectorStack[64]; // r1+0x8
    int stack; // r28
    struct RpWorldSector * worldSector; // r29
    struct RpMaterial * * matBase; // r25
    struct RpBuildMesh * buildMesh; // r26
    struct RpPlaneSector * planeSector; // r27

    // References
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EABD6
// total size: 0x8
struct rpWorldFindSectorData {
    // Members
    const struct RpWorldSector * sector; // offset 0x0, size 0x4
    int foundSector; // offset 0x4, size 0x4
};
// Range: 0x804191C0 -> 0x8041930C
struct RpWorld * RpWorldSectorGetWorld(const struct RpWorldSector * sector /* r29 */) {
    // Local variables
    struct RwLLLink * cur; // r30
    struct RwLLLink * end; // r28
    const struct RpListedWorld * listedWorld; // r31
    void * endOfWorld; // r27
    struct rpWorldFindSectorData findSectorData; // r1+0x8

    // References
    // -> static struct RwModuleInfo worldModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EABEC
// Range: 0x8041930C -> 0x80419400
int RpWorldGetNumMaterials(const struct RpWorld * world /* r31 */) {
    // References
    // -> static char __dbFunctionName[23];
    // -> static struct RwModuleInfo worldModule;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EAC03
// Range: 0x80419400 -> 0x80419530
struct RpMaterial * RpWorldGetMaterial(const struct RpWorld * world /* r31 */, int matNum /* r29 */) {
    // References
    // -> static char __dbFunctionName[19];
    // -> static struct RwModuleInfo worldModule;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EAC16
// Range: 0x80419530 -> 0x80419618
struct RpWorld * RpWorldSetRenderOrder(struct RpWorld * world /* r1+0x8 */, enum RpWorldRenderOrder renderOrder /* r1+0xC */) {
    // References
    // -> static char __dbFunctionName[22];
    // -> static struct RwModuleInfo worldModule;
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804EAC2C
// Range: 0x80419618 -> 0x8041970C
struct RpWorld * RpWorldRender(struct RpWorld * world /* r31 */) {
    // Local variables
    struct RwCamera * camera; // r29

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[14];
    // -> static struct RwModuleInfo worldModule;
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EAC3A
// Range: 0x8041970C -> 0x80419914
int RpWorldDestroy(struct RpWorld * world /* r31 */) {
    // References
    // -> void * RwEngineInstance;
    // -> struct RwPluginRegistry worldTKList;
    // -> static char __dbFunctionName[15];
    // -> static struct RwModuleInfo worldModule;
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804EAC49
// Range: 0x80419914 -> 0x804199F8
struct RpWorld * RpWorldSetSectorRenderCallBack(struct RpWorld * world /* r31 */, struct RpWorldSector * (* fpCallBack)(struct RpWorldSector *) /* r29 */) {
    // References
    // -> static char __dbFunctionName[31];
    // -> static struct RwModuleInfo worldModule;
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804EAC68
// Range: 0x804199F8 -> 0x80419F18
struct RpWorld * RpWorldCreate(struct RwBBox * boundingBox /* r29 */) {
    // Local variables
    struct RpWorld * world; // r31
    struct RpWorldSector * worldSector; // r30
    struct RwError _rwErrorCode; // r1+0x10
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> struct RwPluginRegistry sectorTKList;
    // -> struct RwPluginRegistry worldTKList;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[14];
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static struct RwModuleInfo worldModule;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EAC76
// Range: 0x80419F18 -> 0x8041A040
struct RpWorld * RpWorldForAllClumps(struct RpWorld * world /* r31 */, struct RpClump * (* fpCallBack)(struct RpClump *, void *) /* r1+0x8 */, void * pData /* r1+0xC */) {
    // Local variables
    struct RwLLLink * cur; // r30
    struct RwLLLink * term; // r28
    struct RwLLLink * next; // r27
    struct RpClump * clump; // r26

    // References
    // -> static char __dbFunctionName[20];
    // -> static struct RwModuleInfo worldModule;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EAC8A
// Range: 0x8041A040 -> 0x8041A1BC
struct RpWorld * RpWorldForAllLights(struct RpWorld * world /* r31 */, struct RpLight * (* fpCallBack)(struct RpLight *, void *) /* r23 */, void * pData /* r24 */) {
    // Local variables
    struct RwLLLink * cur; // r30
    struct RwLLLink * term; // r29
    struct RwLLLink * next; // r28
    struct RpLight * light; // r26
    struct RpLight * light; // r25

    // References
    // -> static char __dbFunctionName[20];
    // -> static struct RwModuleInfo worldModule;
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EAC9E
// Range: 0x8041A1BC -> 0x8041A2D8
struct RpWorld * RpWorldForAllWorldSectors(struct RpWorld * world /* r28 */, struct RpWorldSector * (* fpCallBack)(struct RpWorldSector *, void *) /* r27 */, void * pData /* r1+0x8 */) {
    // Local variables
    struct RpSector * spSect; // r31
    struct RpSector * spaStack[64]; // r1+0xC
    int nStack; // r30
    struct RpPlaneSector * pspPlane; // r29

    // References
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EACB8
// Range: 0x8041A2D8 -> 0x8041A3C0
struct RpWorld * RpWorldSetFlags(struct RpWorld * world /* r1+0x8 */, unsigned int flags /* r1+0xC */) {
    // References
    // -> static char __dbFunctionName[16];
    // -> static struct RwModuleInfo worldModule;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EACC8
// Range: 0x8041A3C0 -> 0x8041A48C
unsigned int RpWorldGetFlags(const struct RpWorld * world /* r31 */) {
    // References
    // -> static char __dbFunctionName[16];
    // -> static struct RwModuleInfo worldModule;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EACD8
// Range: 0x8041A48C -> 0x8041A560
int RpWorldRegisterPlugin(int size /* r29 */, unsigned int pluginID /* r1+0x8 */, void * (* constructCB)(void *, int, int) /* r1+0xC */, void * (* destructCB)(void *, int, int) /* r1+0x10 */, void * (* copyCB)(void *, void *, int, int) /* r1+0x14 */) {
    // Local variables
    int plug; // r30

    // References
    // -> struct RwPluginRegistry worldTKList;
    // -> static char __dbFunctionName[22];
    // -> static struct RwModuleInfo worldModule;
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804EACEE
// Range: 0x8041A560 -> 0x8041A648
int RpWorldRegisterPluginStream(unsigned int pluginID /* r1+0x8 */, struct RwStream * (* readCB)(struct RwStream *, int, void *, int, int) /* r27 */, struct RwStream * (* writeCB)(struct RwStream *, int, void *, int, int) /* r28 */, int (* getSizeCB)(void *, int, int) /* r29 */) {
    // Local variables
    int plug; // r30

    // References
    // -> struct RwPluginRegistry worldTKList;
    // -> static char __dbFunctionName[28];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EAD0A
// Range: 0x8041A648 -> 0x8041A728
int RpWorldValidatePlugins(struct RpWorld * world /* r29 */) {
    // Local variables
    int valid; // r30

    // References
    // -> struct RwPluginRegistry worldTKList;
    // -> static char __dbFunctionName[23];
    // -> static struct RwModuleInfo worldModule;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EAD21
// Range: 0x8041A728 -> 0x8041A8B8
int RpWorldPluginAttach() {
    // Local variables
    int state; // r31

    // References
    // -> static char __dbFunctionName[20];
}


