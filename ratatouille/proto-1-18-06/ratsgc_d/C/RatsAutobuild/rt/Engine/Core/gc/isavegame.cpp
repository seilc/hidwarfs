/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\gc\isavegame.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8011DB64 -> 0x80125B44
*/
enum en_VERBOSE_MSGLEVEL {
    DBML_NONE = 0,
    DBML_RELDISP = 1,
    DBML_DISP = 2,
    DBML_USER = 3,
    DBML_ERR = 4,
    DBML_TIME = 5,
    DBML_WARN = 6,
    DBML_VALID = 7,
    DBML_INFO = 8,
    DBML_DBG = 9,
    DBML_TEST = 10,
    DBML_VDBG = 11,
    DBML_SPEW = 12,
};
static enum en_VERBOSE_MSGLEVEL _g_mlvl; // size: 0x4, address: 0x80D61A30
static char * ISG_GC_GAMENAME; // size: 0x4, address: 0x80D61A34
// total size: 0x10
struct basic_rect {
    // Static members
    static struct basic_rect m_Null; // size: 0x10
    static struct basic_rect m_Unit; // size: 0x10

    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
static int g_isginit; // size: 0x4, address: 0x80D69B88
enum en_ISGMC_ERRSTATUS {
    ISGMC_ERR_NONE = 0,
    ISGMC_ERR_NOMEMCARD = 1,
    ISGMC_ERR_MKDIR = 2,
    ISGMC_ERR_OPEN = 3,
    ISGMC_ERR_CLOSE = 4,
    ISGMC_ERR_READ = 5,
    ISGMC_ERR_WRITE = 6,
};
// total size: 0x130
struct st_ISG_MEMCARD_DATA {
    // Members
    int ismounted; // offset 0x0, size 0x4
    int myphys; // offset 0x4, size 0x4
    int sectsize; // offset 0x8, size 0x4
    struct CARDFileInfo cur_finf; // offset 0xC, size 0x14
    struct CARDStat cur_stat; // offset 0x20, size 0x6C
    long long cur_ftime; // offset 0x90, size 0x8
    int off_nextwrite; // offset 0x98, size 0x4
    struct CARDFileInfo finfcache; // offset 0x9C, size 0x14
    struct CARDStat statcache; // offset 0xB0, size 0x6C
    long long timecache; // offset 0x120, size 0x8
    enum en_ISGMC_ERRSTATUS mcerr; // offset 0x128, size 0x4
    int cardIsIll; // offset 0x12C, size 0x4
};
enum en_CHGCODE {
    ISG_CHG_NONE = 0,
    ISG_CHG_TARGET = 1,
    ISG_CHG_GAMELIST = 2,
};
enum en_ISG_WHYFAIL {
    ISG_WHYERR_NONE = 0,
    ISG_WHYERR_NOCARD = 1,
    ISG_WHYERR_NOROOM = 2,
    ISG_WHYERR_DAMAGE = 3,
    ISG_WHYERR_OTHER = 4,
    ISG_WHYERR_NOMORE = 5,
};
// total size: 0x280
struct st_ISGSESSION {
    // Members
    struct st_ISG_MEMCARD_DATA physcard[2]; // offset 0x0, size 0x260
    int idx_actvcard; // offset 0x260, size 0x4
    enum en_CHGCODE chgcode; // offset 0x264, size 0x4
    enum en_ASYNC_OPERR as_operr; // offset 0x268, size 0x4
    enum en_ASYNC_OPSTAT as_fakestat; // offset 0x26C, size 0x4
    enum en_ISG_WHYFAIL whyFail; // offset 0x270, size 0x4
    void (* chgfunc)(void *, enum en_CHGCODE); // offset 0x274, size 0x4
    void * cltdata; // offset 0x278, size 0x4
};
static struct st_ISGSESSION g_isgdata_MAIN; // size: 0x280, address: 0x80516CB8
static char cardwork[2][40960]; // size: 0x14000, address: 0x80CA9540
static char * g_rawicon; // size: 0x4, address: 0x80D69B8C
static char * g_rawbanr; // size: 0x4, address: 0x80D69B90
static int g_iconsize; // size: 0x4, address: 0x80D69B94
static int g_banrsize; // size: 0x4, address: 0x80D69B98
static unsigned int g_chkicon; // size: 0x4, address: 0x80D69B9C
static unsigned int g_chkbanr; // size: 0x4, address: 0x80D69BA0
static int g_legalSectSize[3]; // size: 0xC, address: 0x80D61A38
static unsigned char isMounted; // size: 0x1, address: 0x80D69BA4
static int nuka_da_carda; // size: 0x4, address: 0x80D69BA8
static signed char init; // size: 0x1, address: 0x80D69BAC
static char __FUNCTION__[11]; // size: 0xB, address: 0x80D61A44
// Range: 0x8011DB64 -> 0x8011DDAC
int iSGStartup() {
    // Local variables
    int rc; // r31

    // References
    // -> static int g_isginit;
    // -> static int nuka_da_carda;
    // -> static signed char init;
    // -> static char __FUNCTION__[11];
}

// Range: 0x8011DDAC -> 0x8011DDD0
int iSGShutdown() {}

static char rotatebuf[8][32]; // size: 0x100, address: 0x80516F38
static int rotate; // size: 0x4, address: 0x80D69BB0
static signed char init; // size: 0x1, address: 0x80D69BB4
static int been_here; // size: 0x4, address: 0x80D69BB8
static int been_here; // size: 0x4, address: 0x80D69BBC
static int been_here; // size: 0x4, address: 0x80D69BC0
static char __FUNCTION__[12]; // size: 0xC, address: 0x80D61A4F
enum en_NAMEGEN_TYPE {
    ISG_NGTYP_GAMEDIR = 0,
    ISG_NGTYP_GAMEFILE = 1,
    ISG_NGTYP_CONFIG = 2,
    ISG_NGTYP_ICONTHUM = 3,
};
// Range: 0x8011DDD0 -> 0x8011E018
char * iSGMakeName(enum en_NAMEGEN_TYPE type /* r28 */, const char * base /* r27 */, int idx /* r30 */) {
    // Local variables
    char * use_buf; // r31
    const char * fmt_sb; // r1+0xC
    const char * fmt_sd; // r29
    const char * fmt_sbd; // r1+0x8

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[12];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int rotate;
    // -> static char rotatebuf[8][32];
    // -> static signed char init;
}

static int been_here; // size: 0x4, address: 0x80D69BC4
static char __FUNCTION__[16]; // size: 0x10, address: 0x80D61A5B
// Range: 0x8011E018 -> 0x8011E0E8
struct st_ISGSESSION * iSGSessionBegin(void * cltdata /* r1+0x8 */, void (* chgfunc)(void *, enum en_CHGCODE) /* r1+0xC */) {
    // Local variables
    struct st_ISGSESSION * isgdata; // r31
    int rc; // r30

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[16];
    // -> static struct st_ISGSESSION g_isgdata_MAIN;
}

static int been_here; // size: 0x4, address: 0x80D69BC8
static int been_here; // size: 0x4, address: 0x80D69BCC
static char __FUNCTION__[14]; // size: 0xE, address: 0x80D61A6B
// Range: 0x8011E0E8 -> 0x8011E224
void iSGSessionEnd(struct st_ISGSESSION * isgdata /* r29 */) {
    // Local variables
    int i; // r31
    int rc; // r28
    struct st_ISG_MEMCARD_DATA * mcd; // r30

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[14];
    // -> static int been_here;
}

// Range: 0x8011E224 -> 0x8011E22C
int iSGMaxSaveGame() {}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80D61A79
// Range: 0x8011E22C -> 0x8011E398
int iSGTgtCount(int * max /* r27 */) {
    // Local variables
    int cnt; // r29
    int rc; // r30
    long memsize; // r1+0xC
    long sectorsize; // r1+0x8
    int i; // r31
    char ab[9]; // r1+0x10

    // References
    // -> static enum en_VERBOSE_MSGLEVEL _g_mlvl;
    // -> static char __FUNCTION__[12];
}

static int been_here; // size: 0x4, address: 0x80D69BD0
static char __FUNCTION__[18]; // size: 0x12, address: 0x80D61A85
// Range: 0x8011E398 -> 0x8011E43C
int iSGTgtPhysSlotIdx(int tidx /* r1+0x8 */) {
    // Local variables
    int physslot; // r1+0xC
    int rc; // r31

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[18];
}

static int been_here; // size: 0x4, address: 0x80D69BD4
static int been_here; // size: 0x4, address: 0x80D69BD8
static int been_here; // size: 0x4, address: 0x80D69BDC
static int been_here; // size: 0x4, address: 0x80D69BE0
static int been_here; // size: 0x4, address: 0x80D69BE4
static char __FUNCTION__[13]; // size: 0xD, address: 0x80D61A97
// Range: 0x8011E43C -> 0x8011E6D8
int iSGTgtFormat(struct st_ISGSESSION * isgdata /* r30 */, int tgtidx /* r1+0x8 */, int * canRecover /* r1+0xC */) {
    // Local variables
    struct st_ISG_MEMCARD_DATA * mcdata; // r29
    int slot; // r1+0x10
    int rc; // r31

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[13];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D69BE8
static int been_here; // size: 0x4, address: 0x80D69BEC
static char __FUNCTION__[12]; // size: 0xC, address: 0x80D61AA4
// Range: 0x8011E6D8 -> 0x8011E988
unsigned int iSGTgtState(struct st_ISGSESSION * isgdata /* r29 */, int tgtidx /* r25 */) {
    // Local variables
    unsigned int state; // r31
    int rc; // r30
    struct st_ISG_MEMCARD_DATA * mcdata; // r28
    int physslot; // r1+0x10
    int prob_encode; // r1+0xC
    int prob_wornout; // r1+0x8
    int i; // r27
    int isok; // r26

    // References
    // -> static int g_legalSectSize[3];
    // -> static int been_here;
    // -> static char __FUNCTION__[12];
    // -> static int been_here;
}

// total size: 0x8
struct st_ERROR_LOOKUP {
    // Members
    int errid; // offset 0x0, size 0x4
    char * errmsg; // offset 0x4, size 0x4
};
static int been_here; // size: 0x4, address: 0x80D69BF0
static int been_here; // size: 0x4, address: 0x80D69BF4
static int been_here; // size: 0x4, address: 0x80D69BF8
static char __FUNCTION__[16]; // size: 0x10, address: 0x80D61AB0
// Range: 0x8011E988 -> 0x8011EBC8
int iSGTgtFreeSpace(struct st_ISGSESSION * isgdata /* r30 */, int tgtidx /* r1+0x8 */, int * clustsize /* r28 */, int * availFile /* r29 */) {
    // Local variables
    struct st_ISG_MEMCARD_DATA * mcdata; // r31
    long bytefree; // r1+0x10
    long filefree; // r1+0xC
    unsigned int tgtstate; // r27
    int rc; // r26

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[16];
    // -> static enum en_VERBOSE_MSGLEVEL _g_mlvl;
    // -> static int been_here;
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D69BFC
static char __FUNCTION__[16]; // size: 0x10, address: 0x80D61AC0
// Range: 0x8011EBC8 -> 0x8011ECCC
int iSGTgtSetActive(struct st_ISGSESSION * isgdata /* r28 */, int tgtidx /* r1+0x8 */) {
    // Local variables
    int result; // r29
    int rc; // r31
    int slot; // r1+0xC
    struct st_ISG_MEMCARD_DATA * mcdata; // r30

    // References
    // -> static char __FUNCTION__[16];
    // -> static int been_here;
}

// total size: 0x0
struct st_ISGTHUMDATA {};
static int been_here; // size: 0x4, address: 0x80D69C00
static char __FUNCTION__[15]; // size: 0xF, address: 0x80D61AD0
// total size: 0x14
struct CARDFileInfo {
    // Members
    long chan; // offset 0x0, size 0x4
    long fileNo; // offset 0x4, size 0x4
    long offset; // offset 0x8, size 0x4
    long length; // offset 0xC, size 0x4
    unsigned short iBlock; // offset 0x10, size 0x2
    unsigned short __padding; // offset 0x12, size 0x2
};
// Range: 0x8011ECCC -> 0x8011EEF8
int iSGTgtHaveRoom(struct st_ISGSESSION * isgdata /* r30 */, int fsize /* r1+0x8 */, const char * fname /* r22 */, int * needbyte /* r26 */, int * availbyte /* r27 */, int * needFile /* r28 */) {
    // Local variables
    int result; // r25
    struct st_ISG_MEMCARD_DATA * mcdata; // r29
    int i; // r31
    int gameFileCount; // r24
    int fileCount; // r23
    struct CARDFileInfo fileInfo; // r1+0xC
    int gcResult; // r21

    // References
    // -> static char __FUNCTION__[15];
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D69C04
static int been_here; // size: 0x4, address: 0x80D69C08
static char __FUNCTION__[12]; // size: 0xC, address: 0x80D61ADF
// Range: 0x8011EEF8 -> 0x8011F044
int iSGFileSize(struct st_ISGSESSION * isgdata /* r29 */, const char * fname /* r1+0x8 */) {
    // Local variables
    int size; // r31
    struct st_ISG_MEMCARD_DATA * mcdata; // r30
    int skipsize; // r28

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[12];
    // -> static int been_here;
}

// Range: 0x8011F044 -> 0x8011F098
char * iSGFileModDate(struct st_ISGSESSION * isgdata /* r1+0x8 */, const char * fname /* r1+0xC */) {
    // Local variables
    const char * date_str; // r31
}

static char datestr[256]; // size: 0x100, address: 0x80517038
static int been_here; // size: 0x4, address: 0x80D69C0C
static char __FUNCTION__[15]; // size: 0xF, address: 0x80D61AEB
// Range: 0x8011F098 -> 0x8011F29C
char * iSGFileModDate(struct st_ISGSESSION * isgdata /* r31 */, const char * fname /* r1+0x8 */, int * usr_sec /* r23 */, int * usr_min /* r24 */, int * usr_hr /* r25 */, int * usr_mon /* r26 */, int * usr_day /* r27 */, int * usr_yr /* r28 */) {
    // Local variables
    int rc; // r30
    struct st_ISG_MEMCARD_DATA * mcdata; // r29
    int sec; // r1+0x20
    int min; // r1+0x1C
    int hr; // r1+0x18
    int mon; // r1+0x14
    int day; // r1+0x10
    int yr; // r1+0xC

    // References
    // -> static char datestr[256];
    // -> static int been_here;
    // -> static char __FUNCTION__[15];
}

enum _tagGameVidMode {
    eGameVidModeNTSC = 0,
    eGameVidModePAL = 1,
};
static int been_here; // size: 0x4, address: 0x80D69C10
static char __FUNCTION__[17]; // size: 0x11, address: 0x80D61AFA
// total size: 0x28
struct OSCalendarTime {
    // Members
    int sec; // offset 0x0, size 0x4
    int min; // offset 0x4, size 0x4
    int hour; // offset 0x8, size 0x4
    int mday; // offset 0xC, size 0x4
    int mon; // offset 0x10, size 0x4
    int year; // offset 0x14, size 0x4
    int wday; // offset 0x18, size 0x4
    int yday; // offset 0x1C, size 0x4
    int msec; // offset 0x20, size 0x4
    int usec; // offset 0x24, size 0x4
};
// Range: 0x8011F29C -> 0x8011F3E8
void iSGMakeTimeStamp(char * str /* r31 */) {
    // Local variables
    struct OSCalendarTime caltym; // r1+0x8

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[17];
}

static int been_here; // size: 0x4, address: 0x80D69C14
static int been_here; // size: 0x4, address: 0x80D69C18
static char __FUNCTION__[17]; // size: 0x11, address: 0x80D61B0B
// Range: 0x8011F3E8 -> 0x8011F578
int iSGSelectGameDir(struct st_ISGSESSION * isgdata /* r28 */) {
    // Local variables
    struct st_ISG_MEMCARD_DATA * mcdata; // r31
    int rc; // r30
    int fileCount; // r27
    int i; // r29
    const char * fname; // r26

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[17];
    // -> static int been_here;
}

// Range: 0x8011F578 -> 0x8011F590
int iSGSetupGameDir() {
    // Local variables
    int result; // r31
}

static int been_here; // size: 0x4, address: 0x80D69C1C
static int been_here; // size: 0x4, address: 0x80D69C20
static int been_here; // size: 0x4, address: 0x80D69C24
static int been_here; // size: 0x4, address: 0x80D69C28
static int been_here; // size: 0x4, address: 0x80D69C2C
static int been_here; // size: 0x4, address: 0x80D69C30
static char __FUNCTION__[12]; // size: 0xC, address: 0x80D61B1C
enum en_ASYNC_OPERR {
    ISG_OPERR_NONE = 0,
    ISG_OPERR_NOOPER = 1,
    ISG_OPERR_MULTIOPER = 2,
    ISG_OPERR_INITFAIL = 3,
    ISG_OPERR_GAMEDIR = 4,
    ISG_OPERR_NOCARD = 5,
    ISG_OPERR_NOROOM = 6,
    ISG_OPERR_DAMAGE = 7,
    ISG_OPERR_CORRUPT = 8,
    ISG_OPERR_OTHER = 9,
    ISG_OPERR_SVNOSPACE = 10,
    ISG_OPERR_SVINIT = 11,
    ISG_OPERR_SVWRITE = 12,
    ISG_OPERR_SVOPEN = 13,
    ISG_OPERR_LDINIT = 14,
    ISG_OPERR_LDREAD = 15,
    ISG_OPERR_LDOPEN = 16,
    ISG_OPERR_TGTERR = 17,
    ISG_OPERR_TGTREM = 18,
    ISG_OPERR_TGTPREP = 19,
    ISG_OPERR_UNKNOWN = 20,
    ISG_OPERR_NOMORE = 21,
};
// total size: 0x6C
struct CARDStat {
    // Members
    char fileName[32]; // offset 0x0, size 0x20
    unsigned long length; // offset 0x20, size 0x4
    unsigned long time; // offset 0x24, size 0x4
    unsigned char gameName[4]; // offset 0x28, size 0x4
    unsigned char company[2]; // offset 0x2C, size 0x2
    unsigned char bannerFormat; // offset 0x2E, size 0x1
    unsigned char __padding; // offset 0x2F, size 0x1
    unsigned long iconAddr; // offset 0x30, size 0x4
    unsigned short iconFormat; // offset 0x34, size 0x2
    unsigned short iconSpeed; // offset 0x36, size 0x2
    unsigned long commentAddr; // offset 0x38, size 0x4
    unsigned long offsetBanner; // offset 0x3C, size 0x4
    unsigned long offsetBannerTlut; // offset 0x40, size 0x4
    unsigned long offsetIcon[8]; // offset 0x44, size 0x20
    unsigned long offsetIconTlut; // offset 0x64, size 0x4
    unsigned long offsetData; // offset 0x68, size 0x4
};
// Range: 0x8011F590 -> 0x8011FB70
int iSGSaveFile(struct st_ISGSESSION * isgdata /* r30 */, const char * fname /* r20 */, char * data /* r1+0x8 */, int n /* r18 */, char * label /* r1+0xC */) {
    // Local variables
    int result; // r28
    int rc; // r29
    enum en_ASYNC_OPERR whyFail; // r1+0x10
    struct st_ISG_MEMCARD_DATA * mcdata; // r31
    struct CARDStat dumystat; // r1+0x80
    struct CARDStat poststat; // r1+0x14
    char * fulbuf; // r27
    int fulsiz; // r24
    char * bufptr; // r26
    int bufsiz; // r25
    char * runptr; // r23
    int iconpart; // r21
    int sizemult; // r22
    unsigned char attrib; // r19

    // References
    // -> static char __FUNCTION__[12];
    // -> static int been_here;
    // -> static enum en_VERBOSE_MSGLEVEL _g_mlvl;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D69C34
static char __FUNCTION__[12]; // size: 0xC, address: 0x80D61B28
// Range: 0x8011FB70 -> 0x8011FC2C
int iSGLoadFile(struct st_ISGSESSION * isgdata /* r28 */, const char * fname /* r29 */, char * databuf /* r1+0x8 */, int async /* r1+0xC */) {
    // Local variables
    int result; // r30
    int size; // r31

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[12];
}

static int been_here; // size: 0x4, address: 0x80D69C38
static int been_here; // size: 0x4, address: 0x80D69C3C
static int been_here; // size: 0x4, address: 0x80D69C40
static int been_here; // size: 0x4, address: 0x80D69C44
static char __FUNCTION__[14]; // size: 0xE, address: 0x80D61B34
// Range: 0x8011FC2C -> 0x80120088
int iSGReadLeader(struct st_ISGSESSION * isgdata /* r31 */, const char * fname /* r1+0x8 */, char * databuf /* r20 */, int numbytes /* r23 */) {
    // Local variables
    int result; // r28
    int rc; // r27
    struct st_ISG_MEMCARD_DATA * mcdata; // r30
    int offset; // r22
    char * fulbuf; // r29
    int fulsiz; // r26
    char * bufptr; // r25
    int bufsiz; // r24
    int sizemult; // r21
    enum en_ASYNC_OPERR whyFail; // r1+0xC

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[14];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}

enum en_ASYNC_OPSTAT {
    ISG_OPSTAT_FAILURE = -1,
    ISG_OPSTAT_INPROG = 0,
    ISG_OPSTAT_SUCCESS = 1,
};
// Range: 0x80120088 -> 0x80120090
enum en_ASYNC_OPSTAT iSGPollStatus(struct st_ISGSESSION * isgdata /* r3 */) {}

static char * codenames[22]; // size: 0x58, address: 0x80517138
static char * errmsgs[22]; // size: 0x58, address: 0x80517190
// Range: 0x80120090 -> 0x8012015C
enum en_ASYNC_OPERR iSGOpError(struct st_ISGSESSION * isgdata /* r31 */, char * errbuf /* r30 */) {
    // References
    // -> static char * errmsgs[22];
    // -> static char * codenames[22];
}

// Range: 0x8012015C -> 0x801201A4
static int iSG_start_your_engines() {
    // Local variables
    int result; // r31
}

// Range: 0x801201A4 -> 0x8012032C
int iSG_mcidx2slot(int mcidx /* r1+0x8 */, int * slot /* r28 */, int * concnt /* r25 */) {
    // Local variables
    int result; // r27
    int rc; // r30
    int idx; // r29
    long duma; // r1+0x10
    long dumb; // r1+0xC
    int haveit[2]; // r1+0x14
    int i; // r31

    // References
    // -> static enum en_VERBOSE_MSGLEVEL _g_mlvl;
}

// Range: 0x8012032C -> 0x8012046C
static int iSG_mc_exists(int cardslot /* r30 */) {
    // Local variables
    int result; // r29
    int rc; // r31
    long memsize; // r1+0xC
    long sectsize; // r1+0x8

    // References
    // -> static enum en_VERBOSE_MSGLEVEL _g_mlvl;
}

static int callbackResult; // size: 0x4, address: 0x80D69C48
static unsigned char checkExInProgress; // size: 0x1, address: 0x80D69C4C
// Range: 0x8012046C -> 0x8012047C
void CheckExCallback(long result /* r4 */) {
    // References
    // -> static unsigned char checkExInProgress;
    // -> static int callbackResult;
}

char __FUNCTION__$localstatic1$iSG_CARDCheckEx__FiPl[16]; // size: 0x10, address: 0x80D61B42
static int been_here; // size: 0x4, address: 0x80D69C50
static int been_here; // size: 0x4, address: 0x80D69C54
static char __FUNCTION__[17]; // size: 0x11, address: 0x80D61B52
// Range: 0x8012047C -> 0x80120698
static int iSG_mc_tryRepair(struct st_ISG_MEMCARD_DATA * mcdata /* r31 */) {
    // Local variables
    int result; // r30
    int rc; // r29
    int sanity; // r27
    long repaired; // r1+0x8

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[17];
    // -> static enum en_VERBOSE_MSGLEVEL _g_mlvl;
    // -> static int been_here;
}

// Range: 0x80120698 -> 0x80120714
int iSG_CARDCheckEx(int chan /* r1+0x8 */, long * xferBytes /* r1+0xC */) {
    // Local variables
    int rc; // r31

    // References
    // -> static int callbackResult;
    // -> static unsigned char checkExInProgress;
    // -> char __FUNCTION__$localstatic1$iSG_CARDCheckEx__FiPl[16];
}

static int been_here; // size: 0x4, address: 0x80D69C58
static int been_here; // size: 0x4, address: 0x80D69C5C
static char __FUNCTION__[19]; // size: 0x13, address: 0x80D61B63
// Range: 0x80120714 -> 0x80120924
static int iSG_mc_isformatted(struct st_ISG_MEMCARD_DATA * mcdata /* r31 */) {
    // Local variables
    int is_fmtd; // r30
    int rc; // r29
    int sanity; // r28
    long repaired; // r1+0x8

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[19];
    // -> static enum en_VERBOSE_MSGLEVEL _g_mlvl;
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D69C60
static int been_here; // size: 0x4, address: 0x80D69C64
static int been_here; // size: 0x4, address: 0x80D69C68
static int been_here; // size: 0x4, address: 0x80D69C6C
static char __FUNCTION__[16]; // size: 0x10, address: 0x80D61B76
// Range: 0x80120924 -> 0x80120DF8
static int iSG_mc_isGCcard(struct st_ISG_MEMCARD_DATA * mcdata /* r31 */, int * badencode /* r28 */, int * wornout /* r27 */) {
    // Local variables
    int is_gc; // r29
    int rc; // r30
    int sanity; // r26
    long repaired; // r1+0x14
    unsigned short typ_enc; // r1+0x8
    long duma; // r1+0x10
    long dumb; // r1+0xC
    unsigned short target_enc; // r25

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[16];
    // -> static enum en_VERBOSE_MSGLEVEL _g_mlvl;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D69C70
static int been_here; // size: 0x4, address: 0x80D69C74
static char __FUNCTION__[19]; // size: 0x13, address: 0x80D61B86
// Range: 0x80120DF8 -> 0x80121064
static int iSG_isSpaceForFile(struct st_ISG_MEMCARD_DATA * mcdata /* r31 */, int fsize /* r1+0x8 */, const char * fname /* r1+0xC */, int * amtneed /* r24 */, int * amtfree /* r25 */, int * needFiles /* r29 */) {
    // Local variables
    int haveroom; // r27
    int needamt; // r30
    int rc; // r28
    long freebyte; // r1+0x14
    long freefile; // r1+0x10

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[19];
    // -> static enum en_VERBOSE_MSGLEVEL _g_mlvl;
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D69C78
static int been_here; // size: 0x4, address: 0x80D69C7C
static char __FUNCTION__[14]; // size: 0xE, address: 0x80D61B99
// Range: 0x80121064 -> 0x801211F0
static int iSG_mc_settgt(struct st_ISG_MEMCARD_DATA * mcdata /* r31 */, int cardslot /* r29 */) {
    // Local variables
    int rc; // r30
    int trc; // r1+0x8

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[14];
    // -> static enum en_VERBOSE_MSGLEVEL _g_mlvl;
    // -> static int been_here;
}

// Range: 0x801211F0 -> 0x8012133C
static int iSG_get_finfo(struct st_ISG_MEMCARD_DATA * mcdata /* r30 */, const char * fname /* r1+0x8 */) {
    // Local variables
    int result; // r29
    int rc; // r28
    struct CARDStat * stat; // r31
    enum en_ASYNC_OPERR whyFail; // r1+0xC
}

static int been_here; // size: 0x4, address: 0x80D69C80
static int been_here; // size: 0x4, address: 0x80D69C84
static char __FUNCTION__[14]; // size: 0xE, address: 0x80D61BA7
// Range: 0x8012133C -> 0x80121C40
static int iSG_curKosher(struct CARDStat * stat /* r31 */, struct CARDFileInfo * finf /* r17 */) {
    // Local variables
    int isok; // r29
    int bs; // r28
    char * b; // r25
    char * ba; // r24
    long ik; // r27
    struct st_ISG_CARD_ICONBLOCK * blkmap; // r26
    char tb[512]; // r1+0x68
    int rc; // r18
    int ak; // r30
    unsigned char game_name[32]; // r1+0x48
    unsigned char mister[32]; // r1+0x28
    unsigned char incredibles_sjis[32]; // r1+0x8
    unsigned int langConfig; // r23

    // References
    // -> static enum en_VERBOSE_MSGLEVEL _g_mlvl;
    // -> static char __FUNCTION__[14];
    // -> static int been_here;
    // -> static int been_here;
}

// Range: 0x80121C40 -> 0x80121D28
static int iSG_fileKosher(struct st_ISG_MEMCARD_DATA * mcdata /* r28 */, const char * fname /* r27 */, int tossRotten /* r1+0x8 */, int * didit /* r30 */) {
    // Local variables
    int result; // r29
    int rc; // r31
    struct CARDStat * stat; // r1+0x14
    struct CARDFileInfo * finfo; // r1+0x10
    enum en_ASYNC_OPERR whyFail; // r1+0xC
}

// Range: 0x80121D28 -> 0x80121D90
static int iSG_get_fsize(struct st_ISG_MEMCARD_DATA * mcdata /* r29 */, const char * fname /* r1+0x8 */) {
    // Local variables
    int size; // r31
    int rc; // r30
}

// Range: 0x80121D90 -> 0x80121F1C
static int iSG_get_fmoddate(struct st_ISG_MEMCARD_DATA * mcdata /* r20 */, const char * fname /* r1+0x8 */, int * sec /* r21 */, int * min /* r22 */, int * hr /* r23 */, int * mon /* r30 */, int * day /* r31 */, int * yr /* r24 */) {
    // Local variables
    int result; // r26
    int rc; // r25
    const struct CARDStat * stat; // r29
    struct OSCalendarTime caltym; // r1+0xC
    long long biggun; // r27
}

// Range: 0x80121F1C -> 0x80121F20
static void iSG_timestamp() {}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80D61BB5
// Range: 0x80121F20 -> 0x80122028
static int iSG_cubeicon_size(int cardslot /* r30 */, int sectsize /* r27 */) {
    // Local variables
    int amt; // r29
    int jump; // r31
    int fixed; // r28

    // References
    // -> static char __FUNCTION__[18];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80D61BC7
// Range: 0x80122028 -> 0x80122170
static int iSG_chk_icondata() {
    // Local variables
    int result; // r30
    unsigned int chksum; // r31

    // References
    // -> static unsigned int g_chkbanr;
    // -> static char __FUNCTION__[17];
    // -> static int g_banrsize;
    // -> static char * g_rawbanr;
    // -> static unsigned int g_chkicon;
    // -> static int g_iconsize;
    // -> static char * g_rawicon;
}

static int been_here; // size: 0x4, address: 0x80D69C88
static int been_here; // size: 0x4, address: 0x80D69C8C
static int been_here; // size: 0x4, address: 0x80D69C90
static int been_here; // size: 0x4, address: 0x80D69C94
static int been_here; // size: 0x4, address: 0x80D69C98
static int been_here; // size: 0x4, address: 0x80D69C9C
static int been_here; // size: 0x4, address: 0x80D69CA0
static int been_here; // size: 0x4, address: 0x80D69CA4
static char __FUNCTION__[18]; // size: 0x12, address: 0x80D61BD8
// Range: 0x80122170 -> 0x80122598
static int iSG_load_icondata() {
    // Local variables
    int rc; // r31

    // References
    // -> static int g_banrsize;
    // -> static char * g_rawbanr;
    // -> static int g_iconsize;
    // -> static char * g_rawicon;
    // -> static int been_here;
    // -> static char __FUNCTION__[18];
    // -> static unsigned int g_chkbanr;
    // -> static int been_here;
    // -> static unsigned int g_chkicon;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}

int __OSCurrHeap; // size: 0x4, address: 0x80D681E0
// Range: 0x80122598 -> 0x80122614
static void iSG_discard_icondata() {
    // References
    // -> static unsigned int g_chkbanr;
    // -> static unsigned int g_chkicon;
    // -> static int g_banrsize;
    // -> static char * g_rawbanr;
    // -> static int g_iconsize;
    // -> static char * g_rawicon;
    // -> int __OSCurrHeap;
}

enum _GXTexWrapMode {
    GX_CLAMP = 0,
    GX_REPEAT = 1,
    GX_MIRROR = 2,
    GX_MAX_TEXWRAPMODE = 3,
};
enum _GXTexFilter {
    GX_NEAR = 0,
    GX_LINEAR = 1,
    GX_NEAR_MIP_NEAR = 2,
    GX_LIN_MIP_NEAR = 3,
    GX_NEAR_MIP_LIN = 4,
    GX_LIN_MIP_LIN = 5,
};
// total size: 0x24
struct st_ISG_TPL_TEXHEADER {
    // Members
    unsigned short height; // offset 0x0, size 0x2
    unsigned short width; // offset 0x2, size 0x2
    unsigned long format; // offset 0x4, size 0x4
    char * data; // offset 0x8, size 0x4
    enum _GXTexWrapMode wrapS; // offset 0xC, size 0x4
    enum _GXTexWrapMode wrapT; // offset 0x10, size 0x4
    enum _GXTexFilter minFilter; // offset 0x14, size 0x4
    enum _GXTexFilter magFilter; // offset 0x18, size 0x4
    float LODBias; // offset 0x1C, size 0x4
    unsigned char edgeLODEnable; // offset 0x20, size 0x1
    unsigned char minLOD; // offset 0x21, size 0x1
    unsigned char maxLOD; // offset 0x22, size 0x1
    unsigned char unpacked; // offset 0x23, size 0x1
};
enum _GXTlutFmt {
    GX_TL_IA8 = 0,
    GX_TL_RGB565 = 1,
    GX_TL_RGB5A3 = 2,
    GX_MAX_TLUTFMT = 3,
};
// total size: 0xC
struct st_ISG_TPL_CLUTHEADER {
    // Members
    unsigned short numEntries; // offset 0x0, size 0x2
    unsigned char unpacked; // offset 0x2, size 0x1
    unsigned char pad8; // offset 0x3, size 0x1
    enum _GXTlutFmt format; // offset 0x4, size 0x4
    char * data; // offset 0x8, size 0x4
};
// total size: 0x8
struct st_ISG_TPL_TEXDESCRIP {
    // Members
    struct st_ISG_TPL_TEXHEADER * textureHeader; // offset 0x0, size 0x4
    struct st_ISG_TPL_CLUTHEADER * CLUTHeader; // offset 0x4, size 0x4
};
// total size: 0xC
struct st_ISG_TPL_TEXPALETTE {
    // Members
    unsigned long versionNumber; // offset 0x0, size 0x4
    unsigned long numDescriptors; // offset 0x4, size 0x4
    struct st_ISG_TPL_TEXDESCRIP * descriptorArray; // offset 0x8, size 0x4
};
static struct st_ISG_TPL_TEXPALETTE * ico_pal; // size: 0x4, address: 0x80D69CA8
static struct st_ISG_TPL_TEXDESCRIP * ico_desc; // size: 0x4, address: 0x80D69CAC
static unsigned long i; // size: 0x4, address: 0x80D69CB0
static signed char init; // size: 0x1, address: 0x80D69CB4
// total size: 0x5C40
struct st_ISG_CARD_ICONBLOCK {
    // Members
    unsigned char Title[32]; // offset 0x0, size 0x20
    unsigned char Description[32]; // offset 0x20, size 0x20
    unsigned char Banner[6144]; // offset 0x40, size 0x1800
    unsigned char Icons[8][2048]; // offset 0x1840, size 0x4000
    unsigned char buncho[512]; // offset 0x5840, size 0x200
    char integchk[512]; // offset 0x5A40, size 0x200
};
// Range: 0x80122614 -> 0x80122D28
static char * iSG_bfr_icondata(char * buffer /* r23 */, char * label /* r24 */, int sectsize /* r25 */) {
    // Local variables
    struct st_ISG_CARD_ICONBLOCK block; // r1+0x6C
    char * destptr; // r29
    int runsum; // r1+0x8
    unsigned char game_name[32]; // r1+0x4C
    unsigned char mister[32]; // r1+0x2C
    unsigned char incredibles_sjis[32]; // r1+0xC
    unsigned int texcount; // r31
    int sizemult; // r30

    // References
    // -> static unsigned long i;
    // -> static struct st_ISG_TPL_TEXDESCRIP * ico_desc;
    // -> static struct st_ISG_TPL_TEXPALETTE * ico_pal;
    // -> static char * g_rawicon;
    // -> static char * g_rawbanr;
    // -> static signed char init;
}

// Range: 0x80122D28 -> 0x80122E14
static void iSG_upd_icostat(struct CARDStat * realstat /* r31 */) {
    // Local variables
    int i; // r30

    // References
    // -> static enum en_VERBOSE_MSGLEVEL _g_mlvl;
}

static int been_here; // size: 0x4, address: 0x80D69CB8
static int been_here; // size: 0x4, address: 0x80D69CBC
static char __FUNCTION__[15]; // size: 0xF, address: 0x80D61BEA
// Range: 0x80122E14 -> 0x80122FC0
static int iSG_tpl_unpack(struct st_ISG_TPL_TEXPALETTE * pal /* r30 */) {
    // Local variables
    int i; // r27
    int rc; // r1+0x8
    struct st_ISG_TPL_TEXDESCRIP * tmpdesc; // r31
    unsigned long palpos; // r28
    unsigned long tmppos; // r29

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[15];
    // -> static int been_here;
}

// Range: 0x80122FC0 -> 0x80123000
static int iSG_bnr_unpack(struct st_ISG_TPL_TEXPALETTE * pal /* r1+0x8 */) {}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80D61BF9
// Range: 0x80123000 -> 0x801230A4
static struct st_ISG_TPL_TEXDESCRIP * iSG_tpl_TEXGet(struct st_ISG_TPL_TEXPALETTE * pal /* r31 */, unsigned int idx /* r30 */) {
    // References
    // -> static char __FUNCTION__[15];
}

// Range: 0x801230A4 -> 0x801231C8
static int iSG_mc_mount(int cardslot /* r30 */) {
    // Local variables
    int result; // r31
    int rc; // r1+0x8

    // References
    // -> static enum en_VERBOSE_MSGLEVEL _g_mlvl;
    // -> static unsigned char isMounted;
    // -> static char cardwork[2][40960];
}

static int been_here; // size: 0x4, address: 0x80D69CC0
static char __FUNCTION__[15]; // size: 0xF, address: 0x80D61C08
// Range: 0x801231C8 -> 0x801232E0
static int iSG_mc_unmount(int cardslot /* r1+0x8 */) {
    // Local variables
    int result; // r30
    int rc; // r31
    int sanity; // r29

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[15];
    // -> static enum en_VERBOSE_MSGLEVEL _g_mlvl;
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80D61C17
// Range: 0x801232E0 -> 0x801233EC
static void iSG_cb_unmount(long chan /* r30 */, long retcode /* r1+0x8 */) {
    // Local variables
    struct st_ISGSESSION * isgdata; // r31

    // References
    // -> static char __FUNCTION__[15];
    // -> static struct st_ISGSESSION g_isgdata_MAIN;
}

static int been_here; // size: 0x4, address: 0x80D69CC4
static char __FUNCTION__[14]; // size: 0xE, address: 0x80D61C26
// Range: 0x801233EC -> 0x80123610
static int iSG_mc_format(struct st_ISG_MEMCARD_DATA * mcdata /* r30 */, int force /* r1+0x8 */, int * canRecover /* r31 */) {
    // Local variables
    int result; // r28
    int rc; // r29

    // References
    // -> static enum en_VERBOSE_MSGLEVEL _g_mlvl;
    // -> static int been_here;
    // -> static char __FUNCTION__[14];
}

static unsigned char cardCreateInProgress; // size: 0x1, address: 0x80D69CC8
// Range: 0x80123610 -> 0x80123620
void CardCreateCallback(long result /* r4 */) {
    // References
    // -> static unsigned char cardCreateInProgress;
    // -> static int callbackResult;
}

char __FUNCTION__$localstatic1$iSG_CARDCreate__FlPCcUlP12CARDFileInfo[15]; // size: 0xF, address: 0x80D61C34
static int been_here; // size: 0x4, address: 0x80D69CCC
static int been_here; // size: 0x4, address: 0x80D69CD0
static int been_here; // size: 0x4, address: 0x80D69CD4
static int been_here; // size: 0x4, address: 0x80D69CD8
static int been_here; // size: 0x4, address: 0x80D69CDC
static char __FUNCTION__[13]; // size: 0xD, address: 0x80D61C43
enum en_ISG_IOMODE {
    ISG_IOMODE_READ = 1,
    ISG_IOMODE_WRITE = 2,
    ISG_IOMODE_APPEND = 3,
};
// Range: 0x80123620 -> 0x80123BC0
static int iSG_mc_fopen(struct st_ISG_MEMCARD_DATA * mcdata /* r31 */, const char * fname /* r27 */, int fsize /* r1+0x8 */, enum en_ISG_IOMODE mode /* r24 */, enum en_ASYNC_OPERR * whyFail /* r29 */) {
    // Local variables
    int result; // r28
    int rc; // r30
    struct CARDFileInfo * finf; // r26
    struct CARDStat * stat; // r25
    unsigned int langConfig; // r21
    int isok; // r23

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[13];
    // -> static char * ISG_GC_GAMENAME;
    // -> static enum en_VERBOSE_MSGLEVEL _g_mlvl;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}

// Range: 0x80123BC0 -> 0x80123C4C
int iSG_CARDCreate(long chan /* r1+0x8 */, const char * fileName /* r1+0xC */, unsigned long size /* r1+0x10 */, struct CARDFileInfo * fileInfo /* r1+0x14 */) {
    // Local variables
    int rc; // r31

    // References
    // -> static int callbackResult;
    // -> static unsigned char cardCreateInProgress;
    // -> char __FUNCTION__$localstatic1$iSG_CARDCreate__FlPCcUlP12CARDFileInfo[15];
}

// Range: 0x80123C4C -> 0x80123C78
static int iSG_mc_fclose(struct st_ISG_MEMCARD_DATA * mcdata /* r1+0x8 */) {}

// Range: 0x80123C78 -> 0x80123DB0
static int iSG_mc_fclose(struct st_ISG_MEMCARD_DATA * mcdata /* r30 */, struct CARDStat * statcopy /* r28 */) {
    // Local variables
    int result; // r29
    int rc; // r31

    // References
    // -> static enum en_VERBOSE_MSGLEVEL _g_mlvl;
}

static unsigned char cardDeleteInProgress; // size: 0x1, address: 0x80D69CE0
// Range: 0x80123DB0 -> 0x80123DC0
void CardDeleteCallback(long result /* r4 */) {
    // References
    // -> static unsigned char cardDeleteInProgress;
    // -> static int callbackResult;
}

char __FUNCTION__$localstatic1$iSG_CARDDelete__FlPCc[15]; // size: 0xF, address: 0x80D61C50
// Range: 0x80123DC0 -> 0x80123F78
static int iSG_mc_fdel(struct st_ISG_MEMCARD_DATA * mcdata /* r30 */, const char * fname /* r27 */) {
    // Local variables
    int result; // r29
    int rc; // r31
    struct st_ISGSESSION * isgdata; // r1+0x8
    enum en_ASYNC_OPERR whyFail; // r28

    // References
    // -> static enum en_VERBOSE_MSGLEVEL _g_mlvl;
    // -> static unsigned char isMounted;
    // -> static struct st_ISGSESSION g_isgdata_MAIN;
}

// Range: 0x80123F78 -> 0x80123FF4
int iSG_CARDDelete(long chan /* r1+0x8 */, const char * fileName /* r1+0xC */) {
    // Local variables
    int rc; // r31

    // References
    // -> static int callbackResult;
    // -> static unsigned char cardDeleteInProgress;
    // -> char __FUNCTION__$localstatic1$iSG_CARDDelete__FlPCc[15];
}

// Range: 0x80123FF4 -> 0x80124038
static void iSG_cb_asyndone(long retcode /* r1+0x8 */) {}

// Range: 0x80124038 -> 0x80124078
static int iSG_mc_fread(struct st_ISG_MEMCARD_DATA * mcdata /* r28 */, char * buf /* r25 */, int bufsize /* r26 */, int skipbyte /* r27 */) {
    // Local variables
    int result; // r30
    int rc; // r31
    enum en_ASYNC_OPERR whyFail; // r29
}

static int been_here; // size: 0x4, address: 0x80D69CE4
static char __FUNCTION__[15]; // size: 0xF, address: 0x80D61C5F
// Range: 0x80124078 -> 0x8012437C
static int iSG_mcqa_fread(struct st_ISG_MEMCARD_DATA * mcdata /* r30 */, char * buf /* r1+0x8 */, int bufsize /* r22 */, int skipbyte /* r23 */) {
    // Local variables
    int result; // r29
    int rc; // r31
    int amt_start; // r27
    int amt; // r26
    int updintv; // r28
    int polltillready; // r24
    enum en_ASYNC_OPERR whyFail; // r25

    // References
    // -> static char __FUNCTION__[15];
    // -> static enum en_VERBOSE_MSGLEVEL _g_mlvl;
    // -> static int been_here;
}

// Range: 0x8012437C -> 0x801243C0
static int iSG_mc_fwrite(struct st_ISG_MEMCARD_DATA * mcdata /* r31 */, char * data /* r25 */, int n /* r27 */) {
    // Local variables
    int result; // r29
    int rc; // r30
    struct CARDFileInfo * finf; // r28
    struct CARDStat * stat; // r26
}

static int been_here; // size: 0x4, address: 0x80D69CE8
static char __FUNCTION__[16]; // size: 0x10, address: 0x80D61C6E
// Range: 0x801243C0 -> 0x80124738
static int iSG_mcqa_fwrite(struct st_ISG_MEMCARD_DATA * mcdata /* r31 */, char * data /* r1+0x8 */, int n /* r23 */) {
    // Local variables
    int result; // r29
    int rc; // r30
    int updintv; // r26
    int amt_start; // r28
    int amt; // r25
    int asynpoll; // r27
    struct CARDFileInfo * finf; // r24
    struct CARDStat * stat; // r22
    int polltillready; // r21

    // References
    // -> static enum en_VERBOSE_MSGLEVEL _g_mlvl;
    // -> static char __FUNCTION__[16];
    // -> static int been_here;
}

const char * _rwMemoryLastAllocFile; // size: 0x4, address: 0x80D6C318
unsigned int _rwMemoryLastAllocLine; // size: 0x4, address: 0x80D6C31C
void * RwEngineInstance; // size: 0x4, address: 0x80D6C374
// Range: 0x80124738 -> 0x80124814
int iSGCheckForWrongDevice() {
    // Local variables
    char * workArea; // r30
    int resultCode; // r28
    int badCard; // r29
    int i; // r31

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static int been_here; // size: 0x4, address: 0x80D69CEC
static int been_here; // size: 0x4, address: 0x80D69CF0
static char __FUNCTION__[17]; // size: 0x11, address: 0x80D61C7E
// Range: 0x80124814 -> 0x80124960
unsigned char iSGIsGameCorrupt(struct st_ISGSESSION * sess /* r31 */, int gidx /* r1+0x8 */) {
    // Local variables
    int result; // r1+0xC
    int rc; // r29
    const char * fname; // r30
    struct st_ISG_MEMCARD_DATA * mcdata; // r28

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[17];
    // -> static int been_here;
}

// Range: 0x80124960 -> 0x801249B0
unsigned char iSGCheckMemoryCard(int index /* r1+0x8 */) {
    // Local variables
    long memSize; // r1+0x10
    long sectorSize; // r1+0xC
    int resultCode; // r31
}

// Range: 0x801249B0 -> 0x801249B4
void iSGAutoSave_Startup() {}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80D61C8F
// Range: 0x801249B4 -> 0x80124A90
struct st_ISGSESSION * iSGAutoSave_Connect(int idx_target /* r1+0x8 */, void * cltdata /* r1+0xC */, void (* chg)(void *, enum en_CHGCODE) /* r1+0x10 */) {
    // Local variables
    struct st_ISGSESSION * isg; // r31
    int rc; // r30

    // References
    // -> static char __FUNCTION__[20];
}

// Range: 0x80124A90 -> 0x80124AB8
void iSGAutoSave_Disconnect(struct st_ISGSESSION * isg /* r1+0x8 */) {}

// total size: 0x0
struct xCamGroup {};
// total size: 0x0
struct xCamScreen {};
// total size: 0x10
struct xVec4 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
// total size: 0x10
struct xUpdateCullEnt {
    // Members
    unsigned short index; // offset 0x0, size 0x2
    signed short groupIndex; // offset 0x2, size 0x2
    unsigned int (* update_cull_cb)(void *, void *); // offset 0x4, size 0x4
    void * cbdata; // offset 0x8, size 0x4
    struct xUpdateCullEnt * nextInGroup; // offset 0xC, size 0x4
};
// total size: 0x20
struct xLinkAsset {
    // Members
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
// total size: 0x10
struct xBase {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    const struct xLinkAsset * link; // offset 0x8, size 0x4
    void (* eventFunc)(struct xBase *, struct xBase *, unsigned int, float *, struct xBase *, unsigned int); // offset 0xC, size 0x4
};
// total size: 0x8
struct xBaseAsset {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0xC
struct xGroupAsset : public xBaseAsset {
    // Members
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
};
// total size: 0x24
struct xGroup : public xBase {
    // Members
    struct xGroupAsset * asset; // offset 0x10, size 0x4
    struct xBase * * item; // offset 0x14, size 0x4
    unsigned int last_index; // offset 0x18, size 0x4
    unsigned int ptr_last_index; // offset 0x1C, size 0x4
    int flg_group; // offset 0x20, size 0x4
};
// total size: 0xC
struct xUpdateCullGroup {
    // Members
    unsigned int active; // offset 0x0, size 0x4
    unsigned short startIndex; // offset 0x4, size 0x2
    unsigned short endIndex; // offset 0x6, size 0x2
    struct xGroup * groupObject; // offset 0x8, size 0x4
};
// total size: 0x2C
struct xUpdateCullMgr {
    // Members
    unsigned int entCount; // offset 0x0, size 0x4
    unsigned int entActive; // offset 0x4, size 0x4
    void * ent; // offset 0x8, size 0x4
    struct xUpdateCullEnt * * mgr; // offset 0xC, size 0x4
    unsigned int mgrCount; // offset 0x10, size 0x4
    unsigned int mgrCurr; // offset 0x14, size 0x4
    struct xUpdateCullEnt * mgrList; // offset 0x18, size 0x4
    unsigned int grpCount; // offset 0x1C, size 0x4
    struct xUpdateCullGroup * grpList; // offset 0x20, size 0x4
    void (* activateCB)(void *); // offset 0x24, size 0x4
    void (* deactivateCB)(void *); // offset 0x28, size 0x4
};
// total size: 0x8
struct RwObject {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x34
struct RwRaster {
    // Members
    struct RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    int width; // offset 0xC, size 0x4
    int height; // offset 0x10, size 0x4
    int depth; // offset 0x14, size 0x4
    int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    int originalWidth; // offset 0x28, size 0x4
    int originalHeight; // offset 0x2C, size 0x4
    int originalStride; // offset 0x30, size 0x4
};
// total size: 0x8
struct RwLLLink {
    // Members
    struct RwLLLink * next; // offset 0x0, size 0x4
    struct RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x8
struct RwLinkList {
    // Members
    struct RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x18
struct RwTexDictionary {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLinkList texturesInDict; // offset 0x8, size 0x8
    struct RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x58
struct RwTexture {
    // Members
    struct RwRaster * raster; // offset 0x0, size 0x4
    struct RwTexDictionary * dict; // offset 0x4, size 0x4
    struct RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    unsigned int filterAddressing; // offset 0x50, size 0x4
    int refCount; // offset 0x54, size 0x4
};
// total size: 0x4
struct RwRGBA {
    // Members
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0xC
struct rxHeapSuperBlockDescriptor {
    // Members
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    struct rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
// total size: 0x8
struct rxHeapFreeBlock {
    // Members
    unsigned int size; // offset 0x0, size 0x4
    struct rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
// total size: 0x20
struct rxHeapBlockHeader {
    // Members
    struct rxHeapBlockHeader * prev; // offset 0x0, size 0x4
    struct rxHeapBlockHeader * next; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    struct rxHeapFreeBlock * freeEntry; // offset 0xC, size 0x4
    unsigned int pad[4]; // offset 0x10, size 0x10
};
// total size: 0x1C
struct RxHeap {
    // Members
    unsigned int superBlockSize; // offset 0x0, size 0x4
    struct rxHeapSuperBlockDescriptor * head; // offset 0x4, size 0x4
    struct rxHeapBlockHeader * headBlock; // offset 0x8, size 0x4
    struct rxHeapFreeBlock * freeBlocks; // offset 0xC, size 0x4
    unsigned int entriesAlloced; // offset 0x10, size 0x4
    unsigned int entriesUsed; // offset 0x14, size 0x4
    int dirty; // offset 0x18, size 0x4
};
// total size: 0x8
struct RxPipelineNodeParam {
    // Members
    void * dataParam; // offset 0x0, size 0x4
    struct RxHeap * heap; // offset 0x4, size 0x4
};
// total size: 0x1C
struct RxNodeMethods {
    // Members
    int (* nodeBody)(struct RxPipelineNode *, struct RxPipelineNodeParam *); // offset 0x0, size 0x4
    int (* nodeInit)(struct RxNodeDefinition *); // offset 0x4, size 0x4
    void (* nodeTerm)(struct RxNodeDefinition *); // offset 0x8, size 0x4
    int (* pipelineNodeInit)(struct RxPipelineNode *); // offset 0xC, size 0x4
    void (* pipelineNodeTerm)(struct RxPipelineNode *); // offset 0x10, size 0x4
    int (* pipelineNodeConfig)(struct RxPipelineNode *, struct RxPipeline *); // offset 0x14, size 0x4
    unsigned int (* configMsgHandler)(struct RxPipelineNode *, unsigned int, unsigned int, void *); // offset 0x18, size 0x4
};
// total size: 0x10
struct RxClusterDefinition {
    // Members
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    const char * attributeSet; // offset 0xC, size 0x4
};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
struct RxClusterRef {
    // Members
    struct RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
struct RxOutputSpec {
    // Members
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
// total size: 0x14
struct RxIoSpec {
    // Members
    unsigned int numClustersOfInterest; // offset 0x0, size 0x4
    struct RxClusterRef * clustersOfInterest; // offset 0x4, size 0x4
    enum RxClusterValidityReq * inputRequirements; // offset 0x8, size 0x4
    unsigned int numOutputs; // offset 0xC, size 0x4
    struct RxOutputSpec * outputs; // offset 0x10, size 0x4
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x40
struct RxNodeDefinition {
    // Members
    char * name; // offset 0x0, size 0x4
    struct RxNodeMethods nodeMethods; // offset 0x4, size 0x1C
    struct RxIoSpec io; // offset 0x20, size 0x14
    unsigned int pipelineNodePrivateDataSize; // offset 0x34, size 0x4
    enum RxNodeDefEditable editable; // offset 0x38, size 0x4
    int InputPipesCnt; // offset 0x3C, size 0x4
};
// total size: 0x8
struct RxPipelineCluster {
    // Members
    struct RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
// total size: 0x0
struct rxReq {};
// total size: 0xC
struct RxPipelineNodeTopSortData {
    // Members
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    struct rxReq * req; // offset 0x8, size 0x4
};
// total size: 0x28
struct RxPipelineNode {
    // Members
    struct RxNodeDefinition * nodeDef; // offset 0x0, size 0x4
    unsigned int numOutputs; // offset 0x4, size 0x4
    unsigned int * outputs; // offset 0x8, size 0x4
    struct RxPipelineCluster * * slotClusterRefs; // offset 0xC, size 0x4
    unsigned int * slotsContinue; // offset 0x10, size 0x4
    void * privateData; // offset 0x14, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x18, size 0x4
    struct RxPipelineNodeTopSortData * topSortData; // offset 0x1C, size 0x4
    void * initializationData; // offset 0x20, size 0x4
    unsigned int initializationDataSize; // offset 0x24, size 0x4
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x1C
struct RxCluster {
    // Members
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short stride; // offset 0x2, size 0x2
    void * data; // offset 0x4, size 0x4
    void * currentData; // offset 0x8, size 0x4
    unsigned int numAlloced; // offset 0xC, size 0x4
    unsigned int numUsed; // offset 0x10, size 0x4
    struct RxPipelineCluster * clusterRef; // offset 0x14, size 0x4
    unsigned int attributes; // offset 0x18, size 0x4
};
// total size: 0x30
struct RxPacket {
    // Members
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short numClusters; // offset 0x2, size 0x2
    struct RxPipeline * pipeline; // offset 0x4, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x8, size 0x4
    unsigned int * slotsContinue; // offset 0xC, size 0x4
    struct RxPipelineCluster * * slotClusterRefs; // offset 0x10, size 0x4
    struct RxCluster clusters[1]; // offset 0x14, size 0x1C
};
// total size: 0xC
struct RxPipelineRequiresCluster {
    // Members
    struct RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
// total size: 0x34
struct RxPipeline {
    // Members
    int locked; // offset 0x0, size 0x4
    unsigned int numNodes; // offset 0x4, size 0x4
    struct RxPipelineNode * nodes; // offset 0x8, size 0x4
    unsigned int packetNumClusterSlots; // offset 0xC, size 0x4
    enum rxEmbeddedPacketState embeddedPacketState; // offset 0x10, size 0x4
    struct RxPacket * embeddedPacket; // offset 0x14, size 0x4
    unsigned int numInputRequirements; // offset 0x18, size 0x4
    struct RxPipelineRequiresCluster * inputRequirements; // offset 0x1C, size 0x4
    void * superBlock; // offset 0x20, size 0x4
    unsigned int superBlockSize; // offset 0x24, size 0x4
    unsigned int entryPoint; // offset 0x28, size 0x4
    unsigned int pluginId; // offset 0x2C, size 0x4
    unsigned int pluginData; // offset 0x30, size 0x4
};
// total size: 0xC
struct RwSurfaceProperties {
    // Members
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0x1C
struct RpMaterial {
    // Members
    struct RwTexture * texture; // offset 0x0, size 0x4
    struct RwRGBA color; // offset 0x4, size 0x4
    struct RxPipeline * pipeline; // offset 0x8, size 0x4
    struct RwSurfaceProperties surfaceProps; // offset 0xC, size 0xC
    signed short refCount; // offset 0x18, size 0x2
    signed short pad; // offset 0x1A, size 0x2
};
// total size: 0xC
struct RpMaterialList {
    // Members
    struct RpMaterial * * materials; // offset 0x0, size 0x4
    int numMaterials; // offset 0x4, size 0x4
    int space; // offset 0x8, size 0x4
};
// total size: 0x4
struct RpSector {
    // Members
    int type; // offset 0x0, size 0x4
};
// total size: 0xC
struct RwV3d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x18
struct RwBBox {
    // Members
    struct RwV3d sup; // offset 0x0, size 0xC
    struct RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x8
struct RpTriangle {
    // Members
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    unsigned short matIndex; // offset 0x6, size 0x2
};
// total size: 0x4
struct RpVertexNormal {
    // Members
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
};
// total size: 0x8
struct RwTexCoords {
    // Members
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x18
struct RwResEntry {
    // Members
    struct RwLLLink link; // offset 0x0, size 0x8
    int size; // offset 0x8, size 0x4
    void * owner; // offset 0xC, size 0x4
    struct RwResEntry * * ownerRef; // offset 0x10, size 0x4
    void (* destroyNotify)(struct RwResEntry *); // offset 0x14, size 0x4
};
// total size: 0x10
struct RpMeshHeader {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    unsigned short numMeshes; // offset 0x4, size 0x2
    unsigned short serialNum; // offset 0x6, size 0x2
    unsigned int totalIndicesInMesh; // offset 0x8, size 0x4
    unsigned int firstMeshOffset; // offset 0xC, size 0x4
};
// total size: 0x88
struct RpWorldSector {
    // Members
    int type; // offset 0x0, size 0x4
    struct RpTriangle * triangles; // offset 0x4, size 0x4
    struct RwV3d * vertices; // offset 0x8, size 0x4
    struct RpVertexNormal * normals; // offset 0xC, size 0x4
    struct RwTexCoords * texCoords[8]; // offset 0x10, size 0x20
    struct RwRGBA * preLitLum; // offset 0x30, size 0x4
    struct RwResEntry * repEntry; // offset 0x34, size 0x4
    struct RwLinkList collAtomicsInWorldSector; // offset 0x38, size 0x8
    struct RwLinkList lightsInWorldSector; // offset 0x40, size 0x8
    struct RwBBox boundingBox; // offset 0x48, size 0x18
    struct RwBBox tightBoundingBox; // offset 0x60, size 0x18
    struct RpMeshHeader * mesh; // offset 0x78, size 0x4
    struct RxPipeline * pipeline; // offset 0x7C, size 0x4
    unsigned short matListWindowBase; // offset 0x80, size 0x2
    unsigned short numVertices; // offset 0x82, size 0x2
    unsigned short numTriangles; // offset 0x84, size 0x2
    unsigned short pad; // offset 0x86, size 0x2
};
// total size: 0x70
struct RpWorld {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    unsigned int flags; // offset 0x8, size 0x4
    enum RpWorldRenderOrder renderOrder; // offset 0xC, size 0x4
    struct RpMaterialList matList; // offset 0x10, size 0xC
    struct RpSector * rootSector; // offset 0x1C, size 0x4
    int numTexCoordSets; // offset 0x20, size 0x4
    int numClumpsInWorld; // offset 0x24, size 0x4
    struct RwLLLink * currentClumpLink; // offset 0x28, size 0x4
    struct RwLinkList clumpList; // offset 0x2C, size 0x8
    struct RwLinkList lightList; // offset 0x34, size 0x8
    struct RwLinkList directionalLightList; // offset 0x3C, size 0x8
    struct RwV3d worldOrigin; // offset 0x44, size 0xC
    struct RwBBox boundingBox; // offset 0x50, size 0x18
    struct RpWorldSector * (* renderCallBack)(struct RpWorldSector *); // offset 0x68, size 0x4
    struct RxPipeline * pipeline; // offset 0x6C, size 0x4
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x1C
struct iFogParams {
    // Members
    enum RwFogType type; // offset 0x0, size 0x4
    float start; // offset 0x4, size 0x4
    float stop; // offset 0x8, size 0x4
    float density; // offset 0xC, size 0x4
    struct RwRGBA fogcolor; // offset 0x10, size 0x4
    struct RwRGBA bgcolor; // offset 0x14, size 0x4
    unsigned char * table; // offset 0x18, size 0x4
};
// total size: 0x0
struct PlaybackStruct {};
// total size: 0xC
struct PlaybackBuffers {
    // Members
    struct PlaybackStruct * PlaybackBuf; // offset 0x0, size 0x4
    struct PlaybackStruct * PlaybackCur; // offset 0x4, size 0x4
    struct PlaybackStruct * PlaybackEnd; // offset 0x8, size 0x4
};
// total size: 0x0
struct zPlayer {};
// total size: 0xC
struct xVec3 {
    // Static members
    static struct xVec3 m_NegDoubleVec; // size: 0xC
    static struct xVec3 m_DoubleVec; // size: 0xC
    static struct xVec3 m_NegHalfVec; // size: 0xC
    static struct xVec3 m_HalfVec; // size: 0xC
    static struct xVec3 m_UnitAxisZ; // size: 0xC
    static struct xVec3 m_UnitAxisY; // size: 0xC
    static struct xVec3 m_UnitAxisX; // size: 0xC
    static struct xVec3 m_NegOnes; // size: 0xC
    static struct xVec3 m_Ones; // size: 0xC
    static struct xVec3 m_Null; // size: 0xC

    // Members
    union { // inferred
        struct RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
// total size: 0x50
struct xEntAsset : public xBaseAsset {
    // Members
    unsigned char flags; // offset 0x8, size 0x1
    unsigned char subtype; // offset 0x9, size 0x1
    unsigned char pflags; // offset 0xA, size 0x1
    unsigned char moreFlags; // offset 0xB, size 0x1
    unsigned int surfaceID; // offset 0xC, size 0x4
    struct xVec3 ang; // offset 0x10, size 0xC
    struct xVec3 pos; // offset 0x1C, size 0xC
    struct xVec3 scale; // offset 0x28, size 0xC
    float redMult; // offset 0x34, size 0x4
    float greenMult; // offset 0x38, size 0x4
    float blueMult; // offset 0x3C, size 0x4
    float seeThru; // offset 0x40, size 0x4
    float seeThruSpeed; // offset 0x44, size 0x4
    unsigned int modelInfoID; // offset 0x48, size 0x4
    unsigned int animListID; // offset 0x4C, size 0x4
};
// total size: 0xC
struct xModelPool {
    // Members
    struct xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    struct xModelInstance * List; // offset 0x8, size 0x4
};
// total size: 0xC
struct xAnimPhysicsData {
    // Members
    struct xVec3 * tranTable; // offset 0x0, size 0x4
    float * yawTable; // offset 0x4, size 0x4
    int tranCount; // offset 0x8, size 0x4
};
// total size: 0x24
struct xAnimFile {
    // Members
    struct xAnimFile * Next; // offset 0x0, size 0x4
    const char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int FileFlags; // offset 0xC, size 0x4
    float Duration; // offset 0x10, size 0x4
    float TimeOffset; // offset 0x14, size 0x4
    unsigned short BoneCount; // offset 0x18, size 0x2
    unsigned char NumAnims[2]; // offset 0x1A, size 0x2
    void * RawData; // offset 0x1C, size 0x4
    struct xAnimPhysicsData * PhysicsData; // offset 0x20, size 0x4
};
enum xSndHandle {
};
// total size: 0x8
struct xAnimActiveEffect {
    // Members
    struct xAnimEffect * Effect; // offset 0x0, size 0x4
    union { // inferred
        unsigned int Handle; // offset 0x4, size 0x4
        enum xSndHandle SndHandle; // offset 0x4, size 0x4
    };
};
// total size: 0x14
struct xAnimEffect {
    // Members
    struct xAnimEffect * Next; // offset 0x0, size 0x4
    unsigned short Flags; // offset 0x4, size 0x2
    unsigned short Probability; // offset 0x6, size 0x2
    float StartTime; // offset 0x8, size 0x4
    float EndTime; // offset 0xC, size 0x4
    unsigned int (* Callback)(unsigned int, struct xAnimActiveEffect *, struct xAnimSingle *, void *); // offset 0x10, size 0x4
};
// total size: 0x2C
struct xAnimTransition {
    // Members
    struct xAnimTransition * Next; // offset 0x0, size 0x4
    struct xAnimState * Dest; // offset 0x4, size 0x4
    unsigned int (* Conditional)(struct xAnimTransition *, struct xAnimSingle *, void *); // offset 0x8, size 0x4
    unsigned int (* Callback)(struct xAnimTransition *, struct xAnimSingle *, void *); // offset 0xC, size 0x4
    unsigned int Flags; // offset 0x10, size 0x4
    unsigned int UserFlags; // offset 0x14, size 0x4
    float SrcTime; // offset 0x18, size 0x4
    float DestTime; // offset 0x1C, size 0x4
    unsigned short Priority; // offset 0x20, size 0x2
    unsigned short QueuePriority; // offset 0x22, size 0x2
    float BlendRecip; // offset 0x24, size 0x4
    unsigned short * BlendOffset; // offset 0x28, size 0x4
};
// total size: 0x8
struct xAnimTransitionList {
    // Members
    struct xAnimTransitionList * Next; // offset 0x0, size 0x4
    struct xAnimTransition * T; // offset 0x4, size 0x4
};
// total size: 0x4
struct xAnimMultiFileBase {
    // Members
    unsigned int Count; // offset 0x0, size 0x4
};
// total size: 0x8
struct xAnimMultiFileEntry {
    // Members
    unsigned int ID; // offset 0x0, size 0x4
    struct xAnimFile * File; // offset 0x4, size 0x4
};
// total size: 0xC
struct xAnimMultiFile : public xAnimMultiFileBase {
    // Members
    struct xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
// total size: 0x10
struct xQuat {
    // Members
    struct xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
// total size: 0x4C
struct xAnimState {
    // Members
    struct xAnimState * Next; // offset 0x0, size 0x4
    const char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int Flags; // offset 0xC, size 0x4
    unsigned int UserFlags; // offset 0x10, size 0x4
    float Speed; // offset 0x14, size 0x4
    struct xAnimFile * Data; // offset 0x18, size 0x4
    struct xAnimEffect * Effects; // offset 0x1C, size 0x4
    struct xAnimTransitionList * Default; // offset 0x20, size 0x4
    struct xAnimTransitionList * List; // offset 0x24, size 0x4
    float * BoneBlend; // offset 0x28, size 0x4
    float * TimeSnap; // offset 0x2C, size 0x4
    float FadeRecip; // offset 0x30, size 0x4
    unsigned short * FadeOffset; // offset 0x34, size 0x4
    void * CallbackData; // offset 0x38, size 0x4
    struct xAnimMultiFile * MultiFile; // offset 0x3C, size 0x4
    void (* BeforeEnter)(struct xAnimPlay *, struct xAnimState *, void *); // offset 0x40, size 0x4
    void (* StateCallback)(struct xAnimState *, struct xAnimSingle *, void *); // offset 0x44, size 0x4
    void (* BeforeAnimMatrices)(struct xAnimPlay *, struct xQuat *, struct xVec3 *, int); // offset 0x48, size 0x4
};
// total size: 0x50
struct xAnimSingle {
    // Members
    unsigned int SingleFlags; // offset 0x0, size 0x4
    struct xAnimState * State; // offset 0x4, size 0x4
    float Time; // offset 0x8, size 0x4
    float CurrentSpeed; // offset 0xC, size 0x4
    float BilinearLerp[2]; // offset 0x10, size 0x8
    struct xAnimEffect * Effect; // offset 0x18, size 0x4
    unsigned int ActiveCount; // offset 0x1C, size 0x4
    float LastTime; // offset 0x20, size 0x4
    struct xAnimActiveEffect * ActiveList; // offset 0x24, size 0x4
    struct xAnimPlay * Play; // offset 0x28, size 0x4
    struct xAnimTransition * Sync; // offset 0x2C, size 0x4
    struct xAnimTransition * Tran; // offset 0x30, size 0x4
    struct xAnimSingle * Blend; // offset 0x34, size 0x4
    float BlendFactor; // offset 0x38, size 0x4
    struct xVec3 PhysDisp; // offset 0x3C, size 0xC
    float YawDisp; // offset 0x48, size 0x4
    unsigned int pad[1]; // offset 0x4C, size 0x4
};
// total size: 0x18
struct xAnimTable {
    // Members
    const char * Name; // offset 0x0, size 0x4
    struct xAnimTransition * TransitionList; // offset 0x4, size 0x4
    struct xAnimState * StateList; // offset 0x8, size 0x4
    unsigned int AnimIndex; // offset 0xC, size 0x4
    unsigned int MorphIndex; // offset 0x10, size 0x4
    unsigned int UserFlags; // offset 0x14, size 0x4
};
// total size: 0x20
struct xMemPool {
    // Members
    void * FreeList; // offset 0x0, size 0x4
    unsigned short NextOffset; // offset 0x4, size 0x2
    unsigned short Flags; // offset 0x6, size 0x2
    void * UsedList; // offset 0x8, size 0x4
    void (* InitCB)(struct xMemPool *, void *); // offset 0xC, size 0x4
    void * Buffer; // offset 0x10, size 0x4
    unsigned short Size; // offset 0x14, size 0x2
    unsigned short NumRealloc; // offset 0x16, size 0x2
    unsigned int Total; // offset 0x18, size 0x4
    unsigned short Allocated; // offset 0x1C, size 0x2
    unsigned short Pad0; // offset 0x1E, size 0x2
};
// total size: 0x20
struct xAnimPlay {
    // Members
    struct xAnimPlay * Next; // offset 0x0, size 0x4
    unsigned short NumSingle; // offset 0x4, size 0x2
    unsigned short BoneCount; // offset 0x6, size 0x2
    struct xAnimSingle * Single; // offset 0x8, size 0x4
    void * Object; // offset 0xC, size 0x4
    struct xAnimTable * Table; // offset 0x10, size 0x4
    struct xMemPool * Pool; // offset 0x14, size 0x4
    struct xModelInstance * ModelInst; // offset 0x18, size 0x4
    void (* BeforeAnimMatrices)(struct xAnimPlay *, struct xQuat *, struct xVec3 *, int); // offset 0x1C, size 0x4
};
// total size: 0x14
struct RwObjectHasFrame {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLLLink lFrame; // offset 0x8, size 0x8
    struct RwObjectHasFrame * (* sync)(struct RwObjectHasFrame *); // offset 0x10, size 0x4
};
// total size: 0x10
struct RwSphere {
    // Members
    struct RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// total size: 0x1C
struct RpMorphTarget {
    // Members
    struct RpGeometry * parentGeom; // offset 0x0, size 0x4
    struct RwSphere boundingSphere; // offset 0x4, size 0x10
    struct RwV3d * verts; // offset 0x14, size 0x4
    struct RwV3d * normals; // offset 0x18, size 0x4
};
// total size: 0x60
struct RpGeometry {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    unsigned int flags; // offset 0x8, size 0x4
    unsigned short lockedSinceLastInst; // offset 0xC, size 0x2
    signed short refCount; // offset 0xE, size 0x2
    int numTriangles; // offset 0x10, size 0x4
    int numVertices; // offset 0x14, size 0x4
    int numMorphTargets; // offset 0x18, size 0x4
    int numTexCoordSets; // offset 0x1C, size 0x4
    struct RpMaterialList matList; // offset 0x20, size 0xC
    struct RpTriangle * triangles; // offset 0x2C, size 0x4
    struct RwRGBA * preLitLum; // offset 0x30, size 0x4
    struct RwTexCoords * texCoords[8]; // offset 0x34, size 0x20
    struct RpMeshHeader * mesh; // offset 0x54, size 0x4
    struct RwResEntry * repEntry; // offset 0x58, size 0x4
    struct RpMorphTarget * morphTarget; // offset 0x5C, size 0x4
};
// total size: 0x2C
struct RpClump {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLinkList atomicList; // offset 0x8, size 0x8
    struct RwLinkList lightList; // offset 0x10, size 0x8
    struct RwLinkList cameraList; // offset 0x18, size 0x8
    struct RwLLLink inWorldLink; // offset 0x20, size 0x8
    struct RpClump * (* callback)(struct RpClump *, void *); // offset 0x28, size 0x4
};
// total size: 0x14
struct RpInterpolator {
    // Members
    int flags; // offset 0x0, size 0x4
    signed short startMorphTarget; // offset 0x4, size 0x2
    signed short endMorphTarget; // offset 0x6, size 0x2
    float time; // offset 0x8, size 0x4
    float recipTime; // offset 0xC, size 0x4
    float position; // offset 0x10, size 0x4
};
// total size: 0x70
struct RpAtomic {
    // Members
    struct RwObjectHasFrame object; // offset 0x0, size 0x14
    struct RwResEntry * repEntry; // offset 0x14, size 0x4
    struct RpGeometry * geometry; // offset 0x18, size 0x4
    struct RwSphere boundingSphere; // offset 0x1C, size 0x10
    struct RwSphere worldBoundingSphere; // offset 0x2C, size 0x10
    struct RpClump * clump; // offset 0x3C, size 0x4
    struct RwLLLink inClumpLink; // offset 0x40, size 0x8
    struct RpAtomic * (* renderCallBack)(struct RpAtomic *); // offset 0x48, size 0x4
    struct RpInterpolator interpolator; // offset 0x4C, size 0x14
    unsigned short renderFrame; // offset 0x60, size 0x2
    unsigned short pad; // offset 0x62, size 0x2
    struct RwLinkList llWorldSectorsInAtomic; // offset 0x64, size 0x8
    struct RxPipeline * pipeline; // offset 0x6C, size 0x4
};
// total size: 0x8
struct xModelPipe {
    // Members
    unsigned int Flags; // offset 0x0, size 0x4
    unsigned char Layer; // offset 0x4, size 0x1
    unsigned char AlphaDiscard; // offset 0x5, size 0x1
    unsigned short PipePad; // offset 0x6, size 0x2
};
// total size: 0x0
struct xSurface {};
// total size: 0x18
struct xModelBucket {
    // Members
    struct RpAtomic * Data; // offset 0x0, size 0x4
    struct RpAtomic * OriginalData; // offset 0x4, size 0x4
    union { // inferred
        struct xModelInstance * List; // offset 0x8, size 0x4
        struct xModelBucket * * BackRef; // offset 0x8, size 0x4
    };
    int ClipFlags; // offset 0xC, size 0x4
    struct xModelPipe Pipe; // offset 0x10, size 0x8
};
// total size: 0x10
struct RwRGBAReal {
    // Members
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
// total size: 0x40
struct RpLight {
    // Members
    struct RwObjectHasFrame object; // offset 0x0, size 0x14
    float radius; // offset 0x14, size 0x4
    struct RwRGBAReal color; // offset 0x18, size 0x10
    float minusCosAngle; // offset 0x28, size 0x4
    struct RwLinkList WorldSectorsInLight; // offset 0x2C, size 0x8
    struct RwLLLink inWorld; // offset 0x34, size 0x8
    unsigned short lightFrame; // offset 0x3C, size 0x2
    unsigned short pad; // offset 0x3E, size 0x2
};
// total size: 0x60
struct xLightKitLight {
    // Members
    unsigned int type; // offset 0x0, size 0x4
    struct RwRGBAReal color; // offset 0x4, size 0x10
    float matrix[16]; // offset 0x14, size 0x40
    float radius; // offset 0x54, size 0x4
    float angle; // offset 0x58, size 0x4
    struct RpLight * platLight; // offset 0x5C, size 0x4
};
// total size: 0x14
struct xLightKit {
    // Members
    unsigned int tagID; // offset 0x0, size 0x4
    unsigned int groupID; // offset 0x4, size 0x4
    unsigned int lightCount; // offset 0x8, size 0x4
    struct xLightKitLight * lightList; // offset 0xC, size 0x4
    int blended; // offset 0x10, size 0x4
};
// total size: 0x40
struct RwMatrixTag {
    // Members
    struct RwV3d right; // offset 0x0, size 0xC
    unsigned int flags; // offset 0xC, size 0x4
    struct RwV3d up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    struct RwV3d at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
    struct RwV3d pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x18
struct xBox {
    // Members
    struct xVec3 upper; // offset 0x0, size 0xC
    struct xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0x4
struct /* @class$912isavegame_cpp */ {
    // Members
    struct xVec3 * verts; // offset 0x0, size 0x4
};
// total size: 0x0
struct xLight {};
// total size: 0xCC
struct xModelInstance {
    // Members
    struct xModelInstance * Next; // offset 0x0, size 0x4
    struct xModelInstance * Parent; // offset 0x4, size 0x4
    struct xModelPool * Pool; // offset 0x8, size 0x4
    struct xAnimPlay * Anim; // offset 0xC, size 0x4
    struct RpAtomic * Data; // offset 0x10, size 0x4
    struct xModelPipe Pipe; // offset 0x14, size 0x8
    unsigned char InFrustum; // offset 0x1C, size 0x1
    unsigned char TrueClip; // offset 0x1D, size 0x1
    signed char sortBias; // offset 0x1E, size 0x1
    unsigned char modelpad; // offset 0x1F, size 0x1
    float RedMultiplier; // offset 0x20, size 0x4
    float GreenMultiplier; // offset 0x24, size 0x4
    float BlueMultiplier; // offset 0x28, size 0x4
    float Alpha; // offset 0x2C, size 0x4
    float FadeStart; // offset 0x30, size 0x4
    float FadeEnd; // offset 0x34, size 0x4
    struct xSurface * Surf; // offset 0x38, size 0x4
    struct xModelBucket * * Bucket; // offset 0x3C, size 0x4
    struct xModelInstance * BucketNext; // offset 0x40, size 0x4
    struct xLightKit * LightKit; // offset 0x44, size 0x4
    struct xLightKit * LightKitBlend; // offset 0x48, size 0x4
    float BlendDuration; // offset 0x4C, size 0x4
    float BlendTimeRemaining; // offset 0x50, size 0x4
    void * Object; // offset 0x54, size 0x4
    unsigned short Flags; // offset 0x58, size 0x2
    unsigned char BoneCount; // offset 0x5A, size 0x1
    unsigned char BoneIndex; // offset 0x5B, size 0x1
    unsigned char * BoneRemap; // offset 0x5C, size 0x4
    struct RwMatrixTag * Mat; // offset 0x60, size 0x4
    struct xVec3 Scale; // offset 0x64, size 0xC
    struct xBox animBound; // offset 0x70, size 0x18
    struct xBox combinedAnimBound; // offset 0x88, size 0x18
    unsigned int modelID; // offset 0xA0, size 0x4
    unsigned int shadowID; // offset 0xA4, size 0x4
    // total size: 0x4
    struct /* @class$912isavegame_cpp */ {
        // Members
        struct xVec3 * verts; // offset 0x0, size 0x4
    } anim_coll; // offset 0xA8, size 0x4
    struct xLight * lights[4]; // offset 0xAC, size 0x10
    float lightsDistance[4]; // offset 0xBC, size 0x10
};
// total size: 0x10
struct xClumpCollBSPBranchNode {
    // Members
    unsigned int leftInfo; // offset 0x0, size 0x4
    unsigned int rightInfo; // offset 0x4, size 0x4
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
// total size: 0x4
struct xClumpCollBSPVertInfo {
    // Members
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
};
union /* @class$867isavegame_cpp */ {
    struct xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
    unsigned int rawIdx; // offset 0x0, size 0x4
    struct RwV3d * p; // offset 0x0, size 0x4
};
// total size: 0x8
struct xClumpCollBSPTriangle {
    // Members
    union /* @class$867isavegame_cpp */ {
        struct xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
        unsigned int rawIdx; // offset 0x0, size 0x4
        struct RwV3d * p; // offset 0x0, size 0x4
    } v; // offset 0x0, size 0x4
    unsigned char flags; // offset 0x4, size 0x1
    unsigned char detailed_info_cache_index; // offset 0x5, size 0x1
    unsigned short matIndex; // offset 0x6, size 0x2
};
// total size: 0x10
struct xClumpCollBSPTree {
    // Members
    int numBranchNodes; // offset 0x0, size 0x4
    struct xClumpCollBSPBranchNode * branchNodes; // offset 0x4, size 0x4
    int numTriangles; // offset 0x8, size 0x4
    struct xClumpCollBSPTriangle * triangles; // offset 0xC, size 0x4
};
// total size: 0x8
struct xJSPNodeInfo {
    // Members
    int originalMatIndex; // offset 0x0, size 0x4
    unsigned short nodeFlags; // offset 0x4, size 0x2
    signed short sortOrder; // offset 0x6, size 0x2
};
// total size: 0x10
struct xJSPNodeTreeBranch {
    // Members
    unsigned short leftNode; // offset 0x0, size 0x2
    unsigned short rightNode; // offset 0x2, size 0x2
    unsigned char leftType; // offset 0x4, size 0x1
    unsigned char rightType; // offset 0x5, size 0x1
    unsigned short coord; // offset 0x6, size 0x2
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
// total size: 0x20
struct xJSPNodeTreeLeaf {
    // Members
    int nodeIndex; // offset 0x0, size 0x4
    int leafCount; // offset 0x4, size 0x4
    struct RwBBox box; // offset 0x8, size 0x18
};
// total size: 0x10
struct xJSPNodeTree {
    // Members
    int numBranchNodes; // offset 0x0, size 0x4
    struct xJSPNodeTreeBranch * branchNodes; // offset 0x4, size 0x4
    int numLeafNodes; // offset 0x8, size 0x4
    struct xJSPNodeTreeLeaf * leafNodes; // offset 0xC, size 0x4
};
// total size: 0x18
struct RpTie {
    // Members
    struct RwLLLink lAtomicInWorldSector; // offset 0x0, size 0x8
    struct RpAtomic * apAtom; // offset 0x8, size 0x4
    struct RwLLLink lWorldSectorInAtomic; // offset 0xC, size 0x8
    struct RpWorldSector * worldSector; // offset 0x14, size 0x4
};
// total size: 0xC
struct xJSPMiniLightTie {
    // Members
    struct RwLLLink lightInWorldSector; // offset 0x0, size 0x8
    struct RpLight * light; // offset 0x8, size 0x4
};
// total size: 0x108
struct xJSPNodeLight {
    // Members
    struct RpAtomic * atomic; // offset 0x0, size 0x4
    int lightCount; // offset 0x4, size 0x4
    struct RpTie dummyTie; // offset 0x8, size 0x18
    struct RpWorldSector dummySector; // offset 0x20, size 0x88
    struct xJSPMiniLightTie dummyLightTie[8]; // offset 0xA8, size 0x60
};
// total size: 0x2C
struct xJSPHeader {
    // Members
    char idtag[4]; // offset 0x0, size 0x4
    unsigned int version; // offset 0x4, size 0x4
    unsigned int jspNodeCount; // offset 0x8, size 0x4
    struct RpClump * clump; // offset 0xC, size 0x4
    struct xClumpCollBSPTree * colltree; // offset 0x10, size 0x4
    struct xJSPNodeInfo * jspNodeList; // offset 0x14, size 0x4
    unsigned int stripVecCount; // offset 0x18, size 0x4
    struct RwV3d * stripVecList; // offset 0x1C, size 0x4
    unsigned short vertDataFlags; // offset 0x20, size 0x2
    unsigned short vertDataStride; // offset 0x22, size 0x2
    struct xJSPNodeTree * nodetree; // offset 0x24, size 0x4
    struct xJSPNodeLight * nodelight; // offset 0x28, size 0x4
};
// total size: 0x10
struct iEnvMatOrder {
    // Members
    unsigned short jspIndex; // offset 0x0, size 0x2
    unsigned short nodeIndex; // offset 0x2, size 0x2
    int matGroup; // offset 0x4, size 0x4
    struct RpAtomic * atomic; // offset 0x8, size 0x4
    struct xJSPNodeInfo * nodeInfo; // offset 0xC, size 0x4
};
// total size: 0xA4
struct RwFrame {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLLLink inDirtyListLink; // offset 0x8, size 0x8
    struct RwMatrixTag modelling; // offset 0x10, size 0x40
    struct RwMatrixTag ltm; // offset 0x50, size 0x40
    struct RwLinkList objectList; // offset 0x90, size 0x8
    struct RwFrame * child; // offset 0x98, size 0x4
    struct RwFrame * next; // offset 0x9C, size 0x4
    struct RwFrame * root; // offset 0xA0, size 0x4
};
// total size: 0x44
struct iEnv {
    // Members
    struct RpWorld * world; // offset 0x0, size 0x4
    struct RpWorld * collision; // offset 0x4, size 0x4
    struct RpWorld * fx; // offset 0x8, size 0x4
    struct RpWorld * camera; // offset 0xC, size 0x4
    int jsp_count; // offset 0x10, size 0x4
    unsigned int * jsp_aid; // offset 0x14, size 0x4
    struct xJSPHeader * * jsp_list; // offset 0x18, size 0x4
    struct xBox * jsp_bound; // offset 0x1C, size 0x4
    int * jsp_visibilityCount; // offset 0x20, size 0x4
    int jspMatOrderCount; // offset 0x24, size 0x4
    struct iEnvMatOrder * jspMatOrderList; // offset 0x28, size 0x4
    struct RpLight * light[2]; // offset 0x2C, size 0x8
    struct RwFrame * light_frame[2]; // offset 0x34, size 0x8
    int memlvl; // offset 0x3C, size 0x4
    unsigned short numOpaque; // offset 0x40, size 0x2
    unsigned short numTransparent; // offset 0x42, size 0x2
};
// total size: 0x4C
struct xEnv {
    // Members
    struct iEnv * geom; // offset 0x0, size 0x4
    struct iEnv ienv; // offset 0x4, size 0x44
    struct xLightKit * lightKit; // offset 0x48, size 0x4
};
// total size: 0x74
struct xScene {
    // Members
    unsigned int sceneID; // offset 0x0, size 0x4
    unsigned short flags; // offset 0x4, size 0x2
    unsigned short numTrigs; // offset 0x6, size 0x2
    unsigned short numSpecialTriggers; // offset 0x8, size 0x2
    unsigned short numStats; // offset 0xA, size 0x2
    unsigned short numDyns; // offset 0xC, size 0x2
    unsigned short numNpcs; // offset 0xE, size 0x2
    unsigned short numActEnts; // offset 0x10, size 0x2
    float gravity; // offset 0x14, size 0x4
    float drag; // offset 0x18, size 0x4
    float friction; // offset 0x1C, size 0x4
    unsigned short numEntsAllocd; // offset 0x20, size 0x2
    unsigned short numTrigsAllocd; // offset 0x22, size 0x2
    unsigned short numSpecialTriggersAllocd; // offset 0x24, size 0x2
    unsigned short numStatsAllocd; // offset 0x26, size 0x2
    unsigned short numDynsAllocd; // offset 0x28, size 0x2
    unsigned short numNpcsAllocd; // offset 0x2A, size 0x2
    struct xEnt * * trigs; // offset 0x2C, size 0x4
    struct xEnt * * specialTriggers; // offset 0x30, size 0x4
    struct xEnt * * stats; // offset 0x34, size 0x4
    struct xEnt * * dyns; // offset 0x38, size 0x4
    struct xEnt * * npcs; // offset 0x3C, size 0x4
    struct xEnt * * actEnts; // offset 0x40, size 0x4
    struct xEnv * env; // offset 0x44, size 0x4
    struct xMemPool mempool; // offset 0x48, size 0x20
    struct xBase * (* resolvID)(unsigned int); // offset 0x68, size 0x4
    char * (* base2Name)(struct xBase *); // offset 0x6C, size 0x4
    char * (* id2Name)(unsigned int); // offset 0x70, size 0x4
};
// total size: 0x30
struct xMat3x3 {
    // Members
    struct xVec3 right; // offset 0x0, size 0xC
    int flags; // offset 0xC, size 0x4
    struct xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    struct xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
};
// total size: 0x40
struct xMat4x3 : public xMat3x3 {
    // Members
    struct xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x10
struct xRot {
    // Members
    struct xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
};
// total size: 0xF0
struct xEntFrame {
    // Members
    struct xMat4x3 mat; // offset 0x0, size 0x40
    struct xMat4x3 oldmat; // offset 0x40, size 0x40
    struct xVec3 oldvel; // offset 0x80, size 0xC
    struct xRot oldrot; // offset 0x8C, size 0x10
    struct xRot drot; // offset 0x9C, size 0x10
    struct xRot rot; // offset 0xAC, size 0x10
    struct xVec3 dvel; // offset 0xBC, size 0xC
    struct xVec3 vel; // offset 0xC8, size 0xC
    unsigned int mode; // offset 0xD4, size 0x4
    struct xVec3 dpos; // offset 0xD8, size 0xC
};
// total size: 0xC
struct /* @class$1076isavegame_cpp */ {
    // Members
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
};
// total size: 0xC
struct tri_data {
    // Members
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
};
// total size: 0x54
struct xCollis {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int oid; // offset 0x4, size 0x4
    void * optr; // offset 0x8, size 0x4
    struct xModelInstance * mptr; // offset 0xC, size 0x4
    float dist; // offset 0x10, size 0x4
    float test_dist; // offset 0x14, size 0x4
    struct xVec3 norm; // offset 0x18, size 0xC
    struct xVec3 tohit; // offset 0x24, size 0xC
    struct xVec3 depen; // offset 0x30, size 0xC
    struct xVec3 hdng; // offset 0x3C, size 0xC
    union { // inferred
        // total size: 0xC
        struct /* @class$1076isavegame_cpp */ {
            // Members
            float t; // offset 0x0, size 0x4
            float u; // offset 0x4, size 0x4
            float v; // offset 0x8, size 0x4
        } tuv; // offset 0x48, size 0xC
        struct tri_data tri; // offset 0x48, size 0xC
    };
};
// total size: 0x5FC
struct xEntCollis {
    // Members
    unsigned char chk; // offset 0x0, size 0x1
    unsigned char pen; // offset 0x1, size 0x1
    unsigned char env_sidx; // offset 0x2, size 0x1
    unsigned char env_eidx; // offset 0x3, size 0x1
    unsigned char npc_sidx; // offset 0x4, size 0x1
    unsigned char npc_eidx; // offset 0x5, size 0x1
    unsigned char dyn_sidx; // offset 0x6, size 0x1
    unsigned char dyn_eidx; // offset 0x7, size 0x1
    unsigned char stat_sidx; // offset 0x8, size 0x1
    unsigned char stat_eidx; // offset 0x9, size 0x1
    unsigned char idx; // offset 0xA, size 0x1
    struct xCollis colls[18]; // offset 0xC, size 0x5E8
    void (* post)(struct xEnt *, struct xScene *, float, struct xEntCollis *); // offset 0x5F4, size 0x4
    unsigned int (* depenq)(struct xEnt *, struct xEnt *, struct xScene *, float, struct xCollis *); // offset 0x5F8, size 0x4
};
// total size: 0x0
struct xGrid {};
// total size: 0x18
struct xGridBound {
    // Members
    void * data; // offset 0x0, size 0x4
    unsigned short gx; // offset 0x4, size 0x2
    unsigned short gz; // offset 0x6, size 0x2
    unsigned char oversize; // offset 0x8, size 0x1
    unsigned char deleted; // offset 0x9, size 0x1
    unsigned char gpad; // offset 0xA, size 0x1
    unsigned char pad; // offset 0xB, size 0x1
    struct xGrid * grid; // offset 0xC, size 0x4
    struct xGridBound * * head; // offset 0x10, size 0x4
    struct xGridBound * next; // offset 0x14, size 0x4
};
// total size: 0x20
struct xQCData {
    // Members
    signed char xmin; // offset 0x0, size 0x1
    signed char ymin; // offset 0x1, size 0x1
    signed char zmin; // offset 0x2, size 0x1
    signed char zmin_dup; // offset 0x3, size 0x1
    signed char xmax; // offset 0x4, size 0x1
    signed char ymax; // offset 0x5, size 0x1
    signed char zmax; // offset 0x6, size 0x1
    signed char zmax_dup; // offset 0x7, size 0x1
    struct xVec3 min; // offset 0x8, size 0xC
    struct xVec3 max; // offset 0x14, size 0xC
};
// total size: 0x10
struct xSphere {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// total size: 0x24
struct xBBox {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    struct xBox box; // offset 0xC, size 0x18
};
// total size: 0x14
struct xCylinder {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
// total size: 0x4C
struct xBound {
    // Members
    struct xQCData qcd; // offset 0x0, size 0x20
    unsigned char type; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    union { // inferred
        struct xSphere sph; // offset 0x24, size 0x10
        struct xBBox box; // offset 0x24, size 0x24
        struct xCylinder cyl; // offset 0x24, size 0x14
    };
    struct xMat4x3 * mat; // offset 0x48, size 0x4
};
// total size: 0x0
struct xFFX {};
// total size: 0x50
struct xEntDriveInfo {
    // Members
    struct xMat4x3 driveMat; // offset 0x0, size 0x40
    struct xVec3 centerOffset; // offset 0x40, size 0xC
    unsigned int flags; // offset 0x4C, size 0x4
};
// total size: 0x30
struct xShadowSimplePoly {
    // Members
    struct xVec3 vert[3]; // offset 0x0, size 0x24
    struct xVec3 norm; // offset 0x24, size 0xC
};
// total size: 0xA4
struct xShadowSimpleCache {
    // Members
    unsigned short flags; // offset 0x0, size 0x2
    unsigned char alpha; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
    unsigned int collPriority; // offset 0x4, size 0x4
    struct xVec3 pos; // offset 0x8, size 0xC
    struct xVec3 at; // offset 0x14, size 0xC
    float tol_movement; // offset 0x20, size 0x4
    float radiusOptional; // offset 0x24, size 0x4
    struct xEnt * castOnEnt; // offset 0x28, size 0x4
    struct xShadowSimplePoly poly; // offset 0x2C, size 0x30
    float envHeight; // offset 0x5C, size 0x4
    float shadowHeight; // offset 0x60, size 0x4
    union { // inferred
        unsigned int raster; // offset 0x64, size 0x4
        struct RwRaster * ptr_raster; // offset 0x64, size 0x4
    };
    float dydx; // offset 0x68, size 0x4
    float dydz; // offset 0x6C, size 0x4
    struct xVec3 corner[4]; // offset 0x70, size 0x30
    void * collSkipsItem; // offset 0xA0, size 0x4
};
// total size: 0x2C
struct xEntShadow {
    // Members
    struct xVec3 pos; // offset 0x0, size 0xC
    struct xVec3 vec; // offset 0xC, size 0xC
    struct RpAtomic * shadowModel; // offset 0x18, size 0x4
    float dst_cast; // offset 0x1C, size 0x4
    float radius[2]; // offset 0x20, size 0x8
    int flg_castOnOneDFF : 1; // offset 0x28, size 0x4
    int flg_castOnAllDFF : 1; // offset 0x28, size 0x4
    int flg_disableEnvCast : 1; // offset 0x28, size 0x4
    int flg_shadowUnused : 29; // offset 0x28, size 0x4
};
// total size: 0x0
struct anim_coll_data {};
// total size: 0xD8
struct xEnt : public xBase {
    // Members
    struct xEntAsset * asset; // offset 0x10, size 0x4
    unsigned short idx; // offset 0x14, size 0x2
    unsigned char flags; // offset 0x16, size 0x1
    unsigned char miscflags; // offset 0x17, size 0x1
    unsigned char subType; // offset 0x18, size 0x1
    unsigned char pflags; // offset 0x19, size 0x1
    unsigned short moreFlags; // offset 0x1A, size 0x2
    unsigned char isCulled : 2; // offset 0x1C, size 0x1
    unsigned char collisionEventReceived : 2; // offset 0x1C, size 0x1
    unsigned char driving_count : 7; // offset 0x1D, size 0x1
    unsigned char driving_reset : 1; // offset 0x1D, size 0x1
    unsigned char num_ffx; // offset 0x1E, size 0x1
    unsigned char collType; // offset 0x1F, size 0x1
    unsigned char collLev; // offset 0x20, size 0x1
    unsigned char chkby; // offset 0x21, size 0x1
    unsigned char penby; // offset 0x22, size 0x1
    void (* visUpdate)(struct xEnt *); // offset 0x24, size 0x4
    struct xModelInstance * model; // offset 0x28, size 0x4
    struct xModelInstance * collModel; // offset 0x2C, size 0x4
    struct xModelInstance * camcollModel; // offset 0x30, size 0x4
    void (* update)(struct xEnt *, struct xScene *, float); // offset 0x34, size 0x4
    void (* endUpdate)(struct xEnt *, struct xScene *, float); // offset 0x38, size 0x4
    void (* bupdate)(struct xEnt *, struct xVec3 *); // offset 0x3C, size 0x4
    void (* move)(struct xEnt *, struct xScene *, float, struct xEntFrame *); // offset 0x40, size 0x4
    void (* render)(struct xEnt *); // offset 0x44, size 0x4
    struct xEntFrame * frame; // offset 0x48, size 0x4
    struct xEntCollis * collis; // offset 0x4C, size 0x4
    struct xGridBound gridb; // offset 0x50, size 0x18
    struct xBound bound; // offset 0x68, size 0x4C
    void (* transl)(struct xEnt *, struct xVec3 *, struct xMat4x3 *); // offset 0xB4, size 0x4
    struct xFFX * ffx; // offset 0xB8, size 0x4
    struct xEnt * driver; // offset 0xBC, size 0x4
    struct xEnt * driven; // offset 0xC0, size 0x4
    struct xEntDriveInfo * driveInfo; // offset 0xC4, size 0x4
    struct xShadowSimpleCache * simpShadow; // offset 0xC8, size 0x4
    struct xEntShadow * entShadow; // offset 0xCC, size 0x4
    struct anim_coll_data * anim_coll; // offset 0xD0, size 0x4
    void * user_data; // offset 0xD4, size 0x4
};
// total size: 0x14
class zPlayerContainer {
    // Members
    struct zPlayer * playerArray[4]; // offset 0x0, size 0x10
    int numPlayers; // offset 0x10, size 0x4
};
// total size: 0x18
struct xPortalAsset : public xBaseAsset {
    // Members
    unsigned int assetCameraID; // offset 0x8, size 0x4
    unsigned int assetMarkerID; // offset 0xC, size 0x4
    float ang; // offset 0x10, size 0x4
    unsigned int sceneID; // offset 0x14, size 0x4
};
// total size: 0x14
struct _zPortal : public xBase {
    // Members
    struct xPortalAsset * passet; // offset 0x10, size 0x4
};
// total size: 0x5C
struct xEnvAsset : public xBaseAsset {
    // Members
    unsigned int bspAssetID; // offset 0x8, size 0x4
    unsigned int startCameraAssetID; // offset 0xC, size 0x4
    unsigned int climateFlags; // offset 0x10, size 0x4
    float climateStrengthMin; // offset 0x14, size 0x4
    float climateStrengthMax; // offset 0x18, size 0x4
    unsigned int bspLightKit; // offset 0x1C, size 0x4
    unsigned int objectLightKit; // offset 0x20, size 0x4
    unsigned int flags; // offset 0x24, size 0x4
    unsigned int bspCollisionAssetID; // offset 0x28, size 0x4
    unsigned int bspFXAssetID; // offset 0x2C, size 0x4
    unsigned int bspCameraAssetID; // offset 0x30, size 0x4
    unsigned int bspMapperID; // offset 0x34, size 0x4
    unsigned int bspMapperCollisionID; // offset 0x38, size 0x4
    unsigned int bspMapperFXID; // offset 0x3C, size 0x4
    float loldHeight; // offset 0x40, size 0x4
    struct xVec3 minBounds; // offset 0x44, size 0xC
    struct xVec3 maxBounds; // offset 0x50, size 0xC
};
// total size: 0x14
struct _zEnv : public xBase {
    // Members
    struct xEnvAsset * easset; // offset 0x10, size 0x4
};
// total size: 0x10
struct xDynAsset : public xBaseAsset {
    // Members
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
// total size: 0x68
struct zSceneParameters : public xDynAsset {
    // Members
    unsigned int idle03ExtraCount; // offset 0x10, size 0x4
    struct xAnimFile * * idle03Extras; // offset 0x14, size 0x4
    unsigned int idle04ExtraCount; // offset 0x18, size 0x4
    struct xAnimFile * * idle04Extras; // offset 0x1C, size 0x4
    unsigned char bombCount; // offset 0x20, size 0x1
    unsigned char extraIdleDelay; // offset 0x21, size 0x1
    unsigned char hdrGlow; // offset 0x22, size 0x1
    unsigned char hdrDarken; // offset 0x23, size 0x1
    unsigned int uDefaultMusicHash; // offset 0x24, size 0x4
    unsigned int flags; // offset 0x28, size 0x4
    float waterTileWidth; // offset 0x2C, size 0x4
    float lodFadeDistance; // offset 0x30, size 0x4
    float waterTileOffsetX; // offset 0x34, size 0x4
    float waterTileOffsetZ; // offset 0x38, size 0x4
    unsigned char numCheckpoints; // offset 0x3C, size 0x1
    unsigned char pad1[3]; // offset 0x3D, size 0x3
    float grassDistFade; // offset 0x40, size 0x4
    float grassDistCull; // offset 0x44, size 0x4
    unsigned int piggybank; // offset 0x48, size 0x4
    unsigned int maxAnimationMem; // offset 0x4C, size 0x4
    unsigned int maxArtMem; // offset 0x50, size 0x4
    unsigned int maxDesignMem; // offset 0x54, size 0x4
    unsigned int maxProgrammingMem; // offset 0x58, size 0x4
    unsigned int pad[3]; // offset 0x5C, size 0xC
};
// total size: 0x6AC
struct zScene : public xScene {
    // Members
    struct _zPortal * pendingPortal; // offset 0x74, size 0x4
    int num_base; // offset 0x78, size 0x4
    struct xBase * * base; // offset 0x7C, size 0x4
    unsigned int num_update_base; // offset 0x80, size 0x4
    struct xBase * * update_base; // offset 0x84, size 0x4
    int baseCount[195]; // offset 0x88, size 0x30C
    struct xBase * baseList[195]; // offset 0x394, size 0x30C
    struct _zEnv * zen; // offset 0x6A0, size 0x4
    struct zSceneParameters * parameters; // offset 0x6A4, size 0x4
    unsigned char enableDrawing; // offset 0x6A8, size 0x1
};
enum sceDemoEndReason {
    SCE_DEMO_ENDREASON_ATTRACT_INTERRUPTED = 0,
    SCE_DEMO_ENDREASON_ATTRACT_COMPLETE = 1,
    SCE_DEMO_ENDREASON_PLAYABLE_INACTIVITY_TIMEOUT = 2,
    SCE_DEMO_ENDREASON_PLAYABLE_GAMEPLAY_TIMEOUT = 3,
    SCE_DEMO_ENDREASON_PLAYABLE_COMPLETE = 4,
    SCE_DEMO_ENDREASON_PLAYABLE_QUIT = 5,
};
// total size: 0x38
struct PS2DemoGlobals {
    // Members
    unsigned short language; // offset 0x0, size 0x2
    unsigned short aspect; // offset 0x2, size 0x2
    unsigned short play_mode; // offset 0x4, size 0x2
    unsigned short inactive_timeout; // offset 0x6, size 0x2
    unsigned short gameplay_timeout; // offset 0x8, size 0x2
    enum sceDemoEndReason exit_code; // offset 0xC, size 0x4
    unsigned int FMV_playing : 1; // offset 0x10, size 0x4
    unsigned int more_padding : 31; // offset 0x10, size 0x4
    float bail_timer; // offset 0x14, size 0x4
    int inactive_detect; // offset 0x18, size 0x4
    float inactive_timer; // offset 0x1C, size 0x4
    float gameplay_timer; // offset 0x20, size 0x4
    char subdir[16]; // offset 0x24, size 0x10
    unsigned short quit; // offset 0x34, size 0x2
    unsigned short vmode; // offset 0x36, size 0x2
};
// total size: 0x0
class xDebugLink {};
// total size: 0x6C0
struct xGlobals {
    // Members
    struct xCamGroup * cam; // offset 0x0, size 0x4
    struct xCamScreen * screen; // offset 0x4, size 0x4
    struct xVec4 frustplane[12]; // offset 0x8, size 0xC0
    int profile; // offset 0xC8, size 0x4
    char profFunc[6][128]; // offset 0xCC, size 0x300
    struct xUpdateCullMgr * updateMgr; // offset 0x3CC, size 0x4
    int sceneFirst; // offset 0x3D0, size 0x4
    char sceneStart[32]; // offset 0x3D4, size 0x20
    struct RpWorld * currWorld; // offset 0x3F4, size 0x4
    struct iFogParams fog; // offset 0x3F8, size 0x1C
    struct iFogParams fogA; // offset 0x414, size 0x1C
    struct iFogParams fogB; // offset 0x430, size 0x1C
    long long fog_t0; // offset 0x450, size 0x8
    long long fog_t1; // offset 0x458, size 0x8
    int option_vibration_p1; // offset 0x460, size 0x4
    int option_vibration_p2; // offset 0x464, size 0x4
    int option_vibration_p1_menu; // offset 0x468, size 0x4
    int option_vibration_p2_menu; // offset 0x46C, size 0x4
    int option_subtitles; // offset 0x470, size 0x4
    unsigned int slowdown; // offset 0x474, size 0x4
    float update_dt; // offset 0x478, size 0x4
    unsigned int dumpCutscene; // offset 0x47C, size 0x4
    unsigned int PlaybackMode; // offset 0x480, size 0x4
    struct PlaybackBuffers PlaybackFrames[4]; // offset 0x484, size 0x30
    char PlaybackFile[128]; // offset 0x4B4, size 0x80
    unsigned int PlaybackStartFrame; // offset 0x534, size 0x4
    unsigned int PlaybackEndFrame; // offset 0x538, size 0x4
    unsigned int PlaybackResolution; // offset 0x53C, size 0x4
    int MemTrackingLvl; // offset 0x540, size 0x4
    char MemTrackLogFileName[128]; // offset 0x544, size 0x80
    signed short ForceCutscene; // offset 0x5C4, size 0x2
    int useHIPHOP; // offset 0x5C8, size 0x4
    unsigned char NoMusic; // offset 0x5CC, size 0x1
    unsigned char NoCutscenes; // offset 0x5CD, size 0x1
    unsigned char NoPadCheck; // offset 0x5CE, size 0x1
    unsigned char firstStartPressed; // offset 0x5CF, size 0x1
    unsigned char fromLauncher; // offset 0x5D0, size 0x1
    unsigned char skipAssertWithController; // offset 0x5D1, size 0x1
    unsigned char enableHelperAI; // offset 0x5D2, size 0x1
    unsigned char enableHelperAIAttack; // offset 0x5D3, size 0x1
    unsigned char enableDebugControls; // offset 0x5D4, size 0x1
    unsigned char showReleaseMemInfo; // offset 0x5D5, size 0x1
    unsigned char PlaybackFlashDemo; // offset 0x5D6, size 0x1
    unsigned char FlashWIP; // offset 0x5D7, size 0x1
    unsigned char inLoadingScreen; // offset 0x5D8, size 0x1
    unsigned char LoadingScene; // offset 0x5D9, size 0x1
    unsigned char InitializingLoadingScreen; // offset 0x5DA, size 0x1
    unsigned char ForceMono; // offset 0x5DB, size 0x1
    unsigned char UnlimitedNukes; // offset 0x5DC, size 0x1
    unsigned int minVSyncCnt; // offset 0x5E0, size 0x4
    unsigned char dontShowPadMessageDuringLoadingOrCutScene; // offset 0x5E4, size 0x1
    unsigned char autoSaveFeature; // offset 0x5E5, size 0x1
    unsigned char skipAsserts; // offset 0x5E6, size 0x1
    unsigned char beforeFirstFrame; // offset 0x5E7, size 0x1
    int asyncLoadingScreen; // offset 0x5E8, size 0x4
    int asyncLoadingFlags; // offset 0x5EC, size 0x4
    char fromLauncherUser[32]; // offset 0x5F0, size 0x20
    class zPlayerContainer players; // offset 0x610, size 0x14
    struct zScene * sceneCur; // offset 0x624, size 0x4
    struct zScene * scenePreload; // offset 0x628, size 0x4
    struct PS2DemoGlobals * PS2demo; // offset 0x62C, size 0x4
    char watermark[127]; // offset 0x630, size 0x7F
    unsigned char watermarkAlpha; // offset 0x6AF, size 0x1
    float watermarkSize; // offset 0x6B0, size 0x4
    class xDebugLink * debugLink; // offset 0x6B4, size 0x4
    unsigned char enableRealTimeUpdate; // offset 0x6B8, size 0x1
    unsigned char showMenuOnBoot; // offset 0x6B9, size 0x1
    unsigned char enableHUD; // offset 0x6BA, size 0x1
    unsigned char skipAnimViewer; // offset 0x6BB, size 0x1
};
// total size: 0x1C
struct zGlobalSettings {
    // Members
    unsigned short AnalogMin; // offset 0x0, size 0x2
    unsigned short AnalogMax; // offset 0x2, size 0x2
    unsigned int TakeDamage; // offset 0x4, size 0x4
    float DamageInvincibility; // offset 0x8, size 0x4
    float Gravity; // offset 0xC, size 0x4
    unsigned char AttractModeDuringGameplay; // offset 0x10, size 0x1
    unsigned int AccelScripts; // offset 0x14, size 0x4
    float CameraFOV; // offset 0x18, size 0x4
};
enum xSndEffect {
    xSndEffect_NONE = 0,
    xSndEffect_CAVE = 1,
    xSndEffect_MAX_TYPES = 2,
};
// total size: 0xC
struct zCheckPoint {
    // Members
    unsigned int initCamID; // offset 0x0, size 0x4
    unsigned char * jsp_active; // offset 0x4, size 0x4
    enum xSndEffect currentEffect; // offset 0x8, size 0x4
};
// total size: 0x0
struct zAssetPickupTable {};
// total size: 0x0
struct zCutsceneMgr {};
enum zGlobalDemoType {
    zDT_NONE = 0,
    zDT_E3 = 1,
    zDT_PUBLICITY = 2,
    zDT_OPM = 3,
    zDT_LAST = 4,
};
enum eBrainType {
    eBrainType_Unknown = 0,
    eBrainType_NPC_Thief = 1,
    eBrainType_NPC_Chef = 2,
    eBrainType_NPC_Alarmer = 3,
    eBrainType_NPC_Waiter = 4,
    eBrainType_CMG_StirringPlayer = 5,
    eBrainType_CMG_StirringRemy = 6,
    eBrainType_CMG_LeftArm = 7,
    eBrainType_CMG_RightArm = 8,
    eBrainType_CMG_PourNSwirl = 9,
    eBrainType_NPC_SpringBoard = 10,
    eBrainType_NPC_ContextSensitive = 11,
    eBrainType_NPC_AnimViewer = 12,
    eBrainType_NPC_SwarmOwl = 13,
    eBrainType_NPC_Simpleton = 14,
    eBrainType_Player_Remy = 15,
    eBrainType_Player_HumanVehicle = 16,
    eBrainType_Player_Ratball = 17,
    eBrainType_Player_MG1 = 18,
    eBrainType_Player_MG2_RatOnball = 19,
    eBrainType_Player_MG3_Pufferoids = 20,
    eBrainType_Player_MG4_GrapeStomper = 21,
    eBrainType_Player_MG5_CongaLine = 22,
    eBrainType_Player_MG6_AvoidTheStuff = 23,
};
// total size: 0x0
class zEconomics {};
// total size: 0x4
class zLightweightSystemBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
enum ezMiniGameTypes {
    MG_GAMETYPE_UNKNOWN = 0,
    MG_GAMETYPE_TYPE1 = 1,
    MG_GAMETYPE_DEFENDTHEBASE = 2,
    MG_GAMETYPE_RATONBALL = 3,
    MG_GAMETYPE_PUFFEROIDS = 4,
    MG_GAMETYPE_GRAPESTOMPER = 5,
    MG_GAMETYPE_CONGALINE = 6,
    MG_GAMETYPE_AVOIDTHESTUFF = 7,
    MG_GAMETYPE_COUNT = 8,
};
// total size: 0x14
struct zMiniGameAsset : public xDynAsset {
    // Members
    unsigned int dispatcherID; // offset 0x10, size 0x4
};
enum eMiniGameState {
    GAMESTATE_GAME_START = 0,
    GAMESTATE_STAGE_START = 1,
    GAMESTATE_GAME_PLAY = 2,
    GAMESTATE_STAGE_END = 3,
    GAMESTATE_GAME_END = 4,
};
// total size: 0x2C
class zMiniGameBase : public xBase {
    // Static members
    static class zMiniGameBase * currentMiniGame; // size: 0x4

    // Members
protected:
    enum ezMiniGameTypes gameType; // offset 0x10, size 0x4
    struct zMiniGameAsset * asset; // offset 0x14, size 0x4
    int playerCount; // offset 0x18, size 0x4
    unsigned char gameDone; // offset 0x1C, size 0x1
    struct xBase * dispatcher; // offset 0x20, size 0x4
    enum eMiniGameState gameState; // offset 0x24, size 0x4
public:
    void * __vptr$; // offset 0x28, size 0x4
};
// total size: 0xC
class zMiniGameManager : public zLightweightSystemBase {
    // Members
    class zMiniGameBase * currentGame; // offset 0x4, size 0x4
    int userSetPlayerCount; // offset 0x8, size 0x4
};
// total size: 0x798
struct zGlobals : public xGlobals {
    // Members
    struct zGlobalSettings settings; // offset 0x6C0, size 0x1C
    struct zCheckPoint checkPoint; // offset 0x6DC, size 0xC
    unsigned int playerTag[9]; // offset 0x6E8, size 0x24
    unsigned char playerLoaded; // offset 0x70C, size 0x1
    unsigned char invertJoystick; // offset 0x70D, size 0x1
    float timeMultiplier; // offset 0x710, size 0x4
    float timeMultiplierTarget; // offset 0x714, size 0x4
    float XPMultiplier; // offset 0x718, size 0x4
    struct zAssetPickupTable * pickupTable; // offset 0x71C, size 0x4
    struct zCutsceneMgr * cmgr; // offset 0x720, size 0x4
    char startDebugMode[32]; // offset 0x724, size 0x20
    unsigned int noMovies; // offset 0x744, size 0x4
    unsigned int boundUpdateTime; // offset 0x748, size 0x4
    unsigned char draw_player_after_fx; // offset 0x74C, size 0x1
    unsigned char bAllowMasterCheats; // offset 0x74D, size 0x1
    unsigned char enableFriendlyFly; // offset 0x74E, size 0x1
    unsigned char stopCurrentConversation; // offset 0x74F, size 0x1
    enum zGlobalDemoType demoType; // offset 0x750, size 0x4
    struct zCutsceneMgr * DisabledCutsceneDoneMgr; // offset 0x754, size 0x4
    struct xVec3 cameraPlayersMidpoint; // offset 0x758, size 0xC
    struct xVec3 cameraLookAt; // offset 0x764, size 0xC
    int cameraAIFocus; // offset 0x770, size 0x4
    enum eBrainType firstPlayerBrainID; // offset 0x774, size 0x4
    class zEconomics * economics; // offset 0x778, size 0x4
    class zMiniGameManager * mgManager; // offset 0x77C, size 0x4
    unsigned char fmvJustFinished; // offset 0x780, size 0x1
    unsigned int initialRemyPowerUp[5]; // offset 0x784, size 0x14
};
struct zGlobals globals; // size: 0x798, address: 0x80D00728
// Range: 0x80124AB8 -> 0x80124B34
int iSGAutoSave_Monitor(struct st_ISGSESSION * isg /* r30 */, int idx_target /* r1+0x8 */) {
    // Local variables
    unsigned int stat; // r31

    // References
    // -> struct zGlobals globals;
}

static struct st_ERROR_LOOKUP errlook[17]; // size: 0x88, address: 0x8051724C
// Range: 0x80124B34 -> 0x80124BDC
static char * iSGDB_tlate_cardres(int errid /* r29 */) {
    // Local variables
    char * da_errmsg; // r30
    struct st_ERROR_LOOKUP * tmprec; // r31

    // References
    // -> static struct st_ERROR_LOOKUP errlook[17];
}

static int been_here; // size: 0x4, address: 0x80D69CF4
static char __FUNCTION__[21]; // size: 0x15, address: 0x805172D4
// Range: 0x80124BDC -> 0x80124C98
void iSGDB_TgtForceFormat(struct st_ISGSESSION * session /* r31 */, int tgtidx /* r1+0x8 */) {
    // Local variables
    int rc; // r30
    struct st_ISG_MEMCARD_DATA * mcdata; // r29

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[21];
}

static int been_here; // size: 0x4, address: 0x80D69CF8
static int been_here; // size: 0x4, address: 0x80D69CFC
static char __FUNCTION__[14]; // size: 0xE, address: 0x80D61CA3
// Range: 0x80124C98 -> 0x80124F10
static int iSGDB_mc_fill(struct st_ISG_MEMCARD_DATA * mcdata /* r30 */, char * fname /* r23 */, char * data /* r1+0x8 */, int datasize /* r24 */, int fillamt /* r25 */) {
    // Local variables
    int result; // r29
    int rc; // r31
    int remain; // r28
    int amt; // r27

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[14];
    // -> static enum en_VERBOSE_MSGLEVEL _g_mlvl;
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D69D00
static char __FUNCTION__[21]; // size: 0x15, address: 0x805172E9
// Range: 0x80124F10 -> 0x80124FA8
static int iSGDB_mc_formatforce(struct st_ISG_MEMCARD_DATA * mcdata /* r1+0x8 */) {
    // Local variables
    int result; // r31
    int canRecover; // r1+0xC

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[21];
}

static int oops_skip_nuke; // size: 0x4, address: 0x80D69D04
static signed char init; // size: 0x1, address: 0x80D69D08
// Range: 0x80124FA8 -> 0x80125068
static void NukaDaCarda() {
    // Local variables
    struct st_ISGSESSION * session; // r30
    int numtgt; // r29
    int maxtgt; // r1+0xC
    int i; // r31
    int rc; // r1+0x8

    // References
    // -> static int oops_skip_nuke;
    // -> static signed char init;
}

static int _fillme[3]; // size: 0xC, address: 0x80D61CB4
static int _keepblok[3]; // size: 0xC, address: 0x80D61CC0
static int been_here; // size: 0x4, address: 0x80D69D0C
static int been_here; // size: 0x4, address: 0x80D69D10
static int been_here; // size: 0x4, address: 0x80D69D14
static int been_here; // size: 0x4, address: 0x80D69D18
static char __FUNCTION__[12]; // size: 0xC, address: 0x80D61CCC
// Range: 0x80125068 -> 0x80125694
static void FilaDaCarda() {
    // Local variables
    struct st_ISGSESSION * session; // r30
    struct st_ISG_MEMCARD_DATA * mcdata; // r26
    int numtgt; // r22
    int maxtgt; // r1+0x10
    int i; // r31
    int rc; // r25
    unsigned int ts; // r21
    char * fname; // r17
    int availbyte; // r24
    int clustsize; // r1+0xC
    int keep; // r20
    char * memptr; // r29
    int memsiz; // r27
    int fsize; // r23
    int availHandle; // r1+0x8
    char sample[53]; // r1+0x14
    int j; // r28

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[12];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int _keepblok[3];
    // -> static int _fillme[3];
}

static int ignoreme; // size: 0x4, address: 0x80D69D1C
static signed char init; // size: 0x1, address: 0x80D69D20
static int been_here; // size: 0x4, address: 0x80D69D24
static int been_here; // size: 0x4, address: 0x80D69D28
static int been_here; // size: 0x4, address: 0x80D69D2C
static int been_here; // size: 0x4, address: 0x80D69D30
static int been_here; // size: 0x4, address: 0x80D69D34
static char __FUNCTION__[19]; // size: 0x13, address: 0x80D61CD8
// Range: 0x80125694 -> 0x80125A5C
static void iSGDB_dump_curstat(struct CARDStat * stat /* r31 */, int doWarn /* r1+0x8 */) {
    // Local variables
    enum en_VERBOSE_MSGLEVEL mlvl; // r30

    // References
    // -> static int ignoreme;
    // -> static int been_here;
    // -> static char __FUNCTION__[19];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static signed char init;
}

static int ignoreme; // size: 0x4, address: 0x80D69D38
static signed char init; // size: 0x1, address: 0x80D69D3C
// Range: 0x80125A5C -> 0x80125B44
static void iSGDB_dump_curfinf(struct CARDFileInfo * finf /* r31 */) {
    // Local variables
    enum en_VERBOSE_MSGLEVEL mlvl; // r30

    // References
    // -> static int ignoreme;
    // -> static signed char init;
}


