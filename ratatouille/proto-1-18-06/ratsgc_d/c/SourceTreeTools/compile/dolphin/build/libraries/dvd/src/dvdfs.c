/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\dvd\src\dvdfs.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803A5008 -> 0x803A5C60
*/
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
static struct OSBootInfo_s * BootInfo; // size: 0x4, address: 0x80D6BEB8
// total size: 0xC
struct FSTEntry {
    // Members
    unsigned int isDirAndStringOff; // offset 0x0, size 0x4
    unsigned int parentOrPosition; // offset 0x4, size 0x4
    unsigned int nextEntryOrLength; // offset 0x8, size 0x4
};
static struct FSTEntry * FstStart; // size: 0x4, address: 0x80D6BEBC
static char * FstStringStart; // size: 0x4, address: 0x80D6BEC0
static unsigned long MaxEntryNum; // size: 0x4, address: 0x80D6BEC4
static unsigned long currentDirectory; // size: 0x4, address: 0x80D6BEC8
// Range: 0x803A5008 -> 0x803A5068
void __DVDFSInit() {
    // References
    // -> static unsigned long MaxEntryNum;
    // -> static struct FSTEntry * FstStart;
    // -> static char * FstStringStart;
    // -> static struct OSBootInfo_s * BootInfo;
}

// Range: 0x803A5068 -> 0x803A50FC
static int isSame(const char * path /* r31 */, const char * string /* r30 */) {}

unsigned long __DVDLongFileNameFlag; // size: 0x4, address: 0x80D6BECC
// Range: 0x803A50FC -> 0x803A53E0
long DVDConvertPathToEntrynum(const char * pathPtr /* r31 */) {
    // Local variables
    const char * ptr; // r30
    char * stringPtr; // r24
    int isDir; // r25
    unsigned long length; // r23
    unsigned long dirLookAt; // r29
    unsigned long i; // r28
    const char * origPathPtr; // r22
    const char * extentionStart; // r21
    int illegal; // r27
    int extention; // r26

    // References
    // -> static struct FSTEntry * FstStart;
    // -> static char * FstStringStart;
    // -> unsigned long __DVDLongFileNameFlag;
    // -> static unsigned long currentDirectory;
}

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
// total size: 0x3C
struct DVDFileInfo {
    // Members
    struct DVDCommandBlock cb; // offset 0x0, size 0x30
    unsigned long startAddr; // offset 0x30, size 0x4
    unsigned long length; // offset 0x34, size 0x4
    void (* callback)(long, struct DVDFileInfo *); // offset 0x38, size 0x4
};
// Range: 0x803A53E0 -> 0x803A551C
int DVDFastOpen(long entrynum /* r31 */, struct DVDFileInfo * fileInfo /* r29 */) {
    // References
    // -> static struct FSTEntry * FstStart;
    // -> static unsigned long MaxEntryNum;
}

// Range: 0x803A551C -> 0x803A5670
int DVDOpen(const char * fileName /* r28 */, struct DVDFileInfo * fileInfo /* r30 */) {
    // Local variables
    long entry; // r31
    char currentDir[128]; // r1+0x10

    // References
    // -> static struct FSTEntry * FstStart;
}

// Range: 0x803A5670 -> 0x803A56C4
int DVDClose(struct DVDFileInfo * fileInfo /* r31 */) {}

// Range: 0x803A56C4 -> 0x803A570C
static unsigned long myStrncpy(char * dest /* r3 */, char * src /* r4 */, unsigned long maxlen /* r5 */) {
    // Local variables
    unsigned long i; // r31
}

// Range: 0x803A570C -> 0x803A57B8
static unsigned long entryToPath(unsigned long entry /* r28 */, char * path /* r29 */, unsigned long maxlen /* r30 */) {
    // Local variables
    char * name; // r27
    unsigned long loc; // r31

    // References
    // -> static struct FSTEntry * FstStart;
    // -> static char * FstStringStart;
}

// Range: 0x803A57B8 -> 0x803A5904
static int DVDConvertEntrynumToPath(long entrynum /* r29 */, char * path /* r28 */, unsigned long maxlen /* r30 */) {
    // Local variables
    unsigned long loc; // r31

    // References
    // -> static struct FSTEntry * FstStart;
    // -> static unsigned long MaxEntryNum;
}

// Range: 0x803A5904 -> 0x803A5964
int DVDGetCurrentDir(char * path /* r1+0x8 */, unsigned long maxlen /* r31 */) {
    // References
    // -> static unsigned long currentDirectory;
}

// Range: 0x803A5964 -> 0x803A5ABC
int DVDReadAsyncPrio(struct DVDFileInfo * fileInfo /* r29 */, void * addr /* r27 */, long length /* r28 */, long offset /* r30 */, void (* callback)(long, struct DVDFileInfo *) /* r1+0x18 */, long prio /* r1+0x1C */) {}

// Range: 0x803A5ABC -> 0x803A5B2C
static void cbForReadAsync(long result /* r1+0x8 */, struct DVDCommandBlock * block /* r30 */) {
    // Local variables
    struct DVDFileInfo * fileInfo; // r31
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
// Range: 0x803A5B2C -> 0x803A5BF0
int DVDSeekAsyncPrio(struct DVDFileInfo * fileInfo /* r31 */, long offset /* r30 */, void (* callback)(long, struct DVDFileInfo *) /* r1+0x10 */, long prio /* r1+0x14 */) {}

// Range: 0x803A5BF0 -> 0x803A5C60
static void cbForSeekAsync(long result /* r1+0x8 */, struct DVDCommandBlock * block /* r30 */) {
    // Local variables
    struct DVDFileInfo * fileInfo; // r31
}


