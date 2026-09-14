/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\gc\iARAMTmp.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8024ABC8 -> 0x8024B570
*/
// total size: 0x20
struct ARQRequest {
    // Members
    struct ARQRequest * next; // offset 0x0, size 0x4
    unsigned long owner; // offset 0x4, size 0x4
    unsigned long type; // offset 0x8, size 0x4
    unsigned long priority; // offset 0xC, size 0x4
    unsigned long source; // offset 0x10, size 0x4
    unsigned long dest; // offset 0x14, size 0x4
    unsigned long length; // offset 0x18, size 0x4
    void (* callback)(unsigned long); // offset 0x1C, size 0x4
};
// total size: 0x34
struct memBlock {
    // Members
    unsigned int base; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    unsigned int addr; // offset 0x8, size 0x4
    void * aram; // offset 0xC, size 0x4
    struct ARQRequest xfer; // offset 0x10, size 0x20
    unsigned int crc; // offset 0x30, size 0x4
};
// total size: 0x688
struct tempTransfer {
    // Members
    struct memBlock blockList[32]; // offset 0x0, size 0x680
    unsigned int numBlocks; // offset 0x680, size 0x4
    unsigned int type; // offset 0x684, size 0x4
};
static struct tempTransfer activeTransfers[2]; // size: 0xD10, address: 0x80D23C20
static char __FUNCTION__[15]; // size: 0xF, address: 0x80D651F8
// Range: 0x8024ABC8 -> 0x8024ACC0
static void transferDoneCB(unsigned long pointerToARQRequest /* r1+0x8 */) {
    // Local variables
    struct ARQRequest * arq; // r30
    struct memBlock * bp; // r31
    unsigned int crc; // r29

    // References
    // -> static char __FUNCTION__[15];
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80D65207
// total size: 0x28
struct PKRAssetType {
    // Members
    unsigned int typetag; // offset 0x0, size 0x4
    unsigned int tflags; // offset 0x4, size 0x4
    int typalign; // offset 0x8, size 0x4
    void * (* readXForm)(void *, unsigned int, void *, unsigned int, unsigned int *); // offset 0xC, size 0x4
    void * (* writeXForm)(void *, unsigned int, void *, void *, unsigned int, unsigned int *); // offset 0x10, size 0x4
    int (* assetLoaded)(void *, unsigned int, void *, int); // offset 0x14, size 0x4
    void * (* makeData)(void *, unsigned int, void *, int *, int *); // offset 0x18, size 0x4
    void (* cleanup)(void *, unsigned int, void *); // offset 0x1C, size 0x4
    void (* assetUnloaded)(void *, unsigned int); // offset 0x20, size 0x4
    void (* writePeek)(void *, unsigned int, void *, char *); // offset 0x24, size 0x4
};
// total size: 0x20
struct PKRAssetTOCInfo {
    // Members
    unsigned int aid; // offset 0x0, size 0x4
    struct PKRAssetType * typeref; // offset 0x4, size 0x4
    unsigned int sector; // offset 0x8, size 0x4
    unsigned int plus_offset; // offset 0xC, size 0x4
    unsigned int size; // offset 0x10, size 0x4
    void * mempos; // offset 0x14, size 0x4
    const char * assetname; // offset 0x18, size 0x4
    const char * filename; // offset 0x1C, size 0x4
};
// Range: 0x8024ACC0 -> 0x8024B184
unsigned int iARAMTmpBegin(unsigned int type /* r19 */, unsigned int max /* r17 */, unsigned char doTRCCheck /* r1+0x8 */) {
    // Local variables
    int which; // r26
    long long t0; // r1+0x28
    struct memBlock * blockList; // r22
    unsigned int & numBlocks; // r28
    int num; // r1+0x18
    int total; // r24
    int i; // r25
    int j; // r21
    int totalSize; // r23
    struct PKRAssetTOCInfo ainfo; // r1+0x30
    unsigned int base; // r29
    unsigned int size; // r27
    unsigned int alignedBase; // r18
    struct memBlock * bp; // r31
    struct memBlock * bp; // r30
    int size; // r20
    unsigned int owner; // r1+0x14
    long long t1; // r1+0x20

    // References
    // -> static char __FUNCTION__[14];
    // -> static struct tempTransfer activeTransfers[2];
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80D65215
// Range: 0x8024B184 -> 0x8024B2F4
void * iARAMTmpMalloc(unsigned int type /* r1+0x8 */, unsigned int size /* r27 */) {
    // Local variables
    int which; // r29
    struct memBlock * bestBlockPtr; // r30
    int bestBlockIndex; // r26
    struct memBlock * bp; // r31
    int i; // r28
    unsigned int addr; // r25

    // References
    // -> static struct tempTransfer activeTransfers[2];
    // -> static char __FUNCTION__[15];
}

// Range: 0x8024B2F4 -> 0x8024B2F8
void iARAMTmpFree() {}

// Range: 0x8024B2F8 -> 0x8024B3CC
int iARAMTmpInARAMTemp(unsigned int type /* r3 */, void * ptr /* r4 */) {
    // Local variables
    int which; // r30
    struct memBlock * bp; // r31
    int i; // r29

    // References
    // -> static struct tempTransfer activeTransfers[2];
}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80D65224
// Range: 0x8024B3CC -> 0x8024B570
void iARAMTmpEnd(unsigned int type /* r1+0x8 */, unsigned char doTRCCheck /* r1+0xC */) {
    // Local variables
    int which; // r30
    long long t0; // r1+0x18
    struct memBlock * bp; // r31
    int total; // r28
    int i; // r29
    unsigned int owner; // r27
    long long t1; // r1+0x10

    // References
    // -> static struct tempTransfer activeTransfers[2];
    // -> static char __FUNCTION__[12];
}


