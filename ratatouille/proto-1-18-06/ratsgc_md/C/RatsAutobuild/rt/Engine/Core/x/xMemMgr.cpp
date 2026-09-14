/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMemMgr.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80049EA8 -> 0x8004AA28
*/
// total size: 0xC
struct xMemArea {
    // Members
    unsigned int addr; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
};
// total size: 0x24
struct xMemInfo {
    // Members
    struct xMemArea system; // offset 0x0, size 0xC
    struct xMemArea stack; // offset 0xC, size 0xC
    struct xMemArea DRAM; // offset 0x18, size 0xC
};
struct xMemInfo gMemInfo; // size: 0x24, address: 0x803C1050
unsigned int gActiveHeap; // size: 0x4, address: 0x803C1074
// total size: 0xC
struct xMemFreeLink {
    // Members
    struct xMemFreeLink * next; // offset 0x0, size 0x4
    void (* func)(void *); // offset 0x4, size 0x4
    void * param; // offset 0x8, size 0x4
};
// total size: 0x14
struct xHeapState {
    // Members
    unsigned int curr; // offset 0x0, size 0x4
    unsigned short blk_ct; // offset 0x4, size 0x2
    unsigned short pad; // offset 0x6, size 0x2
    unsigned int used; // offset 0x8, size 0x4
    unsigned int wasted; // offset 0xC, size 0x4
    struct xMemFreeLink * free_funcs; // offset 0x10, size 0x4
};
// total size: 0xC
struct xMemBlock {
    // Members
    unsigned int addr; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    int align; // offset 0x8, size 0x4
};
// total size: 0x10C
struct xMemHeap {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int hard_base; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    signed short opp_heap[2]; // offset 0xC, size 0x4
    struct xHeapState state[12]; // offset 0x10, size 0xF0
    unsigned short state_idx; // offset 0x100, size 0x2
    unsigned short max_blks; // offset 0x102, size 0x2
    struct xMemBlock * blk; // offset 0x104, size 0x4
    struct xMemBlock * lastblk; // offset 0x108, size 0x4
};
struct xMemHeap gxHeap[2]; // size: 0x218, address: 0x80312050
void (* sMemBaseNotifyFunc)(); // size: 0x4, address: 0x803C1078
// total size: 0x20
struct DVDDiskID {
    // Members
    char gameName[4]; // offset 0x0, size 0x4
    char company[2]; // offset 0x4, size 0x2
    unsigned char diskNumber; // offset 0x6, size 0x1
    unsigned char gameVersion; // offset 0x7, size 0x1
    unsigned char streaming; // offset 0x8, size 0x1
    unsigned char streamingBufSize; // offset 0x9, size 0x1
    unsigned char padding[22]; // offset 0xA, size 0x16
};
// total size: 0x30
struct DVDCommandBlock {
    // Members
    struct DVDCommandBlock * next; // offset 0x0, size 0x4
    struct DVDCommandBlock * prev; // offset 0x4, size 0x4
    unsigned long command; // offset 0x8, size 0x4
    long state; // offset 0xC, size 0x4
    unsigned long offset; // offset 0x10, size 0x4
    unsigned long length; // offset 0x14, size 0x4
    void * addr; // offset 0x18, size 0x4
    unsigned long currTransferSize; // offset 0x1C, size 0x4
    unsigned long transferredSize; // offset 0x20, size 0x4
    struct DVDDiskID * id; // offset 0x24, size 0x4
    void (* callback)(long, struct DVDCommandBlock *); // offset 0x28, size 0x4
    void * userData; // offset 0x2C, size 0x4
};
// total size: 0x3C
struct DVDFileInfo {
    // Members
    struct DVDCommandBlock cb; // offset 0x0, size 0x30
    unsigned long startAddr; // offset 0x30, size 0x4
    unsigned long length; // offset 0x34, size 0x4
    void (* callback)(long, struct DVDFileInfo *); // offset 0x38, size 0x4
};
// total size: 0xF0
struct tag_iFile {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    char path[128]; // offset 0x4, size 0x80
    int fd; // offset 0x84, size 0x4
    struct DVDFileInfo file; // offset 0x88, size 0x3C
    void (* cb)(struct tag_xFile *); // offset 0xC4, size 0x4
    int akey; // offset 0xC8, size 0x4
    int buffer[8]; // offset 0xCC, size 0x20
    int real_pos; // offset 0xEC, size 0x4
};
// total size: 0x114
struct tag_xFile {
    // Members
    char relname[32]; // offset 0x0, size 0x20
    struct tag_iFile ps; // offset 0x20, size 0xF0
    void * user_data; // offset 0x110, size 0x4
};
static struct tag_xFile DBSSoakLogFile; // size: 0x114, address: 0x80312268
static unsigned char DBSSoakLogOpen; // size: 0x1, address: 0x803C107C
static int DBSSceneMemFree; // size: 0x4, address: 0x803BD810
static unsigned int DBSLastSceneId; // size: 0x4, address: 0x803C1080
static int soakcnt; // size: 0x4, address: 0x803C1084
static signed char init; // size: 0x1, address: 0x803C1088
static int soakidx; // size: 0x4, address: 0x803C108C
static signed char init; // size: 0x1, address: 0x803C1090
char * * soaklevels; // size: 0x4, address: 0x803C1BF8
// Range: 0x80049EA8 -> 0x8004A064
void xMemDebug_SoakLog(unsigned int SceneId /* r31 */) {
    // Local variables
    const char * DBSFileName; // r3
    char soakbuf[128]; // r1+0x8
    int tmemfree; // r0

    // References
    // -> static int DBSSceneMemFree;
    // -> static unsigned int DBSLastSceneId;
    // -> static struct tag_xFile DBSSoakLogFile;
    // -> static int soakcnt;
    // -> static int soakidx;
    // -> static unsigned char DBSSoakLogOpen;
    // -> char * * soaklevels;
    // -> static signed char init;
    // -> static signed char init;
}

