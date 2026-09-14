/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zRemyPlayerActions.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015F8E0 -> 0x8015F93C
*/
// Range: 0x8015F8E0 -> 0x8015F90C
// this: r0
unsigned char zRemyPlayerCarry::Carrying() {}

// Range: 0x8015F90C -> 0x8015F93C
// this: r0
void zRemyPlayerCarry::BreakGrab() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zRemyPlayerActions.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80164E40 -> 0x8016548C
*/
// Range: 0x80164E40 -> 0x80164E6C
void zRemyPlayerCarry::anGrabCarryBeforeEnter(struct xAnimPlay * play /* r4 */, struct xAnimState * state /* r5 */) {}

// Range: 0x80164E6C -> 0x80164E9C
unsigned int zRemyPlayerCarry::anDropCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80164E9C -> 0x80164ECC
unsigned int zRemyPlayerCarry::anAnyStopCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80164ECC -> 0x80164EFC
unsigned int zRemyPlayerCarry::anAnyMoveCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80164EFC -> 0x80164F2C
unsigned int zRemyPlayerCarry::anPickedUpCB(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80164F2C -> 0x80164F5C
unsigned int zRemyPlayerCarry::anGrabKillRunCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80164F5C -> 0x80164F8C
unsigned int zRemyPlayerCarry::anGrabKillWalkCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80164F8C -> 0x80164FBC
unsigned int zRemyPlayerCarry::anGrabKillIdleEnemyCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80164FBC -> 0x80164FEC
unsigned int zRemyPlayerCarry::anGrabKillIdleNormalCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80164FEC -> 0x8016501C
unsigned int zRemyPlayerCarry::anControlOffCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x8016501C -> 0x8016504C
unsigned int zRemyPlayerCarry::anNotUsingCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x8016504C -> 0x8016507C
unsigned int zRemyPlayerCarry::anAnyMoveNotUsingCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x8016507C -> 0x801650AC
unsigned int zRemyPlayerCarry::anLandingCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x801650AC -> 0x801650DC
unsigned int zRemyPlayerCarry::anAnyMoveLandingCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x801650DC -> 0x8016510C
unsigned int zRemyPlayerCarry::anWhifCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x8016510C -> 0x8016513C
unsigned int zRemyPlayerCarry::anGrabCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x8016513C -> 0x801651AC
unsigned int zRemyPlayerCarry::anPunchInterruptGrabCheck(struct xAnimTransition * tran /* r29 */, struct xAnimSingle * anim /* r30 */) {}

// Range: 0x801651AC -> 0x801651D8
void zRemyPlayerUseGeneric::anUseBeforeEnter(struct xAnimPlay * play /* r4 */, struct xAnimState * state /* r5 */) {}

// Range: 0x801651D8 -> 0x80165208
unsigned int zRemyPlayerUseGeneric::anStartCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80165208 -> 0x80165234
void zRemyPlayerUseSwipe::anUseBeforeEnter(struct xAnimPlay * play /* r4 */, struct xAnimState * state /* r5 */) {}

// Range: 0x80165234 -> 0x80165264
unsigned int zRemyPlayerUseSwipe::anStartCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80165264 -> 0x80165294
unsigned int zRemyPlayerUseHide::anStartCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80165294 -> 0x801652C4
unsigned int zRemyPlayerUseAttract::anStartCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x801652C4 -> 0x801652F4
unsigned int zRemyPlayerUseRepel::anStartCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x801652F4 -> 0x80165324
unsigned int zRemyPlayerUseGlide::anStopCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80165324 -> 0x80165354
unsigned int zRemyPlayerUseGlide::anStartCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80165354 -> 0x80165384
unsigned int zRemyPlayerUseRoll::anStartCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80165384 -> 0x801653A4
// this: r0
void zBallForces::SetVelocity(struct xVec3 & v /* r0 */) {}

// Range: 0x801653A4 -> 0x80165414
unsigned int zRemyPlayerGrabWhif::anPunchInterruptStartCheck(struct xAnimTransition * tran /* r29 */, struct xAnimSingle * anim /* r30 */) {}

// Range: 0x80165414 -> 0x80165444
unsigned int zRemyPlayerGrabWhif::anStartCheck(struct xAnimTransition * tran /* r3 */, struct xAnimSingle * anim /* r5 */) {}

// Range: 0x80165444 -> 0x8016544C
unsigned int zRemyPlayerGrabWhif::GetID() {}

// Range: 0x8016544C -> 0x80165454
unsigned int zRemyPlayerUseRoll::GetID() {}

// Range: 0x80165454 -> 0x8016545C
unsigned int zRemyPlayerUseGlide::GetID() {}

// Range: 0x8016545C -> 0x80165464
unsigned int zRemyPlayerUseRepel::GetID() {}

// Range: 0x80165464 -> 0x8016546C
unsigned int zRemyPlayerUseAttract::GetID() {}

// Range: 0x8016546C -> 0x80165474
unsigned int zRemyPlayerUseHide::GetID() {}

// Range: 0x80165474 -> 0x8016547C
unsigned int zRemyPlayerUseSwipe::GetID() {}

// Range: 0x8016547C -> 0x80165484
unsigned int zRemyPlayerUseGeneric::GetID() {}

// Range: 0x80165484 -> 0x8016548C
unsigned int zRemyPlayerCarry::GetID() {}


