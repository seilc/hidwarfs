/*
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zWallePlayerActions.cpp
*/
class zProjectileController gCubeProjectileParamsHeavy; // size: 0x40, address: 0x807FD818
class zProjectileController gCubeProjectileParamsHavokHeavy; // size: 0x40, address: 0x807FD858
class zProjectileController gCubeProjectileLaunchDataHeavy; // size: 0x40, address: 0x807FD898
class zProjectileController gCubeProjectileParamsMagnetic; // size: 0x40, address: 0x807FD8D8
class zProjectileController gCubeProjectileParamsHavokMagnetic; // size: 0x40, address: 0x807FD918
class zProjectileController gCubeProjectileLaunchDataMagnetic; // size: 0x40, address: 0x807FD958
class zProjectileController gCubeProjectileParamsBattery; // size: 0x40, address: 0x807FD998
class zProjectileController gCubeProjectileParamsHavokBattery; // size: 0x40, address: 0x807FD9D8
class zProjectileController gCubeProjectileLaunchDataBattery; // size: 0x40, address: 0x807FDA18
class zProjectileController gCubeProjectileParamsBasic; // size: 0x40, address: 0x807FDA58
class zProjectileController gCubeProjectileParamsHavokBasic; // size: 0x40, address: 0x807FDA98
class zProjectileController gCubeProjectileLaunchDataBasic; // size: 0x40, address: 0x807FDAD8
float MAX_HEIGHT; // size: 0x4, address: 0x80704DAC
float MAX_HEIGHT_FULL_STICK; // size: 0x4, address: 0x80704DB0
float GAS_TANK; // size: 0x4, address: 0x80704DB4
float THRUST; // size: 0x4, address: 0x80704DB8
float XZ_VELOCITY; // size: 0x4, address: 0x80704DBC
float XZ_BURN_RATE; // size: 0x4, address: 0x80704DC0
float STORKJUMP_GRAVITY; // size: 0x4, address: 0x80704DC4
float HOP_GRAVITY; // size: 0x4, address: 0x80704DC8
float INIT_HOP_VEL; // size: 0x4, address: 0x80704DCC
float LIFT_OFF_THRESHOLD; // size: 0x4, address: 0x80704DD0
float LAND_HARD_VEL_THRESHOLD; // size: 0x4, address: 0x80704DD4
float BEGIN_THRUST_BURN_SCALE; // size: 0x4, address: 0x80704DD8
float START_THRUST_DELAY; // size: 0x4, address: 0x80704DDC
float EXIT_SURFACE_ANGLE; // size: 0x4, address: 0x80704DE0
bool BRAKE_ON; // size: 0x1, address: 0x80704DE4
float MAX_TIME; // size: 0x4, address: 0x80704DE8
float MAX_STUCK_TIME; // size: 0x4, address: 0x80704DEC
float STUCK_VEL_THRESHOLD; // size: 0x4, address: 0x80704DF0
float PITCH_BLEND_SPEED; // size: 0x4, address: 0x80704DF4
// Range: 0x802129F0 -> 0x80213850
void zWallePlayerIdle::AddStates(class zWallePlayerIdle * this /* r20 */, class xAnimTable * table /* r21 */) {
}
// Range: 0x80213850 -> 0x80213984
void zWallePlayerIdle::AddActionTransitions(class zWallePlayerIdle * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x80213990 -> 0x80213B90
void zWallePlayerIdle::AddTransitionsFrom(class xAnimTable * table /* r22 */, char * fromStates /* r23 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r24 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r25 */, unsigned short priority /* r26 */, float blend /* f31 */, unsigned int flags /* r27 */, unsigned int userFlags /* r28 */, enum SpecialActions specialAction /* r0 */) {
}
// Range: 0x802140B0 -> 0x80214824
void zWallePlayerIdle::AddInternalTransitions(class xAnimTable * table /* r23 */) {
}
// Range: 0x80214A50 -> 0x80214BCC
void zWallePlayerIdle::Reset(class zWallePlayerIdle * this /* r29 */) {
    // Local variables
    int i; // r30
    int j; // r5

    {
        // Range: 0x80214AC4 -> 0x80214B9C
        // Local variables
        unsigned int choice; // r7
    }
}
// signature: zWallePlayerIdle::ExtraIdleCB(xAnimTransition *, xAnimSingle *)
// Range: 0x80214BD0 -> 0x80214D40
unsigned int zWallePlayerIdle::ExtraIdleCB(class zWallePlayerIdle * this /* r30 */) {
    // Local variables
    class ExtraIdleTableEntry * variantGroup; // r31

    {
        // Range: 0x80214C00 -> 0x80214CA4
        // Local variables
        unsigned int choice; // r6

        {
            // Range: 0x80214C30 -> 0x80214C94
            // Local variables
            int i; // r7
        }
    }
    {
        // Range: 0x80214CA4 -> 0x80214D0C
        // Local variables
        unsigned int choice; // r6

        {
            // Range: 0x80214CBC -> 0x80214CFC
            // Local variables
            int i; // r7
        }
    }
}
// Range: 0x80214D40 -> 0x80214D7C
void zWallePlayerIdle::Begin(class zWallePlayerIdle * this /* r31 */) {
}
// signature: zWallePlayerIdle::Update(float)
// Range: 0x80214D80 -> 0x80214DC0
void zWallePlayerIdle::Update(class zWallePlayerIdle * this /* r31 */) {
    // Local variables
    class zWallePlayer * wallePlayer; // r3
}
// Range: 0x80214DC0 -> 0x80214EB8
void zWallePlayerIdle::Move(class zWallePlayerIdle * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
    // References
    // -> class zViewport viewports[4];
}
// Range: 0x80214EC0 -> 0x80214EC4
void zWallePlayerIdle::Setup() {
}
// Range: 0x80214ED0 -> 0x80214F20
void zWallePlayerSkidStop::AddActionTransitions(class zWallePlayerSkidStop * this /* r30 */, class xAnimTable * table /* r31 */) {
}
// Range: 0x80214F20 -> 0x80214F70
void zWallePlayerSlip::AddActionTransitions(class zWallePlayerSlip * this /* r30 */, class xAnimTable * table /* r31 */) {
}
// Range: 0x80214F70 -> 0x80215078
void zWallePlayerWalk::AddStates(class zWallePlayerWalk * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80215080 -> 0x80215310
void zWallePlayerWalk::AddActionTransitions(class zWallePlayerWalk * this /* r28 */, class xAnimTable * table /* r29 */) {
    // Local variables
    class zPlayerDefeated * defeated; // r0
}
// Range: 0x80215390 -> 0x8021548C
void zWallePlayerWalk::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */, enum SpecialActions specialAction /* r0 */) {
}
// Range: 0x80215790 -> 0x8021590C
void zWallePlayerWalk::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x80215910 -> 0x80215914
void zWallePlayerWalk::Setup() {
}
// Range: 0x80215920 -> 0x80215A18
void zWallePlayerWalk::Move(class zWallePlayerWalk * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
    // References
    // -> class zViewport viewports[4];
}
// signature: zWallePlayerWalk::Update(float)
// Range: 0x80215A20 -> 0x80215A54
void zWallePlayerWalk::Update(class zWallePlayerWalk * this /* r31 */) {
}
// Range: 0x80215A60 -> 0x80215B2C
void zWallePlayerRun::AddStates(class zWallePlayerRun * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80215B30 -> 0x80215C3C
void zWallePlayerRun::AddActionTransitions(class zWallePlayerRun * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x80215C40 -> 0x80215D08
void zWallePlayerRun::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */, enum SpecialActions specialAction /* r0 */) {
}
// signature: zWallePlayerRun::AddInternalTransitions(xAnimTable *)
// Range: 0x80215EC0 -> 0x80215EC4
void zWallePlayerRun::AddInternalTransitions() {
}
// signature: zWallePlayerRun::Update(float)
// Range: 0x80215ED0 -> 0x80215F04
void zWallePlayerRun::Update(class zWallePlayerRun * this /* r31 */) {
}
// Range: 0x80215F10 -> 0x80215F7C
void zWallePlayerJump::AddActionTransitions(class zWallePlayerJump * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x80215F80 -> 0x80216134
void zWallePlayerFall::AddStates(class zWallePlayerFall * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x80216140 -> 0x802161EC
void zWallePlayerFall::AddActionTransitions(class zWallePlayerFall * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x802161F0 -> 0x80216334
void zWallePlayerFall::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */, enum SpecialActions specialAction /* r31 */) {
}
// Range: 0x802164A0 -> 0x802165E8
void zWallePlayerFall::AddInternalTransitions(class xAnimTable * table /* r24 */) {
}
// Range: 0x80216650 -> 0x8021680C
void zWallePlayerLand::AddStates(class zWallePlayerLand * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80216810 -> 0x80216980
void zWallePlayerLand::AddActionTransitions(class zWallePlayerLand * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// Range: 0x80216980 -> 0x80216B84
void zWallePlayerLand::AddTransitionsFrom(class xAnimTable * table /* r23 */, char * fromStates /* r24 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r25 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned short priority /* r26 */, float blend /* f31 */, unsigned int flags /* r27 */, unsigned int userFlags /* r28 */, enum SpecialActions specialAction /* r29 */) {
}
// Range: 0x80216EF0 -> 0x80216F70
void zWallePlayerLand::AddInternalTransitions(class xAnimTable * table /* r31 */) {
}
// Range: 0x80216F70 -> 0x80217004
void zWallePlayerWalkStart::AddActionTransitions(class zWallePlayerWalkStart * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x80217010 -> 0x802171CC
void zWallePlayerDash::AddStates(class zWallePlayerDash * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x802171D0 -> 0x802172AC
void zWallePlayerDash::AddActionTransitions(class zWallePlayerDash * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x802172B0 -> 0x80217378
void zWallePlayerDash::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */, enum SpecialActions specialAction /* r0 */) {
}
// Range: 0x802174E0 -> 0x80217620
void zWallePlayerDash::AddInternalTransitions(class xAnimTable * table /* r25 */) {
}
// Range: 0x80217620 -> 0x80217624
void zWallePlayerDash::Begin() {
}
// Range: 0x80217630 -> 0x802178D8
void zWallePlayerHitLaunch::AddStates(class zWallePlayerHitLaunch * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x802178E0 -> 0x80217990
void zWallePlayerHitLaunch::AddActionTransitions(class zWallePlayerHitLaunch * this /* r30 */, class xAnimTable * table /* r29 */) {
    // Local variables
    class zPlayerDefeated * defeated; // r30
}
// Range: 0x80217990 -> 0x80217A14
void zWallePlayerHitLaunch::AddStandardTransitionsFrom(class zWallePlayerHitLaunch * this /* r29 */, class xAnimTable * table /* r30 */, char * fromStates /* r31 */) {
}
// Range: 0x80217A20 -> 0x80217AE4
void zWallePlayerHitLaunch::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r30 */, float blend /* f31 */, unsigned int flags /* r28 */, unsigned int userFlags /* r29 */, enum SpecialActions specialAction /* r0 */) {
}
// Range: 0x80217C50 -> 0x80217F88
void zWallePlayerHitLaunch::AddInternalTransitions(class xAnimTable * table /* r25 */) {
}
// Range: 0x80217F90 -> 0x80217FE0
void zWallePlayerHitLaunch::Begin() {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x80217FE0 -> 0x80218110
void zWallePlayerShootGun::AddStates(class zWallePlayerShootGun * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x80218110 -> 0x8021825C
void zWallePlayerShootGun::AddInternalTransitions(class xAnimTable * table /* r25 */) {
}
// signature: zWallePlayerShootGun::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x802186D0 -> 0x802187E0
void zWallePlayerShootGun::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// signature: zWallePlayerShootGun::AddStandardTransitionsFrom(xAnimTable *, const char *)
// Range: 0x802187E0 -> 0x80218830
void zWallePlayerShootGun::AddStandardTransitionsFrom() {
}
// Range: 0x80218830 -> 0x80218954
void zWallePlayerShootGun::AddActionTransitions(class zWallePlayerShootGun * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// Range: 0x80218960 -> 0x80218964
void zWallePlayerShootGun::Setup() {
}
// Range: 0x80218970 -> 0x80218978
void zWallePlayerShootGun::Begin() {
}
// Range: 0x80218980 -> 0x80218984
void zWallePlayerShootGun::End() {
}
// signature: zWallePlayerShootGun::Update(float)
// Range: 0x80218990 -> 0x80218994
void zWallePlayerShootGun::Update() {
}
// Range: 0x802189A0 -> 0x80218AC0
void zWallePlayerShootGun::Move(class zWallePlayerShootGun * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
    // References
    // -> class zViewport viewports[4];
}
// signature: zWallePlayerShootGun::StartCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80218AC0 -> 0x80218CF4
unsigned int zWallePlayerShootGun::StartCheck(class zWallePlayerShootGun * this /* r30 */) {
    // Local variables
    class zWallePlayer * wPlayer; // r31

    {
        // Range: 0x80218AE4 -> 0x80218C34
        // Local variables
        unsigned int buttonPressed; // r29
        unsigned int buttonHeld; // r0
    }
    {
        // Range: 0x80218C34 -> 0x80218CD4
        // Local variables
        unsigned int buttonPressed; // r28
    }
}
// Range: 0x80218D00 -> 0x80218E30
void zWallePlayerThrowCube::AddStates(class zWallePlayerThrowCube * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zWallePlayerThrowCube::AddInternalTransitions(xAnimTable *)
// Range: 0x80218E30 -> 0x80218E34
void zWallePlayerThrowCube::AddInternalTransitions() {
}
// signature: zWallePlayerThrowCube::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80218E40 -> 0x80218F50
void zWallePlayerThrowCube::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// signature: zWallePlayerThrowCube::AddStandardTransitionsFrom(xAnimTable *, const char *)
// Range: 0x80219290 -> 0x802192E0
void zWallePlayerThrowCube::AddStandardTransitionsFrom() {
}
// Range: 0x802192E0 -> 0x80219388
void zWallePlayerThrowCube::AddActionTransitions(class zWallePlayerThrowCube * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x80219390 -> 0x80219410
void zWallePlayerThrowCube::Begin(class zWallePlayerThrowCube * this /* r30 */) {
    // Local variables
    class zWallePlayer * wPlayer; // r31
}
// Range: 0x80219410 -> 0x80219454
void zWallePlayerThrowCube::End() {
    // Local variables
    class zWallePlayer * wPlayer; // r31
}
// signature: zWallePlayerThrowCube::Update(float)
// Range: 0x80219460 -> 0x802194DC
void zWallePlayerThrowCube::Update(class zWallePlayerThrowCube * this /* r30 */) {
    {
        // Range: 0x8021947C -> 0x802194C4
        // Local variables
        class zWallePlayer * wPlayer; // r0
    }
}
// Range: 0x802194E0 -> 0x80219598
void zWallePlayerSwitchCube::AddStates(class zWallePlayerSwitchCube * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zWallePlayerSwitchCube::AddInternalTransitions(xAnimTable *)
// Range: 0x802195A0 -> 0x802195A4
void zWallePlayerSwitchCube::AddInternalTransitions() {
}
// signature: zWallePlayerSwitchCube::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x802195B0 -> 0x80219660
void zWallePlayerSwitchCube::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// signature: zWallePlayerSwitchCube::AddStandardTransitionsFrom(xAnimTable *, const char *)
// Range: 0x80219820 -> 0x80219870
void zWallePlayerSwitchCube::AddStandardTransitionsFrom() {
}
// Range: 0x80219870 -> 0x80219918
void zWallePlayerSwitchCube::AddActionTransitions(class zWallePlayerSwitchCube * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x80219920 -> 0x80219930
void zWallePlayerSwitchCube::Begin() {
}
// Range: 0x80219930 -> 0x8021993C
void zWallePlayerSwitchCube::End() {
}
// Range: 0x80219940 -> 0x80219A1C
void zWallePlayerSwitchCube::Move(class zWallePlayerSwitchCube * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
    // References
    // -> class zViewport viewports[4];
}
// Range: 0x80219A20 -> 0x80219B50
void zWallePlayerZeroPointHit::AddStates(class zWallePlayerZeroPointHit * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x80219B50 -> 0x80219BBC
void zWallePlayerZeroPointHit::AddActionTransitions(class zWallePlayerZeroPointHit * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zWallePlayerZeroPointHit::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80219BC0 -> 0x80219CD4
void zWallePlayerZeroPointHit::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r30 */, float blend /* f31 */, unsigned int flags /* r28 */, unsigned int userFlags /* r29 */) {
}
// signature: zWallePlayerZeroPointHit::AddInternalTransitions(xAnimTable *)
// Range: 0x80219FC0 -> 0x80219FC4
void zWallePlayerZeroPointHit::AddInternalTransitions() {
}
// Range: 0x80219FD0 -> 0x8021A100
void zWallePlayerZeroPointLaunch::AddStates(class zWallePlayerZeroPointLaunch * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x8021A100 -> 0x8021A16C
void zWallePlayerZeroPointLaunch::AddActionTransitions(class zWallePlayerZeroPointLaunch * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zWallePlayerZeroPointLaunch::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8021A170 -> 0x8021A284
void zWallePlayerZeroPointLaunch::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r30 */, float blend /* f31 */, unsigned int flags /* r28 */, unsigned int userFlags /* r29 */) {
}
// signature: zWallePlayerZeroPointLaunch::AddInternalTransitions(xAnimTable *)
// Range: 0x8021A590 -> 0x8021A594
void zWallePlayerZeroPointLaunch::AddInternalTransitions() {
}
// Range: 0x8021A5A0 -> 0x8021A5B4
void zWallePlayerZeroPointLaunch::End() {
}
// Range: 0x8021A5C0 -> 0x8021A6F0
void zWallePlayerZeroPointLand::AddStates(class zWallePlayerZeroPointLand * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x8021A6F0 -> 0x8021A770
void zWallePlayerZeroPointLand::AddActionTransitions(class zWallePlayerZeroPointLand * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zWallePlayerZeroPointLand::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8021A770 -> 0x8021A884
void zWallePlayerZeroPointLand::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r30 */, float blend /* f31 */, unsigned int flags /* r28 */, unsigned int userFlags /* r29 */) {
}
// signature: zWallePlayerZeroPointLand::AddInternalTransitions(xAnimTable *)
// Range: 0x8021AB90 -> 0x8021AB94
void zWallePlayerZeroPointLand::AddInternalTransitions() {
}
// Range: 0x8021ABA0 -> 0x8021AEEC
void zWallePlayerIntoCube::AddStates(class zWallePlayerIntoCube * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x8021AEF0 -> 0x8021B278
void zWallePlayerIntoCube::AddInternalTransitions(class xAnimTable * table /* r24 */) {
}
// Range: 0x8021BCC0 -> 0x8021BE2C
void zWallePlayerIntoCube::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */, enum SpecialActions specialAction /* r0 */) {
}
// Range: 0x8021C370 -> 0x8021C478
void zWallePlayerIntoCube::AddActionTransitions(class zWallePlayerIntoCube * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zWallePlayerIntoCube::AddStorkedTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *))
// Range: 0x8021C4F0 -> 0x8021C548
void zWallePlayerIntoCube::AddStorkedTransitionsFrom() {
}
// signature: zWallePlayerIntoCube::AddStandardTransitionsFrom(xAnimTable *, const char *)
// Range: 0x8021C550 -> 0x8021C5A0
void zWallePlayerIntoCube::AddStandardTransitionsFrom() {
}
// Range: 0x8021C5A0 -> 0x8021C5B0
void zWallePlayerIntoCube::Setup() {
}
// Range: 0x8021C5B0 -> 0x8021C5B4
void zWallePlayerIntoCube::AddTweaks() {
}
// Range: 0x8021C5C0 -> 0x8021C7F0
void zWallePlayerIntoCube::Begin(class zWallePlayerIntoCube * this /* r31 */) {
    // References
    // -> float hkInfinity;
}
// Range: 0x8021C7F0 -> 0x8021CA04
void zWallePlayerIntoCube::Update(class zWallePlayerIntoCube * this /* r31 */, float dt /* f31 */) {
    // References
    // -> class zViewport viewports[4];
    // -> class xVec3 m_Null;
}
// Range: 0x8021CA10 -> 0x8021CA14
void zWallePlayerIntoCube::End() {
}
// Range: 0x8021CA20 -> 0x8021CD34
void zWallePlayerCompactTrash::AddStates(class zWallePlayerCompactTrash * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x8021CD40 -> 0x8021CF68
void zWallePlayerCompactTrash::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// signature: zWallePlayerCompactTrash::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8021CF90 -> 0x8021D0A0
void zWallePlayerCompactTrash::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// Range: 0x8021D5E0 -> 0x8021D6F0
void zWallePlayerCompactTrash::AddActionTransitions(class zWallePlayerCompactTrash * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zWallePlayerCompactTrash::AddStandardTransitionsFrom(xAnimTable *, const char *)
// Range: 0x8021D6F0 -> 0x8021D740
void zWallePlayerCompactTrash::AddStandardTransitionsFrom() {
}
// signature: zWallePlayerCompactTrash::LiftCubeCB(xAnimTransition *, xAnimSingle *)
// Range: 0x8021D740 -> 0x8021D884
unsigned int zWallePlayerCompactTrash::LiftCubeCB() {
    // Local variables
    class zWallePlayer * wPlayer; // r31
    enum eProjectileType projectileType; // r30
}
// Range: 0x8021D890 -> 0x8021D9C8
void zWallePlayerCompactTrash::Begin(class zWallePlayerCompactTrash * this /* r30 */) {
    // Local variables
    class zWallePlayer * wPlayer; // r31
}
// Range: 0x8021D9D0 -> 0x8021DA14
void zWallePlayerCompactTrash::End(class zWallePlayerCompactTrash * this /* r31 */) {
}
// signature: zWallePlayerCompactTrash::Update(float)
// Range: 0x8021DA20 -> 0x8021DA34
void zWallePlayerCompactTrash::Update() {
}
// signature: zWallePlayerReverse::AddStates(xAnimTable *)
// Range: 0x8021DA40 -> 0x8021DAAC
void zWallePlayerReverse::AddStates() {
}
// signature: zWallePlayerReverse::AddInternalTransitions(xAnimTable *)
// Range: 0x8021DAB0 -> 0x8021DAB4
void zWallePlayerReverse::AddInternalTransitions() {
}
// Range: 0x8021DAC0 -> 0x8021DBD0
void zWallePlayerReverse::AddActionTransitions(class zWallePlayerReverse * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zWallePlayerReverse::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8021DBD0 -> 0x8021DC40
void zWallePlayerReverse::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// signature: zWallePlayerReverse::Update(float)
// Range: 0x8021DCD0 -> 0x8021DCE4
void zWallePlayerReverse::Update() {
}
// Range: 0x8021DCF0 -> 0x8021DD00
void zWallePlayerReverse::End() {
}
// Range: 0x8021DD00 -> 0x8021DEA8
void zWallePlayerStorkJump::AddStates(class zWallePlayerStorkJump * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x8021DEB0 -> 0x8021DFAC
void zWallePlayerStorkJump::AddActionTransitions(class zWallePlayerStorkJump * this /* r28 */, class xAnimTable * table /* r29 */) {
}
// signature: zWallePlayerStorkJump::AddStandardTransitionsFrom(xAnimTable *, const char *)
// Range: 0x8021E010 -> 0x8021E060
void zWallePlayerStorkJump::AddStandardTransitionsFrom() {
}
// Range: 0x8021E060 -> 0x8021E23C
void zWallePlayerStorkJump::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// signature: zWallePlayerStorkJump::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8021E790 -> 0x8021E800
void zWallePlayerStorkJump::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// signature: zWallePlayerStorkJump::Update(float)
// Range: 0x8021E990 -> 0x8021E9A0
void zWallePlayerStorkJump::Update() {
}
// Range: 0x8021E9A0 -> 0x8021EDFC
void zWallePlayerStorkJump::Move(class zWallePlayerStorkJump * this /* r25 */, class xScene * s /* r26 */, float dt /* f30 */, class xEntFrame * frame /* r27 */) {
    // Local variables
    class zWallePlayer * wplayer; // r28
    class xVec3 accel; // r1+0x8
    float gravity; // f2

    {
        // Range: 0x8021EAD4 -> 0x8021EC94
        // Local variables
        float reachable; // f3
        float height; // f5
        float burned; // f0
        float burnRate; // f0
        float gas; // f29
        float stickMag; // f0

        {
            // Range: 0x8021EB4C -> 0x8021EB78
            // Local variables
            float burnAmt; // f0
        }
    }
    {
        // Range: 0x8021ED30 -> 0x8021EDB8
        // Local variables
        float blendDiff; // f3
        float pitchLerpDest; // f0
        float * pitchLerp; // r0
    }

    // References
    // -> float PITCH_BLEND_SPEED;
    // -> float HOP_GRAVITY;
    // -> float STUCK_VEL_THRESHOLD;
    // -> float THRUST;
    // -> float STORKJUMP_GRAVITY;
    // -> float XZ_BURN_RATE;
    // -> float BEGIN_THRUST_BURN_SCALE;
    // -> bool BRAKE_ON;
    // -> float MAX_HEIGHT_FULL_STICK;
    // -> float MAX_HEIGHT;
    // -> float START_THRUST_DELAY;
    // -> float LIFT_OFF_THRESHOLD;
    // -> float INIT_HOP_VEL;
}
// Range: 0x8021EE00 -> 0x8021EE10
void zWallePlayerStorkJump::Setup() {
}
// Range: 0x8021EE10 -> 0x8021EF38
void zWallePlayerStorkJump::Begin(class zWallePlayerStorkJump * this /* r31 */) {
    // References
    // -> float MAX_HEIGHT;
    // -> class xVec3 m_Null;
}
// Range: 0x8021EF40 -> 0x8021EFC4
void zWallePlayerStorkJump::End(class zWallePlayerStorkJump * this /* r31 */) {
}
// Range: 0x8021EFD0 -> 0x8021EFDC
float zWallePlayerStorkJump::GetXZVelocity() {
    // References
    // -> float XZ_VELOCITY;
}
// Range: 0x8021EFE0 -> 0x8021EFEC
float zWallePlayerStorkJump::GetGasTankSize() {
    // References
    // -> float GAS_TANK;
}
// Range: 0x8021EFF0 -> 0x8021F0B4
void zWallePlayerDefeated::AddStates(class zWallePlayerDefeated * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zWallePlayerDefeated::AddInternalTransitions(xAnimTable *)
// Range: 0x8021F0C0 -> 0x8021F0C4
void zWallePlayerDefeated::AddInternalTransitions() {
}
// Range: 0x8021F0D0 -> 0x8021F190
void zWallePlayerDefeated::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */, enum SpecialActions specialAction /* r0 */) {
}
// signature: zWallePlayerDefeated::AddActionTransitions(xAnimTable *)
// Range: 0x8021F310 -> 0x8021F314
void zWallePlayerDefeated::AddActionTransitions() {
}
// Range: 0x8021F320 -> 0x8021F3B8
void zWallePlayerDefeated::Begin(class zWallePlayerDefeated * this /* r30 */) {
    // Local variables
    class zWallePlayer * wPlayer; // r31

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x8021F3C0 -> 0x8021F490
void zWallePlayerDefeated::Update(class zWallePlayerDefeated * this /* r30 */, float dt /* f31 */) {
    // Local variables
    class xAnimSingle * single; // r31
    float fadeTime; // f0

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8021F490 -> 0x8021F554
void zWallePlayerContextSwitchLever::AddStates(class zWallePlayerContextSwitchLever * this /* r24 */, class xAnimTable * table /* r25 */) {
}
// Range: 0x8021F560 -> 0x8021F604
void zWallePlayerContextSwitchLever::AddActionTransitions(class zWallePlayerContextSwitchLever * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zWallePlayerContextSwitchLever::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8021F610 -> 0x8021F6C0
void zWallePlayerContextSwitchLever::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// signature: zWallePlayerContextSwitchLever::Update(float)
// Range: 0x8021F7C0 -> 0x8021F7D4
void zWallePlayerContextSwitchLever::Update() {
}
// Range: 0x8021F7E0 -> 0x8021F850
void zWallePlayerContextSwitchLever::Begin(class zWallePlayerContextSwitchLever * this /* r31 */) {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x8021F850 -> 0x8021F950
void zWallePlayerContextFixVendingMachine::AddStates(class zWallePlayerContextFixVendingMachine * this /* r24 */, class xAnimTable * table /* r25 */) {
}
// Range: 0x8021F950 -> 0x8021F9F4
void zWallePlayerContextFixVendingMachine::AddActionTransitions(class zWallePlayerContextFixVendingMachine * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zWallePlayerContextFixVendingMachine::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8021FA00 -> 0x8021FAE8
void zWallePlayerContextFixVendingMachine::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// signature: zWallePlayerContextFixVendingMachine::Update(float)
// Range: 0x8021FCA0 -> 0x8021FCB4
void zWallePlayerContextFixVendingMachine::Update() {
}
// Range: 0x8021FCC0 -> 0x8021FCD0
void zWallePlayerContextFixVendingMachine::Begin() {
}
// signature: zWallePlayerContextOverHeadGrab::AddStates(xAnimTable *)
// Range: 0x8021FCD0 -> 0x8021FD3C
void zWallePlayerContextOverHeadGrab::AddStates() {
}
// signature: zWallePlayerContextOverHeadGrab::AddInternalTransitions(xAnimTable *)
// Range: 0x8021FD40 -> 0x8021FD44
void zWallePlayerContextOverHeadGrab::AddInternalTransitions() {
}
// Range: 0x8021FD50 -> 0x8021FDF8
void zWallePlayerContextOverHeadGrab::AddActionTransitions(class zWallePlayerContextOverHeadGrab * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zWallePlayerContextOverHeadGrab::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8021FE00 -> 0x8021FE70
void zWallePlayerContextOverHeadGrab::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// signature: zWallePlayerContextOverHeadGrab::Update(float)
// Range: 0x8021FEF0 -> 0x8021FF04
void zWallePlayerContextOverHeadGrab::Update() {
}
// Range: 0x8021FF10 -> 0x8021FF80
void zWallePlayerContextOverHeadGrab::Begin(class zWallePlayerContextOverHeadGrab * this /* r31 */) {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x8021FF80 -> 0x80220040
void zWallePlayerContextPickUpCube::AddStates(class zWallePlayerContextPickUpCube * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// signature: zWallePlayerContextPickUpCube::AddInternalTransitions(xAnimTable *)
// Range: 0x80220040 -> 0x80220044
void zWallePlayerContextPickUpCube::AddInternalTransitions() {
}
// Range: 0x80220050 -> 0x802200F8
void zWallePlayerContextPickUpCube::AddActionTransitions(class zWallePlayerContextPickUpCube * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zWallePlayerContextPickUpCube::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80220100 -> 0x802201B4
void zWallePlayerContextPickUpCube::AddTransitionsFrom(class xAnimTable * table /* r23 */, char * fromStates /* r24 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r25 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned short priority /* r27 */, unsigned int flags /* r28 */, unsigned int userFlags /* r29 */) {
}
// signature: zWallePlayerContextPickUpCube::AddStandardTransitionsFrom(xAnimTable *, const char *)
// Range: 0x80220340 -> 0x80220390
void zWallePlayerContextPickUpCube::AddStandardTransitionsFrom() {
}
// signature: zWallePlayerContextPickUpCube::Update(float)
// Range: 0x80220390 -> 0x802203A4
void zWallePlayerContextPickUpCube::Update() {
}
// Range: 0x802203B0 -> 0x802203BC
void zWallePlayerContextPickUpCube::End() {
}
// Range: 0x802203C0 -> 0x802203C4
void zWallePlayerContextPickUpCube::Begin() {
}
// Range: 0x802203D0 -> 0x80220578
void zWallePlayerRegenerate::AddStates(class zWallePlayerRegenerate * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x80220580 -> 0x8022072C
void zWallePlayerRegenerate::AddActionTransitions(class zWallePlayerRegenerate * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x80220730 -> 0x80220870
void zWallePlayerRegenerate::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// signature: zWallePlayerRegenerate::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80220950 -> 0x80220A08
void zWallePlayerRegenerate::AddTransitionsFrom(class xAnimTable * table /* r23 */, char * fromStates /* r24 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r25 */, unsigned short priority /* r26 */, unsigned int flags /* r27 */, unsigned int userFlags /* r28 */) {
}
// Range: 0x80220C80 -> 0x80220E34
void zWallePlayerMGLose::AddStates(class zWallePlayerMGLose * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x80220E40 -> 0x80220F40
void zWallePlayerMGLose::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// signature: zWallePlayerMGLose::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80220F40 -> 0x80221054
void zWallePlayerMGLose::AddTransitionsFrom(class xAnimTable * table /* r23 */, char * fromStates /* r24 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r25 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned short priority /* r27 */, unsigned int flags /* r28 */, unsigned int userFlags /* r29 */) {
}
// signature: zWallePlayerMGLose::Timestep(float)
// Range: 0x802212A0 -> 0x802212D4
void zWallePlayerMGLose::Timestep(class zWallePlayerMGLose * this /* r31 */) {
}
// Range: 0x802212E0 -> 0x80221330
void zWallePlayerCheat::Begin(class zWallePlayerCheat * this /* r31 */) {
    // References
    // -> class xVec3 m_UnitAxisY;
}
