/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GKernel\GStandardAllocator_sys.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x805D2700 -> 0x805D3F28
*/
// total size: 0x2
class Header {
    // Members
    unsigned char Value; // offset 0x0, size 0x1
    unsigned char SplitCount; // offset 0x1, size 0x1
};
// total size: 0x4
class AlignHeader {
    // Members
    unsigned short Offset; // offset 0x0, size 0x2
    class Header HeaderVal; // offset 0x2, size 0x2
};
// total size: 0x10
class GAllocList {
    // Members
    class AllocNode Allocations; // offset 0x0, size 0x8
    class AllocInfo * pFree; // offset 0x8, size 0x4
    class AllocInfoBlock * pBlocks; // offset 0xC, size 0x4
};
// total size: 0x1C
class CheckedStaticLock {
    // Members
    class GLock Lock; // offset 0x0, size 0x1
    bool Initialized; // offset 0x18, size 0x1
};
// total size: 0x20
class AllocInfo : public AllocNode {
    // Members
    void * pBlock; // offset 0x8, size 0x4
    unsigned long Size; // offset 0xC, size 0x4
    int BlockType; // offset 0x10, size 0x4
    int Line; // offset 0x14, size 0x4
    char * pFilename; // offset 0x18, size 0x4
    char * pClassname; // offset 0x1C, size 0x4
};
// total size: 0x8
class AllocNode {
    // Members
    class @class __anon; // offset 0x0, size 0x4
    class AllocNode * pPrev; // offset 0x0, size 0x4
    class AllocNode * pLast; // offset 0x0, size 0x4
    class @class __anon; // offset 0x4, size 0x4
    class AllocNode * pNext; // offset 0x4, size 0x4
    class AllocNode * pFirst; // offset 0x4, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class AllocNode * pPrev; // offset 0x0, size 0x4
    class AllocNode * pLast; // offset 0x0, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class AllocNode * pNext; // offset 0x0, size 0x4
    class AllocNode * pFirst; // offset 0x0, size 0x4
};
// total size: 0x2004
class AllocInfoBlock {
    // Members
    class AllocInfo Info[256]; // offset 0x0, size 0x2000
    class AllocInfoBlock * pPrev; // offset 0x2000, size 0x4
};
static class GAllocList * GFC_pAllocList; // size: 0x4, address: 0x808DECA0
static class GAllocator * GFC_pBaseAllocator; // size: 0x4, address: 0x808DECA4
class CheckedStaticLock AllocListLock; // size: 0x1C, address: 0x80872384
struct {} __vt__23GStandardBlockAllocator; // size: 0x24, address: 0x8073FAF0
struct {} __vt__18GStandardAllocator; // size: 0x24, address: 0x8073FB14
struct {} __vt__15GDebugAllocator; // size: 0x28, address: 0x8073FB38
// signature: GAllocator::AllocAligned(unsigned long, unsigned long, unsigned long)
// Range: 0x805D2700 -> 0x805D279C
void * GAllocator::AllocAligned(unsigned long align /* r29 */, unsigned long extra /* r30 */) {
    // Local variables
    unsigned long headerSize; // r31
    unsigned long addr; // r0
    unsigned long userAddr; // r4
}
// signature: GAllocator::FreeAligned(void *)
// Range: 0x805D27A0 -> 0x805D27C4
void GAllocator::FreeAligned() {
}
// Range: 0x805D27D0 -> 0x805D2818
void * GStandardBlockAllocator::GStandardBlockAllocator(class GStandardBlockAllocator * this /* r31 */) {
    // References
    // -> struct {} __vt__23GStandardBlockAllocator;
}
// signature: GStandardBlockAllocator::Free(void *)
// Range: 0x805D2820 -> 0x805D2828
void GStandardBlockAllocator::Free() {
}
// signature: GStandardBlockAllocator::Alloc(unsigned long)
// Range: 0x805D2830 -> 0x805D2838
void * GStandardBlockAllocator::Alloc() {
}
// signature: GStandardBlockAllocator::Realloc(void *, unsigned long)
// Range: 0x805D2840 -> 0x805D284C
void * GStandardBlockAllocator::Realloc() {
}
// Range: 0x805D2850 -> 0x805D28B4
void * GStandardAllocator::GStandardAllocator(class GStandardAllocator * this /* r31 */) {
    // References
    // -> struct {} __vt__18GStandardAllocator;
}
// Range: 0x805D28C0 -> 0x805D2990
void GStandardAllocator::InitBlockTable() {
    // Local variables
    int i; // r0
    int sz; // r5
}
// Range: 0x805D2990 -> 0x805D2A70
bool GStandardAllocator::AllocBlock(class GStandardAllocator * this /* r28 */, unsigned int index /* r29 */) {
    // Local variables
    void * pmem; // r0

    {
        // Range: 0x805D29F4 -> 0x805D2A4C
        // Local variables
        class Node * pfirst; // r8
    }
}
// Range: 0x805D2A70 -> 0x805D2B40
void * GStandardAllocator::SystemAlloc(class GStandardAllocator * this /* r28 */, unsigned long size /* r29 */, unsigned long align /* r30 */, unsigned long uextra /* r31 */) {
    // Local variables
    unsigned char * pmem; // r3
    unsigned char * puser; // r3
    class Header * pheader; // r0
}
// Range: 0x805D2B40 -> 0x805D2FB8
void * GStandardAllocator::AllocImpl(class GStandardAllocator * this /* r24 */, unsigned long usize /* r25 */, unsigned long align /* r26 */, unsigned long extra /* r27 */) {
    // Local variables
    void * pret; // r0
    unsigned long size; // r30
    long i; // r29
    long maxIndex; // r5
    long roundedIndex; // r28
    class Node * p; // r4

    {
        // Range: 0x805D2C10 -> 0x805D2C4C
        // Local variables
        int k; // r5
        int j; // r4
    }
    {
        // Range: 0x805D2F04 -> 0x805D2F48
        // Local variables
        unsigned long offset; // r5
        unsigned long userAddr; // r3

        {
            // Range: 0x805D2F34 -> 0x805D2F48
            // Local variables
            class AlignHeader * ph; // r0
        }
    }
}
// signature: GStandardAllocator::FreeImpl(void *, bool)
// Range: 0x805D2FC0 -> 0x805D31B8
void GStandardAllocator::FreeImpl(class GStandardAllocator * this /* r25 */, bool aligned /* r26 */) {
    // Local variables
    unsigned long sizeFreed; // r29
    class AlignHeader * palign; // r0
    class Node * pnode; // r28
    unsigned int i; // r27
    unsigned int maxIndex; // r7
    long size; // r3
}
// Range: 0x805D31C0 -> 0x805D3394
void * GStandardAllocator::Realloc(class GStandardAllocator * this /* r27 */, void * pmem /* r28 */, unsigned long size /* r29 */) {
    // Local variables
    unsigned long trackedSize; // r30
    unsigned long oldSize; // r31
    unsigned long copySize; // r26
    void * pnewMem; // r30

    {
        // Range: 0x805D3218 -> 0x805D324C
        // Local variables
        class Node * pnode; // r0
    }
}
// signature: GStandardAllocator::Alloc(unsigned long)
// Range: 0x805D33A0 -> 0x805D33AC
void * GStandardAllocator::Alloc() {
}
// signature: GStandardAllocator::Free(void *)
// Range: 0x805D33B0 -> 0x805D33B8
void GStandardAllocator::Free() {
}
// signature: GStandardAllocator::AllocAligned(unsigned long, unsigned long, unsigned long)
// Range: 0x805D33C0 -> 0x805D33D0
void * GStandardAllocator::AllocAligned() {
}
// signature: GStandardAllocator::FreeAligned(void *)
// Range: 0x805D33D0 -> 0x805D33D8
void GStandardAllocator::FreeAligned() {
}
// Range: 0x805D3EE0 -> 0x805D3F28
void * CheckedStaticLock::~CheckedStaticLock(class CheckedStaticLock * this /* r31 */) {
}
// Range: 0x805D3E90 -> 0x805D3EE0
static void __sinit_\GStandardAllocator_sys_cpp() {
    // References
    // -> class CheckedStaticLock AllocListLock;
}
// Range: 0x805D33E0 -> 0x805D348C
class AllocInfo * GAllocList::AllocInfoNode(class GAllocList * this /* r29 */) {
    {
        // Range: 0x805D33FC -> 0x805D3468
        // Local variables
        class AllocInfoBlock * pblock; // r0
        class GAllocator * pinfoAllocator; // r0

