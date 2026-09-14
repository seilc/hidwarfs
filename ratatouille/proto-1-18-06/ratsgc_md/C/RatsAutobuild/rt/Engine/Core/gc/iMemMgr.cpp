/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\gc\iMemMgr.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800802AC -> 0x80081098
*/
// total size: 0x8
struct /* @class$662iMemMgr_cpp */ {
    // Members
    void * data; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
static // total size: 0x8
struct /* @class$662iMemMgr_cpp */ {
    // Members
    void * data; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
} tempStack[32]; // size: 0x100, address: 0x8033B620
static unsigned int tempCurrent; // size: 0x4, address: 0x803C1698
static unsigned int StackBase; // size: 0x4, address: 0x803C169C
static unsigned int StackSize; // size: 0x4, address: 0x803C16A0
// Range: 0x800802AC -> 0x80080310
static void iMemClearStack() {
    // Local variables
    unsigned int sp; // r0
    int ei; // r30

    // References
    // -> static unsigned int StackBase;
}

// Range: 0x80080310 -> 0x80080318
unsigned int GetStackPointer() {
    // Local variables
    unsigned int result; // r1
}

// total size: 0x124
class MemoryManagerMulti : public xMemoryManager {
    // Functions
    static void Init(void * start, unsigned int size, unsigned int resourceArenaSize, unsigned int byte4Count, unsigned int byte8Count, unsigned int byte32Count, unsigned int byte48Count, unsigned char debugging);

    static void * DoAllocate(unsigned int size, unsigned int options);

    static void * DoReallocate(void * pointer, unsigned int size, unsigned int options);

    static void DoFree(void * pointer);

    static unsigned int DoGetBlockSize(void * pointer) const;

    static int GetMinFreeSpace() const;

    static void * GetHeapArenaEnd() const;

    static void * GetHeapArenaStart() const;

    static MemoryManagerMulti();

    static void * GetHeapCurrentEnd() const;

    // Members
    void * resourceArena; // offset 0x24, size 0x4
    unsigned char resourceArenaUsed; // offset 0x28, size 0x1
    unsigned int resourceArenaSize; // offset 0x2C, size 0x4
    class xMemoryManagerFixed fixed4; // offset 0x30, size 0x30
    class xMemoryManagerFixed fixed8; // offset 0x60, size 0x30
    class xMemoryManagerFixed fixed32; // offset 0x90, size 0x30
    class xMemoryManagerFixed fixed48; // offset 0xC0, size 0x30
    class xMemoryManagerGeneral heap; // offset 0xF0, size 0x34
};
// Range: 0x80080318 -> 0x8008049C
// this: r27
static void MemoryManagerMulti::Init(void * start /* r28 */, unsigned int size /* r29 */, unsigned int resourceArenaSize /* r25 */, unsigned int byte4Count /* r23 */, unsigned int byte8Count /* r24 */, unsigned int byte32Count /* r30 */, unsigned int byte48Count /* r31 */, unsigned char debugging /* r6 */) {
    // Local variables
    unsigned char * startByte; // r25
}

// total size: 0x20
struct DebugAllocationHeader {
    // Static members
    static unsigned int MAGIC; // size: 0x4
    static unsigned int NUM_MAGIC; // size: 0x4

