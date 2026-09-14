/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\world\babinwor.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80401A70 -> 0x80403FA8
*/
static char __dbFunctionName[19]; // size: 0x13, address: 0x804E97C8
static unsigned int lastSeenWorldRightsPluginId; // size: 0x4, address: 0x80D6C26C
static unsigned int lastSeenWorldExtraData; // size: 0x4, address: 0x80D6C268
// Range: 0x80401A70 -> 0x80401B3C
struct RwStream * _rpReadWorldRights(struct RwStream * s /* r30 */, int len /* r31 */) {
    // References
    // -> static unsigned int lastSeenWorldExtraData;
    // -> static unsigned int lastSeenWorldRightsPluginId;
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804E97DB
// Range: 0x80401B3C -> 0x80401C58
struct RwStream * _rpWriteWorldRights(struct RwStream * s /* r29 */, void * obj /* r28 */) {
    // Local variables
    const struct RpWorld * wrl; // r31

    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804E97EF
// Range: 0x80401C58 -> 0x80401CF4
int _rpSizeWorldRights(void * obj /* r30 */) {
    // Local variables
    const struct RpWorld * wrl; // r31

    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804E9802
static unsigned int lastSeenSectRightsPluginId; // size: 0x4, address: 0x80D6C264
static unsigned int lastSeenSectExtraData; // size: 0x4, address: 0x80D6C260
// Range: 0x80401CF4 -> 0x80401DC0
struct RwStream * _rpReadSectRights(struct RwStream * s /* r30 */, int len /* r31 */) {
    // References
    // -> static unsigned int lastSeenSectExtraData;
    // -> static unsigned int lastSeenSectRightsPluginId;
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804E9814
// Range: 0x80401DC0 -> 0x80401EDC
struct RwStream * _rpWriteSectRights(struct RwStream * s /* r29 */, void * obj /* r28 */) {
    // Local variables
    const struct RpWorldSector * sect; // r31

    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804E9827
// Range: 0x80401EDC -> 0x80401F78
int _rpSizeSectRights(void * obj /* r30 */) {
    // Local variables
    const struct RpWorldSector * sect; // r31

    // References
    // -> static char __dbFunctionName[18];
}

// total size: 0x3C
struct RwPluginRegEntry {
    // Members
    int offset; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    unsigned int pluginID; // offset 0x8, size 0x4
    struct RwStream * (* readCB)(struct RwStream *, int, void *, int, int); // offset 0xC, size 0x4
    struct RwStream * (* writeCB)(struct RwStream *, int, void *, int, int); // offset 0x10, size 0x4
    int (* getSizeCB)(void *, int, int); // offset 0x14, size 0x4
    int (* alwaysCB)(void *, int, int); // offset 0x18, size 0x4
    int (* rightsCB)(void *, int, int, unsigned int); // offset 0x1C, size 0x4
    void * (* constructCB)(void *, int, int); // offset 0x20, size 0x4
    void * (* destructCB)(void *, int, int); // offset 0x24, size 0x4
    void * (* copyCB)(void *, void *, int, int); // offset 0x28, size 0x4
    void * (* errStrCB)(void *); // offset 0x2C, size 0x4
    struct RwPluginRegEntry * nextRegEntry; // offset 0x30, size 0x4
    struct RwPluginRegEntry * prevRegEntry; // offset 0x34, size 0x4
    struct RwPluginRegistry * parentRegistry; // offset 0x38, size 0x4
};
// total size: 0x18
struct RwPluginRegistry {
    // Members
    int sizeOfStruct; // offset 0x0, size 0x4
    int origSizeOfStruct; // offset 0x4, size 0x4
    int maxSizeOfStruct; // offset 0x8, size 0x4
    int staticAlloc; // offset 0xC, size 0x4
    struct RwPluginRegEntry * firstRegEntry; // offset 0x10, size 0x4
    struct RwPluginRegEntry * lastRegEntry; // offset 0x14, size 0x4
};
struct RwPluginRegistry sectorTKList; // size: 0x18, address: 0x805518F8
// total size: 0x2C
struct RpWorldChunkInfoSector {
    // Members
    int matListWindowBase; // offset 0x0, size 0x4
    int numTriangles; // offset 0x4, size 0x4
    int numVertices; // offset 0x8, size 0x4
    struct RwV3d inf; // offset 0xC, size 0xC
    struct RwV3d sup; // offset 0x18, size 0xC
    int collSectorPresent; // offset 0x24, size 0x4
    int unused; // offset 0x28, size 0x4
};
static char __dbFunctionName[18]; // size: 0x12, address: 0x804E9839
// Range: 0x80401F78 -> 0x80401FB8
static void * BinaryWorldMalloc(unsigned char * * binaryWorldMallocAddr /* r3 */, int size /* r4 */) {
    // Local variables
    void * pMemory; // r31

    // References
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[29]; // size: 0x1D, address: 0x804E984B
// total size: 0x4
struct MatIndexBounds {
    // Members
    unsigned short minIndex; // offset 0x0, size 0x2
    unsigned short maxIndex; // offset 0x2, size 0x2
};
// Range: 0x80401FB8 -> 0x804022E8
static struct RpWorldSector * WorldSectorIsCorrectlySorted(const struct RpWorldSector * sector /* r29 */, int * result /* r26 */) {
    // Local variables
    struct MatIndexBounds * matIndexBounds; // r31
    int sumOfMeshVertIndexRanges; // r22
    unsigned short vertIndex; // r25
    signed short matIndex; // r28
    int i; // r30
    int j; // r24
    unsigned int bytes; // r23
    int numMaterials; // r27
    struct RpWorld * world; // r20
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[29];
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804E9868
// total size: 0x8
struct rpPolygon {
    // Members
    unsigned short matIndex; // offset 0x0, size 0x2
    unsigned short vertIndex[3]; // offset 0x2, size 0x6
};
// Range: 0x804022E8 -> 0x80402D70
static struct RpWorldSector * WorldSectorStreamRead(struct RwStream * stream /* r28 */, unsigned char * * binaryWorldMallocAddr /* r21 */, struct RpWorld * world /* r22 */, unsigned int flags /* r18 */) {
    // Local variables
    struct RpWorldSector * worldSector; // r31
    struct RpWorldChunkInfoSector as; // r1+0x50
    unsigned int version; // r1+0xC
    int i; // r29
    int result; // r30
    struct RwError _rwErrorCode; // r1+0x48
    struct RwError _rwErrorCode; // r1+0x40
    int vertexSize; // r26
    struct RwError _rwErrorCode; // r1+0x38
    int normalSize; // r27
    struct RwError _rwErrorCode; // r1+0x30
    int preLitLumSize; // r25
    struct RwError _rwErrorCode; // r1+0x28
    int texCoordSize; // r24
    struct RwError _rwErrorCode; // r1+0x20
    int triangleSize; // r23
    struct RwError _rwErrorCode; // r1+0x18
    struct rpPolygon poly; // r1+0x10
    int b; // r1+0x8

    // References
    // -> struct RwPluginRegistry sectorTKList;
    // -> static unsigned int lastSeenSectExtraData;
    // -> static unsigned int lastSeenSectRightsPluginId;
    // -> static char __dbFunctionName[22];
}

// total size: 0x18
struct RpPlaneSectorChunkInfo {
    // Members
    int type; // offset 0x0, size 0x4
    float value; // offset 0x4, size 0x4
    int leftIsWorldSector; // offset 0x8, size 0x4
    int rightIsWorldSector; // offset 0xC, size 0x4
    float leftValue; // offset 0x10, size 0x4
    float rightValue; // offset 0x14, size 0x4
};
static char __dbFunctionName[22]; // size: 0x16, address: 0x804E987E
// Range: 0x80402D70 -> 0x80403524
static struct RpPlaneSector * PlaneSectorStreamRead(struct RwStream * stream /* r29 */, unsigned char * * binaryWorldMallocAddr /* r26 */, struct RpWorld * world /* r27 */, unsigned int flags /* r28 */) {
    // Local variables
    struct RpPlaneSector * planeSector; // r31
    struct RpPlaneSectorChunkInfo ps; // r1+0x40
    unsigned int size; // r1+0xC
    unsigned int version; // r1+0x8
    int result; // r30
    struct RwError _rwErrorCode; // r1+0x38
    struct RwError _rwErrorCode; // r1+0x30
    struct RwError _rwErrorCode; // r1+0x28
    struct RwError _rwErrorCode; // r1+0x20
    struct RwError _rwErrorCode; // r1+0x18
    struct RwError _rwErrorCode; // r1+0x10

    // References
    // -> static char __dbFunctionName[22];
}

static struct RwModuleInfo binWorldModule; // size: 0x8, address: 0x80D6C270
struct RwPluginRegistry worldTKList; // size: 0x18, address: 0x80551988
// total size: 0x40
struct RpWorldChunkInfo {
    // Members
    int rootIsWorldSector; // offset 0x0, size 0x4
    struct RwV3d invWorldOrigin; // offset 0x4, size 0xC
    int numTriangles; // offset 0x10, size 0x4
    int numVertices; // offset 0x14, size 0x4
    int numPlaneSectors; // offset 0x18, size 0x4
    int numWorldSectors; // offset 0x1C, size 0x4
    int colSectorSize; // offset 0x20, size 0x4
    int format; // offset 0x24, size 0x4
    struct RwBBox boundingBox; // offset 0x28, size 0x18
};
static char __dbFunctionName[18]; // size: 0x12, address: 0x804E9894
// Range: 0x80403524 -> 0x80403F50
struct RpWorld * RpWorldStreamRead(struct RwStream * stream /* r28 */) {
    // Local variables
    struct RpWorld * world; // r31
    struct RpWorldChunkInfo w; // r1+0x4C
    int i; // r26
    unsigned char * binaryWorldMallocAddr; // r1+0x18
    int worldSize; // r30
    unsigned int size; // r1+0x14
    unsigned int worldVersion; // r1+0x10
    unsigned int version; // r1+0xC
    int flags; // r27
    unsigned int numTexCoordSets; // r25
    struct RwError _rwErrorCode; // r1+0x44
    struct RwError _rwErrorCode; // r1+0x3C
    struct RwError _rwErrorCode; // r1+0x34
    struct RwError _rwErrorCode; // r1+0x2C
    struct RwError _rwErrorCode; // r1+0x24
    struct RwError _rwErrorCode; // r1+0x1C
    struct RwTexture * tex; // r24
    struct RpMaterial * mat; // r23

    // References
    // -> static unsigned int lastSeenWorldExtraData;
    // -> static unsigned int lastSeenWorldRightsPluginId;
    // -> struct RwPluginRegistry worldTKList;
    // -> static char __dbFunctionName[18];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> struct RwPluginRegistry sectorTKList;
    // -> static struct RwModuleInfo binWorldModule;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804E98A6
// Range: 0x80403F50 -> 0x80403F7C
void * _rpBinaryWorldClose(void * instance /* r3 */) {
    // References
    // -> static struct RwModuleInfo binWorldModule;
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804E98BA
// Range: 0x80403F7C -> 0x80403FA8
void * _rpBinaryWorldOpen(void * instance /* r3 */) {
    // References
    // -> static struct RwModuleInfo binWorldModule;
    // -> static char __dbFunctionName[19];
}


