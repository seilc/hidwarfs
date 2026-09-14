/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xQuickCull.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C6A14 -> 0x800C7F40
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
struct xQCControl xqc_def_ctrl; // size: 0x3C, address: 0x80B953F8
static unsigned int dbg_regs; // size: 0x4, address: 0x80D69660
static unsigned int dbg_comps; // size: 0x4, address: 0x80D69664
static unsigned int dbg_culls; // size: 0x4, address: 0x80D69668
static char __FUNCTION__[15]; // size: 0xF, address: 0x80D607D8
// Range: 0x800C6A14 -> 0x800C6D64
void xQuickCullInit(struct xQCControl * ctrl /* r31 */, float xmin /* f26 */, float ymin /* f27 */, float zmin /* f28 */, float xmax /* f29 */, float ymax /* f30 */, float zmax /* f31 */) {
    // References
    // -> static char __FUNCTION__[15];
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80D607E7
// Range: 0x800C6D64 -> 0x800C6E08
void xQuickCullInit(struct xQCControl * ctrl /* r1+0x8 */, const struct xBox * box /* r31 */) {
    // References
    // -> static char __FUNCTION__[15];
}

// Range: 0x800C6E08 -> 0x800C6F20
int xQuickCullIsects(const struct xQCData * a /* r3 */, const struct xQCData * b /* r4 */) {
    // Local variables
    int result; // r31

    // References
    // -> static unsigned int dbg_comps;
    // -> static unsigned int dbg_culls;
}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80D607F6
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
// Range: 0x800C6F20 -> 0x800C7044
void xQuickCullForBound(struct xQCControl * ctrl /* r30 */, struct xQCData * q /* r29 */, const struct xBound * b /* r31 */) {
    // Local variables
    struct xBox box; // r1+0x8

    // References
    // -> static char __FUNCTION__[19];
}

// Range: 0x800C7044 -> 0x800C72A8
static void xQuickCullCellForVec(struct xQCControl * ctrl /* r3 */, struct xQCData * c /* r4 */, const struct xVec3 * v /* r5 */) {}

// Range: 0x800C72A8 -> 0x800C73BC
static void xQuickCullCellMerge(struct xQCData * o /* r3 */, const struct xQCData * a /* r4 */, const struct xQCData * b /* r5 */) {}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80D60809
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
// Range: 0x800C73BC -> 0x800C753C
void xQuickCullForLine(struct xQCControl * ctrl /* r30 */, struct xQCData * q /* r29 */, const struct xLine3 * ln /* r31 */) {
    // Local variables
    struct xQCData a; // r1+0x28
    struct xQCData b; // r1+0x8

    // References
    // -> static char __FUNCTION__[18];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80D6081B
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
// Range: 0x800C753C -> 0x800C7850
void xQuickCullForRay(struct xQCControl * ctrl /* r30 */, struct xQCData * q /* r29 */, const struct xRay3 * r /* r31 */) {
    // Local variables
    struct xLine3 ln; // r1+0x54
    struct xVec3 delta; // r1+0x8
    float len; // f31
    struct xQCData a; // r1+0x34
    struct xQCData b; // r1+0x14

    // References
    // -> static char __FUNCTION__[17];
}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80D6082C
// Range: 0x800C7850 -> 0x800C7AB0
void xQuickCullForSphere(struct xQCControl * ctrl /* r30 */, struct xQCData * q /* r29 */, const struct xSphere * s /* r31 */) {
    // Local variables
    struct xVec3 v1; // r1+0x14
    struct xVec3 v2; // r1+0x8
    float radius_adjusted; // f31
    struct xQCData a; // r1+0x40
    struct xQCData b; // r1+0x20

    // References
    // -> static char __FUNCTION__[20];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80D60840
// Range: 0x800C7AB0 -> 0x800C7C30
void xQuickCullForBox(struct xQCControl * ctrl /* r30 */, struct xQCData * q /* r29 */, const struct xBox * box /* r31 */) {
    // Local variables
    struct xQCData a; // r1+0x28
    struct xQCData b; // r1+0x8

    // References
    // -> static char __FUNCTION__[17];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80D60851
// Range: 0x800C7C30 -> 0x800C7CDC
void xQuickCullForOBB(struct xQCControl * ctrl /* r31 */, struct xQCData * q /* r1+0x8 */, const struct xBox * b /* r1+0xC */, const struct xMat4x3 * m /* r1+0x10 */) {
    // Local variables
    struct xBox worldbox; // r1+0x14

    // References
    // -> static char __FUNCTION__[17];
}

// Range: 0x800C7CDC -> 0x800C7D20
void xQuickCullForEverything(struct xQCData * q /* r3 */) {}

// Range: 0x800C7D20 -> 0x800C7E94
void xQuickCullDebugCB() {
    // References
    // -> static unsigned int dbg_comps;
    // -> static unsigned int dbg_culls;
    // -> struct xQCControl xqc_def_ctrl;
}

// Range: 0x800C7E94 -> 0x800C7EB0
void xQuickCullDebugUpdate() {
    // References
    // -> static unsigned int dbg_culls;
    // -> static unsigned int dbg_comps;
    // -> static unsigned int dbg_regs;
}

static char __FUNCTION__[24]; // size: 0x18, address: 0x80511548
// Range: 0x800C7EB0 -> 0x800C7F40
void xQuickCullDebugRegister(const struct xQCData * q /* r1+0x8 */) {
    // References
    // -> static unsigned int dbg_regs;
    // -> static char __FUNCTION__[24];
}


