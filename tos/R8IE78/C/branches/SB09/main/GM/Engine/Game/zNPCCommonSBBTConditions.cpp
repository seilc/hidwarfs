/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNPCCommonSBBTConditions.cpp
*/
// Range: 0x800EA400 -> 0x800EA428
bool zNPCBTBlockedCondition::Evaluate() const {
}
// signature: zNPCBTInRPSAttackStateCondition::Setup(const Sext::ConditionBase *)
// Range: 0x800EA430 -> 0x800EA440
void zNPCBTInRPSAttackStateCondition::Setup() {
}
// Range: 0x800EA440 -> 0x800EA470
bool zNPCBTInRPSAttackStateCondition::Evaluate() const {
}
// Range: 0x800EA470 -> 0x800EA494
bool zNPCBTBlockedTypeCondition::Evaluate() const {
}
// Range: 0x800EA4A0 -> 0x800EA4EC
bool zNPCBTDamagedByTypeCondition::Evaluate() const {
}
// signature: zNPCBTDamagedCondition::Setup(const Sext::ConditionBase *)
// Range: 0x800EA4F0 -> 0x800EA500
void zNPCBTDamagedCondition::Setup() {
}
// Range: 0x800EA500 -> 0x800EA590
bool zNPCBTDamagedCondition::Evaluate() const {
    // Local variables
    class zNPCCombat * combat; // r0

    {
        // Range: 0x800EA52C -> 0x800EA588
        // Local variables
        unsigned int damageCount; // r0

        {
            // Range: 0x800EA530 -> 0x800EA588
            // Local variables
            unsigned int i; // r6
        }
    }
}
// Range: 0x800EA590 -> 0x800EA59C
bool zNPCBTIsPlanktonShakingCondition::Evaluate() const {
}
// Range: 0x800EA5A0 -> 0x800EA60C
bool zNPCBTDamagedByKnockbackCondition::Evaluate() const {
    // Local variables
    class zNPCCombat * combat; // r0

    {
        // Range: 0x800EA5A8 -> 0x800EA604
        // Local variables
        unsigned int damageCount; // r0

        {
            // Range: 0x800EA5B4 -> 0x800EA604
            // Local variables
            unsigned int i; // r6
        }
    }
}
// Range: 0x800EA610 -> 0x800EA650
bool zNPCBTPokedCondition::Evaluate() const {
}
// Range: 0x800EA650 -> 0x800EA670
bool zNPCBTSBPlayerIsBuff::Evaluate() const {
    // References
    // -> class xGlobals * xglobals;
}
// signature: zNPCBTCheckPerceptionCondition::Setup(const Sext::ConditionBase *)
// Range: 0x800EA670 -> 0x800EA68C
void zNPCBTCheckPerceptionCondition::Setup() {
    // Local variables
    class Condition_NPC_CheckPerception * asset; // r0
}
// Range: 0x800EA690 -> 0x800EA6BC
bool zNPCBTCheckPerceptionCondition::Evaluate(class zNPCBTCheckPerceptionCondition * this /* r6 */) const {
}
// signature: zNPCBTCheckPerceptionTargetStatusCondition::Setup(const Sext::ConditionBase *)
// Range: 0x800EA6C0 -> 0x800EA6D8
void zNPCBTCheckPerceptionTargetStatusCondition::Setup() {
    // Local variables
    class Condition_NPC_CheckPerceptionTargetStatus * asset; // r0
}
// Range: 0x800EA6E0 -> 0x800EA750
bool zNPCBTCheckPerceptionTargetStatusCondition::Evaluate() const {
}
// Range: 0x800EA750 -> 0x800EA8D4
bool zNPCBTCheckPerceptionTargetStatusCondition::IsTargetAlive() const {
    {
        // Range: 0x800EA764 -> 0x800EA8C0
        {
            // Range: 0x800EA7F8 -> 0x800EA858
            // Local variables
            class zDestructible * destplatform; // r3
        }
        {
            // Range: 0x800EA858 -> 0x800EA8B8
            // Local variables
            class zDestructible * destsimpobj; // r3
        }
    }
}
// signature: zNPCBTCheckPerceptionTargetChangedCondition::Setup(const Sext::ConditionBase *)
// Range: 0x800EA8E0 -> 0x800EA904
void zNPCBTCheckPerceptionTargetChangedCondition::Setup() {
}
// Range: 0x800EA910 -> 0x800EA940
bool zNPCBTCheckPerceptionTargetChangedCondition::Evaluate() const {
}
// Range: 0x800EA940 -> 0x800EAA04
bool zNPCBTCheckPerceptionTargetInWallnetCondition::Evaluate() const {
}
// Range: 0x800EAA10 -> 0x800EAA34
bool zNPCBTIsInPuppetModeCondition::Evaluate() const {
}
// signature: zNPCBTIsInWallnetCondition::Setup(const Sext::ConditionBase *)
// Range: 0x800EAA40 -> 0x800EAA58
void zNPCBTIsInWallnetCondition::Setup() {
    // Local variables
    class Condition_NPC_IsInWallnet * asset; // r0
}
// Range: 0x800EAA60 -> 0x800EAB40
bool zNPCBTIsInWallnetCondition::Evaluate() const {
    // Local variables
    class xEnt * checkEntity; // r4
}
// signature: zNPCBTFacingPerceptionTargetCondition::Setup(const Sext::ConditionBase *)
// Range: 0x800EAB40 -> 0x800EAB64
void zNPCBTFacingPerceptionTargetCondition::Setup() {
    // Local variables
    class Condition_NPC_FacingPerceptionTarget * asset; // r0
}
// Range: 0x800EAB70 -> 0x800EAC38
bool zNPCBTFacingPerceptionTargetCondition::Evaluate(class zNPCBTFacingPerceptionTargetCondition * this /* r31 */) const {
    {
        // Range: 0x800EAB94 -> 0x800EAC18
        // Local variables
        float angle; // f1
        class xVec3 seperation; // r1+0x8
    }
}
// Range: 0x800EAC70 -> 0x800EAD1C
void zNPCBTNearbyProjectileCondition::Setup(class zNPCBTNearbyProjectileCondition * this /* r29 */, class ConditionBase * baseAsset /* r30 */) {
    // Local variables
    class Condition_NPC_NearbyProjectile * asset; // r0
    class hkVector4 vA; // r1+0x20
    class hkVector4 vB; // r1+0x10

    // References
    // -> float hkConvexShapeDefaultRadius;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> class hkVector4 hkVector4Zero;
}
// Range: 0x800EAD20 -> 0x800EAE90
bool zNPCBTNearbyProjectileCondition::Evaluate(class zNPCBTNearbyProjectileCondition * this /* r31 */) const {
    // Local variables
    class hkVector4 hkPos; // r1+0x20
    class hkMotionState motionState; // r1+0x80
    class hkpWorld * havokWorld; // r30
    class hkpCollidable collA; // r1+0x30
    class hkpCollisionInput * input; // r29
    class hkpAllCdBodyPairCollector collector; // r1+0x130

    {
        // Range: 0x800EADDC -> 0x800EAE64
        // Local variables
        int i; // r29

        {
            // Range: 0x800EADDC -> 0x800EAE64
            // Local variables
            class xBase * hitObject; // r4
            class hkpRigidBody * hitRB; // r0
        }
    }
}
// Range: 0x800EAE90 -> 0x800EAEE8
void zNPCBTNearbyProjectileCondition::Deinitialize(class zNPCBTNearbyProjectileCondition * this /* r31 */) {
}
// Range: 0x800EAF50 -> 0x800EAFD4
bool zNPCBTBossSquidwardBlockPlayer::Evaluate(class zNPCBTBossSquidwardBlockPlayer * this /* r31 */) const {
    // Local variables
    unsigned int curAction; // r0

    {
        // Range: 0x800EAF78 -> 0x800EAFBC
        // Local variables
        int doNotDisturb; // r1+0x8
        unsigned int doNotDisturbHash; // r0
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800EAFE0 -> 0x800EB084
bool zNPCBTBossSquidwardDestroyCover::Evaluate(class zNPCBTBossSquidwardDestroyCover * this /* r31 */) const {
    // Local variables
    class xVec3 spongeBobPos; // r1+0x14
    class xMat4x3 mat; // r1+0x20
    class xVec3 squidWardPos; // r1+0x8
    bool hasLOS; // r0

    // References
    // -> class xGlobals * xglobals;
}
