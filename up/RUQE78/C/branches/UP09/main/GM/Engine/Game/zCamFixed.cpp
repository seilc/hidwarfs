/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCamFixed.cpp
*/
static class zCamPool FixedCamPool; // size: 0x20, address: 0x8081C1F0
// signature: zCamWorldFixed::update(xScene &, float)
// Range: 0x80154D80 -> 0x80154D84
void zCamWorldFixed::update() {
}
// Range: 0x80154D50 -> 0x80154D54
void zCamWorldFixed::stop() {
}
// Range: 0x801124C0 -> 0x8011253C
void zCamWorldFixed::reset() {
}
// Range: 0x80111F10 -> 0x80112154
class Entity * Sext::xCamAsset::Create(class EntityHandleBase * handle /* r30 */, class xCamAsset * asset /* r29 */) {
    // References
    // -> struct {} __vt__14zCamWorldFixed;
    // -> static class zCamPool FixedCamPool;
    // -> struct {} __vt__9zCamFixed;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x80112160 -> 0x8011226C
bool zCamFixed::Activate(class zCamFixed * this /* r27 */, int viewportIndex /* r28 */, class xCamTransitionParams * transitionParams /* r29 */, bool forceRestart /* r30 */) {
    // References
    // -> static class zCamPool FixedCamPool;
}
// signature: zCamFixed::EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80112270 -> 0x801124BC
void zCamFixed::EventCB(class xBase * to /* r28 */) {
    {
        // Range: 0x801122B0 -> 0x80112338
        {
            // Range: 0x801122E8 -> 0x80112338
            // Local variables
            class zCamWorldFixed * worldCam; // r0
        }
    }
    {
        // Range: 0x8011233C -> 0x80112460
        // Local variables
        class EventActionSwitch * params; // r0
        int viewportIndex; // r29
    }

    // References
    // -> static class zCamPool FixedCamPool;
}
