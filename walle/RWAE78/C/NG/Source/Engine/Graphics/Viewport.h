/*
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\Viewport.h
*/
// Range: 0x80250244 -> 0x80250248
void * Graphics::ViewMatrix::ViewMatrix() {
}
// Range: 0x80273900 -> 0x80273908
int Graphics::Viewport::GetKitLightIndex() const {
}
// Range: 0x802111F0 -> 0x80211230
void * Graphics::Viewport::~Viewport(class Viewport * this /* r31 */) {
}
// Range: 0x8025E3CC -> 0x8025E3D4
class Matrix43 * Graphics::Viewport::GetInverseCameraMat() const {
}
// signature: Graphics::Viewport::SetVisibleMask(unsigned short)
// Range: 0x8026D9C0 -> 0x8026D9C8
void Graphics::Viewport::SetVisibleMask() {
}
// Range: 0x80258428 -> 0x80258430
unsigned short Graphics::Viewport::GetVisibleMask() const {
}
// signature: Graphics::Viewport::SetRendering(bool)
// Range: 0x80273CE8 -> 0x80273CF0
void Graphics::Viewport::SetRendering() {
}
// Range: 0x80258420 -> 0x80258428
bool Graphics::Viewport::GetRendering() const {
}
// signature: Graphics::Viewport::SetCameraMatrix(const Math::Matrix43 &)
// Range: 0x80259EC8 -> 0x80259F4C
void Graphics::Viewport::SetCameraMatrix() {
}
// signature: Graphics::Viewport::SetProjectionMode(Graphics::Viewport::ProjectionMode)
// Range: 0x80259E90 -> 0x80259E98
void Graphics::Viewport::SetProjectionMode() {
}
// signature: Graphics::Viewport::SetProjectionZ(float, float, float, float)
// Range: 0x80259E98 -> 0x80259EAC
void Graphics::Viewport::SetProjectionZ() {
}
// signature: Graphics::Viewport::SetProjection(float, float)
// Range: 0x80273D34 -> 0x80273D40
void Graphics::Viewport::SetProjection() {
}
// Range: 0x80259DB0 -> 0x80259E90
void Graphics::Viewport::SetPerspProjectionZ(class Viewport * this /* r30 */, float fovy /* f27 */, float aspect /* f28 */, float znear /* f29 */, float zfar /* f30 */) {
    // Local variables
    float width; // f0
    float height; // f0
}
// Range: 0x80273D84 -> 0x80273E34
void Graphics::Viewport::SetPerspProjection(class Viewport * this /* r30 */, float fovy /* f29 */, float aspect /* f30 */) {
    // Local variables
    float width; // f0
    float height; // f0
}
// Range: 0x80273E78 -> 0x80273F28
void Graphics::Viewport::SetFOVY(class Viewport * this /* r30 */, float fovy /* f29 */) {
    // Local variables
    float aspect; // f30
}
// signature: Graphics::Viewport::SetOrthoProjection(float, float, float, float)
// Range: 0x80259EAC -> 0x80259EC8
void Graphics::Viewport::SetOrthoProjection() {
}
// signature: Graphics::Viewport::SetDepthRange(float, float)
// Range: 0x80273F28 -> 0x80273F34
void Graphics::Viewport::SetDepthRange() {
}
// signature: Graphics::Viewport::SetAspectMode(Graphics::Viewport::AspectMode)
// Range: 0x80273F34 -> 0x80273F3C
void Graphics::Viewport::SetAspectMode() {
}
// signature: Graphics::Viewport::SetLodEnabled(bool)
// Range: 0x80273F80 -> 0x80273F88
void Graphics::Viewport::SetLodEnabled() {
}
// signature: Graphics::Viewport::SetHackTransparentDepthWrite(bool)
// Range: 0x80273F88 -> 0x80273F90
void Graphics::Viewport::SetHackTransparentDepthWrite() {
}
// signature: Graphics::Viewport::SetMoBlurSettings(const Graphics::Viewport::MoBlurSettings &)
// Range: 0x80274104 -> 0x80274138
void Graphics::Viewport::SetMoBlurSettings() {
}
// signature: Graphics::Viewport::SetZPlanes(float, float)
// Range: 0x80273FD4 -> 0x80273FE0
void Graphics::Viewport::SetZPlanes() {
}
// signature: Graphics::Viewport::SetFogStartEnd(float, float)
// Range: 0x802599EC -> 0x80259A3C
void Graphics::Viewport::SetFogStartEnd() {
}
// signature: Graphics::Viewport::SetFogColor(float, float, float)
// Range: 0x80259A3C -> 0x80259A58
void Graphics::Viewport::SetFogColor() {
}
// signature: Graphics::Viewport::SetRelativeCorner(float, float, float, float)
// Range: 0x802740AC -> 0x802740C0
void Graphics::Viewport::SetRelativeCorner() {
}
// signature: Graphics::Viewport::LightPointSoA::Overlap(unsigned int *, const Math::Vector4 *, unsigned short) const
// Range: 0x8026096C -> 0x80260BD4
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
// Range: 0x80260BD4 -> 0x80261160
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
// signature: Graphics::ViewMatrix::ViewMatrix(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float)
// Range: 0x8026D024 -> 0x8026D0B0
void * Graphics::ViewMatrix::ViewMatrix(float x2 /* f30 */, float y2 /* f31 */, float z2 /* f13 */, float w2 /* f12 */, float x3 /* f11 */, float y3 /* f10 */, float z3 /* f9 */, float w3 /* f0 */) {
}
// signature: Math::Mul(Graphics::ViewMatrix &, const Math::Matrix43 &, const Graphics::ViewMatrix &)
// Range: 0x8026A3DC -> 0x8026A610
void Math::Mul(class ViewMatrix * b /* r9 */) {
    // References
    // -> class Vector4 vec4OneW;
}
// signature: Math::Mul(Graphics::ViewMatrix &, const Graphics::ViewMatrix &, const Math::Matrix43 &)
// Range: 0x8026B200 -> 0x8026B56C
void Math::Mul() {
}
// signature: Math::Mul(Graphics::ViewMatrix &, const Graphics::ViewMatrix &, const Math::Matrix33 &)
// Range: 0x8026CE38 -> 0x8026D018
void Math::Mul() {
}
// signature: Math::Mul(Graphics::ViewMatrix &, const Graphics::ViewMatrix &, const Graphics::ViewMatrix &)
// Range: 0x8026D0B0 -> 0x8026D3C4
void Math::Mul() {
    // Local variables
    float x0; // f3
    float y0; // f2
    float z0; // f1
    float w0; // f0
    float x1; // f6
    float y1; // f7
    float z1; // f16
    float w1; // f14
    float x2; // f17
    float y2; // f18
    float z2; // f15
    float w2; // f19
    float x3; // f5
    float y3; // f8
    float z3; // f2
    float w3; // f3
}
// signature: Math::MulProject(Math::Vector &, const Math::Vector &, const Graphics::ViewMatrix &)
// Range: 0x8026D4D4 -> 0x8026D5D8
void Math::MulProject() {
    // Local variables
    class Vector4 temp; // r1+0x8
}
// signature: Math::MulProjectStream(Math::Vector *, const Graphics::ViewMatrix &, int)
// Range: 0x8026D3C4 -> 0x8026D4D4
void Math::MulProjectStream() {
    {
        // Range: 0x8026D3D0 -> 0x8026D3D0
        // Local variables
        int i; // r0
    }
}
