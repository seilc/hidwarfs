/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zDecal.cpp
*/
class _OGDecalSchema _OGDecalschema; // size: 0x18, address: 0x8076D190
class SchemaRegistrator _OGDecalschemaReg; // size: 0x8, address: 0x8076D1A8
// Range: 0x800C6780 -> 0x800C6790
void World::_OGDecalEntity::Deactivate() {
}
// Range: 0x800C6790 -> 0x800C67E0
void World::_OGDecalEntity::Destroy(class _OGDecalEntity * this /* r31 */) {
}
// signature: World::_OGDecalSchema::Fix(World::Asset *, long, int)
// Range: 0x800C6840 -> 0x800C6848
void World::_OGDecalSchema::Fix() {
}
// signature: World::_OGDecalSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800C6850 -> 0x800C689C
class EntityStub * World::_OGDecalSchema::CreateStub(class _OGDecalSchema * this /* r31 */) {
}
// signature: World::_OGDecalSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800C68A0 -> 0x800C68B8
void World::_OGDecalSchema::DestroyStub() {
}
// signature: World::_OGDecalSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800C68C0 -> 0x800C6924
class Entity * World::_OGDecalSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World14_OGDecalEntity;
}
// signature: zDecal::Init(void *, void *)
// Range: 0x800C6970 -> 0x800C6974
void zDecal::Init() {
}
// signature: zDecal::init(zDecal::AssetType *)
// Range: 0x800C6980 -> 0x800C6C90
void zDecal::init(class zDecal * this /* r30 */) {
    // Local variables
    class Goodie * goodie; // r0

    {
        // Range: 0x800C6B84 -> 0x800C6C6C
        {
            // Range: 0x800C6BA0 -> 0x800C6BB4
            // Local variables
            unsigned int i; // r8
        }
    }
}
// Range: 0x800C6C90 -> 0x800C6CB0
float zDecal::getWidth() {
}
// signature: zDecal::setHeight(float)
// Range: 0x800C6CB0 -> 0x800C6CD0
void zDecal::setHeight() {
}
// signature: zDecal::emit(const xMat4x3 &)
// Range: 0x800C6CD0 -> 0x800C6CE8
void zDecal::emit() {
}
