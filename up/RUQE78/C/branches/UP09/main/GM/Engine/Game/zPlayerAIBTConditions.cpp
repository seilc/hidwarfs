/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zPlayerAIBTConditions.cpp
*/
// Range: 0x802C70E0 -> 0x802C7828
bool zPlayerAIBTConditionShouldDoAutoMove::Evaluate(class zPlayerAIBTConditionShouldDoAutoMove * this /* r31 */) const {
    // Local variables
    unsigned int currAction; // r0

    // References
    // -> class zGlobals globals;
}
// signature: zPlayerAIBTConditionShouldDoAutoMove::Setup(const Sext::ConditionBase *)
// Range: 0x802C7830 -> 0x802C783C
void zPlayerAIBTConditionShouldDoAutoMove::Setup() {
}
// Range: 0x802C7840 -> 0x802C78B4
bool zPlayerAIBTConditionCheckCommand::Evaluate(class zPlayerAIBTConditionCheckCommand * this /* r31 */) const {
    // Local variables
    int currentCommand; // r3

    // References
    // -> static unsigned int PLAYERAI_VAR_COMMAND;
}
// Range: 0x802C78D0 -> 0x802C791C
bool zPlayerAIBTConditionShouldKeepDoing::Evaluate() const {
}
// Range: 0x802C7930 -> 0x802C7948
bool zPlayerAIBTConditionIsInCombat::Evaluate() const {
}
// Range: 0x802C7950 -> 0x802C79C0
bool zPlayerAIBTConditionStartFollow::Evaluate(class zPlayerAIBTConditionStartFollow * this /* r31 */) const {
    // Local variables
    float followDist; // f1

    // References
    // -> static unsigned int PLAYERAI_VAR_START_FOLLOW_DIST;
}
// Range: 0x802C79C0 -> 0x802C7A38
bool zPlayerAIBTConditionStopFollow::Evaluate(class zPlayerAIBTConditionStopFollow * this /* r31 */) const {
    // Local variables
    float followDist; // f1

    // References
    // -> static unsigned int PLAYERAI_VAR_STOP_FOLLOW_DIST;
}
// Range: 0x802C7A40 -> 0x802C7AA4
bool zPlayerAIBTConditionCombatWhichNPC::Evaluate() const {
    // Local variables
    class zUPPlayer * upPlayer; // r5
    unsigned int tagToCheck; // r31
    class zNPCBase * npc; // r0
}
// Range: 0x802C7AB0 -> 0x802C7B68
bool zPlayerAIBTConditionCanStartCrank::Evaluate(class zPlayerAIBTConditionCanStartCrank * this /* r30 */) const {
    // Local variables
    class zInteractionUP * currInteraction; // r31

    // References
    // -> static unsigned int PLAYERAI_VAR_INTERACTION;
}
// Range: 0x802C7B70 -> 0x802C7C64
bool zPlayerAIBTConditionDistXZToDestLessThan::Evaluate(class zPlayerAIBTConditionDistXZToDestLessThan * this /* r31 */) const {
    // Local variables
    float checkDist2; // f31
    class xVec3 dest; // r1+0x20

    // References
    // -> static unsigned int PLAYERAI_VAR_CURR_DEST;
}
