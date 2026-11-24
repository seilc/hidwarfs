/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\MaterialEntity.cpp
*/
class MaterialSchema schema; // size: 0x18, address: 0x807FE950
class SchemaRegistrator schemaReg; // size: 0x8, address: 0x807FE968
class Schema * materialSchema; // size: 0x4, address: 0x80707AA0
// signature: World::MaterialSchema::Fix(World::Asset *, long, int)
// Range: 0x8023F680 -> 0x8023F778
void World::MaterialSchema::Fix() {
}
// signature: World::MaterialSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8023F778 -> 0x8023F7C4
class EntityStub * World::MaterialSchema::CreateStub(class MaterialSchema * this /* r31 */) {
}
// signature: World::MaterialSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8023F7C4 -> 0x8023F7DC
void World::MaterialSchema::DestroyStub() {
}
// signature: World::MaterialSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8023F7DC -> 0x8023F7F4
class Entity * World::MaterialSchema::ActivateEntity() {
}
// signature: World::MaterialEntity::Create(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8023F834 -> 0x8023FFF0
class MaterialEntity * World::MaterialEntity::Create(class EntityHandleBase * handle /* r30 */, class Asset * baseAsset /* r31 */) {
    // Local variables
    class MaterialAsset * asset; // r0
    class RenderMode * renderMode; // r20
    class RenderModeEntity * renderModeEnt; // r19
    int paramCount; // r18
    int memSize; // r0
    class StackAllocator allocator; // r1+0x34

    // References
    // -> struct {} __vt__Q28Graphics8Material;
    // -> struct {} __vt__Q25World14MaterialEntity;
    // -> static class ScadMgrModule scadMgrMod;
}
// Range: 0x8023FFF0 -> 0x80240278
void World::MaterialEntity::Deactivate(class MaterialEntity * this /* r31 */) {
}
// Range: 0x80240278 -> 0x802402C8
void World::MaterialEntity::Destroy(class MaterialEntity * this /* r31 */) {
    // Local variables
    void * mem; // reg65535
}
