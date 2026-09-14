/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xParCmd.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800AA9B8 -> 0x800AFABC
*/
// total size: 0x8
struct xParCmdAsset {
    // Members
    unsigned int type; // offset 0x0, size 0x4
    unsigned char enabled; // offset 0x4, size 0x1
    unsigned char mode; // offset 0x5, size 0x1
    unsigned char pad[2]; // offset 0x6, size 0x2
};
// total size: 0x8
struct xParCmd {
    // Members
    unsigned int flag; // offset 0x0, size 0x4
    struct xParCmdAsset * tasset; // offset 0x4, size 0x4
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
// total size: 0x24
struct xParCmdTex : public xParCmdAsset {
    // Members
    float x1; // offset 0x8, size 0x4
    float y1; // offset 0xC, size 0x4
    float x2; // offset 0x10, size 0x4
    float y2; // offset 0x14, size 0x4
    unsigned char birthMode; // offset 0x18, size 0x1
    unsigned char rows; // offset 0x19, size 0x1
    unsigned char cols; // offset 0x1A, size 0x1
    unsigned char unit_count; // offset 0x1B, size 0x1
    float unit_width; // offset 0x1C, size 0x4
    float unit_height; // offset 0x20, size 0x4
};
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
// total size: 0xC
struct xCmdInfo {
    // Members
    unsigned int type; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    void (* func)(struct xParCmd *, struct xParGroup *, float); // offset 0x8, size 0x4
};
static struct xCmdInfo sCmdInfo[35]; // size: 0x1A4, address: 0x804F61C0
// Range: 0x800AA9B8 -> 0x800AABEC
void xParCmdInit() {}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80D601C0
// Range: 0x800AABEC -> 0x800AACBC
void xParCmdRegister(unsigned int parType /* r31 */, unsigned int size /* r1+0x8 */, void (* func)(struct xParCmd *, struct xParGroup *, float) /* r1+0xC */) {
    // References
    // -> static struct xCmdInfo sCmdInfo[35];
    // -> static char __FUNCTION__[16];
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80D601D0
// Range: 0x800AACBC -> 0x800AADAC
unsigned int xParCmdGetSize(unsigned int parType /* r30 */) {
    // Local variables
    int i; // r31

    // References
    // -> static struct xCmdInfo sCmdInfo[35];
    // -> static char __FUNCTION__[15];
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x804F6364
// Range: 0x800AADAC -> 0x800AAEA0
void (* xParCmdGetUpdateFunc(unsigned int parType /* r30 */))(struct xParCmd *, struct xParGroup *, float) {
    // Local variables
    int i; // r31

    // References
    // -> static struct xCmdInfo sCmdInfo[35];
    // -> static char __FUNCTION__[21];
}

static char __FUNCTION__[23]; // size: 0x17, address: 0x804F6379
// total size: 0x10
struct xParCmdKillSlow : public xParCmdAsset {
    // Members
    float speedLimitSqr; // offset 0x8, size 0x4
    unsigned int kill_less_than; // offset 0xC, size 0x4
};
// Range: 0x800AAEA0 -> 0x800AB024
void xParCmdKillSlow_Update(struct xParCmd * c /* r28 */, struct xParGroup * ps /* r29 */, float dt /* r1+0x8 */) {
    // Local variables
    struct xPar * p; // r31
    struct xParCmdKillSlow * cmd; // r30
    float speedLimit; // f31

    // References
    // -> static char __FUNCTION__[23];
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80D601DF
// total size: 0xC
struct xParCmdAge : public xParCmdAsset {
    // Members
    float age_rate; // offset 0x8, size 0x4
};
// Range: 0x800AB024 -> 0x800AB160
void xParCmdAge_Update(struct xParCmd * c /* r28 */, struct xParGroup * ps /* r29 */, float dt /* r1+0x8 */) {
    // Local variables
    struct xPar * p; // r31
    struct xParCmdAge * cmd; // r30
    float age_rate; // f31

    // References
    // -> static char __FUNCTION__[18];
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x804F6390
// total size: 0x10
struct xParCmdFollow : public xParCmdAsset {
    // Members
    float gravity; // offset 0x8, size 0x4
    float epsilon; // offset 0xC, size 0x4
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
// Range: 0x800AB160 -> 0x800AB348
void xParCmdFollow_Update(struct xParCmd * c /* r28 */, struct xParGroup * ps /* r29 */, float dt /* r1+0x8 */) {
    // Local variables
    struct xPar * p; // r31
    struct xParCmdFollow * cmd; // r30
    struct xVec3 delta; // r1+0xC
    float mdt; // f30
    float lenSqr2; // f29
    float lenSqr; // f28
    float force; // f31

    // References
    // -> static char __FUNCTION__[21];
}

static char __FUNCTION__[25]; // size: 0x19, address: 0x804F63A5
// total size: 0x20
struct xParCmdOrbitPoint : public xParCmdAsset {
    // Members
    struct xVec3 center; // offset 0x8, size 0xC
    float gravity; // offset 0x14, size 0x4
    float epsilon; // offset 0x18, size 0x4
    float maxRadiusSqr; // offset 0x1C, size 0x4
};
// Range: 0x800AB348 -> 0x800AB52C
void xParCmdOrbitPoint_Update(struct xParCmd * c /* r28 */, struct xParGroup * ps /* r29 */, float dt /* r1+0x8 */) {
    // Local variables
    struct xPar * p; // r31
    struct xParCmdOrbitPoint * cmd; // r30
    struct xVec3 dir; // r1+0xC
    float mdt; // f29
    float rSqr2; // f30
    float rSqr; // f28
    float force; // f31

    // References
    // -> static char __FUNCTION__[25];
}

static char __FUNCTION__[24]; // size: 0x18, address: 0x804F63BE
// total size: 0x2C
struct xParCmdOrbitLine : public xParCmdAsset {
    // Members
    struct xVec3 p; // offset 0x8, size 0xC
    struct xVec3 axis; // offset 0x14, size 0xC
    float gravity; // offset 0x20, size 0x4
    float epsilon; // offset 0x24, size 0x4
    float maxRadiusSqr; // offset 0x28, size 0x4
};
// Range: 0x800AB52C -> 0x800AB740
void xParCmdOrbitLine_Update(struct xParCmd * c /* r28 */, struct xParGroup * ps /* r29 */, float dt /* r1+0x8 */) {
    // Local variables
    struct xPar * p; // r31
    struct xParCmdOrbitLine * cmd; // r30
    struct xVec3 f; // r1+0x30
    struct xVec3 w; // r1+0x24
    struct xVec3 tmp; // r1+0x18
    float mdt; // f29
    struct xVec3 into; // r1+0xC
    float rSqr2; // f30
    float rSqr; // f28
    float force; // f31

    // References
    // -> static char __FUNCTION__[24];
}

static char __FUNCTION__[25]; // size: 0x19, address: 0x804F63D6
// total size: 0x14
struct xParCmdAccelerate : public xParCmdAsset {
    // Members
    struct xVec3 acc; // offset 0x8, size 0xC
};
// Range: 0x800AB740 -> 0x800AB8A8
void xParCmdAccelerate_Update(struct xParCmd * c /* r28 */, struct xParGroup * ps /* r29 */, float dt /* r1+0x8 */) {
    // Local variables
    struct xPar * p; // r31
    struct xParCmdAccelerate * cmd; // r30
    struct xVec3 delta; // r1+0xC

    // References
    // -> static char __FUNCTION__[25];
}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80D601F1
// total size: 0x14
struct xParCmdMove : public xParCmdAsset {
    // Members
    struct xVec3 dir; // offset 0x8, size 0xC
};
// Range: 0x800AB8A8 -> 0x800AB9E8
void xParCmdMove_Update(struct xParCmd * c /* r28 */, struct xParGroup * ps /* r29 */, float dt /* r1+0x8 */) {
    // Local variables
    struct xPar * p; // r31
    struct xParCmdMove * cmd; // r30
    struct xVec3 delta; // r1+0xC

    // References
    // -> static char __FUNCTION__[19];
}

static char __FUNCTION__[25]; // size: 0x19, address: 0x804F63EF
// Range: 0x800AB9E8 -> 0x800ABB88
void xParCmdMoveRandom_Update(struct xParCmd * c /* r28 */, struct xParGroup * ps /* r29 */, float dt /* r1+0x8 */) {
    // Local variables
    struct xPar * p; // r31
    struct xParCmdMove * cmd; // r30
    struct xVec3 delta; // r1+0xC

    // References
    // -> static char __FUNCTION__[25];
}

static char __FUNCTION__[28]; // size: 0x1C, address: 0x804F6408
// total size: 0x14
struct xParCmdMoveRandomPar : public xParCmdAsset {
    // Members
    struct xVec3 dim; // offset 0x8, size 0xC
};
// Range: 0x800ABB88 -> 0x800ABD18
void xParCmdMoveRandomPar_Update(struct xParCmd * c /* r28 */, struct xParGroup * ps /* r29 */, float dt /* f31 */) {
    // Local variables
    struct xPar * p; // r31
    struct xParCmdMoveRandomPar * cmd; // r30
    struct xVec3 delta; // r1+0x8

    // References
    // -> static char __FUNCTION__[28];
}

// Range: 0x800ABD18 -> 0x800ABD1C
void xParCmdScale3rdPolyReg_Update() {}

// Range: 0x800ABD1C -> 0x800ABD20
void xParCmdSmokeAlpha_Update() {}

// Range: 0x800ABD20 -> 0x800ABD24
void xParCmdScale_Update() {}

// Range: 0x800ABD24 -> 0x800ABD28
void xParCmdAlpha3rdPolyReg_Update() {}

static char __FUNCTION__[32]; // size: 0x20, address: 0x804F6424
// total size: 0x14
struct xParCmdRandomVelocityPar : public xParCmdAsset {
    // Members
    float x; // offset 0x8, size 0x4
    float y; // offset 0xC, size 0x4
    float z; // offset 0x10, size 0x4
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
// Range: 0x800ABD28 -> 0x800ABF28
void xParCmdRandomVelocityPar_Update(struct xParCmd * c /* r28 */, struct xParGroup * ps /* r29 */, float dt /* f31 */) {
    // Local variables
    struct xPar * p; // r30
    struct xParCmdRandomVelocityPar * cmd; // r31
    struct xVec3 rot; // r1+0x10
    struct xMat3x3 rotmat; // r1+0x20
    float x; // f30
    float y; // f29
    float z; // f28

    // References
    // -> static char __FUNCTION__[32];
}

static char __FUNCTION__[24]; // size: 0x18, address: 0x804F6444
// total size: 0xC
struct xParCmdApplyWind : public xParCmdAsset {
    // Members
    float strength; // offset 0x8, size 0x4
};
// Range: 0x800ABF28 -> 0x800AC0B4
void xParCmdApplyWind_Update(struct xParCmd * c /* r28 */, struct xParGroup * ps /* r29 */, float dt /* f31 */) {
    // Local variables
    struct xPar * p; // r31
    struct xParCmdApplyWind * cmd; // r30
    struct xVec3 wind_vec; // r1+0x8

    // References
    // -> static char __FUNCTION__[24];
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x804F645C
// total size: 0x20
struct xParCmdRotPar : public xParCmdAsset {
    // Members
    struct xVec3 min; // offset 0x8, size 0xC
    struct xVec3 max; // offset 0x14, size 0xC
};
// Range: 0x800AC0B4 -> 0x800AC358
void xParCmdRotPar_Update(struct xParCmd * c /* r28 */, struct xParGroup * ps /* r29 */, float dt /* f31 */) {
    // Local variables
    struct xPar * p; // r30
    struct xParCmdRotPar * cmd; // r31
    struct xVec3 range; // r1+0x14
    struct xVec3 min; // r1+0x8

    // References
    // -> static char __FUNCTION__[21];
}

static char __FUNCTION__[28]; // size: 0x1C, address: 0x804F6471
// total size: 0x8
struct xParCmdVelocityApply : public xParCmdAsset {};
// Range: 0x800AC358 -> 0x800AC498
void xParCmdVelocityApply_Update(struct xParCmd * c /* r28 */, struct xParGroup * ps /* r30 */, float dt /* r1+0x8 */) {
    // Local variables
    struct xPar * p; // r31
    struct xParCmdVelocityApply * cmd; // r29
    struct xVec3 vel; // r1+0xC

    // References
    // -> static char __FUNCTION__[28];
}

static char __FUNCTION__[27]; // size: 0x1B, address: 0x804F648D
// total size: 0x20
struct xParCmdRotateAround : public xParCmdAsset {
    // Members
    struct xVec3 pos; // offset 0x8, size 0xC
    float unused1; // offset 0x14, size 0x4
    float radius_growth; // offset 0x18, size 0x4
    float yaw; // offset 0x1C, size 0x4
};
// Range: 0x800AC498 -> 0x800AC6B8
void xParCmdRotateAround_Update(struct xParCmd * c /* r28 */, struct xParGroup * ps /* r29 */, float dt /* f28 */) {
    // Local variables
    struct xPar * p; // r30
    struct xParCmdRotateAround * cmd; // r31
    float yaw; // f31
    float radius_growth; // f29
    struct xVec3 at; // r1+0x34
    struct xMat3x3 lookmat; // r1+0x70
    float radius; // f30
    struct xVec3 angles; // r1+0x28
    struct xMat3x3 rotmat; // r1+0x40
    struct xVec3 offset; // r1+0x1C
    struct xVec3 out_offset; // r1+0x10

    // References
    // -> static char __FUNCTION__[27];
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80D60204
// Range: 0x800AC6B8 -> 0x800AC7AC
void xParCmdTex_Update(struct xParCmd * c /* r30 */, struct xParGroup * ps /* r1+0x8 */) {
    // Local variables
    struct xParCmdTex * cmd; // r31

    // References
    // -> static char __FUNCTION__[18];
}

static char __FUNCTION__[22]; // size: 0x16, address: 0x804F64A8
// total size: 0x18
struct xParCmdTexAnim : public xParCmdAsset {
    // Members
    unsigned char anim_mode; // offset 0x8, size 0x1
    unsigned char anim_wrap_mode; // offset 0x9, size 0x1
    unsigned char pad_anim; // offset 0xA, size 0x1
    unsigned char throttle_spd_less_than; // offset 0xB, size 0x1
    float throttle_spd_sqr; // offset 0xC, size 0x4
    float throttle_time; // offset 0x10, size 0x4
    float throttle_time_elapsed; // offset 0x14, size 0x4
};
// Range: 0x800AC7AC -> 0x800ACCB0
void xParCmdTexAnim_Update(struct xParCmd * c /* r27 */, struct xParGroup * ps /* r28 */, float dt /* r1+0x8 */) {
    // Local variables
    struct xPar * p; // r31
    struct xParCmdTexAnim * cmd; // r29
    struct xParCmdTex * tex; // r30

    // References
    // -> static char __FUNCTION__[22];
}

// total size: 0x10
struct xParCmdCollideFall : public xParCmdAsset {
    // Members
    float y; // offset 0x8, size 0x4
    float bounce; // offset 0xC, size 0x4
};
// Range: 0x800ACCB0 -> 0x800ACD58
void xParCmdCollideFall_Update(struct xParCmd * c /* r3 */, struct xParGroup * ps /* r4 */) {
    // Local variables
    struct xParCmdCollideFall & cmd; // r31
    struct xPar * p; // r30
    float & loc; // r28
    float & vel; // r29
    float dloc; // f31
}

// total size: 0x14
struct xParCmdCollideFallSticky : public xParCmdCollideFall {
    // Members
    float sticky; // offset 0x10, size 0x4
};
// Range: 0x800ACD58 -> 0x800ACE34
void xParCmdCollideFallSticky_Update(struct xParCmd * c /* r3 */, struct xParGroup * ps /* r4 */) {
    // Local variables
    struct xParCmdCollideFallSticky & cmd; // r31
    float xzdamp; // f31
    struct xPar * p; // r30
    float & loc; // r28
    float & vel; // r29
    float dloc; // f30
}

static char __FUNCTION__[27]; // size: 0x1B, address: 0x804F64BE
// total size: 0xC
struct xParCmdDampenData : public xParCmdAsset {
    // Members
    float dampSpeed; // offset 0x8, size 0x4
};
// Range: 0x800ACE34 -> 0x800ACF88
void xParCmd_DampenSpeed_Update(struct xParCmd * c /* r28 */, struct xParGroup * ps /* r29 */, float dt /* r1+0x8 */) {
    // Local variables
    struct xPar * p; // r31
    struct xParCmdDampenData * cmd; // r30
    float damp; // f31

    // References
    // -> static char __FUNCTION__[27];
}

static char __FUNCTION__[25]; // size: 0x19, address: 0x804F64D9
// total size: 0x18
struct xParCmdSizeInOutData : public xParCmdAsset {
    // Members
    float custSize[4]; // offset 0x8, size 0x10
};
// Range: 0x800ACF88 -> 0x800AD1E4
void xParCmd_SizeInOut_Update(struct xParCmd * c /* r26 */, struct xParGroup * ps /* r27 */) {
    // Local variables
    struct xPar * p; // r31
    struct xParCmdSizeInOutData * cmd; // r29
    int i; // r30
    int seg; // r28
    float slope_size[3]; // r1+0x8
    float frac; // f31

    // References
    // -> static char __FUNCTION__[25];
}

static char __FUNCTION__[26]; // size: 0x1A, address: 0x804F64F2
// total size: 0x18
struct xParCmdAlphaInOutData : public xParCmdAsset {
    // Members
    float custAlpha[4]; // offset 0x8, size 0x10
};
// Range: 0x800AD1E4 -> 0x800AD4DC
void xParCmd_AlphaInOut_Update(struct xParCmd * c /* r26 */, struct xParGroup * ps /* r27 */) {
    // Local variables
    struct xPar * p; // r31
    struct xParCmdAlphaInOutData * cmd; // r29
    int i; // r30
    int seg; // r28
    float slope_alfa[3]; // r1+0x8
    float frac; // f31
    float alfa; // f30

    // References
    // -> static char __FUNCTION__[26];
}

static char __FUNCTION__[22]; // size: 0x16, address: 0x804F650C
// total size: 0x30
struct xParCmdShaperData : public xParCmdAsset {
    // Members
    float custAlpha[4]; // offset 0x8, size 0x10
    float custSize[4]; // offset 0x18, size 0x10
    float dampSpeed; // offset 0x28, size 0x4
    float gravity; // offset 0x2C, size 0x4
};
// Range: 0x800AD4DC -> 0x800AD9C0
void xParCmd_Shaper_Update(struct xParCmd * c /* r24 */, struct xParGroup * ps /* r25 */, float dt /* f21 */) {
    // Local variables
    struct xPar * p; // r31
    struct xParCmdShaperData * cmd; // r30
    float damp; // f23
    float grav; // f22
    int doalpha; // r27
    int dosize; // r26
    int i; // r29
    int seg; // r28
    float slope_alfa[3]; // r1+0x14
    float slope_size[3]; // r1+0x8
    float frac; // f31
    float alfa; // f30

    // References
    // -> static char __FUNCTION__[22];
}

static char * command_labels[35]; // size: 0x8C, address: 0x804F6524
static char __FUNCTION__[22]; // size: 0x16, address: 0x804F65B0
// total size: 0xC
struct /* @class$741xParCmd_cpp */ {
    // Members
    int value_def; // offset 0x0, size 0x4
    int value_min; // offset 0x4, size 0x4
    int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$742xParCmd_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int value_min; // offset 0x4, size 0x4
    unsigned int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$743xParCmd_cpp */ {
    // Members
    float value_def; // offset 0x0, size 0x4
    float value_min; // offset 0x4, size 0x4
    float value_max; // offset 0x8, size 0x4
};
// total size: 0x1
struct /* @class$744xParCmd_cpp */ {
    // Members
    unsigned char value_def; // offset 0x0, size 0x1
};
// total size: 0x10
struct /* @class$745xParCmd_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int labels_size; // offset 0x4, size 0x4
    const char * * labels; // offset 0x8, size 0x4
    void * values; // offset 0xC, size 0x4
};
// total size: 0x8
struct /* @class$746xParCmd_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
};
// total size: 0x10
struct /* @class$747xParCmd_cpp */ {
    // Members
    unsigned char pad[16]; // offset 0x0, size 0x10
};
// total size: 0x28
struct tweak_info {
    // Members
    struct substr name; // offset 0x0, size 0x8
    void * value; // offset 0x8, size 0x4
    const struct tweak_callback * cb; // offset 0xC, size 0x4
    void * context; // offset 0x10, size 0x4
    unsigned char type; // offset 0x14, size 0x1
    unsigned char value_size; // offset 0x15, size 0x1
    unsigned short flags; // offset 0x16, size 0x2
    union { // inferred
        // total size: 0xC
        struct /* @class$741xParCmd_cpp */ {
            // Members
            int value_def; // offset 0x0, size 0x4
            int value_min; // offset 0x4, size 0x4
            int value_max; // offset 0x8, size 0x4
        } int_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$742xParCmd_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int value_min; // offset 0x4, size 0x4
            unsigned int value_max; // offset 0x8, size 0x4
        } uint_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$743xParCmd_cpp */ {
            // Members
            float value_def; // offset 0x0, size 0x4
            float value_min; // offset 0x4, size 0x4
            float value_max; // offset 0x8, size 0x4
        } float_context; // offset 0x18, size 0xC
        // total size: 0x1
        struct /* @class$744xParCmd_cpp */ {
            // Members
            unsigned char value_def; // offset 0x0, size 0x1
        } bool_context; // offset 0x18, size 0x1
        // total size: 0x10
        struct /* @class$745xParCmd_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int labels_size; // offset 0x4, size 0x4
            const char * * labels; // offset 0x8, size 0x4
            void * values; // offset 0xC, size 0x4
        } select_context; // offset 0x18, size 0x10
        // total size: 0x8
        struct /* @class$746xParCmd_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int mask; // offset 0x4, size 0x4
        } flag_context; // offset 0x18, size 0x8
        // total size: 0x10
        struct /* @class$747xParCmd_cpp */ {
            // Members
            unsigned char pad[16]; // offset 0x0, size 0x10
        } all_context; // offset 0x18, size 0x10
    };
};
// Range: 0x800AD9C0 -> 0x800ADAC8
static void on_change_tex_command(const struct tweak_info & info /* r30 */) {
    // Local variables
    struct xParCmdTex & cmd; // r31

    // References
    // -> static char __FUNCTION__[22];
}

static char * birth_mode_labels[7]; // size: 0x1C, address: 0x804F65C8
// total size: 0x28
struct tweak_callback {
    // Members
    void (* on_change)(struct tweak_info &); // offset 0x0, size 0x4
    void (* on_select)(struct tweak_info &); // offset 0x4, size 0x4
    void (* on_unselect)(struct tweak_info &); // offset 0x8, size 0x4
    void (* on_start_edit)(struct tweak_info &); // offset 0xC, size 0x4
    void (* on_stop_edit)(struct tweak_info &); // offset 0x10, size 0x4
    void (* on_expand)(struct tweak_info &); // offset 0x14, size 0x4
    void (* on_collapse)(struct tweak_info &); // offset 0x18, size 0x4
    void (* on_update)(struct tweak_info &); // offset 0x1C, size 0x4
    void (* convert_mem_to_tweak)(struct tweak_info &, void *); // offset 0x20, size 0x4
    void (* convert_tweak_to_mem)(struct tweak_info &, void *); // offset 0x24, size 0x4
};
static struct tweak_callback cb_tex; // size: 0x28, address: 0x804F65E4
static signed char init; // size: 0x1, address: 0x80D693C8
static char * mode_labels[6]; // size: 0x18, address: 0x804F660C
static char * wrap_mode_labels[4]; // size: 0x10, address: 0x80D60218
static char * labels[2]; // size: 0x8, address: 0x80D60228
static char * labels[2]; // size: 0x8, address: 0x80D60230
// total size: 0x10
struct xParCmdDamagePlayer : public xParCmdAsset {
    // Members
    int damage; // offset 0x8, size 0x4
    int granular; // offset 0xC, size 0x4
};
// total size: 0x2C
struct xParCmdJet : public xParCmdAsset {
    // Members
    struct xVec3 center; // offset 0x8, size 0xC
    struct xVec3 acc; // offset 0x14, size 0xC
    float gravity; // offset 0x20, size 0x4
    float epsilon; // offset 0x24, size 0x4
    float radiusSqr; // offset 0x28, size 0x4
};
// total size: 0xC
struct xParCmdKillOld : public xParCmdAsset {
    // Members
    float ageMax; // offset 0x8, size 0x4
};
// total size: 0x18
struct xParCmdScale3rdPolyReg : public xParCmdAsset {
    // Members
    float constant; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
    float a2; // offset 0x10, size 0x4
    float a3; // offset 0x14, size 0x4
};
// total size: 0x10
struct xParCmdPlayerCollision : public xParCmdAsset {
    // Members
    float min; // offset 0x8, size 0x4
    float max; // offset 0xC, size 0x4
};
// total size: 0x1C
struct xParCmdCustom : public xParCmdAsset {
    // Members
    unsigned int user_id; // offset 0x8, size 0x4
    float user_val[4]; // offset 0xC, size 0x10
};
// total size: 0x10
struct xParCmdKillDistance : public xParCmdAsset {
    // Members
    float dSqr; // offset 0x8, size 0x4
    unsigned int kill_greater_than; // offset 0xC, size 0x4
};
// total size: 0xC
struct xParCmdSmokeAlpha : public xParCmdAsset {
    // Members
    int type; // offset 0x8, size 0x4
};
// total size: 0xC
struct xParCmdScale : public xParCmdAsset {
    // Members
    int type; // offset 0x8, size 0x4
};
// total size: 0xC
struct xParCmdAnimalMagentism : public xParCmdAsset {
    // Members
    float magnetism; // offset 0x8, size 0x4
};
// Range: 0x800ADAC8 -> 0x800AF19C
static void add_command_tweaks(const char * prefix /* r31 */, struct xParCmdAsset & cmd /* r30 */) {
    // Local variables
    struct xParCmdDamagePlayer & ccmd; // r1+0x3C
    char _buffer[128]; // r1+0x2968
    struct xParCmdMove & ccmd; // r1+0x38
    char _buffer[128]; // r1+0x28E8
    struct xParCmdJet & ccmd; // r27
    char _buffer[128]; // r1+0x2868
    char _buffer[128]; // r1+0x27E8
    char _buffer[128]; // r1+0x2768
    char _buffer[128]; // r1+0x26E8
    char _buffer[128]; // r1+0x2668
    struct xParCmdKillOld & ccmd; // r1+0x34
    char _buffer[128]; // r1+0x25E8
    struct xParCmdKillSlow & ccmd; // r17
    char _buffer[128]; // r1+0x2568
    char _buffer[128]; // r1+0x24E8
    struct xParCmdFollow & ccmd; // r1+0x30
    char _buffer[128]; // r1+0x2468
    char _buffer[128]; // r1+0x23E8
    struct xParCmdOrbitPoint & ccmd; // r23
    char _buffer[128]; // r1+0x2368
    char _buffer[128]; // r1+0x22E8
    char _buffer[128]; // r1+0x2268
    char _buffer[128]; // r1+0x21E8
    struct xParCmdOrbitLine & ccmd; // r26
    char _buffer[128]; // r1+0x2168
    char _buffer[128]; // r1+0x20E8
    char _buffer[128]; // r1+0x2068
    char _buffer[128]; // r1+0x1FE8
    char _buffer[128]; // r1+0x1F68
    struct xParCmdScale3rdPolyReg & ccmd; // r22
    char _buffer[128]; // r1+0x1EE8
    char _buffer[128]; // r1+0x1E68
    char _buffer[128]; // r1+0x1DE8
    char _buffer[128]; // r1+0x1D68
    struct xParCmdTex & ccmd; // r29
    char _buffer[128]; // r1+0x1CE8
    char _buffer[128]; // r1+0x1C68
    char _buffer[128]; // r1+0x1BE8
    char _buffer[128]; // r1+0x1B68
    char _buffer[128]; // r1+0x1AE8
    char _buffer[128]; // r1+0x1A68
    char _buffer[128]; // r1+0x19E8
    char _buffer[128]; // r1+0x1968
    char _buffer[128]; // r1+0x18E8
    char _buffer[128]; // r1+0x1868
    struct xParCmdTexAnim & ccmd; // r25
    char _buffer[128]; // r1+0x17E8
    char _buffer[128]; // r1+0x1768
    char _buffer[128]; // r1+0x16E8
    char _buffer[128]; // r1+0x1668
    char _buffer[128]; // r1+0x15E8
    struct xParCmdPlayerCollision & ccmd; // r1+0x2C
    char _buffer[128]; // r1+0x1568
    char _buffer[128]; // r1+0x14E8
    struct xParCmdCustom & ccmd; // r24
    char _buffer[128]; // r1+0x1468
    char _buffer[128]; // r1+0x13E8
    char _buffer[128]; // r1+0x1368
    char _buffer[128]; // r1+0x12E8
    char _buffer[128]; // r1+0x1268
    struct xParCmdKillDistance & ccmd; // r1+0x28
    char _buffer[128]; // r1+0x11E8
    char _buffer[128]; // r1+0x1168
    struct xParCmdAge & ccmd; // r1+0x24
    char _buffer[128]; // r1+0x10E8
    struct xParCmdApplyWind & ccmd; // r1+0x20
    char _buffer[128]; // r1+0x1068
    struct xParCmdRotPar & ccmd; // r1+0x1C
    char _buffer[128]; // r1+0xFE8
    char _buffer[128]; // r1+0xF68
    struct xParCmdRotateAround & ccmd; // r19
    char _buffer[128]; // r1+0xEE8
    char _buffer[128]; // r1+0xE68
    char _buffer[128]; // r1+0xDE8
    struct xParCmdSmokeAlpha & ccmd; // r1+0x18
    char _buffer[128]; // r1+0xD68
    struct xParCmdScale & ccmd; // r1+0x14
    char _buffer[128]; // r1+0xCE8
    struct xParCmdAnimalMagentism & ccmd; // r1+0x10
    char _buffer[128]; // r1+0xC68
    struct xParCmdCollideFall & ccmd; // r1+0xC
    char _buffer[128]; // r1+0xBE8
    char _buffer[128]; // r1+0xB68
    struct xParCmdCollideFallSticky & ccmd; // r18
    char _buffer[128]; // r1+0xAE8
    char _buffer[128]; // r1+0xA68
    char _buffer[128]; // r1+0x9E8
    struct xParCmdShaperData & ccmd; // r28
    char _buffer[128]; // r1+0x968
    char _buffer[128]; // r1+0x8E8
    char _buffer[128]; // r1+0x868
    char _buffer[128]; // r1+0x7E8
    char _buffer[128]; // r1+0x768
    char _buffer[128]; // r1+0x6E8
    char _buffer[128]; // r1+0x668
    char _buffer[128]; // r1+0x5E8
    char _buffer[128]; // r1+0x568
    char _buffer[128]; // r1+0x4E8
    struct xParCmdAlphaInOutData & ccmd; // r21
    char _buffer[128]; // r1+0x468
    char _buffer[128]; // r1+0x3E8
    char _buffer[128]; // r1+0x368
    char _buffer[128]; // r1+0x2E8
    struct xParCmdSizeInOutData & ccmd; // r20
    char _buffer[128]; // r1+0x268
    char _buffer[128]; // r1+0x1E8
    char _buffer[128]; // r1+0x168
    char _buffer[128]; // r1+0xE8
    struct xParCmdDampenData & ccmd; // r1+0x8
    char _buffer[128]; // r1+0x68

    // References
    // -> static char * labels[2];
    // -> static char * labels[2];
    // -> static char * wrap_mode_labels[4];
    // -> static char * mode_labels[6];
    // -> static struct tweak_callback cb_tex;
    // -> static char * birth_mode_labels[7];
    // -> static signed char init;
}

// total size: 0x20
struct xLinkAsset {
    // Members
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
// total size: 0x10
struct xBase {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    const struct xLinkAsset * link; // offset 0x8, size 0x4
    void (* eventFunc)(struct xBase *, struct xBase *, unsigned int, float *, struct xBase *, unsigned int); // offset 0xC, size 0x4
};
// total size: 0x14
struct xParInterp {
    // Members
    float val[2]; // offset 0x0, size 0x8
    unsigned int interp; // offset 0x8, size 0x4
    float freq; // offset 0xC, size 0x4
    float oofreq; // offset 0x10, size 0x4
};
// total size: 0x138
struct xParEmitterPropsAsset : public xBaseAsset {
    // Members
    unsigned int parSysID; // offset 0x8, size 0x4
    union { // inferred
        struct xParInterp rate; // offset 0xC, size 0x14
        struct xParInterp value[1]; // offset 0xC, size 0x14
    };
    struct xParInterp life; // offset 0x20, size 0x14
    struct xParInterp size_birth; // offset 0x34, size 0x14
    struct xParInterp size_death; // offset 0x48, size 0x14
    struct xParInterp color_birth[4]; // offset 0x5C, size 0x50
    struct xParInterp color_death[4]; // offset 0xAC, size 0x50
    struct xParInterp vel_scale; // offset 0xFC, size 0x14
    struct xParInterp vel_angle; // offset 0x110, size 0x14
    struct xVec3 vel; // offset 0x124, size 0xC
    unsigned int emit_limit; // offset 0x130, size 0x4
    float emit_limit_reset_time; // offset 0x134, size 0x4
};
// total size: 0x20
struct xModelTag {
    // Members
    struct xVec3 v; // offset 0x0, size 0xC
    unsigned int matidx; // offset 0xC, size 0x4
    float wt[4]; // offset 0x10, size 0x10
};
// total size: 0x24
struct xParSysAsset : public xBaseAsset {
    // Members
    unsigned int type; // offset 0x8, size 0x4
    unsigned int parentParSysID; // offset 0xC, size 0x4
    unsigned int textureID; // offset 0x10, size 0x4
    unsigned char pad; // offset 0x14, size 0x1
    unsigned char priority; // offset 0x15, size 0x1
    unsigned short maxPar; // offset 0x16, size 0x2
    unsigned char renderFunc; // offset 0x18, size 0x1
    unsigned char renderSrcBlendMode; // offset 0x19, size 0x1
    unsigned char renderDstBlendMode; // offset 0x1A, size 0x1
    unsigned char cmdCount; // offset 0x1B, size 0x1
    unsigned int cmdSize; // offset 0x1C, size 0x4
    unsigned int parFlags; // offset 0x20, size 0x4
};
// total size: 0x34
struct RwRaster {
    // Members
    struct RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    int width; // offset 0xC, size 0x4
    int height; // offset 0x10, size 0x4
    int depth; // offset 0x14, size 0x4
    int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    int originalWidth; // offset 0x28, size 0x4
    int originalHeight; // offset 0x2C, size 0x4
    int originalStride; // offset 0x30, size 0x4
};
// total size: 0x8
struct RwObject {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
// total size: 0x8
struct RwLLLink {
    // Members
    struct RwLLLink * next; // offset 0x0, size 0x4
    struct RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x8
struct RwLinkList {
    // Members
    struct RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x18
struct RwTexDictionary {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLinkList texturesInDict; // offset 0x8, size 0x8
    struct RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x58
struct RwTexture {
    // Members
    struct RwRaster * raster; // offset 0x0, size 0x4
    struct RwTexDictionary * dict; // offset 0x4, size 0x4
    struct RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    unsigned int filterAddressing; // offset 0x50, size 0x4
    int refCount; // offset 0x54, size 0x4
};
// total size: 0x14
struct xParCmdMoveRandom : public xParCmdAsset {
    // Members
    struct xVec3 dim; // offset 0x8, size 0xC
};
// total size: 0x18
struct xParCmdAlpha3rdPolyReg : public xParCmdAsset {
    // Members
    float constant; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
    float a2; // offset 0x10, size 0x4
    float a3; // offset 0x14, size 0x4
};
// total size: 0xC
struct xParCmdClipVolumes : public xParCmdAsset {
    // Members
    int unused; // offset 0x8, size 0x4
};
// total size: 0x14
struct xParCmdApplyCamMat : public xParCmdAsset {
    // Members
    struct xVec3 apply; // offset 0x8, size 0xC
};
union xParCmdAny {
    struct xParCmdMove Move; // offset 0x0, size 0x14
    struct xParCmdMoveRandom MoveRandom; // offset 0x0, size 0x14
    struct xParCmdMoveRandomPar MoveRandomPar; // offset 0x0, size 0x14
    struct xParCmdScale3rdPolyReg Scale3rdPolyReg; // offset 0x0, size 0x18
    struct xParCmdAlpha3rdPolyReg Alpha3rdPolyReg; // offset 0x0, size 0x18
    struct xParCmdClipVolumes ClipVolumes; // offset 0x0, size 0xC
    struct xParCmdSmokeAlpha SmokeAlpha; // offset 0x0, size 0xC
    struct xParCmdDamagePlayer DamagePlayer; // offset 0x0, size 0x10
    struct xParCmdScale Scale; // offset 0x0, size 0xC
    struct xParCmdAnimalMagentism AnimalMagentism; // offset 0x0, size 0xC
    struct xParCmdRotPar RotPar; // offset 0x0, size 0x20
    struct xParCmdApplyWind ApplyWind; // offset 0x0, size 0xC
    struct xParCmdPlayerCollision PlayerCollision; // offset 0x0, size 0x10
    struct xParCmdRandomVelocityPar RandomVelocityPar; // offset 0x0, size 0x14
    struct xParCmdAccelerate Accelerate; // offset 0x0, size 0x14
    struct xParCmdVelocityApply VelocityApply; // offset 0x0, size 0x8
    struct xParCmdJet Jet; // offset 0x0, size 0x2C
    struct xParCmdKillOld KillOld; // offset 0x0, size 0xC
    struct xParCmdKillSlow KillSlow; // offset 0x0, size 0x10
    struct xParCmdKillDistance KillDistance; // offset 0x0, size 0x10
    struct xParCmdAge Age; // offset 0x0, size 0xC
    struct xParCmdFollow Follow; // offset 0x0, size 0x10
    struct xParCmdOrbitLine OrbitLine; // offset 0x0, size 0x2C
    struct xParCmdOrbitPoint OrbitPoint; // offset 0x0, size 0x20
    struct xParCmdApplyCamMat ApplyCamMat; // offset 0x0, size 0x14
    struct xParCmdRotateAround RotateAround; // offset 0x0, size 0x20
    struct xParCmdTex Tex; // offset 0x0, size 0x24
    struct xParCmdTexAnim TexAnim; // offset 0x0, size 0x18
    struct xParCmdCustom Custom; // offset 0x0, size 0x1C
    struct xParCmdCollideFall CollideFall; // offset 0x0, size 0x10
    struct xParCmdCollideFallSticky CollideFallSticky; // offset 0x0, size 0x14
    struct xParCmdDampenData DampenData; // offset 0x0, size 0xC
    struct xParCmdAlphaInOutData AlphaInOutData; // offset 0x0, size 0x18
    struct xParCmdSizeInOutData SizeInOutData; // offset 0x0, size 0x18
    struct xParCmdShaperData ShaperData; // offset 0x0, size 0x30
};
// total size: 0x30
struct xParSys : public xBase {
    // Members
    struct xParSysAsset * tasset; // offset 0x10, size 0x4
    unsigned int cmdCount; // offset 0x14, size 0x4
    struct xParCmd * cmd; // offset 0x18, size 0x4
    struct xParSys * parent; // offset 0x1C, size 0x4
    struct xParGroup * group; // offset 0x20, size 0x4
    unsigned char visible; // offset 0x24, size 0x1
    struct RwTexture * txtr_particle; // offset 0x28, size 0x4
    union xParCmdAny * cmd_buffer; // offset 0x2C, size 0x4
};
// total size: 0x94
struct xParEmitter : public xBase {
    // Members
    struct xParEmitterAsset * tasset; // offset 0x10, size 0x4
    struct xParGroup * group; // offset 0x14, size 0x4
    struct xParEmitterPropsAsset * prop; // offset 0x18, size 0x4
    unsigned int sortID; // offset 0x1C, size 0x4
    unsigned char rate_mode; // offset 0x20, size 0x1
    struct xVec3 last_emit_position; // offset 0x24, size 0xC
    struct xVec3 last_emit_velocity; // offset 0x30, size 0xC
    float rate; // offset 0x3C, size 0x4
    float rate_time; // offset 0x40, size 0x4
    float rate_fraction; // offset 0x44, size 0x4
    float rate_fraction_cull; // offset 0x48, size 0x4
    unsigned char emit_flags; // offset 0x4C, size 0x1
    unsigned char tweak_flags; // offset 0x4D, size 0x1
    unsigned char emit_pad[2]; // offset 0x4E, size 0x2
    unsigned char rot[3]; // offset 0x50, size 0x3
    struct xModelTag tag; // offset 0x54, size 0x20
    float oocull_distance_sqr; // offset 0x74, size 0x4
    float distance_to_cull_sqr; // offset 0x78, size 0x4
    void * attachTo; // offset 0x7C, size 0x4
    struct xParSys * parSys; // offset 0x80, size 0x4
    struct xBase * emit_volume; // offset 0x84, size 0x4
    struct xVec3 last_attach_loc; // offset 0x88, size 0xC
};
// Range: 0x800AF19C -> 0x800AF610
static void reset_command(struct xParEmitter & emit /* r26 */, struct xParCmdAsset & cmd /* r31 */) {
    // Local variables
    struct xParCmdDamagePlayer & ccmd; // r1+0x44
    struct xParCmdMove & ccmd; // r1+0x40
    struct xParCmdJet & ccmd; // r25
    struct xParCmdKillOld & ccmd; // r1+0x3C
    struct xParCmdKillSlow & ccmd; // r1+0x38
    struct xParCmdFollow & ccmd; // r1+0x34
    struct xParCmdOrbitPoint & ccmd; // r19
    struct xParCmdOrbitLine & ccmd; // r24
    struct xParCmdScale3rdPolyReg & ccmd; // r23
    struct xParCmdTex & ccmd; // r30
    struct xParCmdTexAnim & ccmd; // r28
    struct xParCmdPlayerCollision & ccmd; // r1+0x30
    struct xParCmdCustom & ccmd; // r27
    struct xParCmdKillDistance & ccmd; // r1+0x2C
    struct xParCmdAge & ccmd; // r1+0x28
    struct xParCmdApplyWind & ccmd; // r1+0x24
    struct xParCmdRotPar & ccmd; // r1+0x20
    struct xParCmdRotateAround & ccmd; // r17
    struct xParCmdSmokeAlpha & ccmd; // r1+0x1C
    struct xParCmdScale & ccmd; // r1+0x18
    struct xParCmdAnimalMagentism & ccmd; // r1+0x14
    struct xParCmdCollideFall & ccmd; // r1+0x10
    struct xParCmdCollideFallSticky & ccmd; // r18
    struct xParCmdShaperData & ccmd; // r29
    struct xParCmdAlphaInOutData & ccmd; // r22
    struct xParCmdSizeInOutData & ccmd; // r21
    struct xParCmdDampenData & ccmd; // r1+0xC
    struct xParCmd * it; // r20
    struct xParCmd * end; // r1+0x8
}

// Range: 0x800AF610 -> 0x800AF654
static unsigned char omit_one_tweak(const struct tweak_info & info /* r1+0x8 */, void * context /* r1+0xC */) {
    // Local variables
    const struct substr & omit; // r31
}

// total size: 0x8
struct substr {
    // Members
    const char * text; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
// Range: 0x800AF654 -> 0x800AF78C
static struct substr emitter_name(const struct substr & name /* r31 */) {
    // Local variables
    char prefix[19]; // r1+0x10
    struct substr ret; // r1+0x8
    const char * end; // r30
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80D60238
// Range: 0x800AF78C -> 0x800AF8F0
static void on_change_type(const struct tweak_info & info /* r30 */) {
    // Local variables
    struct xParCmd & cmd; // r29
    const struct tweak_info * parent_info; // r31
    struct substr emitname; // r1+0x18
    struct xParEmitter * emit; // r28
    char buffer[128]; // r1+0xA0
    struct substr name; // r1+0x10
    struct substr omit; // r1+0x8
    char prefix[128]; // r1+0x20

    // References
    // -> static char __FUNCTION__[15];
}

static unsigned char checked; // size: 0x1, address: 0x80D693C9
static signed char init; // size: 0x1, address: 0x80D693CA
static struct tweak_callback cb_type; // size: 0x28, address: 0x804F673C
static signed char init; // size: 0x1, address: 0x80D693CB
static char __FUNCTION__[17]; // size: 0x11, address: 0x80D60247
// Range: 0x800AF8F0 -> 0x800AFABC
void xParCmdAddTweaks(const char * prefix /* r29 */, struct xParCmd & cmd /* r30 */) {
    // Local variables
    int i; // r31
    char _buffer[128]; // r1+0x30

    // References
    // -> static struct tweak_callback cb_type;
    // -> static char * command_labels[35];
    // -> static signed char init;
    // -> static unsigned char checked;
    // -> static char __FUNCTION__[17];
    // -> static signed char init;
}


