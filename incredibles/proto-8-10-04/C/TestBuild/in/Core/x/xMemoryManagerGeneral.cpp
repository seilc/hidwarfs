/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManagerGeneral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0x1C
struct /* @anon0 */ {} xMemoryManagerGeneral::__vtable; // size: 0x1C, address: 0x60CF30
// total size: 0x10
class FreeNode {
    // Members
public:
    class FreeNode * next; // offset 0x0, size 0x4
    class FreeNode * prev; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    unsigned int pad[1]; // offset 0xC, size 0x4
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
// total size: 0x34
class xMemoryManagerGeneral : public xMemoryManager {
    // Members
public:
    class FreeNode * freeStart; // offset 0x24, size 0x4
    class FreeNode * freeEnd; // offset 0x28, size 0x4
    enum Dir dir; // offset 0x2C, size 0x4
    enum Strategy strategy; // offset 0x30, size 0x4
};
// total size: 0x10
class AllocatedNode {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    unsigned int pad[3]; // offset 0x4, size 0xC
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
enum Dir {
    Up = 0,
    Down = 1,
};
enum Strategy {
    FirstFit = 0,
    BestFit = 1,
};
// total size: 0x1C
struct /* @anon0 */ {};

/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManagerGeneral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003210B0 -> 0x00321204
*/
// Range: 0x3210B0 -> 0x321204
// this: r2
class AllocatedNode * xMemoryManagerGeneral::ShortenNode(class AllocatedNode * allocatedNode /* r16 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3210B0 -> 0x321204
        unsigned int nodeSize; // r2
        class FreeNode * newNode; // r2
        class AllocatedNode * oldAllocatedNode; // r7
        class FreeNode * insertBefore; // r3
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManagerGeneral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00321210 -> 0x00321314
*/
// Range: 0x321210 -> 0x321314
// this: r2
void xMemoryManagerGeneral::MergeNodes(class FreeNode * node /* r2 */) {
    /* anonymous block */ {
        // Range: 0x321210 -> 0x321314
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManagerGeneral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00321320 -> 0x00321328
*/
// Range: 0x321320 -> 0x321328
unsigned int DoGetBlockSize(void * pointer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x321320 -> 0x321328
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManagerGeneral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00321330 -> 0x003218BC
*/
// Range: 0x321330 -> 0x3218BC
// this: r18
void * xMemoryManagerGeneral::DoReallocate(void * pointer /* r17 */, unsigned int size /* r2 */, unsigned int options /* r2 */) {
    /* anonymous block */ {
        // Range: 0x321330 -> 0x3218BC
        class AllocatedNode * allocatedNode; // r2
        unsigned int nodeSize; // r16
        class FreeNode * afterNode; // r10
        class FreeNode * beforeNode; // r2
        unsigned int sizeBeforeNode; // r9
        unsigned int sizeAfterNode; // r8
        void * newPointer; // r19
        void * dataStart; // r7
        unsigned int neededSize; // r4
        class FreeNode * working; // r2
        class FreeNode * newNode; // r2
        class FreeNode * working; // r2
        class AllocatedNode * newAllocatedNode; // r10
        unsigned int newSpace; // r2
        class FreeNode * newNode; // r2
        void * dataDest; // r3
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManagerGeneral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003218C0 -> 0x003219A8
*/
// Range: 0x3218C0 -> 0x3219A8
// this: r2
void xMemoryManagerGeneral::DoFree(void * pointer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3218C0 -> 0x3219A8
        class AllocatedNode * allocatedNode; // r7
        unsigned int size; // r2
        class FreeNode * node; // r2
        class FreeNode * insertBefore; // r3
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManagerGeneral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003219B0 -> 0x00321CA0
*/
// Range: 0x3219B0 -> 0x321CA0
// this: r2
void * xMemoryManagerGeneral::DoAllocate(unsigned int size /* r2 */, unsigned int options /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3219B0 -> 0x321CA0
        class FreeNode * node; // r2
        class FreeNode * search; // r8
        class FreeNode * search; // r8
        unsigned int nodeSize; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManagerGeneral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00321CA0 -> 0x00321D0C
*/
// Range: 0x321CA0 -> 0x321D0C
// this: r2
void * xMemoryManagerGeneral::GetCurrentEnd() {
    /* anonymous block */ {
        // Range: 0x321CA0 -> 0x321D0C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManagerGeneral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00321D10 -> 0x00321DA8
*/
// Range: 0x321D10 -> 0x321DA8
// this: r19
void xMemoryManagerGeneral::Init(void * start /* r18 */, unsigned int size /* r20 */, enum Dir dir /* r17 */, enum Strategy strategy /* r16 */, unsigned char debugging /* r2 */) {
    /* anonymous block */ {
        // Range: 0x321D10 -> 0x321DA8
    }
}


