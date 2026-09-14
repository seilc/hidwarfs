/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\gc\iMemMgr.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801138D4 -> 0x80115FF8
*/
// total size: 0x8
struct /* @class$722iMemMgr_cpp */ {
    // Members
    void * data; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
static // total size: 0x8
struct /* @class$722iMemMgr_cpp */ {
    // Members
    void * data; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
} tempStack[32]; // size: 0x100, address: 0x80C6FCE8
static unsigned int tempCurrent; // size: 0x4, address: 0x80D69AC0
static unsigned int tempAllocationCount; // size: 0x4, address: 0x80D69AC4
static unsigned int StackBase; // size: 0x4, address: 0x80D69AC8
static unsigned int StackSize; // size: 0x4, address: 0x80D69ACC
static char __FUNCTION__[15]; // size: 0xF, address: 0x80D618B0
// Range: 0x801138D4 -> 0x80113A0C
static void iMemClearStack() {
    // Local variables
    unsigned int sp; // r31
    int ei; // r30

    // References
    // -> static unsigned int StackBase;
    // -> static char __FUNCTION__[15];
    // -> static unsigned int StackSize;
}

// Range: 0x80113A0C -> 0x80113A28
unsigned int GetStackPointer() {
    // Local variables
    unsigned int result; // r31
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
// Range: 0x80113A28 -> 0x80113BD8
// this: r31
static void MemoryManagerMulti::Init(void * start /* r28 */, unsigned int size /* r29 */, unsigned int resourceArenaSize /* r1+0x8 */, unsigned int byte4Count /* r1+0xC */, unsigned int byte8Count /* r1+0x10 */, unsigned int byte32Count /* r1+0x14 */, unsigned int byte48Count /* r1+0x38 */, unsigned char debugging /* r1+0x3F */) {
    // Local variables
    unsigned char * startByte; // r30
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
static char __FUNCTION__[11]; // size: 0xB, address: 0x80D618BF
// Range: 0x80113BD8 -> 0x80114158
// this: r31
static void * MemoryManagerMulti::DoAllocate(unsigned int size /* r30 */, unsigned int options /* r27 */) {
    // Local variables
    unsigned char warned; // r29
    void * test; // r26
    void * test; // r25
    void * test; // r24
    void * test; // r23
    unsigned int oldSize; // r22
    void * raw; // r28
    char buffer[128]; // r1+0x8

    // References
    // -> static char __FUNCTION__[11];
}

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
// total size: 0x1C
struct xMemBlock {
    // Members
    unsigned int addr; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    int align; // offset 0x8, size 0x4
    unsigned int assetID; // offset 0xC, size 0x4
    const char * file; // offset 0x10, size 0x4
    int line; // offset 0x14, size 0x4
    const char * func; // offset 0x18, size 0x4
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
struct xMemHeap gxHeap[2]; // size: 0x23D8, address: 0x80B7FAE4
unsigned int gActiveHeap; // size: 0x4, address: 0x80D692A8
// Range: 0x80114158 -> 0x80114208
static void * GetHeapTop() {
    // Local variables
    struct xMemHeap * heap; // r31
    struct xHeapState * sp; // r30

    // References
    // -> static unsigned int tempCurrent;
    // -> static // total size: 0x8
struct /* @class$722iMemMgr_cpp */ {
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
// total size: 0x48
class xMemoryManagerFixed : public xMemoryManager {
    // Members
    struct FixedHeader * freeList; // offset 0x34, size 0x4
    unsigned int elements; // offset 0x38, size 0x4
    unsigned int elementSize; // offset 0x3C, size 0x4
    unsigned int allocatedElements; // offset 0x40, size 0x4
    unsigned char * origSizeList; // offset 0x44, size 0x4
};
static char __FUNCTION__[13]; // size: 0xD, address: 0x80D618CA
// Range: 0x80114208 -> 0x80114390
// this: r31
static void * MemoryManagerMulti::DoReallocate(void * pointer /* r30 */, unsigned int size /* r29 */, unsigned int options /* r28 */) {
    // References
    // -> static char __FUNCTION__[13];
}

static char __FUNCTION__[7]; // size: 0x7, address: 0x80D618D7
// Range: 0x80114390 -> 0x80114804
// this: r31
static void MemoryManagerMulti::DoFree(void * pointer /* r30 */) {
    // Local variables
    unsigned int origSize; // r26
    unsigned int origSize; // r27
    unsigned int origSize; // r28
    unsigned int size; // r29

    // References
    // -> static char __FUNCTION__[7];
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80D618DE
// Range: 0x80114804 -> 0x8011493C
// this: r31
static unsigned int MemoryManagerMulti::DoGetBlockSize(void * pointer /* r30 */) const {
    // References
    // -> static char __FUNCTION__[15];
}

// Range: 0x8011493C -> 0x80114D30
// this: r31
static void MemoryManagerMulti::xPrintMetrics() const {
    // Local variables
    struct xMemHeap * hp; // r30
    struct xHeapState * sp; // r29
    unsigned int minSpace; // r28

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
// Range: 0x80114D30 -> 0x801150D4
// this: r31
static void MemoryManagerMulti::PrintMetrics() const {
    // Local variables
    struct xMemHeap * hp; // r30
    struct xHeapState * sp; // r29

    // References
    // -> static unsigned int tempCurrent;
    // -> static unsigned int tempAllocationCount;
    // -> unsigned int gActiveHeap;
    // -> struct xMemHeap gxHeap[2];
}

// Range: 0x801150D4 -> 0x8011513C
// this: r1+0x8
static int MemoryManagerMulti::GetMinFreeSpace() const {
    // Local variables
    struct xMemHeap * hp; // r31
    struct xHeapState * sp; // r30

    // References
    // -> unsigned int gActiveHeap;
    // -> struct xMemHeap gxHeap[2];
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80D618ED
// Range: 0x8011513C -> 0x80115200
static void MemoryManagerMulti::HandleOutOfMemory(unsigned int size /* r1+0x8 */, unsigned int options /* r1+0xC */, const char * file /* r1+0x10 */, const char * function /* r1+0x14 */, int line /* r1+0x18 */) {
    // Local variables
    char optional[256]; // r1+0x1C

    // References
    // -> static char __FUNCTION__[18];
}

static class MemoryManagerMulti memoryManager; // size: 0x1DC, address: 0x80C6FDE8
static class xMemoryManagerGeneral debugMemoryManager; // size: 0x6C, address: 0x80C6FFC4
static unsigned char memInited; // size: 0x1, address: 0x80D69AD0
int the_heap; // size: 0x4, address: 0x80D69AD4
void * hiheap_start; // size: 0x4, address: 0x80D69AD8
void * hiheap_end; // size: 0x4, address: 0x80D69ADC
unsigned int hiheap_size; // size: 0x4, address: 0x80D69AE0
char _stack_end[]; // size: 0x0, address: 0x80D72EC4
char _stack_addr[]; // size: 0x0, address: 0x80D7AEC8
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
struct xMemInfo gMemInfo; // size: 0x24, address: 0x80B7FAC0
// Range: 0x80115200 -> 0x8011541C
void iMemInit() {
    // Local variables
    void * rhs; // r29
    void * heap_end; // r30
    unsigned int HeapBase; // r28
    unsigned int HeapSize; // r27

    // References
    // -> static unsigned char memInited;
    // -> struct xMemInfo gMemInfo;
    // -> char _stack_addr[];
    // -> char _stack_end[];
    // -> static unsigned int StackSize;
    // -> static unsigned int StackBase;
    // -> static class MemoryManagerMulti memoryManager;
    // -> unsigned int hiheap_size;
    // -> void * hiheap_start;
    // -> void * hiheap_end;
    // -> int the_heap;
    // -> static unsigned int tempAllocationCount;
    // -> static unsigned int tempCurrent;
}

// Range: 0x8011541C -> 0x80115448
// this: r1+0x8
static void * MemoryManagerMulti::GetHeapArenaEnd() const {}

// Range: 0x80115448 -> 0x80115474
// this: r1+0x8
static void * MemoryManagerMulti::GetHeapArenaStart() const {}

static // total size: 0x1C
struct {} @unnamed@iMemMgr_cpp@::MemoryManagerMulti::__vtable; // size: 0x1C, address: 0x80516B78
// Range: 0x80115474 -> 0x801154D8
// this: r31
static MemoryManagerMulti::MemoryManagerMulti() {
    // References
    // -> static struct [anonymous] @unnamed@iMemMgr_cpp@::MemoryManagerMulti::__vtable;
}

// total size: 0x1C
struct {} xMemoryManagerGeneral::__vtable; // size: 0x1C, address: 0x805238F0
// total size: 0x1C
struct {} xMemoryManagerFixed::__vtable; // size: 0x1C, address: 0x805238D0
// total size: 0x1C
struct {} xMemoryManager::__vtable; // size: 0x1C, address: 0x805238B0
// Range: 0x801154D8 -> 0x8011555C
unsigned int iMemSniffStackUsage() {
    // Local variables
    unsigned int min; // r29
    unsigned int max; // r30
    unsigned int usage; // r28
    unsigned int * p; // r31
    unsigned int * lp; // r27

    // References
    // -> static unsigned int StackSize;
    // -> static unsigned int StackBase;
}

static char __FUNCTION__[9]; // size: 0x9, address: 0x80D618FF
// Range: 0x8011555C -> 0x80115600
void iMemExit() {
    // References
    // -> struct xMemInfo gMemInfo;
    // -> static char __FUNCTION__[9];
}

// Range: 0x80115600 -> 0x80115638
void iMemSet(void * addr /* r1+0x8 */, int val /* r1+0xC */, unsigned long size /* r1+0x10 */) {}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80D61908
// Range: 0x80115638 -> 0x80115778
void iMemVerify(void * addr /* r1+0x8 */, int val /* r29 */, unsigned long size /* r30 */) {
    // Local variables
    char * p; // r31

    // References
    // -> static char __FUNCTION__[11];
}

static const char * lastFile; // size: 0x4, address: 0x80D61914
static const char * lastFunction; // size: 0x4, address: 0x80D61918
static int lastLine; // size: 0x4, address: 0x80D69AE4
static unsigned char sMemMgrEnableRenderWareMemoryHack; // size: 0x1, address: 0x80D69AE8
// Range: 0x80115778 -> 0x80115780
void iMemMgrEnableRenderWareMemoryHack(unsigned char hackEnabled /* r3 */) {
    // References
    // -> static unsigned char sMemMgrEnableRenderWareMemoryHack;
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80D6191C
// Range: 0x80115780 -> 0x80115894
void * iMemMgrMalloc(unsigned long size /* r31 */) {
    // Local variables
    void * ret; // r30

    // References
    // -> static char __FUNCTION__[14];
    // -> static const char * lastFunction;
    // -> static int lastLine;
    // -> static const char * lastFile;
    // -> static class MemoryManagerMulti memoryManager;
    // -> static unsigned char sMemMgrEnableRenderWareMemoryHack;
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80D6192A
// Range: 0x80115894 -> 0x801159C8
void * iMemMgrRealloc(void * mem /* r29 */, unsigned long newSize /* r31 */) {
    // Local variables
    void * ret; // r30

    // References
    // -> static char __FUNCTION__[15];
    // -> static class MemoryManagerMulti memoryManager;
    // -> static class xMemoryManagerGeneral debugMemoryManager;
}

// Range: 0x801159C8 -> 0x80115A2C
void iMemMgrFree(void * mem /* r31 */) {
    // References
    // -> static class MemoryManagerMulti memoryManager;
    // -> static class xMemoryManagerGeneral debugMemoryManager;
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80D61939
// Range: 0x80115A2C -> 0x80115A7C
void * iMemMgrCalloc(unsigned long numObj /* r1+0x8 */, unsigned long sizeObj /* r1+0xC */) {
    // References
    // -> static char __FUNCTION__[14];
    // -> static class MemoryManagerMulti memoryManager;
}

// Range: 0x80115A7C -> 0x80115B24
unsigned char iMemMgrCheckCollisionWithMallocHeap(void * mem /* r29 */, unsigned int size /* r1+0x8 */) {
    // Local variables
    unsigned char ret; // r30

    // References
    // -> static class MemoryManagerMulti memoryManager;
}

// Range: 0x80115B24 -> 0x80115B50
// this: r1+0x8
static void * MemoryManagerMulti::GetHeapCurrentEnd() const {}

// Range: 0x80115B50 -> 0x80115B64
unsigned char iMemHasTempAllocated() {
    // References
    // -> static unsigned int tempCurrent;
}

// Range: 0x80115B64 -> 0x80115D78
void * iMemPushTemp(unsigned int size /* r30 */) {
    // Local variables
    struct xMemHeap * heap; // r31
    struct xHeapState * sp; // r29
    void * end; // r28

    // References
    // -> static unsigned int tempCurrent;
    // -> static // total size: 0x8
struct /* @class$722iMemMgr_cpp */ {
    // Members
    void * data; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
} tempStack[32];
    // -> static class MemoryManagerMulti memoryManager;
    // -> unsigned int gActiveHeap;
    // -> struct xMemHeap gxHeap[2];
    // -> static unsigned int tempAllocationCount;
}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80D61947
// Range: 0x80115D78 -> 0x80115ED0
void iMemPopTemp(void * pointer /* r1+0x8 */) {
    // Local variables
    unsigned char found; // r30
    int i; // r31

    // References
    // -> static char __FUNCTION__[12];
    // -> static unsigned int tempCurrent;
    // -> static // total size: 0x8
struct /* @class$722iMemMgr_cpp */ {
    // Members
    void * data; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
} tempStack[32];
}

// Range: 0x80115ED0 -> 0x80115EF8
void iMemMgrXPrintDebugInfo() {
    // References
    // -> static class MemoryManagerMulti memoryManager;
}

// Range: 0x80115EF8 -> 0x80115F20
void iMemMgrDumpActiveList() {
    // References
    // -> static class MemoryManagerMulti memoryManager;
}

void * hackResourceArenaPointer; // size: 0x4, address: 0x80D69D68
// Range: 0x80115F20 -> 0x80115F9C
unsigned int iMemMgrTotalArenaUsage() {
    // Local variables
    unsigned int totalAllocated; // r1+0x1C
    unsigned int totalFree; // r1+0x18
    unsigned int largestAllocated; // r1+0x14
    unsigned int largestFree; // r1+0x10
    unsigned int smallestAllocated; // r1+0xC
    unsigned int smallestFree; // r1+0x8

    // References
    // -> void * hackResourceArenaPointer;
}

// Range: 0x80115F9C -> 0x80115FC4
int iMemMgrGetMinFreeSpace() {
    // References
    // -> static class MemoryManagerMulti memoryManager;
}


