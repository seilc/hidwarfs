/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xordarray.cpp
*/
// signature: XOrdInit(st_XORDEREDARRAY *, int, const unsigned int, int)
// Range: 0x80071340 -> 0x800715B8
void XOrdInit(class st_XORDEREDARRAY * array /* r28 */) {
    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: XOrdDone(st_XORDEREDARRAY *, int)
// Range: 0x800715C0 -> 0x80071628
void XOrdDone(class st_XORDEREDARRAY * array /* r31 */) {
}
// signature: XOrdAppend(st_XORDEREDARRAY *, void *)
// Range: 0x80071630 -> 0x80071658
void XOrdAppend() {
}
// Range: 0x80071660 -> 0x80071710
void XOrdInsert(class st_XORDEREDARRAY * array /* r27 */, void * elt /* r28 */, int (* compare)(void * e1, void * e2) /* r29 */) {
    // Local variables
    int i; // r30
}
// Range: 0x80071710 -> 0x800717AC
int XOrdLookup(class st_XORDEREDARRAY * array /* r25 */, void * key /* r26 */, int (* test)(void * key, void * elt) /* r27 */) {
    // Local variables
    int da_idx; // r31
    int k0; // r30
    int k1; // r29
    int k; // r28
    int v; // r0
}
// signature: XOrdSort(st_XORDEREDARRAY *, int (*)(void *, void *))
// Range: 0x800717B0 -> 0x8007189C
void XOrdSort(int (* test)(void * e1, void * e2) /* r31 */) {
    // Local variables
    void * * list; // r24
    int num; // r23
    int i; // r22
    int j; // r21
    int h; // r20
    void * v; // r19
}
