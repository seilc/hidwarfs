/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNPCCommonBTConditions.cpp
*/
// Range: 0x800E0C70 -> 0x800E0CB4
bool zNPCBTNeedCombatCleanupCondition::Evaluate() const {
    // Local variables
    int needCombatCleanup; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_NEED_COMBAT_CLEANUP;
}
// Range: 0x800E0CC0 -> 0x800E0D04
bool zNPCBTNeedCombatTargetingCleanupCondition::Evaluate() const {
    // Local variables
    int needCombatCleanup; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_NEED_COMBAT_TARGETING_CLEANUP;
}
// Range: 0x800E0D10 -> 0x800E0D3C
bool zNPCBTCounterSuccessCondition::Evaluate() const {
}
// Range: 0x800E0D40 -> 0x800E0D6C
bool zNPCBTCounterFailCondition::Evaluate() const {
}
// Range: 0x800E0D70 -> 0x800E0D98
bool zNPCBTCounterNoneCondition::Evaluate() const {
}
// Range: 0x800E0DA0 -> 0x800E0E00
bool zNPCBTLockedPlayerIsHumanCondition::Evaluate() const {
    // Local variables
    class zPlayer * p; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_LOCKED_PLAYER;
}
// Range: 0x800E0E00 -> 0x800E0E60
bool zNPCBTCurrPlayerIsHumanCondition::Evaluate() const {
    // Local variables
    class zPlayer * p; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// signature: zNPCBTCurrPlayerIsPlayerCondition::Setup(const Sext::ConditionBase *)
// Range: 0x800E0E60 -> 0x800E0EC8
void zNPCBTCurrPlayerIsPlayerCondition::Setup() {
}
// Range: 0x800E0ED0 -> 0x800E0F38
bool zNPCBTCurrPlayerIsPlayerCondition::Evaluate(class zNPCBTCurrPlayerIsPlayerCondition * this /* r31 */) const {
    // Local variables
    class zPlayer * p; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// Range: 0x800E0F40 -> 0x800E0FBC
bool zNPCBTPlayerIsHumanCondition::Evaluate() const {
    // Local variables
    class zPlayer * player; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// Range: 0x800E0FC0 -> 0x800E1014
bool zNPCBTPlayerIsTargetableCondition::Evaluate() const {
    // Local variables
    class zPlayer * player; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// Range: 0x800E1020 -> 0x800E1088
bool zNPCBTPlayerIsPlayerCondition::Evaluate(class zNPCBTPlayerIsPlayerCondition * this /* r31 */) const {
    // Local variables
    class zPlayer * p; // r1+0x8
}
// Range: 0x800E1090 -> 0x800E10DC
bool zNPCBTDefeatedCondition::Evaluate() const {
    // Local variables
    int hitCount; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_HIT_COUNT;
}
// Range: 0x800E10E0 -> 0x800E10F0
bool zNPCBTActiveCondition::Evaluate() const {
}
// Range: 0x800E10F0 -> 0x800E1134
bool zNPCBTHitCondition::Evaluate() const {
    // Local variables
    int hitEventReceived; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_HIT_EVENT_RECEIVED;
}
// signature: zNPCBTHitCountCondition::Setup(const Sext::ConditionBase *)
// Range: 0x800E1140 -> 0x800E1154
void zNPCBTHitCountCondition::Setup() {
    // Local variables
    class Condition_NPC_HitCount * myAsset; // r0
}
// Range: 0x800E1160 -> 0x800E1280
bool zNPCBTHitCountCondition::Evaluate(class zNPCBTHitCountCondition * this /* r31 */) const {
    // Local variables
    int hitCount; // r1+0x8
    bool ret; // r3

    // References
    // -> static unsigned int NPC_VAR_HIT_COUNT;
}
// Range: 0x800E1280 -> 0x800E13D8
bool zNPCBTHitPointCountCondition::Evaluate(class zNPCBTHitPointCountCondition * this /* r30 */) const {
    // Local variables
    class Condition_NPC_HitPointCount * myAsset; // r31
    float assetHitNumber; // f0
    enum eBoolOperators op; // r0
    float hitCount; // f0
    bool ret; // r3

    {
        // Range: 0x800E12CC -> 0x800E1310
        // Local variables
        int blackboardVal; // r1+0x8
    }
}
// Range: 0x800E13E0 -> 0x800E1424
bool zNPCBTEnteredTrapCondition::Evaluate() const {
    // Local variables
    int trapEnterEventReceived; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_TRAP_ENTER_EVENT_RECEIVED;
}
// Range: 0x800E1430 -> 0x800E1474
bool zNPCBTExitedTrapCondition::Evaluate() const {
    // Local variables
    int trapExitEventReceived; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_TRAP_EXIT_EVENT_RECEIVED;
}
// signature: zNPCBTSpecialAbilityOnCondition::Setup(const Sext::ConditionBase *)
// Range: 0x800E1480 -> 0x800E148C
void zNPCBTSpecialAbilityOnCondition::Setup() {
}
// signature: zNPCBTSwarmKilledByPlayerCondition::Setup(const Sext::ConditionBase *)
// Range: 0x800E1490 -> 0x800E14A0
void zNPCBTSwarmKilledByPlayerCondition::Setup() {
}
// Range: 0x800E14A0 -> 0x800E14EC
bool zNPCBTAliveCondition::Evaluate() const {
}
// Range: 0x800E14F0 -> 0x800E16B8
bool zNPCBTIsToLockedPlayerSideCondition::Evaluate(class zNPCBTIsToLockedPlayerSideCondition * this /* r31 */) const {
    // Local variables
    class zPlayer * player; // r1+0x8
    class xVec3 toPlayer; // r1+0x18

    {
        // Range: 0x800E15A8 -> 0x800E15D8
        // Local variables
        float dot; // f0
    }
    {
        // Range: 0x800E15D8 -> 0x800E1608
        // Local variables
        float dot; // f0
    }
    {
        // Range: 0x800E1608 -> 0x800E1634
        // Local variables
        float dot; // f0
    }
    {
        // Range: 0x800E1634 -> 0x800E1660
        // Local variables
        float dot; // f0
    }

    // References
    // -> static unsigned int NPC_VAR_LOCKED_PLAYER;
}
// Range: 0x800E16C0 -> 0x800E16F4
bool zNPCBTCheckPlayerTypeCondition::Evaluate() const {
    // Local variables
    class zPlayer * player; // r1+0x8
}
// Range: 0x800E1700 -> 0x800E1788
bool zNPCBTIsPlayerValidCondition::Evaluate(class zNPCBTIsPlayerValidCondition * this /* r31 */) const {
    // Local variables
    class zPlayer * player; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// Range: 0x800E1790 -> 0x800E17A0
bool zNPCBTIsOnGroundCondition::Evaluate() const {
}
// Range: 0x800E17A0 -> 0x800E17F8
bool zNPCBTMovingCondition::Evaluate() const {
    // Local variables
    float tolerance; // f31
}
// Range: 0x800E1800 -> 0x800E18B0
bool zNPCBTOffScreenCondition::Evaluate(class zNPCBTOffScreenCondition * this /* r27 */) const {
    // Local variables
    int viewport; // r29
    class xVec2 screenPos; // r1+0x10
    float iw; // r1+0x8

    {
        // Range: 0x800E1818 -> 0x800E1870
        // Local variables
        int i; // r28
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800E18B0 -> 0x800E18BC
bool zNPCBT_GenericSpawner_NonstopSpawn_Condition::Evaluate() const {
}
// Range: 0x800E18C0 -> 0x800E1908
bool zNPCBT_GenericSpawner_CanSpawn_Condition::Evaluate() const {
    // Local variables
    class zNPCGenericSpawner * spawner; // r3
}
// Range: 0x800E1910 -> 0x800E191C
bool zNPCBT_GenericSpawner_CanSpawnLater_Condition::Evaluate() const {
}
