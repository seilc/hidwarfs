/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNavLink.cpp
*/
// signature: NavLinkEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801AAC90 -> 0x801AACA0
static void NavLinkEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x801AACA0 -> 0x801AAD2C
class Entity * Sext::NavLink::Create(class EntityHandleBase * handle /* r29 */, class NavLink * asset /* r30 */) {
    // References
    // -> struct {} __vt__8zNavLink;
}
// Range: 0x801AAD30 -> 0x801AAD54
void zNavLink::Reset() {
}
// Range: 0x801AAD60 -> 0x801AADC0
bool zNavLink::IsEnabled(class zNavLink * this /* r30 */) const {
}
// Range: 0x801AADC0 -> 0x801AAF34
bool zNavLink::TryLock(class zNavLink * this /* r28 */, class xBase * owner /* r29 */, bool loose /* r30 */) {
    {
        // Range: 0x801AAE38 -> 0x801AAF18
        // Local variables
        float lockedPlayerDist2; // f0
        float askingPlayerDist2; // f0
        float lockedPlayerDistToEnd2; // f1
        float lockedPlayerDistToStart2; // f29
        float askingPlayerDistToEnd2; // f30
        float askingPlayerDistToStart2; // f31
        class xVec3 endPos; // r1+0x38
        class xVec3 startPos; // r1+0x44
        class zCommonPlayer * lockedPlayer; // r0
        class zCommonPlayer * askingPlayer; // r0
    }
}
// signature: zNavLink::ReleaseLock(const xBase *)
// Range: 0x801AAF40 -> 0x801AAF60
void zNavLink::ReleaseLock() {
}
// signature: zNavLink::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801AAF60 -> 0x801AAFA4
void zNavLink::HandleEvent() {
}
