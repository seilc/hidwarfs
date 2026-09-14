/*
    Compile unit: C:\TestBuild\in\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned int g_loadlock; // size: 0x4, address: 0x608A50
static class st_HIPLOADDATA g_hiploadinst[8]; // size: 0x540, address: 0x6430E0
static class st_HIPLOADFUNCS g_map_HIPL_funcmap; // size: 0x34, address: 0x508400
static class st_HIPSAVEFUNCS g_map_HIPS_funcmap; // size: 0x2C, address: 0x0
// total size: 0x44
class st_FILESAVEINFO {
    // Members
public:
    void (* destroy)(class st_FILESAVEINFO *); // offset 0x0, size 0x4
    signed int (* writeBytes)(class st_FILESAVEINFO *, char *, signed int); // offset 0x4, size 0x4
    signed int (* writeMShorts)(class st_FILESAVEINFO *, signed short *, signed int); // offset 0x8, size 0x4
    signed int (* writeMLongs)(class st_FILESAVEINFO *, signed int *, signed int); // offset 0xC, size 0x4
    signed int (* writeMFloats)(class st_FILESAVEINFO *, float *, signed int); // offset 0x10, size 0x4
    signed int (* writeMDoubles)(class st_FILESAVEINFO *, double *, signed int); // offset 0x14, size 0x4
    signed int (* writeIShorts)(class st_FILESAVEINFO *, signed short *, signed int); // offset 0x18, size 0x4
    signed int (* writeILongs)(class st_FILESAVEINFO *, signed int *, signed int); // offset 0x1C, size 0x4
    signed int (* writeIFloats)(class st_FILESAVEINFO *, float *, signed int); // offset 0x20, size 0x4
    signed int (* writeIDoubles)(class st_FILESAVEINFO *, double *, signed int); // offset 0x24, size 0x4
    signed int (* seekSpot)(class st_FILESAVEINFO *, signed int); // offset 0x28, size 0x4
    signed int length; // offset 0x2C, size 0x4
    signed int position; // offset 0x30, size 0x4
    enum en_FIOERRCODES error; // offset 0x34, size 0x4
    unsigned int lockid; // offset 0x38, size 0x4
    void * privdata; // offset 0x3C, size 0x4
    void * xtradata; // offset 0x40, size 0x4
};
// total size: 0x74
class st_HIPSAVEDATA {
    // Members
public:
    class st_FILESAVEINFO * fsi; // offset 0x0, size 0x4
    signed int lockid; // offset 0x4, size 0x4
    signed int pos; // offset 0x8, size 0x4
    signed int top; // offset 0xC, size 0x4
    signed int writeTop; // offset 0x10, size 0x4
    class st_HIPSAVEBLOCK stk[8]; // offset 0x14, size 0x60
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
// total size: 0xA8
class st_HIPLOADDATA {
    // Members
public:
    class st_FILELOADINFO * fli; // offset 0x0, size 0x4
    signed int lockid; // offset 0x4, size 0x4
    signed int bypass; // offset 0x8, size 0x4
    signed int bypass_recover; // offset 0xC, size 0x4
    unsigned int base_sector; // offset 0x10, size 0x4
    signed int use_async; // offset 0x14, size 0x4
    enum en_READ_ASYNC_STATUS asyn_stat; // offset 0x18, size 0x4
    signed int pos; // offset 0x1C, size 0x4
    signed int top; // offset 0x20, size 0x4
    signed int readTop; // offset 0x24, size 0x4
    class st_HIPLOADBLOCK stk[8]; // offset 0x28, size 0x80
};
// total size: 0x34
class st_HIPLOADFUNCS {
    // Members
public:
    class st_HIPLOADDATA * (* create)(char *, char *, signed int, signed int); // offset 0x0, size 0x4
    void (* destroy)(class st_HIPLOADDATA *); // offset 0x4, size 0x4
    unsigned int (* basesector)(class st_HIPLOADDATA *); // offset 0x8, size 0x4
    unsigned int (* enter)(class st_HIPLOADDATA *); // offset 0xC, size 0x4
    void (* exit)(class st_HIPLOADDATA *); // offset 0x10, size 0x4
    signed int (* readBytes)(class st_HIPLOADDATA *, char *, signed int); // offset 0x14, size 0x4
    signed int (* readShorts)(class st_HIPLOADDATA *, signed short *, signed int); // offset 0x18, size 0x4
    signed int (* readLongs)(class st_HIPLOADDATA *, signed int *, signed int); // offset 0x1C, size 0x4
    signed int (* readFloats)(class st_HIPLOADDATA *, float *, signed int); // offset 0x20, size 0x4
    signed int (* readString)(class st_HIPLOADDATA *, char *); // offset 0x24, size 0x4
    signed int (* setBypass)(class st_HIPLOADDATA *, signed int, signed int); // offset 0x28, size 0x4
    void (* setSpot)(class st_HIPLOADDATA *, signed int); // offset 0x2C, size 0x4
    enum en_READ_ASYNC_STATUS (* pollRead)(class st_HIPLOADDATA *); // offset 0x30, size 0x4
};
// total size: 0x10
class st_HIPLOADBLOCK {
    // Members
public:
    signed int endpos; // offset 0x0, size 0x4
    unsigned int blk_id; // offset 0x4, size 0x4
    signed int blk_remain; // offset 0x8, size 0x4
    signed int flags; // offset 0xC, size 0x4
};
// total size: 0x2C
class st_HIPSAVEFUNCS {
    // Members
public:
    class st_HIPSAVEDATA * (* create)(char *); // offset 0x0, size 0x4
    void (* destroy)(class st_HIPSAVEDATA *); // offset 0x4, size 0x4
    void (* open)(class st_HIPSAVEDATA *, unsigned int); // offset 0x8, size 0x4
    void (* close)(class st_HIPSAVEDATA *); // offset 0xC, size 0x4
    void (* writeBytes)(class st_HIPSAVEDATA *, char *, signed int); // offset 0x10, size 0x4
    void (* writeShorts)(class st_HIPSAVEDATA *, signed short *, signed int); // offset 0x14, size 0x4
    void (* writeLongs)(class st_HIPSAVEDATA *, signed int *, signed int); // offset 0x18, size 0x4
    void (* writeFloats)(class st_HIPSAVEDATA *, float *, signed int); // offset 0x1C, size 0x4
    void (* writeString)(class st_HIPSAVEDATA *, char *); // offset 0x20, size 0x4
    signed int (* curSpot)(class st_HIPSAVEDATA *); // offset 0x24, size 0x4
    signed int (* spotLong)(class st_HIPSAVEDATA *, signed int, unsigned int); // offset 0x28, size 0x4
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
enum en_READ_ASYNC_STATUS {
    HIP_RDSTAT_NONE = -1,
    HIP_RDSTAT_INPROG = 0,
    HIP_RDSTAT_SUCCESS = 1,
    HIP_RDSTAT_FAILED = 2,
    HIP_RDSTAT_NOBYPASS = 3,
    HIP_RDSTAT_NOASYNC = 4,
};
// total size: 0xC
class st_HIPSAVEBLOCK {
    // Members
public:
    signed int pos; // offset 0x0, size 0x4
    signed int len; // offset 0x4, size 0x4
    signed int flags; // offset 0x8, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001995B0 -> 0x001996CC
*/
// Range: 0x1995B0 -> 0x1996CC
static signed int HIPLReadString(class st_HIPLOADDATA * lddata /* r18 */, char * buf /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1995B0 -> 0x1996CC
        signed int n; // r16
        char pad; // r29+0x4F
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001996D0 -> 0x00199720
*/
// Range: 0x1996D0 -> 0x199720
static signed int HIPLReadFloats(class st_HIPLOADDATA * lddata /* r2 */, float * data /* r2 */, signed int cnt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1996D0 -> 0x199720
        signed int got; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00199720 -> 0x00199770
*/
// Range: 0x199720 -> 0x199770
static signed int HIPLReadLongs(class st_HIPLOADDATA * lddata /* r2 */, signed int * data /* r2 */, signed int cnt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x199720 -> 0x199770
        signed int got; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00199770 -> 0x001997C0
*/
// Range: 0x199770 -> 0x1997C0
static signed int HIPLReadShorts(class st_HIPLOADDATA * lddata /* r2 */, signed short * data /* r2 */, signed int cnt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x199770 -> 0x1997C0
        signed int got; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001997C0 -> 0x001997F8
*/
// Range: 0x1997C0 -> 0x1997F8
static signed int HIPLReadBytes(class st_HIPLOADDATA * lddata /* r2 */, char * data /* r2 */, signed int cnt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1997C0 -> 0x1997F8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00199800 -> 0x001998AC
*/
// Range: 0x199800 -> 0x1998AC
static enum en_READ_ASYNC_STATUS HIPLPollRead(class st_HIPLOADDATA * lddata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x199800 -> 0x1998AC
        enum en_READ_ASYNC_STATUS rdstat; // r16
        enum en_BIO_ASYNC_ERRCODES pollstat; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001998B0 -> 0x0019999C
*/
// Range: 0x1998B0 -> 0x19999C
static signed int HIPLBypassRead(class st_HIPLOADDATA * lddata /* r17 */, void * data /* r5 */, signed int cnt /* r7 */, signed int size /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1998B0 -> 0x19999C
        signed int got; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001999A0 -> 0x00199AFC
*/
// Range: 0x1999A0 -> 0x199AFC
static signed int HIPLBlockRead(class st_HIPLOADDATA * lddata /* r18 */, void * data /* r2 */, signed int cnt /* r2 */, signed int size /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1999A0 -> 0x199AFC
        class st_HIPLOADBLOCK * top; // r16
        signed int got; // r2
        signed int left; // r7
        signed int head; // r4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00199B00 -> 0x00199B68
*/
// Range: 0x199B00 -> 0x199B68
static void HIPLBlockExit(class st_HIPLOADDATA * lddata /* r16 */) {
    /* anonymous block */ {
        // Range: 0x199B00 -> 0x199B68
        class st_HIPLOADBLOCK * top; // r17
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00199B70 -> 0x00199CC8
*/
// Range: 0x199B70 -> 0x199CC8
static unsigned int HIPLBlockEnter(class st_HIPLOADDATA * lddata /* r16 */) {
    /* anonymous block */ {
        // Range: 0x199B70 -> 0x199CC8
        class st_HIPLOADBLOCK * top; // r2
        unsigned int cid; // r29+0x2C
        signed int size; // r29+0x28
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00199CD0 -> 0x00199D04
*/
// Range: 0x199CD0 -> 0x199D04
static void HIPLSetSpot(class st_HIPLOADDATA * lddata /* r2 */, signed int spot /* r2 */) {
    /* anonymous block */ {
        // Range: 0x199CD0 -> 0x199D04
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00199D10 -> 0x00199DD4
*/
// Range: 0x199D10 -> 0x199DD4
static signed int HIPLSetBypass(class st_HIPLOADDATA * lddata /* r16 */, signed int enable /* r18 */, signed int use_async /* r17 */) {
    /* anonymous block */ {
        // Range: 0x199D10 -> 0x199DD4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00199DE0 -> 0x00199DE8
*/
// Range: 0x199DE0 -> 0x199DE8
static unsigned int HIPLBaseSector(class st_HIPLOADDATA * lddata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x199DE0 -> 0x199DE8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00199DF0 -> 0x00199E60
*/
// Range: 0x199DF0 -> 0x199E60
static void HIPLDestroy(class st_HIPLOADDATA * lddata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x199DF0 -> 0x199E60
        signed int lockid; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00199E60 -> 0x0019A074
*/
// Range: 0x199E60 -> 0x19A074
static class st_HIPLOADDATA * HIPLCreate(char * filename /* r20 */, char * dblbuf /* r19 */, signed int bufsize /* r18 */, signed int fileflags /* r21 */) {
    /* anonymous block */ {
        // Range: 0x199E60 -> 0x19A074
        class st_HIPLOADDATA * lddata; // r17
        class st_FILELOADINFO * fli; // r2
        class st_HIPLOADBLOCK * tmp_blk; // r2
        signed int i; // r7
        signed int uselock; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xhipio.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019A080 -> 0x0019A08C
*/
// Range: 0x19A080 -> 0x19A08C
class st_HIPLOADFUNCS * get_HIPLFuncs() {
    /* anonymous block */ {
        // Range: 0x19A080 -> 0x19A08C
    }
}


