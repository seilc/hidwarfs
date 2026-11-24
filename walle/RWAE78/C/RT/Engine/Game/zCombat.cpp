/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCombat.cpp
*/
static bool hasAddedToCount; // size: 0x1, address: 0x8076C2C8
static class zCombatDamageInfo * damage_info_stack[4]; // size: 0x10, address: 0x8076C2D0
static int damage_info_stack_count; // size: 0x4, address: 0x8076C2E0
// Range: 0x800AFBD0 -> 0x800AFBD4
void zCombatInit() {
}
// Range: 0x800AFBE0 -> 0x800B0394
void zCombatDamage(class xEnt * ent /* r28 */, class zCombatDamageInfo * damageInfo /* r29 */) {
    {
        // Range: 0x800AFC90 -> 0x800AFCA4
        // Local variables
        class zNPCBase * npcBase; // r0
    }
    {
        // Range: 0x800AFCA8 -> 0x800AFCC0
        // Local variables
        class zNPCEntity * npcEnt; // r0
    }
    {
        // Range: 0x800AFCF8 -> 0x800AFE00
        // Local variables
        class zPlayer * player; // r0
    }
    {
        // Range: 0x800AFE04 -> 0x800AFE14
        // Local variables
        class zNPCEntity * npcEnt; // r0
    }
    {
        // Range: 0x800B0240 -> 0x800B0340
        // Local variables
        class EventActionHit params; // r1+0x18
    }

    // References
    // -> class zBombManager gBombManager;
    // -> class zExplosiveObject * firstExplosiveObject;
    // -> static class zCombatDamageInfo * damage_info_stack[4];
    // -> static int damage_info_stack_count;
}
