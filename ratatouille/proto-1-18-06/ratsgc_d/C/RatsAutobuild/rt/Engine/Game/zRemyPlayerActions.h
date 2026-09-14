/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zRemyPlayerActions.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8029D238 -> 0x8029D2A8
*/
// Range: 0x8029D238 -> 0x8029D270
// this: r1+0x8
unsigned char zRemyPlayerCarry::Carrying() {}

// Range: 0x8029D270 -> 0x8029D2A8
// this: r1+0x8
void zRemyPlayerCarry::BreakGrab() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zRemyPlayerActions.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A3BEC -> 0x802A455C
*/
// Range: 0x802A3BEC -> 0x802A3C28
void zRemyPlayerCarry::anGrabCarryBeforeEnter(struct xAnimPlay * play /* r1+0x8 */, struct xAnimState * state /* r31 */) {}

// ERROR: Failed to emit tag 221B2F0 (GlobalSubroutine)
// ERROR: Failed to emit tag 221B3B9 (GlobalSubroutine)
// Range: 0x802A3D80 -> 0x802A3DC0
unsigned int zRemyPlayerCarry::anAnyMoveCheck(struct xAnimTransition * tran /* r31 */, struct xAnimSingle * anim /* r1+0x8 */) {}

// ERROR: Failed to emit tag 221B557 (GlobalSubroutine)
// Range: 0x802A3E6C -> 0x802A3EAC
unsigned int zRemyPlayerCarry::anGrabKillRunCheck(struct xAnimTransition * tran /* r1+0x8 */, struct xAnimSingle * anim /* r31 */) {}

// Range: 0x802A3EAC -> 0x802A3EEC
unsigned int zRemyPlayerCarry::anGrabKillWalkCheck(struct xAnimTransition * tran /* r1+0x8 */, struct xAnimSingle * anim /* r31 */) {}

// Range: 0x802A3EEC -> 0x802A3F2C
unsigned int zRemyPlayerCarry::anGrabKillIdleEnemyCheck(struct xAnimTransition * tran /* r1+0x8 */, struct xAnimSingle * anim /* r31 */) {}

// Range: 0x802A3F2C -> 0x802A3F6C
unsigned int zRemyPlayerCarry::anGrabKillIdleNormalCheck(struct xAnimTransition * tran /* r1+0x8 */, struct xAnimSingle * anim /* r31 */) {}

// Range: 0x802A3F6C -> 0x802A3FAC
unsigned int zRemyPlayerCarry::anControlOffCheck(struct xAnimTransition * tran /* r1+0x8 */, struct xAnimSingle * anim /* r31 */) {}

// Range: 0x802A3FAC -> 0x802A3FEC
unsigned int zRemyPlayerCarry::anNotUsingCheck(struct xAnimTransition * tran /* r31 */, struct xAnimSingle * anim /* r1+0x8 */) {}

// Range: 0x802A3FEC -> 0x802A402C
unsigned int zRemyPlayerCarry::anAnyMoveNotUsingCheck(struct xAnimTransition * tran /* r31 */, struct xAnimSingle * anim /* r1+0x8 */) {}

// Range: 0x802A402C -> 0x802A406C
unsigned int zRemyPlayerCarry::anLandingCheck(struct xAnimTransition * tran /* r31 */, struct xAnimSingle * anim /* r1+0x8 */) {}

// Range: 0x802A406C -> 0x802A40AC
unsigned int zRemyPlayerCarry::anAnyMoveLandingCheck(struct xAnimTransition * tran /* r31 */, struct xAnimSingle * anim /* r1+0x8 */) {}

// Range: 0x802A40AC -> 0x802A40EC
unsigned int zRemyPlayerCarry::anWhifCheck(struct xAnimTransition * tran /* r31 */, struct xAnimSingle * anim /* r1+0x8 */) {}

// Range: 0x802A40EC -> 0x802A412C
unsigned int zRemyPlayerCarry::anGrabCheck(struct xAnimTransition * tran /* r31 */, struct xAnimSingle * anim /* r1+0x8 */) {}

// Range: 0x802A412C -> 0x802A41AC
unsigned int zRemyPlayerCarry::anPunchInterruptGrabCheck(struct xAnimTransition * tran /* r30 */, struct xAnimSingle * anim /* r31 */) {}

