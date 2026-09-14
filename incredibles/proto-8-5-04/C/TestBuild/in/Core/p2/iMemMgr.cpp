/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static // total size: 0x8
class /* @class */ {
    // Members
public:
    void * data; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
} tempStack[32]; // size: 0x100, address: 0x61D9E0
static unsigned int tempCurrent; // size: 0x4, address: 0x6088B0
static unsigned int StackBase; // size: 0x4, address: 0x6088B4
static unsigned int StackSize; // size: 0x4, address: 0x6088B8
static class MemoryManagerMulti memoryManager; // size: 0x12C, address: 0x61DAE0
static unsigned char sMemMgrEnableRenderWareMemoryHack; // size: 0x1, address: 0x6088BC
static // total size: 0x1C
struct /* @anon0 */ {} @unnamed@iMemMgr_cpp@::MemoryManagerMulti::__vtable; // size: 0x1C, address: 0x5FD090
class xMemHeap_tag gxHeap[3]; // size: 0x294, address: 0x643ED0
unsigned int gActiveHeap; // size: 0x4, address: 0x608A5C
class xMemInfo_tag gMemInfo; // size: 0x24, address: 0x643EA0
char _hiheap_size; // size: 0x1, address: 0x191A680
char _hiheap_start; // size: 0x1, address: 0x6C5980
// total size: 0x1C
struct /* @anon1 */ {} xMemoryManagerGeneral::__vtable; // size: 0x1C, address: 0x603AA0
// total size: 0x1C
struct /* @anon2 */ {} xMemoryManager::__vtable; // size: 0x1C, address: 0x0
// total size: 0x1C
struct /* @anon3 */ {} xMemoryManagerFixed::__vtable; // size: 0x1C, address: 0x603A80
char _stack; // size: 0x1, address: 0x1FF0000
char _heap_size; // size: 0x1, address: 0x10000
char _end; // size: 0x1, address: 0x1FE0000
char _stack_size; // size: 0x1, address: 0x10000
char _memtop; // size: 0x1, address: 0x2000000
char __data_start; // size: 0x1, address: 0x500080
// total size: 0x30
class DebugAllocationHeader {
    // Members
public:
    char * file; // offset 0x0, size 0x4
    signed int line; // offset 0x4, size 0x4
    char * function; // offset 0x8, size 0x4
    unsigned int size; // offset 0xC, size 0x4
    class DebugAllocationHeader * prev; // offset 0x10, size 0x4
    class DebugAllocationHeader * next; // offset 0x14, size 0x4
    class xMemoryManager * manager; // offset 0x18, size 0x4
    unsigned int magic[5]; // offset 0x1C, size 0x14
};
// total size: 0xC
class xMemBlock_tag {
    // Members
public:
    unsigned int addr; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    signed int align; // offset 0x8, size 0x4
};
// total size: 0x24
class xMemoryManager {
    // Members
public:
    void * arenaStart; // offset 0x4, size 0x4
    void * arenaEnd; // offset 0x8, size 0x4
    unsigned int size; // offset 0xC, size 0x4
    char * lastFile; // offset 0x10, size 0x4
    char * lastFunction; // offset 0x14, size 0x4
    signed int lastLine; // offset 0x18, size 0x4
    unsigned int debugDataSize; // offset 0x1C, size 0x4
    class DebugAllocationHeader * activeList; // offset 0x20, size 0x4
};
// total size: 0x10
class FreeNode {
    // Members
public:
    class FreeNode * next; // offset 0x0, size 0x4
    class FreeNode * prev; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    unsigned int pad[1]; // offset 0xC, size 0x4
};
// total size: 0x12C
class MemoryManagerMulti : public xMemoryManager {
    // Members
public:
    void * dmaBuffer; // offset 0x24, size 0x4
    unsigned int dmaBufferSize; // offset 0x28, size 0x4
    void * resourceArena; // offset 0x2C, size 0x4
    unsigned char resourceArenaUsed; // offset 0x30, size 0x1
    unsigned int resourceArenaSize; // offset 0x34, size 0x4
    class xMemoryManagerFixed fixed4; // offset 0x38, size 0x30
    class xMemoryManagerFixed fixed8; // offset 0x68, size 0x30
    class xMemoryManagerFixed fixed32; // offset 0x98, size 0x30
    class xMemoryManagerFixed fixed48; // offset 0xC8, size 0x30
    class xMemoryManagerGeneral heap; // offset 0xF8, size 0x34
};
// total size: 0x34
class xMemoryManagerGeneral : public xMemoryManager {
    // Members
public:
    class FreeNode * freeStart; // offset 0x24, size 0x4
    class FreeNode * freeEnd; // offset 0x28, size 0x4
    enum Dir dir; // offset 0x2C, size 0x4
    enum Strategy strategy; // offset 0x30, size 0x4
};
enum Dir {
    Up = 0,
    Down = 1,
};
enum Strategy {
    FirstFit = 0,
    BestFit = 1,
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
// total size: 0x1C
struct /* @anon0 */ {};
// total size: 0x1C
struct /* @anon1 */ {};
// total size: 0x4
class FixedHeader {
    // Members
public:
    class FixedHeader * next; // offset 0x0, size 0x4
};
// total size: 0x1C
struct /* @anon2 */ {};
// total size: 0x30
class xMemoryManagerFixed : public xMemoryManager {
    // Members
public:
    class FixedHeader * freeList; // offset 0x24, size 0x4
    unsigned int elements; // offset 0x28, size 0x4
    unsigned int elementSize; // offset 0x2C, size 0x4
};
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
// total size: 0x1C
struct /* @anon3 */ {};
// total size: 0x8
class /* @class */ {
    // Members
public:
    void * data; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001620A0 -> 0x001620AC
*/
// Range: 0x1620A0 -> 0x1620AC
void * iMemGetDMABuffer() {
    /* anonymous block */ {
        // Range: 0x1620A0 -> 0x1620AC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001620B0 -> 0x00162148
*/
// Range: 0x1620B0 -> 0x162148
void iMemPopTemp(void * pointer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1620B0 -> 0x162148
        signed int i; // r9
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00162150 -> 0x001622BC
*/
// Range: 0x162150 -> 0x1622BC
void * iMemPushTemp(unsigned int size /* r16 */) {
    /* anonymous block */ {
        // Range: 0x162150 -> 0x1622BC
        class xMemHeap_tag * heap; // r2
        unsigned char * ret; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001622C0 -> 0x00162330
*/
// Range: 0x1622C0 -> 0x162330
unsigned char iMemMgrCheckCollisionWithMallocHeap(void * mem /* r16 */, unsigned int size /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1622C0 -> 0x162330
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00162330 -> 0x00162344
*/
// Range: 0x162330 -> 0x162344
void * iMemMgrCalloc(unsigned int numObj /* r2 */, unsigned int sizeObj /* r2 */) {
    /* anonymous block */ {
        // Range: 0x162330 -> 0x162344
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00162350 -> 0x00162360
*/
// Range: 0x162350 -> 0x162360
void iMemMgrFree(void * mem /* r2 */) {
    /* anonymous block */ {
        // Range: 0x162350 -> 0x162360
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00162360 -> 0x0016237C
*/
// Range: 0x162360 -> 0x16237C
void * iMemMgrRealloc(void * mem /* r2 */, unsigned int newSize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x162360 -> 0x16237C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00162380 -> 0x001623C4
*/
// Range: 0x162380 -> 0x1623C4
void * iMemMgrMalloc(unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x162380 -> 0x1623C4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001623D0 -> 0x001623D8
*/
// Range: 0x1623D0 -> 0x1623D8
void iMemMgrEnableRenderWareMemoryHack(unsigned char hackEnabled /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1623D0 -> 0x1623D8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001623E0 -> 0x001625D4
*/
// Range: 0x1623E0 -> 0x1625D4
void iMemInit() {
    /* anonymous block */ {
        // Range: 0x1623E0 -> 0x1625D4
        unsigned int StackSize'105; // r2
        unsigned int MemTop; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001625E0 -> 0x00162624
*/
// Range: 0x1625E0 -> 0x162624
static void HandleOutOfMemory(unsigned int size /* r16 */, unsigned int options /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1625E0 -> 0x162624
        char optional[256]; // r29+0x20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00162630 -> 0x001626E0
*/
// Range: 0x162630 -> 0x1626E0
// this: r2
static unsigned int MemoryManagerMulti::DoGetBlockSize(void * pointer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x162630 -> 0x1626E0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001626E0 -> 0x00162798
*/
// Range: 0x1626E0 -> 0x162798
// this: r2
static void MemoryManagerMulti::DoFree(void * pointer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1626E0 -> 0x162798
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001627A0 -> 0x00162928
*/
// Range: 0x1627A0 -> 0x162928
// this: r2
static void * MemoryManagerMulti::DoReallocate(void * pointer /* r2 */, unsigned int size /* r2 */, unsigned int options /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1627A0 -> 0x162928
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00162930 -> 0x00162B30
*/
// Range: 0x162930 -> 0x162B30
// this: r16
static void * MemoryManagerMulti::DoAllocate(unsigned int size /* r18 */, unsigned int options /* r17 */) {
    /* anonymous block */ {
        // Range: 0x162930 -> 0x162B30
        void * test; // r2
        void * test; // r2
        void * test; // r2
        void * test; // r2
        void * raw; // r16
        char buffer[128]; // r29+0x40
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00162B30 -> 0x00162CA8
*/
// Range: 0x162B30 -> 0x162CA8
// this: r21
static void MemoryManagerMulti::Init(void * start /* r20 */, unsigned int size /* r19 */, unsigned int dmaBufferSize /* r18 */, unsigned int resourceArenaSize /* r17 */, unsigned int byte4Count /* r16 */, unsigned int byte8Count /* r22 */, unsigned int byte32Count /* r23 */, unsigned int byte48Count /* r29+0x90 */, unsigned char debugging /* r29+0x98 */) {
    /* anonymous block */ {
        // Range: 0x162B30 -> 0x162CA8
        unsigned char * startByte; // r2
    }
}


