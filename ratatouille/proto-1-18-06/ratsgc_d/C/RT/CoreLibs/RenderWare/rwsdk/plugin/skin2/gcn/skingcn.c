/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\plugin\skin2\gcn\skingcn.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803F97D4 -> 0x803FBA10
*/
static char __dbFunctionName[22]; // size: 0x16, address: 0x804E9218
// Range: 0x803F97D4 -> 0x803F9934
static void _rpSkinMainResEntryCB(struct RwResEntry * resEntry /* r29 */) {
    // Local variables
    struct RxGameCubeVertexBuffer * vbHeader; // r31
    struct RpGeometry * geom; // r25
    unsigned int flags; // r26
    struct SkinAtomicData * atomicData; // r30
    struct RpSkin * skin; // r28

    // References
    // -> struct SkinGlobals _rpSkinGlobals;
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E922E
// Range: 0x803F9934 -> 0x803F99AC
static void _rpSkinResEntryWaitDone(struct RwResEntry * resEntry /* r31 */) {
    // References
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804E9246
// Range: 0x803F99AC -> 0x803F9DD8
int _rpSkinVertexBuffersUpdate(struct RpSkin * skin /* r23 */, struct RpAtomic * atomic /* r22 */, struct RxGameCubeVertexBuffer * vbHeader /* r31 */, struct RxGameCubePipeData * pipeData /* r25 */) {
    // Local variables
    struct RwResEntry * childResEntry; // r24
    struct RwResEntry * parentResEntry; // r21
    struct RpGeometry * geometry; // r30
    struct SkinAtomicData * atomicData; // r27
    unsigned short token; // r17
    unsigned int size; // r29
    struct RpGameCubeVtxFmt * vtxFmt; // r26
    unsigned int vtxSizeConvTable[5]; // r1+0x8

    // References
    // -> static char __dbFunctionName[27];
    // -> struct SkinGlobals _rpSkinGlobals;
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804E9278
// Range: 0x803F9DD8 -> 0x803FA0E4
void _rpSkinMatrixBlendUpdate(struct RwMatrixTag * matDst /* r25 */, const struct RpSkin * skin /* r31 */, const struct RwMatrixTag * ltm /* r26 */, struct RpHAnimHierarchy * hierarchy /* r30 */) {
    // Local variables
    unsigned int i; // r29
    struct RwMatrixTag * lastMatrix; // r24
    struct RwMatrixTag inverseLTM; // r1+0xC8
    struct RwMatrixTag tmpMatrix; // r1+0x88
    struct RwMatrixTag * hierLTM; // r22
    unsigned int i; // r28
    struct RwMatrixTag transMatrix; // r1+0x48
    struct RwMatrixTag * lastMatrix; // r23
    struct RwMatrixTag inverseLTM; // r1+0x8

    // References
    // -> struct RwMatrixTag _RwDlInvCamLTM;
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804E9291
// total size: 0x20
struct SkinAsmData {
    // Members
    void * dstVertices; // offset 0x0, size 0x4
    void * dstNormals; // offset 0x4, size 0x4
    void * srcVertices; // offset 0x8, size 0x4
    void * srcNormals; // offset 0xC, size 0x4
    int posSize; // offset 0x10, size 0x4
    int nrmSize; // offset 0x14, size 0x4
    int nrmSkip; // offset 0x18, size 0x4
    int numVerts; // offset 0x1C, size 0x4
};
// Range: 0x803FA0E4 -> 0x803FA310
void _rpSkinBlendBodyP(struct RpSkin * skin /* r27 */, struct RwMatrixTag * matrixCache /* r23 */, void * srcVertices /* r1+0x8 */, void * dstVertices /* r24 */, struct RpGameCubeVtxFmt * vtxFmt /* r25 */, int numVertices /* r20 */) {
    // Local variables
    unsigned int gqr5value; // r1+0xC
    unsigned int * gqr5address; // r31
    unsigned int tmp; // r30
    unsigned int weightGQR; // r29
    unsigned int posGQR; // r28
    unsigned int size; // r19
    struct SkinAsmData asmData; // r1+0x1C
    unsigned char vtxFmtTypeConvTable[5]; // r1+0x15
    unsigned char vtxFmtSizeConvTable[5]; // r1+0x10
    int i; // r26
    int index; // r18

    // References
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804E92A3
// Range: 0x803FA310 -> 0x803FA640
void _rpSkinBlendBodyPN(struct RpSkin * skin /* r24 */, struct RwMatrixTag * matrixCache /* r23 */, void * srcVertices /* r1+0x8 */, void * srcNormals /* r1+0xC */, void * dstVertices /* r20 */, void * dstNormals /* r1+0x10 */, struct RpGameCubeVtxFmt * vtxFmt /* r26 */, int numVertices /* r21 */) {
    // Local variables
    unsigned int gqr5value; // r1+0x1C
    unsigned int * gqr5address; // r31
    unsigned int tmp; // r30
    unsigned int weightGQR; // r29
    unsigned int posGQR; // r28
    unsigned int normGQR; // r27
    unsigned int size; // r22
    struct SkinAsmData asmData; // r1+0x30
    unsigned char vtxFmtTypeConvTable[5]; // r1+0x2A
    unsigned char vtxFmtSizeConvTable[5]; // r1+0x25
    unsigned char vtxFmtNormConvTable[5]; // r1+0x20
    int i; // r25
    int index; // r19

    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E92B6
int _RwDlPreInstanceOptimize; // size: 0x4, address: 0x80D68680
// Range: 0x803FA640 -> 0x803FA834
void * _rpSkinInstanceCallback(void * object /* r24 */, struct RxGameCubePipeData * pipeData /* r30 */) {
    // Local variables
    void * owner; // r29
    struct RpAtomic * atomic; // r27
    struct RpGeometry * geometry; // r31
    struct RwResEntry * * resEntryOwner; // r28
    struct RpSkin * skin; // r26

    // References
    // -> int _RwDlPreInstanceOptimize;
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[32]; // size: 0x20, address: 0x804E92CE
// Range: 0x803FA834 -> 0x803FAC00
void * _rpSkinAtomicReinstanceCallBack(void * object /* r23 */, struct RxGameCubePipeData * pipeData /* r26 */) {
    // Local variables
    struct RxGameCubeVertexBuffer * vbHeader; // r31
    struct RpAtomic * atomic; // r25
    struct RpGeometry * geometry; // r28
    struct RpSkin * skin; // r29
    void * positions; // r27
    void * normals; // r24
    struct SkinAtomicData * atomicData; // r22
    void * tmpPositions; // r21
    void * tmpNormals; // r20

    // References
    // -> struct SkinGlobals _rpSkinGlobals;
    // -> static char __dbFunctionName[32];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804E92EE
// Range: 0x803FAC00 -> 0x803FACF4
void _rpSkinLoadMatrix(struct RwMatrixTag * matrix /* r31 */, unsigned int index /* r30 */, int normals /* r1+0x8 */) {
    // Local variables
    float mtx[3][4]; // r1+0xC

    // References
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804E9300
// Range: 0x803FACF4 -> 0x803FAE00
void _rpSkinLoadMatrixPalette(struct RpSkin * skin /* r31 */, unsigned int mesh /* r23 */, int normals /* r1+0x8 */) {
    // Local variables
    unsigned char i; // r30
    unsigned char index; // r27
    unsigned char count; // r26
    unsigned int matrixID; // r28
    unsigned int j; // r29
    unsigned char start; // r25
    unsigned char run; // r24

    // References
    // -> struct SkinGlobals _rpSkinGlobals;
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804E9319
// Range: 0x803FAE00 -> 0x803FB270
void * _rpSkinRenderCallback(void * object /* r22 */, struct RxGameCubePipeData * pipeData /* r30 */) {
    // Local variables
    unsigned int numMeshes; // r25
    struct RxGameCubeVertexBuffer * vbHeader; // r26
    struct RxGameCubeDisplayList * dList; // r28
    struct RpSkin * skin; // r31
    struct RpMesh * mesh; // r29
    struct RwMatrixTag * ltm; // r1+0x14
    struct RpGameCubeVtxFmt * fmt; // r20
    void (* matFunc)(struct RwRGBAReal *, struct RwRGBA *, float); // r21
    unsigned int i; // r24
    struct RwTexture * texture; // r23
    struct RwGameCubeRasterExtension * rasExt; // r19

    // References
    // -> struct SkinGlobals _rpSkinGlobals;
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804E932F
// Range: 0x803FB270 -> 0x803FB80C
static struct RpSkin * _rpSkinCreate(struct RpSkin * skin /* r31 */, unsigned int numVertices /* r22 */) {
    // Local variables
    unsigned int i; // r30
    unsigned int j; // r28
    unsigned int k; // r27
    float tmp; // f31
    unsigned int index1; // r19
    unsigned int index2; // r18
    unsigned int i; // r26
    unsigned int size; // r17
    unsigned char * weight; // r23
    unsigned char * indices; // r21
    unsigned int j; // r25
    unsigned char sum; // r24
    unsigned int j; // r20

    // References
    // -> static char __dbFunctionName[14];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804E933D
// Range: 0x803FB80C -> 0x803FB920
struct RpGeometry * _rpSkinInitialize(struct RpGeometry * geometry /* r31 */) {
    // Local variables
    struct RpSkin * skin; // r30

    // References
    // -> struct SkinGlobals _rpSkinGlobals;
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804E934F
// Range: 0x803FB920 -> 0x803FBA10
struct RpGeometry * _rpSkinDeinitialize(struct RpGeometry * geometry /* r29 */) {
    // Local variables
    struct RpSkin * skin; // r31

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[20];
    // -> struct SkinGlobals _rpSkinGlobals;
}


