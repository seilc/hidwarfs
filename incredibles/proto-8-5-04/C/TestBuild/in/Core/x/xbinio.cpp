/*
    Compile unit: C:\TestBuild\in\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned int g_loadlock; // size: 0x4, address: 0x60775C
static class st_FILELOADINFO g_loadinst[8]; // size: 0x340, address: 0x6269B0
static class tag_xFile g_xfload[8]; // size: 0x5A0, address: 0x626CF0
static class st_BINIO_XTRADATA g_xtraload[8]; // size: 0x1E0, address: 0x627290
static class st_BINIO_XTRADATA * g_async_context; // size: 0x4, address: 0x608978
void BFD_cb_GCP2_readasync(class tag_xFile *); // size: 0x0, address: 0x171870
void DiscardBuffer(class st_FILELOADINFO *); // size: 0x0, address: 0x171F00
void SetBuffer(class st_FILELOADINFO *, char *, signed int); // size: 0x0, address: 0x171F30
signed int ReadSeek(class st_FILELOADINFO *, signed int); // size: 0x0, address: 0x171F60
signed int SkipBytes(class st_FILELOADINFO *, signed int); // size: 0x0, address: 0x172010
enum en_BIO_ASYNC_ERRCODES AsyncReadStatus(class st_FILELOADINFO *); // size: 0x0, address: 0x171C40
signed int AsyncMRead(class st_FILELOADINFO *, signed int, char *, signed int, signed int); // size: 0x0, address: 0x171C60
signed int AsyncIRead(class st_FILELOADINFO *, signed int, char *, signed int, signed int); // size: 0x0, address: 0x171C50
signed int ReadIDoubles(class st_FILELOADINFO *, double *, signed int); // size: 0x0, address: 0x171C70
signed int ReadIFloats(class st_FILELOADINFO *, float *, signed int); // size: 0x0, address: 0x171C80
signed int ReadILongs(class st_FILELOADINFO *, signed int *, signed int); // size: 0x0, address: 0x171C90
signed int ReadIShorts(class st_FILELOADINFO *, signed short *, signed int); // size: 0x0, address: 0x171CA0
signed int ReadMDoubles(class st_FILELOADINFO *, double *, signed int); // size: 0x0, address: 0x171CB0
signed int ReadMFloats(class st_FILELOADINFO *, float *, signed int); // size: 0x0, address: 0x171CF0
signed int ReadMLongs(class st_FILELOADINFO *, signed int *, signed int); // size: 0x0, address: 0x171D60
signed int ReadMShorts(class st_FILELOADINFO *, signed short *, signed int); // size: 0x0, address: 0x171DD0
signed int ReadBytes(class st_FILELOADINFO *, char *, signed int); // size: 0x0, address: 0x171E30
void LoadDestroy(class st_FILELOADINFO *); // size: 0x0, address: 0x1720F0
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
// total size: 0xB4
class tag_xFile {
    // Members
public:
    char relname[32]; // offset 0x0, size 0x20
    class tag_iFile ps; // offset 0x20, size 0x90
    void * user_data; // offset 0xB0, size 0x4
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
    Compile unit: C:\TestBuild\in\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171690 -> 0x00171764
*/
// Range: 0x171690 -> 0x171764
static enum en_BIO_ASYNC_ERRCODES BFD_AsyncReadStatus(class st_FILELOADINFO * fli /* r2 */) {
    /* anonymous block */ {
        // Range: 0x171690 -> 0x171764
        enum en_BIO_ASYNC_ERRCODES status; // r2
        class st_BINIO_XTRADATA * xtra; // r2
        enum XFILE_READSECTOR_STATUS xrdstat; // r2
        signed int amtsofar; // r29+0x2C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171770 -> 0x0017186C
*/
// Range: 0x171770 -> 0x17186C
static signed int BFD_AsyncRead(class st_FILELOADINFO * fli /* r21 */, signed int pos /* r2 */, void * data /* r20 */, signed int size /* r19 */, signed int n /* r18 */) {
    /* anonymous block */ {
        // Range: 0x171770 -> 0x17186C
        class tag_xFile * file; // r2
        class st_BINIO_XTRADATA * xtra; // r2
        signed int result; // r2
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171870 -> 0x00171878
*/
// Range: 0x171870 -> 0x171878
static void BFD_cb_GCP2_readasync() {
    /* anonymous block */ {
        // Range: 0x171870 -> 0x171878
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171880 -> 0x00171AB0
*/
// Range: 0x171880 -> 0x171AB0
static signed int BFD_read(void * data /* r2 */, signed int elesize /* r30 */, signed int elecnt /* r2 */, class tag_xFile * bffp /* r21 */, void * xtradata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x171880 -> 0x171AB0
        class st_BINIO_XTRADATA * xtra; // r20
        char * dest; // r29+0xAC
        signed int readbeg; // r2
        signed int refill; // r22
        signed int remain; // r19
        signed int actual; // r18
        unsigned int holdpos; // r2
        unsigned int safety; // r17
        unsigned int numBytes; // r23
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171AB0 -> 0x00171BCC
*/
// Range: 0x171AB0 -> 0x171BCC
static class tag_xFile * BFD_open(char * filename /* r20 */, char * mode /* r21 */, unsigned int lockid /* r19 */, void * xtradata /* r18 */, signed int fileflags /* r17 */) {
    /* anonymous block */ {
        // Range: 0x171AB0 -> 0x171BCC
        class tag_xFile * bffp; // r19
        unsigned int orc; // r2
        class st_BINIO_XTRADATA * xtra; // r2
        signed int xfflg; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171BD0 -> 0x00171C38
*/
// Range: 0x171BD0 -> 0x171C38
static void Swap8(char * d /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x171BD0 -> 0x171C38
        char t; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171C40 -> 0x00171C48
*/
// Range: 0x171C40 -> 0x171C48
static enum en_BIO_ASYNC_ERRCODES AsyncReadStatus(class st_FILELOADINFO * fli /* r2 */) {
    /* anonymous block */ {
        // Range: 0x171C40 -> 0x171C48
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171C50 -> 0x00171C58
*/
// Range: 0x171C50 -> 0x171C58
static signed int AsyncIRead(class st_FILELOADINFO * fli /* r2 */, signed int offset /* r2 */, char * data /* r2 */, signed int size /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x171C50 -> 0x171C58
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171C60 -> 0x00171C68
*/
// Range: 0x171C60 -> 0x171C68
static signed int AsyncMRead(class st_FILELOADINFO * fli /* r2 */, signed int offset /* r2 */, char * data /* r2 */, signed int size /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x171C60 -> 0x171C68
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171C70 -> 0x00171C7C
*/
// Range: 0x171C70 -> 0x171C7C
static signed int ReadIDoubles(class st_FILELOADINFO * fli /* r2 */, double * data /* r2 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x171C70 -> 0x171C7C
        signed int act; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171C80 -> 0x00171C8C
*/
// Range: 0x171C80 -> 0x171C8C
static signed int ReadIFloats(class st_FILELOADINFO * fli /* r2 */, float * data /* r2 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x171C80 -> 0x171C8C
        signed int act; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171C90 -> 0x00171C9C
*/
// Range: 0x171C90 -> 0x171C9C
static signed int ReadILongs(class st_FILELOADINFO * fli /* r2 */, signed int * data /* r2 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x171C90 -> 0x171C9C
        signed int act; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171CA0 -> 0x00171CAC
*/
// Range: 0x171CA0 -> 0x171CAC
static signed int ReadIShorts(class st_FILELOADINFO * fli /* r2 */, signed short * data /* r2 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x171CA0 -> 0x171CAC
        signed int act; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171CB0 -> 0x00171CE8
*/
// Range: 0x171CB0 -> 0x171CE8
static signed int ReadMDoubles(class st_FILELOADINFO * fli /* r2 */, double * data /* r16 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x171CB0 -> 0x171CE8
        signed int act; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171CF0 -> 0x00171D60
*/
// Range: 0x171CF0 -> 0x171D60
static signed int ReadMFloats(class st_FILELOADINFO * fli /* r2 */, float * data /* r16 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x171CF0 -> 0x171D60
        signed int act; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171D60 -> 0x00171DD0
*/
// Range: 0x171D60 -> 0x171DD0
static signed int ReadMLongs(class st_FILELOADINFO * fli /* r2 */, signed int * data /* r16 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x171D60 -> 0x171DD0
        signed int act; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171DD0 -> 0x00171E30
*/
// Range: 0x171DD0 -> 0x171E30
static signed int ReadMShorts(class st_FILELOADINFO * fli /* r2 */, signed short * data /* r16 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x171DD0 -> 0x171E30
        signed int act; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171E30 -> 0x00171E3C
*/
// Range: 0x171E30 -> 0x171E3C
static signed int ReadBytes(class st_FILELOADINFO * fli /* r2 */, char * data /* r2 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x171E30 -> 0x171E3C
        signed int act; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171E40 -> 0x00171EFC
*/
// Range: 0x171E40 -> 0x171EFC
static signed int ReadRaw(class st_FILELOADINFO * fli /* r18 */, void * data /* r2 */, signed int size /* r17 */, signed int count /* r2 */) {
    /* anonymous block */ {
        // Range: 0x171E40 -> 0x171EFC
        class tag_xFile * file; // r6
        signed int amt; // r16
        signed int n; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171F00 -> 0x00171F28
*/
// Range: 0x171F00 -> 0x171F28
static void DiscardBuffer(class st_FILELOADINFO * fli /* r2 */) {
    /* anonymous block */ {
        // Range: 0x171F00 -> 0x171F28
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171F30 -> 0x00171F58
*/
// Range: 0x171F30 -> 0x171F58
static void SetBuffer(class st_FILELOADINFO * fli /* r2 */, char * dblbuffer /* r2 */, signed int bufsize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x171F30 -> 0x171F58
        class st_BINIO_XTRADATA * xtra; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171F60 -> 0x00172010
*/
// Range: 0x171F60 -> 0x172010
static signed int ReadSeek(class st_FILELOADINFO * fli /* r16 */, signed int pos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x171F60 -> 0x172010
        class tag_xFile * file; // r3
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00172010 -> 0x001720EC
*/
// Range: 0x172010 -> 0x1720EC
static signed int SkipBytes(class st_FILELOADINFO * fli /* r17 */, signed int fwd /* r16 */) {
    /* anonymous block */ {
        // Range: 0x172010 -> 0x1720EC
        class tag_xFile * file; // r3
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001720F0 -> 0x00172170
*/
// Range: 0x1720F0 -> 0x172170
static void LoadDestroy(class st_FILELOADINFO * fli /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1720F0 -> 0x172170
        class tag_xFile * fp; // r2
        unsigned int lockid; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xbinio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00172170 -> 0x001723E8
*/
// Range: 0x172170 -> 0x1723E8
class st_FILELOADINFO * xBinioLoadCreate(char * filename /* r19 */, signed int fileflags /* r18 */) {
    /* anonymous block */ {
        // Range: 0x172170 -> 0x1723E8
        class st_FILELOADINFO * fli; // r17
        class tag_xFile * tmp_fp; // r2
        signed int i; // r6
        signed int uselock; // r16
    }
}


