/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xMath3.cpp
*/
class xVec3 g_O3; // size: 0xC, address: 0x807753D0
class xVec3 g_X3; // size: 0xC, address: 0x807753DC
class xVec3 g_Y3; // size: 0xC, address: 0x807753E8
class xVec3 g_Z3; // size: 0xC, address: 0x807753F4
class xVec3 g_NX3; // size: 0xC, address: 0x80775400
class xVec3 g_NY3; // size: 0xC, address: 0x8077540C
class xVec3 g_NZ3; // size: 0xC, address: 0x80775418
class xVec3 g_Onez; // size: 0xC, address: 0x80775424
class xMat4x3 g_I3; // size: 0x40, address: 0x80809668
class xQuat g_IQ; // size: 0x10, address: 0x80775430
static int nxt[3]; // size: 0xC, address: 0x807A2148
// signature: xLine3VecClosestPoint(const xVec3 *, const xVec3 *, const xVec3 *, xVec3 *)
// Range: 0x800662A0 -> 0x8006636C
void xLine3VecClosestPoint() {
    // Local variables
    class xVec3 p1p2; // r1+0x14
    class xVec3 p1v; // r1+0x8
    float p1p2_p1v; // f0
    float p1p2_p1p2; // f0
}
// signature: xMat3x3Init(xMat3x3 *, const xVec3 *, const xVec3 *, const xVec3 *)
// Range: 0x80066370 -> 0x800663C4
void xMat3x3Init() {
}
// signature: xMat3x3GetScale(const xMat3x3 *, xVec3 *)
// Range: 0x800663D0 -> 0x800664F0
void xMat3x3GetScale() {
}
// Range: 0x800664F0 -> 0x800666B4
void xMat3x3GetEuler(class xMat3x3 * m /* r29 */, class xVec3 * a /* r30 */) {
    // Local variables
    float pitch; // f31
    float yaw; // f30
    float roll; // f1
}
// signature: xMat4x3MoveLocalUp(xMat4x3 *, const float)
// Range: 0x800666C0 -> 0x800666F4
void xMat4x3MoveLocalUp() {
}
// signature: xMat4x3MoveLocalAt(xMat4x3 *, const float)
// Range: 0x80066700 -> 0x80066734
void xMat4x3MoveLocalAt() {
}
// signature: xMat3x3LookVec(xMat3x3 *, const xVec3 *)
// Range: 0x80066740 -> 0x80066A8C
float xMat3x3LookVec() {
    // Local variables
    float vec_len; // f1
}
// signature: xMat3x3LookVec4(xMat3x3 &, float, float, float, const xVec3 &)
// Range: 0x80066A90 -> 0x80066D70
float xMat3x3LookVec4() {
    // Local variables
    float mag2; // f7
    float mag; // f0
    float imag; // f5

    // References
    // -> class xMat4x3 g_I3;
}
// signature: xMat3x3LookVec5(xMat3x3 &, float, float, float, const xVec3 &)
// Range: 0x80066D70 -> 0x80067050
float xMat3x3LookVec5() {
    // Local variables
    float mag2; // f7
    float mag; // f0
    float imag; // f5

    // References
    // -> class xMat4x3 g_I3;
}
// signature: xMat3x3Euler(xMat3x3 *, const xVec3 *)
// Range: 0x80067050 -> 0x80067060
void xMat3x3Euler() {
}
// Range: 0x80067060 -> 0x800671A8
void xMat3x3Euler(class xMat3x3 * m /* r31 */, float yaw /* f28 */, float pitch /* f27 */, float roll /* f26 */) {
    // Local variables
    float sy; // f0
    float cy; // f0
    float sp; // f0
    float cp; // f0
    float sr; // f0
    float cr; // f0
}
// Range: 0x800671B0 -> 0x80067340
void xMat3x3RotC(class xMat3x3 * m /* r31 */, float _x /* f28 */, float _y /* f29 */, float _z /* f30 */, float t /* f27 */) {
    // Local variables
    float a; // f0
    float b; // f0
    float c; // f0

    // References
    // -> class xMat4x3 g_I3;
}
// Range: 0x80067340 -> 0x80067888
void xMat3x3GetRotC(class xMat3x3 * m /* r28 */, class xVec3 * vec_axis /* r29 */, float * t /* r30 */) {
    {
        // Range: 0x800673F4 -> 0x8006770C
        // Local variables
        bool yzPos; // r7
        bool xzPos; // r6
        bool xyPos; // r5
    }
    {
        // Range: 0x8006770C -> 0x80067868
        // Local variables
        float s; // f5
    }
}
// Range: 0x80067890 -> 0x8006793C
void xMat3x3RotX(class xMat3x3 * m /* r31 */, float t /* f30 */) {
    // Local variables
    float a; // f0
    float b; // f0

    // References
    // -> class xVec3 g_X3;
}
// Range: 0x80067940 -> 0x800679EC
void xMat3x3RotY(class xMat3x3 * m /* r31 */, float t /* f30 */) {
    // Local variables
    float a; // f0
    float b; // f0

    // References
    // -> class xVec3 g_Y3;
}
// Range: 0x800679F0 -> 0x80067A9C
void xMat3x3RotZ(class xMat3x3 * m /* r31 */, float t /* f30 */) {
    // Local variables
    float a; // f0
    float b; // f0

    // References
    // -> class xVec3 g_Z3;
}
// signature: xMat3x3ScaleC(xMat3x3 *, float, float, float)
// Range: 0x80067AA0 -> 0x80067AD8
void xMat3x3ScaleC() {
}
// Range: 0x80067AE0 -> 0x80067C38
void xMat3x3LMulRotX(class xMat3x3 * o /* r30 */, class xMat3x3 * m /* r31 */, float t /* f30 */) {
    // Local variables
    float a; // f0
    float b; // f0

    {
        // Range: 0x80067B20 -> 0x80067B8C
        // Local variables
        float temp; // f9
    }
}
// Range: 0x80067C40 -> 0x80067D98
void xMat3x3LMulRotY(class xMat3x3 * o /* r30 */, class xMat3x3 * m /* r31 */, float t /* f30 */) {
    // Local variables
    float a; // f0
    float b; // f0

    {
        // Range: 0x80067C80 -> 0x80067CEC
        // Local variables
        float temp; // f9
    }
}
// Range: 0x80067DA0 -> 0x80067EF8
void xMat3x3RMulRotY(class xMat3x3 * o /* r30 */, class xMat3x3 * m /* r31 */, float t /* f30 */) {
    // Local variables
    float a; // f0
    float b; // f0

    {
        // Range: 0x80067DE0 -> 0x80067E4C
        // Local variables
        float temp; // f9
    }
}
// signature: xMat3x3Transpose(xMat3x3 *, const xMat3x3 *)
// Range: 0x80067F00 -> 0x80067F90
void xMat3x3Transpose() {
    {
        // Range: 0x80067F08 -> 0x80067F08
        // Local variables
        float temp; // f3
    }
    {
        // Range: 0x80067F10 -> 0x80067F10
        // Local variables
        float temp; // f4
    }
    {
        // Range: 0x80067F18 -> 0x80067F18
        // Local variables
        float temp; // f5
    }
}
// signature: xMat3x3Invert(xMat3x3 *, const xMat3x3 *)
// Range: 0x80067F90 -> 0x800680D8
void xMat3x3Invert() {
    // Local variables
    float det; // f1
    float normalize; // f0
}
// signature: xMat3x3Mul(xMat3x3 *, const xMat3x3 *, const xMat3x3 *)
// Range: 0x800680E0 -> 0x800682C0
void xMat3x3Mul() {
    // Local variables
    class xMat3x3 temp; // r1+0x8
    class xMat3x3 * tp; // r6
    unsigned int usetemp; // r0
}
// signature: xMat4x3Orthonormalize(xMat4x3 *, const xMat4x3 *)
// Range: 0x800682C0 -> 0x80068608
void xMat4x3Orthonormalize() {
}
// Range: 0x80068610 -> 0x800687F0
void xMat4x3RotX(class xMat4x3 * m /* r31 */, float t /* f30 */, class xVec3 * p /* r26 */) {
    // Local variables
    class xMat4x3 temp; // r1+0x18

    // References
    // -> class xMat4x3 g_I3;
    // -> class xVec3 g_X3;
}
// Range: 0x800687F0 -> 0x800688B8
void xMat4x3Mul(class xMat4x3 * o /* r29 */, class xMat4x3 * a /* r30 */, class xMat4x3 * b /* r31 */) {
}
// signature: xQuatFromMat(xQuat *, const xMat3x3 *)
// Range: 0x800688C0 -> 0x80068B6C
void xQuatFromMat() {
    // Local variables
    float * mp; // r0
    float * qvp; // r0
    float tr; // f2
    float root; // f0

    {
        // Range: 0x80068988 -> 0x80068B58
        // Local variables
        int k; // r29
        int j; // r10
        int i; // r0
    }

    // References
    // -> class xQuat g_IQ;
    // -> static int nxt[3];
}
// signature: xQuatFromAxisAngleC(xQuat *, float, float, float, float)
// Range: 0x80068B70 -> 0x80068C78
void xQuatFromAxisAngleC(class xQuat * q /* r31 */, float x /* f27 */, float y /* f28 */, float z /* f29 */) {
    // Local variables
    float t_2; // f30
    float st_2; // f0

    // References
    // -> class xQuat g_IQ;
}
// signature: xQuatFromAxisAngle(xQuat *, const xVec3 *, float)
// Range: 0x80068C80 -> 0x80068D58
void xQuatFromAxisAngle(class xQuat * q /* r30 */, class xVec3 * a /* r31 */) {
    // Local variables
    float t_2; // f30
    float st_2; // f0

    // References
    // -> class xQuat g_IQ;
}
// signature: xQuatToMat(const xQuat *, xMat3x3 *)
// Range: 0x80068D60 -> 0x80068E10
void xQuatToMat() {
    // Local variables
    float tx; // f6
    float ty; // f7
    float tz; // f8
    float tsx; // f0
    float tsy; // f4
    float tsz; // f3
    float txx; // f9
    float txy; // f2
    float txz; // f6
    float tyy; // f10
    float tyz; // f9
    float tzz; // f11
}
// signature: xQuatNormalize(xQuat *, const xQuat *)
// Range: 0x80068E10 -> 0x80068F28
float xQuatNormalize() {
    // Local variables
    float one_len; // f5
    float len; // f0
    float len2; // f0

    // References
    // -> class xQuat g_IQ;
}
// signature: xQuatInv(xQuat *, const xQuat *)
// Range: 0x80068F30 -> 0x80069024
void xQuatInv() {
    // Local variables
    float len2; // f0

    {
        // Range: 0x80068F4C -> 0x80068FF4
        // Local variables
        float one_len; // f4
    }
}
// Range: 0x80069030 -> 0x8006930C
void xQuatSlerp(class xQuat * o /* r28 */, class xQuat * a /* r29 */, class xQuat * b /* r30 */, float t /* f30 */) {
    // Local variables
    float asph; // f31
    float bsph; // r31
    float one_sintheta; // f29
    float theta; // f0
    float abdot; // f4
    class xQuat aerp; // r1+0x28
    class xQuat berp; // r1+0x18
    class xQuat b2; // r1+0x8

    // References
    // -> class xQuat g_IQ;
}
// signature: xQuatMul(xQuat *, const xQuat *, const xQuat *)
// Range: 0x80069310 -> 0x80069474
void xQuatMul() {
    // Local variables
    float _s; // f2
    float _x; // f9
    float _y; // f13
    float _z; // f6

    // References
    // -> class xQuat g_IQ;
}
// signature: xQuatDiff(xQuat *, const xQuat *, const xQuat *)
// Range: 0x80069480 -> 0x8006963C
void xQuatDiff() {
    // References
    // -> class xQuat g_IQ;
}
// Range: 0x80069640 -> 0x80069794
void xVec3RotateOnAxis(class xVec3 & o /* r29 */, class xVec3 & v /* r30 */, class xVec3 & axis /* r31 */, float theta /* f30 */) {
    // Local variables
    class xVec3 temp; // r1+0x14
    float cosTheta; // f0
    class xVec3 axisCrossV; // r1+0x8
}
// signature: xVec3Eq(const xVec3 &, const xVec3 &, float)
// Range: 0x800697A0 -> 0x80069820
bool xVec3Eq() {
    {
        // Range: 0x800697A0 -> 0x80069818
        // Local variables
        int i; // r0
    }
}
