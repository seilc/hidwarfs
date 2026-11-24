/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\Builders\StaticBuilder.cpp
*/
// signature: Graphics::StaticBuilder::Create(const Graphics::Effect *, const Graphics::Material *, Graphics::Effect::ParamData *, Graphics::Shader::GeometryContext **, Graphics::PrimitiveType, Graphics::VertexBuffer *, int, const World::GeometryAsset::BoundAABB &, const Math::Vector4 &, const Graphics::Space::RenderAttrib &, float, float, unsigned int, unsigned int, unsigned char, Graphics::Effect::ParamData *, Graphics::FixedVertexBuffer *, Graphics::FixedIndexBuffer *)
// Range: 0x801DCA30 -> 0x801DCB84
void Graphics::StaticBuilder::Create(class StaticBuilder * this /* r31 */, class Effect * effect /* r26 */, class Material * material /* r29 */, class ParamData * paramData /* r28 */, class GeometryContext * * shaderContextList /* r27 */, enum PrimitiveType primType /* r12 */, class BoundAABB & bbound /* r27 */, class Vector4 & boundSphere /* r28 */, class RenderAttrib & viewAttrib /* r12 */, float offDist /* f30 */, float vertLodDist /* f31 */, unsigned int geomFlags /* r11 */, unsigned int sectorLight /* r0 */, unsigned char wiiIndexStride /* r29 */, class ParamData * rendParamData /* r11 */, class FixedVertexBuffer * fixedVertexBuffers /* r11 */, class FixedIndexBuffer * fixedIndexBuffers /* r0 */) {
}
// Range: 0x801DCB90 -> 0x801DCBA8
void Graphics::StaticBuilder::RenderAttach() {
}
// Range: 0x801DCBB0 -> 0x801DCBF8
void Graphics::StaticBuilder::RenderDetach(class StaticBuilder * this /* r31 */) {
}
// signature: Graphics::StaticBuilder::GetCreateGeometrySize(int &) const
// Range: 0x801DCC00 -> 0x801DCC10
int Graphics::StaticBuilder::GetCreateGeometrySize() const {
}
// signature: Graphics::StaticBuilder::GetCreateRenderableSize(int &) const
// Range: 0x801DCC10 -> 0x801DCC40
int Graphics::StaticBuilder::GetCreateRenderableSize() const {
}
// Range: 0x801DCC40 -> 0x801DCD0C
class Renderable * Graphics::StaticBuilder::CreateRenderable(class StaticBuilder * this /* r25 */, class StackAllocator & allocator /* r26 */, class Geometry * geom /* r27 */, class ParamData * rendParamData /* r28 */) const {
}
// Range: 0x801DCD10 -> 0x801DCE08
void Graphics::StaticBuilder::SetBuffers(class StaticBuilder * this /* r30 */, class BufferInfo & info /* r31 */) {
    // Local variables
    int indexBufferCount; // r27
    int vertexBufferCount; // r26

    {
        // Range: 0x801DCD40 -> 0x801DCD98
        // Local variables
        int i; // r26
    }
    {
        // Range: 0x801DCD9C -> 0x801DCDF4
        // Local variables
        int i; // r27
    }
}
// Range: 0x801DCE10 -> 0x801DCE90
void Graphics::StaticBuilder::UnbindBuffers(class StaticBuilder * this /* r28 */) {
    // Local variables
    int indexLodCount; // r30
    int vertexBufferCount; // r29

    {
        // Range: 0x801DCE24 -> 0x801DCE50
        // Local variables
        int i; // r29
    }
    {
        // Range: 0x801DCE54 -> 0x801DCE7C
        // Local variables
        int i; // r30
    }
}
