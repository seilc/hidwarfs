/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021B1B0 -> 0x0021B308
*/
// Range: 0x21B1B0 -> 0x21B308
// this: r21
signed int zNMEGoalMervMove::Process(enum en_trantype * trantype /* r20 */, float dt /* r20 */, void * ctxt /* r19 */) {
    /* anonymous block */ {
        // Range: 0x21B1B0 -> 0x21B308
        class zNMEMervyn * npc; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021B310 -> 0x0021B470
*/
// Range: 0x21B310 -> 0x21B470
// this: r18
signed int zNMEGoalMervMove::Enter() {
    /* anonymous block */ {
        // Range: 0x21B310 -> 0x21B470
        class zNMEMervyn * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021B470 -> 0x0021B6D8
*/
// Range: 0x21B470 -> 0x21B6D8
// this: r18
signed int zNMEGoalMervWound::Process(enum en_trantype * trantype /* r17 */, float dt /* r20 */, void * ctxt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x21B470 -> 0x21B6D8
        class zNMEMervyn * npc; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021B6E0 -> 0x0021B79C
*/
// Range: 0x21B6E0 -> 0x21B79C
// this: r16
signed int zNMEGoalMervWound::Enter() {
    /* anonymous block */ {
        // Range: 0x21B6E0 -> 0x21B79C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021B7A0 -> 0x0021BAA0
*/
// Range: 0x21B7A0 -> 0x21BAA0
void PickTarget(class zNMEMervyn * npc /* r18 */, class xVec3 * tgt /* r17 */, class xVec3 * src /* r16 */) {
    /* anonymous block */ {
        // Range: 0x21B7A0 -> 0x21BAA0
        class xVec3 dir_tgt; // r29+0xB0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021BAA0 -> 0x0021BEC0
*/
// Range: 0x21BAA0 -> 0x21BEC0
// this: r19
signed int zNMEGoalMervBomb::BombsAway(class zNMEMervyn * npc /* r18 */) {
    /* anonymous block */ {
        // Range: 0x21BAA0 -> 0x21BEC0
        class zNMEHazard * haz; // r17
        signed int rc; // r2
        class xVec3 pos_src; // r29+0xB0
        class xVec3 pos_tgt; // r29+0xA0
        class xVec3 delta; // r29+0x90
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021BEC0 -> 0x0021C0B0
*/
// Range: 0x21BEC0 -> 0x21C0B0
// this: r18
signed int zNMEGoalMervBomb::Process(enum en_trantype * trantype /* r17 */, float dt /* r20 */, void * ctxt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x21BEC0 -> 0x21C0B0
        class zNMEMervyn * npc; // r2
        unsigned int anid_prep; // r7
        unsigned int anid_done; // r4
        signed int rc; // r2
        float tym_shoot[1]; // @ 0x0061BD28
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021C0B0 -> 0x0021C1E8
*/
// Range: 0x21C0B0 -> 0x21C1E8
// this: r16
signed int zNMEGoalMervBomb::Enter() {
    /* anonymous block */ {
        // Range: 0x21C0B0 -> 0x21C1E8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021C1F0 -> 0x0021C5AC
*/
// Range: 0x21C1F0 -> 0x21C5AC
// this: r16
signed int zNMEGoalMervBowl::RepelBowlBall(float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x21C1F0 -> 0x21C5AC
        class xEntBoulder * bowl; // r20
        class zNMEMervyn * npc; // r2
        class xVec3 vec_NtoB; // r29+0x130
        class xVec3 dir_NtoB; // r29+0x120
        class xVec3 vec_tmp; // r29+0x110
        class xVec3 dir_side; // r29+0x100
        float rat; // r29+0x140
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021C5B0 -> 0x0021C7B4
*/
// Range: 0x21C5B0 -> 0x21C7B4
// this: r19
signed int zNMEGoalMervBowl::Process(enum en_trantype * trantype /* r18 */, float dt /* r20 */, void * ctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x21C5B0 -> 0x21C7B4
        class zNMEMervyn * npc; // r16
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021C7C0 -> 0x0021C884
*/
// Range: 0x21C7C0 -> 0x21C884
// this: r16
signed int zNMEGoalMervBowl::Enter() {
    /* anonymous block */ {
        // Range: 0x21C7C0 -> 0x21C884
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021C890 -> 0x0021CBAC
*/
// Range: 0x21C890 -> 0x21CBAC
// this: r19
signed int zNMEGoalMervZap::Process(enum en_trantype * trantype /* r18 */, float dt /* r20 */, void * ctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x21C890 -> 0x21CBAC
        class zNMEMervyn * npc; // r16
        signed int nextgoal; // r29+0x8C
        float tym_inGoal; // r29+0x90
        enum en_vis vis; // r2
        float spd_turn; // r29+0x90
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021CBB0 -> 0x0021CDD0
*/
// Range: 0x21CBB0 -> 0x21CDD0
// this: r19
signed int zNMEGoalMervBattle::Process(enum en_trantype * trantype /* r18 */, float dt /* r20 */, void * ctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x21CBB0 -> 0x21CDD0
        signed int nextgoal; // r29+0x8C
        class zNMEMervyn * npc; // r16
        signed int doTran; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021CDD0 -> 0x0021D04C
*/
// Range: 0x21CDD0 -> 0x21D04C
// this: r19
signed int zNMEGoalMervBattle::ChkExitCases(class zNMEMervyn * npc /* r18 */, signed int & nextgoal /* r17 */, enum en_trantype & trantype /* r16 */) {
    /* anonymous block */ {
        // Range: 0x21CDD0 -> 0x21D04C
        signed int rc; // r2
        enum en_vis iseeplyr; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021D050 -> 0x0021D1B0
*/
// Range: 0x21D050 -> 0x21D1B0
// this: r18
signed int zNMEGoalMervBattle::Enter() {
    /* anonymous block */ {
        // Range: 0x21D050 -> 0x21D1B0
        class zNMEMervyn * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021D1B0 -> 0x0021D540
*/
// Range: 0x21D1B0 -> 0x21D540
// this: r18
signed int zNMEGoalMervAware::Process(enum en_trantype * trantype /* r17 */, float dt /* r20 */, void * ctxt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x21D1B0 -> 0x21D540
        class zNMEMervyn * npc; // r16
        signed int rc; // r2
        signed int nextgoal; // r29+0xBC
        enum en_vis iseeplyr; // r2
        signed int nextgoal; // r29+0xB8
        signed int nextgoal; // r29+0xB4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021D540 -> 0x0021D6CC
*/
// Range: 0x21D540 -> 0x21D6CC
// this: r19
signed int zNMEGoalMervNormal::Process(enum en_trantype * trantype /* r18 */, float dt /* r20 */, void * ctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x21D540 -> 0x21D6CC
        class zNMEMervyn * npc; // r2
        signed int rc; // r2
        signed int nextgoal; // r29+0x6C
        enum en_vis iseeplyr; // r2
        signed int nextgoal; // r29+0x68
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021D6D0 -> 0x0021D720
*/
// Range: 0x21D6D0 -> 0x21D720
// this: r2
signed int zNMEGoalMervNormal::Exit() {
    /* anonymous block */ {
        // Range: 0x21D6D0 -> 0x21D720
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021D720 -> 0x0021D8A8
*/
// Range: 0x21D720 -> 0x21D8A8
// this: r18
signed int zNMEGoalMervNormal::Enter() {
    /* anonymous block */ {
        // Range: 0x21D720 -> 0x21D8A8
        class zNMEMervyn * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021D8B0 -> 0x0021D9D8
*/
// Range: 0x21D8B0 -> 0x21D9D8
void Notice(class xGoal * goal /* r2 */) {
    /* anonymous block */ {
        // Range: 0x21D8B0 -> 0x21D9D8
        class xPsyche * psy_move; // r17
        signed int gid_move; // r2
        signed int gid_want; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021D9E0 -> 0x0021DD80
*/
// Range: 0x21D9E0 -> 0x21DD80
// this: r16
void zNMEMervyn::UpdateGunnerStatus() {
    /* anonymous block */ {
        // Range: 0x21D9E0 -> 0x21DD80
        signed int gid_main; // r2
        enum en_zapmod gun_state; // r20
        class NMECfgMervyn * cfg; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021DD80 -> 0x0021DDF8
*/
// Range: 0x21DD80 -> 0x21DDF8
// this: r2
signed int zNMEMervyn::SafeToTaunt() {
    /* anonymous block */ {
        // Range: 0x21DD80 -> 0x21DDF8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021DE00 -> 0x0021DF00
*/
// Range: 0x21DE00 -> 0x21DF00
// this: r18
signed int zNMEMervyn::MervMailDamage(class NMEDamageInfo * dmgmail /* r17 */) {
    /* anonymous block */ {
        // Range: 0x21DE00 -> 0x21DF00
        signed int rc; // r2
        signed int handled; // r16
        class xPsyche * psy; // r2
        class xGoal * goal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021DF00 -> 0x0021E298
*/
// Range: 0x21DF00 -> 0x21E298
// this: r17
signed int zNMEMervyn::TypeHandleMail(class NMEMsg * mail /* r16 */) {
    /* anonymous block */ {
        // Range: 0x21DF00 -> 0x21E298
        signed int handled; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021E2A0 -> 0x0021E594
*/
// Range: 0x21E2A0 -> 0x21E594
// this: r18
signed int zNMEMervyn::ChkBowlingBall(class xVec3 * dir_NtoBall /* r17 */, float * dst_NtoBall /* r16 */) {
    /* anonymous block */ {
        // Range: 0x21E2A0 -> 0x21E594
        class xEntBoulder * bowl; // r2
        class xVec3 vec_NtoB; // r29+0xA0
        class xVec3 dir_tgt; // r29+0x90
        class xVec3 dir_travel; // r29+0x80
        float spd_ball; // r29+0xB0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021E5A0 -> 0x0021E6D4
*/
// Range: 0x21E5A0 -> 0x21E6D4
// this: r16
void zNMEMervyn::BladesUpdate(float dt /* r29+0x50 */) {
    /* anonymous block */ {
        // Range: 0x21E5A0 -> 0x21E6D4
        float rat; // r1
        float spd_turn; // r29+0x50
        float ang_perstep; // r29+0x50
        class xMat3x3 mat_rot; // r29+0x20
        class xMat4x3 * mat_blades; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021E6E0 -> 0x0021E774
*/
// Range: 0x21E6E0 -> 0x21E774
// this: r2
float zNMEMervyn::HealthRatio() {
    /* anonymous block */ {
        // Range: 0x21E6E0 -> 0x21E774
        float rat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021E780 -> 0x0021E970
*/
// Range: 0x21E780 -> 0x21E970
// this: r2
enum en_vis zNMEMervyn::VisionTarget(class xEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x21E780 -> 0x21E970
        class NMECfgMervyn * cfg; // r5
        float dy; // r29+0xFFFFFFFC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021E970 -> 0x0021ED80
*/
// Range: 0x21E970 -> 0x21ED80
// this: r16
void zNMEMervyn::RenderExtra() {
    /* anonymous block */ {
        // Range: 0x21E970 -> 0x21ED80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021ED80 -> 0x0021F024
*/
// Range: 0x21ED80 -> 0x21F024
// this: r18
void zNMEMervyn::HelioDustUpdate(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x21ED80 -> 0x21F024
        class DustData * dusthelp; // r17
        class xVec3 pos; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021F030 -> 0x0021F06C
*/
// Range: 0x21F030 -> 0x21F06C
// this: r16
void zNMEMervyn::NewTime(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x21F030 -> 0x21F06C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021F070 -> 0x0021F66C
*/
// Range: 0x21F070 -> 0x21F66C
// this: r20
void zNMEMervyn::Process(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x21F070 -> 0x21F66C
        class xMat4x3 oldMat; // r29+0x170
        class xEntFrame tmpFrame; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021F670 -> 0x0021F7E4
*/
// Range: 0x21F670 -> 0x21F7E4
// this: r17
void zNMEMervyn::DieTheGoodDeath() {
    /* anonymous block */ {
        // Range: 0x21F670 -> 0x21F7E4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021F7F0 -> 0x0021FDD8
*/
// Range: 0x21F7F0 -> 0x21FDD8
// this: r16
void zNMEMervyn::BUpdate() {
    /* anonymous block */ {
        // Range: 0x21F7F0 -> 0x21FDD8
        class xMat4x3 * mat_bone; // r2
        class xMat4x3 * mat_root; // r2
        class xVec3 pos_bone; // r29+0x1A0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021FDE0 -> 0x0022025C
*/
// Range: 0x21FDE0 -> 0x22025C
// this: r17
void zNMEMervyn::Reset() {
    /* anonymous block */ {
        // Range: 0x21FDE0 -> 0x22025C
        class xPsyche * psy; // r2
        class zNMEGoalAfterlife * goal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00220260 -> 0x00220328
*/
// Range: 0x220260 -> 0x220328
signed int GoalPick(signed int & gid_would /* r2 */, enum en_trantype & typ_tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x220260 -> 0x220328
        signed int altered; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00220330 -> 0x00220B14
*/
// Range: 0x220330 -> 0x220B14
class xAnimTable * CreateAnimTable(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x220330 -> 0x220B14
        signed int ourAnims[23]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00220B20 -> 0x00220E64
*/
// Range: 0x220B20 -> 0x220E64
// this: r2
unsigned int zNMEMervyn::AnimPick(signed int gid /* r2 */, enum en_npcgspot gspot /* r2 */, class xGoal * rawgoal /* r2 */) {
    /* anonymous block */ {
        // Range: 0x220B20 -> 0x220E64
        enum en_stananim idx; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00220E70 -> 0x00220FE0
*/
// Range: 0x220E70 -> 0x220FE0
// this: r16
void zNMEMervyn::MervMainBrain() {
    /* anonymous block */ {
        // Range: 0x220E70 -> 0x220FE0
        class xBehaveMgr * bmgr; // r2
        class xPsyche * psy; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00220FE0 -> 0x00221030
*/
// Range: 0x220FE0 -> 0x221030
// this: r16
void zNMEMervyn::SelfDestroy() {
    /* anonymous block */ {
        // Range: 0x220FE0 -> 0x221030
        class xBehaveMgr * bmgr; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00221030 -> 0x002210D4
*/
// Range: 0x221030 -> 0x2210D4
// this: r17
void zNMEMervyn::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x221030 -> 0x2210D4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002210E0 -> 0x0022121C
*/
// Range: 0x2210E0 -> 0x22121C
// this: r16
void zNMEMervyn::Setup() {
    /* anonymous block */ {
        // Range: 0x2210E0 -> 0x22121C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00221220 -> 0x00221594
*/
// Range: 0x221220 -> 0x221594
// this: r16
void zNMEMervyn::Init(class xEntAsset * asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x221220 -> 0x221594
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002215A0 -> 0x002215AC
*/
// Range: 0x2215A0 -> 0x2215AC
signed int DfltVulnFlags() {
    /* anonymous block */ {
        // Range: 0x2215A0 -> 0x2215AC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdMervyn.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002215B0 -> 0x00221614
*/
// Range: 0x2215B0 -> 0x221614
// this: r16
void zNMEMervyn::CreateConfig() {
    /* anonymous block */ {
        // Range: 0x2215B0 -> 0x221614
        enum en_nmevar vidx; // r2
    }
}


