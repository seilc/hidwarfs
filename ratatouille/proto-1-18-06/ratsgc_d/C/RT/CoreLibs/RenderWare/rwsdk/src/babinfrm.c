/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\babinfrm.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8043CF08 -> 0x8043DEA0
*/
static int _rwFrameListDirtyListUpdate; // size: 0x4, address: 0x80D688A8
static char __dbFunctionName[28]; // size: 0x1C, address: 0x804ED250
struct RwPluginRegistry frameTKList; // size: 0x18, address: 0x80556E90
// Range: 0x8043CF08 -> 0x8043CFFC
int RwFrameRegisterPluginStream(unsigned int pluginID /* r1+0x8 */, struct RwStream * (* readCB)(struct RwStream *, int, void *, int, int) /* r28 */, struct RwStream * (* writeCB)(struct RwStream *, int, void *, int, int) /* r29 */, int (* getSizeCB)(void *, int, int) /* r30 */) {
    // Local variables
    int plug; // r31

    // References
    // -> struct RwPluginRegistry frameTKList;
    // -> static char __dbFunctionName[28];
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804ED26C
// Range: 0x8043CFFC -> 0x8043D0FC
static int breadthFirst(struct RwFrame * * * frameListPos /* r31 */, struct RwFrame * frame /* r30 */) {
    // References
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804ED279
// Range: 0x8043D0FC -> 0x8043D1F0
static int rwFrameListMakeBreadthFirst(struct RwFrame * * * frameListPos /* r31 */, struct RwFrame * frame /* r29 */) {
    // References
    // -> static char __dbFunctionName[28];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804ED295
// Range: 0x8043D1F0 -> 0x8043D3BC
struct rwFrameList * _rwFrameListInitialize(struct rwFrameList * frameList /* r29 */, struct RwFrame * frame /* r27 */) {
    // Local variables
    int numFrames; // r30
    struct RwFrame * * fppFrames; // r28
    struct RwFrame * * fppCur; // r1+0x8
    struct RwError _rwErrorCode; // r1+0xC

    // References
    // -> static char __dbFunctionName[23];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804ED2AC
// Range: 0x8043D3BC -> 0x8043D4E4
int _rwFrameListFindFrame(const struct rwFrameList * frameList /* r30 */, const struct RwFrame * frame /* r27 */, int * npIndex /* r28 */) {
    // Local variables
    int i; // r31

    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804ED2C2
// Range: 0x8043D4E4 -> 0x8043D574
struct rwFrameList * _rwFrameListDeinitialize(struct rwFrameList * frameList /* r31 */) {
    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[29]; // size: 0x1D, address: 0x804ED2DB
// Range: 0x8043D574 -> 0x8043D5FC
static unsigned int FrameListStreamGetSizeActual(const struct rwFrameList * frameList /* r30 */) {
    // Local variables
    unsigned int size; // r31

    // References
    // -> static char __dbFunctionName[29];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804ED2F8
// Range: 0x8043D5FC -> 0x8043D6BC
unsigned int _rwFrameListStreamGetSize(const struct rwFrameList * frameList /* r31 */) {
    // Local variables
    unsigned int size; // r29
    int i; // r30
    struct RwFrame * frame; // r28

    // References
    // -> struct RwPluginRegistry frameTKList;
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804ED312
// total size: 0x4
struct _rwStreamFrameList {
    // Members
    int numFrames; // offset 0x0, size 0x4
};
// total size: 0x38
struct _rwStreamFrame {
    // Members
    struct RwV3d right; // offset 0x0, size 0xC
    struct RwV3d up; // offset 0xC, size 0xC
    struct RwV3d at; // offset 0x18, size 0xC
    struct RwV3d pos; // offset 0x24, size 0xC
    int parentIndex; // offset 0x30, size 0x4
    unsigned int data; // offset 0x34, size 0x4
};
// Range: 0x8043D6BC -> 0x8043D968
struct rwFrameList * _rwFrameListStreamWrite(const struct rwFrameList * frameList /* r31 */, struct RwStream * stream /* r28 */) {
    // Local variables
    struct _rwStreamFrameList fl; // r1+0x8
    int i; // r30
    struct _rwStreamFrame f; // r1+0xC
    struct RwFrame * frame; // r27
    struct RwFrame * parent; // r26
    struct RwMatrixTag * mat; // r29
    struct RwFrame * frame; // r25

    // References
    // -> struct RwPluginRegistry frameTKList;
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804ED32A
// Range: 0x8043D968 -> 0x8043DEA0
struct rwFrameList * _rwFrameListStreamRead(struct RwStream * stream /* r26 */, struct rwFrameList * frameList /* r31 */) {
    // Local variables
    struct _rwStreamFrameList fl; // r1+0x10
    int i; // r29
    unsigned int size; // r1+0xC
    unsigned int version; // r1+0x8
    struct RwError _rwErrorCode; // r1+0x1C
    struct _rwStreamFrame f; // r1+0x24
    struct RwFrame * frame; // r28
    struct RwMatrixTag * mat; // r30
    struct RwError _rwErrorCode; // r1+0x14
    struct RwFrame * frame; // r27

    // References
    // -> static int _rwFrameListDirtyListUpdate;
    // -> void * RwEngineInstance;
    // -> struct RwPluginRegistry frameTKList;
    // -> static char __dbFunctionName[23];
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}


