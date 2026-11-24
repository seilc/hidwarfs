/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zMain.cpp
*/
float VBLANKS_PER_SEC; // size: 0x4, address: 0x806BD8C0
float SECS_PER_VBLANK; // size: 0x4, address: 0x80752670
unsigned int FB_DEPTH; // size: 0x4, address: 0x806BD8C4
unsigned int SCENE_ID_MNU_INGAME; // size: 0x4, address: 0x80752674
unsigned int SCENE_ID_MNU_START; // size: 0x4, address: 0x80752678
char * gameRoot; // size: 0x4, address: 0x8075267C
unsigned int OXM_DEMO_PARAM; // size: 0x4, address: 0x806BD8C8
int gUseFileCache; // size: 0x4, address: 0x80752680
class zGlobals globals; // size: 0x5A0, address: 0x80752688
class xGlobals * xglobals; // size: 0x4, address: 0x806BD8CC
float ShortbreadCookieJar; // size: 0x4, address: 0x80752C28
int gBuildNumber; // size: 0x4, address: 0x806BD8D0
unsigned int gEE2BuildNumber; // size: 0x4, address: 0x806BD8D4
static int sShowMenuOnBoot; // size: 0x4, address: 0x806BD8D8
static bool gBackupBufferInitialized; // size: 0x1, address: 0x80752C2C
static class st_SERIAL_PERCID_SIZE g_xser_sizeinfo[19]; // size: 0x98, address: 0x806BD8E0
static enum eGameInitState gameInitState; // size: 0x4, address: 0x80752C30
enum _tagGameVidMode gVidMode; // size: 0x4, address: 0x80752C34
char * gameNameList[10]; // size: 0x28, address: 0x806BD978
static unsigned int newGameSceneID; // size: 0x4, address: 0x80752C38
static char newGameScene[128]; // size: 0x80, address: 0x80752C40
static unsigned int gameSceneID; // size: 0x4, address: 0x80752CC0
static char gameScene[128]; // size: 0x80, address: 0x80752CC8
static int loopMemBaseIdx; // size: 0x4, address: 0x806BD9A0
static class LegalScreenInfo legalInfo; // size: 0x98, address: 0x80752D48
static class zEmbeddedStartupIcon gStartupIcon; // size: 0x14, address: 0x80752DE0
static class EntityHandleBase strapScaleform_dummyHandle; // size: 0x48, address: 0x80752DF8
static class zScaleform * strapScaleform; // size: 0x4, address: 0x80752E40
static bool mnlsDone; // size: 0x1, address: 0x80752E44
static class EntityHandleBase hbmDisallowedIcon_dummyHandle; // size: 0x48, address: 0x80752E48
static class zScaleform hbmDisallowedIcon; // size: 0x140, address: 0x80752EA0
static class zScaleformAsset * hbmDisallowedIconAsset; // size: 0x4, address: 0x80752FE0
enum BootMenuEnum menuStatus; // size: 0x4, address: 0x80753E38
char * nextScenePath; // size: 0x4, address: 0x80753E3C
unsigned int menuModeID; // size: 0x4, address: 0x80753E40
enum SceneInitState sceneInitState; // size: 0x4, address: 0x80753E48
char buffer[128]; // size: 0x80, address: 0x80753E50
// Range: 0x800D38F0 -> 0x800D39A8
int GameMain(int argc /* r30 */, char * * argv /* r31 */) {
    // Local variables
    class Game game; // r1+0x8
    unsigned char language; // r3

    // References
    // -> char * gameRoot;
    // -> class StartupConfig * config;
    // -> char * gameNameList[10];
}
// Range: 0x80103790 -> 0x801037AC
void * LegalScreenInfo::LegalScreenInfo() {
}
// signature: zMainSetNextScene(unsigned int, const char *)
// Range: 0x800D39B0 -> 0x800D39C8
void zMainSetNextScene() {
    // References
    // -> static char gameScene[128];
    // -> static unsigned int gameSceneID;
}
// Range: 0x800D39D0 -> 0x800D3A60
void DisplayHBMDisallowedIcon() {
    {
        // Range: 0x800D39E0 -> 0x800D3A2C
        // Local variables
        unsigned int hbmDisallowedHash; // r0
        char * HBM_DISALLOWED_REFERENCE; // r0
    }

    // References
    // -> static class zScaleform hbmDisallowedIcon;
    // -> static class zScaleformAsset * hbmDisallowedIconAsset;
}
// Range: 0x800D3A60 -> 0x800D3A7C
void ClearHBMDisallowedIcon() {
    // References
    // -> static class zScaleform hbmDisallowedIcon;
}
// Range: 0x800D3A80 -> 0x800D4AF4
bool zMainInit() {
    // Local variables
    bool done; // r24

    {
        // Range: 0x800D3AD0 -> 0x800D46A0
        // Local variables
        char ini[256]; // r1+0x18

        {
            // Range: 0x800D460C -> 0x800D4644
            // Local variables
            int i; // r21
        }
    }
    {
        // Range: 0x800D46A0 -> 0x800D4768
        // Local variables
        class zScaleformAsset * strapScreenAsset; // r21
        unsigned int strapScreenHash; // r0
        char * WRIST_STRAP_REFERENCE; // r0
    }
    {
        // Range: 0x800D49A4 -> 0x800D4A48
        // Local variables
        unsigned long long fontAssetID2; // r0:r0
    }

    // References
    // -> static int loopMemBaseIdx;
    // -> static unsigned int newGameSceneID;
    // -> static char newGameScene[128];
    // -> static unsigned int gameSceneID;
    // -> static char gameScene[128];
    // -> char * SCENE_LAYER_BULK;
    // -> unsigned long long prototypeID;
    // -> class Module * homeMenuModule;
    // -> char * SCENE_LAYER_FONT;
    // -> static class zScaleform * mnlsScaleform;
    // -> char gDefaultLanguage[8];
    // -> char * SCENE_LAYER_MNLS;
    // -> static class zScaleform * strapScaleform;
    // -> static class EntityHandleBase strapScaleform_dummyHandle;
    // -> char * SCENE_LAYER_WRST;
    // -> char gConsoleLanguage[8];
    // -> static class st_XORDEREDARRAY g_modlistRenderSort;
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
    // -> static class st_XORDEREDARRAY g_modlist;
    // -> static class st_SERIAL_PERCID_SIZE g_xser_sizeinfo[19];
    // -> float ShortbreadCookieJar;
    // -> static int sShowMenuOnBoot;
    // -> bool japanese_word_breaking;
    // -> float SECS_PER_VBLANK;
    // -> float VBLANKS_PER_SEC;
    // -> unsigned int FB_DEPTH;
    // -> enum _tagGameVidMode gVidMode;
    // -> unsigned int SCENE_ID_MNU_START;
    // -> unsigned int SCENE_ID_MNU_INGAME;
    // -> unsigned int OXM_DEMO_PARAM;
    // -> int noDTRMovies;
    // -> static int enableMenuMasher;
    // -> int enableSoakStatisticsMode;
    // -> int enableSuperSoaker;
    // -> char * * soaklevels;
    // -> static int enableAudioAnnihilator;
    // -> unsigned int gSoak;
    // -> char * allSoakLevels[80];
    // -> class FileError okay;
    // -> char * gameRoot;
    // -> class StartupConfig * config;
    // -> class xGameInterface g_gameInterface;
    // -> class Module * trcModule;
    // -> class zGlobals globals;
    // -> static enum eGameInitState gameInitState;
}
// Range: 0x800D4C10 -> 0x800D4C50
int zMainKill() {
}
// Range: 0x800D4C50 -> 0x800D4EF0
bool zMainLoopBodyFirst() {
    // References
    // -> static unsigned int gameSceneID;
    // -> static char gameScene[128];
    // -> class xGlobals * xglobals;
    // -> static char newGameScene[128];
    // -> static unsigned int newGameSceneID;
    // -> char * nextScenePath;
    // -> static bool gBackupBufferInitialized;
    // -> class zGlobals globals;
    // -> char * SCENE_LAYER_MNUS;
    // -> enum BootMenuEnum menuStatus;
    // -> unsigned int menuModeID;
    // -> unsigned int SCENE_ID_MNU_START;
    // -> static int sShowMenuOnBoot;
}
// Range: 0x800D4EF0 -> 0x800D4FB0
bool zMainLoopSceneInit() {
    // References
    // -> static char gameScene[128];
    // -> static unsigned int gameSceneID;
    // -> enum SceneInitState sceneInitState;
}
