/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\dvd\src\dvdlow.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803A3F20 -> 0x803A5008
*/
static int StopAtNextInt; // size: 0x4, address: 0x80D6BE70
static unsigned long LastLength; // size: 0x4, address: 0x80D6BE74
static void (* Callback)(unsigned long); // size: 0x4, address: 0x80D6BE78
static void (* ResetCoverCallback)(unsigned long); // size: 0x4, address: 0x80D6BE7C
static long long LastResetEnd; // size: 0x8, address: 0x80D6BE80
static unsigned long ResetOccurred; // size: 0x4, address: 0x80D6BE88
static int WaitingCoverClose; // size: 0x4, address: 0x80D6BE8C
static int Breaking; // size: 0x4, address: 0x80D6BE90
static unsigned long WorkAroundType; // size: 0x4, address: 0x80D6BE94
static long WorkAroundSeekLocation; // size: 0x4, address: 0x80D6BE98
static long long LastReadFinished; // size: 0x8, address: 0x80D6BEA0
static long long LastReadIssued; // size: 0x8, address: 0x80D6BEA8
static int LastCommandWasRead; // size: 0x4, address: 0x80D6BEB0
static int FirstRead; // size: 0x4, address: 0x80D68030
static // total size: 0x14
struct {
    // Members
    long command; // offset 0x0, size 0x4
    void * address; // offset 0x4, size 0x4
    unsigned long length; // offset 0x8, size 0x4
    unsigned long offset; // offset 0xC, size 0x4
    void (* callback)(unsigned long); // offset 0x10, size 0x4
} CommandList[3]; // size: 0x3C, address: 0x80D57840
static long NextCommandNumber; // size: 0x4, address: 0x80D6BEB4
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
static struct OSAlarm AlarmForWA; // size: 0x28, address: 0x80D57880
static struct OSAlarm AlarmForTimeout; // size: 0x28, address: 0x80D578A8
static struct OSAlarm AlarmForBreak; // size: 0x28, address: 0x80D578D0
static // total size: 0xC
struct {
    // Members
    void * addr; // offset 0x0, size 0x4
    unsigned long length; // offset 0x4, size 0x4
    unsigned long offset; // offset 0x8, size 0x4
} Prev; // size: 0xC, address: 0x80D578F8
static // total size: 0xC
struct {
    // Members
    void * addr; // offset 0x0, size 0x4
    unsigned long length; // offset 0x4, size 0x4
    unsigned long offset; // offset 0x8, size 0x4
} Curr; // size: 0xC, address: 0x80D57904
// Range: 0x803A3F20 -> 0x803A3F60
void __DVDInitWA() {
    // References
    // -> static struct [anonymous] CommandList[3];
    // -> static long NextCommandNumber;
}

// Range: 0x803A3F60 -> 0x803A4050
static int ProcessNextCommand() {
    // Local variables
    long n; // r30

    // References
    // -> static struct [anonymous] CommandList[3];
    // -> static long NextCommandNumber;
}

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
// Range: 0x803A4050 -> 0x803A42D4
void __DVDInterruptHandler(struct OSContext * context /* r1+0xC */) {
    // Local variables
    void (* cb)(unsigned long); // r26
    struct OSContext exceptionContext; // r1+0x10
    unsigned long cause; // r31
    unsigned long reg; // r29
    unsigned long intr; // r30
    unsigned long mask; // r27

    // References
    // -> static int Breaking;
    // -> static void (* Callback)(unsigned long);
    // -> static long NextCommandNumber;
    // -> static struct [anonymous] CommandList[3];
    // -> static int WaitingCoverClose;
    // -> static void (* ResetCoverCallback)(unsigned long);
    // -> static long long LastResetEnd;
    // -> static unsigned long ResetOccurred;
    // -> static struct OSAlarm AlarmForTimeout;
    // -> static int StopAtNextInt;
    // -> static int LastCommandWasRead;
    // -> static struct [anonymous] Curr;
    // -> static struct [anonymous] Prev;
    // -> static int FirstRead;
    // -> static long long LastReadFinished;
}

// Range: 0x803A42D4 -> 0x803A4324
static void AlarmHandler() {
    // Local variables
    int processed; // r31
}

// Range: 0x803A4324 -> 0x803A4398
static void AlarmHandlerForTimeout(struct OSContext * context /* r1+0xC */) {
    // Local variables
    void (* cb)(unsigned long); // r31
    struct OSContext exceptionContext; // r1+0x10

    // References
    // -> static void (* Callback)(unsigned long);
}

