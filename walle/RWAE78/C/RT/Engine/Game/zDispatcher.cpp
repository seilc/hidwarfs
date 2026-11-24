/*
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zDispatcher.cpp
*/
class _OGDispatcherSchema _OGDispatcherschema; // size: 0x18, address: 0x807F8EB8
class SchemaRegistrator _OGDispatcherschemaReg; // size: 0x8, address: 0x807F8ED0
static int g_zdsp_init; // size: 0x4, address: 0x807F8ED8
static class st_ZDISPATCH_DEPOT g_zdsp_depot; // size: 0x8, address: 0x807F8EE0
class WorldType worlds[20]; // size: 0x4D8, address: 0x807F8EE8
class LevelType levels[30]; // size: 0x78, address: 0x807F93C0
short currentWorld; // size: 0x2, address: 0x807F9438
short currentTask; // size: 0x2, address: 0x807F943A
short currentPointer; // size: 0x2, address: 0x807F943C
short maxLevel; // size: 0x2, address: 0x807F943E
static int warned; // size: 0x4, address: 0x807F9440
// Range: 0x801FE1B0 -> 0x801FE1C0
void World::_OGDispatcherEntity::Deactivate() {
}
// Range: 0x801FE1C0 -> 0x801FE210
void World::_OGDispatcherEntity::Destroy(class _OGDispatcherEntity * this /* r31 */) {
}
// signature: World::_OGDispatcherSchema::Fix(World::Asset *, long, int)
// Range: 0x801FE270 -> 0x801FE278
void World::_OGDispatcherSchema::Fix() {
}
// signature: World::_OGDispatcherSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801FE280 -> 0x801FE2CC
class EntityStub * World::_OGDispatcherSchema::CreateStub(class _OGDispatcherSchema * this /* r31 */) {
}
// signature: World::_OGDispatcherSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x801FE2D0 -> 0x801FE2E8
void World::_OGDispatcherSchema::DestroyStub() {
}
// signature: World::_OGDispatcherSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801FE2F0 -> 0x801FE354
class Entity * World::_OGDispatcherSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World19_OGDispatcherEntity;
}
// Range: 0x801FE3A0 -> 0x801FE4B0
void zDispatcherParseINI(class xIniFile * ini /* r31 */) {
    // Local variables
    char * value; // r3
    char * ltok; // r1+0x8
    char nonConstValue[256]; // r1+0x10
    char * tok; // r7

    // References
    // -> class LevelType levels[30];
    // -> short maxLevel;
    // -> short currentPointer;
    // -> short currentTask;
    // -> short currentWorld;
    // -> class WorldType worlds[20];
}
// Range: 0x801FE4B0 -> 0x801FE4B4
void zDispatcher_Startup() {
}
// Range: 0x801FE4C0 -> 0x801FE4C4
void zDispatcher_Shutdown() {
}
// signature: zDispatcher_preScenePrepare(xBase *, zScene *, void *)
// Range: 0x801FE4D0 -> 0x801FE51C
class xBase * zDispatcher_preScenePrepare(class xBase * b /* r31 */) {
}
// Range: 0x801FE520 -> 0x801FE550
void zDispatcher_scenePrepare() {
    // Local variables
    class st_ZDISPATCH_DEPOT * depot; // r3

    // References
    // -> static class st_ZDISPATCH_DEPOT g_zdsp_depot;
    // -> static int g_zdsp_init;
}
// Range: 0x801FE550 -> 0x801FE57C
void zDispatcher_sceneFinish() {
    // Local variables
    class st_ZDISPATCH_DEPOT * depot; // r3

    // References
    // -> static class st_ZDISPATCH_DEPOT g_zdsp_depot;
    // -> static int g_zdsp_init;
}
// Range: 0x801FE580 -> 0x801FE600
class st_ZDISPATCH_DATA * zDispatcher_memPool(int cnt /* r29 */) {
    // Local variables
    class st_ZDISPATCH_DATA * pool; // r31
    class st_ZDISPATCH_DEPOT * depot; // r30

