/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\Blobs\SkeletonBlobEntity.cpp
*/
class SkeletonBlobSchema schema; // size: 0x18, address: 0x807FEC38
class SchemaRegistrator schemaReg; // size: 0x8, address: 0x807FEC50
class Schema * skeletonBlobSchema; // size: 0x4, address: 0x80707E18
// signature: World::SkeletonBlobSchema::Fix(World::Asset *, long, int)
// Range: 0x8024D14C -> 0x8024D1E0
void World::SkeletonBlobSchema::Fix() {
    // Local variables
    class SkeletonBlobAsset * asset; // r0
}
// signature: World::SkeletonBlobSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8024D1E0 -> 0x8024D22C
class EntityStub * World::SkeletonBlobSchema::CreateStub(class SkeletonBlobSchema * this /* r31 */) {
}
// signature: World::SkeletonBlobSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8024D22C -> 0x8024D244
void World::SkeletonBlobSchema::DestroyStub() {
}
// signature: World::SkeletonBlobSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8024D244 -> 0x8024D25C
class Entity * World::SkeletonBlobSchema::ActivateEntity() {
}
// signature: World::SkeletonBlobEntity::Create(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8024D29C -> 0x8024D3DC
class SkeletonBlobEntity * World::SkeletonBlobEntity::Create(class EntityHandleBase * handle /* r27 */, class Asset * baseAsset /* r29 */) {
    // Local variables
    class SkeletonBlobAsset * asset; // r0
    int skinCount; // r30
    int memSize; // r28
    class StackAllocator allocator; // r1+0x10
    class EvaluatorInfo * evals; // r4
    class GroupNode * groups; // r7
    class SkinCluster * iskins; // r9

    {
        // Range: 0x8024D334 -> 0x8024D33C
        // Local variables
        int i; // r7
    }

    // References
    // -> struct {} __vt__Q28Graphics8Skeleton;
    // -> struct {} __vt__Q25World18SkeletonBlobEntity;
}
// Range: 0x8024D3DC -> 0x8024D44C
void World::SkeletonBlobEntity::Deactivate(class SkeletonBlobEntity * this /* r31 */) {
}
// signature: World::SkeletonBlobEntity::ReplaceAsset(const World::Asset *, const World::Asset *)
// Range: 0x8024D44C -> 0x8024D454
bool World::SkeletonBlobEntity::ReplaceAsset() {
}
// Range: 0x8024D454 -> 0x8024D45C
bool World::SkeletonBlobEntity::ReplaceAssetCompleted() {
}
// Range: 0x8024D45C -> 0x8024D4AC
void World::SkeletonBlobEntity::Destroy(class SkeletonBlobEntity * this /* r31 */) {
}
