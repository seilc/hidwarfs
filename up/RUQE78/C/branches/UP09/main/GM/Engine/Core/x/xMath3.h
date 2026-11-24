/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xMath3.h
*/
// signature: xMat3x3Normalize(xMat3x3 *, const xMat3x3 *)
// Range: 0x800109F0 -> 0x80010C90
void xMat3x3Normalize() {
}
// signature: xMat3x3Identity(xMat3x3 *)
// Range: 0x801F6940 -> 0x801F69A8
void xMat3x3Identity() {
    // References
    // -> class xMat4x3 g_I3;
}
// signature: xMat3x3LookVec3(xMat3x3 &, const xVec3 &)
// Range: 0x8016E0C0 -> 0x8016E344
float xMat3x3LookVec3() {
    // Local variables
    float mag; // f1
    float ax; // f0
    float ay; // f0
    float az; // f0

    // References
    // -> class xMat4x3 g_I3;
}
// signature: xMat3x3LookVec5(xMat3x3 &, const xVec3 &, const xVec3 &)
// Range: 0x8009A190 -> 0x8009A1A8
float xMat3x3LookVec5(class xVec3 & at /* r6 */) {
}
// signature: xMat3x3LookAt(xMat3x3 *, const xVec3 *, const xVec3 *)
// Range: 0x80169C60 -> 0x80169CB4
float xMat3x3LookAt() {
    // Local variables
    class xVec3 at; // r1+0x8
}
// signature: xMat3x3Rot(xMat3x3 *, const xVec3 *, float)
// Range: 0x800429E0 -> 0x800429F4
void xMat3x3Rot() {
}
// signature: xMat3x3LMulVec(xVec3 *, const xMat3x3 *, const xVec3 *)
// Range: 0x8015E750 -> 0x8015E7B4
void xMat3x3LMulVec() {
    // Local variables
    float x; // f0
    float y; // f0
    float z; // f0
}
// signature: xMat3x3RMulVec(xVec3 *, const xMat3x3 *, const xVec3 *)
// Range: 0x8000DBC0 -> 0x8000DC24
static void xMat3x3RMulVec() {
    // Local variables
    float x; // f5
    float y; // f2
    float z; // f0
}
// signature: xMat3x3Tolocal(xVec3 *, const xMat3x3 *, const xVec3 *)
// Range: 0x800B0140 -> 0x800B01EC
void xMat3x3Tolocal() {
    // Local variables
    float sx2; // f0
    float sy2; // f0
    float sz2; // f0
}
// signature: xMat3x3MulScaleC(xMat3x3 *, const xMat3x3 *, float, float, float)
// Range: 0x80159520 -> 0x80159590
void xMat3x3MulScaleC() {
}
// signature: xMat4x3Init(xMat4x3 *, const xVec3 *, const xVec3 *, const xVec3 *, const xVec3 *)
// Range: 0x801F3AE0 -> 0x801F3B30
void xMat4x3Init(class xMat4x3 * m /* r30 */, class xVec3 * _pos /* r31 */) {
}
// signature: xMat4x3ToNGMatrix(Math::Matrix43 *, const xMat4x3 *)
// Range: 0x800087C0 -> 0x80008824
void xMat4x3ToNGMatrix() {
}
// signature: xMat4x3FromNGMatrix(xMat4x3 *, const Math::Matrix43 *)
// Range: 0x8003BDF0 -> 0x8003BE54
void xMat4x3FromNGMatrix() {
}
// signature: xMat4x3Equals(const xMat4x3 *, const xMat4x3 *)
// Range: 0x80050CA0 -> 0x80050F10
unsigned int xMat4x3Equals() {
}
// signature: xMat4x3Invert(xMat4x3 *, const xMat4x3 *)
// Range: 0x8000D8C0 -> 0x8000DA8C
void xMat4x3Invert() {
    // Local variables
    float det; // f1
    float normalize; // f0
}
// signature: xMat4x3ToWorld(xVec3 *, const xMat4x3 *, const xVec3 *)
// Range: 0x8000DB30 -> 0x8000DBC0
void xMat4x3ToWorld() {
    // Local variables
    class xVec3 temp; // r1+0x8
}
// signature: xMat4x3ToLocal(xVec3 *, const xMat4x3 *, const xVec3 *)
// Range: 0x80042C50 -> 0x80042D14
void xMat4x3ToLocal() {
}
