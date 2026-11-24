/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zEvePlayer.cpp
*/
static float PIP_POS_X; // size: 0x4, address: 0x807998A8
static float PIP_POS_Y; // size: 0x4, address: 0x807998AC
static float PIP_POS_Z; // size: 0x4, address: 0x807998B0
static float PIP_SCALE; // size: 0x4, address: 0x807998B4
static float SCAN_ACTIVE_THRESHOLD; // size: 0x4, address: 0x807006E0
static float SCAN_LOS_MIN_HIT_DISTANCE; // size: 0x4, address: 0x807006E4
static class xVec3 POWERSURGE_LOCAL_OFFSET; // size: 0xC, address: 0x807006E8
static float RETAIN_DOT_DAMAGE_TIME; // size: 0x4, address: 0x807006F4
static float REGENERATION_SPAN; // size: 0x4, address: 0x807006F8
static float CHEVRON_TIME; // size: 0x4, address: 0x807006FC
static float CHEVRON_TURN_TIME; // size: 0x4, address: 0x80700700
static class compositeEffect rumbleEffects[1]; // size: 0x70, address: 0x807998B8
char * pipperTargetGreenList[4]; // size: 0x10, address: 0x80700708
char * pipperTargetRedList[4]; // size: 0x10, address: 0x80700718
char * reticleIRWarningList[4]; // size: 0x10, address: 0x80700728
char * reticleIRErrorList[4]; // size: 0x10, address: 0x80700738
char * targetMarkerViewList[4]; // size: 0x10, address: 0x80700748
char * healthMeterList[4]; // size: 0x10, address: 0x80700758
static float multiplier; // size: 0x4, address: 0x80700770
static class xHierarchyBoundInitData bounds[3]; // size: 0x24, address: 0x807007CC
static char * EVE_PROXIMITY_SPAWNPT_NAMES[18]; // size: 0x48, address: 0x807007F0
// Range: 0x801A48A0 -> 0x801A4C54
void zEvePlayer::ParseIni(class zEvePlayer * this /* r31 */) {
    // Local variables
    float DEFAULT_SPEED_NORMAL[6]; // r1+0x38
    float DEFAULT_SPEED_JUMP[6]; // r1+0x20
    float DEFAULT_ANIM_WALK[3]; // r1+0x14
    float DEFAULT_ANIM_RUN[3]; // r1+0x8
}
// Range: 0x801A4C60 -> 0x801A605C
void zEvePlayer::Init(class zEvePlayer * this /* r29 */, class xEntAsset * asset /* r30 */) {
    // Local variables
    class zCharacterAsset * pCharacterAsset; // r0
    class xMat4x3 gunBarrelMatrix; // r1+0x10

    {
        // Range: 0x801A5754 -> 0x801A576C
        // Local variables
        int i; // r26
    }
    {
        // Range: 0x801A5800 -> 0x801A5800
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x801A58B8 -> 0x801A58B8
        // Local variables
        int i; // r7
    }
    {
        // Range: 0x801A5FE0 -> 0x801A5FE4
        // Local variables
        int i; // r25
    }

    // References
    // -> class zWalleCheats gWalleCheats;
    // -> static class xVec3 POWERSURGE_LOCAL_OFFSET;
    // -> static float CHEVRON_TURN_TIME;
    // -> class xVec3 m_Null;
    // -> class zGlobals globals;
    // -> char * healthMeterList[4];
    // -> char * targetMarkerViewList[4];
    // -> char * reticleIRErrorList[4];
    // -> char * reticleIRWarningList[4];
    // -> char * pipperTargetRedList[4];
    // -> char * pipperTargetGreenList[4];
    // -> float HP_START;
    // -> class zPlayerInputPadMgr padManager;
    // -> static class zQueue sPhysQueue;
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
}
// Range: 0x801A6060 -> 0x801A63A0
void zEvePlayer::InitHandlingSettings() {
}
// signature: zEvePlayer::CopyHandlingSettings(EveTweaks, EveTweaks &)
// Range: 0x801A63A0 -> 0x801A662C
void zEvePlayer::CopyHandlingSettings() {
}
// Range: 0x801A6630 -> 0x801A7060
void zEvePlayer::InitActions(class zEvePlayer * this /* r31 */) {
    // References
    // -> struct {} __vt__17zEvePlayerDamaged;
    // -> struct {} __vt__18zEvePlayerDefeated;
    // -> struct {} __vt__14zEvePlayerScan;
    // -> struct {} __vt__20zEvePlayerTurnAround;
    // -> struct {} __vt__20zEvePlayerBoostBrake;
    // -> struct {} __vt__15zEvePlayerBrake;
    // -> struct {} __vt__15zEvePlayerBoost;
    // -> struct {} __vt__13zEvePlayerFly;
    // -> struct {} __vt__15zEvePlayerCheat;
    // -> struct {} __vt__13zPlayerMGLose;
    // -> struct {} __vt__12zPlayerMGWin;
    // -> struct {} __vt__16zPlayerWalkStart;
    // -> struct {} __vt__17zCommonPlayerDash;
    // -> struct {} __vt__18zPlayerSwitchLever;
    // -> struct {} __vt__27zCommonPlayerActionPushPull;
    // -> struct {} __vt__19zPlayerActionLaunch;
    // -> struct {} __vt__18zPlayerChargeboard;
    // -> struct {} __vt__18zPlayerBoardLaunch;
    // -> struct {} __vt__16zPlayerHitLaunch;
    // -> struct {} __vt__16zPlayerTriggered;
    // -> struct {} __vt__11zPlayerLand;
    // -> struct {} __vt__18zPlayerFallToDeath;
    // -> struct {} __vt__11zPlayerFall;
    // -> struct {} __vt__11zPlayerSlip;
    // -> struct {} __vt__10zPlayerRun;
    // -> struct {} __vt__11zPlayerWalk;
    // -> struct {} __vt__15zPlayerSkidStop;
    // -> struct {} __vt__14zEvePlayerIdle;
}
// Range: 0x801A7060 -> 0x801A7104
void zEvePlayer::SceneSetup(class zEvePlayer * this /* r28 */) {
    // References
    // -> static class ImmediatePrototypeEntity * sActiveEntity;
}
// Range: 0x801A7110 -> 0x801A7C48
void zEvePlayer::Reset(class zEvePlayer * this /* r30 */) {
    // Local variables
    class xVec3 zeroVec; // r1+0xC0

    {
        // Range: 0x801A7138 -> 0x801A717C
        // Local variables
        class hkVector4 hk_pos; // r1+0xD0
    }
    {
        // Range: 0x801A71CC -> 0x801A7900
        // Local variables
        class hkVector4 hk_pos; // r1+0x80
        class xVec3 * pos; // r0
        class hkVector4 gravity; // r1+0x90
        class hkpCharacterProxyCinfo cpci; // r1+0xE0
        class hkpPropertyValue offVal; // r1+0x40
        class hkpPropertyValue onVal; // r1+0x48
        class hkpShape * temp_shape_capsule; // r31
        class hkpRigidBodyCinfo cinfo; // r1+0x200
        class hkVector4 v1; // r1+0xA0
        class hkVector4 v0; // r1+0xB0
        float len; // f1
        unsigned int levelID; // r0

        {
            // Range: 0x801A785C -> 0x801A785C
            // Local variables
            int i; // r0
        }
    }
    {
        // Range: 0x801A7BF4 -> 0x801A7BFC
        // Local variables
        int i; // r27
    }

    // References
    // -> class zWalleCheats gWalleCheats;
    // -> struct {} __vt__41zEvePlayerCharacterProxyCollisionListener;
    // -> struct {} __vt__36zPlayerEveRigidBodyCollisionListener;
    // -> class CHavokShapeBuilder * s_instance;
    // -> float hkTransformIdentity[65536];
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> class zGlobals globals;
}
// Range: 0x801A7C50 -> 0x801A7F60
void zEvePlayer::LoadCheckPoint(class zEvePlayer * this /* r30 */) {
    // References
    // -> class xVec3 m_Null;
    // -> class xVec3 m_UnitAxisY;
}
// signature: zEvePlayer::LoadCheckPointB(xVec3, float)
// Range: 0x801A7F60 -> 0x801A82C0
void zEvePlayer::LoadCheckPointB(class zEvePlayer * this /* r30 */) {
    // References
    // -> class xVec3 m_Null;
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x801A82C0 -> 0x801A8474
void zEvePlayer::Exit(class zEvePlayer * this /* r31 */) {
    // References
    // -> class zPlayerInputPadMgr padManager;
}
// signature: zEvePlayer::BeforeAnimMatrices(xAnimPlay *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x801A84C0 -> 0x801A8564
void zEvePlayer::BeforeAnimMatrices(class xVec3 * tran /* r30 */) {
    {
        // Range: 0x801A84D0 -> 0x801A854C
        // Local variables
        class xVec3 shakeOffset; // r1+0x8
    }
}
// Range: 0x801A8570 -> 0x801A864C
void zEvePlayer::DefaultBeginUpdate(class zEvePlayer * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x801A8650 -> 0x801A8CB0
void zEvePlayer::DefaultUpdate(class zEvePlayer * this /* r31 */, float dt /* f31 */) {
    // Local variables
    float toHitDistance; // r1+0x8
    class xVec3 targetDirection; // r1+0x30
    class xVec3 launchVector; // r1+0x24
    bool hitdetected; // r0
    float ang; // f0
    bool autoTargetUpdated; // r29
    float zeroToOne; // f1
    float zeroToOneMagnitude; // f0

    {
        // Range: 0x801A8B50 -> 0x801A8B54
        // Local variables
        int i; // r30
    }
    {
        // Range: 0x801A8B70 -> 0x801A8BCC
        // Local variables
        float slerpValue; // f0
    }

    // References
    // -> static float CHEVRON_TURN_TIME;
    // -> static float MIN_RADIUS;
    // -> static float MAX_RADIUS;
    // -> static float REGENERATION_SPAN;
}
// Range: 0x801A8CB0 -> 0x801A8EEC
void zEvePlayer::DefaultMove(class zEvePlayer * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
    // Local variables
    float mult; // f0
    class xMat4x3 gunBarrelMatrix; // r1+0x8
}
// Range: 0x801A8EF0 -> 0x801A944C
void zEvePlayer::DefaultEndUpdate(class zEvePlayer * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 * oldpos; // r0
    class xVec3 * pos; // r0
    class hkVector4 hk_pos; // r1+0x90
    class hkVector4 vel; // r1+0x80
    float leanForwardAngle; // f2
    class xMat3x3 collisionMat; // r1+0x140
    class xMat3x3 rotationMatrix; // r1+0x110

    {
        // Range: 0x801A90A0 -> 0x801A9168
        // Local variables
        class hkRotation rot; // r1+0xE0
    }
    {
        // Range: 0x801A9168 -> 0x801A9388
        // Local variables
        class xVec3 phantomoffset; // r1+0x50
        class xVec3 rotOffset; // r1+0x5C
        class xVec3 offset; // r1+0x68
        class hkTransform tempXform; // r1+0xA0
    }
    {
        // Range: 0x801A93F0 -> 0x801A93F8
        // Local variables
        int i; // r27
    }
}
// signature: zEvePlayer::AutoTargetUpdate(float)
// Range: 0x801A9450 -> 0x801A992C
void zEvePlayer::AutoTargetUpdate(class zEvePlayer * this /* r16 */) {
    // Local variables
    class zScene * s; // r21
    class LOSInfo losInfo[1000]; // r31+0x60
    int losInfoSize; // r20
    bool foundNearItem; // r15

    {
        // Range: 0x801A9528 -> 0x801A97F0
        // Local variables
        unsigned short i; // r19

        {
            // Range: 0x801A9528 -> 0x801A97F0
            // Local variables
            float dist; // f0
            float facingThreshold; // f26
            class xVec3 vecToTarget; // r31+0x40
            float minDist; // f27
            class xVec3 targetPos; // r31+0x4C
            class xEnt * ent; // r17
            class xBase * base; // r18

            {
                // Range: 0x801A9534 -> 0x801A97F0
                // Local variables
                float facing; // f0
            }
        }
    }
    {
        // Range: 0x801A9804 -> 0x801A98A0
        // Local variables
        int nearestItemIndex; // r31+0x14

        {
            // Range: 0x801A9848 -> 0x801A98A0
            // Local variables
            class hkVector4 tempPos4; // r31+0x30
        }
    }

    // References
    // -> static float SCAN_LOS_MIN_HIT_DISTANCE;
    // -> class zGlobals globals;
}
// signature: zEvePlayer::CheatControl(float, float, float)
// Range: 0x801A9D80 -> 0x801AA244
void zEvePlayer::CheatControl(class zEvePlayer * this /* r31 */, float x /* f30 */, float z /* f31 */) {
    // Local variables
    class xMat4x3 camMat; // r1+0x70
    class xVec3 forwardV; // r1+0x30
    float len; // f0
    unsigned int turbo; // r0
    float cheatBoost; // f6
    class xVec3 velDir; // r1+0x24
    float mag; // f0

    {
        // Range: 0x801AA0A0 -> 0x801AA204
        // Local variables
        class xMat3x3 goalMat; // r1+0x40
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zEvePlayer::TunnelControl(float, float, float)
// Range: 0x801AA250 -> 0x801AA960
void zEvePlayer::TunnelControl(class zEvePlayer * this /* r31 */, float z /* f29 */, float dt /* f30 */) {
    // Local variables
    float yaw; // f31
    float pitch; // f0
    float roll; // f0
    class xVec3 velDir; // r1+0x30
    float oldspeed; // f0
    class xVec3 velDirDiff; // r1+0x24
    float headingCosAngle; // f0
    float testLen; // f0
    class xMat3x3 goalMat; // r1+0x40

    {
        // Range: 0x801AA548 -> 0x801AA5C8
        // Local variables
        float angle; // f0
    }
}
// signature: zEvePlayer::HubControl(float, float, float)
// Range: 0x801AA960 -> 0x801AAFB0
void zEvePlayer::HubControl(class zEvePlayer * this /* r31 */, float z /* f27 */, float dt /* f28 */) {
    // Local variables
    float yaw; // f29
    float pitch; // f0
    float roll; // f0
    class xQuat quatPitchDelta; // r1+0x38
    class xQuat quatYawDelta; // r1+0x28
    class xQuat quatRollDelta; // r1+0x18
    class xMat3x3 matRotation; // r1+0x48
    class xVec3 cameraUp; // r1+0x8
    float upCamAlign; // f0
    float rollDirection; // f4

    {
        // Range: 0x801AA9CC -> 0x801AAE28
        // Local variables
        float pitchRate; // f31
        float yawRate; // f30

        {
            // Range: 0x801AAA04 -> 0x801AABB0
            // Local variables
            float blendAmount; // f0
            float diffBlendAngle; // f0
        }
        {
            // Range: 0x801AABB0 -> 0x801AAD30
            // Local variables
            float blendAmount; // f0
            float diffBlendAngle; // f0
        }
        {
            // Range: 0x801AAD38 -> 0x801AADA8
            // Local variables
            float c; // f0
            class zCamFirstPerson * cfps; // r4
        }
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x801AAFB0 -> 0x801ABB0C
void zEvePlayer::RelativeControl(class zEvePlayer * this /* r31 */, float x /* f27 */, float z /* f28 */, float dt /* f29 */) {
    // Local variables
    float stickMag; // f0
    float stickNormMag; // f0
    float stickAngle; // f0
    float extraSpeed; // f30
    float analog; // f0
    float goalLean; // f0
    float diffLean; // f3
    float goalPitch; // f0
    float diffPitch; // f3
    float leanLerp; // f1
    float pitchLerp; // f2

    {
        // Range: 0x801AB1F8 -> 0x801AB240
        // Local variables
        float controlScale; // f0
    }
    {
        // Range: 0x801AB3A8 -> 0x801AB588
        // Local variables
        float speedThreshold; // f26
    }

    // References
    // -> class zGlobals globals;
    // -> static float CHEVRON_TURN_TIME;
    // -> class xVec3 m_Null;
}
// signature: zEvePlayer::AbsControl(float, float, float)
// Range: 0x801ABB10 -> 0x801ABB7C
void zEvePlayer::AbsControl(class zEvePlayer * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x801ABB30 -> 0x801ABB54
        // Local variables
        class xVec2 eveControlPos; // r1+0x8
    }
}
// signature: zEvePlayer::UpdatePipper(float)
// Range: 0x801ABB80 -> 0x801ABECC
void zEvePlayer::UpdatePipper(class zEvePlayer * this /* r30 */) {
    // Local variables
    class xVec2 getIRResult; // r1+0x28
    float x; // f28
    float y; // f31
    float pipperX; // f0
    float pipperY; // f0

    // References
    // -> static float PIP_SCALE;
    // -> static float PIP_POS_Z;
    // -> static float PIP_POS_Y;
    // -> static float PIP_POS_X;
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x801ABEF0 -> 0x801ABF7C
bool zEvePlayer::UpgradedGun() {
    {
        // Range: 0x801ABEFC -> 0x801ABF60
        // Local variables
        int i; // r6
    }
}
// Range: 0x801ABF80 -> 0x801ABFCC
void zEvePlayer::UpgradeWeapon() {
    {
        // Range: 0x801ABF98 -> 0x801ABF9C
        // Local variables
        int i; // r30
    }
}
// signature: zEvePlayer::SetUpgrade(zCommonPlayerUpgradeType, zCommonPlayerUpgradeLevel)
// Range: 0x801ABFD0 -> 0x801ABFD4
void zEvePlayer::SetUpgrade() {
}
// Range: 0x801ABFE0 -> 0x801ACC98
void zEvePlayer::HandleEvent(class zEvePlayer * this /* r26 */, class xBase * from /* r27 */, unsigned int toEvent /* r28 */, class EventAny * genericParams /* r29 */) {
    {
        // Range: 0x801AC17C -> 0x801AC318
        // Local variables
        class xBase * toParamWidgetPtr; // r10
        class EventActionEnteredTunnelArea * params; // r0
    }
    {
        // Range: 0x801AC31C -> 0x801AC454
        // Local variables
        class zDirection * dir; // r0
        class xBase * dirWidgetPtr; // r24
        class EventActionDirectedChevronBoost * params; // r0

        {
            // Range: 0x801AC3AC -> 0x801AC440
            // Local variables
            float chevCosAngle; // f1
            class xVec3 chevronAt; // r1+0x70
        }
    }
    {
        // Range: 0x801AC458 -> 0x801AC76C
        // Local variables
        class zPlayerFall * fall; // r0
        int disableCamReset; // r30
        class zDirection * direction; // r0
        class xBase * toParamWidgetPtr; // r31
        class EventActionSetPlayerPosition * params; // r0

        {
            // Range: 0x801AC500 -> 0x801AC750
            // Local variables
            class hkVector4 hk_pos; // r1+0x60
            float roll; // f3
            float pitch; // f30
            float yaw; // f29

            {
                // Range: 0x801AC68C -> 0x801AC730
                // Local variables
                class xQuat quat; // r1+0x38
                class hkVector4 hk_pos_rigidBody; // r1+0x50
            }
        }
    }
    {
        // Range: 0x801AC76C -> 0x801ACBFC
        // Local variables
        class xVec3 trigCenter; // r1+0x2C

        {
            // Range: 0x801AC7F4 -> 0x801ACBE4
            // Local variables
            unsigned int i; // r6

            {
                // Range: 0x801AC800 -> 0x801ACBE4
                // Local variables
                class xVec3 dir; // r1+0x20

                {
                    // Range: 0x801AC818 -> 0x801ACBE4
                    // Local variables
                    class xMat3x3 targetMat; // r1+0xC0
                }
            }
        }
    }
    {
        // Range: 0x801ACC00 -> 0x801ACC08
        // Local variables
        int i; // r24
    }
    {
        // Range: 0x801ACC28 -> 0x801ACC44
        // Local variables
        class EventActionOneFloat * params; // r0
    }

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_UnitAxisX;
    // -> class xVec3 m_UnitAxisZ;
    // -> static float CHEVRON_TIME;
    // -> static float CHEVRON_TURN_TIME;
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
    // -> static float IRStickOutzoneHeight;
    // -> static float IRStickOutzoneWidth;
    // -> static float IRStickDeadzoneHeight;
    // -> static float IRStickDeadzoneWidth;
    // -> static float IRStickOffsetY;
    // -> static float IRStickOffsetX;
}
// Range: 0x801ACCB0 -> 0x801AD474
bool zEvePlayer::Damage(class zEvePlayer * this /* r27 */, class zCombatDamageInfo * damageInfo /* r28 */) {
    // Local variables
    enum zHitSource hitSource; // r30
    bool noJuggleDamage; // r29
    float damage; // f31
    float newHitPoints; // f28
    int damageResponse; // r6
    class xVec3 knockback; // r1+0x20

    {
        // Range: 0x801AD0E0 -> 0x801AD150
        // Local variables
        class xEnt * ent; // r0
    }
    {
        // Range: 0x801AD16C -> 0x801AD1DC
        // Local variables
        class xVec3 impartVelocityVec; // r1+0x14
    }
    {
        // Range: 0x801AD240 -> 0x801AD35C
        // Local variables
        float horiz; // f0
    }

    // References
    // -> class xVec3 g_O3;
    // -> static float multiplier;
    // -> class xVec3 g_Y3;
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// Range: 0x801AD480 -> 0x801AD6DC
void zEvePlayer::HandleSurfaceDamage(class zEvePlayer * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class zCombatDamageInfo damageInfo; // r1+0x8

    // References
    // -> static float RETAIN_DOT_DAMAGE_TIME;
    // -> class zGlobals globals;
}
// signature: zEvePlayer::GetWallDamage(const xVec3 &, const xVec3 &, float)
// Range: 0x801AD6E0 -> 0x801AD7B0
float zEvePlayer::GetWallDamage() {
    // Local variables
    class xVec3 inwardNormal; // r1+0x8
    float impactCosAngle; // r31
    float velRange; // f2
    float velPercent; // f9
    float anglePercent; // f3
    float wallDamage; // f0
    float min; // f0
    float max; // f0
    float damageRange; // f1
}
// Range: 0x801AD7B0 -> 0x801AD824
void zEvePlayer::Rumble(class zEvePlayer * this /* r30 */, unsigned int rumbleType /* r31 */) {
    // References
    // -> static class compositeEffect rumbleEffects[1];
}
// Range: 0x801AD830 -> 0x801AD834
void zEvePlayer::TurnedOnCheatMode() {
}
// Range: 0x801AD840 -> 0x801AD8B8
void zEvePlayer::SetupFirstPersonCam() {
}
// Range: 0x801AD8C0 -> 0x801AD8CC
class xHierarchyBoundInitData * zEvePlayer::GetHierarchyBoundInitData() const {
    // References
    // -> static class xHierarchyBoundInitData bounds[3];
}
// Range: 0x801AD8D0 -> 0x801AD8DC
float zEvePlayer::GetHierarchyMasterRadius() const {
}
// Range: 0x801AD8E0 -> 0x801AD8E4
void zEvePlayer::LoadUpgrades() {
}
// Range: 0x801AD8F0 -> 0x801AD8F4
void zEvePlayer::LoadSetupUpgrades() {
}
// Range: 0x801AD900 -> 0x801AD904
void zEvePlayer::SetupRumbles() {
}
// signature: @unnamed@WAD03_cpp@::EveGroundChecker::addRayHit(const hkpCdBody &, const hkpShapeRayCastCollectorOutput &)
// Range: 0x801D9BC0 -> 0x801D9CB0
static void @unnamed@WAD03_cpp@::EveGroundChecker::addRayHit(class EveGroundChecker * this /* r31 */) {
    // Local variables
    class xBase * base; // r9

    {
        // Range: 0x801D9C50 -> 0x801D9C88
        // Local variables
        class xEnt * pEnt; // r3
    }
}
// signature: @unnamed@WAD03_cpp@::RayCast(const xVec3 *, const xVec3 *, float &, int &)
// Range: 0x801AD910 -> 0x801ADAC8
static bool @unnamed@WAD03_cpp@::RayCast(float * dist /* r30 */, int * vfxType /* r31 */) {
    // Local variables
    class hkVector4 from; // r1+0x20
    class hkVector4 to; // r1+0x10
    class EveGroundChecker eveGroundProximityCollector; // r1+0x30
    class SurfaceGamePlay * surface; // r0

    {
        // Range: 0x801AD99C -> 0x801AD99C
        // Local variables
        class hkMonitorStream * mStream; // r0

        {
            // Range: 0x801AD99C -> 0x801AD99C
            // Local variables
            class TimerCommand * h; // r0
        }
    }
    {
        // Range: 0x801ADA20 -> 0x801ADA20
        // Local variables
        class hkMonitorStream * mStream; // r0

        {
            // Range: 0x801ADA20 -> 0x801ADA20
            // Local variables
            class TimerCommand * h; // r0
        }
    }

    // References
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> static struct {} __vt__Q219@unnamed@WAD03_cpp@16EveGroundChecker;
}
// signature: zEvePlayer::Update_FX(float)
// Range: 0x801ADB10 -> 0x801AE040
void zEvePlayer::Update_FX(class zEvePlayer * this /* r31 */) {
    // Local variables
    class xVec3 offset; // r1+0x10
    float dist; // r1+0xC
    int vfxType; // r1+0x8

    {
        // Range: 0x801ADE3C -> 0x801ADFF4
        // Local variables
        float EMIT_RATE_SCALE; // f31

        {
            // Range: 0x801ADEBC -> 0x801ADFC8
            // Local variables
            class zFXScriptSpawnPt * spawnPt; // r0
        }
    }

    // References
    // -> static char * EVE_PROXIMITY_SPAWNPT_NAMES[18];
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
}
// Range: 0x801AE040 -> 0x801AE04C
float zEvePlayer::GetCapsuleHeight() {
}
