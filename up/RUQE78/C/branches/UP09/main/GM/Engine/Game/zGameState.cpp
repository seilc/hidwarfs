/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zGameState.cpp
*/
enum eGameState gGameState; // size: 0x4, address: 0x807AEFB4
enum eGameMode gGameMode; // size: 0x4, address: 0x8081FA74
enum _GameOstrich gGameOstrich; // size: 0x4, address: 0x8081FA78
static unsigned int sGameMode_DispatchTable[7]; // size: 0x1C, address: 0x8081FA7C
// Range: 0x80177630 -> 0x8017763C
enum eGameState zGameStateGet() {
    // References
    // -> enum eGameState gGameState;
}
// Range: 0x80177640 -> 0x8017764C
enum eGameMode zGameModeGet() {
    // References
    // -> enum eGameMode gGameMode;
}
// Range: 0x80177650 -> 0x8017765C
enum _GameOstrich zGameGetOstrich() {
    // References
    // -> enum _GameOstrich gGameOstrich;
}
// signature: zGameSetOstrich(_GameOstrich)
// Range: 0x80177660 -> 0x8017766C
void zGameSetOstrich() {
    // References
    // -> enum _GameOstrich gGameOstrich;
}
// Range: 0x80177670 -> 0x80177724
void zGameStateSwitch(enum eGameState stateNew /* r31 */) {
    // Local variables
    enum eGameMode mode; // r0

    // References
    // -> enum eGameState gGameState;
    // -> enum eGameMode gGameMode;
}
// signature: SchemaModeStateToNewGameState(eGameMode, int)
// Range: 0x80177730 -> 0x80177834
enum eGameState SchemaModeStateToNewGameState() {
}
// signature: NewGameStateToSchemaGameState(eGameState)
// Range: 0x80177840 -> 0x801778C8
int NewGameStateToSchemaGameState() {
}
// signature: zGameStateSwitchEvent(unsigned int, Sext::EventAny *)
// Range: 0x801778D0 -> 0x80177AB4
void zGameStateSwitchEvent() {
    // Local variables
    enum eGameMode cur_mode; // r30
    enum eGameState cur_state; // r31
    enum eGameMode new_mode; // r29
    enum eGameState new_state; // r28

    // References
    // -> class zGlobals globals;
    // -> enum eGameState gGameState;
    // -> enum eGameMode gGameMode;
}
// signature: zGameStateSwitch_Internal(eGameState)
// Range: 0x80177AC0 -> 0x80177BF0
void zGameStateSwitch_Internal() {
    {
        // Range: 0x80177B08 -> 0x80177B30
        // Local variables
        class EventNotifyDispatcher_TitleState params; // r1+0x18
    }
    {
        // Range: 0x80177B34 -> 0x80177B5C
        // Local variables
        class EventNotifyDispatcher_LoadState params; // r1+0x14
    }
    {
        // Range: 0x80177B60 -> 0x80177B88
        // Local variables
        class EventNotifyDispatcher_SaveState params; // r1+0x10
    }
    {
        // Range: 0x80177B8C -> 0x80177BB4
        // Local variables
        class EventNotifyDispatcher_PauseState params; // r1+0xC
    }
    {
        // Range: 0x80177BB8 -> 0x80177BE0
        // Local variables
        class EventNotifyDispatcher_GameState params; // r1+0x8
    }

    // References
    // -> enum eGameState gGameState;
    // -> enum eGameMode gGameMode;
}
// Range: 0x80177BF0 -> 0x80177D30
void zGameModeSwitch_Internal(enum eGameMode modeNew /* r31 */) {
    // Local variables
    enum eGameMode modeOld; // r4

    // References
    // -> static unsigned int sGameMode_DispatchTable[7];
    // -> class zGlobals globals;
    // -> enum eGameMode gGameMode;
}
