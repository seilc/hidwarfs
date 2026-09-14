/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xbinio.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8000CDDC -> 0x8000EB20
*/
int xFileReadAsyncStatus(int, int*)::been_here; // size: 0x4, address: 0x80D68B38
int xFileReadAsyncStatus(int, int*)::been_here; // size: 0x4, address: 0x80D68B3C
int xFileReadAsyncStatus(int, int*)::been_here; // size: 0x4, address: 0x80D68B40
char __FUNCTION__$localstatic1$xFileReadAsyncStatus__FiPi[21]; // size: 0x15, address: 0x804EFEE8
static unsigned int g_loadlock; // size: 0x4, address: 0x80D5E4F8
enum en_FIOERRCODES {
    FIOERR_NONE = 0,
    FIOERR_READFAIL = 1,
    FIOERR_WRITEFAIL = 2,
    FIOERR_SEEKFAIL = 3,
    FIOERR_USERABORT = 4,
};
// total size: 0x68
struct st_FILELOADINFO {
    // Members
    void (* destroy)(struct st_FILELOADINFO *); // offset 0x0, size 0x4
    int (* readBytes)(struct st_FILELOADINFO *, char *, int); // offset 0x4, size 0x4
    int (* readMShorts)(struct st_FILELOADINFO *, signed short *, int); // offset 0x8, size 0x4
    int (* readMLongs)(struct st_FILELOADINFO *, int *, int); // offset 0xC, size 0x4
    int (* readMFloats)(struct st_FILELOADINFO *, float *, int); // offset 0x10, size 0x4
    int (* readMDoubles)(struct st_FILELOADINFO *, double *, int); // offset 0x14, size 0x4
    int (* readIShorts)(struct st_FILELOADINFO *, signed short *, int); // offset 0x18, size 0x4
    int (* readILongs)(struct st_FILELOADINFO *, int *, int); // offset 0x1C, size 0x4
    int (* readIFloats)(struct st_FILELOADINFO *, float *, int); // offset 0x20, size 0x4
    int (* readIDoubles)(struct st_FILELOADINFO *, double *, int); // offset 0x24, size 0x4
    int (* skipBytes)(struct st_FILELOADINFO *, int); // offset 0x28, size 0x4
    int (* seekSpot)(struct st_FILELOADINFO *, int); // offset 0x2C, size 0x4
    void (* setDoubleBuf)(struct st_FILELOADINFO *, char *, int); // offset 0x30, size 0x4
    void (* discardDblBuf)(struct st_FILELOADINFO *); // offset 0x34, size 0x4
    int (* asyncIRead)(struct st_FILELOADINFO *, int, char *, int, int); // offset 0x38, size 0x4
    int (* asyncMRead)(struct st_FILELOADINFO *, int, char *, int, int); // offset 0x3C, size 0x4
    enum en_BIO_ASYNC_ERRCODES (* asyncReadStatus)(struct st_FILELOADINFO *); // offset 0x40, size 0x4
    unsigned int lockid; // offset 0x44, size 0x4
    enum en_FIOERRCODES error; // offset 0x48, size 0x4
    unsigned int basesector; // offset 0x4C, size 0x4
    void * privdata; // offset 0x50, size 0x4
    void * xtradata; // offset 0x54, size 0x4
    void * asyndata; // offset 0x58, size 0x4
    int filesize; // offset 0x5C, size 0x4
    int remain; // offset 0x60, size 0x4
    int position; // offset 0x64, size 0x4
};
static struct st_FILELOADINFO g_loadinst[8]; // size: 0x340, address: 0x804EFF00
static struct tag_xFile g_xfload[8]; // size: 0x8A0, address: 0x804F0240
// total size: 0x3C
struct st_BINIO_XTRADATA {
    // Members
    char * dbl_buf; // offset 0x0, size 0x4
    int dblbuf_size; // offset 0x4, size 0x4
    int dbl_beg; // offset 0x8, size 0x4
    int dbl_end; // offset 0xC, size 0x4
    int dbl_amt; // offset 0x10, size 0x4
    unsigned int fpos; // offset 0x14, size 0x4
    char * asyn_data; // offset 0x18, size 0x4
    int asyn_amt; // offset 0x1C, size 0x4
    int asyn_elesize; // offset 0x20, size 0x4
    int asyn_ismot; // offset 0x24, size 0x4
    enum en_BIO_ASYNC_ERRCODES asyn_status; // offset 0x28, size 0x4
    unsigned int pad[3]; // offset 0x2C, size 0xC
    int gcaskey; // offset 0x38, size 0x4
};
static struct st_BINIO_XTRADATA g_xtraload[8]; // size: 0x1E0, address: 0x804F0AE0
static struct st_BINIO_XTRADATA * g_async_context; // size: 0x4, address: 0x80D68B44
static int been_here; // size: 0x4, address: 0x80D68B48
static int been_here; // size: 0x4, address: 0x80D68B4C
static char __FUNCTION__[17]; // size: 0x11, address: 0x80D5E4FC
// Range: 0x8000CDDC -> 0x8000D0CC
struct st_FILELOADINFO * xBinioLoadCreate(const char * filename /* r26 */, int fileflags /* r25 */) {
    // Local variables
    struct st_FILELOADINFO * fli; // r31
    struct tag_xFile * tmp_fp; // r28
    int i; // r30
    int uselock; // r29

