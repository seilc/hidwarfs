/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurTurner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA100 -> 0x001FA30C
*/
// Range: 0x1FA100 -> 0x1FA30C
// this: r18
signed int zNMEGoalTurrTTurn::Process(enum en_trantype * trantype /* r17 */, float dt /* r20 */, void * ctxt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1FA100 -> 0x1FA30C
        class zNMETurret * npc; // r2
        signed int nextgoal; // r2
        class xVec3 dir_plyr; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurTurner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA310 -> 0x001FA3CC
*/
// Range: 0x1FA310 -> 0x1FA3CC
// this: r16
signed int zNMEGoalTurrTTurn::Resume() {
    /* anonymous block */ {
        // Range: 0x1FA310 -> 0x1FA3CC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurTurner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA3D0 -> 0x001FA48C
*/
// Range: 0x1FA3D0 -> 0x1FA48C
// this: r16
signed int zNMEGoalTurrTTurn::Enter() {
    /* anonymous block */ {
        // Range: 0x1FA3D0 -> 0x1FA48C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurTurner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA490 -> 0x001FA594
*/
// Range: 0x1FA490 -> 0x1FA594
// this: r16
signed int zNMEGoalTurrTReady::Process(enum en_trantype * trantype /* r2 */, float dt /* r29+0x30 */, void * ctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FA490 -> 0x1FA594
        class zNMETurret * npc; // r2
        signed int nextgoal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurTurner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA5A0 -> 0x001FA600
*/
// Range: 0x1FA5A0 -> 0x1FA600
// this: r2
signed int zNMETurTurner::TypeHandleMail(class NMEMsg * mail /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FA5A0 -> 0x1FA600
        signed int handled; // r16
        class xPsyche * psy; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurTurner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA600 -> 0x001FA670
*/
// Range: 0x1FA600 -> 0x1FA670
// this: r16
void zNMETurTurner::Process(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1FA600 -> 0x1FA670
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurTurner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA670 -> 0x001FA924
*/
// Range: 0x1FA670 -> 0x1FA924
// this: r16
void zNMETurTurner::Reset() {
    /* anonymous block */ {
        // Range: 0x1FA670 -> 0x1FA924
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurTurner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA930 -> 0x001FABD8
*/
// Range: 0x1FA930 -> 0x1FABD8
class xAnimTable * CreateAnimTable(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1FA930 -> 0x1FABD8
        signed int ourAnims[6]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurTurner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FABE0 -> 0x001FACD4
*/
// Range: 0x1FABE0 -> 0x1FACD4
unsigned int AnimPick(signed int gid /* r2 */, enum en_npcgspot gspot /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FABE0 -> 0x1FACD4
        signed int idx; // r7
        unsigned int da_anim; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurTurner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FACE0 -> 0x001FAD88
*/
// Range: 0x1FACE0 -> 0x1FAD88
// this: r16
void zNMETurTurner::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x1FACE0 -> 0x1FAD88
        class xBehaveMgr * bmgr; // r2
        class xPsyche * psy; // r2
    }
}


