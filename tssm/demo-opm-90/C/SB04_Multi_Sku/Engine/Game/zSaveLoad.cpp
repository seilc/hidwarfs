/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F7030 -> 0x002F71D8
*/
// Range: 0x2F7030 -> 0x2F71D8
void zSaveLoad_TriggerAutoSave() {
    /* anonymous block */ {
        // Range: 0x2F7030 -> 0x2F71D8
        signed int result; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F71E0 -> 0x002F72CC
*/
// Range: 0x2F71E0 -> 0x2F72CC
signed int xSGT_LoadPrefsCB(class st_XSAVEGAME_DATA * xsgdata /* r17 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2F71E0 -> 0x2F72CC
        float fMusicVol; // r29+0x3C
        float f3DVol; // r29+0x38
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F72D0 -> 0x002F73A4
*/
// Range: 0x2F72D0 -> 0x2F73A4
signed int xSGT_LoadLoadCB(class st_XSAVEGAME_DATA * xsgdata /* r18 */, class st_XSAVEGAME_READCONTEXT * rctxt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2F72D0 -> 0x2F73A4
        char bigbuf[32]; // r29+0x40
        signed int compdiff; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F73B0 -> 0x002F7488
*/
// Range: 0x2F73B0 -> 0x2F7488
signed int xSGT_SaveProcPrefsCB(class st_XSAVEGAME_DATA * xsgdata /* r17 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2F73B0 -> 0x2F7488
        signed int amy; // r2
        signed int sum; // r18
        float fMusicVolume; // r29+0x4C
        float f3DVolume; // r29+0x48
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F7490 -> 0x002F74AC
*/
// Range: 0x2F7490 -> 0x2F74AC
signed int xSGT_SaveInfoPrefsCB(signed int * need /* r2 */, signed int * most /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2F7490 -> 0x2F74AC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F74B0 -> 0x002F753C
*/
// Range: 0x2F74B0 -> 0x2F753C
signed int xSGT_SaveProcCB(class st_XSAVEGAME_DATA * xsgdata /* r18 */, class st_XSAVEGAME_WRITECONTEXT * wctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2F74B0 -> 0x2F753C
        signed int amy; // r2
        signed int sum; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F7540 -> 0x002F758C
*/
// Range: 0x2F7540 -> 0x2F758C
signed int xSGT_SaveInfoCB(signed int * need /* r17 */, signed int * most /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2F7540 -> 0x2F758C
        signed int slen; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F7590 -> 0x002F76D0
*/
// Range: 0x2F7590 -> 0x2F76D0
void zSaveLoad_DispatchCB(unsigned int dispatchEvent /* r2 */, float * toParam /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2F7590 -> 0x2F76D0
        class st_XSAVEGAME_DATA * inst; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F76D0 -> 0x002F85AC
*/
// Range: 0x2F76D0 -> 0x2F85AC
unsigned int zSaveLoad_SaveLoop() {
    /* anonymous block */ {
        // Range: 0x2F76D0 -> 0x2F85AC
        signed int result; // r2
        signed int tmp; // r2
        signed int tmp; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F85B0 -> 0x002F90CC
*/
// Range: 0x2F85B0 -> 0x2F90CC
unsigned int zSaveLoad_LoadLoop() {
    /* anonymous block */ {
        // Range: 0x2F85B0 -> 0x2F90CC
        signed int result; // r2
        unsigned char hasCard; // r16
        signed int tmp; // r2
        signed int tmp; // r2
        signed int result; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F90D0 -> 0x002F9598
*/
// Range: 0x2F90D0 -> 0x2F9598
signed int zSaveLoad_LoadGame() {
    /* anonymous block */ {
        // Range: 0x2F90D0 -> 0x2F9598
        signed int success; // r20
        signed int teststat; // r19
        signed int rc; // r2
        enum en_XSGASYNC_STATUS asstat; // r18
        enum en_XSG_WHYFAIL whyFail; // r29+0x7C
        class XSGAutoData * asg; // r18
        signed int use_game; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F95A0 -> 0x002F9ED0
*/
// Range: 0x2F95A0 -> 0x2F9ED0
signed int zSaveLoad_SaveGame() {
    /* anonymous block */ {
        // Range: 0x2F95A0 -> 0x2F9ED0
        signed int success; // r29+0xB0
        signed int teststat; // r20
        signed int rc; // r2
        enum en_XSGASYNC_STATUS asstat; // r19
        signed int use_game; // r21
        signed int write_icon; // r30
        char * damaged_save_name; // r29+0xAC
        unsigned int game; // r22
        char label[64]; // r29+0xE0
        enum en_XSG_WHYFAIL whyFail; // r29+0x13C
        class XSGAutoData * asg; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F9ED0 -> 0x002FA2F0
*/
// Range: 0x2F9ED0 -> 0x2FA2F0
signed int zSaveLoad_DoAutoSave() {
    /* anonymous block */ {
        // Range: 0x2F9ED0 -> 0x2FA2F0
        signed int success; // r23
        signed int teststat; // r20
        signed int rc; // r2
        enum en_XSGASYNC_STATUS asstat; // r19
        class st_XSAVEGAME_DATA * svinst; // r18
        class XSGAutoData * autodata; // r17
        char label[64]; // r29+0xB0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002FA2F0 -> 0x002FA77C
*/
// Range: 0x2FA2F0 -> 0x2FA77C
void zSaveLoadAutoSaveUpdate() {
    /* anonymous block */ {
        // Range: 0x2FA2F0 -> 0x2FA77C
        class xBase * sendTo; // r2
        class XSGAutoData * autodata; // r2
        signed int result; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002FA780 -> 0x002FA788
*/
// Range: 0x2FA780 -> 0x2FA788
void zSaveLoadPreAutoSave(unsigned char onOff /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2FA780 -> 0x2FA788
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002FA790 -> 0x002FC6A0
*/
// Range: 0x2FA790 -> 0x2FC6A0
signed int zSaveLoad_GameSelect(signed int mode /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2FA790 -> 0x2FC6A0
        signed int done; // r19
        class st_XSAVEGAME_DATA * svinst; // r18
        signed int emptyCount; // r23
        signed int i; // r17
        char * empty_string; // r22
        char * damaged_save_name; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002FC6A0 -> 0x002FC7E4
*/
// Range: 0x2FC6A0 -> 0x2FC7E4
void zSaveLoad_BuildName(char * name_txt /* r21 */, unsigned int max_len /* r23 */, signed int idx /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2FC6A0 -> 0x2FC7E4
        char desired[128]; // r29+0x110
        char current_name[128]; // r29+0x90
        char * damaged_save_name; // r19
        signed int counter; // r18
        signed int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002FC7F0 -> 0x002FC9B0
*/
// Range: 0x2FC7F0 -> 0x2FC9B0
static void BuildIt(char * build_txt /* r19 */, signed int i /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2FC7F0 -> 0x2FC9B0
        char date1[32]; // r29+0x170
        char date2[32]; // r29+0x150
        char biggerbuf[256]; // r29+0x50
        char * damaged_save_name; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002FC9B0 -> 0x002FDF64
*/
// Range: 0x2FC9B0 -> 0x2FDF64
signed int zSaveLoad_CardPick(signed int mode /* r18 */) {
    /* anonymous block */ {
        // Range: 0x2FC9B0 -> 0x2FDF64
        signed int done; // r2
        unsigned char formatDone; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002FDF70 -> 0x002FE5E8
*/
// Range: 0x2FDF70 -> 0x2FE5E8
signed int zSaveLoad_CardCheckSlotOverwrite(signed int cardNumber /* r2 */, signed int gameNumber /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2FDF70 -> 0x2FE5E8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002FE5F0 -> 0x002FEAA8
*/
// Range: 0x2FE5F0 -> 0x2FEAA8
signed int zSaveLoad_CardCheckFormatted(signed int cardNumber /* r17 */, signed int mode /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2FE5F0 -> 0x2FEAA8
        signed int result; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002FEAB0 -> 0x002FEBA0
*/
// Range: 0x2FEAB0 -> 0x2FEBA0
signed int zSaveLoad_CardCheckSlotEmpty_hasGame(signed int num /* r19 */, signed int game /* r18 */) {
    /* anonymous block */ {
        // Range: 0x2FEAB0 -> 0x2FEBA0
        class st_XSAVEGAME_DATA * ldinst; // r17
        signed int tgtcnt; // r2
        signed int tgtmax; // r29+0x5C
        signed int rc; // r16
        signed int tgtslot; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002FEBA0 -> 0x002FECE8
*/
// Range: 0x2FEBA0 -> 0x2FECE8
signed int zSaveLoad_CardCheckSlotEmpty_hasGame_doCheck(class st_XSAVEGAME_DATA * xsgdata /* r21 */, signed int num /* r20 */, signed int game /* r19 */) {
    /* anonymous block */ {
        // Range: 0x2FEBA0 -> 0x2FECE8
        signed int rc; // r2
        char * damaged_save_name; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002FECF0 -> 0x002FEE34
*/
// Range: 0x2FECF0 -> 0x2FEE34
signed int zSaveLoad_CardCheckGamesSingle(signed int num /* r18 */) {
    /* anonymous block */ {
        // Range: 0x2FECF0 -> 0x2FEE34
        class st_XSAVEGAME_DATA * ldinst; // r17
        signed int tgtcnt; // r2
        signed int tgtmax; // r29+0x4C
        signed int rc; // r16
        signed int tgtslot; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002FEE40 -> 0x002FEF10
*/
// Range: 0x2FEE40 -> 0x2FEF10
signed int zSaveLoad_CardCheckSpaceSingle(signed int num /* r18 */) {
    /* anonymous block */ {
        // Range: 0x2FEE40 -> 0x2FEF10
        class st_XSAVEGAME_DATA * ldinst; // r17
        signed int tgtcnt; // r2
        signed int tgtmax; // r29+0x4C
        signed int rc; // r16
        signed int tgtslot; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002FEF10 -> 0x002FEF94
*/
// Range: 0x2FEF10 -> 0x2FEF94
signed int zSaveLoad_CardCheckSpaceSingle_doCheck(class st_XSAVEGAME_DATA * xsgdata /* r17 */, signed int num /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2FEF10 -> 0x2FEF94
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002FEFA0 -> 0x002FF0D4
*/
// Range: 0x2FEFA0 -> 0x2FF0D4
signed int zSaveLoad_CardCheckFormattedSingle(signed int num /* r18 */) {
    /* anonymous block */ {
        // Range: 0x2FEFA0 -> 0x2FF0D4
        class st_XSAVEGAME_DATA * ldinst; // r17
        signed int tgtcnt; // r2
        signed int tgtmax; // r29+0x4C
        signed int rc; // r2
        signed int tgtslot; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002FF0E0 -> 0x002FF18C
*/
// Range: 0x2FF0E0 -> 0x2FF18C
signed int zSaveLoad_CardCheckSingle(signed int num /* r18 */) {
    /* anonymous block */ {
        // Range: 0x2FF0E0 -> 0x2FF18C
        class st_XSAVEGAME_DATA * ldinst; // r17
        signed int tgtcnt; // r2
        signed int tgtmax; // r29+0x4C
        signed int tgtslot; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002FF190 -> 0x002FF7CC
*/
// Range: 0x2FF190 -> 0x2FF7CC
signed int zSaveLoad_CardPrompt(signed int mode /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2FF190 -> 0x2FF7CC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002FF7D0 -> 0x00300784
*/
// Range: 0x2FF7D0 -> 0x300784
signed int format(signed int num /* r17 */, signed int mode /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2FF7D0 -> 0x300784
        signed int tgtcnt; // r2
        signed int tgtmax; // r29+0x5C
        signed int rc; // r19
        signed int tgtslot; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSaveLoad.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00300790 -> 0x00300EE8
*/
// Range: 0x300790 -> 0x300EE8
void zSaveLoad_Tick(unsigned char padUpdate /* r16 */) {
    /* anonymous block */ {
        // Range: 0x300790 -> 0x300EE8
        class xMat4x3 playerMat; // r29+0x100
        class xVec3 playerVel; // r29+0x180
    }
}


