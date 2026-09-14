/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\os\src\OSAlloc.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803CF91C -> 0x803D075C
*/
int __OSCurrHeap; // size: 0x4, address: 0x80D681E0
// total size: 0x14
struct Cell {
    // Members
    struct Cell * prev; // offset 0x0, size 0x4
    struct Cell * next; // offset 0x4, size 0x4
    long size; // offset 0x8, size 0x4
    struct HeapDesc * hd; // offset 0xC, size 0x4
    long requested; // offset 0x10, size 0x4
};
// total size: 0x18
struct HeapDesc {
    // Members
    long size; // offset 0x0, size 0x4
    struct Cell * free; // offset 0x4, size 0x4
    struct Cell * allocated; // offset 0x8, size 0x4
    unsigned long paddingBytes; // offset 0xC, size 0x4
    unsigned long headerBytes; // offset 0x10, size 0x4
    unsigned long payloadBytes; // offset 0x14, size 0x4
};
static struct HeapDesc * HeapArray; // size: 0x4, address: 0x80D6C0C0
static int NumHeaps; // size: 0x4, address: 0x80D6C0C4
static void * ArenaStart; // size: 0x4, address: 0x80D6C0C8
static void * ArenaEnd; // size: 0x4, address: 0x80D6C0CC
// Range: 0x803CF91C -> 0x803CF93C
static struct Cell * DLAddFront(struct Cell * list /* r3 */, struct Cell * cell /* r4 */) {}

// Range: 0x803CF93C -> 0x803CF95C
static struct Cell * DLLookup(struct Cell * list /* r3 */, struct Cell * cell /* r4 */) {}

// Range: 0x803CF95C -> 0x803CF99C
static struct Cell * DLExtract(struct Cell * list /* r3 */, struct Cell * cell /* r4 */) {}

// Range: 0x803CF99C -> 0x803CFA60
static struct Cell * DLInsert(struct Cell * list /* r3 */, struct Cell * cell /* r4 */) {
    // Local variables
    struct Cell * prev; // r30
    struct Cell * next; // r31
}

// Range: 0x803CFA60 -> 0x803CFAC4
static int DLOverlap(struct Cell * list /* r3 */, void * start /* r4 */, void * end /* r5 */) {
    // Local variables
    struct Cell * cell; // r31
}

// Range: 0x803CFAC4 -> 0x803CFD14
void * OSAllocFromHeap(int heap /* r25 */, unsigned long size /* r27 */) {
    // Local variables
    struct HeapDesc * hd; // r29
    struct Cell * cell; // r31
    struct Cell * newCell; // r28
    long leftoverSize; // r24
    long requested; // r26

    // References
    // -> static struct HeapDesc * HeapArray;
    // -> static int NumHeaps;
}

// Range: 0x803CFD14 -> 0x803CFE94
void OSFreeToHeap(int heap /* r27 */, void * ptr /* r28 */) {
    // Local variables
    struct HeapDesc * hd; // r30
    struct Cell * cell; // r29

    // References
    // -> static struct HeapDesc * HeapArray;
    // -> static void * ArenaEnd;
    // -> static void * ArenaStart;
}

// Range: 0x803CFE94 -> 0x803CFF40
int OSSetCurrentHeap(int heap /* r30 */) {
    // Local variables
    int prev; // r29

    // References
    // -> int __OSCurrHeap;
    // -> static struct HeapDesc * HeapArray;
    // -> static int NumHeaps;
}

// Range: 0x803CFF40 -> 0x803D007C
void * OSInitAlloc(void * arenaStart /* r30 */, void * arenaEnd /* r26 */, int maxHeaps /* r27 */) {
    // Local variables
    unsigned long arraySize; // r25
    int i; // r28
    struct HeapDesc * hd; // r29

    // References
    // -> static void * ArenaStart;
    // -> static void * ArenaEnd;
    // -> static struct HeapDesc * HeapArray;
    // -> int __OSCurrHeap;
    // -> static int NumHeaps;
}

// Range: 0x803D007C -> 0x803D028C
int OSCreateHeap(void * start /* r29 */, void * end /* r27 */) {
    // Local variables
    int heap; // r30
    struct HeapDesc * hd; // r28
    struct Cell * cell; // r26

    // References
    // -> static int NumHeaps;
    // -> static struct HeapDesc * HeapArray;
    // -> static void * ArenaEnd;
    // -> static void * ArenaStart;
}

// Range: 0x803D028C -> 0x803D06D4
long OSCheckHeap(int heap /* r26 */) {
    // Local variables
    struct HeapDesc * hd; // r29
    struct Cell * cell; // r31
    long total; // r28
    long free; // r27

    // References
    // -> static void * ArenaEnd;
    // -> static void * ArenaStart;
    // -> static struct HeapDesc * HeapArray;
    // -> static int NumHeaps;
}

// Range: 0x803D06D4 -> 0x803D075C
void OSVisitAllocated(void (* visitor)(void *, unsigned long) /* r1+0x8 */) {
    // Local variables
    unsigned long heap; // r30
    struct Cell * cell; // r31

    // References
    // -> static int NumHeaps;
    // -> static struct HeapDesc * HeapArray;
}


