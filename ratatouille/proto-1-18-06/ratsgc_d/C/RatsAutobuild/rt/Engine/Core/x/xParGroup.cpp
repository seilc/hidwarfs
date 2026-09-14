/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xParGroup.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B7274 -> 0x800B8484
*/
static int sParGroupRegTableInit; // size: 0x4, address: 0x80D693F8
static int sParGroupRegTableCount; // size: 0x4, address: 0x80D693FC
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
// total size: 0x8
struct xBaseAsset {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x14
struct xPECircle {
    // Members
    float radius; // offset 0x0, size 0x4
    float deflection; // offset 0x4, size 0x4
    struct xVec3 dir; // offset 0x8, size 0xC
};
// total size: 0x4
struct xPESphere {
    // Members
    float radius; // offset 0x0, size 0x4
};
// total size: 0x8
struct xPERect {
    // Members
    float x_len; // offset 0x0, size 0x4
    float z_len; // offset 0x4, size 0x4
};
// total size: 0x1C
struct xPELine {
    // Members
    struct xVec3 pos1; // offset 0x0, size 0xC
    struct xVec3 pos2; // offset 0xC, size 0xC
    float radius; // offset 0x18, size 0x4
};
// total size: 0x4
struct xPEVolume {
    // Members
    unsigned int emit_volumeID; // offset 0x0, size 0x4
};
// total size: 0xC
struct xPEOffsetPoint {
    // Members
    struct xVec3 offset; // offset 0x0, size 0xC
};
// total size: 0xC
struct xPEVCyl {
    // Members
    float height; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
};
// total size: 0x18
struct xPEEntBone {
    // Members
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char type; // offset 0x1, size 0x1
    unsigned char bone; // offset 0x2, size 0x1
    unsigned char pad1; // offset 0x3, size 0x1
    struct xVec3 offset; // offset 0x4, size 0xC
    float radius; // offset 0x10, size 0x4
    float deflection; // offset 0x14, size 0x4
};
// total size: 0xC
struct xPEEntBound {
    // Members
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char type; // offset 0x1, size 0x1
    unsigned char pad1; // offset 0x2, size 0x1
    unsigned char pad2; // offset 0x3, size 0x1
    float expand; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
};
// total size: 0x54
struct xParEmitterAsset : public xBaseAsset {
    // Members
    unsigned char emit_flags; // offset 0x8, size 0x1
    unsigned char emit_type; // offset 0x9, size 0x1
    unsigned short pad; // offset 0xA, size 0x2
    unsigned int propID; // offset 0xC, size 0x4
    union { // inferred
        struct xPECircle e_circle; // offset 0x10, size 0x14
        struct xPESphere e_sphere; // offset 0x10, size 0x4
        struct xPERect e_rect; // offset 0x10, size 0x8
        struct xPELine e_line; // offset 0x10, size 0x1C
        struct xPEVolume e_volume; // offset 0x10, size 0x4
        struct xPEOffsetPoint e_offsetp; // offset 0x10, size 0xC
        struct xPEVCyl e_vcyl; // offset 0x10, size 0xC
        struct xPEEntBone e_entbone; // offset 0x10, size 0x18
        struct xPEEntBound e_entbound; // offset 0x10, size 0xC
    };
    unsigned int attachToID; // offset 0x2C, size 0x4
    struct xVec3 pos; // offset 0x30, size 0xC
    struct xVec3 vel; // offset 0x3C, size 0xC
    float vel_angle_variation; // offset 0x48, size 0x4
    unsigned int cull_mode; // offset 0x4C, size 0x4
    float cull_dist_sqr; // offset 0x50, size 0x4
};
// total size: 0x70
struct xPar {
    // Members
    struct xPar * m_next; // offset 0x0, size 0x4
    struct xPar * m_prev; // offset 0x4, size 0x4
    float m_lifetime; // offset 0x8, size 0x4
    unsigned char m_c[4]; // offset 0xC, size 0x4
    struct xVec3 m_pos; // offset 0x10, size 0xC
    float m_size; // offset 0x1C, size 0x4
    struct xVec3 m_vel; // offset 0x20, size 0xC
    float m_sizeVel; // offset 0x2C, size 0x4
    unsigned char m_flag; // offset 0x30, size 0x1
    unsigned char m_mode; // offset 0x31, size 0x1
    unsigned char m_texIdx[2]; // offset 0x32, size 0x2
    unsigned char m_rotdeg[3]; // offset 0x34, size 0x3
    unsigned char pad8; // offset 0x37, size 0x1
    float totalLifespan; // offset 0x38, size 0x4
    struct xParEmitterAsset * m_asset; // offset 0x3C, size 0x4
    float m_cvel[4]; // offset 0x40, size 0x10
    float m_cfl[4]; // offset 0x50, size 0x10
    unsigned int m_sortID; // offset 0x60, size 0x4
    float m_dist2Camera; // offset 0x64, size 0x4
    unsigned int pad[2]; // offset 0x68, size 0x8
};
// total size: 0x0
struct xParCmdTex {};
// total size: 0x24
struct xParGroup {
    // Members
    struct xPar * m_root; // offset 0x0, size 0x4
    struct xPar * m_dead; // offset 0x4, size 0x4
    int m_num_of_particles; // offset 0x8, size 0x4
    unsigned char m_alive; // offset 0xC, size 0x1
    unsigned char m_killWhenDead; // offset 0xD, size 0x1
    unsigned char m_active; // offset 0xE, size 0x1
    unsigned char m_visible; // offset 0xF, size 0x1
    unsigned char m_culled; // offset 0x10, size 0x1
    unsigned char m_priority; // offset 0x11, size 0x1
    unsigned char m_flags; // offset 0x12, size 0x1
    unsigned char m_regidx; // offset 0x13, size 0x1
    struct xParGroup * m_next; // offset 0x14, size 0x4
    struct xParGroup * m_prev; // offset 0x18, size 0x4
    void (* draw)(void *, struct xParGroup *); // offset 0x1C, size 0x4
    struct xParCmdTex * m_cmdTex; // offset 0x20, size 0x4
};
struct xParGroup * sParGroupRegTable[255]; // size: 0x3FC, address: 0x80B94FC0
static char __FUNCTION__[14]; // size: 0xE, address: 0x80D60360
// Range: 0x800B7274 -> 0x800B7374
void xParGroupInit(struct xParGroup * ps /* r31 */) {
    // References
    // -> static char __FUNCTION__[14];
}

// Range: 0x800B7374 -> 0x800B73C4
static void xParGroupRegisterInit() {
    // Local variables
    int i; // r31

    // References
    // -> static int sParGroupRegTableCount;
    // -> static int sParGroupRegTableInit;
    // -> struct xParGroup * sParGroupRegTable[255];
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80D6036E
// Range: 0x800B73C4 -> 0x800B7470
void xParGroupSetAging(struct xParGroup * ps /* r31 */, int age /* r1+0x8 */) {
    // References
    // -> static char __FUNCTION__[18];
}

static char __FUNCTION__[22]; // size: 0x16, address: 0x804F6C90
// Range: 0x800B7470 -> 0x800B7520
void xParGroupSetBack2Life(struct xParGroup * ps /* r31 */, int b2l /* r1+0x8 */) {
    // References
    // -> static char __FUNCTION__[22];
}

static char __FUNCTION__[23]; // size: 0x17, address: 0x804F6CA6
// Range: 0x800B7520 -> 0x800B75B0
void xParGroupSetVisibility(struct xParGroup * ps /* r31 */, int vis /* r1+0x8 */) {
    // References
    // -> static char __FUNCTION__[23];
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x804F6CBD
// Range: 0x800B75B0 -> 0x800B7640
void xParGroupSetPriority(struct xParGroup * ps /* r31 */, unsigned char val /* r1+0x8 */) {
    // References
    // -> static char __FUNCTION__[21];
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80D60380
// Range: 0x800B7640 -> 0x800B7728
void xParGroupRegister(struct xParGroup * ps /* r30 */) {
    // Local variables
    unsigned char i; // r31

    // References
    // -> struct xParGroup * sParGroupRegTable[255];
    // -> static int sParGroupRegTableInit;
    // -> static char __FUNCTION__[18];
}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80D60392
// Range: 0x800B7728 -> 0x800B7868
void xParGroupUnregister(struct xParGroup * ps /* r30 */) {
    // Local variables
    unsigned char i; // r31

    // References
    // -> struct xParGroup * sParGroupRegTable[255];
    // -> static char __FUNCTION__[20];
    // -> static int sParGroupRegTableInit;
}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80D603A6
// Range: 0x800B7868 -> 0x800B78F4
void xParGroupSetActive(struct xParGroup * ps /* r31 */, unsigned int isActive /* r1+0x8 */) {
    // References
    // -> static char __FUNCTION__[19];
}

static char __FUNCTION__[26]; // size: 0x1A, address: 0x804F6CD2
// Range: 0x800B78F4 -> 0x800B79B4
void xParGroupKillAllParticles(struct xParGroup * ps /* r30 */) {
    // Local variables
    struct xPar * i; // r31
    struct xPar * tmp; // r29

    // References
    // -> static char __FUNCTION__[26];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80D603B9
// Range: 0x800B79B4 -> 0x800B7D18
void xParGroupAnimate(struct xParGroup * ps /* r30 */, float dt /* f31 */) {
    // Local variables
    struct xPar * i; // r31
    struct xPar * tmp; // r29
    float age; // f29
    float col; // f30

    // References
    // -> static char __FUNCTION__[17];
}

static float sSortDistance; // size: 0x4, address: 0x80D69400
static unsigned int sSortID; // size: 0x4, address: 0x80D69404
// Range: 0x800B7D18 -> 0x800B7D24
void xParGroupSetSortDistance(float sortDistance /* f1 */, unsigned int sortID /* r3 */) {
    // References
    // -> static unsigned int sSortID;
    // -> static float sSortDistance;
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80D603CA
// Range: 0x800B7D24 -> 0x800B801C
void xParGroupAddParP(struct xParGroup * ps /* r30 */, struct xPar * p /* r31 */) {
    // Local variables
    struct xPar * test; // r29
    struct xPar * prev; // r28

    // References
    // -> static float sSortDistance;
    // -> static unsigned int sSortID;
    // -> static char __FUNCTION__[17];
}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80D603DB
// Range: 0x800B801C -> 0x800B8290
struct xPar * xParGroupAddPar(struct xParGroup * ps /* r31 */) {
    // Local variables
    struct xPar * p; // r30
    int myPriority; // r28
    unsigned char i; // r29

    // References
    // -> static char __FUNCTION__[16];
    // -> struct xParGroup * sParGroupRegTable[255];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80D603EB
// Range: 0x800B8290 -> 0x800B83CC
void xParGroupKillPar(struct xParGroup * ps /* r30 */, struct xPar * p /* r31 */) {
    // References
    // -> static char __FUNCTION__[17];
}

static char __FUNCTION__[26]; // size: 0x1A, address: 0x804F6CEC
// Range: 0x800B83CC -> 0x800B8484
void xParGroupAddParToDeadList(struct xParGroup * ps /* r31 */, struct xPar * p /* r30 */) {
    // References
    // -> static char __FUNCTION__[26];
}


