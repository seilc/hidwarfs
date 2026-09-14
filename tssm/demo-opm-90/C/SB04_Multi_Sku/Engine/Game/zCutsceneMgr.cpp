/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCutsceneMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003859A0 -> 0x00385AFC
*/
// Range: 0x3859A0 -> 0x385AFC
static void check_hide_entities() {
    /* anonymous block */ {
        // Range: 0x3859A0 -> 0x385AFC
        class zScene & scene; // r2
        class zEnt * * it; // r17
        class zEnt * * end; // r2
        class zEnt * ent; // r2
        class zEnt * ent; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCutsceneMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00385B00 -> 0x00386034
*/
// Range: 0x385B00 -> 0x386034
void zCutsceneMgrUpdate(class xBase * to /* r18 */, class xScene * sc /* r16 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x385B00 -> 0x386034
        class zCutsceneMgr * t; // r2
        signed int csncount; // r2
        signed int cnum; // r17
        unsigned int skipButtons; // r16
        enum xRegion region; // r2
        signed int doCineFX; // @ 0x00637E08
        float csnPlayTimeLimit; // @ 0x00636DA4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCutsceneMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00386040 -> 0x00386118
*/
// Range: 0x386040 -> 0x386118
static void zCutsceneMgrUpdateFX(class zCutsceneMgr * t /* r2 */) {
    /* anonymous block */ {
        // Range: 0x386040 -> 0x386118
        class xCutsceneMgrAsset * a; // r2
        class xCutscene * csn; // r2
        signed int i; // r18
        class zParEmitter * e; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCutsceneMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00386120 -> 0x003862B0
*/
// Range: 0x386120 -> 0x3862B0
void zCutsceneMgrFinishExit(class xBase * to /* r29+0x70 */) {
    /* anonymous block */ {
        // Range: 0x386120 -> 0x3862B0
        class zCutsceneMgr * t; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCutsceneMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003862B0 -> 0x003863E4
*/
// Range: 0x3862B0 -> 0x3863E4
void zCutsceneMgrFinishLoad(class xBase * to /* r29+0x40 */) {
    /* anonymous block */ {
        // Range: 0x3862B0 -> 0x3863E4
        class zCutsceneMgr * t; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCutsceneMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003863F0 -> 0x003865E4
*/
// Range: 0x3863F0 -> 0x3865E4
void zCutsceneMgrEventCB(class xBase * to /* r17 */, unsigned int toEvent /* r2 */, float * toParam /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3863F0 -> 0x3865E4
        class zCutsceneMgr * t; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCutsceneMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003865F0 -> 0x00386788
*/
// Range: 0x3865F0 -> 0x386788
static void zCutsceneMgrPlayStart(class zCutsceneMgr * t /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3865F0 -> 0x386788
        unsigned int i; // r16
        unsigned int j; // r6
        unsigned int cinid; // r2
        unsigned int hackid; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCutsceneMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00386790 -> 0x00386798
*/
// Range: 0x386790 -> 0x386798
void zCutsceneMgrLoad() {
    /* anonymous block */ {
        // Range: 0x386790 -> 0x386798
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCutsceneMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003867A0 -> 0x003867A8
*/
// Range: 0x3867A0 -> 0x3867A8
void zCutsceneMgrSave() {
    /* anonymous block */ {
        // Range: 0x3867A0 -> 0x3867A8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCutsceneMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003867B0 -> 0x00386820
*/
// Range: 0x3867B0 -> 0x386820
void zCutsceneMgrInit(void * b /* r16 */, void * tasset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3867B0 -> 0x386820
    }
}


