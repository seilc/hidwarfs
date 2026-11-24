/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zEvePlayerActions.cpp
*/
static class xVec3 SCAN_LOCAL_OFFSET; // size: 0xC, address: 0x806CF7B4
// Range: 0x8015C1D0 -> 0x8015C2A4
void zEvePlayerIdle::AddStates(class zEvePlayerIdle * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zEvePlayerIdle::Move(xScene *, float, xEntFrame *)
// Range: 0x8015C2B0 -> 0x8015C2C4
void zEvePlayerIdle::Move() {
}
// Range: 0x8015C2D0 -> 0x8015C2DC
void zEvePlayerIdle::Begin() {
}
// Range: 0x8015C2E0 -> 0x8015C2E4
void zEvePlayerIdle::End() {
}
// signature: zEvePlayerIdle::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8015C2F0 -> 0x8015C414
void zEvePlayerIdle::AddTransitionsFrom(class xAnimTable * table /* r25 */, char * fromStates /* r26 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r28 */, unsigned short priority /* r29 */, float blend /* f31 */, unsigned int flags /* r30 */, unsigned int userFlags /* r31 */) {
}
// Range: 0x8015C4E0 -> 0x8015C664
void zEvePlayerIdle::AddInternalTransitions(class xAnimTable * table /* r24 */) {
}
// Range: 0x8015C9C0 -> 0x8015CC0C
void zEvePlayerIdle::AddActionTransitions(class zEvePlayerIdle * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zEvePlayerIdle::ApplyGust(xVec3 &)
// Range: 0x8015CC10 -> 0x8015CC14
void zEvePlayerIdle::ApplyGust() {
}
// Range: 0x8015CC20 -> 0x8015CD7C
void zEvePlayerCheat::AddActionTransitions(class zEvePlayerCheat * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x8015CD80 -> 0x8015CE9C
void zEvePlayerFly::AddStates(class zEvePlayerFly * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x8015CEA0 -> 0x8015D020
void zEvePlayerFly::AddInternalTransitions(class xAnimTable * table /* r24 */) {
}
// Range: 0x8015D340 -> 0x8015D590
void zEvePlayerFly::AddActionTransitions(class zEvePlayerFly * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zEvePlayerFly::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8015D590 -> 0x8015D6B8
void zEvePlayerFly::AddTransitionsFrom(class xAnimTable * table /* r25 */, char * fromStates /* r26 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r28 */, unsigned short priority /* r29 */, float blend /* f31 */, unsigned int flags /* r30 */, unsigned int userFlags /* r31 */) {
}
// Range: 0x8015D7E0 -> 0x8015D940
void zEvePlayerBoost::AddStates(class zEvePlayerBoost * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x8015D940 -> 0x8015DB40
void zEvePlayerBoost::AddInternalTransitions(class xAnimTable * table /* r24 */) {
}
// Range: 0x8015DF10 -> 0x8015E15C
void zEvePlayerBoost::AddActionTransitions(class zEvePlayerBoost * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zEvePlayerBoost::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8015E160 -> 0x8015E288
void zEvePlayerBoost::AddTransitionsFrom(class xAnimTable * table /* r25 */, char * fromStates /* r26 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r28 */, unsigned short priority /* r29 */, float blend /* f31 */, unsigned int flags /* r30 */, unsigned int userFlags /* r31 */) {
}
// Range: 0x8015E3B0 -> 0x8015E3C0
void zEvePlayerBoost::Begin() {
}
// Range: 0x8015E3C0 -> 0x8015E4DC
void zEvePlayerBrake::AddStates(class zEvePlayerBrake * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x8015E4E0 -> 0x8015E660
void zEvePlayerBrake::AddInternalTransitions(class xAnimTable * table /* r24 */) {
}
// Range: 0x8015EA10 -> 0x8015EC60
void zEvePlayerBrake::AddActionTransitions(class zEvePlayerBrake * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zEvePlayerBrake::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8015ECF0 -> 0x8015EE18
void zEvePlayerBrake::AddTransitionsFrom(class xAnimTable * table /* r25 */, char * fromStates /* r26 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r28 */, unsigned short priority /* r29 */, float blend /* f31 */, unsigned int flags /* r30 */, unsigned int userFlags /* r31 */) {
}
// Range: 0x8015EFB0 -> 0x8015F0CC
void zEvePlayerBoostBrake::AddStates(class zEvePlayerBoostBrake * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x8015F0D0 -> 0x8015F250
void zEvePlayerBoostBrake::AddInternalTransitions(class xAnimTable * table /* r24 */) {
}
// Range: 0x8015F600 -> 0x8015F850
void zEvePlayerBoostBrake::AddActionTransitions(class zEvePlayerBoostBrake * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zEvePlayerBoostBrake::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8015F8E0 -> 0x8015FA08
void zEvePlayerBoostBrake::AddTransitionsFrom(class xAnimTable * table /* r25 */, char * fromStates /* r26 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r28 */, unsigned short priority /* r29 */, float blend /* f31 */, unsigned int flags /* r30 */, unsigned int userFlags /* r31 */) {
}
// signature: zEvePlayerTurnAround::AddStates(xAnimTable *)
// Range: 0x8015FBA0 -> 0x8015FC1C
void zEvePlayerTurnAround::AddStates() {
}
// signature: zEvePlayerTurnAround::AddInternalTransitions(xAnimTable *)
// Range: 0x8015FC20 -> 0x8015FC24
void zEvePlayerTurnAround::AddInternalTransitions() {
}
// Range: 0x8015FC30 -> 0x8015FE7C
void zEvePlayerTurnAround::AddActionTransitions(class zEvePlayerTurnAround * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zEvePlayerTurnAround::AddStandardTransitionsFrom(xAnimTable *, const char *)
// Range: 0x8015FE80 -> 0x8015FED0
void zEvePlayerTurnAround::AddStandardTransitionsFrom() {
}
// signature: zEvePlayerTurnAround::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8015FED0 -> 0x8015FF4C
void zEvePlayerTurnAround::AddTransitionsFrom() {
}
// Range: 0x8015FFD0 -> 0x8016019C
void zEvePlayerTurnAround::Update(class zEvePlayerTurnAround * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x8016001C -> 0x8016017C
        // Local variables
        class xQuat destOrientation; // r1+0x8
        class xQuat result; // r1+0x18
        class zEvePlayer * ePlayer; // r30
    }
}
// Range: 0x801601A0 -> 0x80160388
void zEvePlayerTurnAround::Begin(class zEvePlayerTurnAround * this /* r29 */) {
    // Local variables
    class zEvePlayer * ePlayer; // r30

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801603E0 -> 0x801604A4
void zEvePlayerTurnAround::End() {
    // Local variables
    class zEvePlayer * ePlayer; // r3

    {
        // Range: 0x80160424 -> 0x80160494
        // Local variables
        class xVec3 vel; // r1+0x14
    }
}
// signature: zEvePlayerTurnAround::BeforeAnimMatricesCB(xAnimPlay *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x801604B0 -> 0x80160610
void zEvePlayerTurnAround::BeforeAnimMatricesCB() {
    // Local variables
    class zEvePlayerTurnAround * thisPtr; // r31
    class zEvePlayer * ePlayer; // r30
    class xEntFrame * playerFrame; // r29
    class xQuat * anchorQuat; // r28
    class xQuat diffQuat; // r1+0x8
    class xMat3x3 diffMat; // r1+0x18
}
// signature: zEvePlayerScan::AddStates(xAnimTable *)
// Range: 0x80160610 -> 0x80160684
void zEvePlayerScan::AddStates() {
}
// signature: zEvePlayerScan::AddInternalTransitions(xAnimTable *)
// Range: 0x80160690 -> 0x80160694
void zEvePlayerScan::AddInternalTransitions() {
}
// Range: 0x801606A0 -> 0x801608F0
void zEvePlayerScan::AddActionTransitions(class zEvePlayerScan * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zEvePlayerScan::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x801609E0 -> 0x80160A5C
void zEvePlayerScan::AddTransitionsFrom() {
}
// Range: 0x80160B30 -> 0x80160B94
void zEvePlayerScan::Update(class zEvePlayerScan * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x80160BA0 -> 0x80160C0C
void zEvePlayerScan::Begin(class zEvePlayerScan * this /* r31 */) {
    // References
    // -> static class xVec3 SCAN_LOCAL_OFFSET;
}
// Range: 0x80160C10 -> 0x80160C54
void zEvePlayerScan::End(class zEvePlayerScan * this /* r31 */) {
}
// Range: 0x80160C60 -> 0x80160DB8
void zEvePlayerDefeated::AddStates(class zEvePlayerDefeated * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zEvePlayerDefeated::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80160DC0 -> 0x80160E3C
void zEvePlayerDefeated::AddTransitionsFrom() {
}
// Range: 0x80160E40 -> 0x80160F18
void zEvePlayerDefeated::Update(class zEvePlayerDefeated * this /* r30 */, float dt /* f31 */) {
    // Local variables
    class hkVector4 vel; // r1+0x10
    float fadeTime; // f0

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80160F20 -> 0x80160FE8
void zEvePlayerDefeated::Begin(class zEvePlayerDefeated * this /* r30 */) {
}
// Range: 0x80160FF0 -> 0x80161148
void zEvePlayerDamaged::AddStates(class zEvePlayerDamaged * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x80161150 -> 0x8016135C
void zEvePlayerDamaged::AddActionTransitions(class zEvePlayerDamaged * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zEvePlayerDamaged::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80161360 -> 0x80161540
void zEvePlayerDamaged::AddTransitionsFrom(class xAnimTable * table /* r25 */, char * fromStates /* r26 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r28 */, unsigned short priority /* r29 */, float blend /* f31 */, unsigned int flags /* r30 */, unsigned int userFlags /* r31 */) {
}
// signature: zEvePlayerDamaged::Update(float)
// Range: 0x801617B0 -> 0x801617C4
void zEvePlayerDamaged::Update() {
}
// Range: 0x801617D0 -> 0x801617E4
void zEvePlayerDamaged::End() {
}
