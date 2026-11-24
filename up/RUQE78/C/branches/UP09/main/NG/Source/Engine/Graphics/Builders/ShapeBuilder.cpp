/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\Builders\ShapeBuilder.cpp
*/
// Range: 0x80307FD8 -> 0x80307FDC
void Graphics::ShapeBuilder::RenderAttach() {
}
// Range: 0x80307FDC -> 0x80307FE0
void Graphics::ShapeBuilder::RenderDetach() {
}
// signature: Graphics::ShapeBuilder::Build(Graphics::Geometry *, Graphics::PreallocImmediateGeomMem *) const
// Range: 0x80307FE4 -> 0x80308160
void Graphics::ShapeBuilder::Build() const {
    // Local variables
    class ShapeGeometry * geom; // r27

    // References
    // -> class BuildBuffer g_renderBuildBuffer;
}
// signature: Graphics::ShapeBuilder::HackCompleteBuild(Graphics::Geometry *) const
// Range: 0x80308160 -> 0x80308178
void Graphics::ShapeBuilder::HackCompleteBuild() const {
    // Local variables
    class ShapeGeometry * geom; // r0
}
// signature: Graphics::ShapeBuilder::Unbuild(Graphics::Geometry *) const
// Range: 0x80308178 -> 0x8030817C
void Graphics::ShapeBuilder::Unbuild() const {
}
// signature: Graphics::ShapeBuilder::GetCreateGeometrySize(int &) const
// Range: 0x8030817C -> 0x8030818C
int Graphics::ShapeBuilder::GetCreateGeometrySize() const {
}
// signature: Graphics::ShapeBuilder::CreateGeometry(void *, int) const
// Range: 0x8030818C -> 0x803081CC
class Geometry * Graphics::ShapeBuilder::CreateGeometry() const {
    // Local variables
    class StackAllocator allocator; // r1+0x8
}
// signature: Graphics::ShapeBuilder::CreateGeometry(Memory::StackAllocator &) const
// Range: 0x803081CC -> 0x80308390
class Geometry * Graphics::ShapeBuilder::CreateGeometry() const {
    // References
    // -> struct {} __vt__Q28Graphics13ShapeGeometry;
}
// signature: Graphics::ShapeBuilder::AttachGeometry(Graphics::Geometry *) const
// Range: 0x80308390 -> 0x803083B0
void Graphics::ShapeBuilder::AttachGeometry() const {
}
// signature: Graphics::ShapeBuilder::AttachTemporaryGeometry(Graphics::Geometry *, void (*)(Graphics::Node *)) const
// Range: 0x803083B0 -> 0x80308404
void Graphics::ShapeBuilder::AttachTemporaryGeometry() const {
}
// signature: Graphics::ShapeBuilder::DetachGeometry(Graphics::Geometry *) const
// Range: 0x80308404 -> 0x80308424
void Graphics::ShapeBuilder::DetachGeometry() const {
}
// signature: Graphics::ShapeBuilder::DestroyGeometry(Graphics::Geometry *) const
// Range: 0x80308424 -> 0x8030843C
void Graphics::ShapeBuilder::DestroyGeometry() const {
}
// signature: Graphics::ShapeBuilder::GetCreateRenderableSize(int &) const
// Range: 0x80308440 -> 0x80308470
int Graphics::ShapeBuilder::GetCreateRenderableSize() const {
}
// signature: Graphics::ShapeBuilder::CreateRenderable(void *, int, Graphics::Geometry *, const Graphics::Effect::ParamData *) const
// Range: 0x80308470 -> 0x803084BC
class Renderable * Graphics::ShapeBuilder::CreateRenderable(int bufferSize /* r0 */) const {
    // Local variables
    class StackAllocator allocator; // r1+0x8
}
// signature: Graphics::ShapeBuilder::CreateRenderable(Memory::StackAllocator &, Graphics::Geometry *, const Graphics::Effect::ParamData *) const
// Range: 0x803084BC -> 0x803085FC
class Renderable * Graphics::ShapeBuilder::CreateRenderable(class ShapeBuilder * this /* r28 */, class Geometry * geom /* r29 */) const {
    // References
    // -> static bool inRenderPhase;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
}
