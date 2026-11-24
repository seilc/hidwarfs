/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\Renderable3D.h
*/
// Range: 0x802F2770 -> 0x802F27A0
void Graphics::Renderable3DLink::Clear() {
}
// Range: 0x80098F80 -> 0x80098F84
void Graphics::Renderable3D::RenderAttach() {
}
// Range: 0x80098F70 -> 0x80098F74
void Graphics::Renderable3D::RenderDetach() {
}
// Range: 0x802FE088 -> 0x802FE090
class LightingState & Graphics::Renderable3D::GetLightState() const {
}
// signature: Graphics::Renderable3D::SetProjectShadowCast(void *)
// Range: 0x802E4138 -> 0x802E4140
void Graphics::Renderable3D::SetProjectShadowCast() {
}
// signature: Graphics::Renderable3D::SetProjectShadowReceive(void *)
// Range: 0x802F5BF4 -> 0x802F5BFC
void Graphics::Renderable3D::SetProjectShadowReceive() {
}
// Range: 0x8030A554 -> 0x8030A55C
void * Graphics::Renderable3D::GetProjectShadowReceive() const {
}
// signature: Graphics::Renderable3D::SetProjectShadowCachePtr(unsigned int *)
// Range: 0x802DE640 -> 0x802DE648
void Graphics::Renderable3D::SetProjectShadowCachePtr() {
}
// Range: 0x802DE648 -> 0x802DE650
unsigned int Graphics::Renderable3D::GetProjectShadowFlag() const {
}
// signature: Graphics::Renderable3D::SetTransform(Graphics::Renderable3DTransform *, bool)
// Range: 0x8001B6B0 -> 0x8001B8D4
void Graphics::Renderable3D::SetTransform(class Renderable3D * this /* r29 */, class Renderable3DTransform * transform /* r30 */) {
    // References
    // -> class Renderable3DTransform g_identity;
}
// Range: 0x8001B540 -> 0x8001B6AC
void Graphics::Renderable3D::SetTransformInternal(class Renderable3D * this /* r29 */, class Renderable3DTransform * transform /* r30 */) {
    // References
    // -> class Renderable3DTransform g_identity;
}
// Range: 0x8030A55C -> 0x8030A568
class Vector & Graphics::Renderable3D::GetRecipScale() const {
}
// signature: Graphics::Renderable3D::SetPostColorMultiplier(const Math::Vector4 &)
// Range: 0x802F2C34 -> 0x802F2C58
void Graphics::Renderable3D::SetPostColorMultiplier() {
}
// signature: Graphics::Renderable3D::SetShadowColor(const Math::Vector4 &)
// Range: 0x802DE650 -> 0x802DE674
void Graphics::Renderable3D::SetShadowColor() {
}
// signature: Graphics::Renderable3D::SetShadowCastDepth(float)
// Range: 0x801FDEF0 -> 0x801FDEF8
void Graphics::Renderable3D::SetShadowCastDepth() {
}
// signature: Graphics::Renderable3D::SetShadowCastStartDepth(float)
// Range: 0x802DE674 -> 0x802DE67C
void Graphics::Renderable3D::SetShadowCastStartDepth() {
}
// signature: Graphics::Renderable3D::SetShadowMinBlur(unsigned int)
// Range: 0x802DE67C -> 0x802DE684
void Graphics::Renderable3D::SetShadowMinBlur() {
}
// signature: Graphics::Renderable3D::SetShadowMaxBlur(unsigned int)
// Range: 0x802DE684 -> 0x802DE68C
void Graphics::Renderable3D::SetShadowMaxBlur() {
}
// signature: Graphics::Renderable3D::SetCameraRelative(int)
// Range: 0x801FDE30 -> 0x801FDEF0
void Graphics::Renderable3D::SetCameraRelative(class Renderable3D * this /* r30 */) {
}
// signature: Graphics::Renderable3D::AmendCameraRelative(int)
// Range: 0x802A74B0 -> 0x802A74F4
void Graphics::Renderable3D::AmendCameraRelative() {
}
// Range: 0x80303BC8 -> 0x803042D8
void Graphics::Renderable3D::ComputeViewMatrix(class ViewMatrix & objectToViewMat /* r28 */, class Viewport & viewport /* r29 */) const {
    {
        // Range: 0x80303C18 -> 0x803042A8
        // Local variables
        class Matrix43 tempMat; // r1+0x228
    }
}
// Range: 0x802F5F70 -> 0x802F66C4
void Graphics::Renderable3D::ComputeObjectMatrix(class Matrix43 & mat /* r28 */, class Viewport & viewport /* r29 */) const {
}
// Range: 0x802DE5FC -> 0x802DE604
unsigned short Graphics::Renderable3D::GetLightMask() const {
}
// signature: Graphics::Renderable3D::SetLightMask(unsigned short)
// Range: 0x802DE5F4 -> 0x802DE5FC
void Graphics::Renderable3D::SetLightMask() {
}
// signature: Graphics::Renderable3D::SetProjectShadowFlag(unsigned int)
// Range: 0x8024E660 -> 0x8024E668
void Graphics::Renderable3D::SetProjectShadowFlag() {
}
// signature: Graphics::Renderable3D::SetParentInstance(World::ModelInstanceArticle *)
// Range: 0x802DE5EC -> 0x802DE5F4
void Graphics::Renderable3D::SetParentInstance() {
}
// signature: Graphics::Renderable3DLink::SetLink(Graphics::Renderable3D *)
// Range: 0x802F2D0C -> 0x802F2D64
void Graphics::Renderable3DLink::SetLink() {
}
