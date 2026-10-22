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
} tempStack[32]; // size: 0x100, address: 0x626DE0
static unsigned int tempCurrent; // size: 0x4, address: 0x611CB0
static unsigned int StackBase; // size: 0x4, address: 0x611CB4
static unsigned int StackSize; // size: 0x4, address: 0x611CB8
static class MemoryManagerMulti memoryManager; // size: 0x12C, address: 0x626EE0
static unsigned char sMemMgrEnableRenderWareMemoryHack; // size: 0x1, address: 0x611CBC
static // total size: 0x1C
struct /* @anon1 */ {} @unnamed@iMemMgr_cpp@::MemoryManagerMulti::__vtable; // size: 0x1C, address: 0x606390
class xMemHeap gxHeap[3]; // size: 0x324, address: 0x64D2F0
unsigned int gActiveHeap; // size: 0x4, address: 0x611E6C
class xMemInfo gMemInfo; // size: 0x24, address: 0x64D2C0
char _hiheap_size; // size: 0x1, address: 0x1923380
char _hiheap_start; // size: 0x1, address: 0x6BCC80
// total size: 0x1C
struct /* @anon2 */ {} xMemoryManagerGeneral::__vtable; // size: 0x1C, address: 0x60CF30
// total size: 0x1C
struct /* @anon3 */ {} xMemoryManager::__vtable; // size: 0x1C, address: 0x0
// total size: 0x1C
struct /* @anon0 */ {} xMemoryManagerFixed::__vtable; // size: 0x1C, address: 0x60CF10
char _stack; // size: 0x1, address: 0x1FF0000
char _heap_size; // size: 0x1, address: 0x10000
char _end; // size: 0x1, address: 0x1FE0000
char _stack_size; // size: 0x1, address: 0x10000
char _memtop; // size: 0x1, address: 0x2000000
char __data_start; // size: 0x1, address: 0x508780
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
// total size: 0x10
class FreeNode {
    // Members
public:
    class FreeNode * next; // offset 0x0, size 0x4
    class FreeNode * prev; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    unsigned int pad[1]; // offset 0xC, size 0x4
};
// total size: 0x1C
struct /* @anon0 */ {};
// total size: 0xC
class xMemBlock {
    // Members
public:
    unsigned int addr; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    signed int align; // offset 0x8, size 0x4
};
// total size: 0x8
class /* @class */ {
    // Members
public:
    void * data; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
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
class xMemArea {
    // Members
public:
    unsigned int addr; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
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
// total size: 0x34
class xMemoryManagerGeneral : public xMemoryManager {
    // Members
public:
    class FreeNode * freeStart; // offset 0x24, size 0x4
    class FreeNode * freeEnd; // offset 0x28, size 0x4
    enum Dir dir; // offset 0x2C, size 0x4
    enum Strategy strategy; // offset 0x30, size 0x4
};
// total size: 0x24
class xMemInfo {
    // Members
public:
    class xMemArea system; // offset 0x0, size 0xC
    class xMemArea stack; // offset 0xC, size 0xC
    class xMemArea DRAM; // offset 0x18, size 0xC
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
class xMemFreeLink {
    // Members
public:
    class xMemFreeLink * next; // offset 0x0, size 0x4
    void (* func)(void *); // offset 0x4, size 0x4
    void * param; // offset 0x8, size 0x4
};
// total size: 0x1C
struct /* @anon1 */ {};
// total size: 0x1C
struct /* @anon2 */ {};
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
// total size: 0x4
class FixedHeader {
    // Members
public:
    class FixedHeader * next; // offset 0x0, size 0x4
};
// total size: 0x1C
struct /* @anon3 */ {};
// total size: 0x30
class xMemoryManagerFixed : public xMemoryManager {
    // Members
public:
    class FixedHeader * freeList; // offset 0x24, size 0x4
    unsigned int elements; // offset 0x28, size 0x4
    unsigned int elementSize; // offset 0x2C, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00162430 -> 0x0016243C
*/
// Range: 0x162430 -> 0x16243C
void * iMemGetDMABuffer() {
    /* anonymous block */ {
        // Range: 0x162430 -> 0x16243C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00162440 -> 0x001624D8
*/
// Range: 0x162440 -> 0x1624D8
void iMemPopTemp(void * pointer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x162440 -> 0x1624D8
        signed int i; // r9
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001624E0 -> 0x00162654
*/
// Range: 0x1624E0 -> 0x162654
void * iMemPushTemp(unsigned int size /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1624E0 -> 0x162654
        class xMemHeap * heap; // r2
        unsigned char * ret; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00162660 -> 0x001626D0
*/
// Range: 0x162660 -> 0x1626D0
unsigned char iMemMgrCheckCollisionWithMallocHeap(void * mem /* r16 */, unsigned int size /* r18 */) {
    /* anonymous block */ {
        // Range: 0x162660 -> 0x1626D0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001626D0 -> 0x001626E4
*/
// Range: 0x1626D0 -> 0x1626E4
void * iMemMgrCalloc(unsigned int numObj /* r2 */, unsigned int sizeObj /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1626D0 -> 0x1626E4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001626F0 -> 0x00162700
*/
// Range: 0x1626F0 -> 0x162700
void iMemMgrFree(void * mem /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1626F0 -> 0x162700
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00162700 -> 0x0016271C
*/
// Range: 0x162700 -> 0x16271C
void * iMemMgrRealloc(void * mem /* r2 */, unsigned int newSize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x162700 -> 0x16271C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00162720 -> 0x00162764
*/
// Range: 0x162720 -> 0x162764
void * iMemMgrMalloc(unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x162720 -> 0x162764
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00162770 -> 0x00162778
*/
// Range: 0x162770 -> 0x162778
void iMemMgrEnableRenderWareMemoryHack(unsigned char hackEnabled /* r2 */) {
    /* anonymous block */ {
        // Range: 0x162770 -> 0x162778
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00162780 -> 0x00162974
*/
// Range: 0x162780 -> 0x162974
void iMemInit() {
    /* anonymous block */ {
        // Range: 0x162780 -> 0x162974
        unsigned int StackSize'105; // r2
        unsigned int MemTop; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00162980 -> 0x001629C4
*/
// Range: 0x162980 -> 0x1629C4
static void HandleOutOfMemory(unsigned int size /* r16 */, unsigned int options /* r2 */) {
    /* anonymous block */ {
        // Range: 0x162980 -> 0x1629C4
        char optional[256]; // r29+0x20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001629D0 -> 0x00162A80
*/
// Range: 0x1629D0 -> 0x162A80
// this: r2
static unsigned int MemoryManagerMulti::DoGetBlockSize(void * pointer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1629D0 -> 0x162A80
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00162A80 -> 0x00162B38
*/
// Range: 0x162A80 -> 0x162B38
// this: r2
static void MemoryManagerMulti::DoFree(void * pointer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x162A80 -> 0x162B38
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00162B40 -> 0x00162CC8
*/
// Range: 0x162B40 -> 0x162CC8
// this: r2
static void * MemoryManagerMulti::DoReallocate(void * pointer /* r2 */, unsigned int size /* r2 */, unsigned int options /* r2 */) {
    /* anonymous block */ {
        // Range: 0x162B40 -> 0x162CC8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00162CD0 -> 0x00162ED8
*/
// Range: 0x162CD0 -> 0x162ED8
// this: r16
static void * MemoryManagerMulti::DoAllocate(unsigned int size /* r18 */, unsigned int options /* r17 */) {
    /* anonymous block */ {
        // Range: 0x162CD0 -> 0x162ED8
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
    Code range: 0x00162EE0 -> 0x00163058
*/
// Range: 0x162EE0 -> 0x163058
// this: r21
static void MemoryManagerMulti::Init(void * start /* r20 */, unsigned int size /* r19 */, unsigned int dmaBufferSize /* r18 */, unsigned int resourceArenaSize /* r17 */, unsigned int byte4Count /* r16 */, unsigned int byte8Count /* r22 */, unsigned int byte32Count /* r23 */, unsigned int byte48Count /* r29+0x90 */, unsigned char debugging /* r29+0x98 */) {
    /* anonymous block */ {
        // Range: 0x162EE0 -> 0x163058
        unsigned char * startByte; // r2
    }
}


