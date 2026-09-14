/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMemoryManagerFixed.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C5E64 -> 0x801C634C
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
// Range: 0x801C5E64 -> 0x801C5EC4
// this: r29
void xMemoryManagerFixed::SetOrigSize(void * pointer /* r30 */, unsigned int size /* r31 */) const {
    // Local variables
    unsigned int start; // r0
    unsigned int index; // r31
}

// Range: 0x801C5EC4 -> 0x801C5F10
unsigned char ConvertToFixedSizeEnum(unsigned int size /* r0 */) {}

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
// Range: 0x801C5F10 -> 0x801C5FA8
// this: r30
unsigned int xMemoryManagerFixed::GetOrigSize(void * pointer /* r31 */) const {
    // Local variables
    unsigned int index; // r0
}

// Range: 0x801C5FA8 -> 0x801C603C
// this: r29
void xMemoryManagerFixed::Init(void * start /* r0 */, unsigned int elements /* r30 */, unsigned int elementSize /* r31 */) {}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80C02E18
// Range: 0x801C603C -> 0x801C6168
// this: r31
void * xMemoryManagerFixed::DoAllocate(unsigned int size /* r30 */, unsigned int options /* r0 */) {
    // Local variables
    struct FixedHeader * ret; // r30

    // References
    // -> static char __FUNCTION__[11];
}

static char __FUNCTION__[7]; // size: 0x7, address: 0x80C02E24
// Range: 0x801C6168 -> 0x801C6234
// this: r30
void xMemoryManagerFixed::DoFree(void * pointer /* r31 */) {
    // Local variables
    int TESTVALUE; // r3
    struct FixedHeader * header; // r0

    // References
    // -> static char __FUNCTION__[7];
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80C02E2C
// Range: 0x801C6234 -> 0x801C62B4
// this: r0
void * xMemoryManagerFixed::DoReallocate(void * pointer /* r31 */, unsigned int size /* r0 */) {
    // References
    // -> static char __FUNCTION__[13];
}

// Range: 0x801C62B4 -> 0x801C62BC
// this: r3
unsigned int xMemoryManagerFixed::DoGetBlockSize() const {}

// Range: 0x801C62BC -> 0x801C634C
// this: r29
void xMemoryManagerFixed::InitMemory() {
    // Local variables
    struct FixedHeader * cur; // r31
    unsigned int i; // r30
}

// total size: 0x1C
struct {} xMemoryManagerFixed::__vtable; // size: 0x1C, address: 0x8043E0E8

