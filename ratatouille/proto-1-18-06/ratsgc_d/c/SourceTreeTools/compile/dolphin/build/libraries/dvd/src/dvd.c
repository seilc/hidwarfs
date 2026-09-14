/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\dvd\src\dvd.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803A5C60 -> 0x803A8500
*/
const char * __DVDVersion; // size: 0x4, address: 0x80D68040
static struct DVDCommandBlock * executing; // size: 0x4, address: 0x80D6BED8
// total size: 0x20
struct DVDBB2 {
    // Members
    unsigned long bootFilePosition; // offset 0x0, size 0x4
    unsigned long FSTPosition; // offset 0x4, size 0x4
    unsigned long FSTLength; // offset 0x8, size 0x4
    unsigned long FSTMaxLength; // offset 0xC, size 0x4
    void * FSTAddress; // offset 0x10, size 0x4
    unsigned long userPosition; // offset 0x14, size 0x4
    unsigned long userLength; // offset 0x18, size 0x4
    unsigned long padding0; // offset 0x1C, size 0x4
};
static struct DVDBB2 BB2; // size: 0x20, address: 0x80D57920
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
static struct DVDDiskID CurrDiskID; // size: 0x20, address: 0x80D57940
static struct DVDDiskID * IDShouldBe; // size: 0x4, address: 0x80D6BEDC
// total size: 0x40
struct OSBootInfo_s {
    // Members
    struct DVDDiskID DVDDiskID; // offset 0x0, size 0x20
    unsigned long magic; // offset 0x20, size 0x4
    unsigned long version; // offset 0x24, size 0x4
    unsigned long memorySize; // offset 0x28, size 0x4
    unsigned long consoleType; // offset 0x2C, size 0x4
    void * arenaLo; // offset 0x30, size 0x4
    void * arenaHi; // offset 0x34, size 0x4
    void * FSTLocation; // offset 0x38, size 0x4
    unsigned long FSTMaxLength; // offset 0x3C, size 0x4
};
static struct OSBootInfo_s * bootInfo; // size: 0x4, address: 0x80D6BEE0
static int autoInvalidation; // size: 0x4, address: 0x80D68044
static int PauseFlag; // size: 0x4, address: 0x80D6BEE4
static int PausingFlag; // size: 0x4, address: 0x80D6BEE8
static int AutoFinishing; // size: 0x4, address: 0x80D6BEEC
static int FatalErrorFlag; // size: 0x4, address: 0x80D6BEF0
static unsigned long CurrCommand; // size: 0x4, address: 0x80D6BEF4
static unsigned long Canceling; // size: 0x4, address: 0x80D6BEF8
static void (* CancelCallback)(long, struct DVDCommandBlock *); // size: 0x4, address: 0x80D6BEFC
static unsigned long ResumeFromHere; // size: 0x4, address: 0x80D6BF00
static unsigned long CancelLastError; // size: 0x4, address: 0x80D6BF04
static unsigned long LastError; // size: 0x4, address: 0x80D6BF08
static long NumInternalRetry; // size: 0x4, address: 0x80D6BF0C
static int ResetRequired; // size: 0x4, address: 0x80D6BF10
static int FirstTimeInBootrom; // size: 0x4, address: 0x80D6BF14
// total size: 0x30
struct DVDCommandBlock {
    // Members
    struct DVDCommandBlock * next; // offset 0x0, size 0x4
    struct DVDCommandBlock * prev; // offset 0x4, size 0x4
    unsigned long command; // offset 0x8, size 0x4
    long state; // offset 0xC, size 0x4
    unsigned long offset; // offset 0x10, size 0x4
    unsigned long length; // offset 0x14, size 0x4
    void * addr; // offset 0x18, size 0x4
    unsigned long currTransferSize; // offset 0x1C, size 0x4
    unsigned long transferredSize; // offset 0x20, size 0x4
    struct DVDDiskID * id; // offset 0x24, size 0x4
    void (* callback)(long, struct DVDCommandBlock *); // offset 0x28, size 0x4
    void * userData; // offset 0x2C, size 0x4
};
static struct DVDCommandBlock DummyCommandBlock; // size: 0x30, address: 0x80D57960
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
static struct OSAlarm ResetAlarm; // size: 0x28, address: 0x80D57990
static unsigned long MotorState; // size: 0x4, address: 0x80D6BF18
static void (* checkOptionalCommand)(struct DVDCommandBlock *, void (*)(unsigned long)); // size: 0x4, address: 0x80D68048
// Range: 0x803A5C60 -> 0x803A5C64
static void defaultOptionalCommandChecker() {}

