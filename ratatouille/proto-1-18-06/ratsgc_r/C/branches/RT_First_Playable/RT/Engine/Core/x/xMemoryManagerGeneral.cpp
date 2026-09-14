/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMemoryManagerGeneral.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C635C -> 0x801C778C
*/
// total size: 0x10
struct FreeNode {
    // Members
    struct FreeNode * next; // offset 0x0, size 0x4
    struct FreeNode * prev; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    unsigned int pad[1]; // offset 0xC, size 0x4
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
    // Functions
    void Init(void * start, unsigned int size, enum Dir dir, enum Strategy strategy, unsigned char debugging);

    void * GetCurrentEnd() const;

    unsigned int GetFragmentedSpace() const;

    unsigned int GetFreeSpace() const;

    void DumpAllocatedHeap() const;

    void * DoAllocate(unsigned int size, unsigned int options);

    void DoFree(void * pointer);

    void * DoReallocate(void * pointer, unsigned int size, unsigned int options, const char * file, const char * function, int line);

    void MergeNodes(struct FreeNode * node);

    struct AllocatedNode * ShortenNode(struct AllocatedNode * allocatedNode, unsigned int size);

    void UpdateLargestBlock();

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
enum Dir {
    Up = 0,
    Down = 1,
};
enum Strategy {
    FirstFit = 0,
    BestFit = 1,
};
// Range: 0x801C635C -> 0x801C6444
// this: r27
void xMemoryManagerGeneral::Init(void * start /* r28 */, unsigned int size /* r29 */, enum Dir dir /* r30 */, enum Strategy strategy /* r31 */, unsigned char debugging /* r8 */) {}

// Range: 0x801C6444 -> 0x801C64A0
// this: r0
void * xMemoryManagerGeneral::GetCurrentEnd() const {}

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
// Range: 0x801C64A0 -> 0x801C64D4
// this: r0
unsigned int xMemoryManagerGeneral::GetFragmentedSpace() const {
    // Local variables
    unsigned int ret; // r3
    struct FreeNode * node; // r5
}

// Range: 0x801C64D4 -> 0x801C64F8
// this: r0
unsigned int xMemoryManagerGeneral::GetFreeSpace() const {
    // Local variables
    unsigned int ret; // r3
    struct FreeNode * node; // r4
}

// Range: 0x801C64F8 -> 0x801C659C
// this: r0
void xMemoryManagerGeneral::DumpAllocatedHeap() const {
    // Local variables
    struct AllocatedNode * it; // r30
    int count; // r29
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80C02E40
// Range: 0x801C659C -> 0x801C6ACC
// this: r28
void * xMemoryManagerGeneral::DoAllocate(unsigned int size /* r29 */, unsigned int options /* r27 */) {
    // Local variables
    unsigned char updateLargestBlock; // r31
    struct FreeNode * node; // r30
    struct FreeNode * search; // r5
    struct FreeNode * next; // r0
    struct FreeNode * search; // r5
    struct FreeNode * next; // r0
    unsigned int nodeSize; // r27

    // References
    // -> static char __FUNCTION__[11];
}

// Range: 0x801C6ACC -> 0x801C6C60
// this: r30
void xMemoryManagerGeneral::DoFree(void * pointer /* r0 */) {
    // Local variables
    struct AllocatedNode * allocatedNode; // r4
    unsigned int size; // r31
    struct FreeNode * node; // r4
    struct FreeNode * insertBefore; // r3
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80C02E4C
// Range: 0x801C6C60 -> 0x801C7378
// this: r29
void * xMemoryManagerGeneral::DoReallocate(void * pointer /* r30 */, unsigned int size /* r31 */, unsigned int options /* r18 */, const char * file /* r19 */, const char * function /* r20 */, int line /* r21 */) {
    // Local variables
    struct AllocatedNode * allocatedNode; // r0
    unsigned int nodeSize; // r26
    unsigned short originalExtraOverhead; // r25
    struct FreeNode * afterNode; // r24
    unsigned int sizeBeforeNode; // r23
    unsigned int sizeAfterNode; // r22
    void * newPointer; // r17
    void * dataStart; // r25
    unsigned int neededSize; // r26
    struct FreeNode * newNode; // r0
    struct AllocatedNode * newAllocatedNode; // r19
    unsigned int newSpace; // r22
    struct FreeNode * newNode; // r0
    void * dataDest; // r3

    // References
    // -> static char __FUNCTION__[13];
}

// Range: 0x801C7378 -> 0x801C7380
unsigned int xMemoryManagerGeneral::DoGetBlockSize(void * pointer /* r0 */) {}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80C02E5C
// Range: 0x801C7380 -> 0x801C74A4
void xMemoryManagerGeneral::SetOrigSize(void * pointer /* r30 */, unsigned int size /* r31 */) {
    // Local variables
    struct AllocatedNode & node; // r0

    // References
    // -> static char __FUNCTION__[12];
}

// Range: 0x801C74A4 -> 0x801C74AC
unsigned int xMemoryManagerGeneral::GetOrigSize(void * pointer /* r0 */) {}

// Range: 0x801C74AC -> 0x801C75C8
// this: r30
void xMemoryManagerGeneral::MergeNodes(struct FreeNode * node /* r31 */) {}

// Range: 0x801C75C8 -> 0x801C7758
// this: r30
struct AllocatedNode * xMemoryManagerGeneral::ShortenNode(struct AllocatedNode * allocatedNode /* r31 */, unsigned int size /* r27 */) {
    // Local variables
    unsigned int nodeSize; // r29
    struct FreeNode * newNode; // r28
    struct AllocatedNode * oldAllocatedNode; // r28
    struct FreeNode * insertBefore; // r4
}

// Range: 0x801C7758 -> 0x801C778C
// this: r0
void xMemoryManagerGeneral::UpdateLargestBlock() {
    // Local variables
    struct FreeNode * largestCheck; // r5
}

// total size: 0x1C
struct {} xMemoryManagerGeneral::__vtable; // size: 0x1C, address: 0x8043E108

