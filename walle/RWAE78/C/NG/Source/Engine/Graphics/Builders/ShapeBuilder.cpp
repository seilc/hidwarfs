/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\Builders\ShapeBuilder.cpp
*/
// Range: 0x80276668 -> 0x8027666C
void Graphics::ShapeBuilder::RenderAttach() {
}
// Range: 0x8027666C -> 0x80276670
void Graphics::ShapeBuilder::RenderDetach() {
}
// Range: 0x80276670 -> 0x80276678
class Material * Graphics::ShapeBuilder::GetMaterial() const {
}
// signature: Graphics::ShapeBuilder::Build(Graphics::Geometry *) const
// Range: 0x80276678 -> 0x802767DC
void Graphics::ShapeBuilder::Build() const {
    // Local variables
    class ShapeGeometry * geom; // r28

    // References
    // -> class BuildBuffer g_renderBuildBuffer;
}
// signature: Graphics::ShapeBuilder::HackCompleteBuild(Graphics::Geometry *) const
// Range: 0x802767DC -> 0x802767F4
void Graphics::ShapeBuilder::HackCompleteBuild() const {
    // Local variables
    class ShapeGeometry * geom; // r0
}
// signature: Graphics::ShapeBuilder::Unbuild(Graphics::Geometry *) const
// Range: 0x802767F4 -> 0x802767F8
void Graphics::ShapeBuilder::Unbuild() const {
}
// signature: Graphics::ShapeBuilder::GetCreateGeometrySize(int &) const
// Range: 0x802767F8 -> 0x80276808
int Graphics::ShapeBuilder::GetCreateGeometrySize() const {
}
// signature: Graphics::ShapeBuilder::CreateGeometry(void *, int) const
// Range: 0x80276808 -> 0x80276848
class Geometry * Graphics::ShapeBuilder::CreateGeometry() const {
    // Local variables
    class StackAllocator allocator; // r1+0x8
}
// signature: Graphics::ShapeBuilder::CreateGeometry(Memory::StackAllocator &) const
// Range: 0x80276848 -> 0x80276A08
class Geometry * Graphics::ShapeBuilder::CreateGeometry() const {
    // References
    // -> struct {} __vt__Q28Graphics13ShapeGeometry;
}
// signature: Graphics::ShapeBuilder::AttachGeometry(Graphics::Geometry *) const
// Range: 0x80276A08 -> 0x80276A28
void Graphics::ShapeBuilder::AttachGeometry() const {
}
// signature: Graphics::ShapeBuilder::AttachTemporaryGeometry(Graphics::Geometry *, void (*)(Graphics::Node *)) const
// Range: 0x80276A28 -> 0x80276A7C
void Graphics::ShapeBuilder::AttachTemporaryGeometry() const {
}
// signature: Graphics::ShapeBuilder::DetachGeometry(Graphics::Geometry *) const
// Range: 0x80276A7C -> 0x80276A9C
void Graphics::ShapeBuilder::DetachGeometry() const {
}
// signature: Graphics::ShapeBuilder::DestroyGeometry(Graphics::Geometry *) const
// Range: 0x80276A9C -> 0x80276AB4
void Graphics::ShapeBuilder::DestroyGeometry() const {
}
// signature: Graphics::ShapeBuilder::GetCreateRenderableSize(int &) const
// Range: 0x80276AF4 -> 0x80276B24
int Graphics::ShapeBuilder::GetCreateRenderableSize() const {
}
// signature: Graphics::ShapeBuilder::CreateRenderable(void *, int, Graphics::Geometry *, const Graphics::Effect::ParamData *) const
// Range: 0x80276B24 -> 0x80276B70
class Renderable * Graphics::ShapeBuilder::CreateRenderable(int bufferSize /* r0 */) const {
    // Local variables
    class StackAllocator allocator; // r1+0x8
}
// signature: Graphics::ShapeBuilder::CreateRenderable(Memory::StackAllocator &, Graphics::Geometry *, const Graphics::Effect::ParamData *) const
// Range: 0x80276B70 -> 0x80276CB0
class Renderable * Graphics::ShapeBuilder::CreateRenderable(class ShapeBuilder * this /* r30 */, class Geometry * geom /* r28 */) const {
    // References
    // -> static bool inRenderPhase;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
}
// signature: Graphics::ShapeBuilder::DestroyRenderable(Graphics::Renderable *) const
// Range: 0x80276CB0 -> 0x80276CC8
void Graphics::ShapeBuilder::DestroyRenderable() const {
}
