/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\world\pipe\p2\gcn\gcmorph.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80422EFC -> 0x80423484
*/
static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EB8D8
static unsigned char vtxFmtTypeConvTable[5]; // size: 0x5, address: 0x80D68690
static unsigned char vtxFmtSizeConvTable[5]; // size: 0x5, address: 0x80D68695
// Range: 0x80422EFC -> 0x80422F6C
static void _rwDlV3dInterpPosGQRSetup(struct RpGameCubeVtxFmt * fmt /* r3 */, unsigned int * outSize /* r4 */) {
    // Local variables
    unsigned int gqr; // r31

    // References
    // -> static unsigned char vtxFmtSizeConvTable[5];
    // -> static unsigned char vtxFmtTypeConvTable[5];
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804EB8F2
// Range: 0x80422F6C -> 0x804230A8
static void _rwDlV3dInterpNormGQRSetup(struct RpGameCubeVtxFmt * fmt /* r3 */, unsigned int * outSize /* r4 */, int * outSkip /* r5 */) {
    // Local variables
    unsigned int gqr; // r31
    unsigned char vtxFmtTypeConvTable[5]; // r1+0x12
    unsigned char vtxFmtSizeConvTable[5]; // r1+0xD
    unsigned char vtxFmtNormConvTable[5]; // r1+0x8

    // References
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EB90D
// Range: 0x804230A8 -> 0x804233B0
void _rxGCInstanceMorphUpdate(struct RpGeometry * geometry /* r30 */, struct RxGameCubeVertexBuffer * vbHeader /* r29 */, struct RpInterpolator * interp /* r28 */) {
    // Local variables
    unsigned int size; // r1+0x18
    int skip; // r1+0x14
    int startMT; // r25
    int endMT; // r24
    float scale; // r1+0x10
    void * dstPos; // r23
    const struct RpMorphTarget * morphTarget1; // r27
    const struct RpMorphTarget * morphTarget2; // r26
    void * srcPos1; // r1+0xC
    void * srcPos2; // r1+0x8
    void * dstNormals; // r22

    // References
    // -> static char __dbFunctionName[25];
}

// Range: 0x804233B0 -> 0x80423484
static void _rwDlV3dInterp(void * dst /* r3 */, void * src1 /* r4 */, void * src2 /* r5 */, float * scale /* r6 */, int count /* r7 */, unsigned int inSize /* r8 */, unsigned int outSize /* r9 */, int outSkip /* r10 */) {}


