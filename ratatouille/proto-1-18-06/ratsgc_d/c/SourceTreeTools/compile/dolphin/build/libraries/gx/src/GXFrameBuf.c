/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\gx\src\GXFrameBuf.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803B0F30 -> 0x803B2F74
*/
enum /* @enum$1GXFrameBuf_c */ {
    VI_TVMODE_NTSC_INT = 0,
    VI_TVMODE_NTSC_DS = 1,
    VI_TVMODE_NTSC_PROG = 2,
    VI_TVMODE_PAL_INT = 4,
    VI_TVMODE_PAL_DS = 5,
    VI_TVMODE_EURGB60_INT = 20,
    VI_TVMODE_EURGB60_DS = 21,
    VI_TVMODE_MPAL_INT = 8,
    VI_TVMODE_MPAL_DS = 9,
    VI_TVMODE_DEBUG_INT = 12,
    VI_TVMODE_DEBUG_PAL_INT = 16,
    VI_TVMODE_DEBUG_PAL_DS = 17,
};
enum /* @enum$2GXFrameBuf_c */ {
    VI_XFBMODE_SF = 0,
    VI_XFBMODE_DF = 1,
};
// total size: 0x3C
struct _GXRenderModeObj {
    // Members
    enum /* @enum$1GXFrameBuf_c */ {
        VI_TVMODE_NTSC_INT = 0,
        VI_TVMODE_NTSC_DS = 1,
        VI_TVMODE_NTSC_PROG = 2,
        VI_TVMODE_PAL_INT = 4,
        VI_TVMODE_PAL_DS = 5,
        VI_TVMODE_EURGB60_INT = 20,
        VI_TVMODE_EURGB60_DS = 21,
        VI_TVMODE_MPAL_INT = 8,
        VI_TVMODE_MPAL_DS = 9,
        VI_TVMODE_DEBUG_INT = 12,
        VI_TVMODE_DEBUG_PAL_INT = 16,
        VI_TVMODE_DEBUG_PAL_DS = 17,
    } viTVmode; // offset 0x0, size 0x4
    unsigned short fbWidth; // offset 0x4, size 0x2
    unsigned short efbHeight; // offset 0x6, size 0x2
    unsigned short xfbHeight; // offset 0x8, size 0x2
    unsigned short viXOrigin; // offset 0xA, size 0x2
    unsigned short viYOrigin; // offset 0xC, size 0x2
    unsigned short viWidth; // offset 0xE, size 0x2
    unsigned short viHeight; // offset 0x10, size 0x2
    enum /* @enum$2GXFrameBuf_c */ {
        VI_XFBMODE_SF = 0,
        VI_XFBMODE_DF = 1,
    } xFBmode; // offset 0x14, size 0x4
    unsigned char field_rendering; // offset 0x18, size 0x1
    unsigned char aa; // offset 0x19, size 0x1
    unsigned char sample_pattern[12][2]; // offset 0x1A, size 0x18
    unsigned char vfilter[7]; // offset 0x32, size 0x7
};
struct _GXRenderModeObj GXNtsc240Ds; // size: 0x3C, address: 0x8053FCC0
struct _GXRenderModeObj GXNtsc240DsAa; // size: 0x3C, address: 0x8053FCFC
struct _GXRenderModeObj GXNtsc240Int; // size: 0x3C, address: 0x8053FD38
struct _GXRenderModeObj GXNtsc240IntAa; // size: 0x3C, address: 0x8053FD74
struct _GXRenderModeObj GXNtsc480IntDf; // size: 0x3C, address: 0x8053FDB0
struct _GXRenderModeObj GXNtsc480Int; // size: 0x3C, address: 0x8053FDEC
struct _GXRenderModeObj GXNtsc480IntAa; // size: 0x3C, address: 0x8053FE28
struct _GXRenderModeObj GXNtsc480Prog; // size: 0x3C, address: 0x8053FE64
struct _GXRenderModeObj GXNtsc480ProgSoft; // size: 0x3C, address: 0x8053FEA0
struct _GXRenderModeObj GXNtsc480ProgAa; // size: 0x3C, address: 0x8053FEDC
struct _GXRenderModeObj GXMpal240Ds; // size: 0x3C, address: 0x8053FF18
struct _GXRenderModeObj GXMpal240DsAa; // size: 0x3C, address: 0x8053FF54
struct _GXRenderModeObj GXMpal240Int; // size: 0x3C, address: 0x8053FF90
struct _GXRenderModeObj GXMpal240IntAa; // size: 0x3C, address: 0x8053FFCC
struct _GXRenderModeObj GXMpal480IntDf; // size: 0x3C, address: 0x80540008
struct _GXRenderModeObj GXMpal480Int; // size: 0x3C, address: 0x80540044
struct _GXRenderModeObj GXMpal480IntAa; // size: 0x3C, address: 0x80540080
struct _GXRenderModeObj GXPal264Ds; // size: 0x3C, address: 0x805400BC
struct _GXRenderModeObj GXPal264DsAa; // size: 0x3C, address: 0x805400F8
struct _GXRenderModeObj GXPal264Int; // size: 0x3C, address: 0x80540134
struct _GXRenderModeObj GXPal264IntAa; // size: 0x3C, address: 0x80540170
struct _GXRenderModeObj GXPal528IntDf; // size: 0x3C, address: 0x805401AC
struct _GXRenderModeObj GXPal528Int; // size: 0x3C, address: 0x805401E8
struct _GXRenderModeObj GXPal524IntAa; // size: 0x3C, address: 0x80540224
struct _GXRenderModeObj GXEurgb60Hz240Ds; // size: 0x3C, address: 0x80540260
struct _GXRenderModeObj GXEurgb60Hz240DsAa; // size: 0x3C, address: 0x8054029C
struct _GXRenderModeObj GXEurgb60Hz240Int; // size: 0x3C, address: 0x805402D8
struct _GXRenderModeObj GXEurgb60Hz240IntAa; // size: 0x3C, address: 0x80540314
struct _GXRenderModeObj GXEurgb60Hz480IntDf; // size: 0x3C, address: 0x80540350
struct _GXRenderModeObj GXEurgb60Hz480Int; // size: 0x3C, address: 0x8054038C
struct _GXRenderModeObj GXEurgb60Hz480IntAa; // size: 0x3C, address: 0x805403C8
struct _GXRenderModeObj GXRmHW; // size: 0x3C, address: 0x80540404
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
// Range: 0x803B0F30 -> 0x803B10B4
void GXSetDispCopySrc(unsigned short left /* r27 */, unsigned short top /* r28 */, unsigned short wd /* r29 */, unsigned short ht /* r30 */) {
    // References
    // -> struct __GXData_struct * const __GXData;
    // -> unsigned char __GXinBegin;
}

