/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xhipio.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003CDC4 -> 0x8003D73C
*/
static unsigned int g_loadlock; // size: 0x4, address: 0x803C0F08
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
// total size: 0x10
struct st_HIPLOADBLOCK {
    // Members
    int endpos; // offset 0x0, size 0x4
    unsigned int blk_id; // offset 0x4, size 0x4
    int blk_remain; // offset 0x8, size 0x4
    int flags; // offset 0xC, size 0x4
};
// total size: 0xA8
struct st_HIPLOADDATA {
    // Members
    struct st_FILELOADINFO * fli; // offset 0x0, size 0x4
    int lockid; // offset 0x4, size 0x4
    int bypass; // offset 0x8, size 0x4
    int bypass_recover; // offset 0xC, size 0x4
    unsigned int base_sector; // offset 0x10, size 0x4
    int use_async; // offset 0x14, size 0x4
    enum en_READ_ASYNC_STATUS asyn_stat; // offset 0x18, size 0x4
    int pos; // offset 0x1C, size 0x4
    int top; // offset 0x20, size 0x4
    int readTop; // offset 0x24, size 0x4
    struct st_HIPLOADBLOCK stk[8]; // offset 0x28, size 0x80
};
static struct st_HIPLOADDATA g_hiploadinst[8]; // size: 0x540, address: 0x802BC4A0
// total size: 0x34
struct st_HIPLOADFUNCS {
    // Members
    struct st_HIPLOADDATA * (* create)(char *, char *, int, int); // offset 0x0, size 0x4
    void (* destroy)(struct st_HIPLOADDATA *); // offset 0x4, size 0x4
    unsigned int (* basesector)(struct st_HIPLOADDATA *); // offset 0x8, size 0x4
    unsigned int (* enter)(struct st_HIPLOADDATA *); // offset 0xC, size 0x4
    void (* exit)(struct st_HIPLOADDATA *); // offset 0x10, size 0x4
    int (* readBytes)(struct st_HIPLOADDATA *, char *, int); // offset 0x14, size 0x4
    int (* readShorts)(struct st_HIPLOADDATA *, signed short *, int); // offset 0x18, size 0x4
    int (* readLongs)(struct st_HIPLOADDATA *, int *, int); // offset 0x1C, size 0x4
    int (* readFloats)(struct st_HIPLOADDATA *, float *, int); // offset 0x20, size 0x4
    int (* readString)(struct st_HIPLOADDATA *, char *); // offset 0x24, size 0x4
    int (* setBypass)(struct st_HIPLOADDATA *, int, int); // offset 0x28, size 0x4
    void (* setSpot)(struct st_HIPLOADDATA *, int); // offset 0x2C, size 0x4
    enum en_READ_ASYNC_STATUS (* pollRead)(struct st_HIPLOADDATA *); // offset 0x30, size 0x4
};
static struct st_HIPLOADFUNCS g_map_HIPL_funcmap; // size: 0x34, address: 0x803BD6E0
// total size: 0x44
struct st_FILESAVEINFO {
    // Members
    void (* destroy)(struct st_FILESAVEINFO *); // offset 0x0, size 0x4
    int (* writeBytes)(struct st_FILESAVEINFO *, char *, int); // offset 0x4, size 0x4
    int (* writeMShorts)(struct st_FILESAVEINFO *, signed short *, int); // offset 0x8, size 0x4
    int (* writeMLongs)(struct st_FILESAVEINFO *, int *, int); // offset 0xC, size 0x4
    int (* writeMFloats)(struct st_FILESAVEINFO *, float *, int); // offset 0x10, size 0x4
    int (* writeMDoubles)(struct st_FILESAVEINFO *, double *, int); // offset 0x14, size 0x4
    int (* writeIShorts)(struct st_FILESAVEINFO *, signed short *, int); // offset 0x18, size 0x4
    int (* writeILongs)(struct st_FILESAVEINFO *, int *, int); // offset 0x1C, size 0x4
    int (* writeIFloats)(struct st_FILESAVEINFO *, float *, int); // offset 0x20, size 0x4
    int (* writeIDoubles)(struct st_FILESAVEINFO *, double *, int); // offset 0x24, size 0x4
    int (* seekSpot)(struct st_FILESAVEINFO *, int); // offset 0x28, size 0x4
    int length; // offset 0x2C, size 0x4
    int position; // offset 0x30, size 0x4
    enum en_FIOERRCODES error; // offset 0x34, size 0x4
    unsigned int lockid; // offset 0x38, size 0x4
    void * privdata; // offset 0x3C, size 0x4
    void * xtradata; // offset 0x40, size 0x4
};
// total size: 0xC
struct st_HIPSAVEBLOCK {
    // Members
    int pos; // offset 0x0, size 0x4
    int len; // offset 0x4, size 0x4
    int flags; // offset 0x8, size 0x4
};
// total size: 0x74
struct st_HIPSAVEDATA {
    // Members
    struct st_FILESAVEINFO * fsi; // offset 0x0, size 0x4
    int lockid; // offset 0x4, size 0x4
    int pos; // offset 0x8, size 0x4
    int top; // offset 0xC, size 0x4
    int writeTop; // offset 0x10, size 0x4
    struct st_HIPSAVEBLOCK stk[8]; // offset 0x14, size 0x60
};
// total size: 0x2C
struct st_HIPSAVEFUNCS {
    // Members
    struct st_HIPSAVEDATA * (* create)(char *); // offset 0x0, size 0x4
    void (* destroy)(struct st_HIPSAVEDATA *); // offset 0x4, size 0x4
    void (* open)(struct st_HIPSAVEDATA *, unsigned int); // offset 0x8, size 0x4
    void (* close)(struct st_HIPSAVEDATA *); // offset 0xC, size 0x4
    void (* writeBytes)(struct st_HIPSAVEDATA *, char *, int); // offset 0x10, size 0x4
    void (* writeShorts)(struct st_HIPSAVEDATA *, signed short *, int); // offset 0x14, size 0x4
    void (* writeLongs)(struct st_HIPSAVEDATA *, int *, int); // offset 0x18, size 0x4
    void (* writeFloats)(struct st_HIPSAVEDATA *, float *, int); // offset 0x1C, size 0x4
    void (* writeString)(struct st_HIPSAVEDATA *, char *); // offset 0x20, size 0x4
    int (* curSpot)(struct st_HIPSAVEDATA *); // offset 0x24, size 0x4
    int (* spotLong)(struct st_HIPSAVEDATA *, int, unsigned int); // offset 0x28, size 0x4
};
// Range: 0x8003CDC4 -> 0x8003CDCC
struct st_HIPLOADFUNCS * get_HIPLFuncs() {
    // References
    // -> static struct st_HIPLOADFUNCS g_map_HIPL_funcmap;
}

