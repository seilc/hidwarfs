/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\plugin\matfx\rpmatfx.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803E2A40 -> 0x803E7050
*/
int MatFXMaterialDataOffset; // size: 0x4, address: 0x80D6C1E0
// total size: 0xC
struct RwMatFXInfo {
    // Members
    struct RwModuleInfo Module; // offset 0x0, size 0x8
    struct RwFreeList * MaterialData; // offset 0x8, size 0x4
};
struct RwMatFXInfo MatFXInfo; // size: 0xC, address: 0x8054DC68
static int MatFXAtomicDataOffset; // size: 0x4, address: 0x80D6C1E4
static int MatFXWorldSectorDataOffset; // size: 0x4, address: 0x80D6C1E8
static char __dbFunctionName[13]; // size: 0xD, address: 0x804E7C18
// total size: 0x14
struct MatFXBumpMapData {
    // Members
    struct RwFrame * frame; // offset 0x0, size 0x4
    struct RwTexture * texture; // offset 0x4, size 0x4
    struct RwTexture * bumpTexture; // offset 0x8, size 0x4
    float coef; // offset 0xC, size 0x4
    float invBumpWidth; // offset 0x10, size 0x4
};
// total size: 0x10
struct MatFXEnvMapData {
    // Members
    struct RwFrame * frame; // offset 0x0, size 0x4
    struct RwTexture * texture; // offset 0x4, size 0x4
    float coef; // offset 0x8, size 0x4
    int useFrameBufferAlpha; // offset 0xC, size 0x4
};
// total size: 0xC
struct MatFXDualData {
    // Members
    struct RwTexture * texture; // offset 0x0, size 0x4
    enum RwBlendFunction srcBlendMode; // offset 0x4, size 0x4
    enum RwBlendFunction dstBlendMode; // offset 0x8, size 0x4
};
// total size: 0x8
struct MatFXUVAnimData {
    // Members
    struct RwMatrixTag * baseTransform; // offset 0x0, size 0x4
    struct RwMatrixTag * dualTransform; // offset 0x4, size 0x4
};
union MatFXEffectUnion {
    struct MatFXBumpMapData bumpMap; // offset 0x0, size 0x14
    struct MatFXEnvMapData envMap; // offset 0x0, size 0x10
    struct MatFXDualData dual; // offset 0x0, size 0xC
    struct MatFXUVAnimData uvAnim; // offset 0x0, size 0x8
};
enum RpMatFXMaterialFlags {
    rpMATFXEFFECTNULL = 0,
    rpMATFXEFFECTBUMPMAP = 1,
    rpMATFXEFFECTENVMAP = 2,
    rpMATFXEFFECTBUMPENVMAP = 3,
    rpMATFXEFFECTDUAL = 4,
    rpMATFXEFFECTUVTRANSFORM = 5,
    rpMATFXEFFECTDUALUVTRANSFORM = 6,
    rpMATFXEFFECTMAX = 7,
    rpMATFXNUMEFFECTS = 6,
    rpMATFXFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
struct MatFXEffectData {
    // Members
    union MatFXEffectUnion data; // offset 0x0, size 0x14
    enum RpMatFXMaterialFlags flag; // offset 0x14, size 0x4
};
// total size: 0x34
struct rpMatFXMaterialData {
    // Members
    struct MatFXEffectData data[2]; // offset 0x0, size 0x30
    enum RpMatFXMaterialFlags flags; // offset 0x30, size 0x4
};
// Range: 0x803E2A40 -> 0x803E2B48
static union MatFXEffectUnion * MatFXGetData(struct RpMaterial * material /* r28 */, enum RpMatFXMaterialFlags flags /* r1+0x8 */) {
    // Local variables
    struct rpMatFXMaterialData * materialData; // r30
    unsigned char pass; // r31

