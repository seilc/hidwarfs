/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022B3F0 -> 0x0022B5C0
*/
// Range: 0x22B3F0 -> 0x22B5C0
// this: r16
signed int zNMEGoalPatThrow::Enter(float dt /* r29+0x70 */) {
    /* anonymous block */ {
        // Range: 0x22B3F0 -> 0x22B5C0
        class zNMEStandard * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022B5C0 -> 0x0022B62C
*/
// Range: 0x22B5C0 -> 0x22B62C
// this: r16
signed int zNMEGoalPatTwirl::Process(enum en_trantype * trantype /* r2 */, float dt /* r29+0x20 */, void * ctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x22B5C0 -> 0x22B62C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022B630 -> 0x0022B75C
*/
// Range: 0x22B630 -> 0x22B75C
float CalcPlayerLean(class zNMEStandard * npc /* r16 */, float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x22B630 -> 0x22B75C
        float diffAngle; // r29+0x30
        float desiredLean; // r2
        float rat_oldLean; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022B760 -> 0x0022B794
*/
// Range: 0x22B760 -> 0x22B794
// this: r2
void zNMEGoalPatCarry::TowerOfPisa(class zNMEStandard * npc /* r16 */, float dt /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x22B760 -> 0x22B794
        float rat_lean; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022B7A0 -> 0x0022B84C
*/
// Range: 0x22B7A0 -> 0x22B84C
// this: r16
signed int zNMEGoalPatCarry::Process(enum en_trantype * trantype /* r18 */, float dt /* r20 */, void * ctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x22B7A0 -> 0x22B84C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022B850 -> 0x0022B930
*/
// Range: 0x22B850 -> 0x22B930
// this: r16
signed int zNMEGoalPatCarry::Enter() {
    /* anonymous block */ {
        // Range: 0x22B850 -> 0x22B930
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022B930 -> 0x0022BA50
*/
// Range: 0x22B930 -> 0x22BA50
// this: r17
signed int zNMEGoalStunned::Process(enum en_trantype * trantype /* r2 */, float dt /* r29+0x40 */, void * ctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x22B930 -> 0x22BA50
        signed int nextgoal; // r29+0x3C
        class zNMEStandard * npc; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022BA50 -> 0x0022BBB4
*/
// Range: 0x22BA50 -> 0x22BBB4
// this: r17
signed int zNMEGoalStunned::Enter() {
    /* anonymous block */ {
        // Range: 0x22BA50 -> 0x22BBB4
        class zNMEStandard * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022BBC0 -> 0x0022BDDC
*/
// Range: 0x22BBC0 -> 0x22BDDC
// this: r2
void zNMEGoalEvilPat::GlyphStart() {
    /* anonymous block */ {
        // Range: 0x22BBC0 -> 0x22BDDC
        class zNMEStandard * npc; // r2
        class zNMEHazard * haz; // r18
        class xVec3 ang_delta; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022BDE0 -> 0x0022BEA0
*/
// Range: 0x22BDE0 -> 0x22BEA0
// this: r2
signed int zNMEGoalEvilPat::GoalHandleMail(class NMEMsg * msg /* r17 */) {
    /* anonymous block */ {
        // Range: 0x22BDE0 -> 0x22BEA0
        signed int handled; // r2
        class zNMEStandard * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022BEA0 -> 0x0022BF64
*/
// Range: 0x22BEA0 -> 0x22BF64
// this: r4
signed int zNMEGoalEvilPat::Process(enum en_trantype * trantype /* r2 */) {
    /* anonymous block */ {
        // Range: 0x22BEA0 -> 0x22BF64
        signed int nextgoal; // r29+0x2C
        class zNMEStandard * npc; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022BF70 -> 0x0022BFB0
*/
// Range: 0x22BF70 -> 0x22BFB0
// this: r2
signed int zNMEGoalEvilPat::Exit() {
    /* anonymous block */ {
        // Range: 0x22BF70 -> 0x22BFB0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022BFB0 -> 0x0022C06C
*/
// Range: 0x22BFB0 -> 0x22C06C
// this: r16
signed int zNMEGoalEvilPat::Enter() {
    /* anonymous block */ {
        // Range: 0x22BFB0 -> 0x22C06C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022C070 -> 0x0022C2B4
*/
// Range: 0x22C070 -> 0x22C2B4
// this: r18
signed int zNMEGoalScare::PathParabola() {
    /* anonymous block */ {
        // Range: 0x22C070 -> 0x22C2B4
        class zNMEStandard * npc; // r2
        signed int arrived; // r17
        float tym_ingoal; // r29+0xC0
        class xVec3 pos; // r29+0xB0
        class xVec3 vel; // r29+0xA0
        class xMat3x3 mat_rot; // r29+0x40
        float mag; // r29+0xC0
        class xVec3 dir; // r29+0x90
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022C2C0 -> 0x0022C434
*/
// Range: 0x22C2C0 -> 0x22C434
// this: r17
signed int zNMEGoalScare::UpdateAnim(float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x22C2C0 -> 0x22C434
        class zNMEStandard * npc; // r2
        float tym_ingoal; // r29+0x40
        unsigned int anid_loop; // r2
        unsigned int anid_done; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022C440 -> 0x0022C5E4
*/
// Range: 0x22C440 -> 0x22C5E4
// this: r19
signed int zNMEGoalScare::Process(enum en_trantype * trantype /* r18 */, float dt /* r20 */, void * ctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x22C440 -> 0x22C5E4
        signed int animsComplete; // r2
        signed int nextgoal; // r29+0x6C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022C5F0 -> 0x0022C710
*/
// Range: 0x22C5F0 -> 0x22C710
// this: r17
signed int zNMEGoalScare::Exit() {
    /* anonymous block */ {
        // Range: 0x22C5F0 -> 0x22C710
        class zNMEStandard * npc; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022C710 -> 0x0022CAF8
*/
// Range: 0x22C710 -> 0x22CAF8
// this: r17
signed int zNMEGoalScare::Enter() {
    /* anonymous block */ {
        // Range: 0x22C710 -> 0x22CAF8
        class zNMEStandard * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022CB00 -> 0x0022CC44
*/
// Range: 0x22CB00 -> 0x22CC44
// this: r18
void zNMEGoalScareWait::AbortAbort() {
    /* anonymous block */ {
        // Range: 0x22CB00 -> 0x22CC44
        class zNMECommon * npc; // r17
        class xVec3 pos_dest; // r29+0x48
        signed int nextgoal; // r29+0x5C
        enum en_trantype trantype; // r29+0x58
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022CC50 -> 0x0022CD00
*/
// Range: 0x22CC50 -> 0x22CD00
// this: r16
signed int zNMEGoalScareWait::GoalHandleMail(class NMEMsg * msg /* r2 */) {
    /* anonymous block */ {
        // Range: 0x22CC50 -> 0x22CD00
        signed int handled; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022CD00 -> 0x0022CF10
*/
// Range: 0x22CD00 -> 0x22CF10
// this: r17
signed int zNMEGoalScareWait::Enter() {
    /* anonymous block */ {
        // Range: 0x22CD00 -> 0x22CF10
        class zNMEStandard * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022CF10 -> 0x0022D070
*/
// Range: 0x22CF10 -> 0x22D070
// this: r19
void zNMEGoalSpawning::KickFromTheNest(class zNMECommon * npc /* r18 */) {
    /* anonymous block */ {
        // Range: 0x22CF10 -> 0x22D070
        enum en_allow allowDetect; // r2
        enum en_allow allowAttack; // r2
        class zNMEGoalAfterlife * wanna; // r2
        signed int nextgoal; // r29+0x5C
        enum en_trantype trantype; // r29+0x58
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022D310 -> 0x0022D834
*/
// Range: 0x22D310 -> 0x22D834
// this: r18
void zNMEGoalSpawning::RibbonUpdate(class xVec3 * pos_home /* r17 */, float ratio /* r20 */) {
    /* anonymous block */ {
        // Range: 0x22D310 -> 0x22D834
        class RibData * ribhelp; // r2
        float rad; // r21
        float rat; // r29+0x160
        float rat; // r29+0x160
        float ang; // r20
        class xVec3 orient; // r29+0x150
        class xVec3 pos_emit; // r29+0x140
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022D840 -> 0x0022DA54
*/
// Range: 0x22D840 -> 0x22DA54
// this: r16
void zNMEGoalSpawning::CowCatcher(class zNMECommon * npc /* r19 */) {
    /* anonymous block */ {
        // Range: 0x22D840 -> 0x22DA54
        float fac; // r1
        class xBound bnd; // r29+0xC0
        class xCollis * colrec; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022DA60 -> 0x0022DE28
*/
// Range: 0x22DA60 -> 0x22DE28
// this: r20
float zNMEGoalSpawning::LaunchSpawnBall(class zNMECommon * npc /* r19 */, class xVec3 * pos_launch /* r18 */) {
    /* anonymous block */ {
        // Range: 0x22DA60 -> 0x22DE28
        class zNMEHazard * haz; // r17
        class xVec3 pos_tgt; // r29+0x90
        class xVec3 vec_diff; // r29+0x80
        float spd_flight; // r29+0xA0
        float tym_flight; // r29+0xA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022DE30 -> 0x0022E1C8
*/
// Range: 0x22DE30 -> 0x22E1C8
// this: r17
signed int zNMEGoalSpawning::EmergeYeBeastie(class zNMECommon * npc /* r16 */, float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x22DE30 -> 0x22E1C8
        float fac; // r1
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022E1D0 -> 0x0022E3F8
*/
// Range: 0x22E1D0 -> 0x22E3F8
void CalcLaunchPoint(class zNMECommon * npc /* r2 */, class xVec3 * pos_launch /* r2 */, signed int useDefault /* r2 */) {
    /* anonymous block */ {
        // Range: 0x22E1D0 -> 0x22E3F8
        class xVec3 pos; // r29+0x10
        class zNMECommon * npc_duper; // r3
        unsigned int anid_animCurr; // r2
        class xMat4x3 * mat_bone; // r11
        class xVec3 pos_emit; // r29
        class xMat4x3 * mat_root; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022E400 -> 0x0022E504
*/
// Range: 0x22E400 -> 0x22E504
// this: r2
enum en_dupspit zNMEGoalSpawning::ExamineDuperAnim(class zNMECommon * npc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x22E400 -> 0x22E504
        class zNMECommon * npc_duper; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022E510 -> 0x0022E728
*/
// Range: 0x22E510 -> 0x22E728
// this: r17
signed int zNMEGoalSpawning::PatienceMonitor(class zNMECommon * npc /* r16 */, float dt /* r29+0x50 */) {
    /* anonymous block */ {
        // Range: 0x22E510 -> 0x22E728
        enum en_dupspit dupspit; // r2
        class xVec3 pos_launch; // r29+0x40
        float tym; // r29+0x50
        class xVec3 pos_launch; // r29+0x30
        float tym; // r29+0x50
        float tym_waitForBucky; // @ 0x0061B950
        signed char @37741; // @ 0x00637444
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022E730 -> 0x0022E924
*/
// Range: 0x22E730 -> 0x22E924
// this: r19
signed int zNMEGoalSpawning::Process(enum en_trantype * trantype /* r18 */, float dt /* r20 */, void * ctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x22E730 -> 0x22E924
        class zNMECommon * npc; // r16
        signed int patienceDone; // r2
        signed int emergeDone; // r2
        signed int nextgoal; // r29+0x6C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022E930 -> 0x0022E978
*/
// Range: 0x22E930 -> 0x22E978
// this: r16
signed int zNMEGoalSpawning::Exit() {
    /* anonymous block */ {
        // Range: 0x22E930 -> 0x22E978
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022E980 -> 0x0022ECA0
*/
// Range: 0x22E980 -> 0x22ECA0
// this: r18
signed int zNMEGoalSpawning::Enter() {
    /* anonymous block */ {
        // Range: 0x22E980 -> 0x22ECA0
        class zNMECommon * npc; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022ECA0 -> 0x0022EE48
*/
// Range: 0x22ECA0 -> 0x22EE48
// this: r2
signed int zNMEGoalAfterlife::GoalHandleMail(class NMEMsg * mail /* r18 */) {
    /* anonymous block */ {
        // Range: 0x22ECA0 -> 0x22EE48
        signed int snarfed; // r17
        class zNMEGoalSpawning * spgoal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022EE50 -> 0x0022F030
*/
// Range: 0x22EE50 -> 0x22F030
// this: r17
signed int zNMEGoalAfterlife::Enter() {
    /* anonymous block */ {
        // Range: 0x22EE50 -> 0x22F030
        class zNMECommon * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022F030 -> 0x0022F2FC
*/
// Range: 0x22F030 -> 0x22F2FC
// this: r20
void zNMEGoalWound::RibbonUpdate(class zNMEStandard * npc /* r19 */) {
    /* anonymous block */ {
        // Range: 0x22F030 -> 0x22F2FC
        class RibData * ribhelp; // r2
        float scale; // r21
        float alpha; // r20
        class xVec3 pos_emit; // r29+0xA0
        class xVec3 dir_up; // r29+0x90
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022F300 -> 0x0022F308
*/
// Range: 0x22F300 -> 0x22F308
void RibbonPrep() {
    /* anonymous block */ {
        // Range: 0x22F300 -> 0x22F308
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022F310 -> 0x0022F464
*/
// Range: 0x22F310 -> 0x22F464
// this: r17
void zNMEGoalWound::TakeItLikeAMan(class zNMEStandard * npc /* r16 */) {
    /* anonymous block */ {
        // Range: 0x22F310 -> 0x22F464
        float tym_anim; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022F470 -> 0x0022F490
*/
// Range: 0x22F470 -> 0x22F490
signed int GoalHandleMail(class NMEMsg * mail /* r2 */) {
    /* anonymous block */ {
        // Range: 0x22F470 -> 0x22F490
        signed int snarfed; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022F490 -> 0x0022F730
*/
// Range: 0x22F490 -> 0x22F730
// this: r2
signed int zNMEGoalWound::InputInfo(class NMEDamageInfo * dmgmail /* r2 */) {
    /* anonymous block */ {
        // Range: 0x22F490 -> 0x22F730
        class zNMEStandard * npc; // r2
        class xVec3 dir_plyr; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022F730 -> 0x0022F938
*/
// Range: 0x22F730 -> 0x22F938
// this: r2
signed int zNMEGoalWound::InputInfoDflt() {
    /* anonymous block */ {
        // Range: 0x22F730 -> 0x22F938
        class zNMEStandard * npc; // r2
        class xVec3 dir_plyr; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022F940 -> 0x0022FD24
*/
// Range: 0x22F940 -> 0x22FD24
// this: r21
signed int zNMEGoalWound::CollReview() {
    /* anonymous block */ {
        // Range: 0x22F940 -> 0x22FD24
        class zNMEStandard * npc; // r20
        class xEntCollis * npccol; // r2
        signed int badsurf; // r2
        class xVec3 vel_temp; // r29+0xF0
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0022FD30 -> 0x002300D4
*/
// Range: 0x22FD30 -> 0x2300D4
// this: r19
signed int zNMEGoalWound::Process(enum en_trantype * trantype /* r18 */, float dt /* r20 */, void * ctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x22FD30 -> 0x2300D4
        class zNMEStandard * npc; // r16
        signed int nextgoal; // r29+0xBC
        class xVec3 vec; // r29+0xB0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002300E0 -> 0x002301E4
*/
// Range: 0x2300E0 -> 0x2301E4
// this: r17
signed int zNMEGoalWound::Exit() {
    /* anonymous block */ {
        // Range: 0x2300E0 -> 0x2301E4
        class zNMEStandard * npc; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002301F0 -> 0x002303E4
*/
// Range: 0x2301F0 -> 0x2303E4
// this: r17
signed int zNMEGoalWound::Enter() {
    /* anonymous block */ {
        // Range: 0x2301F0 -> 0x2303E4
        class zNMEStandard * npc; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002303F0 -> 0x0023070C
*/
// Range: 0x2303F0 -> 0x23070C
// this: r16
void zNMEStandard::DazedFXUpdate() {
    /* anonymous block */ {
        // Range: 0x2303F0 -> 0x23070C
        signed int gid; // r2
        class xVec3 pos; // r29+0x70
        class xVec3 pos; // r29+0x60
        signed int turnOn; // r6
        signed int i; // r5
        signed int gid_carried[4]; // @ 0x0061B860
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00230710 -> 0x00230758
*/
// Range: 0x230710 -> 0x230758
// this: r2
void zNMEStandard::WoundedInput(enum en_npcgol gid /* r2 */, class NMEDamageInfo * dmgmail /* r16 */) {
    /* anonymous block */ {
        // Range: 0x230710 -> 0x230758
        class xGoal * goal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00230760 -> 0x002309EC
*/
// Range: 0x230760 -> 0x2309EC
// this: r19
signed int zNMEGoalTaunt::Process(enum en_trantype * trantype /* r18 */, float dt /* r20 */, void * ctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x230760 -> 0x2309EC
        class zNMEStandard * npc; // r16
        enum en_loopstat lpstat; // r2
        signed int nextgoal; // r29+0x8C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002309F0 -> 0x00230C04
*/
// Range: 0x2309F0 -> 0x230C04
// this: r17
signed int zNMEGoalTaunt::Enter() {
    /* anonymous block */ {
        // Range: 0x2309F0 -> 0x230C04
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00230C10 -> 0x00230E6C
*/
// Range: 0x230C10 -> 0x230E6C
// this: r18
signed int zNMEGoalNotice::Process(enum en_trantype * trantype /* r17 */, float dt /* r29+0x80 */) {
    /* anonymous block */ {
        // Range: 0x230C10 -> 0x230E6C
        class zNMECommon * npc; // r16
        enum en_vis cansee; // r2
        signed int nextgoal; // r29+0x7C
        signed int nextgoal; // r29+0x78
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00230E70 -> 0x00230F34
*/
// Range: 0x230E70 -> 0x230F34
// this: r16
signed int zNMEGoalNotice::Enter() {
    /* anonymous block */ {
        // Range: 0x230E70 -> 0x230F34
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00230F40 -> 0x002311F0
*/
// Range: 0x230F40 -> 0x2311F0
// this: r19
signed int zNMEGoalSpooked::Process(enum en_trantype * trantype /* r18 */, float dt /* r20 */, void * ctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x230F40 -> 0x2311F0
        class zNMEStandard * npc; // r16
        signed int nextgoal; // r29+0x6C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002311F0 -> 0x00231414
*/
// Range: 0x2311F0 -> 0x231414
// this: r16
signed int zNMEGoalSpooked::Enter() {
    /* anonymous block */ {
        // Range: 0x2311F0 -> 0x231414
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00231420 -> 0x0023180C
*/
// Range: 0x231420 -> 0x23180C
// this: r19
void zNMEGoalSentry::SentryMoveSpline(class zNMECommon * npc /* r18 */, float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x231420 -> 0x23180C
        class zNMENavNet * navnet; // r2
        class xSpline3 * spl; // r17
        float newdist; // r20
        class xVec3 vec; // r29+0xD0
        class xVec3 tgt; // r29+0xC0
        float u; // r29+0xE0
        class xVec3 dir; // r29+0xB0
        class xVec3 delta; // r29+0xA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00231810 -> 0x00231A70
*/
// Range: 0x231810 -> 0x231A70
// this: r2
void zNMEGoalSentry::SentryMoveNormal(class zNMECommon * npc /* r18 */, float dt /* r29+0x90 */) {
    /* anonymous block */ {
        // Range: 0x231810 -> 0x231A70
        class xVec3 dir_dest; // r29+0x80
        class xVec3 delta; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00231A70 -> 0x00231BEC
*/
// Range: 0x231A70 -> 0x231BEC
// this: r17
void zNMEGoalSentry::DoOnArriveStuff(class zNMECommon * npc /* r16 */) {
    /* anonymous block */ {
        // Range: 0x231A70 -> 0x231BEC
        class zNMENavNet * navnet; // r18
        class zMovePoint * navcur; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00231C00 -> 0x00231E40
*/
// Range: 0x231C00 -> 0x231E40
// this: r17
void zNMEGoalSentry::Sentry_Update(class zNMEStandard * npc /* r16 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x231C00 -> 0x231E40
        class zNMENavNet * navnet; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00231E40 -> 0x00231F6C
*/
// Range: 0x231E40 -> 0x231F6C
// this: r18
signed int zNMEStandard::SetCarryState(enum en_carystat stat /* r17 */) {
    /* anonymous block */ {
        // Range: 0x231E40 -> 0x231F6C
        signed int result; // r16
        class xGoal * goal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00231F70 -> 0x002321A4
*/
// Range: 0x231F70 -> 0x2321A4
// this: r18
void zNMEStandard::DuploOwner(class zNMECommon * duper /* r17 */) {
    /* anonymous block */ {
        // Range: 0x231F70 -> 0x2321A4
        class xVec3 vec_near; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002321B0 -> 0x0023225C
*/
// Range: 0x2321B0 -> 0x23225C
// this: r16
void zNMEStandard::Boo() {
    /* anonymous block */ {
        // Range: 0x2321B0 -> 0x23225C
        signed int gid; // r2
        signed int gid_allowSpook[8]; // @ 0x0061B840
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00232260 -> 0x002323C4
*/
// Range: 0x232260 -> 0x2323C4
// this: r2
signed int zNMEStandard::IsVulnerable(enum en_npcdmg dmgtype /* r2 */) {
    /* anonymous block */ {
        // Range: 0x232260 -> 0x2323C4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002323D0 -> 0x00232774
*/
// Range: 0x2323D0 -> 0x232774
// this: r16
void zNMEStandard::StdTyp_Process(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2323D0 -> 0x232774
        class xMat4x3 oldMat; // r29+0x120
        class xEntFrame tmpframe; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00232790 -> 0x0023287C
*/
// Range: 0x232790 -> 0x23287C
// this: r16
void zNMEStandard::DieTheGoodDeath() {
    /* anonymous block */ {
        // Range: 0x232790 -> 0x23287C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00232880 -> 0x00232A28
*/
// Range: 0x232880 -> 0x232A28
// this: r17
void zNMEStandard::StdNME_SuicideIsPainless() {
    /* anonymous block */ {
        // Range: 0x232880 -> 0x232A28
        signed int gid_curr; // r16
        signed int gid_carried[5]; // r29+0x30
        class zNMEArena * arena; // r2
        class NMECfgStandard * cfg; // r2
        class xVec3 pos_home; // r29+0x50
        float hyt_test; // r3
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00232A30 -> 0x00232B4C
*/
// Range: 0x232A30 -> 0x232B4C
class xAnimTable * CreateAnimTable(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x232A30 -> 0x232B4C
        signed int ourAnims[3]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00232B50 -> 0x00232B5C
*/
// Range: 0x232B50 -> 0x232B5C
unsigned int AnimPick() {
    /* anonymous block */ {
        // Range: 0x232B50 -> 0x232B5C
        unsigned int da_anim; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00232B60 -> 0x00232B94
*/
// Range: 0x232B60 -> 0x232B94
// this: r2
class zMovePoint * zNMEStandard::MvptFirstFollow() {
    /* anonymous block */ {
        // Range: 0x232B60 -> 0x232B94
        class zMovePoint * nav; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00232C10 -> 0x00232D08
*/
// Range: 0x232C10 -> 0x232D08
void ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x232C10 -> 0x232D08
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00232D10 -> 0x00232D18
*/
// Range: 0x232D10 -> 0x232D18
void ScenePrepare() {
    /* anonymous block */ {
        // Range: 0x232D10 -> 0x232D18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStandard.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00232D20 -> 0x00232D60
*/
// Range: 0x232D20 -> 0x232D60
static signed int FormOfPain(signed int pup /* r2 */, signed int hitpoints /* r2 */) {
    /* anonymous block */ {
        // Range: 0x232D20 -> 0x232D60
    }
}


