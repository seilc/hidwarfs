/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xVec3.h
*/
// signature: xVec3::assign(float, float, float)
// Range: 0x800067E0 -> 0x800067F0
class xVec3 * xVec3::assign() {
}
// signature: xVec3::assign(float)
// Range: 0x80024EF0 -> 0x80024F00
class xVec3 * xVec3::assign() {
}
// signature: xVec3::operator+=(const xVec3 &)
// Range: 0x8000BC50 -> 0x8000BC84
class xVec3 * xVec3::operator+=() {
}
// signature: xVec3::operator-=(const xVec3 &)
// Range: 0x80023970 -> 0x800239A4
class xVec3 * xVec3::operator-=() {
}
// signature: xVec3::operator*=(float)
// Range: 0x800093A0 -> 0x800093C8
class xVec3 * xVec3::operator*=() {
}
// signature: xVec3::operator/=(float)
// Range: 0x80022BB0 -> 0x80022BE4
class xVec3 * xVec3::operator/=() {
    // Local variables
    float i; // f4
}
// signature: xVec3::operator==(const xVec3 &) const
// Range: 0x8018B500 -> 0x8018B540
bool xVec3::operator==() const {
}
// signature: xVec3::operator=(float)
// Range: 0x80038CF0 -> 0x80038D00
class xVec3 * xVec3::operator=() {
}
// signature: xVec3::cross(const xVec3 &, const xVec3 &)
// Range: 0x80009260 -> 0x800092A0
class xVec3 * xVec3::cross() {
}
// signature: xVec3::dot(const xVec3 &) const
// Range: 0x800194B0 -> 0x800194D8
float xVec3::dot() const {
}
// Range: 0x80006900 -> 0x800069B4
float xVec3::length() const {
}
// Range: 0x80006A70 -> 0x80006A8C
float xVec3::length2() const {
}
// Range: 0x80023940 -> 0x80023968
class xVec3 * xVec3::negate() {
}
// Range: 0x800092A0 -> 0x80009394
float xVec3::normalize(class xVec3 * this /* r30 */) {
    // Local variables
    float len2; // f0
    float len; // f0
}
// Range: 0x8000A100 -> 0x8000A278
void v3normalize(float * len /* r28 */, class xVec3 * o /* r29 */, class xVec3 * v /* r30 */) {
    // Local variables
    float len2; // f29

    {
        // Range: 0x8000A1C4 -> 0x8000A240
        // Local variables
        float len_inv; // f1
    }
}
// Range: 0x80009FA0 -> 0x8000A100
float xVec3Normalize(class xVec3 * o /* r29 */, class xVec3 * v /* r30 */) {
}
// signature: xVec3::AddScale(const xVec3 &, const xVec3 &, float)
// Range: 0x800897E0 -> 0x80089814
void xVec3::AddScale() {
}
// signature: xVec3::AddScale(const xVec3 &, float)
// Range: 0x80025440 -> 0x80025474
void xVec3::AddScale() {
}
// signature: xVec3::Sub(const xVec3 &, const xVec3 &)
// Range: 0x80009220 -> 0x80009254
void xVec3::Sub() {
}
// signature: xVec3::Add(const xVec3 &, const xVec3 &)
// Range: 0x800239F0 -> 0x80023A24
void xVec3::Add() {
}
// signature: xVec3::Add(const xVec3 &)
// Range: 0x80167150 -> 0x80167184
void xVec3::Add() {
}
// signature: xVec3::Scale(float)
// Range: 0x8000BC90 -> 0x8000BCB8
void xVec3::Scale() {
}
// signature: xVec3::Scale(const xVec3 &, float)
// Range: 0x80023A30 -> 0x80023A58
void xVec3::Scale() {
}
// signature: xVec3::Distance(const xVec3 &) const
// Range: 0x80097C70 -> 0x80097D48
float xVec3::Distance() const {
    // Local variables
    class xVec3 diff; // r1+0x8
}
// signature: xVec3::DistanceXZ(const xVec3 &) const
// Range: 0x800D4720 -> 0x800D47E8
float xVec3::DistanceXZ() const {
    // Local variables
    class xVec3 diff; // r1+0x8
}
// Range: 0x80085BE0 -> 0x80085C08
void xVec3::Negate() {
}
// signature: xVec3::Lerp(const xVec3 &, const xVec3 &, float)
// Range: 0x800239B0 -> 0x800239F0
void xVec3::Lerp() {
}
// Range: 0x80023830 -> 0x80023938
float xVec3::NormalizeSafe(class xVec3 * this /* r30 */) {
    // Local variables
    float len_squ; // f0
}
// signature: operator+(const xVec3 &, const xVec3 &)
// Range: 0x800911B0 -> 0x80091204
class xVec3 operator+() {
}
// signature: operator-(const xVec3 &, const xVec3 &)
// Range: 0x80091D80 -> 0x80091DD4
class xVec3 operator-() {
}
// signature: operator*(const xVec3 &, float)
// Range: 0x80091210 -> 0x80091258
class xVec3 operator*() {
}
