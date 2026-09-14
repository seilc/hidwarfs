/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\plugin\skin2\gcn\instance\instanceskin.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803FC3AC -> 0x803FE5DC
*/
static char __dbFunctionName[27]; // size: 0x1B, address: 0x804E93D0
// total size: 0x8
struct rwGCNVtxDataRemapped {
    // Members
    void * data; // offset 0x0, size 0x4
    unsigned int num; // offset 0x4, size 0x4
};
// total size: 0x4
struct rwGCNIndexDataRemapped {
    // Members
    unsigned short * indices; // offset 0x0, size 0x4
};
enum rwDataType {
    rwNADATATYPE = 0,
    rwDATATYPE_INT8 = 1,
    rwDATATYPE_INT16 = 2,
    rwDATATYPE_INT24 = 3,
    rwDATATYPE_INT32 = 4,
    rwDATATYPE_INT64 = 5,
    rwDATATYPE_REAL = 6,
    rwDATATYPE_V2D = 7,
    rwDATATYPE_V3D = 8,
    rwDATATYPE_V4D = 9,
    rwDATATYPE_RGBA = 10,
    rwDATATYPE_FORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
struct rwGCNVtxData {
    // Members
    void * data; // offset 0x0, size 0x4
    enum rwDataType type; // offset 0x4, size 0x4
    signed char dep[16]; // offset 0x8, size 0x10
};
// total size: 0x8
struct rwGCNVtxDataMap {
    // Members
    int * map; // offset 0x0, size 0x4
    unsigned int num; // offset 0x4, size 0x4
};
// total size: 0x4
struct rwGCNIndexData {
    // Members
    unsigned short * indices; // offset 0x0, size 0x4
};
// Range: 0x803FC3AC -> 0x803FCBD8
static int ReconditionVertexIndexData(struct RpGeometry * geometry /* r29 */, struct rwGCNVtxDataRemapped * * vertexDataRemapped /* r24 */, struct rwGCNIndexDataRemapped * * * indexDataRemapped /* r27 */) {
    // Local variables
    struct rwGCNVtxData vtxData[16]; // r1+0xC
    struct rwGCNVtxDataMap * vertexDataMaps; // r26
    struct rwGCNIndexData * indexData; // r25
    struct RpMorphTarget * morphTarget; // r20
    unsigned int numEntries; // r31
    int numMeshes; // r23
    int i; // r30
    struct RpGameCubeVtxFmt * vtxFmt; // r22
    struct RpSkin * skin; // r28
    struct RpMesh * mesh; // r19
    unsigned int j; // r21
    struct RpMesh * mesh; // r18

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804E93EB
// total size: 0x20
struct rwVertexDescriptor {
    // Members
    unsigned int VATID; // offset 0x0, size 0x4
    unsigned int VATRegA; // offset 0x4, size 0x4
    unsigned int VATRegB; // offset 0x8, size 0x4
    unsigned int VATRegC; // offset 0xC, size 0x4
    unsigned int VCDRegLO; // offset 0x10, size 0x4
    unsigned int VCDRegHI; // offset 0x14, size 0x4
    unsigned int XFRegINVTXSPEC; // offset 0x18, size 0x4
    unsigned char numAttrArrays; // offset 0x1C, size 0x1
    unsigned char pad[3]; // offset 0x1D, size 0x3
};
static struct rwVertexDescriptor VtxDesc; // size: 0x20, address: 0x80D5C2E8
// Range: 0x803FCBD8 -> 0x803FCECC
static struct rwVertexDescriptor * VtxDescInitOptimized(struct RpGeometry * geometry /* r27 */, struct rwGCNVtxDataRemapped * vertexDataRemapped /* r28 */) {
    // Local variables
    unsigned int numAttr; // r30
    struct RpGameCubeVtxFmt * vtxFmt; // r31
    struct RpSkin * skin; // r26
    int j; // r29

    // References
    // -> static struct rwVertexDescriptor VtxDesc;
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804E9400
// Range: 0x803FCECC -> 0x803FD024
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

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E9419
// Range: 0x803FD024 -> 0x803FD140
static void IndexDataSetupOptimized(struct rwGCNDisplayListData * indexBufferData /* r30 */, struct rwGCNIndexDataRemapped * indexDataRemapped /* r29 */, struct RpGeometry * geometry /* r25 */, unsigned short * matrixIndices /* r23 */) {
    // Local variables
    unsigned int numElements; // r31
    unsigned int flags; // r27
    unsigned char numTexCoords; // r24
    struct RpGameCubeVtxFmt * vtxFmt; // r26
    unsigned int i; // r28

    // References
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804E9431
// Range: 0x803FD140 -> 0x803FD3B0
static unsigned short * CreateMatrixIndexListOptimized(struct RpSkin * skin /* r30 */, unsigned short * indices /* r23 */, unsigned int * matrixIndices /* r24 */, int numIndices /* r25 */, unsigned int meshIndex /* r1+0x8 */) {
    // Local variables
    int j; // r31
    unsigned int k; // r29
    unsigned short * indexList; // r28
    unsigned char * bone; // r27
    unsigned char boneMap[10]; // r1+0xC
    unsigned char index; // r22
    unsigned char count; // r21
    unsigned char start; // r20
    unsigned char run; // r19
    unsigned char k; // r26

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[31];
}

static char __dbFunctionName[35]; // size: 0x23, address: 0x804E9450
unsigned short _RwDlTokenLastSeen; // size: 0x2, address: 0x80D6C440
// total size: 0xD0
struct rwGCNVertexBufferData {
    // Members
    unsigned int num[26]; // offset 0x0, size 0x68
    void * data[26]; // offset 0x68, size 0x68
};
// total size: 0x68
struct rwGCNDisplayListData {
    // Members
    void * data[26]; // offset 0x0, size 0x68
};
// Range: 0x803FD3B0 -> 0x803FDA7C
struct RwResEntry * _rwDlGeometrySkinInstanceOptimized(struct RpGeometry * geometry /* r31 */, void * owner /* r1+0x10 */, struct RwResEntry * * resEntryOwner /* r1+0x14 */) {
    // Local variables
    unsigned int i; // r30
    unsigned int size; // r28
    unsigned int vBufferHeaderSize; // r1+0x54
    unsigned int displayListSize; // r1+0x50
    unsigned int vBufferSize; // r1+0x4C
    struct RwResEntry * resEntry; // r27
    void * memory; // r26
    struct RxGameCubeVertexBuffer * vbHeader; // r29
    struct RxGameCubeDisplayList * displayLists; // r1+0x48
    struct rwGCNVtxDataRemapped * vertexDataRemapped; // r1+0x44
    struct rwGCNIndexDataRemapped * * indexDataRemapped; // r1+0x40
    struct rwVertexDescriptor * vtxDesc; // r23
    struct rwGCNVertexBufferData vtxBufData; // r1+0xC0
    unsigned char primTypeVAT; // r1+0x18
    struct RpSkin * skin; // r25
    unsigned int numStrips; // r1+0x3C
    unsigned int numIndices; // r1+0x38
    unsigned int numIndices; // r1+0x34
    struct RpGameCubeVtxFmt * vtxFmt; // r19
    int i; // r20
    unsigned int numStrips; // r1+0x30
    unsigned int numIndices; // r1+0x2C
    unsigned int displayListstride; // r1+0x28
    unsigned int displayListSize; // r1+0x24
    struct rwGCNDisplayListData displayListData; // r1+0x58
    unsigned short * matrixIndices; // r21
    int numElements; // r22
    int numTexCoords; // r18
    int numElements; // r24
    int numTexCoords; // r17

    // References
    // -> void * RwEngineInstance;
    // -> unsigned short _RwDlTokenLastSeen;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[35];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804E9473
// Range: 0x803FDA7C -> 0x803FDD24
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

static char __dbFunctionName[20]; // size: 0x14, address: 0x804E9483
// Range: 0x803FDD24 -> 0x803FDE80
static void VertexDataFastSetup(struct rwGCNVertexBufferData * vtxBufferData /* r31 */, struct RpGeometry * geometry /* r30 */) {
    // Local variables
    unsigned int numElements; // r29
    struct RpMorphTarget * morphTarget; // r27
    struct RpGameCubeVtxFmt * vtxFmt; // r26
    int i; // r28

    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804E9497
// Range: 0x803FDE80 -> 0x803FDF68
static void IndexDataSetupFast(struct rwGCNDisplayListData * indexBufferData /* r31 */, unsigned short * indices /* r28 */, unsigned short * matrixIndices /* r1+0x8 */, struct RpGeometry * geometry /* r29 */) {
    // Local variables
    struct RpGameCubeVtxFmt * vtxFmt; // r27
    int i; // r30

    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804E94AA
// Range: 0x803FDF68 -> 0x803FE1E8
static unsigned short * CreateMatrixIndexList(struct RpSkin * skin /* r31 */, struct RpMesh * mesh /* r28 */, unsigned int meshIndex /* r18 */) {
    // Local variables
    unsigned int j; // r30
    unsigned int k; // r29
    unsigned short * indexList; // r27
    unsigned char * bone; // r26
    unsigned char boneMap[10]; // r1+0x8
    unsigned char index; // r24
    unsigned char count; // r23
    unsigned char start; // r22
    unsigned char run; // r21
    unsigned char k; // r25

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804E94C0
// Range: 0x803FE1E8 -> 0x803FE5DC
struct RwResEntry * _rwDlGeometrySkinInstanceFast(struct RpGeometry * geometry /* r31 */, void * owner /* r1+0x10 */, struct RwResEntry * * resEntryOwner /* r21 */) {
    // Local variables
    unsigned int i; // r27
    unsigned int size; // r28
    unsigned int vBufferHeaderSize; // r20
    unsigned int displayListSize; // r19
    unsigned int vBufferSize; // r1+0x28
    struct RwResEntry * resEntry; // r29
    void * memory; // r26
    struct RxGameCubeVertexBuffer * vbHeader; // r30
    struct RxGameCubeDisplayList * displayLists; // r18
    struct rwVertexDescriptor * vtxDesc; // r25
    struct rwGCNVertexBufferData vtxBufData; // r1+0x94
    unsigned char primTypeVAT; // r17
    struct RpSkin * skin; // r1+0x24
    unsigned int numIndices; // r1+0x20
    struct RpGameCubeVtxFmt * vtxFmt; // r22
    int i; // r23
    unsigned int displayListSize; // r1+0x1C
    struct rwGCNDisplayListData displayListData; // r1+0x2C
    unsigned short * matrixIndices; // r1+0x18
    struct RpMesh * mesh; // r24

    // References
    // -> void * RwEngineInstance;
    // -> unsigned short _RwDlTokenLastSeen;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[30];
}


