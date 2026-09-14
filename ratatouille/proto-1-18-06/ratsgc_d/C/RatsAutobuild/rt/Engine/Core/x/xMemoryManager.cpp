/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMemoryManager.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802233A8 -> 0x80223E80
*/
static int zeroMemoryAddress; // size: 0x4, address: 0x80D6AF30
static unsigned int MEM_CLEAR_VALUE; // size: 0x4, address: 0x80D64B18
static unsigned int MEM_DEALLOC_VALUE; // size: 0x4, address: 0x80D64B1C
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
    // Functions
    void * Allocate(unsigned int size, unsigned int options, const char * file, const char * function, int line);

    void Free(void * pointer);

    void * Reallocate(void * pointer, unsigned int size, unsigned int options, const char * file, const char * function, int line);

    unsigned int GetBlockSize(void * pointer) const;

    unsigned char IsValidPointer(void * pointer) const;

    void DumpActiveList() const;

    void DoInit(void * start, unsigned int size, unsigned char debugging);

    void * DoReallocate(void * pointer, unsigned int size, unsigned int options, const char * file, const char * function, int line);

    void * SetupDebugBlock(void * memory, unsigned int size, const char * file, const char * function, int line);

    void * RemoveDebugBlock(void * memory, unsigned int * size);

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
// Range: 0x802233A8 -> 0x802234D4
// this: r30
void * xMemoryManager::Allocate(unsigned int size /* r31 */, unsigned int options /* r28 */, const char * file /* r25 */, const char * function /* r26 */, int line /* r27 */) {
    // Local variables
    void * memory; // r29

    // References
    // -> static unsigned int MEM_CLEAR_VALUE;
    // -> static int zeroMemoryAddress;
}

static char __FUNCTION__[5]; // size: 0x5, address: 0x80D64B20
// Range: 0x802234D4 -> 0x80223648
// this: r30
void xMemoryManager::Free(void * pointer /* r31 */) {
    // Local variables
    unsigned int size; // r1+0x8

    // References
    // -> static unsigned int MEM_DEALLOC_VALUE;
    // -> static char __FUNCTION__[5];
    // -> static int zeroMemoryAddress;
}

// Range: 0x80223648 -> 0x802237B0
// this: r31
void * xMemoryManager::Reallocate(void * pointer /* r29 */, unsigned int size /* r30 */, unsigned int options /* r24 */, const char * file /* r25 */, const char * function /* r26 */, int line /* r27 */) {
    // Local variables
    void * newBlock; // r28

    // References
    // -> static int zeroMemoryAddress;
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80D64B25
// Range: 0x802237B0 -> 0x8022387C
// this: r31
unsigned int xMemoryManager::GetBlockSize(void * pointer /* r30 */) const {
    // References
    // -> static int zeroMemoryAddress;
    // -> static char __FUNCTION__[13];
}

// Range: 0x8022387C -> 0x802238E4
// this: r30
unsigned char xMemoryManager::IsValidPointer(void * pointer /* r1+0x8 */) const {
    // Local variables
    struct DebugAllocationHeader * list; // r31
}

// Range: 0x802238E4 -> 0x8022397C
// this: r29
void xMemoryManager::DumpActiveList() const {
    // Local variables
    struct DebugAllocationHeader * list; // r31
    int count; // r30
}

// total size: 0x20
struct DebugAllocationTrailer {
    // Static members
    static unsigned int MAGIC; // size: 0x4
    static unsigned int NUM_MAGIC; // size: 0x4

    // Members
    unsigned int magic[8]; // offset 0x0, size 0x20
};
// Range: 0x8022397C -> 0x802239E0
// this: r3
void xMemoryManager::DoInit(void * start /* r4 */, unsigned int size /* r5 */, unsigned char debugging /* r6 */) {}

// Range: 0x802239E0 -> 0x802239E4
void xMemoryManager::HandleOutOfMemory() {}

// Range: 0x802239E4 -> 0x80223AA8
// this: r27
void * xMemoryManager::DoReallocate(void * pointer /* r28 */, unsigned int size /* r29 */, unsigned int options /* r1+0x8 */, const char * file /* r1+0xC */, const char * function /* r1+0x10 */, int line /* r1+0x14 */) {
    // Local variables
    unsigned int copySize; // r31
    void * newBlock; // r30
}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80D64B32
// Range: 0x80223AA8 -> 0x80223C08
// this: r30
void * xMemoryManager::SetupDebugBlock(void * memory /* r1+0x8 */, unsigned int size /* r26 */, const char * file /* r1+0xC */, const char * function /* r1+0x10 */, int line /* r1+0x14 */) {
    // Local variables
    struct DebugAllocationHeader * header; // r31
    struct DebugAllocationTrailer * trailer; // r27
    int i; // r29
    int i; // r28

    // References
    // -> static char __FUNCTION__[16];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80D64B42
// Range: 0x80223C08 -> 0x80223E80
// this: r30
void * xMemoryManager::RemoveDebugBlock(void * memory /* r27 */, unsigned int * size /* r25 */) {
    // Local variables
    struct DebugAllocationHeader * header; // r31
    struct DebugAllocationTrailer * trailer; // r26
    int i; // r29
    int i; // r28

    // References
    // -> static char __FUNCTION__[17];
}

// total size: 0x1C
struct {} xMemoryManager::__vtable; // size: 0x1C, address: 0x805238B0

