/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\plcore\babinary.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8042E86C -> 0x8042FC80
*/
static char __dbFunctionName[15]; // size: 0xF, address: 0x804EC548
// Range: 0x8042E86C -> 0x8042E9A0
static int ChunkIsComplex(struct RwChunkHeaderInfo * chunkHeaderInfo /* r30 */) {
    // Local variables
    int result; // r31

    // References
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EC557
// total size: 0xC
struct __rwMark {
    // Members
    unsigned int type; // offset 0x0, size 0x4
    unsigned int length; // offset 0x4, size 0x4
    unsigned int libraryID; // offset 0x8, size 0x4
};
// Range: 0x8042E9A0 -> 0x8042EBA4
int _rwStreamReadChunkHeader(struct RwStream * stream /* r26 */, unsigned int * type /* r28 */, unsigned int * length /* r29 */, unsigned int * version /* r30 */, unsigned int * buildNum /* r31 */) {
    // Local variables
    int status; // r27
    struct __rwMark mark; // r1+0x10
    struct RwChunkHeaderInfo chunkHdrInfo; // r1+0x1C
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[35]; // size: 0x23, address: 0x804EC570
// Range: 0x8042EBA4 -> 0x8042ECE8
struct RwStream * _rwStreamWriteVersionedChunkHeader(struct RwStream * stream /* r27 */, int type /* r1+0x8 */, int size /* r1+0xC */, unsigned int version /* r31 */, unsigned int buildNum /* r28 */) {
    // Local variables
    struct __rwMark mark; // r1+0x10
    struct RwStream * streamRet; // r29

    // References
    // -> static char __dbFunctionName[35];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EC593
// Range: 0x8042ECE8 -> 0x8042EFE4
int RwStreamFindChunk(struct RwStream * stream /* r28 */, unsigned int type /* r1+0x8 */, unsigned int * lengthOut /* r29 */, unsigned int * versionOut /* r30 */) {
    // Local variables
    unsigned int readType; // r1+0x14
    unsigned int readLength; // r1+0x10
    unsigned int readVersion; // r1+0xC
    struct RwError _rwErrorCode; // r1+0x20
    struct RwError _rwErrorCode; // r1+0x18

    // References
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EC5A5
// Range: 0x8042EFE4 -> 0x8042F0E0
void * RwMemLittleEndian32(void * mem /* r29 */, unsigned int size /* r30 */) {
    // Local variables
    unsigned int * memInt; // r31

    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EC5B9
// Range: 0x8042F0E0 -> 0x8042F1C0
void * RwMemLittleEndian16(void * mem /* r29 */, unsigned int size /* r30 */) {
    // Local variables
    unsigned short * memInt; // r31

    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804EC5CD
// Range: 0x8042F1C0 -> 0x8042F2BC
void * RwMemNative32(void * mem /* r29 */, unsigned int size /* r30 */) {
    // Local variables
    unsigned int * memInt; // r31

    // References
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804EC5DB
// Range: 0x8042F2BC -> 0x8042F39C
void * RwMemNative16(void * mem /* r29 */, unsigned int size /* r30 */) {
    // Local variables
    unsigned short * memInt; // r31

    // References
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EC5E9
// Range: 0x8042F39C -> 0x8042F4A8
struct RwStream * RwStreamWriteReal(struct RwStream * stream /* r27 */, const float * reals /* r29 */, unsigned int numBytes /* r30 */) {
    // Local variables
    unsigned char convertBuffer[256]; // r1+0x8
    unsigned int bytesToWrite; // r31

    // References
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EC5FB
// Range: 0x8042F4A8 -> 0x8042F5E4
struct RwStream * RwStreamWriteInt32(struct RwStream * stream /* r27 */, const int * ints /* r29 */, unsigned int numBytes /* r30 */) {
    // Local variables
    unsigned char convertBuffer[256]; // r1+0x8
    unsigned int bytesToWrite; // r31

    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EC60E
// Range: 0x8042F5E4 -> 0x8042F720
struct RwStream * RwStreamWriteInt16(struct RwStream * stream /* r27 */, const signed short * ints /* r29 */, unsigned int numBytes /* r30 */) {
    // Local variables
    unsigned char convertBuffer[256]; // r1+0x8
    unsigned int bytesToWrite; // r31

    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EC621
// Range: 0x8042F720 -> 0x8042F8B8
struct RwStream * RwStreamReadInt16(struct RwStream * stream /* r29 */, signed short * ints /* r30 */, unsigned int numBytes /* r31 */) {
    // Local variables
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EC633
// Range: 0x8042F8B8 -> 0x8042FA20
struct RwStream * RwStreamReadReal(struct RwStream * stream /* r30 */, float * reals /* r31 */, unsigned int numBytes /* r29 */) {
    // Local variables
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EC644
// Range: 0x8042FA20 -> 0x8042FB88
struct RwStream * RwStreamReadInt32(struct RwStream * stream /* r30 */, int * ints /* r31 */, unsigned int numBytes /* r29 */) {
    // Local variables
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804EC656
// Range: 0x8042FB88 -> 0x8042FC80
struct RwStream * RwStreamReadChunkHeaderInfo(struct RwStream * stream /* r30 */, struct RwChunkHeaderInfo * chunkHeaderInfo /* r31 */) {
    // Local variables
    unsigned int readType; // r1+0x14
    unsigned int readLength; // r1+0x10
    unsigned int readVersion; // r1+0xC
    unsigned int readBuildNum; // r1+0x8

    // References
    // -> static char __dbFunctionName[28];
}


