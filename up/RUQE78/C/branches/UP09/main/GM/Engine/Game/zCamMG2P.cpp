/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCamMG2P.cpp
*/
static class zCamPool mg2pCamPool; // size: 0x20, address: 0x8081C298
// Range: 0x801542D0 -> 0x80154390
void zCamMG2P::UpdateTarget() {
    {
        // Range: 0x801542DC -> 0x80154364
        // Local variables
        class xVec3 p2; // r1+0x8
        class xVec3 p1; // r1+0x14
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80154390 -> 0x801544E8
void zCamMG2P::UpdatePosition(class zCamMG2P * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x80154450 -> 0x801544CC
        // Local variables
        class xVec3 dest; // r1+0x8
    }
}
// signature: zCamMG2P::UpdateAim(float)
// Range: 0x801544F0 -> 0x80154734
void zCamMG2P::UpdateAim(class zCamMG2P * this /* r31 */) {
    // Local variables
    class xVec3 dir; // r1+0x18
    class xMat3x3 mat; // r1+0x28

    {
        // Range: 0x80154618 -> 0x80154720
        // Local variables
        float t; // f1
        class xQuat end; // r1+0x8
    }
}
// signature: zCamMG2P::update(xScene &, float)
// Range: 0x80154240 -> 0x801542D0
void zCamMG2P::update(class zCamMG2P * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x80154200 -> 0x80154238
void zCamMG2P::create(class zCamMG2P * this /* r31 */) {
}
// Range: 0x801541B0 -> 0x801541F8
void zCamMG2P::start(class zCamMG2P * this /* r31 */) {
}
// Range: 0x801541A0 -> 0x801541A4
void zCamMG2P::stop() {
}
// Range: 0x80154160 -> 0x8015419C
void zCamMG2P::reset() {
}
// Range: 0x80113E20 -> 0x80114184
class Entity * Sext::zMG2PCamAsset::Create(class EntityHandleBase * handle /* r30 */, class zMG2PCamAsset * asset /* r29 */) {
    // References
    // -> struct {} __vt__8zCamMG2P;
    // -> static class zCamPool mg2pCamPool;
    // -> struct {} __vt__14zCamMG2PWidget;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x80114190 -> 0x8011429C
bool zCamMG2PWidget::Activate(class zCamMG2PWidget * this /* r27 */, int viewportIndex /* r28 */, class xCamTransitionParams * transitionParams /* r29 */, bool forceRestart /* r30 */) {
    // References
    // -> static class zCamPool mg2pCamPool;
}
// signature: zCamMG2PWidget::EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801142A0 -> 0x801143CC
void zCamMG2PWidget::EventCB(class xBase * to /* r28 */) {
    {
        // Range: 0x801142C0 -> 0x801143B8
        // Local variables
        int viewportIndex; // r29
        class EventActionSwitch * params; // r0
    }

    // References
    // -> static class zCamPool mg2pCamPool;
}