    // References
    // -> static class st_ZDISPATCH_DEPOT g_zdsp_depot;
}
// signature: zDispatcher_getInst(st_ZDISPATCH_DATA *, int)
// Range: 0x801FE600 -> 0x801FE60C
class st_ZDISPATCH_DATA * zDispatcher_getInst() {
}
// Range: 0x801FE610 -> 0x801FE668
void zDispatcher_Init(class st_ZDISPATCH_DATA * dspdata /* r30 */, class xBaseAsset * bass /* r31 */) {
}
// signature: zDispatcher_InitDep(st_ZDISPATCH_DATA *, zScene *)
// Range: 0x801FE670 -> 0x801FE674
void zDispatcher_InitDep() {
}
// signature: zDispatcher_Save(st_ZDISPATCH_DATA *, xSerial *)
// Range: 0x801FE680 -> 0x801FE684
void zDispatcher_Save() {
}
// signature: zDispatcher_Load(st_ZDISPATCH_DATA *, xSerial *)
// Range: 0x801FE690 -> 0x801FE694
void zDispatcher_Load() {
}
// signature: ZDSP_doCommand(st_ZDISPATCH_DATA *, st_ZDISPATCH_CONTEXT *)
// Range: 0x801FE6A0 -> 0x801FE7A8
static int ZDSP_doCommand() {
    // Local variables
    enum en_DISPATCH_COMMAND cmd; // r5
    void * indata; // r6
    void * result; // r31

    // References
    // -> class zGlobals globals;
    // -> static int warned;
}
// signature: ZDSP_elcb_event(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801FE7B0 -> 0x801FF8B4
void ZDSP_elcb_event(class xBase * xb /* r28 */, class EventAny * genericParams /* r27 */) {
    // Local variables
    class st_ZDISPATCH_DATA * dspdata; // reg65535

    {
        // Range: 0x801FED50 -> 0x801FED88
        // Local variables
        class EventActionDispatcher_PadCfg_Preset * params; // r0
    }
    {
        // Range: 0x801FEE18 -> 0x801FEE40
        // Local variables
        class EventActionDispatcher_SetGameState * params; // r0
    }
    {
        // Range: 0x801FEE6C -> 0x801FEE78
        // Local variables
        class EventActionDispatcher_SetPauseType * params; // r0
    }
    {
        // Range: 0x801FEF50 -> 0x801FF034
        // Local variables
        class zPlayerCheckPoint checkPoints[4]; // r1+0xE8
        class xBase * toParamWidgetPtr; // r9
        class EventActionStoreCheckPoint * params; // r0

        {
            // Range: 0x801FEF74 -> 0x801FEFE8
            // Local variables
            class xGroup * pointerGroup; // r0

            {
                // Range: 0x801FEF88 -> 0x801FEFA8
                // Local variables
                int i; // r10

                {
                    // Range: 0x801FEF88 -> 0x801FEFA8
                    // Local variables
                    class pointer_asset * pointerAsset; // r7
                }
            }
        }
        {
            // Range: 0x801FEFE8 -> 0x801FF014
            // Local variables
            class pointer_asset * pointerAsset; // r0
        }
    }
    {
        // Range: 0x801FF038 -> 0x801FF0D8
        // Local variables
        char name[8]; // r1+0x38
        class D3DRECT dstRect; // r1+0xB0
        class D3DRECT rect; // r1+0xC0
        class EventActionPlayMovie * params; // r0
    }
    {
        // Range: 0x801FF100 -> 0x801FF120
        // Local variables
        class EventActionDirection * params; // r0
    }
    {
        // Range: 0x801FF158 -> 0x801FF190
        // Local variables
        class EventActionSetZPlaneParams * params; // r0
    }
    {
        // Range: 0x801FF194 -> 0x801FF1B8
        // Local variables
        class EventActionSetFogStartEnd * params; // r0
    }
    {
        // Range: 0x801FF1BC -> 0x801FF220
        // Local variables
        class EventActionSetFogColor * params; // r0
    }
    {
        // Range: 0x801FF224 -> 0x801FF240
        // Local variables
        int achNum; // r3
        class EventActionAwardAchievement * params; // r0
    }
    {
        // Range: 0x801FF244 -> 0x801FF3D0
        // Local variables
        class SaveDataHeader * headerPtr; // r0
        int timeSlot; // r27
        int percentSlot; // r28
        int nameSlot; // r29
        int saveSlot; // r0
        class EventActionSaveInfoToTextDepot * params; // r0

        {
            // Range: 0x801FF2B8 -> 0x801FF3D0
            // Local variables
            char charBuffer[256]; // r1+0x128
            char * levelName; // r3
            char nameID[18]; // r1+0xD0
        }
    }
    {
        // Range: 0x801FF3D4 -> 0x801FF410
        // Local variables
        class EventActionDispatcher_SetPlayerCharacter * params; // r0

        {
            // Range: 0x801FF3D4 -> 0x801FF40C
            // Local variables
            class xCounter * counter; // r0
        }
    }
    {
        // Range: 0x801FF410 -> 0x801FF43C
        // Local variables
        class EventActionPortal * params; // r0

        {
            // Range: 0x801FF410 -> 0x801FF438
            // Local variables
            class zPortal * portal; // r0
        }
    }
    {
        // Range: 0x801FF43C -> 0x801FF478
        // Local variables
        class EventActionAllowAllPadActiveOnPressStart * params; // r0
    }
    {
        // Range: 0x801FF478 -> 0x801FF4BC
        // Local variables
        class EventActionResetPadStatus * params; // r0

        {
            // Range: 0x801FF478 -> 0x801FF4B0
            // Local variables
            int player; // r17
        }
    }
    {
        // Range: 0x801FF51C -> 0x801FF550
        // Local variables
        int i; // r17
    }
    {
        // Range: 0x801FF564 -> 0x801FF584
        // Local variables
        class EventActionLegacy * params; // r0
    }
    {
        // Range: 0x801FF584 -> 0x801FF5C0
        // Local variables
        class EventActionAllowDeviceLostSelection * params; // r0
    }
    {
        // Range: 0x801FF5C0 -> 0x801FF5E8
        // Local variables
        class hkVector4 newGravity; // r1+0xA0
        class EventActionSetGravity * params; // r0
    }
    {
        // Range: 0x801FF5EC -> 0x801FF600
        // Local variables
        class EventActionSetSplitScreenMode * params; // r0
    }
    {
        // Range: 0x801FF604 -> 0x801FF64C
        // Local variables
        class EventActionDisableSpecialCamera * params; // r0
    }
    {
        // Range: 0x801FF650 -> 0x801FF698
        // Local variables
        class EventActionEnableSpecialCamera * params; // r0
    }
    {
        // Range: 0x801FF69C -> 0x801FF76C
        // Local variables
        class EventActionLightKitScene * params; // r0

        {
            // Range: 0x801FF69C -> 0x801FF76C
            // Local variables
            class LightKitSceneEntity * lks; // r17
            class Scene * scene; // r18
            class ScadMgr * scadMgr; // r17
        }
    }
    {
        // Range: 0x801FF770 -> 0x801FF7D4
        // Local variables
        class EventActionSetDoF * params; // r0

        {
            // Range: 0x801FF770 -> 0x801FF7C4
            // Local variables
            int viewportIndex; // r17

            {
                // Range: 0x801FF770 -> 0x801FF7C4
                // Local variables
                class xCam * cam; // r0
            }
        }
    }

    // References
    // -> short maxLevel;
    // -> class Scene * primaryScene;
    // -> class xTextDepot gTextDepot;
    // -> class SaveData g_saveData;
    // -> class zViewport viewports[4];
    // -> class xGlobals * xglobals;
    // -> enum eGameMode gGameMode;
    // -> bool portalling;
    // -> class zGlobals globals;
}
// signature: zDispatcher_FindLevelIndex(unsigned int)
// Range: 0x801FF8C0 -> 0x801FF934
short zDispatcher_FindLevelIndex() {
    // Local variables
    char sceneName[4]; // r1+0x8

    {
        // Range: 0x801FF8E8 -> 0x801FF918
        // Local variables
        short i; // r5
    }

    // References
    // -> class LevelType levels[30];
    // -> short maxLevel;
}
