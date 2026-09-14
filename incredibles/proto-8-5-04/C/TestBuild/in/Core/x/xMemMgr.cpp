/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class xMemInfo_tag gMemInfo; // size: 0x24, address: 0x643EA0
unsigned int gActiveHeap; // size: 0x4, address: 0x608A5C
class xMemHeap_tag gxHeap[3]; // size: 0x294, address: 0x643ED0
void (* sMemBaseNotifyFunc)(); // size: 0x4, address: 0x608A60
signed int gMemReporting; // size: 0x4, address: 0x0
unsigned int gMemReportingThreshold; // size: 0x4, address: 0x0
unsigned int scratch_mem_used; // size: 0x4, address: 0x608A64
static unsigned short scratch_stack[128]; // size: 0x100, address: 0x644170
static unsigned char scratch_buffer[16384]; // size: 0x4000, address: 0x644270
static signed int scratch_allocations; // size: 0x4, address: 0x608A68
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x6B2890
// total size: 0xDC
class xMemHeap_tag {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int hard_base; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    signed short opp_heap[2]; // offset 0xC, size 0x4
    class xHeapState_tag state[12]; // offset 0x10, size 0xC0
    unsigned short state_idx; // offset 0xD0, size 0x2
    unsigned short max_blks; // offset 0xD2, size 0x2
    class xMemBlock_tag * blk; // offset 0xD4, size 0x4
    class xMemBlock_tag * lastblk; // offset 0xD8, size 0x4
};
// total size: 0xC
class xMemBlock_tag {
    // Members
public:
    unsigned int addr; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    signed int align; // offset 0x8, size 0x4
};
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
// total size: 0x1C
class xMemBlkInfo_tag {
    // Members
public:
    class xMemBlock_tag * header; // offset 0x0, size 0x4
    unsigned int pre; // offset 0x4, size 0x4
    unsigned int block; // offset 0x8, size 0x4
    unsigned int post; // offset 0xC, size 0x4
    unsigned int curr; // offset 0x10, size 0x4
    unsigned int waste; // offset 0x14, size 0x4
    unsigned int total; // offset 0x18, size 0x4
};
// total size: 0x10
class xHeapState_tag {
    // Members
public:
    unsigned int curr; // offset 0x0, size 0x4
    unsigned short blk_ct; // offset 0x4, size 0x2
    unsigned short pad; // offset 0x6, size 0x2
    unsigned int used; // offset 0x8, size 0x4
    unsigned int wasted; // offset 0xC, size 0x4
};
// total size: 0xC
class xMemArea_tag {
    // Members
public:
    unsigned int addr; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
};
// total size: 0x24
class xMemInfo_tag {
    // Members
public:
    class xMemArea_tag system; // offset 0x0, size 0xC
    class xMemArea_tag stack; // offset 0xC, size 0xC
    class xMemArea_tag DRAM; // offset 0x18, size 0xC
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A1DA0 -> 0x001A1DD0
*/
// Range: 0x1A1DA0 -> 0x1A1DD0
void xMemScratchPop() {
    /* anonymous block */ {
        // Range: 0x1A1DA0 -> 0x1A1DD0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A1DD0 -> 0x001A1EDC
*/
// Range: 0x1A1DD0 -> 0x1A1EDC
void * xMemScratchPush(unsigned int size /* r18 */, unsigned int align /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1A1DD0 -> 0x1A1EDC
        unsigned int align_mask; // r2
        unsigned char * mem; // r2
        unsigned int used; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A1EE0 -> 0x001A1F58
*/
// Range: 0x1A1EE0 -> 0x1A1F58
void xMemPoolFree(class xMemPool * pool /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A1EE0 -> 0x1A1F58
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
    Code range: 0x001A1F60 -> 0x001A2000
*/
// Range: 0x1A1F60 -> 0x1A2000
void * xMemPoolAlloc(class xMemPool * pool /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1A1F60 -> 0x1A2000
        void * retval; // r2
        unsigned int next; // r2
        unsigned int flags; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A2000 -> 0x001A202C
*/
// Range: 0x1A2000 -> 0x1A202C
void xMemPoolSetup(class xMemPool * pool /* r2 */, void * buffer /* r2 */, unsigned int nextOffset /* r2 */, unsigned int flags /* r2 */, void (* initCB)(class xMemPool *, void *) /* r2 */, unsigned int size /* r2 */, unsigned int count /* r2 */, unsigned int numRealloc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A2000 -> 0x1A202C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A2030 -> 0x001A2108
*/
// Range: 0x1A2030 -> 0x1A2108
static void xMemPoolAddElements(class xMemPool * pool /* r21 */, void * buffer /* r30 */, unsigned int count /* r23 */) {
    /* anonymous block */ {
        // Range: 0x1A2030 -> 0x1A2108
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
    Code range: 0x001A2110 -> 0x001A213C
*/
// Range: 0x1A2110 -> 0x1A213C
signed int xMemGetBase() {
    /* anonymous block */ {
        // Range: 0x1A2110 -> 0x1A213C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A2140 -> 0x001A2148
*/
// Range: 0x1A2140 -> 0x1A2148
void xMemRegisterBaseNotifyFunc(void (* func)() /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A2140 -> 0x1A2148
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A2150 -> 0x001A21B4
*/
// Range: 0x1A2150 -> 0x1A21B4
signed int xMemPopBase(signed int depth /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A2150 -> 0x1A21B4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A21C0 -> 0x001A2258
*/
// Range: 0x1A21C0 -> 0x1A2258
signed int xMemPushBase() {
    /* anonymous block */ {
        // Range: 0x1A21C0 -> 0x1A2258
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A2260 -> 0x001A23F0
*/
// Range: 0x1A2260 -> 0x1A23F0
void * xMemAlloc(unsigned int heapID /* r2 */, unsigned int size /* r21 */, signed int align /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A2260 -> 0x1A23F0
        class xMemHeap_tag * heap; // r20
        class xMemBlock_tag * hdr; // r19
        class xHeapState_tag * sp; // r18
        class xMemBlkInfo_tag info; // r29+0x70
        unsigned int total; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A23F0 -> 0x001A24D8
*/
// Range: 0x1A23F0 -> 0x1A24D8
void * xMemGrowAlloc(unsigned int heapID /* r2 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A23F0 -> 0x1A24D8
        class xMemHeap_tag * heap; // r2
        class xMemBlock_tag * hdr; // r2
        class xHeapState_tag * sp; // r2
        void * memptr; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A24E0 -> 0x001A25FC
*/
// Range: 0x1A24E0 -> 0x1A25FC
static unsigned int xMemGetBlockInfo(class xMemHeap_tag * heap /* r2 */, unsigned int size /* r2 */, signed int align /* r2 */, class xMemBlkInfo_tag * info /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A24E0 -> 0x1A25FC
        signed int total; // r2
        signed int hdr; // r13
        signed int pre; // r12
        signed int block; // r2
        signed int post; // r6
        class xHeapState_tag * sp; // r11
        signed int remainder; // r12
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A2600 -> 0x001A2708
*/
// Range: 0x1A2600 -> 0x1A2708
void xMemInitHeap(class xMemHeap_tag * heap /* r16 */, unsigned int base /* r2 */, unsigned int size /* r2 */, unsigned int flags /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A2600 -> 0x1A2708
        unsigned int old_base; // r9
        signed int align; // r2
        class xHeapState_tag * sp; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A2710 -> 0x001A27D0
*/
// Range: 0x1A2710 -> 0x1A27D0
void xMemInit() {
    /* anonymous block */ {
        // Range: 0x1A2710 -> 0x1A27D0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A27D0 -> 0x001A27D8
*/
// Range: 0x1A27D0 -> 0x1A27D8
void xMemDebug_SoakLog() {
    /* anonymous block */ {
        // Range: 0x1A27D0 -> 0x1A27D8
    }
}


