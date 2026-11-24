/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xVec3.h
*/
// signature: xVec3::assign(float)
// Range: 0x80056E00 -> 0x80056E10
class xVec3 & xVec3::assign() {
}
// signature: xVec3::operator+=(const xVec3 &)
// Range: 0x800205D0 -> 0x80020604
class xVec3 & xVec3::operator+=() {
}
// signature: xVec3::operator+=(float)
// Range: 0x800B0570 -> 0x800B0598
class xVec3 & xVec3::operator+=() {
}
// signature: xVec3::operator-=(const xVec3 &)
// Range: 0x80021460 -> 0x80021494
class xVec3 & xVec3::operator-=() {
}
// signature: xVec3::operator*=(float)
// Range: 0x8000C4F0 -> 0x8000C518
class xVec3 & xVec3::operator*=() {
}
// signature: xVec3::operator/=(float)
// Range: 0x800206E0 -> 0x80020714
class xVec3 & xVec3::operator/=() {
    // Local variables
    float i; // f4
}
// signature: xVec3::operator==(const xVec3 &) const
// Range: 0x8005E6F0 -> 0x8005E730
bool xVec3::operator==() const {
}
// signature: xVec3::operator=(float)
// Range: 0x8002BDB0 -> 0x8002BDC0
class xVec3 & xVec3::operator=() {
}
// signature: xVec3::operator=(const Math::Vector &)
// Range: 0x800BC550 -> 0x800BC56C
class xVec3 & xVec3::operator=() {
}
// signature: xVec3::cross(const xVec3 &, const xVec3 &)
// Range: 0x8000C450 -> 0x8000C490
class xVec3 & xVec3::cross() {
}
// signature: xVec3::cross_xpos(const xVec3 &)
// Range: 0x80022050 -> 0x80022074
void xVec3::cross_xpos() {
}
// signature: xVec3::cross_ypos(const xVec3 &)
// Range: 0x80022020 -> 0x80022044
void xVec3::cross_ypos() {
}
// signature: xVec3::dotXZ(const xVec3 &) const
// Range: 0x80052A30 -> 0x80052A4C
float xVec3::dotXZ() const {
}
// Range: 0x8000BE20 -> 0x8000BE3C
float xVec3::length2() const {
}
// Range: 0x80092250 -> 0x8009228C
float xVec3::lengthXZ() const {
}
// Range: 0x80092290 -> 0x800922A4
float xVec3::length2XZ() const {
}
// Range: 0x80021430 -> 0x80021458
class xVec3 & xVec3::negate() {
}
// Range: 0x8000C490 -> 0x8000C4F0
float xVec3::normalize(class xVec3 * this /* r31 */) {
    // Local variables
    float len2; // f0
    float len; // f31
}
// Range: 0x80028900 -> 0x80028968
void xVec3::normalizeFast() {
    // Local variables
    float norm_eps; // f0
    float * vec; // r0
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
// Range: 0x80023520 -> 0x800235AC
float xVec3::safe_normalize(class xVec3 * this /* r30 */, class xVec3 & safety /* r31 */) {
    // Local variables
    float len; // f31
}
// signature: v3length(xVec3 *)
// Range: 0x80022100 -> 0x80022150
float v3length() {
}
// signature: v3dist2(float &, xVec3 *, xVec3 *)
// Range: 0x800367D0 -> 0x80036808
void v3dist2() {
    // Local variables
    float dx__; // f3
    float dy__; // f4
    float dz__; // f1
}
// Range: 0x8000C5D0 -> 0x8000C6E0
void v3normalize(float & len /* r28 */, class xVec3 * o /* r29 */, class xVec3 * v /* r30 */) {
    // Local variables
    float len2; // f31

    {
        // Range: 0x8000C680 -> 0x8000C6C0
        // Local variables
        float len_inv; // f1
    }
}
// signature: v3quantize(xVec3 *, xVec3 *, float)
// Range: 0x80110AB0 -> 0x80110C6C
void v3quantize() {
    // Local variables
    float inv_t; // f0
}
// signature: v3add(xVec3 *, xVec3 *, xVec3 *)
// Range: 0x8000BDE0 -> 0x8000BE14
void v3add() {
}
// signature: v3sub(xVec3 *, xVec3 *, xVec3 *)
// Range: 0x8001E5B0 -> 0x8001E5E4
void v3sub() {
}
// signature: v3lerp(xVec3 *, xVec3 *, xVec3 *, float)
// Range: 0x8002EAE0 -> 0x8002EB2C
void v3lerp() {
}
// signature: v3scale(xVec3 *, const xVec3 *, const xVec3 *)
// Range: 0x800B3510 -> 0x800B3544
void v3scale() {
}
// signature: v3cross(xVec3 *, xVec3 *, xVec3 *)
// Range: 0x80021FC0 -> 0x80022018
void v3cross() {
}
// signature: v3addto(xVec3 *, xVec3 *)
// Range: 0x80028640 -> 0x80028674
void v3addto() {
}
// signature: v3maddto(xVec3 *, xVec3 *, float)
// Range: 0x80024F50 -> 0x80024F84
void v3maddto() {
}
// Range: 0x8001E9A0 -> 0x8001EA8C
void v3normalizexz(float & len /* r28 */, class xVec3 * o /* r29 */, class xVec3 * v /* r30 */) {
    // Local variables
    float len2; // f31

    {
        // Range: 0x8001EA38 -> 0x8001EA6C
        // Local variables
        float len_inv; // f2
    }
}
// Range: 0x80192040 -> 0x80192138
float xVec3Normalize(class xVec3 * o /* r29 */, class xVec3 * v /* r30 */) {
    // Local variables
    float len; // f1
}
// Range: 0x800E95E0 -> 0x800E9664
class xVec3 & xVec3::rotateY(class xVec3 * this /* r30 */, float & fRadians /* r31 */) {
    // Local variables
    float fSin; // f0
    float fCos; // f0
    float fTemp10; // f0
    float fTemp20; // f3
}
// Range: 0x80086740 -> 0x800867D0
class xVec3 & xVec3::receiveRotationY(class xVec3 * this /* r29 */, class xVec3 & rV /* r30 */, float & fRadians /* r31 */) {
    // Local variables
    float fSin; // f0
    float fCos; // f0
}
// signature: xVec3::AddScale(const xVec3 &, const xVec3 &, float)
// Range: 0x80021F80 -> 0x80021FB4
void xVec3::AddScale() {
}
// signature: xVec3::AddScale(const xVec3 &, float)
// Range: 0x800220C0 -> 0x800220F4
void xVec3::AddScale() {
}
// signature: xVec3::Sub(const xVec3 &, const xVec3 &)
// Range: 0x8000C410 -> 0x8000C444
void xVec3::Sub() {
}
// signature: xVec3::Add(const xVec3 &, const xVec3 &)
// Range: 0x800214E0 -> 0x80021514
void xVec3::Add() {
}
// signature: xVec3::Add(float, float, float)
// Range: 0x800C3750 -> 0x800C3778
void xVec3::Add() {
}
// signature: xVec3::Scale(const xVec3 &, float)
// Range: 0x80021520 -> 0x80021548
void xVec3::Scale() {
}
// signature: xVec3::ScaleComponents(const xVec3 &)
// Range: 0x800BF480 -> 0x800BF4B4
void xVec3::ScaleComponents() {
}
// signature: xVec3::Distance(const xVec3 &) const
// Range: 0x8008C6C0 -> 0x8008C70C
float xVec3::Distance() const {
    // Local variables
    class xVec3 diff; // r1+0x8
}
// signature: xVec3::DistanceXZ(const xVec3 &) const
// Range: 0x800CF940 -> 0x800CF9B4
float xVec3::DistanceXZ(class xVec3 * this /* r6 */) const {
    // Local variables
    class xVec3 diff; // r1+0x8
}
// signature: xVec3::Distance2XZ(const xVec3 &) const
// Range: 0x8003C1C0 -> 0x8003C218
float xVec3::Distance2XZ(class xVec3 * this /* r6 */) const {
    // Local variables
    class xVec3 diff; // r1+0x8
}
// signature: xVec3::Lerp(const xVec3 &, const xVec3 &, float)
// Range: 0x800214A0 -> 0x800214E0
void xVec3::Lerp() {
}
// Range: 0x800213B0 -> 0x8002142C
float xVec3::NormalizeSafe(class xVec3 * this /* r31 */) {
    // Local variables
    float len_squ; // f0
}
// signature: ConstructxVec3(float, float, float)
// Range: 0x800253F0 -> 0x80025420
class xVec3 ConstructxVec3() {
    // Local variables
    class xVec3 tmp; // r1+0x8
}
// signature: operator+(const xVec3 &, const xVec3 &)
// Range: 0x80025420 -> 0x80025448
class xVec3 operator+() {
}
// signature: operator-(const xVec3 &, const xVec3 &)
// Range: 0x80025450 -> 0x80025478
class xVec3 operator-() {
}
// signature: operator*(const xVec3 &, float)
// Range: 0x800253D0 -> 0x800253F0
class xVec3 operator*(float s /* f4 */) {
}
