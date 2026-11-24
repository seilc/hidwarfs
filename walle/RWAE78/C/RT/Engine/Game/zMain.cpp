/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zMain.cpp
*/
float VBLANKS_PER_SEC; // size: 0x4, address: 0x806FB514
float SECS_PER_VBLANK; // size: 0x4, address: 0x80790764
unsigned int FB_DEPTH; // size: 0x4, address: 0x806FB518
unsigned int SCENE_ID_MNU_INGAME; // size: 0x4, address: 0x80790768
unsigned int SCENE_ID_MNU_START; // size: 0x4, address: 0x8079076C
char * gameRoot; // size: 0x4, address: 0x80790770
unsigned int OXM_DEMO_PARAM; // size: 0x4, address: 0x806FB51C
class zGlobals globals; // size: 0x568, address: 0x80790778
class xGlobals * xglobals; // size: 0x4, address: 0x806FB520
float ShortbreadCookieJar; // size: 0x4, address: 0x80790CE0
int gBuildNumber; // size: 0x4, address: 0x806FB524
unsigned int gEE2BuildNumber; // size: 0x4, address: 0x806FB528
static int sShowMenuOnBoot; // size: 0x4, address: 0x806FB52C
static class st_SERIAL_PERCID_SIZE g_xser_sizeinfo[36]; // size: 0x120, address: 0x806FB530
static enum eGameInitState gameInitState; // size: 0x4, address: 0x80790CE4
enum _tagGameVidMode gVidMode; // size: 0x4, address: 0x80790CE8
static unsigned int newGameSceneID; // size: 0x4, address: 0x80790CEC
static char newGameScene[128]; // size: 0x80, address: 0x80790CF0
static unsigned int gameSceneID; // size: 0x4, address: 0x80790D70
static char gameScene[128]; // size: 0x80, address: 0x80790D78
static int loopMemBaseIdx; // size: 0x4, address: 0x806FB650
float totalTime; // size: 0x4, address: 0x806CDCD8
float fadeInTime; // size: 0x4, address: 0x806CDCDC
float fadeOutTime; // size: 0x4, address: 0x806CDCE0
float blankPreTime; // size: 0x4, address: 0x806CDCE4
float blankPostTime; // size: 0x4, address: 0x806CDCE8
static class LegalScreenInfo legalInfo; // size: 0x98, address: 0x80790DF8
static class zEmbeddedStartupIcon gStartupIcon; // size: 0x14, address: 0x80790E90
static class zScaleform * strapScaleform; // size: 0x4, address: 0x80790EA4
static bool wrstDone; // size: 0x1, address: 0x80790EA8
static bool mnlsDone; // size: 0x1, address: 0x80790EA9
static class zScaleform hbmDisallowedIcon; // size: 0x170, address: 0x80790EB0
static class zScaleformAsset * hbmDisallowedIconAsset; // size: 0x4, address: 0x80791020
static enum BootMenuEnum menuStatus; // size: 0x4, address: 0x80791024
static bool showLoadingScreen; // size: 0x1, address: 0x80791028
static char * nextScenePath; // size: 0x4, address: 0x8079102C
static unsigned int menuModeID; // size: 0x4, address: 0x80791030
static bool gameInitDone; // size: 0x1, address: 0x80791035
int percentageDone; // size: 0x4, address: 0x80791038
static char buffer[128]; // size: 0x80, address: 0x80791040
// Range: 0x800EAD90 -> 0x800EAE18
int GameMain(int argc /* r30 */, char * * argv /* r31 */) {
    // Local variables
    class Game game; // r1+0x8

    // References
    // -> char * gameRoot;
    // -> class StartupConfig * config;
}
// signature: zMainSetNextScene(unsigned int, const char *)
// Range: 0x800EAE20 -> 0x800EAE38
void zMainSetNextScene() {
    // References
    // -> static char gameScene[128];
    // -> static unsigned int gameSceneID;
}
// Range: 0x800EAE40 -> 0x800EAE50
void zMainWRSTDone() {
    // References
    // -> static bool wrstDone;
}
// Range: 0x800EAE50 -> 0x800EAE60
void zMainMNLSDone() {
    // References
    // -> static bool mnlsDone;
}
// Range: 0x800EAEA0 -> 0x800EAF20
void DisplayHBMDisallowedIcon() {
    {
        // Range: 0x800EAEB0 -> 0x800EAF00
        // Local variables
        unsigned int hbmDisallowedHash; // r0
        char * HBM_DISALLOWED_REFERENCE; // r0
    }

    // References
    // -> static class zScaleform hbmDisallowedIcon;
    // -> static class zScaleformAsset * hbmDisallowedIconAsset;
}
// Range: 0x800EAF20 -> 0x800EBB58
bool zMainInit() {
    // Local variables
    bool done; // r27

    {
        // Range: 0x800EAF70 -> 0x800EB500
        // Local variables
        char ini[256]; // r1+0x8

        {
            // Range: 0x800EB324 -> 0x800EB350
            // Local variables
            int i; // r21
        }
    }
    {
        // Range: 0x800EB500 -> 0x800EB5D0
        // Local variables
        class zScaleformAsset * strapScreenAsset; // r21
        unsigned int strapScreenHash; // r0
        char * WRIST_STRAP_REFERENCE; // r0
    }

    // References
    // -> static int loopMemBaseIdx;
    // -> static unsigned int newGameSceneID;
    // -> static char newGameScene[128];
    // -> static unsigned int gameSceneID;
    // -> static char gameScene[128];
    // -> class zNGLoadingScreen gNGLoadingScreen;
    // -> char * SCENE_LAYER_BULK;
    // -> class Module * homeMenuModule;
    // -> char * SCENE_LAYER_FONT;
    // -> static bool mnlsDone;
    // -> static class zScaleform * mnlsScaleform;
    // -> char * SCENE_LAYER_MNLS;
    // -> static bool wrstDone;
    // -> static class zScaleform * strapScaleform;
    // -> struct {} __vt__10zScaleform;
    // -> char * SCENE_LAYER_WRST;
    // -> char gLanguages[16][8];
    // -> char gDefaultLanguage[8];
    // -> int gLanguageCount;
    // -> char gConsoleLanguage[8];
    // -> bool isNorthAmericanRegion;
    // -> class ConsoleLanguageMapping gConsoleLanguageTable[10];
    // -> int gConsoleLanguageCount;
    // -> static class zNPCNinjaManager gNPCNinjaManager;
    // -> static class zModuleGradientCurve * g_mod_grad_curve;
    // -> struct {} __vt__Q213GradientCurve20zModuleGradientCurve;
    // -> static class zModuleGradientCurve mod_grad_curve;
    // -> static class zModuleParSink * g_mod_par_sink;
    // -> struct {} __vt__14zModuleParSink;
    // -> struct {} __vt__7zModule;
    // -> static class zModuleParSink mod_par_sink;
    // -> static class zNPCManager gNPCManager;
    // -> static class st_XORDEREDARRAY g_modlistRenderSort;
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
    // -> static class st_XORDEREDARRAY g_modlist;
    // -> static class st_SERIAL_PERCID_SIZE g_xser_sizeinfo[36];
    // -> char * gameRoot;
    // -> class StartupConfig * config;
    // -> class zGlobals globals;
    // -> static enum eGameInitState gameInitState;
}
// Range: 0x800EBB60 -> 0x800EBFD0
static void zMainParseINIGlobals(class xIniFile * ini /* r26 */) {
    // Local variables
    unsigned int noDamage; // r0
    char * SCENE_ID_MNU_START_TEXT; // r0
    char * videosys; // r31

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
// Range: 0x800EBFD0 -> 0x800EC3F0
bool zMainLoopBodyFirst() {
    // References
    // -> static unsigned int gameSceneID;
    // -> static char gameScene[128];
    // -> class xGlobals * xglobals;
    // -> static char newGameScene[128];
    // -> static unsigned int newGameSceneID;
    // -> static char * nextScenePath;
    // -> static int sInMenu;
    // -> char * SCENE_LAYER_MNUS;
    // -> static bool firstRun;
    // -> unsigned int gzAsyncSceneID;
    // -> class zNGLoadingScreen gNGLoadingScreen;
    // -> class zGlobals globals;
    // -> static enum BootMenuEnum menuStatus;
    // -> static unsigned int menuModeID;
    // -> unsigned int SCENE_ID_MNU_START;
    // -> static int sShowMenuOnBoot;
}
// signature: zMainReadINI(const char *)
// Range: 0x800EC3F0 -> 0x800ECCBC
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
        // Range: 0x800EC4D8 -> 0x800ECC34
        // Local variables
        char * watermark; // r3
    }

    // References
    // -> long long startupTicks;
    // -> int gLanguageCount;
    // -> char gLanguages[16][8];
    // -> bool isNorthAmericanRegion;
    // -> char gDefaultLanguage[8];
    // -> int enableMenuMasher;
    // -> int enableSuperSoaker;
    // -> char * * soaklevels;
    // -> unsigned int gSoak;
    // -> int enableAudioAnnihilator;
    // -> char * allsoaklevels[80];
    // -> class zGlobals globals;
    // -> class FileError okay;
}
