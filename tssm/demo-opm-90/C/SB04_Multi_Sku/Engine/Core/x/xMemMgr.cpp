/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040BDD0 -> 0x0040BE00
*/
// Range: 0x40BDD0 -> 0x40BE00
void xMemScratchPop() {
    /* anonymous block */ {
        // Range: 0x40BDD0 -> 0x40BE00
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040BE00 -> 0x0040BF0C
*/
// Range: 0x40BE00 -> 0x40BF0C
void * xMemScratchPush(unsigned int size /* r18 */, unsigned int align /* r17 */) {
    /* anonymous block */ {
        // Range: 0x40BE00 -> 0x40BF0C
        unsigned int align_mask; // r2
        unsigned char * mem; // r2
        unsigned int used; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040BF10 -> 0x0040BF88
*/
// Range: 0x40BF10 -> 0x40BF88
void xMemPoolFree(class xMemPool * pool /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40BF10 -> 0x40BF88
        void * freeList; // r2
        unsigned int next; // r2
        void * * prev; // r9
        void * curr; // r8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040BF90 -> 0x0040C030
*/
// Range: 0x40BF90 -> 0x40C030
void * xMemPoolAlloc(class xMemPool * pool /* r16 */) {
    /* anonymous block */ {
        // Range: 0x40BF90 -> 0x40C030
        void * retval; // r2
        unsigned int next; // r2
        unsigned int flags; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040C030 -> 0x0040C05C
*/
// Range: 0x40C030 -> 0x40C05C
void xMemPoolSetup(class xMemPool * pool /* r2 */, void * buffer /* r2 */, unsigned int nextOffset /* r2 */, unsigned int flags /* r2 */, void (* initCB)(class xMemPool *, void *) /* r2 */, unsigned int size /* r2 */, unsigned int count /* r2 */, unsigned int numRealloc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40C030 -> 0x40C05C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040C060 -> 0x0040C138
*/
// Range: 0x40C060 -> 0x40C138
static void xMemPoolAddElements(class xMemPool * pool /* r21 */, void * buffer /* r30 */, unsigned int count /* r23 */) {
    /* anonymous block */ {
        // Range: 0x40C060 -> 0x40C138
        signed int i; // r20
        void * curr; // r2
        void (* initCB)(class xMemPool *, void *); // r2
        unsigned int next; // r2
        unsigned int size; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040C140 -> 0x0040C16C
*/
// Range: 0x40C140 -> 0x40C16C
signed int xMemGetBase() {
    /* anonymous block */ {
        // Range: 0x40C140 -> 0x40C16C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040C170 -> 0x0040C178
*/
// Range: 0x40C170 -> 0x40C178
void xMemRegisterBaseNotifyFunc(void (* func)() /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40C170 -> 0x40C178
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040C180 -> 0x0040C18C
*/
// Range: 0x40C180 -> 0x40C18C
signed int xMemPopBase(signed int depth /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40C180 -> 0x40C18C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040C190 -> 0x0040C270
*/
// Range: 0x40C190 -> 0x40C270
signed int xMemPopBase(unsigned int heapID /* r2 */, signed int depth /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40C190 -> 0x40C270
        class xMemHeap * heap; // r2
        signed int new_idx; // r2
        signed int popped; // r20
        class xMemFreeLink * list; // r19
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040C270 -> 0x0040C314
*/
// Range: 0x40C270 -> 0x40C314
signed int xMemPushBase() {
    /* anonymous block */ {
        // Range: 0x40C270 -> 0x40C314
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040C320 -> 0x0040C4A4
*/
// Range: 0x40C320 -> 0x40C4A4
void * xMemAlloc(unsigned int heapID /* r2 */, unsigned int size /* r21 */, signed int align /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40C320 -> 0x40C4A4
        class xMemHeap * heap; // r20
        class xMemBlock * hdr; // r2
        class xHeapState * sp; // r19
        class xMemBlkInfo info; // r29+0x70
        unsigned int total; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040C4B0 -> 0x0040C5A0
*/
// Range: 0x40C4B0 -> 0x40C5A0
void * xMemGrowAlloc(unsigned int heapID /* r2 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40C4B0 -> 0x40C5A0
        class xMemHeap * heap; // r2
        class xMemBlock * hdr; // r2
        class xHeapState * sp; // r2
        void * memptr; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040C5A0 -> 0x0040C6C4
*/
// Range: 0x40C5A0 -> 0x40C6C4
static unsigned int xMemGetBlockInfo(class xMemHeap * heap /* r2 */, unsigned int size /* r2 */, signed int align /* r2 */, class xMemBlkInfo * info /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40C5A0 -> 0x40C6C4
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
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040C6D0 -> 0x0040C7E4
*/
// Range: 0x40C6D0 -> 0x40C7E4
void xMemInitHeap(class xMemHeap * heap /* r16 */, unsigned int base /* r2 */, unsigned int size /* r2 */, unsigned int flags /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40C6D0 -> 0x40C7E4
        unsigned int old_base; // r9
        signed int align; // r2
        class xHeapState * sp; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040C7F0 -> 0x0040C8B0
*/
// Range: 0x40C7F0 -> 0x40C8B0
void xMemInit() {
    /* anonymous block */ {
        // Range: 0x40C7F0 -> 0x40C8B0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040C8B0 -> 0x0040C8B8
*/
// Range: 0x40C8B0 -> 0x40C8B8
void xMemDebug_SoakLog() {
    /* anonymous block */ {
        // Range: 0x40C8B0 -> 0x40C8B8
    }
}


