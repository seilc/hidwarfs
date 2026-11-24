/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xMemMgr.cpp
*/
static class xMemWatermark memWatermark; // size: 0x228, address: 0x807213B0
// Range: 0x80051D10 -> 0x80051D4C
static void * @unnamed@WAD00_cpp@::xMemWatermark::xMemWatermark() {
    // References
    // -> struct {} __vt__Q24Util23BlockAllocatorArray<Pv>;
}
// Range: 0x80038930 -> 0x800389DC
static void @unnamed@WAD00_cpp@::xMemWatermark::PushBlock(class xMemWatermark * this /* r30 */, class Block * lastBlock /* r31 */) {
    // Local variables
    class Block * newBlock; // r0

    {
        // Range: 0x80038988 -> 0x800389C0
        // Local variables
        class Block * it; // r4
    }
}
// Range: 0x800389E0 -> 0x80038B4C
static unsigned char * @unnamed@WAD00_cpp@::xMemWatermark::PushMemory(class xMemWatermark * this /* r30 */, enum eMemMgrTag tag /* r0 */, unsigned int size /* r29 */) {
    {
        // Range: 0x80038A0C -> 0x80038A5C
        // Local variables
        unsigned char * & smallAlloc; // r0
    }
    {
        // Range: 0x80038A60 -> 0x80038AC8
        // Local variables
        class Block * it; // r31
    }
}
// Range: 0x80038B50 -> 0x80038BC4
void xMemInit() {
    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: xMemAlloc(Memory::GlobalHeapEnum, unsigned int, int, eMemMgrTag)
// Range: 0x80038BD0 -> 0x80038C20
void * xMemAlloc(unsigned int size /* r30 */) {
    // Local variables
    void * newMemory; // r31

    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x80038C20 -> 0x80038CF8
void * MEM_RTU_REALLOC_STATIC(void * memblock /* r29 */, unsigned long size /* r30 */) {
    {
        // Range: 0x80038C28 -> 0x80038CA4
        // Local variables
        void * mem; // r31
    }

    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x80038D00 -> 0x80038D50
void * xMemPushTemp(unsigned int size /* r30 */) {
    // Local variables
    void * newMemory; // r31
}
// signature: xMemPopTemp(void *)
// Range: 0x80038D50 -> 0x80038D68
void xMemPopTemp() {
}
// Range: 0x80038D70 -> 0x80038E04
int xMemPushBase() {
    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: xMemPopBase(int)
// Range: 0x80038E10 -> 0x80039008
int xMemPopBase() {
    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x80039010 -> 0x800390B8
static void xMemPoolAddElements(class xMemPool * pool /* r23 */, void * buffer /* r24 */, unsigned int count /* r25 */) {
    // Local variables
    int i; // r29
    void * curr; // r4
    void (* initCB)(class xMemPool * pool, void * data); // r28
    unsigned int next; // r27
    unsigned int size; // r26
}
// signature: xMemPoolSetup(xMemPool *, void *, unsigned int, unsigned int, void (*)(xMemPool *, void *), unsigned int, unsigned int, unsigned int)
// Range: 0x800390C0 -> 0x800390F4
void xMemPoolSetup(unsigned int nextOffset /* r11 */) {
}
// signature: xMemPoolAlloc(xMemPool *, unsigned int)
// Range: 0x80039100 -> 0x8003919C
void * xMemPoolAlloc(class xMemPool * pool /* r27 */) {
    // Local variables
    void * retval; // r5
    unsigned int next; // r29
    unsigned int flags; // r28

    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: xMemPoolFree(xMemPool *, void *)
// Range: 0x800391A0 -> 0x800391FC
void xMemPoolFree() {
    // Local variables
    void * freeList; // r5
    unsigned int next; // r6

    {
        // Range: 0x800391A8 -> 0x800391F0
        // Local variables
        void * curr; // r8
        void * * prev; // r7
    }
}
// signature: xMemScratchPush(unsigned int, unsigned int)
// Range: 0x80039200 -> 0x8003924C
void * xMemScratchPush(unsigned int size /* r30 */) {
    // Local variables
    void * newMemory; // r31
}
// signature: xMemScratchPop(void *, unsigned int)
// Range: 0x80039250 -> 0x80039260
void xMemScratchPop() {
}
