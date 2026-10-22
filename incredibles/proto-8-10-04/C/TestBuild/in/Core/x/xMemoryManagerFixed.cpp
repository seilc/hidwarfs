/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManagerFixed.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0x1C
struct /* @anon0 */ {} xMemoryManagerFixed::__vtable; // size: 0x1C, address: 0x60CF10
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
// total size: 0x4
class FixedHeader {
    // Members
public:
    class FixedHeader * next; // offset 0x0, size 0x4
};
// total size: 0x1C
struct /* @anon0 */ {};

/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManagerFixed.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00320FB0 -> 0x00320FB8
*/
// Range: 0x320FB0 -> 0x320FB8
// this: r2
unsigned int xMemoryManagerFixed::DoGetBlockSize() {
    /* anonymous block */ {
        // Range: 0x320FB0 -> 0x320FB8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManagerFixed.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00320FC0 -> 0x00320FC8
*/
// Range: 0x320FC0 -> 0x320FC8
void * DoReallocate(void * pointer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x320FC0 -> 0x320FC8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManagerFixed.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00320FD0 -> 0x00320FE0
*/
// Range: 0x320FD0 -> 0x320FE0
// this: r2
void xMemoryManagerFixed::DoFree(void * pointer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x320FD0 -> 0x320FE0
        class FixedHeader * header; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManagerFixed.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00320FE0 -> 0x00321004
*/
// Range: 0x320FE0 -> 0x321004
// this: r2
void * xMemoryManagerFixed::DoAllocate() {
    /* anonymous block */ {
        // Range: 0x320FE0 -> 0x321004
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManagerFixed.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00321010 -> 0x003210A4
*/
// Range: 0x321010 -> 0x3210A4
// this: r16
void xMemoryManagerFixed::Init(void * start /* r2 */, unsigned int elements /* r18 */, unsigned int elementSize /* r17 */) {
    /* anonymous block */ {
        // Range: 0x321010 -> 0x3210A4
    }
}


