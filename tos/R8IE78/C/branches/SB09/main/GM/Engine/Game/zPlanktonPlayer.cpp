/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zPlanktonPlayer.cpp
*/
static float PlanktonAppearZ; // size: 0x4, address: 0x8068D2E8
static float PlanktonMaxTiltAngleSine; // size: 0x4, address: 0x80753FFC
static float PlanktonMaxFollowAngleSine; // size: 0x4, address: 0x80754000
static float PlanktonTiltRate; // size: 0x4, address: 0x8068D2EC
static float PlanktonBeamEmitterConstraintAngle; // size: 0x4, address: 0x8068D2F0
static float PlanktonBeamEmitterConstraintCos; // size: 0x4, address: 0x80754004
static float PlanktonBeamEmitterConstraintSin; // size: 0x4, address: 0x80754008
class xColor RED; // size: 0x4, address: 0x8068D368
class xColor WHITE; // size: 0x4, address: 0x8068D36C
class xColor BLUE; // size: 0x4, address: 0x8068D370
class xEnt * currentEnt; // size: 0x4, address: 0x8075400C
class zPlanktonShakeState currentShakeState; // size: 0x34, address: 0x80754010
// signature: zPlayerIdlePlankton::anIdleCheck(xAnimTransition *, xAnimSingle *, void *)
// Range: 0x80105FD0 -> 0x8010603C
unsigned int zPlayerIdlePlankton::anIdleCheck(class xAnimTransition * tran /* r30 */) {
}
// signature: zPlayerIdlePlankton::anEnterCheck(xAnimTransition *, xAnimSingle *, void *)
// Range: 0x80105EF0 -> 0x80105F5C
unsigned int zPlayerIdlePlankton::anEnterCheck(class xAnimTransition * tran /* r30 */) {
}
// signature: zPlayerIdlePlankton::anExitCheck(xAnimTransition *, xAnimSingle *, void *)
// Range: 0x80105F60 -> 0x80105FCC
unsigned int zPlayerIdlePlankton::anExitCheck(class xAnimTransition * tran /* r30 */) {
}
// signature: zPlayerIdlePlankton::anShakeCheck(xAnimTransition *, xAnimSingle *, void *)
// Range: 0x80106040 -> 0x801060AC
unsigned int zPlayerIdlePlankton::anShakeCheck(class xAnimTransition * tran /* r30 */) {
}
// signature: zPlayerIdlePlankton::anShakeMissCheck(xAnimTransition *, xAnimSingle *, void *)
// Range: 0x801060B0 -> 0x80106124
unsigned int zPlayerIdlePlankton::anShakeMissCheck(class xAnimTransition * tran /* r29 */, class xAnimSingle * anim /* r30 */) {
}
// signature: zPlayerIdlePlankton::anZapStunCheck(xAnimTransition *, xAnimSingle *, void *)
// Range: 0x80106130 -> 0x8010619C
unsigned int zPlayerIdlePlankton::anZapStunCheck(class xAnimTransition * tran /* r30 */) {
}
// signature: zPlayerIdlePlankton::anZapHurtCheck(xAnimTransition *, xAnimSingle *, void *)
// Range: 0x801061A0 -> 0x8010620C
unsigned int zPlayerIdlePlankton::anZapHurtCheck(class xAnimTransition * tran /* r30 */) {
}
// signature: zPlayerIdlePlankton::anZapMissCheck(xAnimTransition *, xAnimSingle *, void *)
// Range: 0x80106210 -> 0x80106284
unsigned int zPlayerIdlePlankton::anZapMissCheck(class xAnimTransition * tran /* r29 */, class xAnimSingle * anim /* r30 */) {
}
// signature: zPlayerIdlePlankton::anTalkCheck(xAnimTransition *, xAnimSingle *, void *)
// Range: 0x80106290 -> 0x80106304
unsigned int zPlayerIdlePlankton::anTalkCheck(class xAnimTransition * tran /* r29 */, class xAnimSingle * anim /* r30 */) {
}
// signature: zPlayerIdlePlankton::anStopTalkAnimCB(xAnimTransition *, xAnimSingle *, void *)
// Range: 0x80106310 -> 0x80106328
unsigned int zPlayerIdlePlankton::anStopTalkAnimCB() {
}
// signature: zPlayerIdlePlankton::ShakeMissCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x801052D0 -> 0x80105310
unsigned int zPlayerIdlePlankton::ShakeMissCheck() {
}
// signature: zPlayerIdlePlankton::ZapMissCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80105310 -> 0x80105350
unsigned int zPlayerIdlePlankton::ZapMissCheck() {
}
// signature: zPlayerIdlePlankton::TalkCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80105350 -> 0x80105378
unsigned int zPlayerIdlePlankton::TalkCheck() {
    // Local variables
    class zPlanktonPlayer * plPlayer; // r3
}
// Range: 0x80105380 -> 0x80105434
void zPlayerIdlePlankton::PlayTalkAnim(class zPlayerIdlePlankton * this /* r29 */, unsigned long long id /* r31:r30 */) {
    // Local variables
    void * buf; // r3
}
// signature: zPlayerIdlePlankton::PlayTalkAnimFromAnimPackage(unsigned long long, unsigned int)
// Range: 0x80105440 -> 0x8010554C
void zPlayerIdlePlankton::PlayTalkAnimFromAnimPackage(class zPlayerIdlePlankton * this /* r31 */, unsigned int index /* r28 */) {
    // Local variables
    class zAnimPackage * animPackage; // r29
    void * rawData; // r3
    class xAnimVFX_Effect * vfxData; // r1+0x10
    int numVFXData; // r1+0xC
    class xAnimSoundEffect * soundData; // r1+0x8
}
// Range: 0x80105550 -> 0x801058BC
void zPlayerIdlePlankton::AddStates(class zPlayerIdlePlankton * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x801058C0 -> 0x80105EE8
void zPlayerIdlePlankton::AddInternalTransitions(class xAnimTable * table /* r20 */) {
    // Local variables
    float FAST_BLEND_TIME; // f31
}
// signature: zPlayerIdlePlankton::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80106330 -> 0x801063AC
void zPlayerIdlePlankton::AddTransitionsFrom() {
}
// Range: 0x801063B0 -> 0x8010642C
void zPlayerIdlePlankton::Reset(class zPlayerIdlePlankton * this /* r30 */) {
}
// Range: 0x80106430 -> 0x801064A4
void zPlanktonPlayer::InitActions(class zPlanktonPlayer * this /* r31 */) {
    // References
    // -> struct {} __vt__19zPlayerIdlePlankton;
}
// Range: 0x801064B0 -> 0x801064C0
unsigned int zPlanktonPlayer::GetBehaviorSetRefHash() const {
}
// signature: zPlanktonPlayer::Init(Sext::xEntAsset *)
// Range: 0x801064C0 -> 0x80106718
void zPlanktonPlayer::Init(class zPlanktonPlayer * this /* r31 */) {
    // References
    // -> struct {} __vt__26PlanktonSimpleShapePhantom;
    // -> class hkTransform hkTransformIdentity;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x80106720 -> 0x801067E0
void zPlanktonPlayer::Reset(class zPlanktonPlayer * this /* r29 */) {
    // References
    // -> int unhappyNuggetsInProgress;
}
// Range: 0x801067E0 -> 0x80107470
void zPlanktonPlayer::DefaultUpdate(class zPlanktonPlayer * this /* r26 */, float dt /* f31 */) {
    // Local variables
    unsigned int animUserFlag; // r0
    unsigned int readyToFire; // r4
    bool canTurnTowardsReticle; // r29
    bool canFire; // r27
    enum planktonState shakeHelperState; // r0
    enum planktonState enterExitState; // r28
    bool justAppeared; // r27
    class zSBPlayer * sbPlayer; // r28
    class xMat4x3 targetMat; // r1+0x270
    class xVec3 & targetPos; // r31
    class hkVector4 characterProxyPos; // r1+0x190
    class xVec3 offsetAppear; // r1+0x184
    class xVec3 offsetHover; // r1+0x178
    class xVec3 offsetMirror; // r1+0x16C
    bool mirrorPositionCloser; // r25
    class xVec3 offsetCurrent; // r1+0x148
    class xMat3x3 targetRotation; // r1+0x240
    unsigned int allowAnimControlEmitter; // r0
    class xMat4x3 emitterMat; // r1+0x200
    float scale; // f1
    class hkTransform havokTransform; // r1+0x1C0
    class hkVector4 & havokPos; // r0
    class hkRotation & havokRot; // r25

    {
        // Range: 0x80106918 -> 0x80106998
        // Local variables
        int curPlayerPort; // r27
    }
    {
        // Range: 0x80106C74 -> 0x80106CD8
        // Local variables
        float maxDisplacementY; // f3
        float deltaOffsetY; // f2
    }
    {
        // Range: 0x80106D90 -> 0x80106DDC
        // Local variables
        class xVec3 temp; // r1+0x160
    }
    {
        // Range: 0x80106DF4 -> 0x80106E34
        // Local variables
        class xVec3 temp; // r1+0x154
    }
    {
        // Range: 0x80106E5C -> 0x80107000
        // Local variables
        float accelProportion; // f30
        float len; // f0
        class xVec3 diff; // r1+0x13C

        {
            // Range: 0x80106EA8 -> 0x80106F24
            // Local variables
            float proportion; // f1
        }
    }
    {
        // Range: 0x8010717C -> 0x801071D0
        // Local variables
        class xVec3 dirToLookAtPos; // r1+0x130
    }
    {
        // Range: 0x80107360 -> 0x8010743C
        // Local variables
        class hkpFirstCdBodyPairCollector collector; // r1+0x1A0

        {
            // Range: 0x80107390 -> 0x8010743C
            // Local variables
            class hkVector4 mirrorPos; // r1+0x120
        }
    }

    // References
    // -> class xVec3 m_Null;
    // -> static float PlanktonAppearZ;
    // -> class zPlayerInputPadMgr padManager;
}
// signature: zPlanktonPlayer::AfterAnimMatrices(xAnimPlay *, Math::Matrix43 *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x80107560 -> 0x801077BC
void zPlanktonPlayer::AfterAnimMatrices(class zPlanktonPlayer * this /* r30 */, class Matrix43 * skinMat /* r29 */) {
    // Local variables
    class xMat4x3 origEmitterMat; // r1+0x168
    class xMat4x3 newEmitterMat; // r1+0x128
    class xVec3 targetDir; // r1+0x68
    class xVec3 temp; // r1+0x44
    class xMat4x3 diffMat; // r1+0xA8
    class Matrix43 diffMatNG; // r1+0x78

    {
        // Range: 0x801075D4 -> 0x80107634
        // Local variables
        class xVec3 dir; // r1+0x5C
    }
    {
        // Range: 0x80107634 -> 0x801076FC
        // Local variables
        float dot; // f0
        class xMat4x3 parentMat; // r1+0xE8

        {
            // Range: 0x80107650 -> 0x801076FC
            // Local variables
            class xVec3 perp; // r1+0x50
        }
    }
    {
        // Range: 0x8010777C -> 0x801077A4
        // Local variables
        unsigned int i; // r30
    }

    // References
    // -> static float PlanktonBeamEmitterConstraintSin;
    // -> static float PlanktonBeamEmitterConstraintCos;
}
// signature: zPlanktonPlayer::RotateToLookAt(xMat3x3 &, const xMat4x3 &, const xVec3 &, float)
// Range: 0x801077F0 -> 0x80107A6C
void zPlanktonPlayer::RotateToLookAt(class xMat3x3 & out /* r30 */, class xMat4x3 & in /* r31 */, float dt /* f31 */) {
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
    // -> static float PlanktonTiltRate;
    // -> static float PlanktonMaxTiltAngleSine;
    // -> static float PlanktonMaxFollowAngleSine;
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x80107A70 -> 0x80107B30
void zPlanktonPlayer::HandleEvent(class zPlanktonPlayer * this /* r28 */, class xBase * from /* r29 */, unsigned int toEvent /* r30 */, class EventAny * genericParams /* r31 */) {
    {
        // Range: 0x80107AD0 -> 0x80107B08
        // Local variables
        class zPlayerIdlePlankton * action; // r3
        class EventActionSBPlayCustomAnim * params; // r0
    }
}
// signature: zPlanktonPlayer::CollectedAmmo(unsigned int)
// Range: 0x80107B30 -> 0x80107B38
void zPlanktonPlayer::CollectedAmmo() {
}
// Range: 0x80107B40 -> 0x80107B80
class zPlanktonPlayer * zPlanktonPlayer::GetInstance() {
    {
        // Range: 0x80107B44 -> 0x80107B78
        // Local variables
        int i; // r0
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zPlanktonTargetListener::AddAsListener(const hkpCollidable *)
// Range: 0x80107B90 -> 0x80107BE8
void zPlanktonTargetListener::AddAsListener(class zPlanktonTargetListener * this /* r5 */) {
    {
        // Range: 0x80107BB8 -> 0x80107BE4
        // Local variables
        class hkpPhantom * phantom; // r0
    }
}
// signature: zPlanktonTargetListener::RemoveAsListener(const hkpCollidable *)
// Range: 0x80107BF0 -> 0x80107C48
void zPlanktonTargetListener::RemoveAsListener(class zPlanktonTargetListener * this /* r5 */) {
    {
        // Range: 0x80107C18 -> 0x80107C44
        // Local variables
        class hkpPhantom * phantom; // r0
    }
}
// signature: zPlanktonTargetListener::entityRemovedCallback(hkpEntity *)
// Range: 0x80107C50 -> 0x80107C64
void zPlanktonTargetListener::entityRemovedCallback() {
}
// signature: zPlanktonTargetListener::phantomDeletedCallback(hkpPhantom *)
// Range: 0x80107C70 -> 0x80107C80
void zPlanktonTargetListener::phantomDeletedCallback() {
}
// Range: 0x80107C80 -> 0x80107CCC
void * zPlanktonAimAssistTargetSelector::zPlanktonAimAssistTargetSelector(class zPlanktonAimAssistTargetSelector * this /* r31 */) {
    // References
    // -> struct {} __vt__32zPlanktonAimAssistTargetSelector;
}
// Range: 0x80107CF0 -> 0x80107D5C
void * zPlanktonAimAssistTargetSelector::~zPlanktonAimAssistTargetSelector(class zPlanktonAimAssistTargetSelector * this /* r30 */) {
    // References
    // -> struct {} __vt__32zPlanktonAimAssistTargetSelector;
}
// Range: 0x80107D60 -> 0x80107E0C
void zPlanktonAimAssistTargetSelector::Reset(class zPlanktonAimAssistTargetSelector * this /* r29 */) {
    {
        // Range: 0x80107D78 -> 0x80107DA8
        // Local variables
        unsigned int i; // r30
    }
}
// Range: 0x80107E10 -> 0x80107FC8
void zPlanktonAimAssistTargetSelector::AddHit(class zPlanktonAimAssistTargetSelector * this /* r28 */, class hkpCollidable * collidable /* r29 */, class xBase * base /* r30 */, float weight /* f31 */) {
    // Local variables
    unsigned int i; // r31

    {
        // Range: 0x80107E78 -> 0x80107F34
        // Local variables
        float lowestWeight; // f2
        float lowestAccumWeight; // f1
        unsigned int lowestIndex; // r8

        {
            // Range: 0x80107E94 -> 0x80107EF4
            // Local variables
            unsigned int j; // r9
        }
    }
    {
        // Range: 0x80107F64 -> 0x80107F64
        // Local variables
        unsigned int j; // r0
    }
}
// Range: 0x80108000 -> 0x8010828C
void zPlanktonAimAssistTargetSelector::Update(class zPlanktonAimAssistTargetSelector * this /* r30 */, float dt /* f30 */) {
    // Local variables
    unsigned int i; // r31

    {
        // Range: 0x80108048 -> 0x801080F8
        // Local variables
        float accumWeight; // f1

        {
            // Range: 0x80108050 -> 0x80108050
            // Local variables
            unsigned int j; // r0
        }
    }
    {
        // Range: 0x80108104 -> 0x80108264
        // Local variables
        int bestTargetIndex; // r6

        {
            // Range: 0x80108128 -> 0x80108190
            // Local variables
            float highest; // f2

            {
                // Range: 0x80108134 -> 0x80108190
                // Local variables
                unsigned int j; // r7
            }
        }
        {
            // Range: 0x801081B0 -> 0x80108208
            // Local variables
            unsigned int bestTargetAge; // r27
        }
    }
}
// Range: 0x80108290 -> 0x80108344
class xVec2 zPlanktonAimAssistTargetSelector::GetBestTargetSize() {
    {
        // Range: 0x801082A8 -> 0x80108320
        // Local variables
        class hkpShape * shape; // r3

        {
            // Range: 0x801082B8 -> 0x80108320
            // Local variables
            class xVec2 result; // r1+0x10
            class hkAabb aabb; // r1+0x20
        }
    }

    // References
    // -> class xVec2 m_Null;
    // -> class hkTransform hkTransformIdentity;
}
// Range: 0x80108370 -> 0x801083A0
void zPlanktonAimAssistTargetSelector::ClearTargetAges() {
    {
        // Range: 0x80108370 -> 0x8010839C
        // Local variables
        unsigned int j; // r7
    }
}
// Range: 0x801083A0 -> 0x80108464
void zPlanktonAimAssistTargetSelector::RemoveTarget(class zPlanktonAimAssistTargetSelector * this /* r30 */, class xBase * base /* r31 */) {
    {
        // Range: 0x801083F0 -> 0x80108450
        // Local variables
        unsigned int i; // r0
    }
}
// Range: 0x80108470 -> 0x801084BC
void * zPlanktonProjectileManager::zPlanktonProjectileManager(class zPlanktonProjectileManager * this /* r31 */) {
    // References
    // -> struct {} __vt__26zPlanktonProjectileManager;
}
// Range: 0x801084C0 -> 0x80108544
void * zPlanktonProjectileManager::~zPlanktonProjectileManager(class zPlanktonProjectileManager * this /* r30 */) {
    // References
    // -> struct {} __vt__26zPlanktonProjectileManager;
}
// Range: 0x80108550 -> 0x801085F4
void zPlanktonProjectileManager::Reset(class zPlanktonProjectileManager * this /* r30 */) {
}
// Range: 0x80108600 -> 0x8010875C
void zPlanktonProjectileManager::AddProjectile(class zPlanktonProjectileManager * this /* r30 */, class xBase * shooter /* r25 */, class xVec3 & start /* r31 */, class xVec3 & end /* r26 */, class hkpCollidable * targetCollidable /* r27 */, class xBase * target /* r28 */, bool damage /* r29 */) {
    {
        // Range: 0x801086C8 -> 0x80108738
        // Local variables
        class xMat3x3 rotation; // r1+0x20
    }

    // References
    // -> int unhappyNuggetsInProgress;
}
// Range: 0x80108760 -> 0x80108B3C
void zPlanktonProjectileManager::Update(class zPlanktonProjectileManager * this /* r31 */, float dt /* f30 */) {
    // Local variables
    bool arrivedAtTarget; // r30

    {
        // Range: 0x801087E4 -> 0x80108818
        // Local variables
        class xVec3 targetPos; // r1+0x70
    }
    {
        // Range: 0x80108818 -> 0x801088C0
        // Local variables
        float maxSpeed; // f0
        float acc; // f0
        float distanceThisFrame; // f31
        float distance; // f1
        class xVec3 toTarget; // r1+0x64
    }
    {
        // Range: 0x801088C0 -> 0x80108900
        // Local variables
        class xMat4x3 mat; // r1+0x190
    }
    {
        // Range: 0x80108900 -> 0x80108B10
        // Local variables
        class xVec3 spawnScale; // r1+0x58

        {
            // Range: 0x80108918 -> 0x8010898C
            // Local variables
            class hkAabb aabb; // r1+0x80
            class hkTransform xform; // r1+0x150
        }
        {
            // Range: 0x8010898C -> 0x80108A30
            {
                // Range: 0x801089B0 -> 0x80108A30
                // Local variables
                class zFXSpawn * spawnPt; // r29
                class xMat3x3 mat; // r1+0x118
            }
        }
        {
            // Range: 0x80108A44 -> 0x80108A6C
            // Local variables
            class zFloatingCollectible * collectible; // r0
        }
        {
            // Range: 0x80108A70 -> 0x80108AC0
            // Local variables
            class zCombatDamageInfo damageInfo; // r1+0xDC
        }
        {
            // Range: 0x80108AC4 -> 0x80108B10
            // Local variables
            class zCombatDamageInfo damageInfo; // r1+0xA0
        }
    }

    // References
    // -> class xVec3 m_Null;
    // -> int unhappyNuggetsInProgress;
}
// signature: zPlanktonProjectileManager::RemoveTarget(xBase *)
// Range: 0x80108B40 -> 0x80108BBC
void zPlanktonProjectileManager::RemoveTarget(class zPlanktonProjectileManager * this /* r31 */) {
    // References
    // -> int unhappyNuggetsInProgress;
}
// Range: 0x80108BC0 -> 0x80108D10
void zPlanktonTargetIndicator::Reset(class zPlanktonTargetIndicator * this /* r30 */) {
    // References
    // -> class xColor BLUE;
    // -> class xColor RED;
    // -> class xVec2 m_Null;
}
// Range: 0x80108D10 -> 0x80108DC8
void zPlanktonTargetIndicator::Show(class zPlanktonTargetIndicator * this /* r30 */) {
}
// Range: 0x80108DD0 -> 0x80108E88
void zPlanktonTargetIndicator::Hide(class zPlanktonTargetIndicator * this /* r30 */) {
}
// Range: 0x80108E90 -> 0x801092E0
void zPlanktonTargetIndicator::Update(class zPlanktonTargetIndicator * this /* r31 */, float dt /* f31 */, class xVec2 & reticlePos /* r25 */, class xVec2 & targetPos /* r26 */, class xVec2 & targetSize /* r27 */, bool targetChanged /* r28 */, bool hasTarget /* r30 */, bool canDamage /* r29 */) {
    // Local variables
    float xMax; // f0
    float xMin; // f0
    float yMax; // f29
    float yMin; // f0
    class xVec2 newCenterPos; // r1+0x48
    class xVec2 newTargetPos; // r1+0x40
    class xVec2 newTargetSize; // r1+0x38

    // References
    // -> class xColor WHITE;
    // -> class xColor RED;
    // -> class xColor BLUE;
}
// Range: 0x80109390 -> 0x80109458
void zPlanktonTargetIndicator::UpdateColor(class zPlanktonTargetIndicator * this /* r31 */) {
}
// signature: zPlanktonTargetIndicator::BlendColor(xColor &, const xColor &, const xColor &, float)
// Range: 0x80109470 -> 0x80109558
void zPlanktonTargetIndicator::BlendColor() {
    // Local variables
    short dg; // r0
    short db; // r4
}
// Range: 0x80109560 -> 0x801096A8
void * zPlanktonPlayerShakeHelper::zPlanktonPlayerShakeHelper(class zPlanktonPlayerShakeHelper * this /* r29 */) {
}
// signature: zPlanktonPlayerShakeHelper::Init(zPlayer *)
// Range: 0x801096B0 -> 0x80109808
void zPlanktonPlayerShakeHelper::Init(class zPlanktonPlayerShakeHelper * this /* r30 */) {
    // Local variables
    class EventActionOneInt ammoParams; // r1+0x8

    // References
    // -> class xVec2 m_Null;
}
// signature: zPlanktonPlayerShakeHelper::Reset(zPlayer *)
// Range: 0x80109810 -> 0x80109950
void zPlanktonPlayerShakeHelper::Reset(class zPlanktonPlayerShakeHelper * this /* r29 */) {
    // Local variables
    class EventActionOneInt ammoParams; // r1+0x8

    // References
    // -> class xVec2 m_Null;
}
// Range: 0x80109950 -> 0x8010A66C
enum planktonState zPlanktonPlayerShakeHelper::Update(class zPlanktonPlayerShakeHelper * this /* r23 */, class zPlayer * player /* r24 */, class zPlayer * parentPlayer /* r27 */, float dt /* f31 */, class xVec3 * emitterPos /* r25 */, bool canFire /* r26 */) {
    // Local variables
    enum planktonState state; // r29
    class xMat4x3 * playerMat; // r28
    class xVec2 screenPoint; // r1+0x38
    bool rayCollided; // r1+0x10
    class xVec3 hitPos; // r1+0xB8
    class xBase * oldTarget; // r21
    bool reticleValid; // r0
    class xBase * hitBase; // r21
    class xEnt * pipperHitObj; // r27
    class xVec3 targetDirection; // r1+0xAC
    class EventActionOneFloat shakeEnergyParams; // r1+0x18
    class EventActionOneFloat stunEnergyParams; // r1+0x14

    {
        // Range: 0x80109CAC -> 0x80109EE0
        // Local variables
        float distFromPlayer; // f0
        float iw; // r1+0x20
        bool slam; // r7
        class xVec2 shakeFreq; // r1+0x28
        class xVec2 swingDir; // r1+0x30
        bool stabilityReset; // r0
        unsigned int newStability; // r21
        unsigned int oldStability; // r22

        {
            // Range: 0x80109E64 -> 0x80109E94
            // Local variables
            class xMat4x3 mat; // r1+0x1B0
        }
    }
    {
        // Range: 0x80109F1C -> 0x80109F4C
        // Local variables
        class xMat4x3 mat; // r1+0x170
    }
    {
        // Range: 0x8010A11C -> 0x8010A208
        // Local variables
        bool playerInitiatedZap; // r22
    }
    {
        // Range: 0x8010A334 -> 0x8010A588
        // Local variables
        float iw; // r1+0x1C
        float distFromPlayer; // f0

        {
            // Range: 0x8010A4BC -> 0x8010A588
            // Local variables
            class xVec3 spawnScale; // r1+0xA0
            class hkAabb aabb; // r1+0xD0
            class hkTransform xform; // r1+0xF0
            class xMat4x3 mat; // r1+0x130
        }
    }

    // References
    // -> class xEnt * currentEnt;
}
// signature: zPlanktonPlayerShakeHelper::GetGrabPos(xBase *)
// Range: 0x8010A670 -> 0x8010A738
class xVec3 zPlanktonPlayerShakeHelper::GetGrabPos() {
    // Local variables
    class xVec3 pos; // r1+0x20

    {
        // Range: 0x8010A6AC -> 0x8010A6C8
        // Local variables
        class zNPCEntity * npcEntity; // r0
    }
}
// signature: zPlanktonPlayerShakeHelper::CollectedAmmo(unsigned int)
// Range: 0x8010A740 -> 0x8010A7BC
void zPlanktonPlayerShakeHelper::CollectedAmmo(class zPlanktonPlayerShakeHelper * this /* r31 */) {
    // Local variables
    class EventActionOneInt ammoParams; // r1+0x8
}
// signature: zPlanktonPlayerShakeHelper::DecreaseShakeEnergy(float)
// Range: 0x8010A7C0 -> 0x8010A830
void zPlanktonPlayerShakeHelper::DecreaseShakeEnergy() {
    // Local variables
    class EventActionOneFloat shakeEnergyParams; // r1+0x8
}
// signature: zPlanktonPlayerShakeHelper::canZap(xBase *)
// Range: 0x8010A830 -> 0x8010A928
bool zPlanktonPlayerShakeHelper::canZap() {
    {
        // Range: 0x8010A8B0 -> 0x8010A8FC
        // Local variables
        enum eSBFloatingItemType type; // r5
        class zFloatingCollectible * collectible; // r0
    }

    // References
    // -> int unhappyNuggetsInProgress;
}
// signature: zPlanktonPlayerShakeHelper::canDamage(xBase *)
// Range: 0x8010A930 -> 0x8010A9A4
bool zPlanktonPlayerShakeHelper::canDamage() {
}
// signature: zPlanktonPlayerShakeHelper::isWithinRange(const xVec3 &, xBase *)
// Range: 0x8010A9B0 -> 0x8010AA7C
bool zPlanktonPlayerShakeHelper::isWithinRange(class zPlanktonPlayerShakeHelper * this /* r30 */, class xVec3 & playerPos /* r31 */) {
    // Local variables
    class xVec3 targetPos; // r1+0x14
    float distance; // f0
}
// Range: 0x8010AA80 -> 0x8010AD0C
enum planktonState zPlanktonPlayerShakeHelper::tryZap(class zPlanktonPlayerShakeHelper * this /* r29 */, class zPlayer * player /* r30 */, class xBase * target /* r31 */, class hkpCollidable * collidable /* r25 */, class xVec3 & emitterPos /* r26 */, class xVec3 & hitPos /* r27 */) {
    // Local variables
    enum planktonState state; // r28

    {
        // Range: 0x8010AB58 -> 0x8010AC30
        // Local variables
        class EventActionOneInt ammoParams; // r1+0x8
    }
}
// Range: 0x8010AD10 -> 0x8010AEA4
void zPlanktonPlayerShakeHelper::calculateIneffectiveZapPos(class zPlanktonPlayerShakeHelper * this /* r27 */, class xVec3 & playerPos /* r28 */, class xVec3 & source /* r29 */, class xVec3 & dir /* r30 */, class xVec3 & pos /* r31 */) {
    // Local variables
    class xVec3 playerToSource; // r1+0x64
    float t0; // r1+0xC
    float t1; // r1+0x8
    unsigned int num; // r0

    {
        // Range: 0x8010ADBC -> 0x8010AE40
        // Local variables
        class xVec3 playerToRay; // r1+0x58
    }
}
// Range: 0x8010AEB0 -> 0x8010B590
bool zPlanktonPlayerShakeHelper::updateAimAssistReticle(class zPlanktonPlayerShakeHelper * this /* r26 */, class zPlayerInput * input /* r23 */, int viewportIndex /* r27 */, class xVec3 & playerPos /* r28 */, class xVec3 & camPos /* r29 */, float dt /* f30 */, bool & hit /* r30 */, class xVec3 & hitPos /* r31 */) {
    // Local variables
    float aspectRatio; // f31
    class xVec2 screenSpaceReticlePos; // r1+0x50
    class xBase * found; // r23
    class xVec2 foundPos; // r1+0x40

    {
        // Range: 0x8010AF30 -> 0x8010AFF8
        // Local variables
        class xVec2 IR; // r1+0x48
        enum IRStatus targetStatus; // r1+0x18
    }
    {
        // Range: 0x8010B034 -> 0x8010B480
        // Local variables
        class hkpWorldRayCaster rayCaster; // r1+0x1B0
        class hkpClosestRayHitCollector collectors[1]; // r1+0x200
        class hkpWorldRayCastInput inputs[1]; // r1+0x110
        float weights[9]; // r1+0x140
        float yOffsets[9]; // r1+0x164
        float xOffsets[9]; // r1+0x188

        {
            // Range: 0x8010B0F4 -> 0x8010B1D4
            // Local variables
            int i; // r0

            {
                // Range: 0x8010B0F4 -> 0x8010B1D4
                // Local variables
                class xVec3 to; // r1+0xF0
                class xVec3 direction; // r1+0xFC
                class xVec2 screenPos; // r1+0x38
                unsigned int index; // r0
            }
        }
        {
            // Range: 0x8010B224 -> 0x8010B2B0
            // Local variables
            class hkVector4 position; // r1+0xE0
        }
        {
            // Range: 0x8010B2B0 -> 0x8010B388
            // Local variables
            int i; // r0

            {
                // Range: 0x8010B2B0 -> 0x8010B388
                // Local variables
                class hkpClosestRayHitCollector & collector; // r0

                {
                    // Range: 0x8010B2B0 -> 0x8010B388
                    // Local variables
                    class xBase * base; // r0
                    class hkpWorldObject * worldObject; // r0
                    class hkpWorldRayCastOutput & hit; // r0

                    {
                        // Range: 0x8010B2F0 -> 0x8010B388
                        // Local variables
                        bool onScreen; // r0
                        float iw; // r1+0x14
                        class xVec2 screenPos; // r1+0x30
                        class xVec3 grabPos; // r1+0xD4
                    }
                }
            }
        }
        {
            // Range: 0x8010B398 -> 0x8010B46C
            // Local variables
            class xVec2 size; // r1+0x20
            class xMat4x3 & camMat; // r24
            class zCam * cam; // r0
            class xVec3 grabPos; // r1+0xC8
            float iw; // r1+0x10
            class xVec2 screenPos; // r1+0x28
        }
    }

    // References
    // -> struct {} __vt__17hkpWorldRayCaster;
    // -> class xVec2 m_Null;
}
// Range: 0x8010B660 -> 0x8010B670
void zPlanktonShakeManager::Reset() {
    // References
    // -> class xEnt * currentEnt;
}
// signature: zPlanktonShakeManager::StartShake(xEnt *, const xVec3 &)
// Range: 0x8010B670 -> 0x8010B6E8
bool zPlanktonShakeManager::StartShake() {
    // References
    // -> class zPlanktonShakeState currentShakeState;
    // -> class xEnt * currentEnt;
}
// signature: zPlanktonShakeManager::UpdateShake(xEnt *, const xVec3 &, float, xVec2 *, xVec2 &, bool)
// Range: 0x8010B6F0 -> 0x8010BB20
void zPlanktonShakeManager::UpdateShake(float dt /* f31 */, class xVec2 * shakeDir /* r28 */, class xVec2 & shakeFreqVec /* r29 */, bool slam /* r27 */) {
    {
        // Range: 0x8010B73C -> 0x8010BB00
        // Local variables
        class xVec2 autoShakeDir; // r1+0x28
        class xVec2 & swingVel; // r30
        class xVec2 & swingPos; // r31

        {
            // Range: 0x8010B824 -> 0x8010B9F8
            // Local variables
            bool horizontalSwing; // r27
        }
        {
            // Range: 0x8010BA08 -> 0x8010BA80
            // Local variables
            float decayFactor; // f0
        }
    }

    // References
    // -> class zPlanktonShakeState currentShakeState;
}
// signature: zPlanktonShakeManager::IsBeingShaken(const xEnt *)
// Range: 0x8010BBA0 -> 0x8010BBB8
bool zPlanktonShakeManager::IsBeingShaken() {
    // References
    // -> class xEnt * currentEnt;
}
// signature: zPlanktonShakeManager::GetShakeState(const xEnt *)
// Range: 0x8010BBC0 -> 0x8010BBCC
class zPlanktonShakeState & zPlanktonShakeManager::GetShakeState() {
    // References
    // -> class zPlanktonShakeState currentShakeState;
}
// Range: 0x8010BBD0 -> 0x8010BC1C
void * zPlanktonSwingGesture::zPlanktonSwingGesture() {
}
// Range: 0x8010BC20 -> 0x8010BC94
void zPlanktonSwingGesture::Reset(class zPlanktonSwingGesture * this /* r30 */) {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x8010BCA0 -> 0x8010BD58
bool zPlanktonSwingGesture::Update(class zPlanktonSwingGesture * this /* r27 */, class zPlayerInput * input /* r28 */) {
    // Local variables
    bool stabilityReset; // r30
    unsigned int accRecordCount; // r0

    {
        // Range: 0x8010BCD8 -> 0x8010BD40
        // Local variables
        unsigned int i; // r29

        {
            // Range: 0x8010BCD8 -> 0x8010BD40
            // Local variables
            class xVec3 acc; // r1+0x14
        }
    }
}
// Range: 0x8010BD60 -> 0x8010BFFC
void zPlanktonSwingGesture::Update(class zPlanktonSwingGesture * this /* r30 */, class xVec3 & newAcc /* r31 */) {
    // Local variables
    float f1; // f2
    float len2; // f0
}
// Range: 0x8010C000 -> 0x8010C03C
void * zPlanktonShakeGesture::zPlanktonShakeGesture() {
}
// Range: 0x8010C040 -> 0x8010C080
void zPlanktonShakeGesture::Reset() {
    {
        // Range: 0x8010C040 -> 0x8010C07C
        // Local variables
        int i; // r6
    }
}
// Range: 0x8010C080 -> 0x8010C2F4
void zPlanktonShakeGesture::Update(class zPlanktonShakeGesture * this /* r31 */, class zPlayerInput * input /* r21 */) {
    // Local variables
    class Time currentTime; // r1+0x28
    unsigned int accRecordCount; // r0

    {
        // Range: 0x8010C0D0 -> 0x8010C200
        // Local variables
        unsigned int i; // r24

        {
            // Range: 0x8010C0D0 -> 0x8010C200
            // Local variables
            float dv[2]; // r1+0x20
            class xVec3 & f; // r23
            class xVec3 acc; // r1+0x54

            {
                // Range: 0x8010C0E0 -> 0x8010C200
                // Local variables
                int j; // r22
            }
        }
    }
    {
        // Range: 0x8010C21C -> 0x8010C2D4
        // Local variables
        int j; // r0
    }

    // References
    // -> double secondsPerTick;
}
// signature: zPlanktonShakeGesture::AddShake(int, const System::Time &)
// Range: 0x8010C300 -> 0x8010C378
void zPlanktonShakeGesture::AddShake() {
    // Local variables
    unsigned int index; // r9
}
// Range: 0x8010C380 -> 0x8010C418
class xVec2 zPlanktonShakeGesture::GetShakeFreq() {
    // Local variables
    class xVec2 freq; // r1+0x8
}
// Range: 0x8010C420 -> 0x8010C4C8
void PlanktonSimpleShapePhantom::addOverlappingCollidable(class PlanktonSimpleShapePhantom * this /* r28 */, class hkpCollidable * c /* r29 */) {
    // Local variables
    class hkpRigidBody * rb; // r0
    class hkpPhantom * phantom; // r0
}
