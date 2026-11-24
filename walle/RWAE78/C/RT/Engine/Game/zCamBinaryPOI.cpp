/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCamBinaryPOI.cpp
*/
class _OGbinary_poiSchema _OGbinary_poischema; // size: 0x18, address: 0x8076B848
class SchemaRegistrator _OGbinary_poischemaReg; // size: 0x8, address: 0x8076B860
static class zCamPool POICamPool; // size: 0x20, address: 0x8076B878
// Range: 0x80094660 -> 0x80094670
void World::_OGbinary_poiEntity::Deactivate() {
}
// Range: 0x80094670 -> 0x800946C0
void World::_OGbinary_poiEntity::Destroy(class _OGbinary_poiEntity * this /* r31 */) {
}
// signature: World::_OGbinary_poiSchema::Fix(World::Asset *, long, int)
// Range: 0x80094720 -> 0x80094728
void World::_OGbinary_poiSchema::Fix() {
}
// signature: World::_OGbinary_poiSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80094730 -> 0x8009477C
class EntityStub * World::_OGbinary_poiSchema::CreateStub(class _OGbinary_poiSchema * this /* r31 */) {
}
// signature: World::_OGbinary_poiSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x80094780 -> 0x80094798
void World::_OGbinary_poiSchema::DestroyStub() {
}
// signature: World::_OGbinary_poiSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800947A0 -> 0x80094808
class Entity * World::_OGbinary_poiSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World19_OGbinary_poiEntity;
}
// Range: 0x800CC650 -> 0x800CC878
void zCamPlayerPOI::reset(class zCamPlayerPOI * this /* r30 */) {
    // References
    // -> class config cfg;
}
// signature: zCamPlayerPOI::update(xScene &, float)
// Range: 0x800CC610 -> 0x800CC644
void zCamPlayerPOI::update(class zCamPlayerPOI * this /* r31 */) {
}
// Range: 0x800CC320 -> 0x800CC604
void zCamPlayerPOI::start(class zCamPlayerPOI * this /* r29 */) {
}
// Range: 0x80094850 -> 0x800948A0
void zCamBinaryPOI::Init(class zCamBinaryPOI * this /* r30 */, class xCamBinaryAsset * asset /* r31 */) {
}
// signature: zCamBinaryPOI::Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x800948A0 -> 0x80094910
void zCamBinaryPOI::Init() {
    // References
    // -> static class zCamPool POICamPool;
}
// Range: 0x80094C30 -> 0x80094DC8
bool zCamBinaryPOI::Activate(class zCamBinaryPOI * this /* r27 */, int viewportIndex /* r28 */, class xCamTransitionParams * transitionParams /* r29 */, bool forceRestart /* r30 */) {
    // Local variables
    class xBase * target; // r8

    // References
    // -> static class zCamPool POICamPool;
}
// signature: zCamBinaryPOI::EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80094DD0 -> 0x80094E20
void zCamBinaryPOI::EventCB() {
    {
        // Range: 0x80094DDC -> 0x80094E1C
        // Local variables
        int viewportIndex; // r0
        class EventActionSwitch * params; // r0
    }
}
