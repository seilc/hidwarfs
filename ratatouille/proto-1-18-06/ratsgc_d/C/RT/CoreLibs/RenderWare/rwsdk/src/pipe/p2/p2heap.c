/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\pipe\p2\p2heap.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80468B78 -> 0x804695F8
*/
static char __dbFunctionName[23]; // size: 0x17, address: 0x804EF6E8
// Range: 0x80468B78 -> 0x80468D68
static struct rxHeapFreeBlock * HeapFreeBlocksNewEntry(struct RxHeap * heap /* r31 */) {
    // Local variables
    struct rxHeapFreeBlock * freeBlocks; // r30
    unsigned int entriesUsed; // r28
    struct RwError _rwErrorCode; // r1+0x8
    struct rxHeapFreeBlock * iter; // r29

    // References
    // -> static char __dbFunctionName[23];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EF6FF
// Range: 0x80468D68 -> 0x80468E34
static void HeapFreeBlocksDeleteEntry(struct RxHeap * heap /* r31 */, struct rxHeapFreeBlock * freeEntry /* r30 */) {
    // References
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EF719
// Range: 0x80468E34 -> 0x80468F04
static struct rxHeapSuperBlockDescriptor * HeapSuperBlockCreate(unsigned int size /* r30 */) {
    // Local variables
    struct rxHeapSuperBlockDescriptor * superBlock; // r31

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EF72E
// Range: 0x80468F04 -> 0x80468F60
static void HeapSuperBlockDestroy(struct rxHeapSuperBlockDescriptor * superBlock /* r31 */) {
    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EF744
// Range: 0x80468F60 -> 0x804690A4
static int HeapSuperBlockReset(struct rxHeapSuperBlockDescriptor * superBlock /* r27 */, struct rxHeapSuperBlockDescriptor * attach2SuperBlock /* r26 */, struct RxHeap * heap /* r24 */) {
    // Local variables
    struct rxHeapFreeBlock * freeEntry; // r29
    struct rxHeapBlockHeader * blockHdrBeg; // r31
    struct rxHeapBlockHeader * blockHdrPrincipal; // r30
    struct rxHeapBlockHeader * blockHdrEnd; // r28
    struct rxHeapBlockHeader * blockHdrAttach2; // r25

    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[11]; // size: 0xB, address: 0x804EF758
// Range: 0x804690A4 -> 0x804692B8
void RxHeapFree(struct RxHeap * heap /* r25 */, void * block /* r1+0x8 */) {
    // Local variables
    struct rxHeapBlockHeader * blockHdr; // r31
    int mergeBack; // r26
    int mergeFwd; // r29
    struct rxHeapFreeBlock * freeEntry; // r30

    // References
    // -> static char __dbFunctionName[11];
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804EF763
// Range: 0x804692B8 -> 0x80469414
int _rxHeapReset(struct RxHeap * heap /* r31 */) {
    // Local variables
    struct rxHeapSuperBlockDescriptor * prev; // r29
    struct rxHeapSuperBlockDescriptor * iter; // r30

    // References
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804EF770
// Range: 0x80469414 -> 0x804694C4
void RxHeapDestroy(struct RxHeap * heap /* r31 */) {
    // Local variables
    struct rxHeapSuperBlockDescriptor * superBlock; // r30
    struct rxHeapSuperBlockDescriptor * const next; // r29

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804EF77E
// Range: 0x804694C4 -> 0x804695F8
struct RxHeap * RxHeapCreate(unsigned int size /* r30 */) {
    // Local variables
    struct RxHeap * heap; // r31
    struct rxHeapSuperBlockDescriptor * superBlock; // r29

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[13];
}


