/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zBTCommonConditions.cpp
*/
// Range: 0x800C4AD0 -> 0x800C5168
bool zBTConditionCheckVariable::Evaluate() const {
    // Local variables
    class Condition_CheckVariable * asset; // r5
    unsigned int leftVar; // r0

    {
        // Range: 0x800C4B14 -> 0x800C4D1C
        // Local variables
        int rightVal; // r4
        int leftVal; // r0
        unsigned int op; // r6
    }
    {
        // Range: 0x800C4D1C -> 0x800C4F14
        // Local variables
        float rightVal; // f1
        float leftVal; // f0
        unsigned int op; // r31
    }
    {
        // Range: 0x800C4F14 -> 0x800C4FC8
        // Local variables
        int leftVal; // r4
    }
    {
        // Range: 0x800C4FC8 -> 0x800C5154
        // Local variables
        class zPlayer * rightVal; // r10
        class zPlayer * leftVal; // r0

        {
            // Range: 0x800C5114 -> 0x800C5144
            // Local variables
            int playerIndex; // r5
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800C5170 -> 0x800C51B0
bool zBTConditionCheckConditional::Evaluate() const {
    // Local variables
    class EntityHandleBase * condHandle; // r0
    unsigned int success; // r0
}
// Range: 0x800C51B0 -> 0x800C5350
bool zBTConditionDistanceFromClosestPlayer::Evaluate(class zBTConditionDistanceFromClosestPlayer * this /* r27 */) const {
    // Local variables
    class zPlayer * closest; // r29
    float closestD2; // f31
    bool ret; // r3

    {
        // Range: 0x800C51DC -> 0x800C5250
        // Local variables
        int i; // r28

        {
            // Range: 0x800C51DC -> 0x800C5250
            // Local variables
            float len2; // f1
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zBTConditionDistanceFromClosestPlayer::Setup(const Sext::ConditionBase *)
// Range: 0x800C5350 -> 0x800C5368
void zBTConditionDistanceFromClosestPlayer::Setup() {
    // Local variables
    class Condition_DistanceFromClosestPlayer * myAsset; // r0
}
// Range: 0x800C5370 -> 0x800C550C
bool zBTConditionDistanceFromPlayer::Evaluate(class zBTConditionDistanceFromPlayer * this /* r31 */) const {
    // Local variables
    class zPlayer * player; // r4
    float len2; // f0
    bool ret; // r3
}
// signature: zBTConditionDistanceFromPlayer::Setup(const Sext::ConditionBase *)
// Range: 0x800C5510 -> 0x800C5530
void zBTConditionDistanceFromPlayer::Setup() {
    // Local variables
    class Condition_DistanceFromPlayer * myAsset; // r0
}
// Range: 0x800C5530 -> 0x800C5580
bool zBTConditionIsAnyPlayerInCombat::Evaluate() const {
    // Local variables
    bool ret; // r3

    {
        // Range: 0x800C553C -> 0x800C553C
        // Local variables
        int i; // r0
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800C5580 -> 0x800C58F0
bool zBTConditionPlayerIsInAction::Evaluate(class zBTConditionPlayerIsInAction * this /* r30 */) const {
    // Local variables
    class zPlayer * player; // r31
    unsigned int currAction; // r0

    {
        // Range: 0x800C57F4 -> 0x800C5818
        // Local variables
        class xBase * owner; // r3
    }

    // References
    // -> class xGlobals * xglobals;
}
