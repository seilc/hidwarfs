/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\gx\src\GXTransform.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803BBA88 -> 0x803BF1C0
*/
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
enum /* @enum$5GXTransform_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
};
// total size: 0x13F8
struct __GXVerifyData {
    // Members
    void (* cb)(enum /* @enum$5GXTransform_c */ {
        GX_WARN_NONE = 0,
        GX_WARN_SEVERE = 1,
        GX_WARN_MEDIUM = 2,
        GX_WARN_ALL = 3,
    }, unsigned long, char *); // offset 0x0, size 0x4
    enum /* @enum$5GXTransform_c */ {
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
// Range: 0x803BBA88 -> 0x803BBD04
void __GXSetProjection() {
    // Local variables
    unsigned long reg; // r24
    float xfData; // r1+0x20
    long xfAddr; // r31
    float xfData; // r1+0x1C
    long xfAddr; // r30
    float xfData; // r1+0x18
    long xfAddr; // r29
    float xfData; // r1+0x14
    long xfAddr; // r28
    float xfData; // r1+0x10
    long xfAddr; // r27
    float xfData; // r1+0xC
    long xfAddr; // r26
    unsigned long xfData; // r1+0x8
    long xfAddr; // r25

    // References
    // -> struct __GXVerifyData * __gxVerif;
    // -> struct __GXData_struct * const __GXData;
}

unsigned char __GXinBegin; // size: 0x1, address: 0x80D6BF58
enum _GXProjectionType {
    GX_PERSPECTIVE = 0,
    GX_ORTHOGRAPHIC = 1,
};
// Range: 0x803BBD04 -> 0x803BBDDC
void GXSetProjection(const float (* mtx)[4] /* r31 */, enum _GXProjectionType type /* r30 */) {
    // References
    // -> struct __GXData_struct * const __GXData;
    // -> unsigned char __GXinBegin;
}

// Range: 0x803BBDDC -> 0x803BBEA8
void GXSetProjectionv(const float * ptr /* r31 */) {
    // References
    // -> struct __GXData_struct * const __GXData;
    // -> unsigned char __GXinBegin;
}

// Range: 0x803BBEA8 -> 0x803BBF5C
void GXGetProjectionv(float * ptr /* r31 */) {
    // References
    // -> struct __GXData_struct * const __GXData;
}

// Range: 0x803BBF5C -> 0x803BCDCC
void GXLoadPosMtxImm(const float (* mtx)[4] /* r30 */, unsigned long id /* r1+0xC */) {
    // Local variables
    unsigned long reg; // r17
    unsigned long addr; // r31
    float xfData; // r1+0x3C
    long xfAddr; // r29
    float xfData; // r1+0x38
    long xfAddr; // r28
    float xfData; // r1+0x34
    long xfAddr; // r27
    float xfData; // r1+0x30
    long xfAddr; // r26
    float xfData; // r1+0x2C
    long xfAddr; // r25
    float xfData; // r1+0x28
    long xfAddr; // r24
    float xfData; // r1+0x24
    long xfAddr; // r23
    float xfData; // r1+0x20
    long xfAddr; // r22
    float xfData; // r1+0x1C
    long xfAddr; // r21
    float xfData; // r1+0x18
    long xfAddr; // r20
    float xfData; // r1+0x14
    long xfAddr; // r19
    float xfData; // r1+0x10
    long xfAddr; // r18

    // References
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

// Range: 0x803BCDCC -> 0x803BD8BC
void GXLoadNrmMtxImm(const float (* mtx)[4] /* r30 */, unsigned long id /* r1+0xC */) {
    // Local variables
    unsigned long reg; // r20
    unsigned long addr; // r31
    float xfData; // r1+0x30
    long xfAddr; // r29
    float xfData; // r1+0x2C
    long xfAddr; // r28
    float xfData; // r1+0x28
    long xfAddr; // r27
    float xfData; // r1+0x24
    long xfAddr; // r26
    float xfData; // r1+0x20
    long xfAddr; // r25
    float xfData; // r1+0x1C
    long xfAddr; // r24
    float xfData; // r1+0x18
    long xfAddr; // r23
    float xfData; // r1+0x14
    long xfAddr; // r22
    float xfData; // r1+0x10
    long xfAddr; // r21

    // References
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

// Range: 0x803BD8BC -> 0x803BD944
void GXSetCurrentMtx(unsigned long id /* r30 */) {
    // References
    // -> struct __GXData_struct * const __GXData;
    // -> unsigned char __GXinBegin;
}

enum _GXTexMtxType {
    GX_MTX3x4 = 0,
    GX_MTX2x4 = 1,
};
// Range: 0x803BD944 -> 0x803BE828
void GXLoadTexMtxImm(const float (* mtx)[4] /* r30 */, unsigned long id /* r1+0xC */, enum _GXTexMtxType type /* r16 */) {
    // Local variables
    unsigned long reg; // r1+0x48
    unsigned long addr; // r31
    unsigned long count; // r1+0x44
    float xfData; // r1+0x40
    long xfAddr; // r29
    float xfData; // r1+0x3C
    long xfAddr; // r28
    float xfData; // r1+0x38
    long xfAddr; // r27
    float xfData; // r1+0x34
    long xfAddr; // r26
    float xfData; // r1+0x30
    long xfAddr; // r25
    float xfData; // r1+0x2C
    long xfAddr; // r24
    float xfData; // r1+0x28
    long xfAddr; // r23
    float xfData; // r1+0x24
    long xfAddr; // r22
    float xfData; // r1+0x20
    long xfAddr; // r21
    float xfData; // r1+0x1C
    long xfAddr; // r20
    float xfData; // r1+0x18
    long xfAddr; // r19
    float xfData; // r1+0x14
    long xfAddr; // r18

    // References
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

// Range: 0x803BE828 -> 0x803BEAB4
void __GXSetViewport() {
    // Local variables
    float sx; // f31
    float sy; // f30
    float sz; // f29
    float ox; // f28
    float oy; // f27
    float oz; // f26
    float zmin; // f24
    float zmax; // f25
    unsigned long reg; // r25
    float xfData; // r1+0x1C
    long xfAddr; // r31
    float xfData; // r1+0x18
    long xfAddr; // r30
    float xfData; // r1+0x14
    long xfAddr; // r29
    float xfData; // r1+0x10
    long xfAddr; // r28
    float xfData; // r1+0xC
    long xfAddr; // r27
    float xfData; // r1+0x8
    long xfAddr; // r26

    // References
    // -> struct __GXVerifyData * __gxVerif;
    // -> struct __GXData_struct * const __GXData;
}

// Range: 0x803BEAB4 -> 0x803BEB84
void GXSetViewportJitter(float left /* r1+0x8 */, float top /* f31 */, float wd /* r1+0x10 */, float ht /* r1+0x14 */, float nearz /* r1+0x18 */, float farz /* r1+0x1C */, unsigned long field /* r1+0x20 */) {
    // References
    // -> struct __GXData_struct * const __GXData;
    // -> unsigned char __GXinBegin;
}

// Range: 0x803BEB84 -> 0x803BEBD8
void GXSetViewport(float left /* r1+0x8 */, float top /* r1+0xC */, float wd /* r1+0x10 */, float ht /* r1+0x14 */, float nearz /* r1+0x18 */, float farz /* r1+0x1C */) {}

// Range: 0x803BEBD8 -> 0x803BEC6C
void GXGetViewportv(float * vp /* r31 */) {
    // References
    // -> struct __GXData_struct * const __GXData;
}

// Range: 0x803BEC6C -> 0x803BEE9C
void GXSetScissor(unsigned long left /* r25 */, unsigned long top /* r26 */, unsigned long wd /* r23 */, unsigned long ht /* r24 */) {
    // Local variables
    unsigned long tp; // r30
    unsigned long lf; // r29
    unsigned long bm; // r28
    unsigned long rt; // r27

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

// Range: 0x803BEE9C -> 0x803BEFBC
void GXSetScissorBoxOffset(long x_off /* r26 */, long y_off /* r27 */) {
    // Local variables
    unsigned long reg; // r30
    unsigned long hx; // r29
    unsigned long hy; // r28

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

enum _GXClipMode {
    GX_CLIP_ENABLE = 0,
    GX_CLIP_DISABLE = 1,
};
// Range: 0x803BEFBC -> 0x803BF06C
void GXSetClipMode(enum _GXClipMode mode /* r30 */) {
    // Local variables
    long regAddr; // r31

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

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
// Range: 0x803BF06C -> 0x803BF1C0
void __GXSetMatrixIndex(enum _GXAttr matIdxAttr /* r3 */) {
    // Local variables
    long regAddr; // r1+0x10
    long regAddr; // r31
    long regAddr; // r1+0xC
    long regAddr; // r30

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
}