static int DVDInitialized; // size: 0x4, address: 0x80D6BF1C
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
struct OSThreadQueue __DVDThreadQueue; // size: 0x8, address: 0x80D6BED0
// Range: 0x803A5C64 -> 0x803A5D44
void DVDInit() {
    // References
    // -> static int FirstTimeInBootrom;
    // -> static struct OSBootInfo_s * bootInfo;
    // -> struct OSThreadQueue __DVDThreadQueue;
    // -> static struct DVDDiskID * IDShouldBe;
    // -> static unsigned long MotorState;
    // -> static int DVDInitialized;
    // -> const char * __DVDVersion;
}

void (* LastState)(struct DVDCommandBlock *); // size: 0x4, address: 0x80D6BF20
// Range: 0x803A5D44 -> 0x803A5DF4
static void stateReadingFST() {
    // References
    // -> static struct DVDBB2 BB2;
    // -> static struct OSBootInfo_s * bootInfo;
    // -> void (* LastState)(struct DVDCommandBlock *);
}

// Range: 0x803A5DF4 -> 0x803A5EE0
static void cbForStateReadingFST(unsigned long intType /* r29 */) {
    // Local variables
    struct DVDCommandBlock * finished; // r30

    // References
    // -> static struct DVDCommandBlock DummyCommandBlock;
    // -> static struct DVDCommandBlock * executing;
    // -> static long NumInternalRetry;
}

// Range: 0x803A5EE0 -> 0x803A5F9C
static void cbForStateError(unsigned long intType /* r1+0x8 */) {
    // Local variables
    struct DVDCommandBlock * finished; // r31

    // References
    // -> static void (* CancelCallback)(long, struct DVDCommandBlock *);
    // -> static unsigned long Canceling;
    // -> static struct DVDCommandBlock DummyCommandBlock;
    // -> static struct DVDCommandBlock * executing;
    // -> static int FatalErrorFlag;
}

// Range: 0x803A5F9C -> 0x803A5FD0
static void stateError(unsigned long error /* r1+0x8 */) {}

// Range: 0x803A5FD0 -> 0x803A6004
static void stateTimeout() {}

// Range: 0x803A6004 -> 0x803A602C
static void stateGettingError() {}

// Range: 0x803A602C -> 0x803A60E0
static unsigned long CategorizeError(unsigned long error /* r3 */) {
    // References
    // -> static struct DVDCommandBlock * executing;
    // -> static unsigned long LastError;
    // -> static long NumInternalRetry;
}

// Range: 0x803A60E0 -> 0x803A618C
static int CheckCancel(unsigned long resume /* r1+0x8 */) {
    // Local variables
    struct DVDCommandBlock * finished; // r31

    // References
    // -> static void (* CancelCallback)(long, struct DVDCommandBlock *);
    // -> static struct DVDCommandBlock DummyCommandBlock;
    // -> static struct DVDCommandBlock * executing;
    // -> static unsigned long Canceling;
    // -> static unsigned long ResumeFromHere;
}

// Range: 0x803A618C -> 0x803A6358
static void cbForStateGettingError(unsigned long intType /* r27 */) {
    // Local variables
    unsigned long error; // r30
    unsigned long status; // r31
    unsigned long errorCategory; // r29
    unsigned long resume; // r28

    // References
    // -> static struct DVDCommandBlock * executing;
    // -> void (* LastState)(struct DVDCommandBlock *);
}

// Range: 0x803A6358 -> 0x803A63CC
static void cbForUnrecoveredError(unsigned long intType /* r31 */) {}

// Range: 0x803A63CC -> 0x803A642C
static void cbForUnrecoveredErrorRetry(unsigned long intType /* r31 */) {}

// Range: 0x803A642C -> 0x803A6454
static void stateGoToRetry() {}

// Range: 0x803A6454 -> 0x803A6524
static void cbForStateGoToRetry(unsigned long intType /* r31 */) {
    // References
    // -> static struct DVDCommandBlock * executing;
    // -> static int ResetRequired;
    // -> static unsigned long CurrCommand;
    // -> static long NumInternalRetry;
}

