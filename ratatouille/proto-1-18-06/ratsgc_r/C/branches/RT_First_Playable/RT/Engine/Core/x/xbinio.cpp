/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xbinio.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8000BE64 -> 0x8000CEDC
*/
static unsigned int g_loadlock; // size: 0x4, address: 0x80BFB700
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
static struct st_FILELOADINFO g_loadinst[8]; // size: 0x340, address: 0x804132F0
static struct tag_xFile g_xfload[8]; // size: 0x8A0, address: 0x80413630
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
static struct st_BINIO_XTRADATA g_xtraload[8]; // size: 0x1E0, address: 0x80413ED0
static struct st_BINIO_XTRADATA * g_async_context; // size: 0x4, address: 0x80C06E38
// Range: 0x8000BE64 -> 0x8000C088
struct st_FILELOADINFO * xBinioLoadCreate(const char * filename /* r28 */, int fileflags /* r29 */) {
    // Local variables
    struct st_FILELOADINFO * fli; // r31
    struct tag_xFile * tmp_fp; // r27
    int i; // r6
    int uselock; // r30

    // References
    // -> static struct st_BINIO_XTRADATA g_xtraload[8];
    // -> static struct st_FILELOADINFO g_loadinst[8];
    // -> static unsigned int g_loadlock;
}

// Range: 0x8000C088 -> 0x8000C0F4
static void LoadDestroy(struct st_FILELOADINFO * fli /* r30 */) {
    // Local variables
    struct tag_xFile * fp; // r3
    unsigned int lockid; // r31

    // References
    // -> static unsigned int g_loadlock;
}

// Range: 0x8000C0F4 -> 0x8000C1B0
static int SkipBytes(struct st_FILELOADINFO * fli /* r30 */, int fwd /* r31 */) {
    // Local variables
    struct tag_xFile * file; // r3
    int rc; // r0
}

// Range: 0x8000C1B0 -> 0x8000C254
static int ReadSeek(struct st_FILELOADINFO * fli /* r30 */, int pos /* r4 */) {
    // Local variables
    struct tag_xFile * file; // r3
    int rc; // r0
}

// Range: 0x8000C254 -> 0x8000C27C
static void SetBuffer(struct st_FILELOADINFO * fli /* r0 */, char * dblbuffer /* r0 */, int bufsize /* r0 */) {
    // Local variables
    struct st_BINIO_XTRADATA * xtra; // r3
}

// Range: 0x8000C27C -> 0x8000C2A4
static void DiscardBuffer(struct st_FILELOADINFO * fli /* r0 */) {}

// Range: 0x8000C2A4 -> 0x8000C364
static int ReadRaw(struct st_FILELOADINFO * fli /* r29 */, void * data /* r4 */, int size /* r30 */, int count /* r6 */) {
    // Local variables
    struct tag_xFile * file; // r8
    int amt; // r31
    int n; // r0
}

// Range: 0x8000C364 -> 0x8000C38C
static int ReadBytes(struct st_FILELOADINFO * fli /* r0 */, char * data /* r0 */, int count /* r6 */) {
    // Local variables
    int act; // r0
}

// Range: 0x8000C38C -> 0x8000C3B4
static int ReadMShorts(struct st_FILELOADINFO * fli /* r0 */, signed short * data /* r0 */, int count /* r6 */) {
    // Local variables
    int act; // r0
}

// Range: 0x8000C3B4 -> 0x8000C3DC
static int ReadMLongs(struct st_FILELOADINFO * fli /* r0 */, int * data /* r0 */, int count /* r6 */) {
    // Local variables
    int act; // r0
}

// Range: 0x8000C3DC -> 0x8000C404
static int ReadMFloats(struct st_FILELOADINFO * fli /* r0 */, float * data /* r0 */, int count /* r6 */) {
    // Local variables
    int act; // r0
}

// Range: 0x8000C404 -> 0x8000C42C
static int ReadMDoubles(struct st_FILELOADINFO * fli /* r0 */, double * data /* r0 */, int count /* r6 */) {
    // Local variables
    int act; // r0
}

// Range: 0x8000C42C -> 0x8000C478
static int ReadIShorts(struct st_FILELOADINFO * fli /* r0 */, signed short * data /* r31 */, int count /* r5 */) {
    // Local variables
    int act; // r31
}

// Range: 0x8000C478 -> 0x8000C4C4
static int ReadILongs(struct st_FILELOADINFO * fli /* r0 */, int * data /* r31 */, int count /* r5 */) {
    // Local variables
    int act; // r31
}

// Range: 0x8000C4C4 -> 0x8000C510
static int ReadIFloats(struct st_FILELOADINFO * fli /* r0 */, float * data /* r31 */, int count /* r5 */) {
    // Local variables
    int act; // r31
}

// Range: 0x8000C510 -> 0x8000C55C
static int ReadIDoubles(struct st_FILELOADINFO * fli /* r0 */, double * data /* r31 */, int count /* r5 */) {
    // Local variables
    int act; // r31
}

// Range: 0x8000C55C -> 0x8000C580
static int AsyncMRead(struct st_FILELOADINFO * fli /* r0 */, int offset /* r0 */, char * data /* r0 */, int size /* r0 */, int n /* r0 */) {}

