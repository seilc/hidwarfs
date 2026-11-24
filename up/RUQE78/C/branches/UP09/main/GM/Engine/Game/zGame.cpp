/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zGame.cpp
*/
static unsigned long long sPlayerMarkerStartID[4]; // size: 0x20, address: 0x80840AD8
static unsigned int sPlayerMarkerStartTotal; // size: 0x4, address: 0x80840AF8
static float sGameOverTimer; // size: 0x4, address: 0x80840AFC
float sTimeElapsed; // size: 0x4, address: 0x80840B00
float gRealTimeElapsed; // size: 0x4, address: 0x80840B04
class Time sTimeCurrent; // size: 0x8, address: 0x80840B08
unsigned int gLevelChanged; // size: 0x4, address: 0x80840B10
bool gExitAfterPause; // size: 0x1, address: 0x80840B14
static int g_hiphopReloadHIP; // size: 0x4, address: 0x80840B18
static int g_hiphopForcePortal; // size: 0x4, address: 0x80840B1C
static int g_hiphopResetOnly; // size: 0x4, address: 0x80840B20
static class xColor sFadeColor; // size: 0x4, address: 0x80840B24
class xColor black; // size: 0x4, address: 0x80840B28
class xColor clear; // size: 0x4, address: 0x80840B2C
unsigned int gSoak; // size: 0x4, address: 0x80840B30
char * allsoaklevels[80]; // size: 0x140, address: 0x80840B38
char * * soaklevels; // size: 0x4, address: 0x80840C78
static float SOAK_DELAY; // size: 0x4, address: 0x807BBB14
static float SOAK_STATISTICS_MODE_TIMEOUT; // size: 0x4, address: 0x807BBB18
static float soaktime; // size: 0x4, address: 0x80840C7C
static float soakstatisticstime; // size: 0x4, address: 0x80840C80
int enableMuttonBasher; // size: 0x4, address: 0x807BBB1C
int enableMenuMasher; // size: 0x4, address: 0x80840C84
int enableAudioAnnihilator; // size: 0x4, address: 0x807BBB20
int enableResetinator; // size: 0x4, address: 0x807BBB24
int enableSuperSoaker; // size: 0x4, address: 0x80840C88
int enableSoakStatisticsMode; // size: 0x4, address: 0x80840C8C
static enum eInitGuts_Stage curStage; // size: 0x4, address: 0x80840C90
static bool firstRun; // size: 0x1, address: 0x807BBB28
int sFrameRateMonitorDesiredFPS; // size: 0x4, address: 0x80840C94
static enum eGameSetupState gameSetupState; // size: 0x4, address: 0x80840C98
static bool threadInProgress; // size: 0x1, address: 0x80840C9C
static class Time t0; // size: 0x8, address: 0x80840CA0
static class Time t1; // size: 0x8, address: 0x80840CA8
static class Time w0; // size: 0x8, address: 0x80840CB0
static class Time w1; // size: 0x8, address: 0x80840CB8
static class Time gloop_time; // size: 0x8, address: 0x80840CC0
static class Time gwait_time; // size: 0x8, address: 0x80840CC8
static int gloop_ct; // size: 0x4, address: 0x80840CD0
static float gloop_time_secs; // size: 0x4, address: 0x80840CD4
static float gwait_time_secs; // size: 0x4, address: 0x80840CD8
static float gloop_net_time_secs; // size: 0x4, address: 0x80840CDC
float snd_radius; // size: 0x4, address: 0x807BBB2C
unsigned int gLastProfileDump; // size: 0x4, address: 0x80840CE0
static int ostrich_delay; // size: 0x4, address: 0x80840CE4
bool triggerAutoSave; // size: 0x1, address: 0x80840CE8
int waitFewFrames; // size: 0x4, address: 0x80840CEC
static int frameCount; // size: 0x4, address: 0x80840CF0
static float sAttractMode_timer; // size: 0x4, address: 0x80840CF4
static float lastTime; // size: 0x4, address: 0x80840CFC
static float presentTime; // size: 0x4, address: 0x80840D00
static char * TXT_DEMO; // size: 0x4, address: 0x80840D04
static class xtextbox tb; // size: 0x88, address: 0x80840D08
unsigned int g_HackIngredientUIDs[36]; // size: 0x90, address: 0x807BBB40
static bool saveBeforeShutdown; // size: 0x1, address: 0x807BBBD0
// Range: 0x802A9A20 -> 0x802A9BFC
static bool zGameInit_Guts(unsigned int theSceneID /* r29 */, char * fullSceneName /* r28 */) {
    {
        // Range: 0x802A9A44 -> 0x802A9BDC
        // Local variables
        int i; // r28
        bool sceneIsInit; // r0
    }

    // References
    // -> class Module * trcModule;
    // -> class xGlobals * xglobals;
    // -> class zViewport viewports[4];
    // -> class zGlobals globals;
    // -> static int g_hiphopForcePortal;
    // -> static int g_hiphopReloadHIP;
    // -> static enum eInitGuts_Stage curStage;
}
// Range: 0x802A9C00 -> 0x802A9E14
bool zGameInit(unsigned int theSceneID /* r30 */, char * fullSceneName /* r31 */) {
    {
        // Range: 0x802A9C08 -> 0x802A9DA4
        // Local variables
        unsigned long long saveIconIDList[1]; // r1+0x8
        char * saveBannerIconList[8]; // r1+0x10

        {
            // Range: 0x802A9C60 -> 0x802A9CE0
            // Local variables
            int i; // r6
        }
        {
            // Range: 0x802A9D54 -> 0x802A9D54
            // Local variables
            int i; // r0
        }
    }

    // References
    // -> class zNGLoadingScreen gNGLoadingScreen;
    // -> class Module * trcModule;
    // -> class zGlobals globals;
    // -> class xGlobals * xglobals;
    // -> class xColor clear;
    // -> class xColor black;
    // -> static class xColor sFadeColor;
    // -> static bool firstRun;
}
// Range: 0x802A9E20 -> 0x802A9EA0
void zGameExit() {
    // References
    // -> static int g_hiphopReloadHIP;
    // -> class zViewport viewports[4];
}
// Range: 0x802A9EA0 -> 0x802AA2F8
bool zGameSetup() {
    // References
    // -> class Module * trcModule;
    // -> class zViewport viewports[4];
    // -> unsigned int gLevelChanged;
    // -> unsigned int g_rttidParentTable[246];
    // -> static bool threadInProgress;
    // -> class zGlobals globals;
    // -> static enum eGameSetupState gameSetupState;
}
// Range: 0x802AA300 -> 0x802AA390
void zGameLoopStartup() {
    // References
    // -> unsigned int gSceneFrameCount;
    // -> int numResets;
    // -> class zGlobals globals;
    // -> static int ostrich_delay;
}
// Range: 0x802AA390 -> 0x802AB2F0
enum UnloadSceneEnum zGameLoopBody() {
    // Local variables
    bool shouldSwitchScene; // r0

