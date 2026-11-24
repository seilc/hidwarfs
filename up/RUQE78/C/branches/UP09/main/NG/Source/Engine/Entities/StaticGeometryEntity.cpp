/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Entities\StaticGeometryEntity.cpp
*/
// Range: 0x802E24D0 -> 0x802E2DA8
class Entity * World::StaticGeometryAsset::Create(class EntityHandleBase * handle /* r21 */, class StaticGeometryAsset * asset /* r31 */) {
    // Local variables
    class BuilderInfo info; // r1+0x58
    int shaderContextListBufferAlign; // r1+0x28
    int shaderContextListBufferSize; // r0
    int memSize; // r10
    class StackAllocator allocator; // r1+0x48

    {
        // Range: 0x802E266C -> 0x802E2678
        // Local variables
        int end; // r7
        int i; // r6
    }
    {
        // Range: 0x802E2878 -> 0x802E2978
        // Local variables
        int end; // r9
        int i; // r0
    }
    {
        // Range: 0x802E2A70 -> 0x802E2A78
        // Local variables
        int end; // r6
        int i; // r5
    }
    {
        // Range: 0x802E2BA4 -> 0x802E2BA8
        // Local variables
        int end; // r9
        int i; // r0
    }
    {
        // Range: 0x802E2CD0 -> 0x802E2D2C
        // Local variables
        class CollKDTree * kdtree; // r21
    }

    // References
    // -> class SingleBufferAllocator updateFrameAllocator;
    // -> struct {} __vt__Q28Graphics14StaticGeometry;
    // -> struct {} __vt__Q28Graphics13StaticBuilder;
    // -> struct {} __vt__Q25World20StaticGeometryEntity;
}
// Range: 0x802E2DA8 -> 0x802E2E24
void World::StaticGeometryEntity::Deactivate(class StaticGeometryEntity * this /* r31 */) {
}
// Range: 0x802E2E24 -> 0x802E2E90
void World::StaticGeometryEntity::Destroy(class StaticGeometryEntity * this /* r31 */) {
}
