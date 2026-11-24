/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xMemoryManagerGeneral.cpp
*/
// signature: xMemoryManagerGeneral::DoAllocate(unsigned int, unsigned int)
// Range: 0x8004D290 -> 0x8004D510
void * xMemoryManagerGeneral::DoAllocate(unsigned int size /* r6 */) {
    // Local variables
    class FreeNode * node; // r4
    unsigned int nodeSize; // r3

    {
        // Range: 0x8004D2C4 -> 0x8004D310
        // Local variables
        class FreeNode * search; // r8
    }
    {
        // Range: 0x8004D3B8 -> 0x8004D400
        // Local variables
        class FreeNode * search; // r8
    }
}
// signature: xMemoryManagerGeneral::DoFree(void *)
// Range: 0x8004D510 -> 0x8004D5E4
void xMemoryManagerGeneral::DoFree() {
    // Local variables
    class AllocatedNode * allocatedNode; // r4
    unsigned int size; // r5
    class FreeNode * node; // r4
    class FreeNode * insertBefore; // r5
}
// signature: xMemoryManagerGeneral::DoReallocate(void *, unsigned int, unsigned int)
// Range: 0x8004D5F0 -> 0x8004DC68
void * xMemoryManagerGeneral::DoReallocate(class xMemoryManagerGeneral * this /* r29 */, void * pointer /* r30 */) {
    // Local variables
    class AllocatedNode * allocatedNode; // r0
    unsigned int nodeSize; // r31
    class FreeNode * afterNode; // r8
    unsigned int sizeBeforeNode; // r9
    unsigned int sizeAfterNode; // r10
    void * dataStart; // r6
    unsigned int neededSize; // reg65535
    void * dataDest; // r4

    {
        // Range: 0x8004D7C0 -> 0x8004D8AC
        // Local variables
        void * newPointer; // r28
    }
    {
        // Range: 0x8004D9CC -> 0x8004DB14
        // Local variables
        unsigned int newSpace; // r11
        class AllocatedNode * newAllocatedNode; // r10
    }
}
// signature: xMemoryManagerGeneral::DoGetBlockSize(void *) const
// Range: 0x8004DC70 -> 0x8004DC78
unsigned int xMemoryManagerGeneral::DoGetBlockSize() const {
}
// signature: xMemoryManagerGeneral::MergeNodes(xMemoryManagerGeneral::FreeNode *)
// Range: 0x8004DC80 -> 0x8004DD74
void xMemoryManagerGeneral::MergeNodes() {
}
// signature: xMemoryManagerGeneral::ShortenNode(xMemoryManagerGeneral::AllocatedNode *, unsigned int)
// Range: 0x8004DD80 -> 0x8004DF38
class AllocatedNode * xMemoryManagerGeneral::ShortenNode(class AllocatedNode * allocatedNode /* r31 */) {
    // Local variables
    unsigned int nodeSize; // r9
    class FreeNode * newNode; // r4

    {
        // Range: 0x8004DDA4 -> 0x8004DE5C
        // Local variables
        class AllocatedNode * oldAllocatedNode; // r7
    }
    {
        // Range: 0x8004DE84 -> 0x8004DF1C
        // Local variables
        class FreeNode * insertBefore; // r6
    }
}
