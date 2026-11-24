/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\LightKitEntity.cpp
*/
class LightKitSchema schema; // size: 0x18, address: 0x807FE910
class SchemaRegistrator schemaReg; // size: 0x8, address: 0x807FE928
class Schema * lightKitSchema; // size: 0x4, address: 0x80707A68
// signature: World::LightKitSchema::Fix(World::Asset *, long, int)
// Range: 0x8023E968 -> 0x8023E96C
void World::LightKitSchema::Fix() {
}
// signature: World::LightKitSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8023E96C -> 0x8023E9B8
class EntityStub * World::LightKitSchema::CreateStub(class LightKitSchema * this /* r31 */) {
}
// signature: World::LightKitSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8023E9B8 -> 0x8023E9D0
void World::LightKitSchema::DestroyStub() {
}
// signature: World::LightKitSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8023E9D0 -> 0x8023EAAC
class Entity * World::LightKitSchema::ActivateEntity(class EntityHandleBase * handle /* r29 */) {
    // References
    // -> struct {} __vt__Q28Graphics8LightKit;
    // -> struct {} __vt__Q25World14LightKitEntity;
}
// Range: 0x8023EAAC -> 0x8023EB1C
void World::LightKitEntity::Deactivate(class LightKitEntity * this /* r31 */) {
}
// Range: 0x8023EB1C -> 0x8023EB6C
void World::LightKitEntity::Destroy(class LightKitEntity * this /* r31 */) {
    // Local variables
    void * mem; // reg65535
}
