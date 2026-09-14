/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004C1630 -> 0x004C1740
*/
// Range: 0x4C1630 -> 0x4C1740
static void AddTables() {
    /* anonymous block */ {
        // Range: 0x4C1630 -> 0x4C1740
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004C1740 -> 0x004C194C
*/
// Range: 0x4C1740 -> 0x4C194C
void zCineFXCutscene(class zCutsceneMgr * csnmgr /* r20 */) {
    /* anonymous block */ {
        // Range: 0x4C1740 -> 0x4C194C
        class xCutscene * csn; // r2
        class NCINEntry * fxtab; // r19
        signed int need_animated; // r18
        signed int need_render; // r17
        class NCINEntry * nextrec; // r2
        class NCINEntry * fxrec; // r16
        signed int flags; // r4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004C1950 -> 0x004C1A20
*/
// Range: 0x4C1950 -> 0x4C1A20
void zCineFXCutsceneDone(class zCutsceneMgr * csnmgr /* r18 */) {
    /* anonymous block */ {
        // Range: 0x4C1950 -> 0x4C1A20
        class NCINEntry * fxtab; // r17
        class NCINEntry * nextrec; // r2
        class NCINEntry * fxrec; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004C1A20 -> 0x004C1AD4
*/
// Range: 0x4C1A20 -> 0x4C1AD4
signed int zCineFXCutscenePrep(class zCutsceneMgr * csnmgr /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4C1A20 -> 0x4C1AD4
        class NCINEntry * fxtab; // r2
        class NCINEntry * nextrec; // r16
        class NCINEntry * fxrec; // [invalid]
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004C1AE0 -> 0x004C1B40
*/
// Range: 0x4C1AE0 -> 0x4C1B40
static class NCINEntry * zCineFXCutscenePickTable(class zCutsceneMgr * csnmgr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4C1AE0 -> 0x4C1B40
        class NCINEntry * da_fxtab; // r2
        signed int i; // r8
        class NCINMap * cutrec; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004C1B40 -> 0x004C1BD4
*/
// Range: 0x4C1B40 -> 0x4C1BD4
void zCineFXRegisterTable(class NCINMap * maplist /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4C1B40 -> 0x4C1BD4
        class NCINMap * maprec; // r16
        signed int i; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004C1BE0 -> 0x004C1BE8
*/
// Range: 0x4C1BE0 -> 0x4C1BE8
void zCineFXSceneSetup() {
    /* anonymous block */ {
        // Range: 0x4C1BE0 -> 0x4C1BE8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004C1BF0 -> 0x004C1BF8
*/
// Range: 0x4C1BF0 -> 0x4C1BF8
void zCineFXShutdown() {
    /* anonymous block */ {
        // Range: 0x4C1BF0 -> 0x4C1BF8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004C1C00 -> 0x004C1C4C
*/
// Range: 0x4C1C00 -> 0x4C1C4C
void zCineFXStartup() {
    /* anonymous block */ {
        // Range: 0x4C1C00 -> 0x4C1C4C
        signed char @6225; // @ 0x00638620
        class NCINBeNosey nozey_npc_cinematics; // @ 0x007C5E30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004C1C50 -> 0x004C1D0C
*/
// Range: 0x4C1C50 -> 0x4C1D0C
// this: r2
void NCINBeNosey::UpdatedAnimated(class RpAtomic * model /* r21 */, class RwMatrixTag * animMat /* r20 */, unsigned int animIndex /* r19 */, unsigned int dataIndex /* r18 */) {
    /* anonymous block */ {
        // Range: 0x4C1C50 -> 0x4C1D0C
        class zCutsceneMgr * csnmgr; // r17
        class NCINEntry * fxtab; // r2
        class NCINEntry * nextrec; // r16
        class NCINEntry * fxrec; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCineFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004C1D10 -> 0x004C1D8C
*/
// Range: 0x4C1D10 -> 0x4C1D8C
// this: r2
void NCINBeNosey::CanRenderNow() {
    /* anonymous block */ {
        // Range: 0x4C1D10 -> 0x4C1D8C
        class zCutsceneMgr * csnmgr; // r17
        class NCINEntry * fxtab; // r2
        class NCINEntry * nextrec; // r16
        class NCINEntry * fxrec; // r2
    }
}


