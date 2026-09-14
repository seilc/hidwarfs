/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xordarray.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A8BD0 -> 0x800A9254
*/
static int been_here; // size: 0x4, address: 0x80D693B0
static char __FUNCTION__[9]; // size: 0x9, address: 0x80D60158
unsigned int gActiveHeap; // size: 0x4, address: 0x80D692A8
// total size: 0x10
struct st_XORDEREDARRAY {
    // Members
    void * list; // offset 0x0, size 0x4
    int cnt; // offset 0x4, size 0x4
    int max; // offset 0x8, size 0x4
    int warnlvl; // offset 0xC, size 0x4
};
// Range: 0x800A8BD0 -> 0x800A8D78
void XOrdInit(struct st_XORDEREDARRAY * array /* r31 */, int size /* r30 */, unsigned int memtag /* r1+0x8 */, int tempAlloc /* r1+0xC */) {
    // References
    // -> static char __FUNCTION__[9];
    // -> unsigned int gActiveHeap;
    // -> static int been_here;
}

// Range: 0x800A8D78 -> 0x800A8E00
void XOrdDone(struct st_XORDEREDARRAY * array /* r31 */, int wasTempAlloc /* r1+0x8 */) {}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80D60161
// Range: 0x800A8E00 -> 0x800A8F10
void XOrdAppend(struct st_XORDEREDARRAY * array /* r31 */, void * elt /* r1+0x8 */) {
    // References
    // -> static char __FUNCTION__[11];
}

static int been_here; // size: 0x4, address: 0x80D693B4
static char __FUNCTION__[11]; // size: 0xB, address: 0x80D6016C
// Range: 0x800A8F10 -> 0x800A90BC
void XOrdInsert(struct st_XORDEREDARRAY * array /* r31 */, void * elt /* r29 */, int (* compare)(void *, void *) /* r28 */) {
    // Local variables
    int i; // r30

    // References
    // -> static char __FUNCTION__[11];
    // -> static int been_here;
}

// Range: 0x800A90BC -> 0x800A9168
int XOrdLookup(struct st_XORDEREDARRAY * array /* r27 */, void * key /* r1+0x8 */, int (* test)(void *, void *) /* r1+0xC */) {
    // Local variables
    int da_idx; // r26
    int k0; // r30
    int k1; // r29
    int k; // r31
    int v; // r28
}

// Range: 0x800A9168 -> 0x800A9254
void XOrdSort(struct st_XORDEREDARRAY * array /* r26 */, int (* test)(void *, void *) /* r1+0x8 */) {
    // Local variables
    void * list; // r30
    int num; // r25
    int i; // r28
    int j; // r29
    int h; // r31
    void * v; // r27
}


