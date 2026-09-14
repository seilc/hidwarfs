/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\gc\iSystem.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F1218 -> 0x800F24AC
*/
enum RwVideoModeFlag {
    rwVIDEOMODEEXCLUSIVE = 1,
    rwVIDEOMODEINTERLACE = 2,
    rwVIDEOMODEFFINTERLACE = 4,
    rwVIDEOMODE_PS2_FSAASHRINKBLIT = 256,
    rwVIDEOMODE_PS2_FSAAREADCIRCUIT = 512,
    rwVIDEOMODE_XBOX_WIDESCREEN = 256,
    rwVIDEOMODE_XBOX_PROGRESSIVE = 512,
    rwVIDEOMODE_XBOX_FIELD = 1024,
    rwVIDEOMODE_XBOX_10X11PIXELASPECT = 2048,
    rwVIDEOMODEFLAGFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
struct RwVideoMode {
    // Members
    int width; // offset 0x0, size 0x4
    int height; // offset 0x4, size 0x4
    int depth; // offset 0x8, size 0x4
    enum RwVideoModeFlag flags; // offset 0xC, size 0x4
    int refRate; // offset 0x10, size 0x4
    int format; // offset 0x14, size 0x4
};
struct RwVideoMode sVideoMode; // size: 0x18, address: 0x80C07A88
// total size: 0x10
struct RwMemoryFunctions {
    // Members
    void * (* rwmalloc)(unsigned long, unsigned int); // offset 0x0, size 0x4
    void (* rwfree)(void *); // offset 0x4, size 0x4
    void * (* rwrealloc)(void *, unsigned long, unsigned int); // offset 0x8, size 0x4
    void * (* rwcalloc)(unsigned long, unsigned long, unsigned int); // offset 0xC, size 0x4
};
// total size: 0x34
struct RwRaster {
    // Members
    struct RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    int width; // offset 0xC, size 0x4
    int height; // offset 0x10, size 0x4
    int depth; // offset 0x14, size 0x4
    int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    int originalWidth; // offset 0x28, size 0x4
    int originalHeight; // offset 0x2C, size 0x4
    int originalStride; // offset 0x30, size 0x4
};
// total size: 0x8
struct RwObject {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
// total size: 0x8
struct RwLLLink {
    // Members
    struct RwLLLink * next; // offset 0x0, size 0x4
    struct RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x8
struct RwLinkList {
    // Members
    struct RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x18
struct RwTexDictionary {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLinkList texturesInDict; // offset 0x8, size 0x8
    struct RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x58
struct RwTexture {
    // Members
    struct RwRaster * raster; // offset 0x0, size 0x4
    struct RwTexDictionary * dict; // offset 0x4, size 0x4
    struct RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    unsigned int filterAddressing; // offset 0x50, size 0x4
    int refCount; // offset 0x54, size 0x4
};
// total size: 0x18
struct RwResEntry {
    // Members
    struct RwLLLink link; // offset 0x0, size 0x8
    int size; // offset 0x8, size 0x4
    void * owner; // offset 0xC, size 0x4
    struct RwResEntry * * ownerRef; // offset 0x10, size 0x4
    void (* destroyNotify)(struct RwResEntry *); // offset 0x14, size 0x4
};
// Range: 0x800F1218 -> 0x800F1338
int iRwResourcesEmptyArena() {
    // Local variables
    int arena_size; // r31
    struct RwResEntry * entry; // r3
    unsigned int * p; // r8
    int i; // r9
}

// Range: 0x800F1338 -> 0x800F1358
void iVSync() {}

enum GXWarningLevel {
    GX_WARN_NONE = 0,
    GX_WARN_SEVERE = 1,
    GX_WARN_MEDIUM = 2,
    GX_WARN_ALL = 3,
};
void (* old_dsc)(unsigned short); // size: 0x4, address: 0x80C07AA0
// Range: 0x800F1358 -> 0x800F135C
void my_dsc() {}

static void * xfb1; // size: 0x4, address: 0x80C07AA4
static void * xfb2; // size: 0x4, address: 0x80C07AA8
// total size: 0x44
class StackCrawl {
    // Members
    unsigned int addresses[16]; // offset 0x0, size 0x40
    int numLevels; // offset 0x40, size 0x4
};
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
unsigned int FB_XRES; // size: 0x4, address: 0x80C00BDC
unsigned int FB_YRES; // size: 0x4, address: 0x80C00BE0
// Range: 0x800F135C -> 0x800F1360
void iExceptionMemCrash() {}

// Range: 0x800F1360 -> 0x800F13EC
static void TRCInit() {}

// Range: 0x800F13EC -> 0x800F141C
void iSystemGetWidthHeight(unsigned int & uWidth /* r0 */, unsigned int & uHeight /* r0 */, unsigned char bPALMode /* r0 */) {}

// Range: 0x800F141C -> 0x800F1478
void iSystemInit() {}

// Range: 0x800F1478 -> 0x800F14C0
void iSystemInitGraphics() {}

// Range: 0x800F14C0 -> 0x800F1518
void iSystemExit() {}

// Range: 0x800F1518 -> 0x800F15FC
static void iSystemRWDebugModeCB() {
    // Local variables
    int size; // r0
    int used; // r0

    // References
    // -> struct RwVideoMode sVideoMode;
}

// Range: 0x800F15FC -> 0x800F169C
static unsigned int RWAttachPlugins() {}

// Range: 0x800F169C -> 0x800F1710
static unsigned int iRenderWareInit1() {
    // Local variables
    struct RwMemoryFunctions newMemFuncs; // r1+0x8
}

// total size: 0xC
struct RwGameCubeDeviceConfig {
    // Members
    void * renderMode; // offset 0x0, size 0x4
    int pixFmt; // offset 0x4, size 0x4
    unsigned int fifoSize; // offset 0x8, size 0x4
};
struct RwGameCubeDeviceConfig deviceConfig; // size: 0xC, address: 0x80C07AAC
enum VITVMode {
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
enum VIXFBMode {
    VI_XFBMODE_SF = 0,
    VI_XFBMODE_DF = 1,
};
// total size: 0x3C
struct _GXRenderModeObj {
    // Members
    enum VITVMode viTVmode; // offset 0x0, size 0x4
    unsigned short fbWidth; // offset 0x4, size 0x2
    unsigned short efbHeight; // offset 0x6, size 0x2
    unsigned short xfbHeight; // offset 0x8, size 0x2
    unsigned short viXOrigin; // offset 0xA, size 0x2
    unsigned short viYOrigin; // offset 0xC, size 0x2
    unsigned short viWidth; // offset 0xE, size 0x2
    unsigned short viHeight; // offset 0x10, size 0x2
    enum VIXFBMode xFBmode; // offset 0x14, size 0x4
    unsigned char field_rendering; // offset 0x18, size 0x1
    unsigned char aa; // offset 0x19, size 0x1
    unsigned char sample_pattern[12][2]; // offset 0x1A, size 0x18
    unsigned char vfilter[7]; // offset 0x32, size 0x7
};
struct _GXRenderModeObj renderObject; // size: 0x3C, address: 0x80B82760
struct _GXRenderModeObj myGXNtsc480IntDf; // size: 0x3C, address: 0x804327C8
struct _GXRenderModeObj myGXPal528IntDf; // size: 0x3C, address: 0x80432804
// total size: 0x4
struct RwEngineOpenParams {
    // Members
    void * displayID; // offset 0x0, size 0x4
};
// total size: 0x14
struct RwObjectHasFrame {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLLLink lFrame; // offset 0x8, size 0x8
    struct RwObjectHasFrame * (* sync)(struct RwObjectHasFrame *); // offset 0x10, size 0x4
};
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
struct RwV3d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x40
struct RwMatrixTag {
    // Members
    struct RwV3d right; // offset 0x0, size 0xC
    unsigned int flags; // offset 0xC, size 0x4
    struct RwV3d up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    struct RwV3d at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
    struct RwV3d pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x8
struct RwV2d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x10
struct RwPlane {
    // Members
    struct RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
// total size: 0x14
struct RwFrustumPlane {
    // Members
    struct RwPlane plane; // offset 0x0, size 0x10
    unsigned char closestX; // offset 0x10, size 0x1
    unsigned char closestY; // offset 0x11, size 0x1
    unsigned char closestZ; // offset 0x12, size 0x1
    unsigned char pad; // offset 0x13, size 0x1
};
// total size: 0x18
struct RwBBox {
    // Members
    struct RwV3d sup; // offset 0x0, size 0xC
    struct RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x184
struct RwCamera {
    // Members
    struct RwObjectHasFrame object; // offset 0x0, size 0x14
    enum RwCameraProjection projectionType; // offset 0x14, size 0x4
    struct RwCamera * (* beginUpdate)(struct RwCamera *); // offset 0x18, size 0x4
    struct RwCamera * (* endUpdate)(struct RwCamera *); // offset 0x1C, size 0x4
    struct RwMatrixTag viewMatrix; // offset 0x20, size 0x40
    struct RwRaster * frameBuffer; // offset 0x60, size 0x4
    struct RwRaster * zBuffer; // offset 0x64, size 0x4
    struct RwV2d viewWindow; // offset 0x68, size 0x8
    struct RwV2d recipViewWindow; // offset 0x70, size 0x8
    struct RwV2d viewOffset; // offset 0x78, size 0x8
    float nearPlane; // offset 0x80, size 0x4
    float farPlane; // offset 0x84, size 0x4
    float fogPlane; // offset 0x88, size 0x4
    float zScale; // offset 0x8C, size 0x4
    float zShift; // offset 0x90, size 0x4
    struct RwFrustumPlane frustumPlanes[6]; // offset 0x94, size 0x78
    struct RwBBox frustumBoundBox; // offset 0x10C, size 0x18
    struct RwV3d frustumCorners[8]; // offset 0x124, size 0x60
};
// total size: 0x4
struct RwRGBA {
    // Members
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// Range: 0x800F1710 -> 0x800F18DC
static unsigned int iRenderWareInit2() {
    // Local variables
    struct RwEngineOpenParams openParams; // r1+0xC
    int idx; // r4
    struct RwCamera * cam; // r31
    struct RwRGBA bg; // r1+0x8

    // References
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
    // -> static void * xfb2;
    // -> static void * xfb1;
    // -> struct RwVideoMode sVideoMode;
    // -> struct RwGameCubeDeviceConfig deviceConfig;
    // -> struct _GXRenderModeObj renderObject;
    // -> struct _GXRenderModeObj myGXPal528IntDf;
    // -> struct _GXRenderModeObj myGXNtsc480IntDf;
}

enum _tagGameVidMode {
    eGameVidModeNTSC = 0,
    eGameVidModePAL = 1,
};
// Range: 0x800F18DC -> 0x800F1904
void iSystemRWExit() {}

struct _GXRenderModeObj * _RwDlRenderMode; // size: 0x4, address: 0x80C09FCC
// Range: 0x800F1904 -> 0x800F1958
void iSystemExitRWFailSafe() {
    // References
    // -> struct _GXRenderModeObj * _RwDlRenderMode;
}

int _RwGameCubeRasterExtOffset; // size: 0x4, address: 0x80C09FD8
// total size: 0x34
struct RwGameCubeRasterExtension {
    // Members
    unsigned int tlutObj[3]; // offset 0x0, size 0xC
    unsigned int format; // offset 0xC, size 0x4
    unsigned int tlutFmt; // offset 0x10, size 0x4
    unsigned int flags; // offset 0x14, size 0x4
    unsigned char * memory; // offset 0x18, size 0x4
    unsigned char * pixels; // offset 0x1C, size 0x4
    unsigned char * palette; // offset 0x20, size 0x4
    unsigned char * lockedPixels; // offset 0x24, size 0x4
    unsigned char * lockedBuffer; // offset 0x28, size 0x4
    void * region; // offset 0x2C, size 0x4
    unsigned short token; // offset 0x30, size 0x2
    unsigned char maxLOD; // offset 0x32, size 0x1
    unsigned char lockedMipLevel; // offset 0x33, size 0x1
};
// Range: 0x800F1958 -> 0x800F1A20
static struct RwTexture * TextureRead(const char * name /* r29 */, const char * maskName /* r30 */) {
    // Local variables
    char tmpname[256]; // r1+0xC
    struct RwTexture * result; // r31
    struct RwGameCubeRasterExtension * ext; // r3
    unsigned int assetid; // r0
    unsigned int tmpsize; // r1+0x8

