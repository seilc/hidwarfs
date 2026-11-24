/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xMath3.h
*/
// signature: xPlane::BestFit(const xVec3 *, int)
// Range: 0x80229AD0 -> 0x80229DE8
void xPlane::BestFit(class xPlane * this /* r29 */, int count /* r30 */) {
    // Local variables
    class xVec3 * prevPoint; // r9
    class xVec3 pointsSum; // r1+0x8

    {
        // Range: 0x80229B60 -> 0x80229CEC
        // Local variables
        int i; // r0
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: xMat3x3Copy(xMat3x3 *, const xMat3x3 *)
// Range: 0x80030CE0 -> 0x80030D64
void xMat3x3Copy() {
}
// Range: 0x80009C80 -> 0x80009FA0
void xMat3x3Normalize(class xMat3x3 * o /* r29 */, class xMat3x3 * m /* r30 */) {
}
// signature: xMat3x3Identity(xMat3x3 *)
// Range: 0x80031980 -> 0x800319E8
void xMat3x3Identity() {
    // References
    // -> class xMat4x3 g_I3;
}
// signature: xMat3x3LookVec5(xMat3x3 &, const xVec3 &, const xVec3 &)
// Range: 0x801F54D0 -> 0x801F54E8
float xMat3x3LookVec5(class xVec3 * at /* r6 */) {
}
// signature: xMat3x3Rot(xMat3x3 *, const xVec3 *, float)
// Range: 0x80022BF0 -> 0x80022C04
void xMat3x3Rot() {
}
// signature: xMat3x3LMulVec(xVec3 *, const xMat3x3 *, const xVec3 *)
// Range: 0x80164290 -> 0x801642F4
void xMat3x3LMulVec() {
    // Local variables
    float x; // f0
    float y; // f0
    float z; // f0
}
// signature: xMat3x3RMulVec(xVec3 *, const xMat3x3 *, const xVec3 *)
// Range: 0x80006890 -> 0x800068F4
static void xMat3x3RMulVec() {
    // Local variables
    float x; // f5
    float y; // f2
    float z; // f0
}
// signature: xMat3x3RMulVec(xVec3 *, const xMat3x3 *, const xVec3 *)
// Range: 0x80163180 -> 0x801631E4
static void xMat3x3RMulVec() {
    // Local variables
    float x; // f5
    float y; // f2
    float z; // f0
}
// signature: xMat3x3MulScale(xMat3x3 *, const xMat3x3 *, xVec3 *)
// Range: 0x80082760 -> 0x800827DC
void xMat3x3MulScale() {
}
// signature: xMat4x3Init(xMat4x3 *, const xVec3 *, const xVec3 *, const xVec3 *, const xVec3 *)
// Range: 0x801668C0 -> 0x80166910
void xMat4x3Init(class xMat4x3 * m /* r30 */, class xVec3 * _pos /* r31 */) {
}
// signature: xMat4x3Copy(xMat4x3 *, const xMat4x3 *)
// Range: 0x8000BEB0 -> 0x8000BF44
void xMat4x3Copy() {
}
// signature: xMat4x3ToNGMatrix(Math::Matrix43 *, const xMat4x3 *)
// Range: 0x800146E0 -> 0x80014744
void xMat4x3ToNGMatrix() {
}
// signature: xMat4x3FromNGMatrix(xMat4x3 *, const Math::Matrix43 *)
// Range: 0x8001AF90 -> 0x8001AFF4
void xMat4x3FromNGMatrix() {
}
// signature: xMat4x3ScaleC(xMat4x3 *, float, float, float)
// Range: 0x800E3410 -> 0x800E345C
void xMat4x3ScaleC(class xMat4x3 * m /* r31 */) {
    // References
    // -> class xVec3 g_O3;
}
// signature: xMat4x3Invert(xMat4x3 *, const xMat4x3 *)
// Range: 0x80006570 -> 0x8000673C
void xMat4x3Invert() {
    // Local variables
    float det; // f1
    float normalize; // f0
}
// signature: xMat4x3ToWorld(xVec3 *, const xMat4x3 *, const xVec3 *)
// Range: 0x80006810 -> 0x8000688C
void xMat4x3ToWorld() {
}
// signature: xMat4x3ToLocal(xVec3 *, const xMat4x3 *, const xVec3 *)
// Range: 0x80019360 -> 0x80019424
void xMat4x3ToLocal() {
}
// signature: xQuatEquals(const xQuat *, const xQuat *)
// Range: 0x80229DF0 -> 0x80229EA0
unsigned int xQuatEquals() {
}
