/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Math\Matrix.h
*/
static class Matrix43 _matZero; // size: 0x30, address: 0x80805D08
static class Matrix43 _matZero; // size: 0x30, address: 0x808181F8
static class Matrix43 _matZero; // size: 0x30, address: 0x8081D778
static class Matrix43 _matZero; // size: 0x30, address: 0x80823A38
static class Matrix43 _matZero; // size: 0x30, address: 0x8082CE78
static class Matrix43 _matZero; // size: 0x30, address: 0x80845AB8
static class Matrix43 _matZero; // size: 0x30, address: 0x80846268
static class Matrix43 _matZero; // size: 0x30, address: 0x8084B500
static class Matrix43 _matIdentity; // size: 0x30, address: 0x80805D38
static class Matrix43 _matIdentity; // size: 0x30, address: 0x80818228
static class Matrix43 _matIdentity; // size: 0x30, address: 0x8081D7A8
static class Matrix43 _matIdentity; // size: 0x30, address: 0x80823A68
static class Matrix43 _matIdentity; // size: 0x30, address: 0x8082CEA8
static class Matrix43 _matIdentity; // size: 0x30, address: 0x80845AE8
static class Matrix43 _matIdentity; // size: 0x30, address: 0x80846298
static class Matrix43 _matIdentity; // size: 0x30, address: 0x8084B530
int next[3]; // size: 0xC, address: 0x8079E260
int next[3]; // size: 0xC, address: 0x807C0960
// Range: 0x80158340 -> 0x8015835C
class Vector Math::Matrix33::GetLeft() const {
}
// signature: Math::Matrix33::SetLeft(float, float, float)
// Range: 0x8000CA90 -> 0x8000CAA0
void Math::Matrix33::SetLeft() {
}
// Range: 0x8000CCC0 -> 0x8000CCDC
class Vector Math::Matrix33::GetForward() const {
}
// signature: Math::Matrix33::SetForward(float, float, float)
// Range: 0x8000CAB0 -> 0x8000CAC0
void Math::Matrix33::SetForward() {
}
// Range: 0x80158360 -> 0x8015837C
class Vector Math::Matrix33::GetUp() const {
}
// signature: Math::Matrix33::SetUp(float, float, float)
// Range: 0x8000CAA0 -> 0x8000CAB0
void Math::Matrix33::SetUp() {
}
// Range: 0x802F2974 -> 0x802F2B88
float Math::Matrix33::GetMaxScale() const {
    // Local variables
    float lenSqr0; // f0
    float lenSqr1; // f0
    float lenSqr2; // f0
    float lenMax; // f0
    class Vector c0; // r1+0x78
    class Vector c1; // r1+0x68
    class Vector c2; // r1+0x58
    class Vector lenSqr; // r1+0x48
}
// signature: Math::Matrix43::Matrix43(float, float, float, float, float, float, float, float, float, float, float, float)
// Range: 0x80299ED0 -> 0x80299F14
void * Math::Matrix43::Matrix43(float z2 /* f11 */, float x3 /* f10 */, float y3 /* f9 */, float z3 /* f0 */) {
}
// signature: Math::Matrix43::Matrix43(const Math::Matrix43POD &)
// Range: 0x8029B8A0 -> 0x8029B904
void * Math::Matrix43::Matrix43() {
}
// Range: 0x80007A80 -> 0x80007A9C
class Vector Math::Matrix43::GetPos() const {
}
// signature: Math::Matrix43::SetPos(const Math::Vector &)
// Range: 0x80007AE0 -> 0x80007AFC
void Math::Matrix43::SetPos() {
}
// signature: Math::Matrix43::SetPos(float, float, float)
// Range: 0x8000CAC0 -> 0x8000CAD0
void Math::Matrix43::SetPos() {
}
// signature: Math::Matrix43::MakeScale(float, float, float)
// Range: 0x8001A9C0 -> 0x8001AAD4
void Math::Matrix43::MakeScale() {
    // References
    // -> class Vector4 vec4OneZ;
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4OneX;
}
// signature: Math::Matrix43::MakeScale(const Math::Vector &)
// Range: 0x802E523C -> 0x802E535C
void Math::Matrix43::MakeScale() {
    // References
    // -> class Vector4 vec4OneZ;
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4OneX;
}
// signature: Math::Matrix43::MakeEuler(const Math::Vector &)
// Range: 0x80269870 -> 0x802698C8
void Math::Matrix43::MakeEuler(class Matrix43 * this /* r31 */) {
    // References
    // -> class Vector4 vec4Zero;
}
// signature: Math::Matrix43::Invert(Math::HintOrthogonalEnum)
// Range: 0x80007530 -> 0x80007798
void Math::Matrix43::Invert(class Matrix43 * this /* r31 */) {
    // References
    // -> static class Matrix43 _matZero;
}
// signature: Math::Matrix43::Invert(Math::HintOrthonormalEnum)
// Range: 0x80007B10 -> 0x80007E18
void Math::Matrix43::Invert(class Matrix43 * this /* r31 */) {
    // References
    // -> static class Matrix43 _matIdentity;
}
// signature: Math::Invert(Math::Matrix43 &, const Math::Matrix43 &, Math::HintOrthogonalEnum)
// Range: 0x800077A0 -> 0x80007A80
void Math::Invert(class Matrix43 & o /* r31 */, class Matrix43 & a /* r30 */) {
    // Local variables
    class Vector rscale; // r1+0x28
    class Vector ipos; // r1+0x18

    // References
    // -> static class Matrix43 _matZero;
}
// signature: Math::Mul(Math::Matrix33 &, Math::MatrixOpScaleEnum, const Math::Matrix33 &, const Math::Vector &)
// Range: 0x800520A0 -> 0x80052248
void Math::Mul() {
    // Local variables
    class Matrix33 am; // r1+0x8

    // References
    // -> static class Matrix43 _matZero;
}
// signature: Math::Mul(Math::Matrix43 &, const Math::Matrix43 &, Math::MatrixOpTranslateEnum, const Math::Vector &)
// Range: 0x8030192C -> 0x803019E4
void Math::Mul() {
    // Local variables
    class Matrix43 bm; // r1+0x8

    // References
    // -> static class Matrix43 _matIdentity;
}
// signature: Math::Mul(Math::Matrix43 &, const Math::Matrix43 &, Math::MatrixOpQuaternionEnum, const Math::Quaternion &)
// Range: 0x8001AAE0 -> 0x8001ABDC
void Math::Mul() {
    // Local variables
    class Matrix43 bm; // r1+0x8

    // References
    // -> class Vector4 vec4Zero;
}
// signature: Math::Mul(Math::Matrix43 &, const Math::Matrix43 &, Math::MatrixOpEulerEnum, float, float, float)
// Range: 0x802F66C4 -> 0x802F6730
void Math::Mul(class Matrix43 & o /* r30 */, class Matrix43 & a /* r31 */) {
    // Local variables
    class Matrix43 bm; // r1+0x8

    // References
    // -> class Vector4 vec4Zero;
}
// signature: Math::Mul(Math::Matrix43 &, const Math::Matrix43 &, Math::MatrixOpEulerEnum, const Math::Vector &)
// Range: 0x802B1690 -> 0x802B1708
void Math::Mul(class Matrix43 & o /* r30 */, class Matrix43 & a /* r31 */) {
    // Local variables
    class Matrix43 bm; // r1+0x8

    // References
    // -> class Vector4 vec4Zero;
}
// signature: Math::Mul(Math::Matrix43 &, const Math::Matrix43 &, Math::MatrixOpLookForwardEnum, const Math::Vector &, int, const Math::Vector &)
// Range: 0x802F6800 -> 0x802F687C
void Math::Mul(class Matrix43 & o /* r30 */, class Matrix43 & a /* r31 */) {
    // Local variables
    class Matrix43 bm; // r1+0x8

    // References
    // -> class Vector4 vec4Zero;
}
// signature: Math::Mul(Math::Matrix43 &, const Math::Matrix43 &, Math::MatrixOpLookForwardEnum, const Math::Vector &)
// Range: 0x802F687C -> 0x802F68FC
void Math::Mul(class Matrix43 & o /* r30 */, class Matrix43 & a /* r31 */) {
    // Local variables
    class Matrix43 bm; // r1+0x8

    // References
    // -> class Vector4 vec4Zero;
    // -> class Vector4 vec4OneY;
}
// signature: Math::Mul(Math::Matrix43 &, Math::MatrixOpScaleEnum, const Math::Matrix43 &, float)
// Range: 0x802F698C -> 0x802F6AE4
void Math::Mul(class Matrix43 & o /* r0 */) {
    // Local variables
    class Matrix43 am; // r1+0x38

    // References
    // -> class Vector4 vec4OneZ;
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4OneX;
}
// signature: Math::Mul(Math::Matrix43 &, Math::MatrixOpScaleEnum, const Math::Matrix43 &, float, float, float)
// Range: 0x8001C180 -> 0x8001C1DC
void Math::Mul() {
    // Local variables
    float vxy; // f0
    float vytmp; // f0
    float vz1; // f1
    float vone; // f1
    float m0; // f2
    float m1; // f3
    float m2; // f4
    float m3; // f5
    float m4; // f6
    float m5; // f7
}
// signature: Math::Mul(Math::Matrix43 &, Math::MatrixOpScaleEnum, const Math::Matrix43 &, const Math::Vector &)
// Range: 0x8000BC00 -> 0x8000BC54
void Math::Mul() {
    // Local variables
    float vxy; // f0
    float vz1; // f1
    float m0; // f2
    float m1; // f3
    float m2; // f4
    float m3; // f0
    float m4; // f5
    float m5; // f6
}
