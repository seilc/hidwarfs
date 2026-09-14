/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xhipio.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80082B88 -> 0x80084690
*/
static unsigned int g_loadlock; // size: 0x4, address: 0x80D69160
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
static struct st_HIPLOADDATA g_hiploadinst[8]; // size: 0x540, address: 0x804F4F38
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
static struct st_HIPLOADFUNCS g_map_HIPL_funcmap; // size: 0x34, address: 0x804F5478
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
// Range: 0x80082B88 -> 0x80082B94
struct st_HIPLOADFUNCS * get_HIPLFuncs() {
    // References
    // -> static struct st_HIPLOADFUNCS g_map_HIPL_funcmap;
}

static int been_here; // size: 0x4, address: 0x80D69164
static char __FUNCTION__[11]; // size: 0xB, address: 0x80D5FAD0
// Range: 0x80082B94 -> 0x80082DCC
static struct st_HIPLOADDATA * HIPLCreate(const char * filename /* r24 */, char * dblbuf /* r25 */, int bufsize /* r26 */, int fileflags /* r1+0x8 */) {
    // Local variables
    struct st_HIPLOADDATA * lddata; // r31
    struct st_FILELOADINFO * fli; // r28
    struct st_HIPLOADBLOCK * tmp_blk; // r29
    int i; // r30
    int uselock; // r27

    // References
    // -> static char __FUNCTION__[11];
    // -> static struct st_HIPLOADDATA g_hiploadinst[8];
    // -> static unsigned int g_loadlock;
    // -> static int been_here;
}

// Range: 0x80082DCC -> 0x80082E4C
static void HIPLDestroy(struct st_HIPLOADDATA * lddata /* r31 */) {
    // Local variables
    int lockid; // r30

    // References
    // -> static unsigned int g_loadlock;
}

// Range: 0x80082E4C -> 0x80082E54
static unsigned int HIPLBaseSector(struct st_HIPLOADDATA * lddata /* r3 */) {}

