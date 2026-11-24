/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xMath3.h
*/
// signature: xMat3x3Copy(xMat3x3 *, const xMat3x3 *)
// Range: 0x800291E0 -> 0x800291E4
void xMat3x3Copy() {
}
// Range: 0x8000C560 -> 0x8000C5C4
void xMat3x3Normalize(class xMat3x3 * o /* r30 */, class xMat3x3 * m /* r31 */) {
}
// Range: 0x800BDBA0 -> 0x800BDD08
float xMat3x3LookVec3(class xMat3x3 & mat /* r30 */, class xVec3 & at /* r31 */) {
    // Local variables
    float mag; // f31
    float ax; // f0
    float ay; // f0
    float az; // f0

    // References
    // -> class xMat4x3 g_I3;
}
// signature: xMat3x3LookAt(xMat3x3 *, const xVec3 *, const xVec3 *)
// Range: 0x80198600 -> 0x80198654
float xMat3x3LookAt() {
    // Local variables
    class xVec3 at; // r1+0x8
}
// signature: xMat3x3Rot(xMat3x3 *, const xVec3 *, float)
// Range: 0x80020720 -> 0x80020734
void xMat3x3Rot() {
}
// Range: 0x80020850 -> 0x800208C8
void xMat3x3LMulVec(class xVec3 * o /* r29 */, class xMat3x3 * m /* r30 */, class xVec3 * v /* r31 */) {
    // Local variables
    float x; // f0
    float y; // f0
    float z; // f0
}
// signature: xMat3x3RMulVec(xVec3 *, const xMat3x3 *, const xVec3 *)
// Range: 0x8000BD70 -> 0x8000BDD4
static void xMat3x3RMulVec() {
    // Local variables
    float x; // f5
    float y; // f2
    float z; // f0
}
// Range: 0x800B1D40 -> 0x800B1E00
void xMat3x3Tolocal(class xVec3 * o /* r29 */, class xMat3x3 * m /* r30 */, class xVec3 * v /* r31 */) {
    // Local variables
    float sx2; // f0
    float sy2; // f0
    float sz2; // f0
}
// Range: 0x8003A980 -> 0x8003AA3C
void xMat3x3MulScaleC(class xMat3x3 * o /* r30 */, class xMat3x3 * m /* r31 */, float x /* f6 */, float y /* f30 */, float z /* f31 */) {
}
// signature: xMat4x3Init(xMat4x3 *, const xVec3 *, const xVec3 *, const xVec3 *, const xVec3 *)
// Range: 0x80104AA0 -> 0x80104AEC
void xMat4x3Init(class xMat4x3 * m /* r30 */, class xVec3 * _pos /* r31 */) {
}
// signature: xMat4x3Copy(xMat4x3 *, const xMat4x3 *)
// Range: 0x80189BF0 -> 0x80189C84
void xMat4x3Copy() {
}
// signature: xMat4x3ToNGMatrix(Math::Matrix43 *, const xMat4x3 *)
// Range: 0x80007FB0 -> 0x80008010
void xMat4x3ToNGMatrix() {
}
// signature: xMat4x3FromNGMatrix(xMat4x3 *, const Math::Matrix43 *)
// Range: 0x8001D500 -> 0x8001D564
void xMat4x3FromNGMatrix() {
}
// Range: 0x80074AC0 -> 0x80074B40
void xMat4x3FromTransform(class xMat4x3 * m /* r30 */, class xTransform * t /* r31 */) {
}
// signature: xMat4x3Scale(xMat4x3 *, const xVec3 *)
// Range: 0x80110A50 -> 0x80110AA4
void xMat4x3Scale(class xMat4x3 * m /* r31 */) {
    // References
    // -> class xVec3 g_O3;
}
// Range: 0x80027160 -> 0x800271AC
void xMat4x3OrthoInv(class xMat4x3 * o /* r30 */, class xMat4x3 * m /* r31 */) {
    // Local variables
    class xVec3 tinv; // r1+0x8
}
// signature: xMat4x3Invert(xMat4x3 *, const xMat4x3 *)
// Range: 0x8000BAB0 -> 0x8000BC84
void xMat4x3Invert() {
    // Local variables
    float det; // f1
    float normalize; // f0
}
// signature: xMat4x3ToLocal(xVec3 *, const xMat4x3 *, const xVec3 *)
// Range: 0x800208D0 -> 0x80020998
void xMat4x3ToLocal(class xVec3 * o /* r30 */, class xMat4x3 * m /* r31 */) {
}
// signature: xQuatCopy(xQuat *, const xQuat *)
// Range: 0x80037F30 -> 0x80037F54
void xQuatCopy() {
}
// signature: xQuatToLookVec(const xQuat *, xVec3 *)
// Range: 0x8001DF70 -> 0x8001DFD4
void xQuatToLookVec() {
    // Local variables
    float tx; // f5
    float ty; // f6
    float tz; // f4
    float tsx; // f5
    float tsy; // f7
    float txx; // f8
    float txz; // f3
    float tyy; // f2
    float tyz; // f9
}
