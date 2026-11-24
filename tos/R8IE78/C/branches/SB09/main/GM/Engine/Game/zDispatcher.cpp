/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zDispatcher.cpp
*/
class WorldType worlds[20]; // size: 0x4D8, address: 0x8076DF98
class LevelType levels[30]; // size: 0x7F8, address: 0x8076E470
short currentWorld; // size: 0x2, address: 0x8076EC68
short currentTask; // size: 0x2, address: 0x8076EC6A
short currentPointer; // size: 0x2, address: 0x8076EC6C
short maxLevel; // size: 0x2, address: 0x8076EC6E
static int warned; // size: 0x4, address: 0x8076EC70
// Range: 0x80199C50 -> 0x80199DE0
void zDispatcherParseINI(class xIniFile * ini /* r28 */) {
    // Local variables
    int idx; // r1+0x8

    {
        // Range: 0x80199C84 -> 0x80199DCC
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
// Range: 0x80199DE0 -> 0x80199E64
class Entity * Sext::zDispatcherAsset::Create(class EntityHandleBase * handle /* r29 */, class zDispatcherAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__15zDispatcherData;
}
// Range: 0x80199E70 -> 0x80199EB8
static void ZDSP_instInit(class zDispatcherData * dspdata /* r30 */, class xBaseAsset * bass /* r31 */) {
}
// signature: ZDSP_instReset(zDispatcherData *, zScene *)
// Range: 0x80199EC0 -> 0x80199F08
static void ZDSP_instReset(class zDispatcherData * dspdata /* r30 */) {
    // Local variables
    class zDispatcherAsset * hold_rawass; // r31
}
// signature: ZDSP_injectCmd(zDispatcherData *, en_DISPATCH_COMMAND, void *, void *, void *)
// Range: 0x80199F10 -> 0x80199FB8
void ZDSP_injectCmd(void * result /* r31 */) {
    // Local variables
    class st_ZDISPATCH_CONTEXT cmdctxt; // r1+0x8

    // References
    // -> static int warned;
}
// signature: ZDSP_elcb_event(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80199FC0 -> 0x8019B0B4
void ZDSP_elcb_event(class xBase * xb /* r30 */, class EventAny * genericParams /* r31 */) {
    // Local variables
    class zDispatcherData * dspdata; // reg65535

    {
        // Range: 0x8019A4DC -> 0x8019A50C
        // Local variables
        class xSubtitlesAsset * toParamWidgetPtr; // r3
        class Dispatcher_SubtitlesOn * params; // r0
    }
    {
        // Range: 0x8019A51C -> 0x8019A554
        // Local variables
        enum eGameStateCombined state; // r3
    }
    {
        // Range: 0x8019A584 -> 0x8019A66C
        // Local variables
        class zPlayerCheckPoint checkPoints[4]; // r1+0xA8
        class xBase * toParamWidgetPtr; // r26
        class EventActionStoreCheckPoint * params; // r0

        {
            // Range: 0x8019A5A8 -> 0x8019A620
            // Local variables
            class xGroup * pointerGroup; // r0

            {
                // Range: 0x8019A5BC -> 0x8019A620
                // Local variables
                int i; // r25

                {
                    // Range: 0x8019A5BC -> 0x8019A620
                    // Local variables
                    class pointer_asset * pointerAsset; // r24
                }
            }
        }
        {
            // Range: 0x8019A620 -> 0x8019A64C
            // Local variables
            class pointer_asset * pointerAsset; // r0
        }
    }
    {
        // Range: 0x8019A670 -> 0x8019A754
        // Local variables
        char name[8]; // r1+0x28
        class D3DRECT dstRect; // r1+0x70
        class D3DRECT rect; // r1+0x80
        class EventActionPlayMovie * params; // r0

        {
            // Range: 0x8019A6D0 -> 0x8019A754
            // Local variables
            enum movieSkippable isSkippable; // r8
        }
    }
    {
        // Range: 0x8019A77C -> 0x8019A79C
        // Local variables
        class EventActionDirection * params; // r0
    }
    {
        // Range: 0x8019A7C4 -> 0x8019A7F8
        // Local variables
        class EventActionSetZPlaneParams * params; // r0
    }
    {
        // Range: 0x8019A7FC -> 0x8019A82C
        // Local variables
        class EventActionSetFogStartEnd * params; // r0
    }
    {
        // Range: 0x8019A830 -> 0x8019A898
        // Local variables
        class EventActionSetFogColor * params; // r0
    }
    {
        // Range: 0x8019A89C -> 0x8019A8B0
        // Local variables
        int achNum; // r3
    }
    {
        // Range: 0x8019A8B4 -> 0x8019A9FC
        // Local variables
        class SaveDataHeader * headerPtr; // r0
        int timeSlot; // r26
        int percentSlot; // r25
        int nameSlot; // r24
        class EventActionSaveInfoToTextDepot * params; // r0

        {
            // Range: 0x8019A938 -> 0x8019A9FC
            // Local variables
            unsigned int sceneID; // r1+0x24
            char charBuffer[256]; // r1+0xE8
            char * levelName; // r5
            char nameID[18]; // r1+0x90
        }
    }
    {
        // Range: 0x8019AA00 -> 0x8019AA3C
        // Local variables
        class EventActionDispatcher_SetPlayerCharacter * params; // r0

        {
            // Range: 0x8019AA00 -> 0x8019AA38
            // Local variables
            class xCounter * counter; // r0
        }
    }
    {
        // Range: 0x8019AA3C -> 0x8019AA68
        // Local variables
        class EventActionPortal * params; // r0

        {
            // Range: 0x8019AA3C -> 0x8019AA64
            // Local variables
            class zPortal * portal; // r0
        }
    }
    {
        // Range: 0x8019AA68 -> 0x8019AAA4
        // Local variables
        class EventActionAllowAllPadActiveOnPressStart * params; // r0
    }
    {
        // Range: 0x8019AAA4 -> 0x8019AAE8
        // Local variables
        class EventActionResetPadStatus * params; // r0

        {
            // Range: 0x8019AAA4 -> 0x8019AADC
            // Local variables
            int player; // r24
        }
    }
    {
        // Range: 0x8019AB48 -> 0x8019AB90
        // Local variables
        int i; // r24
    }
    {
        // Range: 0x8019AB94 -> 0x8019ABB0
        // Local variables
        class EventActionLegacy * params; // r0
    }
    {
        // Range: 0x8019ABB0 -> 0x8019ABEC
        // Local variables
        class EventActionAllowDeviceLostSelection * params; // r0
    }
    {
        // Range: 0x8019ABEC -> 0x8019AC10
        // Local variables
        class hkVector4 newGravity; // r1+0x60
        class EventActionSetGravity * params; // r0
    }
    {
        // Range: 0x8019AC14 -> 0x8019AC28
        // Local variables
        class EventActionSetSplitScreenMode * params; // r0
    }
    {
        // Range: 0x8019AC2C -> 0x8019ACE0
        // Local variables
        class EventActionLightKitScene * params; // r0

        {
            // Range: 0x8019AC2C -> 0x8019ACE0
            // Local variables
            class LightKitSceneEntity * lks; // r24
            class EntityManager * entityMgr; // r24
        }
    }
    {
        // Range: 0x8019ACE8 -> 0x8019AD88
        // Local variables
        class EventActionSetDoF * params; // r0

        {
            // Range: 0x8019ACE8 -> 0x8019AD88
            // Local variables
            int viewportIndex; // r24

            {
                // Range: 0x8019ACE8 -> 0x8019AD88
                // Local variables
                class xCam * cam; // r0
            }
        }
    }
    {
        // Range: 0x8019ADB0 -> 0x8019AE0C
        // Local variables
        class EventActionEndOfLevel * params; // r0

        {
            // Range: 0x8019ADD8 -> 0x8019AE0C
            // Local variables
            class zPortal * portal; // r5
        }
    }
    {
        // Range: 0x8019AE10 -> 0x8019AE74
        // Local variables
        class xVec3 newFloor; // r1+0x54

        {
            // Range: 0x8019AE1C -> 0x8019AE74
            // Local variables
            int i; // r24
        }
    }
    {
        // Range: 0x8019AE84 -> 0x8019AEAC
        // Local variables
        class EventActionSetNearFar * params; // r0
    }
    {
        // Range: 0x8019AEFC -> 0x8019AF3C
        // Local variables
        int x; // r24
    }
    {
        // Range: 0x8019AF40 -> 0x8019AF94
        // Local variables
        class EventActionHealthF * params; // reg65535

        {
            // Range: 0x8019AF4C -> 0x8019AF94
            // Local variables
            int x; // r24
        }
    }
    {
        // Range: 0x8019AF98 -> 0x8019AFC4
        // Local variables
        class EventActionDamagePlayer * params; // r0
    }
    {
        // Range: 0x8019AFDC -> 0x8019AFEC
        // Local variables
        class EventActionSwitchToBW * params; // r0
    }

    // References
    // -> short maxLevel;
    // -> class Scene * primaryScene;
    // -> class xTextDepot gTextDepot;
    // -> class Module * trcModule;
    // -> class zViewport viewports[4];
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// signature: zDispatcher_FindLevelIndex(unsigned int)
// Range: 0x8019B0C0 -> 0x8019B110
short zDispatcher_FindLevelIndex() {
    {
        // Range: 0x8019B0C4 -> 0x8019B108
        // Local variables
        short i; // r7
    }

    // References
    // -> class LevelType levels[30];
    // -> short maxLevel;
}
// signature: zDispatcher_FindLevelIDByIndex(int)
// Range: 0x8019B110 -> 0x8019B140
unsigned int zDispatcher_FindLevelIDByIndex() {
    // References
    // -> class LevelType levels[30];
    // -> short maxLevel;
}
// signature: zDispatcher_FindLevelStrByIndex(int)
// Range: 0x8019B140 -> 0x8019B184
char * zDispatcher_FindLevelStrByIndex() {
    // References
    // -> class LevelType levels[30];
    // -> short maxLevel;
}
