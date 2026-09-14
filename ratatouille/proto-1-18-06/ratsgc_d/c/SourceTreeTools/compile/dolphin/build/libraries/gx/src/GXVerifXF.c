/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\gx\src\GXVerifXF.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803BF628 -> 0x803C2D2C
*/
static unsigned char internalDebug; // size: 0x1, address: 0x80D6BFB8
static unsigned long DumpCount; // size: 0x4, address: 0x80D6BFBC
static unsigned long numRegularTextures; // size: 0x4, address: 0x80D6BFC0
static unsigned long numBumpmapTextures; // size: 0x4, address: 0x80D6BFC4
static unsigned long numColor0Textures; // size: 0x4, address: 0x80D6BFC8
static unsigned long numColor1Textures; // size: 0x4, address: 0x80D6BFCC
static unsigned long numColorTextures; // size: 0x4, address: 0x80D6BFD0
static enum _GXAttr TextureEnums[8]; // size: 0x20, address: 0x80545AD8
static enum _GXAttr MtxIdxEnums[9]; // size: 0x24, address: 0x80545AF8
static char lightRegisterNames[13][256]; // size: 0xD00, address: 0x80545B1C
enum /* @enum$5GXVerifXF_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
};
// total size: 0x13F8
struct __GXVerifyData {
    // Members
    void (* cb)(enum /* @enum$5GXVerifXF_c */ {
        GX_WARN_NONE = 0,
        GX_WARN_SEVERE = 1,
        GX_WARN_MEDIUM = 2,
        GX_WARN_ALL = 3,
    }, unsigned long, char *); // offset 0x0, size 0x4
    enum /* @enum$5GXVerifXF_c */ {
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
enum /* @enum$5GXVerifXF_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
} __gxvWarnLev[]; // size: 0x0, address: 0x8054587C
char __gxvDummyStr[]; // size: 0x0, address: 0x80D59530
char * __gxvWarnings[]; // size: 0x0, address: 0x80545688
// Range: 0x803BF628 -> 0x803BF778
static void CountTextureTypes() {
    // Local variables
    unsigned long i; // r30
    unsigned long texgen_type; // r31

    // References
    // -> static unsigned long numColor1Textures;
    // -> static unsigned long numColor0Textures;
    // -> static unsigned long numColorTextures;
    // -> struct __GXVerifyData * __gxVerif;
    // -> char __gxvDummyStr[];
    // -> enum /* @enum$5GXVerifXF_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
} __gxvWarnLev[];
    // -> char * __gxvWarnings[];
    // -> static unsigned long numBumpmapTextures;
    // -> static unsigned long numRegularTextures;
}

// Range: 0x803BF778 -> 0x803BF798
static void InitializeXFVerifyData() {}

// Range: 0x803BF798 -> 0x803BF840
static void CheckDirty(unsigned long index /* r31 */, const char * name /* r1+0xC */) {
    // References
    // -> char __gxvDummyStr[];
    // -> enum /* @enum$5GXVerifXF_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
} __gxvWarnLev[];
    // -> struct __GXVerifyData * __gxVerif;
    // -> char * __gxvWarnings[];
}

// Range: 0x803BF840 -> 0x803BF8E8
static void CheckClean(unsigned long index /* r31 */, const char * name /* r1+0xC */) {
    // References
    // -> char __gxvDummyStr[];
    // -> enum /* @enum$5GXVerifXF_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
} __gxvWarnLev[];
    // -> struct __GXVerifyData * __gxVerif;
    // -> char * __gxvWarnings[];
}

