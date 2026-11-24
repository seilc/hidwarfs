/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zKevinPlayerActions.cpp
*/
// Range: 0x8018BE10 -> 0x8018BEA0
void zKevinPlayerIdle::AddActionTransitions(class zKevinPlayerIdle * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x8018BEA0 -> 0x8018BF30
void zKevinPlayerWalk::AddActionTransitions(class zKevinPlayerWalk * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x8018BF30 -> 0x8018BFBC
void zKevinPlayerRun::AddStates(class zKevinPlayerRun * this /* r30 */, class xAnimTable * table /* r31 */) {
}
// Range: 0x8018BFC0 -> 0x8018C0CC
void zKevinPlayerRun::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x8018C130 -> 0x8018C1C0
void zKevinPlayerRun::AddActionTransitions(class zKevinPlayerRun * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x8018C1C0 -> 0x8018C234
void zKevinPlayerJump::AddActionTransitions(class zKevinPlayerJump * this /* r30 */, class xAnimTable * table /* r31 */) {
}
// signature: zKevinPlayerJump::GetY(float) const
// Range: 0x8018C240 -> 0x8018C264
float zKevinPlayerJump::GetY() const {
    // Local variables
    float yVal; // f1
}
// Range: 0x8018C270 -> 0x8018C2E4
void zKevinPlayerAIJump::AddActionTransitions(class zKevinPlayerAIJump * this /* r30 */, class xAnimTable * table /* r31 */) {
}
// Range: 0x8018C2F0 -> 0x8018C364
void zKevinPlayerFall::AddActionTransitions(class zKevinPlayerFall * this /* r30 */, class xAnimTable * table /* r31 */) {
}
// Range: 0x8018C370 -> 0x8018C374
void zKevinPlayerLedge::Setup() {
}
// Range: 0x8018C380 -> 0x8018C470
void zKevinPlayerMelee::AddAttacks(class zCombatAttack * attackStates /* r20 */) {
    // Local variables
    class zCombatAttack * attack; // r0
}
// signature: zKevinDangleBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x8018C470 -> 0x8018C4E4
void zKevinDangleBE(class xAnimState * state /* r30 */, void * object /* r31 */) {
    // Local variables
    class zUPPlayer * player; // r0
    class zAnimPackage * currentPackage; // r0
}
// signature: zKevinPlayerDangle::ReleaseCB(xAnimTransition *, xAnimSingle *)
// Range: 0x8018C4F0 -> 0x8018C798
unsigned int zKevinPlayerDangle::ReleaseCB(class zKevinPlayerDangle * this /* r31 */) {
    // Local variables
    class xVec3 dpos; // r1+0x20
    float peak; // f7
    float peakTime; // f0
    float fallTime; // f0
    float airTime; // f4

    // References
    // -> class zGlobals globals;
}
// Range: 0x8018C7A0 -> 0x8018C9AC
void zKevinPlayerDangle::AddStates(class zKevinPlayerDangle * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x8018C9B0 -> 0x8018CC28
void zKevinPlayerDangle::AddInternalTransitions(class xAnimTable * table /* r25 */) {
}
// Range: 0x8018CD60 -> 0x8018CE0C
void zKevinPlayerDangle::AddActionTransitions(class xAnimTable * table /* r28 */) {
}
// signature: zKevinPlayerDangle::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8018CE10 -> 0x8018CE80
void zKevinPlayerDangle::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x8018CE80 -> 0x8018CE84
void zKevinPlayerDangle::Setup() {
}
// Range: 0x8018CE90 -> 0x8018D024
void zKevinPlayerDangle::Begin(class zKevinPlayerDangle * this /* r31 */) {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x8018D030 -> 0x8018D1EC
void zKevinPlayerDangle::Move(class zKevinPlayerDangle * this /* r29 */, class xScene * s /* r31 */, float dt /* f31 */, class xEntFrame * frame /* r30 */) {
    // Local variables
    unsigned int animFlags; // r0

    {
        // Range: 0x8018D068 -> 0x8018D1A4
        // Local variables
        class xVec3 playerPos; // r1+0x20
        class xVec3 dpos; // r1+0x2C
    }
}
// Range: 0x8018D1F0 -> 0x8018D280
void zKevinPlayerDangle::End(class zKevinPlayerDangle * this /* r30 */) {
}
// signature: zKevinPlayerDangle::CanStartCombo(unsigned int) const
// Range: 0x8018D280 -> 0x8018D2A8
bool zKevinPlayerDangle::CanStartCombo() const {
}
// signature: zKevinPlayerDangle::GetLandingPos(const zPlayer *, xVec3 &)
// Range: 0x8018D2B0 -> 0x8018D33C
void zKevinPlayerDangle::GetLandingPos() {
}
// Range: 0x8018D340 -> 0x8018D508
void zKevinPlayerSpringboard::AddStates(class zKevinPlayerSpringboard * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x8018D510 -> 0x8018D5C8
void zKevinPlayerSpringboard::AddActionTransitions(class zKevinPlayerSpringboard * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x8018D5D0 -> 0x8018D80C
void zKevinPlayerSpringboard::AddInternalTransitions(class xAnimTable * table /* r25 */) {
}
// Range: 0x8018D960 -> 0x8018DC90
void zKevinPlayerSpringboard::Begin(class zKevinPlayerSpringboard * this /* r28 */) {
    // Local variables
    class zDirection * tempDir; // r0
    class xVec3 tempVec; // r1+0x68

    {
        // Range: 0x8018DB68 -> 0x8018DC10
        // Local variables
        class xVec3 p3; // r1+0x5C
    }

    // References
    // -> struct {} __vt__23hkpConvexTranslateShape;
    // -> static class xVec3 SpringboardBodyOffset;
    // -> float hkConvexShapeDefaultRadius;
    // -> static class xVec3 SpringboardBody;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: zSpringboardBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x8018DC90 -> 0x8018DD0C
void zSpringboardBE(class xAnimState * state /* r30 */, void * object /* r31 */) {
    // Local variables
    class zUPPlayer * player; // r0
    class zAnimPackage * currentPackage; // r0
}
// Range: 0x8018DD10 -> 0x8018DF20
void zKevinPlayerSpringboard::End(class zKevinPlayerSpringboard * this /* r28 */) {
    // References
    // -> struct {} __vt__23hkpConvexTranslateShape;
    // -> static class xVec3 SpringboardBodyOffset;
    // -> float hkConvexShapeDefaultRadius;
    // -> static class xVec3 SpringboardBody;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: zKevinPlayerSpringboard::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8018DF20 -> 0x8018DF90
void zKevinPlayerSpringboard::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// signature: zKevinPlayerSpringboard::Move(xScene *, float, xEntFrame *)
// Range: 0x8018E010 -> 0x8018E0A0
void zKevinPlayerSpringboard::Move(class zKevinPlayerSpringboard * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 targetVec; // r1+0x8
}
// Range: 0x8018E0A0 -> 0x8018E1A8
void zKevinPlayerUnsummon::AddStates(class zKevinPlayerUnsummon * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x8018E1B0 -> 0x8018E270
void zKevinPlayerUnsummon::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x8018E270 -> 0x8018E2EC
void zKevinPlayerUnsummon::AddActionTransitions(class zKevinPlayerUnsummon * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zKevinPlayerUnsummon::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8018E2F0 -> 0x8018E360
void zKevinPlayerUnsummon::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
