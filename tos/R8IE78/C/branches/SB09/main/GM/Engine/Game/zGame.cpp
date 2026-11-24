/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zGame.cpp
*/
static unsigned long long sPlayerMarkerStartID[4]; // size: 0x20, address: 0x8076EC78
static unsigned int sPlayerMarkerStartTotal; // size: 0x4, address: 0x8076EC98
static float sGameOverTimer; // size: 0x4, address: 0x8076EC9C
float sTimeElapsed; // size: 0x4, address: 0x8076ECA0
float gRealTimeElapsed; // size: 0x4, address: 0x8076ECA4
class Time sTimeCurrent; // size: 0x8, address: 0x8076ECA8
unsigned int gLevelChanged; // size: 0x4, address: 0x8076ECB0
bool gExitAfterPause; // size: 0x1, address: 0x8076ECB4
static int g_hiphopReloadHIP; // size: 0x4, address: 0x8076ECB8
static int g_hiphopForcePortal; // size: 0x4, address: 0x8076ECBC
static int g_hiphopResetOnly; // size: 0x4, address: 0x8076ECC0
static class xColor sFadeColor; // size: 0x4, address: 0x8076ECC4
class xColor black; // size: 0x4, address: 0x8076ECC8
class xColor clear; // size: 0x4, address: 0x8076ECCC
unsigned int gSoak; // size: 0x4, address: 0x8076ECD0
int enableSuperSoaker; // size: 0x4, address: 0x8076ECD4
int enableSoakStatisticsMode; // size: 0x4, address: 0x8076ECD8
static enum eInitGuts_Stage curStage; // size: 0x4, address: 0x8076ECDC
bool firstRun; // size: 0x1, address: 0x806C861C
int sFrameRateMonitorDesiredFPS; // size: 0x4, address: 0x8076ECE0
static enum eGameSetupState gameSetupState; // size: 0x4, address: 0x8076ECE4
bool threadInProgress; // size: 0x1, address: 0x80774110
static class Time t0; // size: 0x8, address: 0x8076ECE8
static class Time t1; // size: 0x8, address: 0x8076ECF0
static class Time w0; // size: 0x8, address: 0x8076ECF8
static class Time w1; // size: 0x8, address: 0x8076ED00
static class Time gloop_time; // size: 0x8, address: 0x8076ED08
static class Time gwait_time; // size: 0x8, address: 0x8076ED10
static int gloop_ct; // size: 0x4, address: 0x8076ED18
static float gloop_time_secs; // size: 0x4, address: 0x8076ED1C
static float gwait_time_secs; // size: 0x4, address: 0x8076ED20
static float gloop_net_time_secs; // size: 0x4, address: 0x8076ED24
float snd_radius; // size: 0x4, address: 0x806C8620
unsigned int gLastProfileDump; // size: 0x4, address: 0x8076ED28
static int ostrich_delay; // size: 0x4, address: 0x8076ED2C
bool triggerAutoSave; // size: 0x1, address: 0x8076ED30
int waitFewFrames; // size: 0x4, address: 0x8076ED34
int frameCount; // size: 0x4, address: 0x80774114
float sAttractMode_timer; // size: 0x4, address: 0x80774118
float lastTime; // size: 0x4, address: 0x80774120
float presentTime; // size: 0x4, address: 0x80774124
char * TXT_DEMO; // size: 0x4, address: 0x80774128
class xtextbox tb; // size: 0x88, address: 0x80774130
unsigned int g_HackIngredientUIDs[36]; // size: 0x90, address: 0x806C8628
// Range: 0x8019B190 -> 0x8019B464
bool zGameInit(unsigned int theSceneID /* r29 */, char * fullSceneName /* r30 */) {
    {
        // Range: 0x8019B19C -> 0x8019B2B8
        // Local variables
        unsigned long long saveIconIDList[1]; // r1+0x8
        char * saveBannerIconList[8]; // r1+0x10

        {
            // Range: 0x8019B1E4 -> 0x8019B21C
            // Local variables
            int i; // r26
        }
        {
            // Range: 0x8019B264 -> 0x8019B270
            // Local variables
            int i; // r0
        }
    }

    // References
    // -> static int g_hiphopForcePortal;
    // -> static int g_hiphopReloadHIP;
    // -> static enum eInitGuts_Stage curStage;
    // -> class zNGLoadingScreen gNGLoadingScreen;
    // -> class Module * trcModule;
    // -> class zGlobals globals;
    // -> class xGlobals * xglobals;
    // -> class xColor clear;
    // -> class xColor black;
    // -> static class xColor sFadeColor;
    // -> bool firstRun;
}
// Range: 0x8019B4F0 -> 0x8019B540
void zGameExit() {
    // References
    // -> static int g_hiphopReloadHIP;
}
// Range: 0x8019B540 -> 0x8019B7C4
bool zGameSetup() {
    // References
    // -> class Module * trcModule;
    // -> unsigned int gLevelChanged;
    // -> class zNGLoadingScreen gNGLoadingScreen;
    // -> bool threadInProgress;
    // -> class zGlobals globals;
    // -> static enum eGameSetupState gameSetupState;
}
// Range: 0x8019B7D0 -> 0x8019B860
void zGameLoopStartup() {
    // References
    // -> unsigned int gSceneFrameCount;
    // -> int numResets;
    // -> class zGlobals globals;
    // -> static int ostrich_delay;
}
// Range: 0x8019B860 -> 0x8019C26C
enum UnloadSceneEnum zGameLoopBody() {
    // Local variables
    bool shouldSwitchScene; // r0