// Range: 0x803BF8E8 -> 0x803BF984
static void CheckCTGColors() {
    // References
    // -> char __gxvDummyStr[];
    // -> enum /* @enum$5GXVerifXF_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
} __gxvWarnLev[];
    // -> struct __GXVerifyData * __gxVerif;
    // -> char * __gxvWarnings[];
}

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
enum _GXAttr {
    GX_VA_PNMTXIDX = 0,
    GX_VA_TEX0MTXIDX = 1,
    GX_VA_TEX1MTXIDX = 2,
    GX_VA_TEX2MTXIDX = 3,
    GX_VA_TEX3MTXIDX = 4,
    GX_VA_TEX4MTXIDX = 5,
    GX_VA_TEX5MTXIDX = 6,
    GX_VA_TEX6MTXIDX = 7,
    GX_VA_TEX7MTXIDX = 8,
    GX_VA_POS = 9,
    GX_VA_NRM = 10,
    GX_VA_CLR0 = 11,
    GX_VA_CLR1 = 12,
    GX_VA_TEX0 = 13,
    GX_VA_TEX1 = 14,
    GX_VA_TEX2 = 15,
    GX_VA_TEX3 = 16,
    GX_VA_TEX4 = 17,
    GX_VA_TEX5 = 18,
    GX_VA_TEX6 = 19,
    GX_VA_TEX7 = 20,
    GX_POS_MTX_ARRAY = 21,
    GX_NRM_MTX_ARRAY = 22,
    GX_TEX_MTX_ARRAY = 23,
    GX_LIGHT_ARRAY = 24,
    GX_VA_NBT = 25,
    GX_VA_MAX_ATTR = 26,
    GX_VA_NULL = 255,
};
// Range: 0x803BF984 -> 0x803BFCF4
static unsigned char __GXVertexPacketHas(enum _GXAttr attr /* r3 */) {
    // References
    // -> struct __GXData_struct * const __GXData;
}

// Range: 0x803BFCF4 -> 0x803BFF34
static void CheckVertexPacket() {
    // Local variables
    unsigned long numHostTextures; // r29
    unsigned long numHostTexAbsent; // r30
    unsigned long i; // r31
    unsigned long numMatrixIndices; // r28

    // References
    // -> char * __gxvWarnings[];
    // -> enum /* @enum$5GXVerifXF_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
} __gxvWarnLev[];
    // -> struct __GXVerifyData * __gxVerif;
    // -> static enum _GXAttr MtxIdxEnums[9];
    // -> static enum _GXAttr TextureEnums[8];
}

// Range: 0x803BFF34 -> 0x803C0358
static void CheckSourceRows() {
    // Local variables
    unsigned long i; // r31

    // References
    // -> static unsigned long numRegularTextures;
    // -> char __gxvDummyStr[];
    // -> enum /* @enum$5GXVerifXF_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
} __gxvWarnLev[];
    // -> struct __GXVerifyData * __gxVerif;
    // -> char * __gxvWarnings[];
    // -> static enum _GXAttr TextureEnums[8];
}

// Range: 0x803C0358 -> 0x803C0538
static void CheckTextureOrder() {
    // Local variables
    unsigned char done; // r30
    unsigned long count; // r31

    // References
    // -> char * __gxvWarnings[];
    // -> enum /* @enum$5GXVerifXF_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
} __gxvWarnLev[];
    // -> struct __GXVerifyData * __gxVerif;
}

