/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned int g_loadlock; // size: 0x4, address: 0x50DD18
static class st_FILELOADINFO g_loadinst[8]; // size: 0x340, address: 0x53F1A0
static class tag_xFile g_xfload[8]; // size: 0x5A0, address: 0x53F4E0
static class st_BINIO_XTRADATA g_xtraload[8]; // size: 0x1E0, address: 0x53FA80
static class st_BINIO_XTRADATA * g_async_context; // size: 0x4, address: 0x50EE10
void BFD_cb_GCP2_readasync(class tag_xFile *); // size: 0x0, address: 0x1BF160
void DiscardBuffer(class st_FILELOADINFO *); // size: 0x0, address: 0x1BF810
void SetBuffer(class st_FILELOADINFO *, char *, signed int); // size: 0x0, address: 0x1BF840
signed int ReadSeek(class st_FILELOADINFO *, signed int); // size: 0x0, address: 0x1BF870
signed int SkipBytes(class st_FILELOADINFO *, signed int); // size: 0x0, address: 0x1BF920
enum en_BIO_ASYNC_ERRCODES AsyncReadStatus(class st_FILELOADINFO *); // size: 0x0, address: 0x1BF540
signed int AsyncMRead(class st_FILELOADINFO *, signed int, char *, signed int, signed int); // size: 0x0, address: 0x1BF560
signed int AsyncIRead(class st_FILELOADINFO *, signed int, char *, signed int, signed int); // size: 0x0, address: 0x1BF550
signed int ReadIDoubles(class st_FILELOADINFO *, double *, signed int); // size: 0x0, address: 0x1BF570
signed int ReadIFloats(class st_FILELOADINFO *, float *, signed int); // size: 0x0, address: 0x1BF580
signed int ReadILongs(class st_FILELOADINFO *, signed int *, signed int); // size: 0x0, address: 0x1BF590
signed int ReadIShorts(class st_FILELOADINFO *, signed short *, signed int); // size: 0x0, address: 0x1BF5A0
signed int ReadMDoubles(class st_FILELOADINFO *, double *, signed int); // size: 0x0, address: 0x1BF5B0
signed int ReadMFloats(class st_FILELOADINFO *, float *, signed int); // size: 0x0, address: 0x1BF5F0
signed int ReadMLongs(class st_FILELOADINFO *, signed int *, signed int); // size: 0x0, address: 0x1BF660
signed int ReadMShorts(class st_FILELOADINFO *, signed short *, signed int); // size: 0x0, address: 0x1BF6D0
signed int ReadBytes(class st_FILELOADINFO *, char *, signed int); // size: 0x0, address: 0x1BF730
void LoadDestroy(class st_FILELOADINFO *); // size: 0x0, address: 0x1BFA10
// total size: 0xB4
class tag_xFile {
    // Members
public:
    char relname[32]; // offset 0x0, size 0x20
    class tag_iFile ps; // offset 0x20, size 0x90
    void * user_data; // offset 0xB0, size 0x4
};
// total size: 0x68
class st_FILELOADINFO {
    // Members
public:
    void (* destroy)(class st_FILELOADINFO *); // offset 0x0, size 0x4
    signed int (* readBytes)(class st_FILELOADINFO *, char *, signed int); // offset 0x4, size 0x4
    signed int (* readMShorts)(class st_FILELOADINFO *, signed short *, signed int); // offset 0x8, size 0x4
    signed int (* readMLongs)(class st_FILELOADINFO *, signed int *, signed int); // offset 0xC, size 0x4
    signed int (* readMFloats)(class st_FILELOADINFO *, float *, signed int); // offset 0x10, size 0x4
    signed int (* readMDoubles)(class st_FILELOADINFO *, double *, signed int); // offset 0x14, size 0x4
    signed int (* readIShorts)(class st_FILELOADINFO *, signed short *, signed int); // offset 0x18, size 0x4
    signed int (* readILongs)(class st_FILELOADINFO *, signed int *, signed int); // offset 0x1C, size 0x4
    signed int (* readIFloats)(class st_FILELOADINFO *, float *, signed int); // offset 0x20, size 0x4
    signed int (* readIDoubles)(class st_FILELOADINFO *, double *, signed int); // offset 0x24, size 0x4
    signed int (* skipBytes)(class st_FILELOADINFO *, signed int); // offset 0x28, size 0x4
    signed int (* seekSpot)(class st_FILELOADINFO *, signed int); // offset 0x2C, size 0x4
    void (* setDoubleBuf)(class st_FILELOADINFO *, char *, signed int); // offset 0x30, size 0x4
    void (* discardDblBuf)(class st_FILELOADINFO *); // offset 0x34, size 0x4
    signed int (* asyncIRead)(class st_FILELOADINFO *, signed int, char *, signed int, signed int); // offset 0x38, size 0x4
    signed int (* asyncMRead)(class st_FILELOADINFO *, signed int, char *, signed int, signed int); // offset 0x3C, size 0x4
    enum en_BIO_ASYNC_ERRCODES (* asyncReadStatus)(class st_FILELOADINFO *); // offset 0x40, size 0x4
    unsigned int lockid; // offset 0x44, size 0x4
    enum en_FIOERRCODES error; // offset 0x48, size 0x4
    unsigned int basesector; // offset 0x4C, size 0x4
    void * privdata; // offset 0x50, size 0x4
    void * xtradata; // offset 0x54, size 0x4
    void * asyndata; // offset 0x58, size 0x4
    signed int filesize; // offset 0x5C, size 0x4
    signed int remain; // offset 0x60, size 0x4
    signed int position; // offset 0x64, size 0x4
};
// total size: 0x3C
class st_BINIO_XTRADATA {
    // Members
public:
    char * dbl_buf; // offset 0x0, size 0x4
    signed int dblbuf_size; // offset 0x4, size 0x4
    signed int dbl_beg; // offset 0x8, size 0x4
    signed int dbl_end; // offset 0xC, size 0x4
    signed int dbl_amt; // offset 0x10, size 0x4
    unsigned int fpos; // offset 0x14, size 0x4
    char * asyn_data; // offset 0x18, size 0x4
    signed int asyn_amt; // offset 0x1C, size 0x4
    signed int asyn_elesize; // offset 0x20, size 0x4
    signed int asyn_ismot; // offset 0x24, size 0x4
    enum en_BIO_ASYNC_ERRCODES asyn_status; // offset 0x28, size 0x4
    unsigned int pad[3]; // offset 0x2C, size 0xC
    signed int gcaskey; // offset 0x38, size 0x4
};
enum en_FIOERRCODES {
    FIOERR_NONE = 0,
    FIOERR_READFAIL = 1,
    FIOERR_WRITEFAIL = 2,
    FIOERR_SEEKFAIL = 3,
    FIOERR_USERABORT = 4,
};
enum en_BIO_ASYNC_ERRCODES {
    BINIO_ASYNC_FAIL = -1,
    BINIO_ASYNC_NOOP = 0,
    BINIO_ASYNC_INPROG = 1,
    BINIO_ASYNC_DONE = 2,
    BINIO_ASYNC_FORCEENUMSIZEINT = 2147483647,
};
// total size: 0x90
class tag_iFile {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    char path[128]; // offset 0x4, size 0x80
    signed int fd; // offset 0x84, size 0x4
    signed int offset; // offset 0x88, size 0x4
    signed int length; // offset 0x8C, size 0x4
};
enum XFILE_READSECTOR_STATUS {
    XFILE_RDSTAT_NOOP = 0,
    XFILE_RDSTAT_INPROG = 1,
    XFILE_RDSTAT_DONE = 2,
    XFILE_RDSTAT_FAIL = 3,
    XFILE_RDSTAT_QUEUED = 4,
    XFILE_RDSTAT_EXPIRED = 5,
};

