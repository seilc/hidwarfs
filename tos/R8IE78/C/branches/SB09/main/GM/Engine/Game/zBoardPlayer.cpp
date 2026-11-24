/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zBoardPlayer.cpp
*/
static float INPUT_CHANGE_THRESHOLD; // size: 0x4, address: 0x8072EEFC
class xtextbox tb; // size: 0x88, address: 0x80733E90
class xtextbox tb; // size: 0x88, address: 0x80733F20
// Range: 0x800538E0 -> 0x800538F0
unsigned int zBoardPlayer::GetBehaviorSetRefHash() const {
}
// signature: BoardBeforeAnimMatricesWrapper(xAnimPlay *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x800538F0 -> 0x80053928
void BoardBeforeAnimMatricesWrapper(class xAnimPlay * play /* r11 */, class xQuat * quat /* r10 */, class xVec3 * scale /* r9 */, class xVec3 * tran /* r0 */) {
}
// signature: zBoardPlayer::Init(Sext::xEntAsset *)
// Range: 0x80053930 -> 0x80053BF0
void zBoardPlayer::Init(class zBoardPlayer * this /* r31 */) {
    // Local variables
    class zBoardPlayerSpinAttack * spin; // r0
    class zBoardPlayerHammerAttack * hammer; // r0
    class zBoardPlayerCandy * candy; // r0
    class zBoardPlayerBungeeBall * bungee; // r0
    class zBoardPlayerSpinPowerupAttack * spinPowerup; // r0
    class zBoardPlayerHammerPowerupAttack * hammerPowerup; // r0

    // References
    // -> class xVec3 m_Null;
    // -> float HP_START;
}
// signature: zBoardPlayer::SetCapsuleSize(float, float)
// Range: 0x80053BF0 -> 0x80053D48
void zBoardPlayer::SetCapsuleSize(class zBoardPlayer * this /* r29 */, float inRadius /* f30 */) {
    // Local variables
    float len; // f31

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: zBoardPlayer::GetInteractionTestPos(unsigned int, xVec3 &)
// Range: 0x80053D50 -> 0x80053DE0
void zBoardPlayer::GetInteractionTestPos(class zBoardPlayer * this /* r30 */, class xVec3 & pos /* r31 */) {
}
// Range: 0x80053E00 -> 0x80053E24
float zBoardPlayer::GetCapsuleHeight() {
}
// Range: 0x80053E30 -> 0x80053E54
float zBoardPlayer::GetCapsuleRadius() {
}
// Range: 0x80053ED0 -> 0x80053F30
float zBoardPlayer::GetWalkStartMag(class zBoardPlayer * this /* r31 */) {
}
// Range: 0x80053F30 -> 0x80053F90
float zBoardPlayer::GetRunStartMag(class zBoardPlayer * this /* r31 */) {
}
// Range: 0x80053F90 -> 0x80054A44
void zBoardPlayer::InitActions(class zBoardPlayer * this /* r31 */) {
    // References
    // -> struct {} __vt__17zPlayerCheatBoard;
    // -> struct {} __vt__12zPlayerSlide;
    // -> struct {} __vt__23zPlayerCelebrationBoard;
    // -> struct {} __vt__22zPlayerFluidBurstBoard;
    // -> struct {} __vt__22zPlayerFluidSprayBoard;
    // -> struct {} __vt__20zPlayerSlamLandBoard;
    // -> struct {} __vt__20zPlayerSlamFallBoard;
    // -> struct {} __vt__21zPlayerSlamStartBoard;
    // -> struct {} __vt__20zBoardPlayerKelpTrap;
    // -> struct {} __vt__22zBoardPlayerBungeeBall;
    // -> struct {} __vt__26zBoardPlayerQuicksandStuck;
    // -> struct {} __vt__25zBoardPlayerQuicksandJump;
    // -> struct {} __vt__17zBoardPlayerCandy;
    // -> struct {} __vt__23zBoardPlayerLosePowerup;
    // -> struct {} __vt__29zBoardPlayerPuckPowerupAttack;
    // -> struct {} __vt__31zBoardPlayerHammerPowerupAttack;
    // -> struct {} __vt__29zBoardPlayerSpinPowerupAttack;
    // -> struct {} __vt__23zBoardPlayerGainPowerup;
    // -> struct {} __vt__20zBoardPlayerDrainGoo;
    // -> struct {} __vt__23zBoardPlayerFillWithGoo;
    // -> struct {} __vt__23zPlayerSpringboardBoard;
    // -> struct {} __vt__22zBoardPlayerPuckAttack;
    // -> struct {} __vt__24zBoardPlayerHammerAttack;
    // -> struct {} __vt__22zBoardPlayerSpinAttack;
    // -> struct {} __vt__20zPlayerDefeatedBoard;
    // -> struct {} __vt__21zPlayerHitLaunchBoard;
    // -> struct {} __vt__15zPlayerHitBoard;
    // -> struct {} __vt__17zPlayerLedgeBoard;
    // -> struct {} __vt__20zPlayerLandHighBoard;
    // -> struct {} __vt__16zPlayerFallBoard;
    // -> struct {} __vt__22zPlayerDoubleJumpBoard;
    // -> struct {} __vt__16zPlayerJumpBoard;
    // -> struct {} __vt__19zPlayerTurn180Board;
    // -> struct {} __vt__15zPlayerRunBoard;
    // -> struct {} __vt__16zPlayerWalkBoard;
    // -> struct {} __vt__16zPlayerIdleBoard;
}
// Range: 0x80054E40 -> 0x80055018
void zBoardPlayer::ParseIni(class zBoardPlayer * this /* r31 */) {
    // Local variables
    float DEFAULT_SPEED_NORMAL[6]; // r1+0x20
    float DEFAULT_SPEED_JUMP[6]; // r1+0x8
}
// Range: 0x80055020 -> 0x800553E0
void zBoardPlayer::Reset(class zBoardPlayer * this /* r27 */) {
    // Local variables
    class hkVector4 hk_pos; // r1+0x10

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x800554A0 -> 0x80055554
void zBoardPlayer::DefaultBeginUpdate(class zBoardPlayer * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x80055570 -> 0x80055D68
void zBoardPlayer::DefaultUpdate(class zBoardPlayer * this /* r30 */, float dt /* f31 */) {
    // Local variables
    class zPlayerInput * playerInput; // r31

    {
        // Range: 0x800555DC -> 0x80055708
        // Local variables
        class xVec3 knockback; // r1+0x48
        float currentHitPoints; // f0

        {
            // Range: 0x800555FC -> 0x800556E0
            // Local variables
            class zCombatDamageInfo info; // r1+0xCC

            {
                // Range: 0x80055698 -> 0x800556E0
                // Local variables
                class zFXSpawn * splashSpawnPt; // r0
            }
        }
        {
            // Range: 0x800556E0 -> 0x80055708
            // Local variables
            class zCombatDamageInfo info; // r1+0x90
        }
    }
    {
        // Range: 0x80055870 -> 0x800558F8
        // Local variables
        class EventActionOneFloat params; // r1+0x18
    }
    {
        // Range: 0x80055A24 -> 0x80055B40
        // Local variables
        class RenderCustomizerInfo * customizers; // r26
        float count; // f29

        {
            // Range: 0x80055A8C -> 0x80055B34
            // Local variables
            int i; // r31

            {
                // Range: 0x80055AD4 -> 0x80055B34
                // Local variables
                float newy; // f0
                class Vector2 currentTrans; // r1+0x20
            }
        }
    }
    {
        // Range: 0x80055B60 -> 0x80055D38
        // Local variables
        int wbc_err; // r0
        class basic_rect locked_bounds; // r1+0x38

        {
            // Range: 0x80055C74 -> 0x80055D38
            // Local variables
            char tmpStr[384]; // r1+0x190
        }
    }

    // References
    // -> class xtextbox tb;
    // -> static class basic_rect screen_bounds;
    // -> class xColor g_RED;
    // -> class xColor g_BLACK;
}
// Range: 0x80055E90 -> 0x80056000
void zBoardPlayer::ShowMsg(char * msg /* r31 */) {
    // Local variables
    class basic_rect locked_bounds; // r1+0x10
    char tmpStr[384]; // r1+0xE0

    // References
    // -> class xtextbox tb;
    // -> static class basic_rect screen_bounds;
    // -> class xColor g_RED;
    // -> class xColor g_BLACK;
}
// signature: zBoardPlayer::DefaultMove(xScene *, float, xEntFrame *)
// Range: 0x80056000 -> 0x80056004
void zBoardPlayer::DefaultMove() {
}
// Range: 0x80056010 -> 0x80056244
void zBoardPlayer::DefaultEndUpdate(class zBoardPlayer * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x8005605C -> 0x80056104
        // Local variables
        class xVec3 pos; // r1+0x34
    }
}
// Range: 0x80056250 -> 0x80056360
void zBoardPlayer::HandleMovement(class zBoardPlayer * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
    {
        // Range: 0x8005626C -> 0x80056320
        // Local variables
        class xVec3 externalForcesDelta; // r1+0x14
        class xVec3 oldVel; // r1+0x20
    }
}
// Range: 0x80056360 -> 0x800564F0
void zBoardPlayer::ApplyInputAcceleration(class zBoardPlayer * this /* r31 */, float maxSpeed /* f28 */, float dt /* f29 */) {
    // Local variables
    float maxSpeed2; // f31
    class xVec3 curVelOnSurface; // r1+0x38
    class xVec3 curVelOnNormal; // r1+0x2C
    float curSpeed2; // f30
    class xVec3 inputVel; // r1+0x20
    float inputSpeed2; // f0
    class xVec3 newVelOnSurface; // r1+0x14
}
// Range: 0x800564F0 -> 0x8005666C
void zBoardPlayer::FeedbackMotion(class zBoardPlayer * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class hkVector4 proxyVel4; // r1+0x40
    class xVec3 proxyVel; // r1+0x34
    class xVec3 drivenByVel; // r1+0x28
    class xVec3 momentumlessVel; // r1+0x1C
    class xVec3 actualVel; // r1+0x10
}
// signature: zBoardPlayer::AbsControl(float, float, float)
// Range: 0x80056670 -> 0x80056680
void zBoardPlayer::AbsControl() {
}
// Range: 0x80056680 -> 0x80056834
void zBoardPlayer::RelativeControl(class zBoardPlayer * this /* r30 */, float x /* f29 */, float z /* f31 */, float dt /* f30 */) {
    // Local variables
    class xVec3 camRelativeInput; // r1+0x8
    float stickMag; // f31
}
// Range: 0x80056890 -> 0x80056E00
void zBoardPlayer::DefaultControl(class zBoardPlayer * this /* r28 */, float stickMag /* f30 */, class xVec3 & camRelativeInput /* r29 */, float dt /* f31 */) {
    // Local variables
    float friction; // f28
    class xVec3 playerAtXZ; // r1+0x20
    class xVec3 playerRightXZ; // r1+0x14
    float maxSpeed; // f27
    float walkStartMag; // f29
    float runStartMag; // f26
    float turnRate; // f25

    {
        // Range: 0x80056BEC -> 0x80056D7C
        // Local variables
        float inputAccMag; // f25
        class xVec3 moveDirection; // r1+0x8
        float rightProject; // f29
        float atProject; // f0
    }

    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisX;
}
// Range: 0x80056E10 -> 0x80056FC8
void zBoardPlayer::CheatControl(class zBoardPlayer * this /* r30 */, float stickMag /* f30 */, class xVec3 & camRelativeInput /* r31 */, float dt /* f31 */) {
    // Local variables
    unsigned int turbo; // r0
    float cheatBoost; // f3
    class xVec3 velDir; // r1+0x8
    float mag; // f0

    {
        // Range: 0x80056F20 -> 0x80056FA0
        // Local variables
        class xMat3x3 goalMat; // r1+0x18
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zBoardPlayer::UpdateLean(float, float, unsigned int)
// Range: 0x80056FD0 -> 0x800570B0
void zBoardPlayer::UpdateLean() {
    // Local variables
    float diffLeanLerp; // f4
}
// Range: 0x800570B0 -> 0x800574CC
void zBoardPlayer::ApplyDynamicFriction(class zBoardPlayer * this /* r30 */, class xVec3 * vel /* r31 */, float maxSpeed /* f29 */, float dynFriction /* f31 */, float dt /* f28 */) {
    // Local variables
    class xVec3 inputDirVelocity; // r1+0x5C
    class xVec3 inputDirection; // r1+0x50
    float perpSpeed; // f29
    unsigned int performingKnockback; // r4

    {
        // Range: 0x80057124 -> 0x800571BC
        // Local variables
        float dot; // f0

        {
            // Range: 0x80057170 -> 0x800571BC
            // Local variables
            float inputDirSpeed; // f0
        }
    }
    {
        // Range: 0x80057214 -> 0x8005733C
        // Local variables
        class xVec3 frictionVel; // r1+0x44
        float oldSpeed; // f0
        float oldSpeed2; // f0
        float frictionSpeed; // f28
        float slopeDot; // f1
    }
    {
        // Range: 0x800573FC -> 0x80057494
        {
            // Range: 0x8005742C -> 0x80057494
            // Local variables
            float perpSpeed; // f0
            float f; // f0
        }
    }

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_Null;
}
// signature: zBoardPlayer::ApplyGravity(xVec3 *, const xVec3 &, float, float)
// Range: 0x800574D0 -> 0x800575EC
void zBoardPlayer::ApplyGravity(class zBoardPlayer * this /* r28 */, class xVec3 * vel /* r29 */, class xVec3 & surfaceNormal /* r30 */, float dt /* f31 */) {
    // Local variables
    float slopeDot; // f0
    class xVec3 surfaceRight; // r1+0x20
    class xVec3 surfaceDownHill; // r1+0x14
    unsigned int currentActionID; // r0
    class xVec3 gravity; // r1+0x8

    // References
    // -> class zGlobals globals;
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x800575F0 -> 0x80057740
void zBoardPlayer::ApplyPhysics(class zBoardPlayer * this /* r31 */, float dt /* f30 */) {
    // Local variables
    float friction; // f31
}
// Range: 0x80057740 -> 0x800578C8
void zBoardPlayer::GetCameraRelativeInput(class zBoardPlayer * this /* r29 */, float x /* f30 */, float z /* f31 */, class xVec3 * result /* r30 */) {
    // Local variables
    class xMat4x3 camMat; // r1+0x8

    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisX;
}
// signature: zBoardPlayer::GetSurfaceRelativeInput(xVec3 *, const xVec3 &)
// Range: 0x800578F0 -> 0x8005799C
void zBoardPlayer::GetSurfaceRelativeInput(class xVec3 * input /* r31 */) {
    // Local variables
    class xVec3 normal; // r1+0x14
    float slopeDot; // f0
    class xVec3 inputOnNormal; // r1+0x8

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x800579A0 -> 0x800579E8
bool zBoardPlayer::CanJoinDrop(class zBoardPlayer * this /* r31 */) {
}
// Range: 0x800579F0 -> 0x80057A74
void zBoardPlayer::Exit(class zBoardPlayer * this /* r30 */) {
    // Local variables
    class hkpCharacterProxy * proxy; // r0
}
// Range: 0x80057A80 -> 0x80057A88
float zBoardPlayer::GetRigidBodyHeight() {
}
// Range: 0x80057A90 -> 0x80057AA8
float zBoardPlayer::GetCharacterProxyYOffset() {
}
// signature: zBoardPlayer::UpdateCharacterProxy(float)
// Range: 0x80057AB0 -> 0x80057AB4
void zBoardPlayer::UpdateCharacterProxy() {
}
// Range: 0x80057AC0 -> 0x80057F20
void zBoardPlayer::HavokSetup(class zBoardPlayer * this /* r30 */) {
    {
        // Range: 0x80057AE8 -> 0x80057EFC
        // Local variables
        class hkVector4 hk_pos; // r1+0x20
        class xVec3 & pos; // r0
        class hkVector4 gravity; // r1+0x30
        class hkpCharacterProxyCinfo cpci; // r1+0x60
        class hkpShapePhantom * pPhantomObject; // r31
        class hkVector4 v1; // r1+0x40
        class hkVector4 v0; // r1+0x50
        float len; // f31
    }

    // References
    // -> struct {} __vt__43zBoardPlayerCharacterProxyCollisionListener;
    // -> struct {} __vt__38zPlayerCharacterProxyCollisionListener;
    // -> class hkTransform hkTransformIdentity;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x80057F20 -> 0x80058448
void zBoardPlayer::HandleEvent(class zBoardPlayer * this /* r28 */, class xBase * from /* r29 */, unsigned int toEvent /* r30 */, class EventAny * genericParams /* r31 */) {
    {
        // Range: 0x80058054 -> 0x80058138
        // Local variables
        class xVec3 targetDir; // r1+0x8

        {
            // Range: 0x80058098 -> 0x800580E0
            // Local variables
            class zDirection * direction; // r3
            class EventActionDirection * turnTowardsParams; // r0
        }
        {
            // Range: 0x800580E4 -> 0x8005810C
            // Local variables
            class EventActionVector * turnTowardsParams; // r0
        }
    }
    {
        // Range: 0x800581C8 -> 0x8005822C
        // Local variables
        class zSoundCue * sc; // r3
    }
    {
        // Range: 0x80058230 -> 0x8005827C
        // Local variables
        class zSoundCue * sc; // r3
    }
    {
        // Range: 0x8005827C -> 0x800582C8
        // Local variables
        class zSoundCue * sc; // r3
    }
    {
        // Range: 0x800582C8 -> 0x80058314
        // Local variables
        class zSoundCue * sc; // r3
    }
    {
        // Range: 0x80058314 -> 0x8005835C
        // Local variables
        class zSoundCue * sc; // r3
    }
}
// signature: zBoardPlayer::GetGoodPos(zCommonPlayer *, int)
// Range: 0x80058480 -> 0x80058484
class xVec3 * zBoardPlayer::GetGoodPos() {
}
// Range: 0x80058490 -> 0x800584BC
void zBoardPlayer::ResetPuckCooldownTimer() {
}
// Range: 0x800584C0 -> 0x80058538
float zBoardPlayer::GetPuckCooldownTimerPercent() {
    // Local variables
    float maxTime; // f3
}
// Range: 0x80058540 -> 0x80058928
bool zBoardPlayer::ShouldDamage(class zBoardPlayer * this /* r27 */, class zCombatDamageInfo * damageInfo /* r28 */) {
    // Local variables
    bool knockback; // r31
    bool usePositionalKnockback; // r30
    bool RPSProtected; // r29

    {
        // Range: 0x800585D4 -> 0x8005871C
        // Local variables
        enum eHitSource baseSource; // r0

        {
            // Range: 0x80058630 -> 0x800586D4
            // Local variables
            class xVec3 hitDirection; // r1+0x44
        }
    }
    {
        // Range: 0x80058738 -> 0x800588DC
        // Local variables
        class xVec3 knockbackVec; // r1+0x38

        {
            // Range: 0x80058798 -> 0x8005881C
            // Local variables
            float length; // f0
        }
        {
            // Range: 0x8005881C -> 0x80058894
            // Local variables
            float length; // f0
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x80058940 -> 0x80058998
bool zBoardPlayer::Damage(class zBoardPlayer * this /* r30 */, class zCombatDamageInfo & damageInfo /* r31 */) {
}
// Range: 0x800589A0 -> 0x80058A14
void zBoardPlayer::ResetHealth(class zBoardPlayer * this /* r31 */) {
}
// signature: zBoardPlayer::SetCurrentHitPoints(float)
// Range: 0x80058A20 -> 0x80058AAC
void zBoardPlayer::SetCurrentHitPoints(class zBoardPlayer * this /* r31 */) {
    // Local variables
    class EventActionOneFloat params; // r1+0x8
}
// signature: zBoardPlayer::SetMaximumHitPoints(float)
// Range: 0x80058AB0 -> 0x80058B20
void zBoardPlayer::SetMaximumHitPoints(class zBoardPlayer * this /* r31 */) {
    // Local variables
    class EventActionOneInt params; // r1+0x8
}
// signature: zBoardPlayer::SetGooState(SBGooFilledState)
// Range: 0x80058B20 -> 0x80058C1C
void zBoardPlayer::SetGooState(class zBoardPlayer * this /* r31 */) {
}
// signature: zBoardPlayer::SetPowerupTimerToMax(BoardPowerupState)
// Range: 0x80058C50 -> 0x80058CD0
void zBoardPlayer::SetPowerupTimerToMax() {
}
// Range: 0x80058CD0 -> 0x80058DA0
void zBoardPlayer::SetPowerupState(class zBoardPlayer * this /* r30 */, enum BoardPowerupState newPowerupState /* r31 */) {
    {
        // Range: 0x80058D04 -> 0x80058D30
        // Local variables
        class EventActionSBPowerup params; // r1+0x8
    }
    {
        // Range: 0x80058D30 -> 0x80058D78
        // Local variables
        class zSoundCue * sc; // r3
    }
}
// Range: 0x80058DA0 -> 0x80058E3C
void zBoardPlayer::SwapToCurrentPowerupModel(class zBoardPlayer * this /* r29 */) {
    // Local variables
    unsigned long long assetID; // r31:r30
    class zCharacterAsset * characterAsset; // r3
}
// signature: zBoardPlayer::IsOnSlipperySurface(const float) const
// Range: 0x800596A0 -> 0x800596DC
bool zBoardPlayer::IsOnSlipperySurface() const {
}
// Range: 0x800596E0 -> 0x80059720
class zBoardPlayer * zBoardPlayer::GetInstance() {
    {
        // Range: 0x800596E4 -> 0x80059718
        // Local variables
        int i; // r0
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zBoardPlayer::IsUsingPhysicsDrive(xBase *)
// Range: 0x80059720 -> 0x80059754
bool zBoardPlayer::IsUsingPhysicsDrive() {
}
// Range: 0x80059870 -> 0x800598D0
void zBoardPlayer::StopInvincibilityFX(class zBoardPlayer * this /* r30 */) {
}
// Range: 0x800598D0 -> 0x80059930
bool zBoardPlayer::SkipCharacterProxyHavokUpdate(class zBoardPlayer * this /* r31 */) {
}
// Range: 0x800ADE30 -> 0x800ADEA8
void zSBCastCollector::addRayHit(class zSBCastCollector * this /* r29 */, class hkpCdBody & cdBody /* r30 */, class hkpShapeRayCastCollectorOutput & hitInfo /* r31 */) {
    {
        // Range: 0x800ADE44 -> 0x800ADE90
        // Local variables
        class hkpCollidable * collidable; // r0
    }
}
// Range: 0x80059930 -> 0x80059C4C
bool zBoardPlayer::CheckGroundSupport(class zBoardPlayer * this /* r31 */) {
    // Local variables
    class zSBCastCollector collector; // r1+0xA0
    class hkVector4 v0; // r1+0x60
    class hkVector4 v1; // r1+0x50
    class hkVector4 offsetUp; // r1+0x40
    class hkVector4 offsetDown; // r1+0x30
    class hkpWorldRayCastInput input; // r1+0x70

    {
        // Range: 0x80059AD4 -> 0x80059C14
        // Local variables
        float computedDistanceFromContact; // f0
        class hkpCharacterProxy * proxy; // r0
        float allowedDistanceFromContact; // f29
        float distanceFromGroundToProxyCenter; // f30
        float distanceToGround; // f31
        class hkpWorldRayCastOutput & output; // r0

        {
            // Range: 0x80059BA4 -> 0x80059C04
            // Local variables
            class xVec3 normal; // r1+0x1C
        }
    }

    // References
    // -> struct {} __vt__16zSBCastCollector;
}
// signature: zBoardPlayer::BeforeAnimMatrices(xAnimPlay *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x80059D00 -> 0x80059DA4
void zBoardPlayer::BeforeAnimMatrices(class zBoardPlayer * this /* r30 */, class xQuat * quat /* r31 */) {
    {
        // Range: 0x80059D1C -> 0x80059D8C
        // Local variables
        class xVec3 axis; // r1+0x8
        class xQuat pitchQuat; // r1+0x18
    }
}
// Range: 0x80059DB0 -> 0x80059E40
void zBoardPlayer::AfterAnimMatrices(class zBoardPlayer * this /* r25 */, class xAnimPlay * play /* r26 */, class Matrix43 * skinMat /* r27 */, class xQuat * quatresult /* r28 */, class xVec3 * scaleresult /* r29 */, class xVec3 * tranresult /* r30 */, int boneCount /* r31 */) {
}
// signature: zBoardPlayer::ApplySpinBoneModification(xAnimPlay *, Math::Matrix43 *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x80059E40 -> 0x80059F74
void zBoardPlayer::ApplySpinBoneModification(class zBoardPlayer * this /* r29 */, class Matrix43 * skinMat /* r30 */) {
    // Local variables
    class zBoardPlayerSpinAttack * spinAttackAction; // r0
    class xMat4x3 boneMat; // r1+0x38
    float rotationalOffset; // f31
    class Matrix43 boneMatNG; // r1+0x8
}
// Range: 0x80059F80 -> 0x8005A090
void zBoardPlayer::FixAllAnimPackageEffects(class zBoardPlayer * this /* r30 */) {
    // Local variables
    unsigned long long animPackageID; // r0:r0
}
// signature: zBoardPlayer::FindAndFixAnimPackageEffects(unsigned long long)
// Range: 0x8005A090 -> 0x8005A0D4
void zBoardPlayer::FindAndFixAnimPackageEffects(class zBoardPlayer * this /* r31 */) {
    // Local variables
    class zAnimPackage * currentPackage; // r0
}
// Range: 0x8005A0E0 -> 0x8005A174
bool zBoardPlayer::CheckForNearbyNPCs(float radius /* f31 */) {
    // Local variables
    class fixed_stack_list nearbyNPCList; // r1+0x18
    class xVec3 checkPos; // r1+0x8
}
