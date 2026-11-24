/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCCommonCombatBTActions.cpp
*/
// Range: 0x801AF910 -> 0x801AFA8C
void zNPCBTDefeatedAction::Begin(class zNPCBTDefeatedAction * this /* r31 */) {
}
// signature: zNPCBTDefeatedAction::Update(float)
// Range: 0x801AFA90 -> 0x801AFC24
enum eTaskState zNPCBTDefeatedAction::Update(class zNPCBTDefeatedAction * this /* r31 */) {
    // Local variables
    bool killImmediately; // r0
}
// Range: 0x801AFC50 -> 0x801AFE28
void zNPCBTStunAction::Begin(class zNPCBTStunAction * this /* r31 */) {
    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCBTStunAction::Update(float)
// Range: 0x801AFE30 -> 0x801AFF30
enum eTaskState zNPCBTStunAction::Update(class zNPCBTStunAction * this /* r31 */) {
}
// Range: 0x801AFF40 -> 0x801B00AC
void zNPCBTHitAction::Begin(class zNPCBTHitAction * this /* r31 */) {
}
// Range: 0x801B00C0 -> 0x801B01C4
void zNPCBTHitAction::End(class zNPCBTHitAction * this /* r29 */) {
    // Local variables
    int hitCount; // r31

    // References
    // -> static unsigned int NPC_VAR_HIT_COUNT;
}
// signature: PlayerCollisionListener::characterInteractionCallback(hkpCharacterProxy *, hkpCharacterProxy *, const hkContactPoint &)
// Range: 0x801B01D0 -> 0x801B0234
void PlayerCollisionListener::characterInteractionCallback(class PlayerCollisionListener * this /* r31 */) {
    // Local variables
    class hkpShapePhantom * pPhantom; // r0

    {
        // Range: 0x801B01EC -> 0x801B0220
        // Local variables
        class xBase * base; // r4
    }
}
// Range: 0x801B0240 -> 0x801B02D8
void zNPCBTDamagePlayerOnContactAction::Begin(class zNPCBTDamagePlayerOnContactAction * this /* r30 */) {
    // References
    // -> struct {} __vt__23PlayerCollisionListener;
    // -> class zFactory factory;
}
// Range: 0x801B02F0 -> 0x801B03FC
void zNPCBTDamagePlayerOnContactAction::Cleanup(class zNPCBTDamagePlayerOnContactAction * this /* r31 */) {
    // References
    // -> class zFactory factory;
}
// signature: zNPCBTDamagePlayerOnContactAction::InflictPlayerDamage(xBase *)
// Range: 0x801B0400 -> 0x801B045C
void zNPCBTDamagePlayerOnContactAction::InflictPlayerDamage() {
    // Local variables
    class Action_NPC_DamagePlayerOnContact * damageInfo; // r9
    class EventActionDamagePlayer params; // r1+0x8
}
// Range: 0x801B0460 -> 0x801B077C
bool zNPCBTDamagePlayerInRangeAction::CheckNPCEntityAgainstPlayers(class zNPCBTDamagePlayerInRangeAction * this /* r26 */, class zNPCEntity * npcEnt /* r27 */) {
    // Local variables
    class Action_NPC_DamagePlayerInRange * asset; // r29
    float range; // f0
    float damage; // f26
    float check2; // f25
    bool hit; // r3

    {
        // Range: 0x801B04C8 -> 0x801B0708
        // Local variables
        int i; // r28

        {
            // Range: 0x801B04C8 -> 0x801B0708
            // Local variables
            float dist2; // f0
            class xVec3 diff; // r1+0x20
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class xVec3 m_Null;
}
// Range: 0x801B0780 -> 0x801B0790
void zNPCBTDamagePlayerInRangeAction::Begin() {
}
// signature: zNPCBTDamagePlayerInRangeAction::Update(float)
// Range: 0x801B0790 -> 0x801B08AC
enum eTaskState zNPCBTDamagePlayerInRangeAction::Update(class zNPCBTDamagePlayerInRangeAction * this /* r29 */) {
    // Local variables
    int numChildren; // r0

    {
        // Range: 0x801B0798 -> 0x801B0808
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x801B083C -> 0x801B0868
        // Local variables
        int i; // r30

        {
            // Range: 0x801B083C -> 0x801B0868
            // Local variables
            class zNPCEntity * npcEnt; // r0
        }
    }
}
// signature: zNPCBTShootAction::Update(float)
// Range: 0x801B08B0 -> 0x801B0C00
enum eTaskState zNPCBTShootAction::Update(class zNPCBTShootAction * this /* r28 */) {
    // Local variables
    class Action_NPC_Shoot * asset; // r30
    class EntityHandleBase * projHandle; // r29
    class ProjectileAsset * projectileAsset; // r0
    class zProjectileLaunchData projectileLaunchData; // r1+0x110
    class xMat4x3 launchTransform; // r1+0xD0
    class xVec3 shootDir; // r1+0x80
    float launchSpeed; // f1
}
// signature: zNPCBTKillAction::Update(float)
// Range: 0x801B0C00 -> 0x801B0C84
enum eTaskState zNPCBTKillAction::Update() {
}
// signature: zNPCBTRemoveAction::Update(float)
// Range: 0x801B0C90 -> 0x801B0CAC
enum eTaskState zNPCBTRemoveAction::Update() {
}
// signature: zNPCBTSetInvulnerableAction::Update(float)
// Range: 0x801B0CB0 -> 0x801B0CF4
enum eTaskState zNPCBTSetInvulnerableAction::Update() {
    // Local variables
    bool setTo; // r0
}
// signature: zNPCBTSetUndamageableAction::Update(float)
// Range: 0x801B0D00 -> 0x801B0D44
enum eTaskState zNPCBTSetUndamageableAction::Update() {
    // Local variables
    bool setTo; // r0
}
// Range: 0x801B0D60 -> 0x801B0ECC
void zNPCBTStrikeAction::Begin(class zNPCBTStrikeAction * this /* r31 */) {
}
// signature: zNPCBTRequestAttackAction::Update(float)
// Range: 0x801B0EF0 -> 0x801B0FF8
enum eTaskState zNPCBTRequestAttackAction::Update(class zNPCBTRequestAttackAction * this /* r30 */) {
    // Local variables
    float attackTime; // f31
    class zPlayer * player; // r31

    // References
    // -> static class zNPCNinjaManager gNPCNinjaManager;
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// signature: zNPCBTReleaseAttackAction::Update(float)
// Range: 0x801B1000 -> 0x801B1124
enum eTaskState zNPCBTReleaseAttackAction::Update(class zNPCBTReleaseAttackAction * this /* r29 */) {
    // Local variables
    class zPlayer * player; // r31
    class Action_NPC_ReleaseAttack * asset; // r30

    // References
    // -> static class zNPCNinjaManager gNPCNinjaManager;
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// signature: zNPCBTSetCurrentHitPoints::Update(float)
// Range: 0x801B1130 -> 0x801B118C
enum eTaskState zNPCBTSetCurrentHitPoints::Update() {
    // Local variables
    class Action_NPC_Set_CombatCurHitPoints * asset; // r4
}
