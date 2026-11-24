/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Entities\StaticGeometryEntity.cpp
*/
// signature: World::StaticGeometryEntity::StaticGeometryEntity(World::EntityHandleBase *)
// Range: 0x801BD7F0 -> 0x801BD86C
void * World::StaticGeometryEntity::StaticGeometryEntity(class StaticGeometryEntity * this /* r29 */) {
    // References
    // -> struct {} __vt__Q28Graphics14StaticGeometry;
    // -> struct {} __vt__Q28Graphics13StaticBuilder;
    // -> struct {} __vt__Q25World20StaticGeometryEntity;
}
// Range: 0x801BD8D0 -> 0x801BDD54
class Entity * World::StaticGeometryAsset::Create(class EntityHandleBase * handle /* r20 */, class StaticGeometryAsset * asset /* r19 */) {
    // Local variables
    class BuilderInfo info; // r1+0x60
    int shaderContextListBufferAlign; // r1+0x30
    int shaderContextListBufferSize; // r0
    int memSize; // r10
    class StackAllocator allocator; // r1+0x50
    class FixedVertexBuffer * fixedVertexBuffers; // r0
    unsigned short * * indexLists; // r0
    int * indexBufferSizes; // r0
    int * vertexBufferSizes; // r0

    {
        // Range: 0x801BDA50 -> 0x801BDA9C
        // Local variables
        int end; // r20
        int i; // r30
    }
    {
        // Range: 0x801BDAAC -> 0x801BDB10
        // Local variables
        int end; // r6
        int i; // r0
    }
    {
        // Range: 0x801BDBE0 -> 0x801BDC1C
        // Local variables
        int end; // r0
        int i; // r0
    }
    {
        // Range: 0x801BDC20 -> 0x801BDC94
        // Local variables
        int end; // r0
        int i; // r0
    }
    {
        // Range: 0x801BDC94 -> 0x801BDCF0
        // Local variables
        class CollKDTree * kdtree; // r16
    }
}
// Range: 0x801BDDA0 -> 0x801BDE08
void World::StaticGeometryEntity::Deactivate(class StaticGeometryEntity * this /* r31 */) {
}
// Range: 0x801BDE10 -> 0x801BDE80
void World::StaticGeometryEntity::Destroy(class StaticGeometryEntity * this /* r30 */) {
    // Local variables
    int memSize; // r31
}
