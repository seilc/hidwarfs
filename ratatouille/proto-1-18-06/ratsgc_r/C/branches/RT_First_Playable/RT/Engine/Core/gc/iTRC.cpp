/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\gc\iTRC.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F268C -> 0x800F416C
*/
unsigned char mFirstFrame; // size: 0x1, address: 0x80BFF670
// total size: 0x30
struct OSFontHeader {
    // Members
    unsigned short fontType; // offset 0x0, size 0x2
    unsigned short firstChar; // offset 0x2, size 0x2
    unsigned short lastChar; // offset 0x4, size 0x2
    unsigned short invalChar; // offset 0x6, size 0x2
    unsigned short ascent; // offset 0x8, size 0x2
    unsigned short descent; // offset 0xA, size 0x2
    unsigned short width; // offset 0xC, size 0x2
    unsigned short leading; // offset 0xE, size 0x2
    unsigned short cellWidth; // offset 0x10, size 0x2
    unsigned short cellHeight; // offset 0x12, size 0x2
    unsigned long sheetSize; // offset 0x14, size 0x4
    unsigned short sheetFormat; // offset 0x18, size 0x2
    unsigned short sheetColumn; // offset 0x1A, size 0x2
    unsigned short sheetRow; // offset 0x1C, size 0x2
    unsigned short sheetWidth; // offset 0x1E, size 0x2
    unsigned short sheetHeight; // offset 0x20, size 0x2
    unsigned short widthTable; // offset 0x22, size 0x2
    unsigned long sheetImage; // offset 0x24, size 0x4
    unsigned long sheetFullSize; // offset 0x28, size 0x4
    unsigned char c0; // offset 0x2C, size 0x1
    unsigned char c1; // offset 0x2D, size 0x1
    unsigned char c2; // offset 0x2E, size 0x1
    unsigned char c3; // offset 0x2F, size 0x1
};
struct OSFontHeader * mFontData; // size: 0x4, address: 0x80C07AD8
void * mFontDataUnaligned; // size: 0x4, address: 0x80C07ADC
void * mXFBs[2]; // size: 0x8, address: 0x80C07AE0
void * mCurrentFrameBuffer; // size: 0x4, address: 0x80C07AE8
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
struct _GXRenderModeObj * mRenderMode; // size: 0x4, address: 0x80C07AEC
unsigned char mFontMalloced; // size: 0x1, address: 0x80C07AF0
float mRomFontScale; // size: 0x4, address: 0x80BFF674
static char textureBuffer[288]; // size: 0x120, address: 0x80B82920
char * diskNotIdentifiedMessage[21]; // size: 0x54, address: 0x80432890
char * diskCoverOpenMessage[21]; // size: 0x54, address: 0x804328E4
char * diskNoDiskMessage[21]; // size: 0x54, address: 0x80432938
char * diskWrongDiskMessage[21]; // size: 0x54, address: 0x8043298C
char * diskRetryMessage[21]; // size: 0x54, address: 0x804329E0
char * diskFatalMessage[21]; // size: 0x54, address: 0x80432A34
static char __FUNCTION__[10]; // size: 0xA, address: 0x80BFF678
enum xRegion {
    eRegionUnknown = -1,
    eRegionUS = 0,
    eRegionBE = 1,
    eRegionCH = 2,
    eRegionCZ = 3,
    eRegionDE = 4,
    eRegionDK = 5,
    eRegionES = 6,
    eRegionFI = 7,
    eRegionFR = 8,
    eRegionIT = 9,
    eRegionJP = 10,
    eRegionKR = 11,
    eRegionNL = 12,
    eRegionNO = 13,
    eRegionPL = 14,
    eRegionPT = 15,
    eRegionRU = 16,
    eRegionSE = 17,
    eRegionSK = 18,
    eRegionTW = 19,
    eRegionUK = 20,
    eRegionCount = 21,
    eRegionMaxCount = 32,
};
// Range: 0x800F268C -> 0x800F2790
static enum xRegion GetRegion() {
    // Local variables
    enum xRegion region; // r0
    unsigned char lang; // r0

    // References
    // -> static char __FUNCTION__[10];
}

// total size: 0x1
class ROMFont {
    // Static members
    static float mRomFontScale; // size: 0x4
    static struct _GXRenderModeObj * mRenderMode; // size: 0x4
    static void * mCurrentFrameBuffer; // size: 0x4
    static unsigned char mFirstFrame; // size: 0x1
    static void * mFontDataUnaligned; // size: 0x4
    static struct OSFontHeader * mFontData; // size: 0x4
    static unsigned char mFontMalloced; // size: 0x1
    static void * mXFBs[2]; // size: 0x8
};
// Range: 0x800F2790 -> 0x800F279C
void ROMFont::Init() {
    // References
    // -> struct OSFontHeader * mFontData;
}

