/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNPCCommonSBBTActions.cpp
*/
class EventMapNode eventMap[6]; // size: 0x30, address: 0x8068BD10
// signature: zNPCBTSetRPSAttackStateAction::Setup(const Sext::ActionBase *)
// Range: 0x800E8680 -> 0x800E8694
void zNPCBTSetRPSAttackStateAction::Setup() {
    // Local variables
    class Action_NPC_SetRPSAttackState * asset; // r0
}
// signature: zNPCBTSetRPSAttackStateAction::Update(float)
// Range: 0x800E86A0 -> 0x800E86E8
enum eTaskState zNPCBTSetRPSAttackStateAction::Update(class zNPCBTSetRPSAttackStateAction * this /* r5 */) {
}
// signature: zNPCBTClearDamageInfoAction::Update(float)
// Range: 0x800E86F0 -> 0x800E8718
enum eTaskState zNPCBTClearDamageInfoAction::Update() {
}
// signature: zNPCBTWriteGopherNextMovepointAction::Update(float)
// Range: 0x800E8720 -> 0x800E8840
enum eTaskState zNPCBTWriteGopherNextMovepointAction::Update(class zNPCBTWriteGopherNextMovepointAction * this /* r29 */) {
    // Local variables
    class xMovePoint * start; // r30
    class xMovePoint * target; // r1+0xC
    class xMovePoint * next; // r1+0x8
    class xVec3 targetPos; // r1+0x10

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
    // -> static unsigned int NPC_VAR_TARGET_MP;
}
// Range: 0x800E8840 -> 0x800E89C4
void zNPCBTPlanktonShakeAction::Begin(class zNPCBTPlanktonShakeAction * this /* r27 */) {
}
// Range: 0x800E89E0 -> 0x800E90E4
enum eTaskState zNPCBTPlanktonShakeAction::Update(class zNPCBTPlanktonShakeAction * this /* r29 */, float dt /* f31 */) {
    {
        // Range: 0x800E8AB4 -> 0x800E8B48
        // Local variables
        class zPlanktonShakeState & shakeState; // r0
    }
    {
        // Range: 0x800E8C18 -> 0x800E8C70
        // Local variables
        int collectibleState; // r1+0x14
    }
    {
        // Range: 0x800E8C70 -> 0x800E8D70
        // Local variables
        class xMat4x3 frame; // r1+0x150

        {
            // Range: 0x800E8D04 -> 0x800E8D60
            // Local variables
            class zCombatDamageInfo damageInfo; // r1+0x110
        }
    }
    {
        // Range: 0x800E8D70 -> 0x800E90C0
        // Local variables
        class xVec3 oldPos; // r1+0x84

        {
            // Range: 0x800E8D8C -> 0x800E8E10
            // Local variables
            class xMat4x3 frame; // r1+0xD0
        }
        {
            // Range: 0x800E8E10 -> 0x800E90C0
            // Local variables
            int collectibleState; // r1+0x10
            class xVec3 vel; // r1+0x54
            class xMat4x3 frame; // r1+0x90
            float distance; // f1
            class xVec3 displacement; // r1+0x60
            float newx; // f1
            float lendir; // f0
            class xVec3 dir; // r1+0x6C
            class xVec3 position; // r1+0x78
            class zPlanktonShakeState & shakeState; // r30
        }
    }

