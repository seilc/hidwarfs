/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zVar.cpp
*/
static char buffer[12]; // size: 0xC, address: 0x807E54A8
static char buffer[32]; // size: 0x20, address: 0x807E54B8
static char buffer[32]; // size: 0x20, address: 0x807E54D8
static char buffer[32]; // size: 0x20, address: 0x807E54F8
static char buffer[32]; // size: 0x20, address: 0x807E5518
static char buffer[32]; // size: 0x20, address: 0x807E5538
static char buffer[32]; // size: 0x20, address: 0x807E5558
static char buffer[32]; // size: 0x20, address: 0x807E5578
static char buffer[12]; // size: 0xC, address: 0x807E5598
static char buffer[48]; // size: 0x30, address: 0x807E55A8
char * ACCECTP_PAD_DEFAULT; // size: 0x4, address: 0x80700E78
char * BACK_PAD_DEFAULT; // size: 0x4, address: 0x80700E7C
char * ACCECTP_PAD_FLIPPED; // size: 0x4, address: 0x80700E80
char * BACK_PAD_FLIPPED; // size: 0x4, address: 0x80700E84
class var_type vars[12]; // size: 0x90, address: 0x80700E88
static class tag_type var_tag; // size: 0x14, address: 0x80700F18
class zVarEntry zVarEntryTable[62]; // size: 0x1F0, address: 0x806D1180
// Range: 0x801D0FA0 -> 0x801D0FA4
void zVarNewGame() {
}
// Range: 0x801D0FB0 -> 0x801D0FF8
char * var_text_ActivePad() {
    // References
    // -> static char buffer[12];
}
// Range: 0x801D1000 -> 0x801D1060
char * var_text_CurrentScene() {
    // References
    // -> static char buffer[32];
    // -> class zGlobals globals;
}
// Range: 0x801D1060 -> 0x801D10DC
static char * @unnamed@WAD03_cpp@::var_text_HealthP1() {
    // References
    // -> static char buffer[32];
    // -> class xGlobals * xglobals;
}
// Range: 0x801D10E0 -> 0x801D115C
static char * @unnamed@WAD03_cpp@::var_text_HealthP2() {
    // References
    // -> static char buffer[32];
    // -> class xGlobals * xglobals;
}
// Range: 0x801D1160 -> 0x801D11DC
static char * @unnamed@WAD03_cpp@::var_text_HealthP3() {
    // References
    // -> static char buffer[32];
    // -> class xGlobals * xglobals;
}
// Range: 0x801D11E0 -> 0x801D125C
static char * @unnamed@WAD03_cpp@::var_text_HealthP4() {
    // References
    // -> static char buffer[32];
    // -> class xGlobals * xglobals;
}
// Range: 0x801D1260 -> 0x801D12A8
char * var_text_MCMaxSpace() {
    // References
    // -> static char buffer[32];
}
// Range: 0x801D12B0 -> 0x801D12F8
char * var_text_MCMinSpace() {
    // References
    // -> static char buffer[32];
}
// Range: 0x801D1300 -> 0x801D1368
char * var_text_MissingPad() {
    // Local variables
    int startidx; // r1+0x8

    // References
    // -> static char buffer[12];
}
// Range: 0x801D1370 -> 0x801D13F4
char * var_text_PlayerPosition() {
    // Local variables
    class xVec3 * v; // r0

    // References
    // -> static char buffer[48];
    // -> class xGlobals * xglobals;
}
// Range: 0x801D1400 -> 0x801D142C
char * var_text_UIAcceptImage() {
    // References
    // -> char * ACCECTP_PAD_DEFAULT;
    // -> char * ACCECTP_PAD_FLIPPED;
    // -> class zGlobals globals;
}
// Range: 0x801D1430 -> 0x801D145C
char * var_text_UICancelImage() {
    // References
    // -> char * BACK_PAD_DEFAULT;
    // -> char * BACK_PAD_FLIPPED;
    // -> class zGlobals globals;
}
// signature: parse_tag_var(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801D1460 -> 0x801D1560
void parse_tag_var(class jot * j /* r31 */, class split_tag * ti /* r25 */) {
    // References
    // -> class var_type vars[12];
}
// Range: 0x801D1560 -> 0x801D1570
void var_init() {
    // References
    // -> static class tag_type var_tag;
}
// signature: zVarEntryCB_VibrationOnP1(void *)
// Range: 0x801D1570 -> 0x801D1584
unsigned int zVarEntryCB_VibrationOnP1() {
    // References
    // -> class zGlobals globals;
}
// signature: zVarEntryCB_SubtitlesOn(void *)
// Range: 0x801D1590 -> 0x801D15A4
unsigned int zVarEntryCB_SubtitlesOn() {
    // References
    // -> class zGlobals globals;
}
// signature: zVarEntryCB_CurrentSceneLetter(void *)
// Range: 0x801D15B0 -> 0x801D1630
unsigned int zVarEntryCB_CurrentSceneLetter() {
    // Local variables
    char s[16]; // r1+0x8

    // References
    // -> class zGlobals globals;
}
// signature: zVarEntryCB_CurrentRoom(void *)
// Range: 0x801D1630 -> 0x801D16D8
unsigned int zVarEntryCB_CurrentRoom() {
    // Local variables
    int room; // r4
    char s[16]; // r1+0x8

    // References
    // -> class zGlobals globals;
}
// signature: zVarEntryCB_CounterValue(void *)
// Range: 0x801D16E0 -> 0x801D16E8
unsigned int zVarEntryCB_CounterValue() {
}
// signature: zVarEntryCB_IsEnabled(void *)
// Range: 0x801D16F0 -> 0x801D16FC
unsigned int zVarEntryCB_IsEnabled() {
}
// signature: zVarEntryCB_IsVisible(void *)
// Range: 0x801D1700 -> 0x801D171C
unsigned int zVarEntryCB_IsVisible() {
}
// signature: zVarEntryCB_TimerSecondsLeftValue(void *)
// Range: 0x801D1720 -> 0x801D173C
unsigned int zVarEntryCB_TimerSecondsLeftValue() {
    // Local variables
    class xTimer * timer; // r0
}
// signature: zVarEntryCB_TimerMilliSecondsLeftValue(void *)
// Range: 0x801D1740 -> 0x801D1768
unsigned int zVarEntryCB_TimerMilliSecondsLeftValue() {
    // Local variables
    class xTimer * timer; // r0
}
// signature: zVarEntryCB_IsMNUS(void *)
// Range: 0x801D1770 -> 0x801D17A8
unsigned int zVarEntryCB_IsMNUS() {
    // References
    // -> unsigned int SCENE_ID_MNU_START;
    // -> class zGlobals globals;
}
// signature: zVarEntryCB_DemoType(void *)
// Range: 0x801D17B0 -> 0x801D17C0
unsigned int zVarEntryCB_DemoType() {
    // References
    // -> class zGlobals globals;
}
// signature: zVarEntryCB_IsReferenceNULL(void *)
// Range: 0x801D17C0 -> 0x801D17D0
unsigned int zVarEntryCB_IsReferenceNULL() {
}
// signature: zVarEntryCB_PauseType(void *)
// Range: 0x801D17D0 -> 0x801D17DC
unsigned int zVarEntryCB_PauseType() {
    // References
    // -> static enum ePauseType pause_type;
}
// signature: zVarEntryCB_PlayerType(void *)
// Range: 0x801D17E0 -> 0x801D1848
unsigned int zVarEntryCB_PlayerType() {
    // References
    // -> static unsigned int gPlayerTags[4];
    // -> class zGlobals globals;
}
// signature: zVarEntryCB_StriaghtToMainMenuOnXbox(void *)
// Range: 0x801D1850 -> 0x801D187C
unsigned int zVarEntryCB_StriaghtToMainMenuOnXbox() {
    // References
    // -> class zGlobals globals;
}
// signature: zVarEntryCB_ShowEnglishVideos(void *)
// Range: 0x801D1880 -> 0x801D18C4
unsigned int zVarEntryCB_ShowEnglishVideos() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsSceneUnlocked(void *)
// Range: 0x801D18D0 -> 0x801D18D8
unsigned int zVarEntryCB_IsSceneUnlocked() {
}
// signature: zVarEntryCB_IsSceneCompleted(void *)
// Range: 0x801D18E0 -> 0x801D18E8
unsigned int zVarEntryCB_IsSceneCompleted() {
}
// signature: zVarEntryCB_ShowHints(void *)
// Range: 0x801D18F0 -> 0x801D1900
unsigned int zVarEntryCB_ShowHints() {
    // References
    // -> class zGlobals globals;
}
// signature: zVarEntryCB_IsTaskCompleted(void *)
// Range: 0x801D1900 -> 0x801D192C
unsigned int zVarEntryCB_IsTaskCompleted() {
}
// signature: zVarEntryCB_IsTaskAvailable(void *)
// Range: 0x801D1930 -> 0x801D195C
unsigned int zVarEntryCB_IsTaskAvailable() {
}
// signature: zVarEntryCB_IsMissionLocked(void *)
// Range: 0x801D1960 -> 0x801D197C
unsigned int zVarEntryCB_IsMissionLocked() {
}
// signature: zVarEntryCB_IsMissionUnlocked(void *)
// Range: 0x801D1980 -> 0x801D199C
unsigned int zVarEntryCB_IsMissionUnlocked() {
}
// signature: zVarEntryCB_IsMissionCompleted(void *)
// Range: 0x801D19A0 -> 0x801D19BC
unsigned int zVarEntryCB_IsMissionCompleted() {
}
// signature: zVarEntryCB_IsPlayersHealthLow(void *)
// Range: 0x801D19C0 -> 0x801D1A08
unsigned int zVarEntryCB_IsPlayersHealthLow() {
    // Local variables
    class zPlayer * player; // r0
}
// signature: zVarEntryCB_IsPlayerFalling(void *)
// Range: 0x801D1A10 -> 0x801D1A90
unsigned int zVarEntryCB_IsPlayerFalling() {
}
// signature: zVarEntryCB_IsPlayerDashing(void *)
// Range: 0x801D1A90 -> 0x801D1AF4
unsigned int zVarEntryCB_IsPlayerDashing() {
}
// signature: zVarEntryCB_IsPlayerIdling(void *)
// Range: 0x801D1B00 -> 0x801D1B58
unsigned int zVarEntryCB_IsPlayerIdling() {
}
// signature: zVarEntryCB_IsPlayerRunning(void *)
// Range: 0x801D1B60 -> 0x801D1BFC
unsigned int zVarEntryCB_IsPlayerRunning() {
}
// signature: zVarEntryCB_IsPlayerSlipping(void *)
// Range: 0x801D1C00 -> 0x801D1C64
unsigned int zVarEntryCB_IsPlayerSlipping() {
}
// signature: zVarEntryCB_IsLevelPlayground(void *)
// Range: 0x801D1C70 -> 0x801D1C78
unsigned int zVarEntryCB_IsLevelPlayground() {
}
// signature: zVarEntryCB_IsLevelMission(void *)
// Range: 0x801D1C80 -> 0x801D1C88
unsigned int zVarEntryCB_IsLevelMission() {
}
// signature: zVarEntryCB_IsLevelHeist(void *)
// Range: 0x801D1C90 -> 0x801D1C98
unsigned int zVarEntryCB_IsLevelHeist() {
}
// signature: zVarEntryCB_IsLevelChase(void *)
// Range: 0x801D1CA0 -> 0x801D1CA8
unsigned int zVarEntryCB_IsLevelChase() {
}
// signature: zVarEntryCB_IsLevelMinigame(void *)
// Range: 0x801D1CB0 -> 0x801D1CB8
unsigned int zVarEntryCB_IsLevelMinigame() {
}
// signature: zVarEntryCB_CheatMinigamesUnlocked(void *)
// Range: 0x801D1CC0 -> 0x801D1CD4
unsigned int zVarEntryCB_CheatMinigamesUnlocked() {
}
// signature: zVarEntryCB_CheatBNLCORP(void *)
// Range: 0x801D1CE0 -> 0x801D1CE8
unsigned int zVarEntryCB_CheatBNLCORP() {
}
// signature: zVarEntryCB_IsPrimaryControllerSignedIn(void *)
// Range: 0x801D1CF0 -> 0x801D1CF8
unsigned int zVarEntryCB_IsPrimaryControllerSignedIn() {
}
// signature: zVarEntryCB_HasSaveData(void *)
// Range: 0x801D1D00 -> 0x801D1D08
unsigned int zVarEntryCB_HasSaveData() {
}
// signature: zVarEntryCB_HasSaveDataOnCurrentDevice(void *)
// Range: 0x801D1D10 -> 0x801D1D18
unsigned int zVarEntryCB_HasSaveDataOnCurrentDevice() {
}
// signature: zVarEntryCB_IsEnglish(void *)
// Range: 0x801D1D20 -> 0x801D1D64
unsigned int zVarEntryCB_IsEnglish() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsJapanese(void *)
// Range: 0x801D1D70 -> 0x801D1DB4
unsigned int zVarEntryCB_IsJapanese() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsKorean(void *)
// Range: 0x801D1DC0 -> 0x801D1E04
unsigned int zVarEntryCB_IsKorean() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsDutch(void *)
// Range: 0x801D1E10 -> 0x801D1E54
unsigned int zVarEntryCB_IsDutch() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsGerman(void *)
// Range: 0x801D1E60 -> 0x801D1EA4
unsigned int zVarEntryCB_IsGerman() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsChinese(void *)
// Range: 0x801D1EB0 -> 0x801D1EF4
unsigned int zVarEntryCB_IsChinese() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsDanish(void *)
// Range: 0x801D1F00 -> 0x801D1F44
unsigned int zVarEntryCB_IsDanish() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsFinnish(void *)
// Range: 0x801D1F50 -> 0x801D1F94
unsigned int zVarEntryCB_IsFinnish() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsFrench(void *)
// Range: 0x801D1FA0 -> 0x801D1FE4
unsigned int zVarEntryCB_IsFrench() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsGreek(void *)
// Range: 0x801D1FF0 -> 0x801D2034
unsigned int zVarEntryCB_IsGreek() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsItalian(void *)
// Range: 0x801D2040 -> 0x801D2084
unsigned int zVarEntryCB_IsItalian() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsNorwegian(void *)
// Range: 0x801D2090 -> 0x801D20D4
unsigned int zVarEntryCB_IsNorwegian() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsPolish(void *)
// Range: 0x801D20E0 -> 0x801D2124
unsigned int zVarEntryCB_IsPolish() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsPortuguese(void *)
// Range: 0x801D2130 -> 0x801D2174
unsigned int zVarEntryCB_IsPortuguese() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsRussian(void *)
// Range: 0x801D2180 -> 0x801D21C4
unsigned int zVarEntryCB_IsRussian() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsSpanish(void *)
// Range: 0x801D21D0 -> 0x801D2214
unsigned int zVarEntryCB_IsSpanish() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsSwedish(void *)
// Range: 0x801D2220 -> 0x801D2264
unsigned int zVarEntryCB_IsSwedish() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_IsUkranian(void *)
// Range: 0x801D2270 -> 0x801D22B4
unsigned int zVarEntryCB_IsUkranian() {
    // Local variables
    unsigned short region; // r0
}
// signature: zVarEntryCB_HasAnyMowbotHitPlayer(void *)
// Range: 0x801D22C0 -> 0x801D22CC
unsigned int zVarEntryCB_HasAnyMowbotHitPlayer() {
    // References
    // -> bool hitPlayer;
}
// signature: zVarEntryCB_HasAnyHumanHitPlayer(void *)
// Range: 0x801D22D0 -> 0x801D22DC
unsigned int zVarEntryCB_HasAnyHumanHitPlayer() {
    // References
    // -> bool hitPlayer;
}
// signature: zVarEntryCB_HumansKnockedOver(void *)
// Range: 0x801D22E0 -> 0x801D22EC
unsigned int zVarEntryCB_HumansKnockedOver() {
    // References
    // -> unsigned int knockedOverCount;
}