// Range: 0x803B10B4 -> 0x803B1238
void GXSetTexCopySrc(unsigned short left /* r27 */, unsigned short top /* r28 */, unsigned short wd /* r29 */, unsigned short ht /* r30 */) {
    // References
    // -> struct __GXData_struct * const __GXData;
    // -> unsigned char __GXinBegin;
}

// Range: 0x803B1238 -> 0x803B12FC
void GXSetDispCopyDst(unsigned short wd /* r29 */) {
    // Local variables
    unsigned short stride; // r30

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> unsigned char __GXinBegin;
}

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
// Range: 0x803B12FC -> 0x803B1524
void GXSetTexCopyDst(unsigned short wd /* r1+0x8 */, unsigned short ht /* r1+0xA */, enum _GXTexFmt fmt /* r29 */, unsigned char mipmap /* r27 */) {
    // Local variables
    unsigned long rowTiles; // r1+0x1C
    unsigned long colTiles; // r1+0x18
    unsigned long cmpTiles; // r1+0x14
    unsigned long peTexFmt; // r30
    unsigned long peTexFmtH; // r28

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> unsigned char __GXinBegin;
}

enum _GXCopyMode {
    GX_COPY_PROGRESSIVE = 0,
    GX_COPY_INTLC_EVEN = 2,
    GX_COPY_INTLC_ODD = 3,
};
// Range: 0x803B1524 -> 0x803B15BC
void GXSetDispCopyFrame2Field(enum _GXCopyMode mode /* r30 */) {
    // References
    // -> struct __GXData_struct * const __GXData;
    // -> unsigned char __GXinBegin;
}

