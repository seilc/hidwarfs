/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCommonPlayerActions.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801446BC -> 0x80145348
*/
// Range: 0x801446BC -> 0x801446C4
// this: r3
struct zCommonPlayer * zCommonPlayerAction::GetCommonPlayer() {}

// Range: 0x801446C4 -> 0x801446F0
void zPlayerIdle::anIdleBeforeHandler4(struct xAnimPlay * play /* r4 */, struct xAnimState * state /* r5 */) {}

// Range: 0x801446F0 -> 0x8014471C
void zPlayerIdle::anIdleBeforeHandler3(struct xAnimPlay * play /* r4 */, struct xAnimState * state /* r5 */) {}

// Range: 0x8014471C -> 0x80144748
void zPlayerIdle::anIdleBeforeHandler12(struct xAnimPlay * play /* r4 */, struct xAnimState * state /* r5 */) {}

// Range: 0x80144748 -> 0x80144778
unsigned int zPlayerIdle::anIdleEnemyCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144778 -> 0x801447A8
unsigned int zPlayerIdle::anIdleNormalCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x801447A8 -> 0x801447D8
unsigned int zPlayerIdle::anStartWalkDoneCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x801447D8 -> 0x80144808
unsigned int zPlayerIdle::anBackPlayerHitCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144808 -> 0x80144838
unsigned int zPlayerIdle::anFrontPlayerHitCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144838 -> 0x80144868
unsigned int zPlayerIdle::anIdleCB(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144868 -> 0x80144898
unsigned int zPlayerIdle::anInactiveIdleCB(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144898 -> 0x801448C8
unsigned int zPlayerIdle::anInactiveCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x801448C8 -> 0x801448D8
char * zPlayerIdle::GetTransitionString() {}

// Range: 0x801448D8 -> 0x801448E8
char * zPlayerSkidStop::GetTransitionString() {}

// Range: 0x801448E8 -> 0x80144918
unsigned int zPlayerSkidStop::anIdleEnemyStopCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144918 -> 0x80144948
unsigned int zPlayerSkidStop::anIdleNormalStopCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144948 -> 0x80144958
char * zPlayerWalkStart::GetTransitionString() {}

// Range: 0x80144958 -> 0x80144988
unsigned int zCommonPlayerAction::anWalkCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144988 -> 0x80144998
char * zPlayerWalk::GetTransitionString() {}

// Range: 0x80144998 -> 0x801449C8
unsigned int zPlayerRun::anSlowRunCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x801449C8 -> 0x801449F8
unsigned int zPlayerRun::anFastRunCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x801449F8 -> 0x80144A08
char * zPlayerRun::GetTransitionString() {}

// Range: 0x80144A08 -> 0x80144A38
unsigned int zCommonPlayerAction::anRunCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144A38 -> 0x80144A48
char * zPlayerSlip::GetTransitionString() {}

// Range: 0x80144A48 -> 0x80144A78
unsigned int zPlayerSlip::anSlipCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144A78 -> 0x80144AA8
unsigned int zPlayerJump::anJumpCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144AA8 -> 0x80144AB8
char * zPlayerJump::GetTransitionString() {}

// Range: 0x80144AB8 -> 0x80144AC8
char * zPlayerDoubleJump::GetTransitionString() {}

// Range: 0x80144AC8 -> 0x80144AF8
unsigned int zPlayerDoubleJump::anStartCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144AF8 -> 0x80144B08
char * zPlayerFall::GetTransitionString() {}

// Range: 0x80144B08 -> 0x80144B38
unsigned int zCommonPlayerAction::anFallCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144B38 -> 0x80144B64
void zPlayerLand::anLandBeforeEnter(struct xAnimPlay * play /* r4 */, struct xAnimState * state /* r5 */) {}

// Range: 0x80144B64 -> 0x80144B74
char * zPlayerLand::GetTransitionString() {}

// Range: 0x80144B74 -> 0x80144BA4
unsigned int zPlayerLand::anLandRunCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144BA4 -> 0x80144BD4
unsigned int zPlayerLand::anLandWalkCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144BD4 -> 0x80144C04
unsigned int zCommonPlayerAction::anLandCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144C04 -> 0x80144C34
unsigned int zPlayerTriggered::anTriggeredAnimCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144C34 -> 0x80144C64
unsigned int zPlayerDodge::anDodgePunchCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144C64 -> 0x80144C94
unsigned int zPlayerDodge::anDodgeRunCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144C94 -> 0x80144CC4
unsigned int zPlayerDodge::anDodgeWalkCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144CC4 -> 0x80144CF4
unsigned int zPlayerDodge::anDodgeJumpCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144CF4 -> 0x80144D24
unsigned int zPlayerDodge::anDodgeLeftCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144D24 -> 0x80144D54
unsigned int zPlayerDodge::anDodgeRightCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144D54 -> 0x80144D84
unsigned int zPlayerDodge::anDodgeBackCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144D84 -> 0x80144DB4
unsigned int zPlayerDodge::anDodgeFrontCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144DB4 -> 0x80144DE4
unsigned int zPlayerLedge::anLedgeGrabUpCB(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144DE4 -> 0x80144DF4
char * zPlayerLedge::GetTransitionString() {}

// Range: 0x80144DF4 -> 0x80144E24
unsigned int zPlayerLedge::anLedgeGrabCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144E24 -> 0x80144E54
unsigned int zPlayerHit::anHitBackCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144E54 -> 0x80144E84
unsigned int zPlayerHit::anHitFrontCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144E84 -> 0x80144EB4
unsigned int zPlayerLaunch::anHitLandCB(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144EB4 -> 0x80144EE4
unsigned int zPlayerLaunch::anLaunchBackCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144EE4 -> 0x80144F14
unsigned int zPlayerLaunch::anLaunchFrontCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144F14 -> 0x80144F44
unsigned int zPlayerDefeated::anDeathCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144F44 -> 0x80144F74
unsigned int zPlayerDefeated::anLandDeadCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144F74 -> 0x80144FA4
unsigned int zPlayerFallToDeath::anStartCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144FA4 -> 0x80144FD4
unsigned int zPlayerCheat::anCheatEndCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144FD4 -> 0x80145004
unsigned int zPlayerCheat::anCheatBeginCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80145004 -> 0x80145014
char * zPlayerPunch::GetTransitionString() {}

// Range: 0x80145014 -> 0x80145044
unsigned int zPlayerPunch::anPunch4CB(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80145044 -> 0x80145074
unsigned int zPlayerPunch::anPunch3CB(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80145074 -> 0x801450A4
unsigned int zPlayerPunch::anPunch1CB(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x801450A4 -> 0x801450D4
unsigned int zPlayerPunch::anPunchNoFinishCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x801450D4 -> 0x80145104
unsigned int zPlayerPunch::anPunch2CB(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80145104 -> 0x80145134
unsigned int zPlayerPunch::anPunchFinishCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80145134 -> 0x80145164
unsigned int zPlayerPunch::anPunchButtonCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80145164 -> 0x80145194
unsigned int zPlayerSwitchLever::anTurnOnCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80145194 -> 0x801451C4
unsigned int zPlayerSwitchLever::anTurnOffCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x801451C4 -> 0x801451F4
unsigned int zPlayerSwitchLever::anLandCB(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x801451F4 -> 0x80145224
unsigned int zPlayerInteraction::anNotInteractingCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80145224 -> 0x8014522C
unsigned int zCommonPlayerDash::GetID() {}

// Range: 0x8014522C -> 0x8014525C
unsigned int zCommonPlayerDash::anEndCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x8014525C -> 0x8014526C
char * zCommonPlayerDash::GetTransitionString() {}

// Range: 0x8014526C -> 0x8014529C
unsigned int zCommonPlayerDash::anStartCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x8014529C -> 0x801452A4
unsigned int zPlayerSwitchLever::GetID() {}

// Range: 0x801452A4 -> 0x801452AC
unsigned int zPlayerPunch::GetID() {}

// Range: 0x801452AC -> 0x801452B0
void zPlayerPunch::SetUpgradeLevel() {}

// Range: 0x801452B0 -> 0x801452B8
unsigned int zPlayerCheat::GetID() {}

// Range: 0x801452B8 -> 0x801452BC
void zPlayerCheat::AddTransitionsFrom() {}

// Range: 0x801452BC -> 0x801452C4
unsigned int zPlayerFallToDeath::GetID() {}

// Range: 0x801452C4 -> 0x801452C8
void zPlayerFallToDeath::AddActionTransitions() {}

// Range: 0x801452C8 -> 0x801452D0
unsigned int zPlayerDefeated::GetID() {}

// Range: 0x801452D0 -> 0x801452D8
unsigned int zPlayerLaunch::GetID() {}

// Range: 0x801452D8 -> 0x801452E0
unsigned int zPlayerHit::GetID() {}

// Range: 0x801452E0 -> 0x801452E8
unsigned int zPlayerLedge::GetID() {}

// Range: 0x801452E8 -> 0x801452F0
unsigned int zPlayerDodge::GetID() {}

// Range: 0x801452F0 -> 0x801452F8
unsigned int zPlayerTriggered::GetID() {}

// Range: 0x801452F8 -> 0x80145300
unsigned int zPlayerLand::GetID() {}

// Range: 0x80145300 -> 0x80145308
unsigned int zPlayerFall::GetID() {}

// Range: 0x80145308 -> 0x80145310
unsigned int zPlayerDoubleJump::GetID() {}

// Range: 0x80145310 -> 0x80145318
unsigned int zPlayerJump::GetID() {}

// Range: 0x80145318 -> 0x80145320
unsigned int zPlayerSlip::GetID() {}

// Range: 0x80145320 -> 0x80145328
unsigned int zPlayerRun::GetID() {}

// Range: 0x80145328 -> 0x80145330
unsigned int zPlayerWalk::GetID() {}

// Range: 0x80145330 -> 0x80145338
unsigned int zPlayerWalkStart::GetID() {}

// Range: 0x80145338 -> 0x80145340
unsigned int zPlayerSkidStop::GetID() {}

// Range: 0x80145340 -> 0x80145348
unsigned int zPlayerIdle::GetID() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCommonPlayerActions.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015F93C -> 0x801602AC
*/
// Range: 0x8015F93C -> 0x8015F988
// this: r31
zPlayerSwitchLever::zPlayerSwitchLever(float switchTime /* f31 */) {
    // References
    // -> struct [anonymous] zPlayerSwitchLever::__vtable;
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCommonPlayerActions.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016548C -> 0x8016548C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCommonPlayerActions.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80186F5C -> 0x80186F5C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCommonPlayerActions.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018A540 -> 0x8018A540
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCommonPlayerActions.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018DCC8 -> 0x8018DCC8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCommonPlayerActions.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018F000 -> 0x8018F000
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCommonPlayerActions.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019A968 -> 0x8019A968
*/

