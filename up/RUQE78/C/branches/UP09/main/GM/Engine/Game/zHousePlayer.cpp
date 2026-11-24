/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zHousePlayer.cpp
*/
// signature: zHousePlayer::Init(Sext::xEntAsset *)
// Range: 0x8017DAE0 -> 0x8017DBD4
void zHousePlayer::Init(class zHousePlayer * this /* r31 */) {
    // References
    // -> float HP_START;
}
// Range: 0x8017DBE0 -> 0x8017E15C
void zHousePlayer::InitActions(class zHousePlayer * this /* r31 */) {
    // References
    // -> struct {} __vt__12zPlayerCheat;
    // -> struct {} __vt__17zPlayerCustomAnim;
    // -> struct {} __vt__13zPlayerMGLose;
    // -> struct {} __vt__12zPlayerMGWin;
    // -> struct {} __vt__18zPlayerWalkStartUP;
    // -> struct {} __vt__17zCommonPlayerDash;
    // -> struct {} __vt__15zPlayerPushPull;
    // -> struct {} __vt__14zPlayerFainted;
    // -> struct {} __vt__16zPlayerHitLaunch;
    // -> struct {} __vt__10zPlayerHit;
    // -> struct {} __vt__12zPlayerMelee;
    // -> struct {} __vt__16zPlayerTriggered;
    // -> struct {} __vt__13zPlayerLandUP;
    // -> struct {} __vt__18zPlayerFallToDeath;
    // -> struct {} __vt__16zHousePlayerFall;
    // -> struct {} __vt__16zHousePlayerJump;
    // -> struct {} __vt__11zPlayerSlip;
    // -> struct {} __vt__15zHousePlayerRun;
    // -> struct {} __vt__16zHousePlayerWalk;
    // -> struct {} __vt__15zPlayerSkidStop;
    // -> struct {} __vt__16zHousePlayerIdle;
}
// Range: 0x8017E160 -> 0x8017E3A8
void zHousePlayer::ParseIni(class zHousePlayer * this /* r30 */) {
    // Local variables
    float DEFAULT_SPEED_NORMAL[6]; // r1+0x38
    float DEFAULT_SPEED_JUMP[6]; // r1+0x20
    float DEFAULT_ANIM_WALK[3]; // r1+0x14
    float DEFAULT_ANIM_RUN[3]; // r1+0x8
}
// Range: 0x8017E3B0 -> 0x8017E3B4
void zHousePlayer::SceneSetup() {
}
// Range: 0x8017E3C0 -> 0x8017E438
void zHousePlayer::Reset(class zHousePlayer * this /* r31 */) {
    {
        // Range: 0x8017E3E4 -> 0x8017E420
        // Local variables
        class hkVector4 hk_pos; // r1+0x10
    }
}
// signature: zHousePlayer::DefaultBeginUpdate(float)
// Range: 0x8017E440 -> 0x8017E444
void zHousePlayer::DefaultBeginUpdate() {
}
// signature: zHousePlayer::DefaultUpdate(float)
// Range: 0x8017E450 -> 0x8017E454
void zHousePlayer::DefaultUpdate() {
}
// signature: zHousePlayer::DefaultMove(xScene *, float, xEntFrame *)
// Range: 0x8017E460 -> 0x8017E464
void zHousePlayer::DefaultMove() {
}
// signature: zHousePlayer::DefaultEndUpdate(float)
// Range: 0x8017E470 -> 0x8017E474
void zHousePlayer::DefaultEndUpdate() {
}
// signature: zHousePlayer::AbsControl(float, float, float)
// Range: 0x8017E480 -> 0x8017E484
void zHousePlayer::AbsControl() {
}
// Range: 0x8017E490 -> 0x8017E494
void zHousePlayer::Exit() {
}
// signature: zHousePlayer::GetInteractionTestPos(unsigned int, xVec3 &)
// Range: 0x8017E4A0 -> 0x8017E548
void zHousePlayer::GetInteractionTestPos() {
}
// Range: 0x8017E550 -> 0x8017E5C8
void zHousePlayer::SetupFirstPersonCam() {
}
// Range: 0x8017E5D0 -> 0x8017E5DC
float zHousePlayer::GetCapsuleHeight() {
}
// Range: 0x8017E5E0 -> 0x8017E5E8
float zHousePlayer::GetRigidBodyHeight() {
}
// signature: zHousePlayer::UpdateCharacterProxy(float)
// Range: 0x8017E5F0 -> 0x8017E5F4
void zHousePlayer::UpdateCharacterProxy() {
}
// Range: 0x8017E600 -> 0x8017E998
void zHousePlayer::HavokSetup(class zHousePlayer * this /* r30 */) {
    {
        // Range: 0x8017E648 -> 0x8017E954
        // Local variables
        class hkVector4 hk_pos; // r1+0x20
        class xVec3 & pos; // r0
        class hkVector4 gravity; // r1+0x30
        class hkpCharacterProxyCinfo cpci; // r1+0x60
        class hkpPropertyValue onVal; // r1+0x18
        class hkVector4 v1; // r1+0x40
        class hkVector4 v0; // r1+0x50
        float len; // f4
    }

    // References
    // -> class hkTransform hkTransformIdentity;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: zHousePlayer::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8017E9E0 -> 0x8017E9E4
void zHousePlayer::HandleEvent() {
}
