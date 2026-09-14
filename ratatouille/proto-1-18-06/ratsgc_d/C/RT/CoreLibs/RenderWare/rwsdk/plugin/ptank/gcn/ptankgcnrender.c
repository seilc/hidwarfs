/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\plugin\ptank\gcn\ptankgcnrender.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803F33C0 -> 0x803F3ECC
*/
static struct _GXColor OpaqueWhite; // size: 0x4, address: 0x80D71E10
static struct _GXColor OpaqueBlack; // size: 0x4, address: 0x80D71E14
static char __dbFunctionName[25]; // size: 0x19, address: 0x804E8DC8
// Range: 0x803F33C0 -> 0x803F3528
static void PTankGameCubeVtxFmtSetup(struct RpGameCubeVtxFmt * fmt /* r31 */, struct RxGameCubePipeData * pipeData /* r30 */) {
    // References
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804E8DE1
// Range: 0x803F3528 -> 0x803F3868
static void PTankGameCubeVtxRender(struct RpAtomic * atomic /* r25 */, struct RxGameCubePipeData * pipeData /* r1+0x8 */) {
    // Local variables
    struct RpPTankAtomicExtPrv * pTankPrvData; // r27
    struct RpPTankData * pTankData; // r24
    struct RpGeometry * geometry; // r23
    void (* vtxRender)(int, unsigned int, struct RpPTankData *); // r22
    int actPCount; // r26
    unsigned int flags; // r18
    unsigned int posGQR; // r31
    unsigned int normGQR; // r30
    int posSize; // r17
    int normSize; // r1+0xC
    struct RpGameCubeVtxFmt * vtxFmt; // r28
    unsigned char vtxFmtTypeConvTable[5]; // r1+0x1A
    unsigned char vtxFmtSizeConvTable[5]; // r1+0x15
    unsigned char vtxFmtNormConvTable[5]; // r1+0x10

    // References
    // -> static char __dbFunctionName[23];
    // -> int _rpPTankAtomicDataOffset;
}

unsigned char __GXinBegin; // size: 0x1, address: 0x80D6BF58
static char __dbFunctionName[33]; // size: 0x21, address: 0x804E8DF8
// Range: 0x803F3868 -> 0x803F38F0
void * _rxPTankGameCubeLightingCallback(void * object /* r30 */, struct RxGameCubePipeData * pipeData /* r31 */) {
    // References
    // -> static char __dbFunctionName[33];
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804E8E19
// Range: 0x803F38F0 -> 0x803F3ECC
void * _rxPTankGameCubeRenderCallBack(void * object /* r20 */, struct RxGameCubePipeData * pipeData /* r31 */) {
    // Local variables
    struct RwRGBA ambient; // r1+0x40
    enum _GXColorSrc chanAmbSrc; // r27
    enum _GXColorSrc chanMatSrc; // r28
    unsigned char lightingEnable; // r23
    unsigned int flags; // r26
    struct RpAtomic * atomic; // r25
    struct RpMesh * mesh; // r22
    struct RpPTankAtomicExtPrv * pTankPrvData; // r24
    struct RpPTankData * pTankData; // r21
    struct RpGameCubeVtxFmt * fmt; // r19
    struct RwTexture * texture; // r29
    struct RwGameCubeRasterExtension * rasExt; // r18

    // References
    // -> static char __dbFunctionName[31];
    // -> static struct _GXColor OpaqueBlack;
    // -> static struct _GXColor OpaqueWhite;
    // -> int _rpPTankAtomicDataOffset;
}


