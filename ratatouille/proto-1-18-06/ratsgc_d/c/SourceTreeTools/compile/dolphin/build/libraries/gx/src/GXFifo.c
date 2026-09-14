/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\gx\src\GXFifo.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803AC9DC -> 0x803AD860
*/
// total size: 0x24
struct __GXFifoObj {
    // Members
    unsigned char * base; // offset 0x0, size 0x4
    unsigned char * top; // offset 0x4, size 0x4
    unsigned long size; // offset 0x8, size 0x4
    unsigned long hiWatermark; // offset 0xC, size 0x4
    unsigned long loWatermark; // offset 0x10, size 0x4
    void * rdPtr; // offset 0x14, size 0x4
    void * wrPtr; // offset 0x18, size 0x4
    long count; // offset 0x1C, size 0x4
    unsigned char bind_cpu; // offset 0x20, size 0x1
    unsigned char bind_gp; // offset 0x21, size 0x1
};
static struct __GXFifoObj * CPUFifo; // size: 0x4, address: 0x80D6BF80
static struct __GXFifoObj * GPFifo; // size: 0x4, address: 0x80D6BF84
// total size: 0x8
struct OSThreadQueue {
    // Members
    struct OSThread * head; // offset 0x0, size 0x4
    struct OSThread * tail; // offset 0x4, size 0x4
};
// total size: 0x8
struct OSThreadLink {
    // Members
    struct OSThread * next; // offset 0x0, size 0x4
    struct OSThread * prev; // offset 0x4, size 0x4
};
// total size: 0x8
struct OSMutexLink {
    // Members
    struct OSMutex * next; // offset 0x0, size 0x4
    struct OSMutex * prev; // offset 0x4, size 0x4
};
// total size: 0x18
struct OSMutex {
    // Members
    struct OSThreadQueue queue; // offset 0x0, size 0x8
    struct OSThread * thread; // offset 0x8, size 0x4
    long count; // offset 0xC, size 0x4
    struct OSMutexLink link; // offset 0x10, size 0x8
};
// total size: 0x8
struct OSMutexQueue {
    // Members
    struct OSMutex * head; // offset 0x0, size 0x4
    struct OSMutex * tail; // offset 0x4, size 0x4
};
// total size: 0x318
struct OSThread {
    // Members
    struct OSContext context; // offset 0x0, size 0x2C8
    unsigned short state; // offset 0x2C8, size 0x2
    unsigned short attr; // offset 0x2CA, size 0x2
    long suspend; // offset 0x2CC, size 0x4
    long priority; // offset 0x2D0, size 0x4
    long base; // offset 0x2D4, size 0x4
    void * val; // offset 0x2D8, size 0x4
    struct OSThreadQueue * queue; // offset 0x2DC, size 0x4
    struct OSThreadLink link; // offset 0x2E0, size 0x8
    struct OSThreadQueue queueJoin; // offset 0x2E8, size 0x8
    struct OSMutex * mutex; // offset 0x2F0, size 0x4
    struct OSMutexQueue queueMutex; // offset 0x2F4, size 0x8
    struct OSThreadLink linkActive; // offset 0x2FC, size 0x8
    unsigned char * stackBase; // offset 0x304, size 0x4
    unsigned long * stackEnd; // offset 0x308, size 0x4
    long error; // offset 0x30C, size 0x4
    void * specific[2]; // offset 0x310, size 0x8
};
static struct OSThread * __GXCurrentThread; // size: 0x4, address: 0x80D6BF88
static unsigned char CPGPLinked; // size: 0x1, address: 0x80D6BF8C
static int GXOverflowSuspendInProgress; // size: 0x4, address: 0x80D6BF90
static void (* BreakPointCB)(); // size: 0x4, address: 0x80D6BF94
static unsigned long __GXOverflowCount; // size: 0x4, address: 0x80D6BF98
enum /* @enum$5GXFifo_c */ {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
};
// total size: 0x13F8
struct __GXVerifyData {
    // Members
    void (* cb)(enum /* @enum$5GXFifo_c */ {
        GX_WARN_NONE = 0,
        GX_WARN_SEVERE = 1,
        GX_WARN_MEDIUM = 2,
        GX_WARN_ALL = 3,
    }, unsigned long, char *); // offset 0x0, size 0x4
    enum /* @enum$5GXFifo_c */ {
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
// Range: 0x803AC9DC -> 0x803ACA94
static void GXOverflowHandler() {
    // References
    // -> static struct OSThread * __GXCurrentThread;
    // -> struct __GXVerifyData * __gxVerif;
    // -> static int GXOverflowSuspendInProgress;
    // -> static unsigned long __GXOverflowCount;
}

// Range: 0x803ACA94 -> 0x803ACB24
static void GXUnderflowHandler() {
    // References
    // -> static int GXOverflowSuspendInProgress;
    // -> static struct OSThread * __GXCurrentThread;
    // -> struct __GXVerifyData * __gxVerif;
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
void * __cpReg; // size: 0x4, address: 0x80D6BF60
// total size: 0x2C8
struct OSContext {
    // Members
    unsigned long gpr[32]; // offset 0x0, size 0x80
    unsigned long cr; // offset 0x80, size 0x4
    unsigned long lr; // offset 0x84, size 0x4
    unsigned long ctr; // offset 0x88, size 0x4
    unsigned long xer; // offset 0x8C, size 0x4
    double fpr[32]; // offset 0x90, size 0x100
    unsigned long fpscr_pad; // offset 0x190, size 0x4
    unsigned long fpscr; // offset 0x194, size 0x4
    unsigned long srr0; // offset 0x198, size 0x4
    unsigned long srr1; // offset 0x19C, size 0x4
    unsigned short mode; // offset 0x1A0, size 0x2
    unsigned short state; // offset 0x1A2, size 0x2
    unsigned long gqr[8]; // offset 0x1A4, size 0x20
    unsigned long psf_pad; // offset 0x1C4, size 0x4
    double psf[32]; // offset 0x1C8, size 0x100
};
// Range: 0x803ACB24 -> 0x803ACBA4
static void GXBreakPointHandler(struct OSContext * context /* r1+0xC */) {
    // Local variables
    struct OSContext exceptionContext; // r1+0x10

    // References
    // -> static void (* BreakPointCB)();
    // -> struct __GXData_struct * const __GXData;
    // -> void * __cpReg;
}

// Range: 0x803ACBA4 -> 0x803ACC64
static void GXCPInterruptHandler(signed short interrupt /* r30 */, struct OSContext * context /* r31 */) {
    // References
    // -> struct __GXData_struct * const __GXData;
    // -> void * __cpReg;
}

// Range: 0x803ACC64 -> 0x803ACD90
void GXInitFifoBase(// total size: 0x80
struct {
    // Members
    unsigned char pad[128]; // offset 0x0, size 0x80
} * fifo /* r27 */, void * base /* r28 */, unsigned long size /* r29 */) {
    // Local variables
    struct __GXFifoObj * realFifo; // r30

    // References
    // -> static struct __GXFifoObj * GPFifo;
    // -> static struct __GXFifoObj * CPUFifo;
}

// Range: 0x803ACD90 -> 0x803ACED8
void GXInitFifoPtrs(// total size: 0x80
struct {
    // Members
    unsigned char pad[128]; // offset 0x0, size 0x80
} * fifo /* r1+0x8 */, void * readPtr /* r28 */, void * writePtr /* r29 */) {
    // Local variables
    struct __GXFifoObj * realFifo; // r31
    int enabled; // r27

    // References
    // -> static struct __GXFifoObj * GPFifo;
    // -> static struct __GXFifoObj * CPUFifo;
}

// Range: 0x803ACED8 -> 0x803ACFB8
void GXInitFifoLimits(// total size: 0x80
struct {
    // Members
    unsigned char pad[128]; // offset 0x0, size 0x80
} * fifo /* r1+0x8 */, unsigned long hiWatermark /* r29 */, unsigned long loWatermark /* r28 */) {
    // Local variables
    struct __GXFifoObj * realFifo; // r30

    // References
    // -> static struct __GXFifoObj * GPFifo;
}

void * __piReg; // size: 0x4, address: 0x80D6BF5C
// Range: 0x803ACFB8 -> 0x803AD128
void GXSetCPUFifo(// total size: 0x80
struct {
    // Members
    unsigned char pad[128]; // offset 0x0, size 0x80
} * fifo /* r1+0x8 */) {
    // Local variables
    struct __GXFifoObj * realFifo; // r31
    int enabled; // r27
    unsigned long reg; // r30
    unsigned long reg; // r29

    // References
    // -> void * __piReg;
    // -> static unsigned char CPGPLinked;
    // -> static struct __GXFifoObj * GPFifo;
    // -> static struct __GXFifoObj * CPUFifo;
}

// Range: 0x803AD128 -> 0x803AD2CC
void GXSetGPFifo(// total size: 0x80
struct {
    // Members
    unsigned char pad[128]; // offset 0x0, size 0x80
} * fifo /* r1+0x8 */) {
    // Local variables
    struct __GXFifoObj * realFifo; // r31
    int enabled; // r29
    unsigned long stbtmp; // r30

    // References
    // -> struct __GXData_struct * const __GXData;
    // -> void * __cpReg;
    // -> static unsigned char CPGPLinked;
    // -> static struct __GXFifoObj * GPFifo;
    // -> static struct __GXFifoObj * CPUFifo;
}

// Range: 0x803AD2CC -> 0x803AD3B4
void GXGetFifoPtrs(// total size: 0x80
struct {
    // Members
    unsigned char pad[128]; // offset 0x0, size 0x80
} * fifo /* r1+0x8 */, void * readPtr /* r1+0xC */, void * writePtr /* r1+0x10 */) {
    // Local variables
    struct __GXFifoObj * realFifo; // r31
    unsigned long temp; // r30
    unsigned long temp; // r29

    // References
    // -> void * __cpReg;
    // -> static struct __GXFifoObj * GPFifo;
    // -> void * __piReg;
    // -> static struct __GXFifoObj * CPUFifo;
}

// Range: 0x803AD3B4 -> 0x803AD3FC
void (* GXSetBreakPtCallback(void (* cb)() /* r1+0x8 */))() {
    // Local variables
    void (* oldcb)(); // r31
    int enabled; // r30

    // References
    // -> static void (* BreakPointCB)();
}

void * __GXCurrentBP; // size: 0x4, address: 0x80D6BF9C
// Range: 0x803AD3FC -> 0x803AD4D4
void GXEnableBreakPt(void * break_pt /* r31 */) {
    // Local variables
    int enabled; // r30

    // References
    // -> void * __GXCurrentBP;
    // -> struct __GXData_struct * const __GXData;
    // -> void * __cpReg;
}

// Range: 0x803AD4D4 -> 0x803AD550
void GXDisableBreakPt() {
    // Local variables
    int enabled; // r31

    // References
    // -> void * __GXCurrentBP;
    // -> struct __GXData_struct * const __GXData;
    // -> void * __cpReg;
}

// Range: 0x803AD550 -> 0x803AD5A4
void __GXFifoInit() {
    // References
    // -> static struct __GXFifoObj * GPFifo;
    // -> static struct __GXFifoObj * CPUFifo;
    // -> static int GXOverflowSuspendInProgress;
    // -> static struct OSThread * __GXCurrentThread;
}

// Range: 0x803AD5A4 -> 0x803AD5D0
static void __GXFifoReadEnable() {
    // References
    // -> struct __GXData_struct * const __GXData;
    // -> void * __cpReg;
}

// Range: 0x803AD5D0 -> 0x803AD5FC
static void __GXFifoReadDisable() {
    // References
    // -> struct __GXData_struct * const __GXData;
    // -> void * __cpReg;
}

// Range: 0x803AD5FC -> 0x803AD694
static void __GXFifoLink(unsigned char en /* r31 */) {
    // References
    // -> struct __GXData_struct * const __GXData;
    // -> void * __cpReg;
}

// Range: 0x803AD694 -> 0x803AD738
static void __GXWriteFifoIntEnable(unsigned char hiWatermarkEn /* r29 */, unsigned char loWatermarkEn /* r30 */) {
    // References
    // -> struct __GXData_struct * const __GXData;
    // -> void * __cpReg;
}

// Range: 0x803AD738 -> 0x803AD7DC
static void __GXWriteFifoIntReset(unsigned char hiWatermarkClr /* r29 */, unsigned char loWatermarkClr /* r30 */) {
    // References
    // -> struct __GXData_struct * const __GXData;
    // -> void * __cpReg;
}

// Range: 0x803AD7DC -> 0x803AD848
struct OSThread * GXSetCurrentGXThread() {
    // Local variables
    int enabled; // r31
    struct OSThread * prev; // r30

    // References
    // -> static struct OSThread * __GXCurrentThread;
    // -> static int GXOverflowSuspendInProgress;
}

// Range: 0x803AD848 -> 0x803AD850
struct OSThread * GXGetCurrentGXThread() {
    // References
    // -> static struct OSThread * __GXCurrentThread;
}

// Range: 0x803AD850 -> 0x803AD858
// total size: 0x80
struct {
    // Members
    unsigned char pad[128]; // offset 0x0, size 0x80
} * GXGetCPUFifo() {
    // References
    // -> static struct __GXFifoObj * CPUFifo;
}

// Range: 0x803AD858 -> 0x803AD860
// total size: 0x80
struct {
    // Members
    unsigned char pad[128]; // offset 0x0, size 0x80
} * GXGetGPFifo() {
    // References
    // -> static struct __GXFifoObj * GPFifo;
}