// Range: 0x8003CDCC -> 0x8003CF1C
static struct st_HIPLOADDATA * HIPLCreate(const char * filename /* r28 */, char * dblbuf /* r29 */, int bufsize /* r30 */, int fileflags /* r31 */) {
    // Local variables
    struct st_HIPLOADDATA * lddata; // r27
    struct st_FILELOADINFO * fli; // r0
    struct st_HIPLOADBLOCK * tmp_blk; // r5
    int i; // r6
    int uselock; // r26

    // References
    // -> static struct st_HIPLOADDATA g_hiploadinst[8];
    // -> static unsigned int g_loadlock;
}

// Range: 0x8003CF1C -> 0x8003CF88
static void HIPLDestroy(struct st_HIPLOADDATA * lddata /* r30 */) {
    // Local variables
    int lockid; // r31

    // References
    // -> static unsigned int g_loadlock;
}

// Range: 0x8003CF88 -> 0x8003CF90
static unsigned int HIPLBaseSector(struct st_HIPLOADDATA * lddata /* r3 */) {}

// Range: 0x8003CF90 -> 0x8003D058
static int HIPLSetBypass(struct st_HIPLOADDATA * lddata /* r29 */, int enable /* r30 */, int use_async /* r31 */) {}

// Range: 0x8003D058 -> 0x8003D094
static void HIPLSetSpot(struct st_HIPLOADDATA * lddata /* r0 */, int spot /* r0 */) {}

