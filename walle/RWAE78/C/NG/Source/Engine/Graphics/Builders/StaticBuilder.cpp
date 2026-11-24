/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\Builders\StaticBuilder.cpp
*/
// signature: Graphics::StaticBuilder::Create(const Graphics::Effect *, const Graphics::Material *, Graphics::Effect::ParamData *, Graphics::Shader::GeometryContext **, Graphics::PrimitiveType, Graphics::VertexBuffer *, int, const World::GeometryAsset::BoundAABB &, const Math::Vector4 &, const Graphics::Space::RenderAttrib &, float, float, unsigned int, Graphics::Effect::ParamData *, Graphics::FixedVertexBuffer *, Graphics::FixedIndexBuffer *)
// Range: 0x8027B9E4 -> 0x8027BB50
void Graphics::StaticBuilder::Create(class BoundAABB * bbound /* r12 */, class Vector4 * boundSphere /* r11 */, class RenderAttrib * viewAttrib /* r29 */, unsigned int sectorLight /* r28 */, class ParamData * rendParamData /* r29 */, class FixedVertexBuffer * fixedVertexBuffers /* r0 */, class FixedIndexBuffer * fixedIndexBuffers /* r30 */) {
}
// Range: 0x8027BB50 -> 0x8027BB54
void Graphics::StaticBuilder::Destroy() {
}
// Range: 0x8027BB54 -> 0x8027BB6C
void Graphics::StaticBuilder::RenderAttach() {
}
// Range: 0x8027BB6C -> 0x8027BCE4
void Graphics::StaticBuilder::RenderDetach(class StaticBuilder * this /* r31 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem2OverflowUsed;
}
// signature: Graphics::StaticBuilder::Build(Graphics::Geometry *) const
// Range: 0x8027BCE4 -> 0x8027BCE8
void Graphics::StaticBuilder::Build() const {
}
// signature: Graphics::StaticBuilder::HackCompleteBuild(Graphics::Geometry *) const
// Range: 0x8027BCE8 -> 0x8027BCEC
void Graphics::StaticBuilder::HackCompleteBuild() const {
}
// signature: Graphics::StaticBuilder::Unbuild(Graphics::Geometry *) const
// Range: 0x8027BCEC -> 0x8027BCF0
void Graphics::StaticBuilder::Unbuild() const {
}
// signature: Graphics::StaticBuilder::GetCreateGeometrySize(int &) const
// Range: 0x8027BCF0 -> 0x8027BD00
int Graphics::StaticBuilder::GetCreateGeometrySize() const {
}
// signature: Graphics::StaticBuilder::CreateGeometry(void *, int) const
// Range: 0x8027BD00 -> 0x8027BD08
class Geometry * Graphics::StaticBuilder::CreateGeometry() const {
}
// signature: Graphics::StaticBuilder::CreateGeometry(Memory::StackAllocator &) const
// Range: 0x8027BD08 -> 0x8027BD10
class Geometry * Graphics::StaticBuilder::CreateGeometry() const {
}
// signature: Graphics::StaticBuilder::AttachGeometry(Graphics::Geometry *) const
// Range: 0x8027BD10 -> 0x8027BD14
void Graphics::StaticBuilder::AttachGeometry() const {
}
// signature: Graphics::StaticBuilder::AttachTemporaryGeometry(Graphics::Geometry *, void (*)(Graphics::Node *)) const
// Range: 0x8027BD14 -> 0x8027BD18
void Graphics::StaticBuilder::AttachTemporaryGeometry() const {
}
// signature: Graphics::StaticBuilder::DetachGeometry(Graphics::Geometry *) const
// Range: 0x8027BD18 -> 0x8027BD1C
void Graphics::StaticBuilder::DetachGeometry() const {
}
// signature: Graphics::StaticBuilder::DestroyGeometry(Graphics::Geometry *) const
// Range: 0x8027BD1C -> 0x8027BD20
void Graphics::StaticBuilder::DestroyGeometry() const {
}
// signature: Graphics::StaticBuilder::GetCreateRenderableSize(int &) const
// Range: 0x8027BD20 -> 0x8027BD50
int Graphics::StaticBuilder::GetCreateRenderableSize() const {
}
// signature: Graphics::StaticBuilder::CreateRenderable(void *, int, Graphics::Geometry *, const Graphics::Effect::ParamData *) const
// Range: 0x8027BD50 -> 0x8027BD9C
class Renderable * Graphics::StaticBuilder::CreateRenderable(int bufferSize /* r0 */) const {
    // Local variables
    class StackAllocator allocator; // r1+0x8
}
// signature: Graphics::StaticBuilder::CreateRenderable(Memory::StackAllocator &, Graphics::Geometry *, const Graphics::Effect::ParamData *) const
// Range: 0x8027BD9C -> 0x8027BEA4
class Renderable * Graphics::StaticBuilder::CreateRenderable(class StaticBuilder * this /* r28 */, class Geometry * geom /* r29 */) const {
    // References
    // -> struct {} __vt__Q28Graphics12Renderable3D;
}
// signature: Graphics::StaticBuilder::DestroyRenderable(Graphics::Renderable *) const
// Range: 0x8027BEA4 -> 0x8027BEBC
void Graphics::StaticBuilder::DestroyRenderable() const {
}
// Range: 0x8027BEBC -> 0x8027C268
void Graphics::StaticBuilder::SetBuffers(class StaticBuilder * this /* r30 */, class BufferInfo * info /* r31 */) {
    // Local variables
    int indexBufferCount; // r12
    int vertexBufferCount; // r10

    {
        // Range: 0x8027C020 -> 0x8027C144
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x8027C158 -> 0x8027C254
        // Local variables
        int i; // r0
    }

    // References
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem2OverflowUsed;
}
