/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int g_xsginit; // size: 0x4, address: 0x358068
static class st_XSAVEGAME_DATA g_xsgdata; // size: 0x20F0, address: 0x2B0880
static class st_XSAVEGAME_LEADER g_leaders[8]; // size: 0x280, address: 0x2B2970
signed int xSG_cb_leader_svproc(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // size: 0x0, address: 0x18CE60
signed int xSG_cb_leader_svinfo(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // size: 0x0, address: 0x18CF50
signed int xSG_cb_leader_load(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // size: 0x0, address: 0x18CDB0
void xSG_cb_ISGChange(void *, enum en_CHGCODE); // size: 0x0, address: 0x18C2C0
// total size: 0x0
class st_XSAVEGAME_READCONTEXT {};
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
enum en_SAVEGAME_MODE {
    XSG_MODE_LOAD = 10,
    XSG_MODE_SAVE = 11,
};

/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018BE30 -> 0x0018BF1C
*/
// Range: 0x18BE30 -> 0x18BF1C
signed int xSG_ld_flipload(class st_XSAVEGAME_DATA * xsgdata /* r20 */) {
    /* anonymous block */ {
        // Range: 0x18BE30 -> 0x18BF1C
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
    Code range: 0x0018BF20 -> 0x0018C1D8
*/
// Range: 0x18BF20 -> 0x18C1D8
signed int xSG_ld_findcltblk(class st_XSAVEGAME_DATA * xsgdata /* r18 */) {
    /* anonymous block */ {
        // Range: 0x18BF20 -> 0x18C1D8
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
    Code range: 0x0018C1E0 -> 0x0018C2B4
*/
// Range: 0x18C1E0 -> 0x18C2B4
signed int xSG_ld_readhead(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18C1E0 -> 0x18C2B4
        signed int ival; // r29+0x3C
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C2C0 -> 0x0018C2C8
*/
// Range: 0x18C2C0 -> 0x18C2C8
void xSG_cb_ISGChange() {
    /* anonymous block */ {
        // Range: 0x18C2C0 -> 0x18C2C8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C2D0 -> 0x0018C364
*/
// Range: 0x18C2D0 -> 0x18C364
signed int xSG_sv_commit(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18C2D0 -> 0x18C364
        char * name; // r2
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C370 -> 0x0018C438
*/
// Range: 0x18C370 -> 0x18C438
signed int xSG_smem_cltclose(class st_XSAVEGAME_DATA * xsgdata /* r17 */, class st_XSAVEGAME_CLIENT * clt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x18C370 -> 0x18C438
        char * last_bufpos; // r18
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C440 -> 0x0018C4C0
*/
// Range: 0x18C440 -> 0x18C4C0
signed int xSG_smem_blkclose(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18C440 -> 0x18C4C0
        char * last_bufpos; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C4C0 -> 0x0018C67C
*/
// Range: 0x18C4C0 -> 0x18C67C
signed int xSG_sv_flipproc(class st_XSAVEGAME_DATA * xsgdata /* r21 */) {
    /* anonymous block */ {
        // Range: 0x18C4C0 -> 0x18C67C
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
    Code range: 0x0018C680 -> 0x0018C718
*/
// Range: 0x18C680 -> 0x18C718
signed int xSG_sv_prepdest(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18C680 -> 0x18C718
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C720 -> 0x0018C82C
*/
// Range: 0x18C720 -> 0x18C82C
signed int xSG_sv_flipinfo(class st_XSAVEGAME_DATA * xsgdata /* r20 */) {
    /* anonymous block */ {
        // Range: 0x18C720 -> 0x18C82C
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
    Code range: 0x0018C830 -> 0x0018C894
*/
// Range: 0x18C830 -> 0x18C894
char * xSG_cm_slotname(signed int slotidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18C830 -> 0x18C894
        char * sptr; // r2
        char slotname[32]; // @ 0x002B2C30
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C8A0 -> 0x0018C8F8
*/
// Range: 0x18C8A0 -> 0x18C8F8
signed int xSG_chdir_gamedir(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18C8A0 -> 0x18C8F8
        char * namestr; // r2
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C900 -> 0x0018CAB8
*/
// Range: 0x18C900 -> 0x18CAB8
static signed int xSG_grab_leaders(class st_XSAVEGAME_DATA * xsgdata /* r20 */) {
    /* anonymous block */ {
        // Range: 0x18C900 -> 0x18CAB8
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
    Code range: 0x0018CAC0 -> 0x0018CACC
*/
// Range: 0x18CAC0 -> 0x18CACC
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, float * buff /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18CAC0 -> 0x18CACC
        signed int cnt; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CAD0 -> 0x0018CADC
*/
// Range: 0x18CAD0 -> 0x18CADC
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, unsigned int * buff /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18CAD0 -> 0x18CADC
        signed int cnt; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CAE0 -> 0x0018CAEC
*/
// Range: 0x18CAE0 -> 0x18CAEC
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, signed int * buff /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18CAE0 -> 0x18CAEC
        signed int cnt; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CAF0 -> 0x0018CAFC
*/
// Range: 0x18CAF0 -> 0x18CAFC
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, char * buff /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18CAF0 -> 0x18CAFC
        signed int cnt; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CB00 -> 0x0018CC0C
*/
// Range: 0x18CB00 -> 0x18CC0C
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r19 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, char * buff /* r2 */, signed int elesiz /* r18 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18CB00 -> 0x18CC0C
        class st_XSAVEGAME_CLIENT * clt; // r17
        signed int cnt; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CC10 -> 0x0018CC1C
*/
// Range: 0x18CC10 -> 0x18CC1C
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, float * data /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18CC10 -> 0x18CC1C
        signed int cnt; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CC20 -> 0x0018CC2C
*/
// Range: 0x18CC20 -> 0x18CC2C
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, unsigned int * data /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18CC20 -> 0x18CC2C
        signed int cnt; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CC30 -> 0x0018CC3C
*/
// Range: 0x18CC30 -> 0x18CC3C
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, signed int * data /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18CC30 -> 0x18CC3C
        signed int cnt; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CC40 -> 0x0018CC4C
*/
// Range: 0x18CC40 -> 0x18CC4C
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, char * data /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18CC40 -> 0x18CC4C
        signed int cnt; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CC50 -> 0x0018CC7C
*/
// Range: 0x18CC50 -> 0x18CC7C
signed int xSGWriteStrLen(char * str /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18CC50 -> 0x18CC7C
        signed int len; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CC80 -> 0x0018CDB0
*/
// Range: 0x18CC80 -> 0x18CDB0
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r20 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, char * data /* r2 */, signed int elesiz /* r19 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18CC80 -> 0x18CDB0
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
    Code range: 0x0018CDB0 -> 0x0018CE5C
*/
// Range: 0x18CDB0 -> 0x18CE5C
static signed int xSG_cb_leader_load(class st_XSAVEGAME_DATA * original_xsgdata /* r17 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x18CDB0 -> 0x18CE5C
        class st_XSAVEGAME_LEADER discard; // r29+0x50
        char fundata[32]; // r29+0x30
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CE60 -> 0x0018CF4C
*/
// Range: 0x18CE60 -> 0x18CF4C
static signed int xSG_cb_leader_svproc(void * cltdata /* r2 */, class st_XSAVEGAME_DATA * original_xsgdata /* r18 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18CE60 -> 0x18CF4C
        char fundata[23]; // r29+0x90
        class st_XSAVEGAME_LEADER leader; // r29+0x40
        class st_XSAVEGAME_DATA * xsg; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CF50 -> 0x0018CF64
*/
// Range: 0x18CF50 -> 0x18CF64
static signed int xSG_cb_leader_svinfo(signed int * cur_space /* r2 */, signed int * max_fullgame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18CF50 -> 0x18CF64
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018CF70 -> 0x0018D008
*/
// Range: 0x18CF70 -> 0x18D008
enum en_XSGASYNC_STATUS xSGAsyncStatus(class st_XSAVEGAME_DATA * xsgdata /* r18 */, signed int block /* r5 */, char * errmsg /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18CF70 -> 0x18D008
        enum en_ASYNC_OPSTAT istat; // r2
        enum en_XSGASYNC_STATUS xstat; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D010 -> 0x0018D178
*/
// Range: 0x18D010 -> 0x18D178
signed int xSGWrapup(class st_XSAVEGAME_DATA * xsgdata /* r18 */) {
    /* anonymous block */ {
        // Range: 0x18D010 -> 0x18D178
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D180 -> 0x0018D39C
*/
// Range: 0x18D180 -> 0x18D39C
signed int xSGProcess(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18D180 -> 0x18D39C
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D3A0 -> 0x0018D4F8
*/
// Range: 0x18D3A0 -> 0x18D4F8
signed int xSGSetup(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r2 */, char * label /* r2 */, signed int thumIdx /* r18 */, signed long playtime /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18D3A0 -> 0x18D4F8
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D500 -> 0x0018D518
*/
// Range: 0x18D500 -> 0x18D518
signed int xSGSetup(class st_XSAVEGAME_DATA * xsgdata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18D500 -> 0x18D518
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D520 -> 0x0018D650
*/
// Range: 0x18D520 -> 0x18D650
signed int xSGAddLoadClient(class st_XSAVEGAME_DATA * xsgdata /* r19 */, unsigned int clttag /* r18 */, void * cltdata /* r17 */, signed int (* loadfunc)(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int) /* r16 */) {
    /* anonymous block */ {
        // Range: 0x18D520 -> 0x18D650
        class st_XSAVEGAME_CLIENT * clt; // r2
        signed int result; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D650 -> 0x0018D73C
*/
// Range: 0x18D650 -> 0x18D73C
signed int xSGAddSaveClient(class st_XSAVEGAME_DATA * xsgdata /* r20 */, unsigned int clttag /* r19 */, void * cltdata /* r18 */, signed int (* infofunc)(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *) /* r17 */, signed int (* procfunc)(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *) /* r16 */) {
    /* anonymous block */ {
        // Range: 0x18D650 -> 0x18D73C
        class st_XSAVEGAME_CLIENT * clt; // r2
        signed int result; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D740 -> 0x0018D7D8
*/
// Range: 0x18D740 -> 0x18D7D8
signed int xSGGameThumIndex(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r18 */) {
    /* anonymous block */ {
        // Range: 0x18D740 -> 0x18D7D8
        signed int idx_thum; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D7E0 -> 0x0018D87C
*/
// Range: 0x18D7E0 -> 0x18D87C
char * xSGGameLabel(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r18 */) {
    /* anonymous block */ {
        // Range: 0x18D7E0 -> 0x18D87C
        class st_XSAVEGAME_LEADER * lead; // r2
        char * da_name; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D880 -> 0x0018D95C
*/
// Range: 0x18D880 -> 0x18D95C
char * xSGGameModDate(class st_XSAVEGAME_DATA * xsgdata /* r18 */, signed int gidx /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18D880 -> 0x18D95C
        char da_date[32]; // @ 0x002B2BF0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018D960 -> 0x0018D9FC
*/
// Range: 0x18D960 -> 0x18D9FC
signed int xSGGameIsEmpty(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r18 */) {
    /* anonymous block */ {
        // Range: 0x18D960 -> 0x18D9FC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DA00 -> 0x0018DA08
*/
// Range: 0x18DA00 -> 0x18DA08
void xSGGameSet(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int gidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18DA00 -> 0x18DA08
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DA10 -> 0x0018DAF8
*/
// Range: 0x18DA10 -> 0x18DAF8
signed int xSGTgtHaveRoom(class st_XSAVEGAME_DATA * xsgdata /* r20 */, signed int tidx /* r19 */, signed int fsize /* r18 */, signed int slotidx /* r2 */, signed int * bytesNeeded /* r17 */, signed int * availOnDisk /* r16 */) {
    /* anonymous block */ {
        // Range: 0x18DA10 -> 0x18DAF8
        char fname[256]; // r29+0x60
        signed int isroom; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DB00 -> 0x0018DB64
*/
// Range: 0x18DB00 -> 0x18DB64
signed int xSGTgtHasGameDir(class st_XSAVEGAME_DATA * xsgdata /* r17 */, signed int tidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18DB00 -> 0x18DB64
        signed int rc; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DB70 -> 0x0018DBEC
*/
// Range: 0x18DB70 -> 0x18DBEC
signed int xSGTgtSelect(class st_XSAVEGAME_DATA * xsgdata /* r18 */, signed int tidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18DB70 -> 0x18DBEC
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DBF0 -> 0x0018DBFC
*/
// Range: 0x18DBF0 -> 0x18DBFC
signed int xSGTgtFormatTgt(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int tidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18DBF0 -> 0x18DBFC
        signed int result; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DC00 -> 0x0018DC24
*/
// Range: 0x18DC00 -> 0x18DC24
signed int xSGTgtIsFormat(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int tidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18DC00 -> 0x18DC24
        unsigned int rc; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DC30 -> 0x0018DC38
*/
// Range: 0x18DC30 -> 0x18DC38
signed int xSGTgtPhysSlotIdx(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int tidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18DC30 -> 0x18DC38
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DC40 -> 0x0018DC48
*/
// Range: 0x18DC40 -> 0x18DC48
signed int xSGTgtCount(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int * max /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18DC40 -> 0x18DC48
        signed int cnt; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DC50 -> 0x0018DD4C
*/
// Range: 0x18DC50 -> 0x18DD4C
signed int xSGDone(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18DC50 -> 0x18DD4C
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DD50 -> 0x0018DE3C
*/
// Range: 0x18DD50 -> 0x18DE3C
class st_XSAVEGAME_DATA * xSGInit(enum en_SAVEGAME_MODE mode /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18DD50 -> 0x18DE3C
        class st_XSAVEGAME_DATA * xsgdata; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DE40 -> 0x0018DE78
*/
// Range: 0x18DE40 -> 0x18DE78
signed int xSGShutdown() {
    /* anonymous block */ {
        // Range: 0x18DE40 -> 0x18DE78
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018DE80 -> 0x0018DECC
*/
// Range: 0x18DE80 -> 0x18DECC
signed int xSGStartup() {
    /* anonymous block */ {
        // Range: 0x18DE80 -> 0x18DECC
    }
}


