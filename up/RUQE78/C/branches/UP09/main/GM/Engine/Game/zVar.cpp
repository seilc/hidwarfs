/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zVar.cpp
*/
static char buffer[12]; // size: 0xC, address: 0x807B57B8
static char buffer[32]; // size: 0x20, address: 0x8082CD18
static char buffer[32]; // size: 0x20, address: 0x8082CD38
static char buffer[32]; // size: 0x20, address: 0x8082CD58
static char buffer[32]; // size: 0x20, address: 0x8082CD78
static char buffer[32]; // size: 0x20, address: 0x8082CD98
static char buffer[32]; // size: 0x20, address: 0x8082CDB8
static char buffer[32]; // size: 0x20, address: 0x8082CDD8
static char buffer[32]; // size: 0x20, address: 0x8082CDF8
static char buffer[12]; // size: 0xC, address: 0x8082CE18
static char buffer[48]; // size: 0x30, address: 0x8082CE28
char * ACCECTP_PAD_DEFAULT; // size: 0x4, address: 0x807B57C4
char * BACK_PAD_DEFAULT; // size: 0x4, address: 0x807B57C8
char * ACCECTP_PAD_FLIPPED; // size: 0x4, address: 0x807B57CC
char * BACK_PAD_FLIPPED; // size: 0x4, address: 0x807B57D0
class var_type vars[13]; // size: 0x9C, address: 0x807B57D4
static class tag_type var_tag; // size: 0x14, address: 0x807B5870
class zVarEntry zVarEntryTable[65]; // size: 0x208, address: 0x807832A0
// Range: 0x8028B5E0 -> 0x8028B5EC
char * var_text_ActivePad() {
    // References
    // -> static char buffer[12];
}
// Range: 0x8028B5F0 -> 0x8028B650
char * var_text_CurrentScene() {
    // References
    // -> static char buffer[32];
    // -> class zGlobals globals;
}
// Range: 0x8028B650 -> 0x8028B6B0
static char * @unnamed@WAD03_cpp@::var_text_HealthP1() {
    // References
    // -> static char buffer[32];
    // -> class xGlobals * xglobals;
}
// Range: 0x8028B6B0 -> 0x8028B710
static char * @unnamed@WAD03_cpp@::var_text_HealthP2() {
    // References
    // -> static char buffer[32];
    // -> class xGlobals * xglobals;
}
// Range: 0x8028B710 -> 0x8028B770
static char * @unnamed@WAD03_cpp@::var_text_HealthP3() {
    // References
    // -> static char buffer[32];
    // -> class xGlobals * xglobals;
}
// Range: 0x8028B770 -> 0x8028B7D0
static char * @unnamed@WAD03_cpp@::var_text_HealthP4() {
    // References
    // -> static char buffer[32];
    // -> class xGlobals * xglobals;
}
// Range: 0x8028B7D0 -> 0x8028B818
char * var_text_TrophyError() {
    // References
    // -> static char buffer[32];
}
// Range: 0x8028B820 -> 0x8028B868
char * var_text_MCMaxSpace() {
    // References
    // -> static char buffer[32];
}
// Range: 0x8028B870 -> 0x8028B8B8
char * var_text_MCMinSpace() {
    // References
    // -> static char buffer[32];
}
// Range: 0x8028B8C0 -> 0x8028B928
char * var_text_MissingPad() {
    // Local variables
    int startidx; // r1+0x8

    // References
    // -> static char buffer[12];
}
// Range: 0x8028B930 -> 0x8028B9B4
char * var_text_PlayerPosition() {
    // Local variables
    class xVec3 & v; // r0

    // References
    // -> static char buffer[48];
    // -> class xGlobals * xglobals;
}
// Range: 0x8028B9C0 -> 0x8028B9EC
char * var_text_UIAcceptImage() {
    // References
    // -> char * ACCECTP_PAD_DEFAULT;
    // -> char * ACCECTP_PAD_FLIPPED;
    // -> class zGlobals globals;
}
// Range: 0x8028B9F0 -> 0x8028BA1C
char * var_text_UICancelImage() {
    // References
    // -> char * BACK_PAD_DEFAULT;
    // -> char * BACK_PAD_FLIPPED;
    // -> class zGlobals globals;
}
// signature: parse_tag_var(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8028BA20 -> 0x8028BB20
void parse_tag_var(class jot & j /* r31 */, class split_tag & ti /* r25 */) {
    // References
    // -> class var_type vars[13];
}
// Range: 0x8028BB20 -> 0x8028BB30
void var_init() {
    // References
    // -> static class tag_type var_tag;
}
// signature: zVarEntryCB_VibrationOnP1(void *)
// Range: 0x8028BB30 -> 0x8028BB44
unsigned int zVarEntryCB_VibrationOnP1() {
    // References
    // -> class zGlobals globals;
}
// signature: zVarEntryCB_SubtitlesOn(void *)
// Range: 0x8028BB50 -> 0x8028BB64
unsigned int zVarEntryCB_SubtitlesOn() {
    // References
    // -> class zGlobals globals;
}
// signature: zVarEntryCB_CurrentSceneLetter(void *)
// Range: 0x8028BB70 -> 0x8028BBF0
unsigned int zVarEntryCB_CurrentSceneLetter() {
    // Local variables
    char s[16]; // r1+0x8

    // References
    // -> class zGlobals globals;
}
// signature: zVarEntryCB_CurrentRoom(void *)
// Range: 0x8028BBF0 -> 0x8028BC98
unsigned int zVarEntryCB_CurrentRoom() {
    // Local variables
    int room; // r4
    char s[16]; // r1+0x8

    // References
    // -> class zGlobals globals;
}
// signature: zVarEntryCB_CounterValue(void *)
// Range: 0x8028BCA0 -> 0x8028BCA8
unsigned int zVarEntryCB_CounterValue() {
}
// signature: zVarEntryCB_IsEnabled(void *)
// Range: 0x8028BCB0 -> 0x8028BCBC
unsigned int zVarEntryCB_IsEnabled() {
}
// signature: zVarEntryCB_IsVisible(void *)
// Range: 0x8028BCC0 -> 0x8028BCCC
unsigned int zVarEntryCB_IsVisible() {
}
// signature: zVarEntryCB_TimerSecondsLeftValue(void *)
// Range: 0x8028BCD0 -> 0x8028BCEC
unsigned int zVarEntryCB_TimerSecondsLeftValue() {
    // Local variables
    class xTimer * timer; // r0
}
// signature: zVarEntryCB_TimerMilliSecondsLeftValue(void *)
// Range: 0x8028BCF0 -> 0x8028BD18
unsigned int zVarEntryCB_TimerMilliSecondsLeftValue() {
    // Local variables
    class xTimer * timer; // r0
}
// signature: zVarEntryCB_IsMNUS(void *)
// Range: 0x8028BD20 -> 0x8028BD58
unsigned int zVarEntryCB_IsMNUS() {
    // References
    // -> unsigned int SCENE_ID_MNU_START;
    // -> class zGlobals globals;
}
// signature: zVarEntryCB_DemoType(void *)
// Range: 0x8028BD60 -> 0x8028BD70
unsigned int zVarEntryCB_DemoType() {
    // References
    // -> class zGlobals globals;
}
// signature: zVarEntryCB_IsReferenceNULL(void *)
// Range: 0x8028BD70 -> 0x8028BD80
unsigned int zVarEntryCB_IsReferenceNULL() {
}
// signature: zVarEntryCB_PauseType(void *)
// Range: 0x8028BD80 -> 0x8028BD8C
unsigned int zVarEntryCB_PauseType() {
    // References
    // -> static enum ePauseType pause_type;
}
// signature: zVarEntryCB_PlayerType(void *)
// Range: 0x8028BD90 -> 0x8028BE20
unsigned int zVarEntryCB_PlayerType() {
    // References
    // -> static unsigned int gPlayerTags[6];
    // -> class zGlobals globals;
}
// signature: zVarEntryCB_StriaghtToMainMenuOnXbox(void *)
// Range: 0x8028BE20 -> 0x8028BE4C
unsigned int zVarEntryCB_StriaghtToMainMenuOnXbox() {
    // References
    // -> class zGlobals globals;
}
// signature: zVarEntryCB_ShowEnglishVideos(void *)
// Range: 0x8028BE50 -> 0x8028BE94
unsigned int zVarEntryCB_ShowEnglishVideos() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_ShowHints(void *)
// Range: 0x8028BEC0 -> 0x8028BED0
unsigned int zVarEntryCB_ShowHints() {
    // References
    // -> class zGlobals globals;
}
// signature: zVarEntryCB_IsPlayersHealthLow(void *)
// Range: 0x8028BED0 -> 0x8028BF14
unsigned int zVarEntryCB_IsPlayersHealthLow() {
}
// signature: zVarEntryCB_IsPlayerFalling(void *)
// Range: 0x8028BF20 -> 0x8028BFBC
unsigned int zVarEntryCB_IsPlayerFalling() {
}
// signature: zVarEntryCB_IsPlayerDashing(void *)
// Range: 0x8028BFC0 -> 0x8028C040
unsigned int zVarEntryCB_IsPlayerDashing() {
}
// signature: zVarEntryCB_IsPlayerIdling(void *)
// Range: 0x8028C040 -> 0x8028C0B4
unsigned int zVarEntryCB_IsPlayerIdling() {
}
// signature: zVarEntryCB_IsPlayerRunning(void *)
// Range: 0x8028C0C0 -> 0x8028C178
unsigned int zVarEntryCB_IsPlayerRunning() {
}
// signature: zVarEntryCB_IsPlayerSlipping(void *)
// Range: 0x8028C180 -> 0x8028C200
unsigned int zVarEntryCB_IsPlayerSlipping() {
}
// signature: zVarEntryCB_CheatMinigamesUnlocked(void *)
// Range: 0x8028C250 -> 0x8028C264
unsigned int zVarEntryCB_CheatMinigamesUnlocked() {
}
// signature: zVarEntryCB_IsJapanese(void *)
// Range: 0x8028C2C0 -> 0x8028C304
unsigned int zVarEntryCB_IsJapanese() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsKorean(void *)
// Range: 0x8028C310 -> 0x8028C354
unsigned int zVarEntryCB_IsKorean() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsDutch(void *)
// Range: 0x8028C360 -> 0x8028C3A4
unsigned int zVarEntryCB_IsDutch() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsGerman(void *)
// Range: 0x8028C3B0 -> 0x8028C3F4
unsigned int zVarEntryCB_IsGerman() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsChinese(void *)
// Range: 0x8028C400 -> 0x8028C444
unsigned int zVarEntryCB_IsChinese() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsDanish(void *)
// Range: 0x8028C450 -> 0x8028C494
unsigned int zVarEntryCB_IsDanish() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsFinnish(void *)
// Range: 0x8028C4A0 -> 0x8028C4E4
unsigned int zVarEntryCB_IsFinnish() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsFrench(void *)
// Range: 0x8028C4F0 -> 0x8028C534
unsigned int zVarEntryCB_IsFrench() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsGreek(void *)
// Range: 0x8028C540 -> 0x8028C584
unsigned int zVarEntryCB_IsGreek() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsItalian(void *)
// Range: 0x8028C590 -> 0x8028C5D4
unsigned int zVarEntryCB_IsItalian() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsNorwegian(void *)
// Range: 0x8028C5E0 -> 0x8028C624
unsigned int zVarEntryCB_IsNorwegian() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsPolish(void *)
// Range: 0x8028C630 -> 0x8028C674
unsigned int zVarEntryCB_IsPolish() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsPortuguese(void *)
// Range: 0x8028C680 -> 0x8028C6C4
unsigned int zVarEntryCB_IsPortuguese() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsRussian(void *)
// Range: 0x8028C6D0 -> 0x8028C714
unsigned int zVarEntryCB_IsRussian() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsSpanish(void *)
// Range: 0x8028C720 -> 0x8028C764
unsigned int zVarEntryCB_IsSpanish() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsSwedish(void *)
// Range: 0x8028C770 -> 0x8028C7B4
unsigned int zVarEntryCB_IsSwedish() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsUkranian(void *)
// Range: 0x8028C7C0 -> 0x8028C804
unsigned int zVarEntryCB_IsUkranian() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_SubGameType(void *)
// Range: 0x8028C840 -> 0x8028C850
unsigned int zVarEntryCB_SubGameType() {
    // References
    // -> class zGlobals globals;
}
// signature: zVarEntryCB_IsCoOp(void *)
// Range: 0x8028C850 -> 0x8028C8F0
unsigned int zVarEntryCB_IsCoOp() {
    // Local variables
    int totalHumans; // r29

    {
        // Range: 0x8028C878 -> 0x8028C8A8
        // Local variables
        int i; // r28
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zVarEntryCB_IsTankFull(void *)
// Range: 0x8028C8F0 -> 0x8028C910
unsigned int zVarEntryCB_IsTankFull() {
    // References
    // -> class zPlayerInventory inventory;
}
// signature: zVarEntryCB_IsBatteryFull(void *)
// Range: 0x8028C910 -> 0x8028C930
unsigned int zVarEntryCB_IsBatteryFull() {
    // References
    // -> class zPlayerInventory inventory;
}
// signature: zVarEntryCB_IsCanteenFull(void *)
// Range: 0x8028C940 -> 0x8028C960
unsigned int zVarEntryCB_IsCanteenFull() {
    // References
    // -> class zPlayerInventory inventory;
}
// signature: zVarEntryCB_IsSheetMusicFull(void *)
// Range: 0x8028C960 -> 0x8028C980
unsigned int zVarEntryCB_IsSheetMusicFull() {
    // References
    // -> class zPlayerInventory inventory;
}
