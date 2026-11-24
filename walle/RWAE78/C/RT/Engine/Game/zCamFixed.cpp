/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCamFixed.cpp
*/
static class zCamPool FixedCamPool; // size: 0x20, address: 0x8076BDA8
// signature: zCamWorldFixed::update(xScene &, float)
// Range: 0x800CC260 -> 0x800CC264
void zCamWorldFixed::update() {
}
// Range: 0x800CC220 -> 0x800CC25C
void zCamWorldFixed::create(class zCamWorldFixed * this /* r31 */) {
}
// Range: 0x800CC1D0 -> 0x800CC218
void zCamWorldFixed::start(class zCamWorldFixed * this /* r31 */) {
}
// Range: 0x800CC1C0 -> 0x800CC1C4
void zCamWorldFixed::stop() {
}
// Range: 0x800CC140 -> 0x800CC1BC
void zCamWorldFixed::reset() {
}
// Range: 0x800A13E0 -> 0x800A1594
void zCamFixed::Init(class xBase * data /* r31 */, class xBaseAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__14zCamWorldFixed;
    // -> static class zCamPool FixedCamPool;
}
// signature: zCamFixed::Activate(int, const xCamTransitionParams *, bool)
// Range: 0x800A15A0 -> 0x800A1700
bool zCamFixed::Activate(class xCamTransitionParams * transitionParams /* r29 */, bool forceRestart /* r30 */) {
    // References
    // -> static class zCamPool FixedCamPool;
}
// signature: zCamFixed::EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800A1700 -> 0x800A189C
void zCamFixed::EventCB() {
    {
        // Range: 0x800A1724 -> 0x800A1880
        // Local variables
        class EventActionSwitch * params; // r0
        int viewportIndex; // r3
    }

    // References
    // -> static class zCamPool FixedCamPool;
}
