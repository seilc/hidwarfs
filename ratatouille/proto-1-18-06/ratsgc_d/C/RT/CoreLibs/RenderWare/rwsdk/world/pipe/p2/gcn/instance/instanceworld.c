/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\world\pipe\p2\gcn\instance\instanceworld.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80428C4C -> 0x8042A2F4
*/
static char __dbFunctionName[27]; // size: 0x1B, address: 0x804EBCD8
// Range: 0x80428C4C -> 0x804290F4
static int ReconditionVertexIndexData(struct RpWorld * world /* r23 */, struct RpWorldSector * sector /* r29 */, struct rwGCNVtxDataRemapped * * vertexDataRemapped /* r25 */, struct rwGCNIndexDataRemapped * * * indexDataRemapped /* r28 */) {
    // Local variables
    struct rwGCNVtxData vtxData[16]; // r1+0xC
    struct rwGCNVtxDataMap * vertexDataMaps; // r27
    struct rwGCNIndexData * indexData; // r26
    int numEntries; // r31
    int numMeshes; // r24
    int i; // r30
    struct RpGameCubeVtxFmt * vtxFmt; // r22
    int i; // r21
    struct RpMesh * mesh; // r19
    int j; // r20
    struct RpMesh * mesh; // r18

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EBCF3
static struct rwVertexDescriptor VtxDesc; // size: 0x20, address: 0x80D5C890
// Range: 0x804290F4 -> 0x804293B8
static struct rwVertexDescriptor * VtxDescInitOptimized(struct RpWorld * world /* r27 */, struct rwGCNVtxDataRemapped * vertexDataRemapped /* r28 */) {
    // Local variables
    unsigned int numAttr; // r30
    struct RpGameCubeVtxFmt * vtxFmt; // r31
    int j; // r29

    // References
    // -> static struct rwVertexDescriptor VtxDesc;
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EBD08
// Range: 0x804293B8 -> 0x8042950C
static void VertexDataSetupOptimized(struct rwGCNVertexBufferData * vtxBufferData /* r29 */, struct rwGCNVtxDataRemapped * vtxDataRemapped /* r30 */, struct RpWorld * world /* r26 */) {
    // Local variables
    unsigned int numElements; // r31
    unsigned int flags; // r27
    unsigned char numTexCoords; // r24
    struct RpGameCubeVtxFmt * vtxFmt; // r25
    unsigned int i; // r28

    // References
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EBD21
// Range: 0x8042950C -> 0x80429614
static void IndexDataSetupOptimized(struct rwGCNDisplayListData * indexBufferData /* r29 */, struct rwGCNIndexDataRemapped * indexDataRemapped /* r30 */, struct RpWorld * world /* r26 */) {
    // Local variables
    unsigned int numElements; // r31
    unsigned int flags; // r27
    unsigned char numTexCoords; // r24
    struct RpGameCubeVtxFmt * vtxFmt; // r25
    unsigned int i; // r28

    // References
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[34]; // size: 0x22, address: 0x804EBD39
// Range: 0x80429614 -> 0x80429AC4
struct RwResEntry * _rwDlWorldSectorInstanceOptimized(struct RpWorld * world /* r24 */, struct RpWorldSector * sector /* r31 */) {
    // Local variables
    unsigned int i; // r30
    unsigned int size; // r28
    unsigned int vBufferHeaderSize; // r21
    unsigned int displayListSize; // r20
    unsigned int vBufferSize; // r1+0x38
    struct RwResEntry * resEntry; // r27
    void * memory; // r26
    struct RxGameCubeVertexBuffer * vbHeader; // r29
    struct RxGameCubeDisplayList * displayLists; // r19
    struct rwGCNVtxDataRemapped * vertexDataRemapped; // r1+0x34
    struct rwGCNIndexDataRemapped * * indexDataRemapped; // r1+0x30
    struct rwVertexDescriptor * vtxDesc; // r25
    struct rwGCNVertexBufferData vtxBufData; // r1+0xA4
    unsigned char primTypeVAT; // r18
    unsigned int numStrips; // r1+0x2C
    unsigned int numIndices; // r1+0x28
    unsigned int numIndices; // r1+0x24
    struct RpGameCubeVtxFmt * vtxFmt; // r22
    int i; // r23
    unsigned int numStrips; // r1+0x20
    unsigned int numIndices; // r1+0x1C
    unsigned int displayListstride; // r1+0x18
    unsigned int displayListSize; // r17
    struct rwGCNDisplayListData displayListData; // r1+0x3C

    // References
    // -> void * RwEngineInstance;
    // -> unsigned short _RwDlTokenLastSeen;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[34];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EBD5B
// Range: 0x80429AC4 -> 0x80429D50
static struct rwVertexDescriptor * VtxDescInitFast(struct RpWorld * world /* r27 */, struct RpWorldSector * sector /* r20 */) {
    // Local variables
    unsigned int numAttr; // r30
    unsigned int numVerts; // r28
    struct RpGameCubeVtxFmt * vtxFmt; // r31
    int j; // r29

    // References
    // -> static struct rwVertexDescriptor VtxDesc;
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EBD6B
// Range: 0x80429D50 -> 0x80429E80
static void VertexDataFastSetup(struct rwGCNVertexBufferData * vtxBufferData /* r30 */, struct RpWorld * world /* r27 */, struct RpWorldSector * sector /* r31 */) {
    // Local variables
    unsigned int numElements; // r29
    struct RpGameCubeVtxFmt * vtxFmt; // r26
    int i; // r28

    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EBD7F
// Range: 0x80429E80 -> 0x80429F58
static void IndexDataSetupFast(struct rwGCNDisplayListData * indexBufferData /* r31 */, unsigned short * indices /* r28 */, struct RpWorld * world /* r30 */) {
    // Local variables
    struct RpGameCubeVtxFmt * vtxFmt; // r27
    int i; // r29

    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[29]; // size: 0x1D, address: 0x804EBD92
// Range: 0x80429F58 -> 0x8042A2F4
struct RwResEntry * _rwDlWorldSectorInstanceFast(struct RpWorld * world /* r24 */, struct RpWorldSector * sector /* r31 */, void * owner /* r1+0x10 */, struct RwResEntry * * resEntryOwner /* r1+0x14 */) {
    // Local variables
    unsigned int i; // r27
    unsigned int size; // r28
    unsigned int vBufferHeaderSize; // r21
    unsigned int displayListSize; // r20
    unsigned int vBufferSize; // r1+0x20
    struct RwResEntry * resEntry; // r29
    void * memory; // r26
    struct RxGameCubeVertexBuffer * vbHeader; // r30
    struct RxGameCubeDisplayList * displayLists; // r19
    struct rwVertexDescriptor * vtxDesc; // r25
    struct rwGCNVertexBufferData vtxBufData; // r1+0x8C
    unsigned char primTypeVAT; // r18
    unsigned int numIndices; // r1+0x1C
    struct RpGameCubeVtxFmt * vtxFmt; // r22
    int i; // r23
    unsigned int displayListSize; // r17
    struct rwGCNDisplayListData displayListData; // r1+0x24

    // References
    // -> unsigned short _RwDlTokenLastSeen;
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[29];
}


