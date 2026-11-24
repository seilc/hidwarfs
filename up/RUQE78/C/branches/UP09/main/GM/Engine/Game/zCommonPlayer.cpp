/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCommonPlayer.cpp
*/
float CENTER_OF_MASS_HEIGHT; // size: 0x4, address: 0x807A368C
float HP_START; // size: 0x4, address: 0x8077DE68
float HP_GAME_MAX_MAXHEALTH; // size: 0x4, address: 0x8077DE6C
static class compositeEffect rumbleEffects[6]; // size: 0x480, address: 0x8081C790
static class BadgePoint * bagePointAsset; // size: 0x4, address: 0x8081CC10
static float run_timer; // size: 0x4, address: 0x8081CC14
static class xtextbox tb; // size: 0x88, address: 0x8081CC18
// signature: @unnamed@WAD01_cpp@::BeforeAnimMatricesWrapper(xAnimPlay *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x80139250 -> 0x80139288
static void @unnamed@WAD01_cpp@::BeforeAnimMatricesWrapper(class xAnimPlay * play /* r11 */, class xQuat * quat /* r10 */, class xVec3 * scale /* r9 */, class xVec3 * tran /* r0 */) {
}
// signature: @unnamed@WAD01_cpp@::AfterAnimMatricesWrapper(xAnimPlay *, Math::Matrix43 *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x801392A0 -> 0x8013930C
static void @unnamed@WAD01_cpp@::AfterAnimMatricesWrapper(class xAnimPlay * play /* r30 */, class Matrix43 * skinMat /* r31 */, class xQuat * quat /* r11 */, class xVec3 * scale /* r10 */, class xVec3 * tran /* r0 */) {
}
// Range: 0x80139310 -> 0x801393E4
void zCommonPlayer::AfterAnimMatrices(class zCommonPlayer * this /* r25 */, class xAnimPlay * play /* r26 */, class Matrix43 * skinMat /* r27 */, class xQuat * quatresult /* r28 */, class xVec3 * scaleresult /* r29 */, class xVec3 * tranresult /* r30 */, int boneCount /* r31 */) {
    // References
    // -> float dt;
}
// Range: 0x801393F0 -> 0x80139554
void zCommonPlayer::SetupRumbles() {
    // References
    // -> static unsigned int PLAYER_RUMBLE_ID;
    // -> static class compositeEffect rumbleEffects[6];
}
// Range: 0x80139560 -> 0x801395E0
void zCommonPlayer::Rumble(class zCommonPlayer * this /* r29 */, unsigned int rumbleType /* r30 */) {
    // References
    // -> static class compositeEffect rumbleEffects[6];
}
// signature: zCommonPlayer::zCommonPlayer(World::EntityHandleBase *)
// Range: 0x801395E0 -> 0x801396F0
void * zCommonPlayer::zCommonPlayer(class zCommonPlayer * this /* r30 */) {
    // References
    // -> class xVec3 m_Null;
    // -> struct {} __vt__9zPlayerAI;
    // -> struct {} __vt__9zBTClient;
    // -> struct {} __vt__13zCommonPlayer;
}
// Range: 0x80139760 -> 0x801398B0
void zCommonPlayer::Init(class zCommonPlayer * this /* r30 */, class xEntAsset * asset /* r31 */) {
    // References
    // -> class xVec3 g_O3;
}
// Range: 0x801398B0 -> 0x801398F4
void zCommonPlayer::SceneSetup() {
    // References
    // -> static class BadgePoint * bagePointAsset;
}
// Range: 0x80139900 -> 0x80139968
void zCommonPlayer::Exit(class zCommonPlayer * this /* r31 */) {
}
// Range: 0x80139970 -> 0x80139974
void zCommonPlayer::ResetActionFlags() {
}
// signature: zCommonPlayer::SwitchedToHuman(bool)
// Range: 0x80139980 -> 0x801399B4
void zCommonPlayer::SwitchedToHuman(class zCommonPlayer * this /* r31 */) {
}
// signature: zCommonPlayer::SwitchedToAI(bool)
// Range: 0x801399C0 -> 0x801399C4
void zCommonPlayer::SwitchedToAI() {
}
// signature: zCommonPlayer::SetPlayerTransform(const xMat4x3 *, const xVec3 *, const float *)
// Range: 0x801399D0 -> 0x80139C50
void zCommonPlayer::SetPlayerTransform(class zCommonPlayer * this /* r30 */, class xMat4x3 * newTransform /* r31 */) {
    // Local variables
    class hkVector4 hk_pos; // r1+0x10

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x80139C50 -> 0x80139CC4
float zCommonPlayer::GetLastGoodY(class zCommonPlayer * this /* r31 */) {
}
// Range: 0x80139CD0 -> 0x8013A01C
void zCommonPlayer::Reset(class zCommonPlayer * this /* r31 */) {
    {
        // Range: 0x80139E04 -> 0x80139ECC
        // Local variables
        class zPlayerInput * input; // r0
    }

    // References
    // -> class xQuat g_IQ;
    // -> class xVec3 m_UnitAxisZ;
}
// signature: zCommonPlayer::AttackHit(const xVec3 &, bool)
// Range: 0x8013A020 -> 0x8013A024
void zCommonPlayer::AttackHit() {
}
// Range: 0x8013A030 -> 0x8013A080
void zCommonPlayer::Save(class xSerial * serial /* r31 */) {
    // References
    // -> class zPlayerInventory inventory;
}
// Range: 0x8013A080 -> 0x8013A124
void zCommonPlayer::Load(class zCommonPlayer * this /* r30 */, class xSerial * serial /* r31 */) {
    // Local variables
    float newhp; // r1+0x8

    // References
    // -> class zPlayerInventory inventory;
}
// Range: 0x8013A130 -> 0x8013A738
void zCommonPlayer::DefaultUpdate(class zCommonPlayer * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x8013A424 -> 0x8013A4D0
        // Local variables
        class zCombatDamageInfo info; // r1+0x20
    }
    {
        // Range: 0x8013A55C -> 0x8013A630
        // Local variables
        class xCounter * counter20; // r0
        class xCounter * counter19; // r0
    }

    // References
    // -> class xVec3 m_Null;
    // -> static float run_timer;
    // -> class xGlobals * xglobals;
}
// Range: 0x8013A740 -> 0x8013AA28
void zCommonPlayer::DefaultEndUpdate(class zCommonPlayer * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x8013A8D0 -> 0x8013A9A8
        // Local variables
        int triID; // r1+0x8
        int edgeID; // r1+0xC
        class xVec3 edgeN; // r1+0x1C
        class xVec3 closestPos; // r1+0x28
    }

    // References
    // -> class zGlobals globals;
    // -> static class xEnt * combatList[96];
    // -> static unsigned int currentCombat;
}
// Range: 0x8013AA30 -> 0x8013AA34
void zCommonPlayer::Render() {
}
// Range: 0x8013AA40 -> 0x8013AA44
void zCommonPlayer::RenderCustomUI() {
}
// Range: 0x8013AA50 -> 0x8013AA54
void zCommonPlayer::PostRenderCleanup() {
}
// Range: 0x8013AA60 -> 0x8013AB44
void zCommonPlayer::HandleControl(class zCommonPlayer * this /* r31 */, float dt /* f30 */) {
    // Local variables
    class xVec2 stickInput; // r1+0x8
}
// signature: zCommonPlayer::HandleMovement(xScene *, float, xEntFrame *)
// Range: 0x8013AB50 -> 0x8013B18C
void zCommonPlayer::HandleMovement(class zCommonPlayer * this /* r23 */, float dt /* f31 */, class xEntFrame * frame /* r24 */) {
    {
        // Range: 0x8013AB84 -> 0x8013AE20
        // Local variables
        int flyDown; // r0
        int flyUp; // r0
        int turbo; // r0

        {
            // Range: 0x8013ABEC -> 0x8013AD38
            // Local variables
            int px; // r25

            {
                // Range: 0x8013AC0C -> 0x8013AD38
                // Local variables
                int PflyDown; // r0
                int PflyUp; // r0
                int Pturbo; // r0
            }
        }
    }

    // References
    // -> class zGlobals globals;
    // -> class xGlobals * xglobals;
}
// Range: 0x8013B1C0 -> 0x8013BAE8
void zCommonPlayer::HandleEvent(class zCommonPlayer * this /* r28 */, class xBase * from /* r29 */, unsigned int toEvent /* r30 */, class EventAny * genericParams /* r31 */) {
    {
        // Range: 0x8013B3D4 -> 0x8013B4D8
        // Local variables
        class xVec3 facing; // r1+0x30
        class xVec3 dest; // r1+0x3C
        class zDirection * toParamWidgetPtr; // r26
        class EventActionMoveToTarget * params; // r0
    }
    {
        // Range: 0x8013B4D8 -> 0x8013B4F4
        // Local variables
        class zPlayerTriggered * triggered; // r0
    }
    {
        // Range: 0x8013B510 -> 0x8013B5D4
        // Local variables
        class EventActionHealth * params; // r0
    }
    {
        // Range: 0x8013B5D8 -> 0x8013B62C
        // Local variables
        class EventActionHealth * params; // r0
    }
    {
        // Range: 0x8013B630 -> 0x8013B640
        // Local variables
        class EventActionHealthF * params; // r0
    }
    {
        // Range: 0x8013B6A8 -> 0x8013B888
        // Local variables
        int disableCamReset; // r27
        class zDirection * direction; // r0
        class xBase * toParamWidgetPtr; // r26
        class EventActionSetPlayerPosition * params; // r0

        {
            // Range: 0x8013B6FC -> 0x8013B830
            // Local variables
            float angle; // r1+0x8
            class xVec3 upVec; // r1+0x24
            class xMat4x3 newMat; // r1+0x78
        }
    }
    {
        // Range: 0x8013B88C -> 0x8013B8DC
        // Local variables
        class zPlayerCustomAnim * ga; // r25
    }
    {
        // Range: 0x8013B8DC -> 0x8013B91C
        // Local variables
        class zPlayerCustomAnim * ga; // r0
    }
    {
        // Range: 0x8013B91C -> 0x8013B934
        // Local variables
        class zPlayerCustomAnim * ga; // r0
    }
    {
        // Range: 0x8013B934 -> 0x8013B9A0
        // Local variables
        class xBase * targetBase; // r5
        class EventActionEnt * params; // r0
    }
    {
        // Range: 0x8013B9B0 -> 0x8013BA1C
        // Local variables
        class EventActionJawboneAnimateOnPlayer * params; // r0

        {
            // Range: 0x8013B9F8 -> 0x8013BA14
            // Local variables
            class zFXSpawn * fxSpawnAsset; // r0
        }
    }
    {
        // Range: 0x8013BA2C -> 0x8013BA44
        // Local variables
        class zPlayerAICommand * command; // r0
    }
    {
        // Range: 0x8013BA54 -> 0x8013BAB0
        // Local variables
        class zPlayerInput * input; // r0
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zCommonPlayer::EnemyKilled(zNPCBase *)
// Range: 0x8013BB10 -> 0x8013BB14
void zCommonPlayer::EnemyKilled() {
}
// Range: 0x8013BB20 -> 0x8013C704
bool zCommonPlayer::Damage(class zCommonPlayer * this /* r27 */, class zCombatDamageInfo & damageInfo /* r28 */) {
    // Local variables
    enum eHitSource hitSource; // r30
    bool force_knockback; // r0
    bool noJuggleDamage; // r29
    float damage; // f31
    float newHitPoints; // f30
    int damageResponse; // r29
    class xVec3 knockback; // r1+0x50
    bool playerDamage; // r0

    {
        // Range: 0x8013BE80 -> 0x8013BF14
        // Local variables
        unsigned int userData; // r25
        class zNPCEntity * npc; // r0
    }
    {
        // Range: 0x8013C038 -> 0x8013C094
        // Local variables
        class BadgePoint * bpasset; // r9
    }
    {
        // Range: 0x8013C360 -> 0x8013C46C
        // Local variables
        class xVec3 * entPos; // r0
        class xEnt * ent; // r0
    }
    {
        // Range: 0x8013C494 -> 0x8013C50C
        // Local variables
        class hkVector4 hkDamageDir; // r1+0x40
    }
    {
        // Range: 0x8013C510 -> 0x8013C570
        // Local variables
        class xVec3 impartVelocityVec; // r1+0x28
    }
    {
        // Range: 0x8013C574 -> 0x8013C624
        // Local variables
        class xVec3 knockBackDir; // r1+0x1C
    }

    // References
    // -> class xVec3 g_Y3;
    // -> class zPlayerInventory inventory;
    // -> static class BadgePoint * bagePointAsset;
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// Range: 0x8013C710 -> 0x8013C780
bool zCommonPlayer::IsDead(class zCommonPlayer * this /* r30 */) const {
}
// Range: 0x8013C780 -> 0x8013C814
void zCommonPlayer::RegenHealth(class zCommonPlayer * this /* r31 */, float regenRate /* f30 */, float dt /* f31 */) {
}
// Range: 0x8013C820 -> 0x8013C9BC
void zCommonPlayer::GiveHealth(class zCommonPlayer * this /* r30 */, float hitPoints /* f30 */, bool from_pickup /* r31 */) {
}
// Range: 0x8013C9C0 -> 0x8013CA0C
void zCommonPlayer::ResetHealth(class zCommonPlayer * this /* r31 */) {
}
// signature: zCommonPlayer::PredictY(float) const
// Range: 0x8013CA30 -> 0x8013CA34
float zCommonPlayer::PredictY() const {
}
// Range: 0x8013CA50 -> 0x8013CA80
bool zCommonPlayer::IsLanding() const {
}
// Range: 0x8013CA80 -> 0x8013CB18
bool zCommonPlayer::NeedsHealth(class zCommonPlayer * this /* r31 */) const {
}
// Range: 0x8013CB20 -> 0x8013CB7C
void zCommonPlayer::ApplyGust(class zCommonPlayer * this /* r30 */, class xVec3 & gust /* r31 */) {
}
// Range: 0x8013CB90 -> 0x8013CBEC
void zCommonPlayer::ApplyBasicPhysics(class zCommonPlayer * this /* r30 */, class xVec3 & dpos /* r31 */) {
}
// Range: 0x8013CC00 -> 0x8013CC04
void zCommonPlayer::ParseIni() {
}
// signature: zCommonPlayer::ZeroPointGrab(zNPCBase *)
// Range: 0x8013CC10 -> 0x8013CC18
void zCommonPlayer::ZeroPointGrab() {
}
// signature: zCommonPlayer::ZeroPointRelease(zNPCBase *)
// Range: 0x8013CC20 -> 0x8013CC88
void zCommonPlayer::ZeroPointRelease(class zCommonPlayer * this /* r31 */) {
}
// signature: zCommonPlayer::ZeroPointThrow(zNPCBase *)
// Range: 0x8013CCA0 -> 0x8013CD24
void zCommonPlayer::ZeroPointThrow(class zCommonPlayer * this /* r31 */) {
}
// Range: 0x8013CD30 -> 0x8013CD44
void zCommonPlayer::ZeroPointResetState() {
}
// signature: zCommonPlayer::BeginUpdate(float)
// Range: 0x8013CD50 -> 0x8013CD54
void zCommonPlayer::BeginUpdate() {
}
// Range: 0x8013CD60 -> 0x8013CF24
void zCommonPlayer::DefaultBeginUpdate(class zCommonPlayer * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x8013CF30 -> 0x8013CFE4
class xVec3 zCommonPlayer::get_target(class zCommonPlayer * this /* r31 */) {
    // References
    // -> class xSphere sphere;
}
// signature: zCommonPlayer::ApplyAnimPhysics(float)
// Range: 0x8013CFF0 -> 0x8013DAE8
void zCommonPlayer::ApplyAnimPhysics(class zCommonPlayer * this /* r29 */) {
    // Local variables
    float trans[3]; // r1+0xB8
    float quat[4]; // r1+0xA8
    class xAnimState * state; // r31
    class ComboAnimBlobAssetV2 * comboAnimV2; // r30

    {
        // Range: 0x8013D8F0 -> 0x8013D9E8
        // Local variables
        class xVec3 deltaTrans; // r1+0x98
    }
    {
        // Range: 0x8013D9E8 -> 0x8013DA14
        // Local variables
        float deltaYaw; // f1
    }
    {
        // Range: 0x8013DA14 -> 0x8013DAA4
        // Local variables
        class xQuat newQuat; // r1+0x68
        class xQuat currentQuat; // r1+0x78
        class xQuat deltaQuat; // r1+0x88
    }
}
// Range: 0x8013DAF0 -> 0x8013DC44
void zCommonPlayer::InitCombat(class zCommonPlayer * this /* r31 */, class zCombatAttack * attackTableStates /* r29 */, unsigned short attackTableStateCount /* r30 */) {
}
// Range: 0x8013DC80 -> 0x8013DD30
bool zCommonPlayer::StayOnGround(class zCommonPlayer * this /* r29 */) {
}
// signature: zCommonPlayer::RegisterCollision(const SphereCollisionResults &)
// Range: 0x8013DD30 -> 0x8013DD34
void zCommonPlayer::RegisterCollision() {
}
// signature: zCommonPlayer::Update_FlyCheatMode(float)
// Range: 0x8013DD50 -> 0x8013E320
void zCommonPlayer::Update_FlyCheatMode(class zCommonPlayer * this /* r27 */) {
    {
        // Range: 0x8013DD94 -> 0x8013E030
        // Local variables
        char str[32]; // r1+0x8
    }
    {
        // Range: 0x8013E138 -> 0x8013E1B4
        // Local variables
        int x; // r29
    }
    {
        // Range: 0x8013E1CC -> 0x8013E2D4
        // Local variables
        int x; // r27
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class xVec3 g_O3;
    // -> class zGlobals globals;
    // -> static class basic_rect screen_safe_bounds;
    // -> class callback text_cb;
    // -> static class xtextbox tb;
    // -> class xColor g_WHITE;
    // -> class xColor g_BLACK;
    // -> static class basic_rect screen_bounds;
}
// Range: 0x8013E390 -> 0x8013E414
float zCommonPlayer::GetAngleCameraSpace(float angle /* f31 */) {
    // Local variables
    class xMat4x3 * m; // r0
    float camAngle; // f0
}
// signature: zCommonPlayer::UpdateCameraMatrix(float, float, float)
// Range: 0x8013E420 -> 0x8013E530
void zCommonPlayer::UpdateCameraMatrix(class zCommonPlayer * this /* r25 */, float x /* f30 */, float y /* f31 */) {
}
// Range: 0x8013E530 -> 0x8013F6B4
void zCommonPlayer::AbsControl(class zCommonPlayer * this /* r27 */, float x /* f26 */, float z /* f30 */, float dt /* f27 */) {
    // Local variables
    float scalemag; // f0
    float turnfactor; // f29
    float angle; // r1+0xC
    float mag; // r1+0x8
    float absmag; // f28
    bool move; // r28
    float diffAngle; // f0
    bool disableTurning; // r3

    {
        // Range: 0x8013EA98 -> 0x8013EBBC
        // Local variables
        float diff; // f0
        float maxDecel; // f25

        {
            // Range: 0x8013EAC8 -> 0x8013EB4C
            // Local variables
            float animTime; // f3
            float decellerp; // f3
        }
    }
    {
        // Range: 0x8013EBBC -> 0x8013EBDC
        // Local variables
        float diff; // f1
        float MAX_ACCEL; // f0
    }
    {
        // Range: 0x8013EC3C -> 0x8013F160
        // Local variables
        float * moveSpeed; // r5

        {
            // Range: 0x8013EC60 -> 0x8013EE78
            // Local variables
            float dist; // f0
            class xVec3 diffPos; // r1+0x40
            bool doneMoving; // r6
        }
        {
            // Range: 0x8013EE78 -> 0x8013EF80
            // Local variables
            class xVec3 curInput; // r1+0x34
        }
        {
            // Range: 0x8013EFA8 -> 0x8013F160
            // Local variables
            float diffWalkLerp; // f1
            float desiredWalkLerp; // f3
        }
    }
    {
        // Range: 0x8013F1D4 -> 0x8013F550
        // Local variables
        float cosAngle; // f0
        float sinAngle; // f0
        unsigned int moveFlag; // r0

        {
            // Range: 0x8013F4B0 -> 0x8013F550
            // Local variables
            float actualDist2; // f0
            class xVec3 actualDisp; // r1+0x28
            float tryDist2; // f5
        }
    }
}
// signature: zCommonPlayer::UpdateStickFlick(float, float)
// Range: 0x8013F6C0 -> 0x8013F800
void zCommonPlayer::UpdateStickFlick(class zCommonPlayer * this /* r31 */, float dt /* f31 */) {
    // Local variables
    float STICK_FLICK_MIN; // f0
    float STICK_FLICK_MAX; // f0

    {
        // Range: 0x8013F744 -> 0x8013F7B0
        // Local variables
        float ad; // f0
    }
}
// signature: zCommonPlayer::AutoDampenControls(float *, float *, float)
// Range: 0x8013F800 -> 0x8013FBB4
bool zCommonPlayer::AutoDampenControls(class zCommonPlayer * this /* r29 */, float * angle /* r30 */, float * mag /* r31 */) {
    // Local variables
    float radYaw; // f31
    class xVec3 disp; // r1+0x14
    float dist; // f0
    float maxParam; // f30
    class xVec3 finalAim; // r1+0x8
    float dot; // f0
    class xFuncPiece pathX; // r1+0x40
    class xFuncPiece pathZ; // r1+0x20
    float x; // f31
    float z; // f2

    {
        // Range: 0x8013F950 -> 0x8013FA7C
        // Local variables
        float len; // f0
    }
    {
        // Range: 0x8013FB38 -> 0x8013FB6C
        // Local variables
        float interp; // f2
    }
    {
        // Range: 0x8013FB6C -> 0x8013FB88
        // Local variables
        float interp; // f2
    }
}
// signature: zCommonPlayer::LeanUpdate(float, float)
// Range: 0x8013FBC0 -> 0x8013FCE8
void zCommonPlayer::LeanUpdate() {
    // Local variables
    float desiredLean; // f4
    float diffLerp; // f1
    float diffAbs; // f0
}
// Range: 0x8013FD00 -> 0x80140004
bool zCommonPlayer::LedgeMove(class zCommonPlayer * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 dest; // r1+0x20
    class xVec3 working; // r1+0x14
    class xVec3 diff; // r1+0x8
    float length2; // f0
    float length; // f0
    float maxSpeed; // f0

    {
        // Range: 0x8013FD20 -> 0x8013FD4C
        // Local variables
        unsigned int animFlags; // r0
    }
}
// Range: 0x80140010 -> 0x80140024
void zCommonPlayer::ResetInvincibilityTimer() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x80140030 -> 0x80140080
void zCommonPlayer::AddStates(class zCommonPlayer * this /* r30 */, class xAnimTable * table /* r31 */) {
}
// signature: zCommonPlayer::AddTransitions(xAnimTable *)
// Range: 0x80140080 -> 0x80140084
void zCommonPlayer::AddTransitions() {
}
// Range: 0x80140090 -> 0x801400A0
bool zCommonPlayer::CanSwitchPlayer() {
}
// Range: 0x801400B0 -> 0x801400C8
void zCommonPlayer::LoadUpgrades() {
}
// signature: zCommonPlayer::SetUpgrade(zCommonPlayerUpgradeType, zCommonPlayerUpgradeLevel)
// Range: 0x801400D0 -> 0x801400E0
void zCommonPlayer::SetUpgrade() {
}
// Range: 0x801400E0 -> 0x8014015C
float zCommonPlayer::GetNoiseLevel(class zCommonPlayer * this /* r31 */) {
    // Local variables
    float noise; // f31
}
// Range: 0x80140160 -> 0x8014024C
void zCommonPlayer::SetAsSafePos() {
    // Local variables
    float dist; // f0

    {
        // Range: 0x801401E4 -> 0x8014022C
        // Local variables
        int i; // r0
    }
}
// Range: 0x80140250 -> 0x80140258
class xVec3 * zCommonPlayer::GetSafePos() {
}
// Range: 0x80140260 -> 0x801402DC
void zCommonPlayer::DefaultUpdateFall(class zCommonPlayer * this /* r31 */, float dt /* f31 */) {
}
// signature: zCommonPlayer::ShouldDepenObject(xBase *)
// Range: 0x801402E0 -> 0x801402F0
bool zCommonPlayer::ShouldDepenObject() {
}
// Range: 0x801402F0 -> 0x8014034C
bool zCommonPlayer::SkipCharacterProxyHavokUpdate(class zCommonPlayer * this /* r31 */) {
}
// signature: zCommonPlayer::GetAngleDiff(const xVec3 *, const xVec3 *)
// Range: 0x80140350 -> 0x801403BC
float zCommonPlayer::GetAngleDiff(class xVec3 * startDir /* r31 */) {
    // Local variables
    float angle_caller; // f0
    float angle_true; // f0
}
// Range: 0x801403C0 -> 0x80140428
bool zCommonPlayer::MountCheck(class zCommonPlayer * this /* r30 */, class xOGEntity * object /* r31 */) {
}
// signature: GetTheOtherActivePlayer(zCommonPlayer *)
// Range: 0x80140430 -> 0x80140480
class zCommonPlayer * GetTheOtherActivePlayer() {
    {
        // Range: 0x80140434 -> 0x8014043C
        // Local variables
        int i; // r6
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80140480 -> 0x8014052C
class zCommonPlayer * GetActiveHumanPlayer(class zCommonPlayer * thisPlayer /* r28 */) {
    {
        // Range: 0x801404A0 -> 0x801404F4
        // Local variables
        int i; // r29
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: GetPlayerByName(zCommonPlayer *, ePlayerName)
// Range: 0x80140530 -> 0x8014058C
class zCommonPlayer * GetPlayerByName() {
    {
        // Range: 0x80140534 -> 0x8014053C
        // Local variables
        int i; // r8
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80140590 -> 0x801405EC
class zCommonPlayer * GetPrimaryPlayer() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x801405F0 -> 0x80140668
void zCommonPlayer::HeadTrackingSetFocusEnt(class zCommonPlayer * this /* r30 */, class xEnt * pFocusEnt /* r31 */) {
}
// signature: zCommonPlayer::HeadTrackingSetFocusVec(xVec3 *, bool)
// Range: 0x80140670 -> 0x801406B0
void zCommonPlayer::HeadTrackingSetFocusVec() {
}
// signature: zCommonPlayer::DriveCauseMove(xMat4x3 *, xMat4x3 *, xMat4x3 *, xMat4x3 *, bool, bool, float, float)
// Range: 0x801406B0 -> 0x80140AB8
void zCommonPlayer::DriveCauseMove(class zCommonPlayer * this /* r30 */, class xMat4x3 * parent /* r27 */, class xMat4x3 * lastMat /* r28 */, bool rotate /* r31 */, bool yaw /* r29 */, float dt /* f31 */) {
    // Local variables
    class xVec3 scale; // r1+0xA4
    class xVec3 newEuler; // r1+0x98
    class xVec3 lastEuler; // r1+0x8C
    class xMat4x3 baseMat; // r1+0x1C0
    class xMat4x3 InvRel; // r1+0x180
    class xVec3 Rl; // r1+0x80

    {
        // Range: 0x80140730 -> 0x801407B0
        // Local variables
        float dummy; // r1+0x14
        class xMat3x3 a_descaled; // r1+0x150
    }
    {
        // Range: 0x801407B0 -> 0x80140884
        // Local variables
        class xMat4x3 tempMat; // r1+0x110

        {
            // Range: 0x801407F0 -> 0x80140868
            // Local variables
            class xMat3x3 rot; // r1+0xE0

            {
                // Range: 0x80140800 -> 0x80140820
                // Local variables
                float yawDiff; // f1
            }
        }
    }
    {
        // Range: 0x801408C4 -> 0x80140A58
        // Local variables
        class xQuat quat; // r1+0x70
        class xMat3x3 tempMat; // r1+0xB0
        class xMat4x3 * pMat; // r0

        {
            // Range: 0x8014097C -> 0x801409EC
            // Local variables
            class hkpPropertyValue val; // r1+0x20
        }
    }
}
