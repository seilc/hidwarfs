/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\Blobs\CMeshBlobEntity.cpp
*/
class CollisionMeshBlobSchema schema; // size: 0x18, address: 0x807FEBD8
class SchemaRegistrator schemaReg; // size: 0x8, address: 0x807FEBF0
class Schema * collisionMeshBlobSchema; // size: 0x4, address: 0x80707D90
// signature: World::CollisionMeshBlobSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8024BDFC -> 0x8024BE48
class EntityStub * World::CollisionMeshBlobSchema::CreateStub(class CollisionMeshBlobSchema * this /* r31 */) {
}
// signature: World::CollisionMeshBlobSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8024BE48 -> 0x8024BE60
void World::CollisionMeshBlobSchema::DestroyStub() {
}
// signature: World::CollisionMeshBlobSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8024BE60 -> 0x8024BE78
class Entity * World::CollisionMeshBlobSchema::ActivateEntity() {
    // Local variables
    class CollisionMeshBlobEntity * value; // r0
}
// signature: World::CollisionMeshBlobSchema::Fix(World::Asset *, long, int)
// Range: 0x8024BE78 -> 0x8024BE88
void World::CollisionMeshBlobSchema::Fix() {
    // Local variables
    class CollisionMeshBlobAsset * cmeshAsset; // r0
}
// signature: World::CollisionMeshBlobEntity::Create(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8024BE88 -> 0x8024C238
class CollisionMeshBlobEntity * World::CollisionMeshBlobEntity::Create(class EntityHandleBase * handle /* r21 */) {
    // Local variables
    class CollisionMeshBlobAsset * asset; // r0
    class hkpShape * pBodyShape; // r1+0x10
    int collFilter; // r1+0xC
    int memSize; // r20
    class StackAllocator allocator; // r1+0x20

    {
        // Range: 0x8024BF30 -> 0x8024C1D4
        // Local variables
        int i; // r29
    }

    // References
    // -> static class ScadMgrModule scadMgrMod;
    // -> struct {} __vt__Q25World23CollisionMeshBlobEntity;
}
// Range: 0x8024C238 -> 0x8024C27C
void World::CollisionMeshBlobEntity::Deactivate() {
}
// Range: 0x8024C27C -> 0x8024C388
void World::CollisionMeshBlobEntity::Destroy(class CollisionMeshBlobEntity * this /* r26 */) {
    {
        // Range: 0x8024C290 -> 0x8024C350
        // Local variables
        int i; // r27
    }
}
// signature: World::CollisionMeshBlobEntity::ReplaceAsset(const World::Asset *, const World::Asset *)
// Range: 0x8024C388 -> 0x8024C390
bool World::CollisionMeshBlobEntity::ReplaceAsset() {
}
// Range: 0x8024C390 -> 0x8024C398
bool World::CollisionMeshBlobEntity::ReplaceAssetCompleted() {
}
