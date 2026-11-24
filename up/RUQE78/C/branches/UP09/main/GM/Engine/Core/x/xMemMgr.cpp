/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xMemMgr.cpp
*/
enum GlobalHeapEnum gActiveHeap; // size: 0x4, address: 0x808096A8
static class xMemWatermark memWatermark; // size: 0xA4, address: 0x808096B8
// signature: @unnamed@WAD00_cpp@::xMemWatermark::PopWatermark(int)
// Range: 0x80069820 -> 0x80069AA8
static int @unnamed@WAD00_cpp@::xMemWatermark::PopWatermark(class xMemWatermark * this /* r28 */) {
    // Local variables
    int endIndex; // r29
    enum GlobalHeapEnum heap; // r4

    {
        // Range: 0x80069854 -> 0x800698E4
        // Local variables
        int i; // r27

        {
            // Range: 0x80069854 -> 0x800698E4
            // Local variables
            void * mem; // r0
        }
    }
}
// signature: xMemAlloc(Memory::GlobalHeapEnum, unsigned int, int, eMemMgrTag)
// Range: 0x80069AB0 -> 0x80069C94
void * xMemAlloc(enum GlobalHeapEnum heapID /* r28 */, unsigned int size /* r29 */) {
    // Local variables
    void * newMemory; // r30

    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x80069CA0 -> 0x80069E9C
void * MEM_RTU_REALLOC_STATIC(void * memblock /* r29 */, unsigned long size /* r30 */) {
    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x80069EA0 -> 0x80069EF8
void * xMemPushTemp(unsigned int size /* r30 */) {
    // Local variables
    void * newMemory; // r31
}
// signature: xMemPopTemp(void *)
// Range: 0x80069F00 -> 0x80069F18
void xMemPopTemp() {
}
// Range: 0x80069F20 -> 0x80069F50
int xMemPushBase() {
    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: xMemPopBase(int)
// Range: 0x80069F50 -> 0x80069F60
int xMemPopBase() {
    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x80069F60 -> 0x8006A008
static void xMemPoolAddElements(class xMemPool * pool /* r23 */, void * buffer /* r24 */, unsigned int count /* r25 */) {
    // Local variables
    int i; // r29
    void * curr; // r4
    void (* initCB)(class xMemPool * pool, void * data); // r28
    unsigned int next; // r27
    unsigned int size; // r26
}
// signature: xMemPoolFree(xMemPool *, void *)
// Range: 0x8006A010 -> 0x8006A06C
void xMemPoolFree() {
    // Local variables
    void * freeList; // r5
    unsigned int next; // r6

    {
        // Range: 0x8006A018 -> 0x8006A060
        // Local variables
        void * curr; // r8
        void * * prev; // r7
    }
}
