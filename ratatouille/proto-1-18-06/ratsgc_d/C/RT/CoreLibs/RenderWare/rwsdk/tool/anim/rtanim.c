/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\tool\anim\rtanim.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8042D848 -> 0x8042DC70
*/
int RtAnimInterpolatorInfoBlockNumEntries; // size: 0x4, address: 0x80D6C2F8
static char __dbFunctionName[34]; // size: 0x22, address: 0x804EBF20
struct RtAnimInterpolatorInfo RtAnimInterpolatorInfoBlock[16]; // size: 0x300, address: 0x80D5CAB0
// Range: 0x8042D848 -> 0x8042DAB0
int RtAnimRegisterInterpolationScheme(struct RtAnimInterpolatorInfo * interpInfo /* r30 */) {
    // Local variables
    int i; // r29
    struct RwError _rwErrorCode; // r1+0x10
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[34];
    // -> int RtAnimInterpolatorInfoBlockNumEntries;
    // -> struct RtAnimInterpolatorInfo RtAnimInterpolatorInfoBlock[16];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EBF42
// Range: 0x8042DAB0 -> 0x8042DBF4
struct RtAnimInterpolator * RtAnimInterpolatorCreate(int numNodes /* r29 */, int maxInterpKeyFrameSize /* r30 */) {
    // Local variables
    void * ptr; // r28
    struct RtAnimInterpolator * anim; // r31

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EBF5B
// Range: 0x8042DBF4 -> 0x8042DC70
void RtAnimInterpolatorDestroy(struct RtAnimInterpolator * anim /* r31 */) {
    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[26];
}