        {
            // Range: 0x805D3434 -> 0x805D3444
            // Local variables
            unsigned int i; // r30
        }
    }
}
// signature: GAllocList::FreeInfoNode(GAllocList::AllocInfo *)
// Range: 0x805D3490 -> 0x805D34A8
void GAllocList::FreeInfoNode() {
}
// Range: 0x805D34B0 -> 0x805D357C
void GAllocList::AddBlock(class GAllocList * this /* r25 */, unsigned char * pnew /* r26 */, unsigned long size /* r27 */, int blocktype /* r28 */, char * pfilename /* r29 */, int line /* r30 */, char * pclassname /* r31 */) {
    // Local variables
    class AllocInfo * pinfo; // r0
}
// Range: 0x805D3580 -> 0x805D35A8
void GAllocList::DumpBlocks() {
    // Local variables
    class AllocInfo * pinfo; // r4
}
// Range: 0x805D35B0 -> 0x805D36B8
void * GDebugAllocator::Alloc(unsigned long size /* r25 */, int blocktype /* r26 */, char * pfilename /* r27 */, int line /* r28 */, char * pclassname /* r29 */) {
    // Local variables
    void * pnewMem; // r30

    // References
    // -> static class GAllocList * GFC_pAllocList;
    // -> class CheckedStaticLock AllocListLock;
    // -> static class GAllocator * GFC_pBaseAllocator;
}
// Range: 0x805D36C0 -> 0x805D39EC
void * GDebugAllocator::Realloc(void * pmem /* r24 */, unsigned long size /* r27 */, int blocktype /* r28 */, char * pfilename /* r29 */, int line /* r30 */, char * pclassname /* r31 */) {
    // Local variables
    unsigned char * poldMem; // r4
    class AllocInfo * poldInfo; // r25
    void * pnewMem; // r24

    {
        // Range: 0x805D3700 -> 0x805D37B0
        // Local variables
        void * pnewMem; // r25
    }

    // References
    // -> static class GAllocList * GFC_pAllocList;
    // -> class CheckedStaticLock AllocListLock;
    // -> static class GAllocator * GFC_pBaseAllocator;
}
// signature: GDebugAllocator::Free(void *, int, const char *, int, const char *)
// Range: 0x805D39F0 -> 0x805D3B50
void GDebugAllocator::Free(int blocktype /* r28 */) {
    // References
    // -> static class GAllocator * GFC_pBaseAllocator;
    // -> static class GAllocList * GFC_pAllocList;
    // -> class CheckedStaticLock AllocListLock;
}
// Range: 0x805D3B50 -> 0x805D3C68
void * GDebugAllocator::AllocAligned(unsigned long size /* r25 */, unsigned long align /* r31 */, unsigned long extra /* r30 */, int blocktype /* r26 */, char * pfilename /* r27 */, int line /* r28 */, char * pclassname /* r29 */) {
    // Local variables
    void * pnewMem; // r30

    // References
    // -> static class GAllocList * GFC_pAllocList;
    // -> class CheckedStaticLock AllocListLock;
    // -> static class GAllocator * GFC_pBaseAllocator;
}
// signature: GDebugAllocator::FreeAligned(void *, int, const char *, int, const char *)
// Range: 0x805D3C70 -> 0x805D3DD0
void GDebugAllocator::FreeAligned(int blocktype /* r28 */) {
    // References
    // -> static class GAllocator * GFC_pBaseAllocator;
    // -> static class GAllocList * GFC_pAllocList;
    // -> class CheckedStaticLock AllocListLock;
}
// Range: 0x805D3DD0 -> 0x805D3E14
class GAllocatorStats * GDebugAllocator::GetStats() const {
    // References
    // -> static class GAllocator * GFC_pBaseAllocator;
}
// Range: 0x805D3E20 -> 0x805D3E6C
void GDebugAllocator::Dump() {
    // References
    // -> static class GAllocList * GFC_pAllocList;
    // -> class CheckedStaticLock AllocListLock;
}
