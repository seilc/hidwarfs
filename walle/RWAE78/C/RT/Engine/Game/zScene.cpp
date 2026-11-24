/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zScene.cpp
*/
class _OGSceneSchema _OGSceneschema; // size: 0x18, address: 0x80799988
class SchemaRegistrator _OGSceneschemaReg; // size: 0x8, address: 0x807999A0
unsigned char HACK_BASETYPE; // size: 0x1, address: 0x807999A8
static int roomCnt; // size: 0x4, address: 0x807999AC
static int bytesNeeded; // size: 0x4, address: 0x807999B0
static int availOnDisk; // size: 0x4, address: 0x807999B4
static int neededFiles; // size: 0x4, address: 0x807999B8
static unsigned int enableScreenAdj; // size: 0x4, address: 0x807999BC
static float offsetx; // size: 0x4, address: 0x807999C0
static float offsety; // size: 0x4, address: 0x807999C4
static float oldOffsetx; // size: 0x4, address: 0x807999C8
static float oldOffsety; // size: 0x4, address: 0x807999CC
static float menuOldOffsetx; // size: 0x4, address: 0x807999D0
static float menuOldOffsety; // size: 0x4, address: 0x807999D4
static int sMemDepthSceneInit; // size: 0x4, address: 0x80700848
static int sMemDepthSceneStart; // size: 0x4, address: 0x8070084C
static int sMemDepthJustHIPStart; // size: 0x4, address: 0x80700850
static int sSceneMemDepthStack[2]; // size: 0x8, address: 0x807999D8
static int sSceneMemDepthStackTop; // size: 0x4, address: 0x80700854
static int sMemDepthSceneLoadEnd; // size: 0x4, address: 0x80700858
static class zSceneObjectInstanceDesc sInitTable[51]; // size: 0x4C8, address: 0x80700860
static class dynamic_type_data dynamic_types[44]; // size: 0x370, address: 0x806D0BE0
unsigned int gTransitionSceneID; // size: 0x4, address: 0x807999E0
bool gInSceneResetOrInit; // size: 0x1, address: 0x807999E4
bool gInSceneSetup; // size: 0x1, address: 0x807999E5
static enum eSceneInitState sceneInitState; // size: 0x4, address: 0x807999E8
static bool renderLoadingScreen; // size: 0x1, address: 0x80700D28
static int trigTypeIndex; // size: 0x4, address: 0x80700D2C
static int simpObjTypeIndex; // size: 0x4, address: 0x80700D30
static unsigned int loadingScreenHash; // size: 0x4, address: 0x807999EC
static float pdone; // size: 0x4, address: 0x807999F4
static unsigned int theLoadSceneID; // size: 0x4, address: 0x807999F8
char * STR_ER01; // size: 0x4, address: 0x80700D4C
int numResets; // size: 0x4, address: 0x807999FC
float gSceneUpdateTime; // size: 0x4, address: 0x80799A00
static unsigned int sSuddenMove; // size: 0x4, address: 0x80799A04
static void (* zSceneSpecialRender_curFunc[2])(); // size: 0x8, address: 0x80799A08
static int zSceneSpecialRender_numFuncs; // size: 0x4, address: 0x80799A10
static class IDBasePair * scobj_idbps; // size: 0x4, address: 0x80799A14
static int scobj_size; // size: 0x4, address: 0x80700D68
static int nidbps; // size: 0x4, address: 0x80700D6C
static bool gSwitchedPlayersOnInit; // size: 0x1, address: 0x80799A18
static unsigned int gLastSceneID; // size: 0x4, address: 0x80799A1C
// Range: 0x801B1BA0 -> 0x801B1BB0
void World::_OGSceneEntity::Deactivate() {
}
// Range: 0x801B1BB0 -> 0x801B1C00
void World::_OGSceneEntity::Destroy(class _OGSceneEntity * this /* r31 */) {
}
// signature: World::_OGSceneSchema::Fix(World::Asset *, long, int)
// Range: 0x801B1C60 -> 0x801B1C68
void World::_OGSceneSchema::Fix() {
}
// signature: World::_OGSceneSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801B1C70 -> 0x801B1CBC
class EntityStub * World::_OGSceneSchema::CreateStub(class _OGSceneSchema * this /* r31 */) {
}
// signature: World::_OGSceneSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x801B1CC0 -> 0x801B1CD8
void World::_OGSceneSchema::DestroyStub() {
}
// signature: World::_OGSceneSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801B1CE0 -> 0x801B1D48
class Entity * World::_OGSceneSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World14_OGSceneEntity;
}
// Range: 0x801B1DA0 -> 0x801B2014
static unsigned int init_dynamic_type(class zScene * s /* r22 */, unsigned int index /* r23 */, class dynamic_type_data * d /* r24 */) {
    // Local variables
    int idx; // r0
    int count; // r5
    int dyn_size; // r0
    class xBase * b; // r28
    class xBase * next; // r27

    {
        // Range: 0x801B1ECC -> 0x801B1FF0
        // Local variables
        int i; // r26

        {
            // Range: 0x801B1ECC -> 0x801B1FF0
            // Local variables
            class xDynAsset * a; // r25
            unsigned int asset_size; // r1+0xC
        }
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x801B2020 -> 0x801B20E8
static void GrowBoxFuncDynamic(class zScene * s /* r24 */) {
    {
        // Range: 0x801B2038 -> 0x801B20C4
        // Local variables
        unsigned long i; // r28

        {
            // Range: 0x801B2038 -> 0x801B20C4
            {
                // Range: 0x801B2040 -> 0x801B20C4
                // Local variables
                int count; // r27
                int idx; // r0

                {
                    // Range: 0x801B2064 -> 0x801B20B8
                    // Local variables
                    int i; // r26

                    {
                        // Range: 0x801B2064 -> 0x801B20B8
                        // Local variables
                        int dyn_size; // r0

                        {
                            // Range: 0x801B2064 -> 0x801B20AC
                            // Local variables
                            int i; // r25

                            {
                                // Range: 0x801B2064 -> 0x801B20AC
                                // Local variables
                                class xDynAsset * a; // r0
                                unsigned int asset_size; // r1+0x8
                            }
                        }
                    }
                }
            }
        }
    }

    // References
    // -> static class dynamic_type_data dynamic_types[44];
}
// Range: 0x801B20F0 -> 0x801B21FC
static unsigned int zSceneInitFunc_DefaultEnt(class zScene * s /* r29 */, class zSceneObjectInstanceDesc * desc /* r30 */, unsigned int base_idx /* r31 */) {
    // Local variables
    unsigned char * block; // r25
    int count; // r24
    unsigned int assetSize; // r1+0x8
    unsigned int offset; // r23
    class xBase * b; // r22
    int type_idx; // r0

    {
        // Range: 0x801B2158 -> 0x801B21D8
        // Local variables
        int i; // r21

        {
            // Range: 0x801B2158 -> 0x801B21D8
            // Local variables
            void * asset; // r4
        }
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x801B2200 -> 0x801B22F4
static unsigned int zSceneInitFunc_Default(class zScene * s /* r25 */, class zSceneObjectInstanceDesc * desc /* r23 */, unsigned int base_idx /* r24 */) {
    // Local variables
    unsigned char * block; // r29
    int count; // r28
    unsigned int assetSize; // r1+0x8
    unsigned int offset; // r27
    class xBase * b; // r26
    int type_idx; // r0

    {
        // Range: 0x801B2264 -> 0x801B22D0
        // Local variables
        int i; // r25

        {
            // Range: 0x801B2264 -> 0x801B22D0
            // Local variables
            void * asset; // r4
        }
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x801B2300 -> 0x801B23D8
static unsigned int zSceneInitFunc_Env(class zScene * s /* r28 */, class zSceneObjectInstanceDesc * desc /* r29 */, unsigned int base_idx /* r30 */) {
    // Local variables
    unsigned char * block; // r31
    int count; // r0
    unsigned int offset; // r4
    class xBase * b; // r0
    int type_idx; // r0

    {
        // Range: 0x801B2340 -> 0x801B23B4
        // Local variables
        void * asset; // r4
    }

    // References
    // -> class zGlobals globals;
}
// signature: zSceneInitFunc_Player(zScene *, zSceneObjectInstanceDesc *, unsigned int)
// Range: 0x801B23E0 -> 0x801B2524
static unsigned int zSceneInitFunc_Player(class zScene * s /* r23 */, unsigned int base_idx /* r24 */) {
    // Local variables
    int type_idx; // r0
    int count; // r27

    {
        // Range: 0x801B240C -> 0x801B250C
        // Local variables
        class zEnt * entBlock; // r0

        {
            // Range: 0x801B2430 -> 0x801B2500
            // Local variables
            int idx; // r26

            {
                // Range: 0x801B2430 -> 0x801B2500
                // Local variables
                class xEntPlayerAsset * asset; // r19
                int playerAssetCount; // r0
                class xBase * b; // r25

                {
                    // Range: 0x801B249C -> 0x801B24CC
                    // Local variables
                    int i; // r18

                    {
                        // Range: 0x801B249C -> 0x801B24CC
                        // Local variables
                        class xEntPlayerAsset * temp; // r3
                    }
                }
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// Range: 0x801B2530 -> 0x801B26A4
static unsigned int zSceneInitFunc_Camera(class zScene * s /* r24 */, class zSceneObjectInstanceDesc * desc /* r29 */, unsigned int base_idx /* r30 */) {
    // Local variables
    int count; // r31
    int type_idx; // r0

    {
        // Range: 0x801B2560 -> 0x801B268C
        // Local variables
        class xBase * camBlock; // r3

        {
            // Range: 0x801B25BC -> 0x801B2680
            // Local variables
            int idx; // r25

            {
                // Range: 0x801B25BC -> 0x801B2680
                // Local variables
                class xBase * b; // r24

                {
                    // Range: 0x801B25BC -> 0x801B2628
                    // Local variables
                    class xCamAsset * assetCam; // r0
                }
                {
                    // Range: 0x801B2628 -> 0x801B2658
                    // Local variables
                    class zMG2PCamAsset * assetCam; // r0
                }
            }
        }
    }

    // References
    // -> class zGlobals globals;
}
// signature: zSceneInitFunc_Surface(zScene *, zSceneObjectInstanceDesc *, unsigned int)
// Range: 0x801B26B0 -> 0x801B2758
static unsigned int zSceneInitFunc_Surface(class zScene * s /* r28 */, unsigned int base_idx /* r27 */) {
    // Local variables
    int count; // r29
    int type_idx; // r0

    {
        // Range: 0x801B26F0 -> 0x801B2734
        // Local variables
        int idx; // r28

        {
            // Range: 0x801B26F0 -> 0x801B2734
            // Local variables
            class xBase * b; // r5
        }
    }

    // References
    // -> class zGlobals globals;
}
// signature: zSceneInitFunc_Dispatcher(zScene *, zSceneObjectInstanceDesc *, unsigned int)
// Range: 0x801B2760 -> 0x801B2830
static unsigned int zSceneInitFunc_Dispatcher(class zScene * s /* r26 */, unsigned int base_idx /* r25 */) {
    // Local variables
    int count; // r29
    int type_idx; // r0

    {
        // Range: 0x801B278C -> 0x801B2818
        // Local variables
        class st_ZDISPATCH_DATA * dpat_pool; // r28

        {
            // Range: 0x801B27A0 -> 0x801B280C
            // Local variables
            int idx; // r27

            {
                // Range: 0x801B27A0 -> 0x801B280C
                // Local variables
                class xEntAsset * asset; // r0
                class xBase * b; // r26
            }
        }
    }

    // References
    // -> class zGlobals globals;
}
// signature: zSceneSet(xBase *, int)
// Range: 0x801B2830 -> 0x801B284C
void zSceneSet() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x801B2850 -> 0x801B2938
void zSceneStartLoadingScreen() {
    {
        // Range: 0x801B2890 -> 0x801B2918
        // Local variables
        class LoadingScreen * loadingScreenAsset; // r5
    }

    // References
    // -> static bool renderLoadingScreen;
    // -> class zNGLoadingScreen gNGLoadingScreen;
    // -> static unsigned int loadingScreenHash;
}
// Range: 0x801B2940 -> 0x801B4148
bool zSceneInit(unsigned int theSceneID /* r1+0x8 */, int reloadInProgress /* r16 */, char * fullSceneName /* r15 */) {
    // Local variables
    class zScene * s; // r30
    int i; // r15
    char theLoadScene[128]; // r1+0x58
    bool done; // r14

    {
        // Range: 0x801B2AD0 -> 0x801B2F1C
        {
            // Range: 0x801B2BF4 -> 0x801B2CB4
            // Local variables
            char * pSceneId; // r0
        }
    }
    {
        // Range: 0x801B2F1C -> 0x801B4124
        // Local variables
        int curidx; // r0
        bool globalListDone; // r16
        unsigned long long bootBaseID; // r1+0x40
        unsigned int numOfSceneToCheck; // r0
        unsigned int BOOT_SCENE_ID; // r15
        int base_idx; // r1+0x10
        int type_idx; // r0
        int numDynAsset; // r0

        {
            // Range: 0x801B30E8 -> 0x801B311C
            // Local variables
            class xDynAsset * asset; // r0
            unsigned int asset_size; // r1+0x14
        }
        {
            // Range: 0x801B32D0 -> 0x801B3348
            // Local variables
            int type_idx; // r0
            int typeCount; // r0

            {
                // Range: 0x801B3304 -> 0x801B332C
                // Local variables
                int j; // r16
            }
        }
    }

    // References
    // -> class zBombManager gBombManager;
    // -> static int sNumActiveFrags;
    // -> static class zFrag * sFirstFreeFrag;
    // -> static class zFrag * sFirstActiveFrag;
    // -> static class zFrag sFragPool[256];
    // -> class Scene * primaryScene;
    // -> class zShrapnelLauncherNode * LauncherArray;
    // -> static int NumOfLaunchers;
    // -> static int nidbps;
    // -> static int scobj_size;
    // -> static class IDBasePair * scobj_idbps;
    // -> class zSoundSourcesPhysics ms_slotsPhysStorage[512];
    // -> static class zQueue sPhysQueue;
    // -> static class dynamic_type_data dynamic_types[44];
    // -> static class zSceneObjectInstanceDesc sInitTable[51];
    // -> int xModelInstStaticAlloc;
    // -> static class ztextbox * head_active;
    // -> static class tag_type new_tags[1];
    // -> static unsigned long new_tags_size;
    // -> static int sMemDepthSceneLoadEnd;
    // -> static int sSceneMemDepthStack[2];
    // -> static unsigned int theLoadSceneID;
    // -> long long startupTicks;
    // -> static int sMemDepthJustHIPStart;
    // -> static float pdone;
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
    // -> class zGlobals globals;
    // -> static unsigned int playerHipLoaded[4];
    // -> static unsigned int playerHipLoading[4];
    // -> class zNGLoadingScreen gNGLoadingScreen;
    // -> static bool renderLoadingScreen;
    // -> class object_instance objStorage[256];
    // -> class zQueue objPool;
    // -> static int gPlayerCount;
    // -> static class zPlayer * gPlayersCreated[4];
    // -> static class xAnimTable * gAnimTables[4];
    // -> bool gInSceneResetOrInit;
    // -> static int sMemDepthSceneInit;
    // -> static int sMemDepthJustHIPStartPlayer;
    // -> static enum eSceneInitState sceneInitState;
}
// Range: 0x801B4150 -> 0x801B4F58
void zSceneExit(int beginReload /* r24 */) {
    // Local variables
    int i; // r21
    unsigned int sceneID; // r26
    unsigned int nextSceneID; // r25
    int soundCurrent; // r1+0xC
    int soundTotal; // r1+0x8

    {
        // Range: 0x801B4458 -> 0x801B4618
        // Local variables
        char curScene[8]; // r1+0x30
        char nextScene[8]; // r1+0x38
    }
    {
        // Range: 0x801B4F18 -> 0x801B4F28
        // Local variables
        int j; // r21
    }

    // References
    // -> class CHavokShapeBuilder * s_instance;
    // -> static int sMemDepthSceneInit;
    // -> static int sMemDepthJustHIPStartPlayer;
    // -> static class zQueue sPhysQueue;
    // -> static int sMemDepthSceneStart;
    // -> static int sMemDepthJustHIPStart;
    // -> int stopUnloadHere;
    // -> int currentScene;
    // -> static int sSceneMemDepthStackTop;
    // -> static int sSceneMemDepthStack[2];
    // -> class SceneRecord thisSceneLoadList[2];
    // -> static int sMemDepthSceneLoadEnd;
    // -> class Scene * primaryScene;
    // -> static class zSoundsNamed * s_pSoundsNamedInSceneTail;
    // -> static class zSoundsNamed * s_pSoundsNamedInSceneHead;
    // -> class zOneLinerSystem gOneLinerSystem;
    // -> class zQueue objPool;
    // -> class zTimeHandlerMgr timehandler_mgr;
    // -> static bool gAssetMapResetFlag[4];
    // -> static void (* gAssetMapResetFuncs[4])(int playerChrType);
    // -> static int nidbps;
    // -> static int scobj_size;
    // -> static class IDBasePair * scobj_idbps;
    // -> int uiElementCount;
    // -> class zUI * uiElements[512];
    // -> static int sMapperCount;
    // -> static class zSoundModule soundMod;
    // -> bool gSysForceExit;
    // -> static class zFrag * sFirstActiveFrag;
    // -> class zPlayerLocationPlatformConnector * head;
    // -> static class zTriggerEntityMgr gTriggerEntityMgr;
    // -> static unsigned int gNextSceneID;
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// Range: 0x801B4F60 -> 0x801B5014
void zSetPortal(char * portalName /* r31 */) {
    // References
    // -> class zGlobals globals;
}
// Range: 0x801B5020 -> 0x801B5890
void zSceneSwitch(int forceSameScene /* r24 */, bool sameScene /* r22 */, int playerNum /* r23 */) {
    {
        // Range: 0x801B558C -> 0x801B5860
        // Local variables
        bool teleportPlayer; // r0

        {
            // Range: 0x801B5624 -> 0x801B580C
            // Local variables
            int i; // r24

            {
                // Range: 0x801B5624 -> 0x801B580C
                // Local variables
                class zDirection * direction; // r0
                unsigned long long PlayerMarkerStartID; // r0:r0

                {
                    // Range: 0x801B5624 -> 0x801B580C
                    // Local variables
                    class xEntFrame * frame; // r23
                }
            }
        }
    }

    // References
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
    // -> class xVec3 m_UnitAxisY;
    // -> class xGlobals * xglobals;
    // -> static unsigned int gNextSceneID;
    // -> unsigned int gLevelChanged;
    // -> static int playersActiveAtInitiatedPause;
    // -> class zGlobals globals;
}
// Range: 0x801B5890 -> 0x801B5920
void zSceneSaveGameIfPossible() {
    // References
    // -> class zGlobals globals;
}
// signature: zSceneSave(zScene *, bool)
// Range: 0x801B5920 -> 0x801B619C
void zSceneSave(class zScene * ent /* r14 */) {
    // Local variables
    class xSerial xser; // r1+0x8
    class xSerial * s; // r17

    {
        // Range: 0x801B5950 -> 0x801B5964
        // Local variables
        unsigned int i; // r6
    }
    {
        // Range: 0x801B59E4 -> 0x801B5A10
        // Local variables
        int i; // r18
    }
    {
        // Range: 0x801B5AB4 -> 0x801B5D74
        // Local variables
        int i; // r16

        {
            // Range: 0x801B5AB4 -> 0x801B5D74
            // Local variables
            class xBase * b; // r15
        }
    }
    {
        // Range: 0x801B5E90 -> 0x801B6140
        // Local variables
        unsigned int i; // r29

        {
            // Range: 0x801B5E90 -> 0x801B6140
            // Local variables
            class xBase * b; // r30
        }
    }

    // References
    // -> bool splitHorizontal;
    // -> static class zSoundModule soundMod;
    // -> static float offsety;
    // -> static float offsetx;
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// signature: zSceneLoad(zScene *, bool)
// Range: 0x801B61B0 -> 0x801B7190
void zSceneLoad(class zScene * ent /* r15 */) {
    // Local variables
    class xSerial xser; // r1+0x50
    class xSerial * s; // r17
    int sceneExist; // r1+0x34
    float musicVolume; // r1+0x30
    float sfxVolume; // r1+0x2C
    float cineVolume; // r1+0x28
    class zSoundModule * sMod; // r14
    bool inverted; // r1+0x9
    bool splitHorizontal; // r1+0x8
    unsigned int count; // r1+0x24

    {
        // Range: 0x801B61F0 -> 0x801B6204
        // Local variables
        unsigned int i; // r6
    }
    {
        // Range: 0x801B6270 -> 0x801B62E8
        // Local variables
        unsigned char playerCount; // r1+0xA

        {
            // Range: 0x801B62A4 -> 0x801B62D8
            // Local variables
            int i; // r19
        }
    }
    {
        // Range: 0x801B63CC -> 0x801B68AC
        // Local variables
        unsigned short i; // r16

        {
            // Range: 0x801B63CC -> 0x801B68AC
            // Local variables
            class xBase * b; // r15
        }
    }
    {
        // Range: 0x801B6DE4 -> 0x801B7108
        // Local variables
        unsigned short i; // r29

        {
            // Range: 0x801B6DE4 -> 0x801B7108
            // Local variables
            class xBase * b; // r30
        }
    }

    // References
    // -> static bool s_soundWrappersUpdatePaused;
    // -> bool splitHorizontal;
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
    // -> class SaveData g_saveData;
    // -> static class zSoundModule soundMod;
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
    // -> static float oldOffsety;
    // -> static float oldOffsetx;
    // -> static float offsety;
    // -> static float offsetx;
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// Range: 0x801B71A0 -> 0x801B71E8
void zSaveReset() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x801B71F0 -> 0x801B77E4
void zSceneReset() {
    // Local variables
    class zScene * s; // r20

    {
        // Range: 0x801B7360 -> 0x801B738C
        // Local variables
        int i; // r18
    }
    {
        // Range: 0x801B73A4 -> 0x801B7480
        // Local variables
        int i; // r18
    }
    {
        // Range: 0x801B77A8 -> 0x801B77B8
        // Local variables
        int i; // r18
    }

    // References
    // -> int numResets;
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
    // -> static class zQueue sQueue;
    // -> static class zSoundModule * sMod;
    // -> static class zSoundModule soundMod;
    // -> bool gSoundReadyToExit;
    // -> class zPlayerLocationPlatformConnector * head;
    // -> class xGlobals * xglobals;
    // -> class zBombManager gBombManager;
    // -> class Scene * primaryScene;
    // -> static class zFrag * sFirstActiveFrag;
    // -> bool gInSceneResetOrInit;
    // -> class zGlobals globals;
}
// Range: 0x801B77F0 -> 0x801B7900
void zSceneStoreCheckPoint(unsigned long long initialCameraID /* r31:r30 */) {
    // Local variables
    class zPlayerCheckPoint checkPoints[4]; // r1+0x8

    {
        // Range: 0x801B7810 -> 0x801B7874
        // Local variables
        int i; // r26
    }

    // References
    // -> class zGlobals globals;
    // -> class xGlobals * xglobals;
}
// signature: zSceneStoreCheckPoint(zPlayerCheckPoint *, unsigned long long)
// Range: 0x801B7900 -> 0x801B799C
void zSceneStoreCheckPoint() {
    // References
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// signature: ActivateCB(xBase *)
// Range: 0x801B79A0 -> 0x801B79B0
static void ActivateCB() {
}
// signature: DeactivateCB(xBase *)
// Range: 0x801B79B0 -> 0x801B7A40
static void DeactivateCB() {
}
// Range: 0x801B7A40 -> 0x801B7B04
static void zSceneSettings_Init() {
    // Local variables
    int numDynAsset; // r0

    {
        // Range: 0x801B7A68 -> 0x801B7AD8
        // Local variables
        int i; // r28

        {
            // Range: 0x801B7A68 -> 0x801B7AD8
            // Local variables
            class xDynAsset * asset; // r0
            unsigned int asset_size; // r1+0x8

            {
                // Range: 0x801B7A68 -> 0x801B7AD8
                // Local variables
                class zSceneParameters * sp; // r0
            }
        }
    }

    // References
    // -> class HDRSettings GlobalHDRSettings;
}
// Range: 0x801B7B10 -> 0x801B8D40
void zSceneSetup() {
    // Local variables
    class zScene * s; // r17
    int type_idx; // r0
    class zFloatingCollectible * baseCollectible; // r15
    int max_drivensort_iters; // r7
    unsigned int driven_swapped; // r8

    {
        // Range: 0x801B7EF4 -> 0x801B8430
        // Local variables
        int i; // r16

        {
            // Range: 0x801B7EF4 -> 0x801B8430
            // Local variables
            class xBase * b; // r15
        }
    }
    {
        // Range: 0x801B8448 -> 0x801B8474
        // Local variables
        int i; // r16
    }
    {
        // Range: 0x801B8498 -> 0x801B84C0
        // Local variables
        int i; // r16
    }
    {
        // Range: 0x801B8518 -> 0x801B85B0
        // Local variables
        unsigned int j; // r10
        unsigned int i; // r9

        {
            // Range: 0x801B851C -> 0x801B8598
            // Local variables
            class xEnt * bdriven; // r11

            {
                // Range: 0x801B855C -> 0x801B8584
                // Local variables
                class xBase * btmp; // r0
            }
        }
    }
    {
        // Range: 0x801B8608 -> 0x801B8D04
        // Local variables
        class FloatAndVoid defaultDist; // r1+0x8
        class xGroup * * tempGrpCurr; // r3
        class xGroup * * tempGrpList; // r15
        class xGroup * driveGroupList; // r14
        unsigned int numGroups; // r25
        unsigned int numDriven; // r24
        unsigned int numPrimeMovers; // r22
        unsigned int k; // r21
        int j; // r10
        int i; // r7
        int entCount; // r20
        class xEnt * * entList; // r19

        {
            // Range: 0x801B8684 -> 0x801B8704
            // Local variables
            class xEnt * ent; // r8
        }
        {
            // Range: 0x801B872C -> 0x801B882C
            // Local variables
            class xGroup * grp; // r26

            {
                // Range: 0x801B875C -> 0x801B8814
                // Local variables
                unsigned int j; // r27

                {
                    // Range: 0x801B875C -> 0x801B8814
                    {
                        // Range: 0x801B877C -> 0x801B8814
                        // Local variables
                        unsigned int gcnt; // r0

                        {
                            // Range: 0x801B87AC -> 0x801B8804
                            // Local variables
                            class xBase * gbase; // r0

                            {
                                // Range: 0x801B87C0 -> 0x801B8804
                                // Local variables
                                class xEnt * gent; // r0
                            }
                        }
                    }
                }
            }
        }
        {
            // Range: 0x801B883C -> 0x801B8AF0
            // Local variables
            class xBase * * grpBaseList; // r6
            class xGroupAsset * grpAssetList; // r5
            unsigned int allocsize; // r15

            {
                // Range: 0x801B8890 -> 0x801B8890
                // Local variables
                unsigned int i; // r7
            }
            {
                // Range: 0x801B89E8 -> 0x801B8AE0
                // Local variables
                int i; // r5

                {
                    // Range: 0x801B8A00 -> 0x801B8AE0
                    // Local variables
                    class xEnt * ent; // r0

                    {
                        // Range: 0x801B8A14 -> 0x801B8AE0
                        // Local variables
                        class xGroupAsset * gasset; // r11

                        {
                            // Range: 0x801B8A58 -> 0x801B8AB8
                            // Local variables
                            class xEnt * other; // r12
                        }
                    }
                }
            }
        }
        {
            // Range: 0x801B8B38 -> 0x801B8BC4
            // Local variables
            class xGroup * grp; // r0

            {
                // Range: 0x801B8B68 -> 0x801B8BAC
                // Local variables
                unsigned int j; // r10
            }
        }
        {
            // Range: 0x801B8BE8 -> 0x801B8C08
            // Local variables
            unsigned int i; // r0
        }
    }

    // References
    // -> bool uiHDREnabled;
    // -> static int simpObjTypeIndex;
    // -> static int trigTypeIndex;
    // -> static unsigned int enableScreenAdj;
    // -> class xGlobals * xglobals;
    // -> class xBase * (* lookupFunction)(unsigned long long uid);
    // -> static class effect * sRumbleBreakaway;
    // -> static class zSoundsNamed * s_pSoundsNamedInSceneHead;
    // -> static class System * fmodSys;
    // -> bool gSysForceExit;
    // -> static class zTriggerEntityMgr gTriggerEntityMgr;
    // -> int xModelInstStaticAlloc;
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
    // -> bool gInSceneSetup;
    // -> class zGlobals globals;
}
// signature: zSceneSetup_serialTraverseCB(unsigned int, xSerial *)
// Range: 0x801B8D40 -> 0x801B8E60
int zSceneSetup_serialTraverseCB(unsigned int clientID /* r31 */) {
    // Local variables
    char uiName[16]; // r1+0x10
    int val; // r1+0x8

    // References
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
}
// Range: 0x801B8E60 -> 0x801BA730
void zSceneUpdate(float elapsedSec /* f14 */) {
    // Local variables
    int i; // r17
    int isPaused; // r0
    float apadx; // f16
    float apady; // f15
    class zScene * pScene; // r18
    class xBase * * ppBaseObjs; // r17
    bool updateFXSystems; // r16

    {
        // Range: 0x801B8F20 -> 0x801B9004
        // Local variables
        class xCounter * x_mnus_start_counter; // r0
    }
    {
        // Range: 0x801B9074 -> 0x801B9B08
        // Local variables
        int i; // r30
    }
    {
        // Range: 0x801B9B34 -> 0x801B9BCC
        // Local variables
        int ii; // r17
    }
    {
        // Range: 0x801B9BF8 -> 0x801B9C94
        // Local variables
        int ii; // r17
    }
    {
        // Range: 0x801B9DCC -> 0x801BA25C
        // Local variables
        class xBase * bob; // r15

        {
            // Range: 0x801B9DD0 -> 0x801B9DD4
            // Local variables
            bool runIt; // r4
        }
    }

    // References
    // -> static class zFrag * sFirstActiveFrag;
    // -> unsigned int SCENE_ID_MNU_START;
    // -> class SaveData g_saveData;
    // -> class zTimeHandlerMgr timehandler_mgr;
    // -> static class zTriggerEntityMgr gTriggerEntityMgr;
    // -> void (* eventFunction)(class xBase * from, class xBase * to, unsigned int toEvent, class EventAny * params);
    // -> static unsigned int sSuddenMove;
    // -> class zOneLinerSystem gOneLinerSystem;
    // -> static class ztextbox * head_active;
    // -> static float offsety;
    // -> static float offsetx;
    // -> static float oldOffsety;
    // -> static float oldOffsetx;
    // -> class zPlayerInputPadMgr padManager;
    // -> static unsigned int enableScreenAdj;
    // -> class xGlobals * xglobals;
    // -> float gSceneUpdateTime;
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
    // -> class zGlobals globals;
}
// signature: zSceneObjHashtableAdd(unsigned long long, xBase *)
// Range: 0x801BA730 -> 0x801BA798
void zSceneObjHashtableAdd() {
    // Local variables
    int k; // r4
    int chkd; // r0

    {
        // Range: 0x801BA758 -> 0x801BA794
        // Local variables
        class IDBasePair * idbp; // r0
    }

    // References
    // -> static int nidbps;
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
}
// signature: zSceneFindObject(unsigned long long)
// Range: 0x801BA7A0 -> 0x801BA81C
class xBase * zSceneFindObject() {
    // References
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
}
// signature: zSceneGetName(unsigned long long)
// Range: 0x801BA820 -> 0x801BA8FC
char * zSceneGetName() {
    {
        // Range: 0x801BA8D0 -> 0x801BA8EC
        // Local variables
        char * n; // r0
    }

    // References
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
}
// Range: 0x801BA900 -> 0x801BA94C
char * zSceneGetName(class xBase * b /* r4 */) {
    {
        // Range: 0x801BA908 -> 0x801BA930
        // Local variables
        char * n; // r0
    }
}
// Range: 0x801BA950 -> 0x801BA9E4
void zSceneForAllBase(class xBase * (* func)(class xBase *, class zScene *, void *) /* r27 */, int baseType /* r28 */, void * data /* r29 */) {
    // Local variables
    class zScene * s; // r31

    {
        // Range: 0x801BA980 -> 0x801BA9BC
        // Local variables
        unsigned short i; // r30
    }

    // References
    // -> class zGlobals globals;
}
// signature: zScenePathToID(const char *)
// Range: 0x801BA9F0 -> 0x801BAAB4
unsigned int zScenePathToID() {
    // Local variables
    char * strPtr; // r3
    char * tok; // r4
    char tempStr[5]; // r1+0x8
}
// signature: zScene_UpdateFlyToInterface(float)
// Range: 0x801BAAC0 -> 0x801BAAC4
void zScene_UpdateFlyToInterface() {
}
// signature: zSceneEnableScreenAdj(unsigned int)
// Range: 0x801BAAD0 -> 0x801BAADC
void zSceneEnableScreenAdj() {
    // References
    // -> static unsigned int enableScreenAdj;
}
// Range: 0x801BAAE0 -> 0x801BAAFC
void zSceneSetOldScreenAdj() {
    // References
    // -> static float oldOffsety;
    // -> static float oldOffsetx;
    // -> static float offsety;
    // -> static float offsetx;
}
// signature: zSceneLoadPackFile(unsigned int, int, bool, const char *)
// Range: 0x801BAB00 -> 0x801BABA0
bool zSceneLoadPackFile(unsigned int id /* r30 */, int options /* r31 */) {
    // Local variables
    int versionNumber; // r3
}
// Range: 0x801BABA0 -> 0x801BAC00
bool zSceneLoadPackFileStep(unsigned int id /* r30 */, int options /* r31 */) {
}
// Range: 0x801BAC00 -> 0x801BACFC
void zSceneSetZPlaneParams(float znear /* f30 */, float zfar /* f31 */) {
    // Local variables
    class View * view; // r0

    {
        // Range: 0x801BAC30 -> 0x801BACD4
        {
            // Range: 0x801BAC6C -> 0x801BAC6C
            // Local variables
            int i; // r28
        }
    }
}
// Range: 0x801BAD00 -> 0x801BADFC
void zSceneSetFogStartEnd(float start /* f30 */, float end /* f31 */) {
    // Local variables
    class View * view; // r0

    {
        // Range: 0x801BAD30 -> 0x801BADD4
        {
            // Range: 0x801BAD6C -> 0x801BAD6C
            // Local variables
            int i; // r28
        }
    }
}
// Range: 0x801BAE00 -> 0x801BAF0C
void zSceneSetFogColor(float red /* f29 */, float green /* f30 */, float blue /* f31 */) {
    // Local variables
    class View * view; // r0

    {
        // Range: 0x801BAE38 -> 0x801BAEE0
        {
            // Range: 0x801BAE74 -> 0x801BAE74
            // Local variables
            int i; // r28
        }
    }
}
// Range: 0x801BAF10 -> 0x801BAFDC
void zSceneToggleLOD(bool enable /* r27 */) {
    // Local variables
    class View * view; // r0

    {
        // Range: 0x801BAF28 -> 0x801BAFC8
        {
            // Range: 0x801BAF64 -> 0x801BAF64
            // Local variables
            int i; // r28
        }
    }
}
// Range: 0x801BAFE0 -> 0x801BB008
int zSceneInMultiplayerTanks() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x801BB010 -> 0x801BB044
int zSceneInMultiplayerShootingGallery() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x801BB050 -> 0x801BB120
int zSceneInAllMultiplayer() {
    // References
    // -> class zGlobals globals;
}
