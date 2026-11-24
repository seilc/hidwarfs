/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCheat.cpp
*/
class zGameCheats gGameCheats; // size: 0x3, address: 0x8081C2F8
bool achievmentsAllowed; // size: 0x1, address: 0x8081C2FB
unsigned int lastFrameButtons; // size: 0x4, address: 0x8081C2FC
unsigned long long buttonHistory; // size: 0x8, address: 0x8081C300
class CheatCode cheatCodeList[10]; // size: 0xF0, address: 0x807A34B8
// Range: 0x80131CE0 -> 0x80131D40
void zCheatInit() {
    // References
    // -> bool achievmentsAllowed;
    // -> class zGlobals globals;
    // -> class zGameCheats gGameCheats;
}
// signature: zCheatProcess(eCheats)
// Range: 0x80131D40 -> 0x80131DB0
void zCheatProcess() {
}
// Range: 0x80131DB0 -> 0x80131DD8
void zCheatUpCollect100Badges() {
    // References
    // -> class zPlayerInventory inventory;
    // -> class zGameCheats gGameCheats;
}
// Range: 0x80131DE0 -> 0x80131E00
void zCheatUpCollectCanteen() {
    // References
    // -> class zPlayerInventory inventory;
    // -> class zGameCheats gGameCheats;
}
// Range: 0x80131E00 -> 0x80131E20
void zCheatUpCollectHearingAid() {
    // References
    // -> class zPlayerInventory inventory;
    // -> class zGameCheats gGameCheats;
}
// Range: 0x80131E20 -> 0x80131E40
void zCheatUpCollectBugle() {
    // References
    // -> class zPlayerInventory inventory;
    // -> class zGameCheats gGameCheats;
}
// Range: 0x80131E40 -> 0x80131E60
void zCheatUpCollectBalloonAnimals() {
    // References
    // -> class zPlayerInventory inventory;
    // -> class zGameCheats gGameCheats;
}
// Range: 0x80131E60 -> 0x8013310C
void zCheatUpActionCarl() {
    // References
    // -> class Renderable3DTransform g_identity;
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
    // -> class xGlobals * xglobals;
    // -> class zGameCheats gGameCheats;
}
// Range: 0x80133110 -> 0x80133144
void zCheatUpActionRussell() {
    // References
    // -> class zGameCheats gGameCheats;
}
// Range: 0x80133150 -> 0x80133168
void zCheatPitchUpDialog() {
    // References
    // -> class zGameCheats gGameCheats;
}
// Range: 0x80133170 -> 0x80133188
void zCheatUpDoubleBadgePoints() {
    // References
    // -> class zGameCheats gGameCheats;
}
// Range: 0x80133190 -> 0x801331A8
void zCheatUpUnlimitedSpecialAbility() {
    // References
    // -> class zGameCheats gGameCheats;
}
// Range: 0x801331B0 -> 0x801331E8
void zCheatUpUnlockAllLevel() {
    // References
    // -> class zPlayerInventory inventory;
    // -> class zGameCheats gGameCheats;
    // -> class zGlobals globals;
}
// Range: 0x801331F0 -> 0x80133208
void zCheatUpBalloonExplode() {
    // References
    // -> class zGameCheats gGameCheats;
}
// Range: 0x80133210 -> 0x80133228
void zCheatUpShootingDogBark() {
    // References
    // -> class zGameCheats gGameCheats;
}
// Range: 0x80133230 -> 0x8013327C
void zCheatUpBlackWhiteMPLevel() {
    // References
    // -> class zGameCheats gGameCheats;
}
// Range: 0x80133280 -> 0x801332CC
void zCheatUpBlackWhiteStoryLevel() {
    // References
    // -> class zGameCheats gGameCheats;
}
// Range: 0x801332D0 -> 0x801332F4
void zCheatUnlimitedHealth() {
    // References
    // -> class zGlobals globals;
    // -> class zGameCheats gGameCheats;
}
// Range: 0x80133300 -> 0x80133318
void zCheatUnlockMultiplayerMaps() {
    // References
    // -> class zGameCheats gGameCheats;
}
// Range: 0x80133320 -> 0x80133338
void zCheatUnlockBonusMaterials() {
    // References
    // -> class zGameCheats gGameCheats;
}
// Range: 0x80133340 -> 0x80133378
void zCheatGiveAllUnlockables() {
    // References
    // -> class zPlayerInventory inventory;
    // -> class zGameCheats gGameCheats;
    // -> class zGlobals globals;
}
// Range: 0x80133380 -> 0x80133448
bool zCheatGetSaveAllowed() {
    // References
    // -> class zGameCheats gGameCheats;
}
// Range: 0x80133450 -> 0x80133470
void zCheatInitButtons() {
    // References
    // -> unsigned int lastFrameButtons;
    // -> unsigned long long buttonHistory;
}
// Range: 0x80133470 -> 0x8013363C
void zCheatReadButtons(unsigned int buttonState /* r25 */, class zScaleform * sfObj /* r26 */) {
    // Local variables
    unsigned int changed; // r8
    unsigned int mask; // r3
    unsigned long long cheatMask; // r4:r6

    {
        // Range: 0x801334B0 -> 0x801334FC
        // Local variables
        int i; // r9
    }
    {
        // Range: 0x80133548 -> 0x80133614
        // Local variables
        int i; // r27

        {
            // Range: 0x80133548 -> 0x80133614
            // Local variables
            char * cheatText; // r1+0x8
        }
    }

    // References
    // -> bool achievmentsAllowed;
    // -> class zGlobals globals;
    // -> class CheatCode cheatCodeList[10];
    // -> unsigned long long buttonHistory;
    // -> unsigned int lastFrameButtons;
}
