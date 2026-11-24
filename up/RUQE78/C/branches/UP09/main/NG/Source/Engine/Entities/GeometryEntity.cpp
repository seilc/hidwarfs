/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Entities\GeometryEntity.cpp
*/
static enum PrimitiveType primTable[6]; // size: 0x18, address: 0x807875C0
// signature: World::GeometryEntity::BlobOwner::ReplaceAsset(const World::Asset *, const World::Asset *)
// Range: 0x802DAFB4 -> 0x802DAFB8
void World::GeometryEntity::BlobOwner::ReplaceAsset() {
}
// signature: World::GeometryEntity::ReserveBuilderData(World::GeometryEntity::BuilderInfo &, const World::GeometryAsset &, World::EntityHandleBase *)
// Range: 0x802DAFB8 -> 0x802DB108
void World::GeometryEntity::ReserveBuilderData(class BuilderInfo & info /* r30 */, class GeometryAsset & asset /* r31 */) {
}
// Range: 0x802DB120 -> 0x802DB4E4
void World::GeometryEntity::CreateBuilderData(class StackAllocator & allocator /* r27 */, class BuilderData & data /* r28 */, class BuilderInfo & info /* r29 */, class GeometryAsset & asset /* r30 */, class EntityHandleBase * handle /* r31 */) {
    // Local variables
    class IndexLOD * ilods; // r0
    class VertexStream * istreams; // r0
    void * rendParamCargoBuffer; // r0
    void * rendParamDataBuffer; // r0

    {
        // Range: 0x802DB1E4 -> 0x802DB28C
        // Local variables
        int i; // r25

        {
            // Range: 0x802DB1E4 -> 0x802DB28C
            // Local variables
            class BlobRef & blober; // r26
        }
    }
    {
        // Range: 0x802DB29C -> 0x802DB344
        // Local variables
        int i; // r20

        {
            // Range: 0x802DB29C -> 0x802DB344
            // Local variables
            unsigned long long id; // r3:r4
            class BlobRef & blober; // r19
        }
    }

    // References
    // -> static enum PrimitiveType primTable[6];
    // -> struct {} __vt__Q35World14GeometryEntity9BlobOwner;
}
// signature: World::GeometryEntity::DeactivateBuilderData(World::GeometryEntity::BuilderData &, World::EntityHandleBase *)
// Range: 0x802DB4FC -> 0x802DB730
void World::GeometryEntity::DeactivateBuilderData(class BuilderData & data /* r30 */) {
    {
        // Range: 0x802DB5B0 -> 0x802DB644
        // Local variables
        int i; // r31
    }
    {
        // Range: 0x802DB654 -> 0x802DB6E0
        // Local variables
        int i; // r31
    }
}
