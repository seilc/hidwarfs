/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zMenu.cpp
*/
int sFirstBoot; // size: 0x4, address: 0x806BDAAC
static float time_elapsed; // size: 0x4, address: 0x806BDAB0
static float time_last; // size: 0x4, address: 0x8075309C
static float time_current; // size: 0x4, address: 0x807530A0
static int promptSel; // size: 0x4, address: 0x806BDAB4
static int sInMenu; // size: 0x4, address: 0x807530A4
char ESRB[3]; // size: 0x3, address: 0x807530A8
unsigned int attractMovies[1]; // size: 0x4, address: 0x807530AC
bool firstRun; // size: 0x1, address: 0x806BDAB8
bool firstRun; // size: 0x1, address: 0x806BDAB9
bool threadInProgress; // size: 0x1, address: 0x80753ED0
bool dontClearScreenFirstTime; // size: 0x1, address: 0x806BDABA
bool firstRun; // size: 0x1, address: 0x806BDABB
unsigned int nextSceneID; // size: 0x4, address: 0x80753ED4
unsigned int attractsPlayed; // size: 0x4, address: 0x80753ED8
unsigned int FMVreturn; // size: 0x4, address: 0x80753EDC
int ostrich_delay; // size: 0x4, address: 0x806BDABC
// Range: 0x800D56E0 -> 0x800D56EC
int zFrontEndMenuRunning() {
    // References
    // -> static int sInMenu;
}
// signature: zMenuInitLoad(unsigned int, const char *)
// Range: 0x800D56F0 -> 0x800D5754
bool zMenuInitLoad() {
    // References
    // -> static int sInMenu;
    // -> bool firstRun;
}
// Range: 0x800D5760 -> 0x800D57F8
void zMenuExit() {
    // Local variables
    int i; // r28

    // References
    // -> static int sInMenu;
    // -> class xGlobals * xglobals;
}
// Range: 0x800D5800 -> 0x800D5AA4
bool zMenuSetup() {
    // Local variables
    int i; // r25

    {
        // Range: 0x800D5A10 -> 0x800D5A68
        // Local variables
        class UI_Text * asset; // r0
    }

    // References
    // -> class zGlobals globals;
    // -> class xGlobals * xglobals;
    // -> bool dontClearScreenFirstTime;
    // -> class zNGLoadingScreen gNGLoadingScreen;
    // -> bool threadInProgress;
    // -> bool firstRun;
}
// signature: zMenuLoop(int, const char *&)
// Range: 0x800D5AB0 -> 0x800D5E90
unsigned int zMenuLoop(char * & nextScenePath /* r27 */) {
    // Local variables
    int startidx; // r1+0x8

    {
        // Range: 0x800D5C68 -> 0x800D5C80
        // Local variables
        int i; // r24
    }
    {
        // Range: 0x800D5C80 -> 0x800D5D50
        // Local variables
        int isPaused; // r0

        {
            // Range: 0x800D5C90 -> 0x800D5D0C
            // Local variables
            int i; // r28
        }
        {
            // Range: 0x800D5D0C -> 0x800D5D38
            // Local variables
            int i; // r24
        }
    }

    // References
    // -> enum _GameOstrich gGameOstrich;
    // -> unsigned int gFrameCount;
    // -> class xGlobals * xglobals;
    // -> int sFirstBoot;
    // -> enum eGameStateCombined gGameState;
    // -> enum eGameMode gGameMode;
    // -> static float time_elapsed;
    // -> static float time_current;
    // -> static float time_last;
    // -> int ostrich_delay;
    // -> float SECS_PER_VBLANK;
    // -> unsigned int attractsPlayed;
    // -> unsigned int nextSceneID;
    // -> double secondsPerTick;
    // -> bool firstRun;
    // -> class Module * trcModule;
    // -> class zGlobals globals;
}
// signature: zMenuPause(bool)
// Range: 0x800D5E90 -> 0x800D5EE8
void zMenuPause() {
    // References
    // -> static float time_last;
    // -> float SECS_PER_VBLANK;
    // -> double secondsPerTick;
}
