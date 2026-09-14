/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\pipe\p2\p2define.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80463EA8 -> 0x80466F6C
*/
// total size: 0x8
struct P2MemoryLimits {
    // Members
    unsigned char * StalacTiteBase; // offset 0x0, size 0x4
    unsigned char * StalacMiteBase; // offset 0x4, size 0x4
};
static struct P2MemoryLimits gMemoryLimits; // size: 0x8, address: 0x80D68AB0
static char __dbFunctionName[16]; // size: 0x10, address: 0x804EF360
// Range: 0x80463EA8 -> 0x8046402C
void * StalacTiteAlloc(unsigned int size /* r31 */) {
    // Local variables
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static struct P2MemoryLimits gMemoryLimits;
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EF370
// Range: 0x8046402C -> 0x804641C0
void * StalacMiteAlloc(unsigned int size /* r31 */) {
    // Local variables
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static struct P2MemoryLimits gMemoryLimits;
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804EF380
// Range: 0x804641C0 -> 0x804642B8
unsigned int PipelineCalcNumUniqueClusters(struct RxPipeline * pipeline /* r27 */) {
    // Local variables
    struct RxClusterDefinition * lastAddress; // r24
    struct RxClusterDefinition * newAddress; // r31
    unsigned int numUniqueClusters; // r26
    unsigned int i; // r30
    unsigned int j; // r29
    struct RxNodeDefinition * nodeDef; // r28
    struct RxClusterDefinition * address; // r25

    // References
    // -> static char __dbFunctionName[30];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EF39E
// Range: 0x804642B8 -> 0x80464624
static int ReallocAndFixupSuperBlock(struct RxPipeline * pipeline /* r31 */, unsigned int newSize /* r28 */) {
    // Local variables
    void * oldBlock; // r26
    void * newBlock; // r27
    unsigned int i; // r30
    unsigned int numNodes; // r17
    int diff; // r29
    struct RwError _rwErrorCode; // r1+0xC

    // References
    // -> static char __dbFunctionName[26];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EF3B8
// Range: 0x80464624 -> 0x80464B04
static int LockPipelineExpandData(struct RxPipeline * dstPipe /* r31 */, struct RxPipeline * srcPipe /* r29 */) {
    // Local variables
    struct RxPipelineNodeTopSortData * topSortArray; // r27
    unsigned int * outputs; // r26
    int i; // r30
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> int _rxPipelineGlobalsOffset;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[23];
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[33]; // size: 0x21, address: 0x804EF3CF
// Range: 0x80464B04 -> 0x80464B6C
static unsigned int CalcNodesOutputsCompactedMemSize(struct RxPipeline * pipeline /* r3 */) {
    // Local variables
    unsigned int size; // r31
    unsigned int i; // r30

    // References
    // -> static char __dbFunctionName[33];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804EF3F0
// Range: 0x80464B6C -> 0x80464C50
static unsigned int CalcUnlockPersistentMemSize(struct RxPipeline * pipeline /* r3 */, unsigned int numClusters /* r4 */) {
    // Local variables
    unsigned int blockSize; // r31
    struct RxPipelineNode * node; // r30
    unsigned int i; // r29

    // References
    // -> static char __dbFunctionName[28];
}

static char __dbFunctionName[12]; // size: 0xC, address: 0x804EF40C
// Range: 0x80464C50 -> 0x80465064
static int _NodeCreate(struct RxPipeline * pipeline /* r29 */, struct RxPipelineNode * node /* r30 */, struct RxNodeDefinition * nodespec /* r24 */) {
    // Local variables
    struct RxPipelineNodeTopSortData * topSortData; // r28
    unsigned int * outputs; // r27
    int result; // r25
    unsigned int n; // r26
    struct RwError _rwErrorCode; // r1+0x18
    struct RwError _rwErrorCode; // r1+0x10
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> int _rxPipelineGlobalsOffset;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[12];
    // -> int _rxPipelineMaxNodes;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EF418
// Range: 0x80465064 -> 0x80465170
static void PipelineTallyInputs(struct RxPipeline * pipeline /* r3 */) {
    // Local variables
    struct RxPipelineNode * nodes; // r31
    unsigned int i; // r30
    int j; // r28
    unsigned int * outputs; // r29

    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EF42C
// Range: 0x80465170 -> 0x804654BC
static void PipelineTopSort(struct tagTopSortData * data /* r31 */, unsigned int nodeIndex /* r1+0x8 */) {
    // Local variables
    struct RxPipelineNode * curNode; // r25
    unsigned int i; // r30
    unsigned int j; // r27
    unsigned int tmpOutput; // r18
    unsigned int * outputsI; // r23
    unsigned int * outputsJ; // r22
    struct RxPipelineNodeTopSortData tempTopSortData; // r1+0xC
    struct RxPipelineNodeTopSortData * topSortDataI; // r21
    struct RxPipelineNodeTopSortData * topSortDataJ; // r20
    struct RxPipelineNode tmpNode; // r1+0x18
    unsigned int k; // r29
    unsigned int l; // r26
    struct RxPipelineNode * node; // r28
    unsigned int outIndex; // r19
    struct RxPipelineNode * outNode; // r24

    // References
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EF43C
// Range: 0x804654BC -> 0x804655A4
static unsigned int PipelineNode2Index(struct RxPipeline * pipeline /* r31 */, struct RxPipelineNode * node /* r28 */) {
    // Local variables
    unsigned int nodeIndex; // r30

    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EF44F
// total size: 0x8
struct tagTopSortData {
    // Members
    struct RxPipeline * pipeline; // offset 0x0, size 0x4
    unsigned int nodesArraySlot; // offset 0x4, size 0x4
};
// Range: 0x804655A4 -> 0x804658BC
static struct RxPipeline * PipelineUnlockTopSort(struct RxPipeline * pipeline /* r31 */) {
    // Local variables
    struct tagTopSortData data; // r1+0x20
    unsigned int i; // r30
    struct RwError _rwErrorCode; // r1+0x18
    struct RwError _rwErrorCode; // r1+0x10
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[32]; // size: 0x20, address: 0x804EF465
// Range: 0x804658BC -> 0x804659E0
unsigned int * RxPipelineNodeFindOutputByIndex(struct RxPipelineNode * node /* r31 */, unsigned int outputindex /* r29 */) {
    // References
    // -> static char __dbFunctionName[32];
    // -> int RxPipelineInstanced;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EF485
// Range: 0x804659E0 -> 0x80465AC4
struct RxPipelineNode * RxPipelineNodeFindInput(struct RxPipelineNode * node /* r31 */) {
    // References
    // -> static char __dbFunctionName[24];
    // -> int RxPipelineInstanced;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EF49D
// Range: 0x80465AC4 -> 0x80466334
struct RxPipeline * RxLockedPipeUnlock(struct RxPipeline * pipeline /* r31 */) {
    // Local variables
    struct RxPipelineNodeTopSortData * newTopSortData; // r25
    struct RxPipelineNodeTopSortData * topSortData; // r24
    unsigned int numUniqueClusters; // r17
    unsigned int unlockStartBlockSize; // r23
    unsigned int unlockEndBlockSize; // r1+0x1C
    unsigned int topSortBlockSize; // r1+0x18
    unsigned int depChaseBlockSize; // r26
    unsigned int totalOutputs; // r1+0x14
    unsigned int * newOutputs; // r20
    unsigned int * outputs; // r22
    int error; // r21
    unsigned int doneNodes; // r19
    int i; // r30
    struct RwError _rwErrorCode; // r1+0x30
    struct RxNodeDefinition * nodeDef; // r29
    struct RxPipelineNode * node; // r1+0x10
    struct RxNodeDefinition * nodeDef; // r18
    struct RxPipelineNode * node; // r1+0xC
    struct RxNodeDefinition * nodeDef; // r27
    struct RxPipelineNode * node; // r1+0x8
    struct RwError _rwErrorCode; // r1+0x28
    struct RwError _rwErrorCode; // r1+0x20

    // References
    // -> static char __dbFunctionName[19];
    // -> static struct P2MemoryLimits gMemoryLimits;
    // -> int _rxPipelineGlobalsOffset;
    // -> void * RwEngineInstance;
    // -> int RxPipelineInstanced;
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EF4B0
// Range: 0x80466334 -> 0x804666C0
struct RxPipeline * RxPipelineLock(struct RxPipeline * pipeline /* r31 */) {
    // Local variables
    unsigned int lockedBlockSize; // r27
    struct RwError _rwErrorCode; // r1+0x8
    unsigned int n; // r29
    const struct RxNodeMethods * const nodeMethods; // r28

    // References
    // -> static char __dbFunctionName[15];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> int _rxPipelineGlobalsOffset;
    // -> int RxPipelineInstanced;
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EF4BF
// Range: 0x804666C0 -> 0x80466874
struct RxPipelineNode * RxPipelineFindNodeByName(struct RxPipeline * pipeline /* r29 */, const char * name /* r24 */, struct RxPipelineNode * start /* r22 */, int * nodeIndex /* r28 */) {
    // Local variables
    int check; // r23
    struct RxPipelineNode * node; // r31
    int n; // r30

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[25];
    // -> int RxPipelineInstanced;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EF4D8
// Range: 0x80466874 -> 0x80466D2C
struct RxPipeline * RxLockedPipeAddFragment(struct RxPipeline * pipeline /* r31 */, unsigned int * firstIndex /* r22 */, struct RxNodeDefinition * nodeDef0 /* r23 */) {
    // Local variables
    struct __va_list_struct va[1]; // r1+0x80
    struct RxNodeDefinition * nodeDef; // r28
    unsigned int fragLength; // r27
    unsigned int oldnumnodes; // r25
    unsigned int n; // r29
    struct RxPipelineNode * prevnode; // r24
    struct RwError _rwErrorCode; // r1+0x78
    struct RxPipelineNode * node; // r26
    struct RwError _rwErrorCode; // r1+0x70
    struct RwError _rwErrorCode; // r1+0x68

    // References
    // -> static char __dbFunctionName[24];
    // -> int _rxPipelineGlobalsOffset;
    // -> void * RwEngineInstance;
    // -> int RxPipelineInstanced;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EF4F0
// Range: 0x80466D2C -> 0x80466F6C
struct RxPipeline * RxLockedPipeAddPath(struct RxPipeline * pipeline /* r28 */, unsigned int * out /* r30 */, struct RxPipelineNode * in /* r29 */) {
    // Local variables
    unsigned int nodeIndex; // r27

    // References
    // -> static char __dbFunctionName[20];
    // -> int RxPipelineInstanced;
}


