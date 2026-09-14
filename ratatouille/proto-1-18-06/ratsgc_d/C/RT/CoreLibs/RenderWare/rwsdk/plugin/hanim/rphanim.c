/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\plugin\hanim\rphanim.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803E1A48 -> 0x803E2A40
*/
// total size: 0xA4
struct RwFrame {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLLLink inDirtyListLink; // offset 0x8, size 0x8
    struct RwMatrixTag modelling; // offset 0x10, size 0x40
    struct RwMatrixTag ltm; // offset 0x50, size 0x40
    struct RwLinkList objectList; // offset 0x90, size 0x8
    struct RwFrame * child; // offset 0x98, size 0x4
    struct RwFrame * next; // offset 0x9C, size 0x4
    struct RwFrame * root; // offset 0xA0, size 0x4
};
// total size: 0x10
struct RpHAnimNodeInfo {
    // Members
    int nodeID; // offset 0x0, size 0x4
    int nodeIndex; // offset 0x4, size 0x4
    int flags; // offset 0x8, size 0x4
    struct RwFrame * pFrame; // offset 0xC, size 0x4
};
// total size: 0x4C
struct RtAnimInterpolator {
    // Members
    struct RtAnimAnimation * pCurrentAnim; // offset 0x0, size 0x4
    float currentTime; // offset 0x4, size 0x4
    void * pNextFrame; // offset 0x8, size 0x4
    struct RtAnimInterpolator * (* pAnimCallBack)(struct RtAnimInterpolator *, void *); // offset 0xC, size 0x4
    void * pAnimCallBackData; // offset 0x10, size 0x4
    float animCallBackTime; // offset 0x14, size 0x4
    struct RtAnimInterpolator * (* pAnimLoopCallBack)(struct RtAnimInterpolator *, void *); // offset 0x18, size 0x4
    void * pAnimLoopCallBackData; // offset 0x1C, size 0x4
    int maxInterpKeyFrameSize; // offset 0x20, size 0x4
    int currentInterpKeyFrameSize; // offset 0x24, size 0x4
    int currentAnimKeyFrameSize; // offset 0x28, size 0x4
    int numNodes; // offset 0x2C, size 0x4
    int isSubInterpolator; // offset 0x30, size 0x4
    int offsetInParent; // offset 0x34, size 0x4
    struct RtAnimInterpolator * parentAnimation; // offset 0x38, size 0x4
    void (* keyFrameApplyCB)(void *, void *); // offset 0x3C, size 0x4
    void (* keyFrameBlendCB)(void *, void *, void *, float); // offset 0x40, size 0x4
    void (* keyFrameInterpolateCB)(void *, void *, void *, float, void *); // offset 0x44, size 0x4
    void (* keyFrameAddCB)(void *, void *, void *); // offset 0x48, size 0x4
};
// total size: 0x24
struct RpHAnimHierarchy {
    // Members
    int flags; // offset 0x0, size 0x4
    int numNodes; // offset 0x4, size 0x4
    struct RwMatrixTag * pMatrixArray; // offset 0x8, size 0x4
    void * pMatrixArrayUnaligned; // offset 0xC, size 0x4
    struct RpHAnimNodeInfo * pNodeInfo; // offset 0x10, size 0x4
    struct RwFrame * parentFrame; // offset 0x14, size 0x4
    struct RpHAnimHierarchy * parentHierarchy; // offset 0x18, size 0x4
    int rootParentOffset; // offset 0x1C, size 0x4
    struct RtAnimInterpolator * currentAnim; // offset 0x20, size 0x4
};
static int _rpHAnimHierarchyFreeListBlockSize; // size: 0x4, address: 0x80D68348
static int _rpHAnimHierarchyFreeListPreallocBlocks; // size: 0x4, address: 0x80D6834C
static char __dbFunctionName[10]; // size: 0xA, address: 0x804E7B40
// total size: 0x8
struct RpHAnimAtomicGlobalVars {
    // Members
    int engineOffset; // offset 0x0, size 0x4
    struct RwFreeList * HAnimFreeList; // offset 0x4, size 0x4
};
struct RpHAnimAtomicGlobalVars RpHAnimAtomicGlobals; // size: 0x8, address: 0x80D6C1D8
// total size: 0x30
struct RwFreeList {
    // Members
    unsigned int entrySize; // offset 0x0, size 0x4
    unsigned int nonAlignedEntrySize; // offset 0x4, size 0x4
    unsigned int entriesPerBlock; // offset 0x8, size 0x4
    unsigned int heapSize; // offset 0xC, size 0x4
    unsigned int alignment; // offset 0x10, size 0x4
    struct RwLinkList blockList; // offset 0x14, size 0x8
    unsigned int flags; // offset 0x1C, size 0x4
    struct RwLLLink link; // offset 0x20, size 0x8
    const char * fileCreate; // offset 0x28, size 0x4
    unsigned int lineCreate; // offset 0x2C, size 0x4
};
static struct RwFreeList _rpHAnimHierarchyFreeList; // size: 0x30, address: 0x80D5BEE0
// Range: 0x803E1A48 -> 0x803E1B80
static void * HAnimOpen(void * instance /* r31 */) {
    // Local variables
    struct RtAnimInterpolatorInfo interpInfo; // r1+0x8

    // References
    // -> struct RpHAnimAtomicGlobalVars RpHAnimAtomicGlobals;
    // -> static struct RwFreeList _rpHAnimHierarchyFreeList;
    // -> static int _rpHAnimHierarchyFreeListPreallocBlocks;
    // -> static int _rpHAnimHierarchyFreeListBlockSize;
    // -> static char __dbFunctionName[10];
}

