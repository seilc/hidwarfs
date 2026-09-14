/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\gx\src\GXInit.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803AB184 -> 0x803AC948
*/
const char * __GXVersion; // size: 0x4, address: 0x80D68070
static // total size: 0x80
struct {
    // Members
    unsigned char pad[128]; // offset 0x0, size 0x80
} FifoObj; // size: 0x80, address: 0x80D57B08
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
static struct __GXData_struct gxData; // size: 0x5B0, address: 0x80D57B88
struct __GXData_struct * const __GXData; // size: 0x4, address: 0x80D71BE0
unsigned char __GXinBegin; // size: 0x1, address: 0x80D6BF58
void * __piReg; // size: 0x4, address: 0x80D6BF5C
void * __cpReg; // size: 0x4, address: 0x80D6BF60
void * __peReg; // size: 0x4, address: 0x80D6BF64
void * __memReg; // size: 0x4, address: 0x80D6BF68
static unsigned short DefaultTexData[16]; // size: 0x20, address: 0x8053E9A0
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
enum _GXCompCnt {
    GX_POS_XY = 0,
    GX_POS_XYZ = 1,
    GX_NRM_XYZ = 0,
    GX_NRM_NBT = 1,
    GX_NRM_NBT3 = 2,
    GX_CLR_RGB = 0,
    GX_CLR_RGBA = 1,
    GX_TEX_S = 0,
    GX_TEX_ST = 1,
};
enum _GXCompType {
    GX_U8 = 0,
    GX_S8 = 1,
    GX_U16 = 2,
    GX_S16 = 3,
    GX_F32 = 4,
    GX_RGB565 = 0,
    GX_RGB8 = 1,
    GX_RGBX8 = 2,
    GX_RGBA4 = 3,
    GX_RGBA6 = 4,
    GX_RGBA8 = 5,
};
// total size: 0x10
struct _GXVtxAttrFmtList {
    // Members
    enum _GXAttr attr; // offset 0x0, size 0x4
    enum _GXCompCnt cnt; // offset 0x4, size 0x4
    enum _GXCompType type; // offset 0x8, size 0x4
    unsigned char frac; // offset 0xC, size 0x1
};
static struct _GXVtxAttrFmtList GXDefaultVATList[13]; // size: 0xD0, address: 0x8053E9C0
static float GXDefaultProjData[7]; // size: 0x1C, address: 0x8053EA90
static unsigned long GXTexRegionAddrTable[48]; // size: 0xC0, address: 0x8053EAAC
// total size: 0x10
struct OSResetFunctionInfo {
    // Members
    int (* func)(int); // offset 0x0, size 0x4
    unsigned long priority; // offset 0x4, size 0x4
    struct OSResetFunctionInfo * next; // offset 0x8, size 0x4
    struct OSResetFunctionInfo * prev; // offset 0xC, size 0x4
};
static struct OSResetFunctionInfo GXResetFuncInfo; // size: 0x10, address: 0x8053EB6C
// Range: 0x803AB184 -> 0x803AB1CC
static void EnableWriteGatherPipe() {
    // Local variables
    unsigned long hid2; // r31
}

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
// Range: 0x803AB1CC -> 0x803AB2C0
static struct _GXTexRegion * __GXDefaultTexRegionCallback(const struct _GXTexObj * t_obj /* r28 */, enum _GXTexMapID id /* r31 */) {
    // Local variables
    enum _GXTexFmt fmt; // r29
    unsigned char mm; // r30

    // References
    // -> struct __GXData_struct * const __GXData;
}

// Range: 0x803AB2C0 -> 0x803AB2E4
static struct _GXTlutRegion * __GXDefaultTlutRegionCallback(unsigned long idx /* r3 */) {
    // References
    // -> struct __GXData_struct * const __GXData;
}

enum /* @enum$6GXInit_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
};
// Range: 0x803AB2E4 -> 0x803AB328
static void __GXDefaultVerifyCallback(enum /* @enum$6GXInit_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
} level /* r1+0x8 */, unsigned long id /* r1+0xC */, const char * msg /* r1+0x10 */) {}

static unsigned long peCount$39; // size: 0x4, address: 0x80D6BF6C
static long long time$40; // size: 0x8, address: 0x80D6BF70
static unsigned long calledOnce$41; // size: 0x4, address: 0x80D6BF78
// Range: 0x803AB328 -> 0x803AB4C0
static int __GXShutdown(int final /* r1+0x8 */) {
    // Local variables
    unsigned long reg; // r31
    unsigned long peCountNew; // r30
    long long timeNew; // r28

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> void * __cpReg;
    // -> static long long time$40;
    // -> static unsigned long peCount$39;
    // -> static unsigned long calledOnce$41;
}

