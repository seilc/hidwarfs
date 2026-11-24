/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zHudSB.cpp
*/
// Range: 0x800C9980 -> 0x800C99E0
class Entity * Sext::HudSB::Create(class EntityHandleBase * handle /* r30 */, class HudSB * tasset /* r31 */) {
}
// signature: zHudSBEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800C99E0 -> 0x800C99F0
static void zHudSBEventWrapper(class xBase * from /* r0 */) {
}
// signature: zHudSB::zHudSB(World::EntityHandleBase *, Sext::HudSB *)
// Range: 0x800C99F0 -> 0x800C9A88
void * zHudSB::zHudSB(class zHudSB * this /* r30 */, class HudSB * ass /* r31 */) {
    // References
    // -> struct {} __vt__6zHudSB;
}
// signature: zHudSB::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800C9A90 -> 0x800CA1A0
void zHudSB::HandleEvent(class zHudSB * this /* r31 */, class EventAny * params /* r30 */) {
    {
        // Range: 0x800C9E18 -> 0x800C9E50
        // Local variables
        class EventActionSetCount * myParams; // r0
    }
    {
        // Range: 0x800CA078 -> 0x800CA0B8
        // Local variables
        class EventActionShowCounter * myParams; // r0

        {
            // Range: 0x800CA078 -> 0x800CA0B8
            // Local variables
            class xCounter * counter; // r0
        }
    }
    {
        // Range: 0x800CA0BC -> 0x800CA0F4
        // Local variables
        class EventActionSetCount * myParams; // r0
    }
}
// Range: 0x800CA1A0 -> 0x800CA304
void zHudSB::Setup(class zHudSB * this /* r31 */) {
    // Local variables
    class xCounter * happyPointCounter; // r0
    class xCounter * lifeCounter; // r0
    float args[3]; // r1+0x8

    // References
    // -> class zGlobals globals;
}
// Range: 0x800CA310 -> 0x800CA374
void zHudSB::Reset(class zHudSB * this /* r31 */) {
}
// signature: zHudSB::Update(float)
// Range: 0x800CA380 -> 0x800CA4A8
void zHudSB::Update(class zHudSB * this /* r30 */) {
    {
        // Range: 0x800CA398 -> 0x800CA494
        // Local variables
        int i; // r31
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// Range: 0x800CA4B0 -> 0x800CA548
void zHudSB::ShowHud(class zHudSB * this /* r31 */) {
    // References
    // -> class zGlobals globals;
}
// Range: 0x800CA550 -> 0x800CA5B4
void zHudSB::HideHud(class zHudSB * this /* r31 */) {
}
// Range: 0x800CA5C0 -> 0x800CA628
void zHudSB::SetAllHudVisible(class zHudSB * this /* r31 */) {
}
// Range: 0x800CA630 -> 0x800CA698
void zHudSB::SetAllHudInvisible(class zHudSB * this /* r31 */) {
}
// Range: 0x800CA6A0 -> 0x800CA6F4
void zHudSB::SetHealth(float health /* r1+0x8 */) {
}
// signature: zHudSB::SetMaxHealth(int)
// Range: 0x800CA700 -> 0x800CA76C
void zHudSB::SetMaxHealth() {
    // Local variables
    float arg; // r1+0x8
}
// signature: zHudSB::SetPuckAmmo(int)
// Range: 0x800CA770 -> 0x800CA7D8
void zHudSB::SetPuckAmmo() {
    // Local variables
    float arg; // r1+0x8
}
// Range: 0x800CA7E0 -> 0x800CAA28
void zHudSB::SetPowerup(class zHudSB * this /* r30 */, int p /* r31 */) {
}
// signature: zHudSB::SetPowerupTimer(float)
// Range: 0x800CAA30 -> 0x800CAAF8
void zHudSB::SetPowerupTimer() {
    // Local variables
    int secondsRemaining; // r6
    float args[2]; // r1+0x8
}
// Range: 0x800CAB00 -> 0x800CAB88
void zHudSB::HappinessPointsChanged(class zHudSB * this /* r31 */) {
    // Local variables
    class xCounter * ctr; // r0
    float arg; // r1+0x8
}
// Range: 0x800CAB90 -> 0x800CABF0
void zHudSB::SetPlanktonShakeEnergy(float n /* r1+0x8 */) {
}
// Range: 0x800CABF0 -> 0x800CAC50
void zHudSB::SetPlanktonStunEnergy(float n /* r1+0x8 */) {
}
// signature: zHudSB::SetPlanktonAmmo(int)
// Range: 0x800CAC50 -> 0x800CACB8
void zHudSB::SetPlanktonAmmo() {
    // Local variables
    float arg; // r1+0x8
}
// signature: zHudSB::ShowCounter(int, int)
// Range: 0x800CACC0 -> 0x800CAD40
void zHudSB::ShowCounter() {
    // Local variables
    float args[2]; // r1+0x8
}
// signature: zHudSB::SetCounter(int)
// Range: 0x800CAD40 -> 0x800CADA8
void zHudSB::SetCounter() {
    // Local variables
    float curCount; // r1+0x8
}
// Range: 0x800CADB0 -> 0x800CAE98
void zHudSB::ShowTimer(class zHudSB * this /* r31 */) {
    // Local variables
    int secondsRemaining; // r5
    float args[2]; // r1+0x8
}
// Range: 0x800CAEA0 -> 0x800CAF78
void zHudSB::UpdateTimer() {
    {
        // Range: 0x800CAEB0 -> 0x800CAF68
        // Local variables
        float args[2]; // r1+0x8
        int secondsRemaining; // r6
    }
}
// signature: zHudSB::SetBossMeter(float)
// Range: 0x800CAF80 -> 0x800CAFC4
void zHudSB::SetBossMeter(class zHudSB * this /* r6 */) {
}
// signature: zHudSB::ShowBossMeter(int)
// Range: 0x800CAFD0 -> 0x800CB038
void zHudSB::ShowBossMeter() {
    // Local variables
    float arg; // r1+0x8
}
// Range: 0x800CB040 -> 0x800CB0D4
void zHudSB::LivesChanged(class zHudSB * this /* r31 */) {
    // Local variables
    class xCounter * ctr; // r0
    float arg; // r1+0x8
}
// Range: 0x800CB0E0 -> 0x800CB194
void zHudSB::PauseGame(int playerIdx /* r30 */) {
    {
        // Range: 0x800CB0F4 -> 0x800CB180
        // Local variables
        class zScaleform * pauseMenu; // r31
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
