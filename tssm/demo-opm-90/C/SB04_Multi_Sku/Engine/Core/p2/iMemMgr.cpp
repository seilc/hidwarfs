/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AECC0 -> 0x004AED58
*/
// Range: 0x4AECC0 -> 0x4AED58
void iMemPopTemp(void * pointer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4AECC0 -> 0x4AED58
        signed int i; // r9
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AED60 -> 0x004AEED4
*/
// Range: 0x4AED60 -> 0x4AEED4
void * iMemPushTemp(unsigned int size /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4AED60 -> 0x4AEED4
        class xMemHeap * heap; // r2
        unsigned char * ret; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AEEE0 -> 0x004AEF50
*/
// Range: 0x4AEEE0 -> 0x4AEF50
unsigned char iMemMgrCheckCollisionWithMallocHeap(void * mem /* r16 */, unsigned int size /* r18 */) {
    /* anonymous block */ {
        // Range: 0x4AEEE0 -> 0x4AEF50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AEF50 -> 0x004AEF64
*/
// Range: 0x4AEF50 -> 0x4AEF64
void * iMemMgrCalloc(unsigned int numObj /* r2 */, unsigned int sizeObj /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4AEF50 -> 0x4AEF64
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AEF70 -> 0x004AEF80
*/
// Range: 0x4AEF70 -> 0x4AEF80
void iMemMgrFree(void * mem /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4AEF70 -> 0x4AEF80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AEF80 -> 0x004AEF9C
*/
// Range: 0x4AEF80 -> 0x4AEF9C
void * iMemMgrRealloc(void * mem /* r2 */, unsigned int newSize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4AEF80 -> 0x4AEF9C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AEFA0 -> 0x004AEFE4
*/
// Range: 0x4AEFA0 -> 0x4AEFE4
void * iMemMgrMalloc(unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4AEFA0 -> 0x4AEFE4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AEFF0 -> 0x004AEFF8
*/
// Range: 0x4AEFF0 -> 0x4AEFF8
void iMemMgrEnableRenderWareMemoryHack(unsigned char hackEnabled /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4AEFF0 -> 0x4AEFF8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AF000 -> 0x004AF1F8
*/
// Range: 0x4AF000 -> 0x4AF1F8
void iMemInit() {
    /* anonymous block */ {
        // Range: 0x4AF000 -> 0x4AF1F8
        unsigned int StackSize'106; // r2
        unsigned int MemTop; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AF200 -> 0x004AF244
*/
// Range: 0x4AF200 -> 0x4AF244
static void HandleOutOfMemory(unsigned int size /* r16 */, unsigned int options /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4AF200 -> 0x4AF244
        char optional[256]; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AF250 -> 0x004AF300
*/
// Range: 0x4AF250 -> 0x4AF300
// this: r2
static unsigned int MemoryManagerMulti::DoGetBlockSize(void * pointer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4AF250 -> 0x4AF300
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AF300 -> 0x004AF3B8
*/
// Range: 0x4AF300 -> 0x4AF3B8
// this: r2
static void MemoryManagerMulti::DoFree(void * pointer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4AF300 -> 0x4AF3B8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AF3C0 -> 0x004AF548
*/
// Range: 0x4AF3C0 -> 0x4AF548
// this: r2
static void * MemoryManagerMulti::DoReallocate(void * pointer /* r2 */, unsigned int size /* r2 */, unsigned int options /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4AF3C0 -> 0x4AF548
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AF550 -> 0x004AF758
*/
// Range: 0x4AF550 -> 0x4AF758
// this: r16
static void * MemoryManagerMulti::DoAllocate(unsigned int size /* r18 */, unsigned int options /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4AF550 -> 0x4AF758
        void * test; // r2
        void * test; // r2
        void * test; // r2
        void * test; // r2
        void * raw; // r16
        char buffer[128]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004AF760 -> 0x004AF8D8
*/
// Range: 0x4AF760 -> 0x4AF8D8
// this: r21
static void MemoryManagerMulti::Init(void * start /* r20 */, unsigned int size /* r19 */, unsigned int dmaBufferSize /* r18 */, unsigned int resourceArenaSize /* r17 */, unsigned int byte4Count /* r16 */, unsigned int byte8Count /* r22 */, unsigned int byte32Count /* r23 */, unsigned int byte48Count /* r29+0x90 */, unsigned char debugging /* r29+0x98 */) {
    /* anonymous block */ {
        // Range: 0x4AF760 -> 0x4AF8D8
        unsigned char * startByte; // r2
    }
}


