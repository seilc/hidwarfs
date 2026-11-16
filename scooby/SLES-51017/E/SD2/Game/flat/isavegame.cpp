/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static char g_scoobydoo_icon_list[93814]; // size: 0x16E76, address: 0x299F40
static char * g_scoobydoo_icon_copy; // size: 0x4, address: 0x357F10
static char * g_scoobydoo_icon_delete; // size: 0x4, address: 0x357F14
static signed int g_isginit; // size: 0x4, address: 0x3589D8
static class st_ISG_MEMCARD_DATA g_mcdata; // size: 0x100, address: 0x2B0DC0
static class st_ISGSESSION g_isgdata; // size: 0x94, address: 0x2B0EC0
static char * g_isg_scemodule[3]; // size: 0xC, address: 0x2B0F58
static char * g_strz_egotrip[8]; // size: 0x20, address: 0x2B10B0
// total size: 0x0
class st_ISGTHUMDATA {};
// total size: 0x100
class st_ISG_MEMCARD_DATA {
    // Members
public:
    signed int mcport; // offset 0x0, size 0x4
    signed int mcslot; // offset 0x4, size 0x4
    signed int mcfp; // offset 0x8, size 0x4
    enum en_ISG_IOMODE fmode; // offset 0xC, size 0x4
    char gamepath[64]; // offset 0x10, size 0x40
    class sceMcTblGetDir finfo; // offset 0x80, size 0x40
    signed int cur_mcop; // offset 0xC0, size 0x4
    enum en_ISGMC_ERRSTATUS mcerr; // offset 0xC4, size 0x4
    signed int allow_cache; // offset 0xC8, size 0x4
};
// total size: 0x94
class st_ISGSESSION {
    // Members
public:
    class st_ISG_MEMCARD_DATA * mcdata; // offset 0x0, size 0x4
    char gameroot[64]; // offset 0x4, size 0x40
    char gamedir[64]; // offset 0x44, size 0x40
    enum en_ASYNC_OPCODE as_curop; // offset 0x84, size 0x4
    enum en_ASYNC_OPSTAT as_opstat; // offset 0x88, size 0x4
    enum en_ASYNC_OPERR as_operr; // offset 0x8C, size 0x4
    enum en_CHGCODE chgcode; // offset 0x90, size 0x4
};
enum en_ISGMC_ERRSTATUS {
    ISGMC_ERR_NONE = 0,
    ISGMC_ERR_NOMEMCARD = 1,
    ISGMC_ERR_MKDIR = 2,
    ISGMC_ERR_OPEN = 3,
    ISGMC_ERR_CLOSE = 4,
    ISGMC_ERR_READ = 5,
    ISGMC_ERR_WRITE = 6,
};
// total size: 0x3C4
class sceMcIconSys {
    // Members
public:
    unsigned char Head[4]; // offset 0x0, size 0x4
    unsigned short Reserv1; // offset 0x4, size 0x2
    unsigned short OffsLF; // offset 0x6, size 0x2
    unsigned int Reserv2; // offset 0x8, size 0x4
    unsigned int TransRate; // offset 0xC, size 0x4
    signed int BgColor[4][4]; // offset 0x10, size 0x40
    float LightDir[3][4]; // offset 0x50, size 0x30
    float LightColor[3][4]; // offset 0x80, size 0x30
    float Ambient[4]; // offset 0xB0, size 0x10
    unsigned char TitleName[68]; // offset 0xC0, size 0x44
    unsigned char FnameView[64]; // offset 0x104, size 0x40
    unsigned char FnameCopy[64]; // offset 0x144, size 0x40
    unsigned char FnameDel[64]; // offset 0x184, size 0x40
    unsigned char Reserve3[512]; // offset 0x1C4, size 0x200
};
// total size: 0x40
class sceMcTblGetDir {
    // Members
public:
    class sceMcStDateTime _Create; // offset 0x0, size 0x8
    class sceMcStDateTime _Modify; // offset 0x8, size 0x8
    unsigned int FileSizeByte; // offset 0x10, size 0x4
    unsigned short AttrFile; // offset 0x14, size 0x2
    unsigned short Reserve1; // offset 0x16, size 0x2
    unsigned int Reserve2; // offset 0x18, size 0x4
    unsigned int PdaAplNo; // offset 0x1C, size 0x4
    unsigned char EntryName[32]; // offset 0x20, size 0x20
};
enum en_ISGMCA_STATUS {
    ISG_MCA_STAT_DONE_ERR = -1,
    ISG_MCA_STAT_INPROG = 0,
    ISG_MCA_STAT_DONE = 1,
};
enum en_CHGCODE {
    ISG_CHG_NONE = 0,
    ISG_CHG_TARGET = 1,
    ISG_CHG_GAMELIST = 2,
};
enum en_ISG_IOMODE {
    ISG_IOMODE_READ = 1,
    ISG_IOMODE_WRITE = 2,
    ISG_IOMODE_APPEND = 3,
};
enum en_MEMCARD_SEEKPT {
    ISG_MCSEEK_TOP = 0,
    ISG_MCSEEK_CUR = 1,
    ISG_MCSEEK_END = 2,
};
// total size: 0x8
class sceMcStDateTime {
    // Members
public:
    unsigned char Resv2; // offset 0x0, size 0x1
    unsigned char Sec; // offset 0x1, size 0x1
    unsigned char Min; // offset 0x2, size 0x1
    unsigned char Hour; // offset 0x3, size 0x1
    unsigned char Day; // offset 0x4, size 0x1
    unsigned char Month; // offset 0x5, size 0x1
    unsigned short Year; // offset 0x6, size 0x2
};
enum en_NAMEGEN_TYPE {
    ISG_NGTYP_GAMEDIR = 0,
    ISG_NGTYP_GAMEFILE = 1,
    ISG_NGTYP_CONFIG = 2,
    ISG_NGTYP_ICONTHUM = 3,
};
// total size: 0x8
class sceCdCLOCK {
    // Members
public:
    unsigned char stat; // offset 0x0, size 0x1
    unsigned char second; // offset 0x1, size 0x1
    unsigned char minute; // offset 0x2, size 0x1
    unsigned char hour; // offset 0x3, size 0x1
    unsigned char pad; // offset 0x4, size 0x1
    unsigned char day; // offset 0x5, size 0x1
    unsigned char month; // offset 0x6, size 0x1
    unsigned char year; // offset 0x7, size 0x1
};
enum en_ASYNC_OPCODE {
    ISG_OPER_NOOP = 0,
    ISG_OPER_INIT = 1,
    ISG_OPER_SAVE = 2,
    ISG_OPER_LOAD = 3,
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
    ISG_OPERR_SVNOSPACE = 5,
    ISG_OPERR_SVINIT = 6,
    ISG_OPERR_SVWRITE = 7,
    ISG_OPERR_SVOPEN = 8,
    ISG_OPERR_LDINIT = 9,
    ISG_OPERR_LDREAD = 10,
    ISG_OPERR_LDOPEN = 11,
    ISG_OPERR_TGTERR = 12,
    ISG_OPERR_TGTREM = 13,
    ISG_OPERR_TGTPREP = 14,
};