    // References
    // -> static char __dbFunctionName[13];
    // -> int MatFXMaterialDataOffset;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804E7C25
// Range: 0x803E2B48 -> 0x803E2C50
static union MatFXEffectUnion * MatFXGetConstData(const struct RpMaterial * material /* r28 */, enum RpMatFXMaterialFlags flags /* r1+0x8 */) {
    // Local variables
    const struct rpMatFXMaterialData * materialData; // r30
    unsigned char pass; // r31

    // References
    // -> static char __dbFunctionName[18];
    // -> int MatFXMaterialDataOffset;
}

static char __dbFunctionName[11]; // size: 0xB, address: 0x804E7C37
// Range: 0x803E2C50 -> 0x803E2D14
static void * MatFXClose(void * instance /* r30 */) {
    // References
    // -> struct RwMatFXInfo MatFXInfo;
    // -> static char __dbFunctionName[11];
}

static int _rpMatFXMaterialDataFreeListBlockSize; // size: 0x4, address: 0x80D68370
static int _rpMatFXMaterialDataFreeListPreallocBlocks; // size: 0x4, address: 0x80D68374
static char __dbFunctionName[10]; // size: 0xA, address: 0x804E7C42
static struct RwFreeList _rpMatFXMaterialDataFreeList; // size: 0x30, address: 0x80D5BF10
// Range: 0x803E2D14 -> 0x803E2E0C
static void * MatFXOpen(void * instance /* r30 */) {
    // References
    // -> struct RwMatFXInfo MatFXInfo;
    // -> static struct RwFreeList _rpMatFXMaterialDataFreeList;
    // -> static int _rpMatFXMaterialDataFreeListPreallocBlocks;
    // -> static int _rpMatFXMaterialDataFreeListBlockSize;
    // -> static char __dbFunctionName[10];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804E7C4C
// Range: 0x803E2E0C -> 0x803E2E84
static void * MatFXMaterialConstructor(void * object /* r31 */) {
    // References
    // -> int MatFXMaterialDataOffset;
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804E7C65
// Range: 0x803E2E84 -> 0x803E3028
static struct rpMatFXMaterialData * MatFXMaterialDataClean(struct rpMatFXMaterialData * materialData /* r29 */) {
    // Local variables
    unsigned char pass; // r31
    struct MatFXBumpMapData * bumpMapData; // r30
    struct MatFXEnvMapData * envMapData; // r28
    struct MatFXDualData * dualData; // r27
    struct MatFXUVAnimData * uvAnimData; // r26

    // References
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E7C7C
// Range: 0x803E3028 -> 0x803E3108
static void * MatFXMaterialDestructor(void * object /* r30 */) {
    // Local variables
    struct rpMatFXMaterialData * materialData; // r31

    // References
    // -> int MatFXMaterialDataOffset;
    // -> struct RwMatFXInfo MatFXInfo;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804E7C94
// Range: 0x803E3108 -> 0x803E3204
static struct rpMatFXMaterialData * MatFXMaterialGetData(struct RpMaterial * material /* r29 */) {
    // Local variables
    struct rpMatFXMaterialData * materialData; // r31

    // References
    // -> int MatFXMaterialDataOffset;
    // -> static char __dbFunctionName[21];
    // -> struct RwMatFXInfo MatFXInfo;
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804E7CA9
enum RwBlendFunction {
    rwBLENDNABLEND = 0,
    rwBLENDZERO = 1,
    rwBLENDONE = 2,
    rwBLENDSRCCOLOR = 3,
    rwBLENDINVSRCCOLOR = 4,
    rwBLENDSRCALPHA = 5,
    rwBLENDINVSRCALPHA = 6,
    rwBLENDDESTALPHA = 7,
    rwBLENDINVDESTALPHA = 8,
    rwBLENDDESTCOLOR = 9,
    rwBLENDINVDESTCOLOR = 10,
    rwBLENDSRCALPHASAT = 11,
    rwBLENDFUNCTIONFORCEENUMSIZEINT = 2147483647,
};
// Range: 0x803E3204 -> 0x803E36B0
static void * MatFXMaterialCopy(void * dstObject /* r20 */, void * srcObject /* r1+0x8 */) {
    // Local variables
    const struct RpMaterial * srcMaterial; // r28
    const struct rpMatFXMaterialData * srcMaterialData; // r26
    struct RpMaterial * dstMaterial; // r29
    struct rpMatFXMaterialData * dstMaterialData; // r23
    struct RpMaterial * ret; // r30
    unsigned char pass; // r25
    enum RpMatFXMaterialFlags effect; // r19
    const struct MatFXBumpMapData * srcBumpMapData; // r24
    struct MatFXBumpMapData * dstBumpMapData; // r27
    struct RwFrame * frame; // r18
    float coef; // f31
    struct RwTexture * texture; // r22
    struct RwFrame * frame; // r17
    float coef; // f30
    int useFrameBufferAlpha; // r1+0x1C
    struct RwTexture * texture; // r21
    enum RwBlendFunction srcBlendMode; // r1+0x18
    enum RwBlendFunction dstBlendMode; // r1+0x14
    struct RwMatrixTag * baseTransform; // r1+0x10
    struct RwMatrixTag * dualTransform; // r1+0xC

    // References
    // -> static char __dbFunctionName[18];
    // -> int MatFXMaterialDataOffset;
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804E7CBB
// Range: 0x803E36B0 -> 0x803E3784
struct RwStream * _rpMatFXStreamWriteTexture(struct RwStream * stream /* r31 */, const struct RwTexture * texture /* r30 */) {
    // Local variables
    int present; // r1+0x8

    // References
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804E7CD6
// Range: 0x803E3784 -> 0x803E38D0
struct RwStream * _rpMatFXStreamReadTexture(struct RwStream * stream /* r30 */, struct RwTexture * * texture /* r31 */) {
    // Local variables
    int present; // r1+0x8
    struct RwError err; // r1+0xC

    // References
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804E7CF0
// Range: 0x803E38D0 -> 0x803E3938
unsigned int _rpMatFXStreamSizeTexture(const struct RwTexture * texture /* r30 */) {
    // Local variables
    unsigned int size; // r31

    // References
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804E7D0A
// Range: 0x803E3938 -> 0x803E3C7C
static struct RwStream * MatFXMaterialStreamWrite(struct RwStream * stream /* r31 */, int binaryLength /* r1+0x8 */, void * object /* r23 */) {
    // Local variables
    const struct RpMaterial * material; // r24
    const struct rpMatFXMaterialData * materialData; // r30
    unsigned char pass; // r29
    int temp; // r1+0x14
    enum RpMatFXMaterialFlags effect; // r1+0x10
    const struct MatFXBumpMapData * bumpData; // r28
    float coef; // r1+0xC
    const struct MatFXEnvMapData * envData; // r25
    const struct MatFXDualData * dualData; // r27

    // References
    // -> static char __dbFunctionName[25];
    // -> int MatFXMaterialDataOffset;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E7D23
// Range: 0x803E3C7C -> 0x803E40E8
static struct RwStream * MatFXMaterialStreamRead(struct RwStream * stream /* r30 */, int binaryLength /* r1+0x8 */, void * object /* r23 */) {
    // Local variables
    struct RpMaterial * material; // r29
    struct rpMatFXMaterialData * materialData; // r26
    enum RpMatFXMaterialFlags flags; // r1+0x2C
    unsigned char pass; // r27
    enum RpMatFXMaterialFlags effect; // r1+0x28
    float coef; // r1+0x24
    struct RwTexture * texture; // r1+0x20
    struct RwTexture * bumpTexture; // r1+0x1C
    struct MatFXBumpMapData * bumpMapData; // r31
    struct RwRaster * raster; // r25
    int nWidth; // r24
    float width; // f31
    float coef; // r1+0x18
    int useFrameBufferAlpha; // r1+0x14
    struct RwTexture * texture; // r1+0x10
    enum RwBlendFunction blendFuncs[2]; // r1+0x30
    struct RwTexture * texture; // r1+0xC

    // References
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804E7D3B
// Range: 0x803E40E8 -> 0x803E4280
static int MatFXMaterialStreamGetSize(void * object /* r26 */) {
    // Local variables
    const struct RpMaterial * material; // r28
    const struct rpMatFXMaterialData * materialData; // r30
    int size; // r31
    unsigned char pass; // r29
    enum RpMatFXMaterialFlags effect; // r27

    // References
    // -> static char __dbFunctionName[27];
    // -> int MatFXMaterialDataOffset;
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804E7D56
// total size: 0x4
struct MatFXAtomicData {
    // Members
    int enabled; // offset 0x0, size 0x4
};
// Range: 0x803E4280 -> 0x803E4330
static void * MatFXAtomicConstructor(void * object /* r30 */) {
    // Local variables
    struct MatFXAtomicData * atomicData; // r31

    // References
    // -> static char __dbFunctionName[23];
    // -> static int MatFXAtomicDataOffset;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804E7D6D
// Range: 0x803E4330 -> 0x803E43E0
static void * MatFXAtomicDestructor(void * object /* r30 */) {
    // Local variables
    struct MatFXAtomicData * atomicData; // r31

    // References
    // -> static char __dbFunctionName[22];
    // -> static int MatFXAtomicDataOffset;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804E7D83
// Range: 0x803E43E0 -> 0x803E44AC
static void * MatFXAtomicCopy(void * dstObject /* r28 */, void * srcObject /* r25 */) {
    // Local variables
    const struct RpAtomic * srcAtomic; // r27
    const struct MatFXAtomicData * srcAtomicData; // r30
    struct RpAtomic * dstAtomic; // r26
    struct MatFXAtomicData * dstAtomicData; // r29

    // References
    // -> static int MatFXAtomicDataOffset;
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804E7D93
// Range: 0x803E44AC -> 0x803E45C4
static struct RwStream * MatFXAtomicStreamWrite(struct RwStream * stream /* r27 */, int binaryLength /* r1+0x8 */, void * object /* r28 */) {
    // Local variables
    const struct MatFXAtomicData * atomicData; // r31
    struct RwStream * streamOut; // r29
    int temp; // r1+0xC

    // References
    // -> static char __dbFunctionName[23];
    // -> static int MatFXAtomicDataOffset;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804E7DAA
// Range: 0x803E45C4 -> 0x803E46D0
static struct RwStream * MatFXAtomicStreamRead(struct RwStream * stream /* r31 */, int binaryLength /* r1+0x8 */, void * object /* r29 */) {
    // Local variables
    struct RpAtomic * atomic; // r30
    int enabled; // r1+0xC

    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804E7DC0
// Range: 0x803E46D0 -> 0x803E4760
static int MatFXAtomicStreamGetSize(void * object /* r30 */) {
    // Local variables
    const struct MatFXAtomicData * atomicData; // r31

    // References
    // -> static char __dbFunctionName[25];
    // -> static int MatFXAtomicDataOffset;
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804E7DD9
// total size: 0x4
struct MatFXWorldSectorData {
    // Members
    int enabled; // offset 0x0, size 0x4
};
// Range: 0x803E4760 -> 0x803E4810
static void * MatFXWorldSectorConstructor(void * object /* r30 */) {
    // Local variables
    struct MatFXWorldSectorData * worldSectorData; // r31

    // References
    // -> static char __dbFunctionName[28];
    // -> static int MatFXWorldSectorDataOffset;
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804E7DF5
// Range: 0x803E4810 -> 0x803E48C0
static void * MatFXWorldSectorDestructor(void * object /* r30 */) {
    // Local variables
    struct MatFXWorldSectorData * worldSectorData; // r31

    // References
    // -> static char __dbFunctionName[27];
    // -> static int MatFXWorldSectorDataOffset;
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804E7E10
// Range: 0x803E48C0 -> 0x803E498C
static void * MatFXWorldSectorCopy(void * dstObject /* r28 */, void * srcObject /* r25 */) {
    // Local variables
    const struct RpWorldSector * srcWorldSector; // r27
    const struct MatFXWorldSectorData * srcWorldSectorData; // r30
    struct RpWorldSector * dstWorldSector; // r26
    struct MatFXWorldSectorData * dstWorldSectorData; // r29

    // References
    // -> static int MatFXWorldSectorDataOffset;
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804E7E25
// Range: 0x803E498C -> 0x803E4A84
static struct RwStream * MatFXWorldSectorStreamWrite(struct RwStream * stream /* r28 */, int binaryLength /* r1+0x8 */, void * object /* r29 */) {
    // Local variables
    struct RwStream * streamOut; // r30
    int temp; // r1+0xC
    const struct MatFXWorldSectorData * sectorData; // r31

    // References
    // -> static char __dbFunctionName[28];
    // -> static int MatFXWorldSectorDataOffset;
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804E7E41
// Range: 0x803E4A84 -> 0x803E4B90
static struct RwStream * MatFXWorldSectorStreamRead(struct RwStream * stream /* r31 */, int binaryLength /* r1+0x8 */, void * object /* r29 */) {
    // Local variables
    struct RpWorldSector * worldSector; // r30
    int enabled; // r1+0xC

    // References
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804E7E5C
// Range: 0x803E4B90 -> 0x803E4C20
static int MatFXWorldSectorStreamGetSize(void * object /* r30 */) {
    // Local variables
    const struct MatFXWorldSectorData * sectorData; // r31

    // References
    // -> static char __dbFunctionName[30];
    // -> static int MatFXWorldSectorDataOffset;
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804E7E7A
// Range: 0x803E4C20 -> 0x803E4D84
static void GenBumpedTextureName(char * bumpedTexName /* r25 */, const struct RwTexture * baseTexture /* r26 */, const struct RwTexture * maskTexture /* r27 */) {
    // Local variables
    int i; // r29
    int j; // r31
    char * oldName[2]; // r1+0x8
    char * newPtr; // r30

    // References
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804E7E8F
enum RwTextureAddressMode {
    rwTEXTUREADDRESSNATEXTUREADDRESS = 0,
    rwTEXTUREADDRESSWRAP = 1,
    rwTEXTUREADDRESSMIRROR = 2,
    rwTEXTUREADDRESSCLAMP = 3,
    rwTEXTUREADDRESSBORDER = 4,
    rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 2147483647,
};
// Range: 0x803E4D84 -> 0x803E51E8
struct RwTexture * _rpMatFXTextureMaskCreate(const struct RwTexture * baseTexture /* r24 */, const struct RwTexture * maskTexture /* r19 */) {
    // Local variables
    struct RwRaster * baseRaster; // r27
    struct RwRaster * maskRaster; // r28
    struct RwRaster * newRaster; // r18
    int maskX; // r17
    int maskY; // r1+0x28
    int baseX; // r26
    int baseY; // r25
    struct RwImage * maskImage; // r29
    struct RwImage * baseImage; // r30
    struct RwTexture * result; // r23
    enum RwTextureFilterMode filterMode; // r1+0x24
    enum RwTextureAddressMode addrsMode; // r1+0x20
    int x; // r22
    int y; // r21
    struct RwImage * resampleImage; // r20
    int rasterWidth; // r1+0x1C
    int rasterHeight; // r1+0x18
    int rasterDepth; // r1+0x14
    int rasterFlags; // r1+0x10
    int rasterBaseFlags; // r1+0xC
    char newName[32]; // r1+0x2C

    // References
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804E7EC9
// Range: 0x803E51E8 -> 0x803E53B8
int RpMatFXPluginAttach() {
    // Local variables
    int offset; // r31

    // References
    // -> static int MatFXWorldSectorDataOffset;
    // -> static int MatFXAtomicDataOffset;
    // -> int MatFXMaterialDataOffset;
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804E7EDD
// Range: 0x803E53B8 -> 0x803E54B4
struct RpAtomic * RpMatFXAtomicEnableEffects(struct RpAtomic * atomic /* r29 */) {
    // Local variables
    struct MatFXAtomicData * atomicData; // r30

    // References
    // -> static char __dbFunctionName[27];
    // -> static int MatFXAtomicDataOffset;
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804E7EF8
// Range: 0x803E54B4 -> 0x803E5584
int RpMatFXAtomicQueryEffects(struct RpAtomic * atomic /* r29 */) {
    // Local variables
    struct MatFXAtomicData * atomicData; // r30

    // References
    // -> static char __dbFunctionName[26];
    // -> static int MatFXAtomicDataOffset;
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[32]; // size: 0x20, address: 0x804E7F12
// Range: 0x803E5584 -> 0x803E5680
struct RpWorldSector * RpMatFXWorldSectorEnableEffects(struct RpWorldSector * worldSector /* r29 */) {
    // Local variables
    struct MatFXWorldSectorData * worldSectorData; // r30

    // References
    // -> static char __dbFunctionName[32];
    // -> static int MatFXWorldSectorDataOffset;
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804E7F32
// Range: 0x803E5680 -> 0x803E584C
struct RpMaterial * RpMatFXMaterialSetEffects(struct RpMaterial * material /* r29 */, enum RpMatFXMaterialFlags flags /* r28 */) {
    // Local variables
    struct rpMatFXMaterialData * materialData; // r31

    // References
    // -> static char __dbFunctionName[26];
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804E7F4C
// Range: 0x803E584C -> 0x803E5950
struct RpMaterial * RpMatFXMaterialSetupBumpMap(struct RpMaterial * material /* r30 */, struct RwTexture * texture /* r1+0x8 */, struct RwFrame * frame /* r1+0xC */, float coef /* r1+0x10 */) {
    // References
    // -> static char __dbFunctionName[28];
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804E7F68
// Range: 0x803E5950 -> 0x803E5A74
struct RpMaterial * RpMatFXMaterialSetupEnvMap(struct RpMaterial * material /* r31 */, struct RwTexture * texture /* r1+0x8 */, struct RwFrame * frame /* r1+0xC */, int useFrameBufferAlpha /* r1+0x10 */, float coef /* r1+0x14 */) {
    // References
    // -> static char __dbFunctionName[27];
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[32]; // size: 0x20, address: 0x804E7F83
// Range: 0x803E5A74 -> 0x803E5B60
struct RpMaterial * RpMatFXMaterialSetupDualTexture(struct RpMaterial * material /* r30 */, struct RwTexture * texture /* r1+0x8 */, enum RwBlendFunction srcBlendMode /* r1+0xC */, enum RwBlendFunction dstBlendMode /* r1+0x10 */) {
    // References
    // -> static char __dbFunctionName[32];
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804E7FA3
// Range: 0x803E5B60 -> 0x803E5C1C
enum RpMatFXMaterialFlags RpMatFXMaterialGetEffects(const struct RpMaterial * material /* r29 */) {
    // Local variables
    const struct rpMatFXMaterialData * materialData; // r30

    // References
    // -> int MatFXMaterialDataOffset;
    // -> static char __dbFunctionName[26];
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[33]; // size: 0x21, address: 0x804E7FBD
// Range: 0x803E5C1C -> 0x803E5F9C
struct RpMaterial * RpMatFXMaterialSetBumpMapTexture(struct RpMaterial * material /* r26 */, struct RwTexture * bumpTexture /* r27 */) {
    // Local variables
    struct MatFXBumpMapData * bumpMapData; // r31
    int dummyTextures; // r25
    struct RwRaster * bumpRaster; // r24
    struct RwTexture * baseTexture; // r29
    struct RwRaster * baseRaster; // r23
    char bumpedName[32]; // r1+0x8
    struct RwTexDictionary * dict; // r28
    struct RwRaster * bumpedRaster; // r22
    struct RwTexture * baseTexture; // r21
    struct RwRaster * raster; // r20

    // References
    // -> static char __dbFunctionName[33];
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804E7FFE
// Range: 0x803E5F9C -> 0x803E6080
struct RpMaterial * RpMatFXMaterialSetBumpMapFrame(struct RpMaterial * material /* r29 */, struct RwFrame * frame /* r1+0x8 */) {
    // Local variables
    struct MatFXBumpMapData * bumpMapData; // r30

    // References
    // -> static char __dbFunctionName[31];
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[37]; // size: 0x25, address: 0x804E801D
// Range: 0x803E6080 -> 0x803E6168
struct RpMaterial * RpMatFXMaterialSetBumpMapCoefficient(struct RpMaterial * material /* r29 */, float coef /* r1+0x8 */) {
    // Local variables
    struct MatFXBumpMapData * bumpMapData; // r30

    // References
    // -> static char __dbFunctionName[37];
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804E8042
// Range: 0x803E6168 -> 0x803E6240
struct RwFrame * RpMatFXMaterialGetBumpMapFrame(const struct RpMaterial * material /* r29 */) {
    // Local variables
    const struct MatFXBumpMapData * bumpMapData; // r30

    // References
    // -> static char __dbFunctionName[31];
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[37]; // size: 0x25, address: 0x804E8061
// Range: 0x803E6240 -> 0x803E631C
float RpMatFXMaterialGetBumpMapCoefficient(const struct RpMaterial * material /* r29 */) {
    // Local variables
    const struct MatFXBumpMapData * bumpMapData; // r30

    // References
    // -> static char __dbFunctionName[37];
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[32]; // size: 0x20, address: 0x804E8086
// Range: 0x803E631C -> 0x803E6444
struct RpMaterial * RpMatFXMaterialSetEnvMapTexture(struct RpMaterial * material /* r28 */, struct RwTexture * texture /* r29 */) {
    // Local variables
    struct MatFXEnvMapData * envMapData; // r31

    // References
    // -> static char __dbFunctionName[32];
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804E80A6
// Range: 0x803E6444 -> 0x803E6528
struct RpMaterial * RpMatFXMaterialSetEnvMapFrame(struct RpMaterial * material /* r29 */, struct RwFrame * frame /* r1+0x8 */) {
    // Local variables
    struct MatFXEnvMapData * envMapData; // r30

    // References
    // -> static char __dbFunctionName[30];
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[41]; // size: 0x29, address: 0x804E80C4
// Range: 0x803E6528 -> 0x803E660C
struct RpMaterial * RpMatFXMaterialSetEnvMapFrameBufferAlpha(struct RpMaterial * material /* r29 */, int useFrameBufferAlpha /* r1+0x8 */) {
    // Local variables
    struct MatFXEnvMapData * envMapData; // r30

    // References
    // -> static char __dbFunctionName[41];
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[36]; // size: 0x24, address: 0x804E80ED
// Range: 0x803E660C -> 0x803E66F0
struct RpMaterial * RpMatFXMaterialSetEnvMapCoefficient(struct RpMaterial * material /* r29 */, float coef /* r1+0x8 */) {
    // Local variables
    struct MatFXEnvMapData * envMapData; // r30

    // References
    // -> static char __dbFunctionName[36];
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[32]; // size: 0x20, address: 0x804E8111
// Range: 0x803E66F0 -> 0x803E67C8
struct RwTexture * RpMatFXMaterialGetEnvMapTexture(const struct RpMaterial * material /* r29 */) {
    // Local variables
    const struct MatFXEnvMapData * envMapData; // r30

    // References
    // -> static char __dbFunctionName[32];
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804E8131
// Range: 0x803E67C8 -> 0x803E68A0
struct RwFrame * RpMatFXMaterialGetEnvMapFrame(const struct RpMaterial * material /* r29 */) {
    // Local variables
    const struct MatFXEnvMapData * envMapData; // r30

    // References
    // -> static char __dbFunctionName[30];
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[41]; // size: 0x29, address: 0x804E814F
// Range: 0x803E68A0 -> 0x803E6978
int RpMatFXMaterialGetEnvMapFrameBufferAlpha(const struct RpMaterial * material /* r29 */) {
    // Local variables
    const struct MatFXEnvMapData * envMapData; // r30

    // References
    // -> static char __dbFunctionName[41];
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[36]; // size: 0x24, address: 0x804E8178
// Range: 0x803E6978 -> 0x803E6A50
float RpMatFXMaterialGetEnvMapCoefficient(const struct RpMaterial * material /* r29 */) {
    // Local variables
    const struct MatFXEnvMapData * envMapData; // r30

    // References
    // -> static char __dbFunctionName[36];
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804E819C
// Range: 0x803E6A50 -> 0x803E6B90
struct RpMaterial * RpMatFXMaterialSetDualTexture(struct RpMaterial * material /* r28 */, struct RwTexture * texture /* r29 */) {
    // Local variables
    struct MatFXDualData * dualData; // r31

    // References
    // -> static char __dbFunctionName[30];
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[33]; // size: 0x21, address: 0x804E81BA
// Range: 0x803E6B90 -> 0x803E6C98
struct RpMaterial * RpMatFXMaterialSetDualBlendModes(struct RpMaterial * material /* r29 */, enum RwBlendFunction srcBlendMode /* r1+0x8 */, enum RwBlendFunction dstBlendMode /* r1+0xC */) {
    // Local variables
    struct MatFXDualData * dualData; // r31

    // References
    // -> static char __dbFunctionName[33];
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804E81DB
// Range: 0x803E6C98 -> 0x803E6D70
struct RwTexture * RpMatFXMaterialGetDualTexture(const struct RpMaterial * material /* r29 */) {
    // Local variables
    const struct MatFXDualData * dualData; // r30

    // References
    // -> static char __dbFunctionName[30];
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[33]; // size: 0x21, address: 0x804E81F9
// Range: 0x803E6D70 -> 0x803E6E60
struct RpMaterial * RpMatFXMaterialGetDualBlendModes(const struct RpMaterial * material /* r29 */, enum RwBlendFunction * srcBlendMode /* r27 */, enum RwBlendFunction * dstBlendMode /* r28 */) {
    // Local variables
    const struct MatFXDualData * dualData; // r30

    // References
    // -> static char __dbFunctionName[33];
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[38]; // size: 0x26, address: 0x804E821A
// Range: 0x803E6E60 -> 0x803E6F50
struct RpMaterial * RpMatFXMaterialSetUVTransformMatrices(struct RpMaterial * material /* r29 */, struct RwMatrixTag * baseTransform /* r1+0x8 */, struct RwMatrixTag * dualTransform /* r1+0xC */) {
    // Local variables
    struct MatFXUVAnimData * uvAnimData; // r30

    // References
    // -> static char __dbFunctionName[38];
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[38]; // size: 0x26, address: 0x804E8240
// Range: 0x803E6F50 -> 0x803E7050
struct RpMaterial * RpMatFXMaterialGetUVTransformMatrices(const struct RpMaterial * material /* r27 */, struct RwMatrixTag * * baseTransform /* r28 */, struct RwMatrixTag * * dualTransform /* r29 */) {
    // Local variables
    const struct MatFXUVAnimData * uvAnimData; // r30

    // References
    // -> static char __dbFunctionName[38];
    // -> struct RwMatFXInfo MatFXInfo;
}


