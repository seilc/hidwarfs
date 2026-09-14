/*
    Compile unit: E:\SD2\Game\flat\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned int g_loadlock; // size: 0x4, address: 0x357584
static class st_FILELOADINFO g_loadinst[8]; // size: 0x340, address: 0x297CA0
static class tag_xFile g_xfload[8]; // size: 0x600, address: 0x297FE0
static class st_BINIO_XTRADATA g_xtraload[8]; // size: 0x1C0, address: 0x2985E0
static class st_BINIO_XTRADATA * g_async_context; // size: 0x4, address: 0x358034
void BFD_cb_asyncread(signed int); // size: 0x0, address: 0x1863D0
void DiscardBuffer(class st_FILELOADINFO *); // size: 0x0, address: 0x186A90
void SetBuffer(class st_FILELOADINFO *, char *, signed int); // size: 0x0, address: 0x186AC0
signed int ReadSeek(class st_FILELOADINFO *, signed int); // size: 0x0, address: 0x186AF0
signed int SkipBytes(class st_FILELOADINFO *, signed int); // size: 0x0, address: 0x186BB0
enum en_BIO_ASYNC_ERRCODES AsyncReadStatus(class st_FILELOADINFO *); // size: 0x0, address: 0x1867D0
signed int AsyncMRead(class st_FILELOADINFO *, signed int, char *, signed int, signed int); // size: 0x0, address: 0x1867F0
signed int AsyncIRead(class st_FILELOADINFO *, signed int, char *, signed int, signed int); // size: 0x0, address: 0x1867E0
signed int ReadIDoubles(class st_FILELOADINFO *, double *, signed int); // size: 0x0, address: 0x186800
signed int ReadIFloats(class st_FILELOADINFO *, float *, signed int); // size: 0x0, address: 0x186810
signed int ReadILongs(class st_FILELOADINFO *, signed int *, signed int); // size: 0x0, address: 0x186820
signed int ReadIShorts(class st_FILELOADINFO *, signed short *, signed int); // size: 0x0, address: 0x186830
signed int ReadMDoubles(class st_FILELOADINFO *, double *, signed int); // size: 0x0, address: 0x186840
signed int ReadMFloats(class st_FILELOADINFO *, float *, signed int); // size: 0x0, address: 0x186880
signed int ReadMLongs(class st_FILELOADINFO *, signed int *, signed int); // size: 0x0, address: 0x1868F0
signed int ReadMShorts(class st_FILELOADINFO *, signed short *, signed int); // size: 0x0, address: 0x186960
signed int ReadBytes(class st_FILELOADINFO *, char *, signed int); // size: 0x0, address: 0x1869C0
void LoadDestroy(class st_FILELOADINFO *); // size: 0x0, address: 0x186C80
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
// total size: 0x38
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
};
// total size: 0xC0
class tag_xFile {
    // Members
public:
    char relname[16]; // offset 0x0, size 0x10
    class tag_iFile ps; // offset 0x10, size 0xB0
};
enum en_FIOERRCODES {
    FIOERR_NONE = 0,
    FIOERR_READFAIL = 1,
    FIOERR_WRITEFAIL = 2,
    FIOERR_SEEKFAIL = 3,
    FIOERR_USERABORT = 4,
};
enum XFILE_READSECTOR_STATUS {
    XFILE_RDSTAT_NOOP = 0,
    XFILE_RDSTAT_INPROG = 1,
    XFILE_RDSTAT_DONE = 2,
    XFILE_RDSTAT_FAIL = 3,
};
enum en_BIO_ASYNC_ERRCODES {
    BINIO_ASYNC_FAIL = -1,
    BINIO_ASYNC_NOOP = 0,
    BINIO_ASYNC_INPROG = 1,
    BINIO_ASYNC_DONE = 2,
    BINIO_ASYNC_FORCEENUMSIZEINT = 2147483647,
};
// total size: 0xB0
class tag_iFile {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    char path[128]; // offset 0x4, size 0x80
    signed int fd; // offset 0x84, size 0x4
    class sceCdlFILE file; // offset 0x88, size 0x24
    void (* cb)(signed int); // offset 0xAC, size 0x4
};
// total size: 0x24
class sceCdlFILE {
    // Members
public:
    unsigned int lsn; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    char name[16]; // offset 0x8, size 0x10
    unsigned char date[8]; // offset 0x18, size 0x8
    unsigned int flag; // offset 0x20, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00186230 -> 0x001862E8
*/
// Range: 0x186230 -> 0x1862E8
static enum en_BIO_ASYNC_ERRCODES BFD_AsyncReadStatus(class st_FILELOADINFO * fli /* r2 */) {
    /* anonymous block */ {
        // Range: 0x186230 -> 0x1862E8
        enum XFILE_READSECTOR_STATUS xrdstat; // r2
        class st_BINIO_XTRADATA * xtra; // r16
        enum en_BIO_ASYNC_ERRCODES status; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001862F0 -> 0x001863CC
*/
// Range: 0x1862F0 -> 0x1863CC
static signed int BFD_AsyncRead(class st_FILELOADINFO * fli /* r20 */, signed int pos /* r19 */, void * data /* r18 */, signed int size /* r17 */, signed int n /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1862F0 -> 0x1863CC
        signed int xsectsize; // r2
        unsigned int rdsec; // r2
        class st_BINIO_XTRADATA * xtra; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001863D0 -> 0x001863E0
*/
// Range: 0x1863D0 -> 0x1863E0
static void BFD_cb_asyncread() {
    /* anonymous block */ {
        // Range: 0x1863D0 -> 0x1863E0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001863E0 -> 0x0018661C
*/
// Range: 0x1863E0 -> 0x18661C
static signed int BFD_read(void * data /* r2 */, signed int elesize /* r29+0xAC */, signed int elecnt /* r2 */, class tag_xFile * bffp /* r21 */, void * xtradata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1863E0 -> 0x18661C
        unsigned int numBytes; // r23
        unsigned int safety; // r19
        unsigned int holdpos; // r20
        signed int actual; // r18
        signed int remain; // r17
        signed int refill; // r22
        signed int readbeg; // r3
        char * dest; // r30
        class st_BINIO_XTRADATA * xtra; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00186620 -> 0x0018665C
*/
// Range: 0x186620 -> 0x18665C
static void BFD_close(class tag_xFile * bffp /* r2 */, void * xtradata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x186620 -> 0x18665C
        class st_BINIO_XTRADATA * xtra; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00186660 -> 0x00186758
*/
// Range: 0x186660 -> 0x186758
static class tag_xFile * BFD_open(char * filename /* r17 */, char * mode /* r20 */, unsigned int lockid /* r18 */, void * xtradata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x186660 -> 0x186758
        signed int xfflg; // r19
        class st_BINIO_XTRADATA * xtra; // r16
        unsigned int orc; // r2
        class tag_xFile * bffp; // r18
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00186760 -> 0x001867C8
*/
// Range: 0x186760 -> 0x1867C8
static void Swap8(char * d /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x186760 -> 0x1867C8
        char t; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001867D0 -> 0x001867D8
*/
// Range: 0x1867D0 -> 0x1867D8
static enum en_BIO_ASYNC_ERRCODES AsyncReadStatus(class st_FILELOADINFO * fli /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1867D0 -> 0x1867D8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001867E0 -> 0x001867E8
*/
// Range: 0x1867E0 -> 0x1867E8
static signed int AsyncIRead(class st_FILELOADINFO * fli /* r2 */, signed int offset /* r2 */, char * data /* r2 */, signed int size /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1867E0 -> 0x1867E8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001867F0 -> 0x001867F8
*/
// Range: 0x1867F0 -> 0x1867F8
static signed int AsyncMRead(class st_FILELOADINFO * fli /* r2 */, signed int offset /* r2 */, char * data /* r2 */, signed int size /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1867F0 -> 0x1867F8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00186800 -> 0x0018680C
*/
// Range: 0x186800 -> 0x18680C
static signed int ReadIDoubles(class st_FILELOADINFO * fli /* r2 */, double * data /* r2 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x186800 -> 0x18680C
        signed int act; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00186810 -> 0x0018681C
*/
// Range: 0x186810 -> 0x18681C
static signed int ReadIFloats(class st_FILELOADINFO * fli /* r2 */, float * data /* r2 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x186810 -> 0x18681C
        signed int act; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00186820 -> 0x0018682C
*/
// Range: 0x186820 -> 0x18682C
static signed int ReadILongs(class st_FILELOADINFO * fli /* r2 */, signed int * data /* r2 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x186820 -> 0x18682C
        signed int act; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00186830 -> 0x0018683C
*/
// Range: 0x186830 -> 0x18683C
static signed int ReadIShorts(class st_FILELOADINFO * fli /* r2 */, signed short * data /* r2 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x186830 -> 0x18683C
        signed int act; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00186840 -> 0x00186878
*/
// Range: 0x186840 -> 0x186878
static signed int ReadMDoubles(class st_FILELOADINFO * fli /* r2 */, double * data /* r16 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x186840 -> 0x186878
        signed int act; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00186880 -> 0x001868F0
*/
// Range: 0x186880 -> 0x1868F0
static signed int ReadMFloats(class st_FILELOADINFO * fli /* r2 */, float * data /* r16 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x186880 -> 0x1868F0
        signed int act; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001868F0 -> 0x00186960
*/
// Range: 0x1868F0 -> 0x186960
static signed int ReadMLongs(class st_FILELOADINFO * fli /* r2 */, signed int * data /* r16 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1868F0 -> 0x186960
        signed int act; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00186960 -> 0x001869C0
*/
// Range: 0x186960 -> 0x1869C0
static signed int ReadMShorts(class st_FILELOADINFO * fli /* r2 */, signed short * data /* r16 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x186960 -> 0x1869C0
        signed int act; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001869C0 -> 0x001869CC
*/
// Range: 0x1869C0 -> 0x1869CC
static signed int ReadBytes(class st_FILELOADINFO * fli /* r2 */, char * data /* r2 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1869C0 -> 0x1869CC
        signed int act; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001869D0 -> 0x00186A8C
*/
// Range: 0x1869D0 -> 0x186A8C
static signed int ReadRaw(class st_FILELOADINFO * fli /* r18 */, void * data /* r2 */, signed int size /* r17 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1869D0 -> 0x186A8C
        signed int n; // r2
        signed int amt; // r16
        class tag_xFile * file; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00186A90 -> 0x00186AB8
*/
// Range: 0x186A90 -> 0x186AB8
static void DiscardBuffer(class st_FILELOADINFO * fli /* r2 */) {
    /* anonymous block */ {
        // Range: 0x186A90 -> 0x186AB8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00186AC0 -> 0x00186AE8
*/
// Range: 0x186AC0 -> 0x186AE8
static void SetBuffer(class st_FILELOADINFO * fli /* r2 */, char * dblbuffer /* r2 */, signed int bufsize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x186AC0 -> 0x186AE8
        class st_BINIO_XTRADATA * xtra; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00186AF0 -> 0x00186BA4
*/
// Range: 0x186AF0 -> 0x186BA4
static signed int ReadSeek(class st_FILELOADINFO * fli /* r16 */, signed int pos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x186AF0 -> 0x186BA4
        class tag_xFile * file; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00186BB0 -> 0x00186C80
*/
// Range: 0x186BB0 -> 0x186C80
static signed int SkipBytes(class st_FILELOADINFO * fli /* r17 */, signed int fwd /* r16 */) {
    /* anonymous block */ {
        // Range: 0x186BB0 -> 0x186C80
        class tag_xFile * file; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00186C80 -> 0x00186D00
*/
// Range: 0x186C80 -> 0x186D00
static void LoadDestroy(class st_FILELOADINFO * fli /* r17 */) {
    /* anonymous block */ {
        // Range: 0x186C80 -> 0x186D00
        unsigned int lockid; // r16
        class tag_xFile * fp; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00186D00 -> 0x00186FA8
*/
// Range: 0x186D00 -> 0x186FA8
class st_FILELOADINFO * xBinioLoadCreate(char * filename /* r18 */) {
    /* anonymous block */ {
        // Range: 0x186D00 -> 0x186FA8
        signed int uselock; // r17
        signed int i; // r5
        class tag_xFile * tmp_fp; // r17
        class st_FILELOADINFO * fli; // r16
    }
}


