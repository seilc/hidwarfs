/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zPlayerResources.cpp
*/
static unsigned int gPlayerTags[5]; // size: 0x14, address: 0x8068DC28
static char * gPlayerLayers[5]; // size: 0x14, address: 0x806C1CF4
static enum eAnimSetType gPlayerAnimSetTypeMap[5]; // size: 0x14, address: 0x8068DCF0
static int gPlayerCharacterAssetMap[5][4]; // size: 0x50, address: 0x806C1D08
static bool gAssetMapResetFlag[5]; // size: 0x5, address: 0x807541C0
static unsigned int ePLYMPlayerTypeHashes[17]; // size: 0x44, address: 0x807541C8
static unsigned int ePLYVPlayerTypeHashes[12]; // size: 0x30, address: 0x80754210
static class zPlayer * (* gPlayerCreateFuncs[5])(enum eAnimSetType animsetType, int playerIdx, class EntityHandleBase * handle); // size: 0x14, address: 0x8068DD04
static void (* gAssetMapResetFuncs[5])(int playerChrType); // size: 0x14, address: 0x8068DD18
static void (* gPlayerChrAssetSetupFuncs[5])(unsigned int playerIdx, int playerChrType); // size: 0x14, address: 0x8068DD2C
static class xAnimTable * gAnimTables[4]; // size: 0x10, address: 0x80754240
static class zPlayer * gPlayersCreated[4]; // size: 0x10, address: 0x80754250
static int gPlayerCount; // size: 0x4, address: 0x80754260
static unsigned int gNextSceneID; // size: 0x4, address: 0x80754264
static class zPlayerResourcesSceneEntry gScenePlayerMappings[80]; // size: 0x780, address: 0x80754268
static class zPlayerResourcesSceneEntry gScenePlayerMappingDefault; // size: 0x18, address: 0x807549E8
static unsigned int playerHipLoading[5]; // size: 0x14, address: 0x80754A00
static unsigned int playerHipLoaded[5]; // size: 0x14, address: 0x80754A14
static int sMemDepthJustHIPStartPlayer; // size: 0x4, address: 0x806C1D58
static int sPlayerHipIdx; // size: 0x4, address: 0x80754A28
// signature: @unnamed@WAD03_cpp@::CreatePlayer<zSBPlayer>(Sext::AnimationSet::eAnimSetType, int, World::EntityHandleBase *)
// Range: 0x80122410 -> 0x8012248C
static class zPlayer * @unnamed@WAD03_cpp@::CreatePlayer<zSBPlayer>(class EntityHandleBase * handle /* r29 */) {
    // References
    // -> struct {} __vt__9zSBPlayer;
}
// signature: @unnamed@WAD03_cpp@::CreatePlayer<zPlanktonPlayer>(Sext::AnimationSet::eAnimSetType, int, World::EntityHandleBase *)
// Range: 0x80122490 -> 0x80122500
static class zPlayer * @unnamed@WAD03_cpp@::CreatePlayer<zPlanktonPlayer>(class EntityHandleBase * handle /* r30 */) {
    // References
    // -> struct {} __vt__15zPlanktonPlayer;
}
// signature: @unnamed@WAD03_cpp@::CreatePlayer<zSBHubPlayer>(Sext::AnimationSet::eAnimSetType, int, World::EntityHandleBase *)
// Range: 0x80122560 -> 0x801225C8
static class zPlayer * @unnamed@WAD03_cpp@::CreatePlayer<zSBHubPlayer>(class EntityHandleBase * handle /* r30 */) {
    // References
    // -> struct {} __vt__12zSBHubPlayer;
}
// signature: @unnamed@WAD03_cpp@::CreatePlayer<zBoardPlayer>(Sext::AnimationSet::eAnimSetType, int, World::EntityHandleBase *)
// Range: 0x801225D0 -> 0x8012264C
static class zPlayer * @unnamed@WAD03_cpp@::CreatePlayer<zBoardPlayer>(class EntityHandleBase * handle /* r29 */) {
    // References
    // -> struct {} __vt__12zBoardPlayer;
}
// signature: @unnamed@WAD03_cpp@::CreatePlayer<zShootingPlayer>(Sext::AnimationSet::eAnimSetType, int, World::EntityHandleBase *)
// Range: 0x80122650 -> 0x801226B8
static class zPlayer * @unnamed@WAD03_cpp@::CreatePlayer<zShootingPlayer>(class EntityHandleBase * handle /* r30 */) {
    // References
    // -> struct {} __vt__15zShootingPlayer;
}
// signature: @unnamed@WAD03_cpp@::GetPlayerTypeIndexFromPlayerTag(unsigned int)
// Range: 0x801226C0 -> 0x80122700
static int @unnamed@WAD03_cpp@::GetPlayerTypeIndexFromPlayerTag() {
    {
        // Range: 0x801226C0 -> 0x801226F8
        // Local variables
        unsigned int i; // r6
    }

    // References
    // -> static unsigned int gPlayerTags[5];
}
// signature: @unnamed@WAD03_cpp@::GetSceneEntryIndex(unsigned int)
// Range: 0x80122700 -> 0x80122740
static int @unnamed@WAD03_cpp@::GetSceneEntryIndex() {
    {
        // Range: 0x80122700 -> 0x80122738
        // Local variables
        int i; // r6
    }

    // References
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappings[80];
}
// signature: @unnamed@WAD03_cpp@::GetSceneEntry(unsigned int)
// Range: 0x80122740 -> 0x80122784
static class zPlayerResourcesSceneEntry * @unnamed@WAD03_cpp@::GetSceneEntry() {
    // Local variables
    int index; // r0

