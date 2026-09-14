/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xsavegame.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8005BC74 -> 0x8005E0FC
*/
static int g_xsginit; // size: 0x4, address: 0x803C12D8
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
static struct st_XSAVEGAME_DATA g_xsgdata; // size: 0x20F0, address: 0x802CEC70
static struct st_XSAVEGAME_LEADER g_leaders[3]; // size: 0x108, address: 0x802D0D60
// Range: 0x8005BC74 -> 0x8005BCC8
int xSGStartup() {
    // References
    // -> static int g_xsginit;
    // -> static struct st_XSAVEGAME_DATA g_xsgdata;
}

// Range: 0x8005BCC8 -> 0x8005BD00
int xSGShutdown() {
    // References
    // -> static int g_xsginit;
}

enum en_SAVEGAME_MODE {
    XSG_MODE_LOAD = 10,
    XSG_MODE_SAVE = 11,
};
// Range: 0x8005BD00 -> 0x8005BDF4
struct st_XSAVEGAME_DATA * xSGInit(enum en_SAVEGAME_MODE mode /* r30 */) {
    // Local variables
    struct st_XSAVEGAME_DATA * xsgdata; // r31

    // References
    // -> static struct st_XSAVEGAME_LEADER g_leaders[3];
    // -> static struct st_XSAVEGAME_DATA g_xsgdata;
}

// Range: 0x8005BDF4 -> 0x8005BF10
int xSGDone(struct st_XSAVEGAME_DATA * xsgdata /* r30 */) {
    // Local variables
    int result; // r31

    // References
    // -> static struct st_XSAVEGAME_LEADER g_leaders[3];
    // -> static struct st_XSAVEGAME_DATA g_xsgdata;
}

// Range: 0x8005BF10 -> 0x8005BF34
int xSGTgtCount(struct st_XSAVEGAME_DATA * xsgdata /* r3 */, int * max /* r0 */) {
    // Local variables
    int cnt; // r0
}

// Range: 0x8005BF34 -> 0x8005BF58
int xSGTgtPhysSlotIdx(struct st_XSAVEGAME_DATA * xsgdata /* r3 */, int tidx /* r0 */) {
    // Local variables
    int result; // r0
}

enum en_XSG_TGT_NAME_FORMAT {
    XSG_NAMFMT_BASIC = 0,
    XSG_NAMFMT_SYMBOLS = 1,
    XSG_NAMFMT_PROPER = 2,
    XSG_NAMFMT_PHYSSLOT = 3,
    XSG_NAMFMT_PHYSICAL = 4,
};
// Range: 0x8005BF58 -> 0x8005BFC8
int xSGTgtIsFormat(struct st_XSAVEGAME_DATA * xsgdata /* r3 */, int tidx /* r0 */, int * badEncode /* r30 */) {
    // Local variables
    int result; // r31
    int rc; // r0
}

// Range: 0x8005BFC8 -> 0x8005BFF4
int xSGTgtFormatTgt(struct st_XSAVEGAME_DATA * xsgdata /* r3 */, int tidx /* r0 */, int * canRecover /* r5 */) {
    // Local variables
    int result; // r0
}

// Range: 0x8005BFF4 -> 0x8005C048
int xSGTgtSelect(struct st_XSAVEGAME_DATA * xsgdata /* r30 */, int tidx /* r0 */) {
    // Local variables
    int result; // r31
    int rc; // r0
}

// Range: 0x8005C048 -> 0x8005C088
int xSGTgtHasGameDir(struct st_XSAVEGAME_DATA * xsgdata /* r31 */, int tidx /* r0 */) {
    // Local variables
    int rc; // r3
}

// Range: 0x8005C088 -> 0x8005C160
int xSGTgtHaveRoom(struct st_XSAVEGAME_DATA * xsgdata /* r26 */, int tidx /* r27 */, int fsize /* r28 */, int slotidx /* r6 */, int * bytesNeeded /* r29 */, int * availOnDisk /* r30 */, int * needFile /* r31 */) {
    // Local variables
    int isroom; // r3
    char fname[256]; // r1+0x8
}

// Range: 0x8005C160 -> 0x8005C184
unsigned char xSGCheckMemoryCard(struct st_XSAVEGAME_DATA * xsgdata /* r3 */, int index /* r0 */) {}

// Range: 0x8005C184 -> 0x8005C18C
void xSGGameSet(struct st_XSAVEGAME_DATA * xsgdata /* r0 */, int gidx /* r0 */) {}

