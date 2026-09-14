/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xsavegame.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800CBFB0 -> 0x800D1944
*/
static int g_xsginit; // size: 0x4, address: 0x80D696A0
// total size: 0x0
struct st_XSAVEGAME_WRITECONTEXT {};
// total size: 0x0
struct st_XSAVEGAME_READCONTEXT {};
// total size: 0x40
struct st_XSAVEGAME_CLIENT {
    // Members
    unsigned int idtag; // offset 0x0, size 0x4
    int (* cltinfo)(void *, struct st_XSAVEGAME_DATA *, int *, int *); // offset 0x4, size 0x4
    int (* cltproc)(void *, struct st_XSAVEGAME_DATA *, struct st_XSAVEGAME_WRITECONTEXT *); // offset 0x8, size 0x4
    int (* cltload)(void *, struct st_XSAVEGAME_DATA *, struct st_XSAVEGAME_READCONTEXT *, unsigned int, int); // offset 0xC, size 0x4
    void * cltdata; // offset 0x10, size 0x4
    int needamt; // offset 0x14, size 0x4
    int maxamt; // offset 0x18, size 0x4
    int realamt; // offset 0x1C, size 0x4
    char * buf_sizepos; // offset 0x20, size 0x4
    char * buf_maxpos; // offset 0x24, size 0x4
    int blokact; // offset 0x28, size 0x4
    int blokmax; // offset 0x2C, size 0x4
    char * blokpos; // offset 0x30, size 0x4
    char * readpos; // offset 0x34, size 0x4
    int readamt; // offset 0x38, size 0x4
    int readremain; // offset 0x3C, size 0x4
};
// total size: 0x0
struct st_ISGSESSION {};
// total size: 0x20F0
struct st_XSAVEGAME_DATA {
    // Members
    int gfile_idx; // offset 0x0, size 0x4
    enum en_SAVEGAME_MODE mode; // offset 0x4, size 0x4
    unsigned int stage; // offset 0x8, size 0x4
    int gslot; // offset 0xC, size 0x4
    char label[64]; // offset 0x10, size 0x40
    int progress; // offset 0x50, size 0x4
    int thumbIconIdx; // offset 0x54, size 0x4
    long long playtime; // offset 0x58, size 0x8
    char * membuf; // offset 0x60, size 0x4
    int memsize; // offset 0x64, size 0x4
    char * buf_curpos; // offset 0x68, size 0x4
    char * buf_sizespot; // offset 0x6C, size 0x4
    char * buf_cksmspot; // offset 0x70, size 0x4
    int totamt; // offset 0x74, size 0x4
    unsigned int chksum; // offset 0x78, size 0x4
    unsigned int upd_tally; // offset 0x7C, size 0x4
    int cltneed; // offset 0x80, size 0x4
    int cltmax; // offset 0x84, size 0x4
    int chdrneed; // offset 0x88, size 0x4
    int stkcnt; // offset 0x8C, size 0x4
    struct st_XSAVEGAME_CLIENT cltstk[128]; // offset 0x90, size 0x2000
    struct st_XSAVEGAME_CLIENT dfltloadclt; // offset 0x2090, size 0x40
    unsigned int file_chksum; // offset 0x20D0, size 0x4
    unsigned int read_chksum; // offset 0x20D4, size 0x4
    int readsize; // offset 0x20D8, size 0x4
    char * loadbuf; // offset 0x20DC, size 0x4
    int loadsize; // offset 0x20E0, size 0x4
    char * walkpos; // offset 0x20E4, size 0x4
    int walkremain; // offset 0x20E8, size 0x4
    struct st_ISGSESSION * isgsess; // offset 0x20EC, size 0x4
};
static struct st_XSAVEGAME_DATA g_xsgdata; // size: 0x20F0, address: 0x805116E8
static struct st_XSAVEGAME_LEADER g_leaders[3]; // size: 0x108, address: 0x805137D8
// Range: 0x800CBFB0 -> 0x800CC018
int xSGStartup() {
    // References
    // -> static int g_xsginit;
    // -> static struct st_XSAVEGAME_DATA g_xsgdata;
}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80D60948
// Range: 0x800CC018 -> 0x800CC0CC
int xSGShutdown() {
    // References
    // -> static int g_xsginit;
    // -> static char __FUNCTION__[12];
}

