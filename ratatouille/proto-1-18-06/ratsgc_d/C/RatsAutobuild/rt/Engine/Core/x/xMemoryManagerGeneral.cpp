/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMemoryManagerGeneral.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80224444 -> 0x80225B40
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
// Range: 0x80224444 -> 0x80224578
// this: r31
void xMemoryManagerGeneral::Init(void * start /* r28 */, unsigned int size /* r30 */, enum Dir dir /* r27 */, enum Strategy strategy /* r1+0x8 */, unsigned char debugging /* r1+0xC */) {}

// Range: 0x80224578 -> 0x80224618
// this: r31
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
// Range: 0x80224618 -> 0x80224668
// this: r3
unsigned int xMemoryManagerGeneral::GetFragmentedSpace() const {
    // Local variables
    unsigned int ret; // r30
    struct FreeNode * node; // r31
}

// Range: 0x80224668 -> 0x802246A8
// this: r3
unsigned int xMemoryManagerGeneral::GetFreeSpace() const {
    // Local variables
    unsigned int ret; // r30
    struct FreeNode * node; // r31
}

// Range: 0x802246A8 -> 0x8022474C
// this: r29
void xMemoryManagerGeneral::DumpAllocatedHeap() const {
    // Local variables
    struct AllocatedNode * it; // r31
    int count; // r30
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80D64B78
// Range: 0x8022474C -> 0x80224D30
// this: r30
void * xMemoryManagerGeneral::DoAllocate(unsigned int size /* r29 */, unsigned int options /* r18 */) {
    // Local variables
    unsigned char updateLargestBlock; // r22
    struct FreeNode * node; // r31
    struct FreeNode * search; // r25
    struct FreeNode * newNode; // r26
    struct FreeNode * next; // r17
    struct FreeNode * search; // r24
    struct FreeNode * newNode; // r28
    struct FreeNode * next; // r1+0xC
    struct FreeNode * swapNode; // r1+0x8
    unsigned int nodeSize; // r23
    struct AllocatedNode * allocatedNode; // r27

    // References
    // -> static char __FUNCTION__[11];
}

// Range: 0x80224D30 -> 0x80224EDC
// this: r31
void xMemoryManagerGeneral::DoFree(void * pointer /* r1+0x8 */) {
    // Local variables
    struct AllocatedNode * allocatedNode; // r29
    unsigned int size; // r27
    struct FreeNode * node; // r30
    struct FreeNode * insertBefore; // r28
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80D64B83
// Range: 0x80224EDC -> 0x802256A4
// this: r31
void * xMemoryManagerGeneral::DoReallocate(void * pointer /* r1+0x8 */, unsigned int size /* r26 */, unsigned int options /* r1+0xC */, const char * file /* r1+0x10 */, const char * function /* r1+0x14 */, int line /* r1+0x18 */) {
    // Local variables
    unsigned char updateLargestBlock; // r1+0x1C
    struct AllocatedNode * allocatedNode; // r30
    unsigned int nodeSize; // r23
    unsigned short originalExtraOverhead; // r1+0x1E
    struct FreeNode * afterNode; // r27
    struct FreeNode * beforeNode; // r22
    unsigned int sizeBeforeNode; // r20
    unsigned int sizeAfterNode; // r19
    void * newPointer; // r1+0x34
    void * dataStart; // r18
    unsigned int neededSize; // r21
    struct FreeNode * working; // r28
    struct FreeNode * newNode; // r25
    struct FreeNode * working; // r29
    struct AllocatedNode * newAllocatedNode; // r17
    unsigned int newSpace; // r1+0x30
    struct FreeNode * newNode; // r24
    void * dataDest; // r1+0x2C

    // References
    // -> static char __FUNCTION__[13];
}

// Range: 0x802256A4 -> 0x802256AC
unsigned int xMemoryManagerGeneral::DoGetBlockSize(void * pointer /* r4 */) {}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80D64B90
// Range: 0x802256AC -> 0x8022580C
void xMemoryManagerGeneral::SetOrigSize(void * pointer /* r30 */, unsigned int size /* r29 */) {
    // Local variables
    struct AllocatedNode & node; // r31

    // References
    // -> static char __FUNCTION__[12];
}

// Range: 0x8022580C -> 0x80225824
unsigned int xMemoryManagerGeneral::GetOrigSize(void * pointer /* r4 */) {
    // Local variables
    struct AllocatedNode & node; // r31
}

// Range: 0x80225824 -> 0x80225958
// this: r30
void xMemoryManagerGeneral::MergeNodes(struct FreeNode * node /* r31 */) {}

// Range: 0x80225958 -> 0x80225AF8
// this: r31
struct AllocatedNode * xMemoryManagerGeneral::ShortenNode(struct AllocatedNode * allocatedNode /* r29 */, unsigned int size /* r27 */) {
    // Local variables
    unsigned int nodeSize; // r26
    struct FreeNode * newNode; // r30
    struct AllocatedNode * oldAllocatedNode; // r25
    struct FreeNode * insertBefore; // r28
}

// Range: 0x80225AF8 -> 0x80225B40
// this: r3
void xMemoryManagerGeneral::UpdateLargestBlock() {
    // Local variables
    struct FreeNode * largestCheck; // r31
}

// total size: 0x1C
struct {} xMemoryManagerGeneral::__vtable; // size: 0x1C, address: 0x805238F0

