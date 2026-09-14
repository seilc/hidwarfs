/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\gx\src\GXTexture.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803B5320 -> 0x803B7FF4
*/
static unsigned char GXTexMode0Ids[8]; // size: 0x8, address: 0x80D68088
static unsigned char GXTexMode1Ids[8]; // size: 0x8, address: 0x80D68090
static unsigned char GXTexImage0Ids[8]; // size: 0x8, address: 0x80D68098
static unsigned char GXTexImage1Ids[8]; // size: 0x8, address: 0x80D680A0
static unsigned char GXTexImage2Ids[8]; // size: 0x8, address: 0x80D680A8
static unsigned char GXTexImage3Ids[8]; // size: 0x8, address: 0x80D680B0
static unsigned char GXTexTlutIds[8]; // size: 0x8, address: 0x80D680B8
static unsigned char GX2HWFiltConv[6]; // size: 0x6, address: 0x80D680C0
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
// Range: 0x803B5320 -> 0x803B53DC
static void __GXGetTexTileShift(enum _GXTexFmt fmt /* r1+0x8 */, unsigned long * rowTileS /* r30 */, unsigned long * colTileS /* r31 */) {}

// Range: 0x803B53DC -> 0x803B5614
unsigned long GXGetTexBufferSize(unsigned short width /* r29 */, unsigned short height /* r30 */, unsigned long format /* r23 */, unsigned char mipmap /* r1+0x10 */, unsigned char max_lod /* r1+0x11 */) {
    // Local variables
    unsigned long tileShiftX; // r1+0x18
    unsigned long tileShiftY; // r1+0x14
    unsigned long tileBytes; // r26
    unsigned long bufferSize; // r25
    unsigned long nx; // r28
    unsigned long ny; // r27
    unsigned long level; // r24
}

// Range: 0x803B5614 -> 0x803B56EC
void __GetImageTileCount(enum _GXTexFmt fmt /* r29 */, unsigned short wd /* r30 */, unsigned short ht /* r31 */, unsigned long * rowTiles /* r1+0x10 */, unsigned long * colTiles /* r1+0x14 */, unsigned long * cmpTiles /* r1+0x18 */) {
    // Local variables
    unsigned long texRowShift; // r1+0x20
    unsigned long texColShift; // r1+0x1C
}

unsigned char __GXinBegin; // size: 0x1, address: 0x80D6BF58
// total size: 0x20
struct _GXTexObj {
    // Members
    unsigned long dummy[8]; // offset 0x0, size 0x20
};
enum _GXTexWrapMode {
    GX_CLAMP = 0,
    GX_REPEAT = 1,
    GX_MIRROR = 2,
    GX_MAX_TEXWRAPMODE = 3,
};
// total size: 0x20
struct __GXTexObjInt_struct {
    // Members
    unsigned long mode0; // offset 0x0, size 0x4
    unsigned long mode1; // offset 0x4, size 0x4
    unsigned long image0; // offset 0x8, size 0x4
    unsigned long image3; // offset 0xC, size 0x4
    void * userData; // offset 0x10, size 0x4
    enum _GXTexFmt fmt; // offset 0x14, size 0x4
    unsigned long tlutName; // offset 0x18, size 0x4
    unsigned short loadCnt; // offset 0x1C, size 0x2
    unsigned char loadFmt; // offset 0x1E, size 0x1
    unsigned char flags; // offset 0x1F, size 0x1
};
// Range: 0x803B56EC -> 0x803B5BD4
void GXInitTexObj(struct _GXTexObj * obj /* r1+0x8 */, void * image_ptr /* r1+0xC */, unsigned short width /* r25 */, unsigned short height /* r26 */, enum _GXTexFmt format /* r27 */, enum _GXTexWrapMode wrap_s /* r19 */, enum _GXTexWrapMode wrap_t /* r20 */, unsigned char mipmap /* r21 */) {
    // Local variables
    unsigned long imageBase; // r24
    unsigned long maxLOD; // r23
    unsigned short rowT; // r29
    unsigned short colT; // r28
    unsigned long rowC; // r18
    unsigned long colC; // r17
    struct __GXTexObjInt_struct * t; // r30
    unsigned long mask; // r16
    unsigned long mask; // r1+0x24
    unsigned char lmax; // r22

    // References
    // -> unsigned char __GXinBegin;
}

