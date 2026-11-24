/*
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zGame.cpp
*/
unsigned int gzAsyncRenderDisable; // size: 0x4, address: 0x807F94D0
static unsigned long long sPlayerMarkerStartID[4]; // size: 0x20, address: 0x807F94D8
static unsigned int sPlayerMarkerStartTotal; // size: 0x4, address: 0x807F94F8
static float sGameOverTimer; // size: 0x4, address: 0x807F94FC
float sTimeElapsed; // size: 0x4, address: 0x807F9500
float gRealTimeElapsed; // size: 0x4, address: 0x807F9504
class Time sTimeCurrent; // size: 0x8, address: 0x807F9508
unsigned int gLevelChanged; // size: 0x4, address: 0x807F9510
bool gExitAfterPause; // size: 0x1, address: 0x807F9514
static int g_hiphopReloadHIP; // size: 0x4, address: 0x807F9518
static int g_hiphopForcePortal; // size: 0x4, address: 0x807F951C
static class xColor_tag sFadeColor; // size: 0x4, address: 0x807F9520
unsigned int gzAsyncSceneID; // size: 0x4, address: 0x807F9524
char gzAsyncScene[128]; // size: 0x80, address: 0x807F9528
class xColor_tag black; // size: 0x4, address: 0x807F95A8
class xColor_tag clear; // size: 0x4, address: 0x807F95AC
unsigned int gSoak; // size: 0x4, address: 0x807F95B0
char * allsoaklevels[80]; // size: 0x140, address: 0x807F95B8
char * * soaklevels; // size: 0x4, address: 0x807F96F8
int enableMuttonBasher; // size: 0x4, address: 0x80704C88
int enableMenuMasher; // size: 0x4, address: 0x807F96FC
int enableAudioAnnihilator; // size: 0x4, address: 0x80704C8C
int enableResetinator; // size: 0x4, address: 0x80704C90
int enableSuperSoaker; // size: 0x4, address: 0x807F9700
class xPortalAsset dummyPortalAsset; // size: 0x38, address: 0x807F9708
class zPortal dummyPortal; // size: 0x28, address: 0x807F9740
int simpleObjectTID; // size: 0x4, address: 0x807F9768
int floatingCollectibleTID; // size: 0x4, address: 0x807F976C
int pointJumpTID; // size: 0x4, address: 0x807F9770
int pipeTID; // size: 0x4, address: 0x807F9774
int tightropeTID; // size: 0x4, address: 0x807F9778
int carryableObjectTID; // size: 0x4, address: 0x807F977C
int triggerTID; // size: 0x4, address: 0x807F9780
int soundEntityTID; // size: 0x4, address: 0x807F9784
int missionTID; // size: 0x4, address: 0x807F9788
static enum eInitGuts_Stage curStage; // size: 0x4, address: 0x807F978C
static bool firstRun; // size: 0x1, address: 0x80704C94
int sFrameRateMonitorDesiredFPS; // size: 0x4, address: 0x807F9790
static enum eGameSetupState gameSetupState; // size: 0x4, address: 0x807F9794
static bool threadInProgress; // size: 0x1, address: 0x807F9798
static class Time t0; // size: 0x8, address: 0x807F97A0
static class Time t1; // size: 0x8, address: 0x807F97A8
static class Time w0; // size: 0x8, address: 0x807F97B0
static class Time w1; // size: 0x8, address: 0x807F97B8
static class Time gloop_time; // size: 0x8, address: 0x807F97C0
static class Time gwait_time; // size: 0x8, address: 0x807F97C8
static int gloop_ct; // size: 0x4, address: 0x807F97D0
static float gloop_time_secs; // size: 0x4, address: 0x807F97D4
static float gwait_time_secs; // size: 0x4, address: 0x807F97D8
static float gloop_net_time_secs; // size: 0x4, address: 0x807F97DC
float snd_radius; // size: 0x4, address: 0x80704C98
unsigned int gLastProfileDump; // size: 0x4, address: 0x807F97E0
static int ostrich_delay; // size: 0x4, address: 0x807F97E4
bool triggerAutoSave; // size: 0x1, address: 0x807F97E8
int waitFewFrames; // size: 0x4, address: 0x807F97EC
static int frameCount; // size: 0x4, address: 0x807F97F0
static float sAttractMode_timer; // size: 0x4, address: 0x807F97F4
static float lastTime; // size: 0x4, address: 0x807F97FC
static float presentTime; // size: 0x4, address: 0x807F9800
static char * TXT_DEMO; // size: 0x4, address: 0x807F9804
static class xtextbox tb; // size: 0x88, address: 0x807F9808
unsigned int g_HackIngredientUIDs[36]; // size: 0x90, address: 0x80704CA0
// Range: 0x80203880 -> 0x80203A30
static bool zGameInit_Guts(unsigned int theSceneID /* r29 */, char * fullSceneName /* r28 */) {
    {
        // Range: 0x802038A4 -> 0x80203A10
        // Local variables
        enum sSaveDataRequest curRequest; // r0
        int i; // r28
        bool sceneIsInit; // r0
    }

    // References
    // -> class SaveData g_saveData;
    // -> class xGlobals * xglobals;
    // -> class zViewport viewports[4];
    // -> class zGlobals globals;
    // -> static int g_hiphopForcePortal;
    // -> static int g_hiphopReloadHIP;
    // -> static enum eInitGuts_Stage curStage;
}
// Range: 0x80203A30 -> 0x80203C24
bool zGameInit(unsigned int theSceneID /* r28 */, char * fullSceneName /* r29 */) {
    {
        // Range: 0x80203A88 -> 0x80203B08
        // Local variables
        int i; // r6
    }

    // References
    // -> int missionTID;
    // -> int soundEntityTID;
    // -> int triggerTID;
    // -> int carryableObjectTID;
    // -> int tightropeTID;
    // -> int pipeTID;
    // -> int pointJumpTID;
    // -> int floatingCollectibleTID;
    // -> int simpleObjectTID;
    // -> class zOneLinerSystem gOneLinerSystem;
    // -> class SaveData g_saveData;
    // -> class zGlobals globals;
    // -> class xGlobals * xglobals;
    // -> class xColor_tag clear;
    // -> class xColor_tag black;
    // -> static class xColor_tag sFadeColor;
    // -> static bool firstRun;
}
// Range: 0x80203C30 -> 0x80203CBC
void zGameExit() {
    // References
    // -> static int g_hiphopReloadHIP;
    // -> class zViewport viewports[4];
    // -> class SaveData g_saveData;
}
// Range: 0x80203CC0 -> 0x8020408C
bool zGameSetup() {
    // References
    // -> class zViewport viewports[4];
    // -> unsigned int gLevelChanged;
    // -> class ScreenRenderTarget TheScreenTarget;
    // -> class zNGLoadingScreen gNGLoadingScreen;
    // -> static bool threadInProgress;
    // -> class zGlobals globals;
    // -> static enum eGameSetupState gameSetupState;
}
// Range: 0x80204090 -> 0x80204120
void zGameLoopStartup() {
    // References
    // -> unsigned int gSceneFrameCount;
    // -> int numResets;
    // -> class zGlobals globals;
    // -> static int ostrich_delay;
}
// Range: 0x80204120 -> 0x80204E44
enum UnloadSceneEnum zGameLoopBody() {
    // Local variables
    bool shouldSwitchScene; // r0

