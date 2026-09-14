/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A2820 -> 0x004A286C
*/
// Range: 0x4A2820 -> 0x4A286C
unsigned char iSGCheckMemoryCard(signed int index /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A2820 -> 0x4A286C
        signed int result; // r29+0x1C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A2870 -> 0x004A2A28
*/
// Range: 0x4A2870 -> 0x4A2A28
unsigned char iSGCheckForGameFiles(signed int mcPort /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4A2870 -> 0x4A2A28
        char fileNames[3][25]; // r29+0x60
        char gameDir[26]; // r29+0x40
        signed int resultCode; // r29+0xAC
        signed int i; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A2A30 -> 0x004A2C10
*/
// Range: 0x4A2A30 -> 0x4A2C10
unsigned char iSGIsGameCorrupt(class st_ISGSESSION * sess /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4A2A30 -> 0x4A2C10
        char fileNames[3][25]; // r29+0x60
        char gameDir[26]; // r29+0x40
        signed int resultCode; // r29+0xAC
        signed int i; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A2C10 -> 0x004A2C1C
*/
// Range: 0x4A2C10 -> 0x4A2C1C
void iSGIconInit(void * iconData /* r2 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A2C10 -> 0x4A2C1C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A2C20 -> 0x004A2C28
*/
// Range: 0x4A2C20 -> 0x4A2C28
void iSGMakeTimeStamp(char * str /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A2C20 -> 0x4A2C28
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A2C30 -> 0x004A2C74
*/
// Range: 0x4A2C30 -> 0x4A2C74
signed int iSG_is_MCOP_realerr(signed int mcop /* r2 */, signed int que_rc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A2C30 -> 0x4A2C74
        signed int is_ok; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A2C80 -> 0x004A3238
*/
// Range: 0x4A2C80 -> 0x4A3238
signed int iSG_is_synccode_realerr(signed int mcop /* r2 */, signed int mcopret /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A2C80 -> 0x4A3238
        signed int is_ok; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A3240 -> 0x004A33CC
*/
// Range: 0x4A3240 -> 0x4A33CC
enum en_ISGMCA_STATUS iSG_mcasync_chkop(class st_ISG_MEMCARD_DATA * mcdata /* r20 */, signed int block /* r19 */, signed int * sync_resval /* r18 */) {
    /* anonymous block */ {
        // Range: 0x4A3240 -> 0x4A33CC
        enum en_ISGMCA_STATUS result; // r17
        signed int mcf; // r29+0x6C
        signed int rc; // r2
        signed int ret; // r29+0x68
        unsigned int on; // r29+0x64
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A33D0 -> 0x004A3440
*/
// Range: 0x4A33D0 -> 0x4A3440
signed int iSG_mca_fwrite(class st_ISG_MEMCARD_DATA * mcdata /* r17 */, char * data /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A33D0 -> 0x4A3440
        signed int result; // r16
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A3440 -> 0x004A34B0
*/
// Range: 0x4A3440 -> 0x4A34B0
signed int iSG_mca_fopen(class st_ISG_MEMCARD_DATA * mcdata /* r17 */, char * fname /* r5 */, enum en_ISG_IOMODE mode /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A3440 -> 0x4A34B0
        signed int result; // r16
        signed int ps2mode; // r2
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A34B0 -> 0x004A352C
*/
// Range: 0x4A34B0 -> 0x4A352C
signed int iSG_mca_unfmt(class st_ISG_MEMCARD_DATA * mcdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4A34B0 -> 0x4A352C
        signed int result; // r16
        signed int ret; // r2
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A3530 -> 0x004A35F0
*/
// Range: 0x4A3530 -> 0x4A35F0
signed int iSG_mca_fmt(class st_ISG_MEMCARD_DATA * mcdata /* r18 */, signed int force /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4A3530 -> 0x4A35F0
        signed int result; // r16
        signed int rval; // r2
        signed int ret; // r2
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A35F0 -> 0x004A36E4
*/
// Range: 0x4A35F0 -> 0x4A36E4
signed int iSG_get_fmoddate(class st_ISG_MEMCARD_DATA * mcdata /* r2 */, char * fname /* r2 */, signed int * sec /* r21 */, signed int * min /* r20 */, signed int * hr /* r19 */, signed int * mon /* r18 */, signed int * day /* r17 */, signed int * yr /* r22 */) {
    /* anonymous block */ {
        // Range: 0x4A35F0 -> 0x4A36E4
        signed int result; // r23
        class sceMcTblGetDir * finf; // r2
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A36F0 -> 0x004A38C4
*/
// Range: 0x4A36F0 -> 0x4A38C4
signed int iSG_get_finfo(class st_ISG_MEMCARD_DATA * mcdata /* r19 */, char * fname /* r18 */, char * path /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4A36F0 -> 0x4A38C4
        signed int result; // r16
        char str_buf[64]; // r29+0x50
        signed int len; // r2
        signed int rc; // r2
        signed int numfound; // r29+0x9C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A38D0 -> 0x004A3A78
*/
// Range: 0x4A38D0 -> 0x4A3A78
signed int iSG_isSpaceForFile_Startup(class st_ISG_MEMCARD_DATA * mcdata /* r21 */, signed int mcidx /* r20 */, char * dpath /* r2 */, signed int * bytesNeeded /* r19 */, signed int * availOnDisk /* r22 */) {
    /* anonymous block */ {
        // Range: 0x4A38D0 -> 0x4A3A78
        signed int fc_need; // r18
        signed int fEc_need; // r2
        signed int xtra_fent; // r2
        signed int estclust; // r16
        signed int reset_mcpath; // r23
        signed int rc; // r2
        char fileNames[5][25]; // r29+0xA0
        signed int i; // r17
        signed int totclust; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A3A80 -> 0x004A3C0C
*/
// Range: 0x4A3A80 -> 0x4A3C0C
signed int iSG_isSpaceForFile(class st_ISG_MEMCARD_DATA * mcdata /* r21 */, signed int mcidx /* r20 */, signed int fsize /* r19 */, char * dpath /* r2 */, char * fname /* r23 */, signed int * bytesNeeded /* r18 */, signed int * availOnDisk /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4A3A80 -> 0x4A3C0C
        signed int fc_need; // r16
        signed int fEc_need; // r2
        signed int xtra_fent; // r2
        signed int estclust; // r16
        signed int reset_mcpath; // r22
        signed int rc; // r2
        signed int totclust; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A3C10 -> 0x004A3CC4
*/
// Range: 0x4A3C10 -> 0x4A3CC4
signed int iSG_mc_availDirEnt(class st_ISG_MEMCARD_DATA * mcdata /* r18 */, signed int mcidx /* r2 */, char * dpath /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4A3C10 -> 0x4A3CC4
        signed int result; // r16
        signed int rc; // r2
        signed int clust; // r29+0x4C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A3CD0 -> 0x004A3D7C
*/
// Range: 0x4A3CD0 -> 0x4A3D7C
signed int iSG_mc_availclust(class st_ISG_MEMCARD_DATA * mcdata /* r17 */, signed int mcidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A3CD0 -> 0x4A3D7C
        signed int result; // r16
        signed int rc; // r2
        signed int clust; // r29+0x3C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A3D80 -> 0x004A3E40
*/
// Range: 0x4A3D80 -> 0x4A3E40
signed int iSG_mc_isPSIIcard(class st_ISG_MEMCARD_DATA * mcdata /* r17 */, signed int mcidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A3D80 -> 0x4A3E40
        signed int result; // r16
        signed int rc; // r2
        signed int type; // r29+0x3C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A3E40 -> 0x004A3EF4
*/
// Range: 0x4A3E40 -> 0x4A3EF4
signed int iSG_mc_isformatted(class st_ISG_MEMCARD_DATA * mcdata /* r17 */, signed int mcidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A3E40 -> 0x4A3EF4
        signed int result; // r16
        signed int rc; // r2
        signed int is_fmtd; // r29+0x3C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A3F00 -> 0x004A3FA4
*/
// Range: 0x4A3F00 -> 0x4A3FA4
signed int iSG_mc_exists(class st_ISG_MEMCARD_DATA * mcdata /* r17 */, signed int mcidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A3F00 -> 0x4A3FA4
        signed int result; // r16
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A3FB0 -> 0x004A4158
*/
// Range: 0x4A3FB0 -> 0x4A4158
signed int iSG_mcidx_portslot(signed int mcidx /* r23 */, signed int * port /* r30 */, signed int * slot /* r29+0xA0 */, signed int * concnt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x4A3FB0 -> 0x4A4158
        signed int result; // r22
        signed int rc; // r2
        signed int ret; // r29+0xAC
        signed int i; // r20
        signed int type; // r29+0xA8
        signed int tp; // r19
        signed int con_p0; // r18
        signed int con_p1; // r17
        signed int use_port; // r16
        signed int cur_mcop; // r29+0xA4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A4160 -> 0x004A4428
*/
// Range: 0x4A4160 -> 0x4A4428
void SQUIB_init_st_iconsys(class sceMcIconSys * icsys /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4A4160 -> 0x4A4428
        signed int bgcolor[4][4]; // r29+0xE0
        float lightdir[3][4]; // r29+0xB0
        float lightcol[3][4]; // r29+0x80
        float ambient[4]; // r29+0x70
        char * iconname; // r2
        unsigned char sjistitle[68]; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A4430 -> 0x004A4604
*/
// Range: 0x4A4430 -> 0x4A4604
signed int iSG_add_sysicons(class st_ISG_MEMCARD_DATA * mcdata /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4A4430 -> 0x4A4604
        class sceMcIconSys icsysdata; // r29+0x30
        char * iconname; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A4610 -> 0x004A4774
*/
// Range: 0x4A4610 -> 0x4A4774
signed int iSG_add_cfgholder(class st_ISG_MEMCARD_DATA * mcdata /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4A4610 -> 0x4A4774
        char cfgdata[992]; // r29+0x40
        char * strptr; // r18
        char * cfgname; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A4780 -> 0x004A4818
*/
// Range: 0x4A4780 -> 0x4A4818
signed int iSG_start_your_engines() {
    /* anonymous block */ {
        // Range: 0x4A4780 -> 0x4A4818
        signed int result; // r16
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A4820 -> 0x004A48A4
*/
// Range: 0x4A4820 -> 0x4A48A4
signed int iSGAutoSave_Monitor(class st_ISGSESSION * isg /* r16 */, signed int idx_target /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A4820 -> 0x4A48A4
        unsigned int stat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A48B0 -> 0x004A48BC
*/
// Range: 0x4A48B0 -> 0x4A48BC
void iSGAutoSave_Disconnect(class st_ISGSESSION * isg /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A48B0 -> 0x4A48BC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A48C0 -> 0x004A497C
*/
// Range: 0x4A48C0 -> 0x4A497C
class st_ISGSESSION * iSGAutoSave_Connect(signed int idx_target /* r16 */, void * cltdata /* r2 */, void (* chg)(void *, enum en_CHGCODE) /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A48C0 -> 0x4A497C
        class st_ISGSESSION * isg; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A4980 -> 0x004A4988
*/
// Range: 0x4A4980 -> 0x4A4988
void iSGAutoSave_Startup() {
    /* anonymous block */ {
        // Range: 0x4A4980 -> 0x4A4988
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A4990 -> 0x004A4B98
*/
// Range: 0x4A4990 -> 0x4A4B98
enum en_ASYNC_OPERR iSGOpError(class st_ISGSESSION * isgdata /* r17 */, char * errmsg /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4A4990 -> 0x4A4B98
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A4BA0 -> 0x004A4D24
*/
// Range: 0x4A4BA0 -> 0x4A4D24
enum en_ASYNC_OPSTAT iSGPollStatus(class st_ISGSESSION * isgdata /* r16 */, enum en_ASYNC_OPCODE * curop /* r2 */, signed int block /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A4BA0 -> 0x4A4D24
        signed int rc; // r2
        signed int sceResultCode; // r29+0x4C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A4D30 -> 0x004A5068
*/
// Range: 0x4A4D30 -> 0x4A5068
signed int iSGReadLeader(class st_ISGSESSION * isgdata /* r21 */, char * fname /* r23 */, char * databuf /* r20 */, signed int numbytes /* r19 */, signed int async /* r30 */) {
    /* anonymous block */ {
        // Range: 0x4A4D30 -> 0x4A5068
        signed int result; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A5070 -> 0x004A5104
*/
// Range: 0x4A5070 -> 0x4A5104
signed int iSGLoadFile(class st_ISGSESSION * isgdata /* r20 */, char * fname /* r19 */, char * databuf /* r18 */, signed int async /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4A5070 -> 0x4A5104
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A5110 -> 0x004A5424
*/
// Range: 0x4A5110 -> 0x4A5424
signed int iSGSaveFile(class st_ISGSESSION * isgdata /* r21 */, char * fname /* r20 */, char * data /* r19 */, signed int n /* r18 */, signed int async /* r30 */) {
    /* anonymous block */ {
        // Range: 0x4A5110 -> 0x4A5424
        signed int result; // r17
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A5430 -> 0x004A5734
*/
// Range: 0x4A5430 -> 0x4A5734
signed int iSGSetupGameDir(class st_ISGSESSION * isgdata /* r20 */, char * dname /* r2 */, signed int force_iconfix /* r19 */) {
    /* anonymous block */ {
        // Range: 0x4A5430 -> 0x4A5734
        signed int result; // r18
        signed int rc; // r2
        class st_ISG_MEMCARD_DATA * mcdata; // r17
        signed int dir_isnew; // r16
        char * strptr; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A5740 -> 0x004A5828
*/
// Range: 0x4A5740 -> 0x4A5828
signed int iSGSelectGameDir(class st_ISGSESSION * isgdata /* r17 */, char * dname /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A5740 -> 0x4A5828
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A5830 -> 0x004A598C
*/
// Range: 0x4A5830 -> 0x4A598C
char * iSGFileModDate(class st_ISGSESSION * isgdata /* r2 */, char * fname /* r2 */, signed int * sec /* r2 */, signed int * min /* r2 */, signed int * hr /* r2 */, signed int * mon /* r2 */, signed int * day /* r2 */, signed int * yr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A5830 -> 0x4A598C
        signed int rc; // r2
        class sceMcTblGetDir * finf; // r21
        class sceCdCLOCK clock; // r29+0x88
        char datestr[64]; // @ 0x007C0160
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A5990 -> 0x004A59AC
*/
// Range: 0x4A5990 -> 0x4A59AC
char * iSGFileModDate(class st_ISGSESSION * isgdata /* r2 */, char * fname /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A5990 -> 0x4A59AC
        char * date_str; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A59B0 -> 0x004A5A04
*/
// Range: 0x4A59B0 -> 0x4A5A04
signed int iSGFileSize(class st_ISGSESSION * isgdata /* r2 */, char * fname /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A59B0 -> 0x4A5A04
        signed int size; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A5A10 -> 0x004A5B94
*/
// Range: 0x4A5A10 -> 0x4A5B94
unsigned char iSGGameExists(class st_ISGSESSION * isgdata /* r2 */, char * fname /* r18 */) {
    /* anonymous block */ {
        // Range: 0x4A5A10 -> 0x4A5B94
        signed int rc; // r2
        char str_buf[64]; // r29+0x40
        signed int len; // r2
        signed int numfound; // r29+0x8C
        class st_ISG_MEMCARD_DATA * mcdata; // r17
        char * path; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A5BA0 -> 0x004A5BA8
*/
// Range: 0x4A5BA0 -> 0x4A5BA8
signed int iSGTgtHaveRoomStartup(class st_ISGSESSION * isgdata /* r2 */, signed int tidx /* r2 */, signed int fsize /* r2 */, char * dpath /* r2 */, char * fname /* r2 */, signed int * bytesNeeded /* r2 */, signed int * availOnDisk /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A5BA0 -> 0x4A5BA8
        signed int result; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A5BB0 -> 0x004A5CBC
*/
// Range: 0x4A5BB0 -> 0x4A5CBC
signed int iSGTgtHaveRoom(class st_ISGSESSION * isgdata /* r21 */, signed int tidx /* r20 */, signed int fsize /* r19 */, char * dpath /* r18 */, char * fname /* r17 */, signed int * bytesNeeded /* r22 */, signed int * availOnDisk /* r23 */) {
    /* anonymous block */ {
        // Range: 0x4A5BB0 -> 0x4A5CBC
        signed int result; // r2
        signed int i; // r16
        char * gameName; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A5CC0 -> 0x004A5D34
*/
// Range: 0x4A5CC0 -> 0x4A5D34
signed int iSGTgtSetActive(class st_ISGSESSION * isgdata /* r2 */, signed int tgtidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A5CC0 -> 0x4A5D34
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A5D40 -> 0x004A5E60
*/
// Range: 0x4A5D40 -> 0x4A5E60
unsigned int iSGTgtState(class st_ISGSESSION * isgdata /* r18 */, signed int tgtidx /* r17 */, char * dpath /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4A5D40 -> 0x4A5E60
        unsigned int state; // r19
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A5E60 -> 0x004A5F78
*/
// Range: 0x4A5E60 -> 0x4A5F78
signed int iSGTgtFormat(class st_ISGSESSION * isgdata /* r17 */, signed int tgtidx /* r19 */, signed int async /* r18 */) {
    /* anonymous block */ {
        // Range: 0x4A5E60 -> 0x4A5F78
        signed int result; // r16
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A5F80 -> 0x004A5FD4
*/
// Range: 0x4A5F80 -> 0x4A5FD4
signed int iSGTgtPhysSlotIdx() {
    /* anonymous block */ {
        // Range: 0x4A5F80 -> 0x4A5FD4
        signed int concnt[2]; // r29+0x10
        signed int dp; // r29+0x1C
        signed int ds; // r29+0x18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A5FE0 -> 0x004A607C
*/
// Range: 0x4A5FE0 -> 0x4A607C
signed int iSGTgtCount(signed int * max /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4A5FE0 -> 0x4A607C
        signed int rc; // r2
        signed int tgtmax; // r2
        signed int concnt[2]; // r29+0x30
        signed int dp; // r29+0x3C
        signed int ds; // r29+0x38
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A6080 -> 0x004A608C
*/
// Range: 0x4A6080 -> 0x4A608C
void iSGSessionEnd(class st_ISGSESSION * isgdata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A6080 -> 0x4A608C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A6090 -> 0x004A617C
*/
// Range: 0x4A6090 -> 0x4A617C
class st_ISGSESSION * iSGSessionBegin(void * cltdata /* r18 */, void (* chgfunc)(void *, enum en_CHGCODE) /* r17 */, signed int monitor /* r19 */) {
    /* anonymous block */ {
        // Range: 0x4A6090 -> 0x4A617C
        class st_ISGSESSION * isgdata; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A6180 -> 0x004A640C
*/
// Range: 0x4A6180 -> 0x4A640C
char * iSGMakeName(enum en_NAMEGEN_TYPE type /* r2 */, char * base /* r20 */, signed int idx /* r19 */) {
    /* anonymous block */ {
        // Range: 0x4A6180 -> 0x4A640C
        char * use_buf; // r18
        char * fmt_sb; // r17
        char * fmt_sd; // r2
        char * fmt_sbd; // r16
        signed int rotate; // @ 0x00638594
        char rotatebuf[8][32]; // @ 0x007C0060
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A6410 -> 0x004A6420
*/
// Range: 0x4A6410 -> 0x4A6420
signed int iSGShutdown() {
    /* anonymous block */ {
        // Range: 0x4A6410 -> 0x4A6420
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\isavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A6420 -> 0x004A645C
*/
// Range: 0x4A6420 -> 0x4A645C
signed int iSGStartup() {
    /* anonymous block */ {
        // Range: 0x4A6420 -> 0x4A645C
    }
}


