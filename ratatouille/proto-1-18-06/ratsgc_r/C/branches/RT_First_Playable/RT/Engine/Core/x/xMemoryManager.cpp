/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xMemoryManager.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C5500 -> 0x801C5E30
*/
static int zeroMemoryAddress; // size: 0x4, address: 0x80C08AF0
static unsigned int MEM_CLEAR_VALUE; // size: 0x4, address: 0x80C02DD0
static unsigned int MEM_DEALLOC_VALUE; // size: 0x4, address: 0x80C02DD4
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
// Range: 0x801C5500 -> 0x801C562C
// this: r25
void * xMemoryManager::Allocate(unsigned int size /* r26 */, unsigned int options /* r27 */, const char * file /* r28 */, const char * function /* r29 */, int line /* r30 */) {
    // Local variables
    void * memory; // r31

    // References
    // -> static unsigned int MEM_CLEAR_VALUE;
    // -> static int zeroMemoryAddress;
}

static char __FUNCTION__[5]; // size: 0x5, address: 0x80C02DD8
// Range: 0x801C562C -> 0x801C5778
// this: r30
void xMemoryManager::Free(void * pointer /* r31 */) {
    // Local variables
    unsigned int size; // r1+0x8

    // References
    // -> static unsigned int MEM_DEALLOC_VALUE;
    // -> static char __FUNCTION__[5];
    // -> static int zeroMemoryAddress;
}

// Range: 0x801C5778 -> 0x801C58D4
// this: r25
void * xMemoryManager::Reallocate(void * pointer /* r31 */, unsigned int size /* r26 */, unsigned int options /* r27 */, const char * file /* r28 */, const char * function /* r29 */, int line /* r30 */) {
    // Local variables
    void * newBlock; // r31

    // References
    // -> static int zeroMemoryAddress;
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80C02DE0
// Range: 0x801C58D4 -> 0x801C5990
// this: r30
unsigned int xMemoryManager::GetBlockSize(void * pointer /* r31 */) const {
    // References
    // -> static int zeroMemoryAddress;
    // -> static char __FUNCTION__[13];
}

// Range: 0x801C5990 -> 0x801C59F4
// this: r0
unsigned char xMemoryManager::IsValidPointer(void * pointer /* r30 */) const {
    // Local variables
    struct DebugAllocationHeader * list; // r31
}

// total size: 0x20
struct DebugAllocationTrailer {
    // Static members
    static unsigned int MAGIC; // size: 0x4
    static unsigned int NUM_MAGIC; // size: 0x4

    // Members
    unsigned int magic[8]; // offset 0x0, size 0x20
};
// Range: 0x801C59F4 -> 0x801C5A3C
// this: r0
void xMemoryManager::DoInit(void * start /* r0 */, unsigned int size /* r0 */, unsigned char debugging /* r0 */) {}

// Range: 0x801C5A3C -> 0x801C5A40
void xMemoryManager::HandleOutOfMemory() {}

// Range: 0x801C5A40 -> 0x801C5B00
// this: r24
void * xMemoryManager::DoReallocate(void * pointer /* r25 */, unsigned int size /* r26 */, unsigned int options /* r27 */, const char * file /* r28 */, const char * function /* r29 */, int line /* r30 */) {
    // Local variables
    unsigned int copySize; // r31
    void * newBlock; // r30
}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80C02DF0
// Range: 0x801C5B00 -> 0x801C5C20
// this: r31
void * xMemoryManager::SetupDebugBlock(void * memory /* r26 */, unsigned int size /* r27 */, const char * file /* r28 */, const char * function /* r29 */, int line /* r30 */) {
    // Local variables
    struct DebugAllocationHeader * header; // r0
    struct DebugAllocationTrailer * trailer; // r0

    // References
    // -> static char __FUNCTION__[16];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80C02E00
// Range: 0x801C5C20 -> 0x801C5E30
// this: r29
void * xMemoryManager::RemoveDebugBlock(void * memory /* r27 */, unsigned int * size /* r30 */) {
    // Local variables
    struct DebugAllocationHeader * header; // r31
    struct DebugAllocationTrailer * trailer; // r28
    int i; // r0
    int i; // r27

    // References
    // -> static char __FUNCTION__[17];
}

// total size: 0x1C
struct {} xMemoryManager::__vtable; // size: 0x1C, address: 0x8043E0C8

