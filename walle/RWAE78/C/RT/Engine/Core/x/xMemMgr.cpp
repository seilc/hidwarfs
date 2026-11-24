/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xMemMgr.cpp
*/
enum GlobalHeapEnum gActiveHeap; // size: 0x4, address: 0x807589B0
static class xMemWatermark memWatermark; // size: 0xA4, address: 0x807589C0
// signature: xMemAlloc(Memory::GlobalHeapEnum, unsigned int, int, eMemMgrTag)
// Range: 0x8004CAF0 -> 0x8004CCD4
void * xMemAlloc(enum GlobalHeapEnum heapID /* r28 */, unsigned int size /* r29 */) {
    // Local variables
    void * newMemory; // r30

    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x8004CCE0 -> 0x8004CD38
void * xMemPushTemp(unsigned int size /* r30 */) {
    // Local variables
    void * newMemory; // r31
}
// signature: xMemPopTemp(void *)
// Range: 0x8004CD40 -> 0x8004CD58
void xMemPopTemp() {
}
// Range: 0x8004CD60 -> 0x8004CD90
int xMemPushBase() {
    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: xMemPopBase(int)
// Range: 0x8004CD90 -> 0x8004D040
int xMemPopBase() {
    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x8004D040 -> 0x8004D0E8
static void xMemPoolAddElements(class xMemPool * pool /* r23 */, void * buffer /* r24 */, unsigned int count /* r25 */) {
    // Local variables
    int i; // r29
    void * curr; // r4
    void (* initCB)(class xMemPool * pool, void * data); // r28
    unsigned int next; // r27
    unsigned int size; // r26
}
// signature: xMemPoolFree(xMemPool *, void *)
// Range: 0x8004D0F0 -> 0x8004D14C
void xMemPoolFree() {
    // Local variables
    void * freeList; // r5
    unsigned int next; // r6

    {
        // Range: 0x8004D0F8 -> 0x8004D140
        // Local variables
        void * curr; // r8
        void * * prev; // r7
    }
}
