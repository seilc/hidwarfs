/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\world\pipe\p2\bapipew.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8041E9FC -> 0x8041F350
*/
static char __dbFunctionName[28]; // size: 0x1C, address: 0x804EB1A0
// total size: 0x4
struct RxMatIndexBounds {
    // Members
    unsigned short minIndex; // offset 0x0, size 0x2
    unsigned short maxIndex; // offset 0x2, size 0x2
};
// Range: 0x8041E9FC -> 0x8041EC78
struct RpGeometry * RpGeometryIsCorrectlySorted(const struct RpGeometry * geometry /* r31 */, int * result /* r23 */) {
    // Local variables
    struct RxMatIndexBounds * matIndexBounds; // r30
    int sumOfMeshVertIndexRanges; // r24
    unsigned short vertIndex; // r26
    signed short matIndex; // r28
    int i; // r29
    int j; // r25
    unsigned int bytes; // r22

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[28];
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[32]; // size: 0x20, address: 0x804EB1BC
// Range: 0x8041EC78 -> 0x8041ED40
struct RxPipeline * RpWorldSetDefaultSectorPipeline(struct RxPipeline * pipeline /* r31 */) {
    // References
    // -> static char __dbFunctionName[32];
    // -> int _rxPipelineGlobalsOffset;
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EB1DC
// Range: 0x8041ED40 -> 0x8041EDF8
struct RpWorldSector * RpWorldSectorSetPipeline(struct RpWorldSector * sector /* r1+0x8 */, struct RxPipeline * pipeline /* r1+0xC */) {
    // References
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804EB1F5
// Range: 0x8041EDF8 -> 0x8041EEC0
struct RxPipeline * RpAtomicSetDefaultPipeline(struct RxPipeline * pipeline /* r31 */) {
    // References
    // -> static char __dbFunctionName[27];
    // -> int _rxPipelineGlobalsOffset;
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EB210
// Range: 0x8041EEC0 -> 0x8041EF78
struct RpAtomic * RpAtomicSetPipeline(struct RpAtomic * atomic /* r1+0x8 */, struct RxPipeline * pipeline /* r1+0xC */) {
    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EB224
// Range: 0x8041EF78 -> 0x8041F058
struct RpAtomic * RpAtomicGetPipeline(const struct RpAtomic * const atomic /* r1+0x8 */, struct RxPipeline * * pipeline /* r29 */) {
    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EB238
// Range: 0x8041F058 -> 0x8041F0E0
struct RpMaterial * RpMaterialSetPipeline(struct RpMaterial * material /* r1+0x8 */, struct RxPipeline * pipeline /* r1+0xC */) {
    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EB24E
// Range: 0x8041F0E0 -> 0x8041F194
struct RpMaterial * RpMaterialGetPipeline(struct RpMaterial * material /* r1+0x8 */, struct RxPipeline * * pipeline /* r29 */) {
    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EB264
// Range: 0x8041F194 -> 0x8041F1D4
void _rpWorldPipelineClose() {
    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EB27A
// Range: 0x8041F1D4 -> 0x8041F330
int _rpWorldPipelineOpen() {
    // Local variables
    int success; // r31

    // References
    // -> int _rxPipelineGlobalsOffset;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EB28F
// Range: 0x8041F330 -> 0x8041F350
int _rpWorldPipeAttach() {
    // References
    // -> static char __dbFunctionName[19];
}