// Range: 0x802A41AC -> 0x802A41E8
void zRemyPlayerUseGeneric::anUseBeforeEnter(struct xAnimPlay * play /* r1+0x8 */, struct xAnimState * state /* r31 */) {}

// Range: 0x802A41E8 -> 0x802A4228
unsigned int zRemyPlayerUseGeneric::anStartCheck(struct xAnimTransition * tran /* r31 */, struct xAnimSingle * anim /* r1+0x8 */) {}

// Range: 0x802A4228 -> 0x802A4264
void zRemyPlayerUseSwipe::anUseBeforeEnter(struct xAnimPlay * play /* r1+0x8 */, struct xAnimState * state /* r31 */) {}

// Range: 0x802A4264 -> 0x802A42A4
unsigned int zRemyPlayerUseSwipe::anStartCheck(struct xAnimTransition * tran /* r31 */, struct xAnimSingle * anim /* r1+0x8 */) {}

// Range: 0x802A42A4 -> 0x802A42E4
unsigned int zRemyPlayerUseHide::anStartCheck(struct xAnimTransition * tran /* r31 */, struct xAnimSingle * anim /* r1+0x8 */) {}

// Range: 0x802A42E4 -> 0x802A4324
unsigned int zRemyPlayerUseAttract::anStartCheck(struct xAnimTransition * tran /* r31 */, struct xAnimSingle * anim /* r1+0x8 */) {}

// Range: 0x802A4324 -> 0x802A4364
unsigned int zRemyPlayerUseRepel::anStartCheck(struct xAnimTransition * tran /* r31 */, struct xAnimSingle * anim /* r1+0x8 */) {}

// Range: 0x802A4364 -> 0x802A43A4
unsigned int zRemyPlayerUseGlide::anStopCheck(struct xAnimTransition * tran /* r31 */, struct xAnimSingle * anim /* r1+0x8 */) {}

// Range: 0x802A43A4 -> 0x802A43E4
unsigned int zRemyPlayerUseGlide::anStartCheck(struct xAnimTransition * tran /* r31 */, struct xAnimSingle * anim /* r1+0x8 */) {}

// Range: 0x802A43E4 -> 0x802A4424
unsigned int zRemyPlayerUseRoll::anStartCheck(struct xAnimTransition * tran /* r31 */, struct xAnimSingle * anim /* r1+0x8 */) {}

// Range: 0x802A4424 -> 0x802A4454
// this: r1+0x8
void zBallForces::SetVelocity(struct xVec3 & v /* r1+0xC */) {}

// Range: 0x802A4454 -> 0x802A44D4
unsigned int zRemyPlayerGrabWhif::anPunchInterruptStartCheck(struct xAnimTransition * tran /* r30 */, struct xAnimSingle * anim /* r31 */) {}

// Range: 0x802A44D4 -> 0x802A4514
unsigned int zRemyPlayerGrabWhif::anStartCheck(struct xAnimTransition * tran /* r31 */, struct xAnimSingle * anim /* r1+0x8 */) {}

// Range: 0x802A4514 -> 0x802A451C
unsigned int zRemyPlayerGrabWhif::GetID() {}

// Range: 0x802A451C -> 0x802A4524
unsigned int zRemyPlayerUseRoll::GetID() {}

// Range: 0x802A4524 -> 0x802A452C
unsigned int zRemyPlayerUseGlide::GetID() {}

// Range: 0x802A452C -> 0x802A4534
unsigned int zRemyPlayerUseRepel::GetID() {}

// Range: 0x802A4534 -> 0x802A453C
unsigned int zRemyPlayerUseAttract::GetID() {}

// Range: 0x802A453C -> 0x802A4544
unsigned int zRemyPlayerUseHide::GetID() {}

// Range: 0x802A4544 -> 0x802A454C
unsigned int zRemyPlayerUseSwipe::GetID() {}

// Range: 0x802A454C -> 0x802A4554
unsigned int zRemyPlayerUseGeneric::GetID() {}

// Range: 0x802A4554 -> 0x802A455C
unsigned int zRemyPlayerCarry::GetID() {}


