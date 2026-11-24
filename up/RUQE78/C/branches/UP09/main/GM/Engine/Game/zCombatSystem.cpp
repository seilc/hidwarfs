/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCombatSystem.cpp
*/
static class xEnt * combatList[96]; // size: 0x180, address: 0x8081C5C0
static unsigned int currentCombat; // size: 0x4, address: 0x8081C740
// Range: 0x801390A0 -> 0x801390BC
void zCombatSystemInit() {
    // References
    // -> static unsigned int currentCombat;
    // -> class zGlobals globals;
}
// Range: 0x801390C0 -> 0x801390D0
void zCombatSystemFrameStart() {
    // References
    // -> static unsigned int currentCombat;
}
// Range: 0x801390D0 -> 0x801391B4
void zCombatSystemUpdate(float dt /* f31 */) {
    {
        // Range: 0x80139110 -> 0x80139180
        // Local variables
        unsigned int i; // r29

        {
            // Range: 0x80139110 -> 0x80139180
            // Local variables
            class xEnt * ent; // r28
        }
    }

    // References
    // -> static class xEnt * combatList[96];
    // -> class zGlobals globals;
    // -> static unsigned int currentCombat;
}
// signature: zCombatSystemUpdateEntity(xEnt *, float)
// Range: 0x801391C0 -> 0x80139244
void zCombatSystemUpdateEntity(class xEnt * ent /* r31 */) {
    // References
    // -> static class xEnt * combatList[96];
    // -> static unsigned int currentCombat;
}
