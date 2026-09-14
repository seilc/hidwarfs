/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00265040 -> 0x0026517C
*/
// Range: 0x265040 -> 0x26517C
// this: r17
signed int zNMEGoalDenDead::Exit() {
    /* anonymous block */ {
        // Range: 0x265040 -> 0x26517C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00265180 -> 0x00265320
*/
// Range: 0x265180 -> 0x265320
// this: r17
signed int zNMEGoalDenDead::Enter() {
    /* anonymous block */ {
        // Range: 0x265180 -> 0x265320
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00265320 -> 0x00265540
*/
// Range: 0x265320 -> 0x265540
// this: r2
signed int zNMEGoalDenDamage::GoalHandleMail(class NMEMsg * mail /* r2 */) {
    /* anonymous block */ {
        // Range: 0x265320 -> 0x265540
        signed int snarfed; // r18
        class zNMEDennis * npc; // r17
        class NMEDamageInfo * dmgmail; // r2
        class xPsyche * psy; // r16
        enum en_plyrpup pup; // r29+0x4C
        signed int amt_dmg; // r2
        class xGoal * goal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00265540 -> 0x00265730
*/
// Range: 0x265540 -> 0x265730
// this: r19
signed int zNMEGoalDenDamage::ChkExistence(class zNMEDennis * npc /* r18 */, float dt /* r29+0x50 */, signed int & nextgoal /* r17 */, enum en_trantype & trantype /* r16 */) {
    /* anonymous block */ {
        // Range: 0x265540 -> 0x265730
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00265730 -> 0x00265920
*/
// Range: 0x265730 -> 0x265920
// this: r19
signed int zNMEGoalDenDamage::Process(enum en_trantype * trantype /* r18 */, float dt /* r20 */, void * ctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x265730 -> 0x265920
        class zNMEDennis * npc; // r2
        signed int nextgoal; // r29+0x8C
        signed int doTran; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00265920 -> 0x00265938
*/
// Range: 0x265920 -> 0x265938
// this: r2
signed int zNMEGoalDenDamage::Exit() {
    /* anonymous block */ {
        // Range: 0x265920 -> 0x265938
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00265940 -> 0x00265AA8
*/
// Range: 0x265940 -> 0x265AA8
// this: r16
signed int zNMEGoalDenDamage::Enter() {
    /* anonymous block */ {
        // Range: 0x265940 -> 0x265AA8
        class zNMEDennis * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00265AB0 -> 0x00265D84
*/
// Range: 0x265AB0 -> 0x265D84
// this: r19
signed int zNMEGoalDenTaunt::Process(enum en_trantype * trantype /* r18 */, float dt /* r20 */, void * ctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x265AB0 -> 0x265D84
        class zNMEDennis * npc; // r16
        signed int nextgoal; // r29+0x9C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00265D90 -> 0x00265F3C
*/
// Range: 0x265D90 -> 0x265F3C
// this: r17
signed int zNMEGoalDenTaunt::Enter() {
    /* anonymous block */ {
        // Range: 0x265D90 -> 0x265F3C
        class zNMEDennis * npc; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00265F40 -> 0x00266150
*/
// Range: 0x265F40 -> 0x266150
// this: r2
signed int zNMEGoalDenEvade::GoalHandleMail(class NMEMsg * mail /* r2 */) {
    /* anonymous block */ {
        // Range: 0x265F40 -> 0x266150
        signed int snarfed; // r18
        class zNMEDennis * npc; // r17
        class xPsyche * psy; // r16
        enum en_plyrpup pup; // r29+0x4C
        signed int amt_dmg; // r2
        class xGoal * goal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00266150 -> 0x00266420
*/
// Range: 0x266150 -> 0x266420
// this: r2
void zNMEGoalDenEvade::RibbonLoop(class zNMEDennis * npc /* r19 */) {
    /* anonymous block */ {
        // Range: 0x266150 -> 0x266420
        class xFXRibbon * rib; // r18
        class RibData * ribhelp; // r2
        float scale; // r21
        float alpha; // r20
        class xVec3 pos_emit; // r29+0x90
        class xVec3 dir_up; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00266420 -> 0x00266698
*/
// Range: 0x266420 -> 0x266698
// this: r2
signed int zNMEGoalDenEvade::PathParabola(class zNMEDennis * npc /* r17 */) {
    /* anonymous block */ {
        // Range: 0x266420 -> 0x266698
        signed int arrived; // r16
        float tym_inLeap; // r1
        class xVec3 pos; // r29+0xA0
        class xVec3 vel; // r29+0x90
        class xMat3x3 mat_rot; // r29+0x30
        float mag; // r29+0xB0
        class xVec3 dir; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002666A0 -> 0x002668D4
*/
// Range: 0x2666A0 -> 0x2668D4
// this: r18
signed int zNMEGoalDenEvade::UpdateAnim(class zNMEDennis * npc /* r17 */, float dt /* r29+0x60 */) {
    /* anonymous block */ {
        // Range: 0x2666A0 -> 0x2668D4
        float tym_animPlusTime; // r29+0x60
        signed int arrived; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002668E0 -> 0x00266F1C
*/
// Range: 0x2668E0 -> 0x266F1C
// this: r20
signed int zNMEGoalDenEvade::Process(enum en_trantype * trantype /* r19 */, float dt /* r20 */, void * ctxt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x2668E0 -> 0x266F1C
        class zNMEDennis * npc; // r18
        signed int animsComplete; // r2
        signed int arrivedAtDest; // r17
        signed int itHasBegun; // r16
        class xVec3 pos; // r29+0xF0
        signed int nextgoal; // r29+0xFC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00266F20 -> 0x0026705C
*/
// Range: 0x266F20 -> 0x26705C
// this: r17
signed int zNMEGoalDenEvade::Exit() {
    /* anonymous block */ {
        // Range: 0x266F20 -> 0x26705C
        class zNMEDennis * npc; // r16
        class NMECfgDennis * cfg; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00267060 -> 0x0026747C
*/
// Range: 0x267060 -> 0x26747C
// this: r20
signed int zNMEGoalDenEvade::Enter() {
    /* anonymous block */ {
        // Range: 0x267060 -> 0x26747C
        class zNMEDennis * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00267480 -> 0x002677A4
*/
// Range: 0x267480 -> 0x2677A4
signed int GolfBomb(class zNMEDennis * npc /* r19 */) {
    /* anonymous block */ {
        // Range: 0x267480 -> 0x2677A4
        class NMECfgDennis * cfg; // r2
        class zNMEHazard * haz; // r18
        signed int rc; // r2
        class xVec3 pos_tgt; // r29+0x70
        class xVec3 pos_launch; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002677B0 -> 0x00267918
*/
// Range: 0x2677B0 -> 0x267918
// this: r18
signed int zNMEGoalDenAttack::Process(enum en_trantype * trantype /* r17 */, float dt /* r20 */, void * ctxt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2677B0 -> 0x267918
        class zNMEDennis * npc; // r2
        class zNMEDennis * npc; // r2
        class xVec3 pos_launch; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00267920 -> 0x00267AC0
*/
// Range: 0x267920 -> 0x267AC0
// this: r17
signed int zNMEGoalDenAttack::Enter() {
    /* anonymous block */ {
        // Range: 0x267920 -> 0x267AC0
        class zNMEDennis * npc; // r2
        class NMECfgDennis * cfg; // r3
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00267AC0 -> 0x00267D34
*/
// Range: 0x267AC0 -> 0x267D34
// this: r19
signed int zNMEGoalDenBattle::ChkExitCases(class zNMEDennis * npc /* r18 */, signed int & nextgoal /* r17 */, enum en_trantype & trantype /* r16 */) {
    /* anonymous block */ {
        // Range: 0x267AC0 -> 0x267D34
        enum en_vis vis; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00267D40 -> 0x00268024
*/
// Range: 0x267D40 -> 0x268024
// this: r19
signed int zNMEGoalDenBattle::Process(enum en_trantype * trantype /* r18 */, float dt /* r20 */, void * ctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x267D40 -> 0x268024
        class zNMEDennis * npc; // r16
        signed int nextgoal; // r29+0xAC
        signed int doTran; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00268030 -> 0x002680EC
*/
// Range: 0x268030 -> 0x2680EC
// this: r16
signed int zNMEGoalDenBattle::Enter() {
    /* anonymous block */ {
        // Range: 0x268030 -> 0x2680EC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002680F0 -> 0x002682D0
*/
// Range: 0x2680F0 -> 0x2682D0
// this: r19
signed int zNMEGoalDenNormal::Process(enum en_trantype * trantype /* r18 */, float dt /* r20 */, void * ctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2680F0 -> 0x2682D0
        class zNMEDennis * npc; // r2
        signed int nextgoal; // r29+0x8C
        enum en_vis vis; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002682D0 -> 0x00268404
*/
// Range: 0x2682D0 -> 0x268404
// this: r2
signed int zNMEGoalDenNormal::Exit() {
    /* anonymous block */ {
        // Range: 0x2682D0 -> 0x268404
        class zNMEDennis * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00268410 -> 0x002684C4
*/
// Range: 0x268410 -> 0x2684C4
// this: r16
signed int zNMEGoalDenNormal::Enter() {
    /* anonymous block */ {
        // Range: 0x268410 -> 0x2684C4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002684D0 -> 0x002684D8
*/
// Range: 0x2684D0 -> 0x2684D8
void Notice() {
    /* anonymous block */ {
        // Range: 0x2684D0 -> 0x2684D8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002684E0 -> 0x002687CC
*/
// Range: 0x2684E0 -> 0x2687CC
// this: r17
class zMovePoint * zNMEDennis::PickEvade(class zMovePoint * nav_from /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2684E0 -> 0x2687CC
        unsigned int num; // r2
        class xVec3 dir_plyr; // r29+0xB0
        float dst_retreat; // r21
        float dst_charge; // r20
        class zMovePoint * nav_retreat; // r21
        class zMovePoint * nav_charge; // r20
        unsigned int i; // r19
        class xBase * baseitem; // r2
        class zMovePoint * mvpt; // r2
        class zMovePoint * nav_goto; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002687D0 -> 0x002689FC
*/
// Range: 0x2687D0 -> 0x2689FC
// this: r2
signed int zNMEDennis::DenMailSys(class NMESysEvent * sysmail /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2687D0 -> 0x2689FC
        signed int handled; // r16
        signed int gotoStage; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00268A00 -> 0x00268CA4
*/
// Range: 0x268A00 -> 0x268CA4
// this: r17
signed int zNMEDennis::DenMailDamage(class NMEDamageInfo * dmgmail /* r2 */) {
    /* anonymous block */ {
        // Range: 0x268A00 -> 0x268CA4
        signed int handled; // r16
        class xPsyche * psy; // r2
        class xGoal * goal; // r2
        enum en_plyrpup pup; // r29+0x4C
        signed int amt_dmg; // r2
        class xGoal * goal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00268CB0 -> 0x00268CFC
*/
// Range: 0x268CB0 -> 0x268CFC
// this: r2
signed int zNMEDennis::TypeHandleMail(class NMEMsg * mail /* r2 */) {
    /* anonymous block */ {
        // Range: 0x268CB0 -> 0x268CFC
        signed int handled; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00268D00 -> 0x00268DC0
*/
// Range: 0x268D00 -> 0x268DC0
// this: r18
void zNMEDennis::BossCamSet(enum en_dbcmode mod_desired /* r17 */, unsigned char forceCut /* r16 */) {
    /* anonymous block */ {
        // Range: 0x268D00 -> 0x268DC0
        enum en_dbcmode currCamMode; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00268DC0 -> 0x00269060
*/
// Range: 0x268DC0 -> 0x269060
// this: r17
enum en_vis zNMEDennis::VisionTarget() {
    /* anonymous block */ {
        // Range: 0x268DC0 -> 0x269060
        class NMECfgDennis * cfg; // r16
        float dy; // r29+0x5C
        float rad_nearenuf; // r24
        enum en_plyrpup pup; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00269060 -> 0x0026906C
*/
// Range: 0x269060 -> 0x26906C
void RenderHud() {
    /* anonymous block */ {
        // Range: 0x269060 -> 0x26906C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00269070 -> 0x002690A4
*/
// Range: 0x269070 -> 0x2690A4
// this: r2
void zNMEDennis::PostProcess() {
    /* anonymous block */ {
        // Range: 0x269070 -> 0x2690A4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002690B0 -> 0x002690D8
*/
// Range: 0x2690B0 -> 0x2690D8
// this: r2
void zNMEDennis::NewTime(float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x2690B0 -> 0x2690D8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002690E0 -> 0x00269640
*/
// Range: 0x2690E0 -> 0x269640
// this: r16
void zNMEDennis::BUpdate(class xVec3 * pos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2690E0 -> 0x269640
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00269640 -> 0x00269918
*/
// Range: 0x269640 -> 0x269918
// this: r16
void zNMEDennis::Process(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x269640 -> 0x269918
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00269920 -> 0x00269950
*/
// Range: 0x269920 -> 0x269950
// this: r2
signed int zNMEDennis::IsAlive() {
    /* anonymous block */ {
        // Range: 0x269920 -> 0x269950
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00269950 -> 0x002699A0
*/
// Range: 0x269950 -> 0x2699A0
// this: r16
void zNMEDennis::Destroy() {
    /* anonymous block */ {
        // Range: 0x269950 -> 0x2699A0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002699A0 -> 0x00269D9C
*/
// Range: 0x2699A0 -> 0x269D9C
// this: r16
void zNMEDennis::Reset() {
    /* anonymous block */ {
        // Range: 0x2699A0 -> 0x269D9C
        class xPsyche * psy; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00269DA0 -> 0x0026A0CC
*/
// Range: 0x269DA0 -> 0x26A0CC
// this: r16
void zNMEDennis::Setup() {
    /* anonymous block */ {
        // Range: 0x269DA0 -> 0x26A0CC
        class zNPCMgr * mgr; // r17
        char * nam_sbbat; // r2
        unsigned int aid_sbbat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026A0D0 -> 0x0026A22C
*/
// Range: 0x26A0D0 -> 0x26A22C
// this: r16
void zNMEDennis::Init(class xEntAsset * asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x26A0D0 -> 0x26A22C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026A230 -> 0x0026AABC
*/
// Range: 0x26A230 -> 0x26AABC
void CreateDennisAndSBBatAnimTable(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x26A230 -> 0x26AABC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026AAC0 -> 0x0026AB0C
*/
// Range: 0x26AAC0 -> 0x26AB0C
class xAnimTable * CreateAnimTable(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x26AAC0 -> 0x26AB0C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026AB10 -> 0x0026ABA4
*/
// Range: 0x26AB10 -> 0x26ABA4
signed int GoalPick(signed int & gid_would /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26AB10 -> 0x26ABA4
        signed int altered; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026ABB0 -> 0x0026ADA8
*/
// Range: 0x26ABB0 -> 0x26ADA8
// this: r19
unsigned int zNMEDennis::AnimPick(signed int gid /* r18 */, enum en_npcgspot gspot /* r17 */) {
    /* anonymous block */ {
        // Range: 0x26ABB0 -> 0x26ADA8
        signed int idx; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026ADB0 -> 0x0026ADE4
*/
// Range: 0x26ADB0 -> 0x26ADE4
// this: r2
class zMovePoint * zNMEDennis::MvptFirstFollow() {
    /* anonymous block */ {
        // Range: 0x26ADB0 -> 0x26ADE4
        class zMovePoint * nav; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026ADF0 -> 0x0026AEE8
*/
// Range: 0x26ADF0 -> 0x26AEE8
// this: r17
void zNMEDennis::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x26ADF0 -> 0x26AEE8
        class xBehaveMgr * bmgr; // r2
        class xPsyche * psy; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026AEF0 -> 0x0026AEFC
*/
// Range: 0x26AEF0 -> 0x26AEFC
signed int DfltVulnFlags() {
    /* anonymous block */ {
        // Range: 0x26AEF0 -> 0x26AEFC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossDennis.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026AF00 -> 0x0026AF34
*/
// Range: 0x26AF00 -> 0x26AF34
// this: r2
void zNMEDennis::CreateConfig() {
    /* anonymous block */ {
        // Range: 0x26AF00 -> 0x26AF34
    }
}


