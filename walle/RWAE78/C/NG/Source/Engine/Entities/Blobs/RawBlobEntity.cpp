/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\Blobs\RawBlobEntity.cpp
*/
class RawBlobSchema schema; // size: 0x18, address: 0x807FEBF8
class SchemaRegistrator schemaReg; // size: 0x8, address: 0x807FEC10
class Schema * rawBlobSchema; // size: 0x4, address: 0x80707DB8
// signature: World::RawBlobSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8024C3D8 -> 0x8024C424
class EntityStub * World::RawBlobSchema::CreateStub(class RawBlobSchema * this /* r31 */) {
}
// signature: World::RawBlobSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8024C424 -> 0x8024C43C
void World::RawBlobSchema::DestroyStub() {
}
// signature: World::RawBlobSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8024C43C -> 0x8024C4D0
class Entity * World::RawBlobSchema::ActivateEntity(class EntityHandleBase * handle /* r29 */, class Asset * baseAsset /* r30 */, int size /* r31 */) {
    // References
    // -> struct {} __vt__Q25World13RawBlobEntity;
}
// Range: 0x8024C4D0 -> 0x8024C558
void World::RawBlobEntity::Deactivate(class RawBlobEntity * this /* r31 */) {
}
// Range: 0x8024C558 -> 0x8024C5A8
void World::RawBlobEntity::Destroy(class RawBlobEntity * this /* r31 */) {
}
// signature: World::RawBlobEntity::ReplaceAsset(const World::Asset *, const World::Asset *)
// Range: 0x8024C600 -> 0x8024C608
bool World::RawBlobEntity::ReplaceAsset() {
}
// Range: 0x8024C608 -> 0x8024C610
bool World::RawBlobEntity::ReplaceAssetCompleted() {
}
