/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Entities\ImmediateGeometryEntity.cpp
*/
// Range: 0x802DB7D8 -> 0x802DB948
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
// Range: 0x802DB948 -> 0x802DBA68
void World::ImmediateGeometryEntity::Deactivate(class ImmediateGeometryEntity * this /* r31 */) {
}
// signature: World::ImmediateGeometryEntity::ReserveBuilderData(World::ImmediateGeometryEntity::BuilderInfo &, const World::ImmediateGeometryAsset &, World::EntityHandleBase *)
// Range: 0x802DBA70 -> 0x802DBBAC
void World::ImmediateGeometryEntity::ReserveBuilderData(class BuilderInfo & info /* r30 */, class ImmediateGeometryAsset & asset /* r31 */) {
}
// signature: World::ImmediateGeometryEntity::CreateBuilderData(Memory::StackAllocator &, World::ImmediateGeometryEntity::BuilderData &, World::ImmediateGeometryEntity::BuilderInfo &, const World::ImmediateGeometryAsset &, World::EntityHandleBase *)
// Range: 0x802DBBAC -> 0x802DBD54
void World::ImmediateGeometryEntity::CreateBuilderData(class BuilderData & data /* r25 */, class BuilderInfo & info /* r26 */, class ImmediateGeometryAsset & asset /* r27 */, class EntityHandleBase * handle /* r28 */) {
    // Local variables
    void * rendParamCargoBuffer; // r0
    void * rendParamDataBuffer; // r0
}
// signature: World::ImmediateGeometry::Create(const Graphics::Effect *, const Graphics::Material *, Graphics::Effect::ParamData *, Graphics::Shader::GeometryContext **, Graphics::PrimitiveType, int, int, int, Graphics::VertexBuffer *, int, int, bool, Graphics::PreallocImmediateGeomMem &)
// Range: 0x802DBD54 -> 0x802DC3E4
bool World::ImmediateGeometry::Create(class ImmediateGeometry * this /* r31 */, class Effect * effect /* r20 */, enum PrimitiveType primType /* r21 */, int vertexCount /* r22 */, int primCount /* r23 */, int indexCount /* r24 */, class VertexBuffer * vertexBuffers /* r18 */, int vertexBufferCount /* r19 */, int vertexSize /* r25 */, bool isRenderThread /* r26 */, class PreallocImmediateGeomMem & preallocRenderMem /* r27 */) {
    // References
    // -> class BuildBuffer g_renderBuildBuffer;
}
// Range: 0x802DC3E4 -> 0x802DC414
void World::ImmediateGeometry::RenderAttach() {
}
// Range: 0x802DC414 -> 0x802DC440
void World::ImmediateGeometry::RenderDetach() {
}
// signature: World::ImmediateGeometry::DetachCallback(Graphics::Node *)
// Range: 0x802DC444 -> 0x802DC4FC
void World::ImmediateGeometry::DetachCallback() {
    // Local variables
    class ImmediateGeometry * geom; // r0
    bool rendThread; // r3
}
