/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00235EA0 -> 0x00235EA8
*/
// Range: 0x235EA0 -> 0x235EA8
signed int GoalHandleMail() {
    /* anonymous block */ {
        // Range: 0x235EA0 -> 0x235EA8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00235EB0 -> 0x00235EB8
*/
// Range: 0x235EB0 -> 0x235EB8
signed int GoalHandleMail() {
    /* anonymous block */ {
        // Range: 0x235EB0 -> 0x235EB8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00235EC0 -> 0x002360D8
*/
// Range: 0x235EC0 -> 0x2360D8
float CalcEndPoint(class zNMECritter * npc /* r18 */, class xVec3 * pos_end /* r17 */, class xVec3 * dir_aim /* r16 */) {
    /* anonymous block */ {
        // Range: 0x235EC0 -> 0x2360D8
        float dst_toEndPnt; // r29+0x140
        class xVec3 vec; // r29+0x130
        class xVec3 pos; // r29+0x120
        class xCollis colrec; // r29+0x40
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002360E0 -> 0x002364D4
*/
// Range: 0x2360E0 -> 0x2364D4
// this: r20
void zNMEGoalCritDying::RibbonUpdate(class zNMECritter * npc /* r19 */) {
    /* anonymous block */ {
        // Range: 0x2360E0 -> 0x2364D4
        class RibData * ribhelp; // r2
        class xVec3 a; // r29+0xC0
        class xVec3 b; // r29+0xB0
        class xVec3 dir_emit; // r29+0xA0
        float dst; // r29+0xD0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002364E0 -> 0x00236950
*/
// Range: 0x2364E0 -> 0x236950
// this: r19
signed int zNMEGoalCritDying::Process(enum en_trantype * trantype /* r18 */, float dt /* r22 */, void * ctxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2364E0 -> 0x236950
        signed int nextgoal; // r29+0x8C
        class zNMECritter * npc; // r16
        float rat_life; // r21
        class xVec3 pos; // r29+0x80
        signed int doalpha; // r4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00236950 -> 0x002369A8
*/
// Range: 0x236950 -> 0x2369A8
// this: r16
signed int zNMEGoalCritDying::Exit() {
    /* anonymous block */ {
        // Range: 0x236950 -> 0x2369A8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002369B0 -> 0x00236D44
*/
// Range: 0x2369B0 -> 0x236D44
// this: r19
signed int zNMEGoalCritDying::Enter() {
    /* anonymous block */ {
        // Range: 0x2369B0 -> 0x236D44
        class zNMECritter * npc; // r16
        class xVec3 dir_aim; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00236D50 -> 0x002371B0
*/
// Range: 0x236D50 -> 0x2371B0
// this: r19
void zNMEGoalCritPatrol::CritMoveSpline(float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x236D50 -> 0x2371B0
        class zNMECommon * npc; // r18
        class zNMENavNet * navnet; // r2
        class xSpline3 * spl; // r17
        float newdist; // r20
        class xVec3 vec; // r29+0xA0
        class xVec3 tgt; // r29+0x90
        float u; // r29+0xB0
        class xVec3 dir; // r29+0x80
        float qdot; // r29+0xB0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002371B0 -> 0x00237504
*/
// Range: 0x2371B0 -> 0x237504
// this: r19
void zNMEGoalCritPatrol::CritMoveNormal(float dt /* r29+0xA0 */) {
    /* anonymous block */ {
        // Range: 0x2371B0 -> 0x237504
        class zNMECritter * npc; // r18
        class xVec3 dir_dest; // r29+0x90
        class xVec3 delta; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00237510 -> 0x0023782C
*/
// Range: 0x237510 -> 0x23782C
// this: r21
signed int zNMEGoalCritPatrol::Process(enum en_trantype * trantype /* r20 */, float dt /* r20 */, void * ctxt /* r22 */) {
    /* anonymous block */ {
        // Range: 0x237510 -> 0x23782C
        class zNMECritter * npc; // r19
        class zNMENavNet * navnet; // r2
        signed int nextgoal; // r29+0x9C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00237830 -> 0x002378F0
*/
// Range: 0x237830 -> 0x2378F0
// this: r16
signed int zNMEGoalCritPatrol::Enter() {
    /* anonymous block */ {
        // Range: 0x237830 -> 0x2378F0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002378F0 -> 0x002379B8
*/
// Range: 0x2378F0 -> 0x2379B8
// this: r16
signed int zNMEGoalCritIdle::Process(enum en_trantype * trantype /* r2 */, float dt /* r29+0x30 */, void * ctxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2378F0 -> 0x2379B8
        class zNMECritter * npc; // r2
        class zNMENavNet * navnet; // r2
        signed int nextgoal; // r29+0x2C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002379C0 -> 0x002379FC
*/
// Range: 0x2379C0 -> 0x2379FC
// this: r17
void zNMECritter::Init(class xEntAsset * entass /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2379C0 -> 0x2379FC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00237A00 -> 0x00237A34
*/
// Range: 0x237A00 -> 0x237A34
// this: r2
class zMovePoint * zNMECritter::MvptFirstFollow() {
    /* anonymous block */ {
        // Range: 0x237A00 -> 0x237A34
        class zMovePoint * nav; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00237AA0 -> 0x00237BA8
*/
// Range: 0x237AA0 -> 0x237BA8
void ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x237AA0 -> 0x237BA8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCritter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00237BB0 -> 0x00237BB8
*/
// Range: 0x237BB0 -> 0x237BB8
void ScenePrepare() {
    /* anonymous block */ {
        // Range: 0x237BB0 -> 0x237BB8
    }
}


