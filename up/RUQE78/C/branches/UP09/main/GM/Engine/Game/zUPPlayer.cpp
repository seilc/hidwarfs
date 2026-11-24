/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zUPPlayer.cpp
*/
class AutotargetObject autotargetObjects[150]; // size: 0x4B0, address: 0x8081A5E8
unsigned int numAutotargetObjects; // size: 0x4, address: 0x8081AA98
enum CombatPlayer combatPlayerLock; // size: 0x4, address: 0x8081AA9C
bool isRussellSwitchable; // size: 0x1, address: 0x8081AAA0
bool isDugSwitchable; // size: 0x1, address: 0x8081AAA1
enum SlidePlayer slidePlayerLock; // size: 0x4, address: 0x8081AAA4
class TRCMsgBox pickACombatPlayerMsgBox; // size: 0x34, address: 0x8081AAA8
class TRCMsgBox pickASlidePlayerMsgBox; // size: 0x34, address: 0x8081AADC
bool messageBoxCreationOK; // size: 0x1, address: 0x8081AB10
static class IconCache cache[16]; // size: 0x80, address: 0x8081AB18
static int total; // size: 0x4, address: 0x8081AB98
bool waterSwitch; // size: 0x1, address: 0x807A3280
bool friendlyFire; // size: 0x1, address: 0x807A3281
float respawnHeight; // size: 0x4, address: 0x807A3284
float MAXplayerHP; // size: 0x4, address: 0x807A3288
float playerHP; // size: 0x4, address: 0x8081AB9C
static float INPUT_CHANGE_THRESHOLD; // size: 0x4, address: 0x8081ABA0
static unsigned int waitForMessageBox; // size: 0x4, address: 0x8081ABA4
// signature: RegisterAutotargetObject(void *, AutotargetObject::ObjectType)
// Range: 0x800E6C90 -> 0x800E6CF0
void RegisterAutotargetObject() {
    {
        // Range: 0x800E6CB0 -> 0x800E6CC4
        // Local variables
        unsigned int i; // r0
    }

    // References
    // -> class AutotargetObject autotargetObjects[150];
    // -> unsigned int numAutotargetObjects;
}
// signature: GetClosestAutotargetObjectIndex(const xVec3 &, const xVec3 &, float, float, float)
// Range: 0x800E6CF0 -> 0x800E7010
int GetClosestAutotargetObjectIndex(class xVec3 & pos /* r31 */, float maxShotRange /* f24 */, float maxShotCos /* f25 */, float distanceDirectionWeight /* f26 */) {
    // Local variables
    class xVec3 normalizedForwardDir; // r1+0x24
    int bestMatchIndex; // r28
    float bestTargetMetric; // f27

    {
        // Range: 0x800E6DD8 -> 0x800E6E30
        // Local variables
        unsigned int c; // r27

        {
            // Range: 0x800E6DD8 -> 0x800E6E30
            // Local variables
            float targetMetric; // f0
            float angleMetric; // f0
            float distanceMetric; // f6
            float objectDistance; // f0
            class xVec3 objectPlayerVector; // r1+0x18
        }
    }

    // References
    // -> unsigned int numAutotargetObjects;
    // -> class AutotargetObject autotargetObjects[150];
}
// signature: zUPPlayer::Init(Sext::xEntAsset *)
// Range: 0x800E7010 -> 0x800E70D0
void zUPPlayer::Init(class zUPPlayer * this /* r28 */) {
    // References
    // -> float respawnHeight;
    // -> bool friendlyFire;
    // -> bool waterSwitch;
}
// Range: 0x800E70D0 -> 0x800E7548
void zUPPlayer::SceneSetup(class zUPPlayer * this /* r29 */) {
    // References
    // -> static class IconCache cache[16];
    // -> static int total;
    // -> bool messageBoxCreationOK;
    // -> static class BadgePoint * bagePointAsset;
}
// Range: 0x800E7550 -> 0x800E75C4
void zUPPlayer::Exit(class zUPPlayer * this /* r31 */) {
    // References
    // -> unsigned int numAutotargetObjects;
}
// Range: 0x800E75D0 -> 0x800E764C
void zUPPlayer::DefaultBeginUpdate(class zUPPlayer * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x800E7680 -> 0x800E7AC0
void zUPPlayer::DefaultUpdate(class zUPPlayer * this /* r30 */, float dt /* f31 */) {
    {
        // Range: 0x800E76F4 -> 0x800E7730
        // Local variables
        class EventActionOneInt params2; // r1+0xC
    }
    {
        // Range: 0x800E7730 -> 0x800E775C
        // Local variables
        class EventActionOneInt params2; // r1+0x8
    }
    {
        // Range: 0x800E775C -> 0x800E77E8
        // Local variables
        class xVec3 tempBPos; // r1+0x10
    }

    // References
    // -> class zBalloonGenerator * pInstance;
    // -> class zGlobals globals;
}
// Range: 0x800E7AE0 -> 0x800E7B9C
void zUPPlayer::DefaultUpdateFall(class zUPPlayer * this /* r30 */, float dt /* f31 */) {
}
// signature: zOccludedByGeoHitCollector::addRayHit(const hkpCdBody &, const hkpShapeRayCastCollectorOutput &)
// Range: 0x80155540 -> 0x8015554C
void zOccludedByGeoHitCollector::addRayHit() {
}
// Range: 0x800E7BB0 -> 0x800E7D68
void zUPPlayer::UpdateCharacterProxy(class zUPPlayer * this /* r29 */, float dt /* f31 */) {
    // Local variables
    class xVec3 & oldpos; // r0
    class xVec3 & pos; // r0
    class hkVector4 vel; // r1+0x20
    class hkVector4 hk_pos; // r1+0x10

    {
        // Range: 0x800E7C74 -> 0x800E7CDC
        // Local variables
        class hkVector4 & playerVelocity; // r30
        class TriggerIdentifyingPointCollectorNoShrapnel startCollector; // r1+0x30
        class TriggerIdentifyingPointCollectorNoShrapnel castCollector; // r1+0x200
    }
}
// Range: 0x800E98A0 -> 0x800E99AC
void zUPPlayer::DefaultEndUpdate(class zUPPlayer * this /* r30 */, float dt /* f31 */) {
    // Local variables
    int autotargetObjectIndex; // r0

    // References
    // -> class AutotargetObject autotargetObjects[150];
}
// Range: 0x800E99B0 -> 0x800E9CB0
void zUPPlayer::LaunchHitProjectiles(class zUPPlayer * this /* r27 */) {
    // Local variables
    int closestTargetIndex; // r0

    {
        // Range: 0x800E9A24 -> 0x800E9C6C
        // Local variables
        int c; // r28

        {
            // Range: 0x800E9A24 -> 0x800E9C6C
            // Local variables
            class xBase * hitObject; // r3

            {
                // Range: 0x800E9A24 -> 0x800E9C6C
                // Local variables
                enum ProjectileType projectileType; // r0
                class zProjectile * projectile; // r3

                {
                    // Range: 0x800E9A24 -> 0x800E9A2C
                    // Local variables
                    class zProjectileUPPlaygroundLaunchable * launchProj; // r26

                    {
                        // Range: 0x800E9A24 -> 0x800E9A2C
                        // Local variables
                        class xVec3 launchVector; // r1+0x4C
                        float defaultLaunchSpeed; // f30
                    }
                    {
                        // Range: 0x800E9A2C -> 0x800E9A2C
                        // Local variables
                        class xVec3 targetPos; // r1+0x40
                    }
                }
                {
                    // Range: 0x800E9A2C -> 0x800E9C6C
                    // Local variables
                    class zProjectileUPPlaygroundRollable * rollProj; // r26

                    {
                        // Range: 0x800E9A2C -> 0x800E9BF0
                        // Local variables
                        class xVec3 launchVector; // r1+0x34
                    }
                    {
                        // Range: 0x800E9BF0 -> 0x800E9C6C
                        // Local variables
                        class xVec3 targetPos; // r1+0x28
                    }
                }
            }
        }
    }

    // References
    // -> class AutotargetObject autotargetObjects[150];
}
// signature: zUPPlayer::SetTurnRate(float)
// Range: 0x800E9CB0 -> 0x800E9CB8
void zUPPlayer::SetTurnRate() {
}
// Range: 0x800E9CC0 -> 0x800E9CC8
float zUPPlayer::GetTurnRate() {
}
// Range: 0x800E9CD0 -> 0x800E9CE0
void zUPPlayer::RestoreTurnRate() {
}
// Range: 0x800E9CE0 -> 0x800E9CF8
void zUPPlayer::ClearLookAtTarget() {
}
// Range: 0x800E9D00 -> 0x800EA024
void zUPPlayer::Reset(class zUPPlayer * this /* r31 */) {
    {
        // Range: 0x800E9F54 -> 0x800E9F54
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x800E9F68 -> 0x800E9FF0
        // Local variables
        class hkVector4 zeroVel; // r1+0x10
    }

    // References
    // -> class xVec3 m_Null;
    // -> class zBalloonGenerator * pInstance;
}
// Range: 0x800EA030 -> 0x800EA1FC
void zUPPlayer::HandleMovement(class zUPPlayer * this /* r29 */, class xScene * s /* r30 */, float dt /* f30 */, class xEntFrame * frame /* r31 */) {
    // References
    // -> class xVec3 m_Null;
}
// signature: zUPPlayer::ApplyInputAcceleration(float, float)
// Range: 0x800EA200 -> 0x800EA5FC
void zUPPlayer::ApplyInputAcceleration() {
    // Local variables
    float maxSpeed2; // f0
    class xVec3 curVelOnSurface; // r1+0x50
    class xVec3 curVelOnNormal; // r1+0x44
    float curSpeed2; // f2
    class xVec3 inputVel; // r1+0x38
    float inputSpeed2; // f0
    class xVec3 newVelOnSurface; // r1+0x2C

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x800EA600 -> 0x800EA884
void zUPPlayer::FeedbackMotion(class zUPPlayer * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class hkVector4 & proxyVel4; // r0
    class xVec3 proxyVel; // r1+0x2C
    class xVec3 drivenByVel; // r1+0x20
    class xVec3 momentumlessVel; // r1+0x14
    class xVec3 actualVel; // r1+0x8
}
// signature: zUPPlayer::AbsControl(float, float, float)
// Range: 0x800EA890 -> 0x800EA8EC
void zUPPlayer::AbsControl(class zUPPlayer * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x800EA8F0 -> 0x800EAD3C
void zUPPlayer::RelativeControl(class zUPPlayer * this /* r31 */, float x /* f28 */, float z /* f29 */, float dt /* f30 */) {
    // Local variables
    class xVec3 camRelativeInput; // r1+0x18
    float stickMag; // f31
    float spinSpeed; // r1+0x8

    {
        // Range: 0x800EAB90 -> 0x800EACD8
        // Local variables
        float newRad; // f27
        float dRad; // f1
        float spinDir; // f0
    }
}
// Range: 0x800EAD40 -> 0x800EADCC
void zUPPlayer::TurnedOffCheatMode(class zUPPlayer * this /* r30 */) {
}
// Range: 0x800EADD0 -> 0x800EB334
void zUPPlayer::SinkingSurfaceControl(class zUPPlayer * this /* r30 */, float mag /* f29 */, class xVec3 & camRelativeInput /* r31 */, float dt /* f30 */) {
    // Local variables
    class xVec2 dir; // r1+0x10
    class xVec3 playerAtXZ; // r1+0x24
    class xVec3 playerRightXZ; // r1+0x18
    float atProject; // f0
    float rightProject; // f31
    float speed; // f6
    float checkHeight; // f0
    float percentageSubmerged; // f3
    unsigned int animFlags; // r0

    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisX;
}
// signature: zUPPlayer::SwimControl(float, float, float, float)
// Range: 0x800EB340 -> 0x800EC860
void zUPPlayer::SwimControl(class zUPPlayer * this /* r31 */, float dt /* f30 */) {
    // Local variables
    bool noGrav; // r0
    class xVec2 dir; // r1+0x28
    class xVec3 camRelativeInput; // r1+0x110
    class xVec3 pC; // r1+0x104
    float friction; // f0
    class xVec3 playerAtXZ; // r1+0xF8
    class xVec3 playerRightXZ; // r1+0xEC
    float maxSpeed; // f31
    float walkStartMag; // f0
    float runStartMag; // f0

    {
        // Range: 0x800EB3FC -> 0x800EB5B4
        // Local variables
        class xVec2 carlTargetDir; // r1+0x30
    }
    {
        // Range: 0x800EB8FC -> 0x800EBA24
        // Local variables
        float inputAccMag; // f5
        class xVec3 moveDirection; // r1+0xE0
        float rightProject; // f29
        float atProject; // f0
    }
    {
        // Range: 0x800EBA54 -> 0x800EBE88
        // Local variables
        class xVec3 dugToCarlVec; // r1+0xD4
        float diffAngle; // f1
        float destAngle; // f0
        float curAngle; // f0
        class xVec2 p2; // r1+0x18
        class xVec2 p1; // r1+0x20

        {
            // Range: 0x800EBBA4 -> 0x800EBE3C
            // Local variables
            class xVec3 distanceToMove; // r1+0xC8
            float maxAttachSpeed; // f0
        }
    }
    {
        // Range: 0x800EBE94 -> 0x800EC408
        // Local variables
        float bias; // f2
        class xVec3 dugToCarlVec; // r1+0xBC

        {
            // Range: 0x800EBFD0 -> 0x800EC0D0
            // Local variables
            float diffAngle; // f2
            float destAngle; // f0
            float curAngle; // f0
            class xVec2 p2; // r1+0x8
            class xVec2 p1; // r1+0x10
        }
        {
            // Range: 0x800EC100 -> 0x800EC35C
            // Local variables
            class xVec3 distanceToMove; // r1+0xB0
            float maxAttachSpeed; // f0
        }
        {
            // Range: 0x800EC35C -> 0x800EC3E8
            // Local variables
            float savedY; // f2
        }
    }

    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisX;
    // -> class xVec2 m_UnitAxisX;
}
// Range: 0x800EC860 -> 0x800ED088
void zUPPlayer::DefaultControl(class zUPPlayer * this /* r27 */, float stickMag /* f26 */, class xVec3 & camRelativeInput /* r28 */, float dt /* f27 */, bool updateLean /* r29 */) {
    // Local variables
    unsigned int animUserFlag; // r31
    float friction; // f31
    bool stickySurface; // r30
    class xVec3 playerAtXZ; // r1+0x38
    class xVec3 playerRightXZ; // r1+0x2C
    float maxSpeed; // f30
    float walkStartMag; // f2
    float runStartMag; // f6
    float turnSpeed; // f29

    {
        // Range: 0x800ECB8C -> 0x800ECBFC
        // Local variables
        float maxSlipperySpeed; // f1
    }
    {
        // Range: 0x800ECBFC -> 0x800ECF48
        // Local variables
        float inputAccMag; // f4
        class xVec3 moveDirection; // r1+0x20
        float rightProject; // f28
        float atProject; // f0

        {
            // Range: 0x800ECEA0 -> 0x800ECED8
            // Local variables
            float acceleration; // f0
        }
    }

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisX;
}
// signature: zUPPlayer::GoodPosFill(xVec3 &)
// Range: 0x800ED0A0 -> 0x800ED194
void zUPPlayer::GoodPosFill() {
    {
        // Range: 0x800ED0A0 -> 0x800ED190
        // Local variables
        int x; // r0
    }
}
// signature: zUPPlayer::GoodPosUpdate(float)
// Range: 0x800ED1A0 -> 0x800ED444
void zUPPlayer::GoodPosUpdate(class zUPPlayer * this /* r31 */) {
    {
        // Range: 0x800ED1F8 -> 0x800ED404
        // Local variables
        class xVec3 possiblePos; // r1+0x8

        {
            // Range: 0x800ED290 -> 0x800ED294
            // Local variables
            unsigned int x; // r0
        }
        {
            // Range: 0x800ED328 -> 0x800ED404
            // Local variables
            bool passedTubeTest; // r28

            {
                // Range: 0x800ED32C -> 0x800ED394
                // Local variables
                unsigned int tubeTest; // r27

                {
                    // Range: 0x800ED32C -> 0x800ED394
                    // Local variables
                    float radiusAllowance; // f27
                }
            }
        }
    }
}
// Range: 0x800ED450 -> 0x800EDA2C
void zUPPlayer::CheatControl(class zUPPlayer * this /* r31 */, float stickMag /* f30 */, class xVec3 & camRelativeInput /* r28 */, float dt /* f31 */) {
    // Local variables
    unsigned int turbo; // r0
    float cheatBoost; // f4
    class xVec3 velDir; // r1+0x98
    float mag; // f0

    {
        // Range: 0x800ED5D0 -> 0x800ED684
        // Local variables
        class xMat3x3 goalMat; // r1+0xA8
    }
    {
        // Range: 0x800ED6A0 -> 0x800ED9D4
        // Local variables
        class xVec3 toOther; // r1+0x8C
        unsigned int OtherTurbo; // r0
    }

    // References
    // -> class xVec3 m_Null;
    // -> class xGlobals * xglobals;
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x800EDA30 -> 0x800EDC9C
bool zUPPlayer::DetectSpinningModeInput(class zUPPlayer * this /* r30 */, float x /* f28 */, float z /* f30 */, float stickMag /* f29 */, float dt /* f31 */, float & spinSpeed /* r31 */) {
    // Local variables
    float angle; // f0
    float angleDiff; // f0
    float minSpinningTime; // f0
}
// signature: zUPPlayer::UpdateLean(float, float, unsigned int)
// Range: 0x800EDCA0 -> 0x800EDD80
void zUPPlayer::UpdateLean() {
    // Local variables
    float diffLeanLerp; // f4
}
// signature: zUPPlayer::ApplyDynamicFriction(xVec3 *, float, float, float)
// Range: 0x800EDD80 -> 0x800EDFF0
void zUPPlayer::ApplyDynamicFriction() {
    // Local variables
    float oldSpeed2; // f8

    {
        // Range: 0x800EDDE0 -> 0x800EDFE8
        // Local variables
        class xVec3 frictionVel; // r1+0x8
        float oldSpeed; // f0
        float frictionSpeed; // f5
        float slopeDot; // f4
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zUPPlayer::ApplyGravity(xVec3 *, const xVec3 &, float, float)
// Range: 0x800EDFF0 -> 0x800EE338
void zUPPlayer::ApplyGravity() {
    // Local variables
    float slopeDot; // f0
    class xVec3 surfaceRight; // r1+0x2C
    class xVec3 surfaceDownHill; // r1+0x20
    class xVec3 grav; // r1+0x14
    float gravitySpeed; // f9
    class xVec3 gravity; // r1+0x8

    {
        // Range: 0x800EE1F8 -> 0x800EE300
        // Local variables
        float staticFrictionSpeed; // f0
    }

    // References
    // -> class xVec3 m_Null;
    // -> class zGlobals globals;
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x800EE340 -> 0x800EE830
void zUPPlayer::GetCameraRelativeInput(class zUPPlayer * this /* r30 */, float x /* f30 */, float z /* f31 */, class xVec3 * result /* r31 */) {
    // Local variables
    class xMat4x3 camMat; // r1+0x8

    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisX;
}
// signature: zUPPlayer::GetSurfaceRelativeInput(xVec3 *, const xVec3 &)
// Range: 0x800EE830 -> 0x800EE924
void zUPPlayer::GetSurfaceRelativeInput() {
    // Local variables
    class xVec3 normal; // r1+0x14
    float slopeDot; // f0
    class xVec3 inputOnNormal; // r1+0x8

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x800EE930 -> 0x800EEA3C
bool zUPPlayer::NeedInputLock(float x /* f29 */, float z /* f30 */) {
    // Local variables
    class xVec2 currentStickInput; // r1+0x8
    float cosAngleDiff; // f0

    // References
    // -> static float INPUT_CHANGE_THRESHOLD;
}
// signature: zUPPlayer::HeadTrackingUpdate(float)
// Range: 0x800EEA40 -> 0x800EEA44
void zUPPlayer::HeadTrackingUpdate() {
}
// Range: 0x800EEA50 -> 0x800EEA9C
bool zUPPlayer::CanSwitchPlayer(class zUPPlayer * this /* r31 */) {
}
// Range: 0x800EEAB0 -> 0x800EEAB4
void zUPPlayer::EnterStoryMoment() {
}
// Range: 0x800EEAC0 -> 0x800EEAD4
void zUPPlayer::ExitStoryMoment() {
}
// Range: 0x800EEAE0 -> 0x800EF268
void zUPPlayer::HandleEvent(class zUPPlayer * this /* r28 */, class xBase * from /* r29 */, unsigned int toEvent /* r30 */, class EventAny * genericParams /* r31 */) {
    {
        // Range: 0x800EEAF4 -> 0x800EF23C
        {
            // Range: 0x800EED6C -> 0x800EEED4
            {
                // Range: 0x800EED80 -> 0x800EED84
                // Local variables
                int i; // r6
            }
        }
        {
            // Range: 0x800EEED8 -> 0x800EF014
            {
                // Range: 0x800EEEEC -> 0x800EEEF0
                // Local variables
                int i; // r6
            }
        }
        {
            // Range: 0x800EF0D8 -> 0x800EF150
            // Local variables
            class xVec3 newPos; // r1+0x8
            class xBase * toParamWidgetPtr; // r5
            class EventActionSetPlayerPosition * params; // r0
        }
    }

    // References
    // -> float respawnHeight;
    // -> bool friendlyFire;
    // -> bool waterSwitch;
    // -> class zPlayerInventory inventory;
}
// signature: zUPPlayer::GetGoodPos(zCommonPlayer *, int)
// Range: 0x800EF270 -> 0x800EF3CC
class xVec3 * zUPPlayer::GetGoodPos(class zUPPlayer * this /* r25 */, class zCommonPlayer * theGuy /* r26 */) {
    // Local variables
    class zUPPlayer * theGuyUP; // r0
    int safeguard; // r30

    {
        // Range: 0x800EF298 -> 0x800EF38C
        // Local variables
        int x; // r29

        {
            // Range: 0x800EF298 -> 0x800EF38C
            // Local variables
            bool goodPos; // r28

            {
                // Range: 0x800EF29C -> 0x800EF354
                // Local variables
                int y; // r27

                {
                    // Range: 0x800EF29C -> 0x800EF354
                    // Local variables
                    float dz; // f2
                    float dx; // f1
                    class hkVector4 pos; // r1+0x10
                }
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800EF3D0 -> 0x800EF488
float zUPPlayer::GetLastGoodY(class zUPPlayer * this /* r31 */) {
    // References
    // -> float respawnHeight;
}
// signature: zUPPlayer::Damage(const zCombatDamageInfo &)
// Range: 0x800EF490 -> 0x800EF508
bool zUPPlayer::Damage() {
    // References
    // -> bool friendlyFire;
}
// Range: 0x800EF510 -> 0x800EF5BC
bool zUPPlayer::IsDead(class zUPPlayer * this /* r30 */) const {
}
// Range: 0x800EF5C0 -> 0x800EF610
bool zUPPlayer::IsFloorColliding() const {
}
// Range: 0x800EF610 -> 0x800EF61C
float zUPPlayer::GetCurrentHitPoints() const {
    // References
    // -> float playerHP;
}
// Range: 0x800EF620 -> 0x800EF62C
float * zUPPlayer::GetCurrentHitPointsPointer() {
    // References
    // -> float playerHP;
}
// Range: 0x800EF630 -> 0x800EF63C
float zUPPlayer::GetMaximumHitPoints() const {
    // References
    // -> float MAXplayerHP;
}
// signature: zUPPlayer::SetCurrentHitPoints(float)
// Range: 0x800EF640 -> 0x800EF770
void zUPPlayer::SetCurrentHitPoints(class zUPPlayer * this /* r30 */) {
    // Local variables
    class EventActionOneFloat params; // r1+0x8

    // References
    // -> float playerHP;
}
// Range: 0x800EF770 -> 0x800EF860
void zUPPlayer::SetMaximumHitPoints(class zUPPlayer * this /* r31 */, float newHP /* f30 */) {
    // Local variables
    class EventActionOneInt params; // r1+0x8

    // References
    // -> float playerHP;
    // -> float MAXplayerHP;
}
// Range: 0x800EF860 -> 0x800EF914
void zUPPlayer::RegenHealth(class zUPPlayer * this /* r31 */, float regenRate /* f30 */, float dt /* f31 */) {
}
// Range: 0x800EF920 -> 0x800EF994
bool zUPPlayer::checkFatigue(class zUPPlayer * this /* r31 */) {
}
// Range: 0x800EF9A0 -> 0x800EF9B0
void zUPPlayer::resetFatigue() {
}
// Range: 0x800EF9B0 -> 0x800EFA88
void zUPPlayer::ClearInteractions(class zUPPlayer * this /* r29 */) {
}
// Range: 0x800EFA90 -> 0x800EFAE8
void zUPPlayer::ResetHealth(class zUPPlayer * this /* r31 */) {
}
// signature: zUPPlayer::SetOverheadImageTexture(unsigned int, float)
// Range: 0x800EFAF0 -> 0x800EFC6C
void zUPPlayer::SetOverheadImageTexture(class zUPPlayer * this /* r31 */, float time /* f31 */) {
    // References
    // -> static class IconCache cache[16];
    // -> static int total;
}
// signature: zUPPlayer::SetOverheadImageTexture(Sext::eContextActionID)
// Range: 0x800EFC70 -> 0x800EFF64
void zUPPlayer::SetOverheadImageTexture(class zUPPlayer * this /* r31 */) {
    // References
    // -> static int total;
    // -> static class IconCache cache[16];
}
// Range: 0x800EFF70 -> 0x800F0188
void zUPPlayer::UpdateOverheadImage(class zUPPlayer * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x800EFF9C -> 0x800F0160
        // Local variables
        float dist; // f0
        float curIconSize; // f0

        {
            // Range: 0x800F0094 -> 0x800F00C8
            // Local variables
            float lerpU; // f1
        }
    }
}
// Range: 0x800F01B0 -> 0x800F02C4
void zUPPlayer::SetupOffScreenImage(class zUPPlayer * this /* r29 */) {
    // Local variables
    unsigned int arrowHash; // r30
    unsigned int faceHash; // r31
}
// signature: zUPPlayer::UpdateOffScreenImage(float)
// Range: 0x800F02D0 -> 0x800F05E4
void zUPPlayer::UpdateOffScreenImage(class zUPPlayer * this /* r31 */) {
    // Local variables
    class xVec2 screenPoint; // r1+0x10
    class xVec3 testPos; // r1+0x18

    {
        // Range: 0x800F0400 -> 0x800F05B8
        // Local variables
        float viewportY; // f30
        float viewportX; // f31
        class xVec2 clampedScreenPoint; // r1+0x8
    }
}
// Range: 0x800F0620 -> 0x800F07EC
void zUPPlayer::AttachUIImages() {
    {
        // Range: 0x800F0644 -> 0x800F07B0
        // Local variables
        int i; // r27

        {
            // Range: 0x800F0644 -> 0x800F07B0
            // Local variables
            class zUPPlayer * upPlayer; // r26
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800F07F0 -> 0x800F0850
bool zUPPlayer::CanPushAway() const {
    // Local variables
    unsigned int currentAction; // r0
}
// Range: 0x800F0850 -> 0x800F08BC
void zUPPlayer::CollideTrigger(class zUPPlayer * this /* r30 */, class xScene * sc /* r31 */) {
}
// signature: zUPPlayer::SetInRagdoll(float, RagdollCallbackListener *)
// Range: 0x800F08C0 -> 0x800F08D8
void zUPPlayer::SetInRagdoll() {
}
// signature: zUPPlayer::SetInRagdollForDuration(float, float, float, RagdollCallbackListener *)
// Range: 0x800F08E0 -> 0x800F08F8
void zUPPlayer::SetInRagdollForDuration() {
}
// signature: zUPPlayer::RagdollFullyOff(xEnt *)
// Range: 0x800F0900 -> 0x800F09E4
void zUPPlayer::RagdollFullyOff(class zUPPlayer * this /* r30 */) {
    // Local variables
    class hkVector4 zeroVel; // r1+0x10

    {
        // Range: 0x800F097C -> 0x800F09A8
        // Local variables
        class hkpShapePhantom * phantom; // r31
    }
}
// signature: zUPPlayer::RagdollTransitioningOn(xEnt *)
// Range: 0x800F09F0 -> 0x800F0A94
void zUPPlayer::RagdollTransitioningOn(class zUPPlayer * this /* r30 */) {
    {
        // Range: 0x800F0A0C -> 0x800F0A60
        // Local variables
        class hkpShapePhantom * phantom; // r31
    }
}
// signature: zUPPlayer::RagdollPreRenderableUpdate(xEnt *, float &)
// Range: 0x800F0AA0 -> 0x800F0B34
void zUPPlayer::RagdollPreRenderableUpdate(class zUPPlayer * this /* r30 */, float & ragdollBlendVal /* r31 */) {
}
// Range: 0x800F0B40 -> 0x800F13E4
void zUPPlayer::PickACombatPlayer() {
    {
        // Range: 0x800F0B88 -> 0x800F0D4C
        // Local variables
        bool bothHuman; // r0

        {
            // Range: 0x800F0BBC -> 0x800F0D30
            {
                // Range: 0x800F0CA0 -> 0x800F0D30
                // Local variables
                unsigned int userData; // r0
            }
        }
    }
    {
        // Range: 0x800F0D50 -> 0x800F126C
        // Local variables
        class zPlayer * currentPlayer; // r30

        {
            // Range: 0x800F0D5C -> 0x800F0DA8
            // Local variables
            int i; // r27
        }
        {
            // Range: 0x800F0DBC -> 0x800F10C4
            // Local variables
            class zPlayer * pPlayer; // r3
        }
        {
            // Range: 0x800F10C8 -> 0x800F126C
            // Local variables
            class zPlayer * pPlayer; // r0
        }
    }

    // References
    // -> class TRCMsgBox pickACombatPlayerMsgBox;
    // -> bool isDugSwitchable;
    // -> class xGlobals * xglobals;
    // -> bool isRussellSwitchable;
    // -> unsigned int numLiveEnemies;
    // -> bool messageBoxCreationOK;
    // -> enum CombatPlayer combatPlayerLock;
    // -> static unsigned int waitForMessageBox;
}
// Range: 0x800F1430 -> 0x800F1B08
void zUPPlayer::PickASlidePlayer() {
    {
        // Range: 0x800F1454 -> 0x800F1614
        // Local variables
        bool bothHuman; // r0

        {
            // Range: 0x800F14E0 -> 0x800F1584
            // Local variables
            class zRussellPlayer * russPlayer; // r3
        }
        {
            // Range: 0x800F1584 -> 0x800F1614
            // Local variables
            unsigned int userData; // r0
        }
    }
    {
        // Range: 0x800F1628 -> 0x800F189C
        // Local variables
        class xMat4x3 newRussellMat; // r1+0x8
        class xMat4x3 newCarlMat; // r1+0x48
        class zRussellPlayer * russPlayer; // r30
    }
    {
        // Range: 0x800F18B4 -> 0x800F1974
        // Local variables
        class zRussellPlayer * russPlayer; // r3
    }

    // References
    // -> class TRCMsgBox pickASlidePlayerMsgBox;
    // -> class xGlobals * xglobals;
    // -> bool messageBoxCreationOK;
    // -> enum SlidePlayer slidePlayerLock;
}
// Range: 0x800F1B10 -> 0x800F1B2C
void zUPPlayer::ResetCombatPlayerLock() {
    // References
    // -> enum CombatPlayer combatPlayerLock;
}
// signature: zUPPlayer::SetSlidePlayerLock(zUPPlayer::SlidePlayer)
// Range: 0x800F1B30 -> 0x800F1B3C
void zUPPlayer::SetSlidePlayerLock() {
    // References
    // -> enum SlidePlayer slidePlayerLock;
}
// signature: zUPPlayer::IsOnSlipperySurface(const float) const
// Range: 0x800F1B40 -> 0x800F1B7C
bool zUPPlayer::IsOnSlipperySurface() const {
}
// signature: zUPPlayer::IsOnStickySurface(const float) const
// Range: 0x800F1B80 -> 0x800F1BB4
bool zUPPlayer::IsOnStickySurface() const {
}
// Range: 0x800F1BC0 -> 0x800F1D8C
void zUPPlayer::TriggerIdentifyingPointCollectorNoShrapnel::addCdPoint(class TriggerIdentifyingPointCollectorNoShrapnel * this /* r31 */, class hkpCdPoint & event /* r30 */) {
    // Local variables
    class hkpCollidable * rootCollidable; // r0
    class hkpRigidBody * body; // r0

    {
        // Range: 0x800F1C20 -> 0x800F1D64
        // Local variables
        class xBase * bodyOwner; // r0
    }
}
// Range: 0x800F1D90 -> 0x800F1DB0
void zUPPlayer::TriggerIdentifyingPointCollectorNoShrapnel::reset() {
}
// signature: zUPPlayer::TriggerIdentifyingPointCollectorNoShrapnel::applyForces(float, const hkVector4 &)
// Range: 0x800F1DB0 -> 0x800F25BC
void zUPPlayer::TriggerIdentifyingPointCollectorNoShrapnel::applyForces(class TriggerIdentifyingPointCollectorNoShrapnel * this /* r15 */, class hkVector4 & playerVelocity /* r16 */) {
    // Local variables
    class hkpCharacterObjectInteractionEvent input; // r1+0x190

    {
        // Range: 0x800F1E58 -> 0x800F21A4
        // Local variables
        int c; // r17

        {
            // Range: 0x800F1E58 -> 0x800F21A4
            // Local variables
            class hkpCharacterObjectInteractionResult output; // r1+0x110
            float deltaVelocity; // f22

            {
                // Range: 0x800F1E58 -> 0x800F1E5C
                // Local variables
                class hkVector4 pointVel; // r1+0xE0
            }
            {
                // Range: 0x800F1E5C -> 0x800F1E5C
                // Local variables
                float maxPushImpulse; // f5

                {
                    // Range: 0x800F1E5C -> 0x800F1E5C
                    // Local variables
                    class hkVector4 rc; // r1+0xB0
                    class hkVector4 jacAng; // r1+0xC0
                    class hkVector4 r; // r1+0xD0
                    class hkMatrix3 inertiaInv; // r1+0x160
                }
            }
            {
                // Range: 0x800F1E5C -> 0x800F217C
                // Local variables
                float relVel; // f1
                class hkVector4 charVelDown; // r1+0xA0
            }
        }
    }
    {
        // Range: 0x800F21B8 -> 0x800F24FC
        // Local variables
        int c; // r30

        {
            // Range: 0x800F21B8 -> 0x800F24FC
            // Local variables
            class hkpCharacterObjectInteractionResult output; // r1+0xF0
            float deltaVelocity; // f31

            {
                // Range: 0x800F21B8 -> 0x800F21BC
                // Local variables
                class hkVector4 pointVel; // r1+0x90
            }
            {
                // Range: 0x800F21BC -> 0x800F21BC
                // Local variables
                float maxPushImpulse; // f5

                {
                    // Range: 0x800F21BC -> 0x800F21BC
                    // Local variables
                    class hkVector4 rc; // r1+0x60
                    class hkVector4 jacAng; // r1+0x70
                    class hkVector4 r; // r1+0x80
                    class hkMatrix3 inertiaInv; // r1+0x130
                }
            }
            {
                // Range: 0x800F21BC -> 0x800F24D4
                // Local variables
                float relVel; // f1
                class hkVector4 charVelDown; // r1+0x50
            }
        }
    }
}
// signature: zUPPlayer::ClosestNonTriggerCheckNoShrapnel::addCdPoint(const hkpCdPoint &)
// Range: 0x800F25C0 -> 0x800F26F4
void zUPPlayer::ClosestNonTriggerCheckNoShrapnel::addCdPoint() {
    {
        // Range: 0x800F25F8 -> 0x800F2620
        // Local variables
        class xBase * bodyOwner; // r5
    }
}
// Range: 0x800F2700 -> 0x800F2744
void zUPPlayer::SaveStatic(class xSerial * serial /* r31 */) {
    // References
    // -> class zPlayerInventory inventory;
    // -> float MAXplayerHP;
}
// Range: 0x800F2750 -> 0x800F2794
void zUPPlayer::LoadStatic(class xSerial * serial /* r31 */) {
    // References
    // -> class zPlayerInventory inventory;
    // -> float MAXplayerHP;
}
