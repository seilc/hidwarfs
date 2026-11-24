/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zDispatcher.cpp
*/
class WorldType worlds[20]; // size: 0x4D8, address: 0x8083FDF8
class LevelType levels[30]; // size: 0x7F8, address: 0x808402D0
short currentWorld; // size: 0x2, address: 0x80840AC8
short currentTask; // size: 0x2, address: 0x80840ACA
short currentPointer; // size: 0x2, address: 0x80840ACC
short maxLevel; // size: 0x2, address: 0x80840ACE
static int warned; // size: 0x4, address: 0x80840AD0
// Range: 0x802A7AD0 -> 0x802A7C60
void zDispatcherParseINI(class xIniFile * ini /* r28 */) {
    // Local variables
    int idx; // r1+0x8

    {
        // Range: 0x802A7B04 -> 0x802A7C48
        // Local variables
        int length; // r0
        char * value; // r26
    }

    // References
    // -> short maxLevel;
    // -> short currentPointer;
    // -> short currentTask;
    // -> class LevelType levels[30];
    // -> short currentWorld;
    // -> class WorldType worlds[20];
}
// Range: 0x802A7C60 -> 0x802A7D48
class Entity * Sext::zDispatcherAsset::Create(class EntityHandleBase * handle /* r29 */, class zDispatcherAsset * asset /* r30 */) {
    // Local variables
    class xBaseAsset * bass; // r0

