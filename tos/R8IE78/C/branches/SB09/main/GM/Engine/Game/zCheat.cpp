/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zCheat.cpp
*/
class zGameCheats gGameCheats; // size: 0x1, address: 0x80732A48
class zGameCheats gGameCheatsUnlocked; // size: 0x1, address: 0x80732A4C
bool achievmentsAllowed; // size: 0x1, address: 0x80732A4D
// Range: 0x80098280 -> 0x80098284
void zCheatInit() {
}
// Range: 0x80098290 -> 0x80098308
void zCheatRemoveAll() {
    // References
    // -> bool achievmentsAllowed;
    // -> class zGlobals globals;
    // -> class zGameCheats gGameCheatsUnlocked;
    // -> class zGameCheats gGameCheats;
}
// signature: zCheatUnlock(eCheats)
// Range: 0x80098310 -> 0x80098438
void zCheatUnlock() {
    // References
    // -> class zGameCheats gGameCheats;
    // -> class zGameCheats gGameCheatsUnlocked;
}
// signature: zCheatProcess(eCheats, bool)
// Range: 0x80098440 -> 0x800984D0
void zCheatProcess() {
    // References
    // -> class zGameCheats gGameCheats;
}
// signature: zCheatBlackWhite(bool)
// Range: 0x800984D0 -> 0x80098508
void zCheatBlackWhite() {
    // References
    // -> class zGameCheats gGameCheats;
}
// signature: zCheatUnlockAllLevel(bool)
// Range: 0x80098510 -> 0x800985FC
void zCheatUnlockAllLevel() {
    // Local variables
    class xCounter * counter; // r3

    {
        // Range: 0x80098544 -> 0x8009858C
        // Local variables
        class EventActionSetCount params; // r1+0x18
    }
    {
        // Range: 0x800985A4 -> 0x800985EC
        // Local variables
        class EventActionSetCount params; // r1+0x8
    }

    // References
    // -> class zGameCheats gGameCheats;
}
// Range: 0x80098600 -> 0x80098690
void zCheatAddHappyNuggets(bool enabled /* r31 */) {
    {
        // Range: 0x80098608 -> 0x8009866C
        // Local variables
        class xCounter * ctr; // r3

        {
            // Range: 0x8009862C -> 0x8009866C
            // Local variables
            class EventActionSetCount params; // r1+0x8
        }
    }

    // References
    // -> class zGameCheats gGameCheats;
}
// signature: zCheatSpongeBuffMode(bool)
// Range: 0x80098690 -> 0x800986E0
void zCheatSpongeBuffMode() {
    // References
    // -> class zGameCheats gGameCheats;
}
// Range: 0x800986E0 -> 0x80098728
unsigned int zCheatGetCheatFlags() {
    // References
    // -> class zGameCheats gGameCheats;
}
// signature: zCheatIsCheatUnlocked(eCheats)
// Range: 0x80098730 -> 0x800987D8
bool zCheatIsCheatUnlocked() {
    // References
    // -> class zGameCheats gGameCheatsUnlocked;
}
// Range: 0x800987E0 -> 0x8009880C
bool zCheatGetSaveAllowed() {
}
