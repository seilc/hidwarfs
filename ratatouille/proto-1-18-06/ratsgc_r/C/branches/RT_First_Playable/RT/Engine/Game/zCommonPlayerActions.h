/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zCommonPlayerActions.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80207714 -> 0x80208A28
*/
// Range: 0x80207714 -> 0x8020771C
// this: r3
struct zCommonPlayer * zCommonPlayerAction::GetCommonPlayer() {}

// Range: 0x8020771C -> 0x80207748
void zPlayerIdle::anIdleBeforeHandler4(struct xAnimPlay * play /* r4 */, struct xAnimState * state /* r5 */) {}

// Range: 0x80207748 -> 0x80207774
void zPlayerIdle::anIdleBeforeHandler3(struct xAnimPlay * play /* r4 */, struct xAnimState * state /* r5 */) {}

// Range: 0x80207774 -> 0x802077A0
void zPlayerIdle::anIdleBeforeHandler12(struct xAnimPlay * play /* r4 */, struct xAnimState * state /* r5 */) {}

// Range: 0x802077A0 -> 0x802077D0
unsigned int zPlayerIdle::anIdleEnemyCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x802077D0 -> 0x80207800
unsigned int zPlayerIdle::anIdleNormalCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80207800 -> 0x80207830
unsigned int zPlayerIdle::anStartWalkDoneCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// ERROR: Failed to emit tag 1B37B90 (GlobalSubroutine)
// ERROR: Failed to emit tag 1B37C66 (GlobalSubroutine)
// ERROR: Failed to emit tag 1B37D3E (GlobalSubroutine)
// ERROR: Failed to emit tag 1B37DFC (GlobalSubroutine)
// Range: 0x80207AC0 -> 0x80207AF0
unsigned int zPlayerIdle::anInactiveCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80207AF0 -> 0x80207B00
char * zPlayerIdle::GetTransitionString() {}

// Range: 0x80207B00 -> 0x80207B10
char * zPlayerSkidStop::GetTransitionString() {}

// Range: 0x80207B10 -> 0x80207B40
unsigned int zPlayerSkidStop::anIdleEnemyStopCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80207B40 -> 0x80207B70
unsigned int zPlayerSkidStop::anIdleNormalStopCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80207B70 -> 0x80207B80
char * zPlayerWalkStart::GetTransitionString() {}

// Range: 0x80207B80 -> 0x80207BB0
unsigned int zCommonPlayerAction::anWalkCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80207BB0 -> 0x80207BC0
char * zPlayerWalk::GetTransitionString() {}

// ERROR: Failed to emit tag 1B38391 (GlobalSubroutine)
// ERROR: Failed to emit tag 1B3845A (GlobalSubroutine)
// Range: 0x80207D08 -> 0x80207D18
char * zPlayerRun::GetTransitionString() {}

// Range: 0x80207D18 -> 0x80207D48
unsigned int zCommonPlayerAction::anRunCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80207D48 -> 0x80207D58
char * zPlayerSlip::GetTransitionString() {}

// Range: 0x80207D58 -> 0x80207D88
unsigned int zPlayerSlip::anSlipCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80207D88 -> 0x80207DB8
unsigned int zPlayerJump::anJumpCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80207DB8 -> 0x80207DC8
char * zPlayerJump::GetTransitionString() {}

// Range: 0x80207DC8 -> 0x80207DD8
char * zPlayerDoubleJump::GetTransitionString() {}

// Range: 0x80207DD8 -> 0x80207E08
unsigned int zPlayerDoubleJump::anStartCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80207E08 -> 0x80207E18
char * zPlayerFall::GetTransitionString() {}

// Range: 0x80207E18 -> 0x80207E48
unsigned int zCommonPlayerAction::anFallCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80207E48 -> 0x80207E74
void zPlayerLand::anLandBeforeEnter(struct xAnimPlay * play /* r4 */, struct xAnimState * state /* r5 */) {}

// Range: 0x80207E74 -> 0x80207E84
char * zPlayerLand::GetTransitionString() {}

// Range: 0x80207E84 -> 0x80207EB4
unsigned int zPlayerLand::anLandRunCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80207EB4 -> 0x80207EE4
unsigned int zPlayerLand::anLandWalkCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80207EE4 -> 0x80207F14
unsigned int zCommonPlayerAction::anLandCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80207F14 -> 0x80207F44
unsigned int zPlayerTriggered::anTriggeredAnimCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80207F44 -> 0x80207F74
unsigned int zPlayerDodge::anDodgePunchCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80207F74 -> 0x80207FA4
unsigned int zPlayerDodge::anDodgeRunCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80207FA4 -> 0x80207FD4
unsigned int zPlayerDodge::anDodgeWalkCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80207FD4 -> 0x80208004
unsigned int zPlayerDodge::anDodgeJumpCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80208004 -> 0x80208034
unsigned int zPlayerDodge::anDodgeLeftCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80208034 -> 0x80208064
unsigned int zPlayerDodge::anDodgeRightCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80208064 -> 0x80208094
unsigned int zPlayerDodge::anDodgeBackCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80208094 -> 0x802080C4
unsigned int zPlayerDodge::anDodgeFrontCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// ERROR: Failed to emit tag 1B39570 (GlobalSubroutine)
// Range: 0x80208168 -> 0x80208178
char * zPlayerLedge::GetTransitionString() {}