// Range: 0x8005C18C -> 0x8005C1B0
int xSGGameIsEmpty(struct st_XSAVEGAME_DATA * xsgdata /* r0 */, int gidx /* r0 */) {
    // Local variables
    int exists; // r0
}

// Range: 0x8005C1B0 -> 0x8005C210
int xSGGameSize(struct st_XSAVEGAME_DATA * xsgdata /* r29 */, int gidx /* r30 */) {
    // Local variables
    int size; // r31
    const char * da_name; // r4
}

static char da_date[32]; // size: 0x20, address: 0x803BD8D8
// Range: 0x8005C210 -> 0x8005C298
char * xSGGameModDate(struct st_XSAVEGAME_DATA * xsgdata /* r30 */, int gidx /* r31 */) {
    // Local variables
    const char * da_name; // r4
    const char * date; // r3

    // References
    // -> static char da_date[32];
}

// Range: 0x8005C298 -> 0x8005C2EC
char * xSGGameLabel(struct st_XSAVEGAME_DATA * xsgdata /* r0 */, int gidx /* r30 */) {
    // Local variables
    const char * da_name; // r31
    struct st_XSAVEGAME_LEADER * lead; // r0

    // References
    // -> static struct st_XSAVEGAME_LEADER g_leaders[3];
}

// Range: 0x8005C2EC -> 0x8005C340
int xSGGameThumbIndex(struct st_XSAVEGAME_DATA * xsgdata /* r0 */, int gidx /* r30 */) {
    // Local variables
    int idx_thum; // r31

    // References
    // -> static struct st_XSAVEGAME_LEADER g_leaders[3];
}

// Range: 0x8005C340 -> 0x8005C390
int xSGGameProgress(struct st_XSAVEGAME_DATA * xsgdata /* r0 */, int gidx /* r30 */) {
    // Local variables
    int idx_thum; // r31

    // References
    // -> static struct st_XSAVEGAME_LEADER g_leaders[3];
}

// Range: 0x8005C390 -> 0x8005C464
int xSGAddSaveClient(struct st_XSAVEGAME_DATA * xsgdata /* r31 */, unsigned int clttag /* r27 */, void * cltdata /* r28 */, int (* infofunc)(void *, struct st_XSAVEGAME_DATA *, int *, int *) /* r29 */, int (* procfunc)(void *, struct st_XSAVEGAME_DATA *, struct st_XSAVEGAME_WRITECONTEXT *) /* r30 */) {
    // Local variables
    int result; // r3
    struct st_XSAVEGAME_CLIENT * clt; // r4
}

// Range: 0x8005C464 -> 0x8005C58C
int xSGAddLoadClient(struct st_XSAVEGAME_DATA * xsgdata /* r31 */, unsigned int clttag /* r28 */, void * cltdata /* r29 */, int (* loadfunc)(void *, struct st_XSAVEGAME_DATA *, struct st_XSAVEGAME_READCONTEXT *, unsigned int, int) /* r30 */) {
    // Local variables
    int result; // r3
    struct st_XSAVEGAME_CLIENT * clt; // r4
}

// Range: 0x8005C58C -> 0x8005C5CC
int xSGSetup(struct st_XSAVEGAME_DATA * xsgdata /* r0 */) {}

// Range: 0x8005C5CC -> 0x8005C6D4
int xSGSetup(struct st_XSAVEGAME_DATA * xsgdata /* r26 */, int gidx /* r0 */, char * label /* r5 */, int progress /* r27 */, long long playtime /* r29 */, int thumbIconIdx /* r30 */) {
    // Local variables
    int result; // r31
    int rc; // r0
}

// Range: 0x8005C6D4 -> 0x8005C80C
int xSGProcess(struct st_XSAVEGAME_DATA * xsgdata /* r30 */) {
    // Local variables
    int result; // r31
    int rc; // r0
}

