/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\ImmediateGeometryEntity.cpp
*/
class ImmediateGeometrySchema schema; // size: 0x18, address: 0x807FE8B0
class SchemaRegistrator schemaReg; // size: 0x8, address: 0x807FE8C8
class Schema * immediateGeometrySchema; // size: 0x4, address: 0x807079FC
// signature: World::ImmediateGeometrySchema::Fix(World::Asset *, long, int)
// Range: 0x8023C194 -> 0x8023C3A4
void World::ImmediateGeometrySchema::Fix() {
    // Local variables
    class ImmediateGeometryAsset * asset; // r0
}
// signature: World::ImmediateGeometrySchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8023C3A4 -> 0x8023C3F0
class EntityStub * World::ImmediateGeometrySchema::CreateStub(class ImmediateGeometrySchema * this /* r31 */) {
}
// signature: World::ImmediateGeometrySchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8023C3F0 -> 0x8023C408
void World::ImmediateGeometrySchema::DestroyStub() {
}
// signature: World::ImmediateGeometrySchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8023C408 -> 0x8023C420
class Entity * World::ImmediateGeometrySchema::ActivateEntity() {
}
// signature: World::ImmediateGeometryEntity::Create(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8023C420 -> 0x8023C590
class ImmediateGeometryEntity * World::ImmediateGeometryEntity::Create(class EntityHandleBase * handle /* r27 */) {
    // Local variables
    class ImmediateGeometryAsset * asset; // r29
    class BuilderInfo tempBuilderInfo; // r1+0x18
    int shaderContextListBufferAlign; // r1+0x8
    int shaderContextListBufferSize; // r28
    int memSize; // r3
    class StackAllocator allocator; // r1+0xC

    // References
    // -> struct {} __vt__Q25World23ImmediateGeometryEntity;
}
// Range: 0x8023C590 -> 0x8023C818
void World::ImmediateGeometryEntity::Deactivate(class ImmediateGeometryEntity * this /* r31 */) {
}
// Range: 0x8023C818 -> 0x8023C868
void World::ImmediateGeometryEntity::Destroy(class ImmediateGeometryEntity * this /* r31 */) {
}
// signature: World::ImmediateGeometryEntity::ReserveBuilderData(World::ImmediateGeometryEntity::BuilderInfo &, const World::ImmediateGeometryAsset &, World::EntityHandleBase *)
// Range: 0x8023C8BC -> 0x8023CC98
void World::ImmediateGeometryEntity::ReserveBuilderData(class BuilderInfo * info /* r27 */, class ImmediateGeometryAsset * asset /* r28 */) {
    // References
    // -> static class ScadMgrModule scadMgrMod;
}
// signature: World::ImmediateGeometryEntity::CreateBuilderData(Memory::StackAllocator &, World::ImmediateGeometryEntity::BuilderData &, World::ImmediateGeometryEntity::BuilderInfo &, const World::ImmediateGeometryAsset &, World::EntityHandleBase *)
// Range: 0x8023CC98 -> 0x8023CFF4
void World::ImmediateGeometryEntity::CreateBuilderData(class BuilderData * data /* r25 */, class BuilderInfo * info /* r26 */, class ImmediateGeometryAsset * asset /* r27 */) {
    // Local variables
    void * rendParamCargoBuffer; // r0
    void * rendParamDataBuffer; // r0

    // References
    // -> static float s_colorScale;
    // -> static float s_ambient[4];
}
// Range: 0x8023CFF4 -> 0x8023D524
bool World::ImmediateGeometry::Create(class ImmediateGeometry * this /* r15 */, class Effect * effect /* r16 */, class Material * material /* r17 */, class ParamData * paramData /* r18 */, class GeometryContext * * shaderContextList /* r19 */, enum PrimitiveType primType /* r20 */, int vertexCount /* r21 */, int primCount /* r22 */, int indexCount /* r23 */, class VertexBuffer * vertexBuffers /* r24 */, int vertexBufferCount /* r25 */, int vertexSize /* r26 */, bool isRenderThread /* r27 */) {
    // References
    // -> class BuildBuffer g_renderBuildBuffer;
}
// Range: 0x8023D524 -> 0x8023D554
void World::ImmediateGeometry::RenderAttach() {
}
// Range: 0x8023D554 -> 0x8023D580
void World::ImmediateGeometry::RenderDetach() {
}
// signature: World::ImmediateGeometry::DetachCallback(Graphics::Node *)
// Range: 0x8023D5C0 -> 0x8023D630
void World::ImmediateGeometry::DetachCallback() {
}