// Range: 0x8004A064 -> 0x8004A0F8
void xMemInit() {
    // References
    // -> unsigned int gActiveHeap;
    // -> struct xMemHeap gxHeap[2];
    // -> struct xMemInfo gMemInfo;
}

// Range: 0x8004A0F8 -> 0x8004A118
void xMemExit() {}

// Range: 0x8004A118 -> 0x8004A214
void xMemInitHeap(struct xMemHeap * heap /* r31 */, unsigned int base /* r4 */, unsigned int size /* r3 */, unsigned int flags /* r0 */) {
    // Local variables
    unsigned int old_base; // r8
    int align; // r3
    struct xHeapState * sp; // r3
}

// Range: 0x8004A214 -> 0x8004A33C
static unsigned int xMemGetBlockInfo(struct xMemHeap * heap /* r0 */, unsigned int size /* r0 */, int align /* r5 */, struct xMemBlkInfo * info /* r0 */) {
    // Local variables
    int total; // r8
    int hdr; // r12
    int pre; // r31
    int block; // r31
    int post; // r30
    struct xHeapState * sp; // r7
    int remainder; // r8
}

// Range: 0x8004A33C -> 0x8004A418
void * xMemGrowAlloc(unsigned int heapID /* r0 */, unsigned int size /* r5 */) {
    // Local variables
    unsigned int oldalignsize; // r0
    struct xMemHeap * heap; // r8
    struct xMemBlock * hdr; // r9
    struct xHeapState * sp; // r10
    void * memptr; // r31

    // References
    // -> struct xMemHeap gxHeap[2];
}

// total size: 0x1C
struct xMemBlkInfo {
    // Members
    struct xMemBlock * header; // offset 0x0, size 0x4
    unsigned int pre; // offset 0x4, size 0x4
    unsigned int block; // offset 0x8, size 0x4
    unsigned int post; // offset 0xC, size 0x4
    unsigned int curr; // offset 0x10, size 0x4
    unsigned int waste; // offset 0x14, size 0x4
    unsigned int total; // offset 0x18, size 0x4
};
// Range: 0x8004A418 -> 0x8004A584
void * xMemAlloc(unsigned int heapID /* r0 */, unsigned int size /* r26 */, int align /* r5 */) {
    // Local variables
    struct xMemHeap * heap; // r29
    struct xMemBlock * hdr; // r28
    struct xHeapState * sp; // r27
    struct xMemBlkInfo info; // r1+0x8
    unsigned int i; // r0
    unsigned int total; // r0

    // References
    // -> struct xMemHeap gxHeap[2];
}

// Range: 0x8004A584 -> 0x8004A604
int xMemPushBase(unsigned int heapID /* r0 */) {
    // Local variables
    struct xMemHeap * heap; // r31
    struct xHeapState * sp; // r30

    // References
    // -> void (* sMemBaseNotifyFunc)();
    // -> struct xMemHeap gxHeap[2];
}

// Range: 0x8004A638 -> 0x8004A65C
int xMemPushBase() {
    // References
    // -> unsigned int gActiveHeap;
}