    // Members
    const char * file; // offset 0x0, size 0x4
    int line; // offset 0x4, size 0x4
    const char * function; // offset 0x8, size 0x4
    unsigned int size; // offset 0xC, size 0x4
    struct DebugAllocationHeader * prev; // offset 0x10, size 0x4
    struct DebugAllocationHeader * next; // offset 0x14, size 0x4
    class xMemoryManager * manager; // offset 0x18, size 0x4
    unsigned int magic[1]; // offset 0x1C, size 0x4
};
// total size: 0x24
class xMemoryManager {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    void * arenaStart; // offset 0x4, size 0x4
    void * arenaEnd; // offset 0x8, size 0x4
    unsigned int size; // offset 0xC, size 0x4
    const char * lastFile; // offset 0x10, size 0x4
    const char * lastFunction; // offset 0x14, size 0x4
    int lastLine; // offset 0x18, size 0x4
    unsigned int debugDataSize; // offset 0x1C, size 0x4
    struct DebugAllocationHeader * activeList; // offset 0x20, size 0x4
};
// Range: 0x8008049C -> 0x80080670
// this: r31
static void * MemoryManagerMulti::DoAllocate(unsigned int size /* r29 */, unsigned int options /* r30 */) {
    // Local variables
    void * test; // r0
    void * test; // r0
    void * test; // r0
    void * test; // r0
    void * raw; // r31
    char buffer[128]; // r1+0x8
}

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
unsigned int gActiveHeap; // size: 0x4, address: 0x803C1074
// Range: 0x80080670 -> 0x800806DC
static void * GetHeapTop() {
    // Local variables
    struct xMemHeap * heap; // r4
    struct xHeapState * sp; // r0

    // References
    // -> static unsigned int tempCurrent;
    // -> static // total size: 0x8
struct /* @class$662iMemMgr_cpp */ {
    // Members
    void * data; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
} tempStack[32];
    // -> unsigned int gActiveHeap;
    // -> struct xMemHeap gxHeap[2];
}

// total size: 0x4
struct FixedHeader {
    // Members
    struct FixedHeader * next; // offset 0x0, size 0x4
};
enum UseAbsoluteSizeType {
    UseAbsoluteSize = 0,
};
// total size: 0x30
class xMemoryManagerFixed : public xMemoryManager {
    // Members
    struct FixedHeader * freeList; // offset 0x24, size 0x4
    unsigned int elements; // offset 0x28, size 0x4
    unsigned int elementSize; // offset 0x2C, size 0x4
};
// Range: 0x800806DC -> 0x8008082C
// this: r28
static void * MemoryManagerMulti::DoReallocate(void * pointer /* r29 */, unsigned int size /* r30 */, unsigned int options /* r31 */) {}

// Range: 0x8008082C -> 0x80080900
// this: r30
static void MemoryManagerMulti::DoFree(void * pointer /* r31 */) {}

// Range: 0x80080900 -> 0x800809D0
// this: r30
static unsigned int MemoryManagerMulti::DoGetBlockSize(void * pointer /* r31 */) const {}

// Range: 0x800809D0 -> 0x80080A24
// this: r3
static int MemoryManagerMulti::GetMinFreeSpace() const {
    // Local variables
    struct xMemHeap * hp; // r31
    struct xHeapState * sp; // r30

    // References
    // -> unsigned int gActiveHeap;
    // -> struct xMemHeap gxHeap[2];
}

// Range: 0x80080A24 -> 0x80080A7C
static void MemoryManagerMulti::HandleOutOfMemory(unsigned int size /* r31 */, unsigned int options /* r0 */) {
    // Local variables
    char optional[256]; // r1+0x8
}

static class MemoryManagerMulti memoryManager; // size: 0x124, address: 0x8033B720
static unsigned char memInited; // size: 0x1, address: 0x803C16A4
int the_heap; // size: 0x4, address: 0x803C16A8
void * hiheap_start; // size: 0x4, address: 0x803C16AC
void * hiheap_end; // size: 0x4, address: 0x803C16B0
unsigned int hiheap_size; // size: 0x4, address: 0x803C16B4
char _stack_end[]; // size: 0x0, address: 0x803CB224
char _stack_addr[]; // size: 0x0, address: 0x803D3228
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
// Range: 0x80080A7C -> 0x80080C10
void iMemInit() {
    // Local variables
    void * rhs; // r0
    void * heap_end; // r29
    unsigned int HeapBase; // r0
    unsigned int HeapSize; // r28

    // References
    // -> static unsigned char memInited;
    // -> struct xMemInfo gMemInfo;
    // -> char _stack_addr[];
    // -> static unsigned int StackSize;
    // -> char _stack_end[];
    // -> static unsigned int StackBase;
    // -> static class MemoryManagerMulti memoryManager;
    // -> unsigned int hiheap_size;
    // -> void * hiheap_start;
    // -> void * hiheap_end;
    // -> int the_heap;
    // -> static unsigned int tempCurrent;
}

// Range: 0x80080C10 -> 0x80080C34
// this: r3
static void * MemoryManagerMulti::GetHeapArenaEnd() const {}

// Range: 0x80080C34 -> 0x80080C58
// this: r3
static void * MemoryManagerMulti::GetHeapArenaStart() const {}

static // total size: 0x1C
struct {} @unnamed@iMemMgr_cpp@::MemoryManagerMulti::__vtable; // size: 0x1C, address: 0x803BDB08
// Range: 0x80080C58 -> 0x80080CB8
// this: r31
static MemoryManagerMulti::MemoryManagerMulti() {
    // References
    // -> static struct [anonymous] @unnamed@iMemMgr_cpp@::MemoryManagerMulti::__vtable;
}

// total size: 0x1C
struct {} xMemoryManagerGeneral::__vtable; // size: 0x1C, address: 0x803BE6F8
// total size: 0x10
struct FreeNode {
    // Members
    struct FreeNode * next; // offset 0x0, size 0x4
    struct FreeNode * prev; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    unsigned int pad[1]; // offset 0xC, size 0x4
};
enum Dir {
    Up = 0,
    Down = 1,
};
enum Strategy {
    FirstFit = 0,
    BestFit = 1,
};
// total size: 0x10
struct AllocatedNode {
    // Members
    unsigned int size; // offset 0x0, size 0x4
    unsigned int pad[3]; // offset 0x4, size 0xC
};
// total size: 0x34
class xMemoryManagerGeneral : public xMemoryManager {
    // Members
    struct FreeNode * freeStart; // offset 0x24, size 0x4
    struct FreeNode * freeEnd; // offset 0x28, size 0x4
    enum Dir dir; // offset 0x2C, size 0x4
    enum Strategy strategy; // offset 0x30, size 0x4
};
// total size: 0x1C
struct {} xMemoryManagerFixed::__vtable; // size: 0x1C, address: 0x803BE6D8
// total size: 0x1C
struct {} xMemoryManager::__vtable; // size: 0x1C, address: 0x803BE6B8
// Range: 0x80080CB8 -> 0x80080CF0
void iMemExit() {
    // References
    // -> struct xMemInfo gMemInfo;
}

static unsigned char sMemMgrEnableRenderWareMemoryHack; // size: 0x1, address: 0x803C16B8
// Range: 0x80080CF0 -> 0x80080CF8
void iMemMgrEnableRenderWareMemoryHack(unsigned char hackEnabled /* r0 */) {
    // References
    // -> static unsigned char sMemMgrEnableRenderWareMemoryHack;
}

// Range: 0x80080CF8 -> 0x80080D58
void * iMemMgrMalloc(unsigned long size /* r3 */) {
    // Local variables
    void * ret; // r0

    // References
    // -> static class MemoryManagerMulti memoryManager;
    // -> static unsigned char sMemMgrEnableRenderWareMemoryHack;
}

// Range: 0x80080D58 -> 0x80080DA0
void * iMemMgrRealloc(void * mem /* r3 */, unsigned long newSize /* r5 */) {
    // Local variables
    void * ret; // r0

    // References
    // -> static class MemoryManagerMulti memoryManager;
}

// Range: 0x80080DA0 -> 0x80080DCC
void iMemMgrFree(void * mem /* r4 */) {
    // References
    // -> static class MemoryManagerMulti memoryManager;
}

// Range: 0x80080DCC -> 0x80080DFC
void * iMemMgrCalloc(unsigned long numObj /* r3 */, unsigned long sizeObj /* r4 */) {
    // References
    // -> static class MemoryManagerMulti memoryManager;
}

// Range: 0x80080DFC -> 0x80080E6C
unsigned char iMemMgrCheckCollisionWithMallocHeap(void * mem /* r28 */, unsigned int size /* r29 */) {
    // References
    // -> static class MemoryManagerMulti memoryManager;
}

// Range: 0x80080E6C -> 0x80080E90
// this: r3
static void * MemoryManagerMulti::GetHeapCurrentEnd() const {}

// Range: 0x80080E90 -> 0x80080FBC
void * iMemPushTemp(unsigned int size /* r31 */) {
    // Local variables
    struct xMemHeap * heap; // r5
    void * end; // r0

    // References
    // -> static unsigned int tempCurrent;
    // -> static // total size: 0x8
struct /* @class$662iMemMgr_cpp */ {
    // Members
    void * data; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
} tempStack[32];
    // -> static class MemoryManagerMulti memoryManager;
    // -> unsigned int gActiveHeap;
    // -> struct xMemHeap gxHeap[2];
}

// Range: 0x80080FBC -> 0x80081048
void iMemPopTemp(void * pointer /* r0 */) {
    // Local variables
    int i; // r10

    // References
    // -> static unsigned int tempCurrent;
    // -> static // total size: 0x8
struct /* @class$662iMemMgr_cpp */ {
    // Members
    void * data; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
} tempStack[32];
}

// Range: 0x80081048 -> 0x80081070
int iMemMgrGetMinFreeSpace() {
    // References
    // -> static class MemoryManagerMulti memoryManager;
}


