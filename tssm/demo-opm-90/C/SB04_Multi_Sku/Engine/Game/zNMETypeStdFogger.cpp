/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00221620 -> 0x00221940
*/
// Range: 0x221620 -> 0x221940
// this: r19
signed int zNMEGoalFogAttack::Process(enum en_trantype * trantype /* r18 */, float dt /* r20 */, void * ctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x221620 -> 0x221940
        class zNMEStandard * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00221940 -> 0x002219DC
*/
// Range: 0x221940 -> 0x2219DC
// this: r16
signed int zNMEGoalFogAttack::Exit() {
    /* anonymous block */ {
        // Range: 0x221940 -> 0x2219DC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002219E0 -> 0x00221B78
*/
// Range: 0x2219E0 -> 0x221B78
// this: r17
signed int zNMEGoalFogAttack::Enter() {
    /* anonymous block */ {
        // Range: 0x2219E0 -> 0x221B78
        class zNMEStandard * npc; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00221B80 -> 0x00221DE8
*/
// Range: 0x221B80 -> 0x221DE8
// this: r2
void zNMEGoalFogBattle::HoppingFXUpdate(class zNMEFogger * npc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x221B80 -> 0x221DE8
        class xVec3 pos_emit; // r29+0x70
        class xVec3 vel_drift; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00221DF0 -> 0x00222180
*/
// Range: 0x221DF0 -> 0x222180
// this: r2
void zNMEGoalFogBattle::BoundingFXUpdate(class zNMEFogger * npc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x221DF0 -> 0x222180
        float ds2_cam; // r29+0x30
        unsigned int anid; // r2
        signed int rc; // r2
        float tym_animCurr; // r29+0x30
        signed char currFoot; // r8
        signed int i; // r7
        class xVec3 pos_emit; // r29+0x20
        class xMat4x3 * mat_bone; // r2
        class xMat4x3 * mat_bone; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00222180 -> 0x002222C4
*/
// Range: 0x222180 -> 0x2222C4
signed int CheckSpot(class zNMEFogger * npc /* r2 */, class xVec3 * pos_tgt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x222180 -> 0x2222C4
        class xVec3 dir_plyr; // r29+0x10
        float dy; // r29+0x1C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002222D0 -> 0x002224D0
*/
// Range: 0x2222D0 -> 0x2224D0
signed int MoveEvadePos(class zNMEFogger * npc /* r17 */, class xVec3 * pos /* r2 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2222D0 -> 0x2224D0
        signed int arrived; // r16
        class xVec3 dir_evade; // r29+0xA0
        class xVec3 delta; // r29+0x90
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002224D0 -> 0x0022279C
*/
// Range: 0x2224D0 -> 0x22279C
signed int CalcEvadePos(class zNMEFogger * npc /* r17 */, class xVec3 * pos /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2224D0 -> 0x22279C
        signed int canEvade; // r2
        class xVec3 pos_home; // r29+0x90
        float ang; // r21
        float rad_ca; // r29+0xA0
        float rad_sa; // r29+0xA0
        class xVec3 pos_loca[4]; // r29+0x40
        float ds2_best; // r29+0xA0
        signed int idx_best; // r9
        signed int i; // r8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002227A0 -> 0x00222BA4
*/
// Range: 0x2227A0 -> 0x222BA4
float RevisePrediction(class zNMEFogger * npc /* r2 */, class xVec3 * pos_tgt /* r2 */, class xVec3 * dir_tgt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2227A0 -> 0x222BA4
        class xVec3 dir_PtoP; // r29+0xC0
        class xVec3 dir_NtoP; // r29+0xB0
        class xVec3 dir_plyr; // r29+0xA0
        class xVec3 pos_repred; // r29+0x90
        class xVec3 dir_revised; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00222BB0 -> 0x00222DEC
*/
// Range: 0x222BB0 -> 0x222DEC
// this: r19
float zNMEGoalFogBattle::PredictPlyrPos(class zNMEFogger * npc /* r18 */, class xVec3 * pos_plyr /* r17 */, class xVec3 * dir_plyr /* r16 */) {
    /* anonymous block */ {
        // Range: 0x222BB0 -> 0x222DEC
        class NMECfgFogger * cfg; // r2
        signed int allowRevision; // r5
        float dst_plyr; // r20
        float dst_revised; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00222DF0 -> 0x00223858
*/
// Range: 0x222DF0 -> 0x223858
// this: r21
signed int zNMEGoalFogBattle::SubStateUpdate(class zNMEFogger * npc /* r20 */, float dt /* r21 */, signed int & nextgoal /* r19 */, enum en_trantype & trantype /* r18 */) {
    /* anonymous block */ {
        // Range: 0x222DF0 -> 0x223858
        signed int doGoalTransition; // r23
        enum en_battlefog old_battlefog; // r2
        signed int subenter; // r2
        class xVec3 pos_goingHere; // r29+0x190
        signed int inSpot; // r2
        signed int canEvade; // r2
        class NMECfgFogger * cfg; // r16
        float tym_ideal; // r20
        signed int arrived; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00223860 -> 0x002239D0
*/
// Range: 0x223860 -> 0x2239D0
// this: r19
signed int zNMEGoalFogBattle::CheckSituation(class zNMEFogger * npc /* r18 */, signed int & nextgoal /* r17 */, enum en_trantype & trantype /* r16 */) {
    /* anonymous block */ {
        // Range: 0x223860 -> 0x2239D0
        enum en_vis vis; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002239D0 -> 0x00223AC4
*/
// Range: 0x2239D0 -> 0x223AC4
// this: r16
signed int zNMEGoalFogBattle::Process(enum en_trantype * trantype /* r19 */, float dt /* r20 */, void * ctxt /* r18 */) {
    /* anonymous block */ {
        // Range: 0x2239D0 -> 0x223AC4
        class zNMEFogger * npc; // r2
        signed int nextgoal; // r29+0x6C
        signed int doTran; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00223AD0 -> 0x00223BB4
*/
// Range: 0x223AD0 -> 0x223BB4
// this: r16
signed int zNMEGoalFogBattle::Resume() {
    /* anonymous block */ {
        // Range: 0x223AD0 -> 0x223BB4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00223BC0 -> 0x00223CD8
*/
// Range: 0x223BC0 -> 0x223CD8
// this: r16
signed int zNMEGoalFogBattle::Enter() {
    /* anonymous block */ {
        // Range: 0x223BC0 -> 0x223CD8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00223CE0 -> 0x0022427C
*/
// Range: 0x223CE0 -> 0x22427C
// this: r2
void zNMEGoalFogAware::FeetFXUpdate(class zNMEFogger * npc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x223CE0 -> 0x22427C
        float ds2_cam; // r29+0xC0
        unsigned int anid; // r2
        signed int rc; // r2
        float tym_animCurr; // r29+0xC0
        signed char currFoot; // r6
        signed int i; // r8
        class xVec3 pos_emit; // r29+0xB0
        class xMat4x3 * mat_bone; // r2
        class xMat4x3 * mat_bone; // r2
        class xVec3 dir_emit; // r29+0xA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00224280 -> 0x002245D8
*/
// Range: 0x224280 -> 0x2245D8
// this: r19
signed int zNMEGoalFogAware::ChkTranCases(class zNMEFogger * npc /* r18 */, signed int & nextgoal /* r17 */, enum en_trantype & trantype /* r16 */) {
    /* anonymous block */ {
        // Range: 0x224280 -> 0x2245D8
        enum en_vis vis; // r2
        signed int vidx; // r2
        float * wtlist; // r21
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002245E0 -> 0x002248BC
*/
// Range: 0x2245E0 -> 0x2248BC
// this: r18
signed int zNMEGoalFogAware::Process(enum en_trantype * trantype /* r17 */, float dt /* r20 */, void * ctxt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x2245E0 -> 0x2248BC
        class zNMEFogger * npc; // r16
        signed int nextgoal; // r29+0xAC
        signed int doTran; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002248C0 -> 0x0022498C
*/
// Range: 0x2248C0 -> 0x22498C
// this: r16
signed int zNMEGoalFogAware::Enter() {
    /* anonymous block */ {
        // Range: 0x2248C0 -> 0x22498C
        class zNMEFogger * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00224990 -> 0x00224C4C
*/
// Range: 0x224990 -> 0x224C4C
signed int Fog_SeePlyr(class xGoal * rawgoal /* r18 */, enum en_trantype * trantype /* r17 */) {
    /* anonymous block */ {
        // Range: 0x224990 -> 0x224C4C
        signed int nextgoal; // r29+0x6C
        class zNMEFogger * npc; // r16
        class zNMEArena * arena; // r2
        enum en_vis vis; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00224C50 -> 0x00224CE4
*/
// Range: 0x224C50 -> 0x224CE4
// this: r2
float zNMEFogger::HealthRatio() {
    /* anonymous block */ {
        // Range: 0x224C50 -> 0x224CE4
        float rat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00224CF0 -> 0x00224F6C
*/
// Range: 0x224CF0 -> 0x224F6C
// this: r2
enum en_vis zNMEFogger::VisionTarget(class xEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x224CF0 -> 0x224F6C
        class zNMEArena * arena; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00224F70 -> 0x0022508C
*/
// Range: 0x224F70 -> 0x22508C
// this: r18
signed int zNMEFogger::FogMailDamage(class NMEDamageInfo * dmgmail /* r17 */) {
    /* anonymous block */ {
        // Range: 0x224F70 -> 0x22508C
        signed int rc; // r2
        signed int handled; // r16
        class xPsyche * psy; // r2
        class xGoal * goal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00225090 -> 0x00225348
*/
// Range: 0x225090 -> 0x225348
// this: r20
signed int zNMEFogger::TypeHandleMail(class NMEMsg * mail /* r19 */) {
    /* anonymous block */ {
        // Range: 0x225090 -> 0x225348
        signed int handled; // r18
        class xPsyche * psy; // r17
        signed int gid; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00225350 -> 0x002253FC
*/
// Range: 0x225350 -> 0x2253FC
// this: r17
void zNMEFogger::CollideReview() {
    /* anonymous block */ {
        // Range: 0x225350 -> 0x2253FC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00225400 -> 0x00225528
*/
// Range: 0x225400 -> 0x225528
// this: r2
void zNMEFogger::Type_AddYourMove(float dt /* r29+0x30 */) {
    /* anonymous block */ {
        // Range: 0x225400 -> 0x225528
        class xVec3 delta; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00225530 -> 0x00225668
*/
// Range: 0x225530 -> 0x225668
// this: r16
void zNMEFogger::Process(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x225530 -> 0x225668
        signed int gid; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00225670 -> 0x00225BD0
*/
// Range: 0x225670 -> 0x225BD0
// this: r16
void zNMEFogger::BUpdate(class xVec3 * pos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x225670 -> 0x225BD0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00225BD0 -> 0x00225C84
*/
// Range: 0x225BD0 -> 0x225C84
signed int GoalPick(signed int & gid_would /* r2 */) {
    /* anonymous block */ {
        // Range: 0x225BD0 -> 0x225C84
        signed int altered; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00225C90 -> 0x00226004
*/
// Range: 0x225C90 -> 0x226004
// this: r17
void zNMEFogger::Reset() {
    /* anonymous block */ {
        // Range: 0x225C90 -> 0x226004
        class xPsyche * psy; // r2
        class zNMEGoalAfterlife * goal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00226010 -> 0x00226974
*/
// Range: 0x226010 -> 0x226974
class xAnimTable * CreateAnimTable(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x226010 -> 0x226974
        signed int ourAnims[26]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00226980 -> 0x00226C54
*/
// Range: 0x226980 -> 0x226C54
// this: r2
unsigned int zNMEFogger::AnimPick(signed int gid /* r2 */, enum en_npcgspot gspot /* r2 */) {
    /* anonymous block */ {
        // Range: 0x226980 -> 0x226C54
        enum en_stananim idx; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00226C60 -> 0x00226EBC
*/
// Range: 0x226C60 -> 0x226EBC
// this: r16
void zNMEFogger::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x226C60 -> 0x226EBC
        class xBehaveMgr * bmgr; // r2
        class xPsyche * psy; // r2
        class xGoal * goal; // r2
        class xGoal * g; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00226EC0 -> 0x00226F6C
*/
// Range: 0x226EC0 -> 0x226F6C
// this: r16
void zNMEFogger::Setup() {
    /* anonymous block */ {
        // Range: 0x226EC0 -> 0x226F6C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00226F70 -> 0x002271EC
*/
// Range: 0x226F70 -> 0x2271EC
// this: r16
void zNMEFogger::Init(class xEntAsset * entass /* r17 */) {
    /* anonymous block */ {
        // Range: 0x226F70 -> 0x2271EC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002271F0 -> 0x00227228
*/
// Range: 0x2271F0 -> 0x227228
// this: r2
unsigned char zNMEFogger::ColPenFlags() {
    /* anonymous block */ {
        // Range: 0x2271F0 -> 0x227228
        unsigned char flags; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00227230 -> 0x00227268
*/
// Range: 0x227230 -> 0x227268
// this: r2
unsigned char zNMEFogger::ColChkFlags() {
    /* anonymous block */ {
        // Range: 0x227230 -> 0x227268
        unsigned char flags; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00227270 -> 0x00227278
*/
// Range: 0x227270 -> 0x227278
signed int DfltVulnFlags() {
    /* anonymous block */ {
        // Range: 0x227270 -> 0x227278
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdFogger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00227280 -> 0x002272E4
*/
// Range: 0x227280 -> 0x2272E4
// this: r16
void zNMEFogger::CreateConfig() {
    /* anonymous block */ {
        // Range: 0x227280 -> 0x2272E4
        enum en_nmevar vidx; // r2
    }
}


