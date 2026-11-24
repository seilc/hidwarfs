/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GKernel\GMatrix2D.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x805D1A40 -> 0x805D226C
*/
class GMatrix2D Identity; // size: 0x18, address: 0x80871DB0
// Range: 0x805D2240 -> 0x805D226C
static void __sinit_\GMatrix2D_cpp() {
    // References
    // -> class GMatrix2D Identity;
}
// Range: 0x805D1A40 -> 0x805D1A64
void GMatrix2D::SetIdentity() {
}
// signature: GMatrix2D::Prepend(const GMatrix2D &)
// Range: 0x805D1A70 -> 0x805D1B5C
class GMatrix2D & GMatrix2D::Prepend() {
    // Local variables
    class GMatrix2D t; // r1+0x8
}
// signature: GMatrix2D::Append(const GMatrix2D &)
// Range: 0x805D1B60 -> 0x805D1C5C
class GMatrix2D & GMatrix2D::Append() {
    // Local variables
    class GMatrix2D t; // r1+0x8
}
// signature: GMatrix2D::SetLerp(const GMatrix2D &, const GMatrix2D &, float)
// Range: 0x805D1C60 -> 0x805D1CF4
void GMatrix2D::SetLerp() {
}
// signature: GMatrix2D::Format(char *) const
// Range: 0x805D1D00 -> 0x805D1D40
void GMatrix2D::Format(class GMatrix2D * this /* r6 */) const {
}
// signature: GMatrix2D::Transform(GPoint<float> *, const GPoint<float> &) const
// Range: 0x805D1D40 -> 0x805D1D8C
void GMatrix2D::Transform() const {
}
// Range: 0x805D1D90 -> 0x805D1E60
void GMatrix2D::TransformByInverse(class GPoint * result /* r30 */, class GPoint & p /* r31 */) const {
}
// signature: GMatrix2D::SetInverse(const GMatrix2D &)
// Range: 0x805D1E60 -> 0x805D1F1C
void GMatrix2D::SetInverse() {
    // Local variables
    float det; // f4

    {
        // Range: 0x805D1EB4 -> 0x805D1F18
        // Local variables
        float invDet; // f4
    }
}
// Range: 0x805D1F20 -> 0x805D1F7C
float GMatrix2D::GetMaxScale() const {
    // Local variables
    float basis0Length2; // f1
    float basis1Length2; // f0
    float maxLength2; // f0
}
// Range: 0x805D1F80 -> 0x805D1F88
float GMatrix2D::GetX() const {
}
// Range: 0x805D1F90 -> 0x805D1F98
float GMatrix2D::GetY() const {
}
// Range: 0x805D1FA0 -> 0x805D1FB8
double GMatrix2D::GetXScale() const {
}
// Range: 0x805D1FC0 -> 0x805D1FD8
double GMatrix2D::GetYScale() const {
}
// Range: 0x805D1FE0 -> 0x805D1FEC
double GMatrix2D::GetRotation() const {
}
// signature: GMatrix2D::EncloseTransform(GRect<float> *, const GRect<float> &) const
// Range: 0x805D1FF0 -> 0x805D2240
void GMatrix2D::EncloseTransform() const {
    // Local variables
    class GPoint p0; // r1+0x40
    class GPoint p1; // r1+0x38
    class GPoint p2; // r1+0x30
    class GPoint p3; // r1+0x28
}