// Range: 0x803A6524 -> 0x803A6604
static void stateCheckID() {
    // References
    // -> static struct DVDCommandBlock * executing;
    // -> void (* LastState)(struct DVDCommandBlock *);
    // -> static struct DVDDiskID * IDShouldBe;
    // -> static struct DVDDiskID CurrDiskID;
    // -> static struct DVDBB2 BB2;
    // -> static unsigned long CurrCommand;
}

// Range: 0x803A6604 -> 0x803A6638
static void stateCheckID3() {
    // References
    // -> static struct DVDDiskID * IDShouldBe;
}

// Range: 0x803A6638 -> 0x803A666C
static void stateCheckID2a() {
    // References
    // -> static struct DVDDiskID * IDShouldBe;
}

// Range: 0x803A666C -> 0x803A6720
static void cbForStateCheckID2a(unsigned long intType /* r31 */) {
    // References
    // -> static struct DVDCommandBlock * executing;
    // -> static long NumInternalRetry;
}

// Range: 0x803A6720 -> 0x803A6758
static void stateCheckID2() {
    // References
    // -> static struct DVDBB2 BB2;
}

// Range: 0x803A6758 -> 0x803A67F0
static void cbForStateCheckID1(unsigned long intType /* r31 */) {
    // References
    // -> static struct DVDCommandBlock * executing;
    // -> static long NumInternalRetry;
}

// Range: 0x803A67F0 -> 0x803A68A0
static void cbForStateCheckID2(unsigned long intType /* r31 */) {
    // References
    // -> static long NumInternalRetry;
}

// Range: 0x803A68A0 -> 0x803A6970
static void cbForStateCheckID3(unsigned long intType /* r31 */) {
    // References
    // -> static struct DVDCommandBlock * executing;
    // -> static long NumInternalRetry;
}

// Range: 0x803A6970 -> 0x803A69B4
static void AlarmHandler() {
    // References
    // -> static struct DVDCommandBlock * executing;
    // -> void (* LastState)(struct DVDCommandBlock *);
    // -> static struct DVDDiskID CurrDiskID;
}

// Range: 0x803A69B4 -> 0x803A6A88
static void stateCoverClosed() {
    // Local variables
    struct DVDCommandBlock * finished; // r31

    // References
    // -> static struct OSAlarm ResetAlarm;
    // -> static unsigned long MotorState;
    // -> static struct DVDCommandBlock DummyCommandBlock;
    // -> static struct DVDCommandBlock * executing;
    // -> static unsigned long CurrCommand;
}

// Range: 0x803A6A88 -> 0x803A6AB8
static void stateCoverClosed_CMD() {
    // References
    // -> static struct DVDDiskID CurrDiskID;
}

// Range: 0x803A6AB8 -> 0x803A6B68
static void cbForStateCoverClosed(unsigned long intType /* r31 */) {
    // References
    // -> static long NumInternalRetry;
}

// Range: 0x803A6B68 -> 0x803A6B90
static void stateMotorStopped() {}

// Range: 0x803A6B90 -> 0x803A6BF0
static void cbForStateMotorStopped(unsigned long intType /* r1+0x8 */) {
    // References
    // -> static struct DVDCommandBlock * executing;
}

// Range: 0x803A6BF0 -> 0x803A6D84
static void stateReady() {
    // Local variables
    struct DVDCommandBlock * finished; // r31

    // References
    // -> static struct DVDCommandBlock * executing;
    // -> static unsigned long MotorState;
    // -> static unsigned long ResumeFromHere;
    // -> static unsigned long CancelLastError;
    // -> static unsigned long CurrCommand;
    // -> static struct DVDCommandBlock DummyCommandBlock;
    // -> static int FatalErrorFlag;
    // -> static int PausingFlag;
    // -> static int PauseFlag;
}

// Range: 0x803A6D84 -> 0x803A70E4
static void stateBusy(struct DVDCommandBlock * block /* r31 */) {
    // Local variables
    struct DVDCommandBlock * finished; // r30

    // References
    // -> static void (* checkOptionalCommand)(struct DVDCommandBlock *, void (*)(unsigned long));
    // -> static int AutoFinishing;
    // -> static struct DVDCommandBlock * executing;
    // -> static struct DVDCommandBlock DummyCommandBlock;
    // -> void (* LastState)(struct DVDCommandBlock *);
}

