/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WADSpeed.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WADSpeed.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Math\Matrix.h
*/
static class Matrix43 _matZero; // size: 0x30, address: 0x80719908
static class Matrix43 _matZero; // size: 0x30, address: 0x8072EC88
static class Matrix43 _matZero; // size: 0x30, address: 0x807340F8
static class Matrix43 _matZero; // size: 0x30, address: 0x80753F88
static class Matrix43 _matZero; // size: 0x30, address: 0x8075B268
static class Matrix43 _matZero; // size: 0x30, address: 0x807741C8
static class Matrix43 _matZero; // size: 0x30, address: 0x80774238
static class Matrix43 _matZero; // size: 0x30, address: 0x80774A68
static class Matrix43 _matZero; // size: 0x30, address: 0x80779FA0
static class Matrix43 _matZero; // size: 0x30, address: 0x80784138
static class Matrix43 _matIdentity; // size: 0x30, address: 0x80719938
static class Matrix43 _matIdentity; // size: 0x30, address: 0x8072ECB8
static class Matrix43 _matIdentity; // size: 0x30, address: 0x80734128
static class Matrix43 _matIdentity; // size: 0x30, address: 0x80753FB8
static class Matrix43 _matIdentity; // size: 0x30, address: 0x8075B298
static class Matrix43 _matIdentity; // size: 0x30, address: 0x807741F8
static class Matrix43 _matIdentity; // size: 0x30, address: 0x80774268
static class Matrix43 _matIdentity; // size: 0x30, address: 0x80774A98
static class Matrix43 _matIdentity; // size: 0x30, address: 0x80779FD0
static class Matrix43 _matIdentity; // size: 0x30, address: 0x80784168
int next[3]; // size: 0xC, address: 0x806AFDE0
int next[3]; // size: 0xC, address: 0x806CE7D0
// Range: 0x800075C0 -> 0x800075C4
void * Math::Matrix33::Matrix33() {
}
// signature: Math::Matrix33::Matrix33(const Math::Matrix33 &)
// Range: 0x801D6A00 -> 0x801D6A30
void * Math::Matrix33::Matrix33(class Matrix33 * this /* r31 */) {
}
// signature: Math::Matrix33::Assign(float, float, float, float, float, float, float, float, float)
// Range: 0x80007940 -> 0x8000796C
void Math::Matrix33::Assign(float z2 /* f0 */) {
}
// signature: Math::Matrix33::MakeScale(const Math::Vector &)
// Range: 0x80007750 -> 0x800077CC
void Math::Matrix33::MakeScale(class Matrix33 * this /* r31 */) {
    // References
    // -> static class Matrix43 _matZero;
}
// signature: Math::Matrix33::GetRowInternal(int) const
// Range: 0x800076B0 -> 0x800076C8
class Vector Math::Matrix33::GetRowInternal() const {
}
// signature: Math::Matrix33::SetRowInternal(int, const Math::Vector &)
// Range: 0x801E9750 -> 0x801E9774
void Math::Matrix33::SetRowInternal() {
}
// signature: Math::Matrix33::SetRowInternal(int, float, float, float)
// Range: 0x8000B120 -> 0x8000B138
void Math::Matrix33::SetRowInternal() {
}
// signature: Math::Matrix33::SetInternal(int, int, float)
// Range: 0x801D1760 -> 0x801D1774
void Math::Matrix33::SetInternal() {
}
// Range: 0x801B4DB0 -> 0x801B4DE0
void * Math::Matrix43::Matrix43(class Matrix43 * this /* r31 */) {
}
// Range: 0x80051A90 -> 0x80051BF8
void * Math::Matrix43::Matrix43(class Matrix43 * this /* r31 */, float x0 /* f20 */, float y0 /* f21 */, float z0 /* f22 */, float x1 /* f23 */, float y1 /* f24 */, float z1 /* f25 */, float x2 /* f26 */, float y2 /* f27 */, float z2 /* f28 */, float x3 /* f29 */, float y3 /* f30 */, float z3 /* f31 */) {
}
// Range: 0x8017EFE0 -> 0x8017F050
void * Math::Matrix43::Matrix43(class Matrix43 * this /* r28 */, class Matrix43POD & c /* r29 */) {
}
// signature: Math::Matrix43::Assign(float, float, float, float, float, float, float, float, float, float, float, float)
// Range: 0x80008010 -> 0x8000811C
void Math::Matrix43::Assign(class Matrix43 * this /* r31 */, float y0 /* f24 */, float z0 /* f25 */, float y1 /* f26 */, float z1 /* f27 */, float y2 /* f28 */, float z2 /* f29 */, float x3 /* f0 */, float y3 /* f30 */, float z3 /* f31 */) {
}
// Range: 0x8019F550 -> 0x8019F560
class Vector Math::Matrix43::GetPos() const {
}
// signature: Math::Matrix43::SetPos(const Math::Vector &)
// Range: 0x80007970 -> 0x8000798C
void Math::Matrix43::SetPos() {
}
// signature: Math::Matrix43::SetPos(float, float, float)
// Range: 0x800D0C10 -> 0x800D0C20
void Math::Matrix43::SetPos() {
}
// Range: 0x801C1C90 -> 0x801C1D5C
void Math::Matrix43::MakeScale(class Matrix43 * this /* r31 */, float s /* f31 */) {
    // References
    // -> class Vector4 vec4OneZ;
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4OneX;
}
// signature: Math::Matrix43::MakeScale(float, float, float)
// Range: 0x80011C90 -> 0x80011D68
void Math::Matrix43::MakeScale(class Matrix43 * this /* r31 */, float y /* f30 */, float z /* f31 */) {
    // References
    // -> class Vector4 vec4OneZ;
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4OneX;
}
// signature: Math::Matrix43::MakeScale(const Math::Vector &)
// Range: 0x801C0B80 -> 0x801C0B90
void Math::Matrix43::MakeScale() {
}
// signature: Math::Matrix43::MakeEuler(const Math::Vector &)
// Range: 0x8017E920 -> 0x8017E968
void Math::Matrix43::MakeEuler(class Matrix43 * this /* r31 */) {
    // References
    // -> class Vector4 vec4Zero;
}
// signature: Math::Matrix43::MakeTranslate(float, float, float)
// Range: 0x801BC360 -> 0x801BC3B4
void Math::Matrix43::MakeTranslate() {
    // References
    // -> static class Matrix43 _matIdentity;
}
// signature: Math::Matrix43::Invert(Math::HintOrthonormalEnum)
// Range: 0x800079D0 -> 0x80007AE8
void Math::Matrix43::Invert(class Matrix43 * this /* r31 */) {
    // References
    // -> static class Matrix43 _matIdentity;
}
// Range: 0x801B4F50 -> 0x801B4FE4
bool Math::Matrix43::IsIdentity() const {
    // Local variables
    unsigned long long * test64; // r0
    unsigned int * test32; // r0
}
// signature: Math::Invert(Math::Matrix43 &, const Math::Matrix43 &, Math::HintOrthogonalEnum)
// Range: 0x80007610 -> 0x800076AC
void Math::Invert(class Matrix43 & o /* r30 */, class Matrix43 & a /* r31 */) {
    // Local variables
    class Vector rscale; // r1+0x28
    class Vector ipos; // r1+0x18
}
// signature: Math::Mul(Math::Matrix43 &, const Math::Matrix43 &, Math::MatrixOpQuaternionEnum, const Math::Quaternion &)
// Range: 0x801C0B90 -> 0x801C0BE4
void Math::Mul(class Matrix43 & o /* r29 */, class Matrix43 & a /* r30 */, class Quaternion & q /* r31 */) {
    // Local variables
    class Matrix43 bm; // r1+0x8
}
// signature: Math::Mul(Math::Matrix43 &, Math::MatrixOpScaleEnum, const Math::Matrix43 &, float)
// Range: 0x801D3D40 -> 0x801D3E2C
void Math::Mul(class Matrix43 & o /* r30 */, class Matrix43 & b /* r31 */, float s /* f31 */) {
    // Local variables
    class Matrix43 am; // r1+0x38

    // References
    // -> class Vector4 vec4OneZ;
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4OneX;
}
// signature: Math::Mul(Math::Matrix43 &, Math::MatrixOpScaleEnum, const Math::Matrix43 &, const Math::Vector &)
// Range: 0x8000A9B0 -> 0x8000AA04
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
