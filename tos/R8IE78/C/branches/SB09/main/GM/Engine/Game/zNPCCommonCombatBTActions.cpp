/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNPCCommonCombatBTActions.cpp
*/
// signature: zNPCBTActionBossMeterShow::Update(float)
// Range: 0x800E1920 -> 0x800E196C
enum eTaskState zNPCBTActionBossMeterShow::Update() {
    // Local variables
    class EventActionShowBossMeter params; // r1+0x8
}
// signature: zNPCBTActionBossMeterHide::Update(float)
// Range: 0x800E1970 -> 0x800E19B0
enum eTaskState zNPCBTActionBossMeterHide::Update() {
}
// signature: zNPCBTActionBossMeterSet::Update(float)
// Range: 0x800E19B0 -> 0x800E1A20
enum eTaskState zNPCBTActionBossMeterSet::Update() {
    // Local variables
    class EventActionOneFloat params; // r1+0x8
}
// Range: 0x800E1A20 -> 0x800E1AAC
void zNPCBTDefeatedAction::Begin(class zNPCBTDefeatedAction * this /* r31 */) {
}
// signature: zNPCBTDefeatedAction::Update(float)
// Range: 0x800E1AB0 -> 0x800E1B38
enum eTaskState zNPCBTDefeatedAction::Update(class zNPCBTDefeatedAction * this /* r30 */) {
    // Local variables
    bool killImmediately; // r0
}
// Range: 0x800E1B40 -> 0x800E1BEC
void zNPCBTStunAction::Begin(class zNPCBTStunAction * this /* r31 */) {
}
// signature: zNPCBTStunAction::Update(float)
// Range: 0x800E1BF0 -> 0x800E1C50
enum eTaskState zNPCBTStunAction::Update(class zNPCBTStunAction * this /* r31 */) {
}
// Range: 0x800E1C50 -> 0x800E1CCC
void zNPCBTHitAction::Begin(class zNPCBTHitAction * this /* r31 */) {
}
// Range: 0x800E1CD0 -> 0x800E1D50
void zNPCBTHitAction::End(class zNPCBTHitAction * this /* r30 */) {
    // Local variables
    int hitCount; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_HIT_COUNT;
}
// signature: PlayerCollisionListener::characterInteractionCallback(hkpCharacterProxy *, hkpCharacterProxy *, const hkContactPoint &)
// Range: 0x800E1D50 -> 0x800E1DB4
void PlayerCollisionListener::characterInteractionCallback(class PlayerCollisionListener * this /* r31 */) {
    // Local variables
    class hkpShapePhantom * pPhantom; // r0

    {
        // Range: 0x800E1D6C -> 0x800E1DA0
        // Local variables
        class xBase * base; // r4
    }
}
// Range: 0x800E1DC0 -> 0x800E1E54
void zNPCBTDamagePlayerOnContactAction::Begin(class zNPCBTDamagePlayerOnContactAction * this /* r29 */) {
    // References
    // -> struct {} __vt__23PlayerCollisionListener;
    // -> class Factory factory;
}
// Range: 0x800E1E70 -> 0x800E1ED4
void zNPCBTDamagePlayerOnContactAction::Cleanup(class zNPCBTDamagePlayerOnContactAction * this /* r31 */) {
    // References
    // -> class Factory factory;
}
// signature: zNPCBTDamagePlayerOnContactAction::InflictPlayerDamage(xBase *)
// Range: 0x800E1EE0 -> 0x800E1F3C
void zNPCBTDamagePlayerOnContactAction::InflictPlayerDamage() {
    // Local variables
    class Action_NPC_DamagePlayerOnContact * damageInfo; // r9
    class EventActionDamagePlayer params; // r1+0x8
}
// Range: 0x800E1F40 -> 0x800E20F8
bool zNPCBTDamagePlayerInRangeAction::CheckNPCEntityAgainstPlayers(class zNPCBTDamagePlayerInRangeAction * this /* r25 */, class zNPCEntity * npcEnt /* r26 */) {
    // Local variables
    class Action_NPC_DamagePlayerInRange * asset; // r29
    float range; // f0
    float damage; // f29
    float check2; // f28
    bool hit; // r28

    {
        // Range: 0x800E1F78 -> 0x800E20BC
        // Local variables
        int i; // r27

        {
            // Range: 0x800E1F78 -> 0x800E20BC
            // Local variables
            float dist2; // f0
            class xVec3 diff; // r1+0x1C
        }
    }

    // References
    // -> class xVec3 m_Null;
    // -> class xGlobals * xglobals;
}
// Range: 0x800E2100 -> 0x800E2110
void zNPCBTDamagePlayerInRangeAction::Begin() {
}
// signature: zNPCBTDamagePlayerInRangeAction::Update(float)
// Range: 0x800E2110 -> 0x800E21FC
enum eTaskState zNPCBTDamagePlayerInRangeAction::Update(class zNPCBTDamagePlayerInRangeAction * this /* r29 */) {
    // Local variables
    int numChildren; // r0

