/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xordarray.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8004F508 -> 0x8004F858
*/
unsigned int gActiveHeap; // size: 0x4, address: 0x803C1074
// total size: 0x10
struct st_XORDEREDARRAY {
    // Members
    void * list; // offset 0x0, size 0x4
    int cnt; // offset 0x4, size 0x4
    int max; // offset 0x8, size 0x4
    int warnlvl; // offset 0xC, size 0x4
};
// Range: 0x8004F508 -> 0x8004F5CC
void XOrdInit(struct st_XORDEREDARRAY * array /* r30 */, int size /* r4 */, int tempAlloc /* r0 */) {
    // References
    // -> unsigned int gActiveHeap;
}

// Range: 0x8004F5CC -> 0x8004F624
void XOrdDone(struct st_XORDEREDARRAY * array /* r31 */, int wasTempAlloc /* r0 */) {}

// Range: 0x8004F624 -> 0x8004F64C
void XOrdAppend(struct st_XORDEREDARRAY * array /* r0 */, void * elt /* r0 */) {}

// Range: 0x8004F64C -> 0x8004F6FC
void XOrdInsert(struct st_XORDEREDARRAY * array /* r27 */, void * elt /* r28 */, int (* compare)(void *, void *) /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x8004F6FC -> 0x8004F790
int XOrdLookup(struct st_XORDEREDARRAY * array /* r25 */, void * key /* r26 */, int (* test)(void *, void *) /* r27 */) {
    // Local variables
    int da_idx; // r31
    int k0; // r30
    int k1; // r29
    int k; // r28
    int v; // r0
}

// Range: 0x8004F790 -> 0x8004F858
void XOrdSort(struct st_XORDEREDARRAY * array /* r0 */, int (* test)(void *, void *) /* r23 */) {
    // Local variables
    void * list; // r29
    int num; // r28
    int i; // r27
    int j; // r26
    int h; // r25
    void * v; // r24
}