static char __FUNCTION__[8]; // size: 0x8, address: 0x80D60954
enum en_SAVEGAME_MODE {
    XSG_MODE_LOAD = 10,
    XSG_MODE_SAVE = 11,
};
// Range: 0x800CC0CC -> 0x800CC380
struct st_XSAVEGAME_DATA * xSGInit(enum en_SAVEGAME_MODE mode /* r30 */) {
    // Local variables
    struct st_XSAVEGAME_DATA * xsgdata; // r31

    // References
    // -> static struct st_XSAVEGAME_LEADER g_leaders[3];
    // -> static char __FUNCTION__[8];
    // -> static struct st_XSAVEGAME_DATA g_xsgdata;
}

static char __FUNCTION__[8]; // size: 0x8, address: 0x80D6095C
// Range: 0x800CC380 -> 0x800CC5CC
int xSGDone(struct st_XSAVEGAME_DATA * xsgdata /* r31 */) {
    // Local variables
    int result; // r30

    // References
    // -> static struct st_XSAVEGAME_LEADER g_leaders[3];
    // -> static struct st_XSAVEGAME_DATA g_xsgdata;
    // -> static char __FUNCTION__[8];
}

// Range: 0x800CC5CC -> 0x800CC610
int xSGTgtCount(struct st_XSAVEGAME_DATA * xsgdata /* r30 */, int * max /* r1+0x8 */) {
    // Local variables
    int cnt; // r31
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80D60964
// Range: 0x800CC610 -> 0x800CC6B8
int xSGTgtPhysSlotIdx(struct st_XSAVEGAME_DATA * xsgdata /* r30 */, int tidx /* r1+0x8 */) {
    // Local variables
    int result; // r31

    // References
    // -> static char __FUNCTION__[18];
}

enum en_XSG_TGT_NAME_FORMAT {
    XSG_NAMFMT_BASIC = 0,
    XSG_NAMFMT_SYMBOLS = 1,
    XSG_NAMFMT_PROPER = 2,
    XSG_NAMFMT_PHYSSLOT = 3,
    XSG_NAMFMT_PHYSICAL = 4,
};
// Range: 0x800CC6B8 -> 0x800CC758
int xSGTgtIsFormat(struct st_XSAVEGAME_DATA * xsgdata /* r28 */, int tidx /* r1+0x8 */, int * badEncode /* r29 */) {
    // Local variables
    int result; // r30
    int rc; // r31
}

// Range: 0x800CC758 -> 0x800CC7A8
int xSGTgtFormatTgt(struct st_XSAVEGAME_DATA * xsgdata /* r30 */, int tidx /* r1+0x8 */, int * canRecover /* r1+0xC */) {
    // Local variables
    int result; // r31
}

// Range: 0x800CC7A8 -> 0x800CC81C
int xSGTgtSelect(struct st_XSAVEGAME_DATA * xsgdata /* r30 */, int tidx /* r1+0x8 */) {
    // Local variables
    int result; // r31
    int rc; // r29
}

// Range: 0x800CC81C -> 0x800CC878
int xSGTgtHasGameDir(struct st_XSAVEGAME_DATA * xsgdata /* r30 */, int tidx /* r1+0x8 */) {
    // Local variables
    int rc; // r31
}

// Range: 0x800CC878 -> 0x800CC964
int xSGTgtHaveRoom(struct st_XSAVEGAME_DATA * xsgdata /* r30 */, int tidx /* r23 */, int fsize /* r24 */, int slotidx /* r25 */, int * bytesNeeded /* r26 */, int * availOnDisk /* r27 */, int * needFile /* r28 */) {
    // Local variables
    int isroom; // r31
    char fname[256]; // r1+0x8
}

// Range: 0x800CC964 -> 0x800CC99C
unsigned char xSGCheckMemoryCard(struct st_XSAVEGAME_DATA * xsgdata /* r31 */, int index /* r1+0x8 */) {}

// Range: 0x800CC99C -> 0x800CC9A4
void xSGGameSet(struct st_XSAVEGAME_DATA * xsgdata /* r3 */, int gidx /* r4 */) {}

// Range: 0x800CC9A4 -> 0x800CC9E0
int xSGGameIsEmpty(struct st_XSAVEGAME_DATA * xsgdata /* r1+0x8 */, int gidx /* r1+0xC */) {
    // Local variables
    int exists; // r31
}

// Range: 0x800CC9E0 -> 0x800CCA54
int xSGGameSize(struct st_XSAVEGAME_DATA * xsgdata /* r31 */, int gidx /* r1+0x8 */) {
    // Local variables
    int size; // r30
    const char * da_name; // r29
}

static char da_date[32]; // size: 0x20, address: 0x805138E0
// Range: 0x800CCA54 -> 0x800CCB04
char * xSGGameModDate(struct st_XSAVEGAME_DATA * xsgdata /* r31 */, int gidx /* r1+0x8 */) {
    // Local variables
    const char * da_name; // r30
    const char * date; // r29

    // References
    // -> static char da_date[32];
}

// Range: 0x800CCB04 -> 0x800CCB70
char * xSGGameLabel(struct st_XSAVEGAME_DATA * xsgdata /* r1+0x8 */, int gidx /* r1+0xC */) {
    // Local variables
    const char * da_name; // r30
    struct st_XSAVEGAME_LEADER * lead; // r31

    // References
    // -> static struct st_XSAVEGAME_LEADER g_leaders[3];
}

// Range: 0x800CCB70 -> 0x800CCBDC
int xSGGameThumbIndex(struct st_XSAVEGAME_DATA * xsgdata /* r1+0x8 */, int gidx /* r1+0xC */) {
    // Local variables
    int idx_thum; // r30
    struct st_XSAVEGAME_LEADER * lead; // r31

    // References
    // -> static struct st_XSAVEGAME_LEADER g_leaders[3];
}

// Range: 0x800CCBDC -> 0x800CCC44
int xSGGameProgress(struct st_XSAVEGAME_DATA * xsgdata /* r1+0x8 */, int gidx /* r1+0xC */) {
    // Local variables
    int idx_thum; // r30
    struct st_XSAVEGAME_LEADER * lead; // r31

    // References
    // -> static struct st_XSAVEGAME_LEADER g_leaders[3];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80D60976
// Range: 0x800CCC44 -> 0x800CCF8C
int xSGAddSaveClient(struct st_XSAVEGAME_DATA * xsgdata /* r31 */, unsigned int clttag /* r27 */, void * cltdata /* r1+0x8 */, int (* infofunc)(void *, struct st_XSAVEGAME_DATA *, int *, int *) /* r1+0xC */, int (* procfunc)(void *, struct st_XSAVEGAME_DATA *, struct st_XSAVEGAME_WRITECONTEXT *) /* r1+0x10 */) {
    // Local variables
    int result; // r29
    int is_dup; // r1+0x14
    int i; // r28
    struct st_XSAVEGAME_CLIENT * clt; // r30

    // References
    // -> static char __FUNCTION__[17];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80D60987
// Range: 0x800CCF8C -> 0x800CD2B4
int xSGAddLoadClient(struct st_XSAVEGAME_DATA * xsgdata /* r31 */, unsigned int clttag /* r27 */, void * cltdata /* r25 */, int (* loadfunc)(void *, struct st_XSAVEGAME_DATA *, struct st_XSAVEGAME_READCONTEXT *, unsigned int, int) /* r26 */) {
    // Local variables
    int result; // r29
    int is_dup; // r1+0x8
    int i; // r28
    struct st_XSAVEGAME_CLIENT * clt; // r30

    // References
    // -> static char __FUNCTION__[17];
}

static char __FUNCTION__[9]; // size: 0x9, address: 0x80D60998
// Range: 0x800CD2B4 -> 0x800CD368
int xSGSetup(struct st_XSAVEGAME_DATA * xsgdata /* r31 */) {
    // References
    // -> static char __FUNCTION__[9];
}

static char __FUNCTION__[9]; // size: 0x9, address: 0x80D609A1
// Range: 0x800CD368 -> 0x800CD738
int xSGSetup(struct st_XSAVEGAME_DATA * xsgdata /* r31 */, int gidx /* r1+0x8 */, char * label /* r28 */, int progress /* r1+0xC */, long long playtime /* r1+0x10 */, int thumbIconIdx /* r1+0x18 */) {
    // Local variables
    int result; // r30
    int rc; // r29

    // References
    // -> static char __FUNCTION__[9];
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80D609AA
// Range: 0x800CD738 -> 0x800CD920
int xSGProcess(struct st_XSAVEGAME_DATA * xsgdata /* r31 */) {
    // Local variables
    int result; // r30
    int rc; // r29

    // References
    // -> static char __FUNCTION__[11];
}

// Range: 0x800CD920 -> 0x800CDAE0
int xSGWrapup(struct st_XSAVEGAME_DATA * xsgdata /* r31 */) {
    // Local variables
    int result; // r30
    int rc; // r29
}

enum en_XSGASYNC_STATUS {
    XSG_ASTAT_NOOP = 0,
    XSG_ASTAT_INPROG = 1,
    XSG_ASTAT_SUCCESS = 2,
    XSG_ASTAT_FAILED = 3,
};
enum en_ASYNC_OPSTAT {
    ISG_OPSTAT_FAILURE = -1,
    ISG_OPSTAT_INPROG = 0,
    ISG_OPSTAT_SUCCESS = 1,
};
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
enum en_XSG_WHYFAIL {
    XSG_WHYERR_NONE = 0,
    XSG_WHYERR_NOCARD = 1,
    XSG_WHYERR_NOROOM = 2,
    XSG_WHYERR_DAMAGE = 3,
    XSG_WHYERR_CARDYANKED = 4,
    XSG_WHYERR_OTHER = 5,
    XSG_WHYERR_NOMORE = 6,
};
// Range: 0x800CDAE0 -> 0x800CDC0C
enum en_XSGASYNC_STATUS xSGAsyncStatus(struct st_XSAVEGAME_DATA * xsgdata /* r26 */, int block /* r1+0x8 */, enum en_XSG_WHYFAIL * whyFail /* r25 */, char * errmsg /* r27 */) {
    // Local variables
    enum en_XSGASYNC_STATUS xstat; // r30
    enum en_ASYNC_OPSTAT istat; // r29
    enum en_ASYNC_OPERR whyerr; // r28
    int rc; // r1+0xC
    enum en_XSG_WHYFAIL con; // r31
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x80513934
// Range: 0x800CDC0C -> 0x800CDCC8
static int xSG_cb_leader_svinfo(void * cltdata /* r1+0x8 */, int * cur_space /* r29 */, int * max_fullgame /* r30 */) {
    // Local variables
    struct st_XSAVEGAME_DATA * xsg; // r31

    // References
    // -> static char __FUNCTION__[21];
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x80513949
// total size: 0x58
struct st_XSAVEGAME_LEADER {
    // Members
    char gameLabel[64]; // offset 0x0, size 0x40
    int progress; // offset 0x40, size 0x4
    long long gametime; // offset 0x48, size 0x8
    char thumbIconIdx; // offset 0x50, size 0x1
};
// Range: 0x800CDCC8 -> 0x800CDEC0
static int xSG_cb_leader_svproc(void * cltdata /* r1+0x8 */, struct st_XSAVEGAME_DATA * original_xsgdata /* r28 */, struct st_XSAVEGAME_WRITECONTEXT * wctxt /* r29 */) {
    // Local variables
    struct st_XSAVEGAME_DATA * xsg; // r31
    struct st_XSAVEGAME_LEADER leader; // r1+0x28
    char fundata[23]; // r1+0xC

    // References
    // -> static char __FUNCTION__[21];
}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80D609B5
// Range: 0x800CDEC0 -> 0x800CE178
static int xSG_cb_leader_load(void * cltdata /* r1+0x8 */, struct st_XSAVEGAME_DATA * original_xsgdata /* r28 */, struct st_XSAVEGAME_READCONTEXT * rctxt /* r29 */) {
    // Local variables
    struct st_XSAVEGAME_DATA * xsg; // r30
    char fundata[32]; // r1+0xC
    struct st_XSAVEGAME_LEADER discard; // r1+0x30

    // References
    // -> static char __FUNCTION__[19];
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80D609C8
// Range: 0x800CE178 -> 0x800CE598
int xSGWriteData(struct st_XSAVEGAME_DATA * xsgdata /* r31 */, struct st_XSAVEGAME_WRITECONTEXT * wctxt /* r1+0x8 */, char * data /* r1+0xC */, int elesiz /* r26 */, int n /* r1+0x10 */) {
    // Local variables
    int cnt; // r30
    struct st_XSAVEGAME_CLIENT * clt; // r29
    int is_ok; // r28
    void * mcprc; // r27
    int rc; // r1+0x14

    // References
    // -> static char __FUNCTION__[13];
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80D609D5
// Range: 0x800CE598 -> 0x800CE648
int xSGWriteStrLen(const char * str /* r30 */) {
    // Local variables
    int len; // r31

    // References
    // -> static char __FUNCTION__[15];
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80D609E4
// Range: 0x800CE648 -> 0x800CE6FC
int xSGWriteData(struct st_XSAVEGAME_DATA * xsgdata /* r30 */, struct st_XSAVEGAME_WRITECONTEXT * wctxt /* r1+0x8 */, char * data /* r1+0xC */, int n /* r1+0x10 */) {
    // Local variables
    int cnt; // r31

    // References
    // -> static char __FUNCTION__[13];
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80D609F1
// Range: 0x800CE6FC -> 0x800CE7B0
int xSGWriteData(struct st_XSAVEGAME_DATA * xsgdata /* r30 */, struct st_XSAVEGAME_WRITECONTEXT * wctxt /* r1+0x8 */, int * data /* r1+0xC */, int n /* r1+0x10 */) {
    // Local variables
    int cnt; // r31

    // References
    // -> static char __FUNCTION__[13];
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80D609FE
// Range: 0x800CE7B0 -> 0x800CE8D4
int xSGWriteData(struct st_XSAVEGAME_DATA * xsgdata /* r29 */, struct st_XSAVEGAME_WRITECONTEXT * wctxt /* r1+0x8 */, unsigned int * data /* r1+0xC */, int n /* r30 */) {
    // Local variables
    int cnt; // r31

    // References
    // -> static char __FUNCTION__[13];
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80D60A0B
// Range: 0x800CE8D4 -> 0x800CE988
int xSGWriteData(struct st_XSAVEGAME_DATA * xsgdata /* r30 */, struct st_XSAVEGAME_WRITECONTEXT * wctxt /* r1+0x8 */, float * data /* r1+0xC */, int n /* r1+0x10 */) {
    // Local variables
    int cnt; // r31

    // References
    // -> static char __FUNCTION__[13];
}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80D60A18
// Range: 0x800CE988 -> 0x800CEC58
int xSGReadData(struct st_XSAVEGAME_DATA * xsgdata /* r29 */, struct st_XSAVEGAME_READCONTEXT * rctxt /* r1+0x8 */, char * buff /* r26 */, int elesiz /* r27 */, int n /* r1+0xC */) {
    // Local variables
    int cnt; // r30
    struct st_XSAVEGAME_CLIENT * clt; // r31
    void * mcprc; // r28
    int act; // r1+0x10

    // References
    // -> static char __FUNCTION__[12];
}

// Range: 0x800CEC58 -> 0x800CECA8
int xSGReadData(struct st_XSAVEGAME_DATA * xsgdata /* r1+0x8 */, struct st_XSAVEGAME_READCONTEXT * rctxt /* r1+0xC */, char * buff /* r1+0x10 */, int n /* r1+0x14 */) {
    // Local variables
    int cnt; // r31
}

// Range: 0x800CECA8 -> 0x800CECF8
int xSGReadData(struct st_XSAVEGAME_DATA * xsgdata /* r1+0x8 */, struct st_XSAVEGAME_READCONTEXT * rctxt /* r1+0xC */, int * buff /* r1+0x10 */, int n /* r1+0x14 */) {
    // Local variables
    int cnt; // r31
}

// Range: 0x800CECF8 -> 0x800CED48
int xSGReadData(struct st_XSAVEGAME_DATA * xsgdata /* r1+0x8 */, struct st_XSAVEGAME_READCONTEXT * rctxt /* r1+0xC */, unsigned int * buff /* r1+0x10 */, int n /* r1+0x14 */) {
    // Local variables
    int cnt; // r31
}

// Range: 0x800CED48 -> 0x800CED98
int xSGReadData(struct st_XSAVEGAME_DATA * xsgdata /* r1+0x8 */, struct st_XSAVEGAME_READCONTEXT * rctxt /* r1+0xC */, float * buff /* r1+0x10 */, int n /* r1+0x14 */) {
    // Local variables
    int cnt; // r31
}

// Range: 0x800CED98 -> 0x800CEEC0
static int xSG_grab_leaders(struct st_XSAVEGAME_DATA * xsgdata /* r28 */) {
    // Local variables
    int num_found; // r30
    int i; // r31
    char readbuf[116]; // r1+0x8
    const char * namestr; // r27
    struct st_XSAVEGAME_LEADER * lead; // r26
    char * ptr; // r25
    int rc; // r29

    // References
    // -> static struct st_XSAVEGAME_LEADER g_leaders[3];
}

// Range: 0x800CEEC0 -> 0x800CEF3C
int xSG_chdir_gamedir(struct st_XSAVEGAME_DATA * xsgdata /* r28 */) {
    // Local variables
    int result; // r31
    int rc; // r30
    const char * namestr; // r29
}

static char slotname[32]; // size: 0x20, address: 0x8051395E
static char __FUNCTION__[16]; // size: 0x10, address: 0x80D60A24
// Range: 0x800CEF3C -> 0x800CF0FC
char * xSG_cm_slotname(struct st_XSAVEGAME_DATA * xsgdata /* r29 */, int slotidx /* r30 */) {
    // Local variables
    const char * sptr; // r31

    // References
    // -> static char slotname[32];
    // -> static char __FUNCTION__[16];
}

// Range: 0x800CF0FC -> 0x800CF174
static void xSG_areaComposeLabel(char * strbuf /* r1+0x8 */) {
    // Local variables
    char stamp[256]; // r1+0xC
}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80D60A34
// Range: 0x800CF174 -> 0x800CF4F8
int xSG_sv_flipinfo(struct st_XSAVEGAME_DATA * xsgdata /* r31 */) {
    // Local variables
    int result; // r28
    int i; // r29
    int rc; // r27
    struct st_XSAVEGAME_CLIENT * clt; // r30
    int cltamt; // r1+0xC
    int cltmax; // r1+0x8

    // References
    // -> static char __FUNCTION__[16];
}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80D60A44
// Range: 0x800CF4F8 -> 0x800CF680
int xSG_sv_prepdest(struct st_XSAVEGAME_DATA * xsgdata /* r31 */) {
    // Local variables
    int result; // r30
    int rc; // r1+0x8

    // References
    // -> static char __FUNCTION__[16];
}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80D60A54
// Range: 0x800CF680 -> 0x800CF934
int xSG_sv_flipproc(struct st_XSAVEGAME_DATA * xsgdata /* r29 */) {
    // Local variables
    int result; // r27
    int rc; // r30
    int i; // r28
    struct st_XSAVEGAME_CLIENT * clt; // r31
    char bfill; // r1+0x8
    int needfill; // r26

    // References
    // -> static char __FUNCTION__[16];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80D60A64
// Range: 0x800CF934 -> 0x800CFA00
int xSG_sv_bldchksum(struct st_XSAVEGAME_DATA * xsgdata /* r31 */) {
    // Local variables
    int result; // r27
    char * bufptr; // r30
    int bufamt; // r29

    // References
    // -> static char __FUNCTION__[17];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80D60A75
// Range: 0x800CFA00 -> 0x800CFBA8
int xSG_smem_blkopen(struct st_XSAVEGAME_DATA * xsgdata /* r31 */) {
    // Local variables
    int result; // r30
    int ival; // r1+0x10
    int savetag; // r1+0xC
    int savever; // r1+0x8

    // References
    // -> static char __FUNCTION__[17];
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80D60A86
// Range: 0x800CFBA8 -> 0x800CFDD4
int xSG_smem_blkclose(struct st_XSAVEGAME_DATA * xsgdata /* r31 */) {
    // Local variables
    int result; // r29
    char * last_bufpos; // r30
    int last_directpos; // r1+0x8

    // References
    // -> static char __FUNCTION__[18];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80D60A98
// Range: 0x800CFDD4 -> 0x800CFFF0
int xSG_smem_cltopen(struct st_XSAVEGAME_DATA * xsgdata /* r30 */, struct st_XSAVEGAME_CLIENT * clt /* r31 */) {
    // Local variables
    int result; // r29
    int dummy; // r1+0xC
    int ival; // r1+0x8

    // References
    // -> static char __FUNCTION__[17];
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80D60AA9
// Range: 0x800CFFF0 -> 0x800D0250
int xSG_smem_cltclose(struct st_XSAVEGAME_DATA * xsgdata /* r30 */, struct st_XSAVEGAME_CLIENT * clt /* r31 */) {
    // Local variables
    int result; // r28
    char * last_bufpos; // r29
    int last_directpos; // r1+0x8

    // References
    // -> static char __FUNCTION__[18];
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80D60ABB
// Range: 0x800D0250 -> 0x800D04DC
int xSG_sv_commit(struct st_XSAVEGAME_DATA * xsgdata /* r31 */) {
    // Local variables
    int result; // r28
    int rc; // r30
    const char * name; // r29
    char browselabel[256]; // r1+0x8

    // References
    // -> static char __FUNCTION__[14];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80D60AC9
enum en_CHGCODE {
    ISG_CHG_NONE = 0,
    ISG_CHG_TARGET = 1,
    ISG_CHG_GAMELIST = 2,
};
// Range: 0x800D04DC -> 0x800D06B8
void xSG_cb_ISGChange(void * cltdata /* r1+0x8 */, enum en_CHGCODE what /* r29 */) {
    // Local variables
    struct st_XSAVEGAME_DATA * xsgdata; // r30
    struct XSGAutoData * asg; // r31

    // References
    // -> static char __FUNCTION__[17];
}

static int been_here; // size: 0x4, address: 0x80D696A4
static char __FUNCTION__[16]; // size: 0x10, address: 0x80D60ADA
// Range: 0x800D06B8 -> 0x800D07DC
int xSG_ld_prepload(struct st_XSAVEGAME_DATA * xsgdata /* r31 */) {
    // Local variables
    int result; // r29
    const char * name; // r30

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[16];
}

// Range: 0x800D07DC -> 0x800D0884
int xSG_ld_readgame(struct st_XSAVEGAME_DATA * xsgdata /* r31 */) {
    // Local variables
    int result; // r30
    int rc; // r29
    const char * name; // r28
}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80D60AEA
// Range: 0x800D0884 -> 0x800D0B78
int xSG_ld_readhead(struct st_XSAVEGAME_DATA * xsgdata /* r31 */) {
    // Local variables
    int result; // r30
    int ival; // r1+0x8
    unsigned char damagedSave; // r29

    // References
    // -> static char __FUNCTION__[16];
}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80D60AFA
// Range: 0x800D0B78 -> 0x800D0CF4
int xSG_ld_validate(struct st_XSAVEGAME_DATA * xsgdata /* r31 */) {
    // Local variables
    int result; // r30

    // References
    // -> static char __FUNCTION__[16];
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80D60B0A
// Range: 0x800D0CF4 -> 0x800D1358
int xSG_ld_findcltblk(struct st_XSAVEGAME_DATA * xsgdata /* r31 */) {
    // Local variables
    int result; // r24
    int ival; // r1+0x14
    unsigned int tag; // r1+0x10
    int maxamt; // r1+0xC
    int actamt; // r1+0x8
    int safety; // r26
    struct st_XSAVEGAME_CLIENT * clt; // r30
    int i; // r28
    int found; // r27
    int rc; // r25
    struct st_XSAVEGAME_CLIENT * dfltclt; // r29

    // References
    // -> static char __FUNCTION__[18];
}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80D60B1C
// Range: 0x800D1358 -> 0x800D150C
int xSG_ld_flipload(struct st_XSAVEGAME_DATA * xsgdata /* r28 */) {
    // Local variables
    int result; // r29
    int rc; // r27
    int i; // r30
    struct st_XSAVEGAME_CLIENT * clt; // r31

    // References
    // -> static char __FUNCTION__[16];
}

// total size: 0x14
struct XSGAutoData {
    // Functions
    int IsValid();

    void MarkInvalid();

    int SetCache(int targ, int game, int physicalSlot);

    void Discard();

    int HWCheckConnect();

    void Refresh();

    // Members
protected:
    int flg_autodata; // offset 0x0, size 0x4
    int lastTarg; // offset 0x4, size 0x4
    int lastGame; // offset 0x8, size 0x4
    int lastPhysicalSlot; // offset 0xC, size 0x4
    struct st_ISGSESSION * isg_monitor; // offset 0x10, size 0x4
};
static struct XSGAutoData g_autodata; // size: 0x14, address: 0x80D696A8
// Range: 0x800D150C -> 0x800D1514
struct XSGAutoData * xSGAutoSave_GetCache() {
    // References
    // -> static struct XSGAutoData g_autodata;
}

// Range: 0x800D1514 -> 0x800D1564
void xSGAutoSave_Startup() {
    // Local variables
    struct XSGAutoData * asg; // r31
}

// Range: 0x800D1564 -> 0x800D15C0
// this: r31
int XSGAutoData::IsValid() {}

// Range: 0x800D15C0 -> 0x800D15D0
// this: r3
void XSGAutoData::MarkInvalid() {}

// Range: 0x800D15D0 -> 0x800D1658
// this: r31
int XSGAutoData::SetCache(int targ /* r30 */, int game /* r1+0x8 */, int physicalSlot /* r1+0xC */) {}

// Range: 0x800D1658 -> 0x800D16C0
// this: r31
void XSGAutoData::Discard() {}

// Range: 0x800D16C0 -> 0x800D16F8
struct st_ISGSESSION * XSGAutoData::HWConnect(int idx_target /* r1+0x8 */) {}

// Range: 0x800D16F8 -> 0x800D1720
void XSGAutoData::HWDisconnect(struct st_ISGSESSION * isg /* r1+0x8 */) {}

// Range: 0x800D1720 -> 0x800D1754
// this: r31
int XSGAutoData::HWCheckConnect() {}

// Range: 0x800D1754 -> 0x800D17C8
// this: r31
void XSGAutoData::Refresh() {}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80D60B2C
// Range: 0x800D17C8 -> 0x800D1944
static void ASG_ISG_changed(void * cltdata /* r1+0x8 */, enum en_CHGCODE what /* r30 */) {
    // Local variables
    struct XSGAutoData * asg; // r31

    // References
    // -> static char __FUNCTION__[16];
}