    {
        // Range: 0x802AA798 -> 0x802AA7A4
        // Local variables
        int trcPort; // r23
    }
    {
        // Range: 0x802AA7C0 -> 0x802AAAF0
        {
            // Range: 0x802AA810 -> 0x802AA9DC
            // Local variables
            int i; // r27

            {
                // Range: 0x802AA810 -> 0x802AA9DC
                // Local variables
                bool padActive; // r0
                class zPlayerInput * pad; // r26
            }
        }
        {
            // Range: 0x802AA9E8 -> 0x802AAAF0
            // Local variables
            class EventActionDispatcher_SetGameState params; // r1+0xC

            {
                // Range: 0x802AA9FC -> 0x802AAA7C
                // Local variables
                int i; // r23
            }
        }
    }
    {
        // Range: 0x802AAB00 -> 0x802AB164
        {
            // Range: 0x802AAB98 -> 0x802AABDC
            // Local variables
            int i; // r24
        }
        {
            // Range: 0x802AAC40 -> 0x802AACC0
            // Local variables
            int i; // r27
        }
    }
    {
        // Range: 0x802AB1B0 -> 0x802AB274
        // Local variables
        class EventActionDispatcher_SetGameState params; // r1+0x8
    }

    // References
    // -> bool gExitAfterPause;
    // -> unsigned int gSceneFrameCount;
    // -> unsigned int gFrameCount;
    // -> static int ostrich_delay;
    // -> class callback text_cb;
    // -> class xColor g_WHITE;
    // -> class xColor g_BLACK;
    // -> static class basic_rect screen_bounds;
    // -> static float gwait_time_secs;
    // -> static class Time w1;
    // -> static class Time w0;
    // -> static int splitscreenCount;
    // -> class zViewport viewports[4];
    // -> class zBombManager gBombManager;
    // -> class xGlobals * xglobals;
    // -> static float sAttractMode_timer;
    // -> static float gloop_net_time_secs;
    // -> static float gloop_time_secs;
    // -> static class Time gwait_time;
    // -> double secondsPerTick;
    // -> static class Time gloop_time;
    // -> static int gloop_ct;
    // -> static class Time t0;
    // -> static class Time t1;
    // -> float gRealTimeElapsed;
    // -> static int frameCount;
    // -> float sTimeElapsed;
    // -> class Time sTimeCurrent;
    // -> float dt;
    // -> long long startupTicks;
    // -> class Module * trcModule;
    // -> class zGlobals globals;
}
// Range: 0x802AB2F0 -> 0x802AB39C
int zGameIsPaused() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x802AB3A0 -> 0x802AB4F4
enum pause_ability zGameOkToPause() {
    // Local variables
    int startidx; // r1+0x8

