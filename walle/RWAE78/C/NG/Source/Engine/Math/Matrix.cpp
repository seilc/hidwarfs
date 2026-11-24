/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Math\Matrix.cpp
*/
// signature: @unnamed@WAD02_cpp@::RefInvert(Math::Matrix43 &, const Math::Matrix43 &, Math::HintInvertibleEnum)
// Range: 0x80289DBC -> 0x8028A038
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
// Range: 0x8028A038 -> 0x8028A38C
class Vector Math::Matrix33::GetScale() const {
    // Local variables
    class Vector c0; // r1+0x88
    class Vector c1; // r1+0x78
    class Vector c2; // r1+0x68
    class Vector lenSqr; // r1+0x58
}
// Range: 0x8028A38C -> 0x8028A684
class Vector Math::Matrix33::GetRecipScale() const {
    // Local variables
    class Vector c0; // r1+0x88
    class Vector c1; // r1+0x78
    class Vector c2; // r1+0x68
    class Vector lenSqr; // r1+0x58

    // References
    // -> int __float_nan[65536];
}
// Range: 0x8028A684 -> 0x8028A874
class Vector Math::Matrix33::GetRecipScaleSqr() const {
    // Local variables
    class Vector c0; // r1+0x88
    class Vector c1; // r1+0x78
    class Vector c2; // r1+0x68
    class Vector lenSqr; // r1+0x58
}
// Range: 0x8028A874 -> 0x8028A948
void Math::Matrix33::GetEuler(class Matrix33 * this /* r28 */, float * yaw /* r29 */, float * pitch /* r30 */, float * roll /* r31 */) const {
}
// Range: 0x8028A948 -> 0x8028AA80
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
// Range: 0x8028AA80 -> 0x8028AD78
void Math::Matrix33::MakeLookInternal(class Matrix33 * this /* r30 */, int rowPrimary /* r26 */, class Vector * toPrimary /* r31 */, int rowSecondary /* r27 */) {
    // Local variables
    class Vector a2; // r1+0x18
    float a2mag2; // r31
    float a2mag; // f31
    class Vector a1; // r1+0x8

    {
        // Range: 0x8028AAE4 -> 0x8028ABEC
        // Local variables
        float z; // f0
        float y; // f0
        float x; // f0
    }
}
// signature: Math::Matrix33::CheckHint(Math::HintOrthonormalEnum) const
// Range: 0x8028AD78 -> 0x8028B23C
bool Math::Matrix33::CheckHint(class Matrix33 * this /* r31 */) const {
}
// signature: Math::MulInvert(Math::Vector &, const Math::Vector &, const Math::Matrix43 &, Math::HintOrthonormalEnum)
// Range: 0x8028B23C -> 0x8028B418
void Math::MulInvert() {
}
// signature: Math::Invert(Math::Matrix43 &, const Math::Matrix43 &, Math::HintInvertibleEnum)
// Range: 0x8028B418 -> 0x8028B420
void Math::Invert() {
}
// signature: Math::SafeNormalizeInternal(Math::Matrix33 &, const Math::Matrix33 &, const Math::Matrix33 &, float)
// Range: 0x8028B420 -> 0x8028B76C
static void Math::SafeNormalizeInternal(class Matrix33 * o /* r31 */) {
    // Local variables
    class Vector r0; // r1+0x28
    class Vector r1; // r1+0x18
    class Vector r2; // r1+0x8
    float lenSqr0; // f0
    float lenSqr1; // f30
    float lenSqr2; // f29
}
// signature: Math::SafeNormalize(Math::Matrix43 &, const Math::Matrix43 &, const Math::Matrix33 &, float)
// Range: 0x8028B76C -> 0x8028B7C8
void Math::SafeNormalize(class Matrix43 * o /* r30 */, class Matrix43 * a /* r31 */) {
}
// signature: Math::MulStream(Math::Vector *, const Math::Matrix33 &, int)
// Range: 0x8028B7C8 -> 0x8028B838
void Math::MulStream(class Matrix33 * b /* r28 */, int amount /* r29 */) {
    {
        // Range: 0x8028B7E0 -> 0x8028B7F8
        // Local variables
        int i; // r30
    }
}
// signature: Math::MulStream(Math::Vector *, const Math::Matrix43 &, int)
// Range: 0x8028B838 -> 0x8028B8A8
void Math::MulStream(class Matrix43 * b /* r28 */, int amount /* r29 */) {
    {
        // Range: 0x8028B850 -> 0x8028B868
        // Local variables
        int i; // r30
    }
}
// signature: Math::MulStream(const Math::Matrix43 *, Math::Matrix43 *, int)
// Range: 0x8028B8A8 -> 0x8028B91C
void Math::MulStream(int amount /* r28 */) {
    {
        // Range: 0x8028B8C8 -> 0x8028B8D8
        // Local variables
        int i; // r29
    }
}
