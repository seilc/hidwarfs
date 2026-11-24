/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Entities\SkinGeometryEntity.cpp
*/
// Range: 0x802E1F78 -> 0x802E23EC
class Entity * World::SkinGeometryAsset::Create(class EntityHandleBase * handle /* r19 */, class SkinGeometryAsset * asset /* r27 */) {
    // Local variables
    int posIndex; // r31
    int effectStreamCount; // r30
    int skinBufferMapSize; // r29
    class BuilderInfo info; // r1+0x90
    int shaderContextListBufferAlign; // r1+0x70
    int shaderContextListBufferSize; // r0
    int memSize; // r8
    class StackAllocator allocator; // r1+0x80
    unsigned char * istaticStreamMap; // r0
    class VertexStream * istreams; // r0
    void * posInput; // r31
    int posInputSize; // r28

    {
        // Range: 0x802E1FA8 -> 0x802E1FC8
        // Local variables
        int i; // r5
    }
    {
        // Range: 0x802E215C -> 0x802E216C
        // Local variables
        int i; // r6

        {
            // Range: 0x802E215C -> 0x802E216C
            // Local variables
            int streamIndex; // r8
        }
    }
    {
        // Range: 0x802E21CC -> 0x802E21DC
        // Local variables
        int i; // r7
    }

    // References
    // -> struct {} __vt__Q28Graphics11SkinBuilder;
    // -> struct {} __vt__Q25World18SkinGeometryEntity;
}
// Range: 0x802E23EC -> 0x802E2468
void World::SkinGeometryEntity::Deactivate(class SkinGeometryEntity * this /* r31 */) {
}
// Range: 0x802E2468 -> 0x802E24C4
void World::SkinGeometryEntity::Destroy(class SkinGeometryEntity * this /* r31 */) {
}
