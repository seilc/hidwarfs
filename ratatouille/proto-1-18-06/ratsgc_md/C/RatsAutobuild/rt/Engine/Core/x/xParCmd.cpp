/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xParCmd.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800501C4 -> 0x80051934
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
static struct xCmdInfo sCmdInfo[35]; // size: 0x1A4, address: 0x802BC9E0
// Range: 0x800501C4 -> 0x800503F8
void xParCmdInit() {}

// Range: 0x800503F8 -> 0x80050418
void xParCmdRegister(unsigned int parType /* r0 */, unsigned int size /* r0 */, void (* func)(struct xParCmd *, struct xParGroup *, float) /* r0 */) {
    // References
    // -> static struct xCmdInfo sCmdInfo[35];
}

// Range: 0x80050418 -> 0x8005045C
unsigned int xParCmdGetSize(unsigned int parType /* r0 */) {
    // Local variables
    int i; // r0

    // References
    // -> static struct xCmdInfo sCmdInfo[35];
}

// Range: 0x8005045C -> 0x800504A0
void (* xParCmdGetUpdateFunc(unsigned int parType /* r0 */))(struct xParCmd *, struct xParGroup *, float) {
    // Local variables
    int i; // r0

    // References
    // -> static struct xCmdInfo sCmdInfo[35];
}

// total size: 0x10
struct xParCmdKillSlow : public xParCmdAsset {
    // Members
    float speedLimitSqr; // offset 0x8, size 0x4
    unsigned int kill_less_than; // offset 0xC, size 0x4
};
// Range: 0x800504A0 -> 0x80050554
void xParCmdKillSlow_Update(struct xParCmd * c /* r0 */, struct xParGroup * ps /* r0 */, float dt /* f0 */) {
    // Local variables
    struct xPar * p; // r31
    struct xParCmdKillSlow * cmd; // r3
    float speedLimit; // f30
}

// Range: 0x80050554 -> 0x80050584
void xParCmdAge_Update(struct xParCmd * c /* r0 */, struct xParGroup * ps /* r0 */, float dt /* f0 */) {
    // Local variables
    struct xPar * p; // r4
    float age_rate; // f1
}

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
// Range: 0x80050584 -> 0x80050660
void xParCmdFollow_Update(struct xParCmd * c /* r0 */, struct xParGroup * ps /* r0 */, float dt /* f0 */) {
    // Local variables
    struct xPar * p; // r31
    struct xParCmdFollow * cmd; // r30
    struct xVec3 delta; // r1+0x8
    float mdt; // f30
    float lenSqr2; // f0
    float lenSqr; // f0
    float force; // f3
}

// total size: 0x20
struct xParCmdOrbitPoint : public xParCmdAsset {
    // Members
    struct xVec3 center; // offset 0x8, size 0xC
    float gravity; // offset 0x14, size 0x4
    float epsilon; // offset 0x18, size 0x4
    float maxRadiusSqr; // offset 0x1C, size 0x4
};
// Range: 0x80050660 -> 0x8005073C
void xParCmdOrbitPoint_Update(struct xParCmd * c /* r0 */, struct xParGroup * ps /* r0 */, float dt /* f0 */) {
    // Local variables
    struct xPar * p; // r31
    struct xParCmdOrbitPoint * cmd; // r30
    struct xVec3 dir; // r1+0x8
    float mdt; // f30
    float rSqr2; // f0
    float rSqr; // f0
    float force; // f3
}

// total size: 0x2C
struct xParCmdOrbitLine : public xParCmdAsset {
    // Members
    struct xVec3 p; // offset 0x8, size 0xC
    struct xVec3 axis; // offset 0x14, size 0xC
    float gravity; // offset 0x20, size 0x4
    float epsilon; // offset 0x24, size 0x4
    float maxRadiusSqr; // offset 0x28, size 0x4
};
// Range: 0x8005073C -> 0x80050848
void xParCmdOrbitLine_Update(struct xParCmd * c /* r0 */, struct xParGroup * ps /* r0 */, float dt /* f0 */) {
    // Local variables
    struct xPar * p; // r31
    struct xParCmdOrbitLine * cmd; // r30
    struct xVec3 f; // r1+0x2C
    struct xVec3 w; // r1+0x20
    struct xVec3 tmp; // r1+0x14
    float mdt; // f30
    struct xVec3 into; // r1+0x8
    float rSqr2; // f0
    float rSqr; // f0
    float force; // f3
}