static char __dbFunctionName[11]; // size: 0xB, address: 0x804E7B4A
// Range: 0x803E1B80 -> 0x803E1C18
static void * HAnimClose(void * instance /* r31 */) {
    // References
    // -> struct RpHAnimAtomicGlobalVars RpHAnimAtomicGlobals;
    // -> static char __dbFunctionName[11];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804E7B55
// total size: 0x8
struct RpHAnimFrameExtension {
    // Members
    int id; // offset 0x0, size 0x4
    struct RpHAnimHierarchy * hierarchy; // offset 0x4, size 0x4
};
// Range: 0x803E1C18 -> 0x803E1CA4
static void * HAnimConstructor(void * object /* r30 */) {
    // Local variables
    struct RpHAnimFrameExtension * frameExt; // r31

    // References
    // -> struct RpHAnimAtomicGlobalVars RpHAnimAtomicGlobals;
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804E7B66
// Range: 0x803E1CA4 -> 0x803E1D8C
static void * HAnimDestructor(void * object /* r28 */) {
    // Local variables
    struct RpHAnimFrameExtension * frameExt; // r30
    struct RpHAnimHierarchy * pHierarchy; // r31
    int frameNum; // r29

    // References
    // -> struct RpHAnimAtomicGlobalVars RpHAnimAtomicGlobals;
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[10]; // size: 0xA, address: 0x804E7B76
// Range: 0x803E1D8C -> 0x803E1F10
static void * HAnimCopy(void * dstObject /* r26 */, void * srcObject /* r24 */) {
    // Local variables
    const struct RpHAnimFrameExtension * srcFrameExt; // r28
    struct RpHAnimFrameExtension * dstFrameExt; // r27
    struct RpHAnimHierarchy * srcHierarchy; // r31
    struct RpHAnimHierarchy * dstHierarchy; // r30
    int i; // r29

    // References
    // -> struct RpHAnimAtomicGlobalVars RpHAnimAtomicGlobals;
    // -> static char __dbFunctionName[10];
}

static char __dbFunctionName[11]; // size: 0xB, address: 0x804E7B80
// Range: 0x803E1F10 -> 0x803E212C
static struct RwStream * HAnimWrite(struct RwStream * stream /* r30 */, void * object /* r26 */) {
    // Local variables
    int i; // r28
    const struct RpHAnimFrameExtension * frameExt; // r27
    struct RpHAnimNodeInfo * pNodeInfo; // r29
    struct RpHAnimHierarchy * animHierarchy; // r31
    int streamVersion; // r1+0xC
    int numNodes; // r1+0x8

    // References
    // -> struct RpHAnimAtomicGlobalVars RpHAnimAtomicGlobals;
    // -> static char __dbFunctionName[11];
}

static char __dbFunctionName[10]; // size: 0xA, address: 0x804E7B8B
enum RpHAnimHierarchyFlag {
    rpHANIMHIERARCHYSUBHIERARCHY = 1,
    rpHANIMHIERARCHYNOMATRICES = 2,
    rpHANIMHIERARCHYUPDATEMODELLINGMATRICES = 4096,
    rpHANIMHIERARCHYUPDATELTMS = 8192,
    rpHANIMHIERARCHYLOCALSPACEMATRICES = 16384,
    rpHANIMHIERARCHYFLAGFORCEENUMSIZEINT = 2147483647,
};
// Range: 0x803E212C -> 0x803E2464
static struct RwStream * HAnimRead(struct RwStream * stream /* r30 */, void * object /* r25 */) {
    // Local variables
    int i; // r28
    int numNodes; // r1+0x14
    int streamVersion; // r1+0x10
    struct RpHAnimNodeInfo * pNodeInfo; // r29
    struct RpHAnimHierarchy * pHierarchy; // r31
    struct RpHAnimFrameExtension * frameExt; // r27
    enum RpHAnimHierarchyFlag flags; // r1+0xC
    int maxInterpKeyFrameSize; // r1+0x8
    void * ptr; // r26

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[10];
    // -> struct RpHAnimAtomicGlobalVars RpHAnimAtomicGlobals;
}

static char __dbFunctionName[10]; // size: 0xA, address: 0x804E7B95
// Range: 0x803E2464 -> 0x803E252C
static int HAnimSize(void * object /* r3 */) {
    // Local variables
    int needToStream; // r28
    const struct RpHAnimFrameExtension * frameExt; // r30
    int size; // r31

    // References
    // -> static char __dbFunctionName[10];
    // -> struct RpHAnimAtomicGlobalVars RpHAnimAtomicGlobals;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804E7B9F
// Range: 0x803E252C -> 0x803E260C
int RpHAnimPluginAttach() {
    // Local variables
    int success; // r31

    // References
    // -> struct RpHAnimAtomicGlobalVars RpHAnimAtomicGlobals;
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804E7BB3
// Range: 0x803E260C -> 0x803E27F8
struct RpHAnimHierarchy * RpHAnimHierarchyCreate(int numNodes /* r29 */, unsigned int * nodeFlags /* r26 */, int * nodeIDs /* r27 */, enum RpHAnimHierarchyFlag flags /* r23 */, int maxInterpKeyFrameSize /* r1+0x8 */) {
    // Local variables
    void * ptr; // r28
    struct RpHAnimHierarchy * pHierarchy; // r31
    int node; // r30

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> struct RpHAnimAtomicGlobalVars RpHAnimAtomicGlobals;
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E7BCA
// Range: 0x803E27F8 -> 0x803E2914
struct RpHAnimHierarchy * RpHAnimHierarchyDestroy(struct RpHAnimHierarchy * hierarchy /* r31 */) {
    // Local variables
    struct RwFrame * parentFrame; // r30
    struct RpHAnimFrameExtension * frameExt; // r29

    // References
    // -> struct RpHAnimAtomicGlobalVars RpHAnimAtomicGlobals;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804E7BE2
// Range: 0x803E2914 -> 0x803E29BC
int RpHAnimFrameSetHierarchy(struct RwFrame * frame /* r29 */, struct RpHAnimHierarchy * hierarchy /* r30 */) {
    // Local variables
    struct RpHAnimFrameExtension * frameExt; // r31

    // References
    // -> struct RpHAnimAtomicGlobalVars RpHAnimAtomicGlobals;
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804E7BFB
// Range: 0x803E29BC -> 0x803E2A40
struct RpHAnimHierarchy * RpHAnimFrameGetHierarchy(struct RwFrame * frame /* r29 */) {
    // Local variables
    struct RpHAnimFrameExtension * frameExt; // r31
    struct RpHAnimHierarchy * result; // r30

    // References
    // -> struct RpHAnimAtomicGlobalVars RpHAnimAtomicGlobals;
    // -> static char __dbFunctionName[25];
}