static unsigned long ImmCommand[3]; // size: 0xC, address: 0x8053D564
static unsigned long DmaCommand[1]; // size: 0x4, address: 0x80D68054
// Range: 0x803A70E4 -> 0x803A715C
static int IsImmCommandWithResult(unsigned long command /* r3 */) {
    // Local variables
    unsigned long i; // r31

    // References
    // -> static unsigned long ImmCommand[3];
}

// Range: 0x803A715C -> 0x803A71CC
static int IsDmaCommand(unsigned long command /* r3 */) {
    // Local variables
    unsigned long i; // r31

    // References
    // -> static unsigned long DmaCommand[1];
}

// Range: 0x803A71CC -> 0x803A76BC
static void cbForStateBusy(unsigned long intType /* r29 */) {
    // Local variables
    struct DVDCommandBlock * finished; // r31
    long result; // r27

    // References
    // -> static struct DVDCommandBlock DummyCommandBlock;
    // -> static struct DVDCommandBlock * executing;
    // -> static unsigned long CurrCommand;
    // -> static int AutoFinishing;
    // -> static unsigned long MotorState;
    // -> static long NumInternalRetry;
    // -> static void (* CancelCallback)(long, struct DVDCommandBlock *);
    // -> static unsigned long Canceling;
    // -> static int ResetRequired;
}

// Range: 0x803A76BC -> 0x803A77BC
static int issueCommand(long prio /* r1+0x8 */, struct DVDCommandBlock * block /* r31 */) {
    // Local variables
    int level; // r30
    int result; // r29

    // References
    // -> static int PauseFlag;
    // -> static struct DVDCommandBlock * executing;
    // -> static int autoInvalidation;
}

// Range: 0x803A77BC -> 0x803A78FC
int DVDReadAbsAsyncPrio(struct DVDCommandBlock * block /* r31 */, void * addr /* r27 */, long length /* r28 */, long offset /* r26 */, void (* callback)(long, struct DVDCommandBlock *) /* r1+0x18 */, long prio /* r1+0x1C */) {
    // Local variables
    int idle; // r29
}

// Range: 0x803A78FC -> 0x803A79B4
int DVDSeekAbsAsyncPrio(struct DVDCommandBlock * block /* r31 */, long offset /* r28 */, void (* callback)(long, struct DVDCommandBlock *) /* r1+0x10 */, long prio /* r1+0x14 */) {
    // Local variables
    int idle; // r29
}

// Range: 0x803A79B4 -> 0x803A7AD4
int DVDReadAbsAsyncForBS(struct DVDCommandBlock * block /* r31 */, void * addr /* r28 */, long length /* r26 */, long offset /* r27 */, void (* callback)(long, struct DVDCommandBlock *) /* r1+0x18 */) {
    // Local variables
    int idle; // r29
}

// Range: 0x803A7AD4 -> 0x803A7BBC
int DVDReadDiskID(struct DVDCommandBlock * block /* r31 */, struct DVDDiskID * diskID /* r28 */, void (* callback)(long, struct DVDCommandBlock *) /* r1+0x10 */) {
    // Local variables
    int idle; // r29
}

// Range: 0x803A7BBC -> 0x803A7C0C
int DVDCancelStreamAsync(struct DVDCommandBlock * block /* r31 */, void (* callback)(long, struct DVDCommandBlock *) /* r1+0xC */) {
    // Local variables
    int idle; // r30
}

// total size: 0x20
struct DVDDriveInfo {
    // Members
    unsigned short revisionLevel; // offset 0x0, size 0x2
    unsigned short deviceCode; // offset 0x2, size 0x2
    unsigned long releaseDate; // offset 0x4, size 0x4
    unsigned char padding[24]; // offset 0x8, size 0x18
};
// Range: 0x803A7C0C -> 0x803A7CD0
int DVDInquiryAsync(struct DVDCommandBlock * block /* r31 */, struct DVDDriveInfo * info /* r29 */, void (* callback)(long, struct DVDCommandBlock *) /* r1+0x10 */) {
    // Local variables
    int idle; // r28
}