enum _GXFBClamp {
    GX_CLAMP_NONE = 0,
    GX_CLAMP_TOP = 1,
    GX_CLAMP_BOTTOM = 2,
};
// Range: 0x803B15BC -> 0x803B16F4
void GXSetCopyClamp(enum _GXFBClamp clamp /* r28 */) {
    // Local variables
    unsigned char clmpB; // r30
    unsigned char clmpT; // r29

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> unsigned char __GXinBegin;
}

// Range: 0x803B16F4 -> 0x803B1760
static unsigned long __GXGetNumXfbLines(unsigned long efbHt /* r3 */, unsigned long iScale /* r4 */) {
    // Local variables
    unsigned long count; // r29
    unsigned long realHt; // r30
    unsigned long iScaleD; // r31
}

// Range: 0x803B1760 -> 0x803B192C
float GXGetYScaleFactor(unsigned short efbHeight /* r31 */, unsigned short xfbHeight /* r29 */) {
    // Local variables
    float fScale; // f30
    float yScale; // f31
    unsigned long iScale; // r30
    unsigned long tgtHt; // r28
    unsigned long realHt; // r27
}

enum /* @enum$5GXFrameBuf_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
};
// total size: 0x13F8
struct __GXVerifyData {
    // Members
    void (* cb)(enum /* @enum$5GXFrameBuf_c */ {
        GX_WARN_NONE = 0,
        GX_WARN_SEVERE = 1,
        GX_WARN_MEDIUM = 2,
        GX_WARN_ALL = 3,
    }, unsigned long, char *); // offset 0x0, size 0x4
    enum /* @enum$5GXFrameBuf_c */ {
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
// Range: 0x803B192C -> 0x803B1A74
unsigned long GXSetDispCopyYScale(float vscale /* f31 */) {
    // Local variables
    unsigned char enable; // r28
    unsigned long iScale; // r29
    unsigned long ht; // r27
    unsigned long reg; // r30

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
// Range: 0x803B1A74 -> 0x803B1C48
void GXSetCopyClear(struct _GXColor & clear_clr /* r29 */, unsigned long clear_z /* r28 */) {
    // Local variables
    unsigned long reg; // r31

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

// Range: 0x803B1C48 -> 0x803B2450
void GXSetCopyFilter(unsigned char aa /* r1+0x8 */, const unsigned char (* sample_pattern)[2] /* r30 */, unsigned char vf /* r1+0x10 */, const unsigned char * vfilter /* r27 */) {
    // Local variables
    unsigned long msLoc[4]; // r1+0x18
    unsigned long coeff0; // r29
    unsigned long coeff1; // r28

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

enum _GXGamma {
    GX_GM_1_0 = 0,
    GX_GM_1_7 = 1,
    GX_GM_2_2 = 2,
};
// Range: 0x803B2450 -> 0x803B24D0
void GXSetDispCopyGamma(enum _GXGamma gamma /* r30 */) {
    // References
    // -> struct __GXData_struct * const __GXData;
    // -> unsigned char __GXinBegin;
}

// Range: 0x803B24D0 -> 0x803B2724
static void __GXVerifCopy(void * dest /* r1+0x8 */, unsigned char clear /* r24 */) {
    // Local variables
    unsigned char clmpT; // r26
    unsigned char clmpB; // r25
    unsigned long x0; // r28
    unsigned long y0; // r30
    unsigned long dx; // r27
    unsigned long dy; // r29

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> unsigned char __GXinBegin;
}

// Range: 0x803B2724 -> 0x803B2AE4
void GXCopyDisp(void * dest /* r25 */, unsigned char clear /* r28 */) {
    // Local variables
    unsigned long reg; // r31
    unsigned long tempPeCtrl; // r29
    unsigned long phyAddr; // r27
    unsigned char changePeCtrl; // r26

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

// Range: 0x803B2AE4 -> 0x803B2EC4
void GXCopyTex(void * dest /* r25 */, unsigned char clear /* r28 */) {
    // Local variables
    unsigned long reg; // r31
    unsigned long tempPeCtrl; // r30
    unsigned long phyAddr; // r26
    unsigned char changePeCtrl; // r27

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

// Range: 0x803B2EC4 -> 0x803B2F74
void GXClearBoundingBox() {
    // Local variables
    unsigned long reg; // r31

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}