// Range: 0x8005C80C -> 0x8005C944
int xSGWrapup(struct st_XSAVEGAME_DATA * xsgdata /* r31 */) {
    // Local variables
    int result; // r30
    int rc; // r3
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
// Range: 0x8005C944 -> 0x8005CA40
enum en_XSGASYNC_STATUS xSGAsyncStatus(struct st_XSAVEGAME_DATA * xsgdata /* r27 */, int block /* r4 */, enum en_XSG_WHYFAIL * whyFail /* r28 */, char * errmsg /* r29 */) {
    // Local variables
    enum en_XSGASYNC_STATUS xstat; // r31
    enum en_ASYNC_OPSTAT istat; // r0
    enum en_ASYNC_OPERR whyerr; // r30
    enum en_XSG_WHYFAIL con; // r4
}

// Range: 0x8005CA40 -> 0x8005CA54
static int xSG_cb_leader_svinfo(int * cur_space /* r0 */, int * max_fullgame /* r0 */) {}

// total size: 0x58
struct st_XSAVEGAME_LEADER {
    // Members
    char gameLabel[64]; // offset 0x0, size 0x40
    int progress; // offset 0x40, size 0x4
    long long gametime; // offset 0x48, size 0x8
    char thumbIconIdx; // offset 0x50, size 0x1
};
// Range: 0x8005CA54 -> 0x8005CB50
static int xSG_cb_leader_svproc(void * cltdata /* r29 */, struct st_XSAVEGAME_DATA * original_xsgdata /* r30 */, struct st_XSAVEGAME_WRITECONTEXT * wctxt /* r31 */) {
    // Local variables
    struct st_XSAVEGAME_DATA * xsg; // r0
    struct st_XSAVEGAME_LEADER leader; // r1+0x20
    char fundata[23]; // r1+0x8
}

// Range: 0x8005CB50 -> 0x8005CBF8
static int xSG_cb_leader_load(struct st_XSAVEGAME_DATA * original_xsgdata /* r30 */, struct st_XSAVEGAME_READCONTEXT * rctxt /* r31 */) {
    // Local variables
    char fundata[32]; // r1+0x8
    struct st_XSAVEGAME_LEADER discard; // r1+0x28
}

// Range: 0x8005CBF8 -> 0x8005CD08
int xSGWriteData(struct st_XSAVEGAME_DATA * xsgdata /* r27 */, struct st_XSAVEGAME_WRITECONTEXT * wctxt /* r28 */, char * data /* r5 */, int elesiz /* r29 */, int n /* r0 */) {
    // Local variables
    int cnt; // r31
    struct st_XSAVEGAME_CLIENT * clt; // r0
    int is_ok; // r30
    void * mcprc; // r0
}

// Range: 0x8005CD08 -> 0x8005CD38
int xSGWriteStrLen(const char * str /* r0 */) {
    // Local variables
    int len; // r3
}

// Range: 0x8005CD38 -> 0x8005CD60
int xSGWriteData(struct st_XSAVEGAME_DATA * xsgdata /* r0 */, struct st_XSAVEGAME_WRITECONTEXT * wctxt /* r0 */, char * data /* r0 */, int n /* r7 */) {
    // Local variables
    int cnt; // r0
}

// Range: 0x8005CD60 -> 0x8005CD88
int xSGWriteData(struct st_XSAVEGAME_DATA * xsgdata /* r0 */, struct st_XSAVEGAME_WRITECONTEXT * wctxt /* r0 */, int * data /* r0 */, int n /* r7 */) {
    // Local variables
    int cnt; // r0
}

// Range: 0x8005CD88 -> 0x8005CDB0
int xSGWriteData(struct st_XSAVEGAME_DATA * xsgdata /* r0 */, struct st_XSAVEGAME_WRITECONTEXT * wctxt /* r0 */, unsigned int * data /* r0 */, int n /* r7 */) {
    // Local variables
    int cnt; // r0
}

// Range: 0x8005CDB0 -> 0x8005CDD8
int xSGWriteData(struct st_XSAVEGAME_DATA * xsgdata /* r0 */, struct st_XSAVEGAME_WRITECONTEXT * wctxt /* r0 */, float * data /* r0 */, int n /* r7 */) {
    // Local variables
    int cnt; // r0
}

// Range: 0x8005CDD8 -> 0x8005CEC0
int xSGReadData(struct st_XSAVEGAME_DATA * xsgdata /* r28 */, struct st_XSAVEGAME_READCONTEXT * rctxt /* r29 */, char * buff /* r5 */, int elesiz /* r30 */, int n /* r0 */) {
    // Local variables
    int cnt; // r31
    struct st_XSAVEGAME_CLIENT * clt; // r0
}

// Range: 0x8005CEC0 -> 0x8005CEE8
int xSGReadData(struct st_XSAVEGAME_DATA * xsgdata /* r0 */, struct st_XSAVEGAME_READCONTEXT * rctxt /* r0 */, char * buff /* r0 */, int n /* r7 */) {
    // Local variables
    int cnt; // r0
}

// Range: 0x8005CEE8 -> 0x8005CF10
int xSGReadData(struct st_XSAVEGAME_DATA * xsgdata /* r0 */, struct st_XSAVEGAME_READCONTEXT * rctxt /* r0 */, int * buff /* r0 */, int n /* r7 */) {
    // Local variables
    int cnt; // r0
}

// Range: 0x8005CF10 -> 0x8005CF38
int xSGReadData(struct st_XSAVEGAME_DATA * xsgdata /* r0 */, struct st_XSAVEGAME_READCONTEXT * rctxt /* r0 */, unsigned int * buff /* r0 */, int n /* r7 */) {
    // Local variables
    int cnt; // r0
}

// Range: 0x8005CF38 -> 0x8005CF60
int xSGReadData(struct st_XSAVEGAME_DATA * xsgdata /* r0 */, struct st_XSAVEGAME_READCONTEXT * rctxt /* r0 */, float * buff /* r0 */, int n /* r7 */) {
    // Local variables
    int cnt; // r0
}

// Range: 0x8005CF60 -> 0x8005D070
static int xSG_grab_leaders(struct st_XSAVEGAME_DATA * xsgdata /* r31 */) {
    // Local variables
    int num_found; // r28
    int i; // r27
    char readbuf[116]; // r1+0x8
    const char * namestr; // r4
    struct st_XSAVEGAME_LEADER * lead; // r26
    int rc; // r0

    // References
    // -> static struct st_XSAVEGAME_LEADER g_leaders[3];
}

// Range: 0x8005D070 -> 0x8005D0CC
int xSG_chdir_gamedir(struct st_XSAVEGAME_DATA * xsgdata /* r30 */) {
    // Local variables
    int result; // r31
    int rc; // r0
    const char * namestr; // r4
}

static char slotname[32]; // size: 0x20, address: 0x803BD8F8
// Range: 0x8005D0CC -> 0x8005D12C
char * xSG_cm_slotname(int slotidx /* r4 */) {
    // Local variables
    const char * sptr; // r0

    // References
    // -> static char slotname[32];
}

// Range: 0x8005D12C -> 0x8005D1A4
static void xSG_areaComposeLabel(char * strbuf /* r31 */) {
    // Local variables
    char stamp[256]; // r1+0x8
}

// Range: 0x8005D1A4 -> 0x8005D29C
int xSG_sv_flipinfo(struct st_XSAVEGAME_DATA * xsgdata /* r30 */) {
    // Local variables
    int result; // r31
    int i; // r28
    int rc; // r0
    struct st_XSAVEGAME_CLIENT * clt; // r27
    int cltamt; // r1+0xC
    int cltmax; // r1+0x8
}

// Range: 0x8005D29C -> 0x8005D33C
int xSG_sv_prepdest(struct st_XSAVEGAME_DATA * xsgdata /* r30 */) {
    // Local variables
    int result; // r31
}

// Range: 0x8005D33C -> 0x8005D450
int xSG_sv_flipproc(struct st_XSAVEGAME_DATA * xsgdata /* r25 */) {
    // Local variables
    int result; // r30
    int rc; // r29
    int i; // r28
    struct st_XSAVEGAME_CLIENT * clt; // r27
    char bfill; // r1+0x8
    int needfill; // r26
}

// Range: 0x8005D450 -> 0x8005D498
int xSG_sv_bldchksum(struct st_XSAVEGAME_DATA * xsgdata /* r31 */) {}

// Range: 0x8005D498 -> 0x8005D540
int xSG_smem_blkopen(struct st_XSAVEGAME_DATA * xsgdata /* r31 */) {
    // Local variables
    int ival; // r1+0x10
    int savetag; // r1+0xC
    int savever; // r1+0x8
}

// Range: 0x8005D540 -> 0x8005D5C0
int xSG_smem_blkclose(struct st_XSAVEGAME_DATA * xsgdata /* r30 */) {
    // Local variables
    char * last_bufpos; // r31
}

// Range: 0x8005D5C0 -> 0x8005D670
int xSG_smem_cltopen(struct st_XSAVEGAME_DATA * xsgdata /* r30 */, struct st_XSAVEGAME_CLIENT * clt /* r31 */) {
    // Local variables
    int dummy; // r1+0xC
    int ival; // r1+0x8
}

// Range: 0x8005D670 -> 0x8005D728
int xSG_smem_cltclose(struct st_XSAVEGAME_DATA * xsgdata /* r29 */, struct st_XSAVEGAME_CLIENT * clt /* r30 */) {
    // Local variables
    char * last_bufpos; // r31
}

// Range: 0x8005D728 -> 0x8005D808
int xSG_sv_commit(struct st_XSAVEGAME_DATA * xsgdata /* r30 */) {
    // Local variables
    int result; // r31
    int rc; // r0
    const char * name; // r4
    char browselabel[256]; // r1+0x8
}

enum en_CHGCODE {
    ISG_CHG_NONE = 0,
    ISG_CHG_TARGET = 1,
    ISG_CHG_GAMELIST = 2,
};
// Range: 0x8005D808 -> 0x8005D85C
void xSG_cb_ISGChange(enum en_CHGCODE what /* r31 */) {
    // Local variables
    struct XSGAutoData * asg; // r0
}

// Range: 0x8005D85C -> 0x8005D8DC
int xSG_ld_prepload(struct st_XSAVEGAME_DATA * xsgdata /* r30 */) {
    // Local variables
    int result; // r31
    const char * name; // r4
}

// Range: 0x8005D8DC -> 0x8005D964
int xSG_ld_readgame(struct st_XSAVEGAME_DATA * xsgdata /* r30 */) {
    // Local variables
    int result; // r31
    int rc; // r0
    const char * name; // r4
}

// Range: 0x8005D964 -> 0x8005DA48
int xSG_ld_readhead(struct st_XSAVEGAME_DATA * xsgdata /* r29 */) {
    // Local variables
    int result; // r31
    int ival; // r1+0x8
    unsigned char damagedSave; // r30
}

// Range: 0x8005DA48 -> 0x8005DAC0
int xSG_ld_validate(struct st_XSAVEGAME_DATA * xsgdata /* r30 */) {
    // Local variables
    int result; // r31
}

// Range: 0x8005DAC0 -> 0x8005DD58
int xSG_ld_findcltblk(struct st_XSAVEGAME_DATA * xsgdata /* r30 */) {
    // Local variables
    int ival; // r1+0x14
    unsigned int tag; // r1+0x10
    int maxamt; // r1+0xC
    int actamt; // r1+0x8
    struct st_XSAVEGAME_CLIENT * clt; // r5
    int i; // r0
    int found; // r29
    int rc; // r0
    struct st_XSAVEGAME_CLIENT * dfltclt; // r31
}

// Range: 0x8005DD58 -> 0x8005DE30
int xSG_ld_flipload(struct st_XSAVEGAME_DATA * xsgdata /* r27 */) {
    // Local variables
    int result; // r30
    int rc; // r0
    int i; // r29
    struct st_XSAVEGAME_CLIENT * clt; // r28
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
static struct XSGAutoData g_autodata; // size: 0x14, address: 0x803C12DC
// Range: 0x8005DE30 -> 0x8005DE38
struct XSGAutoData * xSGAutoSave_GetCache() {
    // References
    // -> static struct XSGAutoData g_autodata;
}

// Range: 0x8005DE38 -> 0x8005DE74
void xSGAutoSave_Startup() {
    // Local variables
    struct XSGAutoData * asg; // r0
}

// Range: 0x8005DE74 -> 0x8005DECC
// this: r31
int XSGAutoData::IsValid() {}

// Range: 0x8005DECC -> 0x8005DEDC
// this: r0
void XSGAutoData::MarkInvalid() {}

// Range: 0x8005DEDC -> 0x8005DF54
// this: r28
int XSGAutoData::SetCache(int targ /* r29 */, int game /* r30 */, int physicalSlot /* r31 */) {}

// Range: 0x8005DF54 -> 0x8005DFAC
// this: r31
void XSGAutoData::Discard() {}

// Range: 0x8005DFAC -> 0x8005DFEC
struct st_ISGSESSION * XSGAutoData::HWConnect(int idx_target /* r31 */) {}

// Range: 0x8005DFEC -> 0x8005E010
void XSGAutoData::HWDisconnect(struct st_ISGSESSION * isg /* r4 */) {}

// Range: 0x8005E010 -> 0x8005E03C
// this: r4
int XSGAutoData::HWCheckConnect() {}

// Range: 0x8005E03C -> 0x8005E0A8
// this: r31
void XSGAutoData::Refresh() {}

// Range: 0x8005E0A8 -> 0x8005E0FC
static void ASG_ISG_changed(enum en_CHGCODE what /* r31 */) {
    // Local variables
    struct XSGAutoData * asg; // r0
}


