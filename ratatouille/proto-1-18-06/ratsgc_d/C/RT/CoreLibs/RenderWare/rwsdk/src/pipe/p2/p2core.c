/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\pipe\p2\p2core.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80463018 -> 0x80463EA8
*/
int _rxHeapInitialSize; // size: 0x4, address: 0x80D68AA0
int _rxPipelineMaxNodes; // size: 0x4, address: 0x80D68AA4
int RxPipelineInstanced; // size: 0x4, address: 0x80D6C460
static char __dbFunctionName[17]; // size: 0x11, address: 0x804EF2A0
// Range: 0x80463018 -> 0x80463094
int _rxPipelineClose() {
    // References
    // -> int RxPipelineInstanced;
    // -> struct RxHeap * _rxHeapGlobal;
    // -> int _rxPipelineGlobalsOffset;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[17];
}

static int _rxPipesFreeListBlockSize; // size: 0x4, address: 0x80D68AA8
static int _rxPipesFreeListPreallocBlocks; // size: 0x4, address: 0x80D68AAC
static char __dbFunctionName[16]; // size: 0x10, address: 0x804EF2B1
static struct RwFreeList _rxPipesFreeList; // size: 0x30, address: 0x80D5DE50
// Range: 0x80463094 -> 0x8046324C
int _rxPipelineOpen() {
    // References
    // -> int RxPipelineInstanced;
    // -> int _rxPipelineGlobalsOffset;
    // -> void * RwEngineInstance;
    // -> int _rxPipelineMaxNodes;
    // -> struct RxHeap * _rxHeapGlobal;
    // -> static char __dbFunctionName[16];
    // -> static struct RwFreeList _rxPipesFreeList;
    // -> static int _rxPipesFreeListPreallocBlocks;
    // -> static int _rxPipesFreeListBlockSize;
    // -> int _rxHeapInitialSize;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EF2C1
// Range: 0x8046324C -> 0x804637B8
struct RxPipelineNode * PipelineNodeDestroy(struct RxPipelineNode * node /* r31 */, struct RxPipeline * pipeline /* r30 */) {
    // Local variables
    int nodeIndex; // r27
    struct RxPipelineNodeTopSortData * topSortData; // r22
    struct RxPipelineNodeTopSortData * nextTopSortData; // r24
    unsigned int * output; // r26
    unsigned int * nextOutput; // r23
    unsigned int i; // r29
    unsigned int j; // r25

    // References
    // -> int _rxPipelineGlobalsOffset;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EF2D5
// Range: 0x804637B8 -> 0x80463820
struct RxHeap * RxHeapGetGlobalHeap() {
    // References
    // -> struct RxHeap * _rxHeapGlobal;
    // -> static char __dbFunctionName[20];
    // -> int RxPipelineInstanced;
}

static char __dbFunctionName[47]; // size: 0x2F, address: 0x804EF2E9
// Range: 0x80463820 -> 0x8046391C
void _rwPipelineCheckForTramplingOfNodePrivateSpace(struct RxPipeline * pipeline /* r30 */) {
    // Local variables
    unsigned int n; // r29
    struct RxPipelineNode * node; // r31
    unsigned int privateDataSize; // r26
    unsigned int readMagic; // r25
    int tramplingOfNodePrivateSpace; // r27

    // References
    // -> static char __dbFunctionName[47];
}

static char __dbFunctionName[12]; // size: 0xC, address: 0x804EF318
// Range: 0x8046391C -> 0x804639E4
static void ExecuteNode(struct RxPipeline * _pipeline /* r31 */, struct RxPipelineNode * _node /* r28 */, struct RxPipelineNodeParam * _params /* r1+0x8 */) {
    // Local variables
    unsigned int exitCode; // r29
    const struct RxNodeDefinition * nodeDef; // r30

    // References
    // -> struct RxExecutionContext _rxExecCtxGlobal;
    // -> static char __dbFunctionName[12];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EF324
// Range: 0x804639E4 -> 0x80463BF0
struct RxPipeline * RxPipelineExecute(struct RxPipeline * pipeline /* r31 */, void * data /* r1+0x8 */, int heapReset /* r1+0xC */) {
    // Local variables
    struct RxPipelineNode * node; // r28

    // References
    // -> struct RxExecutionContext _rxExecCtxGlobal;
    // -> static char __dbFunctionName[18];
    // -> struct RxHeap * _rxHeapGlobal;
    // -> int RxPipelineInstanced;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EF336
// Range: 0x80463BF0 -> 0x80463D78
struct RxPipeline * RxPipelineCreate() {
    // Local variables
    struct RxPipeline * pipeline; // r30
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[17];
    // -> int _rxPipelineGlobalsOffset;
    // -> void * RwEngineInstance;
    // -> int RxPipelineInstanced;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EF347
// Range: 0x80463D78 -> 0x80463EA8
void _rxPipelineDestroy(struct RxPipeline * Pipeline /* r31 */) {
    // Local variables
    unsigned int numNodes; // r27
    unsigned int i; // r30
    struct RxPipelineNode * Node; // r29

    // References
    // -> int _rxPipelineGlobalsOffset;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[19];
    // -> int RxPipelineInstanced;
}


