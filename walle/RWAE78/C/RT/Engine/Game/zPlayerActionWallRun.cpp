/*
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zPlayerActionWallRun.cpp
*/
static class xVec3 JUMP_VEL; // size: 0xC, address: 0x806D2F04
// Range: 0x8020B950 -> 0x8020BA84
void zPlayerActionWallRun::AddStates(class zPlayerActionWallRun * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerActionWallRun::AddActionTransitions(xAnimTable *)
// Range: 0x8020BA90 -> 0x8020BAAC
void zPlayerActionWallRun::AddActionTransitions() {
}
// signature: zPlayerActionWallRun::AddInternalTransitions(xAnimTable *)
// Range: 0x8020BAB0 -> 0x8020BAB4
void zPlayerActionWallRun::AddInternalTransitions() {
}
// signature: zPlayerActionWallRun::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8020BAC0 -> 0x8020BB70
void zPlayerActionWallRun::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// Range: 0x8020BC90 -> 0x8020BDDC
void zPlayerActionWallRun::Move(class zPlayerActionWallRun * this /* r28 */, class xScene * s /* r29 */, float dt /* f31 */, class xEntFrame * frame /* r30 */) {
    // Local variables
    bool nextFacingCorrectDir; // r31
    unsigned int animFlags; // r0
}
// Range: 0x8020BDF0 -> 0x8020BDFC
void zPlayerActionWallRun::Reset() {
}
// Range: 0x8020BE00 -> 0x8020BE24
void zPlayerActionWallRun::Begin() {
}
// Range: 0x8020BE30 -> 0x8020BE44
void zPlayerActionWallRun::End() {
}
// signature: zPlayerActionWallRun::CollisionResponse(const xVec3 &, const SphereCollisionResults &, xVec3 &)
// Range: 0x8020BE50 -> 0x8020BE6C
bool zPlayerActionWallRun::CollisionResponse() {
}
// Range: 0x8020BE70 -> 0x8020C184
void zPlayerActionWallRun::NotifyCollision(class zPlayerActionWallRun * this /* r31 */, class xVec3 * currentDir /* r27 */, class SphereCollisionResults * sceneCollide /* r28 */) {
    // Local variables
    class xVec3 dir; // r1+0x20
    float dot; // f0
    class xVec3 facingDir; // r1+0x14
    class xVec3 wallRight; // r1+0x8

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x8020C1A0 -> 0x8020C25C
void zPlayerActionWallRunJump::AddStates(class zPlayerActionWallRunJump * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x8020C260 -> 0x8020C2DC
void zPlayerActionWallRunJump::AddActionTransitions(class zPlayerActionWallRunJump * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zPlayerActionWallRunJump::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8020C2E0 -> 0x8020C390
void zPlayerActionWallRunJump::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// Range: 0x8020C4F0 -> 0x8020C63C
void zPlayerActionWallRunJump::Begin(class zPlayerActionWallRunJump * this /* r28 */) {
    // Local variables
    class xMat3x3 playerMat; // r1+0x8

    // References
    // -> static class xVec3 JUMP_VEL;
}
