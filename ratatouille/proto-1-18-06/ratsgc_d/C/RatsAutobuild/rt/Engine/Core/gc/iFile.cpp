/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\gc\iFile.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010C3F8 -> 0x8010DBB0
*/
static int tbuffer[1032]; // size: 0x1020, address: 0x80C6EA40
static int * buffer32; // size: 0x4, address: 0x80D69A98
// Range: 0x8010C3F8 -> 0x8010C424
void iFileInit() {
    // Local variables
    int ba; // r31

    // References
    // -> static int * buffer32;
    // -> static int tbuffer[1032];
}

// Range: 0x8010C424 -> 0x8010C428
void iFileExit() {}

static char __FUNCTION__[10]; // size: 0xA, address: 0x80D616C8
const char * _rwMemoryLastAllocFile; // size: 0x4, address: 0x80D6C318
unsigned int _rwMemoryLastAllocLine; // size: 0x4, address: 0x80D6C31C
void * RwEngineInstance; // size: 0x4, address: 0x80D6C374
// total size: 0xF0
struct tag_iFile {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    char path[128]; // offset 0x4, size 0x80
    int fd; // offset 0x84, size 0x4
    struct DVDFileInfo file; // offset 0x88, size 0x3C
    void (* cb)(struct tag_xFile *); // offset 0xC4, size 0x4
    int akey; // offset 0xC8, size 0x4
    int buffer[8]; // offset 0xCC, size 0x20
    int real_pos; // offset 0xEC, size 0x4
};
// total size: 0x114
struct tag_xFile {
    // Members
    char relname[32]; // offset 0x0, size 0x20
    struct tag_iFile ps; // offset 0x20, size 0xF0
    void * user_data; // offset 0x110, size 0x4
};
// Range: 0x8010C428 -> 0x8010C55C
unsigned int * iFileLoad(const char * name /* r26 */, unsigned int * buffer /* r29 */, unsigned int * size /* r30 */, int flags /* r1+0x8 */) {
    // Local variables
    char fullpath[128]; // r1+0xC
    struct tag_xFile file; // r1+0x8C
    unsigned int failure; // r28
    unsigned int fsize; // r31

    // References
    // -> static char __FUNCTION__[10];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

// Range: 0x8010C55C -> 0x8010C590
void iFileFree(unsigned int * buffer /* r1+0x8 */) {
    // References
    // -> void * RwEngineInstance;
}

static char __FUNCTION__[10]; // size: 0xA, address: 0x80D616D2
// Range: 0x8010C590 -> 0x8010C934
unsigned int iFileOpen(const char * name /* r28 */, int flags /* r30 */, struct tag_xFile * file /* r29 */) {
    // Local variables
    struct tag_iFile * ps; // r31
    char hostIOName[256]; // r1+0x18
    char openFlags[16]; // r1+0x8

    // References
    // -> static char __FUNCTION__[10];
}

static char __FUNCTION__[10]; // size: 0xA, address: 0x80D616DC
// Range: 0x8010C934 -> 0x8010CB04
int iFileSeek(struct tag_xFile * file /* r28 */, int offset /* r29 */, int whence /* r1+0x8 */) {
    // Local variables
    struct tag_iFile * ps; // r31
    int real_offset; // r30

    // References
    // -> static char __FUNCTION__[10];
}

unsigned int iFileSyncAsyncReadActive; // size: 0x4, address: 0x80D69A9C
// Range: 0x8010CB04 -> 0x8010CB10
static void ifilereadCB() {
    // References
    // -> unsigned int iFileSyncAsyncReadActive;
}

static char __FUNCTION__[10]; // size: 0xA, address: 0x80D616E6
float SECS_PER_VBLANK; // size: 0x4, address: 0x80D6A5A8
// Range: 0x8010CB10 -> 0x8010CD7C
unsigned int iFileRead(struct tag_xFile * file /* r31 */, void * buf /* r27 */, unsigned int size /* r29 */) {
    // Local variables
    struct tag_iFile * ps; // r30
    unsigned int numItemsRead; // r28
    int result; // r26

    // References
    // -> unsigned int iFileSyncAsyncReadActive;
    // -> static char __FUNCTION__[10];
    // -> float SECS_PER_VBLANK;
}

// total size: 0x1C
struct file_queue_record {
    // Members
    struct tag_xFile * finfo; // offset 0x0, size 0x4
    void * buf; // offset 0x4, size 0x4
    unsigned int read_size; // offset 0x8, size 0x4
    unsigned int cur_read; // offset 0xC, size 0x4
    enum IFILE_READSECTOR_STATUS status; // offset 0x10, size 0x4
    void (* done)(struct tag_xFile *); // offset 0x14, size 0x4
    unsigned long key; // offset 0x18, size 0x4
};
struct file_queue_record file_queue[4]; // size: 0x70, address: 0x80C6FA60
static char __FUNCTION__[9]; // size: 0x9, address: 0x80D616F0
// Range: 0x8010CD7C -> 0x8010CFD8
static void async_cb(long result /* r27 */, struct DVDFileInfo * finfo /* r1+0x8 */) {
    // Local variables
    int i; // r26
    struct file_queue_record * fq; // r31
    char * p; // r28
    long next_read; // r30
    long bytes; // r29

    // References
    // -> static char __FUNCTION__[9];
    // -> struct file_queue_record file_queue[4];
}

// Range: 0x8010CFD8 -> 0x8010D070
void iFileAsyncService() {
    // Local variables
    int i; // r30
    struct file_queue_record & fq; // r31

    // References
    // -> struct file_queue_record file_queue[4];
}

static unsigned long fopcount; // size: 0x4, address: 0x80D69AA0
static signed char init; // size: 0x1, address: 0x80D69AA4
// Range: 0x8010D070 -> 0x8010D194
int iFileReadAsync(struct tag_xFile * file /* r28 */, void * buf /* r25 */, unsigned int asize /* r26 */, void (* dcb)(struct tag_xFile *) /* r1+0x8 */) {
    // Local variables
    int i; // r30
    struct file_queue_record & fq; // r31
    long read_size; // r29
    unsigned long key; // r27

    // References
    // -> static unsigned long fopcount;
    // -> struct file_queue_record file_queue[4];
    // -> static signed char init;
}

enum IFILE_READSECTOR_STATUS {
    IFILE_RDSTAT_NOOP = 0,
    IFILE_RDSTAT_INPROG = 1,
    IFILE_RDSTAT_DONE = 2,
    IFILE_RDSTAT_FAIL = 3,
    IFILE_RDSTAT_QUEUED = 4,
    IFILE_RDSTAT_EXPIRED = 5,
};
// Range: 0x8010D194 -> 0x8010D204
enum IFILE_READSECTOR_STATUS iFileReadAsyncStatus(int key /* r3 */, int * bytes_read /* r4 */) {
    // Local variables
    unsigned long i; // r31

    // References
    // -> struct file_queue_record file_queue[4];
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80D616F9
// Range: 0x8010D204 -> 0x8010D330
unsigned int iFileWrite(struct tag_xFile * file /* r29 */, void * buf /* r1+0x8 */, unsigned int size /* r1+0xC */) {
    // Local variables
    struct tag_iFile * ps; // r31
    unsigned int n; // r30

    // References
    // -> static char __FUNCTION__[11];
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80D61704
// Range: 0x8010D330 -> 0x8010D40C
unsigned int iFileClose(struct tag_xFile * file /* r29 */) {
    // Local variables
    struct tag_iFile * ps; // r31
    int ret; // r30

    // References
    // -> static char __FUNCTION__[11];
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80D6170F
// Range: 0x8010D40C -> 0x8010D4F8
unsigned int iFileGetSize(struct tag_xFile * file /* r28 */) {
    // Local variables
    struct tag_iFile * ps; // r31
    int cur; // r30
    long end; // r29

    // References
    // -> static char __FUNCTION__[13];
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
// total size: 0x3C
struct DVDFileInfo {
    // Members
    struct DVDCommandBlock cb; // offset 0x0, size 0x30
    unsigned long startAddr; // offset 0x30, size 0x4
    unsigned long length; // offset 0x34, size 0x4
    void (* callback)(long, struct DVDFileInfo *); // offset 0x38, size 0x4
};
static char __FUNCTION__[12]; // size: 0xC, address: 0x80D6171C
// Range: 0x8010D4F8 -> 0x8010D5AC
unsigned char iFileExists(const char * name /* r30 */) {
    // Local variables
    char fullname[128]; // r1+0x8
    int fd; // r31

    // References
    // -> static char __FUNCTION__[12];
}

// Range: 0x8010D5AC -> 0x8010D5D0
unsigned int iFileReadStop() {}

char gHostPath[256]; // size: 0x100, address: 0x80C6FAD0
static char __FUNCTION__[14]; // size: 0xE, address: 0x80D61728
// Range: 0x8010D5D0 -> 0x8010D774
void iFileFullPath(const char * relname /* r29 */, char * fullname /* r28 */) {
    // Local variables
    const char * inchar; // r31
    char * outchar; // r30

    // References
    // -> static char __FUNCTION__[14];
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80D61736
// Range: 0x8010D774 -> 0x8010D8F0
void iFileSetPath(const char * path /* r30 */) {
    // Local variables
    unsigned int len; // r31

    // References
    // -> char gHostPath[256];
    // -> static char __FUNCTION__[13];
}

// total size: 0x8
struct /* @class$1270iFile_cpp */ {
    // Members
    char * bad; // offset 0x0, size 0x4
    char * good; // offset 0x4, size 0x4
};
static // total size: 0x8
struct /* @class$1270iFile_cpp */ {
    // Members
    char * bad; // offset 0x0, size 0x4
    char * good; // offset 0x4, size 0x4
} fixes[2]; // size: 0x10, address: 0x80D6D9E0
// Range: 0x8010D8F0 -> 0x8010D9AC
void iFileFixAbsolutePath(char * path /* r30 */) {
    // Local variables
    char tmppath[256]; // r1+0x8
    int i; // r31

    // References
    // -> static // total size: 0x8
struct /* @class$1270iFile_cpp */ {
    // Members
    char * bad; // offset 0x0, size 0x4
    char * good; // offset 0x4, size 0x4
} fixes[2];
}

// Range: 0x8010D9AC -> 0x8010D9E4
unsigned int iFileFind(const char * name /* r1+0x8 */, int fileflags /* r1+0xC */, struct tag_xFile * file /* r1+0x10 */) {}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80D61743
// Range: 0x8010D9E4 -> 0x8010DB08
void iFileGetInfo(struct tag_xFile * file /* r28 */, unsigned int * starting_sector /* r29 */, unsigned int * size_in_bytes /* r30 */) {
    // Local variables
    struct tag_iFile * ps; // r31

    // References
    // -> static char __FUNCTION__[13];
}

enum xFileDriveStatus {
    XFILE_TRAY_OPEN = 0,
    XFILE_STOPPED = 1,
    XFILE_SPINNING = 2,
    XFILE_READING = 3,
    XFILE_PAUSED = 4,
    XFILE_SEEKING = 5,
    XFILE_ERROR = 6,
};
static char __FUNCTION__[19]; // size: 0x13, address: 0x80D61750
enum xFileDriveType {
    XFILE_DRIVE_CDVD = 0,
    XFILE_DRIVE_CONSOLE_HD = 1,
};
// Range: 0x8010DB08 -> 0x8010DBB0
unsigned int iFileGetSectorSize(enum xFileDriveType drive /* r31 */) {
    // References
    // -> static char __FUNCTION__[19];
}


