/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\plcore\bamemory.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80434594 -> 0x8043565C
*/
static int FreeListsEnabled; // size: 0x4, address: 0x80D68798
// Range: 0x80434594 -> 0x8043459C
void _rwFreeListEnable(int enabled /* r3 */) {
    // References
    // -> static int FreeListsEnabled;
}

static int _freeListModuleOpen; // size: 0x4, address: 0x80D6C320
static struct RwFreeList * _masterFreeListPtr; // size: 0x4, address: 0x80D6C324
static char __dbFunctionName[22]; // size: 0x16, address: 0x804ECA40
static struct RwLinkList _freeListList; // size: 0x8, address: 0x80D6C328
static struct RwFreeList _masterFreeList; // size: 0x30, address: 0x80D5D3E0
// Range: 0x8043459C -> 0x80434698
static int _rwFreeListModuleOpen() {
    // References
    // -> static struct RwFreeList * _masterFreeListPtr;
    // -> static int _freeListModuleOpen;
    // -> static struct RwFreeList _masterFreeList;
    // -> static struct RwLinkList _freeListList;
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804ECA56
// Range: 0x80434698 -> 0x8043474C
static void _rwFreeListModuleClose() {
    // Local variables
    struct RwFreeList * freeList; // r29
    struct RwLLLink * link; // r31
    struct RwLLLink * lastLink; // r30

    // References
    // -> static int _freeListModuleOpen;
    // -> static struct RwFreeList * _masterFreeListPtr;
    // -> static struct RwLinkList _freeListList;
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804ECA6D
// Range: 0x8043474C -> 0x80434A04
static struct RwFreeList * FreeListCreate(unsigned int entrySize /* r21 */, unsigned int entriesPerBlock /* r24 */, unsigned int alignment /* r27 */, unsigned int blocks /* r25 */, struct RwFreeList * freeList /* r31 */, unsigned int hint /* r22 */) {
    // Local variables
    unsigned int alignedBlockSize; // r23
    unsigned int heapSize; // r28
    void * block; // r26
    struct RwLLLink * link; // r30

    // References
    // -> static struct RwLinkList _freeListList;
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static struct RwFreeList * _masterFreeListPtr;
    // -> static char __dbFunctionName[15];
    // -> static int FreeListsEnabled;
    // -> static int _freeListModuleOpen;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804ECA7C
// Range: 0x80434A04 -> 0x80434B18
struct RwFreeList * _rwFreeListCreate(int entrySize /* r27 */, int entriesPerBlock /* r28 */, int alignment /* r29 */, unsigned int hint /* r1+0x8 */, const char * fileCreate /* r1+0xC */, unsigned int lineCreate /* r1+0x10 */) {
    // Local variables
    struct RwFreeList * freelist; // r31

    // References
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[36]; // size: 0x24, address: 0x804ECA8E
// Range: 0x80434B18 -> 0x80434C0C
struct RwFreeList * RwFreeListCreateAndPreallocateSpace(int entrySize /* r28 */, int entriesPerBlock /* r29 */, int alignment /* r30 */, int numBlocksToPreallocate /* r1+0x8 */, struct RwFreeList * inPlaceSpaceForFreeListStruct /* r1+0xC */, unsigned int hint /* r1+0x10 */) {
    // References
    // -> static char __dbFunctionName[36];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804ECAB2
// Range: 0x80434C0C -> 0x80434D20
static void _RwFreeListFree(struct RwFreeList * freeList /* r30 */) {
    // Local variables
    struct RwLLLink * link; // r31
    struct RwLLLink * lastLink; // r29

    // References
    // -> static struct RwFreeList * _masterFreeListPtr;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804ECAC2
// Range: 0x80434D20 -> 0x80434DBC
int RwFreeListDestroy(struct RwFreeList * freeList /* r31 */) {
    // References
    // -> static char __dbFunctionName[18];
    // -> static int _freeListModuleOpen;
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804ECAD4
// Range: 0x80434DBC -> 0x80435004
void * _rwFreeListAllocReal(struct RwFreeList * freeList /* r31 */, unsigned int hint /* r1+0x8 */) {
    // Local variables
    unsigned char heapElement; // r19
    unsigned char mask; // r18
    void * freeEntry; // r29
    unsigned int i; // r30
    unsigned int j; // r25
    unsigned int heapEntries; // r24
    unsigned char * heap; // r28
    struct RwLLLink * link; // r27
    struct RwLLLink * lastLink; // r17
    unsigned int checkEntries; // r23
    unsigned char * aligned; // r21
    void * dataBlock; // r22
    struct RwLLLink * link; // r26
    unsigned char * aligned; // r20

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[21];
    // -> static int _freeListModuleOpen;
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804ECAE9
// Range: 0x80435004 -> 0x80435060
static int FreeListBlockIsEmpty(unsigned char * heap /* r3 */, unsigned int heapEntries /* r4 */) {
    // Local variables
    unsigned int i; // r31
    unsigned int sum; // r30

    // References
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804ECAFE
// Range: 0x80435060 -> 0x804352A4
struct RwFreeList * _rwFreeListFreeReal(struct RwFreeList * freeList /* r31 */, void * entry /* r26 */) {
    // Local variables
    unsigned int heapEntries; // r23
    void * dataBlock; // r25
    struct RwLLLink * link; // r30
    struct RwLLLink * lastLink; // r21
    unsigned char * heap; // r28
    unsigned int entryIndex; // r22
    unsigned int heapElement; // r27
    unsigned char mask; // r24

    // References
    // -> static char __dbFunctionName[20];
    // -> void * RwEngineInstance;
    // -> static int _freeListModuleOpen;
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804ECB12
// Range: 0x804352A4 -> 0x80435490
struct RwFreeList * RwFreeListForAllUsed(struct RwFreeList * freeList /* r31 */, void (* fpCallBack)(void *, void *) /* r1+0x8 */, void * pData /* r1+0xC */) {
    // Local variables
    unsigned int heapEntries; // r25
    struct RwLLLink * link; // r30
    struct RwLLLink * lastLink; // r22
    struct RwLLLink * nextLink; // r21
    unsigned char * heap; // r20
    unsigned char * heapCopy; // r27
    unsigned int heapElement; // r23
    unsigned char mask; // r19
    unsigned int i; // r29
    unsigned int j; // r26
    unsigned char * aligned; // r24
    unsigned char * entry; // r18

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[21];
    // -> static int _freeListModuleOpen;
}

static char __dbFunctionName[8]; // size: 0x8, address: 0x80D71FA0
// Range: 0x80435490 -> 0x804354C8
static void * HMalloc(unsigned long size /* r1+0x8 */) {
    // References
    // -> static char __dbFunctionName[8];
}

static char __dbFunctionName[9]; // size: 0x9, address: 0x804ECB27
// Range: 0x804354C8 -> 0x80435510
static void * HRealloc(void * mem /* r1+0x8 */, unsigned long newSize /* r1+0xC */) {
    // References
    // -> static char __dbFunctionName[9];
}

static char __dbFunctionName[8]; // size: 0x8, address: 0x80D71FA8
// Range: 0x80435510 -> 0x80435550
static void * HCalloc(unsigned long numObj /* r1+0x8 */, unsigned long sizeObj /* r1+0xC */) {
    // References
    // -> static char __dbFunctionName[8];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804ECB30
// total size: 0x10
struct RwMemoryFunctions {
    // Members
    void * (* rwmalloc)(unsigned long, unsigned int); // offset 0x0, size 0x4
    void (* rwfree)(void *); // offset 0x4, size 0x4
    void * (* rwrealloc)(void *, unsigned long, unsigned int); // offset 0x8, size 0x4
    void * (* rwcalloc)(unsigned long, unsigned long, unsigned int); // offset 0xC, size 0x4
};
// Range: 0x80435550 -> 0x80435624
int _rwMemoryOpen(const struct RwMemoryFunctions * memFuncs /* r31 */) {
    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804ECB3E
// Range: 0x80435624 -> 0x8043565C
void _rwMemoryClose() {
    // References
    // -> static char __dbFunctionName[15];
}


