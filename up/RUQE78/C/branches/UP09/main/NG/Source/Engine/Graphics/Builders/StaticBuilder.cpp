/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\Builders\StaticBuilder.cpp
*/
// signature: Graphics::StaticBuilder::Create(const Graphics::Effect *, const Graphics::Material *, Graphics::Effect::ParamData *, Graphics::Shader::GeometryContext **, Graphics::PrimitiveType, Graphics::VertexBuffer *, int, const World::GeometryAsset::BoundAABB &, const Math::Vector4 &, const Graphics::Space::RenderAttrib &, float, float, unsigned int, unsigned int, Graphics::Effect::ParamData *, Graphics::FixedVertexBuffer *, Graphics::FixedIndexBuffer *)
// Range: 0x8030DA98 -> 0x8030DBF4
void Graphics::StaticBuilder::Create(class BoundAABB & bbound /* r12 */, class Vector4 & boundSphere /* r11 */, class RenderAttrib & viewAttrib /* r28 */, unsigned int geomFlags /* r27 */, unsigned int sectorLight /* r28 */, class ParamData * rendParamData /* r29 */, class FixedVertexBuffer * fixedVertexBuffers /* r0 */, class FixedIndexBuffer * fixedIndexBuffers /* r30 */) {
}
// Range: 0x8030DBF4 -> 0x8030DC0C
void Graphics::StaticBuilder::RenderAttach() {
}
// Range: 0x8030DC0C -> 0x8030DD54
void Graphics::StaticBuilder::RenderDetach(class StaticBuilder * this /* r31 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
}
// signature: Graphics::StaticBuilder::Build(Graphics::Geometry *, Graphics::PreallocImmediateGeomMem *) const
// Range: 0x8030DD54 -> 0x8030DD58
void Graphics::StaticBuilder::Build() const {
}
// signature: Graphics::StaticBuilder::HackCompleteBuild(Graphics::Geometry *) const
// Range: 0x8030DD58 -> 0x8030DD5C
void Graphics::StaticBuilder::HackCompleteBuild() const {
}
// signature: Graphics::StaticBuilder::Unbuild(Graphics::Geometry *) const
// Range: 0x8030DD5C -> 0x8030DD60
void Graphics::StaticBuilder::Unbuild() const {
}
// signature: Graphics::StaticBuilder::AttachGeometry(Graphics::Geometry *) const
// Range: 0x8030DD6C -> 0x8030DD70
void Graphics::StaticBuilder::AttachGeometry() const {
}
// signature: Graphics::StaticBuilder::AttachTemporaryGeometry(Graphics::Geometry *, void (*)(Graphics::Node *)) const
// Range: 0x8030DD70 -> 0x8030DD74
void Graphics::StaticBuilder::AttachTemporaryGeometry() const {
}
// signature: Graphics::StaticBuilder::DetachGeometry(Graphics::Geometry *) const
// Range: 0x8030DD74 -> 0x8030DD78
void Graphics::StaticBuilder::DetachGeometry() const {
}
// signature: Graphics::StaticBuilder::DestroyGeometry(Graphics::Geometry *) const
// Range: 0x8030DD78 -> 0x8030DD7C
void Graphics::StaticBuilder::DestroyGeometry() const {
}
// signature: Graphics::StaticBuilder::GetCreateRenderableSize(int &) const
// Range: 0x8030DD7C -> 0x8030DDAC
int Graphics::StaticBuilder::GetCreateRenderableSize() const {
}
// signature: Graphics::StaticBuilder::CreateRenderable(Memory::StackAllocator &, Graphics::Geometry *, const Graphics::Effect::ParamData *) const
// Range: 0x8030DDB0 -> 0x8030DEB8
class Renderable * Graphics::StaticBuilder::CreateRenderable(class StaticBuilder * this /* r28 */, class Geometry * geom /* r29 */) const {
    // References
    // -> struct {} __vt__Q28Graphics12Renderable3D;
}
// Range: 0x8030DEBC -> 0x8030E238
void Graphics::StaticBuilder::SetBuffers(class StaticBuilder * this /* r30 */, class BufferInfo & info /* r31 */) {
    // Local variables
    int indexBufferCount; // r12
    int vertexBufferCount; // r10

    {
        // Range: 0x8030DFF0 -> 0x8030E114
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x8030E128 -> 0x8030E224
        // Local variables
        int i; // r0
    }

    // References
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
}
