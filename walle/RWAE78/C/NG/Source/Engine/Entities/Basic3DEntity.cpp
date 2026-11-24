/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\Basic3DEntity.cpp
*/
static class Basic3DSchema schema; // size: 0x18, address: 0x807FE850
static class SchemaRegistrator schemaReg; // size: 0x8, address: 0x807FE868
class Schema * basic3DSchema; // size: 0x4, address: 0x80707914
// signature: World::Basic3DSchema::Fix(World::Asset *, long, int)
// Range: 0x80237B70 -> 0x80237E24
void World::Basic3DSchema::Fix() {
}
// signature: World::Basic3DSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80237E24 -> 0x80237E70
class EntityStub * World::Basic3DSchema::CreateStub(class Basic3DSchema * this /* r31 */) {
}
// signature: World::Basic3DSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x80237E70 -> 0x80237E88
void World::Basic3DSchema::DestroyStub() {
}
// signature: World::Basic3DSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80237E88 -> 0x80237EA0
class Entity * World::Basic3DSchema::ActivateEntity() {
}
// Range: 0x80237EF4 -> 0x80237EF8
void World::Basic3DEntity::UpdateMotion() {
}
// Range: 0x80237EF8 -> 0x80237EFC
void World::Basic3DEntity::UpdateRender() {
}
// signature: World::Basic3DEntity::Create(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80237EFC -> 0x80238584
class Basic3DEntity * World::Basic3DEntity::Create(class EntityHandleBase * handle /* r28 */, class Asset * baseAsset /* r27 */) {
    // Local variables
    class Basic3D * asset; // r0
    class CreateInfo modelInfo; // r1+0x40
    int memSize; // r26
    class StackAllocator allocator; // r1+0x30
    void * modelMem; // r0

    // References
    // -> class Renderable3DTransform g_identity;
    // -> class Scene * primaryScene;
    // -> struct {} __vt__Q25World20ModelInstanceArticle;
    // -> struct {} __vt__Q25World13Basic3DEntity;
}
// Range: 0x80238B30 -> 0x80238CB4
void World::Basic3DEntity::Deactivate(class Basic3DEntity * this /* r31 */) {
}
// Range: 0x80238CB4 -> 0x80238D1C
void World::Basic3DEntity::Destroy(class Basic3DEntity * this /* r31 */) {
}
