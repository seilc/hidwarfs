/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039CDA0 -> 0x0039CDF4
*/
// Range: 0x39CDA0 -> 0x39CDF4
static void ASG_ISG_changed(enum en_CHGCODE what /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39CDA0 -> 0x39CDF4
        class XSGAutoData * asg; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039CE00 -> 0x0039CE4C
*/
// Range: 0x39CE00 -> 0x39CE4C
// this: r16
void XSGAutoData::Discard() {
    /* anonymous block */ {
        // Range: 0x39CE00 -> 0x39CE4C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039CE50 -> 0x0039CF08
*/
// Range: 0x39CE50 -> 0x39CF08
// this: r16
signed int XSGAutoData::SetCache(signed int targ /* r19 */, signed int game /* r18 */, signed int physicalSlot /* r17 */) {
    /* anonymous block */ {
        // Range: 0x39CE50 -> 0x39CF08
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039CF10 -> 0x0039CF70
*/
// Range: 0x39CF10 -> 0x39CF70
// this: r16
signed int XSGAutoData::IsValid() {
    /* anonymous block */ {
        // Range: 0x39CF10 -> 0x39CF70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039CF70 -> 0x0039CF7C
*/
// Range: 0x39CF70 -> 0x39CF7C
class XSGAutoData * xSGAutoSave_GetCache() {
    /* anonymous block */ {
        // Range: 0x39CF70 -> 0x39CF7C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039CF80 -> 0x0039D080
*/
// Range: 0x39CF80 -> 0x39D080
signed int xSG_ld_flipload(class st_XSAVEGAME_DATA * xsgdata /* r20 */) {
    /* anonymous block */ {
        // Range: 0x39CF80 -> 0x39D080
        signed int result; // r19
        signed int rc; // r2
        signed int i; // r18
        class st_XSAVEGAME_CLIENT * clt; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039D080 -> 0x0039D348
*/
// Range: 0x39D080 -> 0x39D348
signed int xSG_ld_findcltblk(class st_XSAVEGAME_DATA * xsgdata /* r18 */) {
    /* anonymous block */ {
        // Range: 0x39D080 -> 0x39D348
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
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039D350 -> 0x0039D424
*/
// Range: 0x39D350 -> 0x39D424
signed int xSG_ld_readhead(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x39D350 -> 0x39D424
        signed int result; // r16
        signed int ival; // r29+0x3C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039D430 -> 0x0039D484
*/
// Range: 0x39D430 -> 0x39D484
void xSG_cb_ISGChange(enum en_CHGCODE what /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39D430 -> 0x39D484
        class XSGAutoData * asg; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039D490 -> 0x0039D598
*/
// Range: 0x39D490 -> 0x39D598
signed int xSG_sv_commit(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x39D490 -> 0x39D598
        signed int result; // r16
        signed int rc; // r2
        char * name; // r2
        char browselabel[64]; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039D5A0 -> 0x0039D5A8
*/
// Range: 0x39D5A0 -> 0x39D5A8
void xSGSetWriteIcon(signed int flag /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39D5A0 -> 0x39D5A8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039D5B0 -> 0x0039D678
*/
// Range: 0x39D5B0 -> 0x39D678
signed int xSG_smem_cltclose(class st_XSAVEGAME_DATA * xsgdata /* r17 */, class st_XSAVEGAME_CLIENT * clt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x39D5B0 -> 0x39D678
        char * last_bufpos; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039D680 -> 0x0039D700
*/
// Range: 0x39D680 -> 0x39D700
signed int xSG_smem_blkclose(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x39D680 -> 0x39D700
        char * last_bufpos; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039D700 -> 0x0039D8E8
*/
// Range: 0x39D700 -> 0x39D8E8
signed int xSG_sv_flipproc(class st_XSAVEGAME_DATA * xsgdata /* r21 */) {
    /* anonymous block */ {
        // Range: 0x39D700 -> 0x39D8E8
        signed int result; // r22
        signed int rc; // r2
        signed int i; // r20
        class st_XSAVEGAME_CLIENT * clt; // r19
        char bfill; // r29+0x8F
        signed int needfill; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039D8F0 -> 0x0039D990
*/
// Range: 0x39D8F0 -> 0x39D990
signed int xSG_sv_prepdest(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x39D8F0 -> 0x39D990
        signed int result; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039D990 -> 0x0039DAAC
*/
// Range: 0x39D990 -> 0x39DAAC
signed int xSG_sv_flipinfo(class st_XSAVEGAME_DATA * xsgdata /* r20 */) {
    /* anonymous block */ {
        // Range: 0x39D990 -> 0x39DAAC
        signed int result; // r19
        signed int i; // r18
        signed int rc; // r2
        class st_XSAVEGAME_CLIENT * clt; // r2
        signed int cltamt; // r29+0x6C
        signed int cltmax; // r29+0x68
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039DAB0 -> 0x0039DCB8
*/
// Range: 0x39DAB0 -> 0x39DCB8
static signed int xSG_grab_leaders(class st_XSAVEGAME_DATA * xsgdata /* r21 */) {
    /* anonymous block */ {
        // Range: 0x39DAB0 -> 0x39DCB8
        signed int num_found; // r20
        signed int i; // r19
        char readbuf[116]; // r29+0x80
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039DCC0 -> 0x0039DCCC
*/
// Range: 0x39DCC0 -> 0x39DCCC
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, float * buff /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39DCC0 -> 0x39DCCC
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039DCD0 -> 0x0039DCDC
*/
// Range: 0x39DCD0 -> 0x39DCDC
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, signed int * buff /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39DCD0 -> 0x39DCDC
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039DCE0 -> 0x0039DCEC
*/
// Range: 0x39DCE0 -> 0x39DCEC
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r2 */, char * buff /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39DCE0 -> 0x39DCEC
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039DCF0 -> 0x0039DDFC
*/
// Range: 0x39DCF0 -> 0x39DDFC
signed int xSGReadData(class st_XSAVEGAME_DATA * xsgdata /* r19 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r18 */, char * buff /* r2 */, signed int elesiz /* r17 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39DCF0 -> 0x39DDFC
        signed int cnt; // r16
        class st_XSAVEGAME_CLIENT * clt; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039DE00 -> 0x0039DE0C
*/
// Range: 0x39DE00 -> 0x39DE0C
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, float * data /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39DE00 -> 0x39DE0C
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039DE10 -> 0x0039DE1C
*/
// Range: 0x39DE10 -> 0x39DE1C
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, signed int * data /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39DE10 -> 0x39DE1C
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039DE20 -> 0x0039DE2C
*/
// Range: 0x39DE20 -> 0x39DE2C
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r2 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r2 */, char * data /* r2 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39DE20 -> 0x39DE2C
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039DE30 -> 0x0039DE5C
*/
// Range: 0x39DE30 -> 0x39DE5C
signed int xSGWriteStrLen(char * str /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39DE30 -> 0x39DE5C
        signed int len; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039DE60 -> 0x0039DFA0
*/
// Range: 0x39DE60 -> 0x39DFA0
signed int xSGWriteData(class st_XSAVEGAME_DATA * xsgdata /* r20 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r19 */, char * data /* r2 */, signed int elesiz /* r18 */, signed int n /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39DE60 -> 0x39DFA0
        signed int cnt; // r17
        class st_XSAVEGAME_CLIENT * clt; // r2
        signed int is_ok; // r16
        void * mcprc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039DFA0 -> 0x0039E050
*/
// Range: 0x39DFA0 -> 0x39E050
static signed int xSG_cb_leader_load(class st_XSAVEGAME_DATA * original_xsgdata /* r17 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x39DFA0 -> 0x39E050
        char fundata[32]; // r29+0x90
        class st_XSAVEGAME_LEADER discard; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039E050 -> 0x0039E13C
*/
// Range: 0x39E050 -> 0x39E13C
static signed int xSG_cb_leader_svproc(void * cltdata /* r18 */, class st_XSAVEGAME_DATA * original_xsgdata /* r17 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x39E050 -> 0x39E13C
        class st_XSAVEGAME_DATA * xsg; // r2
        class st_XSAVEGAME_LEADER leader; // r29+0x60
        char fundata[23]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039E140 -> 0x0039E154
*/
// Range: 0x39E140 -> 0x39E154
static signed int xSG_cb_leader_svinfo(signed int * cur_space /* r2 */, signed int * max_fullgame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39E140 -> 0x39E154
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039E160 -> 0x0039E2A8
*/
// Range: 0x39E160 -> 0x39E2A8
enum en_XSGASYNC_STATUS xSGAsyncStatus(class st_XSAVEGAME_DATA * xsgdata /* r20 */, signed int block /* r5 */, enum en_XSG_WHYFAIL * whyFail /* r19 */, char * errmsg /* r18 */) {
    /* anonymous block */ {
        // Range: 0x39E160 -> 0x39E2A8
        enum en_XSGASYNC_STATUS xstat; // r17
        enum en_ASYNC_OPSTAT istat; // r2
        enum en_ASYNC_OPERR whyerr; // r16
        enum en_XSG_WHYFAIL con; // r3
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039E2B0 -> 0x0039E478
*/
// Range: 0x39E2B0 -> 0x39E478
signed int xSGWrapup(class st_XSAVEGAME_DATA * xsgdata /* r18 */) {
    /* anonymous block */ {
        // Range: 0x39E2B0 -> 0x39E478
        signed int result; // r17
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039E480 -> 0x0039E6B4
*/
// Range: 0x39E480 -> 0x39E6B4
signed int xSGProcess(class st_XSAVEGAME_DATA * xsgdata /* r18 */) {
    /* anonymous block */ {
        // Range: 0x39E480 -> 0x39E6B4
        signed int result; // r17
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039E6C0 -> 0x0039E838
*/
// Range: 0x39E6C0 -> 0x39E838
signed int xSGSetup(class st_XSAVEGAME_DATA * xsgdata /* r20 */, signed int gidx /* r2 */, char * label /* r2 */, signed int progress /* r19 */, signed long playtime /* r18 */, signed int thumbIconIdx /* r17 */) {
    /* anonymous block */ {
        // Range: 0x39E6C0 -> 0x39E838
        signed int result; // r16
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039E840 -> 0x0039E85C
*/
// Range: 0x39E840 -> 0x39E85C
signed int xSGSetup(class st_XSAVEGAME_DATA * xsgdata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39E840 -> 0x39E85C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039E860 -> 0x0039E9A0
*/
// Range: 0x39E860 -> 0x39E9A0
signed int xSGAddLoadClient(class st_XSAVEGAME_DATA * xsgdata /* r19 */, unsigned int clttag /* r18 */, void * cltdata /* r17 */, signed int (* loadfunc)(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int) /* r16 */) {
    /* anonymous block */ {
        // Range: 0x39E860 -> 0x39E9A0
        signed int result; // r2
        class st_XSAVEGAME_CLIENT * clt; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039E9A0 -> 0x0039EA98
*/
// Range: 0x39E9A0 -> 0x39EA98
signed int xSGAddSaveClient(class st_XSAVEGAME_DATA * xsgdata /* r20 */, unsigned int clttag /* r19 */, void * cltdata /* r18 */, signed int (* infofunc)(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *) /* r17 */, signed int (* procfunc)(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *) /* r16 */) {
    /* anonymous block */ {
        // Range: 0x39E9A0 -> 0x39EA98
        signed int result; // r2
        class st_XSAVEGAME_CLIENT * clt; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039EAA0 -> 0x0039EB3C
*/
// Range: 0x39EAA0 -> 0x39EB3C
signed int xSGGameProgress(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x39EAA0 -> 0x39EB3C
        signed int idx_thum; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039EB40 -> 0x0039EBDC
*/
// Range: 0x39EB40 -> 0x39EBDC
signed int xSGGameThumbIndex(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x39EB40 -> 0x39EBDC
        signed int idx_thum; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039EBE0 -> 0x0039EC84
*/
// Range: 0x39EBE0 -> 0x39EC84
char * xSGGameLabel(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r17 */) {
    /* anonymous block */ {
        // Range: 0x39EBE0 -> 0x39EC84
        char * da_name; // r16
        class st_XSAVEGAME_LEADER * lead; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039EC90 -> 0x0039ED94
*/
// Range: 0x39EC90 -> 0x39ED94
char * xSGGameModDate(class st_XSAVEGAME_DATA * xsgdata /* r18 */, signed int gidx /* r17 */) {
    /* anonymous block */ {
        // Range: 0x39EC90 -> 0x39ED94
        char * date; // r2
        char da_date[32]; // @ 0x006AFEC0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039EDA0 -> 0x0039EE74
*/
// Range: 0x39EDA0 -> 0x39EE74
signed int xSGGameSize(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r18 */) {
    /* anonymous block */ {
        // Range: 0x39EDA0 -> 0x39EE74
        signed int size; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039EE80 -> 0x0039EF5C
*/
// Range: 0x39EE80 -> 0x39EF5C
signed int xSGGameIsEmpty(class st_XSAVEGAME_DATA * xsgdata /* r19 */, signed int gidx /* r18 */) {
    /* anonymous block */ {
        // Range: 0x39EE80 -> 0x39EF5C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039EF60 -> 0x0039EF68
*/
// Range: 0x39EF60 -> 0x39EF68
void xSGGameSet(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int gidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39EF60 -> 0x39EF68
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039EF70 -> 0x0039EF78
*/
// Range: 0x39EF70 -> 0x39EF78
unsigned char xSGCheckMemoryCard(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int index /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39EF70 -> 0x39EF78
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039EF80 -> 0x0039F078
*/
// Range: 0x39EF80 -> 0x39F078
signed int xSGTgtHaveRoomStartup(class st_XSAVEGAME_DATA * xsgdata /* r21 */, signed int tidx /* r20 */, signed int fsize /* r19 */, signed int slotidx /* r2 */, signed int * bytesNeeded /* r18 */, signed int * availOnDisk /* r17 */, signed int * needFile /* r16 */) {
    /* anonymous block */ {
        // Range: 0x39EF80 -> 0x39F078
        signed int isroom; // r2
        char fname[256]; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039F080 -> 0x0039F178
*/
// Range: 0x39F080 -> 0x39F178
signed int xSGTgtHaveRoom(class st_XSAVEGAME_DATA * xsgdata /* r21 */, signed int tidx /* r20 */, signed int fsize /* r19 */, signed int slotidx /* r2 */, signed int * bytesNeeded /* r18 */, signed int * availOnDisk /* r17 */, signed int * needFile /* r16 */) {
    /* anonymous block */ {
        // Range: 0x39F080 -> 0x39F178
        signed int isroom; // r2
        char fname[256]; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039F180 -> 0x0039F1EC
*/
// Range: 0x39F180 -> 0x39F1EC
signed int xSGTgtHasGameDir(class st_XSAVEGAME_DATA * xsgdata /* r17 */, signed int tidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39F180 -> 0x39F1EC
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039F1F0 -> 0x0039F27C
*/
// Range: 0x39F1F0 -> 0x39F27C
signed int xSGTgtSelect(class st_XSAVEGAME_DATA * xsgdata /* r18 */, signed int tidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39F1F0 -> 0x39F27C
        signed int result; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039F280 -> 0x0039F290
*/
// Range: 0x39F280 -> 0x39F290
signed int xSGTgtFormatTgt(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int tidx /* r2 */, signed int * canRecover /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39F280 -> 0x39F290
        signed int result; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039F290 -> 0x0039F314
*/
// Range: 0x39F290 -> 0x39F314
signed int xSGTgtIsFormat(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int tidx /* r2 */, signed int * badEncode /* r17 */) {
    /* anonymous block */ {
        // Range: 0x39F290 -> 0x39F314
        signed int result; // r16
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039F320 -> 0x0039F328
*/
// Range: 0x39F320 -> 0x39F328
signed int xSGTgtPhysSlotIdx(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int tidx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39F320 -> 0x39F328
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039F330 -> 0x0039F338
*/
// Range: 0x39F330 -> 0x39F338
signed int xSGTgtCount(class st_XSAVEGAME_DATA * xsgdata /* r2 */, signed int * max /* r2 */) {
    /* anonymous block */ {
        // Range: 0x39F330 -> 0x39F338
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039F340 -> 0x0039F460
*/
// Range: 0x39F340 -> 0x39F460
signed int xSGDone(class st_XSAVEGAME_DATA * xsgdata /* r17 */) {
    /* anonymous block */ {
        // Range: 0x39F340 -> 0x39F460
        signed int result; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039F460 -> 0x0039F554
*/
// Range: 0x39F460 -> 0x39F554
class st_XSAVEGAME_DATA * xSGInit(enum en_SAVEGAME_MODE mode /* r17 */) {
    /* anonymous block */ {
        // Range: 0x39F460 -> 0x39F554
        class st_XSAVEGAME_DATA * xsgdata; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039F560 -> 0x0039F5A4
*/
// Range: 0x39F560 -> 0x39F5A4
signed int xSGShutdown() {
    /* anonymous block */ {
        // Range: 0x39F560 -> 0x39F5A4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xsavegame.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0039F5B0 -> 0x0039F624
*/
// Range: 0x39F5B0 -> 0x39F624
signed int xSGStartup() {
    /* anonymous block */ {
        // Range: 0x39F5B0 -> 0x39F624
    }
}