// Range: 0x803A4398 -> 0x803A43E4
static void SetTimeoutAlarm(long long timeout /* r1+0x8 */) {
    // References
    // -> static struct OSAlarm AlarmForTimeout;
}

// Range: 0x803A43E4 -> 0x803A44C4
static void Read(void * addr /* r1+0x8 */, unsigned long length /* r31 */, unsigned long offset /* r1+0x10 */, void (* callback)(unsigned long) /* r1+0x14 */) {
    // References
    // -> static unsigned long LastLength;
    // -> static long long LastReadIssued;
    // -> static int LastCommandWasRead;
    // -> static int StopAtNextInt;
    // -> static void (* Callback)(unsigned long);
}

// total size: 0x20
struct DVDDiskID {
    // Members
    char gameName[4]; // offset 0x0, size 0x4
    char company[2]; // offset 0x4, size 0x2
    unsigned char diskNumber; // offset 0x6, size 0x1
    unsigned char gameVersion; // offset 0x7, size 0x1
    unsigned char streaming; // offset 0x8, size 0x1
    unsigned char streamingBufSize; // offset 0x9, size 0x1
    unsigned char padding[22]; // offset 0xA, size 0x16
};
// Range: 0x803A44C4 -> 0x803A4508
static int AudioBufferOn() {
    // Local variables
    struct DVDDiskID * id; // r31
}

// Range: 0x803A4508 -> 0x803A4594
static int HitCache(// total size: 0xC
struct {
    // Members
    void * addr; // offset 0x0, size 0x4
    unsigned long length; // offset 0x4, size 0x4
    unsigned long offset; // offset 0x8, size 0x4
} * curr /* r1+0x8 */, // total size: 0xC
struct {
    // Members
    void * addr; // offset 0x0, size 0x4
    unsigned long length; // offset 0x4, size 0x4
    unsigned long offset; // offset 0x8, size 0x4
} * prev /* r28 */) {
    // Local variables
    unsigned long blockNumOfPrevEnd; // r31
    unsigned long blockNumOfCurrStart; // r30
    unsigned long cacheBlockSize; // r29
}

// Range: 0x803A4594 -> 0x803A45E8
static void DoJustRead(void * addr /* r1+0x8 */, unsigned long length /* r1+0xC */, unsigned long offset /* r1+0x10 */, void (* callback)(unsigned long) /* r1+0x14 */) {
    // References
    // -> static long NextCommandNumber;
    // -> static struct [anonymous] CommandList[3];
}

// Range: 0x803A45E8 -> 0x803A468C
static void SeekTwiceBeforeRead(void * addr /* r1+0x8 */, unsigned long length /* r1+0xC */, unsigned long offset /* r28 */, void (* callback)(unsigned long) /* r29 */) {
    // Local variables
    unsigned long offsetToSeek; // r30

    // References
    // -> static long NextCommandNumber;
    // -> static struct [anonymous] CommandList[3];
    // -> static long WorkAroundSeekLocation;
}

// Range: 0x803A468C -> 0x803A4728
static void WaitBeforeRead(void * addr /* r1+0x8 */, unsigned long length /* r1+0xC */, unsigned long offset /* r1+0x10 */, void (* callback)(unsigned long) /* r1+0x14 */, long long wait /* r1+0x18 */) {
    // References
    // -> static struct OSAlarm AlarmForWA;
    // -> static long NextCommandNumber;
    // -> static struct [anonymous] CommandList[3];
}

// Range: 0x803A4728 -> 0x803A499C
int DVDLowRead(void * addr /* r27 */, unsigned long length /* r30 */, unsigned long offset /* r28 */, void (* callback)(unsigned long) /* r26 */) {
    // Local variables
    unsigned long blockNumOfPrevEnd; // r25
    unsigned long blockNumOfCurrStart; // r24
    long long diff; // r22

    // References
    // -> static long long LastReadFinished;
    // -> static struct [anonymous] Curr;
    // -> static struct [anonymous] Prev;
    // -> static int FirstRead;
    // -> static unsigned long WorkAroundType;
}

// Range: 0x803A499C -> 0x803A4A3C
int DVDLowSeek(unsigned long offset /* r31 */, void (* callback)(unsigned long) /* r1+0xC */) {
    // References
    // -> static int StopAtNextInt;
    // -> static void (* Callback)(unsigned long);
}

