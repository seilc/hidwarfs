/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\gc\iTRC.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012CBA0 -> 0x8012E944
*/
unsigned char mFirstFrame; // size: 0x1, address: 0x80D61DA0
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
struct OSFontHeader * mFontData; // size: 0x4, address: 0x80D69DB8
void * mFontDataUnaligned; // size: 0x4, address: 0x80D69DBC
void * mXFBs[2]; // size: 0x8, address: 0x80D69DC0
void * mCurrentFrameBuffer; // size: 0x4, address: 0x80D69DC8
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
struct _GXRenderModeObj * mRenderMode; // size: 0x4, address: 0x80D69DCC
unsigned char mFontMalloced; // size: 0x1, address: 0x80D69DD0
float mRomFontScale; // size: 0x4, address: 0x80D61DA4
static char textureBuffer[288]; // size: 0x120, address: 0x80CE49C0
char * diskNotIdentifiedMessage[21]; // size: 0x54, address: 0x805174D0
char * diskCoverOpenMessage[21]; // size: 0x54, address: 0x80517524
char * diskNoDiskMessage[21]; // size: 0x54, address: 0x80517578
char * diskWrongDiskMessage[21]; // size: 0x54, address: 0x805175CC
char * diskRetryMessage[21]; // size: 0x54, address: 0x80517620
char * diskFatalMessage[21]; // size: 0x54, address: 0x80517674
static char __FUNCTION__[10]; // size: 0xA, address: 0x80D61DA8
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
// Range: 0x8012CBA0 -> 0x8012CCD4
static enum xRegion GetRegion() {
    // Local variables
    enum xRegion region; // r31
    unsigned char lang; // r30

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
// Range: 0x8012CCD4 -> 0x8012CCE0
void ROMFont::Init() {
    // References
    // -> struct OSFontHeader * mFontData;
}

static char __FUNCTION__[9]; // size: 0x9, address: 0x80D61DB2
const char * _rwMemoryLastAllocFile; // size: 0x4, address: 0x80D6C318
unsigned int _rwMemoryLastAllocLine; // size: 0x4, address: 0x80D6C31C
void * RwEngineInstance; // size: 0x4, address: 0x80D6C374
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
// Range: 0x8012CCE0 -> 0x8012CFC0
void ROMFont::InitFont() {
    // Local variables
    unsigned int fontDataSize; // r29
    unsigned int fontTempSize; // r28
    struct RwResEntry * fontRes; // r31
    void * fontTemp; // r30

    // References
    // -> void * RwEngineInstance;
    // -> struct OSFontHeader * mFontData;
    // -> void * mFontDataUnaligned;
    // -> static char __FUNCTION__[9];
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> unsigned char mFontMalloced;
}

// Range: 0x8012CFC0 -> 0x8012D104
void ROMFont::DestroyFont() {
    // Local variables
    struct RwResEntry * entry; // r31

    // References
    // -> struct OSFontHeader * mFontData;
    // -> void * mFontDataUnaligned;
    // -> void * RwEngineInstance;
    // -> unsigned char mFontMalloced;
}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80D61DBB
// total size: 0x4
struct _GXColor {
    // Members
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
// Range: 0x8012D104 -> 0x8012D334
void ROMFont::InitDisplay(struct _GXRenderModeObj * mode /* r30 */) {
    // Local variables
    float projection[4][4]; // r1+0x40
    float modelview[3][4]; // r1+0x10
    struct _GXColor Bkcolor; // r1+0xC

    // References
    // -> struct _GXRenderModeObj * mRenderMode;
    // -> void * mXFBs[2];
    // -> void * mCurrentFrameBuffer;
    // -> static char __FUNCTION__[12];
}

// Range: 0x8012D334 -> 0x8012D354
void ROMFont::DestroyDisplay() {}

// Range: 0x8012D354 -> 0x8012D4B0
void ROMFont::InitGX() {
    // Local variables
    unsigned short xfbHeight; // r31
    float yScale; // f31

    // References
    // -> void * mCurrentFrameBuffer;
    // -> struct _GXRenderModeObj * mRenderMode;
}

// Range: 0x8012D4B0 -> 0x8012D504
void ROMFont::InitVI() {
    // Local variables
    unsigned long nin; // r31

    // References
    // -> struct _GXRenderModeObj * mRenderMode;
    // -> void * mXFBs[2];
    // -> void * mCurrentFrameBuffer;
}

// Range: 0x8012D504 -> 0x8012D5E8
void ROMFont::RenderBegin() {
    // References
    // -> struct _GXRenderModeObj * mRenderMode;
}

// Range: 0x8012D5E8 -> 0x8012D630
void ROMFont::RenderEnd() {
    // References
    // -> void * mCurrentFrameBuffer;
}

// Range: 0x8012D630 -> 0x8012D6B0
void ROMFont::SwapBuffers() {
    // References
    // -> void * mCurrentFrameBuffer;
    // -> void * mXFBs[2];
    // -> unsigned char mFirstFrame;
}

// Range: 0x8012D6B0 -> 0x8012D7B4
void ROMFont::DrawCell(int x /* r1+0x8 */, int y /* r1+0xC */) {
    // Local variables
    signed short posLeft; // r31
    signed short posRight; // r29
    signed short posTop; // r30
    signed short posBottom; // r28
    signed short texLeft; // r27
    signed short texRight; // r26
    signed short texTop; // r25
    signed short texBottom; // r24

    // References
    // -> struct OSFontHeader * mFontData;
}

// total size: 0x20
struct _GXTexObj {
    // Members
    unsigned long dummy[8]; // offset 0x0, size 0x20
};
// Range: 0x8012D808 -> 0x8012D8C4
void ROMFont::LoadTex(void * image /* r1+0x8 */) {
    // Local variables
    float mtx[3][4]; // r1+0x2C
    struct _GXTexObj texObj; // r1+0xC
}

// Range: 0x8012D90C -> 0x8012D9FC
long ROMFont::DrawString(int x /* r1+0x8 */, int y /* r1+0xC */, char * string /* r30 */) {
    // Local variables
    long xLetter; // r31
    long width; // r1+0x10

    // References
    // -> static char textureBuffer[288];
    // -> float mRomFontScale;
}

// Range: 0x8012D9FC -> 0x8012DAA4
long ROMFont::GetWidth(char * string /* r30 */) {
    // Local variables
    long cx; // r31
    long width; // r1+0x8

    // References
    // -> float mRomFontScale;
    // -> static char textureBuffer[288];
}

// Range: 0x8012DAA4 -> 0x8012DBA4
void ROMFont::DrawTextBox(int x /* r27 */, int y /* r24 */, int width /* r1+0x8 */, int height /* r1+0xC */, char * string /* r25 */) {
    // Local variables
    char * word; // r30
    char tempChars[256]; // r1+0x10
    long currentX; // r31
    long currentY; // r29
    long widthOfSpace; // r26
    int wordWidth; // r28

    // References
    // -> struct OSFontHeader * mFontData;
}

// Range: 0x8012DBA4 -> 0x8012DC30
void ROMFont::DrawBlackScreen() {
    // References
    // -> void * mCurrentFrameBuffer;
    // -> void * mXFBs[2];
}

int mWasResetButtonPressed; // size: 0x4, address: 0x80D69DD4
unsigned char mResetEnabled; // size: 0x1, address: 0x80D61DC7
unsigned char mDiscIded; // size: 0x1, address: 0x80D69DD8
void (* mSndKill)(); // size: 0x4, address: 0x80D69DDC
void (* mMovieKillFunction)(); // size: 0x4, address: 0x80D69DE0
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
// Range: 0x8012DC30 -> 0x8012DC3C
void ResetButton::EnableReset() {
    // References
    // -> unsigned char mResetEnabled;
}

// Range: 0x8012DC3C -> 0x8012DC48
void ResetButton::DisableReset() {
    // References
    // -> unsigned char mResetEnabled;
}

// Range: 0x8012DC48 -> 0x8012DC50
void ResetButton::SetDiscIded(unsigned char value /* r3 */) {
    // References
    // -> unsigned char mDiscIded;
}

// Range: 0x8012DC50 -> 0x8012DC58
void ResetButton::SetSndKillFunction(void (* sndKillFunction)() /* r3 */) {
    // References
    // -> void (* mSndKill)();
}

// Range: 0x8012DC58 -> 0x8012DC60
void ResetButton::SetMovieKillFunction(void (* movieKillFunction)() /* r3 */) {
    // References
    // -> void (* mMovieKillFunction)();
}

// Range: 0x8012DC60 -> 0x8012DCAC
void ResetButton::CheckResetButton() {
    // Local variables
    int currentResetState; // r31

    // References
    // -> int mWasResetButtonPressed;
}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80D61DC8
int GCN_DEMO_PARAM; // size: 0x4, address: 0x80D6A5B4
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
// Range: 0x8012DCAC -> 0x8012DEC8
void ResetButton::ResetSystem() {
    // Local variables
    struct OSThread * curThread; // r1+0x8
    int dvdStatus; // r31
    unsigned char discIDed; // r30
    unsigned char notIded; // r28

    // References
    // -> void (* mSndKill)();
    // -> static char __FUNCTION__[12];
    // -> int GCN_DEMO_PARAM;
    // -> unsigned char mDiscIded;
    // -> void (* mMovieKillFunction)();
    // -> unsigned char mResetEnabled;
}

char mMessage[256]; // size: 0x100, address: 0x80CE4AE0
void (* mSndSuspend)(); // size: 0x4, address: 0x80D69DE4
void (* mSndResume)(); // size: 0x4, address: 0x80D69DE8
void (* mAsyncLoadSuspend)(); // size: 0x4, address: 0x80D69DEC
void (* mAsyncLoadResume)(); // size: 0x4, address: 0x80D69DF0
void (* mPadStopRumbling)(); // size: 0x4, address: 0x80D69DF4
void (* mMovieSuspendFunction)(); // size: 0x4, address: 0x80D69DF8
void (* mMovieResumeFunction)(); // size: 0x4, address: 0x80D69DFC
void (* mMovieResetCallBack)(); // size: 0x4, address: 0x80D69E00
int gWasDiskError; // size: 0x4, address: 0x80D69E04
unsigned char mInCriticalSection; // size: 0x1, address: 0x80D69E08
unsigned char mFModError; // size: 0x1, address: 0x80D69E09
unsigned char mInFModLockingCode; // size: 0x1, address: 0x80D69E0A
struct OSThread * mMainThread; // size: 0x4, address: 0x80D69E0C
long mMainPriority; // size: 0x4, address: 0x80D69E10
struct OSThread * mFModThread; // size: 0x4, address: 0x80D69E14
long mFModPriority; // size: 0x4, address: 0x80D69E18
unsigned char mDiskErrorInHigherPriorityThread; // size: 0x1, address: 0x80D69E1C
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
// Range: 0x8012DEC8 -> 0x8012DF34
void iTRCDisk::Init() {
    // References
    // -> struct OSThread * mMainThread;
    // -> long mMainPriority;
    // -> unsigned char mInFModLockingCode;
    // -> unsigned char mFModError;
    // -> unsigned char mInCriticalSection;
    // -> int gWasDiskError;
}

// Range: 0x8012DF34 -> 0x8012DF64
void iTRCDisk::SetErrorMessage(const char * errorMessage /* r1+0x8 */) {
    // References
    // -> char mMessage[256];
}

// Range: 0x8012DF64 -> 0x8012DF94
void iTRCDisk::ResetMessage() {
    // References
    // -> char mMessage[256];
}

// Range: 0x8012DF94 -> 0x8012DF9C
void iTRCDisk::SetPadStopRumblingFunction(void (* padStopRumbing)() /* r3 */) {
    // References
    // -> void (* mPadStopRumbling)();
}

// Range: 0x8012DF9C -> 0x8012DFA4
void iTRCDisk::SetSndSuspendFunction(void (* sndSuspendFunction)() /* r3 */) {
    // References
    // -> void (* mSndSuspend)();
}

// Range: 0x8012DFA4 -> 0x8012DFAC
void iTRCDisk::SetSndResumeFunction(void (* sndResumeFunction)() /* r3 */) {
    // References
    // -> void (* mSndResume)();
}

// Range: 0x8012DFAC -> 0x8012DFB4
void iTRCDisk::SetAsyncLoadSuspendFunction(void (* asyncLoadSuspendFunction)() /* r3 */) {
    // References
    // -> void (* mAsyncLoadSuspend)();
}

// Range: 0x8012DFB4 -> 0x8012DFBC
void iTRCDisk::SetAsyncLoadResumeFunction(void (* asyncLoadResumeFunction)() /* r3 */) {
    // References
    // -> void (* mAsyncLoadResume)();
}

// Range: 0x8012DFBC -> 0x8012DFC4
void iTRCDisk::SetMovieSuspendFunction(void (* movieSuspendFunction)() /* r3 */) {
    // References
    // -> void (* mMovieSuspendFunction)();
}

// Range: 0x8012DFC4 -> 0x8012DFCC
void iTRCDisk::SetMovieResumeFunction(void (* movieResumeFunction)() /* r3 */) {
    // References
    // -> void (* mMovieResumeFunction)();
}

// Range: 0x8012DFCC -> 0x8012DFD4
void iTRCDisk::SetMovieResetCallBack(void (* movieResetCallBack)() /* r3 */) {
    // References
    // -> void (* mMovieResetCallBack)();
}

// Range: 0x8012DFD4 -> 0x8012E000
unsigned char iTRCDisk::IsDiskIDed() {}

// Range: 0x8012E000 -> 0x8012E008
void iTRCDisk::SetInFModLockingCode(unsigned char value /* r3 */) {
    // References
    // -> unsigned char mInFModLockingCode;
}

// Range: 0x8012E008 -> 0x8012E064
void iTRCDisk::Shutdown() {
    // References
    // -> unsigned char mDiskErrorInHigherPriorityThread;
    // -> unsigned char mFModError;
    // -> unsigned char mInCriticalSection;
}

struct _GXRenderModeObj * _RwDlRenderMode; // size: 0x4, address: 0x80D6C410
enum _GXCullMode {
    GX_CULL_NONE = 0,
    GX_CULL_FRONT = 1,
    GX_CULL_BACK = 2,
    GX_CULL_ALL = 3,
};
// Range: 0x8012E064 -> 0x8012E188
void iTRCDisk::DisplayErrorMessage() {
    // Local variables
    enum _GXCullMode oldCullMode; // r1+0x8
    unsigned char exitRW; // r29
    int dvdStatus; // r31
    int i; // r30

    // References
    // -> int gWasDiskError;
    // -> char mMessage[256];
    // -> struct _GXRenderModeObj * _RwDlRenderMode;
}

// Range: 0x8012E188 -> 0x8012E2F4
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

// Range: 0x8012E2F4 -> 0x8012E35C
unsigned char iTRCDisk::CheckDVDAndResetState() {
    // Local variables
    int dvdDriveStatus; // r31
    int checkDVD; // r1+0x8

    // References
    // -> unsigned char mDiskErrorInHigherPriorityThread;
    // -> unsigned char mFModError;
}

static long long sTimeLast; // size: 0x8, address: 0x80D69E20
static signed char init; // size: 0x1, address: 0x80D69E28
static const char * sLastFile; // size: 0x4, address: 0x80D69E2C
static signed char init; // size: 0x1, address: 0x80D69E30
static int sLastLine; // size: 0x4, address: 0x80D69E34
static signed char init; // size: 0x1, address: 0x80D69E38
static char __FUNCTION__[9]; // size: 0x9, address: 0x80D61DD4
// Range: 0x8012E35C -> 0x8012E7E8
unsigned char iTRCDisk::TRCCheck(const char * file /* r24 */, int line /* r25 */) {
    // Local variables
    struct OSThread * curThread; // r30
    struct OSThread * thread; // r31
    long long timeCurrent; // r28
    float timeElapsed; // f31
    int dvdDriveStatus; // r27
    int checkDVD; // r1+0x8
    unsigned char wasThereAnError; // r26

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

// Range: 0x8012E7E8 -> 0x8012E874
void iTRCDisk::FMODCallBack(int status /* r1+0x8 */) {
    // References
    // -> struct OSThread * mFModThread;
    // -> long mFModPriority;
    // -> unsigned char mFModError;
    // -> unsigned char mInCriticalSection;
}

// Range: 0x8012E874 -> 0x8012E8A8
unsigned char iTRCDisk::CheckDiskErrorInHigherPriorityThread() {
    // References
    // -> unsigned char mDiskErrorInHigherPriorityThread;
}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80D61DDD
// Range: 0x8012E8A8 -> 0x8012E904
void iTRCDisk::FMODUpdateDiskError() {
    // References
    // -> static char __FUNCTION__[20];
    // -> struct OSThread * mMainThread;
    // -> unsigned char mInFModLockingCode;
    // -> unsigned char mFModError;
}

// Range: 0x8012E904 -> 0x8012E944
void iTRCDisk::EnableMovieResetCallBack(unsigned char enable /* r1+0x8 */) {
    // References
    // -> void (* mMovieResetCallBack)();
}


