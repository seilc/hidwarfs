/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xsavegame.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A6CEC -> 0x800AB764
*/
static int g_xsginit; // size: 0x4, address: 0x80C07630
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
static struct st_XSAVEGAME_DATA g_xsgdata; // size: 0x20F0, address: 0x8042BCA0
static struct st_XSAVEGAME_LEADER g_leaders[3]; // size: 0x108, address: 0x8042DD90
// Range: 0x800A6CEC -> 0x800A6D54
int xSGStartup() {
    // References
    // -> static int g_xsginit;
    // -> static struct st_XSAVEGAME_DATA g_xsgdata;
}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80BFE0B0
// Range: 0x800A6D54 -> 0x800A6DF8
int xSGShutdown() {
    // References
    // -> static int g_xsginit;
    // -> static char __FUNCTION__[12];
}

static char __FUNCTION__[8]; // size: 0x8, address: 0x80BFE0BC
enum en_SAVEGAME_MODE {
    XSG_MODE_LOAD = 10,
    XSG_MODE_SAVE = 11,
};
// Range: 0x800A6DF8 -> 0x800A706C
struct st_XSAVEGAME_DATA * xSGInit(enum en_SAVEGAME_MODE mode /* r30 */) {
    // Local variables
    struct st_XSAVEGAME_DATA * xsgdata; // r31

    // References
    // -> static struct st_XSAVEGAME_LEADER g_leaders[3];
    // -> static char __FUNCTION__[8];
    // -> static struct st_XSAVEGAME_DATA g_xsgdata;
}

static char __FUNCTION__[8]; // size: 0x8, address: 0x80BFE0C4
// Range: 0x800A706C -> 0x800A7274
int xSGDone(struct st_XSAVEGAME_DATA * xsgdata /* r30 */) {
    // Local variables
    int result; // r31

    // References
    // -> static struct st_XSAVEGAME_LEADER g_leaders[3];
    // -> static struct st_XSAVEGAME_DATA g_xsgdata;
    // -> static char __FUNCTION__[8];
}