enum /* @enum$6GXVerifXF_c */ {
    GXWARN_INVALID_VTX_FMT = 0,
    GXWARN_TEX_SIZE_INIT = 1,
    GXWARN_SCISSOR_RECT_LEFT = 2,
    GXWARN_SCISSOR_RECT_TOP = 3,
    GXWARN_SCISSOR_RECT_RIGHT = 4,
    GXWARN_SCISSOR_RECT_BOT = 5,
    GXWARN_SAMPLE_VALUE = 6,
    GXWARN_BUMP_CMD = 7,
    GXWARN_INVALID_INDIRECT = 8,
    GXWARN_INDIRECT_MTX = 9,
    GXWARN_IND_TEX_NO_INIT = 10,
    GXWARN_IND_TEX_NO_SCALE = 11,
    GXWARN_IND_TEX_BUMP = 12,
    GXWARN_BUMP_ACCUMULATION = 13,
    GXWARN_BUMP_ALPHA_EN = 14,
    GXWARN_IND_DIR_MASK = 15,
    GXWARN_TEV_TEX_REF = 16,
    GXWARN_TEV_INV_TEX_COORD = 17,
    GXWARN_IND_DIR_BOTH = 18,
    GXWARN_TEX_CONFIG = 19,
    GXWARN_TEX_BASE = 20,
    GXWARN_TLUT_CONFIG = 21,
    GXWARN_TEX_POW2 = 22,
    GXWARN_TEX_CLAMP = 23,
    GXWARN_TEX_MIN_FILT = 24,
    GXWARN_MIN_LOD = 25,
    GXWARN_MAX_LOD = 26,
    GXWARN_DIAG_LOD = 27,
    GXWARN_TEX_ANISO = 28,
    GXWARN_TEX_FIELD = 29,
    GXWARN_TEX_RND_FP = 30,
    GXWARN_RND_CLR_INDX = 31,
    GXWARN_TEV_ENV = 32,
    GXWARN_TEV_INV_CHAN = 33,
    GXWARN_TEV_NULL_TEX = 34,
    GXWARN_TEV_NULL_TEX_A = 35,
    GXWARN_TEV_DIRTY_REG = 36,
    GXWARN_TEV_DIRTY_REG_A = 37,
    GXWARN_TEV_CLR_CLAMP = 38,
    GXWARN_TEV_A_CLAMP = 39,
    GXWARN_ZTEX_OFFSET = 40,
    GXWARN_ZTEX_INVALID = 41,
    GXWARN_TEV_LAST_CLR = 42,
    GXWARN_TEV_LAST_A = 43,
    GXWARN_TEV_LAST_CLR_WRAP = 44,
    GXWARN_TEV_LAST_A_WRAP = 45,
    GXWARN_Z_BEFORE_T_A = 46,
    GXWARN_BLEND_LOGICOP = 47,
    GXWARN_DITHER_MODE = 48,
    GXWARN_MULTISAMP0 = 49,
    GXWARN_MULTISAMP1 = 50,
    GXWARN_SAMP_ORDER = 51,
    GXWARN_INVALID_TG_TYPE = 52,
    GXWARN_XF_CTRL_UNINIT = 53,
    GXWARN_XF_CTRL_INIT = 54,
    GXWARN_INV_COLOR_TG_COMB = 55,
    GXWARN_XF_NO_CLR_TEX = 56,
    GXWARN_VTX_NO_GEOM = 57,
    GXWARN_VAT_MISMATCH = 58,
    GXWARN_VAT_NRM_TYPE = 59,
    GXWARN_VAT_NRM_FRAC = 60,
    GXWARN_VAT_F32_FRAC = 61,
    GXWARN_VAT_CLR_FRAC = 62,
    GXWARN_INV_IVS_CLR = 63,
    GXWARN_NRM_XF0_CP1 = 64,
    GXWARN_NRM_XF0_CP3 = 65,
    GXWARN_NRM_XF1_CP0 = 66,
    GXWARN_NRM_XF1_CP3 = 67,
    GXWARN_NRM_XF3_CP1 = 68,
    GXWARN_VCD_FMT_UNSUP = 69,
    GXWARN_VCD_CLR_ORDER = 70,
    GXWARN_VCD_TEX_ORDER = 71,
    GXWARN_TEX_SRC_NPOS = 72,
    GXWARN_TEX_SRC_NNRM = 73,
    GXWARN_TEX_SRC_NCLR0 = 74,
    GXWARN_TEX_SRC_NCLR1 = 75,
    GXWARN_TEX_SRC_NNBT = 76,
    GXWARN_TEX_SRC_NTEX = 77,
    GXWARN_INV_TEX_SRC = 78,
    GXWARN_INV_TG_ORDER = 79,
    GXWARN_BM_INV_MTX_NDX = 80,
    GXWARN_BM_INV_TEX = 81,
    GXWARN_BM_INV_LIT_POS = 82,
    GXWARN_BM_NO_NBT = 83,
    GXWARN_INV_TEX_NUM = 84,
    GXWARN_VIEWPORT_TOP = 85,
    GXWARN_VIEWPORT_BOTTOM = 86,
    GXWARN_VIEWPORT_LEFT = 87,
    GXWARN_VIEWPORT_RIGHT = 88,
    GXWARN_CLR_INV_SPEC = 89,
    GXWARN_CLR_NO_NRM = 90,
    GXWARN_CLR_INV_MTX_NDX = 91,
    GXWARN_VAL_INFINITY = 92,
    GXWARN_VAL_NAN = 93,
    GXWARN_VAL_SMALL = 94,
    GXWARN_VAL_LARGE = 95,
    GXWARN_MTX1_UNINIT = 96,
    GXWARN_GM_UNINIT = 97,
    GXWARN_TEX_XFN_SUM = 98,
    GXWARN_CLR_XFN_SUM = 99,
    GXWARN_INV_NUM_ANY_TEX = 100,
    GXWARN_INV_NUM_REG_TEX = 101,
    GXWARN_INV_NUM_BM_TEX = 102,
    GXWARN_INV_NUM_CLR_TEX = 103,
    GXWARN_INV_CLR_TEX = 104,
    GXWARN_DUP_CLR_TEX = 105,
    GXWARN_BM_INV_MTX_VAL = 106,
    GXWARN_TEX_INV_MTX_VAL = 107,
    GXWARN_LIT_INV_REG = 108,
    GXWARN_CLR_INV_MTX_VAL = 109,
    GXWARN_INV_MTX_VAL = 110,
    GXWARN_ADDR_UNINIT = 111,
    GXWARN_REG_UNINIT = 112,
    GXWARN_DL_INV_CMD = 113,
    GXWARN_DL_NESTED = 114,
    GXWARN_CLR_XF0_CP1 = 115,
    GXWARN_CLR_XF1_CP0 = 116,
    GXWARN_CLR_XF1_CP2 = 117,
    GXWARN_CLR_XF2_CPN1 = 118,
    GXWARN_CLR_XF2_CPN2 = 119,
    GXWARN_INV_NUM_COLORS = 120,
    GXWARN_INV_TG_SRC = 121,
    GXWARN_CLR_ADDR_UNINIT = 122,
    GXWARN_CLR_MAT_UNINIT = 123,
    GXWARN_CLR_AMB_UNINIT = 124,
    GXWARN_MAX = 125,
};
// Range: 0x803C0538 -> 0x803C061C
static void CheckRAM(unsigned char Normal /* r1+0x8 */, unsigned long StartingAddress /* r27 */, unsigned long Count /* r1+0x10 */, enum /* @enum$6GXVerifXF_c */ {
    GXWARN_INVALID_VTX_FMT = 0,
    GXWARN_TEX_SIZE_INIT = 1,
    GXWARN_SCISSOR_RECT_LEFT = 2,
    GXWARN_SCISSOR_RECT_TOP = 3,
    GXWARN_SCISSOR_RECT_RIGHT = 4,
    GXWARN_SCISSOR_RECT_BOT = 5,
    GXWARN_SAMPLE_VALUE = 6,
    GXWARN_BUMP_CMD = 7,
    GXWARN_INVALID_INDIRECT = 8,
    GXWARN_INDIRECT_MTX = 9,
    GXWARN_IND_TEX_NO_INIT = 10,
    GXWARN_IND_TEX_NO_SCALE = 11,
    GXWARN_IND_TEX_BUMP = 12,
    GXWARN_BUMP_ACCUMULATION = 13,
    GXWARN_BUMP_ALPHA_EN = 14,
    GXWARN_IND_DIR_MASK = 15,
    GXWARN_TEV_TEX_REF = 16,
    GXWARN_TEV_INV_TEX_COORD = 17,
    GXWARN_IND_DIR_BOTH = 18,
    GXWARN_TEX_CONFIG = 19,
    GXWARN_TEX_BASE = 20,
    GXWARN_TLUT_CONFIG = 21,
    GXWARN_TEX_POW2 = 22,
    GXWARN_TEX_CLAMP = 23,
    GXWARN_TEX_MIN_FILT = 24,
    GXWARN_MIN_LOD = 25,
    GXWARN_MAX_LOD = 26,
    GXWARN_DIAG_LOD = 27,
    GXWARN_TEX_ANISO = 28,
    GXWARN_TEX_FIELD = 29,
    GXWARN_TEX_RND_FP = 30,
    GXWARN_RND_CLR_INDX = 31,
    GXWARN_TEV_ENV = 32,
    GXWARN_TEV_INV_CHAN = 33,
    GXWARN_TEV_NULL_TEX = 34,
    GXWARN_TEV_NULL_TEX_A = 35,
    GXWARN_TEV_DIRTY_REG = 36,
    GXWARN_TEV_DIRTY_REG_A = 37,
    GXWARN_TEV_CLR_CLAMP = 38,
    GXWARN_TEV_A_CLAMP = 39,
    GXWARN_ZTEX_OFFSET = 40,
    GXWARN_ZTEX_INVALID = 41,
    GXWARN_TEV_LAST_CLR = 42,
    GXWARN_TEV_LAST_A = 43,
    GXWARN_TEV_LAST_CLR_WRAP = 44,
    GXWARN_TEV_LAST_A_WRAP = 45,
    GXWARN_Z_BEFORE_T_A = 46,
    GXWARN_BLEND_LOGICOP = 47,
    GXWARN_DITHER_MODE = 48,
    GXWARN_MULTISAMP0 = 49,
    GXWARN_MULTISAMP1 = 50,
    GXWARN_SAMP_ORDER = 51,
    GXWARN_INVALID_TG_TYPE = 52,
    GXWARN_XF_CTRL_UNINIT = 53,
    GXWARN_XF_CTRL_INIT = 54,
    GXWARN_INV_COLOR_TG_COMB = 55,
    GXWARN_XF_NO_CLR_TEX = 56,
    GXWARN_VTX_NO_GEOM = 57,
    GXWARN_VAT_MISMATCH = 58,
    GXWARN_VAT_NRM_TYPE = 59,
    GXWARN_VAT_NRM_FRAC = 60,
    GXWARN_VAT_F32_FRAC = 61,
    GXWARN_VAT_CLR_FRAC = 62,
    GXWARN_INV_IVS_CLR = 63,
    GXWARN_NRM_XF0_CP1 = 64,
    GXWARN_NRM_XF0_CP3 = 65,
    GXWARN_NRM_XF1_CP0 = 66,
    GXWARN_NRM_XF1_CP3 = 67,
    GXWARN_NRM_XF3_CP1 = 68,
    GXWARN_VCD_FMT_UNSUP = 69,
    GXWARN_VCD_CLR_ORDER = 70,
    GXWARN_VCD_TEX_ORDER = 71,
    GXWARN_TEX_SRC_NPOS = 72,
    GXWARN_TEX_SRC_NNRM = 73,
    GXWARN_TEX_SRC_NCLR0 = 74,
    GXWARN_TEX_SRC_NCLR1 = 75,
    GXWARN_TEX_SRC_NNBT = 76,
    GXWARN_TEX_SRC_NTEX = 77,
    GXWARN_INV_TEX_SRC = 78,
    GXWARN_INV_TG_ORDER = 79,
    GXWARN_BM_INV_MTX_NDX = 80,
    GXWARN_BM_INV_TEX = 81,
    GXWARN_BM_INV_LIT_POS = 82,
    GXWARN_BM_NO_NBT = 83,
    GXWARN_INV_TEX_NUM = 84,
    GXWARN_VIEWPORT_TOP = 85,
    GXWARN_VIEWPORT_BOTTOM = 86,
    GXWARN_VIEWPORT_LEFT = 87,
    GXWARN_VIEWPORT_RIGHT = 88,
    GXWARN_CLR_INV_SPEC = 89,
    GXWARN_CLR_NO_NRM = 90,
    GXWARN_CLR_INV_MTX_NDX = 91,
    GXWARN_VAL_INFINITY = 92,
    GXWARN_VAL_NAN = 93,
    GXWARN_VAL_SMALL = 94,
    GXWARN_VAL_LARGE = 95,
    GXWARN_MTX1_UNINIT = 96,
    GXWARN_GM_UNINIT = 97,
    GXWARN_TEX_XFN_SUM = 98,
    GXWARN_CLR_XFN_SUM = 99,
    GXWARN_INV_NUM_ANY_TEX = 100,
    GXWARN_INV_NUM_REG_TEX = 101,
    GXWARN_INV_NUM_BM_TEX = 102,
    GXWARN_INV_NUM_CLR_TEX = 103,
    GXWARN_INV_CLR_TEX = 104,
    GXWARN_DUP_CLR_TEX = 105,
    GXWARN_BM_INV_MTX_VAL = 106,
    GXWARN_TEX_INV_MTX_VAL = 107,
    GXWARN_LIT_INV_REG = 108,
    GXWARN_CLR_INV_MTX_VAL = 109,
    GXWARN_INV_MTX_VAL = 110,
    GXWARN_ADDR_UNINIT = 111,
    GXWARN_REG_UNINIT = 112,
    GXWARN_DL_INV_CMD = 113,
    GXWARN_DL_NESTED = 114,
    GXWARN_CLR_XF0_CP1 = 115,
    GXWARN_CLR_XF1_CP0 = 116,
    GXWARN_CLR_XF1_CP2 = 117,
    GXWARN_CLR_XF2_CPN1 = 118,
    GXWARN_CLR_XF2_CPN2 = 119,
    GXWARN_INV_NUM_COLORS = 120,
    GXWARN_INV_TG_SRC = 121,
    GXWARN_CLR_ADDR_UNINIT = 122,
    GXWARN_CLR_MAT_UNINIT = 123,
    GXWARN_CLR_AMB_UNINIT = 124,
    GXWARN_MAX = 125,
} WarnID /* r29 */, char * Str /* r1+0x18 */) {
    // Local variables
    unsigned long i; // r31
    unsigned char printedPreamble; // r30
    unsigned char dirtyBit; // r28

    // References
    // -> enum /* @enum$5GXVerifXF_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
} __gxvWarnLev[];
    // -> struct __GXVerifyData * __gxVerif;
}