    // References
    // -> static struct st_BINIO_XTRADATA g_xtraload[8];
    // -> static int been_here;
    // -> static char __FUNCTION__[17];
    // -> static int been_here;
    // -> static struct st_FILELOADINFO g_loadinst[8];
    // -> static unsigned int g_loadlock;
}

static int been_here; // size: 0x4, address: 0x80D68B50
static char __FUNCTION__[12]; // size: 0xC, address: 0x80D5E50D
// Range: 0x8000D0CC -> 0x8000D18C
static void LoadDestroy(struct st_FILELOADINFO * fli /* r31 */) {
    // Local variables
    struct tag_xFile * fp; // r30
    unsigned int lockid; // r29

    // References
    // -> static unsigned int g_loadlock;
    // -> static int been_here;
    // -> static char __FUNCTION__[12];
}

static int been_here; // size: 0x4, address: 0x80D68B54
static int been_here; // size: 0x4, address: 0x80D68B58
static int been_here; // size: 0x4, address: 0x80D68B5C
static int been_here; // size: 0x4, address: 0x80D68B60
static char __FUNCTION__[10]; // size: 0xA, address: 0x80D5E519
// Range: 0x8000D18C -> 0x8000D3A4
static int SkipBytes(struct st_FILELOADINFO * fli /* r31 */, int fwd /* r30 */) {
    // Local variables
    struct tag_xFile * file; // r28
    int rc; // r29

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[10];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D68B64
static int been_here; // size: 0x4, address: 0x80D68B68
static int been_here; // size: 0x4, address: 0x80D68B6C
static int been_here; // size: 0x4, address: 0x80D68B70
static char __FUNCTION__[9]; // size: 0x9, address: 0x80D5E523
// Range: 0x8000D3A4 -> 0x8000D594
static int ReadSeek(struct st_FILELOADINFO * fli /* r31 */, int pos /* r30 */) {
    // Local variables
    struct tag_xFile * file; // r27
    int rc; // r29

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[9];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}

// Range: 0x8000D594 -> 0x8000D5D4
static void SetBuffer(struct st_FILELOADINFO * fli /* r3 */, char * dblbuffer /* r4 */, int bufsize /* r5 */) {
    // Local variables
    struct st_BINIO_XTRADATA * xtra; // r31
}

// Range: 0x8000D5D4 -> 0x8000D604
static void DiscardBuffer(struct st_FILELOADINFO * fli /* r1+0x8 */) {}

static int been_here; // size: 0x4, address: 0x80D68B74
static int been_here; // size: 0x4, address: 0x80D68B78
static int been_here; // size: 0x4, address: 0x80D68B7C
static int been_here; // size: 0x4, address: 0x80D68B80
static char __FUNCTION__[8]; // size: 0x8, address: 0x80D5E52C
// Range: 0x8000D604 -> 0x8000D814
static int ReadRaw(struct st_FILELOADINFO * fli /* r31 */, void * data /* r1+0x8 */, int size /* r29 */, int count /* r27 */) {
    // Local variables
    struct tag_xFile * file; // r26
    int amt; // r30
    int n; // r28

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[8];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}

// Range: 0x8000D814 -> 0x8000D85C
static int ReadBytes(struct st_FILELOADINFO * fli /* r1+0x8 */, char * data /* r1+0xC */, int count /* r1+0x10 */) {
    // Local variables
    int act; // r31
}

// Range: 0x8000D85C -> 0x8000D8A4
static int ReadMShorts(struct st_FILELOADINFO * fli /* r1+0x8 */, signed short * data /* r1+0xC */, int count /* r1+0x10 */) {
    // Local variables
    int act; // r31
}

// Range: 0x8000D8A4 -> 0x8000D8EC
static int ReadMLongs(struct st_FILELOADINFO * fli /* r1+0x8 */, int * data /* r1+0xC */, int count /* r1+0x10 */) {
    // Local variables
    int act; // r31
}

// Range: 0x8000D8EC -> 0x8000D934
static int ReadMFloats(struct st_FILELOADINFO * fli /* r1+0x8 */, float * data /* r1+0xC */, int count /* r1+0x10 */) {
    // Local variables
    int act; // r31
}

// Range: 0x8000D934 -> 0x8000D97C
static int ReadMDoubles(struct st_FILELOADINFO * fli /* r1+0x8 */, double * data /* r1+0xC */, int count /* r1+0x10 */) {
    // Local variables
    int act; // r31
}

// Range: 0x8000D97C -> 0x8000D9DC
static int ReadIShorts(struct st_FILELOADINFO * fli /* r1+0x8 */, signed short * data /* r30 */, int count /* r1+0xC */) {
    // Local variables
    int act; // r31
}

// Range: 0x8000D9DC -> 0x8000DA3C
static int ReadILongs(struct st_FILELOADINFO * fli /* r1+0x8 */, int * data /* r30 */, int count /* r1+0xC */) {
    // Local variables
    int act; // r31
}

// Range: 0x8000DA3C -> 0x8000DA9C
static int ReadIFloats(struct st_FILELOADINFO * fli /* r1+0x8 */, float * data /* r30 */, int count /* r1+0xC */) {
    // Local variables
    int act; // r31
}

// Range: 0x8000DA9C -> 0x8000DAFC
static int ReadIDoubles(struct st_FILELOADINFO * fli /* r1+0x8 */, double * data /* r30 */, int count /* r1+0xC */) {
    // Local variables
    int act; // r31
}

// Range: 0x8000DAFC -> 0x8000DB48
static int AsyncMRead(struct st_FILELOADINFO * fli /* r1+0x8 */, int offset /* r1+0xC */, char * data /* r1+0x10 */, int size /* r1+0x14 */, int n /* r1+0x18 */) {}

// Range: 0x8000DB48 -> 0x8000DB94
static int AsyncIRead(struct st_FILELOADINFO * fli /* r1+0x8 */, int offset /* r1+0xC */, char * data /* r1+0x10 */, int size /* r1+0x14 */, int n /* r1+0x18 */) {}

enum en_BIO_ASYNC_ERRCODES {
    BINIO_ASYNC_FAIL = -1,
    BINIO_ASYNC_NOOP = 0,
    BINIO_ASYNC_INPROG = 1,
    BINIO_ASYNC_DONE = 2,
    BINIO_ASYNC_FORCEENUMSIZEINT = 2147483647,
};
// Range: 0x8000DB94 -> 0x8000DBBC
static enum en_BIO_ASYNC_ERRCODES AsyncReadStatus(struct st_FILELOADINFO * fli /* r1+0x8 */) {}

// Range: 0x8000DBBC -> 0x8000DBF4
static void Swap2(char * d /* r3 */, int n /* r4 */) {
    // Local variables
    char t; // r31
}

// Range: 0x8000DBF4 -> 0x8000DC40
static void Swap4(char * d /* r3 */, int n /* r4 */) {
    // Local variables
    char t; // r31
}

// Range: 0x8000DC40 -> 0x8000DCAC
static void Swap8(char * d /* r3 */, int n /* r4 */) {
    // Local variables
    char t; // r31
}

static int been_here; // size: 0x4, address: 0x80D68B84
static int been_here; // size: 0x4, address: 0x80D68B88
static char __FUNCTION__[9]; // size: 0x9, address: 0x80D5E534
// Range: 0x8000DCAC -> 0x8000DEC8
static struct tag_xFile * BFD_open(const char * filename /* r27 */, const char * mode /* r26 */, unsigned int lockid /* r1+0x8 */, void * xtradata /* r1+0xC */, int fileflags /* r25 */) {
    // Local variables
    struct tag_xFile * bffp; // r30
    unsigned int orc; // r28
    struct st_BINIO_XTRADATA * xtra; // r31
    int xfflg; // r29

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[9];
    // -> static struct tag_xFile g_xfload[8];
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D68B8C
static int been_here; // size: 0x4, address: 0x80D68B90
static char __FUNCTION__[10]; // size: 0xA, address: 0x80D5E53D
// Range: 0x8000DEC8 -> 0x8000DFCC
static void BFD_close(struct tag_xFile * bffp /* r30 */, void * xtradata /* r1+0x8 */) {
    // Local variables
    struct st_BINIO_XTRADATA * xtra; // r31

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[10];
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D68B94
static int been_here; // size: 0x4, address: 0x80D68B98
static int been_here; // size: 0x4, address: 0x80D68B9C
static int been_here; // size: 0x4, address: 0x80D68BA0
static int been_here; // size: 0x4, address: 0x80D68BA4
static int been_here; // size: 0x4, address: 0x80D68BA8
static int been_here; // size: 0x4, address: 0x80D68BAC
static int been_here; // size: 0x4, address: 0x80D68BB0
static int been_here; // size: 0x4, address: 0x80D68BB4
static int been_here; // size: 0x4, address: 0x80D68BB8
static char __FUNCTION__[9]; // size: 0x9, address: 0x80D5E547
// Range: 0x8000DFCC -> 0x8000E548
static int BFD_read(void * data /* r1+0x8 */, int elesize /* r17 */, int elecnt /* r1+0xC */, struct tag_xFile * bffp /* r22 */, void * xtradata /* r1+0x10 */) {
    // Local variables
    struct st_BINIO_XTRADATA * xtra; // r31
    char * dest; // r25
    int readbeg; // r28
    int refill; // r24
    int remain; // r27
    int actual; // r30
    unsigned int holdpos; // r21
    int toread; // r26
    char * cltoff; // r20
    char * sectoff; // r19
    unsigned int safety; // r23
    unsigned int numBytes; // r29

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[9];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D68BBC
static char __FUNCTION__[9]; // size: 0x9, address: 0x80D5E550
// Range: 0x8000E548 -> 0x8000E614
static int BFD_seek(struct tag_xFile * bffp /* r1+0x8 */, int offset /* r28 */, int refpos /* r1+0xC */, void * xtradata /* r1+0x10 */) {
    // Local variables
    struct st_BINIO_XTRADATA * xtra; // r30
    int rc; // r31

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[9];
}

// Range: 0x8000E614 -> 0x8000E648
static int BFD_getLength(struct tag_xFile * bffp /* r1+0x8 */) {
    // Local variables
    int len; // r31
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
// Range: 0x8000E648 -> 0x8000E6EC
static unsigned int BFD_startSector(const char * filename /* r1+0x8 */, int fileflags /* r1+0xC */) {
    // Local variables
    struct tag_xFile xf; // r1+0x18
    unsigned int sect_start; // r1+0x14
    unsigned int fsize; // r1+0x10
    unsigned int rc; // r31
}

// Range: 0x8000E6EC -> 0x8000E700
static void BFD_cb_GCP2_readasync(struct tag_xFile * file /* r3 */) {
    // Local variables
    struct st_FILELOADINFO * fli; // r31
}

static int been_here; // size: 0x4, address: 0x80D68BC0
static int been_here; // size: 0x4, address: 0x80D68BC4
static int been_here; // size: 0x4, address: 0x80D68BC8
static int been_here; // size: 0x4, address: 0x80D68BCC
static char __FUNCTION__[14]; // size: 0xE, address: 0x80D5E559
// Range: 0x8000E700 -> 0x8000E960
static int BFD_AsyncRead(struct st_FILELOADINFO * fli /* r29 */, int pos /* r25 */, void * data /* r21 */, int size /* r22 */, int n /* r23 */) {
    // Local variables
    struct tag_xFile * file; // r28
    struct st_BINIO_XTRADATA * xtra; // r31
    int result; // r27
    unsigned int rdsec; // r24
    int rc; // r30

    // References
    // -> static struct st_BINIO_XTRADATA * g_async_context;
    // -> static int been_here;
    // -> static char __FUNCTION__[14];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D68BD0
static int been_here; // size: 0x4, address: 0x80D68BD4
static char __FUNCTION__[20]; // size: 0x14, address: 0x80D5E567
enum XFILE_READSECTOR_STATUS {
    XFILE_RDSTAT_NOOP = 0,
    XFILE_RDSTAT_INPROG = 1,
    XFILE_RDSTAT_DONE = 2,
    XFILE_RDSTAT_FAIL = 3,
    XFILE_RDSTAT_QUEUED = 4,
    XFILE_RDSTAT_EXPIRED = 5,
};
// Range: 0x8000E960 -> 0x8000EB20
static enum en_BIO_ASYNC_ERRCODES BFD_AsyncReadStatus(struct st_FILELOADINFO * fli /* r28 */) {
    // Local variables
    enum en_BIO_ASYNC_ERRCODES status; // r30
    struct st_BINIO_XTRADATA * xtra; // r31
    enum XFILE_READSECTOR_STATUS xrdstat; // r29
    int amtsofar; // r1+0x8

    // References
    // -> static struct st_BINIO_XTRADATA * g_async_context;
    // -> static int been_here;
    // -> static char __FUNCTION__[20];
    // -> static int been_here;
}

enum IFILE_READSECTOR_STATUS {
    IFILE_RDSTAT_NOOP = 0,
    IFILE_RDSTAT_INPROG = 1,
    IFILE_RDSTAT_DONE = 2,
    IFILE_RDSTAT_FAIL = 3,
    IFILE_RDSTAT_QUEUED = 4,
    IFILE_RDSTAT_EXPIRED = 5,
};

