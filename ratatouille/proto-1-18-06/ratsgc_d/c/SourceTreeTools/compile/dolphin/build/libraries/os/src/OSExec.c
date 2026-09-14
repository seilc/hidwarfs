/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\os\src\OSExec.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803D2000 -> 0x803D28A4
*/
static int Prepared; // size: 0x4, address: 0x80D6C0D8
// Range: 0x803D2000 -> 0x803D211C
static int PackArgs(void * addr /* r1+0x8 */, long argc /* r29 */, char * * argv /* r26 */) {
    // Local variables
    long numArgs; // r27
    char * bootInfo2; // r30
    char * ptr; // r31
    char * * list; // r25
    unsigned long i; // r28
}

// Range: 0x803D211C -> 0x803D2158
static void Run(void * entryPoint /* r31 */) {}

// Range: 0x803D2158 -> 0x803D21BC
static void StartDol(const // total size: 0x1C
struct {
    // Members
    int valid; // offset 0x0, size 0x4
    unsigned long restartCode; // offset 0x4, size 0x4
    unsigned long bootDol; // offset 0x8, size 0x4
    void * regionStart; // offset 0xC, size 0x4
    void * regionEnd; // offset 0x10, size 0x4
    int argsUseDefault; // offset 0x14, size 0x4
    void * argsAddr; // offset 0x18, size 0x4
} * params /* r1+0x8 */, void * entry /* r1+0xC */) {
    // Local variables
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
    } * paramsWork; // r31
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
// Range: 0x803D21BC -> 0x803D2228
static void ReadDisc(void * addr /* r1+0x8 */, long length /* r1+0xC */, long offset /* r1+0x10 */) {
    // Local variables
    struct DVDCommandBlock block; // r1+0x14
}

// Range: 0x803D2228 -> 0x803D2234
static void Callback() {
    // References
    // -> static int Prepared;
}

// Range: 0x803D2234 -> 0x803D226C
static int IsStreamEnabled() {}

// Range: 0x803D226C -> 0x803D22C8
void __OSGetExecParams(// total size: 0x1C
struct {
    // Members
    int valid; // offset 0x0, size 0x4
    unsigned long restartCode; // offset 0x4, size 0x4
    unsigned long bootDol; // offset 0x8, size 0x4
    void * regionStart; // offset 0xC, size 0x4
    void * regionEnd; // offset 0x10, size 0x4
    int argsUseDefault; // offset 0x14, size 0x4
    void * argsAddr; // offset 0x18, size 0x4
} * params /* r31 */) {}

// Range: 0x803D22C8 -> 0x803D230C
void __OSSetExecParams(const // total size: 0x1C
struct {
    // Members
    int valid; // offset 0x0, size 0x4
    unsigned long restartCode; // offset 0x4, size 0x4
    unsigned long bootDol; // offset 0x8, size 0x4
    void * regionStart; // offset 0xC, size 0x4
    void * regionEnd; // offset 0x10, size 0x4
    int argsUseDefault; // offset 0x14, size 0x4
    void * argsAddr; // offset 0x18, size 0x4
} * params /* r1+0x8 */, // total size: 0x1C
struct {
    // Members
    int valid; // offset 0x0, size 0x4
    unsigned long restartCode; // offset 0x4, size 0x4
    unsigned long bootDol; // offset 0x8, size 0x4
    void * regionStart; // offset 0xC, size 0x4
    void * regionEnd; // offset 0x10, size 0x4
    int argsUseDefault; // offset 0x14, size 0x4
    void * argsAddr; // offset 0x18, size 0x4
} * addr /* r31 */) {}

int __OSIsGcam; // size: 0x4, address: 0x80D6C08C
// Range: 0x803D230C -> 0x803D238C
static void StopStreaming() {
    // Local variables
    struct DVDCommandBlock block; // r1+0x8

    // References
    // -> int __OSIsGcam;
}

static long apploaderPosition$52; // size: 0x4, address: 0x80D6C0DC
// Range: 0x803D238C -> 0x803D2454
static long GetApploaderPosition() {
    // Local variables
    unsigned long * tgcHeader; // r31
    long apploaderOffsetInTGC; // r30

    // References
    // -> static long apploaderPosition$52;
}

