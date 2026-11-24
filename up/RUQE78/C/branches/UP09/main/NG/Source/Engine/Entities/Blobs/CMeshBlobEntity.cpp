/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Entities\Blobs\CMeshBlobEntity.cpp
*/
// Range: 0x802E53A0 -> 0x802E5454
class hkpPhysicsSystem * World::CollisionMeshBlobEntity::GetPhysicsSystem(class CollisionMeshBlobEntity * this /* r27 */, int sysIndex /* r28 */, int dataIndex /* r29 */) const {
    // Local variables
    class hkpPhysicsData * physicsData; // r30

    // References
    // -> class hkClass hkpPhysicsDataClass;
}
// Range: 0x802E5454 -> 0x802E54EC
class hkpShape * World::CollisionMeshBlobEntity::GetPhysicsShape(class CollisionMeshBlobEntity * this /* r29 */, int index /* r30 */) const {
    // Local variables
    class hkpShape * physicsShape; // r5
}
// signature: World::CollisionMeshBlobAsset::Create(World::EntityHandleBase *, World::CollisionMeshBlobAsset *)
// Range: 0x802E54EC -> 0x802E5674
class Entity * World::CollisionMeshBlobAsset::Create(class EntityHandleBase * handle /* r27 */) {
    // Local variables
    class hkRootLevelContainer * havokRootContainer; // r1+0x10
    int collFilter; // r1+0xC
    int memSize; // r28
    class StackAllocator allocator; // r1+0x14
    unsigned long long * temp; // r0

    {
        // Range: 0x802E55D0 -> 0x802E5610
        // Local variables
        int i; // r27
    }

    // References
    // -> struct {} __vt__Q25World23CollisionMeshBlobEntity;
}
// Range: 0x802E5674 -> 0x802E56B8
void World::CollisionMeshBlobEntity::Deactivate() {
}
// Range: 0x802E56B8 -> 0x802E5748
void World::CollisionMeshBlobEntity::Destroy(class CollisionMeshBlobEntity * this /* r27 */) {
    {
        // Range: 0x802E56CC -> 0x802E5710
        // Local variables
        int i; // r28
    }
}
