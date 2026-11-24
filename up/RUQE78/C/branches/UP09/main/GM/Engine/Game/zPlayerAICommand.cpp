/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zPlayerAICommand.cpp
*/
// Range: 0x802C5F90 -> 0x802C5FF8
bool CommandConditionCheckInTrigger::_Evaluate(class CommandConditionCheckInTrigger * this /* r31 */) const {
    // Local variables
    class zCommonPlayer * player; // r0
}
// signature: CommandConditionCheckInTrigger::_Setup(Sext::CommandConditionBase *)
// Range: 0x802C6000 -> 0x802C6038
void CommandConditionCheckInTrigger::_Setup(class CommandConditionCheckInTrigger * this /* r31 */) {
}
// Range: 0x802C6040 -> 0x802C6114
bool CommandConditionCheckPlayerMount::_Evaluate(class CommandConditionCheckPlayerMount * this /* r31 */) const {
    // Local variables
    class zCommonPlayer * player; // r0
}
// signature: CommandConditionCheckPlayerMount::_Setup(Sext::CommandConditionBase *)
// Range: 0x802C6120 -> 0x802C6134
void CommandConditionCheckPlayerMount::_Setup() {
}
// Range: 0x802C6140 -> 0x802C61B0
bool CommandConditionCheckPlayerInteraction::_Evaluate(class CommandConditionCheckPlayerInteraction * this /* r31 */) const {
    // Local variables
    class zCommonPlayer * player; // r0
    class zInteractionUP * interaction; // r0
}
// signature: CommandAction::Setup(Sext::CommandActionBase *)
// Range: 0x802C6850 -> 0x802C6854
void CommandAction::Setup() {
}
// Range: 0x802C6C40 -> 0x802C6CE0
void CommandActionIdle::Execute() {
    // References
    // -> static unsigned int PLAYERAI_VAR_COMMAND;
}
// Range: 0x802CBCC0 -> 0x802CBE98
void CommandActionMoveTo::Execute(class CommandActionMoveTo * this /* r29 */) {
    // Local variables
    class xVec3 location; // r1+0x14
    class xVec3 facing; // r1+0x8

    // References
    // -> static unsigned int PLAYERAI_VAR_COMMAND;
    // -> static unsigned int PLAYERAI_VAR_FACING;
    // -> static unsigned int PLAYERAI_VAR_CURR_DEST;
}
// Range: 0x802CBAD0 -> 0x802CBCA8
void CommandActionJumpTo::Execute(class CommandActionJumpTo * this /* r29 */) {
    // Local variables
    class xVec3 location; // r1+0x14
    class xVec3 facing; // r1+0x8

    // References
    // -> static unsigned int PLAYERAI_VAR_COMMAND;
    // -> static unsigned int PLAYERAI_VAR_FACING;
    // -> static unsigned int PLAYERAI_VAR_CURR_DEST;
}
// Range: 0x802CBA20 -> 0x802CBAC0
void CommandActionKevinSpringboard::Execute() {
    // References
    // -> static unsigned int PLAYERAI_VAR_COMMAND;
}
// Range: 0x802CB7D0 -> 0x802CBA1C
void CommandActionDugDig::Execute(class CommandActionDugDig * this /* r31 */) {
    // Local variables
    class xVec3 dest; // r1+0x8

    // References
    // -> static unsigned int PLAYERAI_VAR_COMMAND;
    // -> static unsigned int PLAYERAI_VAR_INTERACTION;
    // -> static unsigned int PLAYERAI_VAR_CURR_DEST;
}
// signature: CommandActionDugDig::Setup(Sext::CommandActionBase *)
// Range: 0x802CB790 -> 0x802CB7C8
void CommandActionDugDig::Setup(class CommandActionDugDig * this /* r31 */) {
}
// Range: 0x802C61C0 -> 0x802C6298
class Entity * Sext::PlayerAICommand::Create(class EntityHandleBase * handle /* r29 */, class PlayerAICommand * inAsset /* r30 */) {
    // References
    // -> struct {} __vt__16zPlayerAICommand;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x802C62A0 -> 0x802C6850
void zPlayerAICommand::Setup(class zPlayerAICommand * this /* r15 */) {
    {
        // Range: 0x802C639C -> 0x802C63D4
        // Local variables
        int i; // r8

        {
            // Range: 0x802C639C -> 0x802C63D4
            // Local variables
            class zCommonPlayer * candidate; // r6
        }
    }
    {
        // Range: 0x802C642C -> 0x802C67FC
        // Local variables
        int i; // r1+0xC
    }

    // References
    // -> struct {} __vt__38CommandConditionCheckPlayerInteraction;
    // -> struct {} __vt__32CommandConditionCheckPlayerMount;
    // -> struct {} __vt__30CommandConditionCheckInTrigger;
    // -> struct {} __vt__19CommandActionDugDig;
    // -> struct {} __vt__29CommandActionKevinSpringboard;
    // -> struct {} __vt__19CommandActionJumpTo;
    // -> struct {} __vt__19CommandActionMoveTo;
    // -> struct {} __vt__17CommandActionIdle;
    // -> class xGlobals * xglobals;
}
// Range: 0x802C6CE0 -> 0x802C6D88
void zPlayerAICommand::ZoneCallback(class zPlayerAICommand * this /* r29 */, unsigned int event /* r30 */, class xBase * base /* r31 */) {
    // Local variables
    class zCommonPlayer * player; // r0
}
