/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xMath3.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80092900 -> 0x8009AD94
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
struct xVec3 g_O3; // size: 0xC, address: 0x80D6D198
struct xVec3 g_X3; // size: 0xC, address: 0x80D6D1A4
struct xVec3 g_Y3; // size: 0xC, address: 0x80D6D1B0
struct xVec3 g_Z3; // size: 0xC, address: 0x80D6D1BC
struct xVec3 g_NY3; // size: 0xC, address: 0x80D6D1C8
struct xVec3 g_NZ3; // size: 0xC, address: 0x80D6D1D4
// total size: 0x40
struct xMat4x3 : public xMat3x3 {
    // Members
    struct xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
struct xMat4x3 g_I3; // size: 0x40, address: 0x80B7FA80
// total size: 0x10
struct xQuat {
    // Members
    struct xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
struct xQuat g_IQ; // size: 0x10, address: 0x80D6D1E0
// Range: 0x80092900 -> 0x80092A44
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
// Range: 0x80092A44 -> 0x80092B60
void xLine3VecDist2(const struct xVec3 * p1 /* r28 */, const struct xVec3 * p2 /* r29 */, const struct xVec3 * v /* r30 */, struct xIsect * isx /* r31 */) {
    // Local variables
    struct xVec3 ldir; // r1+0x8
    float ldirdotlv; // f31
    float ldirlen2; // f30
    float lvlen2; // f29
}

static float gs_fTolerance; // size: 0x4, address: 0x80D5FDA0
// Range: 0x80092B60 -> 0x800931D0
void xLine3LineMinDist(const struct xVec3 * p1 /* r3 */, const struct xVec3 * p2 /* r4 */, const struct xVec3 * q1 /* r5 */, const struct xVec3 * q2 /* r6 */, float & t /* r7 */, float & u /* r8 */) {
    // Local variables
    float kDiffx; // f19
    float kDiffy; // f18
    float kDiffz; // r1+0x24
    float pDirx; // r1+0x20
    float pDiry; // r1+0x1C
    float pDirz; // r1+0x18
    float qDirx; // f23
    float qDiry; // f22
    float qDirz; // f21
    float fA00; // f27
    float fA01; // f25
    float fA11; // f24
    float fB0; // f28
    float fDet; // f20
    float fB1; // f26
    float fS; // f30
    float fT; // f31
    float fTmp; // f29
    float fInvDet; // r1+0x14

    // References
    // -> static float gs_fTolerance;
}

// Range: 0x800931D0 -> 0x800974F0
void xLine3TriMinDist(const struct xVec3 * p1 /* r30 */, const struct xVec3 * p2 /* r29 */, const struct xVec3 * V0 /* r31 */, const struct xVec3 * V1 /* r27 */, const struct xVec3 * V2 /* r28 */, float & t /* r23 */, float & u /* r24 */, float & v /* r25 */) {
    // Local variables
    float kDiffx; // r1+0x480
    float kDiffy; // r1+0x47C
    float kDiffz; // r1+0x478
    float pDirx; // r1+0x474
    float pDiry; // r1+0x470
    float pDirz; // r1+0x46C
    float edge0x; // f23
    float edge0y; // f22
    float edge0z; // f21
    float edge1x; // f20
    float edge1y; // f19
    float edge1z; // f18
    float fA00; // r1+0x468
    float fA01; // r1+0x464
    float fA02; // r1+0x460
    float fA11; // r1+0x45C
    float fA12; // r1+0x458
    float fA22; // r1+0x454
    float fB0; // r1+0x450
    float fB1; // r1+0x44C
    float fB2; // r1+0x448
    float fSqrDist; // f24
    float fSqrDist0; // f25
    float fR; // r1+0x444
    float fS; // r1+0x440
    float fT; // r1+0x43C
    float fR0; // r1+0x438
    float fS0; // r1+0x434
    float fT0; // r1+0x430
    float kNx; // r1+0x42C
    float kNy; // r1+0x428
    float kNz; // r1+0x424
    float fNSqrLen; // r1+0x420
    float fDot; // r1+0x41C
    int bNotParallel; // r26
    float tp1x; // f31
    float tp1y; // f30
    float tp1z; // f29
    float tp2x; // f28
    float tp2y; // f27
    float tp2z; // f26
    float fCof00; // r1+0x418
    float fCof01; // r1+0x414
    float fCof02; // r1+0x410
    float fCof11; // r1+0x40C
    float fCof12; // r1+0x408
    float fCof22; // r1+0x404
    float fInvDet; // r1+0x400
    float fRhs0; // r1+0x3FC
    float fRhs1; // r1+0x3F8
    float fRhs2; // r1+0x3F4
    float dx__; // r1+0x3F0
    float dy__; // r1+0x3EC
    float dz__; // r1+0x3E8
    float dx__; // r1+0x3E4
    float dy__; // r1+0x3E0
    float dz__; // r1+0x3DC
    float dx__; // r1+0x3D8
    float dy__; // r1+0x3D4
    float dz__; // r1+0x3D0
    float dx__; // r1+0x3CC
    float dy__; // r1+0x3C8
    float dz__; // r1+0x3C4
    float dx__; // r1+0x3C0
    float dy__; // r1+0x3BC
    float dz__; // r1+0x3B8
    float dx__; // r1+0x3B4
    float dy__; // r1+0x3B0
    float dz__; // r1+0x3AC
    float dx__; // r1+0x3A8
    float dy__; // r1+0x3A4
    float dz__; // r1+0x3A0
    float dx__; // r1+0x39C
    float dy__; // r1+0x398
    float dz__; // r1+0x394
    float dx__; // r1+0x390
    float dy__; // r1+0x38C
    float dz__; // r1+0x388
    float dx__; // r1+0x384
    float dy__; // r1+0x380
    float dz__; // r1+0x37C
    float dx__; // r1+0x378
    float dy__; // r1+0x374
    float dz__; // r1+0x370
    float dx__; // r1+0x36C
    float dy__; // r1+0x368
    float dz__; // r1+0x364
    float dx__; // r1+0x360
    float dy__; // r1+0x35C
    float dz__; // r1+0x358
    float dx__; // r1+0x354
    float dy__; // r1+0x350
    float dz__; // r1+0x34C
    float dx__; // r1+0x348
    float dy__; // r1+0x344
    float dz__; // r1+0x340
    float dx__; // r1+0x33C
    float dy__; // r1+0x338
    float dz__; // r1+0x334
    float dx__; // r1+0x330
    float dy__; // r1+0x32C
    float dz__; // r1+0x328
    float dx__; // r1+0x324
    float dy__; // r1+0x320
    float dz__; // r1+0x31C
    float dx__; // r1+0x318
    float dy__; // r1+0x314
    float dz__; // r1+0x310
    float dx__; // r1+0x30C
    float dy__; // r1+0x308
    float dz__; // r1+0x304
    float dx__; // r1+0x300
    float dy__; // r1+0x2FC
    float dz__; // r1+0x2F8
    float dx__; // r1+0x2F4
    float dy__; // r1+0x2F0
    float dz__; // r1+0x2EC
    float dx__; // r1+0x2E8
    float dy__; // r1+0x2E4
    float dz__; // r1+0x2E0
    float dx__; // r1+0x2DC
    float dy__; // r1+0x2D8
    float dz__; // r1+0x2D4
    float dx__; // r1+0x2D0
    float dy__; // r1+0x2CC
    float dz__; // r1+0x2C8
    float dx__; // r1+0x2C4
    float dy__; // r1+0x2C0
    float dz__; // r1+0x2BC
    float dx__; // r1+0x2B8
    float dy__; // r1+0x2B4
    float dz__; // r1+0x2B0
    float dx__; // r1+0x2AC
    float dy__; // r1+0x2A8
    float dz__; // r1+0x2A4
    float dx__; // r1+0x2A0
    float dy__; // r1+0x29C
    float dz__; // r1+0x298
    float dx__; // r1+0x294
    float dy__; // r1+0x290
    float dz__; // r1+0x28C
    float dx__; // r1+0x288
    float dy__; // r1+0x284
    float dz__; // r1+0x280
    float dx__; // r1+0x27C
    float dy__; // r1+0x278
    float dz__; // r1+0x274
    float dx__; // r1+0x270
    float dy__; // r1+0x26C
    float dz__; // r1+0x268
    float dx__; // r1+0x264
    float dy__; // r1+0x260
    float dz__; // r1+0x25C
    float dx__; // r1+0x258
    float dy__; // r1+0x254
    float dz__; // r1+0x250
    float dx__; // r1+0x24C
    float dy__; // r1+0x248
    float dz__; // r1+0x244
    float dx__; // r1+0x240
    float dy__; // r1+0x23C
    float dz__; // r1+0x238
    float dx__; // r1+0x234
    float dy__; // r1+0x230
    float dz__; // r1+0x22C
    float dx__; // r1+0x228
    float dy__; // r1+0x224
    float dz__; // r1+0x220
    float dx__; // r1+0x21C
    float dy__; // r1+0x218
    float dz__; // r1+0x214
    float dx__; // r1+0x210
    float dy__; // r1+0x20C
    float dz__; // r1+0x208
    float dx__; // r1+0x204
    float dy__; // r1+0x200
    float dz__; // r1+0x1FC
    float dx__; // r1+0x1F8
    float dy__; // r1+0x1F4
    float dz__; // r1+0x1F0
    float dx__; // r1+0x1EC
    float dy__; // r1+0x1E8
    float dz__; // r1+0x1E4
    float dx__; // r1+0x1E0
    float dy__; // r1+0x1DC
    float dz__; // r1+0x1D8
    float dx__; // r1+0x1D4
    float dy__; // r1+0x1D0
    float dz__; // r1+0x1CC

    // References
    // -> static float gs_fTolerance;
}

// Range: 0x800974F0 -> 0x800979EC
void xTri3VecMinDist(const struct xVec3 * V0 /* r3 */, const struct xVec3 * V1 /* r4 */, const struct xVec3 * V2 /* r5 */, const struct xVec3 * p /* r6 */, float & s /* r7 */, float & t /* r8 */) {
    // Local variables
    float kDiffx; // r1+0x30
    float kDiffy; // r1+0x2C
    float kDiffz; // r1+0x28
    float edge0x; // f20
    float edge0y; // f19
    float edge0z; // f18
    float edge1x; // r1+0x24
    float edge1y; // r1+0x20
    float edge1z; // r1+0x1C
    float fA00; // f26
    float fA01; // f25
    float fA11; // f27
    float fB0; // f29
    float fB1; // f28
    float fDet; // r1+0x18
    float fS; // f30
    float fT; // f31
    float fInvDet; // r1+0x14
    float fTmp0; // f21
    float fTmp1; // f22
    float fNumer; // f24
    float fDenom; // f23
}

// total size: 0x10
struct xSphere {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// Range: 0x800979EC -> 0x80097AC4
int xPointInBox(const struct xBox * b /* r3 */, const struct xVec3 * p /* r4 */) {}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80D5FDA4
// Range: 0x80097AC4 -> 0x80097E28
void xBoxInitBoundOBB(struct xBox * o /* r29 */, const struct xBox * b /* r31 */, const struct xMat4x3 * m /* r30 */) {
    // Local variables
    struct xVec3 boxcent; // r1+0x8
    float xmax; // f31
    float ymax; // f30
    float zmax; // f29

    // References
    // -> static char __FUNCTION__[17];
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x804F5708
// total size: 0x1C
struct xCapsule {
    // Members
    struct xVec3 start; // offset 0x0, size 0xC
    struct xVec3 end; // offset 0xC, size 0xC
    float r; // offset 0x18, size 0x4
};
// Range: 0x80097E28 -> 0x800980B8
void xBoxInitBoundCapsule(struct xBox * b /* r30 */, const struct xCapsule * c /* r31 */) {
    // References
    // -> static char __FUNCTION__[21];
}

// total size: 0x18
struct xBox {
    // Members
    struct xVec3 upper; // offset 0x0, size 0xC
    struct xVec3 lower; // offset 0xC, size 0xC
};
// Range: 0x800980B8 -> 0x80098114
void xMat3x3Init(struct xMat3x3 * m /* r31 */, const struct xVec3 * _right /* r1+0x8 */, const struct xVec3 * _up /* r1+0xC */, const struct xVec3 * _at /* r1+0x10 */) {}

// Range: 0x80098114 -> 0x800981D4
float xMat3x3NormalError(const struct xMat3x3 * m /* r28 */) {
    // Local variables
    const struct xVec3 * right; // r31
    const struct xVec3 * up; // r30
    const struct xVec3 * at; // r29
    float re; // f31
    float ue; // f30
    float ae; // f29
}

// Range: 0x800981D4 -> 0x80098224
void xMat3x3Normalize(struct xMat3x3 * o /* r30 */, const struct xMat3x3 * m /* r31 */) {}

// Range: 0x80098224 -> 0x80098278
void xMat3x3GetScale(const struct xMat3x3 * m /* r30 */, struct xVec3 * s /* r31 */) {}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80D5FDB5
// Range: 0x80098278 -> 0x800984A4
void xMat3x3GetEuler(const struct xMat3x3 * m /* r31 */, struct xVec3 * a /* r30 */) {
    // Local variables
    float pitch; // f31
    float yaw; // f30
    float roll; // f29

    // References
    // -> static char __FUNCTION__[16];
}

// Range: 0x800984A4 -> 0x800984D8
void xMat4x3MoveLocalRight(struct xMat4x3 * m /* r3 */, float mag /* f1 */) {}

// Range: 0x800984D8 -> 0x8009850C
void xMat4x3MoveLocalUp(struct xMat4x3 * m /* r3 */, float mag /* f1 */) {}

// Range: 0x8009850C -> 0x80098540
void xMat4x3MoveLocalAt(struct xMat4x3 * m /* r3 */, float mag /* f1 */) {}

// Range: 0x80098540 -> 0x80098550
void xMat4x3MoveWorldRight(struct xMat4x3 * m /* r3 */, float mag /* f1 */) {}

// Range: 0x80098550 -> 0x80098560
void xMat4x3MoveWorldUp(struct xMat4x3 * m /* r3 */, float mag /* f1 */) {}

// Range: 0x80098560 -> 0x80098570
void xMat4x3MoveWorldAt(struct xMat4x3 * m /* r3 */, float mag /* f1 */) {}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80D5FDC5
// Range: 0x80098570 -> 0x80098838
float xMat3x3LookVec(struct xMat3x3 * m /* r31 */, const struct xVec3 * at /* r30 */) {
    // Local variables
    float vec_len; // f31

    // References
    // -> static char __FUNCTION__[15];
}

// Range: 0x80098838 -> 0x80098B18
void xMat3x3LookVec2(struct xMat3x3 * m /* r31 */, const struct xVec3 * at /* r1+0x8 */) {}

// Range: 0x80098B18 -> 0x80098CC4
float xMat3x3LookVec4(struct xMat3x3 & mat /* r31 */, float at_x /* f26 */, float at_y /* f27 */, float at_z /* f28 */, const struct xVec3 & hint_right /* r30 */) {
    // Local variables
    float mag2; // f30
    float mag; // f29
    float imag; // f31

    // References
    // -> struct xMat4x3 g_I3;
}

// Range: 0x80098CC4 -> 0x80098E70
float xMat3x3LookVec5(struct xMat3x3 & mat /* r31 */, float at_x /* f26 */, float at_y /* f27 */, float at_z /* f28 */, const struct xVec3 & hint_up /* r30 */) {
    // Local variables
    float mag2; // f30
    float mag; // f29
    float imag; // f31

    // References
    // -> struct xMat4x3 g_I3;
}

// Range: 0x80098E70 -> 0x80098EB0
void xMat3x3Euler(struct xMat3x3 * m /* r1+0x8 */, const struct xVec3 * ypr /* r31 */) {}

// Range: 0x80098EB0 -> 0x80099030
void xMat3x3Euler(struct xMat3x3 * m /* r31 */, float yaw /* f23 */, float pitch /* f24 */, float roll /* f25 */) {
    // Local variables
    float sy; // f31
    float cy; // f30
    float sp; // f29
    float cp; // f26
    float sr; // f28
    float cr; // f27
}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80D5FDD4
// Range: 0x80099030 -> 0x80099218
void xMat3x3RotC(struct xMat3x3 * m /* r31 */, float _x /* f28 */, float _y /* f29 */, float _z /* f30 */, float t /* f25 */) {
    // Local variables
    float a; // f26
    float b; // f27
    float c; // f31

    // References
    // -> static char __FUNCTION__[12];
}

// Range: 0x80099218 -> 0x800992C4
void xMat3x3RotX(struct xMat3x3 * m /* r31 */, float t /* f29 */) {
    // Local variables
    float a; // f31
    float b; // f30

    // References
    // -> struct xVec3 g_X3;
}

// Range: 0x800992C4 -> 0x80099370
void xMat3x3RotY(struct xMat3x3 * m /* r31 */, float t /* f29 */) {
    // Local variables
    float a; // f31
    float b; // f30

    // References
    // -> struct xVec3 g_Y3;
}

// Range: 0x80099370 -> 0x8009941C
void xMat3x3RotZ(struct xMat3x3 * m /* r31 */, float t /* f29 */) {
    // Local variables
    float a; // f31
    float b; // f30

    // References
    // -> struct xVec3 g_Z3;
}

// Range: 0x8009941C -> 0x80099490
void xMat3x3ScaleC(struct xMat3x3 * m /* r31 */, float x /* r1+0x8 */, float y /* r1+0xC */, float z /* r1+0x10 */) {}

// Range: 0x80099490 -> 0x8009962C
void xMat3x3LMulRotX(struct xMat3x3 * o /* r31 */, const struct xMat3x3 * m /* r30 */, float t /* f28 */) {
    // Local variables
    float a; // f31
    float b; // f30
    float temp; // f29
}

// Range: 0x8009962C -> 0x800997C8
void xMat3x3LMulRotY(struct xMat3x3 * o /* r31 */, const struct xMat3x3 * m /* r30 */, float t /* f28 */) {
    // Local variables
    float a; // f31
    float b; // f30
    float temp; // f29
}

// Range: 0x800997C8 -> 0x80099970
void xMat3x3RMulRotY(struct xMat3x3 * o /* r31 */, const struct xMat3x3 * m /* r30 */, float t /* f28 */) {
    // Local variables
    float a; // f31
    float b; // f30
    float temp; // f29
}

// Range: 0x80099970 -> 0x80099A38
void xMat3x3Transpose(struct xMat3x3 * o /* r3 */, const struct xMat3x3 * m /* r4 */) {
    // Local variables
    float temp; // f31
    float temp; // f30
    float temp; // f29
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
// Range: 0x80099A38 -> 0x80099C28
void xMat3x3Mul(struct xMat3x3 * o /* r28 */, const struct xMat3x3 * a /* r30 */, const struct xMat3x3 * b /* r31 */) {
    // Local variables
    struct xMat3x3 temp; // r1+0x10
    struct xMat3x3 * tp; // r29
    unsigned int usetemp; // r27
}

// Range: 0x80099C28 -> 0x80099CEC
void xMat3x3LMulVec(struct xVec3 * o /* r3 */, const struct xMat3x3 * m /* r4 */, const struct xVec3 * v /* r5 */) {
    // Local variables
    float x; // f31
    float y; // f30
    float z; // f29
}

// Range: 0x80099CEC -> 0x80099DEC
void xMat3x3Tolocal(struct xVec3 * o /* r30 */, const struct xMat3x3 * m /* r31 */, const struct xVec3 * v /* r1+0x8 */) {
    // Local variables
    float sx2; // f31
    float sy2; // f30
    float sz2; // f29
}

// Range: 0x80099DEC -> 0x80099E84
void xMat4x3Rot(struct xMat4x3 * m /* r30 */, const struct xVec3 * a /* r31 */, float t /* r1+0x10 */, const struct xVec3 * p /* r29 */) {
    // Local variables
    struct xMat4x3 temp; // r1+0x20
}

// Range: 0x80099E84 -> 0x80099EF0
void xMat4x3Mul(struct xMat4x3 * o /* r29 */, const struct xMat4x3 * a /* r30 */, const struct xMat4x3 * b /* r31 */) {
    // Local variables
    struct xVec3 pos; // r1+0x8
}

// Range: 0x80099EF0 -> 0x80099F44
void xMat4x3RMul3x3(struct xMat4x3 * o /* r30 */, const struct xMat3x3 * m3x3 /* r1+0x8 */, const struct xMat4x3 * m /* r31 */) {}

static int nxt[3]; // size: 0xC, address: 0x80D5FDE0
// Range: 0x80099F44 -> 0x8009A204
void xQuatFromMat(struct xQuat * q /* r29 */, const struct xMat3x3 * m /* r30 */) {
    // Local variables
    float * mp; // r31
    float * qvp; // r26
    float tr; // f30
    float root; // f31
    int i; // r28
    int j; // r27
    int k; // r25

    // References
    // -> struct xQuat g_IQ;
    // -> static int nxt[3];
}

// Range: 0x8009A204 -> 0x8009A2FC
void xQuatFromAxisAngle(struct xQuat * q /* r31 */, const struct xVec3 * a /* r1+0x8 */, float t /* f29 */) {
    // Local variables
    float t_2; // f31
    float st_2; // f30

    // References
    // -> struct xQuat g_IQ;
}

// Range: 0x8009A2FC -> 0x8009A53C
void xQuatToMat(const struct xQuat * q /* r31 */, struct xMat3x3 * m /* r30 */) {
    // Local variables
    float tx; // f29
    float ty; // f30
    float tz; // f31
    float tsx; // f28
    float tsy; // f27
    float tsz; // f26
    float txx; // f25
    float txy; // f24
    float txz; // f23
    float tyy; // f22
    float tyz; // f21
    float tzz; // f20
}

// Range: 0x8009A53C -> 0x8009A624
float xQuatNormalize(struct xQuat * o /* r30 */, const struct xQuat * q /* r31 */) {
    // Local variables
    float one_len; // f29
    float len; // f30
    float len2; // f31

    // References
    // -> struct xQuat g_IQ;
}

// Range: 0x8009A624 -> 0x8009A954
void xQuatSlerp(struct xQuat * o /* r30 */, const struct xQuat * a /* r29 */, const struct xQuat * b /* r31 */, float t /* f31 */) {
    // Local variables
    float asph; // f28
    float bsph; // f27
    float one_sintheta; // f26
    float theta; // f29
    float abdot; // f30
    struct xQuat aerp; // r1+0x28
    struct xQuat berp; // r1+0x18
    struct xQuat b2; // r1+0x8
}

// Range: 0x8009A954 -> 0x8009AB88
void xQuatMul(struct xQuat * o /* r29 */, const struct xQuat * a /* r30 */, const struct xQuat * b /* r31 */) {
    // Local variables
    float _s; // f31
    float _x; // f30
    float _y; // f29
    float _z; // f28
}

// Range: 0x8009AB88 -> 0x8009AC64
unsigned char xVec3Rotate(struct xMat3x3 * o /* r1+0x8 */, const struct xVec3 * a /* r30 */, const struct xVec3 * b /* r31 */, float l /* f29 */) {
    // Local variables
    float dot; // f30
    struct xVec3 axis; // r1+0xC
    float angle; // f31
}

// Range: 0x8009AC64 -> 0x8009AD20
void xVec3RotateOnAxis(struct xVec3 & o /* r1+0x8 */, const struct xVec3 & v /* r30 */, const struct xVec3 & axis /* r31 */, float theta /* f30 */) {
    // Local variables
    struct xVec3 temp; // r1+0x18
    float cosTheta; // f31
    struct xVec3 axisCrossV; // r1+0xC
}

// total size: 0xA0
struct xConic {
    // Members
    struct xMat4x3 basis; // offset 0x0, size 0x40
    struct xMat4x3 invbasis; // offset 0x40, size 0x40
    float coef[5]; // offset 0x80, size 0x14
    struct xVec3 coneBasisCenter; // offset 0x94, size 0xC
};
// Range: 0x8009AD20 -> 0x8009AD94
unsigned char xVec3Eq(const struct xVec3 & a /* r3 */, const struct xVec3 & b /* r4 */, float tol /* f1 */) {
    // Local variables
    const float * fa; // r30
    const float * fb; // r29
    int i; // r31
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

