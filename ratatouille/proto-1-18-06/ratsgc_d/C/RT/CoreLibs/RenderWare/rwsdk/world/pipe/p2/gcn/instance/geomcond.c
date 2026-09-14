/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\world\pipe\p2\gcn\instance\geomcond.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80424F40 -> 0x80425870
*/
static char __dbFunctionName[12]; // size: 0xC, address: 0x804EBA68
// Range: 0x80424F40 -> 0x80424FC8
static unsigned int TypeGetSize(enum rwDataType type /* r3 */) {
    // References
    // -> static char __dbFunctionName[12];
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EBA74
// Range: 0x80424FC8 -> 0x804251FC
static int TypeCheckEqual(enum rwDataType type /* r3 */, void * a /* r4 */, void * b /* r5 */) {
    // References
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804EBA83
// Range: 0x804251FC -> 0x804252D4
static void IndicesRemap(unsigned short * dstIndexList /* r3 */, unsigned short * srcIndexList /* r4 */, int * map /* r5 */, unsigned int numIndices /* r6 */) {
    // Local variables
    unsigned int i; // r31
    int numHoles; // r29
    unsigned short j; // r30
    unsigned short index; // r28

    // References
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EBA90
// Range: 0x804252D4 -> 0x804253F4
struct rwGCNIndexDataRemapped * IndexDataCreateRemapped(struct rwGCNVtxDataMap * vtxDataMap /* r23 */, struct rwGCNIndexData * indexData /* r24 */, unsigned int numEntries /* r29 */, unsigned int numIndices /* r26 */) {
    // Local variables
    struct rwGCNIndexDataRemapped * indexDataRemapped; // r30
    unsigned int offset; // r28
    unsigned int size; // r27
    unsigned int i; // r31

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EBAA8
// Range: 0x804253F4 -> 0x804255C0
struct rwGCNVtxDataRemapped * VertexDataCreateRemapped(struct rwGCNVtxDataMap * vtxDataMap /* r27 */, struct rwGCNVtxData * vtxData /* r28 */, unsigned int numEntries /* r26 */, unsigned int numVerts /* r1+0x8 */) {
    // Local variables
    unsigned int i; // r31
    unsigned int size; // r29
    unsigned int offset; // r24
    struct rwGCNVtxDataRemapped * vtxDataRemapped; // r30
    unsigned int j; // r25
    unsigned char * srcData; // r23
    unsigned char * dstData; // r22

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EBAC1
// Range: 0x804255C0 -> 0x80425870
struct rwGCNVtxDataMap * VertexDataCreateMaps(struct rwGCNVtxData * vtxData /* r30 */, unsigned int numEntries /* r25 */, unsigned int numVerts /* r22 */) {
    // Local variables
    unsigned int offset; // r21
    unsigned int count; // r19
    unsigned int size; // r24
    unsigned int i; // r31
    struct rwGCNVtxDataMap * vtxDataMap; // r29
    unsigned int j; // r28
    unsigned int k; // r27
    unsigned int depSize; // r20
    int equal; // r18
    signed char dep; // r23
    signed char depIndex; // r26

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[21];
}


