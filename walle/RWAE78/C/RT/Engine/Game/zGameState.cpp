/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zGameState.cpp
*/
int gGameState; // size: 0x4, address: 0x806FB32C
enum eGameMode gGameMode; // size: 0x4, address: 0x8076E09C
enum _GameOstrich gGameOstrich; // size: 0x4, address: 0x8076E0A0
static unsigned int sGameMode_DispatchTable[12]; // size: 0x30, address: 0x8076E0A8
// Range: 0x800DDAE0 -> 0x800DDAEC
int zGameStateGet() {
    // References
    // -> int gGameState;
}
// Range: 0x800DDAF0 -> 0x800DDAFC
int zGameModeGet() {
    // References
    // -> enum eGameMode gGameMode;
}
// Range: 0x800DDB00 -> 0x800DDB0C
enum _GameOstrich zGameGetOstrich() {
    // References
    // -> enum _GameOstrich gGameOstrich;
}
// signature: zGameSetOstrich(_GameOstrich)
// Range: 0x800DDB10 -> 0x800DDB1C
void zGameSetOstrich() {
    // References
    // -> enum _GameOstrich gGameOstrich;
}
// signature: zGameStateSwitchEvent(unsigned int, Sext::EventAny *)
// Range: 0x800DDB20 -> 0x800DDCF8
void zGameStateSwitchEvent() {
    // Local variables
    int new_mode; // r29
    int new_state; // r28

    // References
    // -> class zGlobals globals;
    // -> int gGameState;
    // -> enum eGameMode gGameMode;
}
// Range: 0x800DDD00 -> 0x800DDE88
void zGameStateSwitch(int theNewState /* r31 */) {
    // Local variables
    int stateOld; // r0

    {
        // Range: 0x800DDD8C -> 0x800DDDAC
        // Local variables
        class EventNotifyDispatcher_IntroState params; // r1+0x1C
    }
    {
        // Range: 0x800DDDB0 -> 0x800DDDD0
        // Local variables
        class EventNotifyDispatcher_TitleState params; // r1+0x18
    }
    {
        // Range: 0x800DDDD4 -> 0x800DDDF4
        // Local variables
        class EventNotifyDispatcher_LoadState params; // r1+0x14
    }
    {
        // Range: 0x800DDE0C -> 0x800DDE2C
        // Local variables
        class EventNotifyDispatcher_SaveState params; // r1+0x10
    }
    {
        // Range: 0x800DDE30 -> 0x800DDE50
        // Local variables
        class EventNotifyDispatcher_PauseState params; // r1+0xC
    }
    {
        // Range: 0x800DDE54 -> 0x800DDE74
        // Local variables
        class EventNotifyDispatcher_GameState params; // r1+0x8
    }

    // References
    // -> enum eGameMode gGameMode;
    // -> int gGameState;
}
// Range: 0x800DDE90 -> 0x800DDFEC
void zGameModeSwitch(enum eGameMode modeNew /* r30 */) {
    // Local variables
    enum eGameMode modeOld; // r0

    // References
    // -> static unsigned int sGameMode_DispatchTable[12];
    // -> class zGlobals globals;
    // -> enum eGameMode gGameMode;
}