    // References
    // -> unsigned short ACH41_PTShakeCount;
    // -> static unsigned int NPC_VAR_SHAKE_COLLECTIBLES_1;
    // -> class xVec3 m_Null;
    // -> static unsigned int NPC_VAR_SHAKE_COLLECTIBLES_2;
}
// Range: 0x800E90F0 -> 0x800E9110
void zNPCBTPlanktonShakeAction::End() {
}
// signature: zNPCBTPlanktonShakeAction::UpdateShakeBlend(const xVec3 &, float)
// Range: 0x800E9110 -> 0x800E93C8
void zNPCBTPlanktonShakeAction::UpdateShakeBlend() {
    // Local variables
    float vy; // f8
    float vx; // f3
    float vmaxblend; // f7
    float rateX; // f7
    float rateY; // f1
    float x; // f0
    float y; // f0
    float x1; // f4
    float y1; // f31
}
// signature: zNPCBTSetPlanktonShakableAction::Update(float)
// Range: 0x800E93D0 -> 0x800E9418
enum eTaskState zNPCBTSetPlanktonShakableAction::Update() {
    // Local variables
    class xEnt * ent; // r4
}
// signature: zNPCBTBounceAction::Setup(const Sext::ActionBase *)
// Range: 0x800E9420 -> 0x800E9430
void zNPCBTBounceAction::Setup() {
}
// Range: 0x800E9430 -> 0x800E95D8
void zNPCBTBounceAction::Begin(class zNPCBTBounceAction * this /* r30 */) {
    // Local variables
    class xVec3 normal; // r1+0x8

    // References
    // -> struct {} __vt__19zNPCInfoNodeBouncer;
    // -> class Factory factory;
}
// signature: zNPCBTBounceAction::Update(float)
// Range: 0x800E9670 -> 0x800E9688
enum eTaskState zNPCBTBounceAction::Update() {
}
// Range: 0x800E9690 -> 0x800E96CC
void zNPCBTBounceAction::End(class zNPCBTBounceAction * this /* r31 */) {
}
// signature: zNPCBTRespondToKnockbackAction::Update(float)
// Range: 0x800E96D0 -> 0x800E9798
enum eTaskState zNPCBTRespondToKnockbackAction::Update() {
    // Local variables
    class zNPCCombat * combat; // r0

    {
        // Range: 0x800E96EC -> 0x800E9780
        // Local variables
        unsigned int damageCount; // r28
        class xVec3 knockback; // r1+0x8

        {
            // Range: 0x800E9708 -> 0x800E976C
            // Local variables
            unsigned int i; // r27
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCBTGenerateSpinVortexAction::Setup(const Sext::ActionBase *)
// Range: 0x800E97A0 -> 0x800E97B8
void zNPCBTGenerateSpinVortexAction::Setup() {
    // Local variables
    class Action_NPC_GenerateSpinVortex * asset; // r0
}
// Range: 0x800E97C0 -> 0x800E97E4
void zNPCBTGenerateSpinVortexAction::End() {
}
// signature: zNPCBTGenerateSpinVortexAction::Update(float)
// Range: 0x800E97F0 -> 0x800E98E8
enum eTaskState zNPCBTGenerateSpinVortexAction::Update(class zNPCBTGenerateSpinVortexAction * this /* r29 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r30

    {
        // Range: 0x800E981C -> 0x800E98C0
        // Local variables
        float distanceSq; // f0
        class xVec3 displacement; // r1+0x14
    }
}
// Range: 0x800E98F0 -> 0x800E9954
void zNPCBTMonitorPerceptionAction::Begin(class zNPCBTMonitorPerceptionAction * this /* r29 */) {
    {
        // Range: 0x800E9914 -> 0x800E9940
        // Local variables
        unsigned int i; // r30
    }
}
// signature: zNPCBTMonitorPerceptionAction::Update(float)
// Range: 0x800E9960 -> 0x800E9A38
enum eTaskState zNPCBTMonitorPerceptionAction::Update(class zNPCBTMonitorPerceptionAction * this /* r25 */) {
    // Local variables
    class zNPCPerception * perception; // r27

    {
        // Range: 0x800E9984 -> 0x800E9A18
        // Local variables
        unsigned int i; // r26
    }

    // References
    // -> class EventMapNode eventMap[6];
}
// signature: zNPCBT_SplashDamage_Action::Update(float)
// Range: 0x800E9A40 -> 0x800E9AAC
enum eTaskState zNPCBT_SplashDamage_Action::Update() {
}
// Range: 0x800E9AB0 -> 0x800E9B40
enum eTaskState zNPCBT_Bomb_Shoot_Action::Update(class zNPCBT_Bomb_Shoot_Action * this /* r30 */, float dt /* f31 */) {
    // Local variables
    class EntityHandleBase * projHandle; // r0
    class ProjectileAsset * projectileAsset; // r0
}
// signature: zNPCBT_Turret_GetVariantData_Action::Update(float)
// Range: 0x800E9B40 -> 0x800E9C4C
enum eTaskState zNPCBT_Turret_GetVariantData_Action::Update(class zNPCBT_Turret_GetVariantData_Action * this /* r29 */) {
    // Local variables
    class NPCGeneric * npcAsset; // r30

