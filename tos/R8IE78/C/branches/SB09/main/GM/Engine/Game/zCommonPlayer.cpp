/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zCommonPlayer.cpp
*/
float CENTER_OF_MASS_HEIGHT; // size: 0x4, address: 0x806B51B0
float HP_START; // size: 0x4, address: 0x806898B4
float HP_GAME_MAX_MAXHEALTH; // size: 0x4, address: 0x806898B8
static class compositeEffect rumbleEffects[6]; // size: 0x480, address: 0x80732E28
static class BadgePoint * bagePointAsset; // size: 0x4, address: 0x807332A8
float run_timer; // size: 0x4, address: 0x8073405C
class xtextbox tb; // size: 0x88, address: 0x80734060
// signature: @unnamed@WAD01_cpp@::AfterAnimMatricesWrapper(xAnimPlay *, Math::Matrix43 *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x8009D5F0 -> 0x8009D654
static void @unnamed@WAD01_cpp@::AfterAnimMatricesWrapper(class xAnimPlay * play /* r30 */, class Matrix43 * skinMat /* r31 */, class xQuat * quat /* r11 */, class xVec3 * scale /* r10 */, class xVec3 * tran /* r0 */) {
}
// Range: 0x8009D660 -> 0x8009D728
void zCommonPlayer::AfterAnimMatrices(class zCommonPlayer * this /* r25 */, class xAnimPlay * play /* r26 */, class Matrix43 * skinMat /* r27 */, class xQuat * quatresult /* r28 */, class xVec3 * scaleresult /* r29 */, class xVec3 * tranresult /* r30 */, int boneCount /* r31 */) {
    // References
    // -> float dt;
}
// Range: 0x8009D730 -> 0x8009D894
void zCommonPlayer::SetupRumbles() {
    // References
    // -> static unsigned int PLAYER_RUMBLE_ID;
    // -> static class compositeEffect rumbleEffects[6];
}
// Range: 0x8009D8A0 -> 0x8009D944
void zCommonPlayer::Rumble(class zCommonPlayer * this /* r30 */, unsigned int rumbleType /* r31 */) {
    // References
    // -> static class compositeEffect rumbleEffects[6];
}
// signature: zCommonPlayer::zCommonPlayer(World::EntityHandleBase *)
// Range: 0x8009D950 -> 0x8009DA08
void * zCommonPlayer::zCommonPlayer(class zCommonPlayer * this /* r27 */) {
    {
        // Range: 0x8009D9B8 -> 0x8009D9EC
        // Local variables
        unsigned int iFloorVecInit; // r28
    }

    // References
    // -> class xVec3 m_Null;
    // -> struct {} __vt__13zCommonPlayer;
}
// Range: 0x8009DA70 -> 0x8009DB50
void zCommonPlayer::Init(class zCommonPlayer * this /* r29 */, class xEntAsset * asset /* r30 */) {
}
// Range: 0x8009DB50 -> 0x8009DB94
void zCommonPlayer::SceneSetup() {
    // References
    // -> static class BadgePoint * bagePointAsset;
}
// Range: 0x8009DBA0 -> 0x8009DBE0
void zCommonPlayer::Exit(class zCommonPlayer * this /* r31 */) {
}
// signature: zCommonPlayer::SwitchedToHuman(bool)
// Range: 0x8009DBE0 -> 0x8009DBE4
void zCommonPlayer::SwitchedToHuman() {
}
// signature: zCommonPlayer::SwitchedToAI(bool)
// Range: 0x8009DBF0 -> 0x8009DBF4
void zCommonPlayer::SwitchedToAI() {
}
// Range: 0x8009DC00 -> 0x8009DD28
void zCommonPlayer::SetPlayerTransform(class zCommonPlayer * this /* r28 */, class xMat4x3 * newTransform /* r29 */, class xVec3 * axis /* r30 */, float * angle /* r31 */) {
    // Local variables
    class hkVector4 hk_pos; // r1+0x10

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x8009DD30 -> 0x8009DDA4
float zCommonPlayer::GetLastGoodY(class zCommonPlayer * this /* r31 */) {
}
// Range: 0x8009DDB0 -> 0x8009E000
void zCommonPlayer::Reset(class zCommonPlayer * this /* r31 */) {
    {
        // Range: 0x8009DEB4 -> 0x8009DF14
        // Local variables
        class zPlayerInput * input; // r0
    }
}
// Range: 0x8009E000 -> 0x8009E050
void zCommonPlayer::Save(class xSerial * serial /* r31 */) {
    // References
    // -> class zPlayerInventory inventory;
}
// Range: 0x8009E050 -> 0x8009E0F4
void zCommonPlayer::Load(class zCommonPlayer * this /* r30 */, class xSerial * serial /* r31 */) {
    // Local variables
    float newhp; // r1+0x8

    // References
    // -> class zPlayerInventory inventory;
}
// Range: 0x8009E100 -> 0x8009E584
void zCommonPlayer::DefaultUpdate(class zCommonPlayer * this /* r31 */, float dt /* f31 */) {
    // Local variables
    bool running; // r0

    {
        // Range: 0x8009E36C -> 0x8009E3D0
        // Local variables
        class zCombatDamageInfo info; // r1+0x8
    }
    {
        // Range: 0x8009E45C -> 0x8009E530
        // Local variables
        class xCounter * counter20; // r0
        class xCounter * counter19; // r0
    }

    // References
    // -> float run_timer;
    // -> class xGlobals * xglobals;
}
// Range: 0x8009E590 -> 0x8009E6E0
void zCommonPlayer::DefaultEndUpdate(class zCommonPlayer * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x8009E618 -> 0x8009E6B8
        // Local variables
        int triID; // r1+0x8
        int edgeID; // r1+0xC
        class xVec3 edgeN; // r1+0x1C
        class xVec3 closestPos; // r1+0x28
    }
}
// Range: 0x8009E6E0 -> 0x8009E6E4
void zCommonPlayer::Render() {
}
// Range: 0x8009E6F0 -> 0x8009E92C
int zEntPlayerKnockToSafety(class zCommonPlayer * ent /* r28 */, class xVec3 & knockback /* r29 */) {
    // Local variables
    class xVec3 knockbackToPos; // r1+0x8
    float diffX; // f30
    float diffY; // f27
    float diffZ; // f29
    float diffXZ; // f0
    float popheight; // f27
    float tup; // f0
    float ttot; // f1
    float velY; // f0
    float velXZ; // f28

    // References
    // -> class zGlobals globals;
}
// Range: 0x8009E930 -> 0x8009EA20
void zCommonPlayer::HandleControl(class zCommonPlayer * this /* r31 */, float dt /* f31 */) {
}
// signature: zCommonPlayer::HandleMovement(xScene *, float, xEntFrame *)
// Range: 0x8009EA20 -> 0x8009EF3C
void zCommonPlayer::HandleMovement(class zCommonPlayer * this /* r24 */, float dt /* f31 */, class xEntFrame * frame /* r25 */) {
    {
        // Range: 0x8009EA54 -> 0x8009ECF0
        // Local variables
        int flyDown; // r0
        int flyUp; // r0
        int turbo; // r0

        {
            // Range: 0x8009EABC -> 0x8009EC1C
            // Local variables
            int px; // r26

            {
                // Range: 0x8009EADC -> 0x8009EC1C
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
// Range: 0x8009EF90 -> 0x8009F014
void zCommonPlayer::DefaultMove(class zCommonPlayer * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
}
// Range: 0x8009F020 -> 0x8009F758
void zCommonPlayer::HandleEvent(class zCommonPlayer * this /* r28 */, class xBase * from /* r29 */, unsigned int toEvent /* r30 */, class EventAny * genericParams /* r31 */) {
    {
        // Range: 0x8009F214 -> 0x8009F2AC
        // Local variables
        class xVec3 facing; // r1+0x18
        class xVec3 dest; // r1+0x24
        class zDirection * toParamWidgetPtr; // r26
        class EventActionMoveToTarget * params; // r0
    }
    {
        // Range: 0x8009F2AC -> 0x8009F2C8
        // Local variables
        class zPlayerTriggered * triggered; // r0
    }
    {
        // Range: 0x8009F2E4 -> 0x8009F3A4
        // Local variables
        class EventActionHealth * params; // r0
    }
    {
        // Range: 0x8009F3C4 -> 0x8009F3D0
        // Local variables
        class EventActionHealthF * params; // r0
    }
    {
        // Range: 0x8009F430 -> 0x8009F5BC
        // Local variables
        int disableCamReset; // r27
        class zDirection * direction; // r0
        class xBase * toParamWidgetPtr; // r26
        class EventActionSetPlayerPosition * params; // r0

        {
            // Range: 0x8009F488 -> 0x8009F5BC
            // Local variables
            float angle; // r1+0x8
            class xVec3 upVec; // r1+0xC
            class xMat4x3 newMat; // r1+0x30
        }
    }
    {
        // Range: 0x8009F5C0 -> 0x8009F5DC
        // Local variables
        class zPlayerCustomAnim * ga; // r0
    }
    {
        // Range: 0x8009F5DC -> 0x8009F5F0
        // Local variables
        class zPlayerCustomAnim * ga; // r0
    }
    {
        // Range: 0x8009F5F0 -> 0x8009F608
        // Local variables
        class zPlayerCustomAnim * ga; // r0
    }
    {
        // Range: 0x8009F608 -> 0x8009F674
        // Local variables
        class xBase * targetBase; // r5
        class EventActionEnt * params; // r0
    }
    {
        // Range: 0x8009F684 -> 0x8009F6F0
        // Local variables
        class EventActionJawboneAnimateOnPlayer * params; // r0

        {
            // Range: 0x8009F6CC -> 0x8009F6E8
            // Local variables
            class zFXSpawn * fxSpawnAsset; // r0
        }
    }
    {
        // Range: 0x8009F700 -> 0x8009F72C
        // Local variables
        class EventActionGoodPosDrive * params; // r0
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zCommonPlayer::EnemyKilled(zNPCBase *)
// Range: 0x8009F780 -> 0x8009F784
void zCommonPlayer::EnemyKilled() {
}
// Range: 0x8009F790 -> 0x8009FE70
bool zCommonPlayer::Damage(class zCommonPlayer * this /* r27 */, class zCombatDamageInfo & damageInfo /* r28 */) {
    // Local variables
    enum eHitSource hitSource; // r30
    bool noJuggleDamage; // r29
    float damage; // f31
    float newHitPoints; // f30
    int damageResponse; // r29
    class xVec3 knockback; // r1+0x14
    bool playerDamage; // r0

    {
        // Range: 0x8009FC9C -> 0x8009FCF4
        // Local variables
        class xEnt * ent; // r0
    }
    {
        // Range: 0x8009FD0C -> 0x8009FD6C
        // Local variables
        class xVec3 impartVelocityVec; // r1+0x8
    }

    // References
    // -> class xVec3 g_Y3;
    // -> class zGlobals globals;
}
// Range: 0x8009FE70 -> 0x8009FEF4
bool zCommonPlayer::IsDead(class zCommonPlayer * this /* r30 */) const {
}
// Range: 0x8009FF00 -> 0x8009FF94
void zCommonPlayer::RegenHealth(class zCommonPlayer * this /* r31 */, float regenRate /* f30 */, float dt /* f31 */) {
}
// Range: 0x8009FFA0 -> 0x800A0118
void zCommonPlayer::GiveHealth(class zCommonPlayer * this /* r30 */, float hitPoints /* f30 */, bool from_pickup /* r31 */) {
}
// Range: 0x800A0120 -> 0x800A016C
void zCommonPlayer::ResetHealth(class zCommonPlayer * this /* r31 */) {
}
// Range: 0x800A0170 -> 0x800A0174
bool zCommonPlayer::IsFloorColliding() const {
}
// Range: 0x800A0180 -> 0x800A0188
class xVec3 * zCommonPlayer::GetFloorPosition() const {
}
// signature: zCommonPlayer::PredictY(float) const
// Range: 0x800A0190 -> 0x800A0194
float zCommonPlayer::PredictY() const {
}
// Range: 0x800A01A0 -> 0x800A01D0
bool zCommonPlayer::IsLanding() const {
}
// Range: 0x800A01D0 -> 0x800A0268
bool zCommonPlayer::NeedsHealth(class zCommonPlayer * this /* r31 */) const {
}
// Range: 0x800A0270 -> 0x800A02C4
void zCommonPlayer::ApplyGust(class zCommonPlayer * this /* r30 */, class xVec3 & gust /* r31 */) {
}
// Range: 0x800A02D0 -> 0x800A0324
void zCommonPlayer::ApplyBasicPhysics(class zCommonPlayer * this /* r30 */, class xVec3 & dpos /* r31 */) {
}
// Range: 0x800A0330 -> 0x800A0378
unsigned int zCommonPlayer::MoveInfo() const {
    // Local variables
    unsigned int animflags; // r0
    unsigned int infoflags; // r3
}
// signature: zCommonPlayer::ZeroPointGrab(zNPCBase *)
// Range: 0x800A0380 -> 0x800A0388
void zCommonPlayer::ZeroPointGrab() {
}
// signature: zCommonPlayer::ZeroPointRelease(zNPCBase *)
// Range: 0x800A0390 -> 0x800A03D0
void zCommonPlayer::ZeroPointRelease(class zCommonPlayer * this /* r31 */) {
}
// signature: zCommonPlayer::ZeroPointThrow(zNPCBase *)
// Range: 0x800A0440 -> 0x800A0480
void zCommonPlayer::ZeroPointThrow(class zCommonPlayer * this /* r31 */) {
}
// Range: 0x800A0480 -> 0x800A0494
void zCommonPlayer::ZeroPointResetState() {
}
// signature: zCommonPlayer::BeginUpdate(float)
// Range: 0x800A04A0 -> 0x800A04A4
void zCommonPlayer::BeginUpdate() {
}
// Range: 0x800A04B0 -> 0x800A05C4
void zCommonPlayer::DefaultBeginUpdate(class zCommonPlayer * this /* r31 */, float dt /* f31 */) {
}
// signature: zCommonPlayer::ApplyAnimPhysics(float)
// Range: 0x800A05D0 -> 0x800A0884
void zCommonPlayer::ApplyAnimPhysics(class zCommonPlayer * this /* r29 */) {
    // Local variables
    float trans[3]; // r1+0x68
    float heading; // r1+0x8
    float quat[4]; // r1+0x58
    class xAnimState * state; // r31
    class ComboAnimBlobAssetV2 * comboAnimV2; // r30

    {
        // Range: 0x800A0734 -> 0x800A07C4
        // Local variables
        class xVec3 deltaTrans; // r1+0x48
    }
    {
        // Range: 0x800A07C4 -> 0x800A07F0
        // Local variables
        float deltaYaw; // f1
    }
    {
        // Range: 0x800A07F0 -> 0x800A086C
        // Local variables
        class xQuat newQuat; // r1+0x18
        class xQuat currentQuat; // r1+0x28
        class xQuat deltaQuat; // r1+0x38
    }
}
// Range: 0x800A0CB0 -> 0x800A0DC8
void zCommonPlayer::InitCombat(class zCommonPlayer * this /* r28 */, class zCombatAttack * attackTableStates /* r29 */, unsigned short attackTableStateCount /* r30 */) {
}
// signature: zCommonPlayer::Update_Velocity(float)
// Range: 0x800A0DD0 -> 0x800A0DFC
void zCommonPlayer::Update_Velocity() {
    // Local variables
    class xVec3 * v; // r3
}
// signature: zCommonPlayer::Update_FlyCheatMode(float)
// Range: 0x800A0E00 -> 0x800A1278
void zCommonPlayer::Update_FlyCheatMode(class zCommonPlayer * this /* r28 */) {
    {
        // Range: 0x800A0E2C -> 0x800A0FBC
        // Local variables
        char str[32]; // r1+0x10
    }
    {
        // Range: 0x800A10AC -> 0x800A113C
        // Local variables
        int x; // r26
    }
    {
        // Range: 0x800A1140 -> 0x800A1258
        // Local variables
        int x; // r28
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class xVec3 g_O3;
    // -> class zGlobals globals;
    // -> static class basic_rect screen_safe_bounds;
    // -> class xtextbox tb;
    // -> static class basic_rect screen_bounds;
    // -> class xColor g_WHITE;
    // -> class xColor g_BLACK;
}
// Range: 0x800A12D0 -> 0x800A1318
float zCommonPlayer::GetAngleCameraSpace(float angle /* f31 */) {
    // Local variables
    class xMat4x3 * m; // r0
    float camAngle; // f0
}
// Range: 0x800A1320 -> 0x800A21AC
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
        // Range: 0x800A16A8 -> 0x800A17B0
        // Local variables
        float diff; // f0
        float maxDecel; // f30

        {
            // Range: 0x800A16D8 -> 0x800A175C
            // Local variables
            float animTime; // f3
            float decellerp; // f3
        }
    }
    {
        // Range: 0x800A17B0 -> 0x800A17D0
        // Local variables
        float diff; // f1
        float MAX_ACCEL; // f0
    }
    {
        // Range: 0x800A1830 -> 0x800A1C84
        // Local variables
        float * moveSpeed; // r5

        {
            // Range: 0x800A1850 -> 0x800A19AC
            // Local variables
            float dist; // f0
            class xVec3 diffPos; // r1+0x28
            bool doneMoving; // r28
        }
        {
            // Range: 0x800A19AC -> 0x800A1AA4
            // Local variables
            class xVec3 curInput; // r1+0x1C
        }
        {
            // Range: 0x800A1ACC -> 0x800A1C84
            // Local variables
            float diffWalkLerp; // f1
            float desiredWalkLerp; // f3
        }
    }
    {
        // Range: 0x800A1D00 -> 0x800A2050
        // Local variables
        float cosAngle; // f0
        float sinAngle; // f0
        unsigned int moveFlag; // r0

        {
            // Range: 0x800A1FB0 -> 0x800A2050
            // Local variables
            float actualDist2; // f0
            class xVec3 actualDisp; // r1+0x10
            float tryDist2; // f29
        }
    }
}
// signature: zCommonPlayer::UpdateStickFlick(float, float)
// Range: 0x800A21B0 -> 0x800A22F0
void zCommonPlayer::UpdateStickFlick(class zCommonPlayer * this /* r31 */, float dt /* f31 */) {
    // Local variables
    float STICK_FLICK_MIN; // f0
    float STICK_FLICK_MAX; // f0

    {
        // Range: 0x800A2234 -> 0x800A22A0
        // Local variables
        float ad; // f0
    }
}
// signature: zCommonPlayer::AutoDampenControls(float *, float *, float)
// Range: 0x800A22F0 -> 0x800A25D0
bool zCommonPlayer::AutoDampenControls(class zCommonPlayer * this /* r29 */, float * angle /* r30 */, float * mag /* r31 */) {
    // Local variables
    float radYaw; // f30
    class xVec3 disp; // r1+0x14
    float dist; // r31
    float maxParam; // f29
    class xVec3 finalAim; // r1+0x8
    float dot; // f0
    class xFuncPiece pathX; // r1+0x40
    class xFuncPiece pathZ; // r1+0x20
    float x; // f30
    float z; // f2

    {
        // Range: 0x800A23E4 -> 0x800A2490
        // Local variables
        float len; // f0
    }
    {
        // Range: 0x800A254C -> 0x800A2580
        // Local variables
        float interp; // f2
    }
    {
        // Range: 0x800A2580 -> 0x800A259C
        // Local variables
        float interp; // f2
    }
}
// signature: zCommonPlayer::ProcessMovementSupression(float)
// Range: 0x800A25D0 -> 0x800A2628
float zCommonPlayer::ProcessMovementSupression() {
    {
        // Range: 0x800A25EC -> 0x800A2614
        // Local variables
        unsigned int i; // r5
    }
}
// signature: zCommonPlayer::LeanUpdate(float, float)
// Range: 0x800A2630 -> 0x800A2758
void zCommonPlayer::LeanUpdate() {
    // Local variables
    float desiredLean; // f4
    float diffLerp; // f1
    float diffAbs; // f0
}
// Range: 0x800A2760 -> 0x800A27E0
void zCommonPlayer::Init_Ledge(class zCommonPlayer * this /* r31 */) {
    // References
    // -> class xVec3 g_O3;
}
// Range: 0x800A27E0 -> 0x800A2A3C
bool zCommonPlayer::LedgeMove(class zCommonPlayer * this /* r31 */, float dt /* f30 */) {
    // Local variables
    class xVec3 dest; // r1+0x20
    class xVec3 working; // r1+0x14
    class xVec3 diff; // r1+0x8
    float length2; // f0
    float length; // f0
    float maxSpeed; // f0

    {
        // Range: 0x800A2808 -> 0x800A2834
        // Local variables
        unsigned int animFlags; // r0
    }
}
// Range: 0x800A2A40 -> 0x800A2A54
void zCommonPlayer::ResetInvincibilityTimer() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x800A2A60 -> 0x800A2AA8
void zCommonPlayer::AddStates(class zCommonPlayer * this /* r30 */, class xAnimTable * table /* r31 */) {
}
// signature: zCommonPlayer::SetTurnToFaceDir(const xVec3 &, float, bool)
// Range: 0x800A2AB0 -> 0x800A2B1C
void zCommonPlayer::SetTurnToFaceDir(class zCommonPlayer * this /* r30 */, float speed /* f31 */, bool allowAbort /* r31 */) {
}
// signature: zCommonPlayer::SetTurnToFacePos(const xVec3 &, float, bool)
// Range: 0x800A2B20 -> 0x800A2BD0
void zCommonPlayer::SetTurnToFacePos(class zCommonPlayer * this /* r30 */, float speed /* f31 */, bool allowAbort /* r31 */) {
    // Local variables
    class xVec3 toPos; // r1+0x8
}
// Range: 0x800A2BD0 -> 0x800A2BE0
bool zCommonPlayer::CanSwitchPlayer() {
}
// Range: 0x800A2BE0 -> 0x800A2BF8
void zCommonPlayer::LoadUpgrades() {
}
// signature: zCommonPlayer::SetUpgrade(zCommonPlayerUpgradeType, zCommonPlayerUpgradeLevel)
// Range: 0x800A2C00 -> 0x800A2C10
void zCommonPlayer::SetUpgrade() {
}
// Range: 0x800A2C10 -> 0x800A2C8C
float zCommonPlayer::GetNoiseLevel(class zCommonPlayer * this /* r31 */) {
    // Local variables
    float noise; // f31
}
// Range: 0x800A2C90 -> 0x800A2D8C
void zCommonPlayer::SetAsSafePos(class zCommonPlayer * this /* r29 */) {
    // Local variables
    float dist; // f0

    {
        // Range: 0x800A2CE8 -> 0x800A2D18
        // Local variables
        int i; // r30
    }
    {
        // Range: 0x800A2D2C -> 0x800A2D5C
        // Local variables
        int i; // r30
    }
}
// Range: 0x800A2D90 -> 0x800A2E14
class xVec3 * zCommonPlayer::GetSafePos(class zCommonPlayer * this /* r31 */) {
    {
        // Range: 0x800A2DB0 -> 0x800A2DFC
        // Local variables
        class xVec3 safePos; // r1+0x8
    }
}
// signature: zCommonPlayer::DefaultUpdateFall(float)
// Range: 0x800A2E20 -> 0x800A2E58
void zCommonPlayer::DefaultUpdateFall() {
}
// Range: 0x800A2E60 -> 0x800A2EBC
bool zCommonPlayer::SkipCharacterProxyHavokUpdate(class zCommonPlayer * this /* r31 */) {
}
// Range: 0x800A2EC0 -> 0x800A2F20
bool zCommonPlayer::MountCheck(class zCommonPlayer * this /* r30 */, class xOGEntity * object /* r31 */) {
}
// signature: GetPlayerByName(zCommonPlayer *, ePlayerName)
// Range: 0x800A2F20 -> 0x800A2F70
class zCommonPlayer * GetPlayerByName() {
    {
        // Range: 0x800A2F28 -> 0x800A2F68
        // Local variables
        int i; // r0
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zCommonPlayer::CommonPlayerHeadTrackingUpdate(float)
// Range: 0x800A2F70 -> 0x800A3020
void zCommonPlayer::CommonPlayerHeadTrackingUpdate(class zCommonPlayer * this /* r31 */) {
    // Local variables
    class xVec3 targetPos; // r1+0x8
}
// signature: zCommonPlayer::HeadTrackingSetFocusVec(xVec3 *, bool)
// Range: 0x800A3020 -> 0x800A3078
void zCommonPlayer::HeadTrackingSetFocusVec(class zCommonPlayer * this /* r30 */, bool initiateBlend /* r31 */) {
}
// signature: zCommonPlayer::DriveCauseMove(xMat4x3 *, xMat4x3 *, xMat4x3 *, xMat4x3 *, bool, bool, float, float)
// Range: 0x800A3080 -> 0x800A3448
void zCommonPlayer::DriveCauseMove(class zCommonPlayer * this /* r31 */, class xMat4x3 * parent /* r27 */, class xMat4x3 * lastMat /* r28 */, bool rotate /* r30 */, bool yaw /* r29 */, float dt /* f31 */) {
    // Local variables
    class xVec3 scale; // r1+0xA4
    class xVec3 newEuler; // r1+0x98
    class xVec3 lastEuler; // r1+0x8C
    class xMat4x3 baseMat; // r1+0x1C0
    class xMat4x3 InvRel; // r1+0x180
    class xVec3 Rl; // r1+0x80

    {
        // Range: 0x800A30FC -> 0x800A317C
        // Local variables
        float dummy; // r1+0x1C
        class xMat3x3 a_descaled; // r1+0x150
    }
    {
        // Range: 0x800A317C -> 0x800A324C
        // Local variables
        class xMat4x3 tempMat; // r1+0x110

        {
            // Range: 0x800A31BC -> 0x800A3230
            // Local variables
            class xMat3x3 rot; // r1+0xE0

            {
                // Range: 0x800A31CC -> 0x800A31EC
                // Local variables
                float yawDiff; // f1
            }
        }
    }
    {
        // Range: 0x800A328C -> 0x800A33E8
        // Local variables
        class xQuat quat; // r1+0x70
        class xMat3x3 tempMat; // r1+0xB0
        class xMat4x3 * pMat; // r29

        {
            // Range: 0x800A3320 -> 0x800A337C
            // Local variables
            class hkpPropertyValue val; // r1+0x28
        }
    }
}
