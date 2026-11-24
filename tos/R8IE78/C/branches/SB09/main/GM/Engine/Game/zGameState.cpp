/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zGameState.cpp
*/
enum eGameStateCombined gGameState; // size: 0x4, address: 0x806BD670
enum eGameMode gGameMode; // size: 0x4, address: 0x806BD674
enum _GameOstrich gGameOstrich; // size: 0x4, address: 0x80734BA0
// signature: GameModeFromGameState(Sext::eGameStateCombined)
// Range: 0x800C42C0 -> 0x800C42FC
enum eGameMode GameModeFromGameState() {
}
// Range: 0x800C4300 -> 0x800C430C
enum eGameStateCombined zGameStateGet() {
    // References
    // -> enum eGameStateCombined gGameState;
}
// Range: 0x800C4310 -> 0x800C431C
enum eGameMode zGameModeGet() {
    // References
    // -> enum eGameMode gGameMode;
}
// Range: 0x800C4320 -> 0x800C432C
enum _GameOstrich zGameGetOstrich() {
    // References
    // -> enum _GameOstrich gGameOstrich;
}
// signature: zGameSetOstrich(_GameOstrich)
// Range: 0x800C4330 -> 0x800C433C
void zGameSetOstrich() {
    // References
    // -> enum _GameOstrich gGameOstrich;
}
// Range: 0x800C4340 -> 0x800C4440
void zGameStateSwitchEvent(enum eGameStateCombined newState /* r29 */) {
    // Local variables
    enum eGameMode prevMode; // r30
    enum eGameStateCombined prevState; // r31
    enum eGameMode newMode; // r0

    // References
    // -> class zGlobals globals;
    // -> enum eGameStateCombined gGameState;
    // -> enum eGameMode gGameMode;
}
// Range: 0x800C4440 -> 0x800C44EC
void zGameStateSwitch(enum eGameStateCombined newState /* r30 */) {
    // Local variables
    enum eGameMode newMode; // r0

    {
        // Range: 0x800C44A0 -> 0x800C44D8
        // Local variables
        class EventNotifyDispatcher_CombinedGameState params; // r1+0x8
    }

    // References
    // -> enum eGameStateCombined gGameState;
    // -> enum eGameMode gGameMode;
}
// Range: 0x800C44F0 -> 0x800C4538
void TransitioningMode_GameToPause() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x800C4540 -> 0x800C45E8
void TransitioningMode_PauseToGame() {
    // References
    // -> class zGlobals globals;
}
