/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\plugin\matfx\gcn\multiTexGcnPipe.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803EA9FC -> 0x803EBF04
*/
int _rpGameCubeMTEngineOffset; // size: 0x4, address: 0x80D6C200
static char __dbFunctionName[15]; // size: 0xF, address: 0x804E8598
// Range: 0x803EA9FC -> 0x803EAA50
static void * GameCubeMTOpen(void * object /* r1+0x8 */) {
    // References
    // -> int _rpGameCubeMTEngineOffset;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804E85A7
// Range: 0x803EAA50 -> 0x803EAA6C
static void * GameCubeMTClose(void * object /* r3 */) {
    // References
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804E85B7
enum _TevRasSrc {
    NATevRasSrc = 0,
    TEVRAS_NORM = 1,
    TEVRAS_CH0A0 = 2,
};
enum _GXChannelID {
    GX_COLOR0 = 0,
    GX_COLOR1 = 1,
    GX_ALPHA0 = 2,
    GX_ALPHA1 = 3,
    GX_COLOR0A0 = 4,
    GX_COLOR1A1 = 5,
    GX_COLOR_ZERO = 6,
    GX_ALPHA_BUMP = 7,
    GX_ALPHA_BUMPN = 8,
    GX_COLOR_NULL = 255,
};
// Range: 0x803EAA6C -> 0x803EABE4
static int GameCubeMTEffectSetupTevStage(unsigned int index /* r1+0x10 */, struct RpGameCubeTevStage * stage /* r31 */, enum _TevRasSrc rasSrc /* r1+0x14 */) {
    // Local variables
    enum _GXTevStageID tevStageID; // r30
    enum _GXChannelID channelID; // r29
    struct RpGameCubeTevInd ind; // r1+0x18

    // References
    // -> static char __dbFunctionName[30];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804E85D5
// Range: 0x803EABE4 -> 0x803EAD84
static struct RwMatrixTag * GetTexFrameMatrix(enum RpGameCubeTexFrameID refFrame /* r26 */, struct RwMatrixTag * objectLTM /* r29 */, struct RwMatrixTag * scratch /* r28 */) {
    // Local variables
    struct RwMatrixTag * matrix; // r31
    unsigned int index; // r27
    unsigned int numFrames; // r25
    struct RwFrame * * frames; // r30
    struct RwMatrixTag invLTM; // r1+0x8

    // References
    // -> struct RwMatrixTag _RwDlInvCamLTM;
    // -> static char __dbFunctionName[18];
    // -> int _rpGameCubeMTEngineOffset;
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E85E7
// Range: 0x803EAD84 -> 0x803EB848
struct RpMTEffect * _rpGameCubeMTEffectSend(struct RpMTEffect * effect /* r19 */, unsigned int numTextures /* r1+0x8 */, unsigned char * coordMap /* r1+0xC */, struct RwMatrixTag * objectLTM /* r1+0x10 */) {
    // Local variables
    int i; // r30
    enum _TevRasSrc rasSrc; // r1+0x50
    signed char texGenTexture[8]; // r1+0x74
    struct RpGameCubeMTConfig * config; // r31
    struct RwMatrixTag tmpMatrix; // r1+0x1A4
    struct RwMatrixTag * matrix; // r23
    float texMtx[3][4]; // r1+0x174
    struct RpGameCubeTexMtx * texMtx; // r24
    struct RwMatrixTag temp; // r1+0x134
    struct RwMatrixTag * matrix; // r28
    float mtx[3][4]; // r1+0x104
    float mtx2[3][4]; // r1+0xD4
    struct RpGameCubeIndMtx * indMtx; // r22
    struct RwMatrixTag scratch; // r1+0x94
    struct RwMatrixTag * matrix; // r21
    float (* pMtx)[3]; // r1+0x4C
    float mtx[2][3]; // r1+0x7C
    struct RwV3d * u; // r18
    struct RwV3d * v; // r17
    struct RpGameCubeIndStage * stage; // r27
    struct RpGameCubeTevStage * stage; // r25
    struct RpGameCubeTexGen * texGen; // r26
    enum _GXTexGenSrc src; // r20

    // References
    // -> static char __dbFunctionName[24];
    // -> struct RwMatrixTag _RwDlInvCamLTM;
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804E85FF
// Range: 0x803EB848 -> 0x803EB97C
static void _rpGameCubeMTEffectClean(struct RpMTEffect * effect /* r29 */) {
    // Local variables
    struct RpGameCubeMTConfig * config; // r30
    int i; // r31

    // References
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[32]; // size: 0x20, address: 0x804E8618
// total size: 0xC
struct rpMultiTextureGameCubeExt {
    // Members
    struct RpMaterial * (* preRenderCallBack)(struct RpMaterial *, void *, struct RxGameCubePipeData *, void *); // offset 0x0, size 0x4
    struct RpMaterial * (* postRenderCallBack)(struct RpMaterial *, void *, struct RxGameCubePipeData *, void *); // offset 0x4, size 0x4
    void * callBackData; // offset 0x8, size 0x4
};
// Range: 0x803EB97C -> 0x803EBBEC
void _rpGameCubeMTMeshRenderCallBack(struct RxGameCubeDisplayList * dList /* r28 */, struct RpMaterial * material /* r26 */, void * object /* r24 */, struct RxGameCubePipeData * pipeData /* r25 */, struct RwMatrixTag * objectLTM /* r1+0x8 */) {
    // Local variables
    struct RpMultiTexture * mt; // r31
    struct rpMultiTextureGameCubeExt * mtExt; // r30
    enum RwBlendFunction srcBlend; // r1+0x10
    enum RwBlendFunction dstBlend; // r1+0xC
    int i; // r27

    // References
    // -> static char __dbFunctionName[32];
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804E8638
// Range: 0x803EBBEC -> 0x803EBC58
int _rpGameCubeMTPipePluginAttach() {
    // References
    // -> int _rpGameCubeMTEngineOffset;
    // -> static char __dbFunctionName[30];
}

static char __dbFunctionName[37]; // size: 0x25, address: 0x804E8656
// Range: 0x803EBC58 -> 0x803EBD54
struct RpMultiTexture * RpMultiTextureSetGameCubeMTCallBacks(struct RpMultiTexture * multiTexture /* r30 */, struct RpMaterial * (* preRenderCallBack)(struct RpMaterial *, void *, struct RxGameCubePipeData *, void *) /* r1+0x8 */, struct RpMaterial * (* postRenderCallBack)(struct RpMaterial *, void *, struct RxGameCubePipeData *, void *) /* r1+0xC */, void * callBackData /* r1+0x10 */) {
    // Local variables
    struct rpMultiTextureGameCubeExt * ext; // r31

    // References
    // -> static char __dbFunctionName[37];
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[37]; // size: 0x25, address: 0x804E867B
// Range: 0x803EBD54 -> 0x803EBE68
struct RpMultiTexture * RpMultiTextureGetGameCubeMTCallBacks(struct RpMultiTexture * multiTexture /* r30 */, struct RpMaterial * (* * preRenderCallBack)(struct RpMaterial *, void *, struct RxGameCubePipeData *, void *) /* r26 */, struct RpMaterial * (* * postRenderCallBack)(struct RpMaterial *, void *, struct RxGameCubePipeData *, void *) /* r27 */, void * callBackData /* r28 */) {
    // Local variables
    struct rpMultiTextureGameCubeExt * ext; // r31

    // References
    // -> static char __dbFunctionName[37];
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804E86A0
// Range: 0x803EBE68 -> 0x803EBF04
void RpGameCubeMTSetMiscFrameArray(struct RwFrame * * frames /* r30 */, unsigned int numFrames /* r31 */) {
    // References
    // -> int _rpGameCubeMTEngineOffset;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[30];
}


