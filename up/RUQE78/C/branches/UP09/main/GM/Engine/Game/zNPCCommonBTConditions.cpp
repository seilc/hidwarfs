/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCCommonBTConditions.cpp
*/
// signature: zNPCBTPlayerInVisibleRangeCondition::Setup(const Sext::ConditionBase *)
// Range: 0x801ACE10 -> 0x801ACE20
void zNPCBTPlayerInVisibleRangeCondition::Setup() {
}
// Range: 0x801ACE20 -> 0x801AD49C
bool zNPCBTPlayerInVisibleRangeCondition::Evaluate(class zNPCBTPlayerInVisibleRangeCondition * this /* r30 */) const {
    // Local variables
    float visibleRange; // f31
    class zPlayer * player; // r31

    {
        // Range: 0x801ACE74 -> 0x801AD190
        // Local variables
        float dist2; // f0
    }
    {
        // Range: 0x801AD190 -> 0x801AD198
        // Local variables
        int i; // r6

        {
            // Range: 0x801AD190 -> 0x801AD198
            // Local variables
            float dist2; // f0
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x801AD4B0 -> 0x801ADB34
bool zNPCBTPlayerInAttackRangeCondition::Evaluate(class zNPCBTPlayerInAttackRangeCondition * this /* r30 */) const {
    // Local variables
    class Condition_NPC_PlayerInAttackRange * asset; // r6
    float attackRange; // f31
    class zPlayer * player; // r31

    {
        // Range: 0x801AD508 -> 0x801AD828
        // Local variables
        float dist2; // f0
    }
    {
        // Range: 0x801AD828 -> 0x801AD830
        // Local variables
        int i; // r6

        {
            // Range: 0x801AD828 -> 0x801AD830
            // Local variables
            float dist2; // f0
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x801ADB40 -> 0x801ADBA4
bool zNPCBTNeedCombatCleanupCondition::Evaluate() const {
    // Local variables
    int needCombatCleanup; // r3

    // References
    // -> static unsigned int NPC_VAR_NEED_COMBAT_CLEANUP;
}
// Range: 0x801ADBB0 -> 0x801ADC14
bool zNPCBTNeedCombatTargetingCleanupCondition::Evaluate() const {
    // Local variables
    int needCombatCleanup; // r3

    // References
    // -> static unsigned int NPC_VAR_NEED_COMBAT_TARGETING_CLEANUP;
}
// Range: 0x801ADC20 -> 0x801ADC4C
bool zNPCBTCounterSuccessCondition::Evaluate() const {
}
// Range: 0x801ADC50 -> 0x801ADC7C
bool zNPCBTCounterFailCondition::Evaluate() const {
}
// Range: 0x801ADC80 -> 0x801ADCA8
bool zNPCBTCounterNoneCondition::Evaluate() const {
}
// Range: 0x801ADCB0 -> 0x801ADD30
bool zNPCBTLockedPlayerIsHumanCondition::Evaluate() const {
    // Local variables
    class zPlayer * p; // r3

    // References
    // -> static unsigned int NPC_VAR_LOCKED_PLAYER;
}
// Range: 0x801ADD30 -> 0x801ADDB0
bool zNPCBTCurrPlayerIsHumanCondition::Evaluate() const {
    // Local variables
    class zPlayer * p; // r3

    // References
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// signature: zNPCBTCurrPlayerIsPlayerCondition::Setup(const Sext::ConditionBase *)
// Range: 0x801ADDB0 -> 0x801ADE18
void zNPCBTCurrPlayerIsPlayerCondition::Setup() {
}
// Range: 0x801ADE20 -> 0x801ADEA8
bool zNPCBTCurrPlayerIsPlayerCondition::Evaluate(class zNPCBTCurrPlayerIsPlayerCondition * this /* r31 */) const {
    // Local variables
    class zPlayer * p; // r3

    // References
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// Range: 0x801ADEB0 -> 0x801ADF54
bool zNPCBTPlayerIsHumanCondition::Evaluate() const {
    // Local variables
    class zPlayer * player; // r31

    // References
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// Range: 0x801ADF60 -> 0x801ADFF0
bool zNPCBTPlayerIsTargetableCondition::Evaluate() const {
    // Local variables
    class zPlayer * player; // r31

    // References
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// Range: 0x801ADFF0 -> 0x801AE088
bool zNPCBTPlayerIsBeingAttackedCondition::Evaluate() const {
    // Local variables
    class zPlayer * player; // r31

    // References
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// Range: 0x801AE0A0 -> 0x801AE128
bool zNPCBTPlayerIsPlayerCondition::Evaluate(class zNPCBTPlayerIsPlayerCondition * this /* r31 */) const {
    // Local variables
    class zPlayer * p; // r3
}
// Range: 0x801AE130 -> 0x801AE19C
bool zNPCBTDefeatedCondition::Evaluate() const {
    // Local variables
    int hitCount; // r4

    // References
    // -> static unsigned int NPC_VAR_HIT_COUNT;
}
// Range: 0x801AE1A0 -> 0x801AE1B0
bool zNPCBTActiveCondition::Evaluate() const {
}
// Range: 0x801AE1B0 -> 0x801AE214
bool zNPCBTHitCondition::Evaluate() const {
    // Local variables
    int hitEventReceived; // r3

    // References
    // -> static unsigned int NPC_VAR_HIT_EVENT_RECEIVED;
}
// signature: zNPCBTHitCountCondition::Setup(const Sext::ConditionBase *)
// Range: 0x801AE220 -> 0x801AE234
void zNPCBTHitCountCondition::Setup() {
    // Local variables
    class Condition_NPC_HitCount * myAsset; // r0
}
// Range: 0x801AE240 -> 0x801AE370
bool zNPCBTHitCountCondition::Evaluate(class zNPCBTHitCountCondition * this /* r31 */) const {
    // Local variables
    int hitCount; // r5
    bool ret; // r3

    // References
    // -> static unsigned int NPC_VAR_HIT_COUNT;
}
// Range: 0x801AE370 -> 0x801AE3D4
bool zNPCBTEnteredTrapCondition::Evaluate() const {
    // Local variables
    int trapEnterEventReceived; // r3

    // References
    // -> static unsigned int NPC_VAR_TRAP_ENTER_EVENT_RECEIVED;
}
// Range: 0x801AE3E0 -> 0x801AE444
bool zNPCBTExitedTrapCondition::Evaluate() const {
    // Local variables
    int trapExitEventReceived; // r3

    // References
    // -> static unsigned int NPC_VAR_TRAP_EXIT_EVENT_RECEIVED;
}
// signature: zNPCBTSpecialAbilityOnCondition::Setup(const Sext::ConditionBase *)
// Range: 0x801AE450 -> 0x801AE45C
void zNPCBTSpecialAbilityOnCondition::Setup() {
}
// Range: 0x801AE460 -> 0x801AE564
bool zNPCBTSpecialAbilityOnCondition::Evaluate(class zNPCBTSpecialAbilityOnCondition * this /* r29 */) const {
    // References
    // -> static unsigned int NPC_VAR_SPECIAL_ABILITY_PLAYER;
}
// Range: 0x801AE570 -> 0x801AE6C8
bool zNPCBTSpecialAbilityOnCondition::BugleOn(class zNPCBTSpecialAbilityOnCondition * this /* r28 */) const {
    // Local variables
    class zPlayer * russellPlayer; // r29
    int numChildren; // r0

    {
        // Range: 0x801AE654 -> 0x801AE698
        // Local variables
        int i; // r30

        {
            // Range: 0x801AE654 -> 0x801AE698
            // Local variables
            class zNPCEntity * npcEnt; // r4
        }
    }

    // References
    // -> static unsigned int NPC_VAR_SPECIAL_ABILITY_PLAYER;
}
// Range: 0x801AE6D0 -> 0x801AEA9C
bool zNPCBTSpecialAbilityOnCondition::BalloonAnimalOn(class zNPCBTSpecialAbilityOnCondition * this /* r27 */) const {
    // Local variables
    class zCarlPlayer * carlPlayer; // r0
    class zUpFloatingObject * closestObj; // r29
    float closestDist2; // f31

    {
        // Range: 0x801AE720 -> 0x801AE9E8
        // Local variables
        unsigned int i; // r28

        {
            // Range: 0x801AE720 -> 0x801AE9E8
            {
                // Range: 0x801AE730 -> 0x801AE9E8
                // Local variables
                float dist2; // f0
                class xVec3 pos; // r1+0x8
            }
        }
    }

    // References
    // -> static unsigned int NPC_VAR_CURRENT_FLOATING_OBJECT;
}
// signature: zNPCBTSwarmKilledByPlayerCondition::Setup(const Sext::ConditionBase *)
// Range: 0x801AEAA0 -> 0x801AEAB0
void zNPCBTSwarmKilledByPlayerCondition::Setup() {
}
// Range: 0x801AEAC0 -> 0x801AEB0C
bool zNPCBTAliveCondition::Evaluate() const {
}
// Range: 0x801AEB10 -> 0x801AEDE0
bool zNPCBTIsToLockedPlayerSideCondition::Evaluate(class zNPCBTIsToLockedPlayerSideCondition * this /* r31 */) const {
    // Local variables
    class zPlayer * player; // r6
    class xVec3 toPlayer; // r1+0x14

    {
        // Range: 0x801AECA8 -> 0x801AECE0
        // Local variables
        float dot; // f0
    }
    {
        // Range: 0x801AECE0 -> 0x801AED18
        // Local variables
        float dot; // f0
    }
    {
        // Range: 0x801AED18 -> 0x801AED50
        // Local variables
        float dot; // f0
    }
    {
        // Range: 0x801AED50 -> 0x801AED88
        // Local variables
        float dot; // f0
    }

    // References
    // -> static unsigned int NPC_VAR_LOCKED_PLAYER;
}
// Range: 0x801AEE00 -> 0x801AEF04
bool zNPCBTCheckPlayerTypeCondition::Evaluate(class zNPCBTCheckPlayerTypeCondition * this /* r31 */) const {
    // Local variables
    class zPlayer * player; // r3
}
// Range: 0x801AEF10 -> 0x801AEF28
bool zNPCBTLastLiveEnemyCondition::Evaluate() const {
    // References
    // -> unsigned int numLiveEnemies;
}
// Range: 0x801AEF30 -> 0x801AF018
bool zNPCBTInHearingAidRangeCondition::Evaluate(class zNPCBTInHearingAidRangeCondition * this /* r28 */) const {
    // Local variables
    class zCarlPlayer * carlPlayer; // r30
    int numChildren; // r0

    {
        // Range: 0x801AEFA4 -> 0x801AEFE8
        // Local variables
        int i; // r29

        {
            // Range: 0x801AEFA4 -> 0x801AEFE8
            // Local variables
            class zNPCEntity * npcEnt; // r4
        }
    }
}
// Range: 0x801AF020 -> 0x801AF308
bool zNPCBTIsPlayerValidCondition::Evaluate(class zNPCBTIsPlayerValidCondition * this /* r30 */) const {
    // Local variables
    class zPlayer * player; // r31

    // References
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// Range: 0x801AF310 -> 0x801AF464
bool zNPCBTDistanceFromFloatingObjectCondition::Evaluate(class zNPCBTDistanceFromFloatingObjectCondition * this /* r30 */) const {
    // Local variables
    class zUpFloatingObject * obj; // r31
    class xVec3 objPos; // r1+0x8
    float len2; // f0
    class Condition_NPC_DistanceFromFloatingObject * asset; // r4
    float dist2; // f0
    bool ret; // r3

    // References
    // -> static unsigned int NPC_VAR_CURRENT_FLOATING_OBJECT;
}
// Range: 0x801AF470 -> 0x801AF4E8
bool zNPCBTIsFloatingObjectActiveCondition::Evaluate() const {
    // Local variables
    class zUpFloatingObject * obj; // r31

    // References
    // -> static unsigned int NPC_VAR_CURRENT_FLOATING_OBJECT;
}
// Range: 0x801AF4F0 -> 0x801AF7DC
bool zNPCBTIsFloatingObjectValidCondition::Evaluate(class zNPCBTIsFloatingObjectValidCondition * this /* r31 */) const {
    // Local variables
    class zUpFloatingObject * obj; // r30

    {
        // Range: 0x801AF564 -> 0x801AF7C0
        // Local variables
        class xVec3 pos; // r1+0x8
    }

    // References
    // -> static unsigned int NPC_VAR_CURRENT_FLOATING_OBJECT;
}
// Range: 0x801AF7E0 -> 0x801AF7F0
bool zNPCBTIsOnGroundCondition::Evaluate() const {
}
// Range: 0x801AF7F0 -> 0x801AF830
bool zNPCBTMovingCondition::Evaluate() const {
    // Local variables
    float tolerance; // f0
}
// Range: 0x801AF830 -> 0x801AF8D8
bool zNPCBTOffScreenCondition::Evaluate(class zNPCBTOffScreenCondition * this /* r27 */) const {
    // Local variables
    int viewport; // r29
    class xVec2 screenPos; // r1+0x8

    {
        // Range: 0x801AF848 -> 0x801AF88C
        // Local variables
        int i; // r28
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x801AF8E0 -> 0x801AF8EC
bool zNPCBT_GenericSpawner_NonstopSpawn_Condition::Evaluate() const {
}
// Range: 0x801AF8F0 -> 0x801AF8FC
bool zNPCBT_GenericSpawner_CanSpawn_Condition::Evaluate() const {
}
