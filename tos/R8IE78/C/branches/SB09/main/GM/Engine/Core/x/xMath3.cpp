/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xMath3.cpp
*/
class xVec3 g_O3; // size: 0xC, address: 0x8067F390
class xVec3 g_X3; // size: 0xC, address: 0x8067F39C
class xVec3 g_Y3; // size: 0xC, address: 0x8067F3A8
class xVec3 g_Z3; // size: 0xC, address: 0x8067F3B4
class xMat4x3 g_I3; // size: 0x40, address: 0x80721360
class xQuat g_IQ; // size: 0x10, address: 0x8067F3C0
int nxt[3]; // size: 0xC, address: 0x806B3FF8
// Range: 0x80036660 -> 0x800366FC
void xMath3Init() {
    // References
    // -> class xVec3 g_O3;
    // -> class xVec3 g_Z3;
    // -> class xVec3 g_Y3;
    // -> class xMat4x3 g_I3;
    // -> class xVec3 g_X3;
}
// Range: 0x80036700 -> 0x800367D0
void xLine3VecClosestPoint(class xVec3 * p1 /* r28 */, class xVec3 * p2 /* r29 */, class xVec3 * v /* r30 */, class xVec3 * o /* r31 */) {
    // Local variables
    class xVec3 p1p2; // r1+0x14
    class xVec3 p1v; // r1+0x8
    float p1p2_p1v; // f0
    float p1p2_p1p2; // f0
}
// signature: xMat3x3Init(xMat3x3 *, const xVec3 *, const xVec3 *, const xVec3 *)
// Range: 0x80036810 -> 0x80036888
void xMat3x3Init(class xMat3x3 * m /* r29 */, class xVec3 * _up /* r30 */, class xVec3 * _at /* r31 */) {
}
// Range: 0x80036890 -> 0x800368DC
void xMat3x3GetScale(class xMat3x3 * m /* r30 */, class xVec3 * s /* r31 */) {
}
// Range: 0x800368E0 -> 0x800369C8
void xMat3x3GetEuler(class xMat3x3 * m /* r30 */, class xVec3 * a /* r31 */) {
    // Local variables
    float pitch; // f31
    float yaw; // f30
    float roll; // f1
}
// signature: xMat4x3MoveLocalRight(xMat4x3 *, const float)
// Range: 0x800369D0 -> 0x80036A04
void xMat4x3MoveLocalRight() {
}
// signature: xMat4x3MoveLocalUp(xMat4x3 *, const float)
// Range: 0x80036A10 -> 0x80036A44
void xMat4x3MoveLocalUp() {
}
// Range: 0x80036A50 -> 0x80036C1C
float xMat3x3LookVec(class xMat3x3 * m /* r30 */, class xVec3 * at /* r31 */) {
    // Local variables
    float vec_len; // f31
}
// Range: 0x80036C20 -> 0x80036DB8
float xMat3x3LookVec5(class xMat3x3 & mat /* r30 */, float at_x /* f28 */, float at_y /* f29 */, float at_z /* f30 */, class xVec3 & hint_up /* r31 */) {
    // Local variables
    float mag2; // f31
    float mag; // f31
    float imag; // f0

    // References
    // -> class xMat4x3 g_I3;
}
// signature: xMat3x3Euler(xMat3x3 *, const xVec3 *)
// Range: 0x80036DC0 -> 0x80036DD0
void xMat3x3Euler() {
}
// Range: 0x80036DD0 -> 0x80036F18
void xMat3x3Euler(class xMat3x3 * m /* r31 */, float yaw /* f28 */, float pitch /* f27 */, float roll /* f26 */) {
    // Local variables
    float sy; // f0
    float cy; // f0
    float sp; // f0
    float cp; // f0
    float sr; // f0
    float cr; // f0
}
// Range: 0x80036F20 -> 0x80037058
void xMat3x3RotC(class xMat3x3 * m /* r31 */, float _x /* f28 */, float _y /* f29 */, float _z /* f30 */, float t /* f27 */) {
    // Local variables
    float a; // f0
    float b; // f0
    float c; // f0

    // References
    // -> class xMat4x3 g_I3;
}
// Range: 0x80037060 -> 0x80037430
void xMat3x3GetRotC(class xMat3x3 * m /* r30 */, class xVec3 * vec_axis /* r31 */, float * t /* r28 */) {
    {
        // Range: 0x80037104 -> 0x80037360
        // Local variables
        bool yzPos; // r7
        bool xzPos; // r6
        bool xyPos; // r3
    }
    {
        // Range: 0x80037360 -> 0x80037410
        // Local variables
        float s; // f5
    }
}
// Range: 0x80037430 -> 0x800374D8
void xMat3x3RotX(class xMat3x3 * m /* r31 */, float t /* f30 */) {
    // Local variables
    float a; // f0
    float b; // f0

    // References
    // -> class xVec3 g_X3;
}
// Range: 0x800374E0 -> 0x80037594
void xMat3x3RotY(class xMat3x3 * m /* r30 */, float t /* f30 */) {
    // Local variables
    float a; // f0
    float b; // f0

    // References
    // -> class xVec3 g_Y3;
}
// Range: 0x800375A0 -> 0x80037648
void xMat3x3RotZ(class xMat3x3 * m /* r31 */, float t /* f30 */) {
    // Local variables
    float a; // f0
    float b; // f0

    // References
    // -> class xVec3 g_Z3;
}
// signature: xMat3x3ScaleC(xMat3x3 *, float, float, float)
// Range: 0x80037650 -> 0x800376DC
void xMat3x3ScaleC(class xMat3x3 * m /* r30 */, float y /* f30 */, float z /* f31 */) {
}
// Range: 0x800376E0 -> 0x80037834
void xMat3x3LMulRotY(class xMat3x3 * o /* r30 */, class xMat3x3 * m /* r31 */, float t /* f30 */) {
    // Local variables
    float a; // f0
    float b; // f0

    {
        // Range: 0x80037720 -> 0x8003778C
        // Local variables
        float temp; // f9
    }
}
// Range: 0x80037840 -> 0x80037998
void xMat3x3RMulRotY(class xMat3x3 * o /* r30 */, class xMat3x3 * m /* r31 */, float t /* f30 */) {
    // Local variables
    float a; // f0
    float b; // f0

    {
        // Range: 0x80037880 -> 0x800378EC
        // Local variables
        float temp; // f9
    }
}
// signature: xMat3x3Transpose(xMat3x3 *, const xMat3x3 *)
// Range: 0x800379A0 -> 0x80037A30
void xMat3x3Transpose() {
    {
        // Range: 0x800379A8 -> 0x800379A8
        // Local variables
        float temp; // f3
    }
    {
        // Range: 0x800379B0 -> 0x800379B0
        // Local variables
        float temp; // f4
    }
    {
        // Range: 0x800379B8 -> 0x800379B8
        // Local variables
        float temp; // f5
    }
}
// signature: xMat3x3Mul(xMat3x3 *, const xMat3x3 *, const xMat3x3 *)
// Range: 0x80037A30 -> 0x80037BC8
void xMat3x3Mul() {
    // Local variables
    class xMat3x3 temp; // r1+0x8
    class xMat3x3 * tp; // r6
    unsigned int usetemp; // r0
}
// Range: 0x80037BD0 -> 0x80037C74
void xMat4x3Orthonormalize(class xMat4x3 * o /* r30 */, class xMat4x3 * m /* r31 */) {
}
// Range: 0x80037C80 -> 0x80037CE0
void xMat4x3Mul(class xMat4x3 * o /* r29 */, class xMat4x3 * a /* r30 */, class xMat4x3 * b /* r31 */) {
}
// Range: 0x80037CE0 -> 0x80037F2C
void xQuatFromMat(class xQuat * q /* r25 */, class xMat3x3 * m /* r26 */) {
    // Local variables
    float * mp; // r0
    float * qvp; // r0
    float tr; // f31
    float root; // f0

    {
        // Range: 0x80037D94 -> 0x80037F0C
        // Local variables
        int k; // r27
        int j; // r28
        int i; // r29
    }

    // References
    // -> class xQuat g_IQ;
    // -> int nxt[3];
}
// signature: xQuatFromAxisAngle(xQuat *, const xVec3 *, float)
// Range: 0x80037F60 -> 0x8003800C
void xQuatFromAxisAngle(class xQuat * q /* r30 */, class xVec3 * a /* r31 */) {
    // Local variables
    float t_2; // f31
    float st_2; // f30

    // References
    // -> class xQuat g_IQ;
}
// signature: xQuatToMat(const xQuat *, xMat3x3 *)
// Range: 0x80038010 -> 0x800380C0
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
// Range: 0x800380C0 -> 0x800381A8
float xQuatNormalize(class xQuat * o /* r29 */, class xQuat * q /* r30 */) {
    // Local variables
    float one_len; // f1
    float len; // f31
    float len2; // f0

    // References
    // -> class xQuat g_IQ;
}
// Range: 0x800381B0 -> 0x8003826C
void xQuatInv(class xQuat * o /* r29 */, class xQuat * q /* r30 */) {
    // Local variables
    float len2; // f0

    {
        // Range: 0x800381E0 -> 0x80038238
        // Local variables
        float one_len; // f31
    }
}
// Range: 0x80038270 -> 0x80038400
void xQuatSlerp(class xQuat * o /* r29 */, class xQuat * a /* r30 */, class xQuat * b /* r31 */, float t /* f31 */) {
    // Local variables
    float asph; // f30
    float bsph; // r31
    float one_sintheta; // f29
    float theta; // f0
    float abdot; // f1
    class xQuat aerp; // r1+0x28
    class xQuat berp; // r1+0x18
    class xQuat b2; // r1+0x8
}
// signature: xQuatMul(xQuat *, const xQuat *, const xQuat *)
// Range: 0x80038400 -> 0x80038478
void xQuatMul() {
    // Local variables
    float _s; // f5
    float _x; // f2
    float _y; // f1
    float _z; // f0
}
// signature: xQuatDiff(xQuat *, const xQuat *, const xQuat *)
// Range: 0x80038480 -> 0x800384FC
void xQuatDiff(class xQuat * o /* r30 */, class xQuat * b /* r31 */) {
}
// signature: xVec3Rotate(xVec3 *, const xVec3 *, const xVec3 *, float)
// Range: 0x80038500 -> 0x80038564
bool xVec3Rotate(class xVec3 * o /* r30 */, class xVec3 * a /* r31 */) {
    // Local variables
    class xMat3x3 rotation; // r1+0x8
}
// Range: 0x80038570 -> 0x80038648
bool xVec3Rotate(class xMat3x3 * o /* r29 */, class xVec3 * a /* r30 */, class xVec3 * b /* r31 */, float l /* f30 */) {
    // Local variables
    float dot; // f31
    class xVec3 axis; // r1+0xC
    float angle; // f1
}
// Range: 0x80038650 -> 0x80038718
void xVec3RotateOnAxis(class xVec3 & o /* r29 */, class xVec3 & v /* r30 */, class xVec3 & axis /* r31 */, float theta /* f30 */) {
    // Local variables
    class xVec3 temp; // r1+0x14
    float cosTheta; // f0
    class xVec3 axisCrossV; // r1+0x8
}
// signature: xVec3Eq(const xVec3 &, const xVec3 &, float)
// Range: 0x80038720 -> 0x80038764
bool xVec3Eq() {
    // Local variables
    float * fa; // r0
    float * fb; // r0

    {
        // Range: 0x80038724 -> 0x8003875C
        // Local variables
        int i; // r0
    }
}
