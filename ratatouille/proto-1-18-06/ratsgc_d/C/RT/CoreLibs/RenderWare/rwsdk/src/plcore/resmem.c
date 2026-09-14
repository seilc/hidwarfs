/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\plcore\resmem.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8043B080 -> 0x8043B8C8
*/
static char __dbFunctionName[11]; // size: 0xB, address: 0x804ED0C8
// total size: 0x8
struct rwResHeapHeader {
    // Members
    struct rwResHeapBlockHeader * firstBlock; // offset 0x0, size 0x4
    struct rwResHeapBlockHeader * firstFreeBlock; // offset 0x4, size 0x4
};
enum rwResHeapBlockFlags {
    rwRESHEAP_BLOCKUSED = 1,
    rwRESHEAPFLAGFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x20
struct rwResHeapBlockHeader {
    // Members
    struct rwResHeapHeader * heap; // offset 0x0, size 0x4
    struct rwResHeapBlockHeader * next; // offset 0x4, size 0x4
    struct rwResHeapBlockHeader * prev; // offset 0x8, size 0x4
    unsigned int size; // offset 0xC, size 0x4
    enum rwResHeapBlockFlags flags; // offset 0x10, size 0x4
    unsigned int pad[3]; // offset 0x14, size 0xC
};
// Range: 0x8043B080 -> 0x8043B1EC
static void splitBlock(struct rwResHeapBlockHeader * block /* r31 */, unsigned int size /* r29 */) {
    // Local variables
    struct rwResHeapBlockHeader * newBlock; // r30

    // References
    // -> static char __dbFunctionName[11];
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804ED0D3
// Range: 0x8043B1EC -> 0x8043B2E4
int _rwResHeapInit(void * resHeap /* r29 */, unsigned int size /* r25 */) {
    // Local variables
    struct rwResHeapHeader * heapInfo; // r30
    struct rwResHeapBlockHeader * firstBlock; // r31
    unsigned int start; // r28
    unsigned int end; // r26
    int blockSize; // r27

    // References
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804ED0E2
// Range: 0x8043B2E4 -> 0x8043B304
int _rwResHeapClose() {
    // References
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804ED0F2
// Range: 0x8043B304 -> 0x8043B4D4
void _rwResHeapFree(void * memory /* r27 */) {
    // Local variables
    struct rwResHeapBlockHeader * block; // r31
    struct rwResHeapBlockHeader * prevBlock; // r29
    struct rwResHeapBlockHeader * nextBlock; // r30

    // References
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804ED101
// Range: 0x8043B4D4 -> 0x8043B684
void * _rwResHeapAlloc(void * resHeap /* r26 */, unsigned int size /* r28 */) {
    // Local variables
    struct rwResHeapHeader * heapInfo; // r31
    struct rwResHeapBlockHeader * targetBlock; // r30
    struct rwResHeapBlockHeader * curBlock; // r29

    // References
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804ED111
// Range: 0x8043B684 -> 0x8043B8C8
int _rwResHeapGetStats(void * resHeap /* r22 */, unsigned int * totalAllocated /* r24 */, unsigned int * totalFree /* r25 */, unsigned int * largestAllocated /* r26 */, unsigned int * largestFree /* r27 */, unsigned int * smallestAllocated /* r28 */, unsigned int * smallestFree /* r29 */) {
    // Local variables
    struct rwResHeapHeader * heapInfo; // r23
    struct rwResHeapBlockHeader * curBlock; // r31

    // References
    // -> static char __dbFunctionName[19];
}