enum _GXCITexFmt {
    GX_TF_C4 = 8,
    GX_TF_C8 = 9,
    GX_TF_C14X2 = 10,
};
// Range: 0x803B5BD4 -> 0x803B5C98
void GXInitTexObjCI(struct _GXTexObj * obj /* r29 */, void * image_ptr /* r1+0xC */, unsigned short width /* r1+0x10 */, unsigned short height /* r1+0x12 */, enum _GXCITexFmt format /* r1+0x14 */, enum _GXTexWrapMode wrap_s /* r1+0x18 */, enum _GXTexWrapMode wrap_t /* r1+0x1C */, unsigned char mipmap /* r1+0x20 */, unsigned long tlut_name /* r1+0x40 */) {
    // Local variables
    struct __GXTexObjInt_struct * t; // r30

    // References
    // -> unsigned char __GXinBegin;
}

enum _GXTexFilter {
    GX_NEAR = 0,
    GX_LINEAR = 1,
    GX_NEAR_MIP_NEAR = 2,
    GX_LIN_MIP_NEAR = 3,
    GX_NEAR_MIP_LIN = 4,
    GX_LIN_MIP_LIN = 5,
};
enum _GXAnisotropy {
    GX_ANISO_1 = 0,
    GX_ANISO_2 = 1,
    GX_ANISO_4 = 2,
    GX_MAX_ANISOTROPY = 3,
};
// Range: 0x803B5C98 -> 0x803B5FF0
void GXInitTexObjLOD(struct _GXTexObj * obj /* r21 */, enum _GXTexFilter min_filt /* r25 */, enum _GXTexFilter mag_filt /* r26 */, float min_lod /* f29 */, float max_lod /* f30 */, float lod_bias /* f31 */, unsigned char bias_clamp /* r22 */, unsigned char do_edge_lod /* r23 */, enum _GXAnisotropy max_aniso /* r24 */) {
    // Local variables
    unsigned char lbias; // r29
    unsigned char lmin; // r28
    unsigned char lmax; // r27
    struct __GXTexObjInt_struct * t; // r30

    // References
    // -> static unsigned char GX2HWFiltConv[6];
    // -> unsigned char __GXinBegin;
}

// Range: 0x803B5FF0 -> 0x803B6044
enum _GXTexFmt GXGetTexObjFmt(const struct _GXTexObj * to /* r30 */) {
    // Local variables
    struct __GXTexObjInt_struct * t; // r31
}

// Range: 0x803B6044 -> 0x803B60AC
unsigned char GXGetTexObjMipMap(const struct _GXTexObj * to /* r30 */) {
    // Local variables
    struct __GXTexObjInt_struct * t; // r31
}

// Range: 0x803B60AC -> 0x803B6134
float GXGetTexObjLODBias(const struct _GXTexObj * tex_obj /* r29 */) {
    // Local variables
    signed short tmp; // r31
    struct __GXTexObjInt_struct * t; // r30
}

// Range: 0x803B6134 -> 0x803B618C
unsigned char GXGetTexObjBiasClamp(const struct _GXTexObj * tex_obj /* r30 */) {
    // Local variables
    struct __GXTexObjInt_struct * t; // r31
}

// Range: 0x803B618C -> 0x803B61EC
unsigned char GXGetTexObjEdgeLOD(const struct _GXTexObj * tex_obj /* r30 */) {
    // Local variables
    struct __GXTexObjInt_struct * t; // r31
}

// Range: 0x803B61EC -> 0x803B6244
enum _GXAnisotropy GXGetTexObjMaxAniso(const struct _GXTexObj * tex_obj /* r30 */) {
    // Local variables
    struct __GXTexObjInt_struct * t; // r31
}

// Range: 0x803B6244 -> 0x803B6298
unsigned long GXGetTexObjTlut(const struct _GXTexObj * tex_obj /* r30 */) {
    // Local variables
    struct __GXTexObjInt_struct * t; // r31
}

