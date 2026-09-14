/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00237BC0 -> 0x00237CD0
*/
// Range: 0x237BC0 -> 0x237CD0
// this: r17
signed int zNMEGoalJellyDying::Exit() {
    /* anonymous block */ {
        // Range: 0x237BC0 -> 0x237CD0
        class zNMECritJelly * npc; // r2
        class xVec3 vel; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00237CD0 -> 0x0023807C
*/
// Range: 0x237CD0 -> 0x23807C
// this: r19
signed int zNMEGoalJellyDying::Enter() {
    /* anonymous block */ {
        // Range: 0x237CD0 -> 0x23807C
        class zNMECritJelly * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00238080 -> 0x0023878C
*/
// Range: 0x238080 -> 0x23878C
// this: r20
void zNMEGoalJellyAttack::ZapperUpdate() {
    /* anonymous block */ {
        // Range: 0x238080 -> 0x23878C
        signed int idx_fromBone'265; // r2
        class zNMECritJelly * npc; // r19
        float tym_ancur; // r4
        float rat; // r2
        class xVec3 pos_bone; // r29+0x150
        signed int i; // r18
        signed int idx_tgtBone; // r2
        class xVec3 pos_tgt; // r29+0x140
        class xVec3 pos_plyr; // r29+0x130
        signed int i; // r19
        class xVec3 pos_tgt; // r29+0x120
        class xVec3 wt_tgt; // @ 0x0061B620
        float tym_attackOn[2]; // @ 0x0061B630
        signed int idx_fromBone; // @ 0x006369C8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00238790 -> 0x002388DC
*/
// Range: 0x238790 -> 0x2388DC
// this: r17
void zNMEGoalJellyAttack::ZapperStart() {
    /* anonymous block */ {
        // Range: 0x238790 -> 0x2388DC
        class zNMECritJelly * npc; // r2
        class _tagLightningAdd info; // r29+0x30
        class xVec3 pos_bone; // r29+0xA0
        signed int i; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002388E0 -> 0x0023893C
*/
// Range: 0x2388E0 -> 0x23893C
// this: r18
signed int zNMEGoalJellyAttack::Process(enum en_trantype * trantype /* r17 */, float dt /* r20 */, void * ctxt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2388E0 -> 0x23893C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00238940 -> 0x002389D8
*/
// Range: 0x238940 -> 0x2389D8
// this: r16
signed int zNMEGoalJellyAttack::Exit() {
    /* anonymous block */ {
        // Range: 0x238940 -> 0x2389D8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002389E0 -> 0x00238AC8
*/
// Range: 0x2389E0 -> 0x238AC8
// this: r16
signed int zNMEGoalJellyAttack::Enter() {
    /* anonymous block */ {
        // Range: 0x2389E0 -> 0x238AC8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00238AD0 -> 0x00238D1C
*/
// Range: 0x238AD0 -> 0x238D1C
// this: r16
void zNMECritJelly::DangerSigns() {
    /* anonymous block */ {
        // Range: 0x238AD0 -> 0x238D1C
        class _tagLightningAdd info; // r29+0x60
        signed int idx_frombone; // r2
        signed int idx_destbone; // r2
        class xMat4x3 matroot; // r29+0x20
        class xVec3 pos_from; // r29+0xE0
        class xVec3 pos_dest; // r29+0xD0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00238D20 -> 0x00238DCC
*/
// Range: 0x238D20 -> 0x238DCC
// this: r2
signed int zNMECritJelly::JellyMailDamage(class NMEDamageInfo * dmgmail /* r2 */) {
    /* anonymous block */ {
        // Range: 0x238D20 -> 0x238DCC
        signed int handled; // r16
        class xPsyche * psy; // r2
        class xGoal * goal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00238DD0 -> 0x00238E78
*/
// Range: 0x238DD0 -> 0x238E78
// this: r2
signed int zNMECritJelly::TypeHandleMail(class NMEMsg * mail /* r2 */) {
    /* anonymous block */ {
        // Range: 0x238DD0 -> 0x238E78
        signed int handled; // r17
        class xPsyche * psy; // r2
        class xGoal * goal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00238E80 -> 0x00239340
*/
// Range: 0x238E80 -> 0x239340
// this: r20
void zNMECritJelly::Process(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x238E80 -> 0x239340
        class xMat4x3 oldMat; // r29+0x160
        class xEntFrame tmpFrame; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00239340 -> 0x00239928
*/
// Range: 0x239340 -> 0x239928
// this: r16
void zNMECritJelly::BUpdate() {
    /* anonymous block */ {
        // Range: 0x239340 -> 0x239928
        class xMat4x3 * mat_bone; // r2
        class xMat4x3 * mat_root; // r2
        class xVec3 pos_bone; // r29+0x1A0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00239930 -> 0x002399B0
*/
// Range: 0x239930 -> 0x2399B0
// this: r2
signed int zNMECritJelly::IsAlive() {
    /* anonymous block */ {
        // Range: 0x239930 -> 0x2399B0
        signed int gid_nolife[3]; // r29+0x10
        signed int gid; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002399B0 -> 0x00239CD0
*/
// Range: 0x2399B0 -> 0x239CD0
// this: r16
void zNMECritJelly::Reset() {
    /* anonymous block */ {
        // Range: 0x2399B0 -> 0x239CD0
        class zNMEGoalCritDead * goal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00239CD0 -> 0x00239E94
*/
// Range: 0x239CD0 -> 0x239E94
class xAnimTable * CreateAnimTable(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x239CD0 -> 0x239E94
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00239EA0 -> 0x00239F40
*/
// Range: 0x239EA0 -> 0x239F40
unsigned int AnimPick(signed int gid /* r2 */, enum en_npcgspot gspot /* r2 */) {
    /* anonymous block */ {
        // Range: 0x239EA0 -> 0x239F40
        signed int idx; // r7
        unsigned int da_anim; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00239F40 -> 0x00239FFC
*/
// Range: 0x239F40 -> 0x239FFC
// this: r16
void zNMECritJelly::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x239F40 -> 0x239FFC
        class xBehaveMgr * bmgr; // r2
        class xPsyche * psy; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023A000 -> 0x0023A048
*/
// Range: 0x23A000 -> 0x23A048
// this: r2
void zNMECritJelly::Setup() {
    /* anonymous block */ {
        // Range: 0x23A000 -> 0x23A048
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023A050 -> 0x0023A05C
*/
// Range: 0x23A050 -> 0x23A05C
signed int DfltVulnFlags() {
    /* anonymous block */ {
        // Range: 0x23A050 -> 0x23A05C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023A060 -> 0x0023A0D4
*/
// Range: 0x23A060 -> 0x23A0D4
// this: r2
void zNMECritJelly::CreateConfig() {
    /* anonymous block */ {
        // Range: 0x23A060 -> 0x23A0D4
    }
}


