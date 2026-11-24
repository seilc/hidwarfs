/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\StaticGeometryEntity.cpp
*/
class StaticGeometrySchema schema; // size: 0x18, address: 0x807FEB18
class SchemaRegistrator schemaReg; // size: 0x8, address: 0x807FEB30
class Schema * staticGeometrySchema; // size: 0x4, address: 0x80707C40
// signature: World::StaticGeometrySchema::Fix(World::Asset *, long, int)
// Range: 0x80247AF8 -> 0x80247DB8
void World::StaticGeometrySchema::Fix() {
    // Local variables
    class StaticGeometryAsset * asset; // r0
}
// signature: World::StaticGeometrySchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80247DB8 -> 0x80247E04
class EntityStub * World::StaticGeometrySchema::CreateStub(class StaticGeometrySchema * this /* r31 */) {
}
// signature: World::StaticGeometrySchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x80247E04 -> 0x80247E1C
void World::StaticGeometrySchema::DestroyStub() {
}
// signature: World::StaticGeometrySchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80247E1C -> 0x80247E34
class Entity * World::StaticGeometrySchema::ActivateEntity() {
}
// signature: World::StaticGeometryEntity::Create(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80247EB4 -> 0x80248774
class StaticGeometryEntity * World::StaticGeometryEntity::Create(class EntityHandleBase * handle /* r24 */) {
    // Local variables
    class StaticGeometryAsset * asset; // r31
    class BuilderInfo info; // r1+0x58
    int shaderContextListBufferAlign; // r1+0x28
    int shaderContextListBufferSize; // r0
    int memSize; // r10
    class StackAllocator allocator; // r1+0x48

    {
        // Range: 0x8024805C -> 0x80248068
        // Local variables
        int end; // r7
        int i; // r6
    }
    {
        // Range: 0x80248268 -> 0x80248368
        // Local variables
        int end; // r9
        int i; // r0
    }
    {
        // Range: 0x80248458 -> 0x80248460
        // Local variables
        int end; // r6
        int i; // r5
    }
    {
        // Range: 0x80248570 -> 0x80248570
        // Local variables
        int end; // r0
        int i; // r0
    }
    {
        // Range: 0x8024869C -> 0x802486F8
        // Local variables
        class CollKDTree * kdtree; // r21
    }

    // References
    // -> class SingleBufferAllocator updateFrameAllocator;
    // -> struct {} __vt__Q28Graphics14StaticGeometry;
    // -> struct {} __vt__Q28Graphics13StaticBuilder;
    // -> struct {} __vt__Q25World20StaticGeometryEntity;
}
// Range: 0x80248774 -> 0x802487F0
void World::StaticGeometryEntity::Deactivate(class StaticGeometryEntity * this /* r31 */) {
}
// Range: 0x802487F0 -> 0x8024885C
void World::StaticGeometryEntity::Destroy(class StaticGeometryEntity * this /* r31 */) {
}
