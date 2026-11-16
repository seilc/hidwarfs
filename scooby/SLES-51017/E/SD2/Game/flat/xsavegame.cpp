/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int g_xsginit; // size: 0x4, address: 0x3589F8
static class st_XSAVEGAME_DATA g_xsgdata; // size: 0x20F0, address: 0x2B1180
static class st_XSAVEGAME_LEADER g_leaders[8]; // size: 0x280, address: 0x2B3270
signed int xSG_cb_leader_svproc(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // size: 0x0, address: 0x18D600
signed int xSG_cb_leader_svinfo(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // size: 0x0, address: 0x18D6F0
signed int xSG_cb_leader_load(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // size: 0x0, address: 0x18D550
void xSG_cb_ISGChange(void *, enum en_CHGCODE); // size: 0x0, address: 0x18CA60
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
// total size: 0x20F0
class st_XSAVEGAME_DATA {
    // Members
public:
    signed int gfile_idx; // offset 0x0, size 0x4
    enum en_SAVEGAME_MODE mode; // offset 0x4, size 0x4
    unsigned int stage; // offset 0x8, size 0x4
    signed int gslot; // offset 0xC, size 0x4
    char label[64]; // offset 0x10, size 0x40
    signed int thumIndex; // offset 0x50, size 0x4
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
class st_XSAVEGAME_WRITECONTEXT {};
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
// total size: 0x50
class st_XSAVEGAME_LEADER {
    // Members
public:
    char gameLabel[64]; // offset 0x0, size 0x40
    signed int thumIconIndex; // offset 0x40, size 0x4
    signed long gametime; // offset 0x48, size 0x4
};
// total size: 0x0
class st_ISGSESSION {};
enum en_ASYNC_OPSTAT {
    ISG_OPSTAT_FAILURE = -1,
    ISG_OPSTAT_INPROG = 0,
    ISG_OPSTAT_SUCCESS = 1,
};

/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C5D0 -> 0x0018C6BC
*/
// Range: 0x18C5D0 -> 0x18C6BC
signed int xSG_ld_flipload(class st_XSAVEGAME_DATA * xsgdata /* r20 */) {
    /* anonymous block */ {
        // Range: 0x18C5D0 -> 0x18C6BC
        class st_XSAVEGAME_CLIENT * clt; // r18
        signed int i; // r17
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C6C0 -> 0x0018C978
*/
// Range: 0x18C6C0 -> 0x18C978
signed int xSG_ld_findcltblk(class st_XSAVEGAME_DATA * xsgdata /* r18 */) {
    /* anonymous block */ {
        // Range: 0x18C6C0 -> 0x18C978
        class st_XSAVEGAME_CLIENT * dfltclt; // r17
        signed int rc; // r2
        signed int found; // r16
        signed int i; // r4
        class st_XSAVEGAME_CLIENT * clt; // r3
        signed int actamt; // r29+0x4C
        signed int maxamt; // r29+0x48
        unsigned int tag; // r29+0x44
        signed int ival; // r29+0x40
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C980 -> 0x0018CA54
*/
// Range: 0x18C980 -> 0x18CA54
signed int xSG_ld_readhead(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18C980 -> 0x18CA54
        signed int ival; // r29+0x3C
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CA60 -> 0x0018CA68
*/
// Range: 0x18CA60 -> 0x18CA68
void xSG_cb_ISGChange() {
    /* anonymous block */ {
        // Range: 0x18CA60 -> 0x18CA68
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CA70 -> 0x0018CB04
*/
// Range: 0x18CA70 -> 0x18CB04
signed int xSG_sv_commit(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18CA70 -> 0x18CB04
        char * name; // r2
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CB10 -> 0x0018CBD8
*/
// Range: 0x18CB10 -> 0x18CBD8
signed int xSG_smem_cltclose(class st_XSAVEGAME_DATA * xsgdata /* r17 */, class st_XSAVEGAME_CLIENT * clt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x18CB10 -> 0x18CBD8
        char * last_bufpos; // r18
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CBE0 -> 0x0018CC60
*/
// Range: 0x18CBE0 -> 0x18CC60
signed int xSG_smem_blkclose(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18CBE0 -> 0x18CC60
        char * last_bufpos; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CC60 -> 0x0018CE1C
*/
// Range: 0x18CC60 -> 0x18CE1C
signed int xSG_sv_flipproc(class st_XSAVEGAME_DATA * xsgdata /* r21 */) {
    /* anonymous block */ {
        // Range: 0x18CC60 -> 0x18CE1C
        signed int needfill; // r19
        char bfill; // r29+0x8F
        class st_XSAVEGAME_CLIENT * clt; // r18
        signed int i; // r17
        signed int rc; // r16
        signed int result; // r22
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CE20 -> 0x0018CEB8
*/
// Range: 0x18CE20 -> 0x18CEB8
signed int xSG_sv_prepdest(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18CE20 -> 0x18CEB8
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CEC0 -> 0x0018CFCC
*/
// Range: 0x18CEC0 -> 0x18CFCC
signed int xSG_sv_flipinfo(class st_XSAVEGAME_DATA * xsgdata /* r20 */) {
    /* anonymous block */ {
        // Range: 0x18CEC0 -> 0x18CFCC
        signed int cltmax; // r29+0x6C
        signed int cltamt; // r29+0x68
        class st_XSAVEGAME_CLIENT * clt; // r18
        signed int rc; // r2
        signed int i; // r17
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CFD0 -> 0x0018D034
*/
// Range: 0x18CFD0 -> 0x18D034
char * xSG_cm_slotname(signed int slotidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18CFD0 -> 0x18D034
        char * sptr; // r2
        char slotname[32]; // @ 0x002B3530
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D040 -> 0x0018D098
*/
// Range: 0x18D040 -> 0x18D098
signed int xSG_chdir_gamedir(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18D040 -> 0x18D098
        char * namestr; // r2
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D0A0 -> 0x0018D258
*/
// Range: 0x18D0A0 -> 0x18D258
static signed int xSG_grab_leaders(class st_XSAVEGAME_DATA * xsgdata /* r20 */) {
    /* anonymous block */ {
        // Range: 0x18D0A0 -> 0x18D258
        signed int rc; // r2
        char readbuf[256]; // r29+0x70
        signed int i; // r17
        signed int num_found; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D260 -> 0x0018D26C
*/
// Range: 0x18D260 -> 0x18D26C
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, float * buff /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D260 -> 0x18D26C
        signed int cnt; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D270 -> 0x0018D27C
*/
// Range: 0x18D270 -> 0x18D27C
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, unsigned int * buff /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D270 -> 0x18D27C
        signed int cnt; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D280 -> 0x0018D28C
*/
// Range: 0x18D280 -> 0x18D28C
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, signed int * buff /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D280 -> 0x18D28C
        signed int cnt; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D290 -> 0x0018D29C
*/
// Range: 0x18D290 -> 0x18D29C
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, char * buff /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D290 -> 0x18D29C
        signed int cnt; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D2A0 -> 0x0018D3AC
*/
// Range: 0x18D2A0 -> 0x18D3AC
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r19 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, char * buff /* r2 */, signed int elesiz /* r18 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D2A0 -> 0x18D3AC
        class st_XSAVEGAME_CLIENT * clt; // r17
        signed int cnt; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D3B0 -> 0x0018D3BC
*/
// Range: 0x18D3B0 -> 0x18D3BC
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, float * data /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D3B0 -> 0x18D3BC
        signed int cnt; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D3C0 -> 0x0018D3CC
*/
// Range: 0x18D3C0 -> 0x18D3CC
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, unsigned int * data /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D3C0 -> 0x18D3CC
        signed int cnt; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D3D0 -> 0x0018D3DC
*/
// Range: 0x18D3D0 -> 0x18D3DC
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, signed int * data /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D3D0 -> 0x18D3DC
        signed int cnt; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D3E0 -> 0x0018D3EC
*/
// Range: 0x18D3E0 -> 0x18D3EC
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, char * data /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D3E0 -> 0x18D3EC
        signed int cnt; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D3F0 -> 0x0018D41C
*/
// Range: 0x18D3F0 -> 0x18D41C
signed int xSGWriteStrLen(char * str /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D3F0 -> 0x18D41C
        signed int len; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D420 -> 0x0018D550
*/
// Range: 0x18D420 -> 0x18D550
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r20 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, char * data /* r2 */, signed int elesiz /* r19 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D420 -> 0x18D550
        void * mcprc; // r2
        signed int is_ok; // r18
        class st_XSAVEGAME_CLIENT * clt; // r17
        signed int cnt; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D550 -> 0x0018D5FC
*/
// Range: 0x18D550 -> 0x18D5FC
static signed int xSG_cb_leader_load(class st_XSAVEGAME_DATA * original_xsgdata /* r17 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x18D550 -> 0x18D5FC
        class st_XSAVEGAME_LEADER discard; // r29+0x50
        char fundata[32]; // r29+0x30
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D600 -> 0x0018D6EC
*/
// Range: 0x18D600 -> 0x18D6EC
static signed int xSG_cb_leader_svproc(void * cltdata /* r2 */, class st_XSAVEGAME_DATA * original_xsgdata /* r18 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18D600 -> 0x18D6EC
        char fundata[23]; // r29+0x90
        class st_XSAVEGAME_LEADER leader; // r29+0x40
        class st_XSAVEGAME_DATA * xsg; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D6F0 -> 0x0018D704
*/
// Range: 0x18D6F0 -> 0x18D704
static signed int xSG_cb_leader_svinfo(signed int * cur_space /* r2 */, signed int * max_fullgame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D6F0 -> 0x18D704
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D710 -> 0x0018D7A8
*/
// Range: 0x18D710 -> 0x18D7A8
enum en_XSGASYNC_STATUS xSGAsyncStatus(class st_XSAVEGAME_DATA * xsgdata /* r18 */, signed int block /* r5 */, char * errmsg /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18D710 -> 0x18D7A8
        enum en_ASYNC_OPSTAT istat; // r2
        enum en_XSGASYNC_STATUS xstat; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D7B0 -> 0x0018D918
*/
// Range: 0x18D7B0 -> 0x18D918
signed int xSGWrapup(class st_XSAVEGAME_DATA * xsgdata /* r18 */) {
    /* anonymous block */ {
        // Range: 0x18D7B0 -> 0x18D918
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D920 -> 0x0018DB3C
*/
// Range: 0x18D920 -> 0x18DB3C
signed int xSGProcess(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18D920 -> 0x18DB3C
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DB40 -> 0x0018DC98
*/
// Range: 0x18DB40 -> 0x18DC98
signed int xSGSetup(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r2 */, char * label /* r2 */, signed int thumIdx /* r18 */, signed long playtime /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18DB40 -> 0x18DC98
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DCA0 -> 0x0018DCB8
*/
// Range: 0x18DCA0 -> 0x18DCB8
signed int xSGSetup(class st_XSAVEGAME_DATA * xsgdata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18DCA0 -> 0x18DCB8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DCC0 -> 0x0018DDF0
*/
// Range: 0x18DCC0 -> 0x18DDF0
signed int xSGAddLoadClient(class st_XSAVEGAME_DATA * xsgdata /* r19 */, unsigned int clttag /* r18 */, void * cltdata /* r17 */, signed int (* loadfunc)(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int) /* r16 */) {
    /* anonymous block */ {
        // Range: 0x18DCC0 -> 0x18DDF0
        class st_XSAVEGAME_CLIENT * clt; // r2
        signed int result; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DDF0 -> 0x0018DEDC
*/
// Range: 0x18DDF0 -> 0x18DEDC
signed int xSGAddSaveClient(class st_XSAVEGAME_DATA * xsgdata /* r20 */, unsigned int clttag /* r19 */, void * cltdata /* r18 */, signed int (* infofunc)(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *) /* r17 */, signed int (* procfunc)(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *) /* r16 */) {
    /* anonymous block */ {
        // Range: 0x18DDF0 -> 0x18DEDC
        class st_XSAVEGAME_CLIENT * clt; // r2
        signed int result; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DEE0 -> 0x0018DF78
*/
// Range: 0x18DEE0 -> 0x18DF78
signed int xSGGameThumIndex(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r18 */) {
    /* anonymous block */ {
        // Range: 0x18DEE0 -> 0x18DF78
        signed int idx_thum; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DF80 -> 0x0018E01C
*/
// Range: 0x18DF80 -> 0x18E01C
char * xSGGameLabel(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r18 */) {
    /* anonymous block */ {
        // Range: 0x18DF80 -> 0x18E01C
        class st_XSAVEGAME_LEADER * lead; // r2
        char * da_name; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E020 -> 0x0018E0FC
*/
// Range: 0x18E020 -> 0x18E0FC
char * xSGGameModDate(class st_XSAVEGAME_DATA * xsgdata /* r18 */, signed int gidx /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18E020 -> 0x18E0FC
        char da_date[32]; // @ 0x002B34F0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E100 -> 0x0018E19C
*/
// Range: 0x18E100 -> 0x18E19C
signed int xSGGameIsEmpty(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r18 */) {
    /* anonymous block */ {
        // Range: 0x18E100 -> 0x18E19C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E1A0 -> 0x0018E1A8
*/
// Range: 0x18E1A0 -> 0x18E1A8
void xSGGameSet(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int gidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18E1A0 -> 0x18E1A8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E1B0 -> 0x0018E298
*/
// Range: 0x18E1B0 -> 0x18E298
signed int xSGTgtHaveRoom(class st_XSAVEGAME_DATA * xsgdata /* r20 */, signed int tidx /* r19 */, signed int fsize /* r18 */, signed int slotidx /* r2 */, signed int * bytesNeeded /* r17 */, signed int * availOnDisk /* r16 */) {
    /* anonymous block */ {
        // Range: 0x18E1B0 -> 0x18E298
        char fname[256]; // r29+0x60
        signed int isroom; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E2A0 -> 0x0018E304
*/
// Range: 0x18E2A0 -> 0x18E304
signed int xSGTgtHasGameDir(class st_XSAVEGAME_DATA * xsgdata /* r17 */, signed int tidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18E2A0 -> 0x18E304
        signed int rc; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E310 -> 0x0018E38C
*/
// Range: 0x18E310 -> 0x18E38C
signed int xSGTgtSelect(class st_XSAVEGAME_DATA * xsgdata /* r18 */, signed int tidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18E310 -> 0x18E38C
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E390 -> 0x0018E39C
*/
// Range: 0x18E390 -> 0x18E39C
signed int xSGTgtFormatTgt(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int tidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18E390 -> 0x18E39C
        signed int result; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E3A0 -> 0x0018E3C4
*/
// Range: 0x18E3A0 -> 0x18E3C4
signed int xSGTgtIsFormat(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int tidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18E3A0 -> 0x18E3C4
        unsigned int rc; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E3D0 -> 0x0018E3D8
*/
// Range: 0x18E3D0 -> 0x18E3D8
signed int xSGTgtPhysSlotIdx(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int tidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18E3D0 -> 0x18E3D8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E3E0 -> 0x0018E3E8
*/
// Range: 0x18E3E0 -> 0x18E3E8
signed int xSGTgtCount(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int * max /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18E3E0 -> 0x18E3E8
        signed int cnt; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E3F0 -> 0x0018E4EC
*/
// Range: 0x18E3F0 -> 0x18E4EC
signed int xSGDone(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18E3F0 -> 0x18E4EC
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E4F0 -> 0x0018E5DC
*/
// Range: 0x18E4F0 -> 0x18E5DC
class st_XSAVEGAME_DATA * xSGInit(enum en_SAVEGAME_MODE mode /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18E4F0 -> 0x18E5DC
        class st_XSAVEGAME_DATA * xsgdata; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E5E0 -> 0x0018E618
*/
// Range: 0x18E5E0 -> 0x18E618
signed int xSGShutdown() {
    /* anonymous block */ {
        // Range: 0x18E5E0 -> 0x18E618
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018E620 -> 0x0018E66C
*/
// Range: 0x18E620 -> 0x18E66C
signed int xSGStartup() {
    /* anonymous block */ {
        // Range: 0x18E620 -> 0x18E66C
    }
}


