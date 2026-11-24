/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Math\Matrix.cpp
*/
// signature: @unnamed@WAD02_cpp@::RefGetDeterminant(const Math::Matrix33 &)
// Range: 0x801E8E60 -> 0x801E8EBC
static float @unnamed@WAD02_cpp@::RefGetDeterminant() {
    // Local variables
    float a00; // f0
    float a01; // f0
    float a02; // f0
    float a10; // f0
    float a11; // f0
    float a12; // f0
    float a20; // f0
    float a21; // f0
    float a22; // f0
}
// Range: 0x801E8EC0 -> 0x801E9054
class Vector Math::Matrix33::GetScale() const {
    // Local variables
    class Vector c0; // r1+0x88
    class Vector c1; // r1+0x78
    class Vector c2; // r1+0x68
    class Vector lenSqr; // r1+0x58
}
// Range: 0x801E9100 -> 0x801E922C
class Vector Math::Matrix33::GetRecipScaleSqr() const {
    // Local variables
    class Vector c0; // r1+0x88
    class Vector c1; // r1+0x78
    class Vector c2; // r1+0x68
    class Vector lenSqr; // r1+0x58
}
// Range: 0x801E9230 -> 0x801E9314
void Math::Matrix33::GetEuler(class Matrix33 * this /* r28 */, float & yaw /* r29 */, float & pitch /* r30 */, float & roll /* r31 */) const {
    {
        // Range: 0x801E92B0 -> 0x801E92FC
        // Local variables
        float pitchSign; // f0
    }
}
// signature: Math::Matrix33::MakeEulerInternal(float, float, float)
// Range: 0x801E9320 -> 0x801E94E4
void Math::Matrix33::MakeEulerInternal(class Matrix33 * this /* r31 */, float pitch /* f30 */, float roll /* f31 */) {
    // Local variables
    float sy; // r1+0x1C
    float cy; // r1+0x18
    float sp; // r1+0x14
    float cp; // r1+0x10
    float sr; // r1+0xC
    float cr; // r1+0x8
}
// signature: Math::Matrix33::MakeLookInternal(int, const Math::Vector &, int, const Math::Vector &)
// Range: 0x801E9560 -> 0x801E9714
void Math::Matrix33::MakeLookInternal(class Matrix33 * this /* r26 */, int rowPrimary /* r27 */, class Vector & toPrimary /* r28 */, int rowSecondary /* r29 */) {
    // Local variables
    class Vector a2; // r1+0x18
    float a2mag2; // f1
    float a2mag; // f1
    class Vector a1; // r1+0x8

    {
        // Range: 0x801E95B8 -> 0x801E967C
        // Local variables
        float z; // f0
        float y; // f0
        float x; // f0
    }

    // References
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4OneZ;
}
// Range: 0x801E9780 -> 0x801E991C
float Math::Matrix33::GetOrthogonalError(class Matrix33 * this /* r31 */) const {
    // Local variables
    class Vector r0; // r1+0x28
    class Vector r1; // r1+0x18
    class Vector r2; // r1+0x8
    float len0; // f0
    float len1; // f0
    float len2; // f0
    float err0; // f0
    float err1; // f0
    float err2; // f0
    float err; // f1
}
// Range: 0x801E9920 -> 0x801E9A20
float Math::Matrix33::GetNormalError(class Matrix33 * this /* r31 */) const {
    // Local variables
    class Vector r0; // r1+0x28
    class Vector r1; // r1+0x18
    class Vector r2; // r1+0x8
    float err0; // f30
    float err1; // f29
    float err2; // f2
    float err; // f1
}
// signature: Math::Matrix33::CheckHint(Math::HintOrthonormalEnum) const
// Range: 0x801E9A20 -> 0x801E9A8C
bool Math::Matrix33::CheckHint(class Matrix33 * this /* r29 */) const {
}
// signature: Math::MulInvert(Math::Vector &, const Math::Vector &, const Math::Matrix43 &, Math::HintOrthonormalEnum)
// Range: 0x801E9B40 -> 0x801E9BA0
void Math::MulInvert(class Vector & o /* r29 */, class Vector & a /* r30 */, class Matrix43 & b /* r31 */) {
}
// signature: Math::Invert(Math::Matrix43 &, const Math::Matrix43 &, Math::HintInvertibleEnum)
// Range: 0x801E9BA0 -> 0x801E9E54
void Math::Invert(class Matrix43 & o /* r30 */, class Matrix43 & a /* r31 */) {
}
// signature: Math::Normalize(Math::Matrix43 &, const Math::Matrix43 &)
// Range: 0x801E9E60 -> 0x801E9FE8
void Math::Normalize(class Matrix43 & o /* r31 */) {
    // Local variables
    class Vector4 c0; // r1+0xB8
    class Vector4 c1; // r1+0xA8
    class Vector4 c2; // r1+0x98
    class Vector4 lenSqr; // r1+0x88
    class Vector4 rlen; // r1+0x78
}
// Range: 0x801E9FF0 -> 0x801EA140
static void Math::OrthonormalizeInternal(class Matrix33 & o /* r30 */, class Matrix33 & a /* r31 */) {
    // Local variables
    class Vector r0; // r1+0x68
    class Vector r1; // r1+0x58
    class Vector r2; // r1+0x48
}
// Range: 0x801EA140 -> 0x801EA194
void Math::Orthonormalize(class Matrix43 & o /* r30 */, class Matrix43 & a /* r31 */) {
    // Local variables
    class Vector pos; // r1+0x8
}
// Range: 0x801EA1A0 -> 0x801EA2E0
static void Math::SafeNormalizeInternal(class Matrix33 & o /* r29 */, class Matrix33 & a /* r30 */, class Matrix33 & safe /* r31 */, float tol /* f28 */) {
    // Local variables
    class Vector r0; // r1+0x28
    class Vector r1; // r1+0x18
    class Vector r2; // r1+0x8
    float lenSqr0; // f31
    float lenSqr1; // f30
    float lenSqr2; // f29
}
// signature: Math::SafeNormalize(Math::Matrix43 &, const Math::Matrix43 &, const Math::Matrix33 &, float)
// Range: 0x801EA2E0 -> 0x801EA330
void Math::SafeNormalize(class Matrix43 & o /* r30 */, class Matrix43 & a /* r31 */) {
}
// Range: 0x801EA330 -> 0x801EA38C
void Math::MulStream(class Matrix43 * a /* r27 */, class Matrix43 * b /* r28 */, int amount /* r29 */) {
    {
        // Range: 0x801EA34C -> 0x801EA378
        // Local variables
        int i; // r30
    }
}
