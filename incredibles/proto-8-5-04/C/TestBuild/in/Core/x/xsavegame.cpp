/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
static signed int g_xsginit; // size: 0x4, address: 0x608ABC
static class st_XSAVEGAME_DATA g_xsgdata; // size: 0x20F0, address: 0x653BE0
static class st_XSAVEGAME_LEADER g_leaders[3]; // size: 0x108, address: 0x655CD0
static class XSGAutoData g_autodata; // size: 0x14, address: 0x655E20
void ASG_ISG_changed(void *, enum en_CHGCODE); // size: 0x0, address: 0x1ABC20
signed int xSG_cb_leader_svproc(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // size: 0x0, address: 0x1ACEC0
signed int xSG_cb_leader_svinfo(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // size: 0x0, address: 0x1ACFB0
signed int xSG_cb_leader_load(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // size: 0x0, address: 0x1ACE10
void xSG_cb_ISGChange(void *, enum en_CHGCODE); // size: 0x0, address: 0x1AC2B0
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
class st_ISGSESSION {};
// total size: 0x0
class st_XSAVEGAME_READCONTEXT {};
// total size: 0x0
class st_XSAVEGAME_WRITECONTEXT {};
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
enum en_SAVEGAME_MODE {
    XSG_MODE_LOAD = 10,
    XSG_MODE_SAVE = 11,
};
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

/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ABC20 -> 0x001ABC74
*/
// Range: 0x1ABC20 -> 0x1ABC74
static void ASG_ISG_changed(enum en_CHGCODE what /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1ABC20 -> 0x1ABC74
        class XSGAutoData * asg; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ABC80 -> 0x001ABCCC
*/
// Range: 0x1ABC80 -> 0x1ABCCC
// this: r16
void XSGAutoData::Discard() {
    /* anonymous block */ {
        // Range: 0x1ABC80 -> 0x1ABCCC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ABCD0 -> 0x001ABD88
*/
// Range: 0x1ABCD0 -> 0x1ABD88
// this: r16
signed int XSGAutoData::SetCache(signed int targ /* r19 */, signed int game /* r18 */, signed int physicalSlot /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1ABCD0 -> 0x1ABD88
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ABD90 -> 0x001ABDF0
*/
// Range: 0x1ABD90 -> 0x1ABDF0
// this: r16
signed int XSGAutoData::IsValid() {
    /* anonymous block */ {
        // Range: 0x1ABD90 -> 0x1ABDF0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ABDF0 -> 0x001ABDFC
*/
// Range: 0x1ABDF0 -> 0x1ABDFC
class XSGAutoData * xSGAutoSave_GetCache() {
    /* anonymous block */ {
        // Range: 0x1ABDF0 -> 0x1ABDFC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ABE00 -> 0x001ABF00
*/
// Range: 0x1ABE00 -> 0x1ABF00
signed int xSG_ld_flipload(class st_XSAVEGAME_DATA * xsgdata /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1ABE00 -> 0x1ABF00
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
    Code range: 0x001ABF00 -> 0x001AC1C8
*/
// Range: 0x1ABF00 -> 0x1AC1C8
signed int xSG_ld_findcltblk(class st_XSAVEGAME_DATA * xsgdata /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1ABF00 -> 0x1AC1C8
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
    Code range: 0x001AC1D0 -> 0x001AC2A4
*/
// Range: 0x1AC1D0 -> 0x1AC2A4
signed int xSG_ld_readhead(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1AC1D0 -> 0x1AC2A4
        signed int result; // r16
        signed int ival; // r29+0x3C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AC2B0 -> 0x001AC304
*/
// Range: 0x1AC2B0 -> 0x1AC304
void xSG_cb_ISGChange(enum en_CHGCODE what /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AC2B0 -> 0x1AC304
        class XSGAutoData * asg; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AC310 -> 0x001AC414
*/
// Range: 0x1AC310 -> 0x1AC414
signed int xSG_sv_commit(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1AC310 -> 0x1AC414
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
    Code range: 0x001AC420 -> 0x001AC4E8
*/
// Range: 0x1AC420 -> 0x1AC4E8
signed int xSG_smem_cltclose(class st_XSAVEGAME_DATA * xsgdata /* r17 */, class st_XSAVEGAME_CLIENT * clt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AC420 -> 0x1AC4E8
        char * last_bufpos; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AC4F0 -> 0x001AC570
*/
// Range: 0x1AC4F0 -> 0x1AC570
signed int xSG_smem_blkclose(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1AC4F0 -> 0x1AC570
        char * last_bufpos; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AC570 -> 0x001AC758
*/
// Range: 0x1AC570 -> 0x1AC758
signed int xSG_sv_flipproc(class st_XSAVEGAME_DATA * xsgdata /* r21 */) {
    /* anonymous block */ {
        // Range: 0x1AC570 -> 0x1AC758
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
    Code range: 0x001AC760 -> 0x001AC800
*/
// Range: 0x1AC760 -> 0x1AC800
signed int xSG_sv_prepdest(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1AC760 -> 0x1AC800
        signed int result; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AC800 -> 0x001AC91C
*/
// Range: 0x1AC800 -> 0x1AC91C
signed int xSG_sv_flipinfo(class st_XSAVEGAME_DATA * xsgdata /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1AC800 -> 0x1AC91C
        signed int result; // r19
        signed int i; // r18
        signed int rc; // r2
        class st_XSAVEGAME_CLIENT * clt; // r17
        signed int cltamt; // r29+0x6C
        signed int cltmax; // r29+0x68
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AC920 -> 0x001ACB28
*/
// Range: 0x1AC920 -> 0x1ACB28
static signed int xSG_grab_leaders(class st_XSAVEGAME_DATA * xsgdata /* r21 */) {
    /* anonymous block */ {
        // Range: 0x1AC920 -> 0x1ACB28
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
    Code range: 0x001ACB30 -> 0x001ACB3C
*/
// Range: 0x1ACB30 -> 0x1ACB3C
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, float * buff /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1ACB30 -> 0x1ACB3C
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ACB40 -> 0x001ACB4C
*/
// Range: 0x1ACB40 -> 0x1ACB4C
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, signed int * buff /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1ACB40 -> 0x1ACB4C
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ACB50 -> 0x001ACB5C
*/
// Range: 0x1ACB50 -> 0x1ACB5C
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, char * buff /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1ACB50 -> 0x1ACB5C
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ACB60 -> 0x001ACC6C
*/
// Range: 0x1ACB60 -> 0x1ACC6C
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r19 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, char * buff /* r2 */, signed int elesiz /* r18 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1ACB60 -> 0x1ACC6C
        signed int cnt; // r17
        class st_XSAVEGAME_CLIENT * clt; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ACC70 -> 0x001ACC7C
*/
// Range: 0x1ACC70 -> 0x1ACC7C
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, float * data /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1ACC70 -> 0x1ACC7C
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ACC80 -> 0x001ACC8C
*/
// Range: 0x1ACC80 -> 0x1ACC8C
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, signed int * data /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1ACC80 -> 0x1ACC8C
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ACC90 -> 0x001ACC9C
*/
// Range: 0x1ACC90 -> 0x1ACC9C
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, char * data /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1ACC90 -> 0x1ACC9C
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ACCA0 -> 0x001ACCCC
*/
// Range: 0x1ACCA0 -> 0x1ACCCC
signed int xSGWriteStrLen(char * str /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1ACCA0 -> 0x1ACCCC
        signed int len; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ACCD0 -> 0x001ACE10
*/
// Range: 0x1ACCD0 -> 0x1ACE10
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r20 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r19 */, char * data /* r2 */, signed int elesiz /* r18 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1ACCD0 -> 0x1ACE10
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
    Code range: 0x001ACE10 -> 0x001ACEC0
*/
// Range: 0x1ACE10 -> 0x1ACEC0
static signed int xSG_cb_leader_load(class st_XSAVEGAME_DATA * original_xsgdata /* r17 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1ACE10 -> 0x1ACEC0
        char fundata[32]; // r29+0x90
        class st_XSAVEGAME_LEADER discard; // r29+0x30
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ACEC0 -> 0x001ACFAC
*/
// Range: 0x1ACEC0 -> 0x1ACFAC
static signed int xSG_cb_leader_svproc(void * cltdata /* r2 */, class st_XSAVEGAME_DATA * original_xsgdata /* r18 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1ACEC0 -> 0x1ACFAC
        class st_XSAVEGAME_DATA * xsg; // r16
        class st_XSAVEGAME_LEADER leader; // r29+0x60
        char fundata[23]; // r29+0x40
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ACFB0 -> 0x001ACFC4
*/
// Range: 0x1ACFB0 -> 0x1ACFC4
static signed int xSG_cb_leader_svinfo(signed int * cur_space /* r2 */, signed int * max_fullgame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1ACFB0 -> 0x1ACFC4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ACFD0 -> 0x001AD118
*/
// Range: 0x1ACFD0 -> 0x1AD118
enum en_XSGASYNC_STATUS xSGAsyncStatus(class st_XSAVEGAME_DATA * xsgdata /* r20 */, signed int block /* r5 */, enum en_XSG_WHYFAIL * whyFail /* r19 */, char * errmsg /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1ACFD0 -> 0x1AD118
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
    Code range: 0x001AD120 -> 0x001AD2F0
*/
// Range: 0x1AD120 -> 0x1AD2F0
signed int xSGWrapup(class st_XSAVEGAME_DATA * xsgdata /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1AD120 -> 0x1AD2F0
        signed int result; // r17
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD2F0 -> 0x001AD524
*/
// Range: 0x1AD2F0 -> 0x1AD524
signed int xSGProcess(class st_XSAVEGAME_DATA * xsgdata /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1AD2F0 -> 0x1AD524
        signed int result; // r17
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD530 -> 0x001AD6A8
*/
// Range: 0x1AD530 -> 0x1AD6A8
signed int xSGSetup(class st_XSAVEGAME_DATA * xsgdata /* r20 */, signed int gidx /* r2 */, char * label /* r2 */, signed int progress /* r19 */, signed long playtime /* r18 */, signed int thumbIconIdx /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1AD530 -> 0x1AD6A8
        signed int result; // r16
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD6B0 -> 0x001AD6CC
*/
// Range: 0x1AD6B0 -> 0x1AD6CC
signed int xSGSetup(class st_XSAVEGAME_DATA * xsgdata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AD6B0 -> 0x1AD6CC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD6D0 -> 0x001AD810
*/
// Range: 0x1AD6D0 -> 0x1AD810
signed int xSGAddLoadClient(class st_XSAVEGAME_DATA * xsgdata /* r19 */, unsigned int clttag /* r18 */, void * cltdata /* r17 */, signed int (* loadfunc)(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int) /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AD6D0 -> 0x1AD810
        signed int result; // r2
        class st_XSAVEGAME_CLIENT * clt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD810 -> 0x001AD908
*/
// Range: 0x1AD810 -> 0x1AD908
signed int xSGAddSaveClient(class st_XSAVEGAME_DATA * xsgdata /* r20 */, unsigned int clttag /* r19 */, void * cltdata /* r18 */, signed int (* infofunc)(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *) /* r17 */, signed int (* procfunc)(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *) /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AD810 -> 0x1AD908
        signed int result; // r2
        class st_XSAVEGAME_CLIENT * clt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD910 -> 0x001AD9AC
*/
// Range: 0x1AD910 -> 0x1AD9AC
signed int xSGGameProgress(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AD910 -> 0x1AD9AC
        signed int idx_thum; // r18
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD9B0 -> 0x001ADA4C
*/
// Range: 0x1AD9B0 -> 0x1ADA4C
signed int xSGGameThumbIndex(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AD9B0 -> 0x1ADA4C
        signed int idx_thum; // r18
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADA50 -> 0x001ADAF4
*/
// Range: 0x1ADA50 -> 0x1ADAF4
char * xSGGameLabel(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1ADA50 -> 0x1ADAF4
        char * da_name; // r16
        class st_XSAVEGAME_LEADER * lead; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADB00 -> 0x001ADC04
*/
// Range: 0x1ADB00 -> 0x1ADC04
char * xSGGameModDate(class st_XSAVEGAME_DATA * xsgdata /* r18 */, signed int gidx /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1ADB00 -> 0x1ADC04
        char * date; // r2
        char da_date[32]; // @ 0x00655DE0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADC10 -> 0x001ADCE4
*/
// Range: 0x1ADC10 -> 0x1ADCE4
signed int xSGGameSize(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1ADC10 -> 0x1ADCE4
        signed int size; // r17
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADCF0 -> 0x001ADDCC
*/
// Range: 0x1ADCF0 -> 0x1ADDCC
signed int xSGGameIsEmpty(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1ADCF0 -> 0x1ADDCC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADDD0 -> 0x001ADDD8
*/
// Range: 0x1ADDD0 -> 0x1ADDD8
void xSGGameSet(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int gidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1ADDD0 -> 0x1ADDD8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADDE0 -> 0x001ADDE8
*/
// Range: 0x1ADDE0 -> 0x1ADDE8
unsigned char xSGCheckMemoryCard(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int index /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1ADDE0 -> 0x1ADDE8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADDF0 -> 0x001ADEE8
*/
// Range: 0x1ADDF0 -> 0x1ADEE8
signed int xSGTgtHaveRoomStartup(class st_XSAVEGAME_DATA * xsgdata /* r21 */, signed int tidx /* r20 */, signed int fsize /* r19 */, signed int slotidx /* r2 */, signed int * bytesNeeded /* r18 */, signed int * availOnDisk /* r17 */, signed int * needFile /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1ADDF0 -> 0x1ADEE8
        signed int isroom; // r2
        char fname[256]; // r29+0x70
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADEF0 -> 0x001ADFE8
*/
// Range: 0x1ADEF0 -> 0x1ADFE8
signed int xSGTgtHaveRoom(class st_XSAVEGAME_DATA * xsgdata /* r21 */, signed int tidx /* r20 */, signed int fsize /* r19 */, signed int slotidx /* r2 */, signed int * bytesNeeded /* r18 */, signed int * availOnDisk /* r17 */, signed int * needFile /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1ADEF0 -> 0x1ADFE8
        signed int isroom; // r2
        char fname[256]; // r29+0x70
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADFF0 -> 0x001AE05C
*/
// Range: 0x1ADFF0 -> 0x1AE05C
signed int xSGTgtHasGameDir(class st_XSAVEGAME_DATA * xsgdata /* r17 */, signed int tidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1ADFF0 -> 0x1AE05C
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE060 -> 0x001AE0EC
*/
// Range: 0x1AE060 -> 0x1AE0EC
signed int xSGTgtSelect(class st_XSAVEGAME_DATA * xsgdata /* r18 */, signed int tidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AE060 -> 0x1AE0EC
        signed int result; // r17
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE0F0 -> 0x001AE100
*/
// Range: 0x1AE0F0 -> 0x1AE100
signed int xSGTgtFormatTgt(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int tidx /* r2 */, signed int * canRecover /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AE0F0 -> 0x1AE100
        signed int result; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE100 -> 0x001AE184
*/
// Range: 0x1AE100 -> 0x1AE184
signed int xSGTgtIsFormat(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int tidx /* r2 */, signed int * badEncode /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1AE100 -> 0x1AE184
        signed int result; // r16
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE190 -> 0x001AE198
*/
// Range: 0x1AE190 -> 0x1AE198
signed int xSGTgtPhysSlotIdx(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int tidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AE190 -> 0x1AE198
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE1A0 -> 0x001AE1A8
*/
// Range: 0x1AE1A0 -> 0x1AE1A8
signed int xSGTgtCount(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int * max /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AE1A0 -> 0x1AE1A8
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE1B0 -> 0x001AE2D0
*/
// Range: 0x1AE1B0 -> 0x1AE2D0
signed int xSGDone(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1AE1B0 -> 0x1AE2D0
        signed int result; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE2D0 -> 0x001AE3C4
*/
// Range: 0x1AE2D0 -> 0x1AE3C4
class st_XSAVEGAME_DATA * xSGInit(enum en_SAVEGAME_MODE mode /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1AE2D0 -> 0x1AE3C4
        class st_XSAVEGAME_DATA * xsgdata; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE3D0 -> 0x001AE414
*/
// Range: 0x1AE3D0 -> 0x1AE414
signed int xSGShutdown() {
    /* anonymous block */ {
        // Range: 0x1AE3D0 -> 0x1AE414
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE420 -> 0x001AE494
*/
// Range: 0x1AE420 -> 0x1AE494
signed int xSGStartup() {
    /* anonymous block */ {
        // Range: 0x1AE420 -> 0x1AE494
    }
}


