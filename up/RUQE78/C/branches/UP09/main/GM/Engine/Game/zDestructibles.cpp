/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zDestructibles.cpp
*/
// signature: zDestructible_Init(unsigned long long, zDestructible *&, xEnt *, unsigned int)
// Range: 0x80149400 -> 0x801495B4
void zDestructible_Init(unsigned long long assetID /* r25:r26 */, class zDestructible * & dest /* r23 */, class xEnt * ent /* r24 */) {
    // Local variables
    class DestructibleAsset * dasset; // r26
    unsigned int totalStateNum; // r0

    {
        // Range: 0x801494AC -> 0x80149588
        // Local variables
        unsigned int i; // r25
    }
}
// signature: zDestructible_Reset(zDestructible *&, xEnt *)
// Range: 0x801495C0 -> 0x8014974C
void zDestructible_Reset(class zDestructible * & dest /* r26 */) {
    // Local variables
    class DestructibleAsset * dasset; // r28
    class UIDModelReference * MIAsset; // r4

    {
        // Range: 0x801495E0 -> 0x801496D4
        // Local variables
        unsigned int i; // r27
    }
}
// signature: zDestructible_SceneExit(zDestructible *&, xEnt *)
// Range: 0x80149750 -> 0x8014981C
void zDestructible_SceneExit(class zDestructible * & dest /* r29 */) {
    {
        // Range: 0x8014978C -> 0x801497EC
        // Local variables
        unsigned int i; // r30
    }
}
// signature: zDestructible_UpdateState(xEnt *, zDestructible *, unsigned int, Sext::EventActionHit *, xVec3 &, int, bool)
// Range: 0x80149820 -> 0x80149B3C
static void zDestructible_UpdateState(class xEnt * ent /* r22 */, class zDestructible * dest /* r23 */, class EventActionHit * params /* r24 */, class xVec3 & initial_velocity /* r25 */, int pad_port /* r26 */, bool recursiveCall /* r27 */) {
    // Local variables
    int currentStateNum; // r30
    int nextStateNum; // r29
    unsigned int damagePercent; // r28
}
// Range: 0x80149B40 -> 0x80149BE4
void zDestructible_RegisterFX(class zDestructible * dest /* r26 */) {
    // Local variables
    class DestructibleAsset * dasset; // r28

    {
        // Range: 0x80149B54 -> 0x80149BB4
        // Local variables
        unsigned int i; // r27
    }
}
// signature: TranslateHitSource(Sext::eHitSource)
// Range: 0x80149BF0 -> 0x80149CE8
unsigned int TranslateHitSource() {
}
// signature: zDestructible_EventCB(xBase *, xBase *, zDestructible *, unsigned int, Sext::EventAny *)
// Range: 0x80149CF0 -> 0x8014A500
void zDestructible_EventCB(class xBase * from /* r25 */, class xBase * root_base /* r26 */, class zDestructible * to /* r27 */, class EventAny * genericParams /* r28 */) {
    // Local variables
    class xEnt * ent; // reg65535
    class xEnt * root_ent; // r0
    class zDestructible * dest; // r0

    {
        // Range: 0x80149E28 -> 0x8014A158
        // Local variables
        class EventActionDestructableFlag params; // r1+0x10
        int currentStateNum; // r31
    }
    {
        // Range: 0x8014A158 -> 0x8014A414
        // Local variables
        bool keepEnabled; // r9
        class EventActionHit hitParams; // r1+0x20
        int padport; // r30
        class xVec3 kickback; // r1+0x14
        unsigned int damage; // r29
        unsigned int hitSource; // r0
        class EventActionHit * params; // reg65535

        {
            // Range: 0x8014A1C0 -> 0x8014A240
            // Local variables
            class zFXSpawn * fxSpawn; // r0
        }
        {
            // Range: 0x8014A390 -> 0x8014A3F4
            // Local variables
            unsigned int i; // r0
        }
    }

    // References
    // -> class zPlayerInventory inventory;
    // -> class AutotargetObject autotargetObjects[150];
    // -> unsigned int numAutotargetObjects;
    // -> class xGlobals * xglobals;
}
