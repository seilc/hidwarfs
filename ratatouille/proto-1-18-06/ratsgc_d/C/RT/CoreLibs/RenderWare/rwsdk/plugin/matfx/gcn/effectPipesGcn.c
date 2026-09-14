/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\plugin\matfx\gcn\effectPipesGcn.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803E7050 -> 0x803E96C4
*/
struct RpGameCubeVtxFmt * _rpGCMatFXVtxFmtNBT; // size: 0x4, address: 0x80D6C1F0
static struct RxPipeline * _RpMatFXAtomicPipe; // size: 0x4, address: 0x80D6C1F4
static struct RxPipeline * _RpMatFXWorldSectorPipe; // size: 0x4, address: 0x80D6C1F8
static struct _GXColor opaqueWhite; // size: 0x4, address: 0x80D71D88
static struct _GXColor opaqueBlack; // size: 0x4, address: 0x80D71D8C
static char __dbFunctionName[26]; // size: 0x1A, address: 0x804E8268
enum _GXColorSrc {
    GX_SRC_REG = 0,
    GX_SRC_VTX = 1,
};
// Range: 0x803E7050 -> 0x803E7244
static void _rxGCChannelLightingSetup(struct RxGameCubePipeData * pipeData /* r31 */) {
    // Local variables
    int flags; // r30
    enum _GXColorSrc ambColorSrc; // r29

    // References
    // -> static struct _GXColor opaqueBlack;
    // -> static struct _GXColor opaqueWhite;
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804E8282
// Range: 0x803E7244 -> 0x803E75B0
static void _rxGCChannelMaterialSetup(struct RxGameCubePipeData * pipeData /* r30 */, struct RpMaterial * material /* r28 */) {
    // Local variables
    struct _GXColor color; // r1+0x1C
    float ambCoeff; // f31
    struct RwRGBAReal * ambColor; // r31
    struct RwRGBA * matColor; // r29

    // References
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804E829C
// Range: 0x803E75B0 -> 0x803E7670
static void _rxGCTevDefaultSetup(struct RxGameCubePipeData * pipeData /* r31 */) {
    // References
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804E82B1
static // total size: 0xC
struct {
    // Members
    int channelDefault; // offset 0x0, size 0x4
    struct RpMaterial * channelMaterial; // offset 0x4, size 0x4
    int tevDefault; // offset 0x8, size 0x4
} FXStateCache; // size: 0xC, address: 0x80D5BF40
// Range: 0x803E7670 -> 0x803E76BC
void _rpDlMatFXStateCacheInit() {
    // References
    // -> static struct [anonymous] FXStateCache;
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804E82CA
struct RwMatrixTag _RwDlInvCamLTM; // size: 0x40, address: 0x80D5DDA4
// Range: 0x803E76BC -> 0x803E77E4
static void ProjectionMatrixInit(float (* texMtx)[4] /* r30 */, struct RwMatrixTag * objectLTM /* r28 */, struct RwFrame * frame /* r29 */, float scale /* f31 */, float offset /* f30 */) {
    // Local variables
    struct RwMatrixTag tmpMatrix; // r1+0x48
    struct RwMatrixTag invFrameLTM; // r1+0x8
    struct RwMatrixTag * matrix; // r31

    // References
    // -> struct RwMatrixTag _RwDlInvCamLTM;
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804E82DF
// Range: 0x803E77E4 -> 0x803E7848
void _rpGCMatFxEnvMatrixSetup(struct RwMatrixTag * objectLTM /* r1+0x8 */, struct RwFrame * frame /* r1+0xC */) {
    // Local variables
    float texMtx[3][4]; // r1+0x10

    // References
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804E82F8
// Range: 0x803E7848 -> 0x803E78F0
static void SetSingleTextureWithAlphaComp(struct RwTexture * texture /* r31 */) {
    // Local variables
    struct RwGameCubeRasterExtension * rasExt; // r30

    // References
    // -> static char __dbFunctionName[30];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804E8316
// Range: 0x803E78F0 -> 0x803E79E4
static void MeshRenderStandard(struct RpMesh * mesh /* r31 */, struct RxGameCubeDisplayList * dList /* r30 */, struct RxGameCubePipeData * pipeData /* r29 */) {
    // References
    // -> static struct [anonymous] FXStateCache;
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804E8329
// Range: 0x803E79E4 -> 0x803E7B90
static void MeshRenderUVAnim(struct RpMesh * mesh /* r30 */, struct RxGameCubeDisplayList * dList /* r28 */, struct RxGameCubePipeData * pipeData /* r27 */) {
    // Local variables
    struct MatFXUVAnimData * uvAnimData; // r29
    struct RwMatrixTag * matrix; // r31
    float mtx[3][4]; // r1+0x8

    // References
    // -> static struct [anonymous] FXStateCache;
    // -> static char __dbFunctionName[17];
    // -> int MatFXMaterialDataOffset;
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804E833A
// Range: 0x803E7B90 -> 0x803E7D80
static void MeshRenderDual(struct RpMesh * mesh /* r31 */, struct RxGameCubeDisplayList * dList /* r29 */, struct RxGameCubePipeData * pipeData /* r28 */) {
    // Local variables
    int i; // r1+0x10
    enum RwBlendFunction srcBlend; // r1+0xC
    enum RwBlendFunction dstBlend; // r1+0x8
    struct RxGameCubeVertexBuffer * vbHeader; // r26
    struct MatFXDualData * dualData; // r30

    // References
    // -> static struct [anonymous] FXStateCache;
    // -> static char __dbFunctionName[15];
    // -> int MatFXMaterialDataOffset;
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804E8349
// Range: 0x803E7D80 -> 0x803E8188
static void MeshRenderUVAnimDual(struct RpMesh * mesh /* r30 */, struct RxGameCubeDisplayList * dList /* r28 */, struct RxGameCubePipeData * pipeData /* r27 */) {
    // Local variables
    int i; // r1+0x10
    enum RwBlendFunction srcBlend; // r1+0xC
    enum RwBlendFunction dstBlend; // r1+0x8
    struct RxGameCubeVertexBuffer * vbHeader; // r25
    struct MatFXDualData * dualData; // r29
    struct MatFXUVAnimData * uvAnimData; // r31
    float mtx[3][4]; // r1+0x14

    // References
    // -> static struct [anonymous] FXStateCache;
    // -> static char __dbFunctionName[21];
    // -> int MatFXMaterialDataOffset;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804E835E
// Range: 0x803E8188 -> 0x803E84A0
static void MeshRenderEnvMap(struct RpMesh * mesh /* r30 */, struct RxGameCubeDisplayList * dList /* r29 */, struct RwMatrixTag * objectLTM /* r1+0x8 */, struct RxGameCubePipeData * pipeData /* r27 */) {
    // Local variables
    struct MatFXEnvMapData * envMapData; // r31
    enum RwBlendFunction srcBlend; // r1+0x18
    enum RwBlendFunction dstBlend; // r1+0x14
    struct _GXColor shiney; // r1+0x10

    // References
    // -> static struct [anonymous] FXStateCache;
    // -> static char __dbFunctionName[17];
    // -> int MatFXMaterialDataOffset;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804E836F
// Range: 0x803E84A0 -> 0x803E8A48
static void MeshRenderBumpMap(struct RpMesh * mesh /* r30 */, struct RxGameCubeDisplayList * dList /* r26 */, struct RwMatrixTag * objectLTM /* r21 */, struct RxGameCubePipeData * pipeData /* r22 */, int envMap /* r23 */) {
    // Local variables
    struct MatFXBumpMapData * bumpData; // r29
    float bumpMtx[3][4]; // r1+0x48
    enum _GXTevStageID i; // r31
    enum _GXTevStageID indStage; // r25
    struct MatFXEnvMapData * envData; // r27
    float envMtx[3][4]; // r1+0x18
    struct MatFXEnvMapData * envData; // r28
    struct _GXColor col; // r1+0x14

    // References
    // -> int MatFXMaterialDataOffset;
    // -> static struct [anonymous] FXStateCache;
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804E8381
enum RwPlatformID {
    rwID_PCD3D7 = 1,
    rwID_PCOGL = 2,
    rwID_MAC = 3,
    rwID_PS2 = 4,
    rwID_XBOX = 5,
    rwID_GAMECUBE = 6,
    rwID_SOFTRAS = 7,
    rwID_PCD3D8 = 8,
    rwID_PCD3D9 = 9,
    rwPLATFROMIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x10
struct rpMultiTextureRegEntry {
    // Members
    enum RwPlatformID platformID; // offset 0x0, size 0x4
    unsigned int pluginID; // offset 0x4, size 0x4
    unsigned int materialOffset; // offset 0x8, size 0x4
    unsigned int extensionSize; // offset 0xC, size 0x4
};
// total size: 0x30
struct RpMTEffect {
    // Members
    enum RwPlatformID platformID; // offset 0x0, size 0x4
    unsigned int refCount; // offset 0x4, size 0x4
    char name[32]; // offset 0x8, size 0x20
    struct RwLLLink dictLink; // offset 0x28, size 0x8
};
// total size: 0x38
struct RpMultiTexture {
    // Members
    struct rpMultiTextureRegEntry * regEntry; // offset 0x0, size 0x4
    unsigned int numTextures; // offset 0x4, size 0x4
    struct RwTexture * textures[8]; // offset 0x8, size 0x20
    unsigned char coordMap[8]; // offset 0x28, size 0x8
    struct RpMTEffect * effect; // offset 0x30, size 0x4
    void * extension; // offset 0x34, size 0x4
};
// Range: 0x803E8A48 -> 0x803E8C40
void _rpDlMatFXMeshRender(struct RpMesh * mesh /* r31 */, struct RxGameCubeDisplayList * dList /* r29 */, void * object /* r1+0x8 */, struct RwMatrixTag * ltm /* r27 */, struct RxGameCubePipeData * pipeData /* r30 */) {
    // Local variables
    struct RpMultiTexture * multiTexture; // r26
    struct rpMatFXMaterialData * matFXData; // r28

    // References
    // -> int MatFXMaterialDataOffset;
    // -> static struct [anonymous] FXStateCache;
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[33]; // size: 0x21, address: 0x804E8396
// Range: 0x803E8C40 -> 0x803E8E30
void * _rpGCMatFXAtomicInstanceCallBack(void * object /* r29 */, struct RxGameCubePipeData * pipeData /* r30 */) {
    // Local variables
    int instOpt; // r26
    struct RpGeometry * geom; // r27
    struct RpGameCubeVtxFmt * vtxFmt; // r28

    // References
    // -> struct RpGameCubeVtxFmt * _rpGCMatFXVtxFmtNBT;
    // -> static char __dbFunctionName[33];
}

static char __dbFunctionName[35]; // size: 0x23, address: 0x804E83B7
// Range: 0x803E8E30 -> 0x803E8F9C
void * _rpGCMatFXAtomicReinstanceCallBack(void * object /* r28 */, struct RxGameCubePipeData * pipeData /* r24 */) {
    // Local variables
    struct RpAtomic * atomic; // r29
    struct RpGeometry * geometry; // r31
    struct RpGameCubeVtxFmt * vtxFmt; // r30
    int regenNBTs; // r27
    unsigned int locked; // r23
    unsigned int morph; // r22

    // References
    // -> static char __dbFunctionName[35];
}

static char __dbFunctionName[33]; // size: 0x21, address: 0x804E83DA
// Range: 0x803E8F9C -> 0x803E90CC
void * _rpGCMatFXSectorInstanceCallBack(void * object /* r29 */, struct RxGameCubePipeData * pipeData /* r30 */) {
    // Local variables
    struct RpGameCubeVtxFmt * vtxFmt; // r31
    unsigned int numVerts; // r27

    // References
    // -> static char __dbFunctionName[33];
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804E83FB
// Range: 0x803E90CC -> 0x803E9380
void * _rpGCMatFXRenderCallback(void * object /* r26 */, struct RxGameCubePipeData * pipeData /* r30 */) {
    // Local variables
    int numMeshes; // r22
    struct RxGameCubeVertexBuffer * vbHeader; // r27
    struct RxGameCubeDisplayList * dList; // r24
    struct RpMesh * mesh; // r23
    struct RwMatrixTag * ltm; // r25
    struct RpGameCubeVtxFmt * vtxFmt; // r28
    struct RwMatrixTag offsetMatrix; // r1+0x8
    float scale; // f30
    float recipScale; // f31
    struct RwV3d * inf; // r31

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E8414
// Range: 0x803E9380 -> 0x803E94B4
int _rpMatFXPipelinesCreate() {
    // References
    // -> static char __dbFunctionName[24];
    // -> static struct RxPipeline * _RpMatFXWorldSectorPipe;
    // -> static struct RxPipeline * _RpMatFXAtomicPipe;
    // -> struct RpGameCubeVtxFmt * _rpGCMatFXVtxFmtNBT;
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804E842C
// Range: 0x803E94B4 -> 0x803E9558
int _rpMatFXPipelinesDestroy() {
    // References
    // -> static struct RxPipeline * _RpMatFXWorldSectorPipe;
    // -> static struct RxPipeline * _RpMatFXAtomicPipe;
    // -> struct RpGameCubeVtxFmt * _rpGCMatFXVtxFmtNBT;
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804E8445
// Range: 0x803E9558 -> 0x803E95D0
struct RpAtomic * _rpMatFXPipelineAtomicSetup(struct RpAtomic * atomic /* r31 */) {
    // References
    // -> static struct RxPipeline * _RpMatFXAtomicPipe;
    // -> static char __dbFunctionName[28];
}

static char __dbFunctionName[33]; // size: 0x21, address: 0x804E8461
// Range: 0x803E95D0 -> 0x803E964C
struct RpWorldSector * _rpMatFXPipelineWorldSectorSetup(struct RpWorldSector * worldSector /* r31 */) {
    // References
    // -> static struct RxPipeline * _RpMatFXWorldSectorPipe;
    // -> static char __dbFunctionName[33];
}

static char __dbFunctionName[29]; // size: 0x1D, address: 0x804E8482
// Range: 0x803E964C -> 0x803E966C
int _rpMatFXSetupDualRenderState() {
    // References
    // -> static char __dbFunctionName[29];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804E849F
// Range: 0x803E966C -> 0x803E96C4
struct RwTexture * _rpMatFXSetupBumpMapTexture(const struct RwTexture * baseTexture /* r1+0x8 */, const struct RwTexture * effectTexture /* r1+0xC */) {
    // Local variables
    struct RwTexture * texture; // r31

    // References
    // -> static char __dbFunctionName[28];
}


