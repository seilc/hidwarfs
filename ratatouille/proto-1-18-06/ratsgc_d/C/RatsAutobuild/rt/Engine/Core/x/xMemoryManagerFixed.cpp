/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMemoryManagerFixed.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80223EB4 -> 0x80224434
*/
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
    // Functions
    void SetOrigSize(void * pointer, unsigned int size) const;

    unsigned int GetOrigSize(void * pointer) const;

    void Init(void * start, unsigned int elements, unsigned int elementSize);

    void * DoAllocate(unsigned int size, unsigned int options);

    void DoFree(void * pointer);

    void * DoReallocate(void * pointer, unsigned int size);

    unsigned int DoGetBlockSize() const;

    void InitMemory();

    // Members
    struct FixedHeader * freeList; // offset 0x34, size 0x4
    unsigned int elements; // offset 0x38, size 0x4
    unsigned int elementSize; // offset 0x3C, size 0x4
    unsigned int allocatedElements; // offset 0x40, size 0x4
    unsigned char * origSizeList; // offset 0x44, size 0x4
};
// Range: 0x80223EB4 -> 0x80223F1C
// this: r31
void xMemoryManagerFixed::SetOrigSize(void * pointer /* r1+0x8 */, unsigned int size /* r1+0xC */) const {
    // Local variables
    unsigned int start; // r29
    unsigned int index; // r30
}

// Range: 0x80223F1C -> 0x80223F64
unsigned char ConvertToFixedSizeEnum(unsigned int size /* r3 */) {}

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
// Range: 0x80223F64 -> 0x80224000
// this: r31
unsigned int xMemoryManagerFixed::GetOrigSize(void * pointer /* r1+0x8 */) const {
    // Local variables
    unsigned int index; // r30
}

// Range: 0x80224000 -> 0x802240B0
// this: r31
void xMemoryManagerFixed::Init(void * start /* r1+0x8 */, unsigned int elements /* r29 */, unsigned int elementSize /* r30 */) {}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80D64B58
// Range: 0x802240B0 -> 0x8022420C
// this: r31
void * xMemoryManagerFixed::DoAllocate(unsigned int size /* r1+0x8 */, unsigned int options /* r1+0xC */) {
    // Local variables
    struct FixedHeader * ret; // r30

    // References
    // -> static char __FUNCTION__[11];
}

static char __FUNCTION__[7]; // size: 0x7, address: 0x80D64B63
// Range: 0x8022420C -> 0x802242FC
// this: r31
void xMemoryManagerFixed::DoFree(void * pointer /* r28 */) {
    // Local variables
    int TESTVALUE; // r29
    struct FixedHeader * header; // r30

    // References
    // -> static char __FUNCTION__[7];
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80D64B6A
// Range: 0x802242FC -> 0x80224398
// this: r31
void * xMemoryManagerFixed::DoReallocate(void * pointer /* r1+0x8 */, unsigned int size /* r1+0xC */) {
    // References
    // -> static char __FUNCTION__[13];
}

// Range: 0x80224398 -> 0x802243A0
// this: r3
unsigned int xMemoryManagerFixed::DoGetBlockSize() const {}

// Range: 0x802243A0 -> 0x80224434
// this: r31
void xMemoryManagerFixed::InitMemory() {
    // Local variables
    struct FixedHeader * cur; // r30
    unsigned int i; // r29
}

// total size: 0x1C
struct {} xMemoryManagerFixed::__vtable; // size: 0x1C, address: 0x805238D0

