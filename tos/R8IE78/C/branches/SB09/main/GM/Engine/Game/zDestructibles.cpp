/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zDestructibles.cpp
*/
// signature: zDestructible_Init(unsigned long long, zDestructible *&, World::xOGEntity *, unsigned int)
// Range: 0x800AAFE0 -> 0x800AB224
void zDestructible_Init(unsigned long long assetID /* r21:r22 */, class zDestructible * & dest /* r24 */, class xOGEntity * ent /* r25 */) {
    // Local variables
    class DestructibleAsset * dasset; // r27
    unsigned int totalStateNum; // r0

    {
        // Range: 0x800AB0A8 -> 0x800AB204
        // Local variables
        unsigned int i; // r26
    }
}
// signature: zDestructible_Reset(zDestructible *&, World::xOGEntity *)
// Range: 0x800AB230 -> 0x800AB3D4
void zDestructible_Reset(class zDestructible * & dest /* r28 */) {
    // Local variables
    class DestructibleAsset * dasset; // r30
    class UIDModelReference * MIAsset; // r3

    {
        // Range: 0x800AB2A4 -> 0x800AB364
        // Local variables
        unsigned int i; // r29
    }
}
// signature: zDestructible_SceneExit(zDestructible *&, World::xOGEntity *)
// Range: 0x800AB3E0 -> 0x800AB49C
void zDestructible_SceneExit(class zDestructible * & dest /* r29 */) {
    {
        // Range: 0x800AB414 -> 0x800AB488
        // Local variables
        unsigned int i; // r30
    }
}
// signature: zDestructible::StopAllIdleSounds(World::xOGEntity *, zDestructible *)
// Range: 0x800AB4A0 -> 0x800AB508
void zDestructible::StopAllIdleSounds(class zDestructible * dest /* r29 */) {
    {
        // Range: 0x800AB4C0 -> 0x800AB4F4
        // Local variables
        unsigned int i; // r30
    }
}
// signature: zDestructible::StopStateSounds(World::xOGEntity *, zDestructible *)
// Range: 0x800AB510 -> 0x800AB570
void zDestructible::StopStateSounds(class zDestructible * dest /* r30 */) {
    // Local variables
    int lastidx; // r0
}
// signature: zDestructible::StateSwap(World::xOGEntity *, zDestructible *, xVec3 &, int)
// Range: 0x800AB570 -> 0x800AB5CC
void zDestructible::StateSwap() {
    // Local variables
    int nextStateNum; // r5
    class zDestructibleState * state; // r7
}
// Range: 0x800AB5D0 -> 0x800AB6D0
void zDestructible::FXInit(class xOGEntity * ent /* r30 */, class zFXSpawn * wichFX /* r31 */) {
    // Local variables
    class zFXSpawn * fxSpawn; // r0
}
// signature: zDestructible::UpdateState(World::xOGEntity *, zDestructible *, unsigned int, Sext::EventActionHit *, xVec3 &, int, bool)
// Range: 0x800AB6D0 -> 0x800AB9C8
void zDestructible::UpdateState(class xOGEntity * ent /* r22 */, class zDestructible * dest /* r23 */, class EventActionHit * params /* r24 */, class xVec3 & initial_velocity /* r25 */, int pad_port /* r26 */, bool recursiveCall /* r27 */) {
    // Local variables
    int currentStateNum; // r30
    int nextStateNum; // r29
    unsigned int damagePercent; // r28

    {
        // Range: 0x800AB7BC -> 0x800AB878
        // Local variables
        class xMat4x3 * mat; // r3
    }
}
// Range: 0x800AB9D0 -> 0x800ABA74
void zDestructible_RegisterFX(class zDestructible * dest /* r26 */) {
    // Local variables
    class DestructibleAsset * dasset; // r28

    {
        // Range: 0x800AB9E4 -> 0x800ABA60
        // Local variables
        unsigned int i; // r27
    }
}
// signature: HitFilterNS::GetHitFilterFromAsset(Sext::HitFilters *, const Sext::xBaseAsset *)
// Range: 0x800ABA80 -> 0x800ABAA0
unsigned int HitFilterNS::GetHitFilterFromAsset() {
    // Local variables
    unsigned int filter; // r4
}
// signature: HitFilterNS::TranslateHitSource(Sext::eHitSource)
// Range: 0x800ABAA0 -> 0x800ABBA0
unsigned int HitFilterNS::TranslateHitSource() {
}
// signature: zDestructible_EventCB(xBase *, xBase *, zDestructible *, unsigned int, Sext::EventAny *)
// Range: 0x800ABBA0 -> 0x800AC160
void zDestructible_EventCB(class xBase * from /* r26 */, class xBase * root_base /* r27 */, class zDestructible * to /* r28 */, class EventAny * genericParams /* r29 */) {
    // Local variables
    class xOGEntity * ent; // reg65535
    class xOGEntity * root_ent; // r0

    {
        // Range: 0x800ABCB0 -> 0x800ABE9C
        // Local variables
        class EventActionDestructableFlag params; // r1+0x8
        int currentStateNum; // r30
        class xVec3 vel; // r1+0x18
        int padport; // r29
    }
    {
        // Range: 0x800ABE9C -> 0x800AC084
        // Local variables
        bool keepEnabled; // r9
        int padport; // r27
        class xVec3 kickback; // r1+0xC
        unsigned int damage; // r30
        unsigned int hitSource; // r27
        class EventActionHit * params; // reg65535

        {
            // Range: 0x800ABFF8 -> 0x800AC06C
            // Local variables
            unsigned int i; // r0
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