// Range: 0x803A4A3C -> 0x803A4A64
int DVDLowWaitCoverClose(void (* callback)(unsigned long) /* r3 */) {
    // References
    // -> static int StopAtNextInt;
    // -> static int WaitingCoverClose;
    // -> static void (* Callback)(unsigned long);
}

// Range: 0x803A4A64 -> 0x803A4B28
int DVDLowReadDiskID(struct DVDDiskID * diskID /* r31 */, void (* callback)(unsigned long) /* r1+0xC */) {
    // References
    // -> static int StopAtNextInt;
    // -> static void (* Callback)(unsigned long);
}

// Range: 0x803A4B28 -> 0x803A4B8C
int DVDLowStopMotor(void (* callback)(unsigned long) /* r1+0x8 */) {
    // References
    // -> static int StopAtNextInt;
    // -> static void (* Callback)(unsigned long);
}

// Range: 0x803A4B8C -> 0x803A4BF0
int DVDLowRequestError(void (* callback)(unsigned long) /* r1+0x8 */) {
    // References
    // -> static int StopAtNextInt;
    // -> static void (* Callback)(unsigned long);
}

// total size: 0x20
struct DVDDriveInfo {
    // Members
    unsigned short revisionLevel; // offset 0x0, size 0x2
    unsigned short deviceCode; // offset 0x2, size 0x2
    unsigned long releaseDate; // offset 0x4, size 0x4
    unsigned char padding[24]; // offset 0x8, size 0x18
};
// Range: 0x803A4BF0 -> 0x803A4C7C
int DVDLowInquiry(struct DVDDriveInfo * info /* r1+0x8 */, void (* callback)(unsigned long) /* r1+0xC */) {
    // References
    // -> static int StopAtNextInt;
    // -> static void (* Callback)(unsigned long);
}

// Range: 0x803A4C7C -> 0x803A4D0C
int DVDLowAudioStream(unsigned long subcmd /* r1+0x8 */, unsigned long length /* r1+0xC */, unsigned long offset /* r1+0x10 */, void (* callback)(unsigned long) /* r1+0x14 */) {
    // References
    // -> static int StopAtNextInt;
    // -> static void (* Callback)(unsigned long);
}

// Range: 0x803A4D0C -> 0x803A4D78
int DVDLowRequestAudioStatus(unsigned long subcmd /* r1+0x8 */, void (* callback)(unsigned long) /* r1+0xC */) {
    // References
    // -> static int StopAtNextInt;
    // -> static void (* Callback)(unsigned long);
}

// Range: 0x803A4D78 -> 0x803A4E50
int DVDLowAudioBufferConfig(int enable /* r1+0x8 */, unsigned long size /* r30 */, void (* callback)(unsigned long) /* r1+0x10 */) {
    // Local variables
    unsigned long bufSize; // r29
    unsigned long trigger; // r28

    // References
    // -> static int StopAtNextInt;
    // -> static void (* Callback)(unsigned long);
}

// Range: 0x803A4E50 -> 0x803A4F14
void DVDLowReset() {
    // Local variables
    unsigned long reg; // r31
    long long resetStart; // r29

    // References
    // -> static long long LastResetEnd;
    // -> static unsigned long ResetOccurred;
}

// Range: 0x803A4F14 -> 0x803A4F2C
int DVDLowBreak() {
    // References
    // -> static int Breaking;
    // -> static int StopAtNextInt;
}

// Range: 0x803A4F2C -> 0x803A4F64
void (* DVDLowClearCallback())(unsigned long) {
    // Local variables
    void (* old)(unsigned long); // r31

    // References
    // -> static void (* Callback)(unsigned long);
    // -> static int WaitingCoverClose;
}

// Range: 0x803A4F64 -> 0x803A4FD0
void __DVDLowSetWAType(unsigned long type /* r30 */, long seekLoc /* r1+0xC */) {
    // Local variables
    int enabled; // r31

    // References
    // -> static long WorkAroundSeekLocation;
    // -> static unsigned long WorkAroundType;
}

// Range: 0x803A4FD0 -> 0x803A5008
int __DVDLowTestAlarm(const struct OSAlarm * alarm /* r3 */) {
    // References
    // -> static struct OSAlarm AlarmForTimeout;
    // -> static struct OSAlarm AlarmForBreak;
}


