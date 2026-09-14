/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\plcore\bastream.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8043661C -> 0x80437D58
*/
static int _rwStreamFreeListBlockSize; // size: 0x4, address: 0x80D687B8
static int _rwStreamFreeListPreallocBlocks; // size: 0x4, address: 0x80D687BC
static char __dbFunctionName[20]; // size: 0x14, address: 0x804ECC40
static struct RwModuleInfo streamModule; // size: 0x8, address: 0x80D6C338
static struct RwFreeList _rwStreamFreeList; // size: 0x30, address: 0x80D5D410
// Range: 0x8043661C -> 0x804366C0
void * _rwStreamModuleOpen(void * instance /* r1+0x8 */, int offset /* r1+0xC */) {
    // References
    // -> static struct RwModuleInfo streamModule;
    // -> void * RwEngineInstance;
    // -> static struct RwFreeList _rwStreamFreeList;
    // -> static int _rwStreamFreeListPreallocBlocks;
    // -> static int _rwStreamFreeListBlockSize;
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804ECC54
// Range: 0x804366C0 -> 0x80436730
void * _rwStreamModuleClose(void * instance /* r1+0x8 */) {
    // References
    // -> static struct RwModuleInfo streamModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804ECC69
union _rwvoidptr {
    void * constvoidptr; // offset 0x0, size 0x4
    void * voidptr; // offset 0x0, size 0x4
};
// Range: 0x80436730 -> 0x804367D4
static struct RwStream * StreamFileInitialize(struct RwStream * stream /* r31 */, void * pData /* r30 */) {
    // Local variables
    union _rwvoidptr voidptr; // r1+0x8

    // References
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804ECC7E
// Range: 0x804367D4 -> 0x804369DC
static struct RwStream * StreamFileNameInitialize(struct RwStream * stream /* r28 */, enum RwStreamAccessType accessType /* r1+0x8 */, void * pData /* r1+0xC */) {
    // Local variables
    struct RwStream * result; // r29
    void * fp; // r30
    const char * cpFile; // r31
    struct RwError _rwErrorCode; // r1+0x18
    struct RwError _rwErrorCode; // r1+0x10

    // References
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804ECC97
// Range: 0x804369DC -> 0x80436B4C
static struct RwStream * StreamMemoryInitialize(struct RwStream * stream /* r31 */, enum RwStreamAccessType accessType /* r1+0x8 */, void * pData /* r1+0xC */) {
    // Local variables
    struct RwStream * result; // r29
    const struct RwMemory * mepMem; // r30
    struct RwError _rwErrorCode; // r1+0x10

    // References
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804ECCAE
// Range: 0x80436B4C -> 0x80436BA4
static struct RwStream * StreamCustomInitialize(struct RwStream * stream /* r31 */, void * pData /* r1+0x8 */) {
    // References
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804ECCC5
// Range: 0x80436BA4 -> 0x80436D8C
struct RwStream * _rwStreamInitialize(struct RwStream * stream /* r31 */, int rwOwned /* r1+0x8 */, enum RwStreamType type /* r27 */, enum RwStreamAccessType accessType /* r28 */, void * pData /* r29 */) {
    // Local variables
    struct RwStream * result; // r30
    struct RwError _rwErrorCode; // r1+0xC

    // References
    // -> static char __dbFunctionName[20];
    // -> static struct RwModuleInfo streamModule;
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804ECCD9
// Range: 0x80436D8C -> 0x80437198
unsigned int RwStreamRead(struct RwStream * stream /* r29 */, void * buffer /* r27 */, unsigned int length /* r28 */) {
    // Local variables
    void * fp; // r26
    unsigned int nBytesRead; // r25
    struct RwError _rwErrorCode; // r1+0x20
    struct RwError _rwErrorCode; // r1+0x18
    struct RwStreamMemory * smpMem; // r31
    struct RwError _rwErrorCode; // r1+0x10
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[13];
    // -> static struct RwModuleInfo streamModule;
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804ECCE6
// Range: 0x80437198 -> 0x804376B0
struct RwStream * RwStreamWrite(struct RwStream * stream /* r30 */, void * buffer /* r26 */, unsigned int length /* r28 */) {
    // Local variables
    void * fp; // r24
    unsigned int nBytesWritten; // r23
    struct RwError _rwErrorCode; // r1+0x20
    struct RwStreamMemory * smpMem; // r31
    struct RwError _rwErrorCode; // r1+0x18
    unsigned int nAllocSize; // r27
    void * pData; // r25
    struct RwError _rwErrorCode; // r1+0x10
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[14];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static struct RwModuleInfo streamModule;
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804ECCF4
// Range: 0x804376B0 -> 0x804379EC
struct RwStream * RwStreamSkip(struct RwStream * stream /* r31 */, unsigned int offset /* r28 */) {
    // Local variables
    void * fp; // r27
    struct RwStream * retVal; // r26
    struct RwError _rwErrorCode; // r1+0x18
    struct RwStreamMemory * smpMem; // r30
    struct RwError _rwErrorCode; // r1+0x10
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[13];
    // -> static struct RwModuleInfo streamModule;
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804ECD01
// Range: 0x804379EC -> 0x80437C04
int RwStreamClose(struct RwStream * stream /* r31 */, void * pData /* r27 */) {
    // Local variables
    int result; // r30
    struct RwMemory * mepMem; // r29
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static struct RwModuleInfo streamModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804ECD0F
// Range: 0x80437C04 -> 0x80437D58
struct RwStream * RwStreamOpen(enum RwStreamType type /* r1+0x8 */, enum RwStreamAccessType accessType /* r1+0xC */, void * pData /* r29 */) {
    // Local variables
    struct RwStream * stream; // r31

    // References
    // -> static struct RwModuleInfo streamModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[13];
}


