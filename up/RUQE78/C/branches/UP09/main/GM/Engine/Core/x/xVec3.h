/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xVec3.h
*/
// signature: xVec3::assign(float)
// Range: 0x80044200 -> 0x80044210
class xVec3 & xVec3::assign() {
}
// signature: xVec3::operator+=(const xVec3 &)
// Range: 0x80041100 -> 0x80041134
class xVec3 & xVec3::operator+=() {
}
// signature: xVec3::operator-=(const xVec3 &)
// Range: 0x80043750 -> 0x80043784
class xVec3 & xVec3::operator-=() {
}
// signature: xVec3::operator*=(float)
// Range: 0x80010310 -> 0x80010338
class xVec3 & xVec3::operator*=() {
}
// signature: xVec3::operator/=(float)
// Range: 0x80042970 -> 0x800429A4
class xVec3 & xVec3::operator/=() {
    // Local variables
    float i; // f4
}
// signature: xVec3::operator==(const xVec3 &) const
// Range: 0x8021EC60 -> 0x8021ECA0
bool xVec3::operator==() const {
}
// signature: xVec3::operator=(float)
// Range: 0x80054E40 -> 0x80054E50
class xVec3 & xVec3::operator=() {
}
// signature: xVec3::cross(const xVec3 &, const xVec3 &)
// Range: 0x80010240 -> 0x80010280
class xVec3 & xVec3::cross() {
}
// signature: xVec3::cross_ypos(const xVec3 &)
// Range: 0x80044210 -> 0x80044234
void xVec3::cross_ypos() {
}
// signature: xVec3::cross_yneg(const xVec3 &)
// Range: 0x80052070 -> 0x80052094
void xVec3::cross_yneg() {
}
// signature: xVec3::dot(const xVec3 &) const
// Range: 0x800429B0 -> 0x800429D8
float xVec3::dot() const {
}
// signature: xVec3::dotXZ(const xVec3 &) const
// Range: 0x8009A370 -> 0x8009A38C
float xVec3::dotXZ() const {
}
// Range: 0x8000DC30 -> 0x8000DC94
float xVec3::length() const {
}
// Range: 0x8000DCF0 -> 0x8000DD0C
float xVec3::length2() const {
}
// Range: 0x802C1E90 -> 0x802C1EA4
float xVec3::length2XZ() const {
}
// Range: 0x80043720 -> 0x80043748
class xVec3 & xVec3::negate() {
}
// Range: 0x80010280 -> 0x80010310
float xVec3::normalize() {
    // Local variables
    float len2; // f0
    float len; // f0
}
// Range: 0x800DFBF0 -> 0x800DFC58
void xVec3::normalizeFast() {
    // Local variables
    float norm_eps; // f0
    float rx; // f1
    float ry; // f2
    float rz; // f3
    float len2; // f4
    float c_half; // f5
    float c_three; // f6
    float rsqrt; // f0
    float nwork0; // f7
    float nwork1; // f0
}
// signature: v3normalize(float &, xVec3 *, xVec3 *)
// Range: 0x80010C90 -> 0x80010D8C
void v3normalize() {
    // Local variables
    float len2; // f5

    {
        // Range: 0x80010D14 -> 0x80010D88
        // Local variables
        float len_inv; // f1
    }
}
// signature: xVec3Normalize(xVec3 *, const xVec3 *)
// Range: 0x801686B0 -> 0x801687B0
float xVec3Normalize() {
}
// signature: xVec3::AddScale(const xVec3 &, const xVec3 &, float)
// Range: 0x8009A330 -> 0x8009A364
void xVec3::AddScale() {
}
// signature: xVec3::AddScale(const xVec3 &, float)
// Range: 0x800A61F0 -> 0x800A6224
void xVec3::AddScale() {
}
// signature: xVec3::Sub(const xVec3 &, const xVec3 &)
// Range: 0x80010200 -> 0x80010234
void xVec3::Sub() {
}
// signature: xVec3::Scale(const xVec3 &, float)
// Range: 0x800437D0 -> 0x800437F8
void xVec3::Scale() {
}
// signature: xVec3::Distance(const xVec3 &) const
// Range: 0x80107A90 -> 0x80107B24
float xVec3::Distance() const {
    // Local variables
    class xVec3 diff; // r1+0x8
}
// signature: xVec3::Lerp(const xVec3 &, const xVec3 &, float)
// Range: 0x80043790 -> 0x800437D0
void xVec3::Lerp() {
}
// Range: 0x80043670 -> 0x80043714
float xVec3::NormalizeSafe() {
    // Local variables
    float len_squ; // f0
}
// signature: operator+(const xVec3 &, const xVec3 &)
// Range: 0x800A5F40 -> 0x800A5F94
class xVec3 operator+() {
}
// signature: operator-(const xVec3 &, const xVec3 &)
// Range: 0x8009A2D0 -> 0x8009A324
class xVec3 operator-() {
}
// signature: operator*(const xVec3 &, float)
// Range: 0x800A5FA0 -> 0x800A5FE8
class xVec3 operator*() {
}
