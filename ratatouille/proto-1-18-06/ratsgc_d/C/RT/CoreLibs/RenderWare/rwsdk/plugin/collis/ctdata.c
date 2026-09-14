/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\plugin\collis\ctdata.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803DBF94 -> 0x803DCC5C
*/
static char __dbFunctionName[18]; // size: 0x12, address: 0x804E7780
// total size: 0x28
struct RpCollTree {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    struct RwBBox bbox; // offset 0x4, size 0x18
    unsigned short numEntries; // offset 0x1C, size 0x2
    unsigned short numSplits; // offset 0x1E, size 0x2
    struct RpCollSplit * splits; // offset 0x20, size 0x4
    unsigned short * map; // offset 0x24, size 0x4
};
// Range: 0x803DBF94 -> 0x803DC1F8
struct RpCollTree * _rpCollTreeCreate(unsigned short numEntries /* r25 */, unsigned short numSplits /* r28 */, struct RwBBox * bbox /* r26 */, unsigned int flags /* r27 */) {
    // Local variables
    unsigned int size; // r29
    struct RpCollTree * tree; // r31
    unsigned char * mem; // r30
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[18];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804E7792
// Range: 0x803DC1F8 -> 0x803DC274
void _rpCollTreeDestroy(struct RpCollTree * tree /* r31 */) {
    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804E77A5
// Range: 0x803DC274 -> 0x803DC314
unsigned int _rpCollTreeStreamGetSize(const struct RpCollTree * tree /* r31 */) {
    // Local variables
    unsigned int size; // r30

    // References
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804E77BE
// total size: 0x10
struct RpCollSplit {
    // Members
    struct RpCollSector leftSector; // offset 0x0, size 0x8
    struct RpCollSector rightSector; // offset 0x8, size 0x8
};
// Range: 0x803DC314 -> 0x803DC564
struct RpCollTree * _rpCollTreeStreamWrite(const struct RpCollTree * tree /* r31 */, struct RwStream * stream /* r30 */) {
    // Local variables
    unsigned int size; // r29
    // total size: 0x24
    struct {
        // Members
        unsigned int flags; // offset 0x0, size 0x4
        struct RwV3d inf; // offset 0x4, size 0xC
        struct RwV3d sup; // offset 0x10, size 0xC
        unsigned int numEntries; // offset 0x1C, size 0x4
        unsigned int numSplits; // offset 0x20, size 0x4
    } streamCollTree; // r1+0x18
    unsigned int i; // r28
    struct RpCollSplit temp; // r1+0x8

    // References
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804E77D5
// Range: 0x803DC564 -> 0x803DC75C
struct RpCollTree * _rpCollTreeStreamRead(struct RwStream * stream /* r28 */) {
    // Local variables
    struct RpCollTree * tree; // r31
    unsigned int version; // r1+0x8
    // total size: 0x24
    struct {
        // Members
        unsigned int flags; // offset 0x0, size 0x4
        struct RwV3d inf; // offset 0x4, size 0xC
        struct RwV3d sup; // offset 0x10, size 0xC
        unsigned int numEntries; // offset 0x1C, size 0x4
        unsigned int numSplits; // offset 0x20, size 0x4
    } streamCollTree; // r1+0x24
    struct RwBBox bbox; // r1+0xC
    unsigned int size; // r29
    unsigned int i; // r27
    struct RpCollSplit * split; // r30

    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804E77EB
// total size: 0x8
struct RpCollSector {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char contents; // offset 0x1, size 0x1
    unsigned short index; // offset 0x2, size 0x2
    float value; // offset 0x4, size 0x4
};
// Range: 0x803DC75C -> 0x803DCC5C
struct RpCollTree * _rpCollTreeStreamReadPre36001(struct RwStream * stream /* r27 */, unsigned int numEntries /* r20 */, unsigned int numSplits /* r1+0x8 */, struct RwBBox * bbox /* r1+0xC */, int * failConv /* r23 */) {
    // Local variables
    struct RpCollTree * tree; // r31
    struct RpCollSplit * split; // r30
    unsigned int i; // r22
    unsigned int numLeafNodes; // r25
    unsigned int types; // r1+0x1C
    unsigned int indices; // r1+0x18
    unsigned int leftType; // r19
    unsigned int rightType; // r18
    struct RpCollSector start; // r1+0x28
    struct RpCollSector * curr; // r29
    struct RpCollSector * stack[33]; // r1+0x30
    unsigned int nStack; // r26
    unsigned short count; // r21
    unsigned int data; // r1+0x14
    struct RwError _rwErrorCode; // r1+0x20
    unsigned int i; // r24
    int index; // r1+0x10

    // References
    // -> static char __dbFunctionName[30];
}


