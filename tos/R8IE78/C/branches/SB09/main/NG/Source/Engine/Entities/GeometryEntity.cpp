/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Entities\GeometryEntity.cpp
*/
static enum PrimitiveType primTable[6]; // size: 0x18, address: 0x80692AF8
// signature: World::GeometryEntity::ReserveBuilderData(World::GeometryEntity::BuilderInfo &, const World::GeometryAsset &, World::EntityHandleBase *)
// Range: 0x801B7390 -> 0x801B7454
void World::GeometryEntity::ReserveBuilderData(class BuilderInfo & info /* r31 */, class GeometryAsset & asset /* r28 */) {
}
// Range: 0x801B7460 -> 0x801B76F8
void World::GeometryEntity::CreateBuilderData(class StackAllocator & allocator /* r24 */, class BuilderData & data /* r25 */, class BuilderInfo & info /* r26 */, class GeometryAsset & asset /* r27 */, class EntityHandleBase * handle /* r28 */) {
    // Local variables
    class IndexLOD * ilods; // r30
    class VertexStream * istreams; // r29

    {
        // Range: 0x801B74B0 -> 0x801B753C
        // Local variables
        int i; // r29

        {
            // Range: 0x801B74B0 -> 0x801B753C
            // Local variables
            class BlobRef & blober; // r21
        }
    }
    {
        // Range: 0x801B7540 -> 0x801B75C8
        // Local variables
        int i; // r30

        {
            // Range: 0x801B7540 -> 0x801B75C8
            // Local variables
            unsigned long long id; // r3:r4
            class BlobRef & blober; // r19
        }
    }

    // References
    // -> static enum PrimitiveType primTable[6];
}
// signature: World::GeometryEntity::DeactivateBuilderData(World::GeometryEntity::BuilderData &, World::EntityHandleBase *)
// Range: 0x801B7810 -> 0x801B78F0
void World::GeometryEntity::DeactivateBuilderData(class BuilderData & data /* r29 */) {
    {
        // Range: 0x801B7834 -> 0x801B7884
        // Local variables
        int i; // r30
    }
    {
        // Range: 0x801B7884 -> 0x801B78CC
        // Local variables
        int i; // r30
    }
}
