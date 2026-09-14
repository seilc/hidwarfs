/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurBarrel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FCD20 -> 0x001FCD40
*/
// Range: 0x1FCD20 -> 0x1FCD40
signed int GoalHandleMail(class NMEMsg * mail /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FCD20 -> 0x1FCD40
        signed int snarfed; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurBarrel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FCD40 -> 0x001FCE88
*/
// Range: 0x1FCD40 -> 0x1FCE88
// this: r16
signed int zNMEGoalTurrBHurt::Process(enum en_trantype * trantype /* r2 */, float dt /* r29+0x20 */, void * ctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FCD40 -> 0x1FCE88
        class zNMETurBarrel * npc; // r2
        signed int amDone; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurBarrel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FCE90 -> 0x001FCF4C
*/
// Range: 0x1FCE90 -> 0x1FCF4C
// this: r16
signed int zNMEGoalTurrBHurt::Enter() {
    /* anonymous block */ {
        // Range: 0x1FCE90 -> 0x1FCF4C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurBarrel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FCF50 -> 0x001FD350
*/
// Range: 0x1FCF50 -> 0x1FD350
signed int BangBang(class zNMETurBarrel * npc /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1FCF50 -> 0x1FD350
        class zNMEHazard * haz; // r18
        class NMECfgTBarrel * cfg; // r17
        signed int rc; // r2
        class xMat4x3 * mat_gun; // r2
        class xVec3 pos_src; // r29+0xA0
        class xVec3 pos_tgt; // r29+0x90
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurBarrel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FD350 -> 0x001FD404
*/
// Range: 0x1FD350 -> 0x1FD404
// this: r18
signed int zNMEGoalTurrBShoot::Process(enum en_trantype * trantype /* r17 */, float dt /* r20 */, void * ctxt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1FD350 -> 0x1FD404
        class zNMETurBarrel * npc; // r2
        signed int rc; // r2
        float tym_shoot[1]; // @ 0x0061C340
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurBarrel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FD410 -> 0x001FD4DC
*/
// Range: 0x1FD410 -> 0x1FD4DC
// this: r16
signed int zNMEGoalTurrBShoot::Enter() {
    /* anonymous block */ {
        // Range: 0x1FD410 -> 0x1FD4DC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurBarrel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FD4E0 -> 0x001FD664
*/
// Range: 0x1FD4E0 -> 0x1FD664
signed int QRotTowards(class xMat3x3 * mat /* r17 */, class xQuat * qfrom /* r16 */, class xQuat * qdest /* r2 */, float dt /* r21 */, float spd /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1FD4E0 -> 0x1FD664
        class xQuat quat; // r29+0x40
        float qdot; // r29+0x50
        float ang_rotate; // r29+0x50
        float ang_perstep; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurBarrel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FD670 -> 0x001FD924
*/
// Range: 0x1FD670 -> 0x1FD924
// this: r17
enum en_rotinf zNMEGoalTurrBTurn::RotateUpdate(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1FD670 -> 0x1FD924
        class zNMETurBarrel * npc; // r16
        class xQuat quat_curr; // r29+0x50
        class xQuat quat_want; // r29+0x40
        class NMECfgTBarrel * cfg; // r2
        float spd_turn; // r29+0x90
        signed int arrived; // r2
        signed int atEndpoint; // r3
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurBarrel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FD930 -> 0x001FDDF4
*/
// Range: 0x1FD930 -> 0x1FDDF4
// this: r19
signed int zNMEGoalTurrBTurn::SubStateUpdate(class zNMETurBarrel * npc /* r18 */, float dt /* r20 */, signed int & nextgoal /* r17 */, enum en_trantype & trantype /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1FD930 -> 0x1FDDF4
        enum en_rotinf rotinf; // r2
        enum en_nmevar nvar; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurBarrel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FDE00 -> 0x001FDF14
*/
// Range: 0x1FDE00 -> 0x1FDF14
// this: r18
signed int zNMEGoalTurrBTurn::Process(enum en_trantype * trantype /* r17 */, float dt /* r20 */, void * ctxt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1FDE00 -> 0x1FDF14
        class zNMETurBarrel * npc; // r2
        enum en_vis vis; // r2
        signed int nextgoal; // r29+0x6C
        signed int doTran; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurBarrel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FDF20 -> 0x001FE06C
*/
// Range: 0x1FDF20 -> 0x1FE06C
// this: r17
signed int zNMEGoalTurrBTurn::Enter() {
    /* anonymous block */ {
        // Range: 0x1FDF20 -> 0x1FE06C
        class zNMETurBarrel * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurBarrel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FE070 -> 0x001FE290
*/
// Range: 0x1FE070 -> 0x1FE290
// this: r17
signed int zNMEGoalTurrBIdle::Process(enum en_trantype * trantype /* r16 */, float dt /* r20 */, void * ctxt /* r22 */) {
    /* anonymous block */ {
        // Range: 0x1FE070 -> 0x1FE290
        class zNMETurBarrel * npc; // r21
        enum en_vis vis; // r2
        unsigned int anid_active; // r2
        unsigned int anid_inactive; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurBarrel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FE290 -> 0x001FE3E8
*/
// Range: 0x1FE290 -> 0x1FE3E8
// this: r2
enum en_vis zNMETurBarrel::VisionTarget(class xEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FE290 -> 0x1FE3E8
        class NMECfgTBarrel * cfg; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurBarrel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FE3F0 -> 0x001FE588
*/
// Range: 0x1FE3F0 -> 0x1FE588
// this: r17
void zNMETurBarrel::CalcEndPoints(class xMat3x3 * mat_ref /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1FE3F0 -> 0x1FE588
        float ang_half; // r20
        class xMat3x3 mat_rot; // r29+0x70
        class xMat3x3 mat_tmp; // r29+0x40
        class xVec3 dir_around; // r29+0xA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurBarrel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FE590 -> 0x001FE67C
*/
// Range: 0x1FE590 -> 0x1FE67C
// this: r2
signed int zNMETurBarrel::TurBarMailDamage(class NMEDamageInfo * dmgmail /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FE590 -> 0x1FE67C
        signed int handled; // r16
        class xPsyche * psy; // r2
        class xGoal * goal; // r2
        class xPsyche * psy; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurBarrel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FE680 -> 0x001FE6CC
*/
// Range: 0x1FE680 -> 0x1FE6CC
// this: r2
signed int zNMETurBarrel::TypeHandleMail(class NMEMsg * mail /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FE680 -> 0x1FE6CC
        signed int handled; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurBarrel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FE6D0 -> 0x001FE740
*/
// Range: 0x1FE6D0 -> 0x1FE740
// this: r16
void zNMETurBarrel::Process(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1FE6D0 -> 0x1FE740
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurBarrel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FE740 -> 0x001FECA0
*/
// Range: 0x1FE740 -> 0x1FECA0
// this: r16
void zNMETurBarrel::BUpdate(class xVec3 * pos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FE740 -> 0x1FECA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurBarrel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FECA0 -> 0x001FEF9C
*/
// Range: 0x1FECA0 -> 0x1FEF9C
// this: r16
void zNMETurBarrel::Reset() {
    /* anonymous block */ {
        // Range: 0x1FECA0 -> 0x1FEF9C
        class zNMEGoalTurrDead * goal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurBarrel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FEFA0 -> 0x001FF168
*/
// Range: 0x1FEFA0 -> 0x1FF168
// this: r16
void zNMETurBarrel::Init(class xEntAsset * asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1FEFA0 -> 0x1FF168
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurBarrel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FF170 -> 0x001FF17C
*/
// Range: 0x1FF170 -> 0x1FF17C
signed int DfltVulnFlags() {
    /* anonymous block */ {
        // Range: 0x1FF170 -> 0x1FF17C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurBarrel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FF180 -> 0x001FF56C
*/
// Range: 0x1FF180 -> 0x1FF56C
class xAnimTable * CreateAnimTable(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1FF180 -> 0x1FF56C
        signed int ourAnims[9]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurBarrel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FF570 -> 0x001FF6E8
*/
// Range: 0x1FF570 -> 0x1FF6E8
// this: r2
unsigned int zNMETurBarrel::AnimPick(signed int gid /* r2 */, enum en_npcgspot gspot /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FF570 -> 0x1FF6E8
        enum en_turranim idx; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurBarrel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FF6F0 -> 0x001FF7C0
*/
// Range: 0x1FF6F0 -> 0x1FF7C0
// this: r16
void zNMETurBarrel::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x1FF6F0 -> 0x1FF7C0
        class xBehaveMgr * bmgr; // r2
        class xPsyche * psy; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTurBarrel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FF7C0 -> 0x001FF818
*/
// Range: 0x1FF7C0 -> 0x1FF818
// this: r16
void zNMETurBarrel::CreateConfig() {
    /* anonymous block */ {
        // Range: 0x1FF7C0 -> 0x1FF818
        enum en_nmevar vidx; // r2
    }
}


