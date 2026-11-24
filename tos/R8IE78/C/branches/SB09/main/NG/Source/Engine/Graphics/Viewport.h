/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WADSpeed.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\Viewport.h
*/
class Vector4 fogModeTable[6]; // size: 0x60, address: 0x80779DF0
class Vector4 heightFogModeTable[6]; // size: 0x60, address: 0x80779E58
// Range: 0x801CF670 -> 0x801CF698
enum Category Graphics::Viewport::GetCategory() {
}
// Range: 0x8020CD10 -> 0x8020CD18
class FrustumPlanes & Graphics::Viewport::GetFrustumPlanes() {
}
// Range: 0x801A1860 -> 0x801A1934
void Graphics::Viewport::Create(class Viewport * this /* r28 */) {
    // References
    // -> static class Matrix43 _matIdentity;
}
// Range: 0x801A12B0 -> 0x801A13F0
void * Graphics::Viewport::Viewport(class Viewport * this /* r28 */, enum ViewportIndex index /* r29 */) {
    // References
    // -> struct {} __vt__Q28Graphics8Viewport;
}
// signature: Graphics::Viewport::SetRendering(bool)
// Range: 0x801D51F0 -> 0x801D51F8
void Graphics::Viewport::SetRendering() {
}
// Range: 0x8020E330 -> 0x8020E338
bool Graphics::Viewport::GetRendering() const {
}
// signature: Graphics::Viewport::SetCameraMatrix(const Math::Matrix43 &)
// Range: 0x801D5250 -> 0x801D5258
void Graphics::Viewport::SetCameraMatrix() {
}
// signature: Graphics::Viewport::SetProjectionZ(float, float, float, float)
// Range: 0x801A19C0 -> 0x801A19D4
void Graphics::Viewport::SetProjectionZ() {
}
// signature: Graphics::Viewport::SetPerspProjectionZ(float, float, float, float)
// Range: 0x801A1940 -> 0x801A19BC
void Graphics::Viewport::SetPerspProjectionZ(class Viewport * this /* r31 */, float znear /* f30 */, float zfar /* f31 */) {
    // Local variables
    float width; // r1+0xC
    float height; // r1+0x8
}
// signature: Graphics::Viewport::SetPerspProjection(float, float)
// Range: 0x801D52B0 -> 0x801D5304
void Graphics::Viewport::SetPerspProjection(class Viewport * this /* r31 */) {
    // Local variables
    float width; // r1+0xC
    float height; // r1+0x8
}
// signature: Graphics::Viewport::SetFOVY(float)
// Range: 0x801D5360 -> 0x801D5378
void Graphics::Viewport::SetFOVY() {
    // Local variables
    float aspect; // f2
}
// Range: 0x8020CD20 -> 0x8020CD28
bool Graphics::Viewport::GetLodEnabled() const {
}
// signature: Graphics::Viewport::SetLodEnabled(bool)
// Range: 0x801D53D0 -> 0x801D53D8
void Graphics::Viewport::SetLodEnabled() {
}
// signature: Graphics::Viewport::SetMoBlurSettings(const Graphics::Viewport::MoBlurSettings &)
// Range: 0x801D59F0 -> 0x801D5A24
void Graphics::Viewport::SetMoBlurSettings() {
}
// signature: Graphics::Viewport::SetZPlanes(float, float)
// Range: 0x801D5430 -> 0x801D543C
void Graphics::Viewport::SetZPlanes() {
}
// signature: Graphics::Viewport::SetFogStartEnd(float, float, unsigned int)
// Range: 0x801D5490 -> 0x801D5538
void Graphics::Viewport::SetFogStartEnd() {
}
// signature: Graphics::Viewport::SetFogColor(float, float, float)
// Range: 0x801D56B0 -> 0x801D56C0
void Graphics::Viewport::SetFogColor() {
}
// Range: 0x801D5540 -> 0x801D5660
void Graphics::Viewport::SetFogMode(class Viewport * this /* r27 */, unsigned int mode /* r28 */) {
    // References
    // -> class Vector4 fogModeTable[6];
}
// signature: Graphics::Viewport::SetHeightFogStartEnd(float, float, unsigned int)
// Range: 0x801D5710 -> 0x801D582C
void Graphics::Viewport::SetHeightFogStartEnd(class Viewport * this /* r30 */) {
    // Local variables
    float y; // f0
    float height; // f0
    float range; // f0
    float fogHeightDist; // f0
    float dummy; // f0
}
// Range: 0x801D5830 -> 0x801D5950
void Graphics::Viewport::SetHeightFogMode(class Viewport * this /* r27 */, unsigned int mode /* r28 */) {
    // References
    // -> class Vector4 heightFogModeTable[6];
}
// signature: Graphics::Viewport::SetRelativeCorner(float, float, float, float)
// Range: 0x801A19E0 -> 0x801A19F4
void Graphics::Viewport::SetRelativeCorner() {
}
// signature: Graphics::Viewport::LightPointSoA::Overlap(unsigned int *, const Math::Vector4 *, const unsigned short) const
// Range: 0x801C9710 -> 0x801C98E0
void Graphics::Viewport::LightPointSoA::Overlap(class LightPointSoA * this /* r29 */, unsigned int * out /* r30 */, unsigned short lightMask /* r31 */) const {
    // Local variables
    float sphX; // f0
    float sphY; // f31
    float sphZ; // f30
    float sphR; // f29
    class Vector4 distResult; // r1+0x48
    class Vector4 diffX; // r1+0x38
    class Vector4 diffY; // r1+0x28
    class Vector4 diffZ; // r1+0x18
    class Vector4 radSum; // r1+0x8
}
// signature: Graphics::Viewport::LightSpotSoA::Overlap(unsigned int *, const Math::Vector4 *, const unsigned short) const
// Range: 0x801C9A70 -> 0x801C9DA4
void Graphics::Viewport::LightSpotSoA::Overlap(class LightSpotSoA * this /* r29 */, unsigned int * out /* r30 */, unsigned short lightMask /* r31 */) const {
    // Local variables
    float sphX; // f0
    float sphY; // f31
    float sphZ; // f30
    float sphR; // f29
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
// Range: 0x8020CEA0 -> 0x8020CF48
int Graphics::FrustumPlanes::Cull() const {
    // Local variables
    float plane01; // f0
    float plane23; // f1
    float plane45; // f2
    float sphXY; // f3
    float sphZR; // f4
    float tmp01; // f5
    float tmp23; // f6
    float tmp45; // f7
    float zeroR; // f8
    float * planeData; // r0
    float * sphereData; // r0
}
// signature: Graphics::FrustumPlanes::CullLOD(const Math::Vector4 &, const Math::Vector4 &, float &, int &) const
// Range: 0x8020CD80 -> 0x8020CE74
int Graphics::FrustumPlanes::CullLOD() const {
    // Local variables
    float plane01; // f1
    float plane23; // f2
    float plane45; // f3
    float sphXY; // f0
    float sphZR; // f4
    float wiiDot6; // f5
    float tmp01; // f6
    float tmp23; // f5
    float tmp45; // f7
    float zeroR; // f8
    float rdist2; // f0
    float * planeData; // r0
    float * sphereData; // r0
    float * camData; // r0
    float lodDataX; // f0
    float lodDataY; // f0
    float lodDataZ; // f0
}
// signature: Graphics::FrustumPlanes::InitLodData(Math::Vector4 &, float, float, float)
// Range: 0x801C92E0 -> 0x801C935C
void Graphics::FrustumPlanes::InitLodData() {
    {
        // Range: 0x801C9308 -> 0x801C9350
        // Local variables
        float invFadeDelta; // f2
        float fadeDelta; // f5
        float fadeDistSqr; // f5
        float offDistSqr; // f4
    }
}
// Range: 0x801C8770 -> 0x801C8800
void Math::Mul(class Vector4 & o /* r29 */, class Vector4 & a /* r30 */, class ViewMatrix & b /* r31 */) {
}
// signature: Math::MulProject(Math::Vector &, const Math::Vector &, const Graphics::ViewMatrix &)
// Range: 0x801D7A60 -> 0x801D7AF8
void Math::MulProject(class Vector & o /* r29 */, class ViewMatrix & b /* r30 */) {
    // Local variables
    class Vector4 temp; // r1+0x8
}
