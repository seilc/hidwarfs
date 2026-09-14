/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemoryManagerGeneral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040A880 -> 0x0040A9D4
*/
// Range: 0x40A880 -> 0x40A9D4
// this: r2
class AllocatedNode * xMemoryManagerGeneral::ShortenNode(class AllocatedNode * allocatedNode /* r16 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40A880 -> 0x40A9D4
        unsigned int nodeSize; // r2
        class FreeNode * newNode; // r2
        class AllocatedNode * oldAllocatedNode; // r7
        class FreeNode * insertBefore; // r3
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemoryManagerGeneral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040A9E0 -> 0x0040AAE4
*/
// Range: 0x40A9E0 -> 0x40AAE4
// this: r2
void xMemoryManagerGeneral::MergeNodes(class FreeNode * node /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40A9E0 -> 0x40AAE4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemoryManagerGeneral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040AAF0 -> 0x0040AAF8
*/
// Range: 0x40AAF0 -> 0x40AAF8
unsigned int DoGetBlockSize(void * pointer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40AAF0 -> 0x40AAF8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemoryManagerGeneral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040AB00 -> 0x0040B08C
*/
// Range: 0x40AB00 -> 0x40B08C
// this: r18
void * xMemoryManagerGeneral::DoReallocate(void * pointer /* r17 */, unsigned int size /* r2 */, unsigned int options /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40AB00 -> 0x40B08C
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
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemoryManagerGeneral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040B090 -> 0x0040B178
*/
// Range: 0x40B090 -> 0x40B178
// this: r2
void xMemoryManagerGeneral::DoFree(void * pointer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40B090 -> 0x40B178
        class AllocatedNode * allocatedNode; // r7
        unsigned int size; // r2
        class FreeNode * node; // r2
        class FreeNode * insertBefore; // r3
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemoryManagerGeneral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040B180 -> 0x0040B470
*/
// Range: 0x40B180 -> 0x40B470
// this: r2
void * xMemoryManagerGeneral::DoAllocate(unsigned int size /* r2 */, unsigned int options /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40B180 -> 0x40B470
        class FreeNode * node; // r2
        class FreeNode * search; // r8
        class FreeNode * search; // r8
        unsigned int nodeSize; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemoryManagerGeneral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040B470 -> 0x0040B4DC
*/
// Range: 0x40B470 -> 0x40B4DC
// this: r2
void * xMemoryManagerGeneral::GetCurrentEnd() {
    /* anonymous block */ {
        // Range: 0x40B470 -> 0x40B4DC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xMemoryManagerGeneral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0040B4E0 -> 0x0040B544
*/
// Range: 0x40B4E0 -> 0x40B544
// this: r2
void xMemoryManagerGeneral::Init(void * start /* r2 */, unsigned int size /* r2 */, enum Dir dir /* r2 */, enum Strategy strategy /* r2 */, unsigned char debugging /* r2 */) {
    /* anonymous block */ {
        // Range: 0x40B4E0 -> 0x40B544
    }
}