// Range: 0x800A7274 -> 0x800A7298
int xSGTgtCount(struct st_XSAVEGAME_DATA * xsgdata /* r3 */, int * max /* r0 */) {
    // Local variables
    int cnt; // r0
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80BFE0CC
// Range: 0x800A7298 -> 0x800A731C
int xSGTgtPhysSlotIdx(struct st_XSAVEGAME_DATA * xsgdata /* r3 */, int tidx /* r0 */) {
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
// Range: 0x800A731C -> 0x800A7394
int xSGTgtIsFormat(struct st_XSAVEGAME_DATA * xsgdata /* r3 */, int tidx /* r0 */, int * badEncode /* r30 */) {
    // Local variables
    int result; // r31
    int rc; // r0
}

// Range: 0x800A7394 -> 0x800A73C0
int xSGTgtFormatTgt(struct st_XSAVEGAME_DATA * xsgdata /* r3 */, int tidx /* r0 */, int * canRecover /* r5 */) {
    // Local variables
    int result; // r0
}

// Range: 0x800A73C0 -> 0x800A741C
int xSGTgtSelect(struct st_XSAVEGAME_DATA * xsgdata /* r30 */, int tidx /* r0 */) {
    // Local variables
    int result; // r31
    int rc; // r0
}

// Range: 0x800A741C -> 0x800A745C
int xSGTgtHasGameDir(struct st_XSAVEGAME_DATA * xsgdata /* r31 */, int tidx /* r0 */) {
    // Local variables
    int rc; // r3
}

// Range: 0x800A745C -> 0x800A7534
int xSGTgtHaveRoom(struct st_XSAVEGAME_DATA * xsgdata /* r26 */, int tidx /* r27 */, int fsize /* r28 */, int slotidx /* r6 */, int * bytesNeeded /* r29 */, int * availOnDisk /* r30 */, int * needFile /* r31 */) {
    // Local variables
    int isroom; // r3
    char fname[256]; // r1+0x8
}

// Range: 0x800A7534 -> 0x800A7558
unsigned char xSGCheckMemoryCard(struct st_XSAVEGAME_DATA * xsgdata /* r3 */, int index /* r0 */) {}

// Range: 0x800A7558 -> 0x800A7560
void xSGGameSet(struct st_XSAVEGAME_DATA * xsgdata /* r0 */, int gidx /* r0 */) {}

// Range: 0x800A7560 -> 0x800A7584
int xSGGameIsEmpty(struct st_XSAVEGAME_DATA * xsgdata /* r0 */, int gidx /* r0 */) {
    // Local variables
    int exists; // r0
}

// Range: 0x800A7584 -> 0x800A75F4
int xSGGameSize(struct st_XSAVEGAME_DATA * xsgdata /* r29 */, int gidx /* r30 */) {
    // Local variables
    int size; // r31
    const char * da_name; // r4
}

static char da_date[32]; // size: 0x20, address: 0x8042DE98
// Range: 0x800A75F4 -> 0x800A7698
char * xSGGameModDate(struct st_XSAVEGAME_DATA * xsgdata /* r30 */, int gidx /* r31 */) {
    // Local variables
    const char * da_name; // r4
    const char * date; // r3

    // References
    // -> static char da_date[32];
}

// Range: 0x800A7698 -> 0x800A76F4
char * xSGGameLabel(struct st_XSAVEGAME_DATA * xsgdata /* r0 */, int gidx /* r30 */) {
    // Local variables
    const char * da_name; // r31
    struct st_XSAVEGAME_LEADER * lead; // r0

    // References
    // -> static struct st_XSAVEGAME_LEADER g_leaders[3];
}

// Range: 0x800A76F4 -> 0x800A7750
int xSGGameThumbIndex(struct st_XSAVEGAME_DATA * xsgdata /* r0 */, int gidx /* r30 */) {
    // Local variables
    int idx_thum; // r31

    // References
    // -> static struct st_XSAVEGAME_LEADER g_leaders[3];
}

// Range: 0x800A7750 -> 0x800A77A8
int xSGGameProgress(struct st_XSAVEGAME_DATA * xsgdata /* r0 */, int gidx /* r30 */) {
    // Local variables
    int idx_thum; // r31

    // References
    // -> static struct st_XSAVEGAME_LEADER g_leaders[3];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80BFE0E0
// Range: 0x800A77A8 -> 0x800A7A20
int xSGAddSaveClient(struct st_XSAVEGAME_DATA * xsgdata /* r26 */, unsigned int clttag /* r27 */, void * cltdata /* r28 */, int (* infofunc)(void *, struct st_XSAVEGAME_DATA *, int *, int *) /* r29 */, int (* procfunc)(void *, struct st_XSAVEGAME_DATA *, struct st_XSAVEGAME_WRITECONTEXT *) /* r30 */) {
    // Local variables
    int result; // r31
    struct st_XSAVEGAME_CLIENT * clt; // r3

    // References
    // -> static char __FUNCTION__[17];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80BFE0F4
// Range: 0x800A7A20 -> 0x800A7C84
int xSGAddLoadClient(struct st_XSAVEGAME_DATA * xsgdata /* r27 */, unsigned int clttag /* r28 */, void * cltdata /* r29 */, int (* loadfunc)(void *, struct st_XSAVEGAME_DATA *, struct st_XSAVEGAME_READCONTEXT *, unsigned int, int) /* r30 */) {
    // Local variables
    int result; // r31
    struct st_XSAVEGAME_CLIENT * clt; // r3

    // References
    // -> static char __FUNCTION__[17];
}

static char __FUNCTION__[9]; // size: 0x9, address: 0x80BFE108
// Range: 0x800A7C84 -> 0x800A7D28
int xSGSetup(struct st_XSAVEGAME_DATA * xsgdata /* r31 */) {
    // References
    // -> static char __FUNCTION__[9];
}

static char __FUNCTION__[9]; // size: 0x9, address: 0x80BFE114
// Range: 0x800A7D28 -> 0x800A8060
int xSGSetup(struct st_XSAVEGAME_DATA * xsgdata /* r24 */, int gidx /* r25 */, char * label /* r26 */, int progress /* r27 */, long long playtime /* r29 */, int thumbIconIdx /* r30 */) {
    // Local variables
    int result; // r31
    int rc; // r0

    // References
    // -> static char __FUNCTION__[9];
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80BFE120
// Range: 0x800A8060 -> 0x800A821C
int xSGProcess(struct st_XSAVEGAME_DATA * xsgdata /* r31 */) {
    // Local variables
    int result; // r30
    int rc; // r0

    // References
    // -> static char __FUNCTION__[11];
}

// Range: 0x800A821C -> 0x800A83C8
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
// Range: 0x800A83C8 -> 0x800A84E4
enum en_XSGASYNC_STATUS xSGAsyncStatus(struct st_XSAVEGAME_DATA * xsgdata /* r27 */, int block /* r4 */, enum en_XSG_WHYFAIL * whyFail /* r28 */, char * errmsg /* r29 */) {
    // Local variables
    enum en_XSGASYNC_STATUS xstat; // r31
    enum en_ASYNC_OPSTAT istat; // r3
    enum en_ASYNC_OPERR whyerr; // r30
    enum en_XSG_WHYFAIL con; // r4
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x80BFE12C
// Range: 0x800A84E4 -> 0x800A8578
static int xSG_cb_leader_svinfo(void * cltdata /* r0 */, int * cur_space /* r30 */, int * max_fullgame /* r31 */) {
    // References
    // -> static char __FUNCTION__[21];
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x80BFE144
// total size: 0x58
struct st_XSAVEGAME_LEADER {
    // Members
    char gameLabel[64]; // offset 0x0, size 0x40
    int progress; // offset 0x40, size 0x4
    long long gametime; // offset 0x48, size 0x8
    char thumbIconIdx; // offset 0x50, size 0x1
};
// Range: 0x800A8578 -> 0x800A86CC
static int xSG_cb_leader_svproc(void * cltdata /* r29 */, struct st_XSAVEGAME_DATA * original_xsgdata /* r30 */, struct st_XSAVEGAME_WRITECONTEXT * wctxt /* r31 */) {
    // Local variables
    struct st_XSAVEGAME_DATA * xsg; // r0
    struct st_XSAVEGAME_LEADER leader; // r1+0x20
    char fundata[23]; // r1+0x8

    // References
    // -> static char __FUNCTION__[21];
}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80BFE15C
// Range: 0x800A86CC -> 0x800A8860
static int xSG_cb_leader_load(void * cltdata /* r0 */, struct st_XSAVEGAME_DATA * original_xsgdata /* r30 */, struct st_XSAVEGAME_READCONTEXT * rctxt /* r31 */) {
    // Local variables
    char fundata[32]; // r1+0x8
    struct st_XSAVEGAME_LEADER discard; // r1+0x28

    // References
    // -> static char __FUNCTION__[19];
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80BFE170
// Range: 0x800A8860 -> 0x800A8C04
int xSGWriteData(struct st_XSAVEGAME_DATA * xsgdata /* r26 */, struct st_XSAVEGAME_WRITECONTEXT * wctxt /* r27 */, char * data /* r28 */, int elesiz /* r29 */, int n /* r31 */) {
    // Local variables
    int cnt; // r31
    struct st_XSAVEGAME_CLIENT * clt; // r0
    int is_ok; // r30
    void * mcprc; // r0

    // References
    // -> static char __FUNCTION__[13];
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFE180
// Range: 0x800A8C04 -> 0x800A8C90
int xSGWriteStrLen(const char * str /* r31 */) {
    // Local variables
    int len; // r3

    // References
    // -> static char __FUNCTION__[15];
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80BFE190
// Range: 0x800A8C90 -> 0x800A8D40
int xSGWriteData(struct st_XSAVEGAME_DATA * xsgdata /* r28 */, struct st_XSAVEGAME_WRITECONTEXT * wctxt /* r29 */, char * data /* r30 */, int n /* r31 */) {
    // Local variables
    int cnt; // r0

    // References
    // -> static char __FUNCTION__[13];
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80BFE1A0
// Range: 0x800A8D40 -> 0x800A8DF0
int xSGWriteData(struct st_XSAVEGAME_DATA * xsgdata /* r28 */, struct st_XSAVEGAME_WRITECONTEXT * wctxt /* r29 */, int * data /* r30 */, int n /* r31 */) {
    // Local variables
    int cnt; // r0

    // References
    // -> static char __FUNCTION__[13];
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80BFE1B0
// Range: 0x800A8DF0 -> 0x800A8EF8
int xSGWriteData(struct st_XSAVEGAME_DATA * xsgdata /* r28 */, struct st_XSAVEGAME_WRITECONTEXT * wctxt /* r29 */, unsigned int * data /* r31 */, int n /* r30 */) {
    // Local variables
    int cnt; // r31

    // References
    // -> static char __FUNCTION__[13];
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80BFE1C0
// Range: 0x800A8EF8 -> 0x800A8FA8
int xSGWriteData(struct st_XSAVEGAME_DATA * xsgdata /* r28 */, struct st_XSAVEGAME_WRITECONTEXT * wctxt /* r29 */, float * data /* r30 */, int n /* r31 */) {
    // Local variables
    int cnt; // r0

    // References
    // -> static char __FUNCTION__[13];
}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80BFE1D0
// Range: 0x800A8FA8 -> 0x800A9220
int xSGReadData(struct st_XSAVEGAME_DATA * xsgdata /* r27 */, struct st_XSAVEGAME_READCONTEXT * rctxt /* r28 */, char * buff /* r31 */, int elesiz /* r29 */, int n /* r30 */) {
    // Local variables
    int cnt; // r30
    struct st_XSAVEGAME_CLIENT * clt; // r0
    void * mcprc; // r0

    // References
    // -> static char __FUNCTION__[12];
}

// Range: 0x800A9220 -> 0x800A9248
int xSGReadData(struct st_XSAVEGAME_DATA * xsgdata /* r0 */, struct st_XSAVEGAME_READCONTEXT * rctxt /* r0 */, char * buff /* r0 */, int n /* r7 */) {
    // Local variables
    int cnt; // r0
}

// Range: 0x800A9248 -> 0x800A9270
int xSGReadData(struct st_XSAVEGAME_DATA * xsgdata /* r0 */, struct st_XSAVEGAME_READCONTEXT * rctxt /* r0 */, int * buff /* r0 */, int n /* r7 */) {
    // Local variables
    int cnt; // r0
}

// Range: 0x800A9270 -> 0x800A9298
int xSGReadData(struct st_XSAVEGAME_DATA * xsgdata /* r0 */, struct st_XSAVEGAME_READCONTEXT * rctxt /* r0 */, unsigned int * buff /* r0 */, int n /* r7 */) {
    // Local variables
    int cnt; // r0
}

// Range: 0x800A9298 -> 0x800A92C0
int xSGReadData(struct st_XSAVEGAME_DATA * xsgdata /* r0 */, struct st_XSAVEGAME_READCONTEXT * rctxt /* r0 */, float * buff /* r0 */, int n /* r7 */) {
    // Local variables
    int cnt; // r0
}

// Range: 0x800A92C0 -> 0x800A93E4
static int xSG_grab_leaders(struct st_XSAVEGAME_DATA * xsgdata /* r30 */) {
    // Local variables
    int num_found; // r31
    int i; // r27
    char readbuf[116]; // r1+0x8
    const char * namestr; // r26
    int rc; // r0

    // References
    // -> static struct st_XSAVEGAME_LEADER g_leaders[3];
}

// Range: 0x800A93E4 -> 0x800A9448
int xSG_chdir_gamedir(struct st_XSAVEGAME_DATA * xsgdata /* r30 */) {
    // Local variables
    int result; // r31
    int rc; // r0
    const char * namestr; // r4
}

static char slotname[32]; // size: 0x20, address: 0x8042DEEC
static char __FUNCTION__[16]; // size: 0x10, address: 0x80BFE1DC
// Range: 0x800A9448 -> 0x800A95CC
char * xSG_cm_slotname(struct st_XSAVEGAME_DATA * xsgdata /* r30 */, int slotidx /* r31 */) {
    // Local variables
    const char * sptr; // r31

    // References
    // -> static char slotname[32];
    // -> static char __FUNCTION__[16];
}

// Range: 0x800A95CC -> 0x800A9644
static void xSG_areaComposeLabel(char * strbuf /* r31 */) {
    // Local variables
    char stamp[256]; // r1+0x8
}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80BFE1EC
// Range: 0x800A9644 -> 0x800A9908
int xSG_sv_flipinfo(struct st_XSAVEGAME_DATA * xsgdata /* r28 */) {
    // Local variables
    int result; // r30
    int i; // r29
    int rc; // r0
    struct st_XSAVEGAME_CLIENT * clt; // r0
    int cltamt; // r1+0xC
    int cltmax; // r1+0x8

    // References
    // -> static char __FUNCTION__[16];
}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80BFE1FC
// Range: 0x800A9908 -> 0x800A9A54
int xSG_sv_prepdest(struct st_XSAVEGAME_DATA * xsgdata /* r30 */) {
    // Local variables
    int result; // r31

    // References
    // -> static char __FUNCTION__[16];
}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80BFE20C
// Range: 0x800A9A54 -> 0x800A9CC8
int xSG_sv_flipproc(struct st_XSAVEGAME_DATA * xsgdata /* r26 */) {
    // Local variables
    int result; // r30
    int rc; // r29
    int i; // r28
    struct st_XSAVEGAME_CLIENT * clt; // r27
    char bfill; // r1+0x8
    int needfill; // r25

    // References
    // -> static char __FUNCTION__[16];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80BFE21C
// Range: 0x800A9CC8 -> 0x800A9D68
int xSG_sv_bldchksum(struct st_XSAVEGAME_DATA * xsgdata /* r31 */) {
    // References
    // -> static char __FUNCTION__[17];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80BFE230
// Range: 0x800A9D68 -> 0x800A9EE4
int xSG_smem_blkopen(struct st_XSAVEGAME_DATA * xsgdata /* r31 */) {
    // Local variables
    int ival; // r1+0x10
    int savetag; // r1+0xC
    int savever; // r1+0x8

    // References
    // -> static char __FUNCTION__[17];
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80BFE244
// Range: 0x800A9EE4 -> 0x800AA0C0
int xSG_smem_blkclose(struct st_XSAVEGAME_DATA * xsgdata /* r31 */) {
    // Local variables
    char * last_bufpos; // r30

    // References
    // -> static char __FUNCTION__[18];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80BFE258
// Range: 0x800AA0C0 -> 0x800AA2A0
int xSG_smem_cltopen(struct st_XSAVEGAME_DATA * xsgdata /* r30 */, struct st_XSAVEGAME_CLIENT * clt /* r31 */) {
    // Local variables
    int dummy; // r1+0xC
    int ival; // r1+0x8

    // References
    // -> static char __FUNCTION__[17];
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80BFE26C
// Range: 0x800AA2A0 -> 0x800AA4C0
int xSG_smem_cltclose(struct st_XSAVEGAME_DATA * xsgdata /* r30 */, struct st_XSAVEGAME_CLIENT * clt /* r31 */) {
    // Local variables
    char * last_bufpos; // r28

    // References
    // -> static char __FUNCTION__[18];
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80BFE280
// Range: 0x800AA4C0 -> 0x800AA708
int xSG_sv_commit(struct st_XSAVEGAME_DATA * xsgdata /* r30 */) {
    // Local variables
    int result; // r31
    int rc; // r0
    const char * name; // r4
    char browselabel[256]; // r1+0x8

    // References
    // -> static char __FUNCTION__[14];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80BFE290
enum en_CHGCODE {
    ISG_CHG_NONE = 0,
    ISG_CHG_TARGET = 1,
    ISG_CHG_GAMELIST = 2,
};
// Range: 0x800AA708 -> 0x800AA8A4
void xSG_cb_ISGChange(void * cltdata /* r0 */, enum en_CHGCODE what /* r30 */) {
    // Local variables
    struct XSGAutoData * asg; // r31

    // References
    // -> static char __FUNCTION__[17];
}

// Range: 0x800AA8A4 -> 0x800AA958
int xSG_ld_prepload(struct st_XSAVEGAME_DATA * xsgdata /* r29 */) {
    // Local variables
    int result; // r31
    const char * name; // r30
}

// Range: 0x800AA958 -> 0x800AA9E8
int xSG_ld_readgame(struct st_XSAVEGAME_DATA * xsgdata /* r30 */) {
    // Local variables
    int result; // r31
    int rc; // r0
    const char * name; // r4
}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80BFE2A4
// Range: 0x800AA9E8 -> 0x800AAC88
int xSG_ld_readhead(struct st_XSAVEGAME_DATA * xsgdata /* r29 */) {
    // Local variables
    int result; // r31
    int ival; // r1+0x8
    unsigned char damagedSave; // r30

    // References
    // -> static char __FUNCTION__[16];
}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80BFE2B4
// Range: 0x800AAC88 -> 0x800AADD0
int xSG_ld_validate(struct st_XSAVEGAME_DATA * xsgdata /* r30 */) {
    // Local variables
    int result; // r31

    // References
    // -> static char __FUNCTION__[16];
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80BFE2C4
// Range: 0x800AADD0 -> 0x800AB1E4
int xSG_ld_findcltblk(struct st_XSAVEGAME_DATA * xsgdata /* r26 */) {
    // Local variables
    int ival; // r1+0x14
    unsigned int tag; // r1+0x10
    int maxamt; // r1+0xC
    int actamt; // r1+0x8
    int safety; // r29
    struct st_XSAVEGAME_CLIENT * clt; // r0
    int i; // r0
    int found; // r28
    int rc; // r0
    struct st_XSAVEGAME_CLIENT * dfltclt; // r27

    // References
    // -> static char __FUNCTION__[18];
}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80BFE2D8
// Range: 0x800AB1E4 -> 0x800AB37C
int xSG_ld_flipload(struct st_XSAVEGAME_DATA * xsgdata /* r28 */) {
    // Local variables
    int result; // r30
    int rc; // r0
    int i; // r29
    struct st_XSAVEGAME_CLIENT * clt; // r26

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
static struct XSGAutoData g_autodata; // size: 0x14, address: 0x80C07634
// Range: 0x800AB37C -> 0x800AB384
struct XSGAutoData * xSGAutoSave_GetCache() {
    // References
    // -> static struct XSGAutoData g_autodata;
}

// Range: 0x800AB384 -> 0x800AB3C0
void xSGAutoSave_Startup() {
    // Local variables
    struct XSGAutoData * asg; // r0
}

// Range: 0x800AB3C0 -> 0x800AB418
// this: r31
int XSGAutoData::IsValid() {}

// Range: 0x800AB418 -> 0x800AB428
// this: r0
void XSGAutoData::MarkInvalid() {}

// Range: 0x800AB428 -> 0x800AB4B8
// this: r28
int XSGAutoData::SetCache(int targ /* r29 */, int game /* r30 */, int physicalSlot /* r31 */) {}

// Range: 0x800AB4B8 -> 0x800AB510
// this: r31
void XSGAutoData::Discard() {}

// Range: 0x800AB510 -> 0x800AB550
struct st_ISGSESSION * XSGAutoData::HWConnect(int idx_target /* r31 */) {}

// Range: 0x800AB550 -> 0x800AB574
void XSGAutoData::HWDisconnect(struct st_ISGSESSION * isg /* r4 */) {}

// Range: 0x800AB574 -> 0x800AB5A0
// this: r4
int XSGAutoData::HWCheckConnect() {}

// Range: 0x800AB5A0 -> 0x800AB60C
// this: r31
void XSGAutoData::Refresh() {}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80BFE2E8
// Range: 0x800AB60C -> 0x800AB764
static void ASG_ISG_changed(void * cltdata /* r31 */, enum en_CHGCODE what /* r30 */) {
    // Local variables
    struct XSGAutoData * asg; // r31

    // References
    // -> static char __FUNCTION__[16];
}


