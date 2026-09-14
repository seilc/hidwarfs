/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurPopup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC090 -> 0x001FC1F8
*/
// Range: 0x1FC090 -> 0x1FC1F8
// this: r16
signed int zNMEGoalTurrPAlert::Process(enum en_trantype * trantype /* r2 */, float dt /* r29+0x40 */, void * ctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FC090 -> 0x1FC1F8
        class zNMETurret * npc; // r2
        signed int nextgoal; // r2
        class xVec3 dir_plyr; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurPopup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC200 -> 0x001FC2BC
*/
// Range: 0x1FC200 -> 0x1FC2BC
// this: r16
signed int zNMEGoalTurrPAlert::Resume() {
    /* anonymous block */ {
        // Range: 0x1FC200 -> 0x1FC2BC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurPopup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC2C0 -> 0x001FC37C
*/
// Range: 0x1FC2C0 -> 0x1FC37C
// this: r16
signed int zNMEGoalTurrPAlert::Enter() {
    /* anonymous block */ {
        // Range: 0x1FC2C0 -> 0x1FC37C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurPopup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC380 -> 0x001FC484
*/
// Range: 0x1FC380 -> 0x1FC484
// this: r16
signed int zNMEGoalTurrPDormant::Process(enum en_trantype * trantype /* r2 */, float dt /* r29+0x30 */, void * ctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FC380 -> 0x1FC484
        class zNMETurret * npc; // r2
        signed int nextgoal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurPopup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC490 -> 0x001FC4F0
*/
// Range: 0x1FC490 -> 0x1FC4F0
// this: r2
signed int zNMETurPopup::TypeHandleMail(class NMEMsg * mail /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FC490 -> 0x1FC4F0
        signed int handled; // r16
        class xPsyche * psy; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurPopup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC4F0 -> 0x001FC58C
*/
// Range: 0x1FC4F0 -> 0x1FC58C
// this: r16
void zNMETurPopup::Process(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1FC4F0 -> 0x1FC58C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurPopup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC590 -> 0x001FC844
*/
// Range: 0x1FC590 -> 0x1FC844
// this: r16
void zNMETurPopup::Reset() {
    /* anonymous block */ {
        // Range: 0x1FC590 -> 0x1FC844
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurPopup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FC850 -> 0x001FCBA0
*/
// Range: 0x1FC850 -> 0x1FCBA0
class xAnimTable * CreateAnimTable(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1FC850 -> 0x1FCBA0
        signed int ourAnims[8]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurPopup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FCBA0 -> 0x001FCC70
*/
// Range: 0x1FCBA0 -> 0x1FCC70
unsigned int AnimPick(signed int gid /* r2 */, enum en_npcgspot gspot /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FCBA0 -> 0x1FCC70
        enum en_turranim idx; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurPopup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FCC70 -> 0x001FCD18
*/
// Range: 0x1FCC70 -> 0x1FCD18
// this: r16
void zNMETurPopup::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x1FCC70 -> 0x1FCD18
        class xBehaveMgr * bmgr; // r2
        class xPsyche * psy; // r2
    }
}


