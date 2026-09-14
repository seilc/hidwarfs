/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\gc\iARAMTmp.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012FE00 -> 0x801303A8
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
// total size: 0x30
struct memBlock {
    // Members
    unsigned int base; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    unsigned int addr; // offset 0x8, size 0x4
    void * aram; // offset 0xC, size 0x4
    struct ARQRequest xfer; // offset 0x10, size 0x20
};
// total size: 0x608
struct tempTransfer {
    // Members
    struct memBlock blockList[32]; // offset 0x0, size 0x600
    unsigned int numBlocks; // offset 0x600, size 0x4
    unsigned int type; // offset 0x604, size 0x4
};
static struct tempTransfer activeTransfers[2]; // size: 0xC10, address: 0x80387B80
// Range: 0x8012FE00 -> 0x8012FE30
static void transferDoneCB(unsigned long pointerToARQRequest /* r0 */) {
    // Local variables
    struct memBlock * bp; // r4
}

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
// total size: 0x18
struct PKRAssetTOCInfo {
    // Members
    unsigned int aid; // offset 0x0, size 0x4
    struct PKRAssetType * typeref; // offset 0x4, size 0x4
    unsigned int sector; // offset 0x8, size 0x4
    unsigned int plus_offset; // offset 0xC, size 0x4
    unsigned int size; // offset 0x10, size 0x4
    void * mempos; // offset 0x14, size 0x4
};
// Range: 0x8012FE30 -> 0x80130124
unsigned int iARAMTmpBegin(unsigned int type /* r22 */, unsigned int max /* r23 */, unsigned char doTRCCheck /* r24 */) {
    // Local variables
    int which; // r6
    struct memBlock * blockList; // r29
    unsigned int & numBlocks; // r28
    int num; // r0
    int total; // r27
    int i; // r26
    int j; // r3
    int totalSize; // r25
    struct PKRAssetTOCInfo ainfo; // r1+0x8
    unsigned int base; // r0
    unsigned int size; // r6
    unsigned int alignedBase; // r4
    struct memBlock * bp; // r5
    struct memBlock * bp; // r25
    int size; // r26

    // References
    // -> static struct tempTransfer activeTransfers[2];
}

// Range: 0x80130124 -> 0x80130200
void * iARAMTmpMalloc(unsigned int type /* r0 */, unsigned int size /* r7 */) {
    // Local variables
    int which; // r8
    struct memBlock * bestBlockPtr; // r5
    struct memBlock * bp; // r6
    int i; // r0
    unsigned int addr; // r3

    // References
    // -> static struct tempTransfer activeTransfers[2];
}

// Range: 0x80130200 -> 0x80130204
void iARAMTmpFree() {}

// Range: 0x80130204 -> 0x801302A0
int iARAMTmpInARAMTemp(unsigned int type /* r0 */, void * ptr /* r0 */) {
    // Local variables
    int which; // r8
    struct memBlock * bp; // r5
    int i; // r0

    // References
    // -> static struct tempTransfer activeTransfers[2];
}

// Range: 0x801302A0 -> 0x801303A8
void iARAMTmpEnd(unsigned int type /* r0 */, unsigned char doTRCCheck /* r27 */) {
    // Local variables
    int which; // r29
    struct memBlock * bp; // r28
    int i; // r27

    // References
    // -> static struct tempTransfer activeTransfers[2];
}