    // References
    // -> class zGlobals globals;
}
// Range: 0x802AB500 -> 0x802AB54C
void zGamePause(enum eGameState state /* r31 */) {
}
// Range: 0x802AB550 -> 0x802AB634
bool zGamePauseIfPossible(enum eGameState state /* r31 */) {
}
// Range: 0x802AB640 -> 0x802AB91C
bool zGameUpdateMode() {
    {
        // Range: 0x802AB668 -> 0x802AB8F8
        // Local variables
        bool isCinematicRunning; // r0
        bool isSaveSystemBusy; // r0

        {
            // Range: 0x802AB69C -> 0x802AB75C
            // Local variables
            int startidx; // r1+0x8

            {
                // Range: 0x802AB6B0 -> 0x802AB730
                // Local variables
                int port; // r29
                class zPlayerInput * pad; // r29
            }
        }
        {
            // Range: 0x802AB760 -> 0x802AB8DC
            // Local variables
            char * nextScenePath; // r30
            unsigned int nextSceneID; // r27
            class zPortalPending & pendingPortal; // r28

            {
                // Range: 0x802AB7E8 -> 0x802AB800
                // Local variables
                unsigned int directionIdx; // r26
            }
            {
                // Range: 0x802AB844 -> 0x802AB8C8
                // Local variables
                int i; // r7
            }
        }
    }

    // References
    // -> static float sGameOverTimer;
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
// Range: 0x802AB920 -> 0x802ABC3C
void zGameInitPlayer(unsigned int theSceneID /* r20 */) {
    // Local variables
    class xEntAsset * asset; // r0
    int playerCount; // r0
    class xEntAsset * playerAssets[4]; // r1+0x20

    {
        // Range: 0x802AB950 -> 0x802AB974
        // Local variables
        int i; // r21

        {
            // Range: 0x802AB950 -> 0x802AB974
            // Local variables
            class xEntPlayerAsset & plyrasset; // r0
        }
    }
    {
        // Range: 0x802AB9A4 -> 0x802AB9A4
        // Local variables
        int ii; // r0
    }
    {
        // Range: 0x802AB9A4 -> 0x802ABA38
        // Local variables
        int iii; // r24

        {
            // Range: 0x802AB9A4 -> 0x802ABA38
            // Local variables
            class CharacterAssets * characterAsset; // r0
            unsigned long long characterAssetID; // r27:r28
            class xEntAsset * asset; // r26
        }
    }
    {
        // Range: 0x802ABA48 -> 0x802ABC18
        // Local variables
        int iiii; // r21
    }

    // References
    // -> class Scene * primaryScene;
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// Range: 0x802ABC40 -> 0x802ABEB0
static void zGameResetPlayerToSceneStart() {
    // Local variables
    class zDirection * portalDestination[4]; // r1+0x8
    unsigned int min; // r28

    {
        // Range: 0x802ABCB8 -> 0x802ABCD0
        // Local variables
        unsigned int i; // r28
    }
    {
        // Range: 0x802ABD10 -> 0x802ABE44
        // Local variables
        unsigned int i; // r27

        {
            // Range: 0x802ABD10 -> 0x802ABE44
            // Local variables
            class xEntFrame * frame; // r26
        }
    }

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class xGlobals * xglobals;
    // -> static unsigned int sPlayerMarkerStartTotal;
    // -> class zGlobals globals;
    // -> static unsigned long long sPlayerMarkerStartID[4];
}
// Range: 0x802ABEB0 -> 0x802ABF90
bool ShutdownCB() {
    // References
    // -> bool gSoundReadyToExit;
    // -> class xGlobals * xglobals;
    // -> class SaveData g_saveData;
    // -> class Module * trcModule;
    // -> bool gSysForceExit;
    // -> static bool saveBeforeShutdown;
}
