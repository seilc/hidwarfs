/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCamMG2P.cpp
*/
class _OGMG2PCameraSchema _OGMG2PCameraschema; // size: 0x18, address: 0x8076BE80
class SchemaRegistrator _OGMG2PCameraschemaReg; // size: 0x8, address: 0x8076BE98
static class zCamPool mg2pCamPool; // size: 0x20, address: 0x8076BEB0
// Range: 0x800A3560 -> 0x800A3570
void World::_OGMG2PCameraEntity::Deactivate() {
}
// Range: 0x800A3570 -> 0x800A35C0
void World::_OGMG2PCameraEntity::Destroy(class _OGMG2PCameraEntity * this /* r31 */) {
}
// signature: World::_OGMG2PCameraSchema::Fix(World::Asset *, long, int)
// Range: 0x800A3620 -> 0x800A3628
void World::_OGMG2PCameraSchema::Fix() {
}
// signature: World::_OGMG2PCameraSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800A3630 -> 0x800A367C
class EntityStub * World::_OGMG2PCameraSchema::CreateStub(class _OGMG2PCameraSchema * this /* r31 */) {
}
// signature: World::_OGMG2PCameraSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800A3680 -> 0x800A3698
void World::_OGMG2PCameraSchema::DestroyStub() {
}
// signature: World::_OGMG2PCameraSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800A36A0 -> 0x800A3704
class Entity * World::_OGMG2PCameraSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World19_OGMG2PCameraEntity;
}
// Range: 0x800CB6D0 -> 0x800CB790
void zCamMG2P::UpdateTarget() {
    {
        // Range: 0x800CB6DC -> 0x800CB764
        // Local variables
        class xVec3 p2; // r1+0x8
        class xVec3 p1; // r1+0x14
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800CB790 -> 0x800CB8E8
void zCamMG2P::UpdatePosition(class zCamMG2P * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x800CB850 -> 0x800CB8CC
        // Local variables
        class xVec3 dest; // r1+0x8
    }
}
// signature: zCamMG2P::UpdateAim(float)
// Range: 0x800CB8F0 -> 0x800CBB48
void zCamMG2P::UpdateAim(class zCamMG2P * this /* r30 */) {
    // Local variables
    class xVec3 dir; // r1+0x18
    class xMat3x3 mat; // r1+0x28

    {
        // Range: 0x800CBA30 -> 0x800CBB18
        // Local variables
        float t; // f1
        class xQuat end; // r1+0x8
    }
}
// signature: zCamMG2P::update(xScene &, float)
// Range: 0x800CB640 -> 0x800CB6D0
void zCamMG2P::update(class zCamMG2P * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x800CB600 -> 0x800CB638
void zCamMG2P::create(class zCamMG2P * this /* r31 */) {
}
// Range: 0x800CB5B0 -> 0x800CB5F8
void zCamMG2P::start(class zCamMG2P * this /* r31 */) {
}
// Range: 0x800CB5A0 -> 0x800CB5A4
void zCamMG2P::stop() {
}
// Range: 0x800CB560 -> 0x800CB59C
void zCamMG2P::reset() {
}
// Range: 0x800A3750 -> 0x800A3A24
void zCamMG2PWidget::Init(class xBase * data /* r31 */, class xBaseAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__8zCamMG2P;
    // -> static class zCamPool mg2pCamPool;
}
// signature: zCamMG2PWidget::Activate(int, const xCamTransitionParams *, bool)
// Range: 0x800A3A30 -> 0x800A3B90
bool zCamMG2PWidget::Activate(class xCamTransitionParams * transitionParams /* r29 */, bool forceRestart /* r30 */) {
    // References
    // -> static class zCamPool mg2pCamPool;
}
// signature: zCamMG2PWidget::EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800A3B90 -> 0x800A3D08
void zCamMG2PWidget::EventCB() {
    {
        // Range: 0x800A3BB4 -> 0x800A3CEC
        // Local variables
        int viewportIndex; // r3
        class EventActionSwitch * params; // r0
    }

    // References
    // -> static class zCamPool mg2pCamPool;
}