// Range: 0x8003D094 -> 0x8003D1A8
static unsigned int HIPLBlockEnter(struct st_HIPLOADDATA * lddata /* r31 */) {
    // Local variables
    struct st_HIPLOADBLOCK * top; // r6
    unsigned int cid; // r1+0xC
    int size; // r1+0x8
    int cnt; // r0
}

// Range: 0x8003D1A8 -> 0x8003D214
static void HIPLBlockExit(struct st_HIPLOADDATA * lddata /* r30 */) {
    // Local variables
    struct st_HIPLOADBLOCK * top; // r31
}

// Range: 0x8003D214 -> 0x8003D354
static int HIPLBlockRead(struct st_HIPLOADDATA * lddata /* r31 */, void * data /* r4 */, int cnt /* r5 */, int size /* r29 */) {
    // Local variables
    struct st_HIPLOADBLOCK * top; // r30
    int got; // r3
    int left; // r6
    int head; // r7
}

// Range: 0x8003D354 -> 0x8003D43C
static int HIPLBypassRead(struct st_HIPLOADDATA * lddata /* r0 */, void * data /* r8 */, int cnt /* r7 */, int size /* r31 */) {
    // Local variables
    int got; // r6
    int rc; // r0
}

// Range: 0x8003D43C -> 0x8003D484
static int HIPLReadAsync(struct st_HIPLOADDATA * lddata /* r31 */, int pos /* r0 */, char * data /* r0 */, int cnt /* r0 */, int elesize /* r0 */) {
    // Local variables
    int regok; // r0
}

enum en_READ_ASYNC_STATUS {
    HIP_RDSTAT_NONE = -1,
    HIP_RDSTAT_INPROG = 0,
    HIP_RDSTAT_SUCCESS = 1,
    HIP_RDSTAT_FAILED = 2,
    HIP_RDSTAT_NOBYPASS = 3,
    HIP_RDSTAT_NOASYNC = 4,
};
enum en_BIO_ASYNC_ERRCODES {
    BINIO_ASYNC_FAIL = -1,
    BINIO_ASYNC_NOOP = 0,
    BINIO_ASYNC_INPROG = 1,
    BINIO_ASYNC_DONE = 2,
    BINIO_ASYNC_FORCEENUMSIZEINT = 2147483647,
};
// Range: 0x8003D484 -> 0x8003D540
static enum en_READ_ASYNC_STATUS HIPLPollRead(struct st_HIPLOADDATA * lddata /* r30 */) {
    // Local variables
    enum en_READ_ASYNC_STATUS rdstat; // r31
    enum en_BIO_ASYNC_ERRCODES pollstat; // r0
}

// Range: 0x8003D540 -> 0x8003D57C
static int HIPLReadBytes(struct st_HIPLOADDATA * lddata /* r0 */, char * data /* r0 */, int cnt /* r0 */) {}

// Range: 0x8003D57C -> 0x8003D5C0
static int HIPLReadShorts(struct st_HIPLOADDATA * lddata /* r0 */, signed short * data /* r0 */, int cnt /* r0 */) {
    // Local variables
    int got; // r0
}

// Range: 0x8003D5C0 -> 0x8003D604
static int HIPLReadLongs(struct st_HIPLOADDATA * lddata /* r0 */, int * data /* r0 */, int cnt /* r0 */) {
    // Local variables
    int got; // r0
}

// Range: 0x8003D604 -> 0x8003D648
static int HIPLReadFloats(struct st_HIPLOADDATA * lddata /* r0 */, float * data /* r0 */, int cnt /* r0 */) {
    // Local variables
    int got; // r0
}

// Range: 0x8003D648 -> 0x8003D73C
static int HIPLReadString(struct st_HIPLOADDATA * lddata /* r28 */, char * buf /* r29 */) {
    // Local variables
    int n; // r30
    char pad; // r1+0x8
}


