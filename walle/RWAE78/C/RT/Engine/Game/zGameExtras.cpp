/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zGameExtras.cpp
*/
static int g_enableGameExtras; // size: 0x4, address: 0x8076E024
static int g_currDay; // size: 0x4, address: 0x8076E028
static int g_currMonth; // size: 0x4, address: 0x8076E02C
static int g_gameExtraFlags; // size: 0x4, address: 0x8076E030
static class EGGItemFuncs EGGEmpty; // size: 0x10, address: 0x8076E038
static class EGGItem g_eggBasket[2]; // size: 0x20, address: 0x806FB040
static int g_flg_chEnabled; // size: 0x4, address: 0x8076E048
static float sCheatTimer; // size: 0x4, address: 0x8076E04C
static int sCheatInputCount; // size: 0x4, address: 0x8076E050
unsigned int sCheatAddShiny[16]; // size: 0x40, address: 0x806FB090
unsigned int sCheatAddSpatulas[16]; // size: 0x40, address: 0x806FB0D0
unsigned int sCheatBubbleBowl[16]; // size: 0x40, address: 0x806FB110
unsigned int sCheatCruiseBubble[16]; // size: 0x40, address: 0x806FB150
unsigned int sCheatMonsterGallery[16]; // size: 0x40, address: 0x806FB190
unsigned int sCheatArtTheatre[16]; // size: 0x40, address: 0x806FB1D0
unsigned int sCheatTestCheats[16]; // size: 0x40, address: 0x806FB210
unsigned int sCheatSwapCCLR[16]; // size: 0x40, address: 0x806FB250
unsigned int sCheatSwapCCUD[16]; // size: 0x40, address: 0x806FB290
static class GECheat cheatList[4]; // size: 0x40, address: 0x806FB2D0
unsigned int sCheatPressed[16]; // size: 0x40, address: 0x8076E058
static unsigned int aid_sndList[7]; // size: 0x1C, address: 0x806FB310
static class xEnt * sGalleryTitle; // size: 0x4, address: 0x8076E098
// Range: 0x800DD330 -> 0x800DD3E4
void zGameExtras_SceneInit() {
    // Local variables
    int somethingIsEnabled; // r31
    class EGGItem * egg_next; // r30

    {
        // Range: 0x800DD364 -> 0x800DD3A8
        // Local variables
        class EGGItem * egg; // r29
    }

    // References
    // -> static class EGGItem g_eggBasket[2];
    // -> static int g_enableGameExtras;
}
// Range: 0x800DD3F0 -> 0x800DD468
void zGameExtras_SceneReset() {
    // Local variables
    class EGGItem * egg_next; // r31

    {
        // Range: 0x800DD41C -> 0x800DD448
        // Local variables
        class EGGItem * egg; // r3
    }

    // References
    // -> static class EGGItem g_eggBasket[2];
    // -> static int g_enableGameExtras;
}
// Range: 0x800DD470 -> 0x800DD520
void zGameExtras_SceneExit() {
    // Local variables
    class EGGItem * egg_next; // r29

    {
        // Range: 0x800DD4AC -> 0x800DD4E8
        // Local variables
        class EGGItem * egg; // r3
    }

    // References
    // -> static int g_currMonth;
    // -> static int g_currDay;
    // -> static class EGGItem g_eggBasket[2];
    // -> static int g_enableGameExtras;
}
// Range: 0x800DD520 -> 0x800DD5B8
void zGameExtras_SceneUpdate(float dt /* f31 */) {
    // Local variables
    class EGGItem * egg_next; // r31

    {
        // Range: 0x800DD564 -> 0x800DD594
        // Local variables
        class EGGItem * egg; // r3
    }

    // References
    // -> static class EGGItem g_eggBasket[2];
    // -> static int g_enableGameExtras;
}
// signature: EGG_check_ExtrasFlags(EGGItem *)
// Range: 0x800DD5C0 -> 0x800DD794
static int EGG_check_ExtrasFlags() {
    // References
    // -> static int g_gameExtraFlags;
    // -> static int g_currDay;
    // -> static int g_currMonth;
}
// signature: zGameExtras_Save(xSerial *)
// Range: 0x800DD7A0 -> 0x800DD7B0
void zGameExtras_Save() {
    // References
    // -> static int g_flg_chEnabled;
}
// signature: zGameExtras_Load(xSerial *)
// Range: 0x800DD7B0 -> 0x800DD7F0
void zGameExtras_Load() {
    // Local variables
    int keepers; // r1+0x8

    // References
    // -> static int g_flg_chEnabled;
}
// signature: zGameCheatsUpdate(float)
// Range: 0x800DD7F0 -> 0x800DDA20
void zGameCheatsUpdate() {
    // Local variables
    int startover; // r4
    int match; // r30
    class GECheat * rec_next; // r29

    {
        // Range: 0x800DD884 -> 0x800DD9D8
        // Local variables
        class GECheat * rec_curr; // r7
    }

    // References
    // -> static int g_flg_chEnabled;
    // -> static class GECheat cheatList[4];
    // -> static float sCheatTimer;
    // -> unsigned int sCheatPressed[16];
    // -> static int sCheatInputCount;
    // -> enum eGameMode gGameMode;
}
// Range: 0x800DDA20 -> 0x800DDA58
static void GEC_cb_TestCheats() {
    // References
    // -> static unsigned int aid_sndList[7];
}
// Range: 0x800DDA60 -> 0x800DDA98
static void GEC_cb_SwapCCLR() {
    // References
    // -> static unsigned int aid_sndList[7];
}
// Range: 0x800DDAA0 -> 0x800DDAD8
static void GEC_cb_SwapCCUD() {
    // References
    // -> static unsigned int aid_sndList[7];
}
