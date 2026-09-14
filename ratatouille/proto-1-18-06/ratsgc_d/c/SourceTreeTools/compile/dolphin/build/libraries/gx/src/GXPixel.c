/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\gx\src\GXPixel.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803BA824 -> 0x803BB8D0
*/
unsigned char __GXinBegin; // size: 0x1, address: 0x80D6BF58
enum /* @enum$5GXPixel_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
};
// total size: 0x13F8
struct __GXVerifyData {
    // Members
    void (* cb)(enum /* @enum$5GXPixel_c */ {
        GX_WARN_NONE = 0,
        GX_WARN_SEVERE = 1,
        GX_WARN_MEDIUM = 2,
        GX_WARN_ALL = 3,
    }, unsigned long, char *); // offset 0x0, size 0x4
    enum /* @enum$5GXPixel_c */ {
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
enum _GXFogType {
    GX_FOG_NONE = 0,
    GX_FOG_PERSP_LIN = 2,
    GX_FOG_PERSP_EXP = 4,
    GX_FOG_PERSP_EXP2 = 5,
    GX_FOG_PERSP_REVEXP = 6,
    GX_FOG_PERSP_REVEXP2 = 7,
    GX_FOG_ORTHO_LIN = 10,
    GX_FOG_ORTHO_EXP = 12,
    GX_FOG_ORTHO_EXP2 = 13,
    GX_FOG_ORTHO_REVEXP = 14,
    GX_FOG_ORTHO_REVEXP2 = 15,
    GX_FOG_LIN = 2,
    GX_FOG_EXP = 4,
    GX_FOG_EXP2 = 5,
    GX_FOG_REVEXP = 6,
    GX_FOG_REVEXP2 = 7,
};
// total size: 0x4
struct _GXColor {
    // Members
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
// Range: 0x803BA824 -> 0x803BAC98
void GXSetFog(enum _GXFogType type /* r17 */, float startz /* f28 */, float endz /* f26 */, float nearz /* f30 */, float farz /* f31 */, struct _GXColor & color /* r1+0x1C */) {
    // Local variables
    unsigned long fogclr; // r28
    unsigned long fog0; // r29
    unsigned long fog1; // r27
    unsigned long fog2; // r26
    unsigned long fog3; // r30
    float A; // f27
    float B; // f25
    float B_mant; // f29
    float C; // f24
    float a; // r1+0x24
    float c; // r1+0x20
    unsigned long B_expn; // r23
    unsigned long b_m; // r21
    unsigned long b_s; // r20
    unsigned long a_hex; // r25
    unsigned long c_hex; // r24
    unsigned long fsel; // r19
    unsigned long proj; // r22
    unsigned long rgba; // r18

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

// total size: 0x14
struct _GXFogAdjTable {
    // Members
    unsigned short r[10]; // offset 0x0, size 0x14
};
// Range: 0x803BAC98 -> 0x803BAE78
void GXSetFogRangeAdj(unsigned char enable /* r26 */, unsigned short center /* r25 */, const struct _GXFogAdjTable * table /* r27 */) {
    // Local variables
    unsigned long i; // r28
    unsigned long range_adj; // r30
    unsigned long range_c; // r29

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

enum _GXBlendMode {
    GX_BM_NONE = 0,
    GX_BM_BLEND = 1,
    GX_BM_LOGIC = 2,
    GX_BM_SUBTRACT = 3,
    GX_MAX_BLENDMODE = 4,
};
enum _GXBlendFactor {
    GX_BL_ZERO = 0,
    GX_BL_ONE = 1,
    GX_BL_SRCCLR = 2,
    GX_BL_INVSRCCLR = 3,
    GX_BL_SRCALPHA = 4,
    GX_BL_INVSRCALPHA = 5,
    GX_BL_DSTALPHA = 6,
    GX_BL_INVDSTALPHA = 7,
    GX_BL_DSTCLR = 2,
    GX_BL_INVDSTCLR = 3,
};
enum _GXLogicOp {
    GX_LO_CLEAR = 0,
    GX_LO_AND = 1,
    GX_LO_REVAND = 2,
    GX_LO_COPY = 3,
    GX_LO_INVAND = 4,
    GX_LO_NOOP = 5,
    GX_LO_XOR = 6,
    GX_LO_OR = 7,
    GX_LO_NOR = 8,
    GX_LO_EQUIV = 9,
    GX_LO_INV = 10,
    GX_LO_REVOR = 11,
    GX_LO_INVCOPY = 12,
    GX_LO_INVOR = 13,
    GX_LO_NAND = 14,
    GX_LO_SET = 15,
};
// Range: 0x803BAE78 -> 0x803BB01C
void GXSetBlendMode(enum _GXBlendMode type /* r29 */, enum _GXBlendFactor src_factor /* r25 */, enum _GXBlendFactor dst_factor /* r26 */, enum _GXLogicOp op /* r27 */) {
    // Local variables
    unsigned long reg; // r31
    unsigned long blend_en; // r28

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

// Range: 0x803BB01C -> 0x803BB0CC
void GXSetColorUpdate(unsigned char update_enable /* r29 */) {
    // Local variables
    unsigned long reg; // r31

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

// Range: 0x803BB0CC -> 0x803BB17C
void GXSetAlphaUpdate(unsigned char update_enable /* r29 */) {
    // Local variables
    unsigned long reg; // r31

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
// Range: 0x803BB17C -> 0x803BB274
void GXSetZMode(unsigned char compare_enable /* r27 */, enum _GXCompare func /* r28 */, unsigned char update_enable /* r29 */) {
    // Local variables
    unsigned long reg; // r31

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

// Range: 0x803BB274 -> 0x803BB33C
void GXSetZCompLoc(unsigned char before_tex /* r30 */) {
    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

static unsigned long p2f$318[8]; // size: 0x20, address: 0x80542B48
enum _GXPixelFmt {
    GX_PF_RGB8_Z24 = 0,
    GX_PF_RGBA6_Z24 = 1,
    GX_PF_RGB565_Z16 = 2,
    GX_PF_Z24 = 3,
    GX_PF_Y8 = 4,
    GX_PF_U8 = 5,
    GX_PF_V8 = 6,
    GX_PF_YUV420 = 7,
};
enum _GXZFmt16 {
    GX_ZC_LINEAR = 0,
    GX_ZC_NEAR = 1,
    GX_ZC_MID = 2,
    GX_ZC_FAR = 3,
};
// Range: 0x803BB33C -> 0x803BB584
void GXSetPixelFmt(enum _GXPixelFmt pix_fmt /* r30 */, enum _GXZFmt16 z_fmt /* r27 */) {
    // Local variables
    unsigned long oldPeCtrl; // r28
    unsigned char aa; // r29

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> static unsigned long p2f$318[8];
    // -> unsigned char __GXinBegin;
}

// Range: 0x803BB584 -> 0x803BB634
void GXSetDither(unsigned char dither /* r29 */) {
    // Local variables
    unsigned long reg; // r31

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

// Range: 0x803BB634 -> 0x803BB70C
void GXSetDstAlpha(unsigned char enable /* r28 */, unsigned char alpha /* r29 */) {
    // Local variables
    unsigned long reg; // r31

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

// Range: 0x803BB70C -> 0x803BB7DC
void GXSetFieldMask(unsigned char odd_mask /* r28 */, unsigned char even_mask /* r29 */) {
    // Local variables
    unsigned long reg; // r31

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

// Range: 0x803BB7DC -> 0x803BB8D0
void GXSetFieldMode(unsigned char field_mode /* r1+0x8 */, unsigned char half_aspect_ratio /* r29 */) {
    // Local variables
    unsigned long reg; // r30

    // References
    // -> struct __GXVerifyData * __gxVerif;
    // -> struct __GXData_struct * const __GXData;
    // -> unsigned char __GXinBegin;
}


