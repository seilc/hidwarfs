/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMemoryManager.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80119ACC -> 0x80119FEC
*/
static int zeroMemoryAddress; // size: 0x4, address: 0x803C16A0
static unsigned int MEM_CLEAR_VALUE; // size: 0x4, address: 0x803BD190
static unsigned int MEM_DEALLOC_VALUE; // size: 0x4, address: 0x803BD194
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
    // Functions
    void * Allocate(unsigned int size, unsigned int options);

    void Free(void * pointer);

    void * Reallocate(void * pointer, unsigned int size, unsigned int options);

    unsigned int GetBlockSize(void * pointer) const;

    void DoInit(void * start, unsigned int size, unsigned char debugging);

    void * DoReallocate(void * pointer, unsigned int size, unsigned int options);

    void * SetupDebugBlock(void * memory, unsigned int size, const char * file, const char * function, int line);

    void * RemoveDebugBlock(void * memory, unsigned int * size);

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
// Range: 0x80119ACC -> 0x80119BC8
// this: r28
void * xMemoryManager::Allocate(unsigned int size /* r29 */, unsigned int options /* r30 */) {
    // Local variables
    void * memory; // r31

    // References
    // -> static unsigned int MEM_CLEAR_VALUE;
    // -> static int zeroMemoryAddress;
}

// Range: 0x80119BC8 -> 0x80119C4C
// this: r30
void xMemoryManager::Free(void * pointer /* r31 */) {
    // Local variables
    unsigned int size; // r1+0x8

    // References
    // -> static unsigned int MEM_DEALLOC_VALUE;
    // -> static int zeroMemoryAddress;
}

// Range: 0x80119C4C -> 0x80119D6C
// this: r28
void * xMemoryManager::Reallocate(void * pointer /* r31 */, unsigned int size /* r29 */, unsigned int options /* r30 */) {
    // Local variables
    void * newBlock; // r31

    // References
    // -> static int zeroMemoryAddress;
}

// Range: 0x80119D6C -> 0x80119DC0
// this: r31
unsigned int xMemoryManager::GetBlockSize(void * pointer /* r0 */) const {
    // References
    // -> static int zeroMemoryAddress;
}

// Range: 0x80119DC0 -> 0x80119DF4
// this: r0
void xMemoryManager::DoInit(void * start /* r0 */, unsigned int size /* r0 */, unsigned char debugging /* r0 */) {}

// Range: 0x80119DF4 -> 0x80119DF8
void xMemoryManager::HandleOutOfMemory() {}

// Range: 0x80119DF8 -> 0x80119EA0
// this: r27
void * xMemoryManager::DoReallocate(void * pointer /* r28 */, unsigned int size /* r29 */, unsigned int options /* r30 */) {
    // Local variables
    unsigned int copySize; // r31
    void * newBlock; // r30
}

// total size: 0x20
struct DebugAllocationTrailer {
    // Static members
    static unsigned int MAGIC; // size: 0x4
    static unsigned int NUM_MAGIC; // size: 0x4

    // Members
    unsigned int magic[8]; // offset 0x0, size 0x20
};
// Range: 0x80119EA0 -> 0x80119F50
// this: r26
void * xMemoryManager::SetupDebugBlock(void * memory /* r27 */, unsigned int size /* r28 */, const char * file /* r29 */, const char * function /* r30 */, int line /* r31 */) {
    // Local variables
    struct DebugAllocationHeader * header; // r0
    struct DebugAllocationTrailer * trailer; // r0
    int i; // r0
    int i; // r0
}

// Range: 0x80119F50 -> 0x80119FEC
// this: r29
void * xMemoryManager::RemoveDebugBlock(void * memory /* r6 */, unsigned int * size /* r30 */) {
    // Local variables
    struct DebugAllocationHeader * header; // r31
    int i; // r0
    int i; // r0
}

// total size: 0x1C
struct {} xMemoryManager::__vtable; // size: 0x1C, address: 0x803BD198

