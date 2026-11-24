/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zEventSpy.cpp
*/
class _OGEventSpySchema _OGEventSpyschema; // size: 0x18, address: 0x8076D238
class SchemaRegistrator _OGEventSpyschemaReg; // size: 0x8, address: 0x8076D250
int spyCount; // size: 0x4, address: 0x8076D258
class zEventSpy * * spyList; // size: 0x4, address: 0x8076D25C
// Range: 0x800C93F0 -> 0x800C9400
void World::_OGEventSpyEntity::Deactivate() {
}
// Range: 0x800C9400 -> 0x800C9450
void World::_OGEventSpyEntity::Destroy(class _OGEventSpyEntity * this /* r31 */) {
}
// signature: World::_OGEventSpySchema::Fix(World::Asset *, long, int)
// Range: 0x800C94B0 -> 0x800C94B8
void World::_OGEventSpySchema::Fix() {
}
// signature: World::_OGEventSpySchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800C94C0 -> 0x800C950C
class EntityStub * World::_OGEventSpySchema::CreateStub(class _OGEventSpySchema * this /* r31 */) {
}
// signature: World::_OGEventSpySchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800C9510 -> 0x800C9528
void World::_OGEventSpySchema::DestroyStub() {
}
// signature: World::_OGEventSpySchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800C9530 -> 0x800C9594
class Entity * World::_OGEventSpySchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World17_OGEventSpyEntity;
}
// signature: zEventSpy_Init(void *, void *)
// Range: 0x800C95E0 -> 0x800C9604
void zEventSpy_Init() {
    // References
    // -> struct {} __vt__9zEventSpy;
}
// signature: EventSpyEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800C9610 -> 0x800C962C
static void EventSpyEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x800C9630 -> 0x800C9678
void zEventSpy::Init(class zEventSpy * this /* r30 */, class zEventSpyAsset * inAsset /* r31 */) {
}
// Range: 0x800C9680 -> 0x800C968C
void zEventSpy::Setup() {
}
// Range: 0x800C9690 -> 0x800C969C
void zEventSpy::Reset() {
}
// signature: zEventSpy::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800C96A0 -> 0x800C9708
void zEventSpy::HandleEvent() {
}
// Range: 0x800C9710 -> 0x800C9728
void zEventSpy::DestroySpyList() {
    // References
    // -> class zEventSpy * * spyList;
    // -> int spyCount;
}
// signature: zEventSpy::BuildSpyList(zScene *)
// Range: 0x800C9730 -> 0x800C9734
void zEventSpy::BuildSpyList() {
}