    {
        // Range: 0x8020448C -> 0x80204498
        // Local variables
        int trcPort; // r22
    }
    {
        // Range: 0x802044B4 -> 0x80204790
        {
            // Range: 0x80204500 -> 0x80204688
            // Local variables
            int i; // r26

            {
                // Range: 0x80204500 -> 0x80204688
                // Local variables
                bool padActive; // r0
                class zPlayerInput * pad; // r25
            }
        }
        {
            // Range: 0x80204694 -> 0x80204790
            // Local variables
            class EventActionDispatcher_SetGameState params; // r1+0xC

            {
                // Range: 0x802046A4 -> 0x80204724
                // Local variables
                int i; // r22
            }
        }
    }
    {
        // Range: 0x802047A8 -> 0x80204D34
        // Local variables
        int isPaused; // r0

        {
            // Range: 0x802047C0 -> 0x802047F0
            // Local variables
            int i; // r23
        }
        {
            // Range: 0x80204848 -> 0x802048B8
            // Local variables
            int i; // r25
        }
    }
    {
        // Range: 0x80204D80 -> 0x80204DB8
        // Local variables
        class EventActionDispatcher_SetGameState params; // r1+0x8
    }

    // References
    // -> int gGameState;
    // -> bool gExitAfterPause;
    // -> unsigned int gSceneFrameCount;
    // -> unsigned int gFrameCount;
    // -> static int ostrich_delay;
    // -> class callback text_cb;
    // -> static class basic_rect screen_bounds;
    // -> class xColor_tag g_WHITE;
    // -> class xColor_tag g_BLACK;
    // -> static float gwait_time_secs;
    // -> static class Time w1;
    // -> static class Time w0;
    // -> static int splitscreenCount;
    // -> class zViewport viewports[4];
    // -> enum eGameMode gGameMode;
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
    // -> class SaveData g_saveData;
    // -> class zGlobals globals;
}
// Range: 0x80204E90 -> 0x80204E94
void zGameLoopShutdown() {
}
// Range: 0x80204EA0 -> 0x80204F28
int zGameIsPaused() {
    // References
    // -> class zGlobals globals;
    // -> enum eGameMode gGameMode;
}
// Range: 0x80204F30 -> 0x80205000
void zGamePauseIfPossible(enum ePauseState state /* r31 */) {
    // References
    // -> enum eGameMode gGameMode;
    // -> bool portalling;
}
// Range: 0x80205000 -> 0x80205230
bool zGameUpdateMode() {
    {
        // Range: 0x80205040 -> 0x802050FC
        // Local variables
        int startidx; // r1+0x8

        {
            // Range: 0x80205074 -> 0x802050E8
            // Local variables
            int port; // r30
            class zPlayerInput * pad; // r30
        }
    }
    {
        // Range: 0x80205100 -> 0x80205188
        // Local variables
        char * nextScenePath; // r27
        unsigned int nextSceneID; // r28
        class zPortalPending * pendingPortal; // r29

        {
            // Range: 0x80205144 -> 0x8020515C
            // Local variables
            unsigned int directionIdx; // r26
        }
    }

    // References
    // -> static float sGameOverTimer;
    // -> static unsigned int sPlayerMarkerStartTotal;
    // -> static unsigned long long sPlayerMarkerStartID[4];
    // -> class zGlobals globals;
    // -> float sTimeElapsed;
    // -> int gGameState;
    // -> enum eGameMode gGameMode;
}
// Range: 0x80205230 -> 0x80205234
void zGameScreenTransitionBegin() {
}
// Range: 0x80205240 -> 0x802052A4
void zGameScreenTransitionUpdate(float percentComplete /* f31 */, char * msg /* r31 */) {
    // References
    // -> class zGlobals globals;
}
// signature: zGameScreenTransitionUpdate(float, char *, unsigned char *)
// Range: 0x802052B0 -> 0x80205314
void zGameScreenTransitionUpdate() {
    {
        // Range: 0x802052E8 -> 0x802052EC
        // Local variables
        int i; // r31
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x80205320 -> 0x80205324
void zGameScreenTransitionEnd() {
}
// signature: zGameInitPlayer(unsigned int)
// Range: 0x80205330 -> 0x8020545C
void zGameInitPlayer() {
    // Local variables
    class xEntAsset * asset; // r0
    int playerCount; // r0
    class xEntAsset * playerAssets[4]; // r1+0x10

    {
        // Range: 0x8020535C -> 0x80205380
        // Local variables
        int i; // r29

        {
            // Range: 0x8020535C -> 0x80205380
            // Local variables
            class xEntPlayerAsset * plyrasset; // r0
        }
    }
    {
        // Range: 0x802053AC -> 0x802053AC
        // Local variables
        int ii; // r0
    }
    {
        // Range: 0x802053AC -> 0x80205438
        // Local variables
        int iii; // r25

        {
            // Range: 0x802053AC -> 0x80205438
            // Local variables
            class CharacterAssets * characterAsset; // r0
            unsigned long long characterAssetID; // r0:r0
            unsigned int size; // r1+0x8
            class xEntAsset * asset; // r24
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// Range: 0x80205460 -> 0x80205464
void zGameSetupPlayer() {
}
// Range: 0x80205470 -> 0x802056B8
static void zGameResetPlayerToSceneStart() {
    // Local variables
    class zDirection * portalDestination[4]; // r1+0x8
    unsigned int min; // r28

    {
        // Range: 0x802054C0 -> 0x802054D8
        // Local variables
        unsigned int i; // r28
    }
    {
        // Range: 0x80205518 -> 0x8020564C
        // Local variables
        unsigned int i; // r27

        {
            // Range: 0x80205518 -> 0x8020564C
            // Local variables
            class xEntFrame * frame; // r26
        }
    }

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class xGlobals * xglobals;
    // -> static unsigned int sPlayerMarkerStartTotal;
    // -> static unsigned long long sPlayerMarkerStartID[4];
}
// signature: GetMissionCompleteInfoInternal(xBase *, zScene *, void *)
// Range: 0x802056C0 -> 0x80205720
class xBase * GetMissionCompleteInfoInternal() {
    // Local variables
    class zMission * mission; // r0
    class MissionCompleteInfo * missionInfo; // r0
}
// Range: 0x80205720 -> 0x8020588C
unsigned int zGamePercentComplete() {
    // Local variables
    class MissionCompleteInfo missionInfo; // r1+0x8
    unsigned int totalMissions; // r10
    unsigned int completeIngredients; // r31
    unsigned int totalIngredients; // r30
    unsigned int completeCharms; // r29
    unsigned int totalCharms; // r28
    class zCommonPlayer * player; // r27
    class xCounter * pTempCount; // r0

    {
        // Range: 0x80205784 -> 0x802057A8
        // Local variables
        unsigned int i; // r28
    }

    // References
    // -> unsigned int g_HackIngredientUIDs[36];
    // -> class xGlobals * xglobals;
    // -> int missionTID;
}
// Range: 0x80205890 -> 0x80205924
bool zGameCheckAllComplete(bool sendMessage /* r27 */) {
    {
        // Range: 0x802058B0 -> 0x80205904
        {
            // Range: 0x802058BC -> 0x802058F8
            // Local variables
            int i; // r27
        }
    }

    // References
    // -> static class st_ZDISPATCH_DEPOT g_zdsp_depot;
}
