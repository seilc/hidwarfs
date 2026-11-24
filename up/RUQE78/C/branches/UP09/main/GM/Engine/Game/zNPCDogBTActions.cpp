/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCDogBTActions.cpp
*/
// Range: 0x801BF580 -> 0x801BFD58
void zNPCDogBTAttackPrepareAction::Begin(class zNPCDogBTAttackPrepareAction * this /* r31 */) {
    // Local variables
    class xVec3 toPlayer; // r1+0x20

    // References
    // -> class xVec3 m_UnitAxisX;
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
    // -> struct {} __vt__31zNPCSearchMapLinkCostCalculator;
}
// Range: 0x801BFD60 -> 0x801C0228
enum eTaskState zNPCDogBTAttackPrepareAction::Update(class zNPCDogBTAttackPrepareAction * this /* r31 */, float dt /* f31 */) {
    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_UnitAxisX;
}
// signature: zNPCDogBTWriteAttackDestinationAction::Update(float)
// Range: 0x801C0230 -> 0x801C04C8
enum eTaskState zNPCDogBTWriteAttackDestinationAction::Update(class zNPCDogBTWriteAttackDestinationAction * this /* r30 */) {
    // Local variables
    class zPlayer * player; // r31
    class Action_NPC_Write_AttackDestination * asset; // r29
    float distPastPlayerXZ; // f5
    class xVec3 npcPos; // r1+0x20
    class xVec3 npcToPlayer; // r1+0x14
    float dist; // f4
    class xVec3 dest; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
    // -> class xVec3 m_UnitAxisZ;
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// Range: 0x801C04D0 -> 0x801C0678
void zNPCDogBTAttackBeginAction::Begin(class zNPCDogBTAttackBeginAction * this /* r31 */) {
    // References
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// signature: zNPCDogBTAttackBeginAction::Update(float)
// Range: 0x801C0680 -> 0x801C08B0
enum eTaskState zNPCDogBTAttackBeginAction::Update(class zNPCDogBTAttackBeginAction * this /* r31 */) {
    {
        // Range: 0x801C0698 -> 0x801C07C4
        // Local variables
        class xVec3 toPlayer; // r1+0x8
    }

    // References
    // -> class xVec3 m_UnitAxisZ;
}
// Range: 0x801C08C0 -> 0x801C0DA0
void zNPCDogBTAttackIdleAction::Begin(class zNPCDogBTAttackIdleAction * this /* r31 */) {
    // Local variables
    class Action_NPC_Dog_AttackIdle * asset; // r29

    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// Range: 0x801C0DA0 -> 0x801C1200
enum eTaskState zNPCDogBTAttackIdleAction::Update(class zNPCDogBTAttackIdleAction * this /* r31 */, float dt /* f31 */) {
    // References
    // -> class xVec3 m_UnitAxisZ;
}
// signature: zNPCDogAttackRunCollisionListener::processConstraintsCallback(const hkArray<hkpRootCdPoint> &, hkpSimplexSolverInput &)
// Range: 0x801C1210 -> 0x801C16C0
void zNPCDogAttackRunCollisionListener::processConstraintsCallback(class zNPCDogAttackRunCollisionListener * this /* r17 */, class hkArray & manifold /* r18 */) {
    // Local variables
    float FLATNESS_MAX_COS_ANGLE; // f0
    int numContacts; // r0

    {
        // Range: 0x801C128C -> 0x801C164C
        // Local variables
        int i; // r19

        {
            // Range: 0x801C128C -> 0x801C164C
            // Local variables
            class hkVector4 contactNormal; // r1+0x50
            class hkpRootCdPoint contact; // r1+0x60

            {
                // Range: 0x801C128C -> 0x801C164C
                // Local variables
                class zNPCEntity * npcEnt; // r0
                class xBase * hitBase; // r0

                {
                    // Range: 0x801C128C -> 0x801C1634
                    // Local variables
                    float SURFACE_NORMAL_MAX_COS_ANGLE; // f0
                    class xVec3 normalXZ; // r1+0x10
                    class xVec3 npcVelXZ; // r1+0x1C
                    class xVec3 npcToContactXZ; // r1+0x28
                    class hkVector4 contactPos; // r1+0x40
                }
            }
        }
    }

    // References
    // -> class xVec3 m_UnitAxisX;
}
// Range: 0x801C16C0 -> 0x801C1B8C
void zNPCDogBTAttackRunAction::Begin(class zNPCDogBTAttackRunAction * this /* r31 */) {
    // References
    // -> struct {} __vt__31zNPCSearchMapLinkCostCalculator;
}
// Range: 0x801C1BA0 -> 0x801C220C
enum eTaskState zNPCDogBTAttackRunAction::Update(class zNPCDogBTAttackRunAction * this /* r31 */, float dt /* f31 */) {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801C2210 -> 0x801C2374
void zNPCDogBTAttackRunAction::End(class zNPCDogBTAttackRunAction * this /* r31 */) {
}
// Range: 0x801C2380 -> 0x801C24B0
void zNPCDogBTAttackRunAction::Cleanup(class zNPCDogBTAttackRunAction * this /* r31 */) {
}
// Range: 0x801C24B0 -> 0x801C24DC
void zNPCDogBTAttackJumpAction::Initialize() {
}
// Range: 0x801C24E0 -> 0x801C2518
void zNPCDogBTAttackJumpAction::Begin(class zNPCDogBTAttackJumpAction * this /* r31 */) {
}
// Range: 0x801C2530 -> 0x801C269C
void zNPCDogBTAttackAction::Begin(class zNPCDogBTAttackAction * this /* r31 */) {
}
// Range: 0x801C26C0 -> 0x801C2838
void zNPCDogBTAttackEndAction::Begin(class zNPCDogBTAttackEndAction * this /* r31 */) {
}
// signature: zNPCDogBTAttackEndAction::Update(float)
// Range: 0x801C2840 -> 0x801C2BC4
enum eTaskState zNPCDogBTAttackEndAction::Update(class zNPCDogBTAttackEndAction * this /* r31 */) {
}
// signature: zNPCDogBTCleanupCombatAction::Update(float)
// Range: 0x801C2BE0 -> 0x801C2D5C
enum eTaskState zNPCDogBTCleanupCombatAction::Update(class zNPCDogBTCleanupCombatAction * this /* r29 */) {
    // Local variables
    class zPlayer * player; // r31

    // References
    // -> static class zNPCNinjaManager gNPCNinjaManager;
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// Range: 0x801C2D60 -> 0x801C3640
void zNPCDogBTFloatOffScreenAction::Begin(class zNPCDogBTFloatOffScreenAction * this /* r27 */) {
    // Local variables
    float targetYOffset; // f1

    // References
    // -> class Scene * primaryScene;
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
}
// signature: zNPCDogBTFloatOffScreenAction::UpdateBalloon(float)
// Range: 0x801C3640 -> 0x801C4648
void zNPCDogBTFloatOffScreenAction::UpdateBalloon() {
    // Local variables
    class xMat4x3 balloonMat; // r1+0xA0
    class xVec3 * offset; // r0

    // References
    // -> float dt;
    // -> class Renderable3DTransform g_identity;
    // -> class xMat4x3 g_I3;
}
// Range: 0x801C4650 -> 0x801C48EC
void zNPCDogBTFloatOffScreenAction::ChooseAndPlayAnim(class zNPCDogBTFloatOffScreenAction * this /* r31 */) {
}
// Range: 0x801C48F0 -> 0x801C4A78
enum eTaskState zNPCDogBTFloatOffScreenAction::Update(class zNPCDogBTFloatOffScreenAction * this /* r29 */, float dt /* f31 */) {
}
// Range: 0x801C4A80 -> 0x801C4B00
void zNPCDogBTFloatOffScreenAction::End(class zNPCDogBTFloatOffScreenAction * this /* r31 */) {
}
// Range: 0x801C4B00 -> 0x801C4B44
void zNPCDogBTFloatOffScreenAction::Cleanup(class zNPCDogBTFloatOffScreenAction * this /* r31 */) {
}
// Range: 0x801C4B50 -> 0x801C5034
void zNPCDogBTFollowProjectileAction::Begin(class zNPCDogBTFollowProjectileAction * this /* r31 */) {
    // References
    // -> struct {} __vt__31zNPCSearchMapLinkCostCalculator;
    // -> static unsigned int NPC_VAR_CURRENT_PROJECTILE_ID;
}
// Range: 0x801C5040 -> 0x801C56E4
enum eTaskState zNPCDogBTFollowProjectileAction::Update(class zNPCDogBTFollowProjectileAction * this /* r31 */, float dt /* f31 */) {
    // References
    // -> class xVec3 m_Null;
    // -> static unsigned int NPC_VAR_CURRENT_PROJECTILE_ID;
}
// Range: 0x801C56F0 -> 0x801C58B4
void zNPCDogBTHitAction::Begin(class zNPCDogBTHitAction * this /* r31 */) {
}
// signature: zNPCDogBTHitAction::Update(float)
// Range: 0x801C58C0 -> 0x801C5BF8
enum eTaskState zNPCDogBTHitAction::Update(class zNPCDogBTHitAction * this /* r31 */) {
    // References
    // -> class xVec3 m_Null;
    // -> class xVec3 m_UnitAxisX;
}
// signature: zNPCDogBTHitAction::RagdollTransitioningOn(xEnt *)
// Range: 0x801C5C00 -> 0x801C5DD0
void zNPCDogBTHitAction::RagdollTransitioningOn(class zNPCDogBTHitAction * this /* r29 */) {
    // Local variables
    class zNPCEntity * npcEntity; // r31
    class xVec3 knockback; // r1+0x20

    {
        // Range: 0x801C5C30 -> 0x801C5C70
        // Local variables
        class hkpShapePhantom * phantom; // r30
    }

    // References
    // -> class xVec3 m_UnitAxisX;
}
// signature: zNPCDogBTHitAction::RagdollFullyOff(xEnt *)
// Range: 0x801C5DD0 -> 0x801C5E98
void zNPCDogBTHitAction::RagdollFullyOff() {
    // Local variables
    class zNPCEntity * npcEntity; // r0
    class hkVector4 zeroVel; // r1+0x10

    {
        // Range: 0x801C5E50 -> 0x801C5E7C
        // Local variables
        class hkpShapePhantom * phantom; // r30
    }
}
// signature: zNPCDogBTHitAction::RagdollPreRenderableUpdate(xEnt *, float &)
// Range: 0x801C5EA0 -> 0x801C5F00
void zNPCDogBTHitAction::RagdollPreRenderableUpdate(class zNPCDogBTHitAction * this /* r31 */) {
}
