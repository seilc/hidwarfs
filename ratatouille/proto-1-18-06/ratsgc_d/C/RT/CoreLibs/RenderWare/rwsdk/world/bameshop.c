/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\world\bameshop.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80413E08 -> 0x80417878
*/
// total size: 0x18
struct RpMeshopStatic {
    // Members
    struct RpMeshHeader nullMeshHeader; // offset 0x0, size 0x10
    struct RpMeshHeader * (* meshTristripMethod)(struct RpBuildMesh *, void *); // offset 0x10, size 0x4
    void * data; // offset 0x14, size 0x4
};
static struct RpMeshopStatic MeshopStatic; // size: 0x18, address: 0x805513F8
static char __dbFunctionName[13]; // size: 0xD, address: 0x804EA888
static unsigned int transBIT; // size: 0x4, address: 0x80D71EC8
// Range: 0x80413E08 -> 0x80414114
static int SortPolygons(void * pA /* r1+0x8 */, void * pB /* r1+0xC */) {
    // Local variables
    const struct RpBuildMeshTriangle * const * mtpA; // r31
    const struct RpBuildMeshTriangle * const * mtpB; // r30
    struct RpMaterial * materialA; // r27
    struct RpMaterial * materialB; // r26
    struct RwRaster * rasterA; // r25
    struct RwRaster * rasterB; // r24
    struct RwTexture * textureA; // r23
    struct RwTexture * textureB; // r22
    unsigned int orderA; // r29
    unsigned int orderB; // r28

    // References
    // -> static unsigned int transBIT;
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EA895
// Range: 0x80414114 -> 0x8041443C
static struct RpMesh * SortPolygonsInTriListMesh(struct RpMesh * mesh /* r29 */) {
    // Local variables
    unsigned int * vertexTagBuffer; // r30
    unsigned int maxVertex; // r27
    unsigned int i; // r26
    unsigned int numTriangles; // r22
    unsigned short * indices; // r28
    unsigned short * oldIndices; // r25
    unsigned int arraySize; // r21
    unsigned int outIndex; // r23
    unsigned int inIndex; // r24
    char * cs; // r20
    char c; // r18
    unsigned int count; // r19
    unsigned short * testInds; // r31

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EA8AF
// total size: 0x24
struct TriBinEntry {
    // Members
    unsigned int tri; // offset 0x0, size 0x4
    struct Edge * edge[3]; // offset 0x4, size 0xC
    struct TriBinEntry * next; // offset 0x10, size 0x4
    struct TriBinEntry * prev; // offset 0x14, size 0x4
    int used; // offset 0x18, size 0x4
    int used2; // offset 0x1C, size 0x4
    unsigned char adjCount; // offset 0x20, size 0x1
};
// total size: 0x10
struct Edge {
    // Members
    unsigned short v1; // offset 0x0, size 0x2
    unsigned short v2; // offset 0x2, size 0x2
    struct TriBinEntry * tri1; // offset 0x4, size 0x4
    struct TriBinEntry * tri2; // offset 0x8, size 0x4
    struct Edge * next; // offset 0xC, size 0x4
};
// Range: 0x8041443C -> 0x8041455C
static struct Edge * TriStripAddEdge(struct RwFreeList * edgeFreeList /* r1+0x8 */, struct Edge * * edgelist /* r28 */, unsigned short v1 /* r25 */, unsigned short v2 /* r26 */, unsigned int tri /* r27 */, struct TriBinEntry * * binEntryArray /* r29 */) {
    // Local variables
    struct Edge * temp; // r31
    struct Edge * newEdge; // r30

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[29]; // size: 0x1D, address: 0x804EA8BF
// Range: 0x8041455C -> 0x8041465C
static struct TriBinEntry * * TriStripBinEntryArrayDestroy(unsigned int numTris /* r1+0x8 */, struct MeshOpFreeLists * meshOpFreeLists /* r31 */, struct Edge * edge /* r28 */, struct TriBinEntry * * binEntryArray /* r30 */) {
    // Local variables
    unsigned int i; // r29
    struct Edge * next; // r27

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[29];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804EA8DC
// Range: 0x8041465C -> 0x80414868
static struct TriBinEntry * * TriStripBinEntryArrayCreate(unsigned int numTris /* r27 */, struct MeshOpFreeLists * meshOpFreeLists /* r28 */, struct Edge * * edgelist /* r26 */, struct RpBuildMeshTriangle * triList /* r29 */) {
    // Local variables
    struct TriBinEntry * * binEntryArray; // r31
    unsigned int i; // r30

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[28];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EA8F8
// Range: 0x80414868 -> 0x80414A20
static struct Edge * TriStripGetTriEdge(struct TriBinEntry * binEntry /* r31 */, unsigned short v1 /* r29 */, unsigned short v2 /* r30 */) {
    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EA90B
// total size: 0x4
struct TriBinList {
    // Members
    struct TriBinEntry * head; // offset 0x0, size 0x4
};
// Range: 0x80414A20 -> 0x80414CF8
static void TriStripMarkTriUsed(struct TriBinEntry * tri /* r30 */, struct TriBinList * binListArray /* r29 */, int currentAttempt /* r1+0x8 */) {
    // Local variables
    unsigned char i; // r28
    struct TriBinEntry * newTri; // r31

    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EA91F
// total size: 0x10
struct TriStripListEntry {
    // Members
    unsigned short * strip; // offset 0x0, size 0x4
    unsigned int stripLen; // offset 0x4, size 0x4
    unsigned int stripSize; // offset 0x8, size 0x4
    struct TriStripListEntry * next; // offset 0xC, size 0x4
};
// Range: 0x80414CF8 -> 0x804153D0
static unsigned int TriStripFollow(struct TriStripListEntry * strip /* r31 */, struct Edge * nextEdge /* r30 */, struct TriBinList * binListArray /* r1+0x8 */, int currentAttempt /* r21 */) {
    // Local variables
    unsigned int addedTris; // r24
    struct Edge * prevEdge; // r23
    struct Edge * otherEdge; // r28
    int nextIsLast; // r22
    int otherIsLast; // r20
    int turnResult; // r25
    struct TriBinEntry * bestTri; // r29
    unsigned short v1; // r1+0xE
    unsigned short v2; // r1+0xC
    unsigned short v3; // r27
    int nextEdgeIndex; // r26

    // References
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EA92E
// total size: 0x8
struct MeshOpFreeLists {
    // Members
    struct RwFreeList * binEntryFreeList; // offset 0x0, size 0x4
    struct RwFreeList * edgeFreeList; // offset 0x4, size 0x4
};
// Range: 0x804153D0 -> 0x804165EC
static int TriStripStripTris(struct RpBuildMeshTriangle * triList /* r21 */, unsigned int numTris /* r19 */, struct TriStripList * stripList /* r23 */, int preprocess /* r1+0x8 */) {
    // Local variables
    struct Edge * edgelist; // r1+0xA8
    struct TriStripListEntry * newStrip; // r30
    struct TriStripListEntry * buildStrip; // r29
    struct TriStripListEntry * revBuildStrip; // r28
    unsigned int i; // r31
    unsigned int j; // r18
    unsigned int trisUsed; // r24
    unsigned int trisUsedTemp; // r1+0xA4
    struct TriBinList binListArray[4]; // r1+0xB4
    struct TriBinEntry * * binEntryArray; // r27
    struct Edge * nextEdge; // r1+0xA0
    struct Edge * firstEdge; // r26
    unsigned int offset; // r25
    unsigned int cacheOffset; // r1+0x9C
    struct MeshOpFreeLists meshOpFreeLists; // r1+0xAC
    int bestOffset; // r1+0x98
    int currentAttempt; // r22
    unsigned int bestSize; // r17
    int testResult; // r1+0x94
    unsigned int tri; // r1+0x90
    struct RpBuildMeshTriangle * source; // r20

    // References
    // -> struct RwModuleInfo meshModule;
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804EA940
// Range: 0x804165EC -> 0x80416AC0
static int TriStripJoin(struct TriStripList * stripList /* r28 */, int maintainWinding /* r24 */) {
    // Local variables
    unsigned int i; // r26
    unsigned int j; // r25
    struct TriStripListEntry * newStrip; // r31
    struct TriStripListEntry * stripPtr; // r29
    struct TriStripListEntry * next; // r23
    struct TriStripListEntry * tempStrip; // r30
    struct TriStripListEntry * tempStrip2; // r27

    // References
    // -> struct RwModuleInfo meshModule;
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EA94D
// total size: 0x4
struct TriStripList {
    // Members
    struct TriStripListEntry * head; // offset 0x0, size 0x4
};
// Range: 0x80416AC0 -> 0x804171DC
static struct RpMeshHeader * TriStripMeshGenerate(struct RpBuildMesh * mesh /* r26 */, int preprocess /* r1+0x8 */, int maintainWinding /* r1+0xC */) {
    // Local variables
    struct RpMeshHeader * result; // r23
    struct RpBuildMeshTriangle * * triPointers; // r28
    struct RpMesh * meshEl; // r29
    unsigned int i; // r31
    unsigned int j; // r22
    unsigned int numMats; // r24
    unsigned int meshSize; // r20
    unsigned int triPointerIndex; // r1+0x3C
    struct RpBuildMeshTriangle * * tempTriPtr; // r18
    struct RpBuildMeshTriangle * triList; // r19
    struct TriStripList stripList; // r1+0x38
    struct TriStripListEntry * stripPtr; // r25
    unsigned short numOutMeshes; // r21
    unsigned short numAllocatedOutMeshes; // r1+0x10
    unsigned short * stripMeshInds; // r17
    struct RpMesh * * outMeshes; // r27
    struct RpMesh * outMeshInfo; // r30
    unsigned int totalIndices; // r1+0x34
    struct RpMaterial * lastMat; // r1+0x30
    unsigned int bytes; // r1+0x2C
    unsigned int indexSize; // r1+0x28

    // References
    // -> void * RwEngineInstance;
    // -> struct RwModuleInfo meshModule;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[35]; // size: 0x23, address: 0x804EA962
// Range: 0x804171DC -> 0x80417258
struct RpMeshHeader * RpBuildMeshGenerateDefaultTriStrip(struct RpBuildMesh * buildMesh /* r31 */) {
    // References
    // -> static char __dbFunctionName[35];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EA985
// Range: 0x80417258 -> 0x804172C0
int RpMeshSetTriStripMethod(struct RpMeshHeader * (* callback)(struct RpBuildMesh *, void *) /* r3 */, void * data /* r4 */) {
    // References
    // -> static struct RpMeshopStatic MeshopStatic;
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EA99D
// Range: 0x804172C0 -> 0x80417310
int RpMeshGetTriStripMethod(struct RpMeshHeader * (* * callback)(struct RpBuildMesh *, void *) /* r3 */, void * data /* r4 */) {
    // References
    // -> static struct RpMeshopStatic MeshopStatic;
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EA9B5
// Range: 0x80417310 -> 0x80417748
struct RpMeshHeader * _rpTriListMeshGenerate(struct RpBuildMesh * buildMesh /* r30 */) {
    // Local variables
    struct RpBuildMeshTriangle * * triPointers; // r31
    struct RpMeshHeader * result; // r27
    unsigned int i; // r29
    unsigned int numMats; // r25
    unsigned int meshSize; // r24
    struct RpMesh * meshEl; // r28
    unsigned short * meshTriInds; // r26
    struct RpMaterial * lastMat; // r23
    struct RwError _rwErrorCode; // r1+0x10
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[23];
    // -> void * RwEngineInstance;
    // -> struct RwModuleInfo meshModule;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EA9CC
// Range: 0x80417748 -> 0x80417878
struct RpMeshHeader * _rpMeshOptimise(struct RpBuildMesh * mesh /* r31 */, unsigned int flags /* r1+0x8 */) {
    // Local variables
    struct RpMeshHeader * (* func)(struct RpBuildMesh *, void *); // r30
    void * data; // r29
    struct RpMeshHeader * newMesh; // r27

    // References
    // -> static char __dbFunctionName[16];
    // -> static struct RpMeshopStatic MeshopStatic;
}


