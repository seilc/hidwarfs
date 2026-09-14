/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002063C0 -> 0x00206518
*/
// Range: 0x2063C0 -> 0x206518
// this: r21
signed int zNMEGoalZapMove::Process(enum en_trantype * trantype /* r20 */, float dt /* r20 */, void * ctxt /* r19 */) {
    /* anonymous block */ {
        // Range: 0x2063C0 -> 0x206518
        class zNMEZapper * npc; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00206520 -> 0x00206680
*/
// Range: 0x206520 -> 0x206680
// this: r18
signed int zNMEGoalZapMove::Enter() {
    /* anonymous block */ {
        // Range: 0x206520 -> 0x206680
        class zNMEZapper * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00206680 -> 0x002068E8
*/
// Range: 0x206680 -> 0x2068E8
// this: r18
signed int zNMEGoalZapWound::Process(enum en_trantype * trantype /* r17 */, float dt /* r20 */, void * ctxt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x206680 -> 0x2068E8
        class zNMEZapper * npc; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002068F0 -> 0x002069AC
*/
// Range: 0x2068F0 -> 0x2069AC
// this: r16
signed int zNMEGoalZapWound::Enter() {
    /* anonymous block */ {
        // Range: 0x2068F0 -> 0x2069AC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002069B0 -> 0x00206D00
*/
// Range: 0x2069B0 -> 0x206D00
// this: r19
signed int zNMEGoalZapZap::Process(enum en_trantype * trantype /* r18 */, float dt /* r20 */, void * ctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2069B0 -> 0x206D00
        signed int nextgoal; // r29+0x8C
        class zNMEZapper * npc; // r16
        float tym_inGoal; // r29+0x90
        enum en_vis vis; // r2
        float spd_turn; // r29+0x90
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00206D00 -> 0x00206FD0
*/
// Range: 0x206D00 -> 0x206FD0
// this: r18
signed int zNMEGoalZapZap::Enter() {
    /* anonymous block */ {
        // Range: 0x206D00 -> 0x206FD0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00206FD0 -> 0x002070BC
*/
// Range: 0x206FD0 -> 0x2070BC
// this: r19
signed int zNMEGoalZapBattle::ChkTheSituation(class zNMEZapper * npc /* r18 */, signed int & nextgoal /* r17 */, enum en_trantype & trantype /* r16 */) {
    /* anonymous block */ {
        // Range: 0x206FD0 -> 0x2070BC
        enum en_vis vis; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002070C0 -> 0x002073EC
*/
// Range: 0x2070C0 -> 0x2073EC
// this: r18
signed int zNMEGoalZapBattle::Process(enum en_trantype * trantype /* r17 */, float dt /* r20 */, void * ctxt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x2070C0 -> 0x2073EC
        signed int nextgoal; // r29+0xAC
        class zNMEZapper * npc; // r16
        signed int doTran; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002073F0 -> 0x00207550
*/
// Range: 0x2073F0 -> 0x207550
// this: r18
signed int zNMEGoalZapBattle::Enter() {
    /* anonymous block */ {
        // Range: 0x2073F0 -> 0x207550
        class zNMEZapper * npc; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00207550 -> 0x002076A0
*/
// Range: 0x207550 -> 0x2076A0
// this: r19
signed int zNMEGoalZapAware::ChkTheSituation(class zNMEZapper * npc /* r18 */, signed int & nextgoal /* r17 */, enum en_trantype & trantype /* r16 */) {
    /* anonymous block */ {
        // Range: 0x207550 -> 0x2076A0
        enum en_vis vis; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002076A0 -> 0x00207968
*/
// Range: 0x2076A0 -> 0x207968
// this: r18
signed int zNMEGoalZapAware::Process(enum en_trantype * trantype /* r17 */, float dt /* r20 */, void * ctxt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x2076A0 -> 0x207968
        signed int nextgoal; // r29+0xAC
        class zNMEZapper * npc; // r16
        signed int doTran; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00207970 -> 0x00207B70
*/
// Range: 0x207970 -> 0x207B70
// this: r19
signed int zNMEGoalZapNormal::Process(enum en_trantype * trantype /* r18 */, float dt /* r20 */, void * ctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x207970 -> 0x207B70
        class zNMEZapper * npc; // r2
        signed int nextgoal; // r29+0x7C
        enum en_vis vis; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00207B70 -> 0x00207BC0
*/
// Range: 0x207B70 -> 0x207BC0
// this: r2
signed int zNMEGoalZapNormal::Exit() {
    /* anonymous block */ {
        // Range: 0x207B70 -> 0x207BC0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00207BC0 -> 0x00207D48
*/
// Range: 0x207BC0 -> 0x207D48
// this: r18
signed int zNMEGoalZapNormal::Enter() {
    /* anonymous block */ {
        // Range: 0x207BC0 -> 0x207D48
        class zNMEZapper * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00207D50 -> 0x00207E48
*/
// Range: 0x207D50 -> 0x207E48
enum en_zapmod SetGunnerState(signed int gid_main /* r2 */) {
    /* anonymous block */ {
        // Range: 0x207D50 -> 0x207E48
        enum en_zapmod gun_state; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00207E50 -> 0x00208168
*/
// Range: 0x207E50 -> 0x208168
// this: r19
void ZapLetMeKnow::Notice(class xGoal * goal /* r2 */) {
    /* anonymous block */ {
        // Range: 0x207E50 -> 0x208168
        class zNMEZapper * zapper; // r2
        class xPsyche * psy_move; // r17
        signed int gid_move; // r2
        signed int gid_want; // r2
        enum en_zapmod zapmode; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00208170 -> 0x002081E8
*/
// Range: 0x208170 -> 0x2081E8
// this: r2
signed int zNMEZapper::SafeToTaunt() {
    /* anonymous block */ {
        // Range: 0x208170 -> 0x2081E8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002081F0 -> 0x002082F0
*/
// Range: 0x2081F0 -> 0x2082F0
// this: r18
signed int zNMEZapper::ZapMailDamage(class NMEDamageInfo * dmgmail /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2081F0 -> 0x2082F0
        signed int rc; // r2
        signed int handled; // r16
        class xPsyche * psy; // r2
        class xGoal * goal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002082F0 -> 0x00208688
*/
// Range: 0x2082F0 -> 0x208688
// this: r17
signed int zNMEZapper::TypeHandleMail(class NMEMsg * mail /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2082F0 -> 0x208688
        signed int handled; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00208690 -> 0x002089EC
*/
// Range: 0x208690 -> 0x2089EC
// this: r2
void zNMEZapper::JetEngine(float dt /* r29+0x60 */) {
    /* anonymous block */ {
        // Range: 0x208690 -> 0x2089EC
        float delay; // r29+0x60
        float ds2_plyr; // r29+0x60
        class xMat4x3 * mat_bone; // r2
        class xMat4x3 * mat_root; // r2
        class xVec3 pos_emit; // r29+0x50
        class xVec3 dir_emit; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002089F0 -> 0x00208A84
*/
// Range: 0x2089F0 -> 0x208A84
// this: r2
float zNMEZapper::HealthRatio() {
    /* anonymous block */ {
        // Range: 0x2089F0 -> 0x208A84
        float rat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00208A90 -> 0x00208CE8
*/
// Range: 0x208A90 -> 0x208CE8
// this: r2
enum en_vis zNMEZapper::VisionTarget(class xEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x208A90 -> 0x208CE8
        class NMECfgZapper * cfg; // r6
        float dy; // r29+0xFFFFFFFC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00208CF0 -> 0x00209100
*/
// Range: 0x208CF0 -> 0x209100
// this: r16
void zNMEZapper::RenderExtra() {
    /* anonymous block */ {
        // Range: 0x208CF0 -> 0x209100
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00209100 -> 0x00209108
*/
// Range: 0x209100 -> 0x209108
// this: r2
void zNMEZapper::NewTime(float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x209100 -> 0x209108
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00209110 -> 0x002096A0
*/
// Range: 0x209110 -> 0x2096A0
// this: r20
void zNMEZapper::Process(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x209110 -> 0x2096A0
        class xMat4x3 oldMat; // r29+0x160
        class xEntFrame tmpFrame; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002096B0 -> 0x00209C98
*/
// Range: 0x2096B0 -> 0x209C98
// this: r16
void zNMEZapper::BUpdate() {
    /* anonymous block */ {
        // Range: 0x2096B0 -> 0x209C98
        class xMat4x3 * mat_bone; // r2
        class xMat4x3 * mat_root; // r2
        class xVec3 pos_bone; // r29+0x1A0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00209CA0 -> 0x0020A138
*/
// Range: 0x209CA0 -> 0x20A138
// this: r17
void zNMEZapper::Reset() {
    /* anonymous block */ {
        // Range: 0x209CA0 -> 0x20A138
        class xPsyche * psy; // r2
        class zNMEGoalAfterlife * goal; // r2
        class zNMEGoalAfterlife * goal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020A150 -> 0x0020A204
*/
// Range: 0x20A150 -> 0x20A204
signed int GoalPick(signed int & gid_would /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20A150 -> 0x20A204
        signed int altered; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020A210 -> 0x0020A6E0
*/
// Range: 0x20A210 -> 0x20A6E0
class xAnimTable * CreateAnimTable(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x20A210 -> 0x20A6E0
        signed int ourAnims[16]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020A6E0 -> 0x0020A920
*/
// Range: 0x20A6E0 -> 0x20A920
// this: r2
unsigned int zNMEZapper::AnimPick(signed int gid /* r2 */, enum en_npcgspot gspot /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20A6E0 -> 0x20A920
        enum en_stananim idx; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020A920 -> 0x0020AA68
*/
// Range: 0x20A920 -> 0x20AA68
// this: r16
void zNMEZapper::ZapMainBrain() {
    /* anonymous block */ {
        // Range: 0x20A920 -> 0x20AA68
        class xBehaveMgr * bmgr; // r2
        class xPsyche * psy; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020AA70 -> 0x0020AAC0
*/
// Range: 0x20AA70 -> 0x20AAC0
// this: r16
void zNMEZapper::SelfDestroy() {
    /* anonymous block */ {
        // Range: 0x20AA70 -> 0x20AAC0
        class xBehaveMgr * bmgr; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020AAC0 -> 0x0020AB64
*/
// Range: 0x20AAC0 -> 0x20AB64
// this: r17
void zNMEZapper::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x20AAC0 -> 0x20AB64
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020AB70 -> 0x0020ACAC
*/
// Range: 0x20AB70 -> 0x20ACAC
// this: r16
void zNMEZapper::Setup() {
    /* anonymous block */ {
        // Range: 0x20AB70 -> 0x20ACAC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020ACB0 -> 0x0020B078
*/
// Range: 0x20ACB0 -> 0x20B078
// this: r16
void zNMEZapper::Init(class xEntAsset * asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x20ACB0 -> 0x20B078
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020B080 -> 0x0020B08C
*/
// Range: 0x20B080 -> 0x20B08C
signed int DfltVulnFlags() {
    /* anonymous block */ {
        // Range: 0x20B080 -> 0x20B08C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeStdZapper.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020B090 -> 0x0020B0F4
*/
// Range: 0x20B090 -> 0x20B0F4
// this: r16
void zNMEZapper::CreateConfig() {
    /* anonymous block */ {
        // Range: 0x20B090 -> 0x20B0F4
        enum en_nmevar vidx; // r2
    }
}