// Range: 0x803C061C -> 0x803C0A04
static void CheckBumpmapTextures() {
    // Local variables
    unsigned long i; // r31
    unsigned long BumpMapSource; // r28
    unsigned long BumpMapLight; // r30
    unsigned long lightRAMOffset; // r29
    char Preamble[256]; // r1+0x8

    // References
    // -> static unsigned long numBumpmapTextures;
    // -> char __gxvDummyStr[];
    // -> enum /* @enum$5GXVerifXF_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
} __gxvWarnLev[];
    // -> struct __GXVerifyData * __gxVerif;
    // -> char * __gxvWarnings[];
    // -> static unsigned long numRegularTextures;
}

// Range: 0x803C0A04 -> 0x803C0C74
static void CheckTextureTransformMatrices() {
    // Local variables
    unsigned long i; // r28
    unsigned long StartingAddress; // r30
    unsigned long Size; // r27
    unsigned char MtxIndexInVertexPacket; // r31
    char Preamble[256]; // r1+0x8
    unsigned long Val; // r29

    // References
    // -> static unsigned long numRegularTextures;
    // -> struct __GXVerifyData * __gxVerif;
    // -> char * __gxvWarnings[];
    // -> char __gxvDummyStr[];
    // -> enum /* @enum$5GXVerifXF_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
} __gxvWarnLev[];
}

