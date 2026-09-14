/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xordarray.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8008CD44 -> 0x8008D24C
*/
unsigned int gActiveHeap; // size: 0x4, address: 0x80C07448
// total size: 0x10
struct st_XORDEREDARRAY {
    // Members
    void * list; // offset 0x0, size 0x4
    int cnt; // offset 0x4, size 0x4
    int max; // offset 0x8, size 0x4
    int warnlvl; // offset 0xC, size 0x4
};
// Range: 0x8008CD44 -> 0x8008CE38
void XOrdInit(struct st_XORDEREDARRAY * array /* r27 */, int size /* r28 */, unsigned int memtag /* r29 */, int tempAlloc /* r30 */) {
    // References
    // -> unsigned int gActiveHeap;
}

// Range: 0x8008CE38 -> 0x8008CEAC
void XOrdDone(struct st_XORDEREDARRAY * array /* r31 */, int wasTempAlloc /* r0 */) {}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80BFD6E0
// Range: 0x8008CEAC -> 0x8008CFA4
void XOrdAppend(struct st_XORDEREDARRAY * array /* r30 */, void * elt /* r31 */) {
    // References
    // -> static char __FUNCTION__[11];
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80BFD6EC
// Range: 0x8008CFA4 -> 0x8008D0D0
void XOrdInsert(struct st_XORDEREDARRAY * array /* r29 */, void * elt /* r30 */, int (* compare)(void *, void *) /* r31 */) {
    // Local variables
    int i; // r27

    // References
    // -> static char __FUNCTION__[11];
}

// Range: 0x8008D0D0 -> 0x8008D168
int XOrdLookup(struct st_XORDEREDARRAY * array /* r25 */, void * key /* r26 */, int (* test)(void *, void *) /* r27 */) {
    // Local variables
    int da_idx; // r31
    int k0; // r30
    int k1; // r29
    int k; // r28
    int v; // r0
}

// Range: 0x8008D168 -> 0x8008D24C
void XOrdSort(struct st_XORDEREDARRAY * array /* r0 */, int (* test)(void *, void *) /* r31 */) {
    // Local variables
    void * list; // r24
    int num; // r23
    int i; // r22
    int j; // r21
    int h; // r20
    void * v; // r19
}


