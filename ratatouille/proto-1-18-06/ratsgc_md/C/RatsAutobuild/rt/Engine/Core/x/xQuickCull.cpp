/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xQuickCull.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800597D8 -> 0x80059F74
*/
// total size: 0x3C
struct xQCControl {
    // Members
    float world_xmin; // offset 0x0, size 0x4
    float world_ymin; // offset 0x4, size 0x4
    float world_zmin; // offset 0x8, size 0x4
    float world_xmax; // offset 0xC, size 0x4
    float world_ymax; // offset 0x10, size 0x4
    float world_zmax; // offset 0x14, size 0x4
    float world_xsz; // offset 0x18, size 0x4
    float world_ysz; // offset 0x1C, size 0x4
    float world_zsz; // offset 0x20, size 0x4
    float scale_x; // offset 0x24, size 0x4
    float scale_y; // offset 0x28, size 0x4
    float scale_z; // offset 0x2C, size 0x4
    float center_x; // offset 0x30, size 0x4
    float center_y; // offset 0x34, size 0x4
    float center_z; // offset 0x38, size 0x4
};
struct xQCControl xqc_def_ctrl; // size: 0x3C, address: 0x803C1280
// Range: 0x800597D8 -> 0x800598B8
void xQuickCullInit(struct xQCControl * ctrl /* r0 */, float xmin /* f0 */, float ymin /* f0 */, float zmin /* f0 */, float xmax /* f0 */, float ymax /* f0 */, float zmax /* f0 */) {}

// Range: 0x800598B8 -> 0x800598F0
void xQuickCullInit(struct xQCControl * ctrl /* r0 */, const struct xBox * box /* r0 */) {}

// Range: 0x800598F0 -> 0x80059990
int xQuickCullIsects(const struct xQCData * a /* r0 */, const struct xQCData * b /* r0 */) {}

// total size: 0x10
struct xSphere {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// total size: 0x24
struct xBBox {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    struct xBox box; // offset 0xC, size 0x18
};
// total size: 0x14
struct xCylinder {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
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
// total size: 0x4C
struct xBound {
    // Members
    struct xQCData qcd; // offset 0x0, size 0x20
    unsigned char type; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    union { // inferred
        struct xSphere sph; // offset 0x24, size 0x10
        struct xBBox box; // offset 0x24, size 0x24
        struct xCylinder cyl; // offset 0x24, size 0x14
    };
    struct xMat4x3 * mat; // offset 0x48, size 0x4
};
// total size: 0x18
struct xBox {
    // Members
    struct xVec3 upper; // offset 0x0, size 0xC
    struct xVec3 lower; // offset 0xC, size 0xC
};
// Range: 0x80059990 -> 0x80059A24
void xQuickCullForBound(struct xQCControl * ctrl /* r30 */, struct xQCData * q /* r31 */, const struct xBound * b /* r5 */) {
    // Local variables
    struct xBox box; // r1+0x8
}

// Range: 0x80059A24 -> 0x80059B54
static void xQuickCullCellForVec(struct xQCControl * ctrl /* r0 */, struct xQCData * c /* r0 */, const struct xVec3 * v /* r0 */) {}

// Range: 0x80059B54 -> 0x80059C28
static void xQuickCullCellMerge(struct xQCData * o /* r0 */, const struct xQCData * a /* r0 */, const struct xQCData * b /* r0 */) {}

// total size: 0x20
struct xQCData {
    // Members
    signed char xmin; // offset 0x0, size 0x1
    signed char ymin; // offset 0x1, size 0x1
    signed char zmin; // offset 0x2, size 0x1
    signed char zmin_dup; // offset 0x3, size 0x1
    signed char xmax; // offset 0x4, size 0x1
    signed char ymax; // offset 0x5, size 0x1
    signed char zmax; // offset 0x6, size 0x1
    signed char zmax_dup; // offset 0x7, size 0x1
    struct xVec3 min; // offset 0x8, size 0xC
    struct xVec3 max; // offset 0x14, size 0xC
};
// Range: 0x80059C28 -> 0x80059C80
void xQuickCullForLine(struct xQCControl * ctrl /* r29 */, struct xQCData * q /* r30 */, const struct xLine3 * ln /* r31 */) {
    // Local variables
    struct xQCData a; // r1+0x28
    struct xQCData b; // r1+0x8
}

// total size: 0x24
struct xRay3 {
    // Members
    struct xVec3 origin; // offset 0x0, size 0xC
    struct xVec3 dir; // offset 0xC, size 0xC
    float min_t; // offset 0x18, size 0x4
    float max_t; // offset 0x1C, size 0x4
    int flags; // offset 0x20, size 0x4
};
// total size: 0x18
struct xLine3 {
    // Members
    struct xVec3 p1; // offset 0x0, size 0xC
    struct xVec3 p2; // offset 0xC, size 0xC
};
// Range: 0x80059C80 -> 0x80059DE0
void xQuickCullForRay(struct xQCControl * ctrl /* r29 */, struct xQCData * q /* r30 */, const struct xRay3 * r /* r0 */) {
    // Local variables
    struct xLine3 ln; // r1+0x48
    float len; // f3
    struct xQCData a; // r1+0x28
    struct xQCData b; // r1+0x8
}

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
// Range: 0x80059DE0 -> 0x80059EA0
void xQuickCullForSphere(struct xQCControl * ctrl /* r30 */, struct xQCData * q /* r31 */, const struct xSphere * s /* r0 */) {
    // Local variables
    struct xVec3 v1; // r1+0x14
    struct xVec3 v2; // r1+0x8
    float radius_adjusted; // f8
    struct xQCData a; // r1+0x40
    struct xQCData b; // r1+0x20
}

// Range: 0x80059EA0 -> 0x80059EFC
void xQuickCullForBox(struct xQCControl * ctrl /* r29 */, struct xQCData * q /* r30 */, const struct xBox * box /* r31 */) {
    // Local variables
    struct xQCData a; // r1+0x28
    struct xQCData b; // r1+0x8
}

// Range: 0x80059EFC -> 0x80059F48
void xQuickCullForOBB(struct xQCControl * ctrl /* r30 */, struct xQCData * q /* r31 */, const struct xBox * b /* r5 */, const struct xMat4x3 * m /* r6 */) {
    // Local variables
    struct xBox worldbox; // r1+0x8
}

// Range: 0x80059F48 -> 0x80059F74
void xQuickCullForEverything(struct xQCData * q /* r0 */) {}


