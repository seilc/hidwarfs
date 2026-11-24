/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\TextureResourceEntity.cpp
*/
class TextureResourceSchema schema; // size: 0x18, address: 0x807FEB38
class SchemaRegistrator schemaReg; // size: 0x8, address: 0x807FEB50
class Schema * textureResourceSchema; // size: 0x4, address: 0x80707C7C
// signature: World::TextureResourceSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x802488F4 -> 0x80248940
class EntityStub * World::TextureResourceSchema::CreateStub(class TextureResourceSchema * this /* r31 */) {
}
// signature: World::TextureResourceSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x80248940 -> 0x80248958
void World::TextureResourceSchema::DestroyStub() {
}
// signature: World::TextureResourceSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80248958 -> 0x80248970
class Entity * World::TextureResourceSchema::ActivateEntity() {
}
// signature: World::TextureResourceEntity::BlobOwner::ReplaceAsset(const World::Asset *, const World::Asset *)
// Range: 0x80248970 -> 0x80248974
void World::TextureResourceEntity::BlobOwner::ReplaceAsset() {
}
// signature: World::TextureResourceEntity::Create(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x802489B4 -> 0x80248E2C
class TextureResourceEntity * World::TextureResourceEntity::Create(class EntityHandleBase * handle /* r26 */, class Asset * baseAsset /* r27 */) {
    // Local variables
    class TextureResourceAssetBase * asset; // r0
    void * imageBuffer; // r28

    // References
    // -> struct {} __vt__Q28Graphics7Texture;
    // -> struct {} __vt__Q35World21TextureResourceEntity16TextureContainer;
    // -> static class ScadMgrModule scadMgrMod;
    // -> struct {} __vt__Q35World21TextureResourceEntity9BlobOwner;
    // -> struct {} __vt__Q25World21TextureResourceEntity;
}
// Range: 0x80248E2C -> 0x80248FD4
void World::TextureResourceEntity::Deactivate(class TextureResourceEntity * this /* r31 */) {
}
// Range: 0x80248FD4 -> 0x80249024
void World::TextureResourceEntity::Destroy(class TextureResourceEntity * this /* r31 */) {
}
// Range: 0x802490B8 -> 0x80249134
void World::TextureResourceEntity::TextureContainer::Allocate(class TextureContainer * this /* r29 */, void * data /* r30 */, int size /* r31 */) {
}
// Range: 0x80249134 -> 0x802491A4
void World::TextureResourceEntity::TextureContainer::Release(class TextureContainer * this /* r31 */) {
}
// Range: 0x802491A4 -> 0x802491E8
void World::TextureResourceEntity::TextureContainer::Destroy(class TextureContainer * this /* r31 */) {
}
