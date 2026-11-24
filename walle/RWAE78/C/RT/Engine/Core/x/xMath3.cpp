/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xMath3.cpp
*/
class xVec3 g_O3; // size: 0xC, address: 0x806C7168
class xVec3 g_X3; // size: 0xC, address: 0x806C7174
class xVec3 g_Y3; // size: 0xC, address: 0x806C7180
class xVec3 g_Z3; // size: 0xC, address: 0x806C718C
class xVec3 g_NX3; // size: 0xC, address: 0x806C7198
class xVec3 g_NY3; // size: 0xC, address: 0x806C71A4
class xVec3 g_NZ3; // size: 0xC, address: 0x806C71B0
class xVec3 g_Onez; // size: 0xC, address: 0x806C71BC
class xMat4x3 g_I3; // size: 0x40, address: 0x80758970
class xQuat g_IQ; // size: 0x10, address: 0x806C71C8
static float gs_fTolerance; // size: 0x4, address: 0x806F2CC4
static int nxt[3]; // size: 0xC, address: 0x806F2CC8
// signature: xBoxInitBoundCapsule(xBox *, const xCapsule *)
// Range: 0x80049870 -> 0x80049928
void xBoxInitBoundCapsule() {
}
// signature: xMat3x3Init(xMat3x3 *, const xVec3 *, const xVec3 *, const xVec3 *)
// Range: 0x80049930 -> 0x80049984
void xMat3x3Init() {
}
// Range: 0x80049990 -> 0x80049B30
void xMat3x3GetScale(class xMat3x3 * m /* r29 */, class xVec3 * s /* r30 */) {
}
// Range: 0x80049B30 -> 0x80049CF4
void xMat3x3GetEuler(class xMat3x3 * m /* r29 */, class xVec3 * a /* r30 */) {
    // Local variables
    float pitch; // f31
    float yaw; // f30
    float roll; // f1
}
// signature: xMat4x3MoveLocalAt(xMat4x3 *, const float)
// Range: 0x80049D00 -> 0x80049D34
void xMat4x3MoveLocalAt() {
}
// Range: 0x80049D40 -> 0x8004A120
float xMat3x3LookVec(class xMat3x3 * m /* r29 */, class xVec3 * at /* r30 */) {
    // Local variables
    float vec_len; // f31
}
// Range: 0x8004A120 -> 0x8004A4BC
float xMat3x3LookVec5(class xMat3x3 * mat /* r29 */, float at_x /* f28 */, float at_y /* f31 */, float at_z /* f30 */, class xVec3 * hint_up /* r30 */) {
    // Local variables
    float mag2; // f26
    float mag; // f29
    float imag; // f1

    // References
    // -> class xMat4x3 g_I3;
}
// signature: xMat3x3Euler(xMat3x3 *, const xVec3 *)
// Range: 0x8004A4C0 -> 0x8004A4D0
void xMat3x3Euler() {
}
// Range: 0x8004A4D0 -> 0x8004A618
void xMat3x3Euler(class xMat3x3 * m /* r31 */, float yaw /* f28 */, float pitch /* f27 */, float roll /* f26 */) {
    // Local variables
    float sy; // f0
    float cy; // f0
    float sp; // f0
    float cp; // f0
    float sr; // f0
    float cr; // f0
}
// Range: 0x8004A620 -> 0x8004A7B0
void xMat3x3RotC(class xMat3x3 * m /* r31 */, float _x /* f28 */, float _y /* f29 */, float _z /* f30 */, float t /* f27 */) {
    // Local variables
    float a; // f0
    float b; // f0
    float c; // f0

    // References
    // -> class xMat4x3 g_I3;
}
// Range: 0x8004A7B0 -> 0x8004AD58
void xMat3x3GetRotC(class xMat3x3 * m /* r28 */, class xVec3 * vec_axis /* r29 */, float * t /* r30 */) {
    {
        // Range: 0x8004A87C -> 0x8004ABB4
        // Local variables
        bool yzPos; // r7
        bool xzPos; // r6
        bool xyPos; // r5
    }
    {
        // Range: 0x8004ABB4 -> 0x8004AD20
        // Local variables
        float s; // f5
    }
}
// Range: 0x8004AD60 -> 0x8004AE0C
void xMat3x3RotX(class xMat3x3 * m /* r31 */, float t /* f30 */) {
    // Local variables
    float a; // f0
    float b; // f0

    // References
    // -> class xVec3 g_X3;
}
// Range: 0x8004AE10 -> 0x8004AEBC
void xMat3x3RotY(class xMat3x3 * m /* r31 */, float t /* f30 */) {
    // Local variables
    float a; // f0
    float b; // f0

    // References
    // -> class xVec3 g_Y3;
}
// Range: 0x8004AEC0 -> 0x8004AF6C
void xMat3x3RotZ(class xMat3x3 * m /* r31 */, float t /* f30 */) {
    // Local variables
    float a; // f0
    float b; // f0

    // References
    // -> class xVec3 g_Z3;
}
// signature: xMat3x3ScaleC(xMat3x3 *, float, float, float)
// Range: 0x8004AF70 -> 0x8004AFA8
void xMat3x3ScaleC() {
}
// Range: 0x8004AFB0 -> 0x8004B108
void xMat3x3LMulRotX(class xMat3x3 * o /* r30 */, class xMat3x3 * m /* r31 */, float t /* f30 */) {
    // Local variables
    float a; // f0
    float b; // f0

    {
        // Range: 0x8004AFF0 -> 0x8004B05C
        // Local variables
        float temp; // f9
    }
}
// signature: xMat3x3Transpose(xMat3x3 *, const xMat3x3 *)
// Range: 0x8004B110 -> 0x8004B1A0
void xMat3x3Transpose() {
    {
        // Range: 0x8004B118 -> 0x8004B118
        // Local variables
        float temp; // f3
    }
    {
        // Range: 0x8004B120 -> 0x8004B120
        // Local variables
        float temp; // f4
    }
    {
        // Range: 0x8004B128 -> 0x8004B128
        // Local variables
        float temp; // f5
    }
}
// signature: xMat3x3Mul(xMat3x3 *, const xMat3x3 *, const xMat3x3 *)
// Range: 0x8004B1A0 -> 0x8004B380
void xMat3x3Mul() {
    // Local variables
    class xMat3x3 temp; // r1+0x8
    class xMat3x3 * tp; // r6
    unsigned int usetemp; // r0
}
// Range: 0x8004B380 -> 0x8004B748
void xMat4x3Orthonormalize(class xMat4x3 * o /* r29 */, class xMat4x3 * m /* r30 */) {
}
// Range: 0x8004B750 -> 0x8004B818
void xMat4x3Mul(class xMat4x3 * o /* r29 */, class xMat4x3 * a /* r30 */, class xMat4x3 * b /* r31 */) {
}
// signature: xQuatInit(xQuat *, float, const xVec3 *)
// Range: 0x8004B820 -> 0x8004B840
void xQuatInit() {
}
// Range: 0x8004B840 -> 0x8004BB3C
void xQuatFromMat(class xQuat * q /* r24 */, class xMat3x3 * m /* r25 */) {
    // Local variables
    float * mp; // r0
    float * qvp; // r0
    float tr; // f2
    float root; // f0

    {
        // Range: 0x8004B934 -> 0x8004BB0C
        // Local variables
        int k; // r26
        int j; // r27
        int i; // r28
    }

    // References
    // -> class xQuat g_IQ;
    // -> static int nxt[3];
}
// signature: xQuatFromAxisAngleC(xQuat *, float, float, float, float)
// Range: 0x8004BB40 -> 0x8004BC48
void xQuatFromAxisAngleC(class xQuat * q /* r31 */, float x /* f27 */, float y /* f28 */, float z /* f29 */) {
    // Local variables
    float t_2; // f30
    float st_2; // f0

    // References
    // -> class xQuat g_IQ;
}
// signature: xQuatFromAxisAngle(xQuat *, const xVec3 *, float)
// Range: 0x8004BC50 -> 0x8004BD28
void xQuatFromAxisAngle(class xQuat * q /* r30 */, class xVec3 * a /* r31 */) {
    // Local variables
    float t_2; // f30
    float st_2; // f0

    // References
    // -> class xQuat g_IQ;
}
// signature: xQuatToMat(const xQuat *, xMat3x3 *)
// Range: 0x8004BD30 -> 0x8004BDE0
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
// Range: 0x8004BDE0 -> 0x8004BF68
float xQuatNormalize(class xQuat * o /* r29 */, class xQuat * q /* r30 */) {
    // Local variables
    float one_len; // f5
    float len; // f0
    float len2; // f0

    // References
    // -> class xQuat g_IQ;
}
// Range: 0x8004BF70 -> 0x8004C254
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
// Range: 0x8004C260 -> 0x8004C428
void xQuatMul(class xQuat * o /* r30 */) {
    // Local variables
    float _s; // f2
    float _x; // f9
    float _y; // f13
    float _z; // f6

    // References
    // -> class xQuat g_IQ;
}
// signature: xQuatDiff(xQuat *, const xQuat *, const xQuat *)
// Range: 0x8004C430 -> 0x8004C650
void xQuatDiff(class xQuat * o /* r30 */) {
    // References
    // -> class xQuat g_IQ;
}
// signature: xVec3Rotate(xVec3 *, const xVec3 *, const xVec3 *, float)
// Range: 0x8004C650 -> 0x8004C908
bool xVec3Rotate(class xVec3 * o /* r28 */, class xVec3 * a /* r29 */, float l /* f30 */) {
    // Local variables
    class xMat3x3 rotation; // r1+0x18
}
// Range: 0x8004C910 -> 0x8004CA64
void xVec3RotateOnAxis(class xVec3 * o /* r29 */, class xVec3 * v /* r30 */, class xVec3 * axis /* r31 */, float theta /* f30 */) {
    // Local variables
    class xVec3 temp; // r1+0x14
    float cosTheta; // f0
    class xVec3 axisCrossV; // r1+0x8
}
// signature: xVec3Eq(const xVec3 &, const xVec3 &, float)
// Range: 0x8004CA70 -> 0x8004CAF0
bool xVec3Eq() {
    {
        // Range: 0x8004CA70 -> 0x8004CAE8
        // Local variables
        int i; // r0
    }
}
