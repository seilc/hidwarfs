/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zBTCommonConditions.cpp
*/
// Range: 0x80081F60 -> 0x800822E4
bool zBTConditionCheckVariable::Evaluate() const {
    // Local variables
    class Condition_CheckVariable * asset; // r30
    unsigned int leftVar; // r4

    {
        // Range: 0x80081FAC -> 0x800820DC
        // Local variables
        int rightVal; // r1+0x1C
        int leftVal; // r1+0x20
        unsigned int op; // r29
    }
    {
        // Range: 0x800820DC -> 0x80082200
        // Local variables
        float rightVal; // r1+0x14
        float leftVal; // r1+0x18
        unsigned int op; // r29
    }
    {
        // Range: 0x80082200 -> 0x80082230
        // Local variables
        int leftVal; // r1+0x10
    }
    {
        // Range: 0x80082230 -> 0x800822C8
        // Local variables
        class zPlayer * rightVal; // r1+0x8
        class zPlayer * leftVal; // r1+0xC

        {
            // Range: 0x80082278 -> 0x800822B0
            // Local variables
            int playerIndex; // r4
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800822F0 -> 0x8008232C
bool zBTConditionCheckConditional::Evaluate() const {
    // Local variables
    class EntityHandleBase * condHandle; // r0
    unsigned int success; // r0
}
// Range: 0x80082330 -> 0x800824D0
bool zBTConditionDistanceFromClosestPlayer::Evaluate(class zBTConditionDistanceFromClosestPlayer * this /* r27 */) const {
    // Local variables
    class zPlayer * closest; // r29
    float closestD2; // f31
    bool ret; // r3

    {
        // Range: 0x8008235C -> 0x800823E4
        // Local variables
        int i; // r28

        {
            // Range: 0x8008235C -> 0x800823E4
            // Local variables
            float len2; // f1
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zBTConditionDistanceFromClosestPlayer::Setup(const Sext::ConditionBase *)
// Range: 0x800824D0 -> 0x800824E8
void zBTConditionDistanceFromClosestPlayer::Setup() {
    // Local variables
    class Condition_DistanceFromClosestPlayer * myAsset; // r0
}
// Range: 0x800824F0 -> 0x80082618
bool zBTConditionDistanceFromPlayer::Evaluate(class zBTConditionDistanceFromPlayer * this /* r31 */) const {
    // Local variables
    class zPlayer * player; // r1+0x8
    float len2; // f0
    bool ret; // r3
}
// signature: zBTConditionDistanceFromPlayer::Setup(const Sext::ConditionBase *)
// Range: 0x80082620 -> 0x80082640
void zBTConditionDistanceFromPlayer::Setup() {
    // Local variables
    class Condition_DistanceFromPlayer * myAsset; // r0
}
// Range: 0x80082640 -> 0x80082784
bool zBTConditionPlayerIsInAction::Evaluate(class zBTConditionPlayerIsInAction * this /* r31 */) const {
    // Local variables
    class zPlayer * player; // r1+0x8
    unsigned int currAction; // r0

    {
        // Range: 0x80082710 -> 0x80082738
        // Local variables
        class xBase * owner; // r0
    }
}
