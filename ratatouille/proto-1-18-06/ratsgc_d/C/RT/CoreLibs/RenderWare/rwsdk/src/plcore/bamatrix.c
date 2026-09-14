/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\plcore\bamatrix.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804310A4 -> 0x80434594
*/
static char __dbFunctionName[15]; // size: 0xF, address: 0x804EC7E8
// Range: 0x804310A4 -> 0x804313B0
static void MatrixMultiply(struct RwMatrixTag * dstMat /* r29 */, const struct RwMatrixTag * matA /* r30 */, const struct RwMatrixTag * matB /* r31 */) {
    // References
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EC7F7
static struct RwModuleInfo matrixModule; // size: 0x8, address: 0x80D6C310
// Range: 0x804313B0 -> 0x80431AB8
static struct RwMatrixTag * MatrixOrthoNormalize(struct RwMatrixTag * dst /* r28 */, const struct RwMatrixTag * src /* r26 */) {
    // Local variables
    struct RwV3d right; // r1+0x44
    struct RwV3d up; // r1+0x38
    struct RwV3d at; // r1+0x2C
    struct RwV3d pos; // r1+0x20
    struct RwV3d * vpU; // r29
    struct RwV3d * vpV; // r31
    struct RwV3d * vpW; // r30
    struct RwV3d vInner; // r1+0x14
    struct RwV3d vOuter; // r1+0x8
    float recip; // f31
    float length2; // f27
    float length2; // f26
    float length2; // f25
    float length2; // f24
    float length2; // f23

    // References
    // -> static char __dbFunctionName[21];
    // -> static struct RwModuleInfo matrixModule;
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804EC80C
// Range: 0x80431AB8 -> 0x80431D38
static struct RwMatrixTag * MatrixInvertOrthoNormalized(struct RwMatrixTag * dst /* r30 */, const struct RwMatrixTag * src /* r31 */) {
    // References
    // -> static char __dbFunctionName[28];
    // -> static struct RwModuleInfo matrixModule;
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EC828
// Range: 0x80431D38 -> 0x8043204C
static struct RwMatrixTag * MatrixInvertGeneric(struct RwMatrixTag * dst /* r30 */, const struct RwMatrixTag * src /* r31 */) {
    // Local variables
    union RwSplitBits determinant; // r1+0x8
    float normalize; // f31

    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EC83C
// Range: 0x8043204C -> 0x8043208C
int _rwMatrixSetMultFn(void (* multMat)(struct RwMatrixTag *, struct RwMatrixTag *, struct RwMatrixTag *) /* r3 */) {
    // References
    // -> static struct RwModuleInfo matrixModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EC84F
// Range: 0x8043208C -> 0x804320BC
int _rwMatrixSetOptimizations(int optimizeFlags /* r3 */) {
    // References
    // -> static struct RwModuleInfo matrixModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EC869
// Range: 0x804320BC -> 0x804321F4
float _rwMatrixDeterminant(const struct RwMatrixTag * matrix /* r28 */) {
    // Local variables
    float result; // f31
    const struct RwV3d * mx; // r29
    const struct RwV3d * my; // r31
    const struct RwV3d * mz; // r30
    struct RwV3d cross; // r1+0x8

    // References
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EC87E
// Range: 0x804321F4 -> 0x80432350
float _rwMatrixOrthogonalError(const struct RwMatrixTag * matrix /* r28 */) {
    // Local variables
    float result; // f31
    const struct RwV3d * mx; // r31
    const struct RwV3d * my; // r30
    const struct RwV3d * mz; // r29
    struct RwV3d dot; // r1+0x8

    // References
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EC897
// Range: 0x80432350 -> 0x804324C4
float _rwMatrixNormalError(const struct RwMatrixTag * matrix /* r28 */) {
    // Local variables
    float result; // f31
    const struct RwV3d * x; // r31
    const struct RwV3d * y; // r30
    const struct RwV3d * z; // r29
    struct RwV3d dot; // r1+0x8

    // References
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EC8AC
// Range: 0x804324C4 -> 0x80432670
float _rwMatrixIdentityError(const struct RwMatrixTag * matrix /* r27 */) {
    // Local variables
    float result; // f28
    const struct RwV3d * mx; // r30
    const struct RwV3d * my; // r29
    const struct RwV3d * mz; // r28
    const struct RwV3d * mw; // r31
    float error_x; // f31
    float error_y; // f30
    float error_z; // f29
    float error_w; // f27

    // References
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EC8C3
// Range: 0x80432670 -> 0x804326F0
void * _rwMatrixClose(void * instance /* r1+0x8 */) {
    // References
    // -> static struct RwModuleInfo matrixModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[15];
}

static int _rwMatrixFreeListBlockSize; // size: 0x4, address: 0x80D68768
static int _rwMatrixFreeListPreallocBlocks; // size: 0x4, address: 0x80D6876C
static char __dbFunctionName[14]; // size: 0xE, address: 0x804EC8D2
static struct RwFreeList _rwMatrixFreeList; // size: 0x30, address: 0x80D5D3B0
// Range: 0x804326F0 -> 0x804327D4
void * _rwMatrixOpen(void * instance /* r31 */, int offset /* r1+0x8 */) {
    // Local variables
    struct RwMatrixTolerance tolerance; // r1+0xC

    // References
    // -> static struct RwModuleInfo matrixModule;
    // -> void * RwEngineInstance;
    // -> static struct RwFreeList _rwMatrixFreeList;
    // -> static int _rwMatrixFreeListPreallocBlocks;
    // -> static int _rwMatrixFreeListBlockSize;
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804EC8EC
// Range: 0x804327D4 -> 0x8043289C
int RwEngineGetMatrixTolerances(struct RwMatrixTolerance * const tolerance /* r30 */) {
    // Local variables
    const struct RwMatrixTolerance * const source; // r31

    // References
    // -> static char __dbFunctionName[28];
    // -> static struct RwModuleInfo matrixModule;
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804EC908
// Range: 0x8043289C -> 0x80432964
int RwEngineSetMatrixTolerances(const struct RwMatrixTolerance * const tolerance /* r30 */) {
    // Local variables
    struct RwMatrixTolerance * const dest; // r31

    // References
    // -> static char __dbFunctionName[28];
    // -> static struct RwModuleInfo matrixModule;
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EC924
// Range: 0x80432964 -> 0x80432B10
struct RwMatrixTag * RwMatrixOptimize(struct RwMatrixTag * matrix /* r30 */, const struct RwMatrixTolerance * tolerance /* r29 */) {
    // Local variables
    unsigned int flags; // r31
    int MatrixIsNormal; // r27
    int MatrixIsOrthogonal; // r26
    int MatrixIsIdentity; // r23

    // References
    // -> static struct RwModuleInfo matrixModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EC935
// Range: 0x80432B10 -> 0x80432BF0
struct RwMatrixTag * RwMatrixUpdate(struct RwMatrixTag * matrix /* r31 */) {
    // References
    // -> static char __dbFunctionName[15];
    // -> static struct RwModuleInfo matrixModule;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EC944
// Range: 0x80432BF0 -> 0x80432EA0
struct RwMatrixTag * RwMatrixMultiply(struct RwMatrixTag * dst /* r27 */, const struct RwMatrixTag * src1 /* r25 */, const struct RwMatrixTag * src2 /* r26 */) {
    // Local variables
    struct RwMatrixTag * _dst; // r31
    const struct RwMatrixTag * _matA; // r30
    const struct RwMatrixTag * _matB; // r29

    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwModuleInfo matrixModule;
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EC955
// Range: 0x80432EA0 -> 0x80432FC4
struct RwMatrixTag * RwMatrixOrthoNormalize(struct RwMatrixTag * dst /* r29 */, const struct RwMatrixTag * src /* r30 */) {
    // References
    // -> static char __dbFunctionName[23];
    // -> static struct RwModuleInfo matrixModule;
}

static char __dbFunctionName[33]; // size: 0x21, address: 0x804EC96C
enum RwOpCombineType {
    rwCOMBINEREPLACE = 0,
    rwCOMBINEPRECONCAT = 1,
    rwCOMBINEPOSTCONCAT = 2,
    rwOPCOMBINETYPEFORCEENUMSIZEINT = 2147483647,
};
// Range: 0x80432FC4 -> 0x80433414
struct RwMatrixTag * RwMatrixRotateOneMinusCosineSine(struct RwMatrixTag * matrix /* r29 */, const struct RwV3d * unitAxis /* r31 */, float oneMinusCosine /* f31 */, float sine /* f30 */, enum RwOpCombineType combineOp /* r1+0x8 */) {
    // Local variables
    struct RwMatrixTag mRotate; // r1+0x78
    struct RwMatrixTag mLocal; // r1+0x38
    struct RwV3d vLeading; // r1+0x2C
    struct RwV3d vScaled; // r1+0x20
    struct RwV3d vCrossed; // r1+0x14
    struct RwError _rwErrorCode; // r1+0xC

    // References
    // -> static char __dbFunctionName[33];
    // -> static struct RwModuleInfo matrixModule;
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EC98D
// Range: 0x80433414 -> 0x804335F4
struct RwMatrixTag * RwMatrixRotate(struct RwMatrixTag * matrix /* r29 */, const struct RwV3d * axis /* r31 */, float angle /* r1+0x8 */, enum RwOpCombineType combineOp /* r1+0xC */) {
    // Local variables
    struct RwV3d unitAxis; // r1+0x10
    float sinVal; // f29
    float oneMinusCosVal; // f28
    float radians; // f30
    float recip; // f31
    float length2; // f27

    // References
    // -> static char __dbFunctionName[15];
    // -> static struct RwModuleInfo matrixModule;
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EC99C
// Range: 0x804335F4 -> 0x804337D4
struct RwMatrixTag * RwMatrixInvert(struct RwMatrixTag * dst /* r29 */, const struct RwMatrixTag * src /* r31 */) {
    // References
    // -> static char __dbFunctionName[15];
    // -> static struct RwModuleInfo matrixModule;
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804EC9AB
// Range: 0x804337D4 -> 0x80433B24
struct RwMatrixTag * RwMatrixScale(struct RwMatrixTag * matrix /* r31 */, const struct RwV3d * scale /* r30 */, enum RwOpCombineType combineOp /* r1+0x8 */) {
    // Local variables
    struct RwError _rwErrorCode; // r1+0xC

    // References
    // -> static char __dbFunctionName[14];
    // -> static struct RwModuleInfo matrixModule;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EC9B9
// Range: 0x80433B24 -> 0x80433DDC
struct RwMatrixTag * RwMatrixTranslate(struct RwMatrixTag * matrix /* r31 */, const struct RwV3d * translation /* r30 */, enum RwOpCombineType combineOp /* r1+0x8 */) {
    // Local variables
    struct RwError _rwErrorCode; // r1+0xC

    // References
    // -> static char __dbFunctionName[18];
    // -> static struct RwModuleInfo matrixModule;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EC9CB
// Range: 0x80433DDC -> 0x80434010
struct RwMatrixTag * RwMatrixTransform(struct RwMatrixTag * matrix /* r30 */, const struct RwMatrixTag * transform /* r29 */, enum RwOpCombineType combineOp /* r1+0x8 */) {
    // Local variables
    struct RwMatrixTag mTmp; // r1+0x54
    struct RwMatrixTag mTmp; // r1+0x14
    struct RwError _rwErrorCode; // r1+0xC

    // References
    // -> static char __dbFunctionName[18];
    // -> static struct RwModuleInfo matrixModule;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EC9DD
// Range: 0x80434010 -> 0x804340DC
struct RwV3d * RwMatrixGetRight(struct RwMatrixTag * matrix /* r30 */) {
    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwModuleInfo matrixModule;
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804EC9EE
// Range: 0x804340DC -> 0x804341A8
struct RwV3d * RwMatrixGetUp(struct RwMatrixTag * matrix /* r30 */) {
    // References
    // -> static char __dbFunctionName[14];
    // -> static struct RwModuleInfo matrixModule;
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804EC9FC
// Range: 0x804341A8 -> 0x80434274
struct RwV3d * RwMatrixGetAt(struct RwMatrixTag * matrix /* r30 */) {
    // References
    // -> static char __dbFunctionName[14];
    // -> static struct RwModuleInfo matrixModule;
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804ECA0A
// Range: 0x80434274 -> 0x80434340
struct RwV3d * RwMatrixGetPos(struct RwMatrixTag * matrix /* r30 */) {
    // References
    // -> static char __dbFunctionName[15];
    // -> static struct RwModuleInfo matrixModule;
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804ECA19
// Range: 0x80434340 -> 0x8043447C
void RwMatrixCopy(struct RwMatrixTag * dst /* r29 */, const struct RwMatrixTag * src /* r30 */) {
    // References
    // -> static char __dbFunctionName[13];
    // -> static struct RwModuleInfo matrixModule;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804ECA26
// Range: 0x8043447C -> 0x80434594
void RwMatrixSetIdentity(struct RwMatrixTag * matrix /* r31 */) {
    // References
    // -> static char __dbFunctionName[20];
    // -> static struct RwModuleInfo matrixModule;
}


