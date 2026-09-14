/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\gc\iMath3.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80110D34 -> 0x8011385C
*/
// Range: 0x80110D34 -> 0x80110D38
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
static char __FUNCTION__[16]; // size: 0x10, address: 0x80D617D8
// Range: 0x80110D38 -> 0x80110EB4
void iSphereIsectVec(const struct xSphere * s /* r30 */, const struct xVec3 * v /* r29 */, struct xIsect * isx /* r31 */) {
    // References
    // -> static char __FUNCTION__[16];
}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80D617E8
// total size: 0x24
struct xRay3 {
    // Members
    struct xVec3 origin; // offset 0x0, size 0xC
    struct xVec3 dir; // offset 0xC, size 0xC
    float min_t; // offset 0x18, size 0x4
    float max_t; // offset 0x1C, size 0x4
    int flags; // offset 0x20, size 0x4
};
// Range: 0x80110EB4 -> 0x80111294
void iSphereIsectRay(const struct xSphere * s /* r29 */, const struct xRay3 * r /* r30 */, struct xIsect * isx /* r31 */) {
    // Local variables
    float t_in; // r1+0xC
    float t_out; // r1+0x8
    unsigned int num; // r28
    float a; // f31

    // References
    // -> static char __FUNCTION__[16];
}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80D617F8
// Range: 0x80111294 -> 0x80111428
void iSphereIsectSphere(const struct xSphere * s /* r30 */, const struct xSphere * p /* r29 */, struct xIsect * isx /* r31 */) {
    // References
    // -> static char __FUNCTION__[19];
}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80D6180B
// Range: 0x80111428 -> 0x80111524
void iSphereInitBoundVec(struct xSphere * s /* r31 */, const struct xVec3 * v /* r30 */) {
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
static char __FUNCTION__[20]; // size: 0x14, address: 0x80D6181F
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
// Range: 0x80111524 -> 0x801117E8
void iSphereInitBoundOBB(struct xSphere * s /* r30 */, const struct xBox * b /* r29 */, const struct xMat4x3 * m /* r31 */) {
    // Local variables
    struct xVec3 r; // r1+0x8

    // References
    // -> static char __FUNCTION__[20];
}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80D61833
// total size: 0x10
struct xSphere {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// Range: 0x801117E8 -> 0x80111A10
void iSphereBoundVec(struct xSphere * o /* r29 */, const struct xSphere * s /* r30 */, const struct xVec3 * v /* r27 */) {
    // Local variables
    struct xIsect isx; // r1+0x18
    float scale; // f31
    struct xSphere temp; // r1+0x8
    struct xSphere * tp; // r31
    unsigned int usetemp; // r28

    // References
    // -> static char __FUNCTION__[16];
}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80D61843
// Range: 0x80111A10 -> 0x80111C74
void iSphereBoundSphere(struct xSphere * o /* r28 */, const struct xSphere * a /* r31 */, const struct xSphere * b /* r29 */) {
    // Local variables
    struct xIsect isx; // r1+0x18
    float scale; // f31
    struct xSphere temp; // r1+0x8
    struct xSphere * tp; // r30
    unsigned int usetemp; // r27

    // References
    // -> static char __FUNCTION__[19];
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80D61856
// total size: 0x14
struct xCylinder {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
// Range: 0x80111C74 -> 0x80111E54
void iCylinderIsectVec(const struct xCylinder * c /* r31 */, const struct xVec3 * v /* r30 */, struct xIsect * isx /* r29 */) {
    // Local variables
    float a; // f31
    float b; // f30

    // References
    // -> static char __FUNCTION__[18];
}

// total size: 0x8
struct xVec2 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// Range: 0x80111E54 -> 0x801127CC
void iBoxVecDist(const struct xBox * box /* r29 */, const struct xVec3 * v /* r30 */, struct xIsect * isx /* r31 */) {}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80D61868
// Range: 0x801127CC -> 0x801129A8
void iBoxIsectVec(const struct xBox * b /* r30 */, const struct xVec3 * v /* r31 */, struct xIsect * isx /* r29 */) {
    // References
    // -> static char __FUNCTION__[13];
}

// Range: 0x801129A8 -> 0x80112A48
static unsigned int ClipPlane(float denom /* f1 */, float numer /* f2 */, float * t_in /* r3 */, float * t_out /* r4 */) {}

// Range: 0x80112A48 -> 0x80112BBC
static unsigned int ClipBox(const struct xVec3 * E /* r29 */, const struct xVec3 * P /* r30 */, const struct xVec3 * D /* r31 */, float * t_in /* r27 */, float * t_out /* r28 */) {}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80D61875
// Range: 0x80112BBC -> 0x80113020
void iBoxIsectRay(const struct xBox * b /* r30 */, const struct xRay3 * r /* r29 */, struct xIsect * isx /* r31 */) {
    // Local variables
    float t_in; // r1+0xC
    float t_out; // r1+0x8
    struct xVec3 E; // r1+0x1C
    struct xVec3 P; // r1+0x10
    float a; // f31

    // References
    // -> static char __FUNCTION__[13];
}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80D61882
// Range: 0x80113020 -> 0x801134DC
void iBoxIsectSphere(const struct xBox * box /* r31 */, const struct xSphere * p /* r30 */, struct xIsect * isx /* r29 */) {
    // Local variables
    struct xVec3 a; // r1+0x44
    struct xVec3 b; // r1+0x38
    unsigned int xcode; // r28
    unsigned int ycode; // r27
    unsigned int zcode; // r26
    unsigned int xcm; // r1+0x28
    unsigned int ycm; // r1+0x24
    unsigned int zcm; // r1+0x20
    struct xVec3 bc; // r1+0x2C

    // References
    // -> static char __FUNCTION__[16];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80D61892
// Range: 0x801134DC -> 0x801135DC
void iBoxInitBoundVec(struct xBox * b /* r30 */, const struct xVec3 * v /* r31 */) {
    // References
    // -> static char __FUNCTION__[17];
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80D618A3
// Range: 0x801135DC -> 0x8011385C
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

