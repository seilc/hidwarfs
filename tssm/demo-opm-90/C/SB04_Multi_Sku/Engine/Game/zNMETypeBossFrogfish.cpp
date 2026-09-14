/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossFrogfish.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002561C0 -> 0x002561CC
*/
// Range: 0x2561C0 -> 0x2561CC
void RenderHud() {
    /* anonymous block */ {
        // Range: 0x2561C0 -> 0x2561CC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossFrogfish.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002561D0 -> 0x002564DC
*/
// Range: 0x2561D0 -> 0x2564DC
// this: r17
void zNMEFrogfish::OneLinersUpdate(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2561D0 -> 0x2564DC
        enum eFFOneLiner commentToPlay; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossFrogfish.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002564E0 -> 0x002564F0
*/
// Range: 0x2564E0 -> 0x2564F0
// this: r2
signed int zNMEFrogfish::IsAlive() {
    /* anonymous block */ {
        // Range: 0x2564E0 -> 0x2564F0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossFrogfish.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002564F0 -> 0x002567DC
*/
// Range: 0x2564F0 -> 0x2567DC
// this: r17
signed int zNMEFrogfish::EvalJump(float dt /* r20 */, float duration /* r29+0xE0 */, unsigned char setOrient /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2564F0 -> 0x2567DC
        signed int arrived; // r16
        float mag; // r29+0xE0
        class xVec3 pos; // r29+0xD0
        class xVec3 vel; // r29+0xC0
        class xMat3x3 mat_rot; // r29+0x40
        class xVec3 dir; // r29+0xB0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossFrogfish.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002567E0 -> 0x00256950
*/
// Range: 0x2567E0 -> 0x256950
// this: r16
void zNMEFrogfish::CalcJump(enum eFFBossLocation loc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2567E0 -> 0x256950
        float gravity; // r21
        float duration; // r20
        class xVec3 pos_dest; // r29+0x60
        class xVec3 vel; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossFrogfish.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00256950 -> 0x00256A58
*/
// Range: 0x256950 -> 0x256A58
// this: r2
void zNMEFrogfish::AttackIncrement() {
    /* anonymous block */ {
        // Range: 0x256950 -> 0x256A58
        signed int oldAttack; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossFrogfish.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00256A60 -> 0x00256C28
*/
// Range: 0x256A60 -> 0x256C28
// this: r17
void zNMEFrogfish::StageIncrement() {
    /* anonymous block */ {
        // Range: 0x256A60 -> 0x256C28
        signed int oldAttack; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossFrogfish.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00256C30 -> 0x00256D34
*/
// Range: 0x256C30 -> 0x256D34
// this: r2
void zNMEFrogfish::SetTheStage(enum eFFBossStage stageToBe /* r2 */) {
    /* anonymous block */ {
        // Range: 0x256C30 -> 0x256D34
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossFrogfish.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00256D40 -> 0x00256EC0
*/
// Range: 0x256D40 -> 0x256EC0
// this: r17
signed int zNMEFrogfish::TypeHandleMail(class NMEMsg * mail /* r2 */) {
    /* anonymous block */ {
        // Range: 0x256D40 -> 0x256EC0
        signed int handled; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossFrogfish.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00256EC0 -> 0x00257360
*/
// Range: 0x256EC0 -> 0x257360
// this: r2
void zNMEFrogfish::CalcPos(class xVec3 * posDest /* r2 */, enum eFFBossLocation loc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x256EC0 -> 0x257360
        class xVec3 vCenter; // r29+0x110
        class xVec3 vCenterToEdge; // r29+0x100
        class xVec3 vCenter; // r29+0xF0
        class xVec3 vCenterToEdge; // r29+0xE0
        class xVec3 vCenter; // r29+0xD0
        class xVec3 vCenterToEdge; // r29+0xC0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossFrogfish.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00257360 -> 0x00257CA4
*/
// Range: 0x257360 -> 0x257CA4
class xAnimTable * CreateAnimTable(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x257360 -> 0x257CA4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossFrogfish.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00257CB0 -> 0x00258740
*/
// Range: 0x257CB0 -> 0x258740
// this: r16
void zNMEFrogfish::EnterState(enum eFFBossState newState /* r2 */) {
    /* anonymous block */ {
        // Range: 0x257CB0 -> 0x258740
        class xVec3 dirFFToCenter; // r29+0x120
        float deltaX; // r29+0x130
        float deltaZ; // r29+0x130
        float distPlayerFromCenterSq; // r29+0x130
        class xVec3 dirFFToPlayer; // r29+0x110
        float dy; // r29+0x12C
        class xVec3 chargeVel; // r29+0x100
        class xMat3x3 mat_rot; // r29+0x30
        float mag; // r29+0x130
        class xVec3 dir; // r29+0xF0
        class xVec3 newPos; // r29+0xE0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossFrogfish.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00258740 -> 0x002589C4
*/
// Range: 0x258740 -> 0x2589C4
// this: r16
void zNMEFrogfish::BUpdate() {
    /* anonymous block */ {
        // Range: 0x258740 -> 0x2589C4
        float radBound; // r3
        class xVec3 vecBoundShift; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossFrogfish.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002589D0 -> 0x0025C16C
*/
// Range: 0x2589D0 -> 0x25C16C
// this: r16
void zNMEFrogfish::Process(float dt /* r22 */) {
    /* anonymous block */ {
        // Range: 0x2589D0 -> 0x25C16C
        class xMat4x3 oldMat; // r29+0xB0
        float tym_animCurr; // r29+0x6E0
        float tym_animDur; // r29+0x6E0
        float tym_animPlusTime; // r21
        class xVec3 dirPlayer; // r29+0x6D0
        class xVec3 newPos; // r29+0x6C0
        class xVec3 newPos; // r29+0x6B0
        class xVec3 newPos; // r29+0x6A0
        class xVec3 pos_emit; // r29+0x690
        float deltaX; // r29+0x6E0
        float deltaZ; // r29+0x6E0
        float distFromCenterSq; // r29+0x6E0
        class xVec3 arenaCenter; // r29+0x680
        class xVec3 centerToFF; // r29+0x670
        class xVec3 centerToPlayer; // r29+0x660
        class xVec3 ffToPlayer; // r29+0x650
        float distPlayerFromCenterSq; // r29+0x6E0
        float stoppingRadiusSq; // r29+0x6E0
        class xVec3 newPos; // r29+0x640
        float absDeltaV; // r29+0x6E0
        float deltaX; // r29+0x6E0
        float deltaZ; // r29+0x6E0
        float distFromCenterSq; // r29+0x6E0
        class xVec3 newPos; // r29+0x630
        class xVec3 newPos; // r29+0x620
        class xVec3 newPos; // r29+0x610
        class xVec3 dirCenter; // r29+0x600
        float dy; // r29+0x6DC
        class xVec3 arenaCenter; // r29+0x5F0
        class xMat3x3 mat_rot; // r29+0x80
        class xVec3 newPos; // r29+0x5E0
        class xVec3 newPos; // r29+0x5D0
        class xVec3 newPos; // r29+0x5C0
        class xVec3 pos_emit; // r29+0x5B0
        float absDeltaV; // r29+0x6E0
        float deltaX; // r29+0x6E0
        float deltaZ; // r29+0x6E0
        class xVec3 newPos; // r29+0x5A0
        class xVec3 dirPlayer; // r29+0x590
        float qdot; // r29+0x6E0
        class xVec3 dirPlayer; // r29+0x580
        float qdot; // r29+0x6E0
        class xVec3 dirPlayer; // r29+0x570
        class xVec3 dirPlayer; // r29+0x560
        class xVec3 newPos; // r29+0x550
        class xVec3 pos_emit; // r29+0x540
        class xVec3 vel; // r29+0x530
        signed int jumpDone; // r2
        signed int jumpDone; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossFrogfish.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025C180 -> 0x0025CEC8
*/
// Range: 0x25C180 -> 0x25CEC8
// this: r16
void zNMEFrogfish::FeetFXUpdate(float dt /* r25 */) {
    /* anonymous block */ {
        // Range: 0x25C180 -> 0x25CEC8
        float tym_animCurr; // r29+0x1F0
        float tym_animDur; // r29+0x1F0
        float tym_animPlusTime; // r24
        unsigned char puffLeft; // r18
        unsigned char puffRight; // r17
        class xVec3 vel; // r29+0x1E0
        class xVec3 pos_emit; // r29+0x1D0
        class xVec3 dir_emit; // r29+0x1C0
        class xMat4x3 * mat_bone; // r2
        class xMat4x3 * mat_bone; // r2
        class xMat4x3 * mat_bone; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossFrogfish.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025CED0 -> 0x0025D0E0
*/
// Range: 0x25CED0 -> 0x25D0E0
// this: r16
void zNMEFrogfish::SoundInitAssetTable() {
    /* anonymous block */ {
        // Range: 0x25CED0 -> 0x25D0E0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossFrogfish.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025D0E0 -> 0x0025D844
*/
// Range: 0x25D0E0 -> 0x25D844
// this: r16
void zNMEFrogfish::UpdateCam(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x25D0E0 -> 0x25D844
        class zBossCam_Binary * gzBinaryCam'288; // r3
        class zBossCam_Binary theStaticBinaryCam; // @ 0x006681E0
        signed char @28501; // @ 0x006373F4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossFrogfish.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025D850 -> 0x0025DA30
*/
// Range: 0x25D850 -> 0x25DA30
// this: r16
void zNMEFrogfish::SetCamState(enum eFFBossCameraState newState /* r2 */) {
    /* anonymous block */ {
        // Range: 0x25D850 -> 0x25DA30
        class xVec3 tongueLoc; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossFrogfish.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025DA30 -> 0x0025DA84
*/
// Range: 0x25DA30 -> 0x25DA84
// this: r16
void zNMEFrogfish::Destroy() {
    /* anonymous block */ {
        // Range: 0x25DA30 -> 0x25DA84
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossFrogfish.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025DA90 -> 0x0025DDB0
*/
// Range: 0x25DA90 -> 0x25DDB0
// this: r16
void zNMEFrogfish::Reset() {
    /* anonymous block */ {
        // Range: 0x25DA90 -> 0x25DDB0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossFrogfish.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025DDB0 -> 0x0025E12C
*/
// Range: 0x25DDB0 -> 0x25E12C
// this: r16
void zNMEFrogfish::Setup() {
    /* anonymous block */ {
        // Range: 0x25DDB0 -> 0x25E12C
        signed int i; // r19
        class zNPCMgr * npcmgr; // r17
        char * nam_tongue; // r2
        class base * nb; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossFrogfish.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025E130 -> 0x0025E1E4
*/
// Range: 0x25E130 -> 0x25E1E4
// this: r16
void zNMEFrogfish::Init(class xEntAsset * asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x25E130 -> 0x25E1E4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossFrogfish.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025E1F0 -> 0x0025E1FC
*/
// Range: 0x25E1F0 -> 0x25E1FC
signed int DfltVulnFlags() {
    /* anonymous block */ {
        // Range: 0x25E1F0 -> 0x25E1FC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossFrogfish.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025E200 -> 0x0025E294
*/
// Range: 0x25E200 -> 0x25E294
// this: r16
void zNMEFrogfish::CreateConfig() {
    /* anonymous block */ {
        // Range: 0x25E200 -> 0x25E294
    }
}


