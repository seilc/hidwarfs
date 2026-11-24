/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zScene.cpp
*/
unsigned char HACK_BASETYPE; // size: 0x1, address: 0x80754CA8
static int roomCnt; // size: 0x4, address: 0x80754CAC
static int bytesNeeded; // size: 0x4, address: 0x80754CB0
static int availOnDisk; // size: 0x4, address: 0x80754CB4
static int neededFiles; // size: 0x4, address: 0x80754CB8
static unsigned int enableScreenAdj; // size: 0x4, address: 0x80754CBC
static float offsetx; // size: 0x4, address: 0x80754CC0
static float offsety; // size: 0x4, address: 0x80754CC4
static float oldOffsetx; // size: 0x4, address: 0x80754CC8
static float oldOffsety; // size: 0x4, address: 0x80754CCC
static float menuOldOffsetx; // size: 0x4, address: 0x80754CD0
static float menuOldOffsety; // size: 0x4, address: 0x80754CD4
static int sMemDepthSceneInit; // size: 0x4, address: 0x806C1E00
static int sMemDepthSceneStart; // size: 0x4, address: 0x806C1E04
static int sMemDepthJustHIPStart; // size: 0x4, address: 0x806C1E08
static int sSceneMemDepthStack[2]; // size: 0x8, address: 0x80754CD8
static int sSceneMemDepthStackTop; // size: 0x4, address: 0x806C1E0C
unsigned int gTransitionSceneID; // size: 0x4, address: 0x80754CE0
static unsigned int s_baseTypeNeedsUpdate[81]; // size: 0x144, address: 0x806C1E10
bool gInSceneResetOrInit; // size: 0x1, address: 0x80754CE4
bool gInSceneSetup; // size: 0x1, address: 0x80754CE5
static enum eSceneInitState sceneInitState; // size: 0x4, address: 0x80754CE8
unsigned int loadingScreenHash; // size: 0x4, address: 0x8075AFFC
unsigned int theLoadSceneID; // size: 0x4, address: 0x8075B004
char * STR_ER01; // size: 0x4, address: 0x806C1F58
bool g_firstTimeLoad; // size: 0x1, address: 0x806C1F5C
static char saveHeaderDesc[128]; // size: 0x80, address: 0x80754CF0
static char saveHeaderDetails[128]; // size: 0x80, address: 0x80754D70
int numResets; // size: 0x4, address: 0x80754DF0
float gSceneUpdateTime; // size: 0x4, address: 0x80754DF4
static unsigned int sSuddenMove; // size: 0x4, address: 0x80754DF8
static void (* zSceneSpecialRender_curFunc[2])(); // size: 0x8, address: 0x80754E00
static int zSceneSpecialRender_numFuncs; // size: 0x4, address: 0x80754E08
static bool gSwitchedPlayersOnInit; // size: 0x1, address: 0x80754E0C
static unsigned int gLastSceneID; // size: 0x4, address: 0x80754E10
static class zScaleform * movie; // size: 0x4, address: 0x80754E14
static void (* fadeOutCB)(); // size: 0x4, address: 0x80754E18
static float timer; // size: 0x4, address: 0x80754E1C
static enum State state; // size: 0x4, address: 0x80754E20
// Range: 0x801607B0 -> 0x80160870
void OGUpdateList::PushBack(class OGUpdateList * this /* r30 */, class xBase * b /* r31 */) {
}
// signature: zTransparentHelper::Reset(World::xOGEntity *, bool)
// Range: 0x80160A90 -> 0x80160AB0
void zTransparentHelper::Reset() {
}
// signature: zTransparentHelper::Update(float, World::xOGEntity *)
// Range: 0x80160AB0 -> 0x80160B58
void zTransparentHelper::Update(class zTransparentHelper * this /* r31 */) {
}
// Range: 0x80160B60 -> 0x80160C40
void zSceneStartLoadingScreen(unsigned int previousSceneID /* r28 */, unsigned int nextSceneID /* r29 */) {
    {
        // Range: 0x80160BA8 -> 0x80160C2C
        // Local variables
        class LoadingScreen * loadingScreenAsset; // r3
    }

    // References
    // -> class zNGLoadingScreen gNGLoadingScreen;
    // -> unsigned int loadingScreenHash;
}
// Range: 0x80160C40 -> 0x80160C84
static class Scene * zSceneFindParameters() {
    // Local variables
    int numSceneAsset; // r0

