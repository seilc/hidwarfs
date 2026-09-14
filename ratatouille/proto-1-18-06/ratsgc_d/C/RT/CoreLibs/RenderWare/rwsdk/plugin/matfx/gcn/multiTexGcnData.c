/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\plugin\matfx\gcn\multiTexGcnData.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803E970C -> 0x803EA9FC
*/
static char __dbFunctionName[30]; // size: 0x1E, address: 0x804E84C0
// total size: 0x8
struct RpGXColorS10 {
    // Members
    signed short r; // offset 0x0, size 0x2
    signed short g; // offset 0x2, size 0x2
    signed short b; // offset 0x4, size 0x2
    signed short a; // offset 0x6, size 0x2
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
// Range: 0x803E970C -> 0x803E97F8
static int GameCubeMTEffectStreamGetSize(const struct RpMTEffect * effect /* r29 */) {
    // Local variables
    int size; // r31
    const struct RpGameCubeMTConfig * config; // r30

    // References
    // -> static char __dbFunctionName[30];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804E84DE
// total size: 0x38
struct _StreamMTConfig {
    // Members
    unsigned char numTexGens; // offset 0x0, size 0x1
    unsigned char numTevStages; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char blending; // offset 0x3, size 0x1
    struct RpGXColorS10 reg[4]; // offset 0x4, size 0x20
    struct RwRGBA kreg[4]; // offset 0x24, size 0x10
    unsigned char numTexMtx; // offset 0x34, size 0x1
    unsigned char numIndMtx; // offset 0x35, size 0x1
    unsigned char numIndStages; // offset 0x36, size 0x1
    unsigned char pad; // offset 0x37, size 0x1
};
// total size: 0xC
struct _StreamTexGen {
    // Members
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char func; // offset 0x1, size 0x1
    unsigned char srcParam; // offset 0x2, size 0x1
    unsigned char mtx; // offset 0x3, size 0x1
    unsigned char postMtx; // offset 0x4, size 0x1
    unsigned char pad[3]; // offset 0x5, size 0x3
    unsigned short scaleS; // offset 0x8, size 0x2
    unsigned short scaleT; // offset 0xA, size 0x2
};
// total size: 0x1C
struct _StreamTevStage {
    // Members
    unsigned char colorA; // offset 0x0, size 0x1
    unsigned char colorB; // offset 0x1, size 0x1
    unsigned char colorC; // offset 0x2, size 0x1
    unsigned char colorD; // offset 0x3, size 0x1
    unsigned char alphaA; // offset 0x4, size 0x1
    unsigned char alphaB; // offset 0x5, size 0x1
    unsigned char alphaC; // offset 0x6, size 0x1
    unsigned char alphaD; // offset 0x7, size 0x1
    unsigned char colorOp; // offset 0x8, size 0x1
    unsigned char colorBias; // offset 0x9, size 0x1
    unsigned char colorScale; // offset 0xA, size 0x1
    unsigned char colorClamp; // offset 0xB, size 0x1
    unsigned char colorOutReg; // offset 0xC, size 0x1
    unsigned char alphaOp; // offset 0xD, size 0x1
    unsigned char alphaBias; // offset 0xE, size 0x1
    unsigned char alphaScale; // offset 0xF, size 0x1
    unsigned char alphaClamp; // offset 0x10, size 0x1
    unsigned char alphaOutReg; // offset 0x11, size 0x1
    unsigned char colorSel; // offset 0x12, size 0x1
    unsigned char alphaSel; // offset 0x13, size 0x1
    unsigned char texCoordID; // offset 0x14, size 0x1
    unsigned char texMapID; // offset 0x15, size 0x1
    unsigned char channelID; // offset 0x16, size 0x1
    unsigned char flags; // offset 0x17, size 0x1
    unsigned int indirect; // offset 0x18, size 0x4
};
// total size: 0x4
struct _StreamTexMtx {
    // Members
    unsigned char offset; // offset 0x0, size 0x1
    unsigned char refFrame; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
};
// total size: 0x4
struct _StreamIndMtx {
    // Members
    unsigned char id; // offset 0x0, size 0x1
    unsigned char refFrame; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    signed char scale; // offset 0x3, size 0x1
};
// total size: 0x8
struct _StreamIndStage {
    // Members
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char texCoordID; // offset 0x1, size 0x1
    unsigned char texMapID; // offset 0x2, size 0x1
    unsigned char scaleS; // offset 0x3, size 0x1
    unsigned char scaleT; // offset 0x4, size 0x1
    unsigned char pad[3]; // offset 0x5, size 0x3
};
// Range: 0x803E97F8 -> 0x803E9DB8
static struct RpMTEffect * GameCubeMTEffectStreamWrite(const struct RpMTEffect * effect /* r23 */, struct RwStream * stream /* r25 */) {
    // Local variables
    const struct RpGameCubeMTConfig * config; // r30
    unsigned int i; // r29
    struct _StreamMTConfig binConfig; // r1+0x40
    struct RpGameCubeTexGen * texGen; // r28
    struct _StreamTexGen binTexGen; // r1+0x18
    struct RpGameCubeTevStage * tevStage; // r31
    struct _StreamTevStage binTevStage; // r1+0x24
    struct RpGameCubeTexMtx * texMtx; // r24
    struct _StreamTexMtx binTexMtx; // r1+0xC
    struct RpGameCubeIndMtx * indMtx; // r26
    struct _StreamIndMtx binIndMtx; // r1+0x8
    struct RpGameCubeIndStage * indStage; // r27
    struct _StreamIndStage binIndStage; // r1+0x10

    // References
    // -> static char __dbFunctionName[28];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804E84FA
// Range: 0x803E9DB8 -> 0x803EA274
static struct RpMTEffect * GameCubeMTEffectStreamRead(struct RwStream * stream /* r23 */) {
    // Local variables
    struct RpMTEffect * effect; // r25
    struct _StreamMTConfig binConfig; // r1+0x40
    struct RpGameCubeMTConfig * config; // r30
    unsigned int i; // r29
    unsigned int size; // r24
    struct _StreamTexGen binTexGen; // r1+0x18
    struct RpGameCubeTexGen * texGen; // r28
    struct _StreamTevStage binTevStage; // r1+0x24
    struct RpGameCubeTevStage * tevStage; // r31
    struct RpGameCubeTexMtx * texMtx; // r22
    struct _StreamTexMtx binTexMtx; // r1+0xC
    struct RpGameCubeIndMtx * indMtx; // r26
    struct _StreamIndMtx binIndMtx; // r1+0x8
    struct RpGameCubeIndStage * indStage; // r27
    struct _StreamIndStage binIndStage; // r1+0x10

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804E8515
// Range: 0x803EA274 -> 0x803EA2DC
int _rpGameCubeMTDataPluginAttach() {
    // Local variables
    int result; // r31

    // References
    // -> static char __dbFunctionName[30];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804E8533
// Range: 0x803EA2DC -> 0x803EA5C4
struct RpMTEffect * RpGameCubeMTEffectCreate(unsigned int numTevStages /* r22 */, unsigned int numTexGens /* r26 */, unsigned int numTexMtx /* r23 */, unsigned int numIndStages /* r24 */, unsigned int numIndMtx /* r25 */) {
    // Local variables
    struct RpMTEffect * effect; // r27
    struct RpGameCubeMTConfig * config; // r31
    unsigned int size; // r30
    unsigned char * offsetData; // r29
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[25];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804E854C
// Range: 0x803EA5C4 -> 0x803EA698
struct RpGameCubeMTConfig * RpGameCubeMTEffectGetConfig(struct RpMTEffect * effect /* r31 */) {
    // Local variables
    struct RpGameCubeMTConfig * config; // r29

    // References
    // -> static char __dbFunctionName[28];
    // -> struct RwMatFXInfo MatFXInfo;
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804E8568
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
// Range: 0x803EA698 -> 0x803EA90C
void RpGameCubeTevIndPack(unsigned int * pkData /* r28 */, struct RpGameCubeTevInd * data /* r31 */) {
    // Local variables
    unsigned int pk; // r30

    // References
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804E857D
// Range: 0x803EA90C -> 0x803EA9FC
void RpGameCubeTevIndUnpack(struct RpGameCubeTevInd * data /* r31 */, unsigned int * pkData /* r29 */) {
    // Local variables
    unsigned int pk; // r30

    // References
    // -> static char __dbFunctionName[23];
}


