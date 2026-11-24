/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\Viewport.h
*/
class Vector4 fogModeTable[6]; // size: 0x60, address: 0x8084B468
// Range: 0x802EF59C -> 0x802EF5A4
class FrustumPlanes & Graphics::Viewport::GetFrustumPlanes() {
}
// Range: 0x8030437C -> 0x80304384
int Graphics::Viewport::GetKitLightIndex() const {
}
// Range: 0x802F5014 -> 0x802F501C
class Matrix43 & Graphics::Viewport::GetInverseCameraMat() const {
}
// Range: 0x80072C90 -> 0x80072C98
unsigned short Graphics::Viewport::GetVisibleMask() const {
}
// signature: Graphics::Viewport::SetRendering(bool)
// Range: 0x80304F24 -> 0x80304F2C
void Graphics::Viewport::SetRendering() {
}
// Range: 0x802EF594 -> 0x802EF59C
bool Graphics::Viewport::GetRendering() const {
}
// signature: Graphics::Viewport::SetCameraMatrix(const Math::Matrix43 &)
// Range: 0x802F0EEC -> 0x802F0F70
void Graphics::Viewport::SetCameraMatrix() {
}
// signature: Graphics::Viewport::SetProjectionZ(float, float, float, float)
// Range: 0x802F0EBC -> 0x802F0ED0
void Graphics::Viewport::SetProjectionZ() {
}
// signature: Graphics::Viewport::SetProjection(float, float)
// Range: 0x80304F70 -> 0x80304F7C
void Graphics::Viewport::SetProjection() {
}
// Range: 0x802F0DD8 -> 0x802F0EB8
void Graphics::Viewport::SetPerspProjectionZ(class Viewport * this /* r30 */, float fovy /* f27 */, float aspect /* f28 */, float znear /* f29 */, float zfar /* f30 */) {
    // Local variables
    float width; // f0
    float height; // f0
}
// Range: 0x80304FC0 -> 0x80305070
void Graphics::Viewport::SetPerspProjection(class Viewport * this /* r30 */, float fovy /* f29 */, float aspect /* f30 */) {
    // Local variables
    float width; // f0
    float height; // f0
}
// Range: 0x803050B4 -> 0x80305164
void Graphics::Viewport::SetFOVY(class Viewport * this /* r30 */, float fovy /* f29 */) {
    // Local variables
    float aspect; // f30
}
// signature: Graphics::Viewport::SetOrthoProjection(float, float, float, float)
// Range: 0x802F0ED0 -> 0x802F0EEC
void Graphics::Viewport::SetOrthoProjection() {
}
// signature: Graphics::Viewport::SetDepthRange(float, float)
// Range: 0x80305164 -> 0x80305170
void Graphics::Viewport::SetDepthRange() {
}
// Range: 0x802EF5A4 -> 0x802EF5AC
bool Graphics::Viewport::GetLodEnabled() const {
}
// signature: Graphics::Viewport::SetLodEnabled(bool)
// Range: 0x803051B8 -> 0x803051C0
void Graphics::Viewport::SetLodEnabled() {
}
// signature: Graphics::Viewport::SetHackTransparentDepthWrite(bool)
// Range: 0x803051C0 -> 0x803051C8
void Graphics::Viewport::SetHackTransparentDepthWrite() {
}
// signature: Graphics::Viewport::SetMoBlurSettings(const Graphics::Viewport::MoBlurSettings &)
// Range: 0x80305644 -> 0x80305678
void Graphics::Viewport::SetMoBlurSettings() {
}
// signature: Graphics::Viewport::SetZPlanes(float, float)
// Range: 0x8030520C -> 0x80305218
void Graphics::Viewport::SetZPlanes() {
}
// signature: Graphics::Viewport::SetFogStartEnd(float, float, unsigned int)
// Range: 0x8030525C -> 0x8030547C
void Graphics::Viewport::SetFogStartEnd() {
    // References
    // -> class Vector4 fogModeTable[6];
}
// signature: Graphics::Viewport::SetFogColor(float, float, float)
// Range: 0x8030558C -> 0x803055A8
void Graphics::Viewport::SetFogColor() {
}
// signature: Graphics::Viewport::SetFogMode(unsigned int)
// Range: 0x8030547C -> 0x80305548
void Graphics::Viewport::SetFogMode() {
    // References
    // -> class Vector4 fogModeTable[6];
}
// signature: Graphics::Viewport::SetRelativeCorner(float, float, float, float)
// Range: 0x803055EC -> 0x80305600
void Graphics::Viewport::SetRelativeCorner() {
}
// signature: Graphics::Viewport::LightPointSoA::Overlap(unsigned int *, const Math::Vector4 *, unsigned short) const
// Range: 0x802F767C -> 0x802F78E4
void Graphics::Viewport::LightPointSoA::Overlap() const {
    // Local variables
    float sphX; // f0
    float sphY; // f0
    float sphZ; // f0
    float sphR; // f0
    class Vector4 distResult; // r1+0x48
    class Vector4 diffX; // r1+0x38
    class Vector4 diffY; // r1+0x28
    class Vector4 diffZ; // r1+0x18
    class Vector4 radSum; // r1+0x8
}
// signature: Graphics::Viewport::LightSpotSoA::Overlap(unsigned int *, const Math::Vector4 *, unsigned short) const
// Range: 0x802F78E4 -> 0x802F7E2C
void Graphics::Viewport::LightSpotSoA::Overlap() const {
    // Local variables
    float sphX; // f0
    float sphY; // f0
    float sphZ; // f0
    float sphR; // f0
    class Vector4 distResult; // r1+0xD8
    class Vector4 dotResult; // r1+0xC8
    class Vector4 coneResult; // r1+0xB8
    class Vector4 diffX; // r1+0xA8
    class Vector4 diffY; // r1+0x98
    class Vector4 diffZ; // r1+0x88
    class Vector4 radSum; // r1+0x78
    class Vector4 spotDot; // r1+0x68
    class Vector4 closeDistX; // r1+0x58
    class Vector4 closeDistY; // r1+0x48
    class Vector4 closeDistZ; // r1+0x38
    class Vector4 closeDistSqr; // r1+0x28
    class Vector4 radSin; // r1+0x18
}
// signature: Graphics::FrustumPlanes::Cull(const Math::Vector4 &) const
// Range: 0x802F5E48 -> 0x802F5F70
int Graphics::FrustumPlanes::Cull() const {
    // Local variables
    float dot0; // f0
    float dot1; // f0
    float dot2; // f0
    float dot3; // f0
    float dot4; // f0
    float dot5; // f0
    float d0; // f31
    float d1; // f1
    float d2; // f5
    float d3; // f7
    float d4; // f3
    float d5; // f9
}
// signature: Graphics::FrustumPlanes::CullLOD(const Math::Vector4 &, const Math::Vector4 &, float &, int &) const
// Range: 0x802F5C18 -> 0x802F5E2C
int Graphics::FrustumPlanes::CullLOD() const {
    // Local variables
    class Vector4 dvec0; // r1+0x8
    float dot0; // f0
    float dot1; // f0
    float dot2; // f0
    float dot3; // f0
    float dot4; // f0
    float dot5; // f0
    float dot6; // f0
    float d0; // f23
    float d1; // f3
    float d2; // f4
    float d3; // f7
    float d4; // f9
    float d5; // f11
    float tempDistSqr; // f0
    float lodDataX; // f0
    float lodDataY; // f0
    float lodDataZ; // f0
}
// signature: Math::MulProject(Math::Vector &, const Math::Vector &, const Graphics::ViewMatrix &)
// Range: 0x80307EC0 -> 0x80307FC4
void Math::MulProject() {
    // Local variables
    class Vector4 temp; // r1+0x8
}
