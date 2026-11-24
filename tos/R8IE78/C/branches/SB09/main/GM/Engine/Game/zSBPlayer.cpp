/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zSBPlayer.cpp
*/
static float INPUT_CHANGE_THRESHOLD; // size: 0x4, address: 0x80754B24
float MAXplayerHP; // size: 0x4, address: 0x80754B28
// Range: 0x801301A0 -> 0x801301B0
unsigned int zSBPlayer::GetBehaviorSetRefHash() const {
}
// signature: zSBPlayer::Init(Sext::xEntAsset *)
// Range: 0x801301B0 -> 0x801304D8
void zSBPlayer::Init(class zSBPlayer * this /* r30 */) {
    // References
    // -> class xVec3 m_Null;
    // -> float MAXplayerHP;
}
// Range: 0x801304E0 -> 0x8013058C
void zSBPlayer::SceneSetup(class zSBPlayer * this /* r30 */) {
}
// signature: zSBPlayer::SetCapsuleSize(float, float)
// Range: 0x80130590 -> 0x801306E8
void zSBPlayer::SetCapsuleSize(class zSBPlayer * this /* r29 */, float inRadius /* f30 */) {
    // Local variables
    float len; // f31

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: zSBPlayer::GetInteractionTestPos(unsigned int, xVec3 &)
// Range: 0x801306F0 -> 0x80130780
void zSBPlayer::GetInteractionTestPos(class zSBPlayer * this /* r30 */, class xVec3 & pos /* r31 */) {
}
// Range: 0x80130780 -> 0x801307E0
float zSBPlayer::GetCapsuleHeight() {
}
// Range: 0x801307E0 -> 0x80130840
float zSBPlayer::GetCapsuleRadius() {
}
// Range: 0x80130840 -> 0x801308A4
float zSBPlayer::GetWalkStartMag(class zSBPlayer * this /* r31 */) {
}
// Range: 0x801308B0 -> 0x80130914
float zSBPlayer::GetRunStartMag(class zSBPlayer * this /* r31 */) {
}
// Range: 0x80130920 -> 0x80131484
void zSBPlayer::InitActions(class zSBPlayer * this /* r31 */) {
    // References
    // -> struct {} __vt__14zPlayerCheatSB;
    // -> struct {} __vt__20zPlayerCelebrationSB;
    // -> struct {} __vt__19zPlayerFluidBurstSB;
    // -> struct {} __vt__19zPlayerFluidSpraySB;
    // -> struct {} __vt__17zPlayerSlamLandSB;
    // -> struct {} __vt__17zPlayerSlamFallSB;
    // -> struct {} __vt__18zPlayerSlamStartSB;
    // -> struct {} __vt__17zSBPlayerKelpTrap;
    // -> struct {} __vt__17zSBPlayerBombRoll;
    // -> struct {} __vt__19zSBPlayerBungeeBall;
    // -> struct {} __vt__23zSBPlayerQuicksandStuck;
    // -> struct {} __vt__22zSBPlayerQuicksandJump;
    // -> struct {} __vt__14zSBPlayerCandy;
    // -> struct {} __vt__20zSBPlayerLosePowerup;
    // -> struct {} __vt__26zSBPlayerPuckPowerupAttack;
    // -> struct {} __vt__28zSBPlayerHammerPowerupAttack;
    // -> struct {} __vt__26zSBPlayerSpinPowerupAttack;
    // -> struct {} __vt__20zSBPlayerGainPowerup;
    // -> struct {} __vt__17zSBPlayerDrainGoo;
    // -> struct {} __vt__20zSBPlayerFillWithGoo;
    // -> struct {} __vt__20zPlayerSpringboardSB;
    // -> struct {} __vt__19zSBPlayerPuckAttack;
    // -> struct {} __vt__21zSBPlayerHammerAttack;
    // -> struct {} __vt__19zSBPlayerSpinAttack;
    // -> struct {} __vt__25zPlayerSingleCustomAnimSB;
    // -> struct {} __vt__17zPlayerCustomAnim;
    // -> struct {} __vt__16zPlayerWalkStart;
    // -> struct {} __vt__17zCommonPlayerDash;
    // -> struct {} __vt__17zPlayerDefeatedSB;
    // -> struct {} __vt__18zPlayerHitLaunchSB;
    // -> struct {} __vt__12zPlayerHitSB;
    // -> struct {} __vt__14zPlayerLedgeSB;
    // -> struct {} __vt__16zPlayerTriggered;
    // -> struct {} __vt__17zPlayerLandHighSB;
    // -> struct {} __vt__20zPlayerFallToDeathSB;
    // -> struct {} __vt__13zPlayerFallSB;
    // -> struct {} __vt__19zPlayerDoubleJumpSB;
    // -> struct {} __vt__13zPlayerJumpSB;
    // -> struct {} __vt__11zPlayerSlip;
    // -> struct {} __vt__16zPlayerTurn180SB;
    // -> struct {} __vt__12zPlayerRunSB;
    // -> struct {} __vt__13zPlayerWalkSB;
    // -> struct {} __vt__15zPlayerSkidStop;
    // -> struct {} __vt__13zPlayerIdleSB;
}
// Range: 0x801314D0 -> 0x801316A0
void zSBPlayer::ParseIni(class zSBPlayer * this /* r31 */) {
    // Local variables
    float DEFAULT_SPEED_NORMAL[6]; // r1+0x20
    float DEFAULT_SPEED_JUMP[6]; // r1+0x8
}
// Range: 0x801316A0 -> 0x80131B0C
void zSBPlayer::Reset(class zSBPlayer * this /* r26 */) {
    // Local variables
    class hkVector4 hk_pos; // r1+0x10

    // References
    // -> class zGlobals globals;
    // -> class xVec3 m_Null;
    // -> class zGameCheats gGameCheats;
}
// Range: 0x80131B10 -> 0x80131BC4
void zSBPlayer::DefaultBeginUpdate(class zSBPlayer * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x80131BD0 -> 0x80132560
void zSBPlayer::DefaultUpdate(class zSBPlayer * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x80131D10 -> 0x80131F40
        // Local variables
        bool instantDeathSurface; // r30

        {
            // Range: 0x80131D3C -> 0x80131F40
            // Local variables
            class xVec3 knockback; // r1+0x14
            float currentHitPoints; // f0

            {
                // Range: 0x80131D68 -> 0x80131F04
                // Local variables
                class zCombatDamageInfo info; // r1+0x5C

                {
                    // Range: 0x80131E34 -> 0x80131E84
                    // Local variables
                    class zFXSpawn * splashSpawnPt; // r0
                }
                {
                    // Range: 0x80131EB0 -> 0x80131F04
                    // Local variables
                    class zFXSpawn * splashSpawnPt; // r0
                }
            }
            {
                // Range: 0x80131F04 -> 0x80131F40
                // Local variables
                class zCombatDamageInfo info; // r1+0x20
            }
        }
    }
    {
        // Range: 0x801320CC -> 0x801321A0
        // Local variables
        class EventActionOneFloat params; // r1+0x10
    }
}
// Range: 0x801325A0 -> 0x80132930
void zSBPlayer::DefaultEndUpdate(class zSBPlayer * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x80132600 -> 0x8013266C
        // Local variables
        class xVec3 pos; // r1+0x4C
    }
    {
        // Range: 0x8013266C -> 0x801326B8
        // Local variables
        class xVec3 pos; // r1+0x40
    }
    {
        // Range: 0x801326CC -> 0x80132734
        // Local variables
        class xVec3 pos; // r1+0x34
    }
}
// Range: 0x80132930 -> 0x80132A40
void zSBPlayer::HandleMovement(class zSBPlayer * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
    {
        // Range: 0x8013294C -> 0x80132A00
        // Local variables
        class xVec3 externalForcesDelta; // r1+0x14
        class xVec3 oldVel; // r1+0x20
    }
}
// Range: 0x80132A40 -> 0x80132BCC
void zSBPlayer::ApplyInputAcceleration(class zSBPlayer * this /* r31 */, float maxSpeed /* f28 */, float dt /* f29 */) {
    // Local variables
    float maxSpeed2; // f31
    class xVec3 curVelOnSurface; // r1+0x38
    class xVec3 curVelOnNormal; // r1+0x2C
    float curSpeed2; // f30
    class xVec3 inputVel; // r1+0x20
    float inputSpeed2; // f0
    class xVec3 newVelOnSurface; // r1+0x14
}
// Range: 0x80132BD0 -> 0x80132D10
void zSBPlayer::FeedbackMotion(class zSBPlayer * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class hkVector4 proxyVel4; // r1+0x40
    class xVec3 proxyVel; // r1+0x34
    class xVec3 drivenByVel; // r1+0x28
    class xVec3 momentumlessVel; // r1+0x1C
    class xVec3 actualVel; // r1+0x10
}
// Range: 0x80132D10 -> 0x80132EC4
void zSBPlayer::RelativeControl(class zSBPlayer * this /* r30 */, float x /* f29 */, float z /* f31 */, float dt /* f30 */) {
    // Local variables
    class xVec3 camRelativeInput; // r1+0x8
    float stickMag; // f31
}
// Range: 0x80132ED0 -> 0x80133460
void zSBPlayer::DefaultControl(class zSBPlayer * this /* r28 */, float stickMag /* f30 */, class xVec3 & camRelativeInput /* r29 */, float dt /* f31 */) {
    // Local variables
    float friction; // f28
    class xVec3 playerAtXZ; // r1+0x20
    class xVec3 playerRightXZ; // r1+0x14
    float maxSpeed; // f27
    float walkStartMag; // f29
    float runStartMag; // f26
    float turnRate; // f25

    {
        // Range: 0x80133254 -> 0x801333E0
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
// Range: 0x80133460 -> 0x80133618
void zSBPlayer::CheatControl(class zSBPlayer * this /* r30 */, float stickMag /* f30 */, class xVec3 & camRelativeInput /* r31 */, float dt /* f31 */) {
    // Local variables
    unsigned int turbo; // r0
    float cheatBoost; // f3
    class xVec3 velDir; // r1+0x8
    float mag; // f0

    {
        // Range: 0x80133570 -> 0x801335F0
        // Local variables
        class xMat3x3 goalMat; // r1+0x18
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zSBPlayer::UpdateLean(float, float)
// Range: 0x80133620 -> 0x801336F0
void zSBPlayer::UpdateLean() {
    // Local variables
    float diffLeanLerp; // f4
}
// Range: 0x801336F0 -> 0x80133AFC
void zSBPlayer::ApplyDynamicFriction(class zSBPlayer * this /* r30 */, class xVec3 * vel /* r31 */, float maxSpeed /* f30 */, float dynFriction /* f31 */, float dt /* f29 */) {
    // Local variables
    class xVec3 inputDirVelocity; // r1+0x5C
    class xVec3 inputDirection; // r1+0x50
    float perpSpeed; // f30
    unsigned int performingKnockback; // r4

    {
        // Range: 0x8013376C -> 0x801337FC
        // Local variables
        float dot; // f0

        {
            // Range: 0x801337B8 -> 0x801337FC
            // Local variables
            float inputDirSpeed; // f0
        }
    }
    {
        // Range: 0x80133854 -> 0x80133974
        // Local variables
        class xVec3 frictionVel; // r1+0x44
        float oldSpeed; // f1
        float oldSpeed2; // f0
        float frictionSpeed; // f29
        float slopeDot; // f1
    }
    {
        // Range: 0x80133A34 -> 0x80133ACC
        {
            // Range: 0x80133A64 -> 0x80133ACC
            // Local variables
            float perpSpeed; // f0
            float f; // f0
        }
    }

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_Null;
}
// signature: zSBPlayer::ApplyGravity(xVec3 *, const xVec3 &, float, float)
// Range: 0x80133B00 -> 0x80133C1C
void zSBPlayer::ApplyGravity(class zSBPlayer * this /* r28 */, class xVec3 * vel /* r29 */, class xVec3 & surfaceNormal /* r30 */, float dt /* f31 */) {
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
// Range: 0x80133C20 -> 0x80133D70
void zSBPlayer::ApplyPhysics(class zSBPlayer * this /* r31 */, float dt /* f30 */) {
    // Local variables
    float friction; // f31
}
// Range: 0x80133D70 -> 0x80133EF8
void zSBPlayer::GetCameraRelativeInput(class zSBPlayer * this /* r29 */, float x /* f30 */, float z /* f31 */, class xVec3 * result /* r30 */) {
    // Local variables
    class xMat4x3 camMat; // r1+0x8

    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisX;
}
// signature: zSBPlayer::GetSurfaceRelativeInput(xVec3 *, const xVec3 &)
// Range: 0x80133F00 -> 0x80133FAC
void zSBPlayer::GetSurfaceRelativeInput(class xVec3 * input /* r31 */) {
    // Local variables
    class xVec3 normal; // r1+0x14
    float slopeDot; // f0
    class xVec3 inputOnNormal; // r1+0x8

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x80133FB0 -> 0x80134040
void zSBPlayer::Exit(class zSBPlayer * this /* r30 */) {
}
// Range: 0x80134040 -> 0x801340E4
void zSBPlayer::ShowPlayer(class zSBPlayer * this /* r30 */) {
    // References
    // -> class zPlayerInventory inventory;
}
// Range: 0x801340F0 -> 0x80134108
float zSBPlayer::GetCharacterProxyYOffset() {
}
// Range: 0x80134110 -> 0x801345B0
void zSBPlayer::HavokSetup(class zSBPlayer * this /* r30 */) {
    {
        // Range: 0x80134138 -> 0x8013458C
        // Local variables
        class hkAabb aabb; // r1+0x60
        class hkVector4 hk_pos; // r1+0x20
        class xVec3 & pos; // r0
        class hkVector4 gravity; // r1+0x30
        class hkpCharacterProxyCinfo cpci; // r1+0x80
        class hkpShapePhantom * pPhantomObject; // r31
        class hkVector4 v1; // r1+0x40
        class hkVector4 v0; // r1+0x50
        float len; // f31
    }

    // References
    // -> struct {} __vt__40zSBPlayerCharacterProxyCollisionListener;
    // -> struct {} __vt__38zPlayerCharacterProxyCollisionListener;
    // -> class hkTransform hkTransformIdentity;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x801345B0 -> 0x80134EDC
void zSBPlayer::HandleEvent(class zSBPlayer * this /* r28 */, class xBase * from /* r29 */, unsigned int toEvent /* r30 */, class EventAny * genericParams /* r31 */) {
    {
        // Range: 0x801347D4 -> 0x801348B8
        // Local variables
        class xVec3 targetDir; // r1+0x20

        {
            // Range: 0x80134818 -> 0x80134860
            // Local variables
            class zDirection * direction; // r3
            class EventActionDirection * turnTowardsParams; // r0
        }
        {
            // Range: 0x80134864 -> 0x8013488C
            // Local variables
            class EventActionVector * turnTowardsParams; // r0
        }
    }
    {
        // Range: 0x80134BE0 -> 0x80134C44
        // Local variables
        class EventActionVector * hitLocationParams; // r0
        class xVec3 hitLocation; // r1+0x14
    }
    {
        // Range: 0x80134C84 -> 0x80134CC0
        // Local variables
        class zPlayerSingleCustomAnimSB * action; // r3
        class EventActionSBPlayCustomAnim * params; // r0
    }
    {
        // Range: 0x80134D18 -> 0x80134DA0
        // Local variables
        bool isEnabled; // r5
        class EventActionSBTurnAttackOnOrOff * params; // r0
    }
    {
        // Range: 0x80134DA0 -> 0x80134DDC
        // Local variables
        class EventActionSBBungeeReturn * params; // r0
    }
    {
        // Range: 0x80134E38 -> 0x80134EB0
        // Local variables
        class xBase * targetBase; // r5
        class EventActionEnt * params; // r0
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x80134EE0 -> 0x80134F28
class xVec3 zSBPlayer::GetPositionToTarget() {
    // Local variables
    class xVec3 pos; // r1+0x8
}
// Range: 0x80134F30 -> 0x80134F98
float zSBPlayer::GetSpinCooldownTimerPercent() {
}
// Range: 0x80134FA0 -> 0x80134FCC
void zSBPlayer::ResetPuckCooldownTimer() {
}
// Range: 0x80134FD0 -> 0x80135048
float zSBPlayer::GetPuckCooldownTimerPercent() {
    // Local variables
    float maxTime; // f3
}
// Range: 0x80135050 -> 0x8013506C
short zSBPlayer::GetPuckAmmo() {
}
// Range: 0x80135070 -> 0x801350BC
void zSBPlayer::DecrementPuckAmmo() {
    {
        // Range: 0x8013507C -> 0x801350AC
        // Local variables
        class EventActionOneInt incParam; // r1+0x8
    }
}
// Range: 0x801350C0 -> 0x8013557C
bool zSBPlayer::ShouldDamage(class zSBPlayer * this /* r28 */, class zCombatDamageInfo * damageInfo /* r29 */) {
    // Local variables
    bool knockback; // r31
    bool RPSProtected; // r30

    {
        // Range: 0x801351A8 -> 0x801352A8
        // Local variables
        enum eHitSource baseSource; // r0

        {
            // Range: 0x801351DC -> 0x80135284
            // Local variables
            class xVec3 hitDirection; // r1+0x44
        }
    }
    {
        // Range: 0x801352C4 -> 0x801354E0
        // Local variables
        class xVec3 knockbackVec; // r1+0x38

        {
            // Range: 0x8013539C -> 0x80135420
            // Local variables
            float length; // f0
        }
        {
            // Range: 0x80135420 -> 0x80135498
            // Local variables
            float length; // f0
        }
    }

    // References
    // -> class xVec3 m_Null;
    // -> class zGameCheats gGameCheats;
}
// Range: 0x80135580 -> 0x801355C0
void zSBPlayer::ResetInvincibilityTimer() {
}
// Range: 0x801355C0 -> 0x80135614
void zSBPlayer::ResetHealth(class zSBPlayer * this /* r31 */) {
}
// signature: zSBPlayer::SetCurrentHitPoints(float)
// Range: 0x80135620 -> 0x801356AC
void zSBPlayer::SetCurrentHitPoints(class zSBPlayer * this /* r31 */) {
    // Local variables
    class EventActionOneFloat params; // r1+0x8
}
// signature: zSBPlayer::SetMaximumHitPoints(float)
// Range: 0x801356B0 -> 0x80135728
void zSBPlayer::SetMaximumHitPoints(class zSBPlayer * this /* r31 */) {
    // Local variables
    class EventActionOneInt params; // r1+0x8

    // References
    // -> float MAXplayerHP;
}
// signature: zSBPlayer::SetGooState(SBGooFilledState)
// Range: 0x80135730 -> 0x8013591C
void zSBPlayer::SetGooState(class zSBPlayer * this /* r31 */) {
    // References
    // -> class zGameCheats gGameCheats;
}
// signature: zSBPlayer::SetPowerupTimerToMax(SBPowerupState)
// Range: 0x80135920 -> 0x801359B8
void zSBPlayer::SetPowerupTimerToMax(class zSBPlayer * this /* r31 */) {
}
// Range: 0x801359C0 -> 0x80135CA8
void zSBPlayer::SetPowerupState(class zSBPlayer * this /* r30 */, enum SBPowerupState newPowerupState /* r31 */) {
    {
        // Range: 0x80135AF8 -> 0x80135B30
        // Local variables
        class EventActionSBPowerup params; // r1+0xC
    }
    {
        // Range: 0x80135C58 -> 0x80135C90
        // Local variables
        class EventActionSBPowerup params; // r1+0x8
    }

    // References
    // -> class zGlobals globals;
    // -> class zGameCheats gGameCheats;
}
// Range: 0x80135CB0 -> 0x80135DD4
void zSBPlayer::SwapToCurrentPowerupModel(class zSBPlayer * this /* r29 */) {
    // Local variables
    unsigned long long assetID; // r31:r30
    class zCharacterAsset * characterAsset; // r3

    // References
    // -> class zPlayerInventory inventory;
}
// signature: zSBPlayer::IsOnSlipperySurface(const float) const
// Range: 0x80135DE0 -> 0x80135E1C
bool zSBPlayer::IsOnSlipperySurface() const {
}
// signature: zSBPlayer::IsUsingPhysicsDrive(xBase *)
// Range: 0x80135E20 -> 0x80135E5C
bool zSBPlayer::IsUsingPhysicsDrive() {
}
// Range: 0x80135E60 -> 0x80135F94
void zSBPlayer::SetFaceCamera(class zSBPlayer * this /* r30 */, float offsetRads /* r1+0x8 */) {
    // Local variables
    class xMat4x3 targetMat; // r1+0x18
    class xVec3 targetFacing; // r1+0xC
    float angleAway; // f0
}
// Range: 0x80135FA0 -> 0x80136000
bool zSBPlayer::IsAiming(class zSBPlayer * this /* r31 */) {
    // Local variables
    unsigned int action; // r0
}
// Range: 0x80136000 -> 0x80136030
bool zSBPlayer::IsFluidSpray() {
}
// Range: 0x80136030 -> 0x80136068
bool zSBPlayer::IsInBungeeBall() {
}
// Range: 0x80136070 -> 0x8013618C
void zSBPlayer::ApplyInvincibilityDamage(class zSBPlayer * this /* r28 */, class xBase * target /* r29 */) {
    // Local variables
    class xVec3 targetCenter; // r1+0x40
    class xVec3 knockback; // r1+0x34
    class zCombatDamageInfo damageInfo; // r1+0x4C

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x80136190 -> 0x801361F0
void zSBPlayer::StopInvincibilityFX(class zSBPlayer * this /* r30 */) {
}
// Range: 0x801361F0 -> 0x80136238
void zSBPlayer::StopSBB3SmokeTrailFX(class zSBPlayer * this /* r30 */) {
}
// Range: 0x80136240 -> 0x80136288
void zSBPlayer::StopBreathFX(class zSBPlayer * this /* r30 */) {
}
// Range: 0x80136290 -> 0x8013630C
void zSBPlayer::PlayBungeeBallBreakFreeFX(class zSBPlayer * this /* r31 */) {
    {
        // Range: 0x801362A4 -> 0x801362F8
        // Local variables
        class zFXSpawn * fxSpawnPt; // r0
    }
}
// Range: 0x80136310 -> 0x8013638C
void zSBPlayer::PlayBungeeBallHitObjectFX(class zSBPlayer * this /* r31 */) {
    {
        // Range: 0x80136324 -> 0x80136378
        // Local variables
        class zFXSpawn * fxSpawnPt; // r0
    }
}
// Range: 0x80136390 -> 0x801363C0
void zSBPlayer::IncreaseBuffKillCounter() {
}
// Range: 0x801363C0 -> 0x80136440
void zSBPlayer::PlayNullAttackFX(class zSBPlayer * this /* r30 */, class xVec3 & hitLoc /* r31 */) {
    {
        // Range: 0x801363D8 -> 0x8013642C
        // Local variables
        class zFXSpawn * fxSpawnPt; // r0
    }
}
// Range: 0x80136440 -> 0x801364BC
void zSBPlayer::PlayLosePowerupFX(class zSBPlayer * this /* r31 */) {
    {
        // Range: 0x80136454 -> 0x801364A8
        // Local variables
        class zFXSpawn * fxSpawnPt; // r0
    }
}
// Range: 0x801364C0 -> 0x8013654C
void zSBPlayer::InitMinibossLyleVortexFX(class zSBPlayer * this /* r29 */) {
    // Local variables
    class zFXSpawn * vortexFXScript; // r30
}
// Range: 0x80136550 -> 0x801365EC
void zSBPlayer::UpdateMinibossLyleVortexFX(class zSBPlayer * this /* r30 */, class xVec3 & pullDir /* r31 */) {
    {
        // Range: 0x80136578 -> 0x801365D8
        // Local variables
        class xMat4x3 rotationMat; // r1+0x8
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x801365F0 -> 0x80136634
void zSBPlayer::StopMinibossLyleVortexFX(class zSBPlayer * this /* r31 */) {
}
// Range: 0x80136640 -> 0x8013668C
void zSBPlayer::ClearInteractions(class zSBPlayer * this /* r31 */) {
}
// Range: 0x80136690 -> 0x801367D0
void zSBPlayer::PlayerDiedSceneReset() {
    // Local variables
    class xCounter * ctr; // r30
    class EventActionOneInt incParam; // r1+0xC

    {
        // Range: 0x80136710 -> 0x801367B4
        // Local variables
        class EventActionTeleportPlayer p; // r1+0x8
        class zPortal * portal; // r0
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x801367D0 -> 0x80136DD8
bool zSBPlayer::CheckGroundSupport(class zSBPlayer * this /* r31 */) {
    // Local variables
    class hkpWorldRayCastInput inputs[5]; // r1+0x100
    float xOffsets[5]; // r1+0xE4
    float zOffsets[5]; // r1+0xD0
    class zSBCastCollector collectors[5]; // r1+0x1F0
    class hkAabb playerFloorAabb; // r1+0xB0
    float distanceFromContact; // f30
    float distanceFromGround; // f29
    class xVec3 flattestFloorNormal; // r1+0x28
    bool raycastsHitSomething; // r23

    {
        // Range: 0x80136810 -> 0x80136954
        // Local variables
        class xEnt * floorEntity; // r0

        {
            // Range: 0x80136838 -> 0x80136954
            // Local variables
            class zPlatform * floorPlatform; // r0

            {
                // Range: 0x8013684C -> 0x80136954
                // Local variables
                class xVec3 & floorNormal; // r24

                {
                    // Range: 0x80136870 -> 0x80136954
                    // Local variables
                    float slideSpeed; // f1
                    float floorSin; // f0
                    float maxSin; // f0
                    float minSin; // f0
                    class xVec3 downhill; // r1+0x90
                    class xVec3 right; // r1+0x9C

                    {
                        // Range: 0x8013690C -> 0x8013693C
                        // Local variables
                        float t; // f2
                    }
                }
            }
        }
    }
    {
        // Range: 0x80136A34 -> 0x80136B18
        // Local variables
        unsigned int i; // r23

        {
            // Range: 0x80136A34 -> 0x80136B18
            // Local variables
            class hkVector4 offsetDown; // r1+0x40
            class hkVector4 offsetUp; // r1+0x50
            class hkVector4 v1; // r1+0x60
            class hkVector4 offset; // r1+0x70
            class hkVector4 v0; // r1+0x80
        }
    }
    {
        // Range: 0x80136B60 -> 0x80136B9C
        // Local variables
        unsigned int i; // r23
    }
    {
        // Range: 0x80136BA8 -> 0x80136BE0
        // Local variables
        unsigned int i; // r23
    }
    {
        // Range: 0x80136BFC -> 0x80136CB8
        // Local variables
        unsigned int i; // r24

        {
            // Range: 0x80136BFC -> 0x80136CB8
            // Local variables
            class zSBCastCollector & collector; // r25

            {
                // Range: 0x80136C20 -> 0x80136CB8
                // Local variables
                float computedDistanceFromContact; // f0
                float distanceFromGroundToProxyCenter; // f0
                float distanceToGround; // f28
                float normalY; // f0
                class hkpWorldRayCastOutput & output; // r0
            }
        }
    }
    {
        // Range: 0x80136CC8 -> 0x80136D9C
        // Local variables
        class hkpCharacterProxy * proxy; // r0
        float allowedDistanceFromContact; // f28
    }

    // References
    // -> class xVec3 m_Null;
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x80136F10 -> 0x80136FA0
void zSBPlayer::AfterAnimMatrices(class zSBPlayer * this /* r25 */, class xAnimPlay * play /* r26 */, class Matrix43 * skinMat /* r27 */, class xQuat * quatresult /* r28 */, class xVec3 * scaleresult /* r29 */, class xVec3 * tranresult /* r30 */, int boneCount /* r31 */) {
}
// signature: zSBPlayer::ApplySpinBoneModification(xAnimPlay *, Math::Matrix43 *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x80136FA0 -> 0x8013707C
void zSBPlayer::ApplySpinBoneModification(class zSBPlayer * this /* r29 */, class Matrix43 * skinMat /* r30 */) {
    // Local variables
    class zSBPlayerSpinAttack * spinAttackAction; // r31
    class xMat4x3 boneMat; // r1+0x38
    float rotationalOffset; // f31
    class Matrix43 boneMatNG; // r1+0x8
}
// Range: 0x80137080 -> 0x8013721C
void zSBPlayer::FixAllAnimPackageEffects(class zSBPlayer * this /* r30 */) {
    // Local variables
    unsigned long long animPackageID; // r0:r0
}
// Range: 0x80137220 -> 0x801372B4
bool zSBPlayer::CheckForNearbyNPCs(float radius /* f31 */) {
    // Local variables
    class fixed_stack_list nearbyNPCList; // r1+0x18
    class xVec3 checkPos; // r1+0x8
}
// Range: 0x801372C0 -> 0x801372D8
void zSBPlayer::ForceRunSuccessAnim() {
}
