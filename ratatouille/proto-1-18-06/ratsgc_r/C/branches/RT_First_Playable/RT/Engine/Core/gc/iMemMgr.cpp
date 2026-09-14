/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\gc\iMemMgr.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800DFB84 -> 0x800E1EB8
*/
// total size: 0x8
struct /* @class$941iMemMgr_cpp */ {
    // Members
    void * data; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
static // total size: 0x8
struct /* @class$941iMemMgr_cpp */ {
    // Members
    void * data; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
} tempStack[32]; // size: 0x100, address: 0x80B6D790
static unsigned int tempCurrent; // size: 0x4, address: 0x80C07950
static unsigned int tempAllocationCount; // size: 0x4, address: 0x80C07954
static char __FUNCTION__[11]; // size: 0xB, address: 0x80BFF1F8
static unsigned int StackBase; // size: 0x4, address: 0x80C07958
static unsigned int StackSize; // size: 0x4, address: 0x80C0795C
static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFF204
// Range: 0x800DFB84 -> 0x800DFC98
static void iMemClearStack() {
    // Local variables
    unsigned int sp; // r0
    int ei; // r30

    // References
    // -> static unsigned int StackBase;
    // -> static char __FUNCTION__[15];
    // -> static unsigned int StackSize;
}

// Range: 0x800DFC98 -> 0x800DFCA0
unsigned int GetStackPointer() {
    // Local variables
    unsigned int result; // r1
}

// total size: 0x1DC
class MemoryManagerMulti : public xMemoryManager {
    // Functions
    static void Init(void * start, unsigned int size, unsigned int resourceArenaSize, unsigned int byte4Count, unsigned int byte8Count, unsigned int byte32Count, unsigned int byte48Count, unsigned char debugging);

    static void * DoAllocate(unsigned int size, unsigned int options);

    static void * DoReallocate(void * pointer, unsigned int size, unsigned int options);

    static void DoFree(void * pointer);

    static unsigned int DoGetBlockSize(void * pointer) const;

    static void xPrintMetrics() const;

    static void PrintMetrics() const;

    static int GetMinFreeSpace() const;

    static void * GetHeapArenaEnd() const;

    static void * GetHeapArenaStart() const;

    static MemoryManagerMulti();

    static void * GetHeapCurrentEnd() const;

