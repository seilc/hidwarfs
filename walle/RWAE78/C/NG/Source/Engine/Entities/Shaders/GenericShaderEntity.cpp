/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\Shaders\GenericShaderEntity.cpp
*/
class GenericShaderSchema schema; // size: 0x18, address: 0x807FEC78
class SchemaRegistrator schemaReg; // size: 0x8, address: 0x807FEC90
class Schema * genericShaderSchema; // size: 0x4, address: 0x80707E50
// signature: World::GenericShaderSchema::Fix(World::Asset *, long, int)
// Range: 0x8024D804 -> 0x8024DA54
void World::GenericShaderSchema::Fix(class Asset * asset /* r30 */, long addrOffset /* r31 */) {
}
// signature: World::GenericShaderSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8024DA58 -> 0x8024DAA4
class EntityStub * World::GenericShaderSchema::CreateStub(class GenericShaderSchema * this /* r31 */) {
}
// signature: World::GenericShaderSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8024DAA4 -> 0x8024DABC
void World::GenericShaderSchema::DestroyStub() {
}
// signature: World::GenericShaderSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8024DABC -> 0x8024DAD4
class Entity * World::GenericShaderSchema::ActivateEntity() {
}
// signature: World::GenericShaderEntity::Create(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8024DBA8 -> 0x8024DF38
class GenericShaderEntity * World::GenericShaderEntity::Create(class EntityHandleBase * handle /* r19 */, class Asset * baseAsset /* r15 */, unsigned long long id /* r1+0x30 */) {
    // Local variables
    class GenericShaderAsset * asset; // r0
    class StateOpTableAsset * shaderOps; // r0
    class StateOpTableAsset * materialOps; // r0
    class StateOpTableAsset * geomOps; // r0
    class StateOpTableAsset * rendOps; // r0
    int shaderParamCount; // r22
    int shaderParamDataSize; // r16
    int memSize; // r3
    class StackAllocator allocator; // r1+0x48
    void * shaderStates; // r21
    void * materialStates; // r20
    void * geomStates; // r19
    void * rendStates; // r18
    void * paramCargoBuffer; // r0
    void * shaderParamData; // r17
    class MaterialParamFormat * iformats; // r16

    {
        // Range: 0x8024DD6C -> 0x8024DD6C
        // Local variables
        int i; // r5
    }

    // References
    // -> struct {} __vt__Q28Graphics10RenderMode;
    // -> struct {} __vt__Q28Graphics13GenericShader;
    // -> struct {} __vt__Q25World19GenericShaderEntity;
}
// Range: 0x8024DF38 -> 0x8024E044
void World::GenericShaderEntity::Detach(class GenericShaderEntity * this /* r26 */) {
}
// Range: 0x8024E044 -> 0x8024E0A0
void World::GenericShaderEntity::Destroy(class GenericShaderEntity * this /* r31 */) {
}
