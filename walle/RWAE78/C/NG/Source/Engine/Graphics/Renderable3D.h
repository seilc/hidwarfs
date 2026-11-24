/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\Renderable3D.h
*/
// Range: 0x802424E8 -> 0x802424F4
void Graphics::Renderable3DLink::Init() {
}
// Range: 0x8025B7F4 -> 0x8025B824
void Graphics::Renderable3DLink::Clear() {
}
// Range: 0x80082D50 -> 0x80082D54
void Graphics::Renderable3D::RenderAttach() {
}
// Range: 0x80082D40 -> 0x80082D44
void Graphics::Renderable3D::RenderDetach() {
}
// Range: 0x80266AD8 -> 0x80266AE0
class LightingState * Graphics::Renderable3D::GetLightState() const {
}
// Range: 0x80258528 -> 0x80258530
class BroadBound * Graphics::Renderable3D::GetWorldBound() const {
}
// signature: Graphics::Renderable3D::SetProjectShadowCast(void *)
// Range: 0x800528B0 -> 0x800528B8
void Graphics::Renderable3D::SetProjectShadowCast() {
}
// Range: 0x80273910 -> 0x80273918
void * Graphics::Renderable3D::GetProjectShadowCast() const {
}
// signature: Graphics::Renderable3D::SetProjectShadowCachePtr(unsigned int *)
// Range: 0x80242624 -> 0x8024262C
void Graphics::Renderable3D::SetProjectShadowCachePtr() {
}
// Range: 0x80082D60 -> 0x80082DA0
void * Graphics::Renderable3D::~Renderable3D(class Renderable3D * this /* r31 */) {
}
// signature: Graphics::Renderable3D::SetTransform(Graphics::Renderable3DTransform *, bool)
// Range: 0x8002B510 -> 0x8002B87C
void Graphics::Renderable3D::SetTransform(class Renderable3D * this /* r30 */, class Renderable3DTransform * transform /* r31 */) {
    // References
    // -> class Renderable3DTransform g_identity;
}
// Range: 0x80051940 -> 0x80051AAC
void Graphics::Renderable3D::SetTransformInternal(class Renderable3D * this /* r30 */, class Renderable3DTransform * transform /* r31 */) {
    // References
    // -> class Renderable3DTransform g_identity;
}
// Range: 0x8025BD44 -> 0x8025BD4C
class Matrix43 * Graphics::Renderable3D::GetWorldMatrix() const {
}
// Range: 0x80273918 -> 0x80273924
class Vector * Graphics::Renderable3D::GetRecipScale() const {
}
// signature: Graphics::Renderable3D::SetPostColorMultiplier(const Math::Vector4 &)
// Range: 0x8025BE08 -> 0x8025BE2C
void Graphics::Renderable3D::SetPostColorMultiplier() {
}
// signature: Graphics::Renderable3D::SetShadowColor(const Math::Vector4 &)
// Range: 0x80052070 -> 0x80052094
void Graphics::Renderable3D::SetShadowColor() {
}
// signature: Graphics::Renderable3D::SetShadowCastDepth(float)
// Range: 0x800520A0 -> 0x800520A8
void Graphics::Renderable3D::SetShadowCastDepth() {
}
// signature: Graphics::Renderable3D::SetShadowCastStartDepth(float)
// Range: 0x800520B0 -> 0x800520B8
void Graphics::Renderable3D::SetShadowCastStartDepth() {
}
// signature: Graphics::Renderable3D::SetShadowMinBlur(unsigned int)
// Range: 0x800520C0 -> 0x800520C8
void Graphics::Renderable3D::SetShadowMinBlur() {
}
// signature: Graphics::Renderable3D::SetShadowMaxBlur(unsigned int)
// Range: 0x800520D0 -> 0x800520D8
void Graphics::Renderable3D::SetShadowMaxBlur() {
}
// Range: 0x802735BC -> 0x80273900
void Graphics::Renderable3D::ComputeViewMatrix(class Renderable3D * this /* r28 */, class ViewMatrix * objectToViewMat /* r29 */, class Viewport * viewport /* r30 */) const {
    {
        // Range: 0x80273610 -> 0x802738D0
        // Local variables
        class Matrix43 tempMat; // r1+0xA8
    }

    // References
    // -> class Vector4 vec4OneZ;
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4OneX;
}
// Range: 0x8025FD98 -> 0x80260120
void Graphics::Renderable3D::ComputeObjectMatrix(class Renderable3D * this /* r28 */, class Matrix43 * mat /* r29 */, class Viewport * viewport /* r30 */) const {
    // References
    // -> class Vector4 vec4OneZ;
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4OneX;
}
// Range: 0x802425D4 -> 0x802425DC
unsigned short Graphics::Renderable3D::GetLightMask() const {
}
// signature: Graphics::Renderable3D::SetLightMask(unsigned short)
// Range: 0x802425CC -> 0x802425D4
void Graphics::Renderable3D::SetLightMask() {
}
// signature: Graphics::Renderable3D::SetLightKit(const Graphics::LightKitData *, unsigned char)
// Range: 0x8004EDA0 -> 0x8004EDB8
void Graphics::Renderable3D::SetLightKit() {
}
// signature: Graphics::Renderable3D::SetProjectShadowFlag(unsigned int)
// Range: 0x800528C0 -> 0x800528D0
void Graphics::Renderable3D::SetProjectShadowFlag() {
}
// signature: Graphics::Renderable3D::SetParentInstance(World::ModelInstanceArticle *)
// Range: 0x802425C4 -> 0x802425CC
void Graphics::Renderable3D::SetParentInstance() {
}
// signature: Graphics::Renderable3DLink::SetLink(Graphics::Renderable3D *)
// Range: 0x8025BF14 -> 0x8025BF6C
void Graphics::Renderable3DLink::SetLink() {
}
