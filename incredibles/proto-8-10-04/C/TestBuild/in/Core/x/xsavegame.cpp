/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
static signed int g_xsginit; // size: 0x4, address: 0x611ECC
static class st_XSAVEGAME_DATA g_xsgdata; // size: 0x20F0, address: 0x65D090
static class st_XSAVEGAME_LEADER g_leaders[3]; // size: 0x108, address: 0x65F180
static class XSGAutoData g_autodata; // size: 0x14, address: 0x65F2D0
void ASG_ISG_changed(void *, enum en_CHGCODE); // size: 0x0, address: 0x1AC470
signed int xSG_cb_leader_svproc(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // size: 0x0, address: 0x1AD710
signed int xSG_cb_leader_svinfo(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // size: 0x0, address: 0x1AD800
signed int xSG_cb_leader_load(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // size: 0x0, address: 0x1AD660
void xSG_cb_ISGChange(void *, enum en_CHGCODE); // size: 0x0, address: 0x1ACB00
// total size: 0x14
class XSGAutoData {
    // Members
public:
    signed int flg_autodata; // offset 0x0, size 0x4
    signed int lastTarg; // offset 0x4, size 0x4
    signed int lastGame; // offset 0x8, size 0x4
    signed int lastPhysicalSlot; // offset 0xC, size 0x4
    class st_ISGSESSION * isg_monitor; // offset 0x10, size 0x4
};
// total size: 0x20F0
class st_XSAVEGAME_DATA {
    // Members
public:
    signed int gfile_idx; // offset 0x0, size 0x4
    enum en_SAVEGAME_MODE mode; // offset 0x4, size 0x4
    unsigned int stage; // offset 0x8, size 0x4
    signed int gslot; // offset 0xC, size 0x4
    char label[64]; // offset 0x10, size 0x40
    signed int progress; // offset 0x50, size 0x4
    signed int thumbIconIdx; // offset 0x54, size 0x4
    signed long playtime; // offset 0x58, size 0x4
    char * membuf; // offset 0x60, size 0x4
    signed int memsize; // offset 0x64, size 0x4
    char * buf_curpos; // offset 0x68, size 0x4
    char * buf_sizespot; // offset 0x6C, size 0x4
    char * buf_cksmspot; // offset 0x70, size 0x4
    signed int totamt; // offset 0x74, size 0x4
    unsigned int chksum; // offset 0x78, size 0x4
    unsigned int upd_tally; // offset 0x7C, size 0x4
    signed int cltneed; // offset 0x80, size 0x4
    signed int cltmax; // offset 0x84, size 0x4
    signed int chdrneed; // offset 0x88, size 0x4
    signed int stkcnt; // offset 0x8C, size 0x4
    class st_XSAVEGAME_CLIENT cltstk[128]; // offset 0x90, size 0x2000
    class st_XSAVEGAME_CLIENT dfltloadclt; // offset 0x2090, size 0x40
    unsigned int file_chksum; // offset 0x20D0, size 0x4
    unsigned int read_chksum; // offset 0x20D4, size 0x4
    signed int readsize; // offset 0x20D8, size 0x4
    char * loadbuf; // offset 0x20DC, size 0x4
    signed int loadsize; // offset 0x20E0, size 0x4
    char * walkpos; // offset 0x20E4, size 0x4
    signed int walkremain; // offset 0x20E8, size 0x4
    class st_ISGSESSION * isgsess; // offset 0x20EC, size 0x4
};
// total size: 0x0
class st_ISGSESSION {};
enum en_SAVEGAME_MODE {
    XSG_MODE_LOAD = 10,
    XSG_MODE_SAVE = 11,
};
// total size: 0x0
class st_XSAVEGAME_READCONTEXT {};
// total size: 0x40
class st_XSAVEGAME_CLIENT {
    // Members
public:
    unsigned int idtag; // offset 0x0, size 0x4
    signed int (* cltinfo)(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // offset 0x4, size 0x4
    signed int (* cltproc)(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // offset 0x8, size 0x4
    signed int (* cltload)(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // offset 0xC, size 0x4
    void * cltdata; // offset 0x10, size 0x4
    signed int needamt; // offset 0x14, size 0x4
    signed int maxamt; // offset 0x18, size 0x4
    signed int realamt; // offset 0x1C, size 0x4
    char * buf_sizepos; // offset 0x20, size 0x4
    char * buf_maxpos; // offset 0x24, size 0x4
    signed int blokact; // offset 0x28, size 0x4
    signed int blokmax; // offset 0x2C, size 0x4
    char * blokpos; // offset 0x30, size 0x4
    char * readpos; // offset 0x34, size 0x4
    signed int readamt; // offset 0x38, size 0x4
    signed int readremain; // offset 0x3C, size 0x4
};
// total size: 0x0
class st_XSAVEGAME_WRITECONTEXT {};
enum en_XSGASYNC_STATUS {
    XSG_ASTAT_NOOP = 0,
    XSG_ASTAT_INPROG = 1,
    XSG_ASTAT_SUCCESS = 2,
    XSG_ASTAT_FAILED = 3,
};
enum en_CHGCODE {
    ISG_CHG_NONE = 0,
    ISG_CHG_TARGET = 1,
    ISG_CHG_GAMELIST = 2,
};
enum en_XSG_TGT_NAME_FORMAT {
    XSG_NAMFMT_BASIC = 0,
    XSG_NAMFMT_SYMBOLS = 1,
    XSG_NAMFMT_PROPER = 2,
    XSG_NAMFMT_PHYSSLOT = 3,
    XSG_NAMFMT_PHYSICAL = 4,
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
// total size: 0x58
class st_XSAVEGAME_LEADER {
    // Members
public:
    char gameLabel[64]; // offset 0x0, size 0x40
    signed int progress; // offset 0x40, size 0x4
    signed long gametime; // offset 0x48, size 0x4
    char thumbIconIdx; // offset 0x50, size 0x1
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

/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AC470 -> 0x001AC4C4
*/
// Range: 0x1AC470 -> 0x1AC4C4
static void ASG_ISG_changed(enum en_CHGCODE what /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AC470 -> 0x1AC4C4
        class XSGAutoData * asg; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AC4D0 -> 0x001AC51C
*/
// Range: 0x1AC4D0 -> 0x1AC51C
// this: r16
void XSGAutoData::Discard() {
    /* anonymous block */ {
        // Range: 0x1AC4D0 -> 0x1AC51C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AC520 -> 0x001AC5D8
*/
// Range: 0x1AC520 -> 0x1AC5D8
// this: r16
signed int XSGAutoData::SetCache(signed int targ /* r19 */, signed int game /* r18 */, signed int physicalSlot /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1AC520 -> 0x1AC5D8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AC5E0 -> 0x001AC640
*/
// Range: 0x1AC5E0 -> 0x1AC640
// this: r16
signed int XSGAutoData::IsValid() {
    /* anonymous block */ {
        // Range: 0x1AC5E0 -> 0x1AC640
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AC640 -> 0x001AC64C
*/
// Range: 0x1AC640 -> 0x1AC64C
class XSGAutoData * xSGAutoSave_GetCache() {
    /* anonymous block */ {
        // Range: 0x1AC640 -> 0x1AC64C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AC650 -> 0x001AC750
*/
// Range: 0x1AC650 -> 0x1AC750
signed int xSG_ld_flipload(class st_XSAVEGAME_DATA * xsgdata /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1AC650 -> 0x1AC750
        signed int result; // r19
        signed int rc; // r2
        signed int i; // r18
        class st_XSAVEGAME_CLIENT * clt; // r17
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AC750 -> 0x001ACA18
*/
// Range: 0x1AC750 -> 0x1ACA18
signed int xSG_ld_findcltblk(class st_XSAVEGAME_DATA * xsgdata /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1AC750 -> 0x1ACA18
        signed int ival; // r29+0x4C
        unsigned int tag; // r29+0x48
        signed int maxamt; // r29+0x44
        signed int actamt; // r29+0x40
        class st_XSAVEGAME_CLIENT * clt; // r2
        signed int i; // r7
        signed int found; // r17
        signed int rc; // r2
        class st_XSAVEGAME_CLIENT * dfltclt; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ACA20 -> 0x001ACAF4
*/
// Range: 0x1ACA20 -> 0x1ACAF4
signed int xSG_ld_readhead(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1ACA20 -> 0x1ACAF4
        signed int result; // r16
        signed int ival; // r29+0x3C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ACB00 -> 0x001ACB54
*/
// Range: 0x1ACB00 -> 0x1ACB54
void xSG_cb_ISGChange(enum en_CHGCODE what /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1ACB00 -> 0x1ACB54
        class XSGAutoData * asg; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ACB60 -> 0x001ACC64
*/
// Range: 0x1ACB60 -> 0x1ACC64
signed int xSG_sv_commit(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1ACB60 -> 0x1ACC64
        signed int result; // r16
        signed int rc; // r2
        char * name; // r2
        char browselabel[64]; // r29+0x70
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ACC70 -> 0x001ACD38
*/
// Range: 0x1ACC70 -> 0x1ACD38
signed int xSG_smem_cltclose(class st_XSAVEGAME_DATA * xsgdata /* r17 */, class st_XSAVEGAME_CLIENT * clt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1ACC70 -> 0x1ACD38
        char * last_bufpos; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ACD40 -> 0x001ACDC0
*/
// Range: 0x1ACD40 -> 0x1ACDC0
signed int xSG_smem_blkclose(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1ACD40 -> 0x1ACDC0
        char * last_bufpos; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ACDC0 -> 0x001ACFA8
*/
// Range: 0x1ACDC0 -> 0x1ACFA8
signed int xSG_sv_flipproc(class st_XSAVEGAME_DATA * xsgdata /* r21 */) {
    /* anonymous block */ {
        // Range: 0x1ACDC0 -> 0x1ACFA8
        signed int result; // r22
        signed int rc; // r2
        signed int i; // r20
        class st_XSAVEGAME_CLIENT * clt; // r19
        char bfill; // r29+0x8F
        signed int needfill; // r18
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ACFB0 -> 0x001AD050
*/
// Range: 0x1ACFB0 -> 0x1AD050
signed int xSG_sv_prepdest(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1ACFB0 -> 0x1AD050
        signed int result; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD050 -> 0x001AD16C
*/
// Range: 0x1AD050 -> 0x1AD16C
signed int xSG_sv_flipinfo(class st_XSAVEGAME_DATA * xsgdata /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1AD050 -> 0x1AD16C
        signed int result; // r19
        signed int i; // r18
        signed int rc; // r2
        class st_XSAVEGAME_CLIENT * clt; // r2
        signed int cltamt; // r29+0x6C
        signed int cltmax; // r29+0x68
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD170 -> 0x001AD378
*/
// Range: 0x1AD170 -> 0x1AD378
static signed int xSG_grab_leaders(class st_XSAVEGAME_DATA * xsgdata /* r21 */) {
    /* anonymous block */ {
        // Range: 0x1AD170 -> 0x1AD378
        signed int num_found; // r20
        signed int i; // r19
        char readbuf[116]; // r29+0x80
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD380 -> 0x001AD38C
*/
// Range: 0x1AD380 -> 0x1AD38C
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, float * buff /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AD380 -> 0x1AD38C
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD390 -> 0x001AD39C
*/
// Range: 0x1AD390 -> 0x1AD39C
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, signed int * buff /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AD390 -> 0x1AD39C
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD3A0 -> 0x001AD3AC
*/
// Range: 0x1AD3A0 -> 0x1AD3AC
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, char * buff /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AD3A0 -> 0x1AD3AC
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD3B0 -> 0x001AD4BC
*/
// Range: 0x1AD3B0 -> 0x1AD4BC
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r19 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, char * buff /* r2 */, signed int elesiz /* r18 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AD3B0 -> 0x1AD4BC
        signed int cnt; // r17
        class st_XSAVEGAME_CLIENT * clt; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD4C0 -> 0x001AD4CC
*/
// Range: 0x1AD4C0 -> 0x1AD4CC
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, float * data /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AD4C0 -> 0x1AD4CC
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD4D0 -> 0x001AD4DC
*/
// Range: 0x1AD4D0 -> 0x1AD4DC
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, signed int * data /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AD4D0 -> 0x1AD4DC
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD4E0 -> 0x001AD4EC
*/
// Range: 0x1AD4E0 -> 0x1AD4EC
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, char * data /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AD4E0 -> 0x1AD4EC
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD4F0 -> 0x001AD51C
*/
// Range: 0x1AD4F0 -> 0x1AD51C
signed int xSGWriteStrLen(char * str /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AD4F0 -> 0x1AD51C
        signed int len; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD520 -> 0x001AD660
*/
// Range: 0x1AD520 -> 0x1AD660
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r20 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r19 */, char * data /* r2 */, signed int elesiz /* r18 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AD520 -> 0x1AD660
        signed int cnt; // r17
        class st_XSAVEGAME_CLIENT * clt; // r2
        signed int is_ok; // r16
        void * mcprc; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD660 -> 0x001AD710
*/
// Range: 0x1AD660 -> 0x1AD710
static signed int xSG_cb_leader_load(class st_XSAVEGAME_DATA * original_xsgdata /* r17 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AD660 -> 0x1AD710
        char fundata[32]; // r29+0x90
        class st_XSAVEGAME_LEADER discard; // r29+0x30
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD710 -> 0x001AD7FC
*/
// Range: 0x1AD710 -> 0x1AD7FC
static signed int xSG_cb_leader_svproc(void * cltdata /* r18 */, class st_XSAVEGAME_DATA * original_xsgdata /* r17 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AD710 -> 0x1AD7FC
        class st_XSAVEGAME_DATA * xsg; // r2
        class st_XSAVEGAME_LEADER leader; // r29+0x60
        char fundata[23]; // r29+0x40
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD800 -> 0x001AD814
*/
// Range: 0x1AD800 -> 0x1AD814
static signed int xSG_cb_leader_svinfo(signed int * cur_space /* r2 */, signed int * max_fullgame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AD800 -> 0x1AD814
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD820 -> 0x001AD968
*/
// Range: 0x1AD820 -> 0x1AD968
enum en_XSGASYNC_STATUS xSGAsyncStatus(class st_XSAVEGAME_DATA * xsgdata /* r20 */, signed int block /* r5 */, enum en_XSG_WHYFAIL * whyFail /* r19 */, char * errmsg /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1AD820 -> 0x1AD968
        enum en_XSGASYNC_STATUS xstat; // r17
        enum en_ASYNC_OPSTAT istat; // r2
        enum en_ASYNC_OPERR whyerr; // r16
        enum en_XSG_WHYFAIL con; // r3
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD970 -> 0x001ADB38
*/
// Range: 0x1AD970 -> 0x1ADB38
signed int xSGWrapup(class st_XSAVEGAME_DATA * xsgdata /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1AD970 -> 0x1ADB38
        signed int result; // r17
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADB40 -> 0x001ADD74
*/
// Range: 0x1ADB40 -> 0x1ADD74
signed int xSGProcess(class st_XSAVEGAME_DATA * xsgdata /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1ADB40 -> 0x1ADD74
        signed int result; // r17
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADD80 -> 0x001ADEF8
*/
// Range: 0x1ADD80 -> 0x1ADEF8
signed int xSGSetup(class st_XSAVEGAME_DATA * xsgdata /* r20 */, signed int gidx /* r2 */, char * label /* r2 */, signed int progress /* r19 */, signed long playtime /* r18 */, signed int thumbIconIdx /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1ADD80 -> 0x1ADEF8
        signed int result; // r16
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADF00 -> 0x001ADF1C
*/
// Range: 0x1ADF00 -> 0x1ADF1C
signed int xSGSetup(class st_XSAVEGAME_DATA * xsgdata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1ADF00 -> 0x1ADF1C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADF20 -> 0x001AE060
*/
// Range: 0x1ADF20 -> 0x1AE060
signed int xSGAddLoadClient(class st_XSAVEGAME_DATA * xsgdata /* r19 */, unsigned int clttag /* r18 */, void * cltdata /* r17 */, signed int (* loadfunc)(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int) /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1ADF20 -> 0x1AE060
        signed int result; // r2
        class st_XSAVEGAME_CLIENT * clt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE060 -> 0x001AE158
*/
// Range: 0x1AE060 -> 0x1AE158
signed int xSGAddSaveClient(class st_XSAVEGAME_DATA * xsgdata /* r20 */, unsigned int clttag /* r19 */, void * cltdata /* r18 */, signed int (* infofunc)(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *) /* r17 */, signed int (* procfunc)(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *) /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AE060 -> 0x1AE158
        signed int result; // r2
        class st_XSAVEGAME_CLIENT * clt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE160 -> 0x001AE1FC
*/
// Range: 0x1AE160 -> 0x1AE1FC
signed int xSGGameProgress(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AE160 -> 0x1AE1FC
        signed int idx_thum; // r18
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE200 -> 0x001AE29C
*/
// Range: 0x1AE200 -> 0x1AE29C
signed int xSGGameThumbIndex(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AE200 -> 0x1AE29C
        signed int idx_thum; // r18
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE2A0 -> 0x001AE344
*/
// Range: 0x1AE2A0 -> 0x1AE344
char * xSGGameLabel(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1AE2A0 -> 0x1AE344
        char * da_name; // r16
        class st_XSAVEGAME_LEADER * lead; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE350 -> 0x001AE454
*/
// Range: 0x1AE350 -> 0x1AE454
char * xSGGameModDate(class st_XSAVEGAME_DATA * xsgdata /* r18 */, signed int gidx /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1AE350 -> 0x1AE454
        char * date; // r2
        char da_date[32]; // @ 0x0065F290
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE460 -> 0x001AE534
*/
// Range: 0x1AE460 -> 0x1AE534
signed int xSGGameSize(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1AE460 -> 0x1AE534
        signed int size; // r17
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE540 -> 0x001AE61C
*/
// Range: 0x1AE540 -> 0x1AE61C
signed int xSGGameIsEmpty(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1AE540 -> 0x1AE61C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE620 -> 0x001AE628
*/
// Range: 0x1AE620 -> 0x1AE628
void xSGGameSet(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int gidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AE620 -> 0x1AE628
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE630 -> 0x001AE638
*/
// Range: 0x1AE630 -> 0x1AE638
unsigned char xSGCheckMemoryCard(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int index /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AE630 -> 0x1AE638
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE640 -> 0x001AE738
*/
// Range: 0x1AE640 -> 0x1AE738
signed int xSGTgtHaveRoomStartup(class st_XSAVEGAME_DATA * xsgdata /* r21 */, signed int tidx /* r20 */, signed int fsize /* r19 */, signed int slotidx /* r2 */, signed int * bytesNeeded /* r18 */, signed int * availOnDisk /* r17 */, signed int * needFile /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AE640 -> 0x1AE738
        signed int isroom; // r2
        char fname[256]; // r29+0x70
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE740 -> 0x001AE838
*/
// Range: 0x1AE740 -> 0x1AE838
signed int xSGTgtHaveRoom(class st_XSAVEGAME_DATA * xsgdata /* r21 */, signed int tidx /* r20 */, signed int fsize /* r19 */, signed int slotidx /* r2 */, signed int * bytesNeeded /* r18 */, signed int * availOnDisk /* r17 */, signed int * needFile /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AE740 -> 0x1AE838
        signed int isroom; // r2
        char fname[256]; // r29+0x70
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE840 -> 0x001AE8AC
*/
// Range: 0x1AE840 -> 0x1AE8AC
signed int xSGTgtHasGameDir(class st_XSAVEGAME_DATA * xsgdata /* r17 */, signed int tidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AE840 -> 0x1AE8AC
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE8B0 -> 0x001AE93C
*/
// Range: 0x1AE8B0 -> 0x1AE93C
signed int xSGTgtSelect(class st_XSAVEGAME_DATA * xsgdata /* r18 */, signed int tidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AE8B0 -> 0x1AE93C
        signed int result; // r17
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE940 -> 0x001AE950
*/
// Range: 0x1AE940 -> 0x1AE950
signed int xSGTgtFormatTgt(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int tidx /* r2 */, signed int * canRecover /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AE940 -> 0x1AE950
        signed int result; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE950 -> 0x001AE9D4
*/
// Range: 0x1AE950 -> 0x1AE9D4
signed int xSGTgtIsFormat(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int tidx /* r2 */, signed int * badEncode /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1AE950 -> 0x1AE9D4
        signed int result; // r16
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE9E0 -> 0x001AE9E8
*/
// Range: 0x1AE9E0 -> 0x1AE9E8
signed int xSGTgtPhysSlotIdx(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int tidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AE9E0 -> 0x1AE9E8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE9F0 -> 0x001AE9F8
*/
// Range: 0x1AE9F0 -> 0x1AE9F8
signed int xSGTgtCount(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int * max /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AE9F0 -> 0x1AE9F8
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AEA00 -> 0x001AEB20
*/
// Range: 0x1AEA00 -> 0x1AEB20
signed int xSGDone(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1AEA00 -> 0x1AEB20
        signed int result; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AEB20 -> 0x001AEC14
*/
// Range: 0x1AEB20 -> 0x1AEC14
class st_XSAVEGAME_DATA * xSGInit(enum en_SAVEGAME_MODE mode /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1AEB20 -> 0x1AEC14
        class st_XSAVEGAME_DATA * xsgdata; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AEC20 -> 0x001AEC64
*/
// Range: 0x1AEC20 -> 0x1AEC64
signed int xSGShutdown() {
    /* anonymous block */ {
        // Range: 0x1AEC20 -> 0x1AEC64
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AEC70 -> 0x001AECE4
*/
// Range: 0x1AEC70 -> 0x1AECE4
signed int xSGStartup() {
    /* anonymous block */ {
        // Range: 0x1AEC70 -> 0x1AECE4
    }
}


