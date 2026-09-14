/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\gc\water\fxembm.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80125B54 -> 0x801260CC
*/
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
// total size: 0x8
struct RwLLLink {
    // Members
    struct RwLLLink * next; // offset 0x0, size 0x4
    struct RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x30
struct RpMTEffect {
    // Members
    enum RwPlatformID platformID; // offset 0x0, size 0x4
    unsigned int refCount; // offset 0x4, size 0x4
    char name[32]; // offset 0x8, size 0x20
    struct RwLLLink dictLink; // offset 0x28, size 0x8
};
// total size: 0x8
struct RpGXColorS10 {
    // Members
    signed short r; // offset 0x0, size 0x2
    signed short g; // offset 0x2, size 0x2
    signed short b; // offset 0x4, size 0x2
    signed short a; // offset 0x6, size 0x2
};
// total size: 0x4
struct RwRGBA {
    // Members
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
enum RpGameCubeTexFrameID {
    rpGAMECUBETEXFRAME_NONE = 0,
    rpGAMECUBETEXFRAME_OBJECT = 1,
    rpGAMECUBETEXFRAME_WORLD = 2,
    rpGAMECUBETEXFRAME_CAMERA = 3,
    rpGAMECUBETEXFRAME_MISC0 = 16,
    rpGAMECUBETEXFRAME_MISC1 = 17,
    rpGAMECUBETEXFRAME_MISC2 = 18,
    rpGAMECUBETEXFRAME_MISC3 = 19,
    rpGAMECUBETEXFRAME_MISCMAX = 47,
    rpGAMECUBETEXFRAME_FORCEENUMSIZEINT = 2147483647,
};
// total size: 0x3C
struct RpGameCubeTexMtx {
    // Members
    unsigned int offset; // offset 0x0, size 0x4
    enum RpGameCubeTexFrameID refFrame; // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
    float data[3][4]; // offset 0xC, size 0x30
};
enum RpGXTexGenType {
    rpGX_TG_MTX3x4 = 0,
    rpGX_TG_MTX2x4 = 1,
    rpGX_TG_BUMP0 = 2,
    rpGX_TG_BUMP1 = 3,
    rpGX_TG_BUMP2 = 4,
    rpGX_TG_BUMP3 = 5,
    rpGX_TG_BUMP4 = 6,
    rpGX_TG_BUMP5 = 7,
    rpGX_TG_BUMP6 = 8,
    rpGX_TG_BUMP7 = 9,
    rpGX_TG_SRTG = 10,
};
enum RpGXTexGenSrc {
    rpGX_TG_POS = 0,
    rpGX_TG_NRM = 1,
    rpGX_TG_BINRM = 2,
    rpGX_TG_TANGENT = 3,
    rpGX_TG_TEX0 = 4,
    rpGX_TG_TEX1 = 5,
    rpGX_TG_TEX2 = 6,
    rpGX_TG_TEX3 = 7,
    rpGX_TG_TEX4 = 8,
    rpGX_TG_TEX5 = 9,
    rpGX_TG_TEX6 = 10,
    rpGX_TG_TEX7 = 11,
    rpGX_TG_TEXCOORD0 = 12,
    rpGX_TG_TEXCOORD1 = 13,
    rpGX_TG_TEXCOORD2 = 14,
    rpGX_TG_TEXCOORD3 = 15,
    rpGX_TG_TEXCOORD4 = 16,
    rpGX_TG_TEXCOORD5 = 17,
    rpGX_TG_TEXCOORD6 = 18,
    rpGX_TG_COLOR0 = 19,
    rpGX_TG_COLOR1 = 20,
};
// total size: 0x18
struct RpGameCubeTexGen {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    enum RpGXTexGenType func; // offset 0x4, size 0x4
    enum RpGXTexGenSrc srcParam; // offset 0x8, size 0x4
    unsigned int mtx; // offset 0xC, size 0x4
    unsigned int postMtx; // offset 0x10, size 0x4
    unsigned short scaleS; // offset 0x14, size 0x2
    unsigned short scaleT; // offset 0x16, size 0x2
};
enum RpGXIndTexMtxID {
    rpGX_ITM_OFF = 0,
    rpGX_ITM_0 = 1,
    rpGX_ITM_1 = 2,
    rpGX_ITM_2 = 3,
    rpGX_ITM_S0 = 5,
    rpGX_ITM_S1 = 6,
    rpGX_ITM_S2 = 7,
    rpGX_ITM_T0 = 9,
    rpGX_ITM_T1 = 10,
    rpGX_ITM_T2 = 11,
};
// total size: 0x28
struct RpGameCubeIndMtx {
    // Members
    enum RpGXIndTexMtxID id; // offset 0x0, size 0x4
    enum RpGameCubeTexFrameID refFrame; // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
    float data[2][3]; // offset 0xC, size 0x18
    int scale; // offset 0x24, size 0x4
};
enum RpGXTexCoordID {
    rpGX_TEXCOORD0 = 0,
    rpGX_TEXCOORD1 = 1,
    rpGX_TEXCOORD2 = 2,
    rpGX_TEXCOORD3 = 3,
    rpGX_TEXCOORD4 = 4,
    rpGX_TEXCOORD5 = 5,
    rpGX_TEXCOORD6 = 6,
    rpGX_TEXCOORD7 = 7,
    rpGX_MAX_TEXCOORD = 8,
    rpGX_TEXCOORD_NULL = 255,
};
enum RpGXTexMapID {
    rpGX_TEXMAP0 = 0,
    rpGX_TEXMAP1 = 1,
    rpGX_TEXMAP2 = 2,
    rpGX_TEXMAP3 = 3,
    rpGX_TEXMAP4 = 4,
    rpGX_TEXMAP5 = 5,
    rpGX_TEXMAP6 = 6,
    rpGX_TEXMAP7 = 7,
    rpGX_MAX_TEXMAP = 8,
    rpGX_TEXMAP_NULL = 255,
    rpGX_TEX_DISABLE = 256,
};
enum RpGXIndTexScale {
    rpGX_ITS_1 = 0,
    rpGX_ITS_2 = 1,
    rpGX_ITS_4 = 2,
    rpGX_ITS_8 = 3,
    rpGX_ITS_16 = 4,
    rpGX_ITS_32 = 5,
    rpGX_ITS_64 = 6,
    rpGX_ITS_128 = 7,
    rpGX_ITS_256 = 8,
};
// total size: 0x14
struct RpGameCubeIndStage {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    enum RpGXTexCoordID texCoordID; // offset 0x4, size 0x4
    enum RpGXTexMapID texMapID; // offset 0x8, size 0x4
    enum RpGXIndTexScale scaleS; // offset 0xC, size 0x4
    enum RpGXIndTexScale scaleT; // offset 0x10, size 0x4
};
enum RpGXChannelID {
    rpGX_COLOR0 = 0,
    rpGX_COLOR1 = 1,
    rpGX_ALPHA0 = 2,
    rpGX_ALPHA1 = 3,
    rpGX_COLOR0A0 = 4,
    rpGX_COLOR1A1 = 5,
    rpGX_COLOR_ZERO = 6,
    rpGX_ALPHA_BUMP = 7,
    rpGX_ALPHA_BUMPN = 8,
    rpGX_COLOR_NULL = 255,
};
// total size: 0x64
struct RpGameCubeTevStage {
    // Members
    struct RpGameCubeTevOp op; // offset 0x0, size 0x50
    enum RpGXTexCoordID texCoordID; // offset 0x50, size 0x4
    enum RpGXTexMapID texMapID; // offset 0x54, size 0x4
    enum RpGXChannelID channelID; // offset 0x58, size 0x4
    unsigned int flags; // offset 0x5C, size 0x4
    unsigned int indirect; // offset 0x60, size 0x4
};
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
// total size: 0x5C
struct RpGameCubeMTConfig {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    unsigned char maxNumTexGens; // offset 0x4, size 0x1
    unsigned char maxNumTevStages; // offset 0x5, size 0x1
    unsigned char maxNumTexMtx; // offset 0x6, size 0x1
    unsigned char maxNumIndStages; // offset 0x7, size 0x1
    unsigned char maxNumIndMtx; // offset 0x8, size 0x1
    unsigned char numTexGens; // offset 0x9, size 0x1
    unsigned char numTevStages; // offset 0xA, size 0x1
    unsigned char numTexMtx; // offset 0xB, size 0x1
    unsigned char numIndStages; // offset 0xC, size 0x1
    unsigned char numIndMtx; // offset 0xD, size 0x1
    struct RpGXColorS10 reg[4]; // offset 0xE, size 0x20
    struct RwRGBA kreg[4]; // offset 0x2E, size 0x10
    struct RpGameCubeTexMtx * texMtx; // offset 0x40, size 0x4
    struct RpGameCubeTexGen * texGens; // offset 0x44, size 0x4
    struct RpGameCubeIndMtx * indMtx; // offset 0x48, size 0x4
    struct RpGameCubeIndStage * indStages; // offset 0x4C, size 0x4
    struct RpGameCubeTevStage * tevStages; // offset 0x50, size 0x4
    enum RwBlendFunction srcBlend; // offset 0x54, size 0x4
    enum RwBlendFunction destBlend; // offset 0x58, size 0x4
};
enum RpGXTevColorArg {
    rpGX_CC_CPREV = 0,
    rpGX_CC_APREV = 1,
    rpGX_CC_C0 = 2,
    rpGX_CC_A0 = 3,
    rpGX_CC_C1 = 4,
    rpGX_CC_A1 = 5,
    rpGX_CC_C2 = 6,
    rpGX_CC_A2 = 7,
    rpGX_CC_TEXC = 8,
    rpGX_CC_TEXA = 9,
    rpGX_CC_RASC = 10,
    rpGX_CC_RASA = 11,
    rpGX_CC_ONE = 12,
    rpGX_CC_HALF = 13,
    rpGX_CC_KONST = 14,
    rpGX_CC_ZERO = 15,
};
enum RpGXTevAlphaArg {
    rpGX_CA_APREV = 0,
    rpGX_CA_A0 = 1,
    rpGX_CA_A1 = 2,
    rpGX_CA_A2 = 3,
    rpGX_CA_TEXA = 4,
    rpGX_CA_RASA = 5,
    rpGX_CA_KONST = 6,
    rpGX_CA_ZERO = 7,
};
enum RpGXTevOp {
    rpGX_TEV_ADD = 0,
    rpGX_TEV_SUB = 1,
    rpGX_TEV_COMP_R8_GT = 8,
    rpGX_TEV_COMP_R8_EQ = 9,
    rpGX_TEV_COMP_GR16_GT = 10,
    rpGX_TEV_COMP_GR16_EQ = 11,
    rpGX_TEV_COMP_BGR24_GT = 12,
    rpGX_TEV_COMP_BGR24_EQ = 13,
    rpGX_TEV_COMP_RGB8_GT = 14,
    rpGX_TEV_COMP_RGB8_EQ = 15,
    rpGX_TEV_COMP_A8_GT = 14,
    rpGX_TEV_COMP_A8_EQ = 15,
};
enum RpGXTevBias {
    rpGX_TB_ZERO = 0,
    rpGX_TB_ADDHALF = 1,
    rpGX_TB_SUBHALF = 2,
    rpGX_MAX_TEVBIAS = 3,
};
enum RpGXTevScale {
    rpGX_CS_SCALE_1 = 0,
    rpGX_CS_SCALE_2 = 1,
    rpGX_CS_SCALE_4 = 2,
    rpGX_CS_DIVIDE_2 = 3,
    rpGX_MAX_TEVSCALE = 4,
};
enum RpGXTevRegID {
    rpGX_TEVPREV = 0,
    rpGX_TEVREG0 = 1,
    rpGX_TEVREG1 = 2,
    rpGX_TEVREG2 = 3,
    rpGX_MAX_TEVREG = 4,
};
enum RpGXTevKColorSel {
    rpGX_TEV_KCSEL_1 = 0,
    rpGX_TEV_KCSEL_7_8 = 1,
    rpGX_TEV_KCSEL_3_4 = 2,
    rpGX_TEV_KCSEL_5_8 = 3,
    rpGX_TEV_KCSEL_1_2 = 4,
    rpGX_TEV_KCSEL_3_8 = 5,
    rpGX_TEV_KCSEL_1_4 = 6,
    rpGX_TEV_KCSEL_1_8 = 7,
    rpGX_TEV_KCSEL_K0 = 12,
    rpGX_TEV_KCSEL_K1 = 13,
    rpGX_TEV_KCSEL_K2 = 14,
    rpGX_TEV_KCSEL_K3 = 15,
    rpGX_TEV_KCSEL_K0_R = 16,
    rpGX_TEV_KCSEL_K1_R = 17,
    rpGX_TEV_KCSEL_K2_R = 18,
    rpGX_TEV_KCSEL_K3_R = 19,
    rpGX_TEV_KCSEL_K0_G = 20,
    rpGX_TEV_KCSEL_K1_G = 21,
    rpGX_TEV_KCSEL_K2_G = 22,
    rpGX_TEV_KCSEL_K3_G = 23,
    rpGX_TEV_KCSEL_K0_B = 24,
    rpGX_TEV_KCSEL_K1_B = 25,
    rpGX_TEV_KCSEL_K2_B = 26,
    rpGX_TEV_KCSEL_K3_B = 27,
    rpGX_TEV_KCSEL_K0_A = 28,
    rpGX_TEV_KCSEL_K1_A = 29,
    rpGX_TEV_KCSEL_K2_A = 30,
    rpGX_TEV_KCSEL_K3_A = 31,
};
enum RpGXTevKAlphaSel {
    rpGX_TEV_KASEL_1 = 0,
    rpGX_TEV_KASEL_7_8 = 1,
    rpGX_TEV_KASEL_3_4 = 2,
    rpGX_TEV_KASEL_5_8 = 3,
    rpGX_TEV_KASEL_1_2 = 4,
    rpGX_TEV_KASEL_3_8 = 5,
    rpGX_TEV_KASEL_1_4 = 6,
    rpGX_TEV_KASEL_1_8 = 7,
    rpGX_TEV_KASEL_K0_R = 16,
    rpGX_TEV_KASEL_K1_R = 17,
    rpGX_TEV_KASEL_K2_R = 18,
    rpGX_TEV_KASEL_K3_R = 19,
    rpGX_TEV_KASEL_K0_G = 20,
    rpGX_TEV_KASEL_K1_G = 21,
    rpGX_TEV_KASEL_K2_G = 22,
    rpGX_TEV_KASEL_K3_G = 23,
    rpGX_TEV_KASEL_K0_B = 24,
    rpGX_TEV_KASEL_K1_B = 25,
    rpGX_TEV_KASEL_K2_B = 26,
    rpGX_TEV_KASEL_K3_B = 27,
    rpGX_TEV_KASEL_K0_A = 28,
    rpGX_TEV_KASEL_K1_A = 29,
    rpGX_TEV_KASEL_K2_A = 30,
    rpGX_TEV_KASEL_K3_A = 31,
};
// total size: 0x50
struct RpGameCubeTevOp {
    // Members
    enum RpGXTevColorArg colorA; // offset 0x0, size 0x4
    enum RpGXTevColorArg colorB; // offset 0x4, size 0x4
    enum RpGXTevColorArg colorC; // offset 0x8, size 0x4
    enum RpGXTevColorArg colorD; // offset 0xC, size 0x4
    enum RpGXTevAlphaArg alphaA; // offset 0x10, size 0x4
    enum RpGXTevAlphaArg alphaB; // offset 0x14, size 0x4
    enum RpGXTevAlphaArg alphaC; // offset 0x18, size 0x4
    enum RpGXTevAlphaArg alphaD; // offset 0x1C, size 0x4
    enum RpGXTevOp colorOp; // offset 0x20, size 0x4
    enum RpGXTevBias colorBias; // offset 0x24, size 0x4
    enum RpGXTevScale colorScale; // offset 0x28, size 0x4
    unsigned char colorClamp; // offset 0x2C, size 0x1
    enum RpGXTevRegID colorOutReg; // offset 0x30, size 0x4
    enum RpGXTevOp alphaOp; // offset 0x34, size 0x4
    enum RpGXTevBias alphaBias; // offset 0x38, size 0x4
    enum RpGXTevScale alphaScale; // offset 0x3C, size 0x4
    unsigned char alphaClamp; // offset 0x40, size 0x1
    enum RpGXTevRegID alphaOutReg; // offset 0x44, size 0x4
    enum RpGXTevKColorSel colorSel; // offset 0x48, size 0x4
    enum RpGXTevKAlphaSel alphaSel; // offset 0x4C, size 0x4
};
enum RpGXIndTexStageID {
    rpGX_INDTEXSTAGE0 = 0,
    rpGX_INDTEXSTAGE1 = 1,
    rpGX_INDTEXSTAGE2 = 2,
    rpGX_INDTEXSTAGE3 = 3,
};
enum RpGXIndTexFormat {
    rpGX_ITF_8 = 0,
    rpGX_ITF_5 = 1,
    rpGX_ITF_4 = 2,
    rpGX_ITF_3 = 3,
};
enum RpGXIndTexBiasSel {
    rpGX_ITB_NONE = 0,
    rpGX_ITB_S = 1,
    rpGX_ITB_T = 2,
    rpGX_ITB_ST = 3,
    rpGX_ITB_U = 4,
    rpGX_ITB_SU = 5,
    rpGX_ITB_TU = 6,
    rpGX_ITB_STU = 7,
};
enum RpGXIndTexWrap {
    rpGX_ITW_OFF = 0,
    rpGX_ITW_256 = 1,
    rpGX_ITW_128 = 2,
    rpGX_ITW_64 = 3,
    rpGX_ITW_32 = 4,
    rpGX_ITW_16 = 5,
    rpGX_ITW_0 = 6,
};
enum RpGXIndTexAlphaSel {
    rpGX_ITBA_OFF = 0,
    rpGX_ITBA_S = 1,
    rpGX_ITBA_T = 2,
    rpGX_ITBA_U = 3,
};
// total size: 0x20
struct RpGameCubeTevInd {
    // Members
    enum RpGXIndTexStageID indStage; // offset 0x0, size 0x4
    enum RpGXIndTexFormat format; // offset 0x4, size 0x4
    enum RpGXIndTexBiasSel biasSel; // offset 0x8, size 0x4
    enum RpGXIndTexMtxID matrixSel; // offset 0xC, size 0x4
    enum RpGXIndTexWrap wrapS; // offset 0x10, size 0x4
    enum RpGXIndTexWrap wrapT; // offset 0x14, size 0x4
    unsigned char addPrev; // offset 0x18, size 0x1
    unsigned char utcLod; // offset 0x19, size 0x1
    enum RpGXIndTexAlphaSel alphaSel; // offset 0x1C, size 0x4
};
// Range: 0x80125B54 -> 0x80125FA0
static struct RpMTEffect * CreateEMBMEffect() {
    // Local variables
    struct RpMTEffect * effect; // r30
    struct RpGameCubeMTConfig * config; // r0
    float mtx[3][2][4]; // r1+0x200
    struct RpGameCubeTexGen texGens[5]; // r1+0x188
    struct RpGameCubeTevOp tevBlendBase; // r1+0x138
    struct RpGameCubeTevOp tevBlendMod1; // r1+0xE8
    struct RpGameCubeTevOp tevBlendMod2; // r1+0x98
    struct RpGameCubeTevOp tevBlendEnv; // r1+0x48
    struct RpGameCubeTevInd tevInd; // r1+0x28
    struct RpGameCubeTevInd tevIndAddPrev; // r1+0x8
}

// total size: 0x34
struct RwRaster {
    // Members
    struct RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    int width; // offset 0xC, size 0x4
    int height; // offset 0x10, size 0x4
    int depth; // offset 0x14, size 0x4
    int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    int originalWidth; // offset 0x28, size 0x4
    int originalHeight; // offset 0x2C, size 0x4
    int originalStride; // offset 0x30, size 0x4
};
// total size: 0x8
struct RwObject {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
// total size: 0x8
struct RwLinkList {
    // Members
    struct RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x18
struct RwTexDictionary {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLinkList texturesInDict; // offset 0x8, size 0x8
    struct RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x58
struct RwTexture {
    // Members
    struct RwRaster * raster; // offset 0x0, size 0x4
    struct RwTexDictionary * dict; // offset 0x4, size 0x4
    struct RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    unsigned int filterAddressing; // offset 0x50, size 0x4
    int refCount; // offset 0x54, size 0x4
};
// total size: 0xC
struct rxHeapSuperBlockDescriptor {
    // Members
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    struct rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
// total size: 0x8
struct rxHeapFreeBlock {
    // Members
    unsigned int size; // offset 0x0, size 0x4
    struct rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
// total size: 0x20
struct rxHeapBlockHeader {
    // Members
    struct rxHeapBlockHeader * prev; // offset 0x0, size 0x4
    struct rxHeapBlockHeader * next; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    struct rxHeapFreeBlock * freeEntry; // offset 0xC, size 0x4
    unsigned int pad[4]; // offset 0x10, size 0x10
};
// total size: 0x1C
struct RxHeap {
    // Members
    unsigned int superBlockSize; // offset 0x0, size 0x4
    struct rxHeapSuperBlockDescriptor * head; // offset 0x4, size 0x4
    struct rxHeapBlockHeader * headBlock; // offset 0x8, size 0x4
    struct rxHeapFreeBlock * freeBlocks; // offset 0xC, size 0x4
    unsigned int entriesAlloced; // offset 0x10, size 0x4
    unsigned int entriesUsed; // offset 0x14, size 0x4
    int dirty; // offset 0x18, size 0x4
};
// total size: 0x8
struct RxPipelineNodeParam {
    // Members
    void * dataParam; // offset 0x0, size 0x4
    struct RxHeap * heap; // offset 0x4, size 0x4
};
// total size: 0x1C
struct RxNodeMethods {
    // Members
    int (* nodeBody)(struct RxPipelineNode *, struct RxPipelineNodeParam *); // offset 0x0, size 0x4
    int (* nodeInit)(struct RxNodeDefinition *); // offset 0x4, size 0x4
    void (* nodeTerm)(struct RxNodeDefinition *); // offset 0x8, size 0x4
    int (* pipelineNodeInit)(struct RxPipelineNode *); // offset 0xC, size 0x4
    void (* pipelineNodeTerm)(struct RxPipelineNode *); // offset 0x10, size 0x4
    int (* pipelineNodeConfig)(struct RxPipelineNode *, struct RxPipeline *); // offset 0x14, size 0x4
    unsigned int (* configMsgHandler)(struct RxPipelineNode *, unsigned int, unsigned int, void *); // offset 0x18, size 0x4
};
// total size: 0x10
struct RxClusterDefinition {
    // Members
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    const char * attributeSet; // offset 0xC, size 0x4
};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
struct RxClusterRef {
    // Members
    struct RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
struct RxOutputSpec {
    // Members
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
// total size: 0x14
struct RxIoSpec {
    // Members
    unsigned int numClustersOfInterest; // offset 0x0, size 0x4
    struct RxClusterRef * clustersOfInterest; // offset 0x4, size 0x4
    enum RxClusterValidityReq * inputRequirements; // offset 0x8, size 0x4
    unsigned int numOutputs; // offset 0xC, size 0x4
    struct RxOutputSpec * outputs; // offset 0x10, size 0x4
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x40
struct RxNodeDefinition {
    // Members
    char * name; // offset 0x0, size 0x4
    struct RxNodeMethods nodeMethods; // offset 0x4, size 0x1C
    struct RxIoSpec io; // offset 0x20, size 0x14
    unsigned int pipelineNodePrivateDataSize; // offset 0x34, size 0x4
    enum RxNodeDefEditable editable; // offset 0x38, size 0x4
    int InputPipesCnt; // offset 0x3C, size 0x4
};
// total size: 0x8
struct RxPipelineCluster {
    // Members
    struct RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
// total size: 0x0
struct rxReq {};
// total size: 0xC
struct RxPipelineNodeTopSortData {
    // Members
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    struct rxReq * req; // offset 0x8, size 0x4
};
// total size: 0x28
struct RxPipelineNode {
    // Members
    struct RxNodeDefinition * nodeDef; // offset 0x0, size 0x4
    unsigned int numOutputs; // offset 0x4, size 0x4
    unsigned int * outputs; // offset 0x8, size 0x4
    struct RxPipelineCluster * * slotClusterRefs; // offset 0xC, size 0x4
    unsigned int * slotsContinue; // offset 0x10, size 0x4
    void * privateData; // offset 0x14, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x18, size 0x4
    struct RxPipelineNodeTopSortData * topSortData; // offset 0x1C, size 0x4
    void * initializationData; // offset 0x20, size 0x4
    unsigned int initializationDataSize; // offset 0x24, size 0x4
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x1C
struct RxCluster {
    // Members
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short stride; // offset 0x2, size 0x2
    void * data; // offset 0x4, size 0x4
    void * currentData; // offset 0x8, size 0x4
    unsigned int numAlloced; // offset 0xC, size 0x4
    unsigned int numUsed; // offset 0x10, size 0x4
    struct RxPipelineCluster * clusterRef; // offset 0x14, size 0x4
    unsigned int attributes; // offset 0x18, size 0x4
};
// total size: 0x30
struct RxPacket {
    // Members
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short numClusters; // offset 0x2, size 0x2
    struct RxPipeline * pipeline; // offset 0x4, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x8, size 0x4
    unsigned int * slotsContinue; // offset 0xC, size 0x4
    struct RxPipelineCluster * * slotClusterRefs; // offset 0x10, size 0x4
    struct RxCluster clusters[1]; // offset 0x14, size 0x1C
};
// total size: 0xC
struct RxPipelineRequiresCluster {
    // Members
    struct RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
// total size: 0x34
struct RxPipeline {
    // Members
    int locked; // offset 0x0, size 0x4
    unsigned int numNodes; // offset 0x4, size 0x4
    struct RxPipelineNode * nodes; // offset 0x8, size 0x4
    unsigned int packetNumClusterSlots; // offset 0xC, size 0x4
    enum rxEmbeddedPacketState embeddedPacketState; // offset 0x10, size 0x4
    struct RxPacket * embeddedPacket; // offset 0x14, size 0x4
    unsigned int numInputRequirements; // offset 0x18, size 0x4
    struct RxPipelineRequiresCluster * inputRequirements; // offset 0x1C, size 0x4
    void * superBlock; // offset 0x20, size 0x4
    unsigned int superBlockSize; // offset 0x24, size 0x4
    unsigned int entryPoint; // offset 0x28, size 0x4
    unsigned int pluginId; // offset 0x2C, size 0x4
    unsigned int pluginData; // offset 0x30, size 0x4
};
// total size: 0xC
struct RwSurfaceProperties {
    // Members
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0x1C
struct RpMaterial {
    // Members
    struct RwTexture * texture; // offset 0x0, size 0x4
    struct RwRGBA color; // offset 0x4, size 0x4
    struct RxPipeline * pipeline; // offset 0x8, size 0x4
    struct RwSurfaceProperties surfaceProps; // offset 0xC, size 0xC
    signed short refCount; // offset 0x18, size 0x2
    signed short pad; // offset 0x1A, size 0x2
};
// total size: 0x14
struct FxParam {
    // Members
    struct RpMaterial * material; // offset 0x0, size 0x4
    struct RpMTEffect * effect; // offset 0x4, size 0x4
    void (* set)(); // offset 0x8, size 0x4
    void (* unset)(); // offset 0xC, size 0x4
    void (* close)(); // offset 0x10, size 0x4
};
struct FxParam EMBM; // size: 0x14, address: 0x803C2D00
float BumpHeight; // size: 0x4, address: 0x803BE948
float BumpWidth; // size: 0x4, address: 0x803BE94C
float Shininess; // size: 0x4, address: 0x803BE950
int EnvMode; // size: 0x4, address: 0x803C2D14
// Range: 0x80125FA0 -> 0x80125FA4
static void EffectSet() {}

// Range: 0x80125FA4 -> 0x80125FA8
static void EffectUnset() {}

// Range: 0x80125FA8 -> 0x80126000
static void EffectClose() {
    // References
    // -> struct FxParam EMBM;
}

// total size: 0x0
struct RpMultiTexture {};
// Range: 0x80126000 -> 0x801260CC
struct FxParam * FxEMBMOpen() {
    // Local variables
    struct RpMultiTexture * mt; // r30

    // References
    // -> struct FxParam EMBM;
}


