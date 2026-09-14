/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\driver\gcn\dldevice.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80457180 -> 0x8045959C
*/
static int _RwDlCopyClear; // size: 0x4, address: 0x80D6C3A0
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
enum _GXPixelFmt _RwDlPixelFormat; // size: 0x4, address: 0x80D6C3A4
enum _GXPixelFmt _RwDlCurPixelFormat; // size: 0x4, address: 0x80D6C3A8
int _RwGameCubeVideoMode; // size: 0x4, address: 0x80D6C3AC
static struct RwVideoMode _RwDlVideoModes[4]; // size: 0x60, address: 0x80558540
static void * _RwDl_FIFO_XFB; // size: 0x4, address: 0x80D6C3B4
static unsigned int _RwDlFifoSize; // size: 0x4, address: 0x80D68A7C
static void * _RwGCXFB1; // size: 0x4, address: 0x80D6C3B8
static void * _RwGCXFB2; // size: 0x4, address: 0x80D6C3BC
static void * _RwGCXFBCopy; // size: 0x4, address: 0x80D6C3C0
static void * _RwGCXFBDisp; // size: 0x4, address: 0x80D6C3C4
static int _RwDlFrameCurrent; // size: 0x4, address: 0x80D6C3C8
static int _RwDlFrameNew; // size: 0x4, address: 0x80D6C3CC
static int _RwDlFrameTokenNew; // size: 0x4, address: 0x80D6C3D0
static int _RwDlFrameTokenCurrent; // size: 0x4, address: 0x80D6C3D4
static int _RwDlFirstFrame; // size: 0x4, address: 0x80D68A80
static int _RwDlBreakPointEnabled; // size: 0x4, address: 0x80D6C3D8
static int _RwDlFrameReadyOnToken; // size: 0x4, address: 0x80D6C3DC
static int _RwDlFrameWait; // size: 0x4, address: 0x80D6C3E0
static int _RwDlFrameGo; // size: 0x4, address: 0x80D6C3E4
static int _RwDlLatency; // size: 0x4, address: 0x80D68A84
static unsigned char _RwDlRetraceCount; // size: 0x1, address: 0x80D68A88
static unsigned char _RwDlRetraceMinCount; // size: 0x1, address: 0x80D68A89
static char __dbFunctionName[15]; // size: 0xF, address: 0x804EE878
static int swap; // size: 0x4, address: 0x80D6C3E8
// total size: 0x8
struct _rwGCFrame {
    // Members
    void * XFBCopy; // offset 0x0, size 0x4
    void * FIFOWritePtr; // offset 0x4, size 0x4
};
static struct _rwGCFrame _RwGCFrameQueue[3]; // size: 0x18, address: 0x80D5DD50
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
// total size: 0x8
struct OSThreadQueue {
    // Members
    struct OSThread * head; // offset 0x0, size 0x4
    struct OSThread * tail; // offset 0x4, size 0x4
};
static struct OSThreadQueue _RwDlWaitingDoneRender; // size: 0x8, address: 0x80D6C3F4
// Range: 0x80457180 -> 0x80457254
static void _rwDlBreakNext() {
    // Local variables
    int nextFrame; // r31

    // References
    // -> static int swap;
    // -> static int _RwDlFrameReadyOnToken;
    // -> int _RwDlFSAA;
    // -> static struct OSThreadQueue _RwDlWaitingDoneRender;
    // -> static int _RwDlFrameCurrent;
    // -> static struct _rwGCFrame _RwGCFrameQueue[3];
    // -> static int _RwDlBreakPointEnabled;
    // -> static int _RwDlFrameNew;
    // -> static int _RwDlLatency;
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EE887
// Range: 0x80457254 -> 0x804572BC
static void _rwDlBreakPtCallback() {
    // References
    // -> static int _RwDlFrameWait;
    // -> static void * _RwGCXFBDisp;
    // -> static int _RwDlFrameCurrent;
    // -> static struct _rwGCFrame _RwGCFrameQueue[3];
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EE89C
static unsigned short _RwDlFrameSwap[3]; // size: 0x6, address: 0x80D6C3FC
// Range: 0x804572BC -> 0x804573CC
static void _rwDlVIPreRetraceCallback() {
    // Local variables
    signed short token; // r30

    // References
    // -> static int _RwDlFrameGo;
    // -> static int _RwDlFrameReadyOnToken;
    // -> static int _RwDlLatency;
    // -> static int _RwDlFrameTokenCurrent;
    // -> static int _RwDlFirstFrame;
    // -> static void * _RwGCXFBDisp;
    // -> static void * _RwGCXFB1;
    // -> static void * _RwGCXFB2;
    // -> static unsigned char _RwDlRetraceCount;
    // -> static unsigned char _RwDlRetraceMinCount;
    // -> static unsigned short _RwDlFrameSwap[3];
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804EE8B6
// Range: 0x804573CC -> 0x8045742C
static void _rwDlVIPostRetraceCallback() {
    // References
    // -> static int _RwDlFrameGo;
    // -> static int _RwDlFrameWait;
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EE8D1
// Range: 0x8045742C -> 0x8045744C
static int _rwDlNullStandard(void * out /* r3 */, void * inOut /* r4 */, int in /* r5 */) {
    // References
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804EE9BC
// total size: 0x8
struct RwStandard {
    // Members
    int nStandard; // offset 0x0, size 0x4
    int (* fpStandard)(void *, void *, int); // offset 0x4, size 0x4
};
// Range: 0x8045744C -> 0x80457538
static int _rwDlDeviceSystemStandards(int (* * standardFunctions)(void *, void *, int) /* r3 */, int numStandardsFunctions /* r4 */) {
    // Local variables
    int i; // r31
    int numDriverFunctions; // r30
    struct RwStandard rwDlStandards[27]; // r1+0x8

    // References
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EE9D7
static struct _GXRenderModeObj _RwGameCubeRenderModeObj; // size: 0x3C, address: 0x80D5DD68
struct _GXRenderModeObj GXNtsc480IntDf; // size: 0x3C, address: 0x8053FDB0
struct _GXRenderModeObj GXPal528IntDf; // size: 0x3C, address: 0x805401AC
struct _GXRenderModeObj GXMpal480IntDf; // size: 0x3C, address: 0x80540008
// Range: 0x80457538 -> 0x804577F4
static void _rwDlRenderModeSelect(struct _GXRenderModeObj * renderMode /* r29 */, enum _GXPixelFmt pixFmt /* r28 */) {
    // Local variables
    struct RwError _rwErrorCode; // r1+0x10
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[22];
    // -> int _RwGameCubeVideoMode;
    // -> struct _GXRenderModeObj GXMpal480IntDf;
    // -> struct _GXRenderModeObj * _RwDlRenderMode;
    // -> struct _GXRenderModeObj GXPal528IntDf;
    // -> struct _GXRenderModeObj GXNtsc480IntDf;
    // -> static struct RwVideoMode _RwDlVideoModes[4];
    // -> enum _GXPixelFmt _RwDlPixelFormat;
    // -> enum _GXPixelFmt _RwDlCurPixelFormat;
    // -> static struct _GXRenderModeObj _RwGameCubeRenderModeObj;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EE9ED
// Range: 0x804577F4 -> 0x80457A80
static void _rwDlRenderModeInit(struct _GXRenderModeObj * renderMode /* r31 */, enum _GXPixelFmt pixFmt /* r30 */) {
    // References
    // -> static int _RwDlFirstFrame;
    // -> int _RwDlFSAA;
    // -> int _RwDlFSAATop;
    // -> int _RwDlHalfHeight;
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EEA01
// Range: 0x80457A80 -> 0x80457AC0
int _rwDeviceRegisterPlugin() {
    // References
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[12]; // size: 0xC, address: 0x804EEA19
static int gxInit; // size: 0x4, address: 0x80D6C3EC
// total size: 0x8
struct RwRwDeviceGlobals {
    // Members
    struct RwCamera * curCamera; // offset 0x0, size 0x4
    struct RwMemoryFunctions * memFuncs; // offset 0x4, size 0x4
};
struct RwRwDeviceGlobals dgGGlobals; // size: 0x8, address: 0x80D6C414
static void * _RwDlDefaultFifo; // size: 0x4, address: 0x80D6C404
static // total size: 0x80
struct {
    // Members
    unsigned char pad[128]; // offset 0x0, size 0x80
} * _RwDlDefaultFifoObj; // size: 0x4, address: 0x80D6C408
static struct OSThread * _RwDlLastRenderingThread; // size: 0x4, address: 0x80D6C3F0
// total size: 0xC
struct RwGameCubeDeviceConfig {
    // Members
    void * renderMode; // offset 0x0, size 0x4
    int pixFmt; // offset 0x4, size 0x4
    unsigned int fifoSize; // offset 0x8, size 0x4
};
// Range: 0x80457AC0 -> 0x8045809C
static int _rwDlSystem(int request /* r1+0x8 */, void * out /* r28 */, void * inOut /* r22 */, int in /* r24 */) {
    // Local variables
    struct RwVideoMode * vpMode; // r29
    struct RwDevice * deviceOut; // r27
    struct RwEngineOpenParams * initParams; // r26
    struct RwGameCubeDeviceConfig * deviceConfig; // r30
    unsigned int XFBSize; // r25
    // total size: 0x80
    struct {
        // Members
        unsigned char pad[128]; // offset 0x0, size 0x80
    } tmpFIFO; // r1+0xC

    // References
    // -> static int _RwDlFrameTokenCurrent;
    // -> static int _RwDlFrameTokenNew;
    // -> static int _RwDlFrameReadyOnToken;
    // -> static struct OSThreadQueue _RwDlWaitingDoneRender;
    // -> static struct OSThread * _RwDlLastRenderingThread;
    // -> static unsigned char _RwDlRetraceMinCount;
    // -> static unsigned char _RwDlRetraceCount;
    // -> struct _GXRenderModeObj * _RwDlRenderMode;
    // -> enum _GXPixelFmt _RwDlPixelFormat;
    // -> unsigned short _RwDlTokenLastSeen;
    // -> static struct [anonymous] * _RwDlDefaultFifoObj;
    // -> static unsigned int _RwDlFifoSize;
    // -> static void * _RwDlDefaultFifo;
    // -> static int gxInit;
    // -> static void * _RwDl_FIFO_XFB;
    // -> static void * _RwGCXFBCopy;
    // -> static void * _RwGCXFBDisp;
    // -> static void * _RwGCXFB2;
    // -> static void * _RwGCXFB1;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[12];
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> struct RwRwDeviceGlobals dgGGlobals;
    // -> static struct RwVideoMode _RwDlVideoModes[4];
    // -> int _RwGameCubeVideoMode;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EEA25
// Range: 0x8045809C -> 0x804581B8
int _rwDlCameraClear(void * cameraIn /* r1+0x8 */, void * colorIn /* r28 */, int clearFlags /* r29 */) {
    // Local variables
    struct RwRect rect; // r1+0x10
    struct RwRaster * raster; // r31

    // References
    // -> int _RwDlFSAA;
    // -> static int _RwDlCopyClear;
    // -> static char __dbFunctionName[17];
}

static float projVector[7]; // size: 0x1C, address: 0x80558790
static char __dbFunctionName[23]; // size: 0x17, address: 0x804EEA36
// Range: 0x804581B8 -> 0x80458930
int _rwDlCameraBeginUpdate(void * cameraIn /* r1+0x8 */) {
    // Local variables
    struct RwCamera * camera; // r30
    struct RwRaster * raster; // r31
    struct OSThread * lastRenderingThread; // r24
    struct RwMatrixTag viewoffset; // r1+0xC
    struct RwV3d * right; // r28
    struct RwV3d * up; // r27
    struct RwV3d * at; // r26
    struct RwV3d * pos; // r25
    struct RwGameCubeRasterExtension * rasExt; // r23

    // References
    // -> int _RwDlHalfHeight;
    // -> struct _GXRenderModeObj * _RwDlRenderMode;
    // -> int _RwDlFSAATop;
    // -> int _RwDlFSAA;
    // -> enum _GXPixelFmt _RwDlPixelFormat;
    // -> enum _GXPixelFmt _RwDlCurPixelFormat;
    // -> static float projVector[7];
    // -> struct RwMatrixTag _RwDlInvCamLTM;
    // -> struct RwRwDeviceGlobals dgGGlobals;
    // -> static struct OSThread * _RwDlLastRenderingThread;
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EEA4D
// Range: 0x80458930 -> 0x80458958
int _rwDlCameraEndUpdate() {
    // References
    // -> struct RwRwDeviceGlobals dgGGlobals;
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EEA62
// Range: 0x80458958 -> 0x80458D68
int _rwDlRasterShowRaster() {
    // Local variables
    void * tmpRead; // r1+0x10
    void * tmpWrite; // r1+0xC
    int interruptsEnabled; // r31
    int waitFrame; // r1+0x8
    int bufferOffset; // r26

    // References
    // -> int _RwDlFSAATop;
    // -> static void * _RwGCXFBCopy;
    // -> static void * _RwGCXFB1;
    // -> static void * _RwGCXFB2;
    // -> struct _GXRenderModeObj * _RwDlRenderMode;
    // -> static int _RwDlCopyClear;
    // -> static int _RwDlBreakPointEnabled;
    // -> static int _RwDlLatency;
    // -> static int _RwDlFrameTokenNew;
    // -> static int _RwDlFrameNew;
    // -> static unsigned short _RwDlFrameSwap[3];
    // -> static struct _rwGCFrame _RwGCFrameQueue[3];
    // -> int _RwDlFSAA;
    // -> static struct OSThreadQueue _RwDlWaitingDoneRender;
    // -> static int _RwDlFrameCurrent;
    // -> static char __dbFunctionName[22];
}

static struct RwDevice rwDlDriverDevice; // size: 0x38, address: 0x80558804
static char __dbFunctionName[19]; // size: 0x13, address: 0x804EEA78
// Range: 0x80458D68 -> 0x80458D8C
struct RwDevice * _rwDeviceGetHandle() {
    // References
    // -> static struct RwDevice rwDlDriverDevice;
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EEA8B
// Range: 0x80458D8C -> 0x80458EBC
void _rwDlTransformSetup(struct RwMatrixTag * ltm /* r30 */, int normals /* r1+0x8 */) {
    // Local variables
    struct RwMatrixTag tmpMtx; // r1+0x3C
    struct RwMatrixTag * transMtx; // r31
    float mtx[3][4]; // r1+0xC

    // References
    // -> struct RwMatrixTag _RwDlInvCamLTM;
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[29]; // size: 0x1D, address: 0x804EEA9F
// Range: 0x80458EBC -> 0x804594E0
void RwGameCubeCameraTextureFlush(struct RwRaster * raster /* r31 */, int boxFilter /* r26 */) {
    // Local variables
    unsigned int offset; // r27
    struct RwRaster * dstParent; // r29
    struct RwGameCubeRasterExtension * dstRasExt; // r28
    struct RwError _rwErrorCode; // r1+0x18
    struct RwError _rwErrorCode; // r1+0x10
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> struct _GXRenderModeObj * _RwDlRenderMode;
    // -> static int _RwDlCopyClear;
    // -> static char __dbFunctionName[29];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EEABC
// Range: 0x804594E0 -> 0x80459528
void RwGameCubeGetXFBs(void * xfbDisp /* r3 */, void * xfbCopy /* r4 */) {
    // References
    // -> static void * _RwGCXFBCopy;
    // -> static void * _RwGCXFBDisp;
    // -> static int _RwDlFrameTokenCurrent;
    // -> static int _RwDlFrameTokenNew;
    // -> static int _RwDlFrameReadyOnToken;
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[29]; // size: 0x1D, address: 0x804EEACE
// Range: 0x80459528 -> 0x8045959C
void RwGameCubeSetMinRetraceCount(unsigned char minCount /* r31 */) {
    // References
    // -> static unsigned char _RwDlRetraceMinCount;
    // -> static char __dbFunctionName[29];
}


