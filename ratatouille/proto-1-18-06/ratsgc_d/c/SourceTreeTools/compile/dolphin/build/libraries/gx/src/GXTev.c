/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\gx\src\GXTev.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803B8E40 -> 0x803BA824
*/
static // total size: 0x4
struct {
    // Members
    unsigned long rid : 8; // offset 0x0, size 0x4
    unsigned long dest : 2; // offset 0x0, size 0x4
    unsigned long shift : 2; // offset 0x0, size 0x4
    unsigned long clamp : 1; // offset 0x0, size 0x4
    unsigned long sub : 1; // offset 0x0, size 0x4
    unsigned long bias : 2; // offset 0x0, size 0x4
    unsigned long sela : 4; // offset 0x0, size 0x4
    unsigned long selb : 4; // offset 0x0, size 0x4
    unsigned long selc : 4; // offset 0x0, size 0x4
    unsigned long seld : 4; // offset 0x0, size 0x4
} TEVCOpTableST0[5]; // size: 0x14, address: 0x805421D0
static // total size: 0x4
struct {
    // Members
    unsigned long rid : 8; // offset 0x0, size 0x4
    unsigned long dest : 2; // offset 0x0, size 0x4
    unsigned long shift : 2; // offset 0x0, size 0x4
    unsigned long clamp : 1; // offset 0x0, size 0x4
    unsigned long sub : 1; // offset 0x0, size 0x4
    unsigned long bias : 2; // offset 0x0, size 0x4
    unsigned long sela : 4; // offset 0x0, size 0x4
    unsigned long selb : 4; // offset 0x0, size 0x4
    unsigned long selc : 4; // offset 0x0, size 0x4
    unsigned long seld : 4; // offset 0x0, size 0x4
} TEVCOpTableST1[5]; // size: 0x14, address: 0x805421E4
static // total size: 0x4
struct {
    // Members
    unsigned long rid : 8; // offset 0x0, size 0x4
    unsigned long dest : 2; // offset 0x0, size 0x4
    unsigned long shift : 2; // offset 0x0, size 0x4
    unsigned long clamp : 1; // offset 0x0, size 0x4
    unsigned long sub : 1; // offset 0x0, size 0x4
    unsigned long bias : 2; // offset 0x0, size 0x4
    unsigned long sela : 3; // offset 0x0, size 0x4
    unsigned long selb : 3; // offset 0x0, size 0x4
    unsigned long selc : 3; // offset 0x0, size 0x4
    unsigned long seld : 3; // offset 0x0, size 0x4
    unsigned long swap : 2; // offset 0x0, size 0x4
    unsigned long mode : 2; // offset 0x0, size 0x4
} TEVAOpTableST0[5]; // size: 0x14, address: 0x805421F8
static // total size: 0x4
struct {
    // Members
    unsigned long rid : 8; // offset 0x0, size 0x4
    unsigned long dest : 2; // offset 0x0, size 0x4
    unsigned long shift : 2; // offset 0x0, size 0x4
    unsigned long clamp : 1; // offset 0x0, size 0x4
    unsigned long sub : 1; // offset 0x0, size 0x4
    unsigned long bias : 2; // offset 0x0, size 0x4
    unsigned long sela : 3; // offset 0x0, size 0x4
    unsigned long selb : 3; // offset 0x0, size 0x4
    unsigned long selc : 3; // offset 0x0, size 0x4
    unsigned long seld : 3; // offset 0x0, size 0x4
    unsigned long swap : 2; // offset 0x0, size 0x4
    unsigned long mode : 2; // offset 0x0, size 0x4
} TEVAOpTableST1[5]; // size: 0x14, address: 0x8054220C
unsigned char __GXinBegin; // size: 0x1, address: 0x80D6BF58
// total size: 0x10
struct _GXTexRegion {
    // Members
    unsigned long dummy[4]; // offset 0x0, size 0x10
};
// total size: 0x10
struct _GXTlutRegion {
    // Members
    unsigned long dummy[4]; // offset 0x0, size 0x10
};
// total size: 0x20
struct _GXTexObj {
    // Members
    unsigned long dummy[8]; // offset 0x0, size 0x20
};
enum _GXAttrType {
    GX_NONE = 0,
    GX_DIRECT = 1,
    GX_INDEX8 = 2,
    GX_INDEX16 = 3,
};
enum _GXPerf0 {
    GX_PERF0_VERTICES = 0,
    GX_PERF0_CLIP_VTX = 1,
    GX_PERF0_CLIP_CLKS = 2,
    GX_PERF0_XF_WAIT_IN = 3,
    GX_PERF0_XF_WAIT_OUT = 4,
    GX_PERF0_XF_XFRM_CLKS = 5,
    GX_PERF0_XF_LIT_CLKS = 6,
    GX_PERF0_XF_BOT_CLKS = 7,
    GX_PERF0_XF_REGLD_CLKS = 8,
    GX_PERF0_XF_REGRD_CLKS = 9,
    GX_PERF0_CLIP_RATIO = 10,
    GX_PERF0_TRIANGLES = 11,
    GX_PERF0_TRIANGLES_CULLED = 12,
    GX_PERF0_TRIANGLES_PASSED = 13,
    GX_PERF0_TRIANGLES_SCISSORED = 14,
    GX_PERF0_TRIANGLES_0TEX = 15,
    GX_PERF0_TRIANGLES_1TEX = 16,
    GX_PERF0_TRIANGLES_2TEX = 17,
    GX_PERF0_TRIANGLES_3TEX = 18,
    GX_PERF0_TRIANGLES_4TEX = 19,
    GX_PERF0_TRIANGLES_5TEX = 20,
    GX_PERF0_TRIANGLES_6TEX = 21,
    GX_PERF0_TRIANGLES_7TEX = 22,
    GX_PERF0_TRIANGLES_8TEX = 23,
    GX_PERF0_TRIANGLES_0CLR = 24,
    GX_PERF0_TRIANGLES_1CLR = 25,
    GX_PERF0_TRIANGLES_2CLR = 26,
    GX_PERF0_QUAD_0CVG = 27,
    GX_PERF0_QUAD_NON0CVG = 28,
    GX_PERF0_QUAD_1CVG = 29,
    GX_PERF0_QUAD_2CVG = 30,
    GX_PERF0_QUAD_3CVG = 31,
    GX_PERF0_QUAD_4CVG = 32,
    GX_PERF0_AVG_QUAD_CNT = 33,
    GX_PERF0_CLOCKS = 34,
    GX_PERF0_NONE = 35,
};
enum _GXPerf1 {
    GX_PERF1_TEXELS = 0,
    GX_PERF1_TX_IDLE = 1,
    GX_PERF1_TX_REGS = 2,
    GX_PERF1_TX_MEMSTALL = 3,
    GX_PERF1_TC_CHECK1_2 = 4,
    GX_PERF1_TC_CHECK3_4 = 5,
    GX_PERF1_TC_CHECK5_6 = 6,
    GX_PERF1_TC_CHECK7_8 = 7,
    GX_PERF1_TC_MISS = 8,
    GX_PERF1_VC_ELEMQ_FULL = 9,
    GX_PERF1_VC_MISSQ_FULL = 10,
    GX_PERF1_VC_MEMREQ_FULL = 11,
    GX_PERF1_VC_STATUS7 = 12,
    GX_PERF1_VC_MISSREP_FULL = 13,
    GX_PERF1_VC_STREAMBUF_LOW = 14,
    GX_PERF1_VC_ALL_STALLS = 15,
    GX_PERF1_VERTICES = 16,
    GX_PERF1_FIFO_REQ = 17,
    GX_PERF1_CALL_REQ = 18,
    GX_PERF1_VC_MISS_REQ = 19,
    GX_PERF1_CP_ALL_REQ = 20,
    GX_PERF1_CLOCKS = 21,
    GX_PERF1_NONE = 22,
};
// total size: 0x5B0
struct __GXData_struct {
    // Members
    unsigned short vNumNot; // offset 0x0, size 0x2
    unsigned short bpSentNot; // offset 0x2, size 0x2
    unsigned short vNum; // offset 0x4, size 0x2
    unsigned short vLim; // offset 0x6, size 0x2
    unsigned long cpEnable; // offset 0x8, size 0x4
    unsigned long cpStatus; // offset 0xC, size 0x4
    unsigned long cpClr; // offset 0x10, size 0x4
    unsigned long vcdLo; // offset 0x14, size 0x4
    unsigned long vcdHi; // offset 0x18, size 0x4
    unsigned long vatA[8]; // offset 0x1C, size 0x20
    unsigned long vatB[8]; // offset 0x3C, size 0x20
    unsigned long vatC[8]; // offset 0x5C, size 0x20
    unsigned long lpSize; // offset 0x7C, size 0x4
    unsigned long matIdxA; // offset 0x80, size 0x4
    unsigned long matIdxB; // offset 0x84, size 0x4
    unsigned long indexBase[4]; // offset 0x88, size 0x10
    unsigned long indexStride[4]; // offset 0x98, size 0x10
    unsigned long ambColor[2]; // offset 0xA8, size 0x8
    unsigned long matColor[2]; // offset 0xB0, size 0x8
    unsigned long suTs0[8]; // offset 0xB8, size 0x20
    unsigned long suTs1[8]; // offset 0xD8, size 0x20
    unsigned long suScis0; // offset 0xF8, size 0x4
    unsigned long suScis1; // offset 0xFC, size 0x4
    unsigned long tref[8]; // offset 0x100, size 0x20
    unsigned long iref; // offset 0x120, size 0x4
    unsigned long bpMask; // offset 0x124, size 0x4
    unsigned long IndTexScale0; // offset 0x128, size 0x4
    unsigned long IndTexScale1; // offset 0x12C, size 0x4
    unsigned long tevc[16]; // offset 0x130, size 0x40
    unsigned long teva[16]; // offset 0x170, size 0x40
    unsigned long tevKsel[8]; // offset 0x1B0, size 0x20
    unsigned long cmode0; // offset 0x1D0, size 0x4
    unsigned long cmode1; // offset 0x1D4, size 0x4
    unsigned long zmode; // offset 0x1D8, size 0x4
    unsigned long peCtrl; // offset 0x1DC, size 0x4
    unsigned long cpDispSrc; // offset 0x1E0, size 0x4
    unsigned long cpDispSize; // offset 0x1E4, size 0x4
    unsigned long cpDispStride; // offset 0x1E8, size 0x4
    unsigned long cpDisp; // offset 0x1EC, size 0x4
    unsigned long cpTexSrc; // offset 0x1F0, size 0x4
    unsigned long cpTexSize; // offset 0x1F4, size 0x4
    unsigned long cpTexStride; // offset 0x1F8, size 0x4
    unsigned long cpTex; // offset 0x1FC, size 0x4
    unsigned char cpTexZ; // offset 0x200, size 0x1
    unsigned long genMode; // offset 0x204, size 0x4
    struct _GXTexRegion TexRegions0[8]; // offset 0x208, size 0x80
    struct _GXTexRegion TexRegions1[8]; // offset 0x288, size 0x80
    struct _GXTexRegion TexRegions2[8]; // offset 0x308, size 0x80
    struct _GXTlutRegion TlutRegions[20]; // offset 0x388, size 0x140
    struct _GXTexRegion * (* texRegionCallback)(struct _GXTexObj *, enum _GXTexMapID); // offset 0x4C8, size 0x4
    struct _GXTlutRegion * (* tlutRegionCallback)(unsigned long); // offset 0x4CC, size 0x4
    enum _GXAttrType nrmType; // offset 0x4D0, size 0x4
    unsigned char hasNrms; // offset 0x4D4, size 0x1
    unsigned char hasBiNrms; // offset 0x4D5, size 0x1
    unsigned long projType; // offset 0x4D8, size 0x4
    float projMtx[6]; // offset 0x4DC, size 0x18
    float vpLeft; // offset 0x4F4, size 0x4
    float vpTop; // offset 0x4F8, size 0x4
    float vpWd; // offset 0x4FC, size 0x4
    float vpHt; // offset 0x500, size 0x4
    float vpNearz; // offset 0x504, size 0x4
    float vpFarz; // offset 0x508, size 0x4
    float zOffset; // offset 0x50C, size 0x4
    float zScale; // offset 0x510, size 0x4
    unsigned long tImage0[8]; // offset 0x514, size 0x20
    unsigned long tMode0[8]; // offset 0x534, size 0x20
    unsigned long texmapId[16]; // offset 0x554, size 0x40
    unsigned long tcsManEnab; // offset 0x594, size 0x4
    unsigned long tevTcEnab; // offset 0x598, size 0x4
    enum _GXPerf0 perf0; // offset 0x59C, size 0x4
    enum _GXPerf1 perf1; // offset 0x5A0, size 0x4
    unsigned long perfSel; // offset 0x5A4, size 0x4
    unsigned char inDispList; // offset 0x5A8, size 0x1
    unsigned char dlSaveContext; // offset 0x5A9, size 0x1
    unsigned char abtWaitPECopy; // offset 0x5AA, size 0x1
    unsigned char dirtyVAT; // offset 0x5AB, size 0x1
    unsigned long dirtyState; // offset 0x5AC, size 0x4
};
struct __GXData_struct * const __GXData; // size: 0x4, address: 0x80D71BE0
enum /* @enum$5GXTev_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
};
// total size: 0x13F8
struct __GXVerifyData {
    // Members
    void (* cb)(enum /* @enum$5GXTev_c */ {
        GX_WARN_NONE = 0,
        GX_WARN_SEVERE = 1,
        GX_WARN_MEDIUM = 2,
        GX_WARN_ALL = 3,
    }, unsigned long, char *); // offset 0x0, size 0x4
    enum /* @enum$5GXTev_c */ {
        GX_WARN_NONE = 0,
        GX_WARN_SEVERE = 1,
        GX_WARN_MEDIUM = 2,
        GX_WARN_ALL = 3,
    } verifyLevel; // offset 0x4, size 0x4
    unsigned long xfRegs[80]; // offset 0x8, size 0x140
    unsigned long xfMtx[256]; // offset 0x148, size 0x400
    unsigned long xfNrm[96]; // offset 0x548, size 0x180
    unsigned long xfDMtx[256]; // offset 0x6C8, size 0x400
    unsigned long xfLight[128]; // offset 0xAC8, size 0x200
    unsigned long rasRegs[256]; // offset 0xCC8, size 0x400
    unsigned char xfRegsDirty[80]; // offset 0x10C8, size 0x50
    unsigned char xfMtxDirty[256]; // offset 0x1118, size 0x100
    unsigned char xfNrmDirty[96]; // offset 0x1218, size 0x60
    unsigned char xfDMtxDirty[256]; // offset 0x1278, size 0x100
    unsigned char xfLightDirty[128]; // offset 0x1378, size 0x80
};
struct __GXVerifyData * __gxVerif; // size: 0x4, address: 0x80D680E8
enum _GXTevStageID {
    GX_TEVSTAGE0 = 0,
    GX_TEVSTAGE1 = 1,
    GX_TEVSTAGE2 = 2,
    GX_TEVSTAGE3 = 3,
    GX_TEVSTAGE4 = 4,
    GX_TEVSTAGE5 = 5,
    GX_TEVSTAGE6 = 6,
    GX_TEVSTAGE7 = 7,
    GX_TEVSTAGE8 = 8,
    GX_TEVSTAGE9 = 9,
    GX_TEVSTAGE10 = 10,
    GX_TEVSTAGE11 = 11,
    GX_TEVSTAGE12 = 12,
    GX_TEVSTAGE13 = 13,
    GX_TEVSTAGE14 = 14,
    GX_TEVSTAGE15 = 15,
    GX_MAX_TEVSTAGE = 16,
};
enum _GXTevMode {
    GX_MODULATE = 0,
    GX_DECAL = 1,
    GX_BLEND = 2,
    GX_REPLACE = 3,
    GX_PASSCLR = 4,
};
// Range: 0x803B8E40 -> 0x803B8FB0
void GXSetTevOp(enum _GXTevStageID id /* r29 */, enum _GXTevMode mode /* r28 */) {
    // Local variables
    unsigned long * ctmp; // r27
    unsigned long * atmp; // r26
    unsigned long tevReg; // r31

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> static struct [anonymous] TEVAOpTableST1[5];
    // -> static struct [anonymous] TEVCOpTableST1[5];
    // -> static struct [anonymous] TEVAOpTableST0[5];
    // -> static struct [anonymous] TEVCOpTableST0[5];
    // -> unsigned char __GXinBegin;
}