    // References
    // -> int _RwGameCubeRasterExtOffset;
}

// Range: 0x800F1A20 -> 0x800F1A24
void null_func() {}

int the_heap; // size: 0x4, address: 0x80C07964
int the_heap; // size: 0x4, address: 0x80C07964
// Range: 0x800F1A24 -> 0x800F1A70
char * malloc(long msize /* r4 */) {
    // Local variables
    void * rt; // r31

    // References
    // -> int the_heap;
}

int the_heap; // size: 0x4, address: 0x80C07964
// Range: 0x800F1A70 -> 0x800F1A9C
void free(char * p /* r4 */) {
    // References
    // -> int the_heap;
}

// total size: 0x28
struct OSCalendarTime {
    // Members
    int sec; // offset 0x0, size 0x4
    int min; // offset 0x4, size 0x4
    int hour; // offset 0x8, size 0x4
    int mday; // offset 0xC, size 0x4
    int mon; // offset 0x10, size 0x4
    int year; // offset 0x14, size 0x4
    int wday; // offset 0x18, size 0x4
    int yday; // offset 0x1C, size 0x4
    int msec; // offset 0x20, size 0x4
    int usec; // offset 0x24, size 0x4
};
// Range: 0x800F1A9C -> 0x800F1AC8
long iGetMinute() {
    // Local variables
    struct OSCalendarTime td; // r1+0x8
}

// Range: 0x800F1AC8 -> 0x800F1AF4
long iGetHour() {
    // Local variables
    struct OSCalendarTime td; // r1+0x8
}

// Range: 0x800F1AF4 -> 0x800F1B20
long iGetDay() {
    // Local variables
    struct OSCalendarTime td; // r1+0x8
}

// Range: 0x800F1B20 -> 0x800F1B50
long iGetMonth() {
    // Local variables
    struct OSCalendarTime td; // r1+0x8
}

char * months[12]; // size: 0x30, address: 0x80432840
char * dotw[7]; // size: 0x1C, address: 0x80432870
// Range: 0x800F1B50 -> 0x800F1D08
unsigned long iGetCurrFormattedDate(char * p /* r30 */) {
    // Local variables
    struct OSCalendarTime td; // r1+0x8
    char * tp; // r31

    // References
    // -> char * months[12];
    // -> char * dotw[7];
}

// Range: 0x800F1D08 -> 0x800F1ED0
unsigned long iGetCurrFormattedTime(char * p /* r29 */) {
    // Local variables
    struct OSCalendarTime td; // r1+0x8
    char * tp; // r31
    int am; // r30
}

// total size: 0xC
struct AramAllocNode {
    // Members
    unsigned int pAramAddress; // offset 0x0, size 0x4
    unsigned int uAllocByteCount; // offset 0x4, size 0x4
    unsigned int uFlags; // offset 0x8, size 0x4
};
static struct AramAllocNode AramMgr[32]; // size: 0x180, address: 0x80B8279C
// Range: 0x800F1ED0 -> 0x800F2004
void * iSystemARAMAlloc(unsigned int numbytes_to_use /* r0 */) {
    // Local variables
    unsigned int uNumBytes; // r0
    unsigned int blockIndex; // r9
    unsigned int pOldEndAddress; // r3

    // References
    // -> static struct AramAllocNode AramMgr[32];
}

// Range: 0x800F2004 -> 0x800F2080
void iSystemARAMFree(void * ptr /* r0 */) {
    // Local variables
    unsigned int blockIndex; // r5

    // References
    // -> static struct AramAllocNode AramMgr[32];
}

static unsigned int pARAMBaseAddressBink; // size: 0x4, address: 0x80C07AB8
static unsigned int ARAMBytesForBink; // size: 0x4, address: 0x80C07ABC
static unsigned int pARAMBaseAddressFMOD; // size: 0x4, address: 0x80C07AC0
static unsigned int ARAMBytesForFMOD; // size: 0x4, address: 0x80C07AC4
// Range: 0x800F2080 -> 0x800F21C8
void iSystemARAMInit() {
    // Local variables
    int i; // r5

    // References
    // -> static unsigned int ARAMBytesForBink;
    // -> static struct AramAllocNode AramMgr[32];
    // -> static unsigned int pARAMBaseAddressBink;
    // -> static unsigned int pARAMBaseAddressFMOD;
    // -> static unsigned int ARAMBytesForFMOD;
}

// Range: 0x800F21C8 -> 0x800F21D0
unsigned int iSystemARAMBasePtrForFMOD() {
    // References
    // -> static unsigned int pARAMBaseAddressFMOD;
}

// Range: 0x800F21D0 -> 0x800F21D8
unsigned int iSystemARAMSizeForFMOD() {
    // References
    // -> static unsigned int ARAMBytesForFMOD;
}

enum RwDebugType {
    rwNADEBUGTYPE = 0,
    rwDEBUGASSERT = 1,
    rwDEBUGERROR = 2,
    rwDEBUGMESSAGE = 3,
    rwDEBUGTRACE = 4,
    rwDEBUGTYPEFORCEENUMSIZEINT = 2147483647,
};
// Range: 0x800F21D8 -> 0x800F23FC
void iSystemInitRWFailSafe() {
    // Local variables
    struct RwEngineOpenParams openParams; // r1+0x8
    unsigned long videoMode; // r0
    int idx; // r4

    // References
    // -> struct RwVideoMode sVideoMode;
    // -> struct RwGameCubeDeviceConfig deviceConfig;
    // -> struct _GXRenderModeObj renderObject;
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
    // -> struct _GXRenderModeObj myGXNtsc480IntDf;
    // -> struct _GXRenderModeObj myGXPal528IntDf;
}

// total size: 0x28
struct OSAlarm {
    // Members
    void (* handler)(struct OSAlarm *, struct OSContext *); // offset 0x0, size 0x4
    unsigned long tag; // offset 0x4, size 0x4
    long long fire; // offset 0x8, size 0x8
    struct OSAlarm * prev; // offset 0x10, size 0x4
    struct OSAlarm * next; // offset 0x14, size 0x4
    long long period; // offset 0x18, size 0x8
    long long start; // offset 0x20, size 0x8
};
// Range: 0x800F23FC -> 0x800F2420
void iSystemAlarmCallBack(struct OSAlarm * alarm /* r3 */) {}

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
// total size: 0x30
struct GCAlarm {
    // Members
    struct OSAlarm alarm; // offset 0x0, size 0x28
    struct OSThread * thread; // offset 0x28, size 0x4
};
// Range: 0x800F2420 -> 0x800F24AC
void iSystemSleep(int milliSecondsToSleep /* r30 */, unsigned int cancelAlarmsTag /* r31 */) {
    // Local variables
    struct GCAlarm gcAlarm; // r1+0x8
}