    // Members
    void * resourceArena; // offset 0x34, size 0x4
    unsigned char resourceArenaUsed; // offset 0x38, size 0x1
    unsigned int resourceArenaSize; // offset 0x3C, size 0x4
    class xMemoryManagerFixed fixed4; // offset 0x40, size 0x48
    class xMemoryManagerFixed fixed8; // offset 0x88, size 0x48
    class xMemoryManagerFixed fixed32; // offset 0xD0, size 0x48
    class xMemoryManagerFixed fixed48; // offset 0x118, size 0x48
    class xMemoryManagerGeneral heap; // offset 0x160, size 0x6C
    unsigned int fixed4Warn; // offset 0x1CC, size 0x4
    unsigned int fixed8Warn; // offset 0x1D0, size 0x4
    unsigned int fixed32Warn; // offset 0x1D4, size 0x4
    unsigned int fixed48Warn; // offset 0x1D8, size 0x4
};
// Range: 0x800DFCA0 -> 0x800DFE38
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
// total size: 0x34
class xMemoryManager {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
private:
    void * arenaStart; // offset 0x4, size 0x4
    void * arenaEnd; // offset 0x8, size 0x4
    unsigned int size; // offset 0xC, size 0x4
    unsigned int callsToAllocate; // offset 0x10, size 0x4
    unsigned int callsToReallocate; // offset 0x14, size 0x4
    unsigned int callsToFree; // offset 0x18, size 0x4
    const char * lastFile; // offset 0x1C, size 0x4
    const char * lastFunction; // offset 0x20, size 0x4
    int lastLine; // offset 0x24, size 0x4
    unsigned int debugDataSize; // offset 0x28, size 0x4
    struct DebugAllocationHeader * activeList; // offset 0x2C, size 0x4
    unsigned int debugOverhead; // offset 0x30, size 0x4
};
static char __FUNCTION__[11]; // size: 0xB, address: 0x80BFF214
// Range: 0x800DFE38 -> 0x800E0358
// this: r29
static void * MemoryManagerMulti::DoAllocate(unsigned int size /* r30 */, unsigned int options /* r31 */) {
    // Local variables
    unsigned char warned; // r28
    void * test; // r28
    void * test; // r27
    void * test; // r27
    void * test; // r27
    unsigned int oldSize; // r27
    void * raw; // r28
    char buffer[128]; // r1+0x8

    // References
    // -> static char __FUNCTION__[11];
}

unsigned int gActiveHeap; // size: 0x4, address: 0x80C07448
// total size: 0xC
struct xMemFreeLink {
    // Members
    struct xMemFreeLink * next; // offset 0x0, size 0x4
    void (* func)(void *); // offset 0x4, size 0x4
    void * param; // offset 0x8, size 0x4
};
// total size: 0x168
class xMemMgrUsageTracker {
    // Members
    unsigned int usageByTag[90]; // offset 0x0, size 0x168
};
// total size: 0x17C
struct xHeapState {
    // Members
    unsigned int curr; // offset 0x0, size 0x4
    unsigned short blk_ct; // offset 0x4, size 0x2
    unsigned short pad; // offset 0x6, size 0x2
    unsigned int used; // offset 0x8, size 0x4
    unsigned int wasted; // offset 0xC, size 0x4
    struct xMemFreeLink * free_funcs; // offset 0x10, size 0x4
    class xMemMgrUsageTracker memoryUsed; // offset 0x14, size 0x168
};
// total size: 0xC
struct xMemBlock {
    // Members
    unsigned int addr; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    int align; // offset 0x8, size 0x4
};
// total size: 0x11EC
struct xMemHeap {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int hard_base; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    signed short opp_heap[2]; // offset 0xC, size 0x4
    struct xHeapState state[12]; // offset 0x10, size 0x11D0
    unsigned short state_idx; // offset 0x11E0, size 0x2
    unsigned short max_blks; // offset 0x11E2, size 0x2
    struct xMemBlock * blk; // offset 0x11E4, size 0x4
    struct xMemBlock * lastblk; // offset 0x11E8, size 0x4
};
struct xMemHeap gxHeap[2]; // size: 0x23D8, address: 0x80A7D624
// Range: 0x800E0358 -> 0x800E050C
static void * GetHeapTop() {
    // Local variables
    struct xMemHeap * heap; // r31
    struct xHeapState * sp; // r30

    // References
    // -> static unsigned int tempCurrent;
    // -> static // total size: 0x8
struct /* @class$941iMemMgr_cpp */ {
    // Members
    void * data; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
} tempStack[32];
    // -> static char __FUNCTION__[11];
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
// total size: 0x48
class xMemoryManagerFixed : public xMemoryManager {
    // Members
    struct FixedHeader * freeList; // offset 0x34, size 0x4
    unsigned int elements; // offset 0x38, size 0x4
    unsigned int elementSize; // offset 0x3C, size 0x4
    unsigned int allocatedElements; // offset 0x40, size 0x4
    unsigned char * origSizeList; // offset 0x44, size 0x4
};
static char __FUNCTION__[13]; // size: 0xD, address: 0x80BFF220
// Range: 0x800E050C -> 0x800E0694
// this: r28
static void * MemoryManagerMulti::DoReallocate(void * pointer /* r29 */, unsigned int size /* r30 */, unsigned int options /* r31 */) {
    // References
    // -> static char __FUNCTION__[13];
}

static char __FUNCTION__[7]; // size: 0x7, address: 0x80BFF230
// Range: 0x800E0694 -> 0x800E0AC8
// this: r30
static void MemoryManagerMulti::DoFree(void * pointer /* r31 */) {
    // Local variables
    unsigned int origSize; // r0
    unsigned int origSize; // r0
    unsigned int origSize; // r0
    unsigned int size; // r0

    // References
    // -> static char __FUNCTION__[7];
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFF238
// Range: 0x800E0AC8 -> 0x800E0BF0
// this: r30
static unsigned int MemoryManagerMulti::DoGetBlockSize(void * pointer /* r31 */) const {
    // References
    // -> static char __FUNCTION__[15];
}

// Range: 0x800E0BF0 -> 0x800E0FF4
// this: r31
static void MemoryManagerMulti::xPrintMetrics() const {
    // Local variables
    struct xMemHeap * hp; // r28
    struct xHeapState * sp; // r29
    unsigned int minSpace; // r0

    // References
    // -> static unsigned int tempCurrent;
    // -> static unsigned int tempAllocationCount;
    // -> unsigned int gActiveHeap;
    // -> struct xMemHeap gxHeap[2];
}

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
    struct AllocatedNode * next; // offset 0x4, size 0x4
    struct AllocatedNode * prev; // offset 0x8, size 0x4
    unsigned short extraOverhead; // offset 0xC, size 0x2
    unsigned short origSize; // offset 0xE, size 0x2
};
// total size: 0x6C
class xMemoryManagerGeneral : public xMemoryManager {
    // Members
    struct FreeNode * freeStart; // offset 0x34, size 0x4
    struct FreeNode * freeEnd; // offset 0x38, size 0x4
    enum Dir dir; // offset 0x3C, size 0x4
    enum Strategy strategy; // offset 0x40, size 0x4
    unsigned int allocatedElements; // offset 0x44, size 0x4
    unsigned int freeElements; // offset 0x48, size 0x4
    unsigned int allocatedSpace; // offset 0x4C, size 0x4
    unsigned int largestBlock; // offset 0x50, size 0x4
    unsigned int extraOverheadSpace; // offset 0x54, size 0x4
    unsigned int reallocShrinks; // offset 0x58, size 0x4
    unsigned int reallocGrows; // offset 0x5C, size 0x4
    unsigned int reallocMisses; // offset 0x60, size 0x4
    unsigned int reallocNOPs; // offset 0x64, size 0x4
    struct AllocatedNode * allocatedHeap; // offset 0x68, size 0x4
};
// Range: 0x800E0FF4 -> 0x800E13E4
// this: r29
static void MemoryManagerMulti::PrintMetrics() const {
    // Local variables
    struct xMemHeap * hp; // r31
    struct xHeapState * sp; // r30
    unsigned int minSpace; // r26

    // References
    // -> static unsigned int tempCurrent;
    // -> static unsigned int tempAllocationCount;
    // -> unsigned int gActiveHeap;
    // -> struct xMemHeap gxHeap[2];
}

// Range: 0x800E13E4 -> 0x800E1440
// this: r3
static int MemoryManagerMulti::GetMinFreeSpace() const {
    // Local variables
    struct xMemHeap * hp; // r31
    struct xHeapState * sp; // r30

    // References
    // -> unsigned int gActiveHeap;
    // -> struct xMemHeap gxHeap[2];
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80BFF248
// Range: 0x800E1440 -> 0x800E14DC
static void MemoryManagerMulti::HandleOutOfMemory(unsigned int size /* r31 */, unsigned int options /* r0 */) {
    // Local variables
    char optional[256]; // r1+0x8

    // References
    // -> static char __FUNCTION__[18];
}

static class MemoryManagerMulti memoryManager; // size: 0x1DC, address: 0x80B6D890
static class xMemoryManagerGeneral debugMemoryManager; // size: 0x6C, address: 0x80B6DA6C
static unsigned char memInited; // size: 0x1, address: 0x80C07960
int the_heap; // size: 0x4, address: 0x80C07964
void * hiheap_start; // size: 0x4, address: 0x80C07968
void * hiheap_end; // size: 0x4, address: 0x80C0796C
unsigned int hiheap_size; // size: 0x4, address: 0x80C07970
char _stack_end[]; // size: 0x0, address: 0x80C10C4C
char _stack_addr[]; // size: 0x0, address: 0x80C18C50
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
struct xMemInfo gMemInfo; // size: 0x24, address: 0x80A7D600
// Range: 0x800E14DC -> 0x800E1690
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
    // -> static unsigned int tempAllocationCount;
    // -> static unsigned int tempCurrent;
}

// Range: 0x800E1690 -> 0x800E16B4
// this: r3
static void * MemoryManagerMulti::GetHeapArenaEnd() const {}

// Range: 0x800E16B4 -> 0x800E16D8
// this: r3
static void * MemoryManagerMulti::GetHeapArenaStart() const {}

static // total size: 0x1C
struct {} @unnamed@iMemMgr_cpp@::MemoryManagerMulti::__vtable; // size: 0x1C, address: 0x80430DA0
// Range: 0x800E16D8 -> 0x800E173C
// this: r31
static MemoryManagerMulti::MemoryManagerMulti() {
    // References
    // -> static struct [anonymous] @unnamed@iMemMgr_cpp@::MemoryManagerMulti::__vtable;
}

// total size: 0x1C
struct {} xMemoryManagerGeneral::__vtable; // size: 0x1C, address: 0x8043E108
// total size: 0x1C
struct {} xMemoryManagerFixed::__vtable; // size: 0x1C, address: 0x8043E0E8
// total size: 0x1C
struct {} xMemoryManager::__vtable; // size: 0x1C, address: 0x8043E0C8
// Range: 0x800E173C -> 0x800E179C
unsigned int iMemSniffStackUsage() {
    // Local variables
    unsigned int min; // r5
    unsigned int max; // r6
    unsigned int * p; // r7
    unsigned int * lp; // r8

    // References
    // -> static unsigned int StackSize;
    // -> static unsigned int StackBase;
}

static char __FUNCTION__[9]; // size: 0x9, address: 0x80BFF25C
// Range: 0x800E179C -> 0x800E1828
void iMemExit() {
    // References
    // -> static char __FUNCTION__[9];
    // -> struct xMemInfo gMemInfo;
}

static unsigned char sMemMgrEnableRenderWareMemoryHack; // size: 0x1, address: 0x80C07974
// Range: 0x800E1828 -> 0x800E1830
void iMemMgrEnableRenderWareMemoryHack(unsigned char hackEnabled /* r0 */) {
    // References
    // -> static unsigned char sMemMgrEnableRenderWareMemoryHack;
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80BFF268
// Range: 0x800E1830 -> 0x800E1908
void * iMemMgrMalloc(unsigned long size /* r31 */) {
    // Local variables
    void * ret; // r31

    // References
    // -> static char __FUNCTION__[14];
    // -> static class MemoryManagerMulti memoryManager;
    // -> static unsigned char sMemMgrEnableRenderWareMemoryHack;
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFF278
// Range: 0x800E1908 -> 0x800E1A18
void * iMemMgrRealloc(void * mem /* r30 */, unsigned long newSize /* r31 */) {
    // Local variables
    void * ret; // r0

    // References
    // -> static char __FUNCTION__[15];
    // -> static class MemoryManagerMulti memoryManager;
    // -> static class xMemoryManagerGeneral debugMemoryManager;
}

// Range: 0x800E1A18 -> 0x800E1A7C
void iMemMgrFree(void * mem /* r31 */) {
    // References
    // -> static class MemoryManagerMulti memoryManager;
    // -> static class xMemoryManagerGeneral debugMemoryManager;
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80BFF288
// Range: 0x800E1A7C -> 0x800E1ABC
void * iMemMgrCalloc(unsigned long numObj /* r3 */, unsigned long sizeObj /* r4 */) {
    // References
    // -> static char __FUNCTION__[14];
    // -> static class MemoryManagerMulti memoryManager;
}

// Range: 0x800E1ABC -> 0x800E1B60
unsigned char iMemMgrCheckCollisionWithMallocHeap(void * mem /* r28 */, unsigned int size /* r29 */) {
    // References
    // -> static class MemoryManagerMulti memoryManager;
}

// Range: 0x800E1B60 -> 0x800E1B84
// this: r3
static void * MemoryManagerMulti::GetHeapCurrentEnd() const {}

// Range: 0x800E1B84 -> 0x800E1B98
unsigned char iMemHasTempAllocated() {
    // References
    // -> static unsigned int tempCurrent;
}

// Range: 0x800E1B98 -> 0x800E1D2C
void * iMemPushTemp(unsigned int size /* r31 */) {
    // Local variables
    struct xMemHeap * heap; // r5
    void * end; // r31

    // References
    // -> static unsigned int tempCurrent;
    // -> static // total size: 0x8
struct /* @class$941iMemMgr_cpp */ {
    // Members
    void * data; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
} tempStack[32];
    // -> static class MemoryManagerMulti memoryManager;
    // -> unsigned int gActiveHeap;
    // -> struct xMemHeap gxHeap[2];
    // -> static unsigned int tempAllocationCount;
}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80BFF298
// Range: 0x800E1D2C -> 0x800E1E2C
void iMemPopTemp(void * pointer /* r0 */) {
    // Local variables
    unsigned char found; // r7
    int i; // r8

    // References
    // -> static char __FUNCTION__[12];
    // -> static unsigned int tempCurrent;
    // -> static // total size: 0x8
struct /* @class$941iMemMgr_cpp */ {
    // Members
    void * data; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
} tempStack[32];
}

// Range: 0x800E1E2C -> 0x800E1E54
void iMemMgrXPrintDebugInfo() {
    // References
    // -> static class MemoryManagerMulti memoryManager;
}

// Range: 0x800E1E54 -> 0x800E1E5C
unsigned int iMemMgrTotalArenaUsage() {}

// Range: 0x800E1E5C -> 0x800E1E84
int iMemMgrGetMinFreeSpace() {
    // References
    // -> static class MemoryManagerMulti memoryManager;
}


