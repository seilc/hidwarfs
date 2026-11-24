/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCommonPlayer.cpp
*/
float CENTER_OF_MASS_HEIGHT; // size: 0x4, address: 0x806F42F4
float HP_START; // size: 0x4, address: 0x806CC0A0
float HP_GAME_MAX_MAXHEALTH; // size: 0x4, address: 0x806CC0A4
static class compositeEffect rumbleEffects[3]; // size: 0x150, address: 0x8076C4A0
static float run_timer; // size: 0x4, address: 0x8076C5F0
static float multiplier; // size: 0x4, address: 0x8076C5F4
// signature: @unnamed@WAD01_cpp@::envCollisionCB(xEnt *, xSweptSphere *, xEnv *)
// Range: 0x800B0420 -> 0x800B0430
static int @unnamed@WAD01_cpp@::envCollisionCB() {
}
// signature: @unnamed@WAD01_cpp@::BeforeAnimMatricesWrapper(xAnimPlay *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x800B0430 -> 0x800B0468
static void @unnamed@WAD01_cpp@::BeforeAnimMatricesWrapper(class xAnimPlay * play /* r11 */, class xQuat * quat /* r10 */, class xVec3 * scale /* r9 */, class xVec3 * tran /* r0 */) {
}
// signature: @unnamed@WAD01_cpp@::AfterAnimMatricesWrapper(xAnimPlay *, Math::Matrix43 *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x800B0480 -> 0x800B04EC
static void @unnamed@WAD01_cpp@::AfterAnimMatricesWrapper(class xAnimPlay * play /* r30 */, class Matrix43 * skinMat /* r31 */, class xQuat * quat /* r11 */, class xVec3 * scale /* r10 */, class xVec3 * tran /* r0 */) {
}
// Range: 0x800B0500 -> 0x800B05A4
void zCommonPlayer::SetupRumbles() {
    // References
    // -> static unsigned int PLAYER_RUMBLE_ID;
    // -> static class compositeEffect rumbleEffects[3];
}
// Range: 0x800B05B0 -> 0x800B0624
void zCommonPlayer::Rumble(class zCommonPlayer * this /* r29 */, unsigned int rumbleType /* r30 */) {
    // References
    // -> static class compositeEffect rumbleEffects[3];
}
// Range: 0x800B0630 -> 0x800B06F0
void * zCommonPlayer::zCommonPlayer(class zCommonPlayer * this /* r31 */) {
    // References
    // -> class xVec3 m_Null;
    // -> struct {} __vt__13zCommonPlayer;
}
// Range: 0x800B07F0 -> 0x800B09D8
void zCommonPlayer::Init(class zCommonPlayer * this /* r30 */, class xEntAsset * asset /* r29 */) {
    // References
    // -> class xVec3 g_O3;
}
// Range: 0x800B09E0 -> 0x800B0A34
void zCommonPlayer::Exit(class zCommonPlayer * this /* r31 */) {
}
// Range: 0x800B0A40 -> 0x800B0A8C
void zCommonPlayer::LoadSetupUpgrades(class zCommonPlayer * this /* r31 */) {
}
// Range: 0x800B0A90 -> 0x800B0CF4
void zCommonPlayer::Reset(class zCommonPlayer * this /* r29 */) {
    // Local variables
    class zCombat * combat; // r0
}
// signature: zCommonPlayer::AttackHit(const xVec3 &, bool)
// Range: 0x800B0D00 -> 0x800B0D04
void zCommonPlayer::AttackHit() {
}
// Range: 0x800B0D10 -> 0x800B0D64
void zCommonPlayer::Save(class zCommonPlayer * this /* r30 */, class xSerial * serial /* r31 */) {
}
// Range: 0x800B0D70 -> 0x800B0E00
void zCommonPlayer::Load(class zCommonPlayer * this /* r30 */, class xSerial * serial /* r31 */) {
}
// Range: 0x800B0E00 -> 0x800B11A8
void zCommonPlayer::DefaultUpdate(class zCommonPlayer * this /* r30 */, float dt /* f31 */) {
    // Local variables
    bool running; // r28

    {
        // Range: 0x800B10D4 -> 0x800B1170
        // Local variables
        class xCounter * counter20; // r0
        class xCounter * counter19; // r0
    }

    // References
    // -> static float run_timer;
    // -> class xGlobals * xglobals;
}
// Range: 0x800B11B0 -> 0x800B12C4
void zCommonPlayer::DefaultEndUpdate(class zCommonPlayer * this /* r31 */, float dt /* f31 */) {
    // References
    // -> static class xEnt * combatList[96];
    // -> static unsigned int currentCombat;
}
// signature: zCommonPlayer::UpdateGrabObject(float)
// Range: 0x800B12D0 -> 0x800B1CF0
void zCommonPlayer::UpdateGrabObject(class zCommonPlayer * this /* r29 */) {
    // Local variables
    char tmpStateName[256]; // r1+0x108
    class xAnimSingle * playerAnim; // r5
    class xAnimState * itemAnim; // r28
    bool isFullyAnimated; // r30

    {
        // Range: 0x800B13C0 -> 0x800B13E4
        // Local variables
        class xEntBoulder * boul; // r0
    }
    {
        // Range: 0x800B13E4 -> 0x800B1C4C
        // Local variables
        float restHeight; // f31
        class xEntBoulder * boul; // r30
        class xVec3 rotatedLC; // r1+0x28
        class xMat4x3 objMat; // r1+0xC8
        class xQuat tmpquat; // r1+0x60
        class xVec3 tmpscale; // r1+0x70
        class xVec3 tmptran; // r1+0x7C
        float time; // f29

        {
            // Range: 0x800B1470 -> 0x800B1550
            // Local variables
            class xAnimSingle * single; // r28

            {
                // Range: 0x800B14A8 -> 0x800B1550
                // Local variables
                class xAnimState * blendState; // r27

                {
                    // Range: 0x800B14F0 -> 0x800B1550
                    // Local variables
                    class xVec3 blendtran; // r1+0x34
                    class xVec3 blendscale; // r1+0x40
                    class xQuat blendquat; // r1+0x50
                }
            }
        }
        {
            // Range: 0x800B161C -> 0x800B16F8
            // Local variables
            float rsqr; // f7
        }
        {
            // Range: 0x800B16F8 -> 0x800B17C0
            // Local variables
            class xMat4x3 targetMat; // r1+0x88

            {
                // Range: 0x800B1750 -> 0x800B17C0
                // Local variables
                float lerp; // f1
            }
        }
        {
            // Range: 0x800B1804 -> 0x800B18D8
            // Local variables
            class xQuat orient; // r1+0x18
            float lerp; // f0
        }
        {
            // Range: 0x800B18E4 -> 0x800B19B8
            // Local variables
            float bottom; // f1
        }
        {
            // Range: 0x800B1A74 -> 0x800B1BDC
            // Local variables
            class xMat4x3 * model_mat; // r0
            class xVec3 old_center; // r1+0x8
        }
    }

    // References
    // -> class xVec3 g_Y3;
    // -> class xMat4x3 g_I3;
}
// Range: 0x800B1CF0 -> 0x800B1D24
void zCommonPlayer::Render(class zCommonPlayer * this /* r31 */) {
}
// Range: 0x800B1D30 -> 0x800B1D34
void zCommonPlayer::RenderCustomUI() {
}
// Range: 0x800B1D40 -> 0x800B1D44
void zCommonPlayer::PostRenderCleanup() {
}
// Range: 0x800B1D50 -> 0x800B1E48
void zCommonPlayer::HandleControl(class zCommonPlayer * this /* r31 */, float dt /* f29 */) {
}
// signature: zCommonPlayer::HandleMovement(xScene *, float, xEntFrame *)
// Range: 0x800B1E50 -> 0x800B2474
void zCommonPlayer::HandleMovement(class zCommonPlayer * this /* r29 */, float dt /* f31 */, class xEntFrame * frame /* r30 */) {
    // Local variables
    class xVec3 gustVec; // r1+0x14

    {
        // Range: 0x800B1EA4 -> 0x800B2014
        // Local variables
        int flyDown; // r0
        int flyUp; // r0
        int turbo; // r0
    }
    {
        // Range: 0x800B2014 -> 0x800B211C
        // Local variables
        float diffAngle; // f0
        float curAngle; // f0

        {
            // Range: 0x800B2098 -> 0x800B20D4
            // Local variables
            float max; // f0
        }
        {
            // Range: 0x800B20D8 -> 0x800B2110
            // Local variables
            float max; // f0
        }
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x800B2480 -> 0x800B25BC
void zCommonPlayer::DefaultMove(class zCommonPlayer * this /* r29 */, class xScene * s /* r30 */, float dt /* f29 */, class xEntFrame * frame /* r31 */) {
}
// Range: 0x800B25C0 -> 0x800B26D8
bool zCommonPlayer::GotoInteraction(class zCommonPlayer * this /* r31 */, class zInteraction * action /* r28 */, class pointer_asset * pointer /* r29 */) {
    // Local variables
    class EventActionMoveToTarget params; // r1+0x8
}
// signature: zCommonPlayer::StopInteraction(zInteraction *)
// Range: 0x800B26F0 -> 0x800B2748
void zCommonPlayer::StopInteraction() {
}
// Range: 0x800B2750 -> 0x800B2754
void zCommonPlayer::SavedFriend() {
}
// Range: 0x800B2760 -> 0x800B2A0C
void zCommonPlayer::HandleEvent(class zCommonPlayer * this /* r27 */, class xBase * from /* r28 */, unsigned int toEvent /* r29 */, class EventAny * genericParams /* r30 */) {
    {
        // Range: 0x800B285C -> 0x800B2908
        // Local variables
        class pointer_asset * toParamWidgetPtr; // r5
        class EventActionMoveToTarget * params; // r0
    }
    {
        // Range: 0x800B2908 -> 0x800B2924
        // Local variables
        class zPlayerTriggered * triggered; // r0
    }
}
// signature: zCommonPlayer::EnvCollision(xSweptSphere *, xEnv *)
// Range: 0x800B2A10 -> 0x800B2AAC
int zCommonPlayer::EnvCollision(class zCommonPlayer * this /* r30 */, class xSweptSphere * sphere /* r31 */) {
}
// signature: zCommonPlayer::EnemyKilled(zNPCBase *)
// Range: 0x800B2AB0 -> 0x800B2AE4
void zCommonPlayer::EnemyKilled(class zCommonPlayer * this /* r31 */) {
}
// signature: zCommonPlayer::SetNewHitType(zCommonPlayer::HitType)
// Range: 0x800B2AF0 -> 0x800B2B04
void zCommonPlayer::SetNewHitType() {
}
// Range: 0x800B2B10 -> 0x800B38E0
bool zCommonPlayer::Damage(class zCommonPlayer * this /* r26 */, class zCombatDamageInfo * damageInfo /* r27 */) {
    // Local variables
    enum zHitSource hitSource; // r28
    bool force_knockback; // r0
    bool noJuggleDamage; // r24
    float damage; // f31
    class zCombat * combat; // r0
    float newHitPoints; // f28
    float ratio; // f28
    int damageResponse; // r31
    class xVec3 knockback; // r1+0x50
    bool playerDamage; // r0

    {
        // Range: 0x800B347C -> 0x800B357C
        // Local variables
        class xVec3 * entPos; // r0
        class xEnt * ent; // r0
    }
    {
        // Range: 0x800B35A4 -> 0x800B3618
        // Local variables
        class hkVector4 hkDamageDir; // r1+0x40
    }
    {
        // Range: 0x800B361C -> 0x800B36A4
        // Local variables
        class xVec3 impartVelocityVec; // r1+0x34
    }
    {
        // Range: 0x800B36A8 -> 0x800B383C
        // Local variables
        class xVec3 knockBackDir; // r1+0x28

        {
            // Range: 0x800B36B4 -> 0x800B37AC
            // Local variables
            float horiz; // f0
        }
    }

    // References
    // -> class xVec3 g_Y3;
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// Range: 0x800B3920 -> 0x800B3984
bool zCommonPlayer::IsDead(class zCommonPlayer * this /* r30 */) const {
}
// Range: 0x800B3990 -> 0x800B39B4
float zCommonPlayer::GetCurrentHealth() {
    // Local variables
    class zCombat * combat; // r0
}
// Range: 0x800B39C0 -> 0x800B3BB8
void zCommonPlayer::GiveHealth(class zCommonPlayer * this /* r29 */, float hitPoints /* f30 */, bool from_pickup /* r30 */) {
    // Local variables
    class zCombat * combat; // r0

    {
        // Range: 0x800B3AD4 -> 0x800B3B4C
        // Local variables
        float ratio; // f31
    }
}
// Range: 0x800B3BC0 -> 0x800B3BE8
void zCommonPlayer::ResetHealth() {
    // Local variables
    class zCombat * combat; // r0
}
// Range: 0x800B3BF0 -> 0x800B3C10
bool zCommonPlayer::IsFloorColliding() const {
}
// Range: 0x800B3C10 -> 0x800B3C18
class xVec3 * zCommonPlayer::GetFloorPosition() const {
}
// signature: zCommonPlayer::PredictY(float) const
// Range: 0x800B3C30 -> 0x800B3C34
float zCommonPlayer::PredictY() const {
}
// Range: 0x800B3C40 -> 0x800B3C48
bool zCommonPlayer::IsJumping() const {
}
// Range: 0x800B3C50 -> 0x800B3C80
bool zCommonPlayer::IsLanding() const {
}
// Range: 0x800B3C80 -> 0x800B3CE0
bool zCommonPlayer::NeedsHealth() const {
    // Local variables
    class zCombat * combat; // r0
}
// Range: 0x800B3CE0 -> 0x800B3D3C
void zCommonPlayer::ApplyGust(class zCommonPlayer * this /* r30 */, class xVec3 * gust /* r31 */) {
}
// Range: 0x800B3D50 -> 0x800B3DAC
void zCommonPlayer::ApplyBasicPhysics(class zCommonPlayer * this /* r30 */, class xVec3 * dpos /* r31 */) {
}
// Range: 0x800B3DC0 -> 0x800B3E1C
void zCommonPlayer::ParseIni() {
    // References
    // -> static float JUMP_DECEL;
    // -> static float JUMP_VELOCITY;
    // -> static float JUMP_HEIGHT;
}
// Range: 0x800B3E20 -> 0x800B3E90
unsigned int zCommonPlayer::MoveInfo() const {
    // Local variables
    unsigned int animflags; // r0
    unsigned int infoflags; // r3
}
// signature: zCommonPlayer::ZeroPointGrab(zNPCBase *)
// Range: 0x800B3E90 -> 0x800B3F3C
void zCommonPlayer::ZeroPointGrab(class zCommonPlayer * this /* r30 */) {
    // Local variables
    enum eNPCType zeroPointTypeEnum; // r0

    {
        // Range: 0x800B3EC8 -> 0x800B3EE8
        // Local variables
        class zNPCTrapProjectile * trapProjectile; // r31
    }
    {
        // Range: 0x800B3EE8 -> 0x800B3F04
        // Local variables
        class zNPCSteward * steward; // r31
    }
}
// signature: zCommonPlayer::ZeroPointRelease(zNPCBase *)
// Range: 0x800B3F40 -> 0x800B3F84
void zCommonPlayer::ZeroPointRelease() {
}
// signature: zCommonPlayer::ZeroPointThrow(zNPCBase *)
// Range: 0x800B3F90 -> 0x800B3FF0
void zCommonPlayer::ZeroPointThrow() {
}
// Range: 0x800B3FF0 -> 0x800B4004
void zCommonPlayer::ZeroPointResetState() {
}
// Range: 0x800B4010 -> 0x800B408C
enum ZeroPointState zCommonPlayer::GetZeroPointState(class zCommonPlayer * this /* r31 */) {
    {
        // Range: 0x800B4028 -> 0x800B4074
        // Local variables
        enum eNPCType zeroPointTypeEnum; // r0
    }
}
// Range: 0x800B4090 -> 0x800B4098
enum ZeroPointFacing zCommonPlayer::GetZeroPointFacing() {
}
// signature: zCommonPlayer::BoundUpdate(xVec3 *)
// Range: 0x800B40A0 -> 0x800B4120
void zCommonPlayer::BoundUpdate() {
}
// Range: 0x800B4120 -> 0x800B416C
void zCommonPlayer::BeginUpdate(class zCommonPlayer * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x800B4170 -> 0x800B42B8
void zCommonPlayer::DefaultBeginUpdate(class zCommonPlayer * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x800B42C0 -> 0x800B4304
class xVec3 zCommonPlayer::get_target() {
}
// Range: 0x800B4310 -> 0x800B447C
void zCommonPlayer::InitCombat(class zCommonPlayer * this /* r28 */, class zCombatAttack * attackTableStates /* r29 */, unsigned short attackTableStateCount /* r30 */) {
    // Local variables
    class zCombat * combat; // r31
}
// Range: 0x800B44B0 -> 0x800B4560
bool zCommonPlayer::StayOnGround(class zCommonPlayer * this /* r29 */) {
}
// signature: zCommonPlayer::RegisterCollision(const SphereCollisionResults &)
// Range: 0x800B4560 -> 0x800B4564
void zCommonPlayer::RegisterCollision() {
}
// signature: zCommonPlayer::Update_FlyCheatMode(float)
// Range: 0x800B4570 -> 0x800B467C
void zCommonPlayer::Update_FlyCheatMode(class zCommonPlayer * this /* r30 */) {
    // References
    // -> class xVec3 g_O3;
    // -> class zGlobals globals;
}
// signature: zCommonPlayer::AbsControl(float, float, float)
// Range: 0x800B4690 -> 0x800B4694
void zCommonPlayer::AbsControl() {
}
// Range: 0x800B46A0 -> 0x800B46A8
bool zCommonPlayer::DoCriticalCollisionCheck() const {
}
// Range: 0x800B46B0 -> 0x800B49CC
bool zCommonPlayer::LedgeMove(class zCommonPlayer * this /* r30 */, float dt /* f31 */) {
    // Local variables
    class xVec3 dest; // r1+0x20
    class xVec3 working; // r1+0x14
    class xVec3 diff; // r1+0x8
    float length2; // f0
    float length; // f0
    float maxSpeed; // f0

    {
        // Range: 0x800B46F4 -> 0x800B4720
        // Local variables
        unsigned int animFlags; // r0
    }
}
// Range: 0x800B49D0 -> 0x800B49E4
void zCommonPlayer::ResetInvincibilityTimer() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x800B49F0 -> 0x800B4A40
void zCommonPlayer::AddStates(class zCommonPlayer * this /* r30 */, class xAnimTable * table /* r31 */) {
}
// signature: zCommonPlayer::AddTransitions(xAnimTable *)
// Range: 0x800B4A40 -> 0x800B4A44
void zCommonPlayer::AddTransitions() {
}
// Range: 0x800B4A50 -> 0x800B4A68
void zCommonPlayer::LoadUpgrades() {
}
// signature: zCommonPlayer::SetUpgrade(zCommonPlayerUpgradeType, zCommonPlayerUpgradeLevel)
// Range: 0x800B4A70 -> 0x800B4A80
void zCommonPlayer::SetUpgrade() {
}
// Range: 0x800B4A80 -> 0x800B4B00
float zCommonPlayer::GetNoiseLevel(class zCommonPlayer * this /* r30 */) {
    // Local variables
    float noise; // f31
}
// Range: 0x800B4B00 -> 0x800B4BEC
void zCommonPlayer::SetAsSafePos() {
    // Local variables
    float dist; // f0

    {
        // Range: 0x800B4B84 -> 0x800B4BCC
        // Local variables
        int i; // r0
    }
}
// Range: 0x800B4BF0 -> 0x800B4BF8
class xVec3 * zCommonPlayer::GetSafePos() {
}
// Range: 0x800B4C00 -> 0x800B4C98
void zCommonPlayer::DefaultUpdateFall(class zCommonPlayer * this /* r31 */, float dt /* f31 */) {
}
// signature: zCommonPlayer::ShouldDepenObject(xBase *)
// Range: 0x800B4CA0 -> 0x800B4CB0
bool zCommonPlayer::ShouldDepenObject() {
}
// Range: 0x800B4CB0 -> 0x800B4CD8
bool zCommonPlayer::IsDummyPlayer() const {
    // References
    // -> unsigned int SCENE_ID_MNU_START;
    // -> class zGlobals globals;
}
// signature: zCommonPlayer::ForceRigidBodyForm(bool)
// Range: 0x800B4CE0 -> 0x800B4CF4
void zCommonPlayer::ForceRigidBodyForm() {
}
// signature: zCommonPlayer::LockRigidBodyForm(bool)
// Range: 0x800B4D00 -> 0x800B4D98
void zCommonPlayer::LockRigidBodyForm(class zCommonPlayer * this /* r30 */) {
    {
        // Range: 0x800B4D08 -> 0x800B4D80
        // Local variables
        class zCam * camMgr; // r31
    }
}
