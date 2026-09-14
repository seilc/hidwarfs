/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath3.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8004502C -> 0x80049CF0
*/
// total size: 0xC
struct RwV3d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0xC
struct xVec3 {
    // Static members
    static struct xVec3 m_NegDoubleVec; // size: 0xC
    static struct xVec3 m_DoubleVec; // size: 0xC
    static struct xVec3 m_NegHalfVec; // size: 0xC
    static struct xVec3 m_HalfVec; // size: 0xC
    static struct xVec3 m_UnitAxisZ; // size: 0xC
    static struct xVec3 m_UnitAxisY; // size: 0xC
    static struct xVec3 m_UnitAxisX; // size: 0xC
    static struct xVec3 m_NegOnes; // size: 0xC
    static struct xVec3 m_Ones; // size: 0xC
    static struct xVec3 m_Null; // size: 0xC

    // Members
    union { // inferred
        struct RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
struct xVec3 g_O3; // size: 0xC, address: 0x803C5038
struct xVec3 g_X3; // size: 0xC, address: 0x803C5044
struct xVec3 g_Y3; // size: 0xC, address: 0x803C5050
struct xVec3 g_Z3; // size: 0xC, address: 0x803C505C
struct xVec3 g_NY3; // size: 0xC, address: 0x803C5068
struct xVec3 g_NZ3; // size: 0xC, address: 0x803C5074
// total size: 0x40
struct xMat4x3 : public xMat3x3 {
    // Members
    struct xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
struct xMat4x3 g_I3; // size: 0x40, address: 0x803C1010
// total size: 0x10
struct xQuat {
    // Members
    struct xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
struct xQuat g_IQ; // size: 0x10, address: 0x803C5080
// Range: 0x8004502C -> 0x800450C0
void xMath3Init() {
    // References
    // -> struct xVec3 g_O3;
    // -> struct xMat4x3 g_I3;
    // -> struct xVec3 g_Z3;
    // -> struct xVec3 g_Y3;
    // -> struct xVec3 g_X3;
}

// total size: 0x2C
struct xIsect {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    float penned; // offset 0x4, size 0x4
    float contained; // offset 0x8, size 0x4
    float lapped; // offset 0xC, size 0x4
    struct xVec3 point; // offset 0x10, size 0xC
    struct xVec3 norm; // offset 0x1C, size 0xC
    float dist; // offset 0x28, size 0x4
};
// Range: 0x800450C0 -> 0x800451B0
void xLine3VecDist2(const struct xVec3 * p1 /* r28 */, const struct xVec3 * p2 /* r29 */, const struct xVec3 * v /* r30 */, struct xIsect * isx /* r31 */) {
    // Local variables
    struct xVec3 ldir; // r1+0x8
    float ldirdotlv; // f0
    float ldirlen2; // f0
    float lvlen2; // f0
}

static float gs_fTolerance; // size: 0x4, address: 0x803BD800
// Range: 0x800451B0 -> 0x80045674
void xLine3LineMinDist(const struct xVec3 * p1 /* r0 */, const struct xVec3 * p2 /* r0 */, const struct xVec3 * q1 /* r0 */, const struct xVec3 * q2 /* r0 */, float & t /* r0 */, float & u /* r0 */) {
    // Local variables
    float kDiffx; // f6
    float kDiffy; // f10
    float kDiffz; // f7
    float pDirx; // f11
    float pDiry; // f12
    float pDirz; // f13
    float qDirx; // f31
    float qDiry; // f30
    float qDirz; // f29
    float fA00; // f0
    float fA01; // f1
    float fA11; // f2
    float fB0; // f8
    float fDet; // f9
    float fB1; // f6
    float fS; // f5
    float fT; // f7
    float fTmp; // f1
    float fInvDet; // f0

    // References
    // -> static float gs_fTolerance;
}

// Range: 0x80045674 -> 0x800477E8
void xLine3TriMinDist(const struct xVec3 * p1 /* r24 */, const struct xVec3 * p2 /* r25 */, const struct xVec3 * V0 /* r26 */, const struct xVec3 * V1 /* r27 */, const struct xVec3 * V2 /* r28 */, float & t /* r29 */, float & u /* r30 */, float & v /* r31 */) {
    // Local variables
    float kDiffx; // f22
    float kDiffy; // f9
    float kDiffz; // f23
    float pDirx; // f10
    float pDiry; // f11
    float pDirz; // f12
    float edge0x; // f13
    float edge0y; // f31
    float edge0z; // f30
    float edge1x; // f29
    float edge1y; // f28
    float edge1z; // f27
    float fA00; // f26
    float fA01; // f9
    float fA02; // f11
    float fA11; // f2
    float fA12; // f13
    float fA22; // f21
    float fB0; // f10
    float fB1; // f12
    float fB2; // f22
    float fSqrDist; // f26
    float fSqrDist0; // f1
    float fR; // r1+0x1C
    float fS; // r1+0x18
    float fT; // r1+0x14
    float fR0; // r1+0x10
    float fS0; // r1+0xC
    float fT0; // r1+0x8
    float kNx; // f20
    float kNy; // f25
    float kNz; // f21
    float fDot; // f20
    float tp1x; // f5
    float tp1y; // f11
    float tp1z; // f3
    float tp2x; // f6
    float tp2y; // f12
    float tp2z; // f1
    float fCof00; // f20
    float fCof01; // f23
    float fCof02; // f13
    float fCof12; // f8
    float fInvDet; // f9
    float fRhs0; // f10
    float fRhs1; // f11
    float fRhs2; // f6
    float dx__; // f2
    float dy__; // f7
    float dz__; // f1
    float dx__; // f6
    float dy__; // f7
    float dz__; // f2
    float dx__; // f3
    float dy__; // f0
    float dz__; // f2
    float dx__; // f25
    float dy__; // f20
    float dz__; // f26
    float dx__; // f5
    float dy__; // f7
    float dz__; // f3
    float dx__; // f25
    float dy__; // f20
    float dz__; // f26
    float dx__; // f5
    float dy__; // f7
    float dz__; // f3
    float dx__; // f2
    float dy__; // f7
    float dz__; // f1
    float dx__; // f5
    float dy__; // f6
    float dz__; // f1
    float dx__; // f3
    float dy__; // f0
    float dz__; // f2
    float dx__; // f2
    float dy__; // f7
    float dz__; // f1
    float dx__; // f5
    float dy__; // f6
    float dz__; // f1
    float dx__; // f3
    float dy__; // f0
    float dz__; // f2
    float dx__; // f25
    float dy__; // f20
    float dz__; // f26
    float dx__; // f5
    float dy__; // f7
    float dz__; // f3
    float dx__; // f25
    float dy__; // f20
    float dz__; // f26
    float dx__; // f9
    float dy__; // f10
    float dz__; // f5
    float dx__; // f25
    float dy__; // f20
    float dz__; // f26
    float dx__; // f9
    float dy__; // f10
    float dz__; // f5
    float dx__; // f25
    float dy__; // f20
    float dz__; // f26
    float dx__; // f9
    float dy__; // f10
    float dz__; // f5
    float dx__; // f2
    float dy__; // f7
    float dz__; // f1
    float dx__; // f6
    float dy__; // f7
    float dz__; // f2
    float dx__; // f2
    float dy__; // f0
    float dz__; // f1
    float dx__; // f25
    float dy__; // f20
    float dz__; // f26
    float dx__; // f3
    float dy__; // f5
    float dz__; // f2
    float dx__; // f25
    float dy__; // f20
    float dz__; // f26
    float dx__; // f3
    float dy__; // f5
    float dz__; // f2
    float dx__; // f2
    float dy__; // f7
    float dz__; // f1
    float dx__; // f5
    float dy__; // f6
    float dz__; // f1
    float dx__; // f2
    float dy__; // f0
    float dz__; // f1
    float dx__; // f2
    float dy__; // f7
    float dz__; // f1
    float dx__; // f5
    float dy__; // f6
    float dz__; // f1
    float dx__; // f2
    float dy__; // f0
    float dz__; // f1
    float dx__; // f25
    float dy__; // f20
    float dz__; // f26
    float dx__; // f3
    float dy__; // f5
    float dz__; // f2
    float dx__; // f2
    float dy__; // f7
    float dz__; // f1
    float dx__; // f6
    float dy__; // f7
    float dz__; // f2
    float dx__; // f5
    float dy__; // f6
    float dz__; // f1
    float dx__; // f4
    float dy__; // f4
    float dz__; // f2
    float dx__; // f2
    float dy__; // f0
    float dz__; // f1

    // References
    // -> static float gs_fTolerance;
}

// Range: 0x800477E8 -> 0x80047B38
void xTri3VecMinDist(const struct xVec3 * V0 /* r0 */, const struct xVec3 * V1 /* r0 */, const struct xVec3 * V2 /* r0 */, const struct xVec3 * p /* r0 */, float & s /* r0 */, float & t /* r0 */) {
    // Local variables
    float kDiffx; // f8
    float kDiffy; // f10
    float kDiffz; // f5
    float edge0x; // f11
    float edge0y; // f12
    float edge0z; // f6
    float edge1x; // f13
    float edge1y; // f31
    float edge1z; // f10
    float fA00; // f4
    float fA01; // f7
    float fA11; // f8
    float fB0; // f6
    float fB1; // f3
    float fDet; // f1
    float fS; // f5
    float fT; // f9
    float fInvDet; // f0
    float fTmp0; // f2
    float fTmp1; // f5
    float fNumer; // f2
    float fDenom; // f0
}

// total size: 0x10
struct xSphere {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// Range: 0x80047B38 -> 0x80047BB4
int xPointInBox(const struct xBox * b /* r0 */, const struct xVec3 * p /* r0 */) {}

// Range: 0x80047BB4 -> 0x80047D5C
void xBoxInitBoundOBB(struct xBox * o /* r31 */, const struct xBox * b /* r0 */, const struct xMat4x3 * m /* r6 */) {
    // Local variables
    struct xVec3 boxcent; // r1+0x8
    float xmax; // f31
    float ymax; // f30
    float zmax; // f29
}

// total size: 0x1C
struct xCapsule {
    // Members
    struct xVec3 start; // offset 0x0, size 0xC
    struct xVec3 end; // offset 0xC, size 0xC
    float r; // offset 0x18, size 0x4
};
// Range: 0x80047D5C -> 0x80047E14
void xBoxInitBoundCapsule(struct xBox * b /* r0 */, const struct xCapsule * c /* r0 */) {}

// total size: 0x18
struct xBox {
    // Members
    struct xVec3 upper; // offset 0x0, size 0xC
    struct xVec3 lower; // offset 0xC, size 0xC
};
// Range: 0x80047E14 -> 0x80047E68
void xMat3x3Init(struct xMat3x3 * m /* r29 */, const struct xVec3 * _right /* r0 */, const struct xVec3 * _up /* r30 */, const struct xVec3 * _at /* r31 */) {}

// Range: 0x80047E68 -> 0x80047EB0
void xMat3x3Normalize(struct xMat3x3 * o /* r30 */, const struct xMat3x3 * m /* r31 */) {}

// Range: 0x80047EB0 -> 0x80047EFC
void xMat3x3GetScale(const struct xMat3x3 * m /* r30 */, struct xVec3 * s /* r31 */) {}

// Range: 0x80047EFC -> 0x80047FD4
void xMat3x3GetEuler(const struct xMat3x3 * m /* r30 */, struct xVec3 * a /* r31 */) {
    // Local variables
    float pitch; // f31
    float yaw; // f30
    float roll; // f1
}

// Range: 0x80047FD4 -> 0x80048008
void xMat4x3MoveLocalRight(struct xMat4x3 * m /* r0 */, float mag /* f0 */) {}

// Range: 0x80048008 -> 0x8004803C
void xMat4x3MoveLocalUp(struct xMat4x3 * m /* r0 */, float mag /* f0 */) {}

// Range: 0x8004803C -> 0x80048070
void xMat4x3MoveLocalAt(struct xMat4x3 * m /* r0 */, float mag /* f0 */) {}

// Range: 0x80048070 -> 0x80048080
void xMat4x3MoveWorldRight(struct xMat4x3 * m /* r0 */, float mag /* f0 */) {}

// Range: 0x80048080 -> 0x80048090
void xMat4x3MoveWorldUp(struct xMat4x3 * m /* r0 */, float mag /* f0 */) {}

// Range: 0x80048090 -> 0x800480A0
void xMat4x3MoveWorldAt(struct xMat4x3 * m /* r0 */, float mag /* f0 */) {}

// Range: 0x800480A0 -> 0x80048238
float xMat3x3LookVec(struct xMat3x3 * m /* r30 */, const struct xVec3 * at /* r31 */) {
    // Local variables
    float vec_len; // f31
}

// Range: 0x80048238 -> 0x800484A4
void xMat3x3LookVec2(struct xMat3x3 * m /* r31 */, const struct xVec3 * at /* r0 */) {}

// Range: 0x800484A4 -> 0x80048614
float xMat3x3LookVec4(struct xMat3x3 & mat /* r30 */, float at_x /* f28 */, float at_y /* f29 */, float at_z /* f30 */, const struct xVec3 & hint_right /* r31 */) {
    // Local variables
    float mag2; // f1
    float mag; // f31
    float imag; // f0

    // References
    // -> struct xMat4x3 g_I3;
}

// Range: 0x80048614 -> 0x80048784
float xMat3x3LookVec5(struct xMat3x3 & mat /* r30 */, float at_x /* f28 */, float at_y /* f29 */, float at_z /* f30 */, const struct xVec3 & hint_up /* r31 */) {
    // Local variables
    float mag2; // f1
    float mag; // f31
    float imag; // f0

    // References
    // -> struct xMat4x3 g_I3;
}

// Range: 0x80048784 -> 0x800487B0
void xMat3x3Euler(struct xMat3x3 * m /* r0 */, const struct xVec3 * ypr /* r0 */) {}

// Range: 0x800487B0 -> 0x800488F4
void xMat3x3Euler(struct xMat3x3 * m /* r31 */, float yaw /* f28 */, float pitch /* f30 */, float roll /* f26 */) {
    // Local variables
    float sy; // f0
    float cy; // f0
    float sp; // f0
    float cp; // f0
    float sr; // f0
    float cr; // f0
}

// Range: 0x800488F4 -> 0x80048A18
void xMat3x3RotC(struct xMat3x3 * m /* r31 */, float _x /* f29 */, float _y /* f30 */, float _z /* f31 */, float t /* f27 */) {
    // Local variables
    float a; // f0
    float b; // f0
    float c; // f2
}

// Range: 0x80048A18 -> 0x80048AB8
void xMat3x3RotX(struct xMat3x3 * m /* r31 */, float t /* f30 */) {
    // Local variables
    float a; // f31
    float b; // f30

    // References
    // -> struct xVec3 g_X3;
}

// Range: 0x80048AB8 -> 0x80048B5C
void xMat3x3RotY(struct xMat3x3 * m /* r31 */, float t /* f30 */) {
    // Local variables
    float a; // f31
    float b; // f30

    // References
    // -> struct xVec3 g_Y3;
}

// Range: 0x80048B5C -> 0x80048C00
void xMat3x3RotZ(struct xMat3x3 * m /* r31 */, float t /* f30 */) {
    // Local variables
    float a; // f31
    float b; // f30

    // References
    // -> struct xVec3 g_Z3;
}

// Range: 0x80048C00 -> 0x80048C8C
void xMat3x3ScaleC(struct xMat3x3 * m /* r31 */, float x /* f0 */, float y /* f30 */, float z /* f31 */) {}

// Range: 0x80048C8C -> 0x80048DE8
void xMat3x3LMulRotX(struct xMat3x3 * o /* r30 */, const struct xMat3x3 * m /* r31 */, float t /* f31 */) {
    // Local variables
    float a; // f0
    float b; // f0
    float temp; // f1
}

// Range: 0x80048DE8 -> 0x80048F44
void xMat3x3LMulRotY(struct xMat3x3 * o /* r30 */, const struct xMat3x3 * m /* r31 */, float t /* f31 */) {
    // Local variables
    float a; // f0
    float b; // f0
    float temp; // f1
}

// Range: 0x80048F44 -> 0x800490A8
void xMat3x3RMulRotY(struct xMat3x3 * o /* r30 */, const struct xMat3x3 * m /* r31 */, float t /* f30 */) {
    // Local variables
    float a; // f0
    float b; // f0
    float temp; // f2
}

// Range: 0x800490A8 -> 0x80049138
void xMat3x3Transpose(struct xMat3x3 * o /* r0 */, const struct xMat3x3 * m /* r0 */) {
    // Local variables
    float temp; // f1
    float temp; // f1
    float temp; // f1
}

// total size: 0x30
struct xMat3x3 {
    // Members
    struct xVec3 right; // offset 0x0, size 0xC
    int flags; // offset 0xC, size 0x4
    struct xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    struct xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
};
// Range: 0x80049138 -> 0x80049310
void xMat3x3Mul(struct xMat3x3 * o /* r3 */, const struct xMat3x3 * a /* r0 */, const struct xMat3x3 * b /* r0 */) {
    // Local variables
    struct xMat3x3 temp; // r1+0x10
    struct xMat3x3 * tp; // r6
    unsigned int usetemp; // r0
}

// Range: 0x80049310 -> 0x80049374
void xMat3x3LMulVec(struct xVec3 * o /* r0 */, const struct xMat3x3 * m /* r0 */, const struct xVec3 * v /* r0 */) {
    // Local variables
    float y; // f3
    float z; // f0
}

// Range: 0x80049374 -> 0x80049454
void xMat3x3Tolocal(struct xVec3 * o /* r31 */, const struct xMat3x3 * m /* r0 */, const struct xVec3 * v /* r0 */) {
    // Local variables
    float sx2; // f31
    float sy2; // f30
    float sz2; // f29
}

// Range: 0x80049454 -> 0x800494D4
void xMat4x3Rot(struct xMat4x3 * m /* r30 */, const struct xVec3 * a /* r0 */, float t /* f4 */, const struct xVec3 * p /* r31 */) {
    // Local variables
    struct xMat4x3 temp; // r1+0x10
}

// Range: 0x800494D4 -> 0x80049530
void xMat4x3Mul(struct xMat4x3 * o /* r29 */, const struct xMat4x3 * a /* r30 */, const struct xMat4x3 * b /* r31 */) {
    // Local variables
    struct xVec3 pos; // r1+0x8
}

// Range: 0x80049530 -> 0x80049574
void xMat4x3RMul3x3(struct xMat4x3 * o /* r30 */, const struct xMat3x3 * m3x3 /* r0 */, const struct xMat4x3 * m /* r31 */) {}

static int nxt[3]; // size: 0xC, address: 0x803BD804
// Range: 0x80049574 -> 0x8004974C
void xQuatFromMat(struct xQuat * q /* r27 */, const struct xMat3x3 * m /* r28 */) {
    // Local variables
    float * mp; // r0
    float * qvp; // r0
    float tr; // f1
    float root; // f0
    int i; // r26
    int j; // r25
    int k; // r29

    // References
    // -> struct xQuat g_IQ;
    // -> static int nxt[3];
}

// Range: 0x8004974C -> 0x800497D4
void xQuatFromAxisAngle(struct xQuat * q /* r30 */, const struct xVec3 * a /* r31 */, float t /* f0 */) {
    // Local variables
    float t_2; // f31
    float st_2; // f31

    // References
    // -> struct xQuat g_IQ;
}

// Range: 0x800497D4 -> 0x800498A4
void xQuatToMat(const struct xQuat * q /* r0 */, struct xMat3x3 * m /* r0 */) {
    // Local variables
    float tx; // f7
    float ty; // f3
    float tz; // f8
    float tsx; // f5
    float tsy; // f9
    float tsz; // f10
    float txx; // f11
    float txy; // f12
    float txz; // f13
    float tyy; // f31
    float tyz; // f6
    float tzz; // f30
}

// Range: 0x800498A4 -> 0x80049958
float xQuatNormalize(struct xQuat * o /* r30 */, const struct xQuat * q /* r31 */) {
    // Local variables
    float len; // f31
    float len2; // f0

    // References
    // -> struct xQuat g_IQ;
}

// Range: 0x80049958 -> 0x80049AA8
void xQuatSlerp(struct xQuat * o /* r29 */, const struct xQuat * a /* r30 */, const struct xQuat * b /* r31 */, float t /* f31 */) {
    // Local variables
    float asph; // f29
    float bsph; // f30
    float one_sintheta; // f28
    float theta; // f0
    float abdot; // f1
    struct xQuat aerp; // r1+0x28
    struct xQuat berp; // r1+0x18
    struct xQuat b2; // r1+0x8
}

// Range: 0x80049AA8 -> 0x80049B3C
void xQuatMul(struct xQuat * o /* r3 */, const struct xQuat * a /* r0 */, const struct xQuat * b /* r0 */) {
    // Local variables
    float _s; // f2
}

// Range: 0x80049B3C -> 0x80049BF8
unsigned char xVec3Rotate(struct xMat3x3 * o /* r29 */, const struct xVec3 * a /* r30 */, const struct xVec3 * b /* r31 */, float l /* f30 */) {
    // Local variables
    float dot; // f31
    struct xVec3 axis; // r1+0x8
    float angle; // f1
}

// Range: 0x80049BF8 -> 0x80049CAC
void xVec3RotateOnAxis(struct xVec3 & o /* r29 */, const struct xVec3 & v /* r30 */, const struct xVec3 & axis /* r31 */, float theta /* f30 */) {
    // Local variables
    struct xVec3 temp; // r1+0x14
    float cosTheta; // f0
    struct xVec3 axisCrossV; // r1+0x8
}

// total size: 0xA0
struct xConic {
    // Members
    struct xMat4x3 basis; // offset 0x0, size 0x40
    struct xMat4x3 invbasis; // offset 0x40, size 0x40
    float coef[5]; // offset 0x80, size 0x14
    struct xVec3 coneBasisCenter; // offset 0x94, size 0xC
};
// Range: 0x80049CAC -> 0x80049CF0
unsigned char xVec3Eq(const struct xVec3 & a /* r0 */, const struct xVec3 & b /* r0 */, float tol /* f0 */) {
    // Local variables
    const float * fa; // r0
    const float * fb; // r0
    int i; // r0
}

// total size: 0x10
struct xVec4 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
// total size: 0x20
class xCone {
    // Members
public:
    struct xVec3 start; // offset 0x0, size 0xC
    struct xVec3 dir; // offset 0xC, size 0xC
    float height; // offset 0x18, size 0x4
    float angle; // offset 0x1C, size 0x4
};