    // References
    // -> struct {} __vt__15zDispatcherData;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: ZDSP_doCommand(zDispatcherData *, st_ZDISPATCH_CONTEXT *)
// Range: 0x802A7D50 -> 0x802A7DF0
static int ZDSP_doCommand() {
    // Local variables
    enum en_DISPATCH_COMMAND cmd; // r5
    void * result; // r31

    // References
    // -> static int warned;
}
// signature: ZDSP_elcb_event(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x802A7DF0 -> 0x802A9968
void ZDSP_elcb_event(class xBase * xb /* r30 */, class EventAny * genericParams /* r29 */) {
    // Local variables
    class zDispatcherData * dspdata; // reg65535

    {
        // Range: 0x802A8544 -> 0x802A857C
        // Local variables
        class EventActionDispatcher_PadCfg_Preset * params; // r0
    }
    {
        // Range: 0x802A8580 -> 0x802A85BC
        // Local variables
        class xSubtitlesAsset * toParamWidgetPtr; // r3
        class Dispatcher_SubtitlesOn * params; // r0
    }
    {
        // Range: 0x802A85CC -> 0x802A85F4
        // Local variables
        class EventActionDispatcher_SetGameState * params; // r0
    }
    {
        // Range: 0x802A8604 -> 0x802A8610
        // Local variables
        class EventActionDispatcher_SetPauseType * params; // r0
    }
    {
        // Range: 0x802A87CC -> 0x802A88B8
        // Local variables
        class zPlayerCheckPoint checkPoints[4]; // r1+0xE8
        class xBase * toParamWidgetPtr; // r9
        class EventActionStoreCheckPoint * params; // r0

        {
            // Range: 0x802A87F0 -> 0x802A8868
            // Local variables
            class xGroup * pointerGroup; // r0

            {
                // Range: 0x802A8804 -> 0x802A8828
                // Local variables
                int i; // r10

                {
                    // Range: 0x802A8804 -> 0x802A8828
                    // Local variables
                    class pointer_asset * pointerAsset; // r7
                }
            }
        }
        {
            // Range: 0x802A8868 -> 0x802A8898
            // Local variables
            class pointer_asset * pointerAsset; // r0
        }
    }
    {
        // Range: 0x802A88BC -> 0x802A89D8
        // Local variables
        class xSubtitlesAsset * toParamWidgetPtr; // r3
        char name[8]; // r1+0x28
        class D3DRECT dstRect; // r1+0xB0
        class D3DRECT rect; // r1+0xC0
        class EventActionPlayMovie * params; // r0

        {
            // Range: 0x802A891C -> 0x802A899C
            // Local variables
            enum movieSkippable isSkippable; // r6
        }
    }
    {
        // Range: 0x802A8A00 -> 0x802A8A20
        // Local variables
        class EventActionDirection * params; // r0
    }
    {
        // Range: 0x802A8A48 -> 0x802A8A84
        // Local variables
        class EventActionSetZPlaneParams * params; // r0
    }
    {
        // Range: 0x802A8A88 -> 0x802A8AB0
        // Local variables
        class EventActionSetFogStartEnd * params; // r0
    }
    {
        // Range: 0x802A8AB4 -> 0x802A8B20
        // Local variables
        class EventActionSetFogColor * params; // r0
    }
    {
        // Range: 0x802A8B24 -> 0x802A8B40
        // Local variables
        int achNum; // r3
        class EventActionAwardAchievement * params; // r0
    }
    {
        // Range: 0x802A8B44 -> 0x802A8CAC
        // Local variables
        class SaveDataHeader * headerPtr; // r0
        int timeSlot; // r29
        int percentSlot; // r30
        int nameSlot; // r31
        int saveSlot; // r0
        class EventActionSaveInfoToTextDepot * params; // r0

        {
            // Range: 0x802A8BC8 -> 0x802A8CAC
            // Local variables
            unsigned int sceneID; // r1+0x18
            char charBuffer[256]; // r1+0x128
            char * levelName; // r3
            char nameID[18]; // r1+0xD0
        }
    }
    {
        // Range: 0x802A8CB0 -> 0x802A8CEC
        // Local variables
        class EventActionDispatcher_SetPlayerCharacter * params; // r0

        {
            // Range: 0x802A8CB0 -> 0x802A8CE8
            // Local variables
            class xCounter * counter; // r0
        }
    }
    {
        // Range: 0x802A8CEC -> 0x802A8D18
        // Local variables
        class EventActionPortal * params; // r0

        {
            // Range: 0x802A8CEC -> 0x802A8D14
            // Local variables
            class zPortal * portal; // r0
        }
    }
    {
        // Range: 0x802A8D18 -> 0x802A8D54
        // Local variables
        class EventActionAllowAllPadActiveOnPressStart * params; // r0
    }
    {
        // Range: 0x802A8D54 -> 0x802A8D98
        // Local variables
        class EventActionResetPadStatus * params; // r0

        {
            // Range: 0x802A8D54 -> 0x802A8D8C
            // Local variables
            int player; // r23
        }
    }
    {
        // Range: 0x802A8DF8 -> 0x802A8E30
        // Local variables
        int i; // r23
    }
    {
        // Range: 0x802A8E44 -> 0x802A8E5C
        // Local variables
        class EventActionLegacy * params; // r0
    }
    {
        // Range: 0x802A8E5C -> 0x802A8E98
        // Local variables
        class EventActionAllowDeviceLostSelection * params; // r0
    }
    {
        // Range: 0x802A8E98 -> 0x802A8EC4
        // Local variables
        class hkVector4 newGravity; // r1+0xA0
        class EventActionSetGravity * params; // r0
    }
    {
        // Range: 0x802A8EC8 -> 0x802A8EDC
        // Local variables
        class EventActionSetSplitScreenMode * params; // r0
    }
    {
        // Range: 0x802A8EE0 -> 0x802A8F18
        // Local variables
        class EventActionDisableSpecialCamera * params; // r0
    }
    {
        // Range: 0x802A8F1C -> 0x802A8F54
        // Local variables
        class EventActionEnableSpecialCamera * params; // r0
    }
    {
        // Range: 0x802A8F58 -> 0x802A9024
        // Local variables
        class EventActionLightKitScene * params; // r0

        {
            // Range: 0x802A8F58 -> 0x802A9024
            // Local variables
            class LightKitSceneEntity * lks; // r23
            class Scene * scene; // r24
            class EntityManager * entityMgr; // r23
        }
    }
    {
        // Range: 0x802A9028 -> 0x802A90CC
        // Local variables
        class EventActionSetDoF * params; // r0

        {
            // Range: 0x802A9028 -> 0x802A90BC
            // Local variables
            int viewportIndex; // r23

            {
                // Range: 0x802A9028 -> 0x802A90BC
                // Local variables
                class xCam * cam; // r0
            }
        }
    }
    {
        // Range: 0x802A90F4 -> 0x802A926C
        // Local variables
        short curLevelIndex; // r0
        class zScaleform * endLevelMenu; // r23
        class zScript * script; // r24
        class zPortal * portal; // r23
        class EventActionEndOfLevel * params; // r0
    }
    {
        // Range: 0x802A9270 -> 0x802A9284
        // Local variables
        class EventActionOnOff * params; // r0
    }
    {
        // Range: 0x802A9288 -> 0x802A929C
        // Local variables
        class EventActionOnOff * params; // r0
    }
    {
        // Range: 0x802A92A0 -> 0x802A9404
        // Local variables
        class EventActionSetFollowDistances * params; // r0
    }
    {
        // Range: 0x802A9518 -> 0x802A96E8
        // Local variables
        float probability; // f1
        int health; // r8
        int bronze; // r7
        int silver; // r6
        int gold; // r5
        class xVec3 pos; // r1+0x94
        class EventActionGetBadge * params; // r0

        {
            // Range: 0x802A9518 -> 0x802A964C
            // Local variables
            class xBase * obj; // r0
        }
        {
            // Range: 0x802A9668 -> 0x802A96A8
            // Local variables
            class BadgePoint * bpasset; // r0
        }
    }
    {
        // Range: 0x802A96EC -> 0x802A9758
        // Local variables
        class xVec3 newFloor; // r1+0x88

        {
            // Range: 0x802A96F8 -> 0x802A972C
            // Local variables
            int i; // r7
        }
    }
    {
        // Range: 0x802A975C -> 0x802A9764
        // Local variables
        class EventActionOneFloat * params; // r0
    }
    {
        // Range: 0x802A9768 -> 0x802A9790
        // Local variables
        class EventActionSetNearFar * params; // r0
    }
    {
        // Range: 0x802A97E4 -> 0x802A97EC
        // Local variables
        int x; // r23
    }
    {
        // Range: 0x802A9828 -> 0x802A987C
        // Local variables
        class EventActionHealthF * params; // reg65535

        {
            // Range: 0x802A9834 -> 0x802A986C
            // Local variables
            int x; // r23
        }
    }
    {
        // Range: 0x802A9880 -> 0x802A98AC
        // Local variables
        class EventActionDamagePlayer * params; // r0
    }
    {
        // Range: 0x802A98B0 -> 0x802A98C0
        // Local variables
        class EventActionOneInt * params; // r0
    }
    {
        // Range: 0x802A98C4 -> 0x802A98D4
        // Local variables
        class EventActionSwitchToBW * params; // r0
    }
    {
        // Range: 0x802A98E4 -> 0x802A98F4
        // Local variables
        class EventActionScaleformFadeOut * param; // r0
    }
    {
        // Range: 0x802A98F4 -> 0x802A9910
        // Local variables
        class EventActionOneFloat * param; // r0
    }

    // References
    // -> bool shrapnelHackNoCollide;
    // -> float shrapnelHackQuickFadeTime;
    // -> bool shrapnelHackQuickFade;
    // -> class zStoryMoment * instance;
    // -> static unsigned int PLAYERAI_VAR_START_FOLLOW_DIST;
    // -> static unsigned int PLAYERAI_VAR_STOP_FOLLOW_DIST;
    // -> bool noPathNoFollow;
    // -> bool follow;
    // -> class zCheckpoint * currentActivePtr;
    // -> class zPlayerInventory inventory;
    // -> class Scene * primaryScene;
    // -> class LevelType levels[30];
    // -> short maxLevel;
    // -> class xTextDepot gTextDepot;
    // -> class Module * trcModule;
    // -> class zViewport viewports[4];
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// Range: 0x802A9970 -> 0x802A997C
short zDispatcher_GetNumLevels() {
    // References
    // -> short maxLevel;
}
// signature: zDispatcher_FindLevelIndex(unsigned int)
// Range: 0x802A9980 -> 0x802A99C8
short zDispatcher_FindLevelIndex() {
    {
        // Range: 0x802A9990 -> 0x802A99B0
        // Local variables
        short i; // r6
    }

    // References
    // -> class LevelType levels[30];
    // -> short maxLevel;
}
// signature: zDispatcher_FindLevelStrByIndex(int)
// Range: 0x802A99D0 -> 0x802A9A14
char * zDispatcher_FindLevelStrByIndex() {
    // References
    // -> class LevelType levels[30];
    // -> short maxLevel;
}
