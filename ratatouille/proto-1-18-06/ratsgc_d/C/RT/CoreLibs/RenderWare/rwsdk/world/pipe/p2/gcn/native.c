/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\world\pipe\p2\gcn\native.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80423484 -> 0x80424044
*/
static char __dbFunctionName[24]; // size: 0x18, address: 0x804EB928
// Range: 0x80423484 -> 0x80423538
static void _rpNativePointer2Offset(struct RxGameCubeVertexBuffer * vbHeader /* r3 */, struct RxGameCubeDisplayList * dList /* r4 */, unsigned int numMeshes /* r5 */) {
    // Local variables
    unsigned int i; // r31
    unsigned char * baseAddress; // r30

    // References
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EB940
// Range: 0x80423538 -> 0x804235EC
static void _rpNativeOffset2Pointer(struct RxGameCubeVertexBuffer * vbHeader /* r3 */, struct RxGameCubeDisplayList * dList /* r4 */, unsigned int numMeshes /* r5 */) {
    // Local variables
    unsigned int i; // r31
    unsigned char * baseAddress; // r30

    // References
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804EB958
// Range: 0x804235EC -> 0x804236AC
static unsigned int _rpNativeSize(struct RwResEntry * resEntry /* r28 */) {
    // Local variables
    unsigned int size; // r29
    struct RxGameCubeVertexBuffer * vbHeader; // r31
    struct RxGameCubeDisplayList * dList; // r27

    // References
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804EB966
// Range: 0x804236AC -> 0x804239E0
static void * _rpNativeRead(struct RwStream * stream /* r29 */, void * owner /* r23 */, struct RwResEntry * * resEntryPointer /* r31 */, unsigned int numMeshes /* r1+0x8 */) {
    // Local variables
    unsigned int version; // r1+0x1C
    unsigned int size; // r1+0x18
    unsigned int headerSize; // r1+0x14
    unsigned int dlistSize; // r1+0x10
    unsigned int resSize; // r27
    enum RwPlatformID id; // r1+0xC
    struct RxGameCubeVertexBuffer * vbHeader; // r30
    struct RxGameCubeDisplayList * dList; // r26
    unsigned char * displayLists; // r25
    struct RwError _rwErrorCode; // r1+0x20

    // References
    // -> static char __dbFunctionName[14];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EB974
// Range: 0x804239E0 -> 0x80423BE0
static struct RwStream * _rpNativeWrite(struct RwStream * stream /* r29 */, struct RwResEntry * resEntry /* r30 */, unsigned int numMeshes /* r27 */) {
    // Local variables
    enum RwPlatformID id; // r1+0x10
    unsigned int chunkSize; // r25
    unsigned int headerSize; // r1+0xC
    unsigned int dListSize; // r1+0x8
    struct RxGameCubeVertexBuffer * vbHeader; // r31
    struct RxGameCubeDisplayList * dList; // r28

    // References
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EB983
// Range: 0x80423BE0 -> 0x80423C84
int _rpGeometryNativeSize(const struct RpGeometry * geometry /* r31 */) {
    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EB999
// Range: 0x80423C84 -> 0x80423D50
struct RwStream * _rpGeometryNativeWrite(struct RwStream * stream /* r30 */, const struct RpGeometry * geometry /* r31 */) {
    // References
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EB9B0
// Range: 0x80423D50 -> 0x80423E0C
struct RpGeometry * _rpGeometryNativeRead(struct RwStream * stream /* r28 */, struct RpGeometry * geometry /* r31 */) {
    // Local variables
    struct RpGeometry * result; // r29

    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EB9C6
// Range: 0x80423E0C -> 0x80423EB4
int _rpWorldSectorNativeSize(const struct RpWorldSector * sector /* r31 */) {
    // References
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EB9DF
// Range: 0x80423EB4 -> 0x80423F88
struct RwStream * _rpWorldSectorNativeWrite(struct RwStream * stream /* r29 */, const struct RpWorldSector * sector /* r31 */) {
    // Local variables
    struct RpWorld * world; // r28

    // References
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EB9F9
// Range: 0x80423F88 -> 0x80424044
struct RpWorldSector * _rpWorldSectorNativeRead(struct RwStream * stream /* r28 */, struct RpWorldSector * sector /* r31 */) {
    // Local variables
    struct RpWorldSector * result; // r29

    // References
    // -> static char __dbFunctionName[25];
}