// Range: 0x803C0C74 -> 0x803C0D74
static void CheckInputForms() {
    // Local variables
    unsigned long i; // r31

    // References
    // -> static unsigned long numRegularTextures;
    // -> char __gxvDummyStr[];
    // -> enum /* @enum$5GXVerifXF_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
} __gxvWarnLev[];
    // -> struct __GXVerifyData * __gxVerif;
    // -> char * __gxvWarnings[];
}

// Range: 0x803C0D74 -> 0x803C0E48
static void CheckLight(unsigned long lightSource /* r28 */) {
    // Local variables
    unsigned long lightRAMOffset; // r29
    unsigned char printedPreamble; // r30
    unsigned long i; // r31

    // References
    // -> char __gxvDummyStr[];
    // -> enum /* @enum$5GXVerifXF_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
} __gxvWarnLev[];
    // -> struct __GXVerifyData * __gxVerif;
    // -> char * __gxvWarnings[];
}

// Range: 0x803C0E48 -> 0x803C1538
static void CheckColor0() {
    // Local variables
    char Preamble[256]; // r1+0x8
    unsigned char haveLight; // r29
    unsigned long i; // r30
    unsigned char lightUsed; // r31

    // References
    // -> struct __GXVerifyData * __gxVerif;
    // -> char * __gxvWarnings[];
    // -> char __gxvDummyStr[];
    // -> enum /* @enum$5GXVerifXF_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
} __gxvWarnLev[];
    // -> static unsigned long numColorTextures;
}

