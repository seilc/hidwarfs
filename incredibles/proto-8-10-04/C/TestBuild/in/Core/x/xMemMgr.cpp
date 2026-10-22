/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class xMemInfo gMemInfo; // size: 0x24, address: 0x64D2C0
unsigned int gActiveHeap; // size: 0x4, address: 0x611E6C
class xMemHeap gxHeap[3]; // size: 0x324, address: 0x64D2F0
void (* sMemBaseNotifyFunc)(); // size: 0x4, address: 0x611E70
signed int gMemReporting; // size: 0x4, address: 0x0
unsigned int gMemReportingThreshold; // size: 0x4, address: 0x0
unsigned int scratch_mem_used; // size: 0x4, address: 0x611E74
static unsigned short scratch_stack[128]; // size: 0x100, address: 0x64D620
static unsigned char scratch_buffer[16384]; // size: 0x4000, address: 0x64D720
static signed int scratch_allocations; // size: 0x4, address: 0x611E78
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x6A9D20
// total size: 0x1C
class xMemPool {
    // Members
public:
    void * FreeList; // offset 0x0, size 0x4
    unsigned short NextOffset; // offset 0x4, size 0x2
    unsigned short Flags; // offset 0x6, size 0x2
    void * UsedList; // offset 0x8, size 0x4
    void (* InitCB)(class xMemPool *, void *); // offset 0xC, size 0x4
    void * Buffer; // offset 0x10, size 0x4
    unsigned short Size; // offset 0x14, size 0x2
    unsigned short NumRealloc; // offset 0x16, size 0x2
    unsigned int Total; // offset 0x18, size 0x4
};
// total size: 0x10C
class xMemHeap {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int hard_base; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    signed short opp_heap[2]; // offset 0xC, size 0x4
    class xHeapState state[12]; // offset 0x10, size 0xF0
    unsigned short state_idx; // offset 0x100, size 0x2
    unsigned short max_blks; // offset 0x102, size 0x2
    class xMemBlock * blk; // offset 0x104, size 0x4
    class xMemBlock * lastblk; // offset 0x108, size 0x4
};
// total size: 0x14
class xHeapState {
    // Members
public:
    unsigned int curr; // offset 0x0, size 0x4
    unsigned short blk_ct; // offset 0x4, size 0x2
    unsigned short pad; // offset 0x6, size 0x2
    unsigned int used; // offset 0x8, size 0x4
    unsigned int wasted; // offset 0xC, size 0x4
    class xMemFreeLink * free_funcs; // offset 0x10, size 0x4
};
// total size: 0xC
class xMemBlock {
    // Members
public:
    unsigned int addr; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    signed int align; // offset 0x8, size 0x4
};
// total size: 0xC
class xMemFreeLink {
    // Members
public:
    class xMemFreeLink * next; // offset 0x0, size 0x4
    void (* func)(void *); // offset 0x4, size 0x4
    void * param; // offset 0x8, size 0x4
};
// total size: 0x1C
class xMemBlkInfo {
    // Members
public:
    class xMemBlock * header; // offset 0x0, size 0x4
    unsigned int pre; // offset 0x4, size 0x4
    unsigned int block; // offset 0x8, size 0x4
    unsigned int post; // offset 0xC, size 0x4
    unsigned int curr; // offset 0x10, size 0x4
    unsigned int waste; // offset 0x14, size 0x4
    unsigned int total; // offset 0x18, size 0x4
};
// total size: 0xC
class xMemArea {
    // Members
public:
    unsigned int addr; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
};
// total size: 0x24
class xMemInfo {
    // Members
public:
    class xMemArea system; // offset 0x0, size 0xC
    class xMemArea stack; // offset 0xC, size 0xC
    class xMemArea DRAM; // offset 0x18, size 0xC
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A24B0 -> 0x001A24E0
*/
// Range: 0x1A24B0 -> 0x1A24E0
void xMemScratchPop() {
    /* anonymous block */ {
        // Range: 0x1A24B0 -> 0x1A24E0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A24E0 -> 0x001A25EC
*/
// Range: 0x1A24E0 -> 0x1A25EC
void * xMemScratchPush(unsigned int size /* r18 */, unsigned int align /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1A24E0 -> 0x1A25EC
        unsigned int align_mask; // r2
        unsigned char * mem; // r2
        unsigned int used; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A25F0 -> 0x001A2668
*/
// Range: 0x1A25F0 -> 0x1A2668
void xMemPoolFree(class xMemPool * pool /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A25F0 -> 0x1A2668
        void * freeList; // r2
        unsigned int next; // r2
        void * * prev; // r9
        void * curr; // r8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A2670 -> 0x001A2710
*/
// Range: 0x1A2670 -> 0x1A2710
void * xMemPoolAlloc(class xMemPool * pool /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1A2670 -> 0x1A2710
        void * retval; // r2
        unsigned int next; // r2
        unsigned int flags; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A2710 -> 0x001A273C
*/
// Range: 0x1A2710 -> 0x1A273C
void xMemPoolSetup(class xMemPool * pool /* r2 */, void * buffer /* r2 */, unsigned int nextOffset /* r2 */, unsigned int flags /* r2 */, void (* initCB)(class xMemPool *, void *) /* r2 */, unsigned int size /* r2 */, unsigned int count /* r2 */, unsigned int numRealloc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A2710 -> 0x1A273C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A2740 -> 0x001A2818
*/
// Range: 0x1A2740 -> 0x1A2818
static void xMemPoolAddElements(class xMemPool * pool /* r21 */, void * buffer /* r30 */, unsigned int count /* r23 */) {
    /* anonymous block */ {
        // Range: 0x1A2740 -> 0x1A2818
        signed int i; // r20
        void * curr; // r2
        void (* initCB)(class xMemPool *, void *); // r2
        unsigned int next; // r2
        unsigned int size; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A2820 -> 0x001A284C
*/
// Range: 0x1A2820 -> 0x1A284C
signed int xMemGetBase() {
    /* anonymous block */ {
        // Range: 0x1A2820 -> 0x1A284C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A2850 -> 0x001A2858
*/
// Range: 0x1A2850 -> 0x1A2858
void xMemRegisterBaseNotifyFunc(void (* func)() /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A2850 -> 0x1A2858
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A2860 -> 0x001A286C
*/
// Range: 0x1A2860 -> 0x1A286C
signed int xMemPopBase(signed int depth /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A2860 -> 0x1A286C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A2870 -> 0x001A2950
*/
// Range: 0x1A2870 -> 0x1A2950
signed int xMemPopBase(unsigned int heapID /* r2 */, signed int depth /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A2870 -> 0x1A2950
        class xMemHeap * heap; // r2
        signed int new_idx; // r2
        signed int popped; // r20
        class xMemFreeLink * list; // r19
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A2950 -> 0x001A2958
*/
// Range: 0x1A2950 -> 0x1A2958
void xMemFreeDefault(void * addr_of_ptr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A2950 -> 0x1A2958
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A2960 -> 0x001A29CC
*/
// Range: 0x1A2960 -> 0x1A29CC
void * xMemAllocFreeable(void * alloced_memory /* r2 */, signed int asked_for_size /* r2 */, void (* func)(void *) /* r2 */, void * param /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A2960 -> 0x1A29CC
        class xMemFreeLink * link; // r2
        class xMemHeap * heap; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A29D0 -> 0x001A2A74
*/
// Range: 0x1A29D0 -> 0x1A2A74
signed int xMemPushBase() {
    /* anonymous block */ {
        // Range: 0x1A29D0 -> 0x1A2A74
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A2A80 -> 0x001A2C18
*/
// Range: 0x1A2A80 -> 0x1A2C18
void * xMemAlloc(unsigned int heapID /* r2 */, unsigned int size /* r21 */, signed int align /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A2A80 -> 0x1A2C18
        class xMemHeap * heap; // r20
        class xMemBlock * hdr; // r2
        class xHeapState * sp; // r19
        class xMemBlkInfo info; // r29+0x70
        unsigned int total; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A2C20 -> 0x001A2D10
*/
// Range: 0x1A2C20 -> 0x1A2D10
void * xMemGrowAlloc(unsigned int heapID /* r2 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A2C20 -> 0x1A2D10
        class xMemHeap * heap; // r2
        class xMemBlock * hdr; // r2
        class xHeapState * sp; // r2
        void * memptr; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A2D10 -> 0x001A2E34
*/
// Range: 0x1A2D10 -> 0x1A2E34
static unsigned int xMemGetBlockInfo(class xMemHeap * heap /* r2 */, unsigned int size /* r2 */, signed int align /* r2 */, class xMemBlkInfo * info /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A2D10 -> 0x1A2E34
        signed int total; // r2
        signed int hdr; // r13
        signed int pre; // r12
        signed int block; // r2
        signed int post; // r6
        class xHeapState * sp; // r2
        signed int remainder; // r12
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A2E40 -> 0x001A2F54
*/
// Range: 0x1A2E40 -> 0x1A2F54
void xMemInitHeap(class xMemHeap * heap /* r16 */, unsigned int base /* r2 */, unsigned int size /* r2 */, unsigned int flags /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A2E40 -> 0x1A2F54
        unsigned int old_base; // r9
        signed int align; // r2
        class xHeapState * sp; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A2F60 -> 0x001A3020
*/
// Range: 0x1A2F60 -> 0x1A3020
void xMemInit() {
    /* anonymous block */ {
        // Range: 0x1A2F60 -> 0x1A3020
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A3020 -> 0x001A3028
*/
// Range: 0x1A3020 -> 0x1A3028
void xMemDebug_SoakLog() {
    /* anonymous block */ {
        // Range: 0x1A3020 -> 0x1A3028
    }
}


