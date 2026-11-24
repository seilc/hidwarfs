/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\SkinGeometryEntity.cpp
*/
class SkinGeometrySchema schema; // size: 0x18, address: 0x807FEAF8
class SchemaRegistrator schemaReg; // size: 0x8, address: 0x807FEB10
class Schema * skinGeometrySchema; // size: 0x4, address: 0x80707C0C
// signature: World::SkinGeometrySchema::Fix(World::Asset *, long, int)
// Range: 0x802470EC -> 0x802473F4
void World::SkinGeometrySchema::Fix() {
    // Local variables
    class SkinGeometryAsset * asset; // r0
}
// signature: World::SkinGeometrySchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x802473F4 -> 0x80247440
class EntityStub * World::SkinGeometrySchema::CreateStub(class SkinGeometrySchema * this /* r31 */) {
}
// signature: World::SkinGeometrySchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x80247440 -> 0x80247458
void World::SkinGeometrySchema::DestroyStub() {
}
// signature: World::SkinGeometrySchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80247458 -> 0x80247470
class Entity * World::SkinGeometrySchema::ActivateEntity() {
}
// signature: World::SkinGeometryEntity::Create(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80247544 -> 0x80247988
class SkinGeometryEntity * World::SkinGeometryEntity::Create(class EntityHandleBase * handle /* r21 */) {
    // Local variables
    class SkinGeometryAsset * asset; // r31
    int posIndex; // r30
    int effectStreamCount; // r29
    int skinBufferMapSize; // r28
    class BuilderInfo info; // r1+0x78
    int shaderContextListBufferAlign; // r1+0x58
    int shaderContextListBufferSize; // r0
    int memSize; // r8
    class StackAllocator allocator; // r1+0x68
    unsigned char * istaticStreamMap; // r0
    class VertexStream * istreams; // r0
    void * posInput; // r30

    {
        // Range: 0x80247574 -> 0x80247594
        // Local variables
        int i; // r5
    }
    {
        // Range: 0x8024772C -> 0x8024773C
        // Local variables
        int i; // r6

        {
            // Range: 0x8024772C -> 0x8024773C
            // Local variables
            int streamIndex; // r8
        }
    }
    {
        // Range: 0x8024779C -> 0x802477AC
        // Local variables
        int i; // r7
    }

    // References
    // -> struct {} __vt__Q28Graphics11SkinBuilder;
    // -> struct {} __vt__Q25World18SkinGeometryEntity;
}
// Range: 0x80247988 -> 0x80247A04
void World::SkinGeometryEntity::Deactivate(class SkinGeometryEntity * this /* r31 */) {
}
// Range: 0x80247A04 -> 0x80247A60
void World::SkinGeometryEntity::Destroy(class SkinGeometryEntity * this /* r31 */) {
}
