/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int g_xsginit; // size: 0x4, address: 0x50EFB0
static class st_XSAVEGAME_DATA g_xsgdata; // size: 0x20F0, address: 0x5A0C50
static class st_XSAVEGAME_LEADER g_leaders[3]; // size: 0x108, address: 0x5A2D40
static class st_XSG_SHORTLABEL g_msglabels[32]; // size: 0x100, address: 0x0
static class XSGAutoData g_autodata; // size: 0x14, address: 0x5A2E90
void ASG_ISG_changed(void *, enum en_CHGCODE); // size: 0x0, address: 0x1FA440
signed int xSG_cb_leader_svproc(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // size: 0x0, address: 0x1FB700
signed int xSG_cb_leader_svinfo(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // size: 0x0, address: 0x1FB7F0
signed int xSG_cb_leader_load(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // size: 0x0, address: 0x1FB650
void xSG_cb_ISGChange(void *, enum en_CHGCODE); // size: 0x0, address: 0x1FAAE0
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
enum en_SAVEGAME_MODE {
    XSG_MODE_LOAD = 10,
    XSG_MODE_SAVE = 11,
};
// total size: 0x0
class st_XSAVEGAME_READCONTEXT {};
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
// total size: 0x0
class st_XSAVEGAME_WRITECONTEXT {};
// total size: 0x0
class st_ISGSESSION {};
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
enum en_XSG_TGT_NAME_FORMAT {
    XSG_NAMFMT_BASIC = 0,
    XSG_NAMFMT_SYMBOLS = 1,
    XSG_NAMFMT_PROPER = 2,
    XSG_NAMFMT_PHYSSLOT = 3,
    XSG_NAMFMT_PHYSICAL = 4,
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
enum en_XSG_WHYFAIL {
    XSG_WHYERR_NONE = 0,
    XSG_WHYERR_NOCARD = 1,
    XSG_WHYERR_NOROOM = 2,
    XSG_WHYERR_DAMAGE = 3,
    XSG_WHYERR_CARDYANKED = 4,
    XSG_WHYERR_OTHER = 5,
    XSG_WHYERR_NOMORE = 6,
};
enum en_CHGCODE {
    ISG_CHG_NONE = 0,
    ISG_CHG_TARGET = 1,
    ISG_CHG_GAMELIST = 2,
};
// total size: 0x8
class st_XSG_SHORTLABEL {
    // Members
public:
    char * msglong; // offset 0x0, size 0x4
    char * msgshort; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA440 -> 0x001FA498
*/
// Range: 0x1FA440 -> 0x1FA498
static void ASG_ISG_changed(enum en_CHGCODE what /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FA440 -> 0x1FA498
        class XSGAutoData * asg; // r6
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA4A0 -> 0x001FA4EC
*/
// Range: 0x1FA4A0 -> 0x1FA4EC
// this: r16
void XSGAutoData::Discard() {
    /* anonymous block */ {
        // Range: 0x1FA4A0 -> 0x1FA4EC
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA4F0 -> 0x001FA5B4
*/
// Range: 0x1FA4F0 -> 0x1FA5B4
// this: r16
signed int XSGAutoData::SetCache(signed int targ /* r19 */, signed int game /* r18 */, signed int physicalSlot /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1FA4F0 -> 0x1FA5B4
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA5C0 -> 0x001FA618
*/
// Range: 0x1FA5C0 -> 0x1FA618
// this: r16
signed int XSGAutoData::IsValid() {
    /* anonymous block */ {
        // Range: 0x1FA5C0 -> 0x1FA618
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA620 -> 0x001FA62C
*/
// Range: 0x1FA620 -> 0x1FA62C
class XSGAutoData * xSGAutoSave_GetCache() {
    /* anonymous block */ {
        // Range: 0x1FA620 -> 0x1FA62C
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA630 -> 0x001FA724
*/
// Range: 0x1FA630 -> 0x1FA724
signed int xSG_ld_flipload(class st_XSAVEGAME_DATA * xsgdata /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1FA630 -> 0x1FA724
        signed int result; // r19
        signed int rc; // r2
        signed int i; // r18
        class st_XSAVEGAME_CLIENT * clt; // r17
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA730 -> 0x001FA9F4
*/
// Range: 0x1FA730 -> 0x1FA9F4
signed int xSG_ld_findcltblk(class st_XSAVEGAME_DATA * xsgdata /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1FA730 -> 0x1FA9F4
        signed int ival; // r29+0x4C
        unsigned int tag; // r29+0x48
        signed int maxamt; // r29+0x44
        signed int actamt; // r29+0x40
        class st_XSAVEGAME_CLIENT * clt; // r7
        signed int i; // r6
        signed int found; // r17
        signed int rc; // r2
        class st_XSAVEGAME_CLIENT * dfltclt; // r16
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FAA00 -> 0x001FAAE0
*/
// Range: 0x1FAA00 -> 0x1FAAE0
signed int xSG_ld_readhead(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1FAA00 -> 0x1FAAE0
        signed int result; // r16
        signed int ival; // r29+0x3C
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FAAE0 -> 0x001FAB38
*/
// Range: 0x1FAAE0 -> 0x1FAB38
void xSG_cb_ISGChange(enum en_CHGCODE what /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FAAE0 -> 0x1FAB38
        class XSGAutoData * asg; // r6
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FAB40 -> 0x001FAC40
*/
// Range: 0x1FAB40 -> 0x1FAC40
signed int xSG_sv_commit(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1FAB40 -> 0x1FAC40
        signed int result; // r16
        signed int rc; // r2
        char * name; // r2
        char browselabel[64]; // r29+0x70
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FAC40 -> 0x001FAD0C
*/
// Range: 0x1FAC40 -> 0x1FAD0C
signed int xSG_smem_cltclose(class st_XSAVEGAME_DATA * xsgdata /* r17 */, class st_XSAVEGAME_CLIENT * clt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1FAC40 -> 0x1FAD0C
        char * last_bufpos; // r18
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FAD10 -> 0x001FAD90
*/
// Range: 0x1FAD10 -> 0x1FAD90
signed int xSG_smem_blkclose(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1FAD10 -> 0x1FAD90
        char * last_bufpos; // r16
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FAD90 -> 0x001FAF5C
*/
// Range: 0x1FAD90 -> 0x1FAF5C
signed int xSG_sv_flipproc(class st_XSAVEGAME_DATA * xsgdata /* r21 */) {
    /* anonymous block */ {
        // Range: 0x1FAD90 -> 0x1FAF5C
        signed int result; // r20
        signed int rc; // r19
        signed int i; // r18
        class st_XSAVEGAME_CLIENT * clt; // r17
        char bfill; // r29+0x8F
        signed int needfill; // r16
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FAF60 -> 0x001FB000
*/
// Range: 0x1FAF60 -> 0x1FB000
signed int xSG_sv_prepdest(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1FAF60 -> 0x1FB000
        signed int result; // r16
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB000 -> 0x001FB11C
*/
// Range: 0x1FB000 -> 0x1FB11C
signed int xSG_sv_flipinfo(class st_XSAVEGAME_DATA * xsgdata /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1FB000 -> 0x1FB11C
        signed int result; // r19
        signed int i; // r18
        signed int rc; // r2
        class st_XSAVEGAME_CLIENT * clt; // r17
        signed int cltamt; // r29+0x6C
        signed int cltmax; // r29+0x68
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB120 -> 0x001FB330
*/
// Range: 0x1FB120 -> 0x1FB330
static signed int xSG_grab_leaders(class st_XSAVEGAME_DATA * xsgdata /* r21 */) {
    /* anonymous block */ {
        // Range: 0x1FB120 -> 0x1FB330
        signed int num_found; // r20
        signed int i; // r19
        char readbuf[116]; // r29+0x80
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB330 -> 0x001FB33C
*/
// Range: 0x1FB330 -> 0x1FB33C
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, float * buff /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FB330 -> 0x1FB33C
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB340 -> 0x001FB34C
*/
// Range: 0x1FB340 -> 0x1FB34C
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, unsigned int * buff /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FB340 -> 0x1FB34C
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB350 -> 0x001FB35C
*/
// Range: 0x1FB350 -> 0x1FB35C
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, signed int * buff /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FB350 -> 0x1FB35C
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB360 -> 0x001FB36C
*/
// Range: 0x1FB360 -> 0x1FB36C
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, char * buff /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FB360 -> 0x1FB36C
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB370 -> 0x001FB484
*/
// Range: 0x1FB370 -> 0x1FB484
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r19 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, char * buff /* r2 */, signed int elesiz /* r18 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FB370 -> 0x1FB484
        signed int cnt; // r17
        class st_XSAVEGAME_CLIENT * clt; // r16
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB490 -> 0x001FB49C
*/
// Range: 0x1FB490 -> 0x1FB49C
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, float * data /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FB490 -> 0x1FB49C
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB4A0 -> 0x001FB4AC
*/
// Range: 0x1FB4A0 -> 0x1FB4AC
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, unsigned int * data /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FB4A0 -> 0x1FB4AC
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB4B0 -> 0x001FB4BC
*/
// Range: 0x1FB4B0 -> 0x1FB4BC
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, signed int * data /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FB4B0 -> 0x1FB4BC
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB4C0 -> 0x001FB4CC
*/
// Range: 0x1FB4C0 -> 0x1FB4CC
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, char * data /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FB4C0 -> 0x1FB4CC
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB4D0 -> 0x001FB4FC
*/
// Range: 0x1FB4D0 -> 0x1FB4FC
signed int xSGWriteStrLen(char * str /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FB4D0 -> 0x1FB4FC
        signed int len; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB500 -> 0x001FB650
*/
// Range: 0x1FB500 -> 0x1FB650
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r20 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, char * data /* r2 */, signed int elesiz /* r19 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FB500 -> 0x1FB650
        signed int cnt; // r18
        class st_XSAVEGAME_CLIENT * clt; // r17
        signed int is_ok; // r16
        void * mcprc; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB650 -> 0x001FB6F8
*/
// Range: 0x1FB650 -> 0x1FB6F8
static signed int xSG_cb_leader_load(class st_XSAVEGAME_DATA * original_xsgdata /* r17 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1FB650 -> 0x1FB6F8
        char fundata[32]; // r29+0x90
        class st_XSAVEGAME_LEADER discard; // r29+0x30
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB700 -> 0x001FB7E8
*/
// Range: 0x1FB700 -> 0x1FB7E8
static signed int xSG_cb_leader_svproc(void * cltdata /* r2 */, class st_XSAVEGAME_DATA * original_xsgdata /* r18 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1FB700 -> 0x1FB7E8
        class st_XSAVEGAME_DATA * xsg; // r16
        class st_XSAVEGAME_LEADER leader; // r29+0x60
        char fundata[23]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB7F0 -> 0x001FB804
*/
// Range: 0x1FB7F0 -> 0x1FB804
static signed int xSG_cb_leader_svinfo(signed int * cur_space /* r2 */, signed int * max_fullgame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FB7F0 -> 0x1FB804
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB810 -> 0x001FB964
*/
// Range: 0x1FB810 -> 0x1FB964
enum en_XSGASYNC_STATUS xSGAsyncStatus(class st_XSAVEGAME_DATA * xsgdata /* r20 */, signed int block /* r5 */, enum en_XSG_WHYFAIL * whyFail /* r18 */, char * errmsg /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1FB810 -> 0x1FB964
        enum en_XSGASYNC_STATUS xstat; // r17
        enum en_ASYNC_OPSTAT istat; // r2
        enum en_ASYNC_OPERR whyerr; // r16
        enum en_XSG_WHYFAIL con; // r3
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB970 -> 0x001FBB48
*/
// Range: 0x1FB970 -> 0x1FBB48
signed int xSGWrapup(class st_XSAVEGAME_DATA * xsgdata /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1FB970 -> 0x1FBB48
        signed int result; // r17
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FBB50 -> 0x001FBD8C
*/
// Range: 0x1FBB50 -> 0x1FBD8C
signed int xSGProcess(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1FBB50 -> 0x1FBD8C
        signed int result; // r16
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FBD90 -> 0x001FBF04
*/
// Range: 0x1FBD90 -> 0x1FBF04
signed int xSGSetup(class st_XSAVEGAME_DATA * xsgdata /* r20 */, signed int gidx /* r2 */, char * label /* r2 */, signed int progress /* r19 */, signed long playtime /* r18 */, signed int thumbIconIdx /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1FBD90 -> 0x1FBF04
        signed int result; // r16
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FBF10 -> 0x001FBF2C
*/
// Range: 0x1FBF10 -> 0x1FBF2C
signed int xSGSetup(class st_XSAVEGAME_DATA * xsgdata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FBF10 -> 0x1FBF2C
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FBF30 -> 0x001FC06C
*/
// Range: 0x1FBF30 -> 0x1FC06C
signed int xSGAddLoadClient(class st_XSAVEGAME_DATA * xsgdata /* r19 */, unsigned int clttag /* r18 */, void * cltdata /* r17 */, signed int (* loadfunc)(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int) /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1FBF30 -> 0x1FC06C
        signed int result; // r2
        class st_XSAVEGAME_CLIENT * clt; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC070 -> 0x001FC160
*/
// Range: 0x1FC070 -> 0x1FC160
signed int xSGAddSaveClient(class st_XSAVEGAME_DATA * xsgdata /* r20 */, unsigned int clttag /* r19 */, void * cltdata /* r18 */, signed int (* infofunc)(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *) /* r17 */, signed int (* procfunc)(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *) /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1FC070 -> 0x1FC160
        signed int result; // r2
        class st_XSAVEGAME_CLIENT * clt; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC160 -> 0x001FC1F8
*/
// Range: 0x1FC160 -> 0x1FC1F8
signed int xSGGameProgress(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1FC160 -> 0x1FC1F8
        signed int idx_thum; // r17
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC200 -> 0x001FC298
*/
// Range: 0x1FC200 -> 0x1FC298
signed int xSGGameThumbIndex(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1FC200 -> 0x1FC298
        signed int idx_thum; // r17
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC2A0 -> 0x001FC340
*/
// Range: 0x1FC2A0 -> 0x1FC340
char * xSGGameLabel(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1FC2A0 -> 0x1FC340
        char * da_name; // r16
        class st_XSAVEGAME_LEADER * lead; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC340 -> 0x001FC440
*/
// Range: 0x1FC340 -> 0x1FC440
char * xSGGameModDate(class st_XSAVEGAME_DATA * xsgdata /* r18 */, signed int gidx /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1FC340 -> 0x1FC440
        char * date; // r2
        char da_date[32]; // @ 0x005A2E50
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC440 -> 0x001FC510
*/
// Range: 0x1FC440 -> 0x1FC510
signed int xSGGameSize(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1FC440 -> 0x1FC510
        signed int size; // r17
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC510 -> 0x001FC5E8
*/
// Range: 0x1FC510 -> 0x1FC5E8
signed int xSGGameIsEmpty(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1FC510 -> 0x1FC5E8
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC5F0 -> 0x001FC5F8
*/
// Range: 0x1FC5F0 -> 0x1FC5F8
void xSGGameSet(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int gidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FC5F0 -> 0x1FC5F8
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC600 -> 0x001FC608
*/
// Range: 0x1FC600 -> 0x1FC608
unsigned char xSGCheckMemoryCard(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int index /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FC600 -> 0x1FC608
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC610 -> 0x001FC704
*/
// Range: 0x1FC610 -> 0x1FC704
signed int xSGTgtHaveRoomStartup(class st_XSAVEGAME_DATA * xsgdata /* r21 */, signed int tidx /* r20 */, signed int fsize /* r19 */, signed int slotidx /* r2 */, signed int * bytesNeeded /* r18 */, signed int * availOnDisk /* r17 */, signed int * needFile /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1FC610 -> 0x1FC704
        signed int isroom; // r2
        char fname[256]; // r29+0x70
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC710 -> 0x001FC804
*/
// Range: 0x1FC710 -> 0x1FC804
signed int xSGTgtHaveRoom(class st_XSAVEGAME_DATA * xsgdata /* r21 */, signed int tidx /* r20 */, signed int fsize /* r19 */, signed int slotidx /* r2 */, signed int * bytesNeeded /* r18 */, signed int * availOnDisk /* r17 */, signed int * needFile /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1FC710 -> 0x1FC804
        signed int isroom; // r2
        char fname[256]; // r29+0x70
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC810 -> 0x001FC87C
*/
// Range: 0x1FC810 -> 0x1FC87C
signed int xSGTgtHasGameDir(class st_XSAVEGAME_DATA * xsgdata /* r17 */, signed int tidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FC810 -> 0x1FC87C
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC880 -> 0x001FC904
*/
// Range: 0x1FC880 -> 0x1FC904
signed int xSGTgtSelect(class st_XSAVEGAME_DATA * xsgdata /* r18 */, signed int tidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FC880 -> 0x1FC904
        signed int result; // r17
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC910 -> 0x001FC920
*/
// Range: 0x1FC910 -> 0x1FC920
signed int xSGTgtFormatTgt(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int tidx /* r2 */, signed int * canRecover /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FC910 -> 0x1FC920
        signed int result; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC920 -> 0x001FC9A4
*/
// Range: 0x1FC920 -> 0x1FC9A4
signed int xSGTgtIsFormat(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int tidx /* r2 */, signed int * badEncode /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1FC920 -> 0x1FC9A4
        signed int result; // r16
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC9B0 -> 0x001FC9B8
*/
// Range: 0x1FC9B0 -> 0x1FC9B8
signed int xSGTgtPhysSlotIdx(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int tidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FC9B0 -> 0x1FC9B8
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC9C0 -> 0x001FC9C8
*/
// Range: 0x1FC9C0 -> 0x1FC9C8
signed int xSGTgtCount(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int * max /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FC9C0 -> 0x1FC9C8
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC9D0 -> 0x001FCAF0
*/
// Range: 0x1FC9D0 -> 0x1FCAF0
signed int xSGDone(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1FC9D0 -> 0x1FCAF0
        signed int result; // r16
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FCAF0 -> 0x001FCBEC
*/
// Range: 0x1FCAF0 -> 0x1FCBEC
class st_XSAVEGAME_DATA * xSGInit(enum en_SAVEGAME_MODE mode /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1FCAF0 -> 0x1FCBEC
        class st_XSAVEGAME_DATA * xsgdata; // r16
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FCBF0 -> 0x001FCC28
*/
// Range: 0x1FCBF0 -> 0x1FCC28
signed int xSGShutdown() {
    /* anonymous block */ {
        // Range: 0x1FCBF0 -> 0x1FCC28
    }
}


/*
    Compile unit: C:\SB\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FCC30 -> 0x001FCCA8
*/
// Range: 0x1FCC30 -> 0x1FCCA8
signed int xSGStartup() {
    /* anonymous block */ {
        // Range: 0x1FCC30 -> 0x1FCCA8
    }
}