/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00189350 -> 0x001898FC
*/
// Range: 0x189350 -> 0x1898FC
signed int iSG_is_synccode_realerr(signed int mcop /* r2 */, signed int mcopret /* r2 */) {
    /* anonymous block */ {
        // Range: 0x189350 -> 0x1898FC
        signed int is_ok; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00189900 -> 0x00189A74
*/
// Range: 0x189900 -> 0x189A74
enum en_ISGMCA_STATUS iSG_mcasync_chkop(class st_ISG_MEMCARD_DATA * mcdata /* r20 */, signed int block /* r19 */, signed int * sync_resval /* r18 */) {
    /* anonymous block */ {
        // Range: 0x189900 -> 0x189A74
        signed int mcf; // r29+0x6C
        signed int ret; // r29+0x68
        signed int rc; // r2
        enum en_ISGMCA_STATUS result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00189A80 -> 0x00189B30
*/
// Range: 0x189A80 -> 0x189B30
signed int iSG_mca_fwrite(class st_ISG_MEMCARD_DATA * mcdata /* r17 */, char * data /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x189A80 -> 0x189B30
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00189B30 -> 0x00189BDC
*/
// Range: 0x189B30 -> 0x189BDC
signed int iSG_mca_fread(class st_ISG_MEMCARD_DATA * mcdata /* r17 */, char * buf /* r2 */, signed int bufsize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x189B30 -> 0x189BDC
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00189BE0 -> 0x00189C7C
*/
// Range: 0x189BE0 -> 0x189C7C
signed int iSG_mca_fclose(class st_ISG_MEMCARD_DATA * mcdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x189BE0 -> 0x189C7C
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00189C80 -> 0x00189D34
*/
// Range: 0x189C80 -> 0x189D34
signed int iSG_mca_fopen(class st_ISG_MEMCARD_DATA * mcdata /* r17 */, char * fname /* r5 */, enum en_ISG_IOMODE mode /* r2 */) {
    /* anonymous block */ {
        // Range: 0x189C80 -> 0x189D34
        signed int ps2mode; // r2
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00189D40 -> 0x00189DEC
*/
// Range: 0x189D40 -> 0x189DEC
signed int iSG_mca_chdir(class st_ISG_MEMCARD_DATA * mcdata /* r17 */, char * dname /* r2 */) {
    /* anonymous block */ {
        // Range: 0x189D40 -> 0x189DEC
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00189DF0 -> 0x00189E98
*/
// Range: 0x189DF0 -> 0x189E98
signed int iSG_mca_mkdir(class st_ISG_MEMCARD_DATA * mcdata /* r17 */, char * dname /* r2 */) {
    /* anonymous block */ {
        // Range: 0x189DF0 -> 0x189E98
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00189EA0 -> 0x00189F58
*/
// Range: 0x189EA0 -> 0x189F58
signed int iSG_mca_unfmt(class st_ISG_MEMCARD_DATA * mcdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x189EA0 -> 0x189F58
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00189F60 -> 0x0018A05C
*/
// Range: 0x189F60 -> 0x18A05C
signed int iSG_mca_fmt(class st_ISG_MEMCARD_DATA * mcdata /* r18 */, signed int force /* r17 */) {
    /* anonymous block */ {
        // Range: 0x189F60 -> 0x18A05C
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018A060 -> 0x0018A150
*/
// Range: 0x18A060 -> 0x18A150
signed int iSG_get_fmoddate(class st_ISG_MEMCARD_DATA * mcdata /* r2 */, char * fname /* r2 */, signed int * sec /* r22 */, signed int * min /* r21 */, signed int * hr /* r20 */, signed int * mon /* r19 */, signed int * day /* r18 */, signed int * yr /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18A060 -> 0x18A150
        class sceMcTblGetDir * finf; // r16
        signed int rc; // r2
        signed int result; // r23
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018A150 -> 0x0018A38C
*/
// Range: 0x18A150 -> 0x18A38C
signed int iSG_get_finfo(class st_ISG_MEMCARD_DATA * mcdata /* r19 */, char * fname /* r18 */, char * path /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18A150 -> 0x18A38C
        signed int numfound; // r29+0x9C
        signed int len; // r2
        char str_buf[64]; // r29+0x50
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018A390 -> 0x0018A528
*/
// Range: 0x18A390 -> 0x18A528
signed int iSG_isSpaceForFile(class st_ISG_MEMCARD_DATA * mcdata /* r22 */, signed int mcidx /* r21 */, signed int fsize /* r20 */, char * dpath /* r2 */, char * fname /* r30 */, signed int * bytesNeeded /* r19 */, signed int * availOnDisk /* r18 */) {
    /* anonymous block */ {
        // Range: 0x18A390 -> 0x18A528
        signed int reset_mcpath; // r23
        signed int totclust; // r2
        signed int estclust; // r16
        signed int xtra_fent; // r2
        signed int fEc_need; // r17
        signed int fc_need; // r16
        signed int rc; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018A530 -> 0x0018A620
*/
// Range: 0x18A530 -> 0x18A620
signed int iSG_mc_availDirEnt(class st_ISG_MEMCARD_DATA * mcdata /* r17 */, signed int mcidx /* r2 */, char * dpath /* r18 */) {
    /* anonymous block */ {
        // Range: 0x18A530 -> 0x18A620
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018A620 -> 0x0018A70C
*/
// Range: 0x18A620 -> 0x18A70C
signed int iSG_mc_availclust(class st_ISG_MEMCARD_DATA * mcdata /* r17 */, signed int mcidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18A620 -> 0x18A70C
        signed int clust; // r29+0x3C
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018A710 -> 0x0018A810
*/
// Range: 0x18A710 -> 0x18A810
signed int iSG_mc_isPSIIcard(class st_ISG_MEMCARD_DATA * mcdata /* r17 */, signed int mcidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18A710 -> 0x18A810
        signed int type; // r29+0x3C
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018A810 -> 0x0018A904
*/
// Range: 0x18A810 -> 0x18A904
signed int iSG_mc_isformatted(class st_ISG_MEMCARD_DATA * mcdata /* r17 */, signed int mcidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18A810 -> 0x18A904
        signed int is_fmtd; // r29+0x3C
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018A910 -> 0x0018A9F4
*/
// Range: 0x18A910 -> 0x18A9F4
signed int iSG_mc_exists(class st_ISG_MEMCARD_DATA * mcdata /* r17 */, signed int mcidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18A910 -> 0x18A9F4
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018AA00 -> 0x0018ABF4
*/
// Range: 0x18AA00 -> 0x18ABF4
signed int iSG_mcidx_portslot(signed int mcidx /* r22 */, signed int * port /* r30 */, signed int * slot /* r29+0xA0 */, signed int * concnt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x18AA00 -> 0x18ABF4
        signed int cur_mcop; // r29+0xAC
        signed int use_port; // r20
        signed int con_p1; // r19
        signed int con_p0; // r18
        signed int tp; // r17
        signed int type; // r29+0xA8
        signed int i; // r16
        signed int ret; // r29+0xA4
        signed int rc; // r2
        signed int result; // r23
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018AC00 -> 0x0018ADC4
*/
// Range: 0x18AC00 -> 0x18ADC4
void SQUIB_init_st_iconsys(class sceMcIconSys * icsys /* r16 */) {
    /* anonymous block */ {
        // Range: 0x18AC00 -> 0x18ADC4
        unsigned char sjistitle[68]; // r29+0xD0
        char * iconname; // r2
        float ambient[4]; // r29+0xC0
        float lightcol[3][4]; // r29+0x90
        float lightdir[3][4]; // r29+0x60
        signed int bgcolor[4][4]; // r29+0x20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018ADD0 -> 0x0018B074
*/
// Range: 0x18ADD0 -> 0x18B074
signed int iSG_add_sysicons(class st_ISG_MEMCARD_DATA * mcdata /* r16 */) {
    /* anonymous block */ {
        // Range: 0x18ADD0 -> 0x18B074
        char * iconname; // r2
        class sceMcIconSys icsysdata; // r29+0x30
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018B080 -> 0x0018B1B4
*/
// Range: 0x18B080 -> 0x18B1B4
signed int iSG_add_cfgholder(class st_ISG_MEMCARD_DATA * mcdata /* r16 */) {
    /* anonymous block */ {
        // Range: 0x18B080 -> 0x18B1B4
        char * cfgname; // r2
        char * strptr; // r17
        char cfgdata[992]; // r29+0x40
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018B1C0 -> 0x0018B270
*/
// Range: 0x18B1C0 -> 0x18B270
signed int iSG_start_your_engines() {
    /* anonymous block */ {
        // Range: 0x18B1C0 -> 0x18B270
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018B270 -> 0x0018B46C
*/
// Range: 0x18B270 -> 0x18B46C
enum en_ASYNC_OPERR iSGOpError(class st_ISGSESSION * isgdata /* r17 */, char * errmsg /* r16 */) {
    /* anonymous block */ {
        // Range: 0x18B270 -> 0x18B46C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018B470 -> 0x0018B574
*/
// Range: 0x18B470 -> 0x18B574
enum en_ASYNC_OPSTAT iSGPollStatus(class st_ISGSESSION * isgdata /* r16 */, enum en_ASYNC_OPCODE * curop /* r2 */, signed int block /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18B470 -> 0x18B574
        signed int rc; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018B580 -> 0x0018B78C
*/
// Range: 0x18B580 -> 0x18B78C
signed int iSGReadLeader(class st_ISGSESSION * isgdata /* r22 */, char * fname /* r21 */, char * databuf /* r20 */, signed int numbytes /* r19 */, signed int async /* r23 */) {
    /* anonymous block */ {
        // Range: 0x18B580 -> 0x18B78C
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018B790 -> 0x0018B81C
*/
// Range: 0x18B790 -> 0x18B81C
signed int iSGLoadFile(class st_ISGSESSION * isgdata /* r20 */, char * fname /* r19 */, char * databuf /* r18 */, signed int async /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18B790 -> 0x18B81C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018B820 -> 0x0018BA70
*/
// Range: 0x18B820 -> 0x18BA70
signed int iSGSaveFile(class st_ISGSESSION * isgdata /* r19 */, char * fname /* r18 */, char * data /* r17 */, signed int n /* r16 */, signed int async /* r23 */) {
    /* anonymous block */ {
        // Range: 0x18B820 -> 0x18BA70
        signed int rc; // r2
        signed int result; // r20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018BA70 -> 0x0018BD00
*/
// Range: 0x18BA70 -> 0x18BD00
signed int iSGSetupGameDir(class st_ISGSESSION * isgdata /* r20 */, char * dname /* r2 */, signed int force_iconfix /* r19 */) {
    /* anonymous block */ {
        // Range: 0x18BA70 -> 0x18BD00
        char * strptr; // r2
        signed int dir_isnew; // r18
        class st_ISG_MEMCARD_DATA * mcdata; // r17
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018BD00 -> 0x0018BDAC
*/
// Range: 0x18BD00 -> 0x18BDAC
signed int iSGSelectGameDir(class st_ISGSESSION * isgdata /* r16 */, char * dname /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18BD00 -> 0x18BDAC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018BDB0 -> 0x0018BF0C
*/
// Range: 0x18BDB0 -> 0x18BF0C
char * iSGFileModDate(class st_ISGSESSION * isgdata /* r2 */, char * fname /* r2 */, signed int * sec /* r2 */, signed int * min /* r2 */, signed int * hr /* r2 */, signed int * mon /* r2 */, signed int * day /* r2 */, signed int * yr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18BDB0 -> 0x18BF0C
        class sceCdCLOCK clock; // r29+0x88
        class sceMcTblGetDir * finf; // r16
        signed int rc; // r2
        char datestr[64]; // @ 0x002B1070
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018BF10 -> 0x0018BF2C
*/
// Range: 0x18BF10 -> 0x18BF2C
char * iSGFileModDate(class st_ISGSESSION * isgdata /* r2 */, char * fname /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18BF10 -> 0x18BF2C
        char * date_str; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018BF30 -> 0x0018BF78
*/
// Range: 0x18BF30 -> 0x18BF78
signed int iSGFileSize(class st_ISGSESSION * isgdata /* r2 */, char * fname /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18BF30 -> 0x18BF78
        signed int size; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018BF80 -> 0x0018BF88
*/
// Range: 0x18BF80 -> 0x18BF88
signed int iSGTgtHaveRoom(class st_ISGSESSION * isgdata /* r2 */, signed int tidx /* r2 */, signed int fsize /* r2 */, char * dpath /* r2 */, char * fname /* r2 */, signed int * bytesNeeded /* r2 */, signed int * availOnDisk /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18BF80 -> 0x18BF88
        signed int result; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018BF90 -> 0x0018C000
*/
// Range: 0x18BF90 -> 0x18C000
signed int iSGTgtSetActive(class st_ISGSESSION * isgdata /* r2 */, signed int tgtidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18BF90 -> 0x18C000
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C000 -> 0x0018C0EC
*/
// Range: 0x18C000 -> 0x18C0EC
unsigned int iSGTgtState(class st_ISGSESSION * isgdata /* r19 */, signed int tgtidx /* r18 */, char * dpath /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18C000 -> 0x18C0EC
        signed int rc; // r2
        unsigned int state; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C0F0 -> 0x0018C1EC
*/
// Range: 0x18C0F0 -> 0x18C1EC
signed int iSGTgtFormat(class st_ISGSESSION * isgdata /* r19 */, signed int tgtidx /* r18 */, signed int async /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18C0F0 -> 0x18C1EC
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C1F0 -> 0x0018C224
*/
// Range: 0x18C1F0 -> 0x18C224
signed int iSGTgtPhysSlotIdx() {
    /* anonymous block */ {
        // Range: 0x18C1F0 -> 0x18C224
        signed int ds; // r29+0x1C
        signed int dp; // r29+0x18
        signed int concnt[2]; // r29+0x10
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C230 -> 0x0018C2AC
*/
// Range: 0x18C230 -> 0x18C2AC
signed int iSGTgtCount(signed int * max /* r17 */) {
    /* anonymous block */ {
        // Range: 0x18C230 -> 0x18C2AC
        signed int ds; // r29+0x3C
        signed int dp; // r29+0x38
        signed int concnt[2]; // r29+0x30
        signed int tgtmax; // r2
        signed int rc; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C2B0 -> 0x0018C2BC
*/
// Range: 0x18C2B0 -> 0x18C2BC
void iSGSessionEnd(class st_ISGSESSION * isgdata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18C2B0 -> 0x18C2BC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C2C0 -> 0x0018C384
*/
// Range: 0x18C2C0 -> 0x18C384
class st_ISGSESSION * iSGSessionBegin() {
    /* anonymous block */ {
        // Range: 0x18C2C0 -> 0x18C384
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C390 -> 0x0018C578
*/
// Range: 0x18C390 -> 0x18C578
char * iSGMakeName(enum en_NAMEGEN_TYPE type /* r2 */, char * base /* r2 */, signed int idx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x18C390 -> 0x18C578
        char * fmt_sbd; // r11
        char * fmt_sd; // r2
        char * fmt_sb; // r10
        char * use_buf; // r16
        signed int rotate; // @ 0x003589DC
        char rotatebuf[8][32]; // @ 0x002B0F70
        signed char init; // @ 0x003589E0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C580 -> 0x0018C594
*/
// Range: 0x18C580 -> 0x18C594
signed int iSGShutdown() {
    /* anonymous block */ {
        // Range: 0x18C580 -> 0x18C594
    }
}


/*
    Compile unit: E:\SD2\Game\flat\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0018C5A0 -> 0x0018C5D0
*/
// Range: 0x18C5A0 -> 0x18C5D0
signed int iSGStartup() {
    /* anonymous block */ {
        // Range: 0x18C5A0 -> 0x18C5D0
    }
}


