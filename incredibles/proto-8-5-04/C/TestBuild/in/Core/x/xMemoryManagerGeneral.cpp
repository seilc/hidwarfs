/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManagerGeneral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0x1C
struct /* @anon0 */ {} xMemoryManagerGeneral::__vtable; // size: 0x1C, address: 0x603AA0
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
// total size: 0x10
class AllocatedNode {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    unsigned int pad[3]; // offset 0x4, size 0xC
};
// total size: 0x1C
struct /* @anon0 */ {};

/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManagerGeneral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031B470 -> 0x0031B5C4
*/
// Range: 0x31B470 -> 0x31B5C4
// this: r2
class AllocatedNode * xMemoryManagerGeneral::ShortenNode(class AllocatedNode * allocatedNode /* r16 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x31B470 -> 0x31B5C4
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
    Code range: 0x0031B5D0 -> 0x0031B6D4
*/
// Range: 0x31B5D0 -> 0x31B6D4
// this: r2
void xMemoryManagerGeneral::MergeNodes(class FreeNode * node /* r2 */) {
    /* anonymous block */ {
        // Range: 0x31B5D0 -> 0x31B6D4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManagerGeneral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031B6E0 -> 0x0031B6E8
*/
// Range: 0x31B6E0 -> 0x31B6E8
unsigned int DoGetBlockSize(void * pointer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x31B6E0 -> 0x31B6E8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManagerGeneral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031B6F0 -> 0x0031BC7C
*/
// Range: 0x31B6F0 -> 0x31BC7C
// this: r18
void * xMemoryManagerGeneral::DoReallocate(void * pointer /* r17 */, unsigned int size /* r2 */, unsigned int options /* r2 */) {
    /* anonymous block */ {
        // Range: 0x31B6F0 -> 0x31BC7C
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
    Code range: 0x0031BC80 -> 0x0031BD68
*/
// Range: 0x31BC80 -> 0x31BD68
// this: r2
void xMemoryManagerGeneral::DoFree(void * pointer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x31BC80 -> 0x31BD68
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
    Code range: 0x0031BD70 -> 0x0031C060
*/
// Range: 0x31BD70 -> 0x31C060
// this: r2
void * xMemoryManagerGeneral::DoAllocate(unsigned int size /* r2 */, unsigned int options /* r2 */) {
    /* anonymous block */ {
        // Range: 0x31BD70 -> 0x31C060
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
    Code range: 0x0031C060 -> 0x0031C0CC
*/
// Range: 0x31C060 -> 0x31C0CC
// this: r2
void * xMemoryManagerGeneral::GetCurrentEnd() {
    /* anonymous block */ {
        // Range: 0x31C060 -> 0x31C0CC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xMemoryManagerGeneral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031C0D0 -> 0x0031C168
*/
// Range: 0x31C0D0 -> 0x31C168
// this: r19
void xMemoryManagerGeneral::Init(void * start /* r18 */, unsigned int size /* r20 */, enum Dir dir /* r17 */, enum Strategy strategy /* r16 */, unsigned char debugging /* r2 */) {
    /* anonymous block */ {
        // Range: 0x31C0D0 -> 0x31C168
    }
}


