/*
    Compile unit: E:\SD2\Game\flat\zAnimList.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int nals; // size: 0x4, address: 0x358444
static unsigned int * aids; // size: 0x4, address: 0x358448
static class xAnimTable * * atbls; // size: 0x4, address: 0x35844C
static signed int * anused; // size: 0x4, address: 0x358450
static char * astnames[20]; // size: 0x50, address: 0x2B5950
unsigned int AlwaysConditional(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1DD070
unsigned int gActiveHeap; // size: 0x4, address: 0x357CAC
// total size: 0x44
class xAnimFile {
    // Members
public:
    class xAnimFile * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int FileFlags; // offset 0xC, size 0x4
    float Duration; // offset 0x10, size 0x4
    float TimeOffset; // offset 0x14, size 0x4
    float PhysBase[4]; // offset 0x18, size 0x10
    float PhysDelta[4]; // offset 0x28, size 0x10
    unsigned short BoneCount; // offset 0x38, size 0x2
    unsigned char NumAnims[2]; // offset 0x3A, size 0x2
    void * * RawData; // offset 0x3C, size 0x4
    void * Physics; // offset 0x40, size 0x4
};
// total size: 0x60
class xAnimSingle {
    // Members
public:
    unsigned int SingleFlags; // offset 0x0, size 0x4
    class xAnimState * State; // offset 0x4, size 0x4
    float Time; // offset 0x8, size 0x4
    float CurrentSpeed; // offset 0xC, size 0x4
    float BilinearLerp[2]; // offset 0x10, size 0x8
    class xAnimEffect * Effect; // offset 0x18, size 0x4
    unsigned int ActiveCount; // offset 0x1C, size 0x4
    class xAnimActiveEffect * ActiveList; // offset 0x20, size 0x4
    class xAnimPlay * Play; // offset 0x24, size 0x4
    float LastTime; // offset 0x28, size 0x4
    class _xVec3 LastTranslation; // offset 0x2C, size 0xC
    float LastYaw; // offset 0x38, size 0x4
    unsigned int pad; // offset 0x3C, size 0x4
    class _xQuat LastQuat; // offset 0x40, size 0x10
    class xAnimTransition * Sync; // offset 0x50, size 0x4
    class xAnimTransition * Tran; // offset 0x54, size 0x4
    class xAnimSingle * Blend; // offset 0x58, size 0x4
    float BlendFactor; // offset 0x5C, size 0x4
};
// total size: 0x14
class xAnimEffect {
    // Members
public:
    class xAnimEffect * Next; // offset 0x0, size 0x4
    unsigned int Flags; // offset 0x4, size 0x4
    float StartTime; // offset 0x8, size 0x4
    float EndTime; // offset 0xC, size 0x4
    unsigned int (* Callback)(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *); // offset 0x10, size 0x4
};
// total size: 0x18
class xAnimTable {
    // Members
public:
    class xAnimTable * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    class xAnimTransition * TransitionList; // offset 0x8, size 0x4
    class xAnimState * StateList; // offset 0xC, size 0x4
    unsigned int AnimIndex; // offset 0x10, size 0x4
    unsigned int MorphIndex; // offset 0x14, size 0x4
};
// total size: 0x8
class xAnimTransitionList {
    // Members
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
};
// total size: 0x28
class zAnimListAsset {
    // Members
public:
    unsigned int ids[10]; // offset 0x0, size 0x28
};
// total size: 0x1C
class xMemPool {
    // Members
public:
    void * FreeList; // offset 0x0, size 0x4
    unsigned short NextOffset; // offset 0x4, size 0x2
    unsigned short Flags; // offset 0x6, size 0x2
    void * UsedList; // offset 0x8, size 0x4
    void (* InitCB)(class xMemPool *, void *); // offset 0xC, size 0x4
    void * Buffer; // offset 0x10, size 0x4
    unsigned short Size; // offset 0x14, size 0x2
    unsigned short NumRealloc; // offset 0x16, size 0x2
    unsigned int Total; // offset 0x18, size 0x4
};
// total size: 0x0
class xModelInstance {};
// total size: 0x8
class xAnimActiveEffect {
    // Members
public:
    class xAnimEffect * Effect; // offset 0x0, size 0x4
    unsigned int Handle; // offset 0x4, size 0x4
};
// total size: 0x2C
class xAnimTransition {
    // Members
public:
    class xAnimTransition * Next; // offset 0x0, size 0x4
    class xAnimState * Dest; // offset 0x4, size 0x4
    unsigned int (* Conditional)(class xAnimTransition *, class xAnimSingle *, void *); // offset 0x8, size 0x4
    unsigned int (* Callback)(class xAnimTransition *, class xAnimSingle *, void *); // offset 0xC, size 0x4
    unsigned int Flags; // offset 0x10, size 0x4
    unsigned int UserFlags; // offset 0x14, size 0x4
    float SrcTime; // offset 0x18, size 0x4
    float DestTime; // offset 0x1C, size 0x4
    unsigned short Priority; // offset 0x20, size 0x2
    unsigned short QueuePriority; // offset 0x22, size 0x2
    float BlendRecip; // offset 0x24, size 0x4
    unsigned short * BlendOffset; // offset 0x28, size 0x4
};
// total size: 0x38
class xAnimState {
    // Members
public:
    class xAnimState * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int Flags; // offset 0xC, size 0x4
    unsigned int UserFlags; // offset 0x10, size 0x4
    float Speed; // offset 0x14, size 0x4
    class xAnimFile * Data; // offset 0x18, size 0x4
    class xAnimEffect * Effects; // offset 0x1C, size 0x4
    class xAnimTransitionList * Default; // offset 0x20, size 0x4
    class xAnimTransitionList * List; // offset 0x24, size 0x4
    float * BoneBlend; // offset 0x28, size 0x4
    float * TimeSnap; // offset 0x2C, size 0x4
    float FadeRecip; // offset 0x30, size 0x4
    unsigned short * FadeOffset; // offset 0x34, size 0x4
};
// total size: 0x10
class _xQuat {
    // Members
public:
    class _xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
// total size: 0x60
class xAnimPlay {
    // Members
public:
    class xAnimPlay * Next; // offset 0x0, size 0x4
    unsigned short NumSingle; // offset 0x4, size 0x2
    unsigned short BoneCount; // offset 0x6, size 0x2
    class xAnimSingle * Single; // offset 0x8, size 0x4
    void * Object; // offset 0xC, size 0x4
    class xAnimTable * Table; // offset 0x10, size 0x4
    class _xVec3 Translate[2]; // offset 0x14, size 0x18
    unsigned int pad1; // offset 0x2C, size 0x4
    class _xQuat Quat[2]; // offset 0x30, size 0x20
    float Yaw; // offset 0x50, size 0x4
    class xMemPool * Pool; // offset 0x54, size 0x4
    class xModelInstance * ModelInst; // offset 0x58, size 0x4
    unsigned int pad2; // offset 0x5C, size 0x4
};
// total size: 0x14
class st_xST_XASSETINFO {
    // Members
public:
    unsigned int aid; // offset 0x0, size 0x4
    unsigned int sector; // offset 0x4, size 0x4
    unsigned int plus_offset; // offset 0x8, size 0x4
    unsigned int size; // offset 0xC, size 0x4
    void * mempos; // offset 0x10, size 0x4
};
// total size: 0xC
class _xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\zAnimList.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCC30 -> 0x001DCC7C
*/
// Range: 0x1DCC30 -> 0x1DCC7C
signed int zAnimListGetNumUsed(unsigned int id /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DCC30 -> 0x1DCC7C
        signed int i; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zAnimList.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCC80 -> 0x001DCCCC
*/
// Range: 0x1DCC80 -> 0x1DCCCC
class xAnimTable * zAnimListGetTable(unsigned int id /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DCC80 -> 0x1DCCCC
        signed int i; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zAnimList.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCCD0 -> 0x001DCCE4
*/
// Range: 0x1DCCD0 -> 0x1DCCE4
void zAnimListExit() {
    /* anonymous block */ {
        // Range: 0x1DCCD0 -> 0x1DCCE4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zAnimList.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCCF0 -> 0x001DD070
*/
// Range: 0x1DCCF0 -> 0x1DD070
void zAnimListInit() {
    /* anonymous block */ {
        // Range: 0x1DCCF0 -> 0x1DD070
        class xAnimFile * afile; // r18
        signed int j; // r17
        signed int idle_exists; // r22
        class xAnimFile * afile; // r18
        void * buf; // r2
        class xAnimTable * atbl; // r16
        class st_xST_XASSETINFO ainfo; // r29+0xF0
        class zAnimListAsset * zala; // r17
        unsigned int size; // r29+0x10C
        signed int i; // r30
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zAnimList.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD070 -> 0x001DD078
*/
// Range: 0x1DD070 -> 0x1DD078
static unsigned int AlwaysConditional() {
    /* anonymous block */ {
        // Range: 0x1DD070 -> 0x1DD078
    }
}


