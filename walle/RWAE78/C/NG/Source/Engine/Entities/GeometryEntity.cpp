/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\GeometryEntity.cpp
*/
static enum PrimitiveType primTable[6]; // size: 0x18, address: 0x806D5368
// signature: World::GeometryEntity::BlobOwner::ReplaceAsset(const World::Asset *, const World::Asset *)
// Range: 0x8023A548 -> 0x8023A54C
void World::GeometryEntity::BlobOwner::ReplaceAsset() {
}
// signature: World::GeometryEntity::ReserveBuilderData(World::GeometryEntity::BuilderInfo &, const World::GeometryAsset &, World::EntityHandleBase *)
// Range: 0x8023A54C -> 0x8023A93C
void World::GeometryEntity::ReserveBuilderData(class BuilderInfo * info /* r27 */, class GeometryAsset * asset /* r28 */) {
    // References
    // -> static class ScadMgrModule scadMgrMod;
}
// Range: 0x8023A958 -> 0x8023B4AC
void World::GeometryEntity::CreateBuilderData(class StackAllocator * allocator /* r1+0x8 */, class BuilderData * data /* r24 */, class BuilderInfo * info /* r25 */, class GeometryAsset * asset /* r26 */, class EntityHandleBase * handle /* r27 */) {
    // Local variables
    void * rendParamCargoBuffer; // r0
    void * rendParamDataBuffer; // r0

    {
        // Range: 0x8023AA28 -> 0x8023AD9C
        // Local variables
        int i; // r29

        {
            // Range: 0x8023AA28 -> 0x8023AD9C
            // Local variables
            unsigned long long id; // r17:r18
            class BlobRef * blober; // r28
        }
    }
    {
        // Range: 0x8023ADAC -> 0x8023B124
        // Local variables
        int i; // r17

        {
            // Range: 0x8023ADAC -> 0x8023B124
            // Local variables
            unsigned long long id; // r29:r30
            class BlobRef * blober; // r18
        }
    }

    // References
    // -> static float s_colorScale;
    // -> static float s_ambient[4];
    // -> static enum PrimitiveType primTable[6];
    // -> static class ScadMgrModule scadMgrMod;
    // -> struct {} __vt__Q35World14GeometryEntity9BlobOwner;
}
// signature: World::GeometryEntity::DeactivateBuilderData(World::GeometryEntity::BuilderData &, World::EntityHandleBase *)
// Range: 0x8023B544 -> 0x8023B9D0
void World::GeometryEntity::DeactivateBuilderData(class BuilderData * data /* r29 */) {
    {
        // Range: 0x8023B6E8 -> 0x8023B7F4
        // Local variables
        int i; // r30
    }
    {
        // Range: 0x8023B804 -> 0x8023B908
        // Local variables
        int i; // r30
    }
}
