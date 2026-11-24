/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zPlayerAI.cpp
*/
bool follow; // size: 0x1, address: 0x807BBE94
bool noPathNoFollow; // size: 0x1, address: 0x80845920
// Range: 0x802C06D0 -> 0x802C06E0
void zPlayerAI::SetupInterpreter() {
}
// signature: zPlayerAI::Setup(zCommonPlayer *)
// Range: 0x802C06E0 -> 0x802C07A4
void zPlayerAI::Setup(class zPlayerAI * this /* r31 */) {
    // References
    // -> struct {} __vt__27zPlayerAIBTConditionBuilder;
}
// signature: zPlayerAI::SetAICommand(zPlayerAICommand *)
// Range: 0x802C07B0 -> 0x802C07C0
void zPlayerAI::SetAICommand() {
}
// Range: 0x802C07C0 -> 0x802C0870
void zPlayerAI::CancelActiveCommand() {
    // References
    // -> static unsigned int PLAYERAI_VAR_COMMAND;
}
// Range: 0x802C0870 -> 0x802C08E0
void zPlayerAI::AICommandDone() {
}
// Range: 0x802C08E0 -> 0x802C0A34
void zPlayerAI::Update(class zPlayerAI * this /* r29 */, float dt /* f31 */) {
}
// Range: 0x802C0A40 -> 0x802C0A88
void zPlayerAI::Reset(class zPlayerAI * this /* r31 */) {
}
// Range: 0x802C0A90 -> 0x802C0AE4
void zPlayerAI::SwitchReset(class zPlayerAI * this /* r31 */) {
}
// Range: 0x802C0AF0 -> 0x802C0C98
void zPlayerAI::SendMoveToCommand(class zPlayerAI * this /* r27 */, class xVec3 & dest /* r28 */, class xVec3 & facing /* r29 */) {
    // References
    // -> static unsigned int PLAYERAI_VAR_COMMAND;
    // -> static unsigned int PLAYERAI_VAR_FACING;
    // -> static unsigned int PLAYERAI_VAR_CURR_DEST;
}
// signature: zPlayerAI::SetFollow(bool)
// Range: 0x802C0CA0 -> 0x802C0CAC
void zPlayerAI::SetFollow() {
    // References
    // -> bool follow;
}
// Range: 0x802C0CB0 -> 0x802C0CBC
bool zPlayerAI::FollowModeOn() {
    // References
    // -> bool follow;
}
// Range: 0x802C0CC0 -> 0x802C0E8C
bool zPlayerAI::CanFollow(class zPlayerAI * this /* r31 */, float checkDist /* f30 */) {
    // Local variables
    class zPlayer * closest; // r28
    float closestD2; // f31
    unsigned int closestPlayerAction; // r0

    {
        // Range: 0x802C0D48 -> 0x802C0DBC
        // Local variables
        int i; // r27

        {
            // Range: 0x802C0D48 -> 0x802C0DBC
            // Local variables
            float len2; // f1
        }
    }
    {
        // Range: 0x802C0E20 -> 0x802C0E48
        // Local variables
        class zPlayerFainted * fainted; // r0
    }

    // References
    // -> class xGlobals * xglobals;
    // -> unsigned int numLiveEnemies;
    // -> bool follow;
}
// Range: 0x802C0E90 -> 0x802C0EAC
void zPlayerAI::SceneReset() {
    // References
    // -> bool noPathNoFollow;
    // -> bool follow;
}
// Range: 0x802C0EB0 -> 0x802C1270
void zPlayerAI::RegisterVariables(class zPlayerAI * this /* r30 */) {
    // References
    // -> static unsigned int PLAYERAI_VAR_STOP_FOLLOW_DIST;
    // -> struct {} __vt__12zVariable<f>;
    // -> static unsigned int PLAYERAI_VAR_START_FOLLOW_DIST;
    // -> struct {} __vt__28zVariable<P14zInteractionUP>;
    // -> static unsigned int PLAYERAI_VAR_INTERACTION;
    // -> struct {} __vt__12zVariable<i>;
    // -> static unsigned int PLAYERAI_VAR_COMMAND;
    // -> static unsigned int PLAYERAI_VAR_FACING;
    // -> struct {} __vt__17zVariable<5xVec3>;
    // -> static unsigned int PLAYERAI_VAR_CURR_DEST;
    // -> class xVec3 m_Null;
}
// signature: zPlayerAI::CalcDistanceSquareFromPos(const xVec3 &) const
// Range: 0x802C1270 -> 0x802C12E4
float zPlayerAI::CalcDistanceSquareFromPos() const {
    // Local variables
    class xVec3 disp; // r1+0x14
}
