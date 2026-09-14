/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCommonPlayerActions.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80144A40 -> 0x801456CC
*/
// Range: 0x80144A40 -> 0x80144A48
// this: r3
struct zCommonPlayer * zCommonPlayerAction::GetCommonPlayer() {}

// Range: 0x80144A48 -> 0x80144A74
void zPlayerIdle::anIdleBeforeHandler4(struct xAnimPlay * play /* r4 */, struct xAnimState * state /* r5 */) {}

// Range: 0x80144A74 -> 0x80144AA0
void zPlayerIdle::anIdleBeforeHandler3(struct xAnimPlay * play /* r4 */, struct xAnimState * state /* r5 */) {}

// Range: 0x80144AA0 -> 0x80144ACC
void zPlayerIdle::anIdleBeforeHandler12(struct xAnimPlay * play /* r4 */, struct xAnimState * state /* r5 */) {}

// Range: 0x80144ACC -> 0x80144AFC
unsigned int zPlayerIdle::anIdleEnemyCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144AFC -> 0x80144B2C
unsigned int zPlayerIdle::anIdleNormalCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144B2C -> 0x80144B5C
unsigned int zPlayerIdle::anStartWalkDoneCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144B5C -> 0x80144B8C
unsigned int zPlayerIdle::anBackPlayerHitCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144B8C -> 0x80144BBC
unsigned int zPlayerIdle::anFrontPlayerHitCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144BBC -> 0x80144BEC
unsigned int zPlayerIdle::anIdleCB(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144BEC -> 0x80144C1C
unsigned int zPlayerIdle::anInactiveIdleCB(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144C1C -> 0x80144C4C
unsigned int zPlayerIdle::anInactiveCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144C4C -> 0x80144C5C
char * zPlayerIdle::GetTransitionString() {}

// Range: 0x80144C5C -> 0x80144C6C
char * zPlayerSkidStop::GetTransitionString() {}

// Range: 0x80144C6C -> 0x80144C9C
unsigned int zPlayerSkidStop::anIdleEnemyStopCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144C9C -> 0x80144CCC
unsigned int zPlayerSkidStop::anIdleNormalStopCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144CCC -> 0x80144CDC
char * zPlayerWalkStart::GetTransitionString() {}

// Range: 0x80144CDC -> 0x80144D0C
unsigned int zCommonPlayerAction::anWalkCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144D0C -> 0x80144D1C
char * zPlayerWalk::GetTransitionString() {}

// Range: 0x80144D1C -> 0x80144D4C
unsigned int zPlayerRun::anSlowRunCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144D4C -> 0x80144D7C
unsigned int zPlayerRun::anFastRunCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144D7C -> 0x80144D8C
char * zPlayerRun::GetTransitionString() {}

// Range: 0x80144D8C -> 0x80144DBC
unsigned int zCommonPlayerAction::anRunCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144DBC -> 0x80144DCC
char * zPlayerSlip::GetTransitionString() {}

// Range: 0x80144DCC -> 0x80144DFC
unsigned int zPlayerSlip::anSlipCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144DFC -> 0x80144E2C
unsigned int zPlayerJump::anJumpCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144E2C -> 0x80144E3C
char * zPlayerJump::GetTransitionString() {}

// Range: 0x80144E3C -> 0x80144E4C
char * zPlayerDoubleJump::GetTransitionString() {}

// Range: 0x80144E4C -> 0x80144E7C
unsigned int zPlayerDoubleJump::anStartCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144E7C -> 0x80144E8C
char * zPlayerFall::GetTransitionString() {}

// Range: 0x80144E8C -> 0x80144EBC
unsigned int zCommonPlayerAction::anFallCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144EBC -> 0x80144EE8
void zPlayerLand::anLandBeforeEnter(struct xAnimPlay * play /* r4 */, struct xAnimState * state /* r5 */) {}

// Range: 0x80144EE8 -> 0x80144EF8
char * zPlayerLand::GetTransitionString() {}

// Range: 0x80144EF8 -> 0x80144F28
unsigned int zPlayerLand::anLandRunCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144F28 -> 0x80144F58
unsigned int zPlayerLand::anLandWalkCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144F58 -> 0x80144F88
unsigned int zCommonPlayerAction::anLandCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144F88 -> 0x80144FB8
unsigned int zPlayerTriggered::anTriggeredAnimCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144FB8 -> 0x80144FE8
unsigned int zPlayerDodge::anDodgePunchCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80144FE8 -> 0x80145018
unsigned int zPlayerDodge::anDodgeRunCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80145018 -> 0x80145048
unsigned int zPlayerDodge::anDodgeWalkCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80145048 -> 0x80145078
unsigned int zPlayerDodge::anDodgeJumpCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80145078 -> 0x801450A8
unsigned int zPlayerDodge::anDodgeLeftCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x801450A8 -> 0x801450D8
unsigned int zPlayerDodge::anDodgeRightCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x801450D8 -> 0x80145108
unsigned int zPlayerDodge::anDodgeBackCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80145108 -> 0x80145138
unsigned int zPlayerDodge::anDodgeFrontCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80145138 -> 0x80145168
unsigned int zPlayerLedge::anLedgeGrabUpCB(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80145168 -> 0x80145178
char * zPlayerLedge::GetTransitionString() {}

// Range: 0x80145178 -> 0x801451A8
unsigned int zPlayerLedge::anLedgeGrabCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x801451A8 -> 0x801451D8
unsigned int zPlayerHit::anHitBackCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x801451D8 -> 0x80145208
unsigned int zPlayerHit::anHitFrontCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80145208 -> 0x80145238
unsigned int zPlayerLaunch::anHitLandCB(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80145238 -> 0x80145268
unsigned int zPlayerLaunch::anLaunchBackCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80145268 -> 0x80145298
unsigned int zPlayerLaunch::anLaunchFrontCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80145298 -> 0x801452C8
unsigned int zPlayerDefeated::anDeathCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x801452C8 -> 0x801452F8
unsigned int zPlayerDefeated::anLandDeadCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x801452F8 -> 0x80145328
unsigned int zPlayerFallToDeath::anStartCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80145328 -> 0x80145358
unsigned int zPlayerCheat::anCheatEndCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80145358 -> 0x80145388
unsigned int zPlayerCheat::anCheatBeginCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80145388 -> 0x80145398
char * zPlayerPunch::GetTransitionString() {}

// Range: 0x80145398 -> 0x801453C8
unsigned int zPlayerPunch::anPunch4CB(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x801453C8 -> 0x801453F8
unsigned int zPlayerPunch::anPunch3CB(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x801453F8 -> 0x80145428
unsigned int zPlayerPunch::anPunch1CB(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80145428 -> 0x80145458
unsigned int zPlayerPunch::anPunchNoFinishCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80145458 -> 0x80145488
unsigned int zPlayerPunch::anPunch2CB(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80145488 -> 0x801454B8
unsigned int zPlayerPunch::anPunchFinishCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x801454B8 -> 0x801454E8
unsigned int zPlayerPunch::anPunchButtonCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x801454E8 -> 0x80145518
unsigned int zPlayerSwitchLever::anTurnOnCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80145518 -> 0x80145548
unsigned int zPlayerSwitchLever::anTurnOffCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80145548 -> 0x80145578
unsigned int zPlayerSwitchLever::anLandCB(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80145578 -> 0x801455A8
unsigned int zPlayerInteraction::anNotInteractingCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x801455A8 -> 0x801455B0
unsigned int zCommonPlayerDash::GetID() {}

// Range: 0x801455B0 -> 0x801455E0
unsigned int zCommonPlayerDash::anEndCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x801455E0 -> 0x801455F0
char * zCommonPlayerDash::GetTransitionString() {}

// Range: 0x801455F0 -> 0x80145620
unsigned int zCommonPlayerDash::anStartCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80145620 -> 0x80145628
unsigned int zPlayerSwitchLever::GetID() {}

// Range: 0x80145628 -> 0x80145630
unsigned int zPlayerPunch::GetID() {}

// Range: 0x80145630 -> 0x80145634
void zPlayerPunch::SetUpgradeLevel() {}

// Range: 0x80145634 -> 0x8014563C
unsigned int zPlayerCheat::GetID() {}

// Range: 0x8014563C -> 0x80145640
void zPlayerCheat::AddTransitionsFrom() {}

// Range: 0x80145640 -> 0x80145648
unsigned int zPlayerFallToDeath::GetID() {}

// Range: 0x80145648 -> 0x8014564C
void zPlayerFallToDeath::AddActionTransitions() {}

// Range: 0x8014564C -> 0x80145654
unsigned int zPlayerDefeated::GetID() {}

// Range: 0x80145654 -> 0x8014565C
unsigned int zPlayerLaunch::GetID() {}

// Range: 0x8014565C -> 0x80145664
unsigned int zPlayerHit::GetID() {}

// Range: 0x80145664 -> 0x8014566C
unsigned int zPlayerLedge::GetID() {}

// Range: 0x8014566C -> 0x80145674
unsigned int zPlayerDodge::GetID() {}

// Range: 0x80145674 -> 0x8014567C
unsigned int zPlayerTriggered::GetID() {}

// Range: 0x8014567C -> 0x80145684
unsigned int zPlayerLand::GetID() {}

// Range: 0x80145684 -> 0x8014568C
unsigned int zPlayerFall::GetID() {}

// Range: 0x8014568C -> 0x80145694
unsigned int zPlayerDoubleJump::GetID() {}

// Range: 0x80145694 -> 0x8014569C
unsigned int zPlayerJump::GetID() {}

// Range: 0x8014569C -> 0x801456A4
unsigned int zPlayerSlip::GetID() {}

// Range: 0x801456A4 -> 0x801456AC
unsigned int zPlayerRun::GetID() {}

// Range: 0x801456AC -> 0x801456B4
unsigned int zPlayerWalk::GetID() {}

// Range: 0x801456B4 -> 0x801456BC
unsigned int zPlayerWalkStart::GetID() {}

// Range: 0x801456BC -> 0x801456C4
unsigned int zPlayerSkidStop::GetID() {}

// Range: 0x801456C4 -> 0x801456CC
unsigned int zPlayerIdle::GetID() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCommonPlayerActions.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015FCC0 -> 0x80160630
*/
// Range: 0x8015FCC0 -> 0x8015FD0C
// this: r31
zPlayerSwitchLever::zPlayerSwitchLever(float switchTime /* f31 */) {
    // References
    // -> struct [anonymous] zPlayerSwitchLever::__vtable;
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCommonPlayerActions.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80165810 -> 0x80165810
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCommonPlayerActions.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801872E0 -> 0x801872E0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCommonPlayerActions.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018A8C4 -> 0x8018A8C4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCommonPlayerActions.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018E04C -> 0x8018E04C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCommonPlayerActions.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018F384 -> 0x8018F384
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCommonPlayerActions.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019ACEC -> 0x8019ACEC
*/

