/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zPlayerResources.cpp
*/
static unsigned int gPlayerTags[4]; // size: 0x10, address: 0x806D0060
static char * gPlayerLayers[4]; // size: 0x10, address: 0x80700098
static enum eAnimSetType gPlayerAnimSetTypeMap[4]; // size: 0x10, address: 0x806D0100
static int gPlayerCharacterAssetMap[4][4]; // size: 0x40, address: 0x807000A8
static bool gAssetMapResetFlag[4]; // size: 0x4, address: 0x807986B4
static unsigned int PLYMAnimSetMap[17]; // size: 0x44, address: 0x807000E8
static unsigned int ePLYMPlayerTypeHashes[17]; // size: 0x44, address: 0x807986B8
static unsigned int PLYVAnimSetMap[12]; // size: 0x30, address: 0x80700130
static unsigned int ePLYVPlayerTypeHashes[12]; // size: 0x30, address: 0x80798700
static class zPlayer * (* gPlayerCreateFuncs[4])(enum eAnimSetType animsetType, int playerIdx); // size: 0x10, address: 0x806D0118
static void (* gAssetMapResetFuncs[4])(int playerChrType); // size: 0x10, address: 0x806D0128
static void (* gPlayerChrAssetSetupFuncs[4])(unsigned int playerIdx, int playerChrType); // size: 0x10, address: 0x806D0138
static class xAnimTable * gAnimTables[4]; // size: 0x10, address: 0x80798730
static class zPlayer * gPlayersCreated[4]; // size: 0x10, address: 0x80798740
static int gPlayerCount; // size: 0x4, address: 0x80798750
static unsigned int gNextSceneID; // size: 0x4, address: 0x80798754
static class zPlayerResourcesSceneEntry gScenePlayerMappings[80]; // size: 0x780, address: 0x80798758
static class zPlayerResourcesSceneEntry gScenePlayerMappingDefault; // size: 0x18, address: 0x80798ED8
static unsigned int playerHipLoading[4]; // size: 0x10, address: 0x80798EF0
static unsigned int playerHipLoaded[4]; // size: 0x10, address: 0x80798F00
static int sMemDepthJustHIPStartPlayer; // size: 0x4, address: 0x80700160
// signature: @unnamed@WAD03_cpp@::CreateWallePlayer(Sext::AnimationSet::eAnimSetType, int)
// Range: 0x8017A800 -> 0x8017A970
static class zPlayer * @unnamed@WAD03_cpp@::CreateWallePlayer() {
    // References
    // -> struct {} __vt__Q217zSoundWalleEngine16DynamicParamLoad;
    // -> struct {} __vt__Q217zSoundWalleEngine15DynamicParamRPM;
    // -> struct {} __vt__17zSoundWalleEngine;
    // -> class xVec3 m_Null;
    // -> struct {} __vt__12zWallePlayer;
}
// signature: @unnamed@WAD03_cpp@::CreateEvePlayer(Sext::AnimationSet::eAnimSetType, int)
// Range: 0x8017A970 -> 0x8017ABA0
static class zPlayer * @unnamed@WAD03_cpp@::CreateEvePlayer() {
    // References
    // -> struct {} __vt__21zProjectileController;
    // -> struct {} __vt__8zCamTail;
    // -> struct {} __vt__Q217zSoundWalleEngine16DynamicParamLoad;
    // -> struct {} __vt__Q217zSoundWalleEngine15DynamicParamRPM;
    // -> struct {} __vt__Q215zSoundProgAsset12DynamicParam;
    // -> struct {} __vt__17zSoundWalleEngine;
    // -> struct {} __vt__10zEvePlayer;
}
// signature: @unnamed@WAD03_cpp@::CreatePLYMPlayer(Sext::AnimationSet::eAnimSetType, int)
// Range: 0x8017ABA0 -> 0x8017ADB0
static class zPlayer * @unnamed@WAD03_cpp@::CreatePLYMPlayer() {
    // References
    // -> struct {} __vt__Q217zSoundWalleEngine16DynamicParamLoad;
    // -> struct {} __vt__Q217zSoundWalleEngine15DynamicParamRPM;
    // -> struct {} __vt__17zSoundWalleEngine;
    // -> class xVec3 m_Null;
    // -> struct {} __vt__12zWallePlayer;
    // -> static unsigned int PLYMAnimSetMap[17];
    // -> static int gPlayerCharacterAssetMap[4][4];
    // -> static unsigned int gPlayerTags[4];
}
// signature: @unnamed@WAD03_cpp@::CreatePLYVPlayer(Sext::AnimationSet::eAnimSetType, int)
// Range: 0x8017ADB0 -> 0x8017B080
static class zPlayer * @unnamed@WAD03_cpp@::CreatePLYVPlayer() {
    // References
    // -> struct {} __vt__21zProjectileController;
    // -> struct {} __vt__8zCamTail;
    // -> struct {} __vt__Q217zSoundWalleEngine16DynamicParamLoad;
    // -> struct {} __vt__Q217zSoundWalleEngine15DynamicParamRPM;
    // -> struct {} __vt__Q215zSoundProgAsset12DynamicParam;
    // -> struct {} __vt__17zSoundWalleEngine;
    // -> struct {} __vt__10zEvePlayer;
    // -> static unsigned int PLYVAnimSetMap[12];
    // -> static int gPlayerCharacterAssetMap[4][4];
    // -> static unsigned int gPlayerTags[4];
}
// signature: @unnamed@WAD03_cpp@::PLYMChrAssetSetupFunc(unsigned int, int)
// Range: 0x8017B080 -> 0x8017B10C
static void @unnamed@WAD03_cpp@::PLYMChrAssetSetupFunc() {
    // References
    // -> static int gPlayerCharacterAssetMap[4][4];
    // -> static unsigned int gPlayerTags[4];
}
// signature: @unnamed@WAD03_cpp@::PLYVChrAssetSetupFunc(unsigned int, int)
// Range: 0x8017B110 -> 0x8017B19C
static void @unnamed@WAD03_cpp@::PLYVChrAssetSetupFunc() {
    // References
    // -> static int gPlayerCharacterAssetMap[4][4];
    // -> static unsigned int gPlayerTags[4];
}
// signature: zPlayerResourcesGetCharacterAssetID(unsigned int, unsigned int)
// Range: 0x8017B1A0 -> 0x8017B294
unsigned long long zPlayerResourcesGetCharacterAssetID() {
    // References
    // -> static unsigned int ePLYMPlayerTypeHashes[17];
    // -> static unsigned int ePLYVPlayerTypeHashes[12];
    // -> static int gPlayerCharacterAssetMap[4][4];
    // -> static unsigned int gPlayerTags[4];
}
// signature: zPlayerResourcesSetNextScene(unsigned int)
// Range: 0x8017B2A0 -> 0x8017B2AC
void zPlayerResourcesSetNextScene() {
    // References
    // -> static unsigned int gNextSceneID;
}
// signature: zPlayerResourcesParseScenePlayerMappingEntry(const char *, @unnamed@WAD03_cpp@::zPlayerResourcesSceneEntry &)
// Range: 0x8017B2B0 -> 0x8017B460
void zPlayerResourcesParseScenePlayerMappingEntry() {
    {
        // Range: 0x8017B2E0 -> 0x8017B440
        // Local variables
        bool found; // r31
        unsigned int playerTag; // r8

        {
            // Range: 0x8017B3EC -> 0x8017B41C
            // Local variables
            int i; // r9
        }
    }

    // References
    // -> static unsigned int gPlayerTags[4];
    // -> class __locale _current_locale;
}
// Range: 0x8017B460 -> 0x8017B66C
void zPlayerResourcesParseScenePlayerMapping(class xIniFile * ini /* r28 */) {
    // Local variables
    char * iniString; // r0
    int idx; // r1+0x8

    // References
    // -> class __locale _current_locale;
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappings[80];
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappingDefault;
}
// Range: 0x8017B670 -> 0x8017B9C0
int zPlayerResourcesCreatePlayers(enum eAnimSetType AnimSetType /* r1+0x8 */, class xAnimTable * * tables /* r1+0xC */) {
    // Local variables
    int tableCount; // r17
    enum eAnimSetType mappedType; // r0

    {
        // Range: 0x8017B7F4 -> 0x8017B998
        // Local variables
        int j; // r16

        {
            // Range: 0x8017B7F4 -> 0x8017B998
            {
                // Range: 0x8017B7F4 -> 0x8017B998
                // Local variables
                class zPlayer * player; // r15
            }
        }
    }

    // References
    // -> static int gPlayerCount;
    // -> static class xAnimTable * gAnimTables[4];
    // -> static class zPlayer * gPlayersCreated[4];
    // -> static enum eAnimSetType gPlayerAnimSetTypeMap[4];
    // -> static unsigned int gPlayerTags[4];
    // -> static class zPlayer * (* gPlayerCreateFuncs[4])(enum eAnimSetType animsetType, int playerIdx);
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappingDefault;
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappings[80];
    // -> class zGlobals globals;
    // -> static unsigned int gNextSceneID;
}
// Range: 0x8017B9C0 -> 0x8017BD34
void zPlayerResourcesLoadHIP(unsigned int gameSceneID /* r29 */) {
    {
        // Range: 0x8017BC40 -> 0x8017BD14
        // Local variables
        int i; // r31
    }

    // References
    // -> static char * gPlayerLayers[4];
    // -> static unsigned int gPlayerTags[4];
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappingDefault;
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappings[80];
    // -> static int sMemDepthJustHIPStartPlayer;
    // -> static unsigned int playerHipLoaded[4];
    // -> static unsigned int playerHipLoading[4];
    // -> class zGlobals globals;
    // -> class xGlobals * xglobals;
}
// Range: 0x8017BD40 -> 0x8017BE44
void zPlayerResourcesUnloadHIP() {
    {
        // Range: 0x8017BD60 -> 0x8017BD68
        // Local variables
        int i; // r29
    }
    {
        // Range: 0x8017BDA4 -> 0x8017BDD0
        // Local variables
        int i; // r29
    }

    // References
    // -> class zGlobals globals;
    // -> static int sMemDepthJustHIPStartPlayer;
    // -> static unsigned int gPlayerTags[4];
    // -> static unsigned int playerHipLoaded[4];
    // -> class xGlobals * xglobals;
}
// signature: zPlayerResourcesScenesUseSamePlayers(unsigned int, unsigned int)
// Range: 0x8017BE50 -> 0x8017C448
bool zPlayerResourcesScenesUseSamePlayers() {
    // Local variables
    unsigned int scene1Players; // r31
    unsigned int scene2Players; // r30

    {
        // Range: 0x8017C2DC -> 0x8017C2DC
        // Local variables
        int i; // r29
    }

    // References
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappingDefault;
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappings[80];
}
// signature: zPlayerResourcesSetPlayerCharacterAsset(unsigned int, int)
// Range: 0x8017C450 -> 0x8017C5DC
void zPlayerResourcesSetPlayerCharacterAsset() {
    // References
    // -> static bool gAssetMapResetFlag[4];
    // -> static void (* gPlayerChrAssetSetupFuncs[4])(unsigned int playerIdx, int playerChrType);
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappingDefault;
    // -> static unsigned int gNextSceneID;
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappings[80];
}
