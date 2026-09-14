/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTongueSpin.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F6730 -> 0x001F6924
*/
// Range: 0x1F6730 -> 0x1F6924
// this: r19
signed int zNMETongueSpin::MakeIceCreamSplat(class xVec3 * splatPos /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1F6730 -> 0x1F6924
        class zNMEHazard * haz; // r17
        class HAZTypical * typical; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTongueSpin.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F6930 -> 0x001F6FE4
*/
// Range: 0x1F6930 -> 0x1F6FE4
// this: r17
void zNMETongueSpin::FXUpdate(float dt /* r22 */, float tym_animPlusTime /* r21 */, float tym_animDur /* r20 */, float tym_animCurr /* r23 */) {
    /* anonymous block */ {
        // Range: 0x1F6930 -> 0x1F6FE4
        class xSphere bubSphere; // r29+0x110
        class xMat4x3 * mat_root; // r2
        class xVec3 pos_head; // r29+0x160
        class xVec3 posEmit; // r29+0x150
        class xVec3 dirEmit; // r29+0x140
        class xVec3 decalScale; // r29+0x130
        class xMat4x3 gopherMat; // r29+0xD0
        class xRay3 ray; // r29+0xA0
        class xCollis coll; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTongueSpin.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F6FF0 -> 0x001F7240
*/
// Range: 0x1F6FF0 -> 0x1F7240
// this: r17
void zNMETongueSpin::RibbonLoop() {
    /* anonymous block */ {
        // Range: 0x1F6FF0 -> 0x1F7240
        class RibData * ribhelp; // r2
        class xVec3 pos1; // r29+0x70
        class xVec3 pos2; // r29+0x60
        class xMat4x3 * mat_root; // r2
        class xVec3 dir_emit; // r29+0x50
        float dst; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTongueSpin.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F7240 -> 0x001F7424
*/
// Range: 0x1F7240 -> 0x1F7424
// this: r16
void zNMETongueSpin::DoCapsuleTests() {
    /* anonymous block */ {
        // Range: 0x1F7240 -> 0x1F7424
        class xVec3 pos_head; // r29+0x100
        class xVec3 pos_hand; // r29+0xF0
        class xSweptSphere sws; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTongueSpin.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F7430 -> 0x001F7574
*/
// Range: 0x1F7430 -> 0x1F7574
// this: r18
signed int zNMETongueSpin::TongueSpinMailDamage(class NMEDamageInfo * dmgmail /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F7430 -> 0x1F7574
        signed int handled; // r17
        enum en_plyrpup pup; // r29+0x4C
        signed int amt_dmg; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTongueSpin.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F7580 -> 0x001F76B8
*/
// Range: 0x1F7580 -> 0x1F76B8
// this: r18
signed int zNMETongueSpin::TypeHandleMail(class NMEMsg * mail /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1F7580 -> 0x1F76B8
        signed int handled; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTongueSpin.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F76C0 -> 0x001F787C
*/
// Range: 0x1F76C0 -> 0x1F787C
// this: r16
signed int zNMETongueSpin::ColChk_Player() {
    /* anonymous block */ {
        // Range: 0x1F76C0 -> 0x1F787C
        class xVec3 pos_nme; // r29+0x60
        float upper; // r29+0x70
        class xVec3 pos_plyr; // r29+0x50
        class xVec3 vec_NtoB; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTongueSpin.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F7880 -> 0x001F7AB8
*/
// Range: 0x1F7880 -> 0x1F7AB8
// this: r16
signed int zNMETongueSpin::ColChk_PlayerJump() {
    /* anonymous block */ {
        // Range: 0x1F7880 -> 0x1F7AB8
        class xVec3 pos_nme; // r29+0x60
        class xVec3 pos_plyr; // r29+0x50
        class xVec3 vec_NtoB; // r29+0x40
        unsigned int anid_player; // r2
        signed int found; // r6
        signed int k; // r5
        signed char @47188; // @ 0x00637464
        unsigned int hashes_pa[6]; // @ 0x00668B70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTongueSpin.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F7AC0 -> 0x001F7BA8
*/
// Range: 0x1F7AC0 -> 0x1F7BA8
// this: r2
void zNMETongueSpin::KnockMeBack() {
    /* anonymous block */ {
        // Range: 0x1F7AC0 -> 0x1F7BA8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTongueSpin.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F7BB0 -> 0x001F7FBC
*/
// Range: 0x1F7BB0 -> 0x1F7FBC
// this: r2
unsigned char zNMETongueSpin::PickRandomPointInArena(class xVec3 * pos /* r17 */, unsigned char fNearPlayer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F7BB0 -> 0x1F7FBC
        class xVec3 center; // r29+0x100
        class xVec3 player; // r29+0xF0
        float radius; // r22
        class xVec3 plyrToFF; // r29+0xE0
        float deltax; // r29+0x110
        float deltaz; // r29+0x110
        float angle; // r20
        class xVec3 tongueToCenter; // r29+0xD0
        float angle; // r23
        class xVec3 dir; // r29+0xC0
        float dist; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTongueSpin.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F7FC0 -> 0x001F8790
*/
// Range: 0x1F7FC0 -> 0x1F8790
// this: r16
void zNMETongueSpin::EnterState(enum eTongueSpinState newState /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1F7FC0 -> 0x1F8790
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTongueSpin.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8790 -> 0x001F879C
*/
// Range: 0x1F8790 -> 0x1F879C
signed int DfltVulnFlags() {
    /* anonymous block */ {
        // Range: 0x1F8790 -> 0x1F879C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTongueSpin.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F87A0 -> 0x001F8A88
*/
// Range: 0x1F87A0 -> 0x1F8A88
// this: r16
void zNMETongueSpin::Reset() {
    /* anonymous block */ {
        // Range: 0x1F87A0 -> 0x1F8A88
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTongueSpin.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8AE0 -> 0x001F9988
*/
// Range: 0x1F8AE0 -> 0x1F9988
// this: r17
void zNMETongueSpin::Process(float dt /* r23 */) {
    /* anonymous block */ {
        // Range: 0x1F8AE0 -> 0x1F9988
        class xMat4x3 oldMat; // r29+0x80
        float tym_animCurr; // r29+0x1A0
        float tym_animDur; // r22
        float tym_animPlusTime; // r21
        class xVec3 targetPos; // r29+0x190
        class xVec3 newPos; // r29+0x180
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTongueSpin.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F9990 -> 0x001F9A64
*/
// Range: 0x1F9990 -> 0x1F9A64
// this: r16
void zNMETongueSpin::BUpdate(class xVec3 * pos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F9990 -> 0x1F9A64
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTongueSpin.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F9A70 -> 0x001F9D04
*/
// Range: 0x1F9A70 -> 0x1F9D04
// this: r17
void zNMETongueSpin::Setup() {
    /* anonymous block */ {
        // Range: 0x1F9A70 -> 0x1F9D04
        class zNPCMgr * npcmgr; // r16
        char * nam_bossman; // r2
        class base * nb; // r2
        signed int i; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTongueSpin.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F9D10 -> 0x001F9D54
*/
// Range: 0x1F9D10 -> 0x1F9D54
// this: r17
void zNMETongueSpin::Init(class xEntAsset * asset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1F9D10 -> 0x1F9D54
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTongueSpin.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F9D60 -> 0x001F9D68
*/
// Range: 0x1F9D60 -> 0x1F9D68
void SelfSetup() {
    /* anonymous block */ {
        // Range: 0x1F9D60 -> 0x1F9D68
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTongueSpin.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F9D70 -> 0x001F9DBC
*/
// Range: 0x1F9D70 -> 0x1F9DBC
class xAnimTable * CreateAnimTable(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1F9D70 -> 0x1F9DBC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeTongueSpin.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F9DC0 -> 0x001FA0F4
*/
// Range: 0x1F9DC0 -> 0x1FA0F4
void CreateTongueSpinAnimTable(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1F9DC0 -> 0x1FA0F4
    }
}