// Range: 0x8000C580 -> 0x8000C5A4
static int AsyncIRead(struct st_FILELOADINFO * fli /* r0 */, int offset /* r0 */, char * data /* r0 */, int size /* r0 */, int n /* r0 */) {}

enum en_BIO_ASYNC_ERRCODES {
    BINIO_ASYNC_FAIL = -1,
    BINIO_ASYNC_NOOP = 0,
    BINIO_ASYNC_INPROG = 1,
    BINIO_ASYNC_DONE = 2,
    BINIO_ASYNC_FORCEENUMSIZEINT = 2147483647,
};
// Range: 0x8000C5A4 -> 0x8000C5C4
static enum en_BIO_ASYNC_ERRCODES AsyncReadStatus(struct st_FILELOADINFO * fli /* r0 */) {}

// Range: 0x8000C5C4 -> 0x8000C688
static void Swap2(char * d /* r3 */, int n /* r4 */) {
    // Local variables
    char t; // r5
}

// Range: 0x8000C688 -> 0x8000C75C
static void Swap4(char * d /* r3 */, int n /* r4 */) {
    // Local variables
    char t; // r5
}

// Range: 0x8000C75C -> 0x8000C850
static void Swap8(char * d /* r3 */, int n /* r4 */) {
    // Local variables
    char t; // r5
}

// Range: 0x8000C850 -> 0x8000C9A8
static struct tag_xFile * BFD_open(const char * filename /* r30 */, const char * mode /* r26 */, unsigned int lockid /* r29 */, void * xtradata /* r31 */, int fileflags /* r27 */) {
    // Local variables
    struct tag_xFile * bffp; // r29
    unsigned int orc; // r3
    struct st_BINIO_XTRADATA * xtra; // r0
    int xfflg; // r28

    // References
    // -> static struct tag_xFile g_xfload[8];
}

// Range: 0x8000C9A8 -> 0x8000C9F0
static void BFD_close(struct tag_xFile * bffp /* r0 */, void * xtradata /* r31 */) {
    // Local variables
    struct st_BINIO_XTRADATA * xtra; // r0
}

// Range: 0x8000C9F0 -> 0x8000CC00
static int BFD_read(void * data /* r3 */, int elesize /* r23 */, int elecnt /* r0 */, struct tag_xFile * bffp /* r24 */, void * xtradata /* r25 */) {
    // Local variables
    struct st_BINIO_XTRADATA * xtra; // r0
    char * dest; // r31
    int readbeg; // r6
    int refill; // r30
    int remain; // r29
    int actual; // r28
    unsigned int holdpos; // r22
    unsigned int safety; // r27
    unsigned int numBytes; // r26
}

// Range: 0x8000CC00 -> 0x8000CC48
static int BFD_seek(struct tag_xFile * bffp /* r0 */, int offset /* r30 */, int refpos /* r0 */, void * xtradata /* r31 */) {
    // Local variables
    struct st_BINIO_XTRADATA * xtra; // r0
    int rc; // r0
}

// Range: 0x8000CC48 -> 0x8000CC68
static int BFD_getLength(struct tag_xFile * bffp /* r0 */) {
    // Local variables
    int len; // r0
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
// Range: 0x8000CC68 -> 0x8000CCF0
static unsigned int BFD_startSector(const char * filename /* r3 */, int fileflags /* r4 */) {
    // Local variables
    struct tag_xFile xf; // r1+0x10
    unsigned int sect_start; // r1+0xC
    unsigned int fsize; // r1+0x8
    unsigned int rc; // r0
}

// Range: 0x8000CCF0 -> 0x8000CCF4
static void BFD_cb_GCP2_readasync() {}

// Range: 0x8000CCF4 -> 0x8000CDF0
static int BFD_AsyncRead(struct st_FILELOADINFO * fli /* r26 */, int pos /* r0 */, void * data /* r27 */, int size /* r28 */, int n /* r29 */) {
    // Local variables
    struct tag_xFile * file; // r31
    struct st_BINIO_XTRADATA * xtra; // r30
    int result; // r0
    int rc; // r0

    // References
    // -> static struct st_BINIO_XTRADATA * g_async_context;
}

enum XFILE_READSECTOR_STATUS {
    XFILE_RDSTAT_NOOP = 0,
    XFILE_RDSTAT_INPROG = 1,
    XFILE_RDSTAT_DONE = 2,
    XFILE_RDSTAT_FAIL = 3,
    XFILE_RDSTAT_QUEUED = 4,
    XFILE_RDSTAT_EXPIRED = 5,
};
// Range: 0x8000CDF0 -> 0x8000CEDC
static enum en_BIO_ASYNC_ERRCODES BFD_AsyncReadStatus(struct st_FILELOADINFO * fli /* r0 */) {
    // Local variables
    enum en_BIO_ASYNC_ERRCODES status; // r3
    struct st_BINIO_XTRADATA * xtra; // r31
    enum XFILE_READSECTOR_STATUS xrdstat; // r0
    int amtsofar; // r1+0x8

    // References
    // -> static struct st_BINIO_XTRADATA * g_async_context;
}


