/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Entities\ImmediateGeometryEntity.cpp
*/
// Range: 0x801B7A80 -> 0x801B7C00
class Entity * World::ImmediateGeometryAsset::Create(class EntityHandleBase * handle /* r27 */, class ImmediateGeometryAsset * asset /* r28 */) {
    // Local variables
    class BuilderInfo tempBuilderInfo; // r1+0x18
    int shaderContextListBufferAlign; // r1+0x8
    int shaderContextListBufferSize; // r29
    int memSize; // r3
    class StackAllocator allocator; // r1+0xC

    // References
    // -> struct {} __vt__Q25World23ImmediateGeometryEntity;
}
// Range: 0x801B7C00 -> 0x801B7C60
void World::ImmediateGeometryEntity::Deactivate(class ImmediateGeometryEntity * this /* r31 */) {
}
// Range: 0x801B7C60 -> 0x801B7CB4
void World::ImmediateGeometryEntity::Destroy(class ImmediateGeometryEntity * this /* r30 */) {
    // Local variables
    int memSize; // r31
}
// signature: World::ImmediateGeometryEntity::ReserveBuilderData(World::ImmediateGeometryEntity::BuilderInfo &, const World::ImmediateGeometryAsset &, World::EntityHandleBase *)
// Range: 0x801B7CC0 -> 0x801B7D70
void World::ImmediateGeometryEntity::ReserveBuilderData(class BuilderInfo & info /* r31 */, class ImmediateGeometryAsset & asset /* r28 */) {
}
// Range: 0x801B7D70 -> 0x801B7EB8
void World::ImmediateGeometryEntity::CreateBuilderData(class StackAllocator & allocator /* r26 */, class BuilderData & data /* r27 */, class BuilderInfo & info /* r28 */, class ImmediateGeometryAsset & asset /* r29 */, class EntityHandleBase * handle /* r30 */) {
}
// signature: World::ImmediateGeometryEntity::DeactivateBuilderData(World::ImmediateGeometryEntity::BuilderData &, World::EntityHandleBase *)
// Range: 0x801B7EC0 -> 0x801B7F08
void World::ImmediateGeometryEntity::DeactivateBuilderData(class BuilderData & data /* r31 */) {
}
// signature: World::ImmediateGeometry::Create(const Graphics::Effect *, const Graphics::Material *, Graphics::Effect::ParamData *, Graphics::Shader::GeometryContext **, Graphics::PrimitiveType, int, int, int, Graphics::VertexBuffer *, int, int, Graphics::PreallocImmediateGeomMem &, World::ImmediateGeometryContext &)
// Range: 0x801B7F10 -> 0x801B8264
bool World::ImmediateGeometry::Create(class ImmediateGeometry * this /* r20 */, class Effect * effect /* r21 */, enum PrimitiveType primType /* r22 */, int vertexCount /* r23 */, int primCount /* r28 */, int indexCount /* r24 */, class VertexBuffer * vertexBuffers /* r18 */, int vertexBufferCount /* r19 */, int vertexSize /* r25 */, class PreallocImmediateGeomMem & preallocRenderMem /* r26 */, class ImmediateGeometryContext & igeomCtxt /* r27 */) {
    // Local variables
    int allocatedVertexMem; // r0
    int allocatedNumIndices; // r0

    // References
    // -> class BuildBuffer g_renderBuildBuffer;
}
// Range: 0x801B8430 -> 0x801B8444
void World::ImmediateGeometry::RenderDetach() {
}
// signature: World::ImmediateGeometry::DetachCallback(Graphics::Node *)
// Range: 0x801B84A0 -> 0x801B84F8
void World::ImmediateGeometry::DetachCallback() {
}
