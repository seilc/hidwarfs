/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurSpiral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FAD90 -> 0x001FB298
*/
// Range: 0x1FAD90 -> 0x1FB298
// this: r20
void zNMEGoalTurrSpiral::EmitSteam() {
    /* anonymous block */ {
        // Range: 0x1FAD90 -> 0x1FB298
        class zNMETurSpiral * npc; // r19
        class xVec3 delta; // r29+0x1F0
        class xVec3 pos_src; // r29+0x1E0
        class xVec3 pos_tgt; // r29+0x1D0
        class xVec3 dir_laser; // r29+0x1C0
        class xCollis colrec_data; // r29+0xA0
        class xCollis * colrec; // r18
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurSpiral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB2A0 -> 0x001FB400
*/
// Range: 0x1FB2A0 -> 0x1FB400
// this: r19
signed int zNMEGoalTurrSpiral::Process(enum en_trantype * trantype /* r18 */, float dt /* r20 */, void * ctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1FB2A0 -> 0x1FB400
        class zNMETurSpiral * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurSpiral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB400 -> 0x001FB4B4
*/
// Range: 0x1FB400 -> 0x1FB4B4
// this: r16
signed int zNMEGoalTurrSpiral::Enter() {
    /* anonymous block */ {
        // Range: 0x1FB400 -> 0x1FB4B4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurSpiral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB4C0 -> 0x001FB580
*/
// Range: 0x1FB4C0 -> 0x1FB580
signed int Spiral_SeePlyr(class xGoal * rawgoal /* r2 */, enum en_trantype * trantype /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FB4C0 -> 0x1FB580
        class zNMETurSpiral * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurSpiral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB580 -> 0x001FB61C
*/
// Range: 0x1FB580 -> 0x1FB61C
// this: r16
void zNMETurSpiral::Process(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1FB580 -> 0x1FB61C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurSpiral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB620 -> 0x001FB8D4
*/
// Range: 0x1FB620 -> 0x1FB8D4
// this: r16
void zNMETurSpiral::Reset() {
    /* anonymous block */ {
        // Range: 0x1FB620 -> 0x1FB8D4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurSpiral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB8E0 -> 0x001FBB94
*/
// Range: 0x1FB8E0 -> 0x1FBB94
class xAnimTable * CreateAnimTable(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1FB8E0 -> 0x1FBB94
        signed int ourAnims[7]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurSpiral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FBBA0 -> 0x001FBC38
*/
// Range: 0x1FBBA0 -> 0x1FBC38
unsigned int AnimPick(signed int gid /* r2 */, enum en_npcgspot gspot /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FBBA0 -> 0x1FBC38
        enum en_turranim idx; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurSpiral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FBC40 -> 0x001FBCF8
*/
// Range: 0x1FBC40 -> 0x1FBCF8
// this: r16
void zNMETurSpiral::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x1FBC40 -> 0x1FBCF8
        class xBehaveMgr * bmgr; // r2
        class xPsyche * psy; // r2
        class xGoal * goal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurSpiral.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FBD00 -> 0x001FBD6C
*/
// Range: 0x1FBD00 -> 0x1FBD6C
// this: r17
void zNMETurSpiral::Init(class xEntAsset * asset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1FBD00 -> 0x1FBD6C
    }
}


