/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMemoryManagerFixed.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8011A390 -> 0x8011A4B8
*/
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
    // Functions
    void Init(void * start, unsigned int elements, unsigned int elementSize);

    void * DoAllocate();

    void DoFree(void * pointer);

    unsigned int DoGetBlockSize() const;

    void InitMemory();

    // Members
    struct FixedHeader * freeList; // offset 0x24, size 0x4
    unsigned int elements; // offset 0x28, size 0x4
    unsigned int elementSize; // offset 0x2C, size 0x4
};
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
// Range: 0x8011A390 -> 0x8011A3DC
// this: r29
void xMemoryManagerFixed::Init(void * start /* r0 */, unsigned int elements /* r30 */, unsigned int elementSize /* r31 */) {}

// Range: 0x8011A3DC -> 0x8011A400
// this: r0
void * xMemoryManagerFixed::DoAllocate() {}

// Range: 0x8011A400 -> 0x8011A43C
// this: r30
void xMemoryManagerFixed::DoFree(void * pointer /* r31 */) {
    // Local variables
    struct FixedHeader * header; // r0
}

// Range: 0x8011A43C -> 0x8011A444
void * xMemoryManagerFixed::DoReallocate(void * pointer /* r4 */) {}

// Range: 0x8011A444 -> 0x8011A44C
// this: r3
unsigned int xMemoryManagerFixed::DoGetBlockSize() const {}

// Range: 0x8011A44C -> 0x8011A4B8
// this: r29
void xMemoryManagerFixed::InitMemory() {
    // Local variables
    struct FixedHeader * cur; // r31
    unsigned int i; // r30
}

// total size: 0x1C
struct {} xMemoryManagerFixed::__vtable; // size: 0x1C, address: 0x803BE6D8

