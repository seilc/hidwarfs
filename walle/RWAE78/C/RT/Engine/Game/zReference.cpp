/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zReference.cpp
*/
class _OGReferenceSchema _OGReferenceschema; // size: 0x18, address: 0x80799810
class SchemaRegistrator _OGReferenceschemaReg; // size: 0x8, address: 0x80799828
// Range: 0x801904D0 -> 0x801904E0
void World::_OGReferenceEntity::Deactivate() {
}
// Range: 0x801904E0 -> 0x80190530
void World::_OGReferenceEntity::Destroy(class _OGReferenceEntity * this /* r31 */) {
}
// signature: World::_OGReferenceSchema::Fix(World::Asset *, long, int)
// Range: 0x80190590 -> 0x80190598
void World::_OGReferenceSchema::Fix() {
}
// signature: World::_OGReferenceSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801905A0 -> 0x801905EC
class EntityStub * World::_OGReferenceSchema::CreateStub(class _OGReferenceSchema * this /* r31 */) {
}
// signature: World::_OGReferenceSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x801905F0 -> 0x80190608
void World::_OGReferenceSchema::DestroyStub() {
}
// signature: World::_OGReferenceSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80190610 -> 0x80190678
class Entity * World::_OGReferenceSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World18_OGReferenceEntity;
}
// signature: zReferenceInit(xBase &, xDynAsset &, unsigned long)
// Range: 0x801906C0 -> 0x80190794
void zReferenceInit(class xBase * data /* r31 */, class xDynAsset * asset /* r30 */) {
    // References
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
}
// Range: 0x801907A0 -> 0x801908EC
void zReferenceEventCB(class xBase * from /* r28 */, class xBase * to /* r29 */, unsigned int toEvent /* r30 */, class EventAny * genericParams /* r31 */) {
    // Local variables
    class EventActionOneWidget * params; // r0
    class zReference * ref; // r0
    class xBase * toParamWidgetPtr; // r9

    // References
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
}
