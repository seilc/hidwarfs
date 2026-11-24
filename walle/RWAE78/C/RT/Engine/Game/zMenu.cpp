/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zMenu.cpp
*/
int sFirstBoot; // size: 0x4, address: 0x806FB75C
static float time_elapsed; // size: 0x4, address: 0x806FB760
static float time_last; // size: 0x4, address: 0x8079117C
static float time_current; // size: 0x4, address: 0x80791180
static float sAttractMode_timer; // size: 0x4, address: 0x80791184
static float sOneLiner_timer; // size: 0x4, address: 0x80791188
static int promptSel; // size: 0x4, address: 0x806FB764
static int sInMenu; // size: 0x4, address: 0x8079118C
static float ONELINER_WAITTIME; // size: 0x4, address: 0x806FB768
static float holdTmr; // size: 0x4, address: 0x806FB76C
static bool sAllowAttract; // size: 0x1, address: 0x80791190
char ESRB[3]; // size: 0x3, address: 0x80791194
unsigned int attractMovies[1]; // size: 0x4, address: 0x80791198
static bool firstRun; // size: 0x1, address: 0x806FB770
static bool firstRun; // size: 0x1, address: 0x806FB771
static bool threadInProgress; // size: 0x1, address: 0x8079119C
static bool firstRun; // size: 0x1, address: 0x806FB772
static unsigned int nextSceneID; // size: 0x4, address: 0x807911A0
static unsigned int attractsPlayed; // size: 0x4, address: 0x807911A4
static unsigned int FMVreturn; // size: 0x4, address: 0x807911A8
static int ostrich_delay; // size: 0x4, address: 0x806FB774
static class xtextbox tb; // size: 0x88, address: 0x807911B0
// Range: 0x800ECE30 -> 0x800ECE3C
int zMenuRunning() {
    // References
    // -> static int sInMenu;
}
// Range: 0x800ECE40 -> 0x800ED0F8
bool zMenuSetup() {
    // Local variables
    int i; // r24

    {
        // Range: 0x800ED050 -> 0x800ED0C0
        // Local variables
        class UI_Text * asset; // r0
    }

    // References
    // -> class zGlobals globals;
    // -> class xGlobals * xglobals;
    // -> static bool sAllowAttract;
    // -> static float sOneLiner_timer;
    // -> static float sAttractMode_timer;
    // -> class zNGLoadingScreen gNGLoadingScreen;
    // -> static float ONELINER_WAITTIME;
    // -> static bool threadInProgress;
    // -> static bool firstRun;
}
// signature: zMenuLoop(int, const char *&)
// Range: 0x800ED100 -> 0x800ED7A4
unsigned int zMenuLoop(char * * nextScenePath /* r27 */) {
    // Local variables
    int startidx; // r1+0x8

    {
        // Range: 0x800ED2E0 -> 0x800ED490
        // Local variables
        int startidx; // r1+0xC

        {
            // Range: 0x800ED438 -> 0x800ED47C
            // Local variables
            int port; // r0
        }
    }
    {
        // Range: 0x800ED4A0 -> 0x800ED4A4
        // Local variables
        int i; // r23
    }
    {
        // Range: 0x800ED4B8 -> 0x800ED588
        // Local variables
        int isPaused; // r0

        {
            // Range: 0x800ED4C8 -> 0x800ED530
            // Local variables
            int i; // r30
        }
        {
            // Range: 0x800ED544 -> 0x800ED564
            // Local variables
            int i; // r23
        }
    }
    {
        // Range: 0x800ED770 -> 0x800ED77C
        // Local variables
        float fmvTime; // f0
    }

    // References
    // -> enum _GameOstrich gGameOstrich;
    // -> unsigned int gFrameCount;
    // -> class xGlobals * xglobals;
    // -> int sFirstBoot;
    // -> static float ONELINER_WAITTIME;
    // -> static bool sAllowAttract;
    // -> static float sOneLiner_timer;
    // -> static float sAttractMode_timer;
    // -> static float time_elapsed;
    // -> static float time_current;
    // -> static float holdTmr;
    // -> int gGameState;
    // -> enum eGameMode gGameMode;
    // -> static float time_last;
    // -> static int ostrich_delay;
    // -> static unsigned int attractsPlayed;
    // -> static unsigned int nextSceneID;
    // -> static int g_flg_chEnabled;
    // -> float SECS_PER_VBLANK;
    // -> double secondsPerTick;
    // -> long long startupTicks;
    // -> static bool firstRun;
    // -> class SaveData g_saveData;
    // -> class zGlobals globals;
}
// Range: 0x800ED7B0 -> 0x800ED7BC
int zMenuIsFirstBoot() {
    // References
    // -> int sFirstBoot;
}
// signature: zMenuAllowAtract(bool)
// Range: 0x800ED7C0 -> 0x800ED7CC
void zMenuAllowAtract() {
    // References
    // -> static bool sAllowAttract;
}
