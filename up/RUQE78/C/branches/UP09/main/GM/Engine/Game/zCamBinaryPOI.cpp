/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCamBinaryPOI.cpp
*/
static class zCamPool POICamPool; // size: 0x20, address: 0x8081BD38
// Range: 0x801550D0 -> 0x8015531C
void zCamPlayerPOI::reset(class zCamPlayerPOI * this /* r30 */) {
    // References
    // -> class config cfg;
}
// signature: zCamPlayerPOI::update(xScene &, float)
// Range: 0x80155090 -> 0x801550C4
void zCamPlayerPOI::update(class zCamPlayerPOI * this /* r31 */) {
}
// Range: 0x80154E00 -> 0x80155088
void zCamPlayerPOI::start(class zCamPlayerPOI * this /* r30 */) {
    // References
    // -> static float roll_offset;
    // -> static float yaw_offset;
    // -> static float pitch_offset;
}
// Range: 0x80106F20 -> 0x80106F70
void zCamBinaryPOI::Init(class zCamBinaryPOI * this /* r30 */, class xCamBinaryAsset & asset /* r31 */) {
}
// Range: 0x80106F70 -> 0x8010703C
class Entity * Sext::binary_poi::Create(class EntityHandleBase * handle /* r31 */, class binary_poi * asset /* r30 */) {
    // References
    // -> static class zCamPool POICamPool;
}
// Range: 0x80107380 -> 0x801074D4
bool zCamBinaryPOI::Activate(class zCamBinaryPOI * this /* r26 */, int viewportIndex /* r27 */, class xCamTransitionParams * transitionParams /* r28 */, bool forceRestart /* r29 */) {
    // Local variables
    class xBase * target; // r30

    // References
    // -> static class zCamPool POICamPool;
}
// signature: zCamBinaryPOI::EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801074E0 -> 0x80107530
void zCamBinaryPOI::EventCB() {
    {
        // Range: 0x801074EC -> 0x8010752C
        // Local variables
        int viewportIndex; // r0
        class EventActionSwitch * params; // r0
    }
}
