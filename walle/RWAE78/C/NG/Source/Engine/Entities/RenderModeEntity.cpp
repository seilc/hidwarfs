/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\RenderModeEntity.cpp
*/
class RenderModeSchema schema; // size: 0x18, address: 0x807FEAD8
class SchemaRegistrator schemaReg; // size: 0x8, address: 0x807FEAF0
class Schema * renderModeSchema; // size: 0x4, address: 0x80707BB8
// signature: World::RenderModeSchema::Fix(World::Asset *, long, int)
// Range: 0x8024650C -> 0x80246510
void World::RenderModeSchema::Fix() {
}
// signature: World::RenderModeSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80246510 -> 0x8024655C
class EntityStub * World::RenderModeSchema::CreateStub(class RenderModeSchema * this /* r31 */) {
}
// signature: World::RenderModeSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8024655C -> 0x80246574
void World::RenderModeSchema::DestroyStub() {
}
// signature: World::RenderModeSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80246574 -> 0x8024658C
class Entity * World::RenderModeSchema::ActivateEntity() {
}
// signature: World::RenderModeEntity::Create(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8024658C -> 0x802466A4
class RenderModeEntity * World::RenderModeEntity::Create(class EntityHandleBase * handle /* r28 */, class Asset * baseAsset /* r30 */) {
    // Local variables
    class RenderModeAsset * asset; // r0
    int renderStateCount; // r31
    int memSize; // r25
    class StackAllocator allocator; // r1+0x8

    // References
    // -> struct {} __vt__Q28Graphics10RenderMode;
    // -> struct {} __vt__Q25World16RenderModeEntity;
}
// Range: 0x802466A4 -> 0x80246714
void World::RenderModeEntity::Deactivate(class RenderModeEntity * this /* r31 */) {
}
// Range: 0x80246714 -> 0x80246764
void World::RenderModeEntity::Destroy(class RenderModeEntity * this /* r31 */) {
    // Local variables
    void * mem; // reg65535
}