enum _GXTevColorArg {
    GX_CC_CPREV = 0,
    GX_CC_APREV = 1,
    GX_CC_C0 = 2,
    GX_CC_A0 = 3,
    GX_CC_C1 = 4,
    GX_CC_A1 = 5,
    GX_CC_C2 = 6,
    GX_CC_A2 = 7,
    GX_CC_TEXC = 8,
    GX_CC_TEXA = 9,
    GX_CC_RASC = 10,
    GX_CC_RASA = 11,
    GX_CC_ONE = 12,
    GX_CC_HALF = 13,
    GX_CC_KONST = 14,
    GX_CC_ZERO = 15,
    GX_CC_TEXRRR = 16,
    GX_CC_TEXGGG = 17,
    GX_CC_TEXBBB = 18,
    GX_CC_QUARTER = 14,
};
// Range: 0x803B8FB0 -> 0x803B916C
void GXSetTevColorIn(enum _GXTevStageID stage /* r25 */, enum _GXTevColorArg a /* r26 */, enum _GXTevColorArg b /* r27 */, enum _GXTevColorArg c /* r28 */, enum _GXTevColorArg d /* r29 */) {
    // Local variables
    unsigned long tevReg; // r31

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

enum _GXTevAlphaArg {
    GX_CA_APREV = 0,
    GX_CA_A0 = 1,
    GX_CA_A1 = 2,
    GX_CA_A2 = 3,
    GX_CA_TEXA = 4,
    GX_CA_RASA = 5,
    GX_CA_KONST = 6,
    GX_CA_ZERO = 7,
    GX_CA_ONE = 6,
};
// Range: 0x803B916C -> 0x803B9328
void GXSetTevAlphaIn(enum _GXTevStageID stage /* r25 */, enum _GXTevAlphaArg a /* r26 */, enum _GXTevAlphaArg b /* r27 */, enum _GXTevAlphaArg c /* r28 */, enum _GXTevAlphaArg d /* r29 */) {
    // Local variables
    unsigned long tevReg; // r31

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

enum _GXTevOp {
    GX_TEV_ADD = 0,
    GX_TEV_SUB = 1,
    GX_TEV_COMP_R8_GT = 8,
    GX_TEV_COMP_R8_EQ = 9,
    GX_TEV_COMP_GR16_GT = 10,
    GX_TEV_COMP_GR16_EQ = 11,
    GX_TEV_COMP_BGR24_GT = 12,
    GX_TEV_COMP_BGR24_EQ = 13,
    GX_TEV_COMP_RGB8_GT = 14,
    GX_TEV_COMP_RGB8_EQ = 15,
    GX_TEV_COMP_A8_GT = 14,
    GX_TEV_COMP_A8_EQ = 15,
};
enum _GXTevBias {
    GX_TB_ZERO = 0,
    GX_TB_ADDHALF = 1,
    GX_TB_SUBHALF = 2,
    GX_MAX_TEVBIAS = 3,
};
enum _GXTevScale {
    GX_CS_SCALE_1 = 0,
    GX_CS_SCALE_2 = 1,
    GX_CS_SCALE_4 = 2,
    GX_CS_DIVIDE_2 = 3,
    GX_MAX_TEVSCALE = 4,
};
enum _GXTevRegID {
    GX_TEVPREV = 0,
    GX_TEVREG0 = 1,
    GX_TEVREG1 = 2,
    GX_TEVREG2 = 3,
    GX_MAX_TEVREG = 4,
};
// Range: 0x803B9328 -> 0x803B94D4
void GXSetTevColorOp(enum _GXTevStageID stage /* r28 */, enum _GXTevOp op /* r29 */, enum _GXTevBias bias /* r24 */, enum _GXTevScale scale /* r25 */, unsigned char clamp /* r26 */, enum _GXTevRegID out_reg /* r27 */) {
    // Local variables
    unsigned long tevReg; // r31

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

// Range: 0x803B94D4 -> 0x803B9680
void GXSetTevAlphaOp(enum _GXTevStageID stage /* r28 */, enum _GXTevOp op /* r29 */, enum _GXTevBias bias /* r24 */, enum _GXTevScale scale /* r25 */, unsigned char clamp /* r26 */, enum _GXTevRegID out_reg /* r27 */) {
    // Local variables
    unsigned long tevReg; // r31

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

// total size: 0x4
struct _GXColor {
    // Members
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
// Range: 0x803B9680 -> 0x803B9820
void GXSetTevColor(enum _GXTevRegID id /* r27 */, struct _GXColor & color /* r1+0xC */) {
    // Local variables
    unsigned long rgba; // r30
    unsigned long regRA; // r29
    unsigned long regBG; // r31

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

// total size: 0x8
struct _GXColorS10 {
    // Members
    signed short r; // offset 0x0, size 0x2
    signed short g; // offset 0x2, size 0x2
    signed short b; // offset 0x4, size 0x2
    signed short a; // offset 0x6, size 0x2
};
// Range: 0x803B9820 -> 0x803B9A70
void GXSetTevColorS10(enum _GXTevRegID id /* r25 */, struct _GXColorS10 & color /* r30 */) {
    // Local variables
    unsigned long sRG; // r27
    unsigned long sBA; // r26
    unsigned long regRA; // r28
    unsigned long regBG; // r31

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

enum _GXTevKColorID {
    GX_KCOLOR0 = 0,
    GX_KCOLOR1 = 1,
    GX_KCOLOR2 = 2,
    GX_KCOLOR3 = 3,
    GX_MAX_KCOLOR = 4,
};
// Range: 0x803B9A70 -> 0x803B9BD8
void GXSetTevKColor(enum _GXTevKColorID id /* r27 */, struct _GXColor & color /* r1+0xC */) {
    // Local variables
    unsigned long rgba; // r29
    unsigned long regRA; // r31
    unsigned long regBG; // r30

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

enum _GXTevKColorSel {
    GX_TEV_KCSEL_8_8 = 0,
    GX_TEV_KCSEL_7_8 = 1,
    GX_TEV_KCSEL_6_8 = 2,
    GX_TEV_KCSEL_5_8 = 3,
    GX_TEV_KCSEL_4_8 = 4,
    GX_TEV_KCSEL_3_8 = 5,
    GX_TEV_KCSEL_2_8 = 6,
    GX_TEV_KCSEL_1_8 = 7,
    GX_TEV_KCSEL_1 = 0,
    GX_TEV_KCSEL_3_4 = 2,
    GX_TEV_KCSEL_1_2 = 4,
    GX_TEV_KCSEL_1_4 = 6,
    GX_TEV_KCSEL_K0 = 12,
    GX_TEV_KCSEL_K1 = 13,
    GX_TEV_KCSEL_K2 = 14,
    GX_TEV_KCSEL_K3 = 15,
    GX_TEV_KCSEL_K0_R = 16,
    GX_TEV_KCSEL_K1_R = 17,
    GX_TEV_KCSEL_K2_R = 18,
    GX_TEV_KCSEL_K3_R = 19,
    GX_TEV_KCSEL_K0_G = 20,
    GX_TEV_KCSEL_K1_G = 21,
    GX_TEV_KCSEL_K2_G = 22,
    GX_TEV_KCSEL_K3_G = 23,
    GX_TEV_KCSEL_K0_B = 24,
    GX_TEV_KCSEL_K1_B = 25,
    GX_TEV_KCSEL_K2_B = 26,
    GX_TEV_KCSEL_K3_B = 27,
    GX_TEV_KCSEL_K0_A = 28,
    GX_TEV_KCSEL_K1_A = 29,
    GX_TEV_KCSEL_K2_A = 30,
    GX_TEV_KCSEL_K3_A = 31,
};
// Range: 0x803B9BD8 -> 0x803B9CF4
void GXSetTevKColorSel(enum _GXTevStageID stage /* r28 */, enum _GXTevKColorSel sel /* r29 */) {
    // Local variables
    unsigned long * Kreg; // r31

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

enum _GXTevKAlphaSel {
    GX_TEV_KASEL_8_8 = 0,
    GX_TEV_KASEL_7_8 = 1,
    GX_TEV_KASEL_6_8 = 2,
    GX_TEV_KASEL_5_8 = 3,
    GX_TEV_KASEL_4_8 = 4,
    GX_TEV_KASEL_3_8 = 5,
    GX_TEV_KASEL_2_8 = 6,
    GX_TEV_KASEL_1_8 = 7,
    GX_TEV_KASEL_1 = 0,
    GX_TEV_KASEL_3_4 = 2,
    GX_TEV_KASEL_1_2 = 4,
    GX_TEV_KASEL_1_4 = 6,
    GX_TEV_KASEL_K0_R = 16,
    GX_TEV_KASEL_K1_R = 17,
    GX_TEV_KASEL_K2_R = 18,
    GX_TEV_KASEL_K3_R = 19,
    GX_TEV_KASEL_K0_G = 20,
    GX_TEV_KASEL_K1_G = 21,
    GX_TEV_KASEL_K2_G = 22,
    GX_TEV_KASEL_K3_G = 23,
    GX_TEV_KASEL_K0_B = 24,
    GX_TEV_KASEL_K1_B = 25,
    GX_TEV_KASEL_K2_B = 26,
    GX_TEV_KASEL_K3_B = 27,
    GX_TEV_KASEL_K0_A = 28,
    GX_TEV_KASEL_K1_A = 29,
    GX_TEV_KASEL_K2_A = 30,
    GX_TEV_KASEL_K3_A = 31,
};
// Range: 0x803B9CF4 -> 0x803B9E10
void GXSetTevKAlphaSel(enum _GXTevStageID stage /* r28 */, enum _GXTevKAlphaSel sel /* r29 */) {
    // Local variables
    unsigned long * Kreg; // r31

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

enum _GXTevSwapSel {
    GX_TEV_SWAP0 = 0,
    GX_TEV_SWAP1 = 1,
    GX_TEV_SWAP2 = 2,
    GX_TEV_SWAP3 = 3,
    GX_MAX_TEVSWAP = 4,
};
// Range: 0x803B9E10 -> 0x803B9F20
void GXSetTevSwapMode(enum _GXTevStageID stage /* r27 */, enum _GXTevSwapSel ras_sel /* r28 */, enum _GXTevSwapSel tex_sel /* r29 */) {
    // Local variables
    unsigned long * pTevReg; // r31

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

enum _GXTevColorChan {
    GX_CH_RED = 0,
    GX_CH_GREEN = 1,
    GX_CH_BLUE = 2,
    GX_CH_ALPHA = 3,
};
// Range: 0x803B9F20 -> 0x803BA0D0
void GXSetTevSwapModeTable(enum _GXTevSwapSel table /* r29 */, enum _GXTevColorChan red /* r25 */, enum _GXTevColorChan green /* r26 */, enum _GXTevColorChan blue /* r27 */, enum _GXTevColorChan alpha /* r28 */) {
    // Local variables
    unsigned long * Kreg; // r31

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

enum _GXCompare {
    GX_NEVER = 0,
    GX_LESS = 1,
    GX_EQUAL = 2,
    GX_LEQUAL = 3,
    GX_GREATER = 4,
    GX_NEQUAL = 5,
    GX_GEQUAL = 6,
    GX_ALWAYS = 7,
};
enum _GXAlphaOp {
    GX_AOP_AND = 0,
    GX_AOP_OR = 1,
    GX_AOP_XOR = 2,
    GX_AOP_XNOR = 3,
    GX_MAX_ALPHAOP = 4,
};
// Range: 0x803BA0D0 -> 0x803BA20C
void GXSetAlphaCompare(enum _GXCompare comp0 /* r25 */, unsigned char ref0 /* r26 */, enum _GXAlphaOp op /* r27 */, enum _GXCompare comp1 /* r28 */, unsigned char ref1 /* r29 */) {
    // Local variables
    unsigned long reg; // r31

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

enum _GXZTexOp {
    GX_ZT_DISABLE = 0,
    GX_ZT_ADD = 1,
    GX_ZT_REPLACE = 2,
    GX_MAX_ZTEXOP = 3,
};
enum _GXTexFmt {
    GX_TF_I4 = 0,
    GX_TF_I8 = 1,
    GX_TF_IA4 = 2,
    GX_TF_IA8 = 3,
    GX_TF_RGB565 = 4,
    GX_TF_RGB5A3 = 5,
    GX_TF_RGBA8 = 6,
    GX_TF_CMPR = 14,
    GX_CTF_R4 = 32,
    GX_CTF_RA4 = 34,
    GX_CTF_RA8 = 35,
    GX_CTF_YUVA8 = 38,
    GX_CTF_A8 = 39,
    GX_CTF_R8 = 40,
    GX_CTF_G8 = 41,
    GX_CTF_B8 = 42,
    GX_CTF_RG8 = 43,
    GX_CTF_GB8 = 44,
    GX_TF_Z8 = 17,
    GX_TF_Z16 = 19,
    GX_TF_Z24X8 = 22,
    GX_CTF_Z4 = 48,
    GX_CTF_Z8M = 57,
    GX_CTF_Z8L = 58,
    GX_CTF_Z16L = 60,
    GX_TF_A8 = 39,
};
// Range: 0x803BA20C -> 0x803BA388
void GXSetZTexture(enum _GXZTexOp op /* r26 */, enum _GXTexFmt fmt /* r1+0xC */, unsigned long bias /* r27 */) {
    // Local variables
    unsigned long zenv0; // r30
    unsigned long zenv1; // r31
    unsigned long type; // r29

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

static int c2r$303[9]; // size: 0x24, address: 0x80542724
enum _GXTexCoordID {
    GX_TEXCOORD0 = 0,
    GX_TEXCOORD1 = 1,
    GX_TEXCOORD2 = 2,
    GX_TEXCOORD3 = 3,
    GX_TEXCOORD4 = 4,
    GX_TEXCOORD5 = 5,
    GX_TEXCOORD6 = 6,
    GX_TEXCOORD7 = 7,
    GX_MAX_TEXCOORD = 8,
    GX_TEXCOORD_NULL = 255,
};
enum _GXTexMapID {
    GX_TEXMAP0 = 0,
    GX_TEXMAP1 = 1,
    GX_TEXMAP2 = 2,
    GX_TEXMAP3 = 3,
    GX_TEXMAP4 = 4,
    GX_TEXMAP5 = 5,
    GX_TEXMAP6 = 6,
    GX_TEXMAP7 = 7,
    GX_MAX_TEXMAP = 8,
    GX_TEXMAP_NULL = 255,
    GX_TEX_DISABLE = 256,
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
// Range: 0x803BA388 -> 0x803BA75C
void GXSetTevOrder(enum _GXTevStageID stage /* r25 */, enum _GXTexCoordID coord /* r24 */, enum _GXTexMapID map /* r29 */, enum _GXChannelID color /* r28 */) {
    // Local variables
    unsigned long * ptref; // r31
    unsigned long tmap; // r27
    unsigned long tcoord; // r26

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> static int c2r$303[9];
    // -> unsigned char __GXinBegin;
}

// Range: 0x803BA75C -> 0x803BA824
void GXSetNumTevStages(unsigned char nStages /* r31 */) {
    // References
    // -> struct __GXData_struct * const __GXData;
    // -> unsigned char __GXinBegin;
}