// Range: 0x80050848 -> 0x800508E4
void xParCmdAccelerate_Update(struct xParCmd * c /* r3 */, struct xParGroup * ps /* r31 */, float dt /* f31 */) {
    // Local variables
    struct xPar * p; // r3
    struct xVec3 delta; // r1+0x8
}

// Range: 0x800508E4 -> 0x80050958
void xParCmdMove_Update(struct xParCmd * c /* r3 */, struct xParGroup * ps /* r31 */, float dt /* f31 */) {
    // Local variables
    struct xPar * p; // r31
    struct xVec3 delta; // r1+0x8
}

// total size: 0x14
struct xParCmdMove : public xParCmdAsset {
    // Members
    struct xVec3 dir; // offset 0x8, size 0xC
};
// Range: 0x80050958 -> 0x80050A2C
void xParCmdMoveRandom_Update(struct xParCmd * c /* r0 */, struct xParGroup * ps /* r30 */, float dt /* f31 */) {
    // Local variables
    struct xPar * p; // r31
    struct xParCmdMove * cmd; // r31
    struct xVec3 delta; // r1+0x8
}

// total size: 0x14
struct xParCmdMoveRandomPar : public xParCmdAsset {
    // Members
    struct xVec3 dim; // offset 0x8, size 0xC
};
// Range: 0x80050A2C -> 0x80050AD8
void xParCmdMoveRandomPar_Update(struct xParCmd * c /* r0 */, struct xParGroup * ps /* r0 */, float dt /* f2 */) {
    // Local variables
    struct xPar * p; // r31
    struct xParCmdMoveRandomPar * cmd; // r3
}

// Range: 0x80050AD8 -> 0x80050ADC
void xParCmdScale3rdPolyReg_Update() {}

// Range: 0x80050ADC -> 0x80050AE0
void xParCmdSmokeAlpha_Update() {}

// Range: 0x80050AE0 -> 0x80050AE4
void xParCmdScale_Update() {}

// Range: 0x80050AE4 -> 0x80050AE8
void xParCmdAlpha3rdPolyReg_Update() {}

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
// Range: 0x80050AE8 -> 0x80050BF4
void xParCmdRandomVelocityPar_Update(struct xParCmd * c /* r0 */, struct xParGroup * ps /* r0 */, float dt /* f0 */) {
    // Local variables
    struct xPar * p; // r31
    struct xParCmdRandomVelocityPar * cmd; // r3
    struct xMat3x3 rotmat; // r1+0x10
    float x; // f27
    float y; // f26
    float z; // f3
}

// Range: 0x80050BF4 -> 0x80050C40
void xParCmdApplyWind_Update(struct xParCmd * c /* r0 */, struct xParGroup * ps /* r0 */, float dt /* f0 */) {
    // Local variables
    struct xPar * p; // r3
}

// total size: 0x20
struct xParCmdRotPar : public xParCmdAsset {
    // Members
    struct xVec3 min; // offset 0x8, size 0xC
    struct xVec3 max; // offset 0x14, size 0xC
};
// Range: 0x80050C40 -> 0x80050DF4
void xParCmdRotPar_Update(struct xParCmd * c /* r0 */, struct xParGroup * ps /* r0 */, float dt /* f24 */) {
    // Local variables
    struct xPar * p; // r30
    struct xParCmdRotPar * cmd; // r3
}

// Range: 0x80050DF4 -> 0x80050E58
void xParCmdVelocityApply_Update(struct xParGroup * ps /* r0 */, float dt /* f31 */) {
    // Local variables
    struct xPar * p; // r31
    struct xVec3 vel; // r1+0x8
}

// total size: 0x20
struct xParCmdRotateAround : public xParCmdAsset {
    // Members
    struct xVec3 pos; // offset 0x8, size 0xC
    float unused1; // offset 0x14, size 0x4
    float radius_growth; // offset 0x18, size 0x4
    float yaw; // offset 0x1C, size 0x4
};
// Range: 0x80050E58 -> 0x80050F8C
void xParCmdRotateAround_Update(struct xParCmd * c /* r0 */, struct xParGroup * ps /* r0 */, float dt /* f0 */) {
    // Local variables
    struct xPar * p; // r31
    struct xParCmdRotateAround * cmd; // r30
    float yaw; // f29
    float radius_growth; // f28
    struct xVec3 at; // r1+0x34
    struct xMat3x3 lookmat; // r1+0x70
    float radius; // f0
    struct xVec3 angles; // r1+0x28
    struct xMat3x3 rotmat; // r1+0x40
    struct xVec3 offset; // r1+0x1C
    struct xVec3 out_offset; // r1+0x10
}