enum /* @enum$5GXTexture_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
};
// total size: 0x13F8
struct __GXVerifyData {
    // Members
    void (* cb)(enum /* @enum$5GXTexture_c */ {
        GX_WARN_NONE = 0,
        GX_WARN_SEVERE = 1,
        GX_WARN_MEDIUM = 2,
        GX_WARN_ALL = 3,
    }, unsigned long, char *); // offset 0x0, size 0x4
    enum /* @enum$5GXTexture_c */ {
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
// total size: 0xC
struct __GXTlutObjInt_struct {
    // Members
    unsigned long tlut; // offset 0x0, size 0x4
    unsigned long loadTlut0; // offset 0x4, size 0x4
    unsigned short numEntries; // offset 0x8, size 0x2
};
// total size: 0x10
struct __GXTlutRegionInt_struct {
    // Members
    unsigned long loadTlut1; // offset 0x0, size 0x4
    struct __GXTlutObjInt_struct tlutObj; // offset 0x4, size 0xC
};
// total size: 0x10
struct __GXTexRegionInt_struct {
    // Members
    unsigned long image1; // offset 0x0, size 0x4
    unsigned long image2; // offset 0x4, size 0x4
    unsigned short sizeEven; // offset 0x8, size 0x2
    unsigned short sizeOdd; // offset 0xA, size 0x2
    unsigned char is32bMipmap; // offset 0xC, size 0x1
    unsigned char isCached; // offset 0xD, size 0x1
};
// Range: 0x803B6298 -> 0x803B6708
void GXLoadTexObjPreLoaded(const struct _GXTexObj * obj /* r25 */, const struct _GXTexRegion * region /* r26 */, enum _GXTexMapID id /* r29 */) {
    // Local variables
    struct __GXTlutRegionInt_struct * tlr; // r27
    unsigned long m0; // r1+0x28
    unsigned long m1; // r1+0x24
    unsigned long img0; // r1+0x20
    unsigned long img1; // r1+0x1C
    unsigned long img2; // r1+0x18
    unsigned long img3; // r1+0x14
    struct __GXTexObjInt_struct * t; // r30
    struct __GXTexRegionInt_struct * r; // r28

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> static unsigned char GXTexTlutIds[8];
    // -> static unsigned char GXTexImage3Ids[8];
    // -> static unsigned char GXTexImage2Ids[8];
    // -> static unsigned char GXTexImage1Ids[8];
    // -> static unsigned char GXTexImage0Ids[8];
    // -> static unsigned char GXTexMode1Ids[8];
    // -> static unsigned char GXTexMode0Ids[8];
    // -> unsigned char __GXinBegin;
}

// Range: 0x803B6708 -> 0x803B67F0
void GXLoadTexObj(const struct _GXTexObj * obj /* r28 */, enum _GXTexMapID id /* r29 */) {
    // Local variables
    struct _GXTexRegion * r; // r30

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> unsigned char __GXinBegin;
}

// total size: 0xC
struct _GXTlutObj {
    // Members
    unsigned long dummy[3]; // offset 0x0, size 0xC
};
enum _GXTlutFmt {
    GX_TL_IA8 = 0,
    GX_TL_RGB565 = 1,
    GX_TL_RGB5A3 = 2,
    GX_MAX_TLUTFMT = 3,
};
// Range: 0x803B67F0 -> 0x803B6920
void GXInitTlutObj(struct _GXTlutObj * tlut_obj /* r26 */, void * lut /* r29 */, enum _GXTlutFmt fmt /* r27 */, unsigned short n_entries /* r28 */) {
    // Local variables
    struct __GXTlutObjInt_struct * t; // r30

    // References
    // -> unsigned char __GXinBegin;
}

// Range: 0x803B6920 -> 0x803B6AA4
void GXLoadTlut(const struct _GXTlutObj * tlut_obj /* r27 */, unsigned long tlut_name /* r1+0xC */) {
    // Local variables
    struct __GXTlutRegionInt_struct * r; // r30
    unsigned long tlut_offset; // r28
    struct __GXTlutObjInt_struct * t; // r29

    // References
    // -> struct __GXVerifyData * __gxVerif;
    // -> struct __GXData_struct * const __GXData;
    // -> unsigned char __GXinBegin;
}

enum _GXTexCacheSize {
    GX_TEXCACHE_32K = 0,
    GX_TEXCACHE_128K = 1,
    GX_TEXCACHE_512K = 2,
    GX_TEXCACHE_NONE = 3,
};
// Range: 0x803B6AA4 -> 0x803B6D54
void GXInitTexCacheRegion(struct _GXTexRegion * region /* r26 */, unsigned char is_32b_mipmap /* r1+0xC */, unsigned long tmem_even /* r27 */, enum _GXTexCacheSize size_even /* r1+0x14 */, unsigned long tmem_odd /* r28 */, enum _GXTexCacheSize size_odd /* r1+0x1C */) {
    // Local variables
    unsigned long WidthExp2; // r29
    struct __GXTexRegionInt_struct * t; // r30

    // References
    // -> unsigned char __GXinBegin;
}

enum _GXTlutSize {
    GX_TLUT_16 = 1,
    GX_TLUT_32 = 2,
    GX_TLUT_64 = 4,
    GX_TLUT_128 = 8,
    GX_TLUT_256 = 16,
    GX_TLUT_512 = 32,
    GX_TLUT_1K = 64,
    GX_TLUT_2K = 128,
    GX_TLUT_4K = 256,
    GX_TLUT_8K = 512,
    GX_TLUT_16K = 1024,
};
// Range: 0x803B6D54 -> 0x803B6E78
void GXInitTlutRegion(struct _GXTlutRegion * region /* r27 */, unsigned long tmem_addr /* r29 */, enum _GXTlutSize tlut_size /* r28 */) {
    // Local variables
    struct __GXTlutRegionInt_struct * t; // r30

    // References
    // -> unsigned char __GXinBegin;
}

// Range: 0x803B6E78 -> 0x803B7090
void GXInvalidateTexRegion(const struct _GXTexRegion * region /* r22 */) {
    // Local variables
    long wle; // r25
    long hle; // r24
    long wlo; // r26
    long hlo; // r23
    long count; // r27
    unsigned long reg0; // r29
    unsigned long reg1; // r28
    struct __GXTexRegionInt_struct * r; // r30

    // References
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

// Range: 0x803B7090 -> 0x803B713C
void GXInvalidateTexAll() {
    // Local variables
    unsigned long reg0; // r31
    unsigned long reg1; // r30

    // References
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

// Range: 0x803B713C -> 0x803B7164
struct _GXTexRegion * (* GXSetTexRegionCallback(struct _GXTexRegion * (* f)(struct _GXTexObj *, enum _GXTexMapID) /* r3 */))(struct _GXTexObj *, enum _GXTexMapID) {
    // Local variables
    struct _GXTexRegion * (* oldcb)(struct _GXTexObj *, enum _GXTexMapID); // r31

    // References
    // -> struct __GXData_struct * const __GXData;
}

// Range: 0x803B7164 -> 0x803B718C
struct _GXTlutRegion * (* GXSetTlutRegionCallback(struct _GXTlutRegion * (* f)(unsigned long) /* r3 */))(unsigned long) {
    // Local variables
    struct _GXTlutRegion * (* oldcb)(unsigned long); // r31

    // References
    // -> struct __GXData_struct * const __GXData;
}

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
// Range: 0x803B718C -> 0x803B7384
void GXSetTexCoordScaleManually(enum _GXTexCoordID coord /* r31 */, unsigned char enable /* r27 */, unsigned short ss /* r28 */, unsigned short ts /* r29 */) {
    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
    // -> unsigned char __GXinBegin;
}

// Range: 0x803B7384 -> 0x803B75DC
static void __SetSURegs(unsigned long tmap /* r29 */, unsigned long tcoord /* r31 */) {
    // Local variables
    unsigned long w; // r28
    unsigned long h; // r27
    unsigned char s_bias; // r26
    unsigned char t_bias; // r25

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> struct __GXVerifyData * __gxVerif;
}

// Range: 0x803B75DC -> 0x803B7790
void __GXSetSUTexRegs() {
    // Local variables
    unsigned long nStages; // r27
    unsigned long nIndStages; // r26
    unsigned long i; // r31
    unsigned long map; // r25
    unsigned long tmap; // r29
    unsigned long coord; // r30
    unsigned long * ptref; // r28

    // References
    // -> struct __GXData_struct * const __GXData;
}

// Range: 0x803B7790 -> 0x803B7FF4
void __GXSetTmemConfig(unsigned long config /* r3 */) {
    // References
    // -> struct __GXVerifyData * __gxVerif;
}