    {
        // Range: 0x80160C54 -> 0x80160C74
        // Local variables
        unsigned int asset_size; // r1+0x8
    }
}
// Range: 0x80160C90 -> 0x80160D7C
void zSceneInit_Extravaganza() {
    // References
    // -> class zGameCheats gGameCheats;
    // -> float sFarWall;
    // -> float sNearWall;
    // -> float sTetherRatio;
    // -> static class ztextbox * head_active;
    // -> static class tag_type new_tags[1];
    // -> static unsigned long new_tags_size;
    // -> class zGlobals globals;
}
// Range: 0x80160D80 -> 0x80161768
bool zSceneInit(unsigned int theSceneID /* r1+0x8 */, int reloadInProgress /* r26 */, char * fullSceneName /* r27 */) {
    // Local variables
    class zScene * s; // r29
    int i; // r0
    char theLoadScene[128]; // r1+0x28
    bool done; // r28

    {
        // Range: 0x80160FB0 -> 0x8016116C
        {
            // Range: 0x80160FC8 -> 0x80161088
            // Local variables
            char * pSceneId; // r0
        }
    }
    {
        // Range: 0x801612D8 -> 0x8016174C
        // Local variables
        unsigned int currentGlobal; // r0
        bool globalListDone; // r23
        unsigned long long bootBaseID; // r1+0x20
        unsigned int numOfSceneToCheck; // r0
        unsigned int BOOT_SCENE_ID; // r22

        {
            // Range: 0x801612D8 -> 0x80161380
            // Local variables
            unsigned int tid; // r28

            {
                // Range: 0x801612D8 -> 0x80161380
                // Local variables
                int curCount; // r0
            }
        }
        {
            // Range: 0x80161424 -> 0x801614A4
            // Local variables
            unsigned int typeID; // r1+0x10
        }
        {
            // Range: 0x801614CC -> 0x80161558
            // Local variables
            unsigned int typeID; // r1+0xC
        }
    }

    // References
    // -> class zBombManager gBombManager;
    // -> class zPlayerInventory inventory;
    // -> class Scene * primaryScene;
    // -> static unsigned int s_baseTypeNeedsUpdate[81];
    // -> class xGlobals * xglobals;
    // -> unsigned int g_rttidMaxType;
    // -> class zNGLoadingScreen gNGLoadingScreen;
    // -> static int sSceneMemDepthStack[2];
    // -> unsigned int theLoadSceneID;
    // -> static int sMemDepthJustHIPStart;
    // -> static int sMemDepthSceneStart;
    // -> static int sSceneMemDepthStackTop;
    // -> int currentScene;
    // -> int startLoadHere;
    // -> unsigned int gTransitionSceneID;
    // -> struct {} __vt__Q24Util23BlockAllocatorArray<Ui>;
    // -> struct {} __vt__Q24Util28BlockAllocatorArray<P5xBase>;
    // -> bool gInSceneResetOrInit;
    // -> static int sMemDepthSceneInit;
    // -> static int sMemDepthJustHIPStartPlayer;
    // -> static enum eSceneInitState sceneInitState;
    // -> class zGlobals globals;
}
// Range: 0x80161970 -> 0x80161E60
void zSceneExit(int beginReload /* r26 */) {
    // Local variables
    int i; // r29
    unsigned int sceneID; // r29
    unsigned int nextSceneID; // r28
    class zScene * s; // r27
    unsigned int unloadScene; // r3
    int soundCurrent; // r1+0xC
    int soundTotal; // r1+0x8

    {
        // Range: 0x80161AD8 -> 0x80161B3C
        // Local variables
        char curScene[8]; // r1+0x10
        char nextScene[8]; // r1+0x18
    }
    {
        // Range: 0x80161E14 -> 0x80161E30
        // Local variables
        int j; // r25
    }

    // References
    // -> class ScreenWarpManager * gScreenWarpManager;
    // -> class CHavokShapeBuilder * s_instance;
    // -> static int sMemDepthSceneInit;
    // -> static int sMemDepthJustHIPStartPlayer;
    // -> static int sMemDepthSceneStart;
    // -> static int sMemDepthJustHIPStart;
    // -> static int sSceneMemDepthStackTop;
    // -> static int sSceneMemDepthStack[2];
    // -> class Scene * primaryScene;
    // -> static class zSoundModule soundMod;
    // -> static unsigned int gNextSceneID;
    // -> class zPlayerInputPadMgr padManager;
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// Range: 0x80161E60 -> 0x80162124
void zSceneSwitch(int forceSameScene /* r29 */, bool sameScene /* r27 */, int playerNum /* r28 */) {
    // Local variables
    unsigned int nextSceneID; // r0

    {
        // Range: 0x80161F84 -> 0x8016210C
        // Local variables
        bool teleportPlayer; // r0
        unsigned long long PlayerMarkerStartCamID; // r0:r0

        {
            // Range: 0x80161FF0 -> 0x801620DC
            // Local variables
            int i; // r28

            {
                // Range: 0x80161FF0 -> 0x801620DC
                // Local variables
                class zDirection * direction; // r23
                unsigned long long PlayerMarkerStartID; // r0:r0

                {
                    // Range: 0x80162008 -> 0x801620DC
                    // Local variables
                    class xEntFrame * frame; // r22
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
// Range: 0x80162520 -> 0x80162710
void HelpSaveXBase(class xBase * b /* r29 */, class xSerial * s /* r30 */) {
    // Local variables
    unsigned int baseType; // r31
}
// signature: HelpLoadXBase(xBase *, xSerial *, bool)
// Range: 0x80162DF0 -> 0x80162FE0
void HelpLoadXBase(class xBase * b /* r29 */, class xSerial * s /* r30 */) {
    {
        // Range: 0x80162E08 -> 0x80162FCC
        // Local variables
        unsigned int baseType; // r31
    }
}
// Range: 0x80162130 -> 0x80162228
void zSceneSaveGameIfPossible() {
    // References
    // -> class Module * trcModule;
    // -> class zGlobals globals;
}
// signature: zSceneSave(zScene *, bool)
// Range: 0x80162230 -> 0x8016251C
void zSceneSave(class zScene * ent /* r25 */) {
    // Local variables
    class xSerial xser; // r1+0x8
    class xSerial * s; // r31

    {
        // Range: 0x80162488 -> 0x801624C4
        // Local variables
        unsigned int i; // r25

        {
            // Range: 0x80162488 -> 0x801624C4
            // Local variables
            class xBase * b; // r3
        }
    }

    // References
    // -> class Module * trcModule;
    // -> static class zSoundModule soundMod;
    // -> unsigned int g_rttidParentTable[264];
    // -> class zGlobals globals;
    // -> static float offsety;
    // -> static float offsetx;
    // -> float MAXplayerHP;
    // -> class zPlayerInventory inventory;
}
// signature: zSceneSaveHeader(zScene *, TRC::SaveDataHeader *)
// Range: 0x80162710 -> 0x80162804
void zSceneSaveHeader(class SaveDataHeader * header /* r31 */) {
    // Local variables
    char * happinessObjectCounters[24]; // r1+0x8
    class xCounter * counter; // r0

    {
        // Range: 0x80162768 -> 0x801627AC
        // Local variables
        int i; // r28
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x80162810 -> 0x80162904
int zSceneReadHeader(class SaveDataHeader * header /* r28 */, char * * desc /* r29 */, char * * details /* r30 */) {
    {
        // Range: 0x80162840 -> 0x801628A0
        // Local variables
        char * str; // r31
    }

    // References
    // -> static char saveHeaderDetails[128];
    // -> static char saveHeaderDesc[128];
}
// signature: zSceneLoad(zScene *, bool)
// Range: 0x80162910 -> 0x80162DEC
void zSceneLoad(class zScene * ent /* r24 */) {
    // Local variables
    class xSerial xser; // r1+0x24
    class xSerial * s; // r30
    int sceneExist; // r1+0x20
    float musicVolume; // r1+0x1C
    float sfxVolume; // r1+0x18
    float cineVolume; // r1+0x14
    float dialogVolume; // r1+0x10
    class zSoundModule * sMod; // r24
    bool inverted; // r1+0x8
    unsigned int count; // r1+0xC

    {
        // Range: 0x80162D48 -> 0x80162D84
        // Local variables
        unsigned short i; // r24
    }

    // References
    // -> static bool s_soundWrappersUpdatePaused;
    // -> class Module * trcModule;
    // -> static class zSoundModule soundMod;
    // -> unsigned int g_rttidParentTable[264];
    // -> static float oldOffsety;
    // -> static float oldOffsetx;
    // -> static float offsety;
    // -> static float offsetx;
    // -> class zGlobals globals;
    // -> float MAXplayerHP;
    // -> class zPlayerInventory inventory;
}
// Range: 0x80162FE0 -> 0x8016303C
void zSaveReset() {
    // References
    // -> class zGlobals globals;
    // -> class Module * trcModule;
}
// Range: 0x80163040 -> 0x8016348C
void zSceneReset() {
    // Local variables
    class zScene * s; // r28

    {
        // Range: 0x80163164 -> 0x801631A4
        // Local variables
        int i; // r24
    }
    {
        // Range: 0x801631C4 -> 0x80163370
        // Local variables
        unsigned int tid; // r27
    }
    {
        // Range: 0x80163450 -> 0x8016346C
        // Local variables
        int i; // r24
    }

    // References
    // -> int numResets;
    // -> class zPlayerInputPadMgr padManager;
    // -> class xEnt * currentEnt;
    // -> class xGlobals * xglobals;
    // -> class zBombManager gBombManager;
    // -> class Scene * primaryScene;
    // -> bool gInSceneResetOrInit;
    // -> class zGlobals globals;
}
// Range: 0x80163490 -> 0x80163550
void zSceneStoreCheckPoint(unsigned long long initialCameraID /* r26:r25 */) {
    // Local variables
    class zPlayerCheckPoint checkPoints[4]; // r1+0x8

    {
        // Range: 0x801634AC -> 0x80163524
        // Local variables
        int i; // r27
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zSceneStoreCheckPoint(zPlayerCheckPoint *, unsigned long long)
// Range: 0x80163550 -> 0x80163574
void zSceneStoreCheckPoint() {
}
// Range: 0x80163580 -> 0x80163600
static void ActivateCB(class xBase * base /* r31 */) {
    {
        // Range: 0x801635B8 -> 0x801635EC
        // Local variables
        class xEnt * pEnt; // r0
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x80163600 -> 0x801636F8
static void DeactivateCB(class xBase * base /* r30 */) {
    {
        // Range: 0x80163648 -> 0x801636A8
        // Local variables
        class hkQuaternion quat; // r1+0x20
    }

    // References
    // -> class hkQuaternion hkQuaternionIdentity;
    // -> class hkVector4 hkVector4Zero;
    // -> class zGlobals globals;
}
// Range: 0x80163700 -> 0x80163770
static void zSceneSettings_Init() {
    // Local variables
    class Scene * sp; // r0

    // References
    // -> class Scene * sceneProperty;
    // -> class HDRSettings GlobalHDRSettings;
}
// signature: xUpdateCull_CollectEnt_CB::xUpdateCull_CollectEnt_CB(int)
// Range: 0x80163F30 -> 0x80163F80
void * xUpdateCull_CollectEnt_CB::xUpdateCull_CollectEnt_CB(class xUpdateCull_CollectEnt_CB * this /* r31 */) {
}
// Range: 0x80163F80 -> 0x80163FE0
void * xUpdateCull_CollectEnt_CB::~xUpdateCull_CollectEnt_CB(class xUpdateCull_CollectEnt_CB * this /* r30 */) {
}
// Range: 0x80163FE0 -> 0x80164054
void * xUpdateCull_CollectGroup_CB::xUpdateCull_CollectGroup_CB(class xUpdateCull_CollectGroup_CB * this /* r30 */, unsigned int numGroups /* r31 */) {
}
// Range: 0x80164060 -> 0x801640B8
void * xUpdateCull_CollectGroup_CB::~xUpdateCull_CollectGroup_CB(class xUpdateCull_CollectGroup_CB * this /* r30 */) {
}
// Range: 0x80163770 -> 0x80163EAC
void zSceneSetup() {
    // Local variables
    class zScene * s; // r31
    int smCount; // r0

    {
        // Range: 0x80163830 -> 0x801639AC
        // Local variables
        class xUpdateCull_CollectGroup_CB tmpGroups; // r1+0x18
        class xUpdateCull_CountGroup_CB groupCountCB; // r1+0x10
        unsigned int numGroups; // r1+0x14
        class xUpdateCull_CollectEnt_CB ents; // r1+0x20

        {
            // Range: 0x801638D4 -> 0x801639AC
            // Local variables
            int i; // r27

            {
                // Range: 0x801638D4 -> 0x801639AC
                {
                    // Range: 0x801638D4 -> 0x801638F4
                    // Local variables
                    class Renderable3D * rend3d; // r0
                }
            }
        }
    }
    {
        // Range: 0x80163B58 -> 0x80163B9C
        // Local variables
        int i; // r26
    }
    {
        // Range: 0x80163BD0 -> 0x80163D34
        // Local variables
        class FMOD_VECTOR vertices[4]; // r1+0x30
        class zSoundMaskAsset * smAsset; // r0
        int polygonCount; // r27

        {
            // Range: 0x80163BE0 -> 0x80163C10
            // Local variables
            int i; // r26
        }
        {
            // Range: 0x80163C28 -> 0x80163D24
            // Local variables
            int i; // r24

            {
                // Range: 0x80163C28 -> 0x80163D24
                // Local variables
                int idx; // r1+0xC
                int sz; // r0

                {
                    // Range: 0x80163C50 -> 0x80163D24
                    // Local variables
                    int j; // r23

                    {
                        // Range: 0x80163C58 -> 0x80163CCC
                        // Local variables
                        int k; // r22
                    }
                }
            }
        }
    }

    // References
    // -> float MusicSystemMaxVolume;
    // -> class zGameCheats gGameCheats;
    // -> float REVERB_FADETIME_DEFAULT;
    // -> class zCheckpoint * currentActivePtr;
    // -> static unsigned int enableScreenAdj;
    // -> class Geometry * FmodGeometry;
    // -> class xGlobals * xglobals;
    // -> bool gInSceneSetup;
    // -> class zGlobals globals;
}
// signature: zSceneSetup_serialTraverseCB(unsigned int, xSerial *)
// Range: 0x801652C0 -> 0x80165374
int zSceneSetup_serialTraverseCB(unsigned int clientID /* r31 */) {
    // Local variables
    char uiName[16]; // r1+0x10
    int val; // r1+0x8
}
// signature: zTransparentCheckingHitCollector::addRayHit(const hkpCdBody &, const hkpShapeRayCastCollectorOutput &)
// Range: 0x80188A30 -> 0x80188AD0
void zTransparentCheckingHitCollector::addRayHit() {
    // Local variables
    class hkpRigidBody * tmprb; // r0

    {
        // Range: 0x80188A48 -> 0x80188AC0
        // Local variables
        class xBase * obj; // r3
    }
}
// Range: 0x80165380 -> 0x80165B54
void zSceneUpdateWidgets(float elapsedSec /* f31 */, class zScene * pScene /* r22 */, int isPaused /* r23 */) {
    // Local variables
    unsigned int flagBlock; // r25
    class OGUpdateList & updList; // r24
    class Iterator updIt; // r1+0x8

    {
        // Range: 0x8016539C -> 0x80165B34
        {
            // Range: 0x80165488 -> 0x80165488
            // Local variables
            bool runIt; // r4
        }
        {
            // Range: 0x80165488 -> 0x8016563C
            // Local variables
            bool updateFXSystems; // r3
        }
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x80165B60 -> 0x801665FC
void zSceneUpdate(float elapsedSec /* f23 */) {
    // Local variables
    int isPaused; // r30
    float apadx; // f25
    float apady; // f24
    class zScene * pScene; // r29
    class zTransparentCheckingHitCollector hitCollector; // r1+0x50
    class xVec3 camPos; // r1+0x90
    class hkVector4 rayTo; // r1+0x80
    class hkVector4 rayFrom; // r1+0x70
    class xVec3 playerPos; // r1+0x58

    {
        // Range: 0x80165BFC -> 0x80165C74
        // Local variables
        class xCounter * x_mnus_start_counter; // r0
    }
    {
        // Range: 0x80165C9C -> 0x801660A4
        // Local variables
        int i; // r28
    }
    {
        // Range: 0x801660C4 -> 0x80166144
        // Local variables
        int ii; // r28
    }
    {
        // Range: 0x80166294 -> 0x80166344
        // Local variables
        int isReallyPaused; // r0
        bool isCinematicRunning; // r0
        bool isSaveSystemBusy; // r0
    }
    {
        // Range: 0x801664EC -> 0x801664EC
        {
            // Range: 0x801664EC -> 0x801664EC
            // Local variables
            class TimerCommand * h; // r4
        }
    }
    {
        // Range: 0x80166540 -> 0x80166540
        {
            // Range: 0x80166540 -> 0x80166540
            // Local variables
            class TimerCommand * h; // r4
        }
    }

    // References
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> class xGlobals * xglobals;
    // -> struct {} __vt__32zTransparentCheckingHitCollector;
    // -> class BlackAndWhiteBlendSettings GlobalBWSettings;
    // -> unsigned int SCENE_ID_MNU_START;
    // -> class Module * trcModule;
    // -> static unsigned int sSuddenMove;
    // -> static float offsety;
    // -> static float offsetx;
    // -> static float oldOffsety;
    // -> static float oldOffsetx;
    // -> class zPlayerInputPadMgr padManager;
    // -> static unsigned int enableScreenAdj;
    // -> float gSceneUpdateTime;
    // -> class zGlobals globals;
}
// signature: zSceneFindEntity(unsigned long long)
// Range: 0x80166600 -> 0x80166634
class Entity * zSceneFindEntity() {
    // Local variables
    class EntityHandleBase * handle; // r0
}
// signature: zSceneFindObject(unsigned long long)
// Range: 0x80166640 -> 0x80166644
class xBase * zSceneFindObject() {
    // Local variables
    class Entity * ent; // r0
}
// signature: zSceneFindObject(const char *)
// Range: 0x80166650 -> 0x80166678
class xBase * zSceneFindObject() {
    // Local variables
    unsigned int hash; // r0
    unsigned long long id; // r0:r0
}
// Range: 0x80166680 -> 0x80166720
unsigned int zSceneLeavingLevel() {
    // Local variables
    char current[4]; // r1+0xC
    char dest[4]; // r1+0x8

    // References
    // -> class zGlobals globals;
}
// signature: zScenePathToID(const char *)
// Range: 0x80166720 -> 0x801667E4
unsigned int zScenePathToID() {
    // Local variables
    char * strPtr; // r3
    char * tok; // r4
    char tempStr[5]; // r1+0x8
}
// Range: 0x801667F0 -> 0x80166804
short zSceneGetLevelIndex() {
    // References
    // -> class zGlobals globals;
}
// signature: zSceneEnableScreenAdj(unsigned int)
// Range: 0x80166810 -> 0x8016681C
void zSceneEnableScreenAdj() {
    // References
    // -> static unsigned int enableScreenAdj;
}
// Range: 0x80166820 -> 0x8016683C
void zSceneSetOldScreenAdj() {
    // References
    // -> static float oldOffsety;
    // -> static float oldOffsetx;
    // -> static float offsety;
    // -> static float offsetx;
}
// signature: zSceneLoadPackFile(unsigned int, int, bool, const char *)
// Range: 0x80166840 -> 0x801668CC
bool zSceneLoadPackFile(unsigned int id /* r30 */, int options /* r31 */) {
    // Local variables
    int versionNumber; // r3
}
// Range: 0x801668D0 -> 0x80166930
bool zSceneLoadPackFileStep(unsigned int id /* r30 */, int options /* r31 */) {
}
// Range: 0x80166930 -> 0x801669B8
void zSceneSetZPlaneParams(float znear /* f30 */, float zfar /* f31 */) {
    // Local variables
    class View * view; // r30

    {
        // Range: 0x80166954 -> 0x8016699C
        // Local variables
        int numViewports; // r0

        {
            // Range: 0x8016696C -> 0x8016699C
            // Local variables
            int i; // r29

            {
                // Range: 0x8016696C -> 0x8016699C
                // Local variables
                class Viewport * viewport; // r0
            }
        }
    }
}
// Range: 0x801669C0 -> 0x80166A74
void zSceneSetFogStartEnd(float start /* f28 */, float end /* f29 */, unsigned int mode /* r26 */, float heightStart /* f30 */, float heightEnd /* f31 */, unsigned int heightMode /* r27 */) {
    // Local variables
    class View * view; // r30

    {
        // Range: 0x801669F4 -> 0x80166A58
        // Local variables
        int numViewports; // r0

        {
            // Range: 0x80166A0C -> 0x80166A58
            // Local variables
            int i; // r29

            {
                // Range: 0x80166A0C -> 0x80166A58
                // Local variables
                class Viewport * viewport; // r28
            }
        }
    }
}
// Range: 0x80166A80 -> 0x80166B10
void zSceneSetFogColor(float red /* f29 */, float green /* f30 */, float blue /* f31 */) {
    // Local variables
    class View * view; // r30

    {
        // Range: 0x80166AA8 -> 0x80166AF4
        // Local variables
        int numViewports; // r0

        {
            // Range: 0x80166AC0 -> 0x80166AF4
            // Local variables
            int i; // r29

            {
                // Range: 0x80166AC0 -> 0x80166AF4
                // Local variables
                class Viewport * viewport; // r0
            }
        }
    }
}
// Range: 0x80166B10 -> 0x80166B80
void zSceneToggleLOD(bool enable /* r28 */) {
    // Local variables
    class View * view; // r30

    {
        // Range: 0x80166B28 -> 0x80166B6C
        // Local variables
        int numViewports; // r0

        {
            // Range: 0x80166B40 -> 0x80166B6C
            // Local variables
            int i; // r29

            {
                // Range: 0x80166B40 -> 0x80166B6C
                // Local variables
                class Viewport * viewport; // r0
            }
        }
    }
}
// Range: 0x80166C20 -> 0x80166C58
bool zSceneInMainMenu() {
    // Local variables
    class zScene * s; // r4

    // References
    // -> class zGlobals globals;
}
// Range: 0x80166C60 -> 0x80166C8C
bool zSceneInStoryLevelMainPath() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x80166C90 -> 0x80166CB8
bool zSceneInBoss2Level() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x80166CC0 -> 0x80166CEC
void zSceneResetBWSwitch() {
    // References
    // -> class BlackAndWhiteBlendSettings GlobalBWSettings;
    // -> class zGlobals globals;
}
// signature: zSceneSetBWSwitchParams(float, bool)
// Range: 0x80166CF0 -> 0x80166D3C
void zSceneSetBWSwitchParams() {
    // References
    // -> class zGlobals globals;
    // -> class BlackAndWhiteBlendSettings GlobalBWSettings;
}
// Range: 0x80166D40 -> 0x80166DC0
void zScreenFadeSetup() {
    // References
    // -> static float timer;
    // -> static enum State state;
    // -> static void (* fadeOutCB)();
    // -> static class zScaleform * movie;
}
// Range: 0x80166DC0 -> 0x80166E5C
void zSceneFadeIn() {
    // References
    // -> static float timer;
    // -> static void (* fadeOutCB)();
    // -> static class zSoundModule soundMod;
    // -> static class zScaleform * movie;
    // -> static enum State state;
}
// Range: 0x80166E60 -> 0x80166F40
void zSceneFadeOut(void (* cb)() /* r29 */, bool isFadeOutSound /* r30 */) {
    // References
    // -> static float timer;
    // -> static class zSoundModule soundMod;
    // -> static class zScaleform * movie;
    // -> static void (* fadeOutCB)();
    // -> static enum State state;
}
// signature: zSceneFadeUpdate(float)
// Range: 0x80166F40 -> 0x8016700C
void zSceneFadeUpdate() {
    // References
    // -> static void (* fadeOutCB)();
    // -> static float timer;
    // -> static enum State state;
}
// Range: 0x80167010 -> 0x80167024
bool zSceneIsNotFading() {
    // References
    // -> static enum State state;
}