/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BEF90 -> 0x001BF060
*/
// Range: 0x1BEF90 -> 0x1BF060
static enum en_BIO_ASYNC_ERRCODES BFD_AsyncReadStatus(class st_FILELOADINFO * fli /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BEF90 -> 0x1BF060
        enum en_BIO_ASYNC_ERRCODES status; // r2
        class st_BINIO_XTRADATA * xtra; // r16
        enum XFILE_READSECTOR_STATUS xrdstat; // r2
        signed int amtsofar; // r29+0x2C
    }
}


/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF060 -> 0x001BF15C
*/
// Range: 0x1BF060 -> 0x1BF15C
static signed int BFD_AsyncRead(class st_FILELOADINFO * fli /* r21 */, signed int pos /* r2 */, void * data /* r20 */, signed int size /* r19 */, signed int n /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1BF060 -> 0x1BF15C
        class tag_xFile * file; // r17
        class st_BINIO_XTRADATA * xtra; // r16
        signed int result; // r2
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF160 -> 0x001BF168
*/
// Range: 0x1BF160 -> 0x1BF168
static void BFD_cb_GCP2_readasync() {
    /* anonymous block */ {
        // Range: 0x1BF160 -> 0x1BF168
    }
}


/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF170 -> 0x001BF3C0
*/
// Range: 0x1BF170 -> 0x1BF3C0
static signed int BFD_read(void * data /* r2 */, signed int elesize /* r30 */, signed int elecnt /* r2 */, class tag_xFile * bffp /* r21 */, void * xtradata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BF170 -> 0x1BF3C0
        class st_BINIO_XTRADATA * xtra; // r20
        char * dest; // r29+0xAC
        signed int readbeg; // r3
        signed int refill; // r22
        signed int remain; // r19
        signed int actual; // r18
        unsigned int holdpos; // r16
        unsigned int safety; // r17
        unsigned int numBytes; // r23
    }
}