    // References
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappings[80];
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappingDefault;
}
// signature: @unnamed@WAD03_cpp@::GetScenePlayerCount(unsigned int)
// Range: 0x80122790 -> 0x801227DC
static int @unnamed@WAD03_cpp@::GetScenePlayerCount() {
    // Local variables
    int index; // r0

    // References
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappings[80];
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappingDefault;
}
// Range: 0x801227E0 -> 0x80122818
unsigned int GetCurrentSceneID() {
    // References
    // -> class zGlobals globals;
    // -> static unsigned int gNextSceneID;
}
// Range: 0x80122820 -> 0x8012291C
unsigned long long zPlayerResourcesGetCharacterAssetID(unsigned int playerTag /* r31 */, unsigned int playerIdx /* r30 */) {
    // Local variables
    int playerTypeIndex; // r0

    {
        // Range: 0x80122844 -> 0x80122908
        // Local variables
        class EntityHandleBase * handle; // r0
        unsigned long long referencedID; // r0:r0

        {
            // Range: 0x801228D8 -> 0x801228F4
            // Local variables
            class PlayerTemplate * playerTemplate; // r0
        }
    }

    // References
    // -> static unsigned int ePLYMPlayerTypeHashes[17];
    // -> static int gPlayerCharacterAssetMap[5][4];
}
// Range: 0x80122920 -> 0x80122974
unsigned long long zPlayerResourcesGetCharacterAssetID(unsigned int playerIdx /* r31 */) {
    // Local variables
    unsigned int currSceneID; // r0
    class zPlayerResourcesSceneEntry * sceneEntry; // r0

    // References
    // -> static unsigned int gPlayerTags[5];
}
// signature: zPlayerResourcesSetNextScene(unsigned int)
// Range: 0x80122980 -> 0x8012298C
void zPlayerResourcesSetNextScene() {
    // References
    // -> static unsigned int gNextSceneID;
}
// Range: 0x80122990 -> 0x801229E4
void zPlayerResourcesScenePrepare() {
    {
        // Range: 0x8012299C -> 0x801229BC
        // Local variables
        int i; // r5
    }
    {
        // Range: 0x801229BC -> 0x801229D8
        // Local variables
        int k; // r0
    }

    // References
    // -> static int gPlayerCount;
    // -> static class zPlayer * gPlayersCreated[4];
    // -> static class xAnimTable * gAnimTables[4];
}
// Range: 0x801229F0 -> 0x80122B00
void zPlayerResourcesParseScenePlayerMappingEntry(char * iniString /* r30 */, class zPlayerResourcesSceneEntry & entry /* r31 */) {
    {
        // Range: 0x80122A04 -> 0x80122AEC
        // Local variables
        bool found; // r5
        unsigned int playerTag; // r4

        {
            // Range: 0x80122A04 -> 0x80122ABC
            // Local variables
            int i; // r6
        }
    }

    // References
    // -> static unsigned int gPlayerTags[5];
}
// Range: 0x80122B30 -> 0x80122C74
void zPlayerResourcesParseScenePlayerMapping(class xIniFile * ini /* r29 */) {
    // Local variables
    char * iniString; // r0
    int idx; // r1+0x8
    int entryCount; // r0

    {
        // Range: 0x80122BCC -> 0x80122C60
        // Local variables
        unsigned int sceneTag; // r0
    }

    // References
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappings[80];
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappingDefault;
}
// Range: 0x80122C80 -> 0x80122E00
int zPlayerResourcesCreatePlayers(enum eAnimSetType AnimSetType /* r17 */, class xAnimTable * * tables /* r18 */, class EntityHandleBase * handle /* r19 */) {
    // Local variables
    unsigned int currSceneID; // r0
    class zPlayerResourcesSceneEntry * entry; // r0
    int tableCount; // r22
    enum eAnimSetType mappedType; // r0

    {
        // Range: 0x80122CC0 -> 0x80122DE8
        // Local variables
        int j; // r21

        {
            // Range: 0x80122CC0 -> 0x80122DE8
            {
                // Range: 0x80122CC0 -> 0x80122DE8
                // Local variables
                class zPlayer * player; // r20
            }
        }
    }

    // References
    // -> static int gPlayerCount;
    // -> static class zPlayer * gPlayersCreated[4];
    // -> static class xAnimTable * gAnimTables[4];
    // -> static enum eAnimSetType gPlayerAnimSetTypeMap[5];
    // -> static unsigned int gPlayerTags[5];
    // -> static class zPlayer * (* gPlayerCreateFuncs[5])(enum eAnimSetType animsetType, int playerIdx, class EntityHandleBase * handle);
    // -> class zGlobals globals;
}
// Range: 0x80122E00 -> 0x80122F04
bool zPlayerResourcesLoadNextPlayerHIP(unsigned int gameSceneID /* r29 */) {
    // Local variables
    class zPlayerResourcesSceneEntry * sceneEntry; // r0
    int playerCount; // r0
    bool result; // r0

    // References
    // -> static unsigned int playerHipLoading[5];
    // -> static char * gPlayerLayers[5];
    // -> class zGlobals globals;
    // -> static unsigned int gPlayerTags[5];
    // -> static unsigned int playerHipLoaded[5];
    // -> static int sPlayerHipIdx;
}
// Range: 0x80122F10 -> 0x80122FA8
void zPlayerResourcesLoadHIP(unsigned int gameSceneID /* r31 */) {
    {
        // Range: 0x80122F4C -> 0x80122F6C
        // Local variables
        int j; // r0
    }

    // References
    // -> static int sMemDepthJustHIPStartPlayer;
    // -> class zGlobals globals;
    // -> static unsigned int playerHipLoaded[5];
    // -> static unsigned int playerHipLoading[5];
    // -> static int sPlayerHipIdx;
    // -> class xGlobals * xglobals;
}
// Range: 0x80122FB0 -> 0x8012304C
bool zPlayerResourcesLoadHIPStep(unsigned int gameSceneID /* r28 */) {
    // References
    // -> class zGlobals globals;
    // -> static unsigned int playerHipLoaded[5];
    // -> static int sPlayerHipIdx;
    // -> static unsigned int playerHipLoading[5];
}
// Range: 0x80123050 -> 0x80123108
void zPlayerResourcesUnloadHIP() {
    {
        // Range: 0x80123064 -> 0x801230B0
        // Local variables
        int i; // r27
    }

    // References
    // -> class zGlobals globals;
    // -> class xGlobals * xglobals;
    // -> static int sMemDepthJustHIPStartPlayer;
    // -> static unsigned int playerHipLoaded[5];
    // -> static unsigned int gPlayerTags[5];
}
// Range: 0x80123110 -> 0x80123178
void zPlayerResourcesAddPlayers() {
    {
        // Range: 0x80123124 -> 0x80123174
        // Local variables
        int i; // r9
    }

    // References
    // -> static int gPlayerCount;
    // -> static class zPlayer * gPlayersCreated[4];
    // -> class xGlobals * xglobals;
}
// Range: 0x80123180 -> 0x8012325C
bool zPlayerResourcesScenesUseSamePlayers(unsigned int scene1 /* r24 */, unsigned int scene2 /* r25 */) {
    // Local variables
    class zPlayerResourcesSceneEntry * entry1; // r0
    class zPlayerResourcesSceneEntry * entry2; // r0
    unsigned int scene1Players; // r27
    unsigned int scene2Players; // r26

    {
        // Range: 0x801231F4 -> 0x8012323C
        // Local variables
        int i; // r25
    }
}
// Range: 0x80123260 -> 0x801232F8
void zPlayerResourcesSetPlayerCharacterAsset(unsigned int playerIdx /* r29 */, int playerCharacterType /* r30 */) {
    // References
    // -> static bool gAssetMapResetFlag[5];
    // -> static void (* gPlayerChrAssetSetupFuncs[5])(unsigned int playerIdx, int playerChrType);
    // -> static unsigned int gNextSceneID;
}
// Range: 0x80123300 -> 0x80123380
void zPlayerResourcesSceneExit() {
    {
        // Range: 0x80123318 -> 0x8012336C
        // Local variables
        int i; // r27
    }

    // References
    // -> static void (* gAssetMapResetFuncs[5])(int playerChrType);
    // -> static bool gAssetMapResetFlag[5];
}
// Range: 0x80123380 -> 0x801233D4
unsigned long long zPlayerResources::GetPlayerTemplateID(unsigned int playerIdx /* r31 */) {
    // Local variables
    unsigned int currSceneID; // r0
    class zPlayerResourcesSceneEntry * sceneEntry; // r0

    // References
    // -> static unsigned int gPlayerTags[5];
}
// Range: 0x801233E0 -> 0x801234B4
unsigned long long zPlayerResources::GetPlayerTemplateID(unsigned int playerTag /* r31 */, unsigned int playerIdx /* r30 */) {
    // Local variables
    int playerTypeIndex; // r0

    {
        // Range: 0x80123404 -> 0x801234A0
        // Local variables
        class EntityHandleBase * handle; // r0
        unsigned long long referencedID; // r0:r0
    }

    // References
    // -> static unsigned int ePLYMPlayerTypeHashes[17];
    // -> static int gPlayerCharacterAssetMap[5][4];
}
