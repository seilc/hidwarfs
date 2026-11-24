/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Entities\Shaders\GenericShaderEntity.cpp
*/
// signature: World::GenericShaderEntity::GenericShaderEntity(World::EntityHandleBase *)
// Range: 0x801C1760 -> 0x801C17C8
void * World::GenericShaderEntity::GenericShaderEntity(class GenericShaderEntity * this /* r30 */) {
    // References
    // -> struct {} __vt__Q28Graphics13GenericShader;
    // -> struct {} __vt__Q25World19GenericShaderEntity;
}
// Range: 0x801C1830 -> 0x801C1A9C
class Entity * World::GenericShaderAsset::Create(class EntityHandleBase * handle /* r15 */, class GenericShaderAsset * asset /* r16 */) {
    // Local variables
    class StateOpTableAsset & shaderOps; // r0
    class StateOpTableAsset & materialOps; // r0
    class StateOpTableAsset & geomOps; // r0
    class StateOpTableAsset & rendOps; // r0
    int shaderParamCount; // r22
    int shaderParamDataSize; // r31
    class MaterialParam * ishaderParams; // r0
    class CreateInfo paramCreateInfo; // r1+0x38
    int memSize; // r3
    class StackAllocator allocator; // r1+0x40
    class GenericShaderEntity * entity; // r0
    void * shaderStates; // r21
    void * materialStates; // r20
    void * geomStates; // r19
    void * rendStates; // r18
    unsigned short * shaderParamOffsets; // r0
    void * paramCargoBuffer; // r29
    void * shaderParamData; // r17
    class MaterialParamFormat * iformats; // r1+0x4C

    {
        // Range: 0x801C1984 -> 0x801C19B8
        // Local variables
        int i; // r0
    }
}
// Range: 0x801C1AA0 -> 0x801C1AD8
void World::GenericShaderEntity::Detach(class GenericShaderEntity * this /* r31 */) {
}
// Range: 0x801C1AE0 -> 0x801C1B40
void World::GenericShaderEntity::Destroy(class GenericShaderEntity * this /* r30 */) {
    // Local variables
    int memSize; // r31
}
