/*
    Compile unit: E:\SD2\Game\flat\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class xMemInfo_tag gMemInfo; // size: 0x30, address: 0x3692C0
unsigned int gActiveHeap; // size: 0x4, address: 0x357CAC
class xMemHeap_tag gxHeap[3]; // size: 0x1D4, address: 0x3692F0
void (* sMemBaseNotifyFunc)(); // size: 0x4, address: 0x357CB0
signed int gMemReporting; // size: 0x4, address: 0x0
unsigned int gMemReportingThreshold; // size: 0x4, address: 0x0
// total size: 0x30
class xMemInfo_tag {
    // Members
public:
    class xMemArea_tag system; // offset 0x0, size 0xC
    class xMemArea_tag stack; // offset 0xC, size 0xC
    class xMemArea_tag DRAM; // offset 0x18, size 0xC
    class xMemArea_tag SRAM; // offset 0x24, size 0xC
};
// total size: 0x9C
class xMemHeap_tag {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int hard_base; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    signed short opp_heap[2]; // offset 0xC, size 0x4
    class xHeapState_tag state[8]; // offset 0x10, size 0x80
    unsigned short state_idx; // offset 0x90, size 0x2
    unsigned short max_blks; // offset 0x92, size 0x2
    class xMemBlock_tag * blk; // offset 0x94, size 0x4
    class xMemBlock_tag * lastblk; // offset 0x98, size 0x4
};
// total size: 0x8
class xMemBlock_tag {
    // Members
public:
    unsigned int addr; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
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

/*
    Compile unit: E:\SD2\Game\flat\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00125880 -> 0x001258E8
*/
// Range: 0x125880 -> 0x1258E8
void xMemPoolFree(class xMemPool * pool /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x125880 -> 0x1258E8
        void * curr; // r3
        void * * prev; // r2
        unsigned int next; // r7
        void * freeList; // r6
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001258F0 -> 0x00125984
*/
// Range: 0x1258F0 -> 0x125984
void * xMemPoolAlloc(class xMemPool * pool /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1258F0 -> 0x125984
        unsigned int flags; // r18
        unsigned int next; // r17
        void * retval; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00125990 -> 0x001259BC
*/
// Range: 0x125990 -> 0x1259BC
void xMemPoolSetup(class xMemPool * pool /* r2 */, void * buffer /* r2 */, unsigned int nextOffset /* r2 */, unsigned int flags /* r2 */, void (* initCB)(class xMemPool *, void *) /* r2 */, unsigned int size /* r2 */, unsigned int count /* r2 */, unsigned int numRealloc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x125990 -> 0x1259BC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001259C0 -> 0x00125A8C
*/
// Range: 0x1259C0 -> 0x125A8C
static void xMemPoolAddElements(class xMemPool * pool /* r22 */, void * buffer /* r23 */, unsigned int count /* r21 */) {
    /* anonymous block */ {
        // Range: 0x1259C0 -> 0x125A8C
        unsigned int size; // r19
        unsigned int next; // r18
        void (* initCB)(class xMemPool *, void *); // r17
        void * curr; // r2
        signed int i; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00125A90 -> 0x00125ABC
*/
// Range: 0x125A90 -> 0x125ABC
signed int xMemGetBase() {
    /* anonymous block */ {
        // Range: 0x125A90 -> 0x125ABC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00125AC0 -> 0x00125AC8
*/
// Range: 0x125AC0 -> 0x125AC8
void xMemRegisterBaseNotifyFunc(void (* func)() /* r2 */) {
    /* anonymous block */ {
        // Range: 0x125AC0 -> 0x125AC8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00125AD0 -> 0x00125B38
*/
// Range: 0x125AD0 -> 0x125B38
signed int xMemPopBase(signed int depth /* r2 */) {
    /* anonymous block */ {
        // Range: 0x125AD0 -> 0x125B38
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00125B40 -> 0x00125BDC
*/
// Range: 0x125B40 -> 0x125BDC
signed int xMemPushBase() {
    /* anonymous block */ {
        // Range: 0x125B40 -> 0x125BDC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00125BE0 -> 0x00125BE8
*/
// Range: 0x125BE0 -> 0x125BE8
void xMemPopTemp(void * addr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x125BE0 -> 0x125BE8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00125BF0 -> 0x00125BF8
*/
// Range: 0x125BF0 -> 0x125BF8
void * xMemPushTemp(unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x125BF0 -> 0x125BF8
        void * addr; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00125C00 -> 0x00125D18
*/
// Range: 0x125C00 -> 0x125D18
void * xMemAlloc(unsigned int heapID /* r2 */, unsigned int size /* r19 */) {
    /* anonymous block */ {
        // Range: 0x125C00 -> 0x125D18
        unsigned int total; // r2
        class xMemBlkInfo_tag info; // r29+0x50
        class xHeapState_tag * sp; // r18
        class xMemBlock_tag * hdr; // r17
        class xMemHeap_tag * heap; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00125D20 -> 0x00125E34
*/
// Range: 0x125D20 -> 0x125E34
void * xMemGrowAlloc(unsigned int heapID /* r2 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x125D20 -> 0x125E34
        void * memptr; // r16
        class xHeapState_tag * sp; // r3
        class xMemBlock_tag * hdr; // r2
        class xMemHeap_tag * heap; // r8
        unsigned int oldalignsize; // r9
        unsigned int align; // r9
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00125E40 -> 0x00125F4C
*/
// Range: 0x125E40 -> 0x125F4C
static unsigned int xMemGetBlockInfo(class xMemHeap_tag * heap /* r2 */, unsigned int size /* r2 */, class xMemBlkInfo_tag * info /* r2 */) {
    /* anonymous block */ {
        // Range: 0x125E40 -> 0x125F4C
        class xHeapState_tag * sp; // r10
        signed int post; // r9
        signed int block; // r8
        signed int pre; // r7
        signed int hdr; // r3
        unsigned int total; // r2
        unsigned int align; // r14
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00125F50 -> 0x00126044
*/
// Range: 0x125F50 -> 0x126044
void xMemInitHeap(class xMemHeap_tag * heap /* r16 */, unsigned int base /* r2 */, unsigned int size /* r2 */, unsigned int flags /* r2 */) {
    /* anonymous block */ {
        // Range: 0x125F50 -> 0x126044
        class xHeapState_tag * sp; // r2
        unsigned int align; // r9
        unsigned int old_base; // r8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00126050 -> 0x00126058
*/
// Range: 0x126050 -> 0x126058
void xMemExit() {
    /* anonymous block */ {
        // Range: 0x126050 -> 0x126058
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00126060 -> 0x00126100
*/
// Range: 0x126060 -> 0x126100
void xMemInit() {
    /* anonymous block */ {
        // Range: 0x126060 -> 0x126100
    }
}


