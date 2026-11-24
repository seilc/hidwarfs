/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zMain.cpp
*/
float VBLANKS_PER_SEC; // size: 0x4, address: 0x807AF520
float SECS_PER_VBLANK; // size: 0x4, address: 0x80821F34
unsigned int FB_DEPTH; // size: 0x4, address: 0x807AF524
unsigned int SCENE_ID_MNU_INGAME; // size: 0x4, address: 0x80821F38
unsigned int SCENE_ID_MNU_START; // size: 0x4, address: 0x80821F3C
char * gameRoot; // size: 0x4, address: 0x80821F40
unsigned int OXM_DEMO_PARAM; // size: 0x4, address: 0x807AF528
class zGlobals globals; // size: 0x598, address: 0x80821F48
class xGlobals * xglobals; // size: 0x4, address: 0x807AF52C
float ShortbreadCookieJar; // size: 0x4, address: 0x808224E0
int gBuildNumber; // size: 0x4, address: 0x807AF530
unsigned int gEE2BuildNumber; // size: 0x4, address: 0x807AF534
static int sShowMenuOnBoot; // size: 0x4, address: 0x807AF538
static class st_SERIAL_PERCID_SIZE g_xser_sizeinfo[23]; // size: 0xB8, address: 0x807AF540
static enum eGameInitState gameInitState; // size: 0x4, address: 0x808224E4
enum _tagGameVidMode gVidMode; // size: 0x4, address: 0x808224E8
char * gameNameList[10]; // size: 0x28, address: 0x807AF5F8
static unsigned int newGameSceneID; // size: 0x4, address: 0x808224EC
static char newGameScene[128]; // size: 0x80, address: 0x808224F0
static unsigned int gameSceneID; // size: 0x4, address: 0x80822570
static char gameScene[128]; // size: 0x80, address: 0x80822578
static int loopMemBaseIdx; // size: 0x4, address: 0x807AF620
static class LegalScreenInfo legalInfo; // size: 0x98, address: 0x808225F8
static class zEmbeddedStartupIcon gStartupIcon; // size: 0x14, address: 0x80822690
static class EntityHandleBase strapScaleform_dummyHandle; // size: 0x48, address: 0x808226A8
static class zScaleform * strapScaleform; // size: 0x4, address: 0x808226F0
static bool mnlsDone; // size: 0x1, address: 0x808226F4
static class EntityHandleBase hbmDisallowedIcon_dummyHandle; // size: 0x48, address: 0x808226F8
static class zScaleform hbmDisallowedIcon; // size: 0x150, address: 0x80822750
static class zScaleformAsset * hbmDisallowedIconAsset; // size: 0x4, address: 0x808228A0
static enum BootMenuEnum menuStatus; // size: 0x4, address: 0x808228A4
static char * nextScenePath; // size: 0x4, address: 0x808228A8
static unsigned int menuModeID; // size: 0x4, address: 0x808228AC
static bool gameInitDone; // size: 0x1, address: 0x808228B1
static char buffer[128]; // size: 0x80, address: 0x808228B8
// Range: 0x80193BA0 -> 0x80193C60
int GameMain(int argc /* r30 */, char * * argv /* r31 */) {
    // Local variables
    class Game game; // r1+0x8
    unsigned char language; // r3

    // References
    // -> char * gameRoot;
    // -> class StartupConfig * config;
    // -> char * gameNameList[10];
}
// signature: zMainSetNextScene(unsigned int, const char *)
// Range: 0x80193C60 -> 0x80193C78
void zMainSetNextScene() {
    // References
    // -> static char gameScene[128];
    // -> static unsigned int gameSceneID;
}
// Range: 0x80193C80 -> 0x80193D10
void DisplayHBMDisallowedIcon() {
    {
        // Range: 0x80193C90 -> 0x80193CDC
        // Local variables
        unsigned int hbmDisallowedHash; // r0
        char * HBM_DISALLOWED_REFERENCE; // r0
    }

    // References
    // -> static class zScaleform hbmDisallowedIcon;
    // -> static class zScaleformAsset * hbmDisallowedIconAsset;
}
// Range: 0x80193D10 -> 0x801947D8
bool zMainInit() {
    // Local variables
    bool done; // r29

    {
        // Range: 0x80193D5C -> 0x80194108
        // Local variables
        char ini[256]; // r1+0x8

        {
            // Range: 0x80193F30 -> 0x80193F5C
            // Local variables
            int i; // r21
        }
    }
    {
        // Range: 0x80194108 -> 0x80194224
        // Local variables
        class zScaleformAsset * strapScreenAsset; // r21
        unsigned int strapScreenHash; // r0
        char * WRIST_STRAP_REFERENCE; // r0
    }
    {
        // Range: 0x80194690 -> 0x8019472C
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
    // -> char * SCENE_LAYER_MNLS;
    // -> static class zScaleform * strapScaleform;
    // -> struct {} __vt__10zScaleform;
    // -> struct {} __vt__Q25World9xOGEntity;
    // -> static class EntityHandleBase strapScaleform_dummyHandle;
    // -> char * SCENE_LAYER_WRST;
    // -> char gLanguages[16][8];
    // -> char gDefaultLanguage[8];
    // -> class zGlobals globals;
    // -> int gLanguageCount;
    // -> char gConsoleLanguage[8];
    // -> bool isNorthAmericanRegion;
    // -> class ConsoleLanguageMapping gConsoleLanguageTable[10];
    // -> int gConsoleLanguageCount;
    // -> static class zNPCNinjaManager gNPCNinjaManager;
    // -> static class zNPCManager gNPCManager;
    // -> static class st_XORDEREDARRAY g_modlistRenderSort;
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
    // -> static class st_XORDEREDARRAY g_modlist;
    // -> static class st_SERIAL_PERCID_SIZE g_xser_sizeinfo[23];
    // -> char * gameRoot;
    // -> class StartupConfig * config;
    // -> class xGameInterface g_gameInterface;
    // -> class Module * trcModule;
    // -> static enum eGameInitState gameInitState;
}
// Range: 0x80194800 -> 0x8019485C
static void zMainInitGlobals() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x80194860 -> 0x80194C9C
static void zMainParseINIGlobals(class xIniFile * ini /* r28 */) {
    // Local variables
    unsigned int noDamage; // r0
    char * SCENE_ID_MNU_START_TEXT; // r0
    char * videosys; // r27

    // References
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
    // -> class zGlobals globals;
}
// Range: 0x80194CA0 -> 0x80195018
bool zMainLoopBodyFirst() {
    // References
    // -> static unsigned int gameSceneID;
    // -> static char gameScene[128];
    // -> class xGlobals * xglobals;
    // -> static char newGameScene[128];
    // -> static unsigned int newGameSceneID;
    // -> static char * nextScenePath;
    // -> enum eGameState gGameState;
    // -> enum eGameMode gGameMode;
    // -> class zGlobals globals;
    // -> static int sInMenu;
    // -> char * SCENE_LAYER_MNUS;
    // -> static bool firstRun;
    // -> static enum BootMenuEnum menuStatus;
    // -> static unsigned int menuModeID;
    // -> unsigned int SCENE_ID_MNU_START;
    // -> static int sShowMenuOnBoot;
}
// signature: zMainReadINI(const char *)
// Range: 0x80195020 -> 0x80195904
static void zMainReadINI() {
    // Local variables
    char * str; // r24
    unsigned int size; // r0
    class xIniFile * ini; // r27
    char * temp_str; // r23
    unsigned int num_levels; // r30
    int fileSize; // r23
    class File iniFile; // r1+0x10
    class FileError file_err; // r1+0x8

    {
        // Range: 0x80195108 -> 0x8019587C
        // Local variables
        char * watermark; // r3
        char * dumpCinematicsFile; // r0
    }

    // References
    // -> long long startupTicks;
    // -> int gLanguageCount;
    // -> char gLanguages[16][8];
    // -> bool isEuropeRegion;
    // -> bool isNorthAmericanRegion;
    // -> char gDefaultLanguage[8];
    // -> int enableMenuMasher;
    // -> int enableSoakStatisticsMode;
    // -> int enableSuperSoaker;
    // -> char * * soaklevels;
    // -> unsigned int gSoak;
    // -> int enableAudioAnnihilator;
    // -> char * allsoaklevels[80];
    // -> class zGlobals globals;
    // -> class FileError okay;
}