// Range: 0x8004A65C -> 0x8004A6A4
void * xMemAllocFreeable(void * alloced_memory /* r0 */, int asked_for_size /* r0 */, void (* func)(void *) /* r0 */, void * param /* r0 */) {
    // Local variables
    struct xMemFreeLink * link; // r7
    struct xMemHeap * heap; // r5

    // References
    // -> unsigned int gActiveHeap;
    // -> struct xMemHeap gxHeap[2];
}

// Range: 0x8004A6A4 -> 0x8004A750
int xMemPopBase(unsigned int heapID /* r0 */, int depth /* r4 */) {
    // Local variables
    struct xMemHeap * heap; // r30
    int new_idx; // r29
    int popped; // r28
    struct xMemFreeLink * list; // r27

    // References
    // -> void (* sMemBaseNotifyFunc)();
    // -> struct xMemHeap gxHeap[2];
}

// Range: 0x8004A750 -> 0x8004A778
int xMemPopBase(int depth /* r4 */) {
    // References
    // -> unsigned int gActiveHeap;
}

// Range: 0x8004A778 -> 0x8004A790
int xMemGetBase(unsigned int heapID /* r0 */) {
    // References
    // -> struct xMemHeap gxHeap[2];
}

// Range: 0x8004A790 -> 0x8004A798
void xMemRegisterBaseNotifyFunc(void (* func)() /* r0 */) {
    // References
    // -> void (* sMemBaseNotifyFunc)();
}

// Range: 0x8004A798 -> 0x8004A7BC
int xMemGetBase() {
    // References
    // -> unsigned int gActiveHeap;
}

// total size: 0x1C
struct xMemPool {
    // Members
    void * FreeList; // offset 0x0, size 0x4
    unsigned short NextOffset; // offset 0x4, size 0x2
    unsigned short Flags; // offset 0x6, size 0x2
    void * UsedList; // offset 0x8, size 0x4
    void (* InitCB)(struct xMemPool *, void *); // offset 0xC, size 0x4
    void * Buffer; // offset 0x10, size 0x4
    unsigned short Size; // offset 0x14, size 0x2
    unsigned short NumRealloc; // offset 0x16, size 0x2
    unsigned int Total; // offset 0x18, size 0x4
};
// Range: 0x8004A7BC -> 0x8004A864
static void xMemPoolAddElements(struct xMemPool * pool /* r23 */, void * buffer /* r24 */, unsigned int count /* r25 */) {
    // Local variables
    int i; // r29
    void * curr; // r4
    void (* initCB)(struct xMemPool *, void *); // r28
    unsigned int next; // r27
    unsigned int size; // r26
}

// Range: 0x8004A864 -> 0x8004A8B0
void xMemPoolSetup(struct xMemPool * pool /* r0 */, void * buffer /* r0 */, unsigned int nextOffset /* r0 */, unsigned int flags /* r0 */, void (* initCB)(struct xMemPool *, void *) /* r0 */, unsigned int size /* r0 */, unsigned int count /* r9 */, unsigned int numRealloc /* r0 */) {}

// Range: 0x8004A8B0 -> 0x8004A934
void * xMemPoolAlloc(struct xMemPool * pool /* r28 */) {
    // Local variables
    void * retval; // r3
    unsigned int next; // r30
    unsigned int flags; // r29

    // References
    // -> unsigned int gActiveHeap;
}

// Range: 0x8004A934 -> 0x8004A990
void xMemPoolFree(struct xMemPool * pool /* r0 */, void * data /* r0 */) {
    // Local variables
    void * freeList; // r6
    unsigned int next; // r7
    void * prev; // r5
    void * curr; // r8
}

unsigned int scratch_mem_used; // size: 0x4, address: 0x803C1094
static unsigned short scratch_stack[128]; // size: 0x100, address: 0x8031237C
static unsigned char scratch_buffer[16384]; // size: 0x4000, address: 0x80312480
static int scratch_allocations; // size: 0x4, address: 0x803C1098
// Range: 0x8004A990 -> 0x8004A9FC
void * xMemScratchPush(unsigned int size /* r0 */, unsigned int align /* r4 */) {
    // Local variables
    unsigned char * scratch; // r0
    unsigned int align_mask; // r4
    unsigned char * mem; // r7
    unsigned int used; // r0

    // References
    // -> static int scratch_allocations;
    // -> unsigned int scratch_mem_used;
    // -> static unsigned short scratch_stack[128];
    // -> static unsigned char scratch_buffer[16384];
}

// Range: 0x8004A9FC -> 0x8004AA28
void xMemScratchPop() {
    // References
    // -> static int scratch_allocations;
    // -> static unsigned short scratch_stack[128];
    // -> unsigned int scratch_mem_used;
}


