/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Entities\Blobs\CMeshBlobEntity.cpp
*/
// signature: World::CollisionMeshBlobEntity::CollisionMeshBlobEntity(World::EntityHandleBase *)
// Range: 0x801C0BF0 -> 0x801C0C40
void * World::CollisionMeshBlobEntity::CollisionMeshBlobEntity(class CollisionMeshBlobEntity * this /* r31 */) {
    // References
    // -> struct {} __vt__Q25World23CollisionMeshBlobEntity;
}
// Range: 0x801C0C40 -> 0x801C0CF4
class hkpPhysicsSystem * World::CollisionMeshBlobEntity::GetPhysicsSystem(class CollisionMeshBlobEntity * this /* r27 */, int sysIndex /* r28 */, int dataIndex /* r29 */) const {
    // Local variables
    class hkpPhysicsData * physicsData; // r30

    // References
    // -> class hkClass hkpPhysicsDataClass;
}
// Range: 0x801C0D00 -> 0x801C0D88
class hkpShape * World::CollisionMeshBlobEntity::GetPhysicsShape(class CollisionMeshBlobEntity * this /* r29 */, int index /* r30 */) const {
    // Local variables
    class hkpShape * physicsShape; // r5
}
// signature: World::CollisionMeshBlobAsset::Create(World::EntityHandleBase *, World::CollisionMeshBlobAsset *)
// Range: 0x801C0D90 -> 0x801C0F1C
class Entity * World::CollisionMeshBlobAsset::Create(class EntityHandleBase * handle /* r26 */) {
    // Local variables
    class hkRootLevelContainer * havokRootContainer; // r1+0x10
    int collFilter; // r1+0xC
    int memSize; // r29
    class StackAllocator allocator; // r1+0x14
    unsigned long long * temp; // r27

    {
        // Range: 0x801C0E70 -> 0x801C0EC8
        // Local variables
        int i; // r26
    }
}
// Range: 0x801C0F20 -> 0x801C0F64
void World::CollisionMeshBlobEntity::Deactivate() {
}
// Range: 0x801C0F70 -> 0x801C0FE8
void World::CollisionMeshBlobEntity::Destroy(class CollisionMeshBlobEntity * this /* r29 */) {
    {
        // Range: 0x801C0F84 -> 0x801C0FBC
        // Local variables
        int i; // r30
    }
}