// Range: 0x803C1538 -> 0x803C1C70
static void CheckColor1() {
    // Local variables
    unsigned char usingColor1; // r29
    char Preamble[256]; // r1+0x8
    unsigned char haveLight; // r28
    unsigned long i; // r30
    unsigned char lightUsed; // r31

    // References
    // -> struct __GXVerifyData * __gxVerif;
    // -> char * __gxvWarnings[];
    // -> char __gxvDummyStr[];
    // -> enum /* @enum$5GXVerifXF_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
} __gxvWarnLev[];
    // -> static unsigned long numBumpmapTextures;
    // -> static unsigned long numRegularTextures;
    // -> static unsigned long numColorTextures;
}

// Range: 0x803C1C70 -> 0x803C1EFC
static void CheckViewport() {
    // Local variables
    float vl; // f31
    float vr; // f30
    float vt; // f29
    float vb; // f28

    // References
    // -> char __gxvDummyStr[];
    // -> enum /* @enum$5GXVerifXF_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
} __gxvWarnLev[];
    // -> struct __GXVerifyData * __gxVerif;
    // -> char * __gxvWarnings[];
}

// Range: 0x803C1EFC -> 0x803C1F30
static void ComputeSignExponentMantissa(float floatVal /* r1+0x8 */, unsigned long * sign /* r3 */, unsigned long * exponent /* r4 */, unsigned long * mantissa /* r5 */) {
    // Local variables
    unsigned long intVal; // r31
}

