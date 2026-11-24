/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zMenu.cpp
*/
int sFirstBoot; // size: 0x4, address: 0x807AF72C
static float time_elapsed; // size: 0x4, address: 0x807AF730
static float time_last; // size: 0x4, address: 0x808229F4
static float time_current; // size: 0x4, address: 0x808229F8
static int promptSel; // size: 0x4, address: 0x807AF734
static int sInMenu; // size: 0x4, address: 0x808229FC
char ESRB[3]; // size: 0x3, address: 0x80822A00
unsigned int attractMovies[1]; // size: 0x4, address: 0x80822A04
static bool firstRun; // size: 0x1, address: 0x807AF738
static bool firstRun; // size: 0x1, address: 0x807AF739
static bool threadInProgress; // size: 0x1, address: 0x80822A08
static bool dontClearScreenFirstTime; // size: 0x1, address: 0x807AF73A
static bool firstRun; // size: 0x1, address: 0x807AF73B
static unsigned int nextSceneID; // size: 0x4, address: 0x80822A0C
static unsigned int attractsPlayed; // size: 0x4, address: 0x80822A10
static unsigned int FMVreturn; // size: 0x4, address: 0x80822A14
static int ostrich_delay; // size: 0x4, address: 0x807AF73C
// Range: 0x80195BB0 -> 0x80195BBC
int zFrontEndMenuRunning() {
    // References
    // -> static int sInMenu;
}
// Range: 0x80195BC0 -> 0x80195E70
bool zMenuSetup() {
    // Local variables
    int i; // r25

    {
        // Range: 0x80195DC8 -> 0x80195E38
        // Local variables
        class UI_Text * asset; // r0
    }

    // References
    // -> class zGlobals globals;
    // -> class xGlobals * xglobals;
    // -> static bool dontClearScreenFirstTime;
    // -> class zNGLoadingScreen gNGLoadingScreen;
    // -> static bool threadInProgress;
    // -> static bool firstRun;
}
// signature: zMenuLoop(int, const char *&)
// Range: 0x80195E70 -> 0x801963F0
unsigned int zMenuLoop(char * & nextScenePath /* r29 */) {
    // Local variables
    int startidx; // r1+0x8

    {
        // Range: 0x801960CC -> 0x801960D0
        // Local variables
        int i; // r25
    }
    {
        // Range: 0x801960E4 -> 0x801961C4
        // Local variables
        int isPaused; // r0

        {
            // Range: 0x801960F4 -> 0x8019616C
            // Local variables
            int i; // r24
        }
        {
            // Range: 0x80196180 -> 0x801961A0
            // Local variables
            int i; // r24
        }
    }

    // References
    // -> enum _GameOstrich gGameOstrich;
    // -> unsigned int gFrameCount;
    // -> class xGlobals * xglobals;
    // -> int sFirstBoot;
    // -> enum eGameState gGameState;
    // -> enum eGameMode gGameMode;
    // -> static float time_elapsed;
    // -> static float time_current;
    // -> static float time_last;
    // -> static int ostrich_delay;
    // -> static unsigned int attractsPlayed;
    // -> static unsigned int nextSceneID;
    // -> float SECS_PER_VBLANK;
    // -> double secondsPerTick;
    // -> long long startupTicks;
    // -> static bool firstRun;
    // -> class Module * trcModule;
    // -> class zGlobals globals;
}
