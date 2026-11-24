/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zCamBinaryPOI.cpp
*/
static class zCamPool POICamPool; // size: 0x20, address: 0x80732520
// Range: 0x800ADA90 -> 0x800ADAF0
void zCamPlayerPOI::reset(class zCamPlayerPOI * this /* r31 */) {
}
// signature: zCamPlayerPOI::update(xScene &, float)
// Range: 0x800ADA50 -> 0x800ADA84
void zCamPlayerPOI::update(class zCamPlayerPOI * this /* r31 */) {
}
// Range: 0x800AD8A0 -> 0x800ADA44
void zCamPlayerPOI::start(class zCamPlayerPOI * this /* r30 */) {
}
// Range: 0x8008C060 -> 0x8008C0A8
void zCamBinaryPOI::Init(class zCamBinaryPOI * this /* r30 */, class binary_poi & asset /* r31 */) {
}
// Range: 0x8008C0B0 -> 0x8008C16C
class Entity * Sext::binary_poi::Create(class EntityHandleBase * handle /* r31 */, class binary_poi * asset /* r30 */) {
    // References
    // -> static class zCamPool POICamPool;
    // -> struct {} __vt__13zCamBinaryPOI;
}
// Range: 0x8008C2C0 -> 0x8008C3B4
bool zCamBinaryPOI::Activate(class zCamBinaryPOI * this /* r26 */, int viewportIndex /* r27 */, class xCamTransitionParams * transitionParams /* r28 */, bool forceRestart /* r29 */) {
    // Local variables
    class xBase * target; // r31

    // References
    // -> static class zCamPool POICamPool;
}
// signature: zCamBinaryPOI::EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8008C3C0 -> 0x8008C410
void zCamBinaryPOI::EventCB() {
    {
        // Range: 0x8008C3CC -> 0x8008C40C
        // Local variables
        int viewportIndex; // r0
        class EventActionSwitch * params; // r0
    }
}
