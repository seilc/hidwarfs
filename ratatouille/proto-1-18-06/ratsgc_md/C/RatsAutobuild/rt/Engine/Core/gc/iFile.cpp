/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\gc\iFile.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8007C560 -> 0x8007CF84
*/
static int tbuffer[1032]; // size: 0x1020, address: 0x8033A408
static int * buffer32; // size: 0x4, address: 0x803C1658
// Range: 0x8007C560 -> 0x8007C578
void iFileInit() {
    // References
    // -> static int tbuffer[1032];
    // -> static int * buffer32;
}

// Range: 0x8007C578 -> 0x8007C57C
void iFileExit() {}

void * RwEngineInstance; // size: 0x4, address: 0x803C4584
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
// Range: 0x8007C57C -> 0x8007C63C
unsigned int * iFileLoad(const char * name /* r28 */, unsigned int * buffer /* r29 */, unsigned int * size /* r30 */, int flags /* r31 */) {
    // Local variables
    char fullpath[128]; // r1+0x8
    struct tag_xFile file; // r1+0x88
    unsigned int failure; // r0
    unsigned int fsize; // r0

    // References
    // -> void * RwEngineInstance;
}

// Range: 0x8007C63C -> 0x8007C668
void iFileFree(unsigned int * buffer /* r0 */) {
    // References
    // -> void * RwEngineInstance;
}

// Range: 0x8007C668 -> 0x8007C82C
unsigned int iFileOpen(const char * name /* r3 */, int flags /* r30 */, struct tag_xFile * file /* r31 */) {
    // Local variables
    struct tag_iFile * ps; // r0
    char hostIOName[256]; // r1+0x18
    char openFlags[16]; // r1+0x8
}

// Range: 0x8007C82C -> 0x8007C8C8
int iFileSeek(struct tag_xFile * file /* r30 */, int offset /* r31 */, int whence /* r0 */) {
    // Local variables
    struct tag_iFile * ps; // r0
    int real_offset; // r0
}

unsigned int iFileSyncAsyncReadActive; // size: 0x4, address: 0x803C165C
// Range: 0x8007C8C8 -> 0x8007C8D4
static void ifilereadCB() {
    // References
    // -> unsigned int iFileSyncAsyncReadActive;
}

float SECS_PER_VBLANK; // size: 0x4, address: 0x803C2078
// Range: 0x8007C8D4 -> 0x8007C9B4
unsigned int iFileRead(struct tag_xFile * file /* r28 */, void * buf /* r29 */, unsigned int size /* r30 */) {
    // Local variables
    struct tag_iFile * ps; // r0
    unsigned int numItemsRead; // r0
    int result; // r0

    // References
    // -> unsigned int iFileSyncAsyncReadActive;
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
struct file_queue_record file_queue[4]; // size: 0x70, address: 0x8033B428
// Range: 0x8007C9B4 -> 0x8007CAF8
static void async_cb(long result /* r3 */, struct DVDFileInfo * finfo /* r0 */) {
    // Local variables
    struct file_queue_record * fq; // r7
    char * p; // r4
    long next_read; // r5
    long bytes; // r8

    // References
    // -> struct file_queue_record file_queue[4];
}

// Range: 0x8007CAF8 -> 0x8007CB80
void iFileAsyncService() {
    // Local variables
    int i; // r27
    struct file_queue_record & fq; // r26

    // References
    // -> struct file_queue_record file_queue[4];
}

static unsigned long fopcount; // size: 0x4, address: 0x803C1660
static signed char init; // size: 0x1, address: 0x803C1664
// Range: 0x8007CB80 -> 0x8007CC84
int iFileReadAsync(struct tag_xFile * file /* r31 */, void * buf /* r4 */, unsigned int asize /* r0 */, void (* dcb)(struct tag_xFile *) /* r0 */) {
    // Local variables
    int i; // r28
    struct file_queue_record & fq; // r8
    long read_size; // r9
    unsigned long key; // r0

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
// Range: 0x8007CC84 -> 0x8007CCD0
enum IFILE_READSECTOR_STATUS iFileReadAsyncStatus(int key /* r0 */, int * bytes_read /* r0 */) {
    // Local variables
    unsigned long i; // r0

    // References
    // -> struct file_queue_record file_queue[4];
}

// Range: 0x8007CCD0 -> 0x8007CD1C
unsigned int iFileWrite(struct tag_xFile * file /* r31 */, void * buf /* r4 */, unsigned int size /* r0 */) {
    // Local variables
    struct tag_iFile * ps; // r0
    unsigned int n; // r31
}

// Range: 0x8007CD1C -> 0x8007CD8C
unsigned int iFileClose(struct tag_xFile * file /* r31 */) {
    // Local variables
    struct tag_iFile * ps; // r0
    int ret; // r0
}

// Range: 0x8007CD8C -> 0x8007CE0C
unsigned int iFileGetSize(struct tag_xFile * file /* r30 */) {
    // Local variables
    struct tag_iFile * ps; // r0
    int cur; // r31
    long end; // r30
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
// Range: 0x8007CE0C -> 0x8007CE44
unsigned char iFileExists(const char * name /* r0 */) {
    // Local variables
    char fullname[128]; // r1+0x8
    int fd; // r0
}

// Range: 0x8007CE44 -> 0x8007CE68
unsigned int iFileReadStop() {}

char gHostPath[256]; // size: 0x100, address: 0x8033B498
// Range: 0x8007CE68 -> 0x8007CEA8
void iFileFullPath(const char * relname /* r3 */, char * fullname /* r4 */) {
    // Local variables
    const char * inchar; // r3
    char * outchar; // r4
}

// Range: 0x8007CEA8 -> 0x8007CF24
void iFileSetPath(const char * path /* r30 */) {
    // Local variables
    unsigned int len; // r0

    // References
    // -> char gHostPath[256];
}

// Range: 0x8007CF24 -> 0x8007CF44
unsigned int iFileFind(const char * name /* r0 */, int fileflags /* r0 */, struct tag_xFile * file /* r0 */) {}

// Range: 0x8007CF44 -> 0x8007CF68
void iFileGetInfo(struct tag_xFile * file /* r0 */, unsigned int * starting_sector /* r0 */, unsigned int * size_in_bytes /* r0 */) {
    // Local variables
    struct tag_iFile * ps; // r0
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
enum xFileDriveType {
    XFILE_DRIVE_CDVD = 0,
    XFILE_DRIVE_CONSOLE_HD = 1,
};
// Range: 0x8007CF68 -> 0x8007CF84
unsigned int iFileGetSectorSize(enum xFileDriveType drive /* r0 */) {}