static char __FUNCTION__[9]; // size: 0x9, address: 0x80BFF684
void * RwEngineInstance; // size: 0x4, address: 0x80C09F34
// total size: 0x8
struct RwLLLink {
    // Members
    struct RwLLLink * next; // offset 0x0, size 0x4
    struct RwLLLink * prev; // offset 0x4, size 0x4
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
// Range: 0x800F279C -> 0x800F2A30
void ROMFont::InitFont() {
    // Local variables
    unsigned int fontDataSize; // r30
    unsigned int fontTempSize; // r31
    struct RwResEntry * fontRes; // r3
    void * fontTemp; // r29

    // References
    // -> void * RwEngineInstance;
    // -> struct OSFontHeader * mFontData;
    // -> void * mFontDataUnaligned;
    // -> static char __FUNCTION__[9];
    // -> unsigned char mFontMalloced;
}

// Range: 0x800F2A30 -> 0x800F2B58
void ROMFont::DestroyFont() {
    // References
    // -> struct OSFontHeader * mFontData;
    // -> void * mFontDataUnaligned;
    // -> void * RwEngineInstance;
    // -> unsigned char mFontMalloced;
}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80BFF690
// total size: 0x4
struct _GXColor {
    // Members
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
// Range: 0x800F2B58 -> 0x800F2D38
void ROMFont::InitDisplay(struct _GXRenderModeObj * mode /* r30 */) {
    // Local variables
    float projection[4][4]; // r1+0x40
    float modelview[3][4]; // r1+0x10
    struct _GXColor Bkcolor; // r1+0xC

    // References
    // -> struct _GXRenderModeObj * mRenderMode;
    // -> void * mCurrentFrameBuffer;
    // -> void * mXFBs[2];
    // -> static char __FUNCTION__[12];
}

// Range: 0x800F2D38 -> 0x800F2D58
void ROMFont::DestroyDisplay() {}

// Range: 0x800F2D58 -> 0x800F2E7C
void ROMFont::InitGX() {
    // Local variables
    unsigned short xfbHeight; // r31
    float yScale; // f0

    // References
    // -> void * mCurrentFrameBuffer;
    // -> struct _GXRenderModeObj * mRenderMode;
}

// Range: 0x800F2E7C -> 0x800F2EC8
void ROMFont::InitVI() {
    // References
    // -> struct _GXRenderModeObj * mRenderMode;
    // -> void * mXFBs[2];
    // -> void * mCurrentFrameBuffer;
}

// Range: 0x800F2EC8 -> 0x800F2F94
void ROMFont::RenderBegin() {
    // References
    // -> struct _GXRenderModeObj * mRenderMode;
}

// Range: 0x800F2F94 -> 0x800F2FDC
void ROMFont::RenderEnd() {
    // References
    // -> void * mCurrentFrameBuffer;
}

// Range: 0x800F2FDC -> 0x800F304C
void ROMFont::SwapBuffers() {
    // References
    // -> void * mCurrentFrameBuffer;
    // -> void * mXFBs[2];
    // -> unsigned char mFirstFrame;
}

// Range: 0x800F304C -> 0x800F3124
void ROMFont::DrawCell(int x /* r0 */, int y /* r0 */) {
    // Local variables
    signed short posLeft; // r31
    signed short posRight; // r30
    signed short posTop; // r29
    signed short posBottom; // r28
    signed short texRight; // r27
    signed short texBottom; // r26

    // References
    // -> struct OSFontHeader * mFontData;
}

// total size: 0x20
struct _GXTexObj {
    // Members
    unsigned long dummy[8]; // offset 0x0, size 0x20
};
// Range: 0x800F314C -> 0x800F3204
void ROMFont::LoadTex(void * image /* r4 */) {
    // Local variables
    float mtx[3][4]; // r1+0x28
    struct _GXTexObj texObj; // r1+0x8
}

// Range: 0x800F322C -> 0x800F3320
long ROMFont::DrawString(int x /* r3 */, int y /* r25 */, char * string /* r26 */) {
    // Local variables
    long xLetter; // r27
    long width; // r1+0x8

    // References
    // -> static char textureBuffer[288];
    // -> float mRomFontScale;
}

// Range: 0x800F3320 -> 0x800F33D4
long ROMFont::GetWidth(char * string /* r3 */) {
    // Local variables
    long cx; // r29
    long width; // r1+0x8

    // References
    // -> float mRomFontScale;
    // -> static char textureBuffer[288];
}

// Range: 0x800F33D4 -> 0x800F34CC
void ROMFont::DrawTextBox(int x /* r25 */, int y /* r28 */, int width /* r26 */, int height /* r24 */, char * string /* r23 */) {
    // Local variables
    char * word; // r23
    char tempChars[256]; // r1+0x8
    long currentX; // r31
    long currentY; // r30
    long widthOfSpace; // r0
    int wordWidth; // r0

    // References
    // -> struct OSFontHeader * mFontData;
}

// Range: 0x800F34CC -> 0x800F3548
void ROMFont::DrawBlackScreen() {
    // References
    // -> void * mCurrentFrameBuffer;
    // -> void * mXFBs[2];
}

int mWasResetButtonPressed; // size: 0x4, address: 0x80C07AF4
unsigned char mResetEnabled; // size: 0x1, address: 0x80BFF69C
unsigned char mDiscIded; // size: 0x1, address: 0x80C07AF8
void (* mSndKill)(); // size: 0x4, address: 0x80C07AFC
void (* mMovieKillFunction)(); // size: 0x4, address: 0x80C07B00
// total size: 0x1
class ResetButton {
    // Static members
    static unsigned char mDiscIded; // size: 0x1
    static unsigned char mDelayedReset; // size: 0x1
    static unsigned char mResetEnabled; // size: 0x1
    static int mWasResetButtonPressed; // size: 0x4
    static void (* mMovieKillFunction)(); // size: 0x4
    static void (* mSndKill)(); // size: 0x4
};
// Range: 0x800F3548 -> 0x800F3554
void ResetButton::EnableReset() {
    // References
    // -> unsigned char mResetEnabled;
}

// Range: 0x800F3554 -> 0x800F3560
void ResetButton::DisableReset() {
    // References
    // -> unsigned char mResetEnabled;
}

// Range: 0x800F3560 -> 0x800F3568
void ResetButton::SetDiscIded(unsigned char value /* r0 */) {
    // References
    // -> unsigned char mDiscIded;
}

// Range: 0x800F3568 -> 0x800F3570
void ResetButton::SetSndKillFunction(void (* sndKillFunction)() /* r0 */) {
    // References
    // -> void (* mSndKill)();
}

// Range: 0x800F3570 -> 0x800F3578
void ResetButton::SetMovieKillFunction(void (* movieKillFunction)() /* r0 */) {
    // References
    // -> void (* mMovieKillFunction)();
}

// Range: 0x800F3578 -> 0x800F35C4
void ResetButton::CheckResetButton() {
    // Local variables
    int currentResetState; // r0

    // References
    // -> int mWasResetButtonPressed;
}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80BFF6A0
int GCN_DEMO_PARAM; // size: 0x4, address: 0x80C0821C
// Range: 0x800F35C4 -> 0x800F37B0
void ResetButton::ResetSystem() {
    // Local variables
    int dvdStatus; // r30
    unsigned char discIDed; // r0

    // References
    // -> void (* mSndKill)();
    // -> static char __FUNCTION__[12];
    // -> int GCN_DEMO_PARAM;
    // -> unsigned char mDiscIded;
    // -> void (* mMovieKillFunction)();
    // -> unsigned char mResetEnabled;
}

char mMessage[256]; // size: 0x100, address: 0x80B82A40
void (* mSndSuspend)(); // size: 0x4, address: 0x80C07B04
void (* mSndResume)(); // size: 0x4, address: 0x80C07B08
void (* mAsyncLoadSuspend)(); // size: 0x4, address: 0x80C07B0C
void (* mAsyncLoadResume)(); // size: 0x4, address: 0x80C07B10
void (* mPadStopRumbling)(); // size: 0x4, address: 0x80C07B14
void (* mMovieSuspendFunction)(); // size: 0x4, address: 0x80C07B18
void (* mMovieResumeFunction)(); // size: 0x4, address: 0x80C07B1C
void (* mMovieResetCallBack)(); // size: 0x4, address: 0x80C07B20
int gWasDiskError; // size: 0x4, address: 0x80C07B24
unsigned char mInCriticalSection; // size: 0x1, address: 0x80C07B28
unsigned char mFModError; // size: 0x1, address: 0x80C07B29
unsigned char mInFModLockingCode; // size: 0x1, address: 0x80C07B2A
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
struct OSThread * mMainThread; // size: 0x4, address: 0x80C07B2C
long mMainPriority; // size: 0x4, address: 0x80C07B30
struct OSThread * mFModThread; // size: 0x4, address: 0x80C07B34
long mFModPriority; // size: 0x4, address: 0x80C07B38
unsigned char mDiskErrorInHigherPriorityThread; // size: 0x1, address: 0x80C07B3C
// total size: 0x1
class iTRCDisk {
    // Static members
    static void (* mMovieResetCallBack)(); // size: 0x4
    static void (* mMovieResumeFunction)(); // size: 0x4
    static void (* mMovieSuspendFunction)(); // size: 0x4
    static void (* mPadStopRumbling)(); // size: 0x4
    static void (* mAsyncLoadResume)(); // size: 0x4
    static void (* mAsyncLoadSuspend)(); // size: 0x4
    static void (* mSndResume)(); // size: 0x4
    static void (* mSndSuspend)(); // size: 0x4
    static unsigned char mInFModLockingCode; // size: 0x1
    static long mFModPriority; // size: 0x4
    static struct OSThread * mFModThread; // size: 0x4
    static long mMainPriority; // size: 0x4
    static struct OSThread * mMainThread; // size: 0x4
    static unsigned char mDiskErrorInHigherPriorityThread; // size: 0x1
    static unsigned char mFModError; // size: 0x1
    static unsigned char mInCriticalSection; // size: 0x1
    static char mMessage[256]; // size: 0x100
};
// Range: 0x800F37B0 -> 0x800F380C
void iTRCDisk::Init() {
    // References
    // -> struct OSThread * mMainThread;
    // -> long mMainPriority;
    // -> unsigned char mInFModLockingCode;
    // -> unsigned char mFModError;
    // -> unsigned char mInCriticalSection;
    // -> int gWasDiskError;
}

// Range: 0x800F380C -> 0x800F3838
void iTRCDisk::SetErrorMessage(const char * errorMessage /* r4 */) {
    // References
    // -> char mMessage[256];
}

// Range: 0x800F3838 -> 0x800F3868
void iTRCDisk::ResetMessage() {
    // References
    // -> char mMessage[256];
}

// Range: 0x800F3868 -> 0x800F3870
void iTRCDisk::SetPadStopRumblingFunction(void (* padStopRumbing)() /* r0 */) {
    // References
    // -> void (* mPadStopRumbling)();
}

// Range: 0x800F3870 -> 0x800F3878
void iTRCDisk::SetSndSuspendFunction(void (* sndSuspendFunction)() /* r0 */) {
    // References
    // -> void (* mSndSuspend)();
}

// Range: 0x800F3878 -> 0x800F3880
void iTRCDisk::SetSndResumeFunction(void (* sndResumeFunction)() /* r0 */) {
    // References
    // -> void (* mSndResume)();
}

// Range: 0x800F3880 -> 0x800F3888
void iTRCDisk::SetAsyncLoadSuspendFunction(void (* asyncLoadSuspendFunction)() /* r0 */) {
    // References
    // -> void (* mAsyncLoadSuspend)();
}

// Range: 0x800F3888 -> 0x800F3890
void iTRCDisk::SetAsyncLoadResumeFunction(void (* asyncLoadResumeFunction)() /* r0 */) {
    // References
    // -> void (* mAsyncLoadResume)();
}

// Range: 0x800F3890 -> 0x800F3898
void iTRCDisk::SetMovieSuspendFunction(void (* movieSuspendFunction)() /* r0 */) {
    // References
    // -> void (* mMovieSuspendFunction)();
}

// Range: 0x800F3898 -> 0x800F38A0
void iTRCDisk::SetMovieResumeFunction(void (* movieResumeFunction)() /* r0 */) {
    // References
    // -> void (* mMovieResumeFunction)();
}

// Range: 0x800F38A0 -> 0x800F38A8
void iTRCDisk::SetMovieResetCallBack(void (* movieResetCallBack)() /* r0 */) {
    // References
    // -> void (* mMovieResetCallBack)();
}

// Range: 0x800F38A8 -> 0x800F38D4
unsigned char iTRCDisk::IsDiskIDed() {}

// Range: 0x800F38D4 -> 0x800F38DC
void iTRCDisk::SetInFModLockingCode(unsigned char value /* r0 */) {
    // References
    // -> unsigned char mInFModLockingCode;
}

// Range: 0x800F38DC -> 0x800F3930
void iTRCDisk::Shutdown() {
    // References
    // -> unsigned char mDiskErrorInHigherPriorityThread;
    // -> unsigned char mFModError;
    // -> unsigned char mInCriticalSection;
}

struct _GXRenderModeObj * _RwDlRenderMode; // size: 0x4, address: 0x80C09FCC
enum _GXCullMode {
    GX_CULL_NONE = 0,
    GX_CULL_FRONT = 1,
    GX_CULL_BACK = 2,
    GX_CULL_ALL = 3,
};
// Range: 0x800F3930 -> 0x800F3A54
void iTRCDisk::DisplayErrorMessage() {
    // Local variables
    enum _GXCullMode oldCullMode; // r1+0x8
    unsigned char exitRW; // r30
    int dvdStatus; // r29
    int i; // r29

    // References
    // -> int gWasDiskError;
    // -> char mMessage[256];
    // -> struct _GXRenderModeObj * _RwDlRenderMode;
}

// Range: 0x800F3A54 -> 0x800F3BA8
int iTRCDisk::SetDVDState() {
    // Local variables
    int dvdDriveStatus; // r31

    // References
    // -> char * diskNotIdentifiedMessage[21];
    // -> char mMessage[256];
    // -> char * diskFatalMessage[21];
    // -> char * diskRetryMessage[21];
    // -> char * diskCoverOpenMessage[21];
    // -> char * diskWrongDiskMessage[21];
    // -> char * diskNoDiskMessage[21];
}

// Range: 0x800F3BA8 -> 0x800F3C0C
unsigned char iTRCDisk::CheckDVDAndResetState() {
    // Local variables
    int dvdDriveStatus; // r0

    // References
    // -> unsigned char mDiskErrorInHigherPriorityThread;
    // -> unsigned char mFModError;
}

static long long sTimeLast; // size: 0x8, address: 0x80C07B40
static signed char init; // size: 0x1, address: 0x80C07B48
static const char * sLastFile; // size: 0x4, address: 0x80C07B4C
static signed char init; // size: 0x1, address: 0x80C07B50
static int sLastLine; // size: 0x4, address: 0x80C07B54
static signed char init; // size: 0x1, address: 0x80C07B58
static char __FUNCTION__[9]; // size: 0x9, address: 0x80BFF6AC
// Range: 0x800F3C0C -> 0x800F402C
unsigned char iTRCDisk::TRCCheck(const char * file /* r29 */, int line /* r30 */) {
    // Local variables
    struct OSThread * curThread; // r31
    struct OSThread * thread; // r31
    long long timeCurrent; // r28
    float timeElapsed; // f1
    int dvdDriveStatus; // r0
    unsigned char wasThereAnError; // r30

    // References
    // -> unsigned char mFModError;
    // -> struct OSThread * mFModThread;
    // -> long mFModPriority;
    // -> unsigned char mDiskErrorInHigherPriorityThread;
    // -> unsigned char mInCriticalSection;
    // -> void (* mSndResume)();
    // -> void (* mAsyncLoadResume)();
    // -> void (* mMovieResumeFunction)();
    // -> void (* mAsyncLoadSuspend)();
    // -> void (* mMovieSuspendFunction)();
    // -> void (* mPadStopRumbling)();
    // -> void (* mSndSuspend)();
    // -> static char __FUNCTION__[9];
    // -> static int sLastLine;
    // -> static const char * sLastFile;
    // -> static long long sTimeLast;
    // -> static signed char init;
    // -> static signed char init;
    // -> static signed char init;
}

// Range: 0x800F402C -> 0x800F40A8
void iTRCDisk::FMODCallBack(int status /* r0 */) {
    // References
    // -> struct OSThread * mFModThread;
    // -> long mFModPriority;
    // -> unsigned char mFModError;
    // -> unsigned char mInCriticalSection;
}

// Range: 0x800F40A8 -> 0x800F40DC
unsigned char iTRCDisk::CheckDiskErrorInHigherPriorityThread() {
    // References
    // -> unsigned char mDiskErrorInHigherPriorityThread;
}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80BFF6B8
// Range: 0x800F40DC -> 0x800F4134
void iTRCDisk::FMODUpdateDiskError() {
    // References
    // -> static char __FUNCTION__[20];
    // -> struct OSThread * mMainThread;
    // -> unsigned char mInFModLockingCode;
    // -> unsigned char mFModError;
}

// Range: 0x800F4134 -> 0x800F416C
void iTRCDisk::EnableMovieResetCallBack(unsigned char enable /* r0 */) {
    // References
    // -> void (* mMovieResetCallBack)();
}