// Range: 0x803A7CD0 -> 0x803A7D1C
void DVDReset() {
    // References
    // -> static unsigned long ResumeFromHere;
    // -> static int ResetRequired;
}

// Range: 0x803A7D1C -> 0x803A7D90
long DVDGetCommandBlockStatus(const struct DVDCommandBlock * block /* r30 */) {
    // Local variables
    int enabled; // r29
    long retVal; // r31
}

// Range: 0x803A7D90 -> 0x803A7E30
long DVDGetDriveStatus() {
    // Local variables
    int enabled; // r30
    long retVal; // r31

    // References
    // -> static struct DVDCommandBlock * executing;
    // -> static struct DVDCommandBlock DummyCommandBlock;
    // -> static int PausingFlag;
    // -> static int FatalErrorFlag;
}

// Range: 0x803A7E30 -> 0x803A7E50
int DVDSetAutoInvalidation(int autoInval /* r3 */) {
    // Local variables
    int prev; // r31

    // References
    // -> static int autoInvalidation;
}

// Range: 0x803A7E50 -> 0x803A7EA4
void DVDPause() {
    // Local variables
    int level; // r31

    // References
    // -> static int PausingFlag;
    // -> static struct DVDCommandBlock * executing;
    // -> static int PauseFlag;
}

// Range: 0x803A7EA4 -> 0x803A7EF8
void DVDResume() {
    // Local variables
    int level; // r31

    // References
    // -> static int PausingFlag;
    // -> static int PauseFlag;
}

// Range: 0x803A7EF8 -> 0x803A81A4
int DVDCancelAsync(struct DVDCommandBlock * block /* r31 */, void (* callback)(long, struct DVDCommandBlock *) /* r30 */) {
    // Local variables
    int enabled; // r29
    void (* old)(unsigned long); // r28
    struct DVDCommandBlock * finished; // r1+0x10

    // References
    // -> static struct DVDCommandBlock DummyCommandBlock;
    // -> static struct DVDCommandBlock * executing;
    // -> static unsigned long ResumeFromHere;
    // -> static void (* CancelCallback)(long, struct DVDCommandBlock *);
    // -> static unsigned long Canceling;
}

// Range: 0x803A81A4 -> 0x803A8258
long DVDCancel(struct DVDCommandBlock * block /* r29 */) {
    // Local variables
    int result; // r28
    long state; // r31
    unsigned long command; // r30
    int enabled; // r27

    // References
    // -> struct OSThreadQueue __DVDThreadQueue;
}

// Range: 0x803A8258 -> 0x803A827C
static void cbForCancelSync() {
    // References
    // -> struct OSThreadQueue __DVDThreadQueue;
}

// Range: 0x803A827C -> 0x803A831C
int DVDCancelAllAsync(void (* callback)(long, struct DVDCommandBlock *) /* r30 */) {
    // Local variables
    int enabled; // r29
    struct DVDCommandBlock * p; // r28
    int retVal; // r31

    // References
    // -> static struct DVDCommandBlock * executing;
}

// Range: 0x803A831C -> 0x803A8340
struct DVDDiskID * DVDGetCurrentDiskID() {}

// Range: 0x803A8340 -> 0x803A8448
int DVDCheckDisk() {
    // Local variables
    int enabled; // r28
    long retVal; // r31
    long state; // r30
    unsigned long coverReg; // r29

    // References
    // -> static unsigned long ResumeFromHere;
    // -> static struct DVDCommandBlock * executing;
    // -> static struct DVDCommandBlock DummyCommandBlock;
    // -> static int PausingFlag;
    // -> static int FatalErrorFlag;
}

// Range: 0x803A8448 -> 0x803A84B8
void __DVDPrepareResetAsync(void (* callback)(long, struct DVDCommandBlock *) /* r30 */) {
    // Local variables
    int enabled; // r31

    // References
    // -> static struct DVDCommandBlock * executing;
    // -> static void (* CancelCallback)(long, struct DVDCommandBlock *);
    // -> static unsigned long Canceling;
}

// Range: 0x803A84B8 -> 0x803A8500
int __DVDTestAlarm(const struct OSAlarm * alarm /* r31 */) {
    // References
    // -> static struct OSAlarm ResetAlarm;
}