// Range: 0x80050F8C -> 0x80050F90
void xParCmdTex_Update() {}

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
// Range: 0x80050F90 -> 0x80051310
void xParCmdTexAnim_Update(struct xParCmd * c /* r0 */, struct xParGroup * ps /* r0 */, float dt /* f0 */) {
    // Local variables
    struct xPar * p; // r31
    struct xParCmdTexAnim * cmd; // r3
    struct xParCmdTex * tex; // r30
}

// total size: 0x10
struct xParCmdCollideFall : public xParCmdAsset {
    // Members
    float y; // offset 0x8, size 0x4
    float bounce; // offset 0xC, size 0x4
};
// Range: 0x80051310 -> 0x8005136C
void xParCmdCollideFall_Update(struct xParCmd * c /* r0 */, struct xParGroup * ps /* r0 */) {
    // Local variables
    struct xParCmdCollideFall & cmd; // r3
    struct xPar * p; // r4
    float & loc; // r0
    float & vel; // r0
    float dloc; // f3
}

// total size: 0x14
struct xParCmdCollideFallSticky : public xParCmdCollideFall {
    // Members
    float sticky; // offset 0x10, size 0x4
};
// Range: 0x8005136C -> 0x800513EC
void xParCmdCollideFallSticky_Update(struct xParCmd * c /* r0 */, struct xParGroup * ps /* r0 */) {
    // Local variables
    struct xParCmdCollideFallSticky & cmd; // r3
    float xzdamp; // f3
    struct xPar * p; // r4
    float & loc; // r0
    float & vel; // r0
    float dloc; // f4
}

// total size: 0xC
struct xParCmdDampenData : public xParCmdAsset {
    // Members
    float dampSpeed; // offset 0x8, size 0x4
};
// Range: 0x800513EC -> 0x8005145C
void xParCmd_DampenSpeed_Update(struct xParCmd * c /* r0 */, struct xParGroup * ps /* r0 */, float dt /* f0 */) {
    // Local variables
    struct xPar * p; // r31
    struct xParCmdDampenData * cmd; // r3
    float damp; // f31
}

// total size: 0x18
struct xParCmdSizeInOutData : public xParCmdAsset {
    // Members
    float custSize[4]; // offset 0x8, size 0x10
};
// Range: 0x8005145C -> 0x80051570
void xParCmd_SizeInOut_Update(struct xParCmd * c /* r0 */, struct xParGroup * ps /* r0 */) {
    // Local variables
    struct xPar * p; // r5
    struct xParCmdSizeInOutData * cmd; // r7
    int i; // r0
    int seg; // r0
    float slope_size[3]; // r1+0x8
    float frac; // f1
}

// total size: 0x18
struct xParCmdAlphaInOutData : public xParCmdAsset {
    // Members
    float custAlpha[4]; // offset 0x8, size 0x10
};
// Range: 0x80051570 -> 0x800516D0
void xParCmd_AlphaInOut_Update(struct xParCmd * c /* r0 */, struct xParGroup * ps /* r0 */) {
    // Local variables
    struct xPar * p; // r5
    struct xParCmdAlphaInOutData * cmd; // r7
    int i; // r0
    int seg; // r0
    float slope_alfa[3]; // r1+0x8
    float frac; // f2
    float alfa; // f2
}

// total size: 0x30
struct xParCmdShaperData : public xParCmdAsset {
    // Members
    float custAlpha[4]; // offset 0x8, size 0x10
    float custSize[4]; // offset 0x18, size 0x10
    float dampSpeed; // offset 0x28, size 0x4
    float gravity; // offset 0x2C, size 0x4
};
// Range: 0x800516D0 -> 0x80051934
void xParCmd_Shaper_Update(struct xParCmd * c /* r0 */, struct xParGroup * ps /* r0 */, float dt /* f0 */) {
    // Local variables
    struct xPar * p; // r31
    struct xParCmdShaperData * cmd; // r30
    float damp; // f30
    float grav; // f29
    int doalpha; // r29
    int dosize; // r28
    int i; // r0
    int seg; // r5
    float slope_alfa[3]; // r1+0x14
    float slope_size[3]; // r1+0x8
    float frac; // f1
    float alfa; // f2
}


