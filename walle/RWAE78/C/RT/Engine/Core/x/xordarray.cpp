/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xordarray.cpp
*/
// signature: XOrdInit(st_XORDEREDARRAY *, int, const unsigned int, int)
// Range: 0x80052E60 -> 0x800530D8
void XOrdInit(class st_XORDEREDARRAY * array /* r28 */) {
    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: XOrdDone(st_XORDEREDARRAY *, int)
// Range: 0x800530E0 -> 0x80053148
void XOrdDone(class st_XORDEREDARRAY * array /* r31 */) {
}
// signature: XOrdAppend(st_XORDEREDARRAY *, void *)
// Range: 0x80053150 -> 0x80053178
void XOrdAppend() {
}
// Range: 0x80053180 -> 0x80053230
void XOrdInsert(class st_XORDEREDARRAY * array /* r27 */, void * elt /* r28 */, int (* compare)(void * e1, void * e2) /* r29 */) {
    // Local variables
    int i; // r30
}
// Range: 0x80053230 -> 0x800532D0
int XOrdFind(class st_XORDEREDARRAY * array /* r26 */, void * key /* r27 */, int (* test)(void * key, void * elt) /* r28 */) {
    // Local variables
    int da_idx; // r30
    int i; // r29
    int rc; // r0
}
// Range: 0x800532D0 -> 0x8005336C
int XOrdLookup(class st_XORDEREDARRAY * array /* r25 */, void * key /* r26 */, int (* test)(void * key, void * elt) /* r27 */) {
    // Local variables
    int da_idx; // r31
    int k0; // r30
    int k1; // r29
    int k; // r28
    int v; // r0
}
// signature: XOrdSort(st_XORDEREDARRAY *, int (*)(void *, void *))
// Range: 0x80053370 -> 0x8005345C
void XOrdSort(int (* test)(void * e1, void * e2) /* r31 */) {
    // Local variables
    void * * list; // r24
    int num; // r23
    int i; // r22
    int j; // r21
    int h; // r20
    void * v; // r19
}