// total size: 0x13F8
struct __GXVerifyData {
    // Members
    void (* cb)(enum /* @enum$6GXInit_c */ {
        GX_WARN_NONE = 0,
        GX_WARN_SEVERE = 1,
        GX_WARN_MEDIUM = 2,
        GX_WARN_ALL = 3,
    }, unsigned long, char *); // offset 0x0, size 0x4
    enum /* @enum$6GXInit_c */ {
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
// Range: 0x803AB4C0 -> 0x803AB6BC
void __GXInitRevisionBits() {
    // Local variables
    unsigned long i; // r29
    long regAddr; // r1+0x8
    unsigned long reg1; // r31
    unsigned long reg2; // r28
    long regAddr; // r27
    long regAddr; // r26
    unsigned long reg; // r30

    // References
    // -> struct __GXVerifyData * __gxVerif;
    // -> struct __GXData_struct * const __GXData;
}

static unsigned long resetFuncRegistered$133; // size: 0x4, address: 0x80D6BF7C
// Range: 0x803AB6BC -> 0x803AC034
// total size: 0x80
struct {
    // Members
    unsigned char pad[128]; // offset 0x0, size 0x80
} * GXInit(void * base /* r1+0x8 */, unsigned long size /* r1+0xC */) {
    // Local variables
    unsigned long i; // r31
    unsigned long reg; // r28
    unsigned long freqBase; // r25
    unsigned long reg; // r29
    long regAddr; // r1+0x10
    long regAddr; // r26

    // References
    // -> static struct [anonymous] FifoObj;
    // -> struct __GXVerifyData * __gxVerif;
    // -> struct __GXData_struct * const __GXData;
    // -> void * __cpReg;
    // -> static unsigned long GXTexRegionAddrTable[48];
    // -> static unsigned long resetFuncRegistered$133;
    // -> static struct OSResetFunctionInfo GXResetFuncInfo;
    // -> void * __memReg;
    // -> void * __peReg;
    // -> void * __piReg;
    // -> unsigned char __GXinBegin;
    // -> const char * __GXVersion;
}

enum /* @enum$2GXInit_c */ {
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
enum /* @enum$3GXInit_c */ {
    VI_XFBMODE_SF = 0,
    VI_XFBMODE_DF = 1,
};
// total size: 0x3C
struct _GXRenderModeObj {
    // Members
    enum /* @enum$2GXInit_c */ {
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
    enum /* @enum$3GXInit_c */ {
        VI_XFBMODE_SF = 0,
        VI_XFBMODE_DF = 1,
    } xFBmode; // offset 0x14, size 0x4
    unsigned char field_rendering; // offset 0x18, size 0x1
    unsigned char aa; // offset 0x19, size 0x1
    unsigned char sample_pattern[12][2]; // offset 0x1A, size 0x18
    unsigned char vfilter[7]; // offset 0x32, size 0x7
};
struct _GXRenderModeObj GXNtsc480IntDf; // size: 0x3C, address: 0x8053FDB0
struct _GXRenderModeObj GXPal528IntDf; // size: 0x3C, address: 0x805401AC
struct _GXRenderModeObj GXEurgb60Hz480IntDf; // size: 0x3C, address: 0x80540350
struct _GXRenderModeObj GXMpal480IntDf; // size: 0x3C, address: 0x80540008
// total size: 0x20
struct _GXTexObj {
    // Members
    unsigned long dummy[8]; // offset 0x0, size 0x20
};
// total size: 0x4
struct _GXColor {
    // Members
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
// Range: 0x803AC034 -> 0x803AC948
void __GXInitGX() {
    // Local variables
    struct _GXRenderModeObj * rmode; // r31
    struct _GXTexObj tex_obj; // r1+0x5C
    float identity_mtx[3][4]; // r1+0x2C
    struct _GXColor clear; // r1+0x28
    struct _GXColor black; // r1+0x24
    struct _GXColor white; // r1+0x20
    unsigned long i; // r30

    // References
    // -> static unsigned short DefaultTexData[16];
    // -> static float GXDefaultProjData[7];
    // -> static struct _GXVtxAttrFmtList GXDefaultVATList[13];
    // -> struct __GXData_struct * const __GXData;
    // -> struct _GXRenderModeObj GXNtsc480IntDf;
    // -> struct _GXRenderModeObj GXMpal480IntDf;
    // -> struct _GXRenderModeObj GXEurgb60Hz480IntDf;
    // -> struct _GXRenderModeObj GXPal528IntDf;
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
enum _GXTexGenType {
    GX_TG_MTX3x4 = 0,
    GX_TG_MTX2x4 = 1,
    GX_TG_BUMP0 = 2,
    GX_TG_BUMP1 = 3,
    GX_TG_BUMP2 = 4,
    GX_TG_BUMP3 = 5,
    GX_TG_BUMP4 = 6,
    GX_TG_BUMP5 = 7,
    GX_TG_BUMP6 = 8,
    GX_TG_BUMP7 = 9,
    GX_TG_SRTG = 10,
};
enum _GXTexGenSrc {
    GX_TG_POS = 0,
    GX_TG_NRM = 1,
    GX_TG_BINRM = 2,
    GX_TG_TANGENT = 3,
    GX_TG_TEX0 = 4,
    GX_TG_TEX1 = 5,
    GX_TG_TEX2 = 6,
    GX_TG_TEX3 = 7,
    GX_TG_TEX4 = 8,
    GX_TG_TEX5 = 9,
    GX_TG_TEX6 = 10,
    GX_TG_TEX7 = 11,
    GX_TG_TEXCOORD0 = 12,
    GX_TG_TEXCOORD1 = 13,
    GX_TG_TEXCOORD2 = 14,
    GX_TG_TEXCOORD3 = 15,
    GX_TG_TEXCOORD4 = 16,
    GX_TG_TEXCOORD5 = 17,
    GX_TG_TEXCOORD6 = 18,
    GX_TG_COLOR0 = 19,
    GX_TG_COLOR1 = 20,
};

