/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zCamMG2P.cpp
*/
static class zCamPool mg2pCamPool; // size: 0x20, address: 0x80732A08
// Range: 0x800AD2A0 -> 0x800AD360
void zCamMG2P::UpdateTarget() {
    {
        // Range: 0x800AD2B4 -> 0x800AD338
        // Local variables
        class xVec3 p2; // r1+0x8
        class xVec3 p1; // r1+0x14
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800AD360 -> 0x800AD450
void zCamMG2P::UpdatePosition(class zCamMG2P * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x800AD3DC -> 0x800AD434
        // Local variables
        class xVec3 dest; // r1+0x8
    }
}
// signature: zCamMG2P::UpdateAim(float)
// Range: 0x800AD450 -> 0x800AD520
void zCamMG2P::UpdateAim(class zCamMG2P * this /* r31 */) {
    // Local variables
    class xVec3 dir; // r1+0x18
    class xMat3x3 mat; // r1+0x28

    {
        // Range: 0x800AD4A8 -> 0x800AD50C
        // Local variables
        float t; // f1
        class xQuat end; // r1+0x8
    }
}
// signature: zCamMG2P::update(xScene &, float)
// Range: 0x800AD210 -> 0x800AD2A0
void zCamMG2P::update(class zCamMG2P * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x800AD1D0 -> 0x800AD208
void zCamMG2P::create(class zCamMG2P * this /* r31 */) {
}
// Range: 0x800AD180 -> 0x800AD1C8
void zCamMG2P::start(class zCamMG2P * this /* r31 */) {
}
// Range: 0x800AD120 -> 0x800AD178
void zCamMG2P::reset(class zCamMG2P * this /* r31 */) {
}
// Range: 0x80096440 -> 0x80096488
void zCamMG2PWidget::Init(class zCamMG2PWidget * this /* r30 */, class zMG2PCamAsset * asset /* r31 */) {
}
// Range: 0x80096490 -> 0x8009654C
class Entity * Sext::zMG2PCamAsset::Create(class EntityHandleBase * handle /* r31 */, class zMG2PCamAsset * asset /* r30 */) {
    // References
    // -> static class zCamPool mg2pCamPool;
    // -> struct {} __vt__14zCamMG2PWidget;
}
// Range: 0x800965D0 -> 0x80096674
bool zCamMG2PWidget::Activate(class zCamMG2PWidget * this /* r27 */, int viewportIndex /* r28 */, class xCamTransitionParams * transitionParams /* r29 */, bool forceRestart /* r30 */) {
    // References
    // -> static class zCamPool mg2pCamPool;
}
// signature: zCamMG2PWidget::EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80096680 -> 0x800966D0
void zCamMG2PWidget::EventCB() {
    {
        // Range: 0x8009668C -> 0x800966CC
        // Local variables
        int viewportIndex; // r0
        class EventActionSwitch * params; // r0
    }
}