/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF3C0 -> 0x001BF4C4
*/
// Range: 0x1BF3C0 -> 0x1BF4C4
static class tag_xFile * BFD_open(char * filename /* r18 */, char * mode /* r20 */, unsigned int lockid /* r19 */, void * xtradata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BF3C0 -> 0x1BF4C4
        class tag_xFile * bffp; // r19
        unsigned int orc; // r2
        class st_BINIO_XTRADATA * xtra; // r17
        signed int xfflg; // r16
    }
}


/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF4D0 -> 0x001BF538
*/
// Range: 0x1BF4D0 -> 0x1BF538
static void Swap8(char * d /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BF4D0 -> 0x1BF538
        char t; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF540 -> 0x001BF548
*/
// Range: 0x1BF540 -> 0x1BF548
static enum en_BIO_ASYNC_ERRCODES AsyncReadStatus(class st_FILELOADINFO * fli /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BF540 -> 0x1BF548
    }
}


/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF550 -> 0x001BF558
*/
// Range: 0x1BF550 -> 0x1BF558
static signed int AsyncIRead(class st_FILELOADINFO * fli /* r2 */, signed int offset /* r2 */, char * data /* r2 */, signed int size /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BF550 -> 0x1BF558
    }
}


/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF560 -> 0x001BF568
*/
// Range: 0x1BF560 -> 0x1BF568
static signed int AsyncMRead(class st_FILELOADINFO * fli /* r2 */, signed int offset /* r2 */, char * data /* r2 */, signed int size /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BF560 -> 0x1BF568
    }
}