static int been_here; // size: 0x4, address: 0x80D69168
static int been_here; // size: 0x4, address: 0x80D6916C
static char __FUNCTION__[14]; // size: 0xE, address: 0x80D5FADB
// Range: 0x80082E54 -> 0x80082FFC
static int HIPLSetBypass(struct st_HIPLOADDATA * lddata /* r31 */, int enable /* r30 */, int use_async /* r1+0x8 */) {
    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[14];
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D69170
static int been_here; // size: 0x4, address: 0x80D69174
static int been_here; // size: 0x4, address: 0x80D69178
static char __FUNCTION__[12]; // size: 0xC, address: 0x80D5FAE9
// Range: 0x80082FFC -> 0x80083164
static void HIPLSetSpot(struct st_HIPLOADDATA * lddata /* r31 */, int spot /* r29 */) {
    // Local variables
    int rc; // r30

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[12];
    // -> static int been_here;
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D6917C
static int been_here; // size: 0x4, address: 0x80D69180
static int been_here; // size: 0x4, address: 0x80D69184
static int been_here; // size: 0x4, address: 0x80D69188
static char __FUNCTION__[15]; // size: 0xF, address: 0x80D5FAF5
// Range: 0x80083164 -> 0x80083468
static unsigned int HIPLBlockEnter(struct st_HIPLOADDATA * lddata /* r31 */) {
    // Local variables
    struct st_HIPLOADBLOCK * top; // r30
    unsigned int cid; // r1+0xC
    int size; // r1+0x8
    int cnt; // r29
    int padit; // r28

    // References
    // -> static char __FUNCTION__[15];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D6918C
static int been_here; // size: 0x4, address: 0x80D69190
static char __FUNCTION__[14]; // size: 0xE, address: 0x80D5FB04
// Range: 0x80083468 -> 0x8008359C
static void HIPLBlockExit(struct st_HIPLOADDATA * lddata /* r31 */) {
    // Local variables
    struct st_HIPLOADBLOCK * top; // r30

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[14];
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D69194
static int been_here; // size: 0x4, address: 0x80D69198
static int been_here; // size: 0x4, address: 0x80D6919C
static int been_here; // size: 0x4, address: 0x80D691A0
static int been_here; // size: 0x4, address: 0x80D691A4
static int been_here; // size: 0x4, address: 0x80D691A8
static int been_here; // size: 0x4, address: 0x80D691AC
static int been_here; // size: 0x4, address: 0x80D691B0
static char __FUNCTION__[14]; // size: 0xE, address: 0x80D5FB12
// Range: 0x8008359C -> 0x800839A0
static int HIPLBlockRead(struct st_HIPLOADDATA * lddata /* r31 */, void * data /* r25 */, int cnt /* r30 */, int size /* r28 */) {
    // Local variables
    struct st_HIPLOADBLOCK * top; // r29
    int got; // r27
    int left; // r26
    int head; // r24

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[14];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D691B4
static int been_here; // size: 0x4, address: 0x80D691B8
static int been_here; // size: 0x4, address: 0x80D691BC
static int been_here; // size: 0x4, address: 0x80D691C0
static int been_here; // size: 0x4, address: 0x80D691C4
static char __FUNCTION__[15]; // size: 0xF, address: 0x80D5FB20
// Range: 0x800839A0 -> 0x80083C60
static int HIPLBypassRead(struct st_HIPLOADDATA * lddata /* r31 */, void * data /* r27 */, int cnt /* r28 */, int size /* r30 */) {
    // Local variables
    int got; // r29
    int rc; // r26

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[15];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D691C8
static int been_here; // size: 0x4, address: 0x80D691CC
static int been_here; // size: 0x4, address: 0x80D691D0
static int been_here; // size: 0x4, address: 0x80D691D4
static char __FUNCTION__[14]; // size: 0xE, address: 0x80D5FB2F
// Range: 0x80083C60 -> 0x80083E18
static int HIPLReadAsync(struct st_HIPLOADDATA * lddata /* r31 */, int pos /* r1+0x8 */, char * data /* r1+0xC */, int cnt /* r1+0x10 */, int elesize /* r1+0x14 */) {
    // Local variables
    int regok; // r30

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[14];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D691D8
static int been_here; // size: 0x4, address: 0x80D691DC
static int been_here; // size: 0x4, address: 0x80D691E0
static char __FUNCTION__[13]; // size: 0xD, address: 0x80D5FB3D
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
// Range: 0x80083E18 -> 0x8008407C
static enum en_READ_ASYNC_STATUS HIPLPollRead(struct st_HIPLOADDATA * lddata /* r31 */) {
    // Local variables
    enum en_READ_ASYNC_STATUS rdstat; // r30
    enum en_BIO_ASYNC_ERRCODES pollstat; // r29

    // References
    // -> static char __FUNCTION__[13];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D691E4
static int been_here; // size: 0x4, address: 0x80D691E8
static char __FUNCTION__[14]; // size: 0xE, address: 0x80D5FB4A
// Range: 0x8008407C -> 0x80084188
static int HIPLReadBytes(struct st_HIPLOADDATA * lddata /* r31 */, char * data /* r30 */, int cnt /* r29 */) {
    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[14];
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D691EC
static int been_here; // size: 0x4, address: 0x80D691F0
static char __FUNCTION__[15]; // size: 0xF, address: 0x80D5FB58
// Range: 0x80084188 -> 0x800842B4
static int HIPLReadShorts(struct st_HIPLOADDATA * lddata /* r31 */, signed short * data /* r29 */, int cnt /* r28 */) {
    // Local variables
    int got; // r30

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[15];
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D691F4
static int been_here; // size: 0x4, address: 0x80D691F8
static char __FUNCTION__[14]; // size: 0xE, address: 0x80D5FB67
// Range: 0x800842B4 -> 0x800843DC
static int HIPLReadLongs(struct st_HIPLOADDATA * lddata /* r31 */, int * data /* r29 */, int cnt /* r28 */) {
    // Local variables
    int got; // r30

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[14];
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D691FC
static int been_here; // size: 0x4, address: 0x80D69200
static char __FUNCTION__[15]; // size: 0xF, address: 0x80D5FB75
// Range: 0x800843DC -> 0x80084504
static int HIPLReadFloats(struct st_HIPLOADDATA * lddata /* r31 */, float * data /* r29 */, int cnt /* r28 */) {
    // Local variables
    int got; // r30

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[15];
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D69204
static int been_here; // size: 0x4, address: 0x80D69208
static char __FUNCTION__[15]; // size: 0xF, address: 0x80D5FB84
// Range: 0x80084504 -> 0x80084690
static int HIPLReadString(struct st_HIPLOADDATA * lddata /* r29 */, char * buf /* r30 */) {
    // Local variables
    int n; // r31
    char pad; // r1+0x8

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[15];
    // -> static int been_here;
}