// Range: 0x803C1F30 -> 0x803C2224
static void CheckFloatingPointValue(unsigned char dirtyBit /* r1+0x8 */, unsigned long value /* r1+0xC */, char * label /* r31 */) {
    // Local variables
    unsigned long sign; // r1+0x20
    unsigned long exponent; // r1+0x1C
    unsigned long mantissa; // r1+0x18
    float valuef; // r1+0x14

    // References
    // -> char __gxvDummyStr[];
    // -> enum /* @enum$5GXVerifXF_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
} __gxvWarnLev[];
    // -> struct __GXVerifyData * __gxVerif;
    // -> char * __gxvWarnings[];
}

// Range: 0x803C2224 -> 0x803C2298
static void CheckMatrixRAMRanges() {
    // Local variables
    unsigned long i; // r31
    char label[256]; // r1+0x8

    // References
    // -> struct __GXVerifyData * __gxVerif;
}

// Range: 0x803C2298 -> 0x803C2310
static void CheckNormalRAMRanges() {
    // Local variables
    unsigned long i; // r31
    char label[256]; // r1+0x8

    // References
    // -> struct __GXVerifyData * __gxVerif;
}

// Range: 0x803C2310 -> 0x803C2388
static void CheckDMatrixRAMRanges() {
    // Local variables
    unsigned long i; // r31
    char label[256]; // r1+0x8

    // References
    // -> struct __GXVerifyData * __gxVerif;
}

// Range: 0x803C2388 -> 0x803C2434
static void CheckLightRAMRanges() {
    // Local variables
    unsigned long lightSource; // r31
    unsigned long lightRAMOffset; // r29
    char label[256]; // r1+0x8
    unsigned long i; // r30

    // References
    // -> struct __GXVerifyData * __gxVerif;
    // -> static char lightRegisterNames[13][256];
}

// Range: 0x803C2434 -> 0x803C2580
static void CheckControlRAMRanges() {
    // References
    // -> struct __GXVerifyData * __gxVerif;
}

// Range: 0x803C2580 -> 0x803C25B0
static void CheckFloatingPointRanges() {}

// Range: 0x803C25B0 -> 0x803C2748
static void CheckMatrixIndices() {
    // References
    // -> char __gxvDummyStr[];
    // -> enum /* @enum$5GXVerifXF_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
} __gxvWarnLev[];
    // -> struct __GXVerifyData * __gxVerif;
    // -> static unsigned long numRegularTextures;
    // -> char * __gxvWarnings[];
}

// Range: 0x803C2748 -> 0x803C2C54
static void CheckErrors() {
    // Local variables
    unsigned long i; // r30
    char registerName[80]; // r1+0x8

    // References
    // -> char * __gxvWarnings[];
    // -> enum /* @enum$5GXVerifXF_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
} __gxvWarnLev[];
    // -> struct __GXVerifyData * __gxVerif;
    // -> static unsigned long numBumpmapTextures;
    // -> static unsigned long numRegularTextures;
    // -> static unsigned long numColorTextures;
    // -> char __gxvDummyStr[];
    // -> static unsigned long numColor1Textures;
    // -> static unsigned long numColor0Textures;
}

// Range: 0x803C2C54 -> 0x803C2CE4
static void CheckWarnings() {
    // References
    // -> struct __GXVerifyData * __gxVerif;
}

// Range: 0x803C2CE4 -> 0x803C2CE8
static void DumpXFRegisters() {}

// Range: 0x803C2CE8 -> 0x803C2D2C
void __GXVerifyXF() {
    // References
    // -> static unsigned long DumpCount;
    // -> static unsigned char internalDebug;
}


