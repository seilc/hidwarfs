/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\plcore\bavector.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804397D4 -> 0x8043B080
*/
static char __dbFunctionName[17]; // size: 0x11, address: 0x804ECF80
static struct RwModuleInfo vectorModule; // size: 0x8, address: 0x80D6C350
// Range: 0x804397D4 -> 0x80439848
static void SqrtTableDestroy() {
    // References
    // -> static struct RwModuleInfo vectorModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804ECF91
// Range: 0x80439848 -> 0x80439A1C
static int SqrtTableCreate() {
    // Local variables
    unsigned int i; // r31
    union RwSplitBits * SqrtTab2to4; // r30
    union RwSplitBits * SqrtTab1to2; // r29
    union RwSplitBits spIn; // r1+0xC
    union RwSplitBits spOut; // r1+0x8
    struct RwError _rwErrorCode; // r1+0x10

    // References
    // -> static struct RwModuleInfo vectorModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[16];
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804ECFA1
// Range: 0x80439A1C -> 0x80439A9C
static void InvSqrtTableDestroy() {
    // References
    // -> static struct RwModuleInfo vectorModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804ECFB5
// Range: 0x80439A9C -> 0x80439C84
static int InvSqrtTableCreate() {
    // Local variables
    unsigned int i; // r31
    union RwSplitBits * InvSqrtTab1to2; // r29
    union RwSplitBits * InvSqrtTab2to4; // r30
    union RwSplitBits spIn; // r1+0xC
    union RwSplitBits spOut; // r1+0x8
    struct RwError _rwErrorCode; // r1+0x10

    // References
    // -> static struct RwModuleInfo vectorModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[19];
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804ECFC8
// Range: 0x80439C84 -> 0x80439E9C
float RwV3dNormalize(struct RwV3d * out /* r30 */, const struct RwV3d * in /* r31 */) {
    // Local variables
    float length; // f31
    float length2; // f28
    float recip; // f30
    float _tmp; // f29
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[15];
    // -> static struct RwModuleInfo vectorModule;
}

static char __dbFunctionName[12]; // size: 0xC, address: 0x804ECFD7
// Range: 0x80439E9C -> 0x80439F80
float RwV3dLength(const struct RwV3d * in /* r31 */) {
    // Local variables
    float length; // f31

    // References
    // -> static char __dbFunctionName[12];
    // -> static struct RwModuleInfo vectorModule;
}

static char __dbFunctionName[8]; // size: 0x8, address: 0x80D71FB8
// Range: 0x80439F80 -> 0x8043A0A8
float _rwSqrt(float num /* f31 */) {
    // Local variables
    union RwSplitBits result; // r1+0x8
    const union RwSplitBits * const SqrtTab; // r30

    // References
    // -> static char __dbFunctionName[8];
    // -> static struct RwModuleInfo vectorModule;
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[11]; // size: 0xB, address: 0x804ECFE3
// Range: 0x8043A0A8 -> 0x8043A1EC
float _rwInvSqrt(float num /* f31 */) {
    // Local variables
    union RwSplitBits result; // r1+0x8
    const union RwSplitBits * const InvSqrtTab; // r30

    // References
    // -> static char __dbFunctionName[11];
    // -> static struct RwModuleInfo vectorModule;
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[12]; // size: 0xC, address: 0x804ECFEE
// Range: 0x8043A1EC -> 0x8043A2CC
void RwV2dAssign(struct RwV2d * target /* r30 */, const struct RwV2d * source /* r31 */) {
    // References
    // -> static char __dbFunctionName[12];
    // -> static struct RwModuleInfo vectorModule;
}

static char __dbFunctionName[12]; // size: 0xC, address: 0x804ECFFA
// Range: 0x8043A2CC -> 0x8043A3B4
void RwV3dAssign(struct RwV3d * target /* r30 */, const struct RwV3d * source /* r31 */) {
    // References
    // -> static char __dbFunctionName[12];
    // -> static struct RwModuleInfo vectorModule;
}

static char __dbFunctionName[9]; // size: 0x9, address: 0x804ED006
// Range: 0x8043A3B4 -> 0x8043A4E0
void RwV3dAdd(struct RwV3d * out /* r29 */, const struct RwV3d * ina /* r30 */, const struct RwV3d * inb /* r31 */) {
    // References
    // -> static char __dbFunctionName[9];
    // -> static struct RwModuleInfo vectorModule;
}

static char __dbFunctionName[9]; // size: 0x9, address: 0x804ED00F
// Range: 0x8043A4E0 -> 0x8043A60C
void RwV3dSub(struct RwV3d * out /* r29 */, const struct RwV3d * ina /* r30 */, const struct RwV3d * inb /* r31 */) {
    // References
    // -> static char __dbFunctionName[9];
    // -> static struct RwModuleInfo vectorModule;
}

static char __dbFunctionName[11]; // size: 0xB, address: 0x804ED018
// Range: 0x8043A60C -> 0x8043A714
void RwV3dScale(struct RwV3d * out /* r30 */, const struct RwV3d * in /* r31 */, float scalar /* f31 */) {
    // References
    // -> static char __dbFunctionName[11];
    // -> static struct RwModuleInfo vectorModule;
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804ED023
// Range: 0x8043A714 -> 0x8043A828
void RwV3dIncrementScaled(struct RwV3d * out /* r30 */, const struct RwV3d * in /* r31 */, float scalar /* f31 */) {
    // References
    // -> static char __dbFunctionName[21];
    // -> static struct RwModuleInfo vectorModule;
}

static char __dbFunctionName[12]; // size: 0xC, address: 0x804ED038
// Range: 0x8043A828 -> 0x8043A91C
void RwV3dNegate(struct RwV3d * out /* r30 */, const struct RwV3d * in /* r31 */) {
    // References
    // -> static char __dbFunctionName[12];
    // -> static struct RwModuleInfo vectorModule;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804ED044
// Range: 0x8043A91C -> 0x8043AA10
float RwV3dDotProduct(const struct RwV3d * ina /* r30 */, const struct RwV3d * inb /* r31 */) {
    // References
    // -> static char __dbFunctionName[16];
    // -> static struct RwModuleInfo vectorModule;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804ED054
// Range: 0x8043AA10 -> 0x8043AB9C
void RwV3dCrossProduct(struct RwV3d * out /* r29 */, const struct RwV3d * ina /* r30 */, const struct RwV3d * inb /* r31 */) {
    // References
    // -> static char __dbFunctionName[18];
    // -> static struct RwModuleInfo vectorModule;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804ED066
// Range: 0x8043AB9C -> 0x8043ACE4
struct RwV3d * RwV3dTransformPoint(struct RwV3d * pointOut /* r27 */, const struct RwV3d * pointIn /* r25 */, const struct RwMatrixTag * matrix /* r26 */) {
    // Local variables
    struct RwV3d * __pntsOut; // r31
    const struct RwV3d * __pntsIn; // r30
    const struct RwMatrixTag * __matrix; // r29

    // References
    // -> static char __dbFunctionName[20];
    // -> static struct RwModuleInfo vectorModule;
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804ED07A
// Range: 0x8043ACE4 -> 0x8043AE6C
struct RwV3d * RwV3dTransformPoints(struct RwV3d * pointsOut /* r26 */, const struct RwV3d * pointsIn /* r23 */, int numPoints /* r24 */, const struct RwMatrixTag * matrix /* r25 */) {
    // Local variables
    struct RwV3d * __pntsOut; // r31
    const struct RwV3d * __pntsIn; // r30
    int __count; // r29
    const struct RwMatrixTag * __matrix; // r28

    // References
    // -> static char __dbFunctionName[21];
    // -> static struct RwModuleInfo vectorModule;
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804ED08F
// Range: 0x8043AE6C -> 0x8043AFAC
struct RwV3d * RwV3dTransformVector(struct RwV3d * vectorOut /* r27 */, const struct RwV3d * vectorIn /* r25 */, const struct RwMatrixTag * matrix /* r26 */) {
    // Local variables
    struct RwV3d * __vecsOut; // r31
    const struct RwV3d * __vecsIn; // r30
    const struct RwMatrixTag * __matrix; // r29

    // References
    // -> static char __dbFunctionName[21];
    // -> static struct RwModuleInfo vectorModule;
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804ED0A4
// Range: 0x8043AFAC -> 0x8043B000
void * _rwVectorClose(void * instance /* r1+0x8 */) {
    // References
    // -> static struct RwModuleInfo vectorModule;
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804ED0B3
// Range: 0x8043B000 -> 0x8043B080
void * _rwVectorOpen(void * instance /* r1+0x8 */, int offset /* r1+0xC */) {
    // References
    // -> static struct RwModuleInfo vectorModule;
    // -> static char __dbFunctionName[14];
}


