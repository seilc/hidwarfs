/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\gc\iMath3.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800DD990 -> 0x800DFB4C
*/
// Range: 0x800DD990 -> 0x800DD994
void iMath3Init() {}

// total size: 0x24
struct xTri3 {
    // Members
    struct xVec3 p1; // offset 0x0, size 0xC
    struct xVec3 p2; // offset 0xC, size 0xC
    struct xVec3 p3; // offset 0x18, size 0xC
};
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
static char __FUNCTION__[16]; // size: 0x10, address: 0x80BFF110
// Range: 0x800DD994 -> 0x800DDAE0
void iSphereIsectVec(const struct xSphere * s /* r29 */, const struct xVec3 * v /* r30 */, struct xIsect * isx /* r31 */) {
    // References
    // -> static char __FUNCTION__[16];
}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80BFF120
// total size: 0x24
struct xRay3 {
    // Members
    struct xVec3 origin; // offset 0x0, size 0xC
    struct xVec3 dir; // offset 0xC, size 0xC
    float min_t; // offset 0x18, size 0x4
    float max_t; // offset 0x1C, size 0x4
    int flags; // offset 0x20, size 0x4
};
// Range: 0x800DDAE0 -> 0x800DDD88
void iSphereIsectRay(const struct xSphere * s /* r29 */, const struct xRay3 * r /* r30 */, struct xIsect * isx /* r31 */) {
    // Local variables
    float t_in; // r1+0xC
    float t_out; // r1+0x8
    unsigned int num; // r0

    // References
    // -> static char __FUNCTION__[16];
}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80BFF130
// Range: 0x800DDD88 -> 0x800DDEEC
void iSphereIsectSphere(const struct xSphere * s /* r29 */, const struct xSphere * p /* r30 */, struct xIsect * isx /* r31 */) {
    // References
    // -> static char __FUNCTION__[19];
}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80BFF144
// Range: 0x800DDEEC -> 0x800DDFC8
void iSphereInitBoundVec(struct xSphere * s /* r30 */, const struct xVec3 * v /* r31 */) {
    // References
    // -> static char __FUNCTION__[20];
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
// total size: 0x18
struct xBox {
    // Members
    struct xVec3 upper; // offset 0x0, size 0xC
    struct xVec3 lower; // offset 0xC, size 0xC
};
static char __FUNCTION__[20]; // size: 0x14, address: 0x80BFF158
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
// total size: 0x40
struct xMat4x3 : public xMat3x3 {
    // Members
    struct xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// Range: 0x800DDFC8 -> 0x800DE224
void iSphereInitBoundOBB(struct xSphere * s /* r29 */, const struct xBox * b /* r30 */, const struct xMat4x3 * m /* r31 */) {
    // References
    // -> static char __FUNCTION__[20];
}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80BFF16C
// total size: 0x10
struct xSphere {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// Range: 0x800DE224 -> 0x800DE41C
void iSphereBoundVec(struct xSphere * o /* r30 */, const struct xSphere * s /* r31 */, const struct xVec3 * v /* r28 */) {
    // Local variables
    struct xIsect isx; // r1+0x18
    struct xSphere temp; // r1+0x8
    struct xSphere * tp; // r29
    unsigned int usetemp; // r28

    // References
    // -> static char __FUNCTION__[16];
}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80BFF17C
// Range: 0x800DE41C -> 0x800DE638
void iSphereBoundSphere(struct xSphere * o /* r29 */, const struct xSphere * a /* r30 */, const struct xSphere * b /* r31 */) {
    // Local variables
    struct xIsect isx; // r1+0x18
    struct xSphere temp; // r1+0x8
    struct xSphere * tp; // r28
    unsigned int usetemp; // r27

    // References
    // -> static char __FUNCTION__[19];
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80BFF190
// total size: 0x14
struct xCylinder {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
// Range: 0x800DE638 -> 0x800DE7BC
void iCylinderIsectVec(const struct xCylinder * c /* r29 */, const struct xVec3 * v /* r30 */, struct xIsect * isx /* r31 */) {
    // Local variables
    float b; // f1

    // References
    // -> static char __FUNCTION__[18];
}

// total size: 0x8
struct xVec2 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// Range: 0x800DE7BC -> 0x800DEF20
void iBoxVecDist(const struct xBox * box /* r0 */, const struct xVec3 * v /* r0 */, struct xIsect * isx /* r31 */) {}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80BFF1A4
// Range: 0x800DEF20 -> 0x800DF0C0
void iBoxIsectVec(const struct xBox * b /* r29 */, const struct xVec3 * v /* r30 */, struct xIsect * isx /* r31 */) {
    // References
    // -> static char __FUNCTION__[13];
}

// Range: 0x800DF0C0 -> 0x800DF154
static unsigned int ClipPlane(float denom /* f0 */, float numer /* f0 */, float * t_in /* r0 */, float * t_out /* r0 */) {}

// Range: 0x800DF154 -> 0x800DF288
static unsigned int ClipBox(const struct xVec3 * E /* r26 */, const struct xVec3 * P /* r27 */, const struct xVec3 * D /* r28 */, float * t_in /* r29 */, float * t_out /* r30 */) {}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80BFF1B4
// Range: 0x800DF288 -> 0x800DF530
void iBoxIsectRay(const struct xBox * b /* r29 */, const struct xRay3 * r /* r30 */, struct xIsect * isx /* r31 */) {
    // Local variables
    float t_in; // r1+0xC
    float t_out; // r1+0x8
    struct xVec3 E; // r1+0x1C
    struct xVec3 P; // r1+0x10

    // References
    // -> static char __FUNCTION__[13];
}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80BFF1C4
// Range: 0x800DF530 -> 0x800DF8AC
void iBoxIsectSphere(const struct xBox * box /* r28 */, const struct xSphere * p /* r29 */, struct xIsect * isx /* r30 */) {
    // Local variables
    unsigned int xcode; // r0
    unsigned int ycode; // r0
    unsigned int zcode; // r0
    struct xVec3 bc; // r1+0x8

    // References
    // -> static char __FUNCTION__[16];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80BFF1D4
// Range: 0x800DF8AC -> 0x800DF98C
void iBoxInitBoundVec(struct xBox * b /* r30 */, const struct xVec3 * v /* r31 */) {
    // References
    // -> static char __FUNCTION__[17];
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80BFF1E8
// Range: 0x800DF98C -> 0x800DFB4C
void iBoxBoundVec(struct xBox * o /* r29 */, const struct xBox * b /* r30 */, const struct xVec3 * v /* r31 */) {
    // References
    // -> static char __FUNCTION__[13];
}

// total size: 0x10
class xPlane {
    // Members
public:
    struct xVec3 norm; // offset 0x0, size 0xC
    float d; // offset 0xC, size 0x4
};

