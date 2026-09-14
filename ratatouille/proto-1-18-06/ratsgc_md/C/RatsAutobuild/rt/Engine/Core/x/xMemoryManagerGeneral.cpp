/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMemoryManagerGeneral.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8011A4C0 -> 0x8011B090
*/
// total size: 0x10
struct FreeNode {
    // Members
    struct FreeNode * next; // offset 0x0, size 0x4
    struct FreeNode * prev; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    unsigned int pad[1]; // offset 0xC, size 0x4
};
// total size: 0x34
class xMemoryManagerGeneral : public xMemoryManager {
    // Functions
    void Init(void * start, unsigned int size, enum Dir dir, enum Strategy strategy, unsigned char debugging);

    void * GetCurrentEnd() const;

    void * DoAllocate(unsigned int size, unsigned int options);

    void DoFree(void * pointer);

    void * DoReallocate(void * pointer, unsigned int size, unsigned int options);

    void MergeNodes(struct FreeNode * node);

    struct AllocatedNode * ShortenNode(struct AllocatedNode * allocatedNode, unsigned int size);

    // Members
    struct FreeNode * freeStart; // offset 0x24, size 0x4
    struct FreeNode * freeEnd; // offset 0x28, size 0x4
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
// Range: 0x8011A4C0 -> 0x8011A54C
// this: r27
void xMemoryManagerGeneral::Init(void * start /* r28 */, unsigned int size /* r29 */, enum Dir dir /* r30 */, enum Strategy strategy /* r31 */, unsigned char debugging /* r8 */) {}

// Range: 0x8011A54C -> 0x8011A5A8
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
// Range: 0x8011A5A8 -> 0x8011A868
// this: r30
void * xMemoryManagerGeneral::DoAllocate(unsigned int size /* r6 */, unsigned int options /* r0 */) {
    // Local variables
    struct FreeNode * node; // r31
    struct FreeNode * search; // r5
    struct FreeNode * search; // r5
    unsigned int nodeSize; // r29
}

// Range: 0x8011A868 -> 0x8011A96C
// this: r30
void xMemoryManagerGeneral::DoFree(void * pointer /* r0 */) {
    // Local variables
    struct AllocatedNode * allocatedNode; // r3
    unsigned int size; // r31
    struct FreeNode * node; // r4
    struct FreeNode * insertBefore; // r3
}

// Range: 0x8011A96C -> 0x8011AE58
// this: r22
void * xMemoryManagerGeneral::DoReallocate(void * pointer /* r25 */, unsigned int size /* r23 */, unsigned int options /* r24 */) {
    // Local variables
    struct AllocatedNode * allocatedNode; // r0
    unsigned int nodeSize; // r31
    struct FreeNode * afterNode; // r28
    unsigned int sizeBeforeNode; // r27
    unsigned int sizeAfterNode; // r26
    void * newPointer; // r21
    void * dataStart; // r25
    unsigned int neededSize; // r24
    struct FreeNode * newNode; // r0
    struct AllocatedNode * newAllocatedNode; // r26
    unsigned int newSpace; // r27
    struct FreeNode * newNode; // r0
    void * dataDest; // r3
}

// Range: 0x8011AE58 -> 0x8011AE60
unsigned int xMemoryManagerGeneral::DoGetBlockSize(void * pointer /* r0 */) {}

// Range: 0x8011AE60 -> 0x8011AF48
// this: r30
void xMemoryManagerGeneral::MergeNodes(struct FreeNode * node /* r31 */) {}

// total size: 0x10
struct AllocatedNode {
    // Members
    unsigned int size; // offset 0x0, size 0x4
    unsigned int pad[3]; // offset 0x4, size 0xC
};
// Range: 0x8011AF48 -> 0x8011B090
// this: r31
struct AllocatedNode * xMemoryManagerGeneral::ShortenNode(struct AllocatedNode * allocatedNode /* r27 */, unsigned int size /* r28 */) {
    // Local variables
    unsigned int nodeSize; // r30
    struct FreeNode * newNode; // r29
    struct AllocatedNode * oldAllocatedNode; // r29
    struct FreeNode * insertBefore; // r4
}

// total size: 0x1C
struct {} xMemoryManagerGeneral::__vtable; // size: 0x1C, address: 0x803BE6F8

