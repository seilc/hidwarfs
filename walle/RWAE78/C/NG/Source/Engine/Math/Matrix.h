/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Math\Matrix.h
*/
static class Matrix43 _matZero; // size: 0x30, address: 0x807509C8
static class Matrix43 _matZero; // size: 0x30, address: 0x80767F48
static class Matrix43 _matZero; // size: 0x30, address: 0x8076D2B8
static class Matrix43 _matZero; // size: 0x30, address: 0x80792658
static class Matrix43 _matZero; // size: 0x30, address: 0x807E5608
static class Matrix43 _matZero; // size: 0x30, address: 0x807FDBD0
static class Matrix43 _matZero; // size: 0x30, address: 0x807FECE8
static class Matrix43 _matZero; // size: 0x30, address: 0x80803EB0
static class Matrix43 _matIdentity; // size: 0x30, address: 0x807509F8
static class Matrix43 _matIdentity; // size: 0x30, address: 0x80767F78
static class Matrix43 _matIdentity; // size: 0x30, address: 0x8076D2E8
static class Matrix43 _matIdentity; // size: 0x30, address: 0x80792688
static class Matrix43 _matIdentity; // size: 0x30, address: 0x807E5638
static class Matrix43 _matIdentity; // size: 0x30, address: 0x807FDC00
static class Matrix43 _matIdentity; // size: 0x30, address: 0x807FED18
static class Matrix43 _matIdentity; // size: 0x30, address: 0x80803EE0
int next[3]; // size: 0xC, address: 0x806FFF88
int next[3]; // size: 0xC, address: 0x8070A9B0
// Range: 0x8025BB9C -> 0x8025BBA0
class Matrix33 * Math::Matrix33::As33() {
}
// signature: Math::Matrix33::Matrix33(float, float, float, float, float, float, float, float, float)
// Range: 0x8026CE0C -> 0x8026CE38
void * Math::Matrix33::Matrix33(float z2 /* f0 */) {
}
// signature: Math::Matrix33::SetCol0(const Math::Vector &)
// Range: 0x80267540 -> 0x80267564
void Math::Matrix33::SetCol0() {
}
// signature: Math::Matrix33::SetCol1(const Math::Vector &)
// Range: 0x80267564 -> 0x80267588
void Math::Matrix33::SetCol1() {
}
// signature: Math::Matrix33::SetCol2(const Math::Vector &)
// Range: 0x80267588 -> 0x802675AC
void Math::Matrix33::SetCol2() {
}
// Range: 0x8025526C -> 0x80255468
float Math::Matrix33::GetMaxScale() const {
    // Local variables
    float lenSqr0; // f0
    float lenSqr1; // f0
    float lenSqr2; // f28
    float lenMax; // f0
    class Vector c0; // r1+0x78
    class Vector c1; // r1+0x68
    class Vector c2; // r1+0x58
    class Vector lenSqr; // r1+0x48
}
// Range: 0x8000BF50 -> 0x8000BF54
void * Math::Matrix43::Matrix43() {
}
// signature: Math::Matrix43::Matrix43(float, float, float, float, float, float, float, float, float, float, float, float)
// Range: 0x801E88C0 -> 0x801E8904
void * Math::Matrix43::Matrix43(float z2 /* f11 */, float x3 /* f10 */, float y3 /* f9 */, float z3 /* f0 */) {
}
// signature: Math::Matrix43::Matrix43(const Math::Matrix43 &)
// Range: 0x801A33A0 -> 0x801A3424
void * Math::Matrix43::Matrix43() {
}
// signature: Math::Matrix43::Matrix43(const Math::Matrix43POD &)
// Range: 0x801EA750 -> 0x801EA7B4
void * Math::Matrix43::Matrix43() {
}
// signature: Math::Matrix43::SetRow3(const Math::Vector &)
// Range: 0x8025BCF4 -> 0x8025BD10
void Math::Matrix43::SetRow3() {
}
// Range: 0x8016D800 -> 0x8016D81C
class Vector Math::Matrix43::GetPos() const {
}
// signature: Math::Matrix43::SetPos(const Math::Vector &)
// Range: 0x801A38C0 -> 0x801A38DC
void Math::Matrix43::SetPos() {
}
// signature: Math::Matrix43::SetPos(float, float, float)
// Range: 0x800E8060 -> 0x800E8070
void Math::Matrix43::SetPos() {
}
// signature: Math::Matrix43::MakeScale(float, float, float)
// Range: 0x800E7F40 -> 0x800E8054
void Math::Matrix43::MakeScale() {
    // References
    // -> class Vector4 vec4OneZ;
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4OneX;
}
// signature: Math::Matrix43::MakeScale(const Math::Vector &)
// Range: 0x8024BAA4 -> 0x8024BBC4
void Math::Matrix43::MakeScale() {
    // References
    // -> class Vector4 vec4OneZ;
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4OneX;
}
// signature: Math::Matrix43::MakeEuler(const Math::Vector &)
// Range: 0x801C8350 -> 0x801C83A8
void Math::Matrix43::MakeEuler(class Matrix43 * this /* r31 */) {
    // References
    // -> class Vector4 vec4Zero;
}
// signature: Math::Invert(Math::Matrix43 &, const Math::Matrix43 &, Math::HintOrthogonalEnum)
// Range: 0x8025B8AC -> 0x8025BB9C
void Math::Invert(class Matrix43 * o /* r31 */, class Matrix43 * a /* r30 */) {
    // Local variables
    class Vector rscale; // r1+0x28
    class Vector ipos; // r1+0x18

    // References
    // -> static class Matrix43 _matZero;
}
// signature: Math::Invert(Math::Matrix43 &, const Math::Matrix43 &, Math::HintOrthonormalEnum)
// Range: 0x80269F4C -> 0x8026A2A4
void Math::Invert(class Matrix43 * o /* r30 */, class Matrix43 * a /* r31 */) {
    {
        // Range: 0x80269FA0 -> 0x8026A074
        // Local variables
        class Vector ipos; // r1+0x98
    }
    {
        // Range: 0x8026A074 -> 0x8026A24C
        // Local variables
        class Vector pos; // r1+0x88
    }

    // References
    // -> static class Matrix43 _matIdentity;
}
// signature: Math::Mul(Math::Matrix33 &, Math::MatrixOpScaleEnum, const Math::Matrix33 &, const Math::Vector &)
// Range: 0x80271200 -> 0x802713A8
void Math::Mul() {
    // Local variables
    class Matrix33 am; // r1+0x8

    // References
    // -> static class Matrix43 _matZero;
}
// signature: Math::Mul(Math::Matrix43 &, const Math::Matrix43 &, Math::MatrixOpTranslateEnum, const Math::Vector &)
// Range: 0x8026CC08 -> 0x8026CCC0
void Math::Mul() {
    // Local variables
    class Matrix43 bm; // r1+0x8

    // References
    // -> static class Matrix43 _matIdentity;
}
// signature: Math::Mul(Math::Matrix43 &, const Math::Matrix43 &, Math::MatrixOpQuaternionEnum, const Math::Quaternion &)
// Range: 0x8024BBC4 -> 0x8024BCC0
void Math::Mul() {
    // Local variables
    class Matrix43 bm; // r1+0x8

    // References
    // -> class Vector4 vec4Zero;
}
// signature: Math::Mul(Math::Matrix43 &, Math::MatrixOpScaleEnum, const Math::Matrix43 &, const Math::Vector &)
// Range: 0x8027103C -> 0x802711A0
void Math::Mul(class Matrix43 * o /* r0 */) {
    // Local variables
    class Matrix43 am; // r1+0x38

    // References
    // -> class Vector4 vec4OneX;
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4OneZ;
}
