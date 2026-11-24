/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zShootingPlayer.cpp
*/
static float ShootingAppearZ; // size: 0x4, address: 0x8068DF30
static float ShootingMaxTiltAngleSine; // size: 0x4, address: 0x80754C48
static float ShootingMaxFollowAngleSine; // size: 0x4, address: 0x80754C4C
static float ShootingTiltRate; // size: 0x4, address: 0x8068DF34
static float ShootingBeamEmitterConstraintAngle; // size: 0x4, address: 0x8068DF38
static float ShootingBeamEmitterConstraintCos; // size: 0x4, address: 0x80754C50
static float ShootingBeamEmitterConstraintSin; // size: 0x4, address: 0x80754C54
class xEnt * currentEnt; // size: 0x4, address: 0x80754C58
class zShootingShakeState currentShakeState; // size: 0x34, address: 0x80754C5C
// signature: zPlayerIdleShooting::anShakeCheck(xAnimTransition *, xAnimSingle *, void *)
// Range: 0x8015C9B0 -> 0x8015CA1C
unsigned int zPlayerIdleShooting::anShakeCheck(class xAnimTransition * tran /* r30 */) {
}
// signature: zPlayerIdleShooting::anZapHurtCheck(xAnimTransition *, xAnimSingle *, void *)
// Range: 0x8015CA20 -> 0x8015CA8C
unsigned int zPlayerIdleShooting::anZapHurtCheck(class xAnimTransition * tran /* r30 */) {
}
// signature: zPlayerIdleShooting::anZapMissCheck(xAnimTransition *, xAnimSingle *, void *)
// Range: 0x8015CA90 -> 0x8015CAFC
unsigned int zPlayerIdleShooting::anZapMissCheck(class xAnimTransition * tran /* r30 */) {
}
// Range: 0x8015C120 -> 0x8015C438
void zPlayerIdleShooting::AddStates(class zPlayerIdleShooting * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x8015C440 -> 0x8015C9B0
void zPlayerIdleShooting::AddInternalTransitions(class xAnimTable * table /* r22 */) {
    // Local variables
    float FAST_BLEND_TIME; // f31
}
// signature: zPlayerIdleShooting::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8015CB00 -> 0x8015CB7C
void zPlayerIdleShooting::AddTransitionsFrom() {
}
// Range: 0x8015CB80 -> 0x8015CBF4
void zPlayerIdleShooting::Reset(class zPlayerIdleShooting * this /* r30 */) {
}
// Range: 0x8015CC00 -> 0x8015CC74
void zShootingPlayer::InitActions(class zShootingPlayer * this /* r31 */) {
    // References
    // -> struct {} __vt__19zPlayerIdleShooting;
}
// Range: 0x8015CC80 -> 0x8015CC90
unsigned int zShootingPlayer::GetBehaviorSetRefHash() const {
}
// signature: zShootingPlayer::Init(Sext::xEntAsset *)
// Range: 0x8015CC90 -> 0x8015CFCC
void zShootingPlayer::Init(class zShootingPlayer * this /* r31 */) {
    // References
    // -> struct {} __vt__26ShootingSimpleShapePhantom;
    // -> class hkTransform hkTransformIdentity;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x8015CFD0 -> 0x8015D07C
void zShootingPlayer::Reset(class zShootingPlayer * this /* r29 */) {
}
// Range: 0x8015D080 -> 0x8015DBB0
void zShootingPlayer::DefaultUpdate(class zShootingPlayer * this /* r27 */, float dt /* f31 */) {
    // Local variables
    unsigned int animUserFlag; // r0
    unsigned int readyToFire; // r4
    bool canTurnTowardsReticle; // r30
    bool canFire; // r28
    enum shootingState shakeHelperState; // r0
    enum shootingState enterExitState; // r29
    bool justAppeared; // r28
    class zBoardPlayer * sbPlayer; // r0
    class xMat4x3 targetMat; // r1+0x270
    class xVec3 & targetPos; // r29
    class hkVector4 characterProxyPos; // r1+0x190
    class xVec3 offsetAppear; // r1+0x184
    class xVec3 offsetHover; // r1+0x178
    class xVec3 offsetMirror; // r1+0x16C
    bool mirrorPositionCloser; // r31
    class xVec3 offsetCurrent; // r1+0x148
    class xMat3x3 targetRotation; // r1+0x240
    class xMat4x3 emitterMat; // r1+0x200
    class xVec3 dirToLookAtPos; // r1+0x130
    float scale; // f1
    class hkTransform havokTransform; // r1+0x1C0
    class hkVector4 & havokPos; // r0
    class hkRotation & havokRot; // r29

    {
        // Range: 0x8015D480 -> 0x8015D4E4
        // Local variables
        float maxDisplacementY; // f3
        float deltaOffsetY; // f2
    }
    {
        // Range: 0x8015D59C -> 0x8015D5E8
        // Local variables
        class xVec3 temp; // r1+0x160
    }
    {
        // Range: 0x8015D600 -> 0x8015D640
        // Local variables
        class xVec3 temp; // r1+0x154
    }
    {
        // Range: 0x8015D668 -> 0x8015D80C
        // Local variables
        float accelProportion; // f30
        float len; // f0
        class xVec3 diff; // r1+0x13C

        {
            // Range: 0x8015D6B4 -> 0x8015D730
            // Local variables
            float proportion; // f1
        }
    }
    {
        // Range: 0x8015DAA8 -> 0x8015DB84
        // Local variables
        class hkpFirstCdBodyPairCollector collector; // r1+0x1A0

        {
            // Range: 0x8015DAD8 -> 0x8015DB84
            // Local variables
            class hkVector4 mirrorPos; // r1+0x120
        }
    }

    // References
    // -> class xVec3 m_Null;
    // -> static float ShootingAppearZ;
}
// signature: zShootingPlayer::AfterAnimMatrices(xAnimPlay *, Math::Matrix43 *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x8015DBB0 -> 0x8015DDA8
void zShootingPlayer::AfterAnimMatrices(class zShootingPlayer * this /* r30 */, class Matrix43 * skinMat /* r29 */) {
    // Local variables
    class xMat4x3 origEmitterMat; // r1+0x158
    class xMat4x3 newEmitterMat; // r1+0x118
    class xVec3 targetDir; // r1+0x5C
    class xMat4x3 parentMat; // r1+0xD8
    float dot; // f0
    class xVec3 temp; // r1+0x44
    class xMat4x3 diffMat; // r1+0x98
    class Matrix43 diffMatNG; // r1+0x68

    {
        // Range: 0x8015DC3C -> 0x8015DCE8
        // Local variables
        class xVec3 perp; // r1+0x50
    }
    {
        // Range: 0x8015DD68 -> 0x8015DD90
        // Local variables
        unsigned int i; // r30
    }

    // References
    // -> static float ShootingBeamEmitterConstraintSin;
    // -> static float ShootingBeamEmitterConstraintCos;
}
// signature: zShootingPlayer::RotateToLookAt(xMat3x3 &, const xMat4x3 &, const xVec3 &, float)
// Range: 0x8015DDB0 -> 0x8015E02C
void zShootingPlayer::RotateToLookAt(class xMat3x3 & out /* r30 */, class xMat4x3 & in /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 targetDir; // r1+0x14
    float sine; // f0
    float oldYaw; // f0
    float targetYaw; // f0
    float deltaYaw; // f1
    float yaw; // f30
    float deltaY; // f0
    float temp; // f0

    // References
    // -> static float ShootingTiltRate;
    // -> static float ShootingMaxTiltAngleSine;
    // -> static float ShootingMaxFollowAngleSine;
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x8015E030 -> 0x8015E180
void * zShootingPlayerShakeHelper::zShootingPlayerShakeHelper(class zShootingPlayerShakeHelper * this /* r30 */) {
}
// Range: 0x8015E180 -> 0x8015E30C
void zShootingPlayerShakeHelper::Init(class zShootingPlayerShakeHelper * this /* r27 */, class zPlayer * player /* r28 */) {
    // Local variables
    class EventActionOneInt ammoParams; // r1+0x8

    // References
    // -> class xVec2 m_Null;
}
// Range: 0x8015E310 -> 0x8015E474
void zShootingPlayerShakeHelper::Reset(class zShootingPlayerShakeHelper * this /* r29 */, class zPlayer * player /* r30 */) {
    // Local variables
    class EventActionOneInt ammoParams; // r1+0x8

    // References
    // -> class xVec2 m_Null;
}
// Range: 0x8015E480 -> 0x8015F498
enum shootingState zShootingPlayerShakeHelper::Update(class zShootingPlayerShakeHelper * this /* r21 */, class zPlayer * player /* r22 */, class zPlayer * parentPlayer /* r25 */, float dt /* f31 */, class xVec3 * emitterPos /* r23 */, bool canFire /* r24 */) {
    // Local variables
    enum shootingState state; // r28
    class xMat4x3 * playerMat; // r27
    class xVec2 screenPoint; // r1+0x40
    bool reticleValid; // r0
    float aspectRatio; // f1
    float xScale; // f0
    class xVec3 targetDirection; // r1+0x130
    float toHitDistance; // r1+0x28
    class hkBaseObject * shootFilterList[1]; // r1+0x24
    class hkVector4 hkFrom; // r1+0x120
    class xVec3 toLocation; // r1+0x110
    class hkVector4 hkTo; // r1+0x100
    class hkVector4 rayCastHitPos; // r1+0xF0
    void * rayCastHitOwner; // r1+0x20
    bool rayCollided; // r3
    class xBase * hitBase; // r31
    class xEnt * pipperHitObj; // r26
    class xVec3 hitPos; // r1+0xD8
    bool grabbable; // r25
    class EventActionOneFloat shakeEnergyParams; // r1+0x18
    class EventActionOneFloat stunEnergyParams; // r1+0x14

    {
        // Range: 0x8015E77C -> 0x8015E9A8
        // Local variables
        float distFromPlayer; // f0
        float iw; // r1+0x2C
        bool slam; // r7
        class xVec2 shakeFreq; // r1+0x30
        class xVec2 swingDir; // r1+0x38
        bool stabilityReset; // r0
        unsigned int newStability; // r31
        unsigned int oldStability; // r26

        {
            // Range: 0x8015E934 -> 0x8015E964
            // Local variables
            class xMat4x3 mat; // r1+0x200
        }
    }
    {
        // Range: 0x8015E9E4 -> 0x8015EA14
        // Local variables
        class xMat4x3 mat; // r1+0x1C0
    }
    {
        // Range: 0x8015EA18 -> 0x8015EA88
        // Local variables
        class EventActionOneInt ammoParams; // r1+0x10
    }
    {
        // Range: 0x8015ED74 -> 0x8015EEFC
        // Local variables
        float distFromPlayer; // f0
        enum eSBFloatingItemType type; // r20
        class zFloatingCollectible * collectible; // r0

        {
            // Range: 0x8015EE78 -> 0x8015EEFC
            // Local variables
            class xMat4x3 mat; // r1+0x180
        }
    }
    {
        // Range: 0x8015F1A4 -> 0x8015F398
        // Local variables
        float iw; // r1+0x1C
        float distFromPlayer; // f0

        {
            // Range: 0x8015F30C -> 0x8015F398
            // Local variables
            class xMat4x3 mat; // r1+0x140
        }
    }

    // References
    // -> class xEnt * currentEnt;
}
// signature: zShootingPlayerShakeHelper::GetGrabPos(xBase *)
// Range: 0x8015F4E0 -> 0x8015F59C
class xVec3 zShootingPlayerShakeHelper::GetGrabPos() {
    // Local variables
    class xVec3 pos; // r1+0x14
}
// signature: zShootingPlayerShakeHelper::DecreaseShakeEnergy(float)
// Range: 0x8015F5A0 -> 0x8015F610
void zShootingPlayerShakeHelper::DecreaseShakeEnergy() {
    // Local variables
    class EventActionOneFloat shakeEnergyParams; // r1+0x8
}
// signature: zShootingPlayerShakeHelper::canZap(xBase *)
// Range: 0x8015F610 -> 0x8015F748
bool zShootingPlayerShakeHelper::canZap() {
    {
        // Range: 0x8015F660 -> 0x8015F67C
        // Local variables
        enum eSBFloatingItemType type; // r4
    }
    {
        // Range: 0x8015F67C -> 0x8015F6DC
        // Local variables
        class zDestructible * destsimpobj; // r3
    }
    {
        // Range: 0x8015F6DC -> 0x8015F73C
        // Local variables
        class zDestructible * destsimpobj; // r3
    }
}
// signature: zShootingPlayerShakeHelper::isWithinRange(const xVec3 &, xBase *)
// Range: 0x8015F750 -> 0x8015F810
bool zShootingPlayerShakeHelper::isWithinRange(class zShootingPlayerShakeHelper * this /* r30 */, class xVec3 & playerPos /* r31 */) {
    // Local variables
    class xVec3 targetPos; // r1+0x14
    float distance; // f0
}
// Range: 0x8015F810 -> 0x8015FA44
enum shootingState zShootingPlayerShakeHelper::tryZap(class zShootingPlayerShakeHelper * this /* r31 */, class zPlayer * player /* r27 */, class xBase * target /* r28 */, class xVec3 & hitPos /* r29 */) {
    // Local variables
    enum shootingState state; // r30

    {
        // Range: 0x8015F844 -> 0x8015F938
        // Local variables
        class EventActionOneInt ammoParams; // r1+0x10

        {
            // Range: 0x8015F890 -> 0x8015F8E0
            // Local variables
            class zCombatDamageInfo damageInfo; // r1+0x58
        }
        {
            // Range: 0x8015F8E0 -> 0x8015F938
            // Local variables
            class EventActionOn params; // r1+0x18
        }
    }
    {
        // Range: 0x8015F960 -> 0x8015F9C8
        // Local variables
        class zCombatDamageInfo damageInfo; // r1+0x1C
    }
    {
        // Range: 0x8015F9C8 -> 0x8015FA20
        // Local variables
        class EventActionOn params; // r1+0x14
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x8015FA50 -> 0x8015FFB8
bool zShootingPlayerShakeHelper::updateAimAssistReticle(class zShootingPlayerShakeHelper * this /* r28 */, class zPlayerInput * input /* r25 */, int viewportIndex /* r29 */, class xVec3 & playerPos /* r30 */, class xVec3 & camPos /* r24 */, float dt /* f30 */) {
    // Local variables
    float aspectRatio; // f31
    class xVec3 direction; // r1+0xAC
    class xVec3 to; // r1+0xA0
    float lowestScreenDistance2; // f29
    class xBase * found; // r31
    class xVec2 foundPos; // r1+0x40
    class hkVector4 fromPos; // r1+0x90
    class hkVector4 toPos; // r1+0x80
    class hkpAllCdPointCollector collector; // r1+0xC0
    class hkArray & hits; // r0
    float followAmount; // f29

    {
        // Range: 0x8015FAD0 -> 0x8015FB9C
        // Local variables
        class xVec2 IR; // r1+0x48
        enum IRStatus targetStatus; // r1+0x14
    }
    {
        // Range: 0x8015FCD8 -> 0x8015FDF4
        // Local variables
        int i; // r24

        {
            // Range: 0x8015FCD8 -> 0x8015FDF4
            // Local variables
            class xBase * baseB; // r25
            class hkpPhantom * phantomB; // r0
            class hkpRigidBody * bodyB; // r0

            {
                // Range: 0x8015FD20 -> 0x8015FDF4
                // Local variables
                bool onScreen; // r0
                float iw; // r1+0x10
                class xVec2 screenPos; // r1+0x38
                class xVec3 grabPos; // r1+0x74

                {
                    // Range: 0x8015FD94 -> 0x8015FDF4
                    // Local variables
                    float distance2; // f1
                }
            }
        }
    }
    {
        // Range: 0x8015FDF4 -> 0x8015FE50
        // Local variables
        float distance; // f1
    }

    // References
    // -> struct {} __vt__22hkpAllCdPointCollector;
    // -> struct {} __vt__19hkpCdPointCollector;
    // -> class xVec2 m_Null;
}
// signature: zShootingShakeManager::StartShake(xEnt *, const xVec3 &)
// Range: 0x8015FFC0 -> 0x80160038
bool zShootingShakeManager::StartShake() {
    // References
    // -> class zShootingShakeState currentShakeState;
    // -> class xEnt * currentEnt;
}
// signature: zShootingShakeManager::UpdateShake(xEnt *, const xVec3 &, float, xVec2 *, xVec2 &, bool)
// Range: 0x80160040 -> 0x80160470
void zShootingShakeManager::UpdateShake(float dt /* f31 */, class xVec2 * shakeDir /* r28 */, class xVec2 & shakeFreqVec /* r29 */, bool slam /* r27 */) {
    {
        // Range: 0x8016008C -> 0x80160450
        // Local variables
        class xVec2 autoShakeDir; // r1+0x28
        class xVec2 & swingVel; // r30
        class xVec2 & swingPos; // r31

        {
            // Range: 0x80160174 -> 0x80160348
            // Local variables
            bool horizontalSwing; // r27
        }
        {
            // Range: 0x80160358 -> 0x801603D0
            // Local variables
            float decayFactor; // f0
        }
    }

    // References
    // -> class zShootingShakeState currentShakeState;
}
// Range: 0x80160470 -> 0x80160528
bool zShootingSwingGesture::Update(class zShootingSwingGesture * this /* r27 */, class zPlayerInput * input /* r28 */) {
    // Local variables
    bool stabilityReset; // r30
    unsigned int accRecordCount; // r0

    {
        // Range: 0x801604A8 -> 0x80160510
        // Local variables
        unsigned int i; // r29

        {
            // Range: 0x801604A8 -> 0x80160510
            // Local variables
            class xVec3 acc; // r1+0x14
        }
    }
}
// Range: 0x80160530 -> 0x801607A4
void zShootingShakeGesture::Update(class zShootingShakeGesture * this /* r31 */, class zPlayerInput * input /* r21 */) {
    // Local variables
    class Time currentTime; // r1+0x28
    unsigned int accRecordCount; // r0

    {
        // Range: 0x80160580 -> 0x801606B0
        // Local variables
        unsigned int i; // r24

        {
            // Range: 0x80160580 -> 0x801606B0
            // Local variables
            float dv[2]; // r1+0x20
            class xVec3 & f; // r23
            class xVec3 acc; // r1+0x54

            {
                // Range: 0x80160590 -> 0x801606B0
                // Local variables
                int j; // r22
            }
        }
    }
    {
        // Range: 0x801606CC -> 0x80160784
        // Local variables
        int j; // r0
    }

    // References
    // -> double secondsPerTick;
}
