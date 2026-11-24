/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Entities\SkinGeometryEntity.cpp
*/
// signature: World::SkinGeometryEntity::SkinGeometryEntity(World::EntityHandleBase *)
// Range: 0x801BD0F0 -> 0x801BD150
void * World::SkinGeometryEntity::SkinGeometryEntity(class SkinGeometryEntity * this /* r30 */) {
    // References
    // -> struct {} __vt__Q28Graphics11SkinBuilder;
    // -> struct {} __vt__Q25World18SkinGeometryEntity;
}
// Range: 0x801BD220 -> 0x801BD68C
class Entity * World::SkinGeometryAsset::Create(class EntityHandleBase * handle /* r17 */, class SkinGeometryAsset * asset /* r15 */) {
    // Local variables
    int posIndex; // r21
    int effectStreamCount; // r20
    int skinBufferMapSize; // r19
    class BuilderInfo info; // r1+0x98
    int shaderContextListBufferAlign; // r1+0x78
    int shaderContextListBufferSize; // r0
    int memSize; // r9
    class StackAllocator allocator; // r1+0x88
    class FixedVertexBuffer * staticVertexBuffers; // r0
    unsigned short * * indexLists; // r18
    unsigned char * istaticStreamMap; // r0
    class VertexStream * istreams; // r1+0xC0
    void * posInput; // r16
    int posInputSize; // r17

    {
        // Range: 0x801BD250 -> 0x801BD278
        // Local variables
        int i; // r5
    }
    {
        // Range: 0x801BD3F8 -> 0x801BD470
        // Local variables
        int i; // r17

        {
            // Range: 0x801BD3F8 -> 0x801BD470
            // Local variables
            int streamIndex; // r16
        }
    }
    {
        // Range: 0x801BD470 -> 0x801BD4C0
        // Local variables
        int i; // r6
    }
}
// Range: 0x801BD6C0 -> 0x801BD728
void World::SkinGeometryEntity::Deactivate(class SkinGeometryEntity * this /* r31 */) {
}
// Range: 0x801BD730 -> 0x801BD790
void World::SkinGeometryEntity::Destroy(class SkinGeometryEntity * this /* r30 */) {
    // Local variables
    int memSize; // r31
}
