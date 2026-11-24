/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zScene.cpp
*/
unsigned char HACK_BASETYPE; // size: 0x1, address: 0x80826388
static int roomCnt; // size: 0x4, address: 0x8082638C
static int bytesNeeded; // size: 0x4, address: 0x80826390
static int availOnDisk; // size: 0x4, address: 0x80826394
static int neededFiles; // size: 0x4, address: 0x80826398
static unsigned int enableScreenAdj; // size: 0x4, address: 0x8082639C
static float offsetx; // size: 0x4, address: 0x808263A0
static float offsety; // size: 0x4, address: 0x808263A4
static float oldOffsetx; // size: 0x4, address: 0x808263A8
static float oldOffsety; // size: 0x4, address: 0x808263AC
static float menuOldOffsetx; // size: 0x4, address: 0x808263B0
static float menuOldOffsety; // size: 0x4, address: 0x808263B4
static int sMemDepthSceneInit; // size: 0x4, address: 0x807B5058
static int sMemDepthSceneStart; // size: 0x4, address: 0x807B505C
static int sMemDepthJustHIPStart; // size: 0x4, address: 0x807B5060
static int sSceneMemDepthStack[2]; // size: 0x8, address: 0x808263B8
static int sSceneMemDepthStackTop; // size: 0x4, address: 0x807B5064
unsigned int gTransitionSceneID; // size: 0x4, address: 0x808263C0
static unsigned int s_baseTypeNeedsUpdate[64]; // size: 0x100, address: 0x807B5068
bool gInSceneResetOrInit; // size: 0x1, address: 0x808263C4
bool gInSceneSetup; // size: 0x1, address: 0x808263C5
static enum eSceneInitState sceneInitState; // size: 0x4, address: 0x808263C8
static unsigned int loadingScreenHash; // size: 0x4, address: 0x808263CC
static unsigned int theLoadSceneID; // size: 0x4, address: 0x808263D4
char * STR_ER01; // size: 0x4, address: 0x807B5180
bool g_firstTimeLoad; // size: 0x1, address: 0x807B5184
static char saveHeaderDesc[128]; // size: 0x80, address: 0x808263D8
static char saveHeaderDetails[128]; // size: 0x80, address: 0x80826458
int numResets; // size: 0x4, address: 0x808264D8
float gSceneUpdateTime; // size: 0x4, address: 0x808264DC
static unsigned int sSuddenMove; // size: 0x4, address: 0x808264E0
float zSceneUpdate_AfterPlayerUpdate_dt; // size: 0x4, address: 0x808264E4
static void (* zSceneSpecialRender_curFunc[2])(); // size: 0x8, address: 0x808264E8
static int zSceneSpecialRender_numFuncs; // size: 0x4, address: 0x808264F0
static bool gSwitchedPlayersOnInit; // size: 0x1, address: 0x808264F4
static unsigned int gLastSceneID; // size: 0x4, address: 0x808264F8
static class zScaleform * movie; // size: 0x4, address: 0x808264FC
static void (* fadeOutCB)(); // size: 0x4, address: 0x80826500
static float timer; // size: 0x4, address: 0x80826504
static enum State state; // size: 0x4, address: 0x80826508
// Range: 0x802420A0 -> 0x80242198
void zSceneStartLoadingScreen(unsigned int previousSceneID /* r28 */, unsigned int nextSceneID /* r29 */) {
    {
        // Range: 0x802420F4 -> 0x80242178
        // Local variables
        class LoadingScreen * loadingScreenAsset; // r3
    }

    // References
    // -> class zNGLoadingScreen gNGLoadingScreen;
    // -> static unsigned int loadingScreenHash;
}
// Range: 0x802421A0 -> 0x8024247C
void zSceneInit_Extravaganza() {
    // References
    // -> class BlackAndWhiteBlendSettings GlobalBWSettings;
    // -> class zGameCheats gGameCheats;
    // -> float sFarWall;
    // -> float sNearWall;
    // -> float sTetherRatio;
    // -> class zSoundSourcesPhysics * ms_slotsPhysStorage;
    // -> static class zQueue sPhysQueue;
    // -> static class ztextbox * head_active;
    // -> static class tag_type new_tags[1];
    // -> static unsigned long new_tags_size;
    // -> class zGlobals globals;
}
// Range: 0x80242480 -> 0x80243248
bool zSceneInit(unsigned int theSceneID /* r1+0x8 */, int reloadInProgress /* r27 */, char * fullSceneName /* r25 */) {
    // Local variables
    class zScene * s; // r26
    int i; // r12
    char theLoadScene[128]; // r1+0x50
    bool done; // r28

    {
        // Range: 0x80242728 -> 0x80242B24
        {
            // Range: 0x80242830 -> 0x802428EC
            // Local variables
            char * pSceneId; // r0
        }
    }
    {
        // Range: 0x80242CF4 -> 0x80243224
        // Local variables
        bool globalListDone; // r21
        unsigned long long bootBaseID; // r1+0x38
        unsigned int numOfSceneToCheck; // r0
        unsigned int BOOT_SCENE_ID; // r20

        {
            // Range: 0x80242CF4 -> 0x80242DA8
            // Local variables
            unsigned int tid; // r25

            {
                // Range: 0x80242CF4 -> 0x80242DA8
                // Local variables
                int curCount; // r0
            }
        }
        {
            // Range: 0x80242E88 -> 0x80242F3C
            // Local variables
            unsigned int typeID; // r1+0x14
        }
        {
            // Range: 0x80242F68 -> 0x80243024
            // Local variables
            unsigned int typeID; // r1+0x10
        }
    }

    // References
    // -> class zBombManager gBombManager;
    // -> class zPlayerInventory inventory;
    // -> class Scene * primaryScene;
    // -> static unsigned int s_baseTypeNeedsUpdate[64];
    // -> unsigned int g_rttidParentTable[246];
    // -> unsigned int g_rttidMaxType;
    // -> static int sSceneMemDepthStack[2];
    // -> static unsigned int theLoadSceneID;
    // -> long long startupTicks;
    // -> static int sMemDepthJustHIPStart;
    // -> static int sMemDepthSceneStart;
    // -> static int sSceneMemDepthStackTop;
    // -> int currentScene;
    // -> class SceneRecord nextSceneLoadList[2];
    // -> int startLoadHere;
    // -> int thisSceneLoadListCount;
    // -> class SceneRecord thisSceneLoadList[2];
    // -> int nextSceneLoadListCount;
    // -> unsigned int gTransitionSceneID;
    // -> class xGlobals * xglobals;
    // -> static unsigned int playerHipLoaded[6];
    // -> static unsigned int playerHipLoading[6];
    // -> static int gPlayerCount;
    // -> static class zPlayer * gPlayersCreated[4];
    // -> static class xAnimTable * gAnimTables[4];
    // -> bool gInSceneResetOrInit;
    // -> static int sMemDepthSceneInit;
    // -> static int sMemDepthJustHIPStartPlayer;
    // -> static enum eSceneInitState sceneInitState;
    // -> class zGlobals globals;
}
// Range: 0x80243250 -> 0x80244340
void zSceneExit(int beginReload /* r23 */) {
    // Local variables
    int i; // r25
    unsigned int sceneID; // r25
    unsigned int nextSceneID; // r24
    int soundCurrent; // r1+0xC
    int soundTotal; // r1+0x8

    {
        // Range: 0x80243764 -> 0x80243928
        // Local variables
        char curScene[8]; // r1+0x30
        char nextScene[8]; // r1+0x38
    }
    {
        // Range: 0x802442F4 -> 0x80244304
        // Local variables
        int j; // r21
    }

    // References
    // -> class CHavokShapeBuilder * s_instance;
    // -> static int sMemDepthSceneInit;
    // -> static int sMemDepthJustHIPStartPlayer;
    // -> static unsigned int playerHipLoaded[6];
    // -> static unsigned int gPlayerTags[6];
    // -> class zNGLoadingScreen gNGLoadingScreen;
    // -> static unsigned int loadingScreenHash;
    // -> static int sMemDepthSceneStart;
    // -> static int sMemDepthJustHIPStart;
    // -> static int sSceneMemDepthStackTop;
    // -> int stopUnloadHere;
    // -> int currentScene;
    // -> static int sSceneMemDepthStack[2];
    // -> class SceneRecord thisSceneLoadList[2];
    // -> bool gSoundReadyToExit;
    // -> static class zQueue sPhysQueue;
    // -> class Scene * primaryScene;
    // -> static bool gAssetMapResetFlag[6];
    // -> static void (* gAssetMapResetFuncs[6])(int playerChrType);
    // -> void (* WiimoteSpeakerCB)(bool);
    // -> static class zWiimoteSpeakerController Instance;
    // -> static class zRippleManager Instance;
    // -> class Geometry * FmodGeometry;
    // -> int uiElementCount;
    // -> class zUI * uiElements[512];
    // -> static class zSoundModule soundMod;
    // -> bool gSysForceExit;
    // -> class zFrag * sFirstActiveFrag;
    // -> class zPlayerInventory inventory;
    // -> static unsigned int gNextSceneID;
    // -> enum SlidePlayer slidePlayerLock;
    // -> class zPlayerInputPadMgr padManager;
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// Range: 0x80244340 -> 0x80244B98
void zSceneSwitch(int forceSameScene /* r27 */, bool sameScene /* r25 */, int playerNum /* r26 */) {
    {
        // Range: 0x802448F4 -> 0x80244B68
        // Local variables
        bool teleportPlayer; // r0

        {
            // Range: 0x8024498C -> 0x80244B14
            // Local variables
            int i; // r27

            {
                // Range: 0x8024498C -> 0x80244B14
                // Local variables
                class zDirection * direction; // r22

                {
                    // Range: 0x8024498C -> 0x80244B14
                    // Local variables
                    class xEntFrame * frame; // r26
                }
            }
        }
    }

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class xGlobals * xglobals;
    // -> static unsigned int gNextSceneID;
    // -> unsigned int gLevelChanged;
    // -> static int playersActiveAtInitiatedPause;
    // -> class zGlobals globals;
}
// Range: 0x80244BA0 -> 0x80244C80
void zSceneSaveGameIfPossible() {
    // References
    // -> class Module * trcModule;
    // -> class zGlobals globals;
}
// signature: zSceneSave(zScene *, bool)
// Range: 0x80244C80 -> 0x802453FC
void zSceneSave(class zScene * ent /* r25 */) {
    // Local variables
    class xSerial xser; // r1+0x14
    class xSerial * s; // r30

    {
        // Range: 0x80245160 -> 0x80245388
        // Local variables
        unsigned int i; // r25

        {
            // Range: 0x80245160 -> 0x80245388
            // Local variables
            class xBase * b; // r27
        }
    }

    // References
    // -> class Module * trcModule;
    // -> static class Pointer32 pUseDefaultString;
    // -> static char * UseDefaultString;
    // -> class zPlayerInventory inventory;
    // -> static class zSoundModule soundMod;
    // -> unsigned int g_rttidParentTable[246];
    // -> class zGlobals globals;
    // -> static float offsety;
    // -> static float offsetx;
}
// signature: zSceneSaveHeader(zScene *, TRC::SaveDataHeader *)
// Range: 0x80245400 -> 0x802454C8
void zSceneSaveHeader(class SaveDataHeader * header /* r31 */) {
    // References
    // -> class zPlayerInventory inventory;
    // -> class zGlobals globals;
}
// Range: 0x802454D0 -> 0x802455DC
int zSceneReadHeader(class SaveDataHeader * header /* r28 */, char * * desc /* r29 */, char * * details /* r30 */) {
    {
        // Range: 0x8024550C -> 0x8024556C
        // Local variables
        char * str; // r31
    }

    // References
    // -> static char saveHeaderDetails[128];
    // -> static char saveHeaderDesc[128];
}
// signature: zSceneLoad(zScene *, bool)
// Range: 0x802455E0 -> 0x802469F4
void zSceneLoad(class zScene * ent /* r25 */) {
    // Local variables
    class xSerial xser; // r1+0x70
    class xSerial * s; // r30
    int sceneExist; // r1+0x5C
    float musicVolume; // r1+0x58
    float sfxVolume; // r1+0x54
    float cineVolume; // r1+0x50
    class zSoundModule * sMod; // r31
    bool inverted; // r1+0x8
    unsigned int count; // r1+0x4C

    {
        // Range: 0x8024672C -> 0x80246964
        // Local variables
        unsigned short i; // r25

        {
            // Range: 0x8024672C -> 0x80246964
            // Local variables
            class xBase * b; // r26
        }
    }

    // References
    // -> static bool s_soundWrappersUpdatePaused;
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
    // -> class Module * trcModule;
    // -> static class zSoundModule soundMod;
    // -> unsigned int g_rttidParentTable[246];
    // -> static float oldOffsety;
    // -> static float oldOffsetx;
    // -> static float offsety;
    // -> static float offsetx;
    // -> class zGlobals globals;
}
// Range: 0x80246A00 -> 0x80246A5C
void zSaveReset() {
    // References
    // -> class zGlobals globals;
    // -> class Module * trcModule;
}
// Range: 0x80246A60 -> 0x80247804
void zSceneReset() {
    // Local variables
    class zScene * s; // r17
    unsigned int curSceneID; // r16

    {
        // Range: 0x80246DEC -> 0x8024700C
        // Local variables
        int i; // r14

        {
            // Range: 0x80246DEC -> 0x80246FF4
            // Local variables
            int iiii; // r15
        }
    }
    {
        // Range: 0x80247078 -> 0x80247418
        // Local variables
        unsigned int tid; // r19
    }
    {
        // Range: 0x802477BC -> 0x802477CC
        // Local variables
        int i; // r14
    }

    // References
    // -> int numResets;
    // -> static void (* fadeOutCB)();
    // -> static float timer;
    // -> static enum State state;
    // -> static class zScaleform * movie;
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
    // -> static class zQueue sQueue;
    // -> static class zSoundModule * sMod;
    // -> static class zSoundModule soundMod;
    // -> bool gSoundReadyToExit;
    // -> class zPlayerInputPadMgr padManager;
    // -> enum SlidePlayer slidePlayerLock;
    // -> bool updated[4];
    // -> class xGlobals * xglobals;
    // -> static class zRippleManager Instance;
    // -> class zBombManager gBombManager;
    // -> class Scene * primaryScene;
    // -> class zFrag * sFirstActiveFrag;
    // -> bool gInSceneResetOrInit;
    // -> class zGlobals globals;
}
// Range: 0x80247810 -> 0x80247920
void zSceneStoreCheckPoint(unsigned long long initialCameraID /* r31:r30 */) {
    // Local variables
    class zPlayerCheckPoint checkPoints[4]; // r1+0x8

    {
        // Range: 0x80247830 -> 0x80247894
        // Local variables
        int i; // r26
    }

    // References
    // -> class zGlobals globals;
    // -> class xGlobals * xglobals;
}
// signature: zSceneStoreCheckPoint(zPlayerCheckPoint *, unsigned long long)
// Range: 0x80247920 -> 0x802479BC
void zSceneStoreCheckPoint() {
    // References
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// Range: 0x802479C0 -> 0x80247A24
static void ActivateCB(class xBase * base /* r31 */) {
    {
        // Range: 0x802479E0 -> 0x80247A10
        // Local variables
        class xEnt * pEnt; // r0
    }
}
// signature: DeactivateCB(xBase *)
// Range: 0x80247A30 -> 0x80247AEC
static void DeactivateCB() {
    {
        // Range: 0x80247A48 -> 0x80247AD8
        // Local variables
        class hkQuaternion quat; // r1+0x20
        class xEnt * pEnt; // r0
    }

    // References
    // -> unsigned int g_rttidParentTable[246];
}
// Range: 0x80247AF0 -> 0x80247B84
static void zSceneSettings_Init() {
    // References
    // -> class Scene * sceneProperty;
    // -> class HDRSettings GlobalHDRSettings;
}
// signature: xUpdateCull_CollectEnt_CB::xUpdateCull_CollectEnt_CB(int)
// Range: 0x80248530 -> 0x80248590
void * xUpdateCull_CollectEnt_CB::xUpdateCull_CollectEnt_CB(class xUpdateCull_CollectEnt_CB * this /* r30 */) {
}
// Range: 0x80248650 -> 0x802486C8
void * xUpdateCull_CollectEnt_CB::~xUpdateCull_CollectEnt_CB(class xUpdateCull_CollectEnt_CB * this /* r29 */) {
}
// Range: 0x802486D0 -> 0x8024874C
void * xUpdateCull_CollectGroup_CB::xUpdateCull_CollectGroup_CB(class xUpdateCull_CollectGroup_CB * this /* r30 */, unsigned int numGroups /* r31 */) {
}
// Range: 0x80248750 -> 0x802487BC
void * xUpdateCull_CollectGroup_CB::~xUpdateCull_CollectGroup_CB(class xUpdateCull_CollectGroup_CB * this /* r30 */) {
}
// Range: 0x80247B90 -> 0x802484B4
void zSceneSetup() {
    // Local variables
    class zScene * s; // r28
    int smCount; // r0

    {
        // Range: 0x80247EC0 -> 0x80247EEC
        // Local variables
        int i; // r25
    }
    {
        // Range: 0x80247F38 -> 0x80248094
        // Local variables
        class FMOD_VECTOR vertices[4]; // r1+0x38
        class zSoundMaskAsset * smAsset; // r0
        int polygonCount; // r24

        {
            // Range: 0x80247F48 -> 0x80247F6C
            // Local variables
            int i; // r25
        }
        {
            // Range: 0x80247F90 -> 0x80248078
            // Local variables
            int i; // r31

            {
                // Range: 0x80247F90 -> 0x80248078
                // Local variables
                int idx; // r1+0x18
                int sz; // r0

                {
                    // Range: 0x80247FB8 -> 0x8024806C
                    // Local variables
                    int j; // r23

                    {
                        // Range: 0x80247FC4 -> 0x80248014
                        // Local variables
                        int k; // r22
                    }
                }
            }
        }
    }
    {
        // Range: 0x802480D8 -> 0x802482D0
        // Local variables
        class xUpdateCull_CollectGroup_CB tmpGroups; // r1+0x20
        class xUpdateCull_CountGroup_CB groupCountCB; // r1+0x10
        unsigned int numGroups; // r1+0x14
        class xUpdateCull_CollectEnt_CB ents; // r1+0x28

        {
            // Range: 0x80248180 -> 0x802482C0
            // Local variables
            int i; // r27

            {
                // Range: 0x80248180 -> 0x802482C0
                {
                    // Range: 0x80248180 -> 0x80248180
                    // Local variables
                    class Renderable3D * rend3d; // r0
                }
            }
        }
    }
    {
        // Range: 0x80248430 -> 0x80248450
        // Local variables
        class zCarlPlayer * p; // r0
    }
    {
        // Range: 0x80248450 -> 0x80248470
        // Local variables
        class zRussellPlayer * p; // r0
    }

    // References
    // -> class zGameCheats gGameCheats;
    // -> float REVERB_FADETIME_DEFAULT;
    // -> class zPlayerInventory inventory;
    // -> class zCheckpoint * currentActivePtr;
    // -> static unsigned int enableScreenAdj;
    // -> class Geometry * FmodGeometry;
    // -> class xGlobals * xglobals;
    // -> bool gInSceneSetup;
    // -> class zGlobals globals;
}
// signature: zSceneSetup_serialTraverseCB(unsigned int, xSerial *)
// Range: 0x80249BF0 -> 0x80249CB8
int zSceneSetup_serialTraverseCB(unsigned int clientID /* r31 */) {
    // Local variables
    char uiName[16]; // r1+0x10
    int val; // r1+0x8
}
// Range: 0x80249CC0 -> 0x8024B2D4
void zSceneUpdate(float elapsedSec /* f23 */) {
    // Local variables
    int isPaused; // r0
    float apadx; // f25
    float apady; // f24
    class zScene * pScene; // r22
    bool updateFXSystems; // r23
    class EmbeddedList & updList; // r24
    class EmbeddedList & hudUp; // r15

    {
        // Range: 0x80249D5C -> 0x80249DF0
        // Local variables
        class xCounter * x_mnus_start_counter; // r5
    }
    {
        // Range: 0x80249E18 -> 0x8024A4E4
        // Local variables
        int i; // r15
    }
    {
        // Range: 0x8024A510 -> 0x8024A5BC
        // Local variables
        int ii; // r18
    }
    {
        // Range: 0x8024A5E8 -> 0x8024A694
        // Local variables
        int ii; // r18
    }
    {
        // Range: 0x8024A81C -> 0x8024ACE4
        // Local variables
        unsigned int baseType; // r3

        {
            // Range: 0x8024A81C -> 0x8024A820
            // Local variables
            class hkQuaternion rot; // r1+0x60
            class hkTransform transform; // r1+0x70
        }
        {
            // Range: 0x8024A820 -> 0x8024A82C
            // Local variables
            bool runIt; // r4
        }
    }
    {
        // Range: 0x8024AF1C -> 0x8024B11C
        // Local variables
        int isReallyPaused; // r0
        bool isCinematicRunning; // r0
        bool isSaveSystemBusy; // r0
    }

    // References
    // -> class BlackAndWhiteBlendSettings GlobalBWSettings;
    // -> unsigned int SCENE_ID_MNU_START;
    // -> class Module * trcModule;
    // -> static class zRippleManager Instance;
    // -> class zPlayerInventory inventory;
    // -> void (* eventFunction)(class xBase * from, class xBase * to, unsigned int toEvent, class EventAny * params);
    // -> unsigned int g_rttidParentTable[246];
    // -> static unsigned int sSuddenMove;
    // -> static class ztextbox * head_active;
    // -> static float offsety;
    // -> static float offsetx;
    // -> static float oldOffsety;
    // -> static float oldOffsetx;
    // -> class zPlayerInputPadMgr padManager;
    // -> static unsigned int enableScreenAdj;
    // -> float gSceneUpdateTime;
    // -> class zGlobals globals;
}
// Range: 0x8024B2E0 -> 0x8024B41C
void zSceneUpdate_AfterPlayerUpdate(float dt /* f31 */) {
    // References
    // -> static class ztextbox * head_active;
    // -> class xGlobals * xglobals;
    // -> unsigned int g_rttidParentTable[246];
    // -> float zSceneUpdate_AfterPlayerUpdate_dt;
    // -> class zGlobals globals;
}
// signature: zSceneFindEntity(const char *)
// Range: 0x8024B420 -> 0x8024B45C
class Entity * zSceneFindEntity() {
    // Local variables
    unsigned int hash; // r0
    unsigned long long id; // r0:r0
}
// signature: zSceneFindObject(unsigned long long)
// Range: 0x8024B460 -> 0x8024B494
class xBase * zSceneFindObject() {
}
// signature: zScenePathToID(const char *)
// Range: 0x8024B4A0 -> 0x8024B564
unsigned int zScenePathToID() {
    // Local variables
    char * strPtr; // r3
    char * tok; // r4
    char tempStr[5]; // r1+0x8
}
// Range: 0x8024B570 -> 0x8024B584
short zSceneGetLevelIndex() {
    // References
    // -> class zGlobals globals;
}
// signature: zSceneEnableScreenAdj(unsigned int)
// Range: 0x8024B590 -> 0x8024B59C
void zSceneEnableScreenAdj() {
    // References
    // -> static unsigned int enableScreenAdj;
}
// Range: 0x8024B5A0 -> 0x8024B5BC
void zSceneSetOldScreenAdj() {
    // References
    // -> static float oldOffsety;
    // -> static float oldOffsetx;
    // -> static float offsety;
    // -> static float offsetx;
}
// signature: zSceneLoadPackFile(unsigned int, int, bool, const char *)
// Range: 0x8024B5C0 -> 0x8024B654
bool zSceneLoadPackFile(unsigned int id /* r30 */, int options /* r31 */) {
    // Local variables
    int versionNumber; // r3
}
// Range: 0x8024B660 -> 0x8024B6C0
bool zSceneLoadPackFileStep(unsigned int id /* r30 */, int options /* r31 */) {
}
// Range: 0x8024B6C0 -> 0x8024B7BC
void zSceneSetZPlaneParams(float znear /* f30 */, float zfar /* f31 */) {
    // Local variables
    class View * view; // r0

    {
        // Range: 0x8024B6F0 -> 0x8024B794
        {
            // Range: 0x8024B72C -> 0x8024B72C
            // Local variables
            int i; // r28
        }
    }
}
// Range: 0x8024B7C0 -> 0x8024B8AC
void zSceneSetFogStartEnd(float start /* f30 */, float end /* f31 */, unsigned int mode /* r27 */) {
    // Local variables
    class View * view; // r0

    {
        // Range: 0x8024B7E8 -> 0x8024B890
        {
            // Range: 0x8024B824 -> 0x8024B824
            // Local variables
            int i; // r28
        }
    }
}
// Range: 0x8024B8B0 -> 0x8024B9BC
void zSceneSetFogColor(float red /* f29 */, float green /* f30 */, float blue /* f31 */) {
    // Local variables
    class View * view; // r0

    {
        // Range: 0x8024B8E8 -> 0x8024B990
        {
            // Range: 0x8024B924 -> 0x8024B924
            // Local variables
            int i; // r28
        }
    }
}
// Range: 0x8024B9C0 -> 0x8024BA8C
void zSceneToggleLOD(bool enable /* r27 */) {
    // Local variables
    class View * view; // r0

    {
        // Range: 0x8024B9D8 -> 0x8024BA78
        {
            // Range: 0x8024BA14 -> 0x8024BA14
            // Local variables
            int i; // r28
        }
    }
}
// Range: 0x8024BA90 -> 0x8024BAB8
bool zSceneInMainMenu() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x8024BAC0 -> 0x8024BC20
bool zSceneIsUpGameLevel() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x8024BC20 -> 0x8024BC64
bool zSceneInCarlLikesKevin() {
    // References
    // -> class zGlobals globals;
}
// signature: zSceneIsChaseScene(unsigned int)
// Range: 0x8024BC70 -> 0x8024BCB0
bool zSceneIsChaseScene() {
}
// signature: zSceneIsBiplaneScene(unsigned int)
// Range: 0x8024BCB0 -> 0x8024BCEC
bool zSceneIsBiplaneScene() {
}
// signature: zSceneIsBiplaneStoryScene(unsigned int)
// Range: 0x8024BCF0 -> 0x8024BDBC
bool zSceneIsBiplaneStoryScene() {
}
// Range: 0x8024BDC0 -> 0x8024BE08
bool zSceneInAnyBiplaneScene() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x8024BE10 -> 0x8024BE38
bool zSceneIsDirigible() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x8024BE40 -> 0x8024BE78
bool zSceneIsBossLevel() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x8024BE80 -> 0x8024BEC4
bool zSceneIsMultiplayerLevel() {
    // References
    // -> class zGlobals globals;
}
// signature: zSceneIsMultiplayerLevel(unsigned int)
// Range: 0x8024BED0 -> 0x8024BEF4
bool zSceneIsMultiplayerLevel() {
}
// Range: 0x8024BF00 -> 0x8024BF20
bool zSceneIsTeamMatch() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x8024BF20 -> 0x8024BF4C
void zSceneResetBWSwitch() {
    // References
    // -> class BlackAndWhiteBlendSettings GlobalBWSettings;
    // -> class zGlobals globals;
}
// signature: zSceneSetBWSwitchParams(float, bool)
// Range: 0x8024BF50 -> 0x8024BF9C
void zSceneSetBWSwitchParams() {
    // References
    // -> class zGlobals globals;
    // -> class BlackAndWhiteBlendSettings GlobalBWSettings;
}
// Range: 0x8024BFA0 -> 0x8024C09C
void zScreenFadeSetup() {
    // References
    // -> static class zSoundModule soundMod;
    // -> static float timer;
    // -> static enum State state;
    // -> static void (* fadeOutCB)();
    // -> static class zScaleform * movie;
}
// Range: 0x8024C0A0 -> 0x8024C13C
void zSceneFadeIn() {
    // References
    // -> static float timer;
    // -> static void (* fadeOutCB)();
    // -> static class zSoundModule soundMod;
    // -> static enum State state;
    // -> static class zScaleform * movie;
}
// Range: 0x8024C140 -> 0x8024C22C
void zSceneFadeOut(void (* cb)() /* r29 */, bool isFadeOutSound /* r30 */) {
    // References
    // -> static class zSoundModule soundMod;
    // -> static float timer;
    // -> static void (* fadeOutCB)();
    // -> static enum State state;
    // -> static class zScaleform * movie;
}
// Range: 0x8024C230 -> 0x8024C2C0
void zSceneBlackAndResetRightAway() {
    // References
    // -> static enum State state;
    // -> static float timer;
    // -> static void (* fadeOutCB)();
    // -> static class zSoundModule soundMod;
    // -> static class zScaleform * movie;
}
// signature: zSceneFadeUpdate(float)
// Range: 0x8024C2C0 -> 0x8024C3F0
void zSceneFadeUpdate() {
    {
        // Range: 0x8024C370 -> 0x8024C378
        // Local variables
        int x; // r6
    }

    // References
    // -> class xGlobals * xglobals;
    // -> static void (* fadeOutCB)();
    // -> static float timer;
    // -> static enum State state;
    // -> static class zScaleform * movie;
}
// Range: 0x8024C3F0 -> 0x8024C404
bool zSceneIsNotFading() {
    // References
    // -> static enum State state;
}