// Range: 0x803D2454 -> 0x803D2510
static // total size: 0x20
struct {
    // Members
    char date[16]; // offset 0x0, size 0x10
    unsigned long entry; // offset 0x10, size 0x4
    unsigned long size; // offset 0x14, size 0x4
    unsigned long rebootSize; // offset 0x18, size 0x4
    unsigned long reserved2; // offset 0x1C, size 0x4
} * LoadApploader() {
    // Local variables
    // total size: 0x20
    struct {
        // Members
        char date[16]; // offset 0x0, size 0x10
        unsigned long entry; // offset 0x10, size 0x4
        unsigned long size; // offset 0x14, size 0x4
        unsigned long rebootSize; // offset 0x18, size 0x4
        unsigned long reserved2; // offset 0x1C, size 0x4
    } * header; // r31
}

// Range: 0x803D2510 -> 0x803D25CC
static void * LoadDol(const // total size: 0x1C
struct {
    // Members
    int valid; // offset 0x0, size 0x4
    unsigned long restartCode; // offset 0x4, size 0x4
    unsigned long bootDol; // offset 0x8, size 0x4
    void * regionStart; // offset 0xC, size 0x4
    void * regionEnd; // offset 0x10, size 0x4
    int argsUseDefault; // offset 0x14, size 0x4
    void * argsAddr; // offset 0x18, size 0x4
} * params /* r1+0x8 */, void (* getInterface)(void (* *)(void (*)(char *)), int (* *)(void *, unsigned long *, unsigned long *), void * (* *)()) /* r1+0xC */) {
    // Local variables
    void (* appInit)(void (*)(char *)); // r1+0x24
    int (* appGetNext)(void *, unsigned long *, unsigned long *); // r1+0x20
    void * (* appGetEntry)(); // r1+0x1C
    void * addr; // r1+0x18
    unsigned long length; // r1+0x14
    unsigned long offset; // r1+0x10
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
    } * paramsWork; // r31
}

// Range: 0x803D25CC -> 0x803D2614
static int IsNewApploader(// total size: 0x20
struct {
    // Members
    char date[16]; // offset 0x0, size 0x10
    unsigned long entry; // offset 0x10, size 0x4
    unsigned long size; // offset 0x14, size 0x4
    unsigned long rebootSize; // offset 0x18, size 0x4
    unsigned long reserved2; // offset 0x1C, size 0x4
} * header /* r1+0x8 */) {}

// Range: 0x803D2614 -> 0x803D27C8
void __OSBootDolSimple(unsigned long doloffset /* r29 */, unsigned long restartCode /* r1+0xC */, void * regionStart /* r25 */, void * regionEnd /* r26 */, int argsUseDefault /* r27 */, long argc /* r1+0x1C */, char * * argv /* r1+0x20 */) {
    // Local variables
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
    } * params; // r31
    void * dolEntry; // r28
    // total size: 0x20
    struct {
        // Members
        char date[16]; // offset 0x0, size 0x10
        unsigned long entry; // offset 0x10, size 0x4
        unsigned long size; // offset 0x14, size 0x4
        unsigned long rebootSize; // offset 0x18, size 0x4
        unsigned long reserved2; // offset 0x1C, size 0x4
    } * header; // r30

    // References
    // -> static int Prepared;
}

// Range: 0x803D27C8 -> 0x803D28A4
void __OSBootDol(unsigned long doloffset /* r1+0x8 */, unsigned long restartCode /* r1+0xC */, char * const * argv /* r28 */) {
    // Local variables
    char doloffInString[20]; // r1+0x1C
    long argvlen; // r31
    char * * argvToPass; // r29
    long i; // r30
    void * saveStart; // r1+0x18
    void * saveEnd; // r1+0x14
}

// total size: 0x3C
struct DVDFileInfo {
    // Members
    struct DVDCommandBlock cb; // offset 0x0, size 0x30
    unsigned long startAddr; // offset 0x30, size 0x4
    unsigned long length; // offset 0x34, size 0x4
    void (* callback)(long, struct DVDFileInfo *); // offset 0x38, size 0x4
};

