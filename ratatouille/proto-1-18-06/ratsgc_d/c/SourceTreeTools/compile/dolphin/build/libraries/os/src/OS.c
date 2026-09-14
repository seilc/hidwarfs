/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\os\src\OS.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803CDFCC -> 0x803CEC4C
*/
const char * __OSVersion; // size: 0x4, address: 0x80D681A0
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
static struct OSBootInfo_s * BootInfo; // size: 0x4, address: 0x80D6C080
static unsigned long * BI2DebugFlag; // size: 0x4, address: 0x80D6C084
static unsigned long BI2DebugFlagHolder; // size: 0x4, address: 0x80D6C088
// total size: 0x20
struct DVDDriveInfo {
    // Members
    unsigned short revisionLevel; // offset 0x0, size 0x2
    unsigned short deviceCode; // offset 0x2, size 0x2
    unsigned long releaseDate; // offset 0x4, size 0x4
    unsigned char padding[24]; // offset 0x8, size 0x18
};
static struct DVDDriveInfo DriveInfo; // size: 0x20, address: 0x80D5AF80
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
static struct DVDCommandBlock DriveBlock; // size: 0x30, address: 0x80D5AFA0
int __OSIsGcam; // size: 0x4, address: 0x80D6C08C
static double ZeroF; // size: 0x8, address: 0x80D6C090
static float ZeroPS[2]; // size: 0x8, address: 0x80D6C098
// Range: 0x803CDFCC -> 0x803CE0F4
void __OSFPRInit() {}

// Range: 0x803CE0F4 -> 0x803CE12C
static void DisableWriteGatherPipe() {
    // Local variables
    unsigned long hid2; // r31
}

// Range: 0x803CE12C -> 0x803CE160
unsigned long OSGetConsoleType() {
    // References
    // -> static struct OSBootInfo_s * BootInfo;
}

static int AreWeInitialized; // size: 0x4, address: 0x80D6C0A0
// total size: 0x1C
struct {
    // Members
    int valid; // offset 0x0, size 0x4
    unsigned long restartCode; // offset 0x4, size 0x4
    unsigned long bootDol; // offset 0x8, size 0x4
    void * regionStart; // offset 0xC, size 0x4
    void * regionEnd; // offset 0x10, size 0x4
    int argsUseDefault; // offset 0x14, size 0x4
    void * argsAddr; // offset 0x18, size 0x4
} __OSRebootParams; // size: 0x1C, address: 0x80D5AFD0
// Range: 0x803CE160 -> 0x803CE2C4
static void ClearArena() {
    // References
    // -> struct [anonymous] __OSRebootParams;
}

// Range: 0x803CE2C4 -> 0x803CE300
static void InquiryCallback(struct DVDCommandBlock * block /* r4 */) {
    // References
    // -> static struct DVDDriveInfo DriveInfo;
}

long long __OSStartTime; // size: 0x8, address: 0x80D6C0B0
unsigned long __DVDLongFileNameFlag; // size: 0x4, address: 0x80D6BECC
unsigned long __PADSpec; // size: 0x4, address: 0x80D6C188
unsigned char __ArenaLo[]; // size: 0x0, address: 0x80D7BEE0
char _stack_addr[]; // size: 0x0, address: 0x80D7AEC8
unsigned char __ArenaHi[]; // size: 0x0, address: 0x817FFFFF
int __OSInIPL; // size: 0x4, address: 0x80D6C0A8
// Range: 0x803CE300 -> 0x803CE708
void OSInit() {
    // Local variables
    unsigned long consoleType; // r30
    void * bi2StartAddr; // r28

    // References
    // -> static struct DVDDriveInfo DriveInfo;
    // -> static struct DVDCommandBlock DriveBlock;
    // -> int __OSIsGcam;
    // -> int __OSInIPL;
    // -> static unsigned long * BI2DebugFlag;
    // -> const char * __OSVersion;
    // -> static struct OSBootInfo_s * BootInfo;
    // -> unsigned char __ArenaHi[];
    // -> char _stack_addr[];
    // -> unsigned char __ArenaLo[];
    // -> unsigned long __DVDLongFileNameFlag;
    // -> unsigned long __PADSpec;
    // -> static unsigned long BI2DebugFlagHolder;
    // -> struct [anonymous] __OSRebootParams;
    // -> long long __OSStartTime;
    // -> static int AreWeInitialized;
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
static void (* * OSExceptionTable)(unsigned char, struct OSContext *); // size: 0x4, address: 0x80D6C0A4
static unsigned long __OSExceptionLocations[15]; // size: 0x3C, address: 0x80548C38
char * __OSExceptionNames[17]; // size: 0x44, address: 0x80548D18
// Range: 0x803CE708 -> 0x803CE998
static void OSExceptionInit() {
    // Local variables
    unsigned char exception; // r31
    void * destAddr; // r30
    unsigned long * opCodeAddr; // r28
    unsigned long oldOpCode; // r26
    unsigned char * handlerStart; // r24
    unsigned long handlerSize; // r27
    unsigned long * ops; // r23
    int cb; // r25

    // References
    // -> static void (* * OSExceptionTable)(unsigned char, struct OSContext *);
    // -> static unsigned long __OSExceptionLocations[15];
    // -> static unsigned long * BI2DebugFlag;
}

// Range: 0x803CE998 -> 0x803CE9BC
static void __OSDBIntegrator() {}

// Range: 0x803CE9BC -> 0x803CE9C0
static void __OSDBJump() {}

// Range: 0x803CE9C0 -> 0x803CEA4C
void (* __OSSetExceptionHandler(unsigned char exception /* r31 */, void (* handler)(unsigned char, struct OSContext *) /* r1+0xC */))(unsigned char, struct OSContext *) {
    // Local variables
    void (* oldHandler)(unsigned char, struct OSContext *); // r30

    // References
    // -> static void (* * OSExceptionTable)(unsigned char, struct OSContext *);
}

// Range: 0x803CEA4C -> 0x803CEABC
void (* __OSGetExceptionHandler(unsigned char exception /* r31 */))(unsigned char, struct OSContext *) {
    // References
    // -> static void (* * OSExceptionTable)(unsigned char, struct OSContext *);
}

// Range: 0x803CEABC -> 0x803CEB58
static void OSExceptionVector() {}

// Range: 0x803CEB58 -> 0x803CEBB0
void OSDefaultExceptionHandler(unsigned char exception /* r3 */, struct OSContext * context /* r4 */) {}

// Range: 0x803CEBB0 -> 0x803CEC08
void __OSPSInit() {}

// Range: 0x803CEC08 -> 0x803CEC1C
unsigned long __OSGetDIConfig() {}

// Range: 0x803CEC1C -> 0x803CEC4C
void OSRegisterVersion(const char * id /* r1+0x8 */) {}