// Range: 0x80208178 -> 0x802081A8
unsigned int zPlayerLedge::anLedgeGrabCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x802081A8 -> 0x802081D8
unsigned int zPlayerHit::anHitBackCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x802081D8 -> 0x80208208
unsigned int zPlayerHit::anHitFrontCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// ERROR: Failed to emit tag 1B398F1 (GlobalSubroutine)
// Range: 0x802082AC -> 0x802082DC
unsigned int zPlayerLaunch::anLaunchBackCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x802082DC -> 0x8020830C
unsigned int zPlayerLaunch::anLaunchFrontCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x8020830C -> 0x8020833C
unsigned int zPlayerDefeated::anDeathCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x8020833C -> 0x8020836C
unsigned int zPlayerDefeated::anLandDeadCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x8020836C -> 0x8020839C
unsigned int zPlayerFallToDeath::anStartCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x8020839C -> 0x802083CC
unsigned int zPlayerCheat::anCheatEndCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x802083CC -> 0x802083FC
unsigned int zPlayerCheat::anCheatBeginCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x802083FC -> 0x8020840C
char * zPlayerPunch::GetTransitionString() {}

// ERROR: Failed to emit tag 1B39F9B (GlobalSubroutine)
// ERROR: Failed to emit tag 1B3A05E (GlobalSubroutine)
// ERROR: Failed to emit tag 1B3A121 (GlobalSubroutine)
// Range: 0x802085F8 -> 0x80208628
unsigned int zPlayerPunch::anPunchNoFinishCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// ERROR: Failed to emit tag 1B3A2B5 (GlobalSubroutine)
// Range: 0x802086CC -> 0x802086FC
unsigned int zPlayerPunch::anPunchFinishCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x802086FC -> 0x8020872C
unsigned int zPlayerPunch::anPunchButtonCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x8020872C -> 0x8020875C
unsigned int zPlayerSwitchLever::anTurnOnCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x8020875C -> 0x8020878C
unsigned int zPlayerSwitchLever::anTurnOffCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// ERROR: Failed to emit tag 1B3A6A6 (GlobalSubroutine)
// Range: 0x80208830 -> 0x80208860
unsigned int zPlayerInteraction::anNotInteractingCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80208860 -> 0x80208868
unsigned int zCommonPlayerDash::GetID() {}

// ERROR: Failed to emit tag 1B3A88D (GlobalSubroutine)
// Range: 0x8020890C -> 0x8020891C
char * zCommonPlayerDash::GetTransitionString() {}

// Range: 0x8020891C -> 0x8020894C
unsigned int zCommonPlayerDash::anStartCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x8020894C -> 0x80208954
unsigned int zPlayerSwitchLever::GetID() {}

// Range: 0x80208954 -> 0x8020895C
unsigned int zPlayerPunch::GetID() {}

// Range: 0x8020895C -> 0x80208960
void zPlayerPunch::SetUpgradeLevel() {}

// Range: 0x80208960 -> 0x80208968
unsigned int zPlayerCheat::GetID() {}

// Range: 0x80208968 -> 0x8020896C
void zPlayerCheat::AddTransitionsFrom() {}

// Range: 0x8020896C -> 0x80208974
unsigned int zPlayerFallToDeath::GetID() {}

// Range: 0x80208974 -> 0x80208978
void zPlayerFallToDeath::AddActionTransitions() {}

// Range: 0x80208978 -> 0x80208980
unsigned int zPlayerDefeated::GetID() {}

// Range: 0x80208980 -> 0x80208988
unsigned int zPlayerLaunch::GetID() {}

// Range: 0x80208988 -> 0x80208990
unsigned int zPlayerHit::GetID() {}

// Range: 0x80208990 -> 0x80208998
unsigned int zPlayerLedge::GetID() {}

// Range: 0x80208998 -> 0x802089A0
unsigned int zPlayerDodge::GetID() {}

// Range: 0x802089A0 -> 0x802089A8
unsigned int zPlayerTriggered::GetID() {}

// Range: 0x802089A8 -> 0x802089B0
unsigned int zPlayerLand::GetID() {}

// Range: 0x802089B0 -> 0x802089B8
unsigned int zPlayerFall::GetID() {}

// Range: 0x802089B8 -> 0x802089C0
unsigned int zPlayerDoubleJump::GetID() {}

// Range: 0x802089C0 -> 0x802089C8
unsigned int zPlayerJump::GetID() {}

// Range: 0x802089C8 -> 0x802089D0
unsigned int zPlayerSlip::GetID() {}

// Range: 0x802089D0 -> 0x802089D8
unsigned int zPlayerRun::GetID() {}

// Range: 0x802089D8 -> 0x802089E0
unsigned int zPlayerWalk::GetID() {}

// Range: 0x802089E0 -> 0x802089E8
unsigned int zPlayerWalkStart::GetID() {}

// Range: 0x802089E8 -> 0x802089F0
unsigned int zPlayerSkidStop::GetID() {}

// Range: 0x802089F0 -> 0x802089F8
unsigned int zPlayerIdle::GetID() {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zCommonPlayerActions.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802310D8 -> 0x80231A48
*/
// Range: 0x802310D8 -> 0x80231124
// this: r31
zPlayerSwitchLever::zPlayerSwitchLever(float switchTime /* f31 */) {
    // References
    // -> struct [anonymous] zPlayerSwitchLever::__vtable;
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zCommonPlayerActions.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8023787C -> 0x8023787C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zCommonPlayerActions.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8026926C -> 0x8026926C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zCommonPlayerActions.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8026E1A8 -> 0x8026E1A8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zCommonPlayerActions.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80272E50 -> 0x80272E50
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zCommonPlayerActions.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802745C4 -> 0x802745C4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zCommonPlayerActions.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80284C98 -> 0x80284C98
*/

