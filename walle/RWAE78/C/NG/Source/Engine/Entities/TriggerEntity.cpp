/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\TriggerEntity.cpp
*/
class TriggerSchema schema; // size: 0x18, address: 0x807FEB58
class SchemaRegistrator schemaReg; // size: 0x8, address: 0x807FEB70
class Schema * triggerSchema; // size: 0x4, address: 0x80707CD4
// signature: World::TriggerSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80249228 -> 0x80249274
class EntityStub * World::TriggerSchema::CreateStub(class TriggerSchema * this /* r31 */) {
}
// signature: World::TriggerSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x80249274 -> 0x8024928C
void World::TriggerSchema::DestroyStub() {
}
// signature: World::TriggerSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8024928C -> 0x802492A4
class Entity * World::TriggerSchema::ActivateEntity() {
}
// signature: World::TriggerSchema::Fix(World::Asset *, long, int)
// Range: 0x802492A4 -> 0x80249540
void World::TriggerSchema::Fix() {
}
// Range: 0x80249540 -> 0x8024954C
void World::TriggerEntity::UpdateRender() {
}
// signature: World::TriggerEntity::Create(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8024954C -> 0x802496D4
class TriggerEntity * World::TriggerEntity::Create(class EntityHandleBase * handle /* r29 */, class Asset * baseAsset /* r30 */) {
    // Local variables
    class Trigger * asset; // r0
    class StackAllocator allocator; // r1+0x48
    class Vector pos; // r1+0x38
    class Vector boxSides; // r1+0x28

    // References
    // -> struct {} __vt__Q25World13TriggerEntity;
}
// Range: 0x802496D4 -> 0x80249724
void World::TriggerEntity::Deactivate(class TriggerEntity * this /* r31 */) {
}
