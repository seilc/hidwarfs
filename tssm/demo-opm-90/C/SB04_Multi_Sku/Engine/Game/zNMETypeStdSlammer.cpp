/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00211050 -> 0x00211058
*/
// Range: 0x211050 -> 0x211058
void RibbonHorz(class zNMESlammer * npc /* r2 */, class xFXRibbon * rib /* r2 */, class RibData * ribhelp /* r2 */) {
    /* anonymous block */ {
        // Range: 0x211050 -> 0x211058
        class xVec3 pos_head; // r29+0xFFFFFFF0
        class xVec3 pos_hand; // r29+0xFFFFFFE0
        class xMat4x3 * mat_root; // r2
        class xVec3 dir_emit; // r29+0xFFFFFFD0
        float dst; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00211060 -> 0x00211404
*/
// Range: 0x211060 -> 0x211404
// this: r17
void zNMEGoalSlamAttack::RibbonStep(class zNMESlammer * npc /* r19 */) {
    /* anonymous block */ {
        // Range: 0x211060 -> 0x211404
        float tym_animCurr; // r29+0xA0
        signed int vidx; // r2
        class RibData * ribhelp; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00211410 -> 0x00211648
*/
// Range: 0x211410 -> 0x211648
// this: r17
void zNMEGoalSlamAttack::DoCapsuleTests(class zNMESlammer * npc /* r16 */) {
    /* anonymous block */ {
        // Range: 0x211410 -> 0x211648
        float tym_animCurr; // r29+0x120
        class xVec3 pos_head; // r29+0x110
        class xVec3 pos_hand; // r29+0x100
        class xSweptSphere sws; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00211650 -> 0x00211944
*/
// Range: 0x211650 -> 0x211944
signed int WaveChecks(class zNMESlammer * npc /* r18 */) {
    /* anonymous block */ {
        // Range: 0x211650 -> 0x211944
        float tym_animCurr; // r29+0x80
        class zNMEHazard * haz; // r17
        enum en_haztyp htyplist[10]; // r29+0x40
        enum en_nmevar vidx; // r2
        signed int rc; // r2
        class xVec3 pos_emit; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00211950 -> 0x00211A94
*/
// Range: 0x211950 -> 0x211A94
// this: r8
signed int zNMEGoalSlamAttack::ChkPrelimTran(class zNMESlammer * npc /* r2 */, signed int & nextgoal /* r2 */, enum en_trantype & trantype /* r2 */) {
    /* anonymous block */ {
        // Range: 0x211950 -> 0x211A94
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00211AA0 -> 0x00211C9C
*/
// Range: 0x211AA0 -> 0x211C9C
// this: r19
signed int zNMEGoalSlamAttack::Process(enum en_trantype * trantype /* r18 */, float dt /* r20 */, void * ctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x211AA0 -> 0x211C9C
        signed int nextgoal; // r29+0xAC
        class zNMESlammer * npc; // r16
        signed int doTran; // r2
        class xVec3 delta; // r29+0xA0
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00211CA0 -> 0x00211D08
*/
// Range: 0x211CA0 -> 0x211D08
// this: r16
signed int zNMEGoalSlamAttack::Exit() {
    /* anonymous block */ {
        // Range: 0x211CA0 -> 0x211D08
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00211D10 -> 0x00212118
*/
// Range: 0x211D10 -> 0x212118
// this: r17
signed int zNMEGoalSlamAttack::Enter() {
    /* anonymous block */ {
        // Range: 0x211D10 -> 0x212118
        class zNMESlammer * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00212120 -> 0x00212348
*/
// Range: 0x212120 -> 0x212348
float CalcLean(class zNMESlammer * npc /* r2 */, float dt /* r21 */, class xVec3 * dir_dest /* r16 */) {
    /* anonymous block */ {
        // Range: 0x212120 -> 0x212348
        float rat_oldLean; // r29+0x40
        class xVec3 dir_plyr; // r29+0x30
        float rat_oldLean; // r29+0x40
        float rat_oldLean; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00212350 -> 0x00212508
*/
// Range: 0x212350 -> 0x212508
signed int CanIAttackNow(class zNMESlammer * npc /* r2 */, class xVec3 * pos_tgt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x212350 -> 0x212508
        class NMECfgSlammer * cfg; // r2
        class xVec3 vec_tgt; // r29+0x30
        float dy; // r29+0x3C
        class xVec3 dir_tgt; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00212510 -> 0x00212718
*/
// Range: 0x212510 -> 0x212718
void MoveEvade(class zNMESlammer * npc /* r18 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x212510 -> 0x212718
        class xVec3 dir_dest; // r29+0x80
        class NMECfgSlammer * cfg; // r2
        class xVec3 delta; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00212720 -> 0x00212EA4
*/
// Range: 0x212720 -> 0x212EA4
// this: r17
signed int zNMEGoalSlamBattle::SubStateProcess(class zNMESlammer * npc /* r16 */, float dt /* r20 */, signed int & nextgoal /* r2 */, enum en_trantype & trantype /* r2 */) {
    /* anonymous block */ {
        // Range: 0x212720 -> 0x212EA4
        signed int doGoalTransition; // r21
        enum en_alertslam old_alertslam; // r2
        signed int subenter; // r2
        class xVec3 pos_tgt; // r29+0xF0
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00212EB0 -> 0x0021316C
*/
// Range: 0x212EB0 -> 0x21316C
// this: r19
signed int zNMEGoalSlamBattle::Chk_EarlyExit(class zNMESlammer * npc /* r18 */, signed int & nextgoal /* r17 */, enum en_trantype & trantype /* r16 */) {
    /* anonymous block */ {
        // Range: 0x212EB0 -> 0x21316C
        enum en_vis vis; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00213170 -> 0x00213264
*/
// Range: 0x213170 -> 0x213264
// this: r16
signed int zNMEGoalSlamBattle::Process(enum en_trantype * trantype /* r19 */, float dt /* r20 */, void * ctxt /* r18 */) {
    /* anonymous block */ {
        // Range: 0x213170 -> 0x213264
        class zNMESlammer * npc; // r2
        signed int nextgoal; // r29+0x6C
        signed int doTran; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00213270 -> 0x00213340
*/
// Range: 0x213270 -> 0x213340
// this: r16
signed int zNMEGoalSlamBattle::Resume() {
    /* anonymous block */ {
        // Range: 0x213270 -> 0x213340
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00213340 -> 0x00213418
*/
// Range: 0x213340 -> 0x213418
// this: r16
signed int zNMEGoalSlamBattle::Enter() {
    /* anonymous block */ {
        // Range: 0x213340 -> 0x213418
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00213420 -> 0x002137C8
*/
// Range: 0x213420 -> 0x2137C8
// this: r19
signed int zNMEGoalSlamAware::ChkTranCases(class zNMESlammer * npc /* r18 */, signed int & nextgoal /* r17 */, enum en_trantype & trantype /* r16 */) {
    /* anonymous block */ {
        // Range: 0x213420 -> 0x2137C8
        enum en_vis vis; // r2
        signed int vidx; // r2
        float * wtlist; // r21
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002137D0 -> 0x00213A9C
*/
// Range: 0x2137D0 -> 0x213A9C
// this: r18
signed int zNMEGoalSlamAware::Process(enum en_trantype * trantype /* r17 */, float dt /* r20 */, void * ctxt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x2137D0 -> 0x213A9C
        class zNMESlammer * npc; // r16
        signed int nextgoal; // r29+0xAC
        signed int doTran; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00213AA0 -> 0x00213B6C
*/
// Range: 0x213AA0 -> 0x213B6C
// this: r16
signed int zNMEGoalSlamAware::Enter() {
    /* anonymous block */ {
        // Range: 0x213AA0 -> 0x213B6C
        class zNMESlammer * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00213B70 -> 0x00213E2C
*/
// Range: 0x213B70 -> 0x213E2C
signed int Slam_SeePlyr(class xGoal * rawgoal /* r18 */, enum en_trantype * trantype /* r17 */) {
    /* anonymous block */ {
        // Range: 0x213B70 -> 0x213E2C
        signed int nextgoal; // r29+0x6C
        class zNMESlammer * npc; // r16
        class zNMEArena * arena; // r2
        enum en_vis vis; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00213E30 -> 0x00214100
*/
// Range: 0x213E30 -> 0x214100
// this: r2
void zNMESlammer::StraddleClamp(class xVec3 * pos_pred /* r2 */) {
    /* anonymous block */ {
        // Range: 0x213E30 -> 0x214100
        class xVec3 dir_NtoP; // r29+0xA0
        class xVec3 dir_plyr; // r29+0x90
        class xVec3 dir_PtoP; // r29+0x80
        class xVec3 pos_repred; // r29+0x70
        class xVec3 dir_revised; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00214100 -> 0x00214194
*/
// Range: 0x214100 -> 0x214194
// this: r2
float zNMESlammer::HealthRatio() {
    /* anonymous block */ {
        // Range: 0x214100 -> 0x214194
        float rat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002141A0 -> 0x00214414
*/
// Range: 0x2141A0 -> 0x214414
// this: r2
enum en_vis zNMESlammer::VisionTarget(class xEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2141A0 -> 0x214414
        class zNMEArena * arena; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00214420 -> 0x0021453C
*/
// Range: 0x214420 -> 0x21453C
// this: r18
signed int zNMESlammer::SlamMailDamage(class NMEDamageInfo * dmgmail /* r17 */) {
    /* anonymous block */ {
        // Range: 0x214420 -> 0x21453C
        signed int rc; // r2
        signed int handled; // r16
        class xPsyche * psy; // r2
        class xGoal * goal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00214540 -> 0x002147F8
*/
// Range: 0x214540 -> 0x2147F8
// this: r20
signed int zNMESlammer::TypeHandleMail(class NMEMsg * mail /* r19 */) {
    /* anonymous block */ {
        // Range: 0x214540 -> 0x2147F8
        signed int handled; // r18
        class xPsyche * psy; // r17
        signed int gid; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00214800 -> 0x002148B4
*/
// Range: 0x214800 -> 0x2148B4
signed int GoalPick(signed int & gid_would /* r2 */) {
    /* anonymous block */ {
        // Range: 0x214800 -> 0x2148B4
        signed int altered; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002148C0 -> 0x0021496C
*/
// Range: 0x2148C0 -> 0x21496C
// this: r17
void zNMESlammer::CollideReview() {
    /* anonymous block */ {
        // Range: 0x2148C0 -> 0x21496C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00214970 -> 0x00214AC8
*/
// Range: 0x214970 -> 0x214AC8
// this: r16
void zNMESlammer::Type_AddYourMove(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x214970 -> 0x214AC8
        class xVec3 delta; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00214AD0 -> 0x00214B74
*/
// Range: 0x214AD0 -> 0x214B74
// this: r16
void zNMESlammer::Process(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x214AD0 -> 0x214B74
        signed int gid; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00214B80 -> 0x002150E0
*/
// Range: 0x214B80 -> 0x2150E0
// this: r16
void zNMESlammer::BUpdate(class xVec3 * pos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x214B80 -> 0x2150E0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002150E0 -> 0x0021591C
*/
// Range: 0x2150E0 -> 0x21591C
class xAnimTable * CreateAnimTable(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2150E0 -> 0x21591C
        signed int ourAnims[23]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00215920 -> 0x00215B98
*/
// Range: 0x215920 -> 0x215B98
// this: r2
unsigned int zNMESlammer::AnimPick(signed int gid /* r2 */, enum en_npcgspot gspot /* r2 */) {
    /* anonymous block */ {
        // Range: 0x215920 -> 0x215B98
        enum en_stananim idx; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00215BA0 -> 0x00215DFC
*/
// Range: 0x215BA0 -> 0x215DFC
// this: r16
void zNMESlammer::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x215BA0 -> 0x215DFC
        class xBehaveMgr * bmgr; // r2
        class xPsyche * psy; // r2
        class xGoal * goal; // r2
        class xGoal * g; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00215E00 -> 0x00216174
*/
// Range: 0x215E00 -> 0x216174
// this: r17
void zNMESlammer::Reset() {
    /* anonymous block */ {
        // Range: 0x215E00 -> 0x216174
        class xPsyche * psy; // r2
        class zNMEGoalAfterlife * goal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00216180 -> 0x00216304
*/
// Range: 0x216180 -> 0x216304
// this: r16
void zNMESlammer::Setup() {
    /* anonymous block */ {
        // Range: 0x216180 -> 0x216304
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00216310 -> 0x00216534
*/
// Range: 0x216310 -> 0x216534
// this: r16
void zNMESlammer::Init(class xEntAsset * entass /* r17 */) {
    /* anonymous block */ {
        // Range: 0x216310 -> 0x216534
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00216540 -> 0x00216578
*/
// Range: 0x216540 -> 0x216578
// this: r2
unsigned char zNMESlammer::ColPenFlags() {
    /* anonymous block */ {
        // Range: 0x216540 -> 0x216578
        unsigned char flags; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00216580 -> 0x002165B8
*/
// Range: 0x216580 -> 0x2165B8
// this: r2
unsigned char zNMESlammer::ColChkFlags() {
    /* anonymous block */ {
        // Range: 0x216580 -> 0x2165B8
        unsigned char flags; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002165C0 -> 0x002165C8
*/
// Range: 0x2165C0 -> 0x2165C8
signed int DfltVulnFlags() {
    /* anonymous block */ {
        // Range: 0x2165C0 -> 0x2165C8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdSlammer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002165D0 -> 0x00216634
*/
// Range: 0x2165D0 -> 0x216634
// this: r16
void zNMESlammer::CreateConfig() {
    /* anonymous block */ {
        // Range: 0x2165D0 -> 0x216634
        enum en_nmevar vidx; // r2
    }
}


