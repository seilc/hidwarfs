/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Math\Matrix.cpp
*/
// signature: @unnamed@WAD02_cpp@::RefInvert(Math::Matrix43 &, const Math::Matrix43 &, Math::HintInvertibleEnum)
// Range: 0x8031EC08 -> 0x8031EE84
static void @unnamed@WAD02_cpp@::RefInvert() {
    // Local variables
    float det; // f0
    float scale; // f13
    float a00; // f0
    float a01; // f0
    float a02; // f0
    float a10; // f0
    float a11; // f0
    float a12; // f0
    float a20; // f0
    float a21; // f0
    float a22; // f0
    float a30; // f0
    float a31; // f0
    float a32; // f0
    float o00; // f1
    float o01; // f18
    float o02; // f0
    float o10; // f19
    float o11; // f20
    float o12; // f1
    float o20; // f18
    float o21; // f19
    float o22; // f5
    float o30; // f0
    float o31; // f2
    float o32; // f18
}
// Range: 0x8031EE84 -> 0x8031F18C
class Vector Math::Matrix33::GetScale() const {
    // Local variables
    class Vector c0; // r1+0x88
    class Vector c1; // r1+0x78
    class Vector c2; // r1+0x68
    class Vector lenSqr; // r1+0x58
}
// Range: 0x8031F18C -> 0x8031F37C
class Vector Math::Matrix33::GetRecipScaleSqr() const {
    // Local variables
    class Vector c0; // r1+0x88
    class Vector c1; // r1+0x78
    class Vector c2; // r1+0x68
    class Vector lenSqr; // r1+0x58
}
// Range: 0x8031F37C -> 0x8031F450
void Math::Matrix33::GetEuler(class Matrix33 * this /* r28 */, float & yaw /* r29 */, float & pitch /* r30 */, float & roll /* r31 */) const {
}
// Range: 0x8031F450 -> 0x8031F588
void Math::Matrix33::MakeEulerInternal(class Matrix33 * this /* r31 */, float yaw /* f28 */, float pitch /* f27 */, float roll /* f26 */) {
    // Local variables
    float sy; // f0
    float cy; // f0
    float sp; // f0
    float cp; // f0
    float sr; // f0
    float cr; // f0
}
// signature: Math::Matrix33::MakeLookInternal(int, const Math::Vector &, int, const Math::Vector &)
// Range: 0x8031F588 -> 0x8031F810
void Math::Matrix33::MakeLookInternal() {
    // Local variables
    class Vector a2; // r1+0x18
    float a2mag2; // r31
    float a2mag; // f4
    class Vector a1; // r1+0x8

    {
        // Range: 0x8031F5D4 -> 0x8031F6BC
        // Local variables
        float z; // f0
        float y; // f0
        float x; // f0
    }
}
// signature: Math::Matrix33::CheckHint(Math::HintOrthonormalEnum) const
// Range: 0x8031F810 -> 0x8031FC3C
bool Math::Matrix33::CheckHint() const {
}
// signature: Math::MulInvert(Math::Vector &, const Math::Vector &, const Math::Matrix43 &, Math::HintOrthonormalEnum)
// Range: 0x8031FC3C -> 0x8031FE18
void Math::MulInvert() {
}
// signature: Math::Invert(Math::Matrix43 &, const Math::Matrix43 &, Math::HintInvertibleEnum)
// Range: 0x8031FE18 -> 0x8031FE20
void Math::Invert() {
}
// signature: Math::Normalize(Math::Matrix43 &, const Math::Matrix43 &)
// Range: 0x8031FE20 -> 0x803201C0
void Math::Normalize() {
    // Local variables
    class Vector4 c0; // r1+0xB8
    class Vector4 c1; // r1+0xA8
    class Vector4 c2; // r1+0x98
    class Vector4 lenSqr; // r1+0x88
    class Vector4 rlen; // r1+0x78
}
// signature: Math::OrthonormalizeInternal(Math::Matrix33 &, const Math::Matrix33 &)
// Range: 0x803201C0 -> 0x8032049C
static void Math::OrthonormalizeInternal() {
    // Local variables
    class Vector r0; // r1+0x68
    class Vector r1; // r1+0x58
    class Vector r2; // r1+0x48
}
// signature: Math::Orthonormalize(Math::Matrix43 &, const Math::Matrix43 &)
// Range: 0x8032049C -> 0x803204F8
void Math::Orthonormalize(class Matrix43 & o /* r31 */) {
    // Local variables
    class Vector pos; // r1+0x8
}
// signature: Math::SafeNormalizeInternal(Math::Matrix33 &, const Math::Matrix33 &, const Math::Matrix33 &, float)
// Range: 0x803204F8 -> 0x803207D0
static void Math::SafeNormalizeInternal() {
    // Local variables
    class Vector r0; // r1+0x28
    class Vector r1; // r1+0x18
    class Vector r2; // r1+0x8
    float lenSqr0; // f0
    float lenSqr1; // f31
    float lenSqr2; // f0
}
// signature: Math::SafeNormalize(Math::Matrix43 &, const Math::Matrix43 &, const Math::Matrix33 &, float)
// Range: 0x803207D0 -> 0x8032082C
void Math::SafeNormalize(class Matrix43 & o /* r30 */, class Matrix43 & a /* r31 */) {
}
// signature: Math::MulStream(const Math::Matrix43 *, Math::Matrix43 *, int)
// Range: 0x8032082C -> 0x803208A0
void Math::MulStream(int amount /* r28 */) {
    {
        // Range: 0x8032084C -> 0x8032085C
        // Local variables
        int i; // r29
    }
}