    // References
    // -> static unsigned int NPC_VAR_TURRET_SHOOT_DELAY;
    // -> static unsigned int NPC_VAR_TURRET_SHOOT_CYCLE_DELAY;
    // -> static unsigned int NPC_VAR_TURRET_SHOOT_CYCLE_COUNT;
    // -> static unsigned int NPC_VAR_TURRET_VARIANT_ROF_ENABLED;
}
// signature: zNPCBTWriteSquidBlockTimeAction::Update(float)
// Range: 0x800E9C50 -> 0x800E9E2C
enum eTaskState zNPCBTWriteSquidBlockTimeAction::Update(class zNPCBTWriteSquidBlockTimeAction * this /* r31 */) {
    // Local variables
    float stage1[12]; // r1+0x80
    float stage2[14]; // r1+0x48
    float stage3[12]; // r1+0x18
    float * blockArray; // r29
    int maxSize; // r28
    float mult; // r1+0x10
    int idx; // r1+0xC
    float timeValue; // r1+0x8
}
// Range: 0x800E9E30 -> 0x800E9E8C
void zNPCBTWriteSquidBlockTimeAction::Setup(class zNPCBTWriteSquidBlockTimeAction * this /* r30 */, class ActionBase * assetData /* r31 */) {
    // Local variables
    class Action_NPC_WriteSquidBossBlockTime * asset; // r0
}
// signature: zNPCBTChumbotFistFlashAction::Setup(const Sext::ActionBase *)
// Range: 0x800E9E90 -> 0x800E9EA8
void zNPCBTChumbotFistFlashAction::Setup() {
}
// signature: zNPCBTChumbotFistFlashAction::Update(float)
// Range: 0x800E9EB0 -> 0x800E9F20
enum eTaskState zNPCBTChumbotFistFlashAction::Update() {
    // Local variables
    float colorMult; // f2
}
// Range: 0x800E9F20 -> 0x800E9F40
void zNPCBTFollowPerceptionTargetAction::Initialize() {
}
// signature: zNPCBTFollowPerceptionTargetAction::Setup(const Sext::ActionBase *)
// Range: 0x800E9F40 -> 0x800E9F58
void zNPCBTFollowPerceptionTargetAction::Setup() {
    // Local variables
    class Action_NPC_FollowPerceptionTarget * asset; // r0
}
// Range: 0x800E9F60 -> 0x800EA034
void zNPCBTFollowPerceptionTargetAction::Begin(class zNPCBTFollowPerceptionTargetAction * this /* r30 */) {
    // Local variables
    class Action_NPC_FollowPerceptionTarget * asset; // r31
}
// Range: 0x800EA040 -> 0x800EA0D0
bool zNPCBTFollowPerceptionTargetAction::IsArrived(class zNPCBTFollowPerceptionTargetAction * this /* r30 */) {
    // Local variables
    float dist2; // f0
    float boundXZ; // f0
}
// Range: 0x800EA0D0 -> 0x800EA17C
bool zNPCBTFollowPerceptionTargetAction::IsStuck(class zNPCBTFollowPerceptionTargetAction * this /* r30 */) {
    // Local variables
    float dist2; // f0
    float boundXZ; // f0
}
// Range: 0x800EA180 -> 0x800EA21C
void zNPCBTFollowPerceptionTargetAction::UpdateDestination(class zNPCBTFollowPerceptionTargetAction * this /* r31 */) {
    // Local variables
    class xVec3 dest; // r1+0x8
}
// Range: 0x800EA220 -> 0x800EA2F0
enum eTaskState zNPCBTFollowPerceptionTargetAction::Update(class zNPCBTFollowPerceptionTargetAction * this /* r31 */, float dt /* f31 */) {
}
// signature: zNPCBTWritePerceptionTargetPositionAction::Setup(const Sext::ActionBase *)
// Range: 0x800EA2F0 -> 0x800EA300
void zNPCBTWritePerceptionTargetPositionAction::Setup() {
}
// signature: zNPCBTWritePerceptionTargetPositionAction::FindPerceptionTargetPos(xVec3 &)
// Range: 0x800EA300 -> 0x800EA36C
bool zNPCBTWritePerceptionTargetPositionAction::FindPerceptionTargetPos() {
}
// signature: zNPCFlyingBTWritePerceptionTargetPositionAction::Update(float)
// Range: 0x800EA370 -> 0x800EA3FC
enum eTaskState zNPCFlyingBTWritePerceptionTargetPositionAction::Update(class zNPCFlyingBTWritePerceptionTargetPositionAction * this /* r31 */) {
    // Local variables
    class xVec3 pos; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
}
