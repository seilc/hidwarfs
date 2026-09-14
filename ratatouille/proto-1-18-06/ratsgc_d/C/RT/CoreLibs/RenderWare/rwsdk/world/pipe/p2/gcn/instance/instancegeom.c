/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\world\pipe\p2\gcn\instance\instancegeom.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80427570 -> 0x80428C4C
*/
static char __dbFunctionName[27]; // size: 0x1B, address: 0x804EBC00
// Range: 0x80427570 -> 0x80427A14
static int ReconditionVertexIndexData(struct RpGeometry * geometry /* r29 */, struct rwGCNVtxDataRemapped * * vertexDataRemapped /* r25 */, struct rwGCNIndexDataRemapped * * * indexDataRemapped /* r28 */) {
    // Local variables
    struct rwGCNVtxData vtxData[16]; // r1+0x8
    struct rwGCNVtxDataMap * vertexDataMaps; // r27
    struct rwGCNIndexData * indexData; // r26
    struct RpMorphTarget * morphTarget; // r21
    int numEntries; // r31
    int numMeshes; // r24
    int i; // r30
    struct RpGameCubeVtxFmt * vtxFmt; // r23
    struct RpMesh * mesh; // r20
    int j; // r22
    struct RpMesh * mesh; // r19

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EBC1B
static struct rwVertexDescriptor VtxDesc; // size: 0x20, address: 0x80D5C870
// Range: 0x80427A14 -> 0x80427CDC
static struct rwVertexDescriptor * VtxDescInitOptimized(struct RpGeometry * geometry /* r27 */, struct rwGCNVtxDataRemapped * vertexDataRemapped /* r28 */) {
    // Local variables
    unsigned int numAttr; // r30
    struct RpGameCubeVtxFmt * vtxFmt; // r31
    int j; // r29

    // References
    // -> static struct rwVertexDescriptor VtxDesc;
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EBC30
// Range: 0x80427CDC -> 0x80427E34
static void VertexDataSetupOptimized(struct rwGCNVertexBufferData * vtxBufferData /* r29 */, struct rwGCNVtxDataRemapped * vtxDataRemapped /* r30 */, struct RpGeometry * geometry /* r25 */) {
    // Local variables
    unsigned int numElements; // r31
    unsigned int flags; // r27
    unsigned char numTexCoords; // r24
    struct RpGameCubeVtxFmt * vtxFmt; // r26
    unsigned int i; // r28

    // References
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EBC49
// Range: 0x80427E34 -> 0x80427F40
static void IndexDataSetupOptimized(struct rwGCNDisplayListData * indexBufferData /* r29 */, struct rwGCNIndexDataRemapped * indexDataRemapped /* r30 */, struct RpGeometry * geometry /* r25 */) {
    // Local variables
    unsigned int numElements; // r31
    unsigned int flags; // r27
    unsigned char numTexCoords; // r24
    struct RpGameCubeVtxFmt * vtxFmt; // r26
    unsigned int i; // r28

    // References
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804EBC61
// Range: 0x80427F40 -> 0x804283F0
struct RwResEntry * _rwDlGeometryInstanceOptimized(struct RpGeometry * geometry /* r31 */, void * owner /* r1+0x10 */, struct RwResEntry * * resEntryOwner /* r1+0x14 */) {
    // Local variables
    unsigned int i; // r30
    unsigned int size; // r28
    unsigned int vBufferHeaderSize; // r22
    unsigned int displayListSize; // r21
    unsigned int vBufferSize; // r1+0x30
    struct RwResEntry * resEntry; // r27
    void * memory; // r26
    struct RxGameCubeVertexBuffer * vbHeader; // r29
    struct RxGameCubeDisplayList * displayLists; // r20
    struct rwGCNVtxDataRemapped * vertexDataRemapped; // r1+0x2C
    struct rwGCNIndexDataRemapped * * indexDataRemapped; // r1+0x28
    struct rwVertexDescriptor * vtxDesc; // r25
    struct rwGCNVertexBufferData vtxBufData; // r1+0x9C
    unsigned char primTypeVAT; // r19
    unsigned int numStrips; // r1+0x24
    unsigned int numIndices; // r1+0x20
    struct RpGameCubeVtxFmt * vtxFmt; // r23
    int i; // r24
    unsigned int displayListstride; // r1+0x1C
    unsigned int displayListSize; // r18
    struct rwGCNDisplayListData displayListData; // r1+0x34

    // References
    // -> void * RwEngineInstance;
    // -> unsigned short _RwDlTokenLastSeen;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[31];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EBC80
// Range: 0x804283F0 -> 0x80428684
static struct rwVertexDescriptor * VtxDescInitFast(struct RpGeometry * geometry /* r27 */) {
    // Local variables
    unsigned int numAttr; // r30
    unsigned int numVerts; // r28
    struct RpGameCubeVtxFmt * vtxFmt; // r31
    int j; // r29

    // References
    // -> static struct rwVertexDescriptor VtxDesc;
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EBC90
// Range: 0x80428684 -> 0x804287E0
static void VertexDataFastSetup(struct rwGCNVertexBufferData * vtxBufferData /* r31 */, struct RpGeometry * geometry /* r30 */) {
    // Local variables
    unsigned int numElements; // r29
    struct RpMorphTarget * morphTarget; // r27
    struct RpGameCubeVtxFmt * vtxFmt; // r26
    int i; // r28

    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EBCA4
// Range: 0x804287E0 -> 0x804288BC
static void IndexDataSetupFast(struct rwGCNDisplayListData * indexBufferData /* r31 */, unsigned short * indices /* r28 */, struct RpGeometry * geometry /* r29 */) {
    // Local variables
    struct RpGameCubeVtxFmt * vtxFmt; // r27
    int i; // r30

    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EBCB7
// Range: 0x804288BC -> 0x80428C4C
struct RwResEntry * _rwDlGeometryInstanceFast(struct RpGeometry * geometry /* r31 */, void * owner /* r1+0x10 */, struct RwResEntry * * resEntryOwner /* r22 */) {
    // Local variables
    unsigned int i; // r27
    unsigned int size; // r28
    unsigned int vBufferHeaderSize; // r21
    unsigned int displayListSize; // r20
    unsigned int vBufferSize; // r1+0x1C
    struct RwResEntry * resEntry; // r29
    void * memory; // r26
    struct RxGameCubeVertexBuffer * vbHeader; // r30
    struct RxGameCubeDisplayList * displayLists; // r19
    struct rwVertexDescriptor * vtxDesc; // r25
    struct rwGCNVertexBufferData vtxBufData; // r1+0x88
    unsigned char primTypeVAT; // r18
    unsigned int numIndices; // r1+0x18
    struct RpGameCubeVtxFmt * vtxFmt; // r23
    int i; // r24
    unsigned int displayListSize; // r17
    struct rwGCNDisplayListData displayListData; // r1+0x20

    // References
    // -> unsigned short _RwDlTokenLastSeen;
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[26];
}


