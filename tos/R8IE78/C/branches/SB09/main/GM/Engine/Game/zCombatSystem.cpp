/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zCombatSystem.cpp
*/
static class xEnt * combatList[96]; // size: 0x180, address: 0x80732C70
static unsigned int currentCombat; // size: 0x4, address: 0x80732DF0
// Range: 0x8009D460 -> 0x8009D47C
void zCombatSystemInit() {
    // References
    // -> static unsigned int currentCombat;
    // -> class zGlobals globals;
}
// Range: 0x8009D480 -> 0x8009D490
void zCombatSystemFrameStart() {
    // References
    // -> static unsigned int currentCombat;
}
// Range: 0x8009D490 -> 0x8009D52C
void zCombatSystemUpdate(float dt /* f31 */) {
    {
        // Range: 0x8009D4BC -> 0x8009D514
        // Local variables
        unsigned int i; // r28

        {
            // Range: 0x8009D4BC -> 0x8009D514
            // Local variables
            class zCombat * combat; // r0
            class xEnt * ent; // r27
        }
    }

    // References
    // -> static class xEnt * combatList[96];
    // -> class zGlobals globals;
    // -> static unsigned int currentCombat;
}
// signature: zCombatSystemUpdateEntity(xEnt *, float)
// Range: 0x8009D530 -> 0x8009D5B0
void zCombatSystemUpdateEntity(class xEnt * ent /* r31 */) {
    // Local variables
    class zCombat * combat; // r0

    // References
    // -> static class xEnt * combatList[96];
    // -> static unsigned int currentCombat;
}
