/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xordarray.cpp
*/
// signature: XOrdInit(st_XORDEREDARRAY *, int, const unsigned int, int)
// Range: 0x8003CA20 -> 0x8003CB28
void XOrdInit(class st_XORDEREDARRAY * array /* r28 */) {
    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: XOrdDone(st_XORDEREDARRAY *, int)
// Range: 0x8003CB30 -> 0x8003CB88
void XOrdDone(class st_XORDEREDARRAY * array /* r31 */) {
}
// signature: XOrdAppend(st_XORDEREDARRAY *, void *)
// Range: 0x8003CB90 -> 0x8003CBB8
void XOrdAppend() {
}
// Range: 0x8003CBC0 -> 0x8003CC6C
void XOrdInsert(class st_XORDEREDARRAY * array /* r27 */, void * elt /* r28 */, int (* compare)(void * e1, void * e2) /* r29 */) {
    // Local variables
    int i; // r30
}
// Range: 0x8003CC70 -> 0x8003CD08
int XOrdLookup(class st_XORDEREDARRAY * array /* r25 */, void * key /* r26 */, int (* test)(void * key, void * elt) /* r27 */) {
    // Local variables
    int da_idx; // r31
    int k0; // r30
    int k1; // r29
    int k; // r28
    int v; // r0
}
// signature: XOrdSort(st_XORDEREDARRAY *, int (*)(void *, void *))
// Range: 0x8003CD10 -> 0x8003CDD8
void XOrdSort(int (* test)(void * e1, void * e2) /* r22 */) {
    // Local variables
    void * * list; // r28
    int num; // r27
    int i; // r26
    int j; // r25
    int h; // r24
    void * v; // r23
}
