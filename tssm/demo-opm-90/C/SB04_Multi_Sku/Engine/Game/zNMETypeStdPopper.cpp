/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00216640 -> 0x002167E0
*/
// Range: 0x216640 -> 0x2167E0
// this: r3
void zNMEGoalPopEvade::EvadeTrail(class zNMECommon * npc /* r2 */, float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x216640 -> 0x2167E0
        class ExhaustEmitter * exhaust; // r2
        float delay; // r29+0x10
        enum en_npctyp ntyp; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002167E0 -> 0x00216960
*/
// Range: 0x2167E0 -> 0x216960
// this: r2
void zNMEGoalPopEvade::EmergeGround(class zNMECommon * npc /* r2 */, float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x2167E0 -> 0x216960
        class PopGasEmitter * popgas; // r2
        float delay; // r29+0x10
        enum en_npctyp ntyp; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00216960 -> 0x00216AE0
*/
// Range: 0x216960 -> 0x216AE0
// this: r2
void zNMEGoalPopEvade::EmergeFount(class zNMECommon * npc /* r2 */, float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x216960 -> 0x216AE0
        class PopGasEmitter * popgas; // r2
        float delay; // r29+0x10
        enum en_npctyp ntyp; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00216AE0 -> 0x00217098
*/
// Range: 0x216AE0 -> 0x217098
// this: r19
signed int zNMEGoalPopEvade::Process(enum en_trantype * trantype /* r18 */, float dt /* r22 */, void * ctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x216AE0 -> 0x217098
        class zNMEPopper * npc; // r16
        signed int nextgoal; // r29+0xFC
        class NMECfgPopper * cfg; // r2
        float tym_animPlusTime; // r21
        class xVec3 pos_goto; // r29+0xF0
        signed int arrived; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002170A0 -> 0x00217168
*/
// Range: 0x2170A0 -> 0x217168
// this: r2
signed int zNMEGoalPopEvade::Exit() {
    /* anonymous block */ {
        // Range: 0x2170A0 -> 0x217168
        class zNMEPopper * npc; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00217180 -> 0x0021730C
*/
// Range: 0x217180 -> 0x21730C
// this: r17
signed int zNMEGoalPopEvade::Enter() {
    /* anonymous block */ {
        // Range: 0x217180 -> 0x21730C
        class zNMEPopper * npc; // r2
        class zMovePoint * mvpt; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00217310 -> 0x00217478
*/
// Range: 0x217310 -> 0x217478
// this: r18
signed int zNMEGoalPopWound::Process(enum en_trantype * trantype /* r17 */, float dt /* r29+0x40 */, void * ctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x217310 -> 0x217478
        class zNMEPopper * npc; // r16
        class zMovePoint * mvpt; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00217480 -> 0x00217C7C
*/
// Range: 0x217480 -> 0x217C7C
// this: r22
void zNMEGoalPopAttack::PopGunUpdate(class zNMEPopper * npc /* r16 */) {
    /* anonymous block */ {
        // Range: 0x217480 -> 0x217C7C
        float tym_animCurr; // r29+0x1C0
        class xVec3 pos_launch; // r29+0x1B0
        class NMECfgPopper * cfg; // r2
        class xVec3 dir_aim; // r29+0x1A0
        class xVec3 dir_side; // r29+0x190
        class xVec3 dir_plyr; // r29+0x180
        float dst_farout; // r30
        float rad_lr; // r29
        float rad_ud; // r28
        float f_salvoSeg; // r27
        float inc_side; // r26
        float spd_bonus; // r25
        float spd_proj; // r24
        signed int num; // r2
        signed int idx_ofSoundMaker; // r2
        signed int i; // r21
        class zNMEHazard * haz; // r20
        float dst_side; // r23
        class xVec3 pos_tgt; // r29+0x170
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00217C80 -> 0x00217D60
*/
// Range: 0x217C80 -> 0x217D60
// this: r17
signed int zNMEGoalPopAttack::Process(enum en_trantype * trantype /* r16 */, float dt /* r20 */, void * ctxt /* r18 */) {
    /* anonymous block */ {
        // Range: 0x217C80 -> 0x217D60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00217D60 -> 0x00217F74
*/
// Range: 0x217D60 -> 0x217F74
// this: r17
signed int zNMEGoalPopAttack::Enter() {
    /* anonymous block */ {
        // Range: 0x217D60 -> 0x217F74
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00217F80 -> 0x0021820C
*/
// Range: 0x217F80 -> 0x21820C
// this: r19
signed int zNMEGoalPopBattle::ChkTranCases(class zNMEPopper * npc /* r18 */, signed int & nextgoal /* r17 */, enum en_trantype & trantype /* r16 */) {
    /* anonymous block */ {
        // Range: 0x217F80 -> 0x21820C
        enum en_vis iseeplyr; // r2
        class zMovePoint * mvpt; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00218210 -> 0x00218430
*/
// Range: 0x218210 -> 0x218430
// this: r19
signed int zNMEGoalPopBattle::Process(enum en_trantype * trantype /* r18 */, float dt /* r20 */, void * ctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x218210 -> 0x218430
        class zNMEPopper * npc; // r16
        signed int nextgoal; // r29+0x8C
        signed int doTran; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00218430 -> 0x002184EC
*/
// Range: 0x218430 -> 0x2184EC
// this: r16
signed int zNMEGoalPopBattle::Enter() {
    /* anonymous block */ {
        // Range: 0x218430 -> 0x2184EC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002184F0 -> 0x00218648
*/
// Range: 0x2184F0 -> 0x218648
// this: r19
signed int zNMEGoalPopAware::ChkAware(class zNMEPopper * npc /* r18 */, signed int & nextgoal /* r17 */, enum en_trantype & trantype /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2184F0 -> 0x218648
        enum en_vis iseeplyr; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00218650 -> 0x00218904
*/
// Range: 0x218650 -> 0x218904
// this: r19
signed int zNMEGoalPopAware::Process(enum en_trantype * trantype /* r18 */, float dt /* r20 */, void * ctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x218650 -> 0x218904
        class zNMEPopper * npc; // r16
        signed int nextgoal; // r29+0x9C
        signed int doTran; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00218910 -> 0x00218B1C
*/
// Range: 0x218910 -> 0x218B1C
// this: r19
signed int zNMEGoalPopNormal::Process(enum en_trantype * trantype /* r18 */, float dt /* r20 */, void * ctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x218910 -> 0x218B1C
        class zNMEPopper * npc; // r16
        signed int nextgoal; // r29+0x7C
        enum en_vis iseeplyr; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00218B20 -> 0x00218D2C
*/
// Range: 0x218B20 -> 0x218D2C
// this: r2
void PopTop::LidUpdate(float dt /* r29+0x40 */) {
    /* anonymous block */ {
        // Range: 0x218B20 -> 0x218D2C
        signed int i; // r12
        float rat; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00218D30 -> 0x00218DE8
*/
// Range: 0x218D30 -> 0x218DE8
class xEnt * LidLocate(class zMovePoint * mvpt /* r19 */) {
    /* anonymous block */ {
        // Range: 0x218D30 -> 0x218DE8
        class xEnt * da_lid; // r18
        signed int i; // r17
        class xLinkAsset * link; // r2
        class xBase * mychild; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00218DF0 -> 0x00219144
*/
// Range: 0x218DF0 -> 0x219144
// this: r17
class zMovePoint * zNMEPopper::PickEvadePoint(class zMovePoint * nav_from /* r16 */) {
    /* anonymous block */ {
        // Range: 0x218DF0 -> 0x219144
        class zMovePoint * nav_there; // r29+0xBC
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
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00219150 -> 0x00219250
*/
// Range: 0x219150 -> 0x219250
// this: r18
signed int zNMEPopper::PopMailDamage(class NMEDamageInfo * dmgmail /* r17 */) {
    /* anonymous block */ {
        // Range: 0x219150 -> 0x219250
        signed int rc; // r2
        signed int handled; // r16
        class xPsyche * psy; // r2
        class xGoal * goal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00219250 -> 0x00219400
*/
// Range: 0x219250 -> 0x219400
// this: r17
signed int zNMEPopper::TypeHandleMail(class NMEMsg * mail /* r2 */) {
    /* anonymous block */ {
        // Range: 0x219250 -> 0x219400
        signed int handled; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00219400 -> 0x00219494
*/
// Range: 0x219400 -> 0x219494
// this: r2
float zNMEPopper::HealthRatio() {
    /* anonymous block */ {
        // Range: 0x219400 -> 0x219494
        float rat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002194A0 -> 0x002196A8
*/
// Range: 0x2194A0 -> 0x2196A8
// this: r2
enum en_vis zNMEPopper::VisionTarget(class xEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2194A0 -> 0x2196A8
        class NMECfgPopper * cfg; // r5
        float dy; // r29+0xFFFFFFFC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002196B0 -> 0x002196C0
*/
// Range: 0x2196B0 -> 0x2196C0
// this: r2
void zNMEPopper::ProcessInvis(float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x2196B0 -> 0x2196C0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002196C0 -> 0x00219AB8
*/
// Range: 0x2196C0 -> 0x219AB8
// this: r20
void zNMEPopper::Process(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2196C0 -> 0x219AB8
        class xMat4x3 oldMat; // r29+0x160
        class xEntFrame tmpFrame; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00219AC0 -> 0x0021A020
*/
// Range: 0x219AC0 -> 0x21A020
// this: r16
void zNMEPopper::BUpdate(class xVec3 * pos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x219AC0 -> 0x21A020
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A020 -> 0x0021A3DC
*/
// Range: 0x21A020 -> 0x21A3DC
// this: r17
void zNMEPopper::Reset() {
    /* anonymous block */ {
        // Range: 0x21A020 -> 0x21A3DC
        class xPsyche * psy; // r2
        class zNMEGoalAfterlife * goal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A3E0 -> 0x0021A4E8
*/
// Range: 0x21A3E0 -> 0x21A4E8
// this: r16
void zNMEPopper::Setup() {
    /* anonymous block */ {
        // Range: 0x21A3E0 -> 0x21A4E8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A4F0 -> 0x0021A78C
*/
// Range: 0x21A4F0 -> 0x21A78C
// this: r16
void zNMEPopper::Init(class xEntAsset * asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x21A4F0 -> 0x21A78C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A790 -> 0x0021AD50
*/
// Range: 0x21A790 -> 0x21AD50
class xAnimTable * CreateAnimTable(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x21A790 -> 0x21AD50
        signed int ourAnims[18]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021AD50 -> 0x0021AE14
*/
// Range: 0x21AD50 -> 0x21AE14
signed int GoalPick(signed int & gid_would /* r2 */) {
    /* anonymous block */ {
        // Range: 0x21AD50 -> 0x21AE14
        signed int altered; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021AE20 -> 0x0021AFC4
*/
// Range: 0x21AE20 -> 0x21AFC4
// this: r2
unsigned int zNMEPopper::AnimPick(signed int gid /* r2 */, enum en_npcgspot gspot /* r2 */) {
    /* anonymous block */ {
        // Range: 0x21AE20 -> 0x21AFC4
        enum en_stananim idx; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021AFD0 -> 0x0021B12C
*/
// Range: 0x21AFD0 -> 0x21B12C
// this: r16
void zNMEPopper::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x21AFD0 -> 0x21B12C
        class xBehaveMgr * bmgr; // r2
        class xPsyche * psy; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021B130 -> 0x0021B13C
*/
// Range: 0x21B130 -> 0x21B13C
signed int DfltVulnFlags() {
    /* anonymous block */ {
        // Range: 0x21B130 -> 0x21B13C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdPopper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021B140 -> 0x0021B1A4
*/
// Range: 0x21B140 -> 0x21B1A4
// this: r16
void zNMEPopper::CreateConfig() {
    /* anonymous block */ {
        // Range: 0x21B140 -> 0x21B1A4
        enum en_nmevar vidx; // r2
    }
}


