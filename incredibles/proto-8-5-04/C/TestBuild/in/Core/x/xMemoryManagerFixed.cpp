/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManagerFixed.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0x1C
struct /* @anon0 */ {} xMemoryManagerFixed::__vtable; // size: 0x1C, address: 0x603A80
// total size: 0x4
class FixedHeader {
    // Members
public:
    class FixedHeader * next; // offset 0x0, size 0x4
};
// total size: 0x30
class xMemoryManagerFixed : public xMemoryManager {
    // Members
public:
    class FixedHeader * freeList; // offset 0x24, size 0x4
    unsigned int elements; // offset 0x28, size 0x4
    unsigned int elementSize; // offset 0x2C, size 0x4
};
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
// total size: 0x1C
struct /* @anon0 */ {};

/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManagerFixed.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031B370 -> 0x0031B378
*/
// Range: 0x31B370 -> 0x31B378
// this: r2
unsigned int xMemoryManagerFixed::DoGetBlockSize() {
    /* anonymous block */ {
        // Range: 0x31B370 -> 0x31B378
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManagerFixed.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031B380 -> 0x0031B388
*/
// Range: 0x31B380 -> 0x31B388
void * DoReallocate(void * pointer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x31B380 -> 0x31B388
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManagerFixed.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031B390 -> 0x0031B3A0
*/
// Range: 0x31B390 -> 0x31B3A0
// this: r2
void xMemoryManagerFixed::DoFree(void * pointer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x31B390 -> 0x31B3A0
        class FixedHeader * header; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManagerFixed.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031B3A0 -> 0x0031B3C4
*/
// Range: 0x31B3A0 -> 0x31B3C4
// this: r2
void * xMemoryManagerFixed::DoAllocate() {
    /* anonymous block */ {
        // Range: 0x31B3A0 -> 0x31B3C4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManagerFixed.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031B3D0 -> 0x0031B464
*/
// Range: 0x31B3D0 -> 0x31B464
// this: r16
void xMemoryManagerFixed::Init(void * start /* r2 */, unsigned int elements /* r18 */, unsigned int elementSize /* r17 */) {
    /* anonymous block */ {
        // Range: 0x31B3D0 -> 0x31B464
    }
}


