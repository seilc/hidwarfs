/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zPlayerResources.cpp
*/
static unsigned int gPlayerTags[6]; // size: 0x18, address: 0x80782CE0
static char * gPlayerLayers[6]; // size: 0x18, address: 0x807B4E70
static enum eAnimSetType gPlayerAnimSetTypeMap[6]; // size: 0x18, address: 0x80782DB8
static int gPlayerCharacterAssetMap[6][4]; // size: 0x60, address: 0x807B4E88
static bool gAssetMapResetFlag[6]; // size: 0x6, address: 0x80824CEC
static unsigned int ePLYMPlayerTypeHashes[17]; // size: 0x44, address: 0x80824CF4
static unsigned int ePLYVPlayerTypeHashes[12]; // size: 0x30, address: 0x80824D38
static class zPlayer * (* gPlayerCreateFuncs[6])(enum eAnimSetType animsetType, int playerIdx, class EntityHandleBase * handle); // size: 0x18, address: 0x80782DD0
static void (* gAssetMapResetFuncs[6])(int playerChrType); // size: 0x18, address: 0x80782DE8
static void (* gPlayerChrAssetSetupFuncs[6])(unsigned int playerIdx, int playerChrType); // size: 0x18, address: 0x80782E00
static class xAnimTable * gAnimTables[4]; // size: 0x10, address: 0x80824D68
static class zPlayer * gPlayersCreated[4]; // size: 0x10, address: 0x80824D78
static int gPlayerCount; // size: 0x4, address: 0x80824D88
static unsigned int gNextSceneID; // size: 0x4, address: 0x80824D8C
static class zPlayerResourcesSceneEntry gScenePlayerMappings[80]; // size: 0x780, address: 0x80824D90
static class zPlayerResourcesSceneEntry gScenePlayerMappingDefault; // size: 0x18, address: 0x80825510
static unsigned int playerHipLoading[6]; // size: 0x18, address: 0x80825528
static unsigned int playerHipLoaded[6]; // size: 0x18, address: 0x80825540
static int sMemDepthJustHIPStartPlayer; // size: 0x4, address: 0x807B4EE8
// signature: @unnamed@WAD03_cpp@::CreatePlayer<zCarlPlayer>(Sext::AnimationSet::eAnimSetType, int, World::EntityHandleBase *)
// Range: 0x80211A10 -> 0x80211BBC
static class zPlayer * @unnamed@WAD03_cpp@::CreatePlayer<zCarlPlayer>(class EntityHandleBase * handle /* r29 */) {
    // References
    // -> struct {} __vt__11zCarlPlayer;
    // -> unsigned int numLiveNonDogEnemies;
    // -> unsigned int numLiveEnemies;
    // -> class zNPCBase * liveNonDogEnemyList[64];
    // -> class zNPCBase * liveEnemyList[64];
    // -> class zNPCBase * stunnedEnemyList[64];
    // -> struct {} __vt__9zUPPlayer;
}
// signature: @unnamed@WAD03_cpp@::CreatePlayer<zRussellPlayer>(Sext::AnimationSet::eAnimSetType, int, World::EntityHandleBase *)
// Range: 0x80211BC0 -> 0x80211D6C
static class zPlayer * @unnamed@WAD03_cpp@::CreatePlayer<zRussellPlayer>(class EntityHandleBase * handle /* r29 */) {
    // References
    // -> struct {} __vt__14zRussellPlayer;
    // -> unsigned int numLiveNonDogEnemies;
    // -> unsigned int numLiveEnemies;
    // -> class zNPCBase * liveNonDogEnemyList[64];
    // -> class zNPCBase * liveEnemyList[64];
    // -> class zNPCBase * stunnedEnemyList[64];
    // -> struct {} __vt__9zUPPlayer;
}
// signature: @unnamed@WAD03_cpp@::CreatePlayer<zDugPlayer>(Sext::AnimationSet::eAnimSetType, int, World::EntityHandleBase *)
// Range: 0x80211D70 -> 0x80211F30
static class zPlayer * @unnamed@WAD03_cpp@::CreatePlayer<zDugPlayer>(class EntityHandleBase * handle /* r29 */) {
    // References
    // -> struct {} __vt__10zDugPlayer;
    // -> struct {} __vt__15zUPAnimalPlayer;
    // -> unsigned int numLiveNonDogEnemies;
    // -> unsigned int numLiveEnemies;
    // -> class zNPCBase * liveNonDogEnemyList[64];
    // -> class zNPCBase * liveEnemyList[64];
    // -> class zNPCBase * stunnedEnemyList[64];
    // -> struct {} __vt__9zUPPlayer;
}
// signature: @unnamed@WAD03_cpp@::CreatePlayer<zKevinPlayer>(Sext::AnimationSet::eAnimSetType, int, World::EntityHandleBase *)
// Range: 0x80211F30 -> 0x802120F0
static class zPlayer * @unnamed@WAD03_cpp@::CreatePlayer<zKevinPlayer>(class EntityHandleBase * handle /* r29 */) {
    // References
    // -> struct {} __vt__12zKevinPlayer;
    // -> struct {} __vt__15zUPAnimalPlayer;
    // -> unsigned int numLiveNonDogEnemies;
    // -> unsigned int numLiveEnemies;
    // -> class zNPCBase * liveNonDogEnemyList[64];
    // -> class zNPCBase * liveEnemyList[64];
    // -> class zNPCBase * stunnedEnemyList[64];
    // -> struct {} __vt__9zUPPlayer;
}
// signature: @unnamed@WAD03_cpp@::CreatePlayer<zHousePlayer>(Sext::AnimationSet::eAnimSetType, int, World::EntityHandleBase *)
// Range: 0x802120F0 -> 0x80212158
static class zPlayer * @unnamed@WAD03_cpp@::CreatePlayer<zHousePlayer>(class EntityHandleBase * handle /* r30 */) {
    // References
    // -> struct {} __vt__12zHousePlayer;
}
// signature: @unnamed@WAD03_cpp@::CreatePlayer<zBiplanePlayer>(Sext::AnimationSet::eAnimSetType, int, World::EntityHandleBase *)
// Range: 0x80212160 -> 0x802123C4
static class zPlayer * @unnamed@WAD03_cpp@::CreatePlayer<zBiplanePlayer>(class EntityHandleBase * handle /* r30 */) {
    // References
    // -> struct {} __vt__16zCamBiplaneGlide;
    // -> struct {} __vt__14zBiplanePlayer;
    // -> unsigned int numLiveNonDogEnemies;
    // -> unsigned int numLiveEnemies;
    // -> class zNPCBase * liveNonDogEnemyList[64];
    // -> class zNPCBase * liveEnemyList[64];
    // -> class zNPCBase * stunnedEnemyList[64];
    // -> struct {} __vt__9zUPPlayer;
}
// signature: zPlayerResourcesGetCharacterAssetID(unsigned int, unsigned int)
// Range: 0x802123D0 -> 0x802124C8
unsigned long long zPlayerResourcesGetCharacterAssetID() {
    // References
    // -> static unsigned int ePLYMPlayerTypeHashes[17];
    // -> static int gPlayerCharacterAssetMap[6][4];
    // -> static unsigned int gPlayerTags[6];
}
// signature: zPlayerResourcesSetNextScene(unsigned int)
// Range: 0x802124D0 -> 0x802124DC
void zPlayerResourcesSetNextScene() {
    // References
    // -> static unsigned int gNextSceneID;
}
// signature: zPlayerResourcesParseScenePlayerMappingEntry(const char *, @unnamed@WAD03_cpp@::zPlayerResourcesSceneEntry &)
// Range: 0x802124E0 -> 0x80212690
void zPlayerResourcesParseScenePlayerMappingEntry() {
    {
        // Range: 0x80212510 -> 0x80212670
        // Local variables
        bool found; // r31
        unsigned int playerTag; // r8

        {
            // Range: 0x8021261C -> 0x8021264C
            // Local variables
            int i; // r9
        }
    }

    // References
    // -> static unsigned int gPlayerTags[6];
    // -> class __locale _current_locale;
}
// Range: 0x80212690 -> 0x8021289C
void zPlayerResourcesParseScenePlayerMapping(class xIniFile * ini /* r28 */) {
    // Local variables
    char * iniString; // r0
    int idx; // r1+0x8

    // References
    // -> class __locale _current_locale;
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappings[80];
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappingDefault;
}
// Range: 0x802128A0 -> 0x80212BD8
int zPlayerResourcesCreatePlayers(enum eAnimSetType AnimSetType /* r15 */, class xAnimTable * * tables /* r1+0x8 */, class EntityHandleBase * handle /* r1+0xC */) {
    // Local variables
    unsigned int currSceneID; // r0
    class zPlayerResourcesSceneEntry * entry; // r0
    int tableCount; // r18
    enum eAnimSetType mappedType; // r0

    {
        // Range: 0x80212A0C -> 0x80212BB0
        // Local variables
        int j; // r17

        {
            // Range: 0x80212A0C -> 0x80212BB0
            {
                // Range: 0x80212A0C -> 0x80212BB0
                // Local variables
                class zPlayer * player; // r16
            }
        }
    }

    // References
    // -> static int gPlayerCount;
    // -> static class xAnimTable * gAnimTables[4];
    // -> static class zPlayer * gPlayersCreated[4];
    // -> static enum eAnimSetType gPlayerAnimSetTypeMap[6];
    // -> static unsigned int gPlayerTags[6];
    // -> static class zPlayer * (* gPlayerCreateFuncs[6])(enum eAnimSetType animsetType, int playerIdx, class EntityHandleBase * handle);
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappingDefault;
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappings[80];
    // -> class zGlobals globals;
    // -> static unsigned int gNextSceneID;
}
// Range: 0x80212BE0 -> 0x80212F5C
void zPlayerResourcesLoadHIP(unsigned int gameSceneID /* r29 */) {
    {
        // Range: 0x80212E70 -> 0x80212F3C
        // Local variables
        int i; // r31
    }

    // References
    // -> static char * gPlayerLayers[6];
    // -> static unsigned int gPlayerTags[6];
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappingDefault;
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappings[80];
    // -> static int sMemDepthJustHIPStartPlayer;
    // -> static unsigned int playerHipLoaded[6];
    // -> static unsigned int playerHipLoading[6];
    // -> class zGlobals globals;
    // -> class xGlobals * xglobals;
}
// signature: zPlayerResourcesSetPlayerCharacterAsset(unsigned int, int)
// Range: 0x80212F60 -> 0x802130EC
void zPlayerResourcesSetPlayerCharacterAsset() {
    // References
    // -> static bool gAssetMapResetFlag[6];
    // -> static void (* gPlayerChrAssetSetupFuncs[6])(unsigned int playerIdx, int playerChrType);
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappingDefault;
    // -> static unsigned int gNextSceneID;
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappings[80];
}
