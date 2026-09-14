/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int zeroMemoryAddress; // size: 0x4, address: 0x6090E4
static unsigned int MEM_CLEAR_VALUE; // size: 0x4, address: 0x607C98
static unsigned int MEM_DEALLOC_VALUE; // size: 0x4, address: 0x607C9C
// total size: 0x1C
struct /* @anon0 */ {} xMemoryManager::__vtable; // size: 0x1C, address: 0x0
// total size: 0x24
class xMemoryManager {
    // Members
public:
    void * arenaStart; // offset 0x4, size 0x4
    void * arenaEnd; // offset 0x8, size 0x4
    unsigned int size; // offset 0xC, size 0x4
    char * lastFile; // offset 0x10, size 0x4
    char * lastFunction; // offset 0x14, size 0x4
    signed int lastLine; // offset 0x18, size 0x4
    unsigned int debugDataSize; // offset 0x1C, size 0x4
    class DebugAllocationHeader * activeList; // offset 0x20, size 0x4
};
// total size: 0x1C
struct /* @anon0 */ {};
// total size: 0x30
class DebugAllocationHeader {
    // Members
public:
    char * file; // offset 0x0, size 0x4
    signed int line; // offset 0x4, size 0x4
    char * function; // offset 0x8, size 0x4
    unsigned int size; // offset 0xC, size 0x4
    class DebugAllocationHeader * prev; // offset 0x10, size 0x4
    class DebugAllocationHeader * next; // offset 0x14, size 0x4
    class xMemoryManager * manager; // offset 0x18, size 0x4
    unsigned int magic[5]; // offset 0x1C, size 0x14
};
// total size: 0x10
class DebugAllocationTrailer {
    // Members
public:
    unsigned int magic[4]; // offset 0x0, size 0x10
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031C170 -> 0x0031C1D0
*/
// Range: 0x31C170 -> 0x31C1D0
// this: r2
void * xMemoryManager::RemoveDebugBlock(void * memory /* r2 */, unsigned int * size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x31C170 -> 0x31C1D0
        class DebugAllocationHeader * header; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031C1D0 -> 0x0031C268
*/
// Range: 0x31C1D0 -> 0x31C268
// this: r2
void * xMemoryManager::SetupDebugBlock(void * memory /* r2 */, unsigned int size /* r2 */, char * file /* r2 */, char * function /* r2 */, signed int line /* r2 */) {
    /* anonymous block */ {
        // Range: 0x31C1D0 -> 0x31C268
        class DebugAllocationHeader * header; // r2
        class DebugAllocationTrailer * trailer; // r7
        signed int i; // r6
        signed int i; // r4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031C270 -> 0x0031C424
*/
// Range: 0x31C270 -> 0x31C424
// this: r19
void * xMemoryManager::DoReallocate(void * pointer /* r18 */, unsigned int size /* r20 */, unsigned int options /* r16 */) {
    /* anonymous block */ {
        // Range: 0x31C270 -> 0x31C424
        unsigned int copySize; // r17
        void * newBlock; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031C430 -> 0x0031C438
*/
// Range: 0x31C430 -> 0x31C438
void HandleOutOfMemory() {
    /* anonymous block */ {
        // Range: 0x31C430 -> 0x31C438
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031C440 -> 0x0031C464
*/
// Range: 0x31C440 -> 0x31C464
// this: r2
void xMemoryManager::DoInit(void * start /* r2 */, unsigned int size /* r2 */, unsigned char debugging /* r2 */) {
    /* anonymous block */ {
        // Range: 0x31C440 -> 0x31C464
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031C470 -> 0x0031C4B8
*/
// Range: 0x31C470 -> 0x31C4B8
// this: r16
unsigned int xMemoryManager::GetBlockSize(void * pointer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x31C470 -> 0x31C4B8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031C4C0 -> 0x0031C748
*/
// Range: 0x31C4C0 -> 0x31C748
// this: r18
void * xMemoryManager::Reallocate(void * pointer /* r2 */, unsigned int size /* r16 */, unsigned int options /* r17 */) {
    /* anonymous block */ {
        // Range: 0x31C4C0 -> 0x31C748
        void * newBlock; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031C750 -> 0x0031C7DC
*/
// Range: 0x31C750 -> 0x31C7DC
// this: r16
void xMemoryManager::Free(void * pointer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x31C750 -> 0x31C7DC
        unsigned int size; // r29+0x2C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031C7E0 -> 0x0031C91C
*/
// Range: 0x31C7E0 -> 0x31C91C
// this: r18
void * xMemoryManager::Allocate(unsigned int size /* r17 */, unsigned int options /* r16 */) {
    /* anonymous block */ {
        // Range: 0x31C7E0 -> 0x31C91C
        void * memory; // r2
    }
}