/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF570 -> 0x001BF57C
*/
// Range: 0x1BF570 -> 0x1BF57C
static signed int ReadIDoubles(class st_FILELOADINFO * fli /* r2 */, double * data /* r2 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BF570 -> 0x1BF57C
        signed int act; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF580 -> 0x001BF58C
*/
// Range: 0x1BF580 -> 0x1BF58C
static signed int ReadIFloats(class st_FILELOADINFO * fli /* r2 */, float * data /* r2 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BF580 -> 0x1BF58C
        signed int act; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF590 -> 0x001BF59C
*/
// Range: 0x1BF590 -> 0x1BF59C
static signed int ReadILongs(class st_FILELOADINFO * fli /* r2 */, signed int * data /* r2 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BF590 -> 0x1BF59C
        signed int act; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF5A0 -> 0x001BF5AC
*/
// Range: 0x1BF5A0 -> 0x1BF5AC
static signed int ReadIShorts(class st_FILELOADINFO * fli /* r2 */, signed short * data /* r2 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BF5A0 -> 0x1BF5AC
        signed int act; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF5B0 -> 0x001BF5E8
*/
// Range: 0x1BF5B0 -> 0x1BF5E8
static signed int ReadMDoubles(class st_FILELOADINFO * fli /* r2 */, double * data /* r16 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BF5B0 -> 0x1BF5E8
        signed int act; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF5F0 -> 0x001BF660
*/
// Range: 0x1BF5F0 -> 0x1BF660
static signed int ReadMFloats(class st_FILELOADINFO * fli /* r2 */, float * data /* r16 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BF5F0 -> 0x1BF660
        signed int act; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF660 -> 0x001BF6D0
*/
// Range: 0x1BF660 -> 0x1BF6D0
static signed int ReadMLongs(class st_FILELOADINFO * fli /* r2 */, signed int * data /* r16 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BF660 -> 0x1BF6D0
        signed int act; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF6D0 -> 0x001BF730
*/
// Range: 0x1BF6D0 -> 0x1BF730
static signed int ReadMShorts(class st_FILELOADINFO * fli /* r2 */, signed short * data /* r16 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BF6D0 -> 0x1BF730
        signed int act; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF730 -> 0x001BF73C
*/
// Range: 0x1BF730 -> 0x1BF73C
static signed int ReadBytes(class st_FILELOADINFO * fli /* r2 */, char * data /* r2 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BF730 -> 0x1BF73C
        signed int act; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF740 -> 0x001BF808
*/
// Range: 0x1BF740 -> 0x1BF808
static signed int ReadRaw(class st_FILELOADINFO * fli /* r18 */, void * data /* r2 */, signed int size /* r17 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BF740 -> 0x1BF808
        class tag_xFile * file; // r6
        signed int amt; // r16
        signed int n; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF810 -> 0x001BF838
*/
// Range: 0x1BF810 -> 0x1BF838
static void DiscardBuffer(class st_FILELOADINFO * fli /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BF810 -> 0x1BF838
    }
}


/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF840 -> 0x001BF868
*/
// Range: 0x1BF840 -> 0x1BF868
static void SetBuffer(class st_FILELOADINFO * fli /* r2 */, char * dblbuffer /* r2 */, signed int bufsize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BF840 -> 0x1BF868
        class st_BINIO_XTRADATA * xtra; // r3
    }
}


/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF870 -> 0x001BF920
*/
// Range: 0x1BF870 -> 0x1BF920
static signed int ReadSeek(class st_FILELOADINFO * fli /* r16 */, signed int pos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BF870 -> 0x1BF920
        class tag_xFile * file; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF920 -> 0x001BFA04
*/
// Range: 0x1BF920 -> 0x1BFA04
static signed int SkipBytes(class st_FILELOADINFO * fli /* r17 */, signed int fwd /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1BF920 -> 0x1BFA04
        class tag_xFile * file; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BFA10 -> 0x001BFA90
*/
// Range: 0x1BFA10 -> 0x1BFA90
static void LoadDestroy(class st_FILELOADINFO * fli /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1BFA10 -> 0x1BFA90
        class tag_xFile * fp; // r2
        unsigned int lockid; // r16
    }
}


/*
    Compile unit: C:\SB\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BFA90 -> 0x001BFCF4
*/
// Range: 0x1BFA90 -> 0x1BFCF4
class st_FILELOADINFO * xBinioLoadCreate(char * filename /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1BFA90 -> 0x1BFCF4
        class st_FILELOADINFO * fli; // r17
        class tag_xFile * tmp_fp; // r2
        signed int i; // r6
        signed int uselock; // r16
    }
}