    {
        // Range: 0x800E2124 -> 0x800E215C
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x800E2190 -> 0x800E21C8
        // Local variables
        int i; // r30

        {
            // Range: 0x800E2190 -> 0x800E21C8
            // Local variables
            class zNPCEntity * npcEnt; // r0
        }
    }
}
// signature: zNPCBTShootAction::Update(float)
// Range: 0x800E2200 -> 0x800E25AC
enum eTaskState zNPCBTShootAction::Update(class zNPCBTShootAction * this /* r28 */) {
    // Local variables
    class Action_NPC_Shoot * asset; // r30
    class EntityHandleBase * projHandle; // r29
    class ProjectileAsset * projectileAsset; // r0
    class zProjectileLaunchData projectileLaunchData; // r1+0x158
    class xMat4x3 launchTransform; // r1+0x118
    class xVec3 shootDir; // r1+0x8C
    float launchSpeed; // f31
    class xVec3 negatedShootDir; // r1+0x5C

    {
        // Range: 0x800E22DC -> 0x800E243C
        {
            // Range: 0x800E2314 -> 0x800E2354
            // Local variables
            class xVec3 shootDirLocalSpace; // r1+0x80
        }
        {
            // Range: 0x800E23E0 -> 0x800E2424
            // Local variables
            class xMat4x3 temp; // r1+0xD8
        }
    }
    {
        // Range: 0x800E2440 -> 0x800E24D8
        {
            // Range: 0x800E2454 -> 0x800E24C0
            // Local variables
            class xVec3 targetCenterPos; // r1+0x68
            class xVec3 targetLocalSpaceOffset; // r1+0x74
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCBTKillAction::Update(float)
// Range: 0x800E25B0 -> 0x800E25DC
enum eTaskState zNPCBTKillAction::Update() {
}
// signature: zNPCBTRemoveAction::Update(float)
// Range: 0x800E25E0 -> 0x800E2608
enum eTaskState zNPCBTRemoveAction::Update() {
}
// signature: zNPCBTSetInvulnerableAction::Update(float)
// Range: 0x800E2610 -> 0x800E2654
enum eTaskState zNPCBTSetInvulnerableAction::Update() {
    // Local variables
    bool setTo; // r0
}
// signature: zNPCBTSetUndamageableAction::Update(float)
// Range: 0x800E2660 -> 0x800E26A4
enum eTaskState zNPCBTSetUndamageableAction::Update() {
    // Local variables
    bool setTo; // r0
}
// Range: 0x800E26B0 -> 0x800E272C
void zNPCBTStrikeAction::Begin(class zNPCBTStrikeAction * this /* r31 */) {
}
// signature: zNPCBTRequestAttackAction::Update(float)
// Range: 0x800E2730 -> 0x800E27F4
enum eTaskState zNPCBTRequestAttackAction::Update(class zNPCBTRequestAttackAction * this /* r31 */) {
    // Local variables
    float attackTime; // f31
    class zPlayer * player; // r1+0x8

    // References
    // -> static class zNPCNinjaManager gNPCNinjaManager;
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// signature: zNPCBTReleaseAttackAction::Update(float)
// Range: 0x800E2800 -> 0x800E28AC
enum eTaskState zNPCBTReleaseAttackAction::Update(class zNPCBTReleaseAttackAction * this /* r30 */) {
    // Local variables
    class zPlayer * player; // r1+0x8
    class Action_NPC_ReleaseAttack * asset; // r31

    // References
    // -> static class zNPCNinjaManager gNPCNinjaManager;
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// signature: zNPCBTSetCurrentHitPointsAction::Update(float)
// Range: 0x800E28B0 -> 0x800E2970
enum eTaskState zNPCBTSetCurrentHitPointsAction::Update(class zNPCBTSetCurrentHitPointsAction * this /* r31 */) {
    // Local variables
    class Action_NPC_Set_CombatCurHitPoints * asset; // r4

    {
        // Range: 0x800E2904 -> 0x800E2958
        // Local variables
        int hitpointValue; // r1+0x8
    }
}
// signature: zNPCBTSetHitProfileAction::Update(float)
// Range: 0x800E2970 -> 0x800E29A0
enum eTaskState zNPCBTSetHitProfileAction::Update() {
    // Local variables
    class Action_NPC_SetHitProfile * asset; // r3
}
