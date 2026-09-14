/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020B100 -> 0x0020B448
*/
// Range: 0x20B100 -> 0x20B448
// this: r20
void zNMEGoalSpinBattle::RibbonLoop(class zNMESpinner * npc /* r19 */) {
    /* anonymous block */ {
        // Range: 0x20B100 -> 0x20B448
        class RibData * ribhelp; // r2
        class xVec3 pos_hand; // r29+0xA0
        class xVec3 pos_head; // r29+0x90
        class xMat4x3 * mat_root; // r2
        class xVec3 dir_emit; // r29+0x80
        float dst; // r29+0xB0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020B450 -> 0x0020B6DC
*/
// Range: 0x20B450 -> 0x20B6DC
// this: r17
signed int zNMEGoalSpinBattle::ColChk_NMEDyn(class zNMESpinner * npc /* r16 */) {
    /* anonymous block */ {
        // Range: 0x20B450 -> 0x20B6DC
        class xVec3 pos_head; // r29+0xD0
        class BattleCollideData cbdata; // r29+0x50
        class xCollis colrec; // @ 0x00668700
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020B6E0 -> 0x0020B850
*/
// Range: 0x20B6E0 -> 0x20B850
// this: r17
unsigned char BattleCollideData::operator()(class xEnt & ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x20B6E0 -> 0x20B850
        class xCollis colrec; // r29+0x40
        float hitArgs[4]; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020B850 -> 0x0020BBD0
*/
// Range: 0x20B850 -> 0x20BBD0
// this: r2
signed int zNMEGoalSpinBattle::ColChk_BBall(class zNMESpinner * npc /* r16 */) {
    /* anonymous block */ {
        // Range: 0x20B850 -> 0x20BBD0
        class xEntBoulder * bowl; // r2
        class xVec3 pos_nme; // r29+0xD0
        float upper; // r29+0xE0
        class xVec3 pos_ball; // r29+0xC0
        class xVec3 vec_NtoB; // r29+0xB0
        class xVec3 dir_NtoB; // r29+0xA0
        class xVec3 dir_trav; // r29+0x90
        class xVec3 dir_smack; // r29+0x80
        class xVec3 vec_smack; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020BBD0 -> 0x0020BD6C
*/
// Range: 0x20BBD0 -> 0x20BD6C
// this: r2
signed int zNMEGoalSpinBattle::ColChk_Player(class zNMESpinner * npc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20BBD0 -> 0x20BD6C
        class xVec3 pos_nme; // r29+0x50
        float upper; // r29+0x60
        class xVec3 pos_plyr; // r29+0x40
        class xVec3 vec_NtoB; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020BD70 -> 0x0020C0B4
*/
// Range: 0x20BD70 -> 0x20C0B4
// this: r18
signed int zNMEGoalSpinBattle::PursueAndDestroy(class zNMESpinner * npc /* r17 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x20BD70 -> 0x20C0B4
        unsigned int anid_done; // r2
        unsigned int anid_loop; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020C0C0 -> 0x0020C458
*/
// Range: 0x20C0C0 -> 0x20C458
// this: r19
signed int zNMEGoalSpinBattle::RetreatAndFinish(class zNMESpinner * npc /* r18 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x20C0C0 -> 0x20C458
        signed int arrived; // r2
        unsigned int anid_loop; // r2
        unsigned int anid_done; // r2
        class xVec3 pos_dest; // r29+0x90
        signed int doneanddone; // r17
        unsigned int anid_loop; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020C460 -> 0x0020C994
*/
// Range: 0x20C460 -> 0x20C994
// this: r19
void zNMEGoalSpinBattle::StepAwayFromTheSponge(class zNMESpinner * npc /* r18 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x20C460 -> 0x20C994
        class xVec3 dir_back; // r29+0xF0
        float len; // r3
        unsigned int anid_loop; // r2
        class xVec3 pos_want; // r29+0xE0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020C9A0 -> 0x0020D004
*/
// Range: 0x20C9A0 -> 0x20D004
// this: r20
signed int zNMEGoalSpinBattle::Process(enum en_trantype * trantype /* r19 */, float dt /* r20 */, void * ctxt /* r18 */) {
    /* anonymous block */ {
        // Range: 0x20C9A0 -> 0x20D004
        signed int nextgoal; // r29+0xEC
        class zNMESpinner * npc; // r17
        signed int chkTrans; // r16
        enum en_vis vis; // r2
        signed int amDone; // r2
        signed int amDone; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020D010 -> 0x0020D238
*/
// Range: 0x20D010 -> 0x20D238
// this: r19
signed int zNMEGoalSpinBattle::Resume() {
    /* anonymous block */ {
        // Range: 0x20D010 -> 0x20D238
        class zNMESpinner * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020D240 -> 0x0020D2D0
*/
// Range: 0x20D240 -> 0x20D2D0
// this: r17
signed int zNMEGoalSpinBattle::Suspend() {
    /* anonymous block */ {
        // Range: 0x20D240 -> 0x20D2D0
        class zNMESpinner * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020D2D0 -> 0x0020D360
*/
// Range: 0x20D2D0 -> 0x20D360
// this: r17
signed int zNMEGoalSpinBattle::Exit() {
    /* anonymous block */ {
        // Range: 0x20D2D0 -> 0x20D360
        class zNMESpinner * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020D360 -> 0x0020D588
*/
// Range: 0x20D360 -> 0x20D588
// this: r19
signed int zNMEGoalSpinBattle::Enter() {
    /* anonymous block */ {
        // Range: 0x20D360 -> 0x20D588
        class zNMESpinner * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020D590 -> 0x0020D8E8
*/
// Range: 0x20D590 -> 0x20D8E8
// this: r19
signed int zNMEGoalSpinAware::ChkTranCases(class zNMESpinner * npc /* r18 */, signed int & nextgoal /* r17 */, enum en_trantype & trantype /* r16 */) {
    /* anonymous block */ {
        // Range: 0x20D590 -> 0x20D8E8
        enum en_vis vis; // r2
        signed int vidx; // r2
        float * wtlist; // r21
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020D8F0 -> 0x0020DBBC
*/
// Range: 0x20D8F0 -> 0x20DBBC
// this: r18
signed int zNMEGoalSpinAware::Process(enum en_trantype * trantype /* r17 */, float dt /* r20 */, void * ctxt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x20D8F0 -> 0x20DBBC
        signed int nextgoal; // r29+0xAC
        class zNMESpinner * npc; // r16
        signed int doTran; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020DBC0 -> 0x0020DC8C
*/
// Range: 0x20DBC0 -> 0x20DC8C
// this: r16
signed int zNMEGoalSpinAware::Enter() {
    /* anonymous block */ {
        // Range: 0x20DBC0 -> 0x20DC8C
        class zNMESpinner * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020DC90 -> 0x0020DF4C
*/
// Range: 0x20DC90 -> 0x20DF4C
signed int Spin_SeePlyr(class xGoal * rawgoal /* r18 */, enum en_trantype * trantype /* r17 */) {
    /* anonymous block */ {
        // Range: 0x20DC90 -> 0x20DF4C
        signed int nextgoal; // r29+0x6C
        class zNMESpinner * npc; // r16
        class zNMEArena * arena; // r2
        enum en_vis vis; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020DF50 -> 0x0020DFE4
*/
// Range: 0x20DF50 -> 0x20DFE4
// this: r2
float zNMESpinner::HealthRatio() {
    /* anonymous block */ {
        // Range: 0x20DF50 -> 0x20DFE4
        float rat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020DFF0 -> 0x0020E554
*/
// Range: 0x20DFF0 -> 0x20E554
// this: r2
enum en_vis zNMESpinner::VisionTarget(class xEnt * ent /* r2 */, enum en_defcon defcon /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20DFF0 -> 0x20E554
        class zNMEArena * arena; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020E560 -> 0x0020E67C
*/
// Range: 0x20E560 -> 0x20E67C
// this: r18
signed int zNMESpinner::SpinMailDamage(class NMEDamageInfo * dmgmail /* r17 */) {
    /* anonymous block */ {
        // Range: 0x20E560 -> 0x20E67C
        signed int rc; // r2
        signed int handled; // r16
        class xPsyche * psy; // r2
        class xGoal * goal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020E680 -> 0x0020E938
*/
// Range: 0x20E680 -> 0x20E938
// this: r20
signed int zNMESpinner::TypeHandleMail(class NMEMsg * mail /* r19 */) {
    /* anonymous block */ {
        // Range: 0x20E680 -> 0x20E938
        signed int handled; // r18
        class xPsyche * psy; // r17
        signed int gid; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020E940 -> 0x0020E9F4
*/
// Range: 0x20E940 -> 0x20E9F4
signed int GoalPick(signed int & gid_would /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20E940 -> 0x20E9F4
        signed int altered; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020EA00 -> 0x0020EAAC
*/
// Range: 0x20EA00 -> 0x20EAAC
// this: r17
void zNMESpinner::CollideReview() {
    /* anonymous block */ {
        // Range: 0x20EA00 -> 0x20EAAC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020EAB0 -> 0x0020EBD8
*/
// Range: 0x20EAB0 -> 0x20EBD8
// this: r2
void zNMESpinner::Type_AddYourMove(float dt /* r29+0x30 */) {
    /* anonymous block */ {
        // Range: 0x20EAB0 -> 0x20EBD8
        class xVec3 delta; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020EBE0 -> 0x0020ECB0
*/
// Range: 0x20EBE0 -> 0x20ECB0
// this: r16
void zNMESpinner::Process(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x20EBE0 -> 0x20ECB0
        signed int gid; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020ECB0 -> 0x0020FA18
*/
// Range: 0x20ECB0 -> 0x20FA18
// this: r16
void zNMESpinner::BUpdate(class xVec3 * pos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20ECB0 -> 0x20FA18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020FA20 -> 0x00210328
*/
// Range: 0x20FA20 -> 0x210328
class xAnimTable * CreateAnimTable(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x20FA20 -> 0x210328
        signed int ourAnims[24]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00210330 -> 0x0021061C
*/
// Range: 0x210330 -> 0x21061C
// this: r2
unsigned int zNMESpinner::AnimPick(signed int gid /* r2 */, enum en_npcgspot gspot /* r2 */) {
    /* anonymous block */ {
        // Range: 0x210330 -> 0x21061C
        signed int idx; // r3
        unsigned int da_anim; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00210620 -> 0x0021089C
*/
// Range: 0x210620 -> 0x21089C
// this: r17
void zNMESpinner::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x210620 -> 0x21089C
        class xBehaveMgr * bmgr; // r2
        class xPsyche * psy; // r2
        class xGoal * goal; // r2
        class xGoal * g; // r2
        enum en_trantype trantype; // r29+0x3C
        signed int nextgoal; // r29+0x38
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002108A0 -> 0x00210C40
*/
// Range: 0x2108A0 -> 0x210C40
// this: r17
void zNMESpinner::Reset() {
    /* anonymous block */ {
        // Range: 0x2108A0 -> 0x210C40
        class xPsyche * psy; // r2
        class zNMEGoalAfterlife * goal; // r2
        enum en_trantype trantype; // r29+0x3C
        signed int nextgoal; // r29+0x38
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00210C40 -> 0x00210D00
*/
// Range: 0x210C40 -> 0x210D00
// this: r16
void zNMESpinner::Setup() {
    /* anonymous block */ {
        // Range: 0x210C40 -> 0x210D00
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00210D00 -> 0x00210F50
*/
// Range: 0x210D00 -> 0x210F50
// this: r16
void zNMESpinner::Init(class xEntAsset * entass /* r17 */) {
    /* anonymous block */ {
        // Range: 0x210D00 -> 0x210F50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00210F50 -> 0x00210F88
*/
// Range: 0x210F50 -> 0x210F88
// this: r2
unsigned char zNMESpinner::ColPenFlags() {
    /* anonymous block */ {
        // Range: 0x210F50 -> 0x210F88
        unsigned char flags; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00210F90 -> 0x00210FC8
*/
// Range: 0x210F90 -> 0x210FC8
// this: r2
unsigned char zNMESpinner::ColChkFlags() {
    /* anonymous block */ {
        // Range: 0x210F90 -> 0x210FC8
        unsigned char flags; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00210FD0 -> 0x00210FD8
*/
// Range: 0x210FD0 -> 0x210FD8
signed int DfltVulnFlags() {
    /* anonymous block */ {
        // Range: 0x210FD0 -> 0x210FD8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSpinner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00210FE0 -> 0x00211044
*/
// Range: 0x210FE0 -> 0x211044
// this: r16
void zNMESpinner::CreateConfig() {
    /* anonymous block */ {
        // Range: 0x210FE0 -> 0x211044
        enum en_nmevar vidx; // r2
    }
}