    {
        // Range: 0x8019BB84 -> 0x8019BB9C
        // Local variables
        int trcPort; // r22
    }
    {
        // Range: 0x8019BBAC -> 0x8019BED8
        {
            // Range: 0x8019BC08 -> 0x8019BDE4
            // Local variables
            int i; // r27

            {
                // Range: 0x8019BC08 -> 0x8019BDE4
                // Local variables
                bool padActive; // r0
                class zPlayerInput * pad; // r26
            }
        }
        {
            // Range: 0x8019BDFC -> 0x8019BE88
            // Local variables
            int i; // r22
        }
    }
    {
        // Range: 0x8019BEE8 -> 0x8019C180
        // Local variables
        int isPaused; // r0

        {
            // Range: 0x8019BF18 -> 0x8019BF68
            // Local variables
            int i; // r22
        }
        {
            // Range: 0x8019BFC4 -> 0x8019C054
            // Local variables
            int i; // r24
        }
    }

    // References
    // -> bool gExitAfterPause;
    // -> unsigned int gSceneFrameCount;
    // -> unsigned int gFrameCount;
    // -> static int ostrich_delay;
    // -> static float gwait_time_secs;
    // -> static class Time w1;
    // -> static class Time w0;
    // -> class zViewport viewports[4];
    // -> class zBombManager gBombManager;
    // -> class xGlobals * xglobals;
    // -> float sAttractMode_timer;
    // -> static float gloop_net_time_secs;
    // -> static float gloop_time_secs;
    // -> static class Time gwait_time;
    // -> double secondsPerTick;
    // -> static int gloop_ct;
    // -> static class Time gloop_time;
    // -> static class Time t0;
    // -> static class Time t1;
    // -> float gRealTimeElapsed;
    // -> int frameCount;
    // -> float sTimeElapsed;
    // -> class Time sTimeCurrent;
    // -> float dt;
    // -> class Module * trcModule;
    // -> class zGlobals globals;
}
// Range: 0x8019C270 -> 0x8019C2D8
int zGameIsPaused() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x8019C2E0 -> 0x8019C328
int zGameIsInPureCinematic() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x8019C330 -> 0x8019C3B0
enum pause_ability zGameOkToPause() {
    // Local variables
    int startidx; // r1+0x8
}
// Range: 0x8019C3B0 -> 0x8019C3FC
void zGamePause(enum eGameStateCombined state /* r31 */) {
}
// Range: 0x8019C400 -> 0x8019C49C
bool zGamePauseIfPossible(enum eGameStateCombined state /* r31 */) {
}
// Range: 0x8019C4A0 -> 0x8019C894
bool zGameUpdateMode() {
    {
        // Range: 0x8019C4C8 -> 0x8019C870
        // Local variables
        bool isCinematicRunning; // r0
        bool isSaveSystemBusy; // r0

        {
            // Range: 0x8019C4FC -> 0x8019C5BC
            // Local variables
            int startidx; // r1+0x8

            {
                // Range: 0x8019C510 -> 0x8019C5A4
                // Local variables
                int port; // r23
                class zPlayerInput * pad; // r23
            }
        }
        {
            // Range: 0x8019C5C0 -> 0x8019C854
            // Local variables
            char * nextScenePath; // r25
            unsigned int nextSceneID; // r24
            class zPortalPending & pendingPortal; // r23

            {
                // Range: 0x8019C648 -> 0x8019C67C
                // Local variables
                unsigned int directionIdx; // r28
            }
            {
                // Range: 0x8019C818 -> 0x8019C854
                // Local variables
                int i; // r23
            }
        }
    }

    // References
    // -> static float sGameOverTimer;
    // -> class xVec3 m_UnitAxisY;
    // -> class xGlobals * xglobals;
    // -> static unsigned int sPlayerMarkerStartTotal;
    // -> static unsigned long long sPlayerMarkerStartID[4];
    // -> static int g_hiphopForcePortal;
    // -> static int g_hiphopReloadHIP;
    // -> class zGlobals globals;
    // -> static int g_hiphopResetOnly;
    // -> float sTimeElapsed;
    // -> class Module * trcModule;
}
// signature: zGameInitPlayer(unsigned int)
// Range: 0x8019C8A0 -> 0x8019C9D4
void zGameInitPlayer() {
    // Local variables
    class xEntAsset * asset; // r0
    int playerCount; // r0
    class xEntAsset * playerAssets[4]; // r1+0x8

    {
        // Range: 0x8019C8CC -> 0x8019C91C
        // Local variables
        int i; // r29

        {
            // Range: 0x8019C8CC -> 0x8019C91C
            // Local variables
            class xEntPlayerAsset & plyrasset; // r0
        }
    }
    {
        // Range: 0x8019C91C -> 0x8019C91C
        // Local variables
        int ii; // r0
    }
    {
        // Range: 0x8019C91C -> 0x8019C9C0
        // Local variables
        int iii; // r25

        {
            // Range: 0x8019C91C -> 0x8019C9C0
            // Local variables
            class CharacterAssets * characterAsset; // r0
            unsigned long long characterAssetID; // r23:r22
            class xEntAsset * asset; // r24
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// Range: 0x8019C9E0 -> 0x8019CA54
bool ShutdownCB() {
    // References
    // -> bool gSoundReadyToExit;
    // -> class SaveData g_saveData;
    // -> bool gSysForceExit;
}
