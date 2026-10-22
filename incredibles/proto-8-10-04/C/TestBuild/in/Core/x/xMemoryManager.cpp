/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int zeroMemoryAddress; // size: 0x4, address: 0x6124FC
static unsigned int MEM_CLEAR_VALUE; // size: 0x4, address: 0x6110A0
static unsigned int MEM_DEALLOC_VALUE; // size: 0x4, address: 0x6110A4
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
// total size: 0x1C
struct /* @anon0 */ {};

/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00321DB0 -> 0x00321E10
*/
// Range: 0x321DB0 -> 0x321E10
// this: r2
void * xMemoryManager::RemoveDebugBlock(void * memory /* r2 */, unsigned int * size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x321DB0 -> 0x321E10
        class DebugAllocationHeader * header; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00321E10 -> 0x00321EA8
*/
// Range: 0x321E10 -> 0x321EA8
// this: r2
void * xMemoryManager::SetupDebugBlock(void * memory /* r2 */, unsigned int size /* r2 */, char * file /* r2 */, char * function /* r2 */, signed int line /* r2 */) {
    /* anonymous block */ {
        // Range: 0x321E10 -> 0x321EA8
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
    Code range: 0x00321EB0 -> 0x00322064
*/
// Range: 0x321EB0 -> 0x322064
// this: r19
void * xMemoryManager::DoReallocate(void * pointer /* r18 */, unsigned int size /* r20 */, unsigned int options /* r16 */) {
    /* anonymous block */ {
        // Range: 0x321EB0 -> 0x322064
        unsigned int copySize; // r17
        void * newBlock; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00322070 -> 0x00322078
*/
// Range: 0x322070 -> 0x322078
void HandleOutOfMemory() {
    /* anonymous block */ {
        // Range: 0x322070 -> 0x322078
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00322080 -> 0x003220A4
*/
// Range: 0x322080 -> 0x3220A4
// this: r2
void xMemoryManager::DoInit(void * start /* r2 */, unsigned int size /* r2 */, unsigned char debugging /* r2 */) {
    /* anonymous block */ {
        // Range: 0x322080 -> 0x3220A4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003220B0 -> 0x003220F8
*/
// Range: 0x3220B0 -> 0x3220F8
// this: r16
unsigned int xMemoryManager::GetBlockSize(void * pointer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3220B0 -> 0x3220F8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00322100 -> 0x00322388
*/
// Range: 0x322100 -> 0x322388
// this: r18
void * xMemoryManager::Reallocate(void * pointer /* r2 */, unsigned int size /* r16 */, unsigned int options /* r17 */) {
    /* anonymous block */ {
        // Range: 0x322100 -> 0x322388
        void * newBlock; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00322390 -> 0x0032241C
*/
// Range: 0x322390 -> 0x32241C
// this: r16
void xMemoryManager::Free(void * pointer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x322390 -> 0x32241C
        unsigned int size; // r29+0x2C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00322420 -> 0x0032255C
*/
// Range: 0x322420 -> 0x32255C
// this: r18
void * xMemoryManager::Allocate(unsigned int size /* r17 */, unsigned int options /* r16 */) {
    /* anonymous block */ {
        // Range: 0x322420 -> 0x32255C
        void * memory; // r2
    }
}


