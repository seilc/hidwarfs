/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class xCmdInfo sCmdInfo[35]; // size: 0x1A4, address: 0x597690
float cosSinPolynomial[]; // size: 0x0, address: 0x4162C0
void xParCmd_DampenSpeed_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F4170
void xParCmd_SizeInOut_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F4010
void xParCmd_AlphaInOut_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F3E30
void xParCmd_Shaper_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F3B30
void xParCmdCollideFallSticky_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F41E0
void xParCmdCollideFall_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F4280
void xParCmdScale_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F4E30
void xParCmdSmokeAlpha_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F4E40
void xParCmdRotateAround_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F4750
void xParCmdRotPar_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F4970
void xParCmdApplyWind_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F4B70
void xParCmdAlpha3rdPolyReg_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F4E20
void xParCmdAge_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F5370
void xParCmdRandomVelocityPar_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F4BD0
void xParCmdTexAnim_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F4300
void xParCmdTex_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F4740
void xParCmdScale3rdPolyReg_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F4E50
void xParCmdMoveRandomPar_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F4E60
void xParCmdOrbitLine_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F50D0
void xParCmdOrbitPoint_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F51E0
void xParCmdFollow_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F52B0
void xParCmdKillSlow_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F53B0
void xParCmdVelocityApply_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F4910
void xParCmdAccelerate_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F5070
void xParCmdMoveRandom_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F4F10
void xParCmdMove_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F5010
// total size: 0x8
class xParCmd {
    // Members
public:
    unsigned int flag; // offset 0x0, size 0x4
    class xParCmdAsset * tasset; // offset 0x4, size 0x4
};
// total size: 0x60
class xPar {
    // Members
public:
    class xPar * m_next; // offset 0x0, size 0x4
    class xPar * m_prev; // offset 0x4, size 0x4
    float m_lifetime; // offset 0x8, size 0x4
    unsigned char m_c[4]; // offset 0xC, size 0x4
    class xVec3 m_pos; // offset 0x10, size 0xC
    float m_size; // offset 0x1C, size 0x4
    class xVec3 m_vel; // offset 0x20, size 0xC
    float m_sizeVel; // offset 0x2C, size 0x4
    unsigned char m_flag; // offset 0x30, size 0x1
    unsigned char m_mode; // offset 0x31, size 0x1
    unsigned char m_texIdx[2]; // offset 0x32, size 0x2
    unsigned char m_rotdeg[3]; // offset 0x34, size 0x3
    unsigned char pad8; // offset 0x37, size 0x1
    float totalLifespan; // offset 0x38, size 0x4
    class xParEmitterAsset * m_asset; // offset 0x3C, size 0x4
    float m_cvel[4]; // offset 0x40, size 0x10
    float m_cfl[4]; // offset 0x50, size 0x10
};
// total size: 0x24
class xParGroup {
    // Members
public:
    class xPar * m_root; // offset 0x0, size 0x4
    class xPar * m_dead; // offset 0x4, size 0x4
    signed int m_num_of_particles; // offset 0x8, size 0x4
    unsigned char m_alive; // offset 0xC, size 0x1
    unsigned char m_killWhenDead; // offset 0xD, size 0x1
    unsigned char m_active; // offset 0xE, size 0x1
    unsigned char m_visible; // offset 0xF, size 0x1
    unsigned char m_culled; // offset 0x10, size 0x1
    unsigned char m_priority; // offset 0x11, size 0x1
    unsigned char m_flags; // offset 0x12, size 0x1
    unsigned char m_regidx; // offset 0x13, size 0x1
    class xParGroup * m_next; // offset 0x14, size 0x4
    class xParGroup * m_prev; // offset 0x18, size 0x4
    void (* draw)(void *, class xParGroup *); // offset 0x1C, size 0x4
    class xParCmdTex * m_cmdTex; // offset 0x20, size 0x4
};
// total size: 0xC
class xCmdInfo {
    // Members
public:
    unsigned int type; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    void (* func)(class xParCmd *, class xParGroup *, float); // offset 0x8, size 0x4
};
// total size: 0x14
class xParCmdMove : public xParCmdAsset {
    // Members
public:
    class xVec3 dir; // offset 0x8, size 0xC
};
// total size: 0x4
class _tagEmitSphere {
    // Members
public:
    float radius; // offset 0x0, size 0x4
};
// total size: 0x18
class xParCmdSizeInOutData : public xParCmdAsset {
    // Members
public:
    float custSize[4]; // offset 0x8, size 0x10
};
// total size: 0x14
class xParCmdCollideFallSticky : public xParCmdCollideFall {
    // Members
public:
    float sticky; // offset 0x10, size 0x4
};
// total size: 0x24
class xParCmdTex : public xParCmdAsset {
    // Members
public:
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
// total size: 0x8
class xParCmdAsset {
    // Members
public:
    unsigned int type; // offset 0x0, size 0x4
    unsigned char enabled; // offset 0x4, size 0x1
    unsigned char mode; // offset 0x5, size 0x1
    unsigned char pad[2]; // offset 0x6, size 0x2
};
// total size: 0x10
class xParCmdFollow : public xParCmdAsset {
    // Members
public:
    float gravity; // offset 0x8, size 0x4
    float epsilon; // offset 0xC, size 0x4
};
// total size: 0x8
class _tagEmitRect {
    // Members
public:
    float x_len; // offset 0x0, size 0x4
    float z_len; // offset 0x4, size 0x4
};
// total size: 0x10
class xParCmdKillSlow : public xParCmdAsset {
    // Members
public:
    float speedLimitSqr; // offset 0x8, size 0x4
    unsigned int kill_less_than; // offset 0xC, size 0x4
};
// total size: 0xC
class xParCmdDampenData : public xParCmdAsset {
    // Members
public:
    float dampSpeed; // offset 0x8, size 0x4
};
// total size: 0xC
class xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x14
class xParCmdRandomVelocityPar : public xParCmdAsset {
    // Members
public:
    float x; // offset 0x8, size 0x4
    float y; // offset 0xC, size 0x4
    float z; // offset 0x10, size 0x4
};
// total size: 0x2C
class xParCmdOrbitLine : public xParCmdAsset {
    // Members
public:
    class xVec3 p; // offset 0x8, size 0xC
    class xVec3 axis; // offset 0x14, size 0xC
    float gravity; // offset 0x20, size 0x4
    float epsilon; // offset 0x24, size 0x4
    float maxRadiusSqr; // offset 0x28, size 0x4
};
// total size: 0x54
class xParEmitterAsset : public xBaseAsset {
    // Members
public:
    unsigned char emit_flags; // offset 0x8, size 0x1
    unsigned char emit_type; // offset 0x9, size 0x1
    unsigned short pad; // offset 0xA, size 0x2
    unsigned int propID; // offset 0xC, size 0x4
    union { // inferred
        class xPECircle e_circle; // offset 0x10, size 0x14
        class _tagEmitSphere e_sphere; // offset 0x10, size 0x4
        class _tagEmitRect e_rect; // offset 0x10, size 0x8
        class _tagEmitLine e_line; // offset 0x10, size 0x1C
        class _tagEmitVolume e_volume; // offset 0x10, size 0x4
        class _tagEmitOffsetPoint e_offsetp; // offset 0x10, size 0xC
        class xPEVCyl e_vcyl; // offset 0x10, size 0xC
        class xPEEntBone e_entbone; // offset 0x10, size 0x18
        class xPEEntBound e_entbound; // offset 0x10, size 0xC
    };
    unsigned int attachToID; // offset 0x2C, size 0x4
    class xVec3 pos; // offset 0x30, size 0xC
    class xVec3 vel; // offset 0x3C, size 0xC
    float vel_angle_variation; // offset 0x48, size 0x4
    unsigned int cull_mode; // offset 0x4C, size 0x4
    float cull_dist_sqr; // offset 0x50, size 0x4
};
// total size: 0xC
class xPEEntBound {
    // Members
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char type; // offset 0x1, size 0x1
    unsigned char pad1; // offset 0x2, size 0x1
    unsigned char pad2; // offset 0x3, size 0x1
    float expand; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
};
// total size: 0x18
class xParCmdAlphaInOutData : public xParCmdAsset {
    // Members
public:
    float custAlpha[4]; // offset 0x8, size 0x10
};
// total size: 0x1C
class _tagEmitLine {
    // Members
public:
    class xVec3 pos1; // offset 0x0, size 0xC
    class xVec3 pos2; // offset 0xC, size 0xC
    float radius; // offset 0x18, size 0x4
};
// total size: 0x14
class xParCmdAccelerate : public xParCmdAsset {
    // Members
public:
    class xVec3 acc; // offset 0x8, size 0xC
};
// total size: 0x4
class _tagEmitVolume {
    // Members
public:
    unsigned int emit_volumeID; // offset 0x0, size 0x4
};
// total size: 0x20
class xParCmdRotPar : public xParCmdAsset {
    // Members
public:
    class xVec3 min; // offset 0x8, size 0xC
    class xVec3 max; // offset 0x14, size 0xC
};
// total size: 0x20
class xParCmdOrbitPoint : public xParCmdAsset {
    // Members
public:
    class xVec3 center; // offset 0x8, size 0xC
    float gravity; // offset 0x14, size 0x4
    float epsilon; // offset 0x18, size 0x4
    float maxRadiusSqr; // offset 0x1C, size 0x4
};
// total size: 0x10
class xParCmdCollideFall : public xParCmdAsset {
    // Members
public:
    float y; // offset 0x8, size 0x4
    float bounce; // offset 0xC, size 0x4
};
// total size: 0x18
class xParCmdTexAnim : public xParCmdAsset {
    // Members
public:
    unsigned char anim_mode; // offset 0x8, size 0x1
    unsigned char anim_wrap_mode; // offset 0x9, size 0x1
    unsigned char pad_anim; // offset 0xA, size 0x1
    unsigned char throttle_spd_less_than; // offset 0xB, size 0x1
    float throttle_spd_sqr; // offset 0xC, size 0x4
    float throttle_time; // offset 0x10, size 0x4
    float throttle_time_elapsed; // offset 0x14, size 0x4
};
// total size: 0x30
class xParCmdShaperData : public xParCmdAsset {
    // Members
public:
    float custAlpha[4]; // offset 0x8, size 0x10
    float custSize[4]; // offset 0x18, size 0x10
    float dampSpeed; // offset 0x28, size 0x4
    float gravity; // offset 0x2C, size 0x4
};
// total size: 0xC
class _tagEmitOffsetPoint {
    // Members
public:
    class xVec3 offset; // offset 0x0, size 0xC
};
// total size: 0x30
class xMat3x3 {
    // Members
public:
    class xVec3 right; // offset 0x0, size 0xC
    signed int flags; // offset 0xC, size 0x4
    class xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
};
// total size: 0x14
class xParCmdMoveRandomPar : public xParCmdAsset {
    // Members
public:
    class xVec3 dim; // offset 0x8, size 0xC
};
// total size: 0xC
class xPEVCyl {
    // Members
public:
    float height; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
};
// total size: 0x20
class xParCmdRotateAround : public xParCmdAsset {
    // Members
public:
    class xVec3 pos; // offset 0x8, size 0xC
    float unused1; // offset 0x14, size 0x4
    float radius_growth; // offset 0x18, size 0x4
    float yaw; // offset 0x1C, size 0x4
};
// total size: 0x18
class xPEEntBone {
    // Members
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char type; // offset 0x1, size 0x1
    unsigned char bone; // offset 0x2, size 0x1
    unsigned char pad1; // offset 0x3, size 0x1
    class xVec3 offset; // offset 0x4, size 0xC
    float radius; // offset 0x10, size 0x4
    float deflection; // offset 0x14, size 0x4
};
// total size: 0x14
class xPECircle {
    // Members
public:
    float radius; // offset 0x0, size 0x4
    float deflection; // offset 0x4, size 0x4
    class xVec3 dir; // offset 0x8, size 0xC
};
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F3B30 -> 0x001F3E30
*/
// Range: 0x1F3B30 -> 0x1F3E30
void xParCmd_Shaper_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x1F3B30 -> 0x1F3E30
        class xPar * p; // r5
        class xParCmdShaperData * cmd; // r6
        float damp; // r1
        float grav; // r29+0x20
        signed int doalpha; // r4
        signed int dosize; // r3
        signed int i; // r9
        signed int seg; // r10
        float slope_alfa[3]; // r29+0x10
        float slope_size[3]; // r29
        float frac; // r11
        float alfa; // r5
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F3E30 -> 0x001F4008
*/
// Range: 0x1F3E30 -> 0x1F4008
void xParCmd_AlphaInOut_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F3E30 -> 0x1F4008
        class xPar * p; // r8
        class xParCmdAlphaInOutData * cmd; // r7
        signed int i; // r6
        signed int seg; // r5
        float slope_alfa[3]; // r29
        float frac; // r8
        float alfa; // r3
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4010 -> 0x001F4170
*/
// Range: 0x1F4010 -> 0x1F4170
void xParCmd_SizeInOut_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F4010 -> 0x1F4170
        class xPar * p; // r7
        class xParCmdSizeInOutData * cmd; // r6
        signed int i; // r5
        signed int seg; // r4
        float slope_size[3]; // r29
        float frac; // r6
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4170 -> 0x001F41E0
*/
// Range: 0x1F4170 -> 0x1F41E0
void xParCmd_DampenSpeed_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1F4170 -> 0x1F41E0
        class xPar * p; // r3
        class xParCmdDampenData * cmd; // r4
        float damp; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F41E0 -> 0x001F4280
*/
// Range: 0x1F41E0 -> 0x1F4280
void xParCmdCollideFallSticky_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F41E0 -> 0x1F4280
        class xParCmdCollideFallSticky & cmd; // r6
        float xzdamp; // r4
        class xPar * p; // r5
        float & loc; // r4
        float & vel; // r3
        float dloc; // r3
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4280 -> 0x001F42F8
*/
// Range: 0x1F4280 -> 0x1F42F8
void xParCmdCollideFall_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F4280 -> 0x1F42F8
        class xParCmdCollideFall & cmd; // r6
        class xPar * p; // r5
        float & loc; // r4
        float & vel; // r3
        float dloc; // r3
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4300 -> 0x001F4734
*/
// Range: 0x1F4300 -> 0x1F4734
void xParCmdTexAnim_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29+0x30 */) {
    /* anonymous block */ {
        // Range: 0x1F4300 -> 0x1F4734
        class xPar * p; // r17
        class xParCmdTexAnim * cmd; // r6
        class xParCmdTex * tex; // r16
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4740 -> 0x001F4748
*/
// Range: 0x1F4740 -> 0x1F4748
void xParCmdTex_Update() {
    /* anonymous block */ {
        // Range: 0x1F4740 -> 0x1F4748
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4750 -> 0x001F4904
*/
// Range: 0x1F4750 -> 0x1F4904
void xParCmdRotateAround_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29+0x130 */) {
    /* anonymous block */ {
        // Range: 0x1F4750 -> 0x1F4904
        class xPar * p; // r21
        class xParCmdRotateAround * cmd; // r20
        float yaw; // r22
        float radius_growth; // r21
        class xVec3 at; // r29+0x120
        class xMat3x3 lookmat; // r29+0xE0
        float radius; // r20
        class xVec3 angles; // r29+0x110
        class xMat3x3 rotmat; // r29+0xB0
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4910 -> 0x001F4968
*/
// Range: 0x1F4910 -> 0x1F4968
void xParCmdVelocityApply_Update(class xParGroup * ps /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F4910 -> 0x1F4968
        class xPar * p; // r3
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4970 -> 0x001F4B64
*/
// Range: 0x1F4970 -> 0x1F4B64
void xParCmdRotPar_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r26 */) {
    /* anonymous block */ {
        // Range: 0x1F4970 -> 0x1F4B64
        class xPar * p; // r16
        class xParCmdRotPar * cmd; // r4
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4B70 -> 0x001F4BD0
*/
// Range: 0x1F4B70 -> 0x1F4BD0
void xParCmdApplyWind_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1F4B70 -> 0x1F4BD0
        class xPar * p; // r5
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4BD0 -> 0x001F4E14
*/
// Range: 0x1F4BD0 -> 0x1F4E14
void xParCmdRandomVelocityPar_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r16 */, float dt /* r29+0x50 */) {
    /* anonymous block */ {
        // Range: 0x1F4BD0 -> 0x1F4E14
        class xPar * p; // r7
        class xParCmdRandomVelocityPar * cmd; // r3
        class xVec3 rot; // r29+0x40
        class xVec3 * velvec; // r6
        unsigned int uvelx; // r5
        unsigned int uvely; // r4
        unsigned int uvelz; // r3
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4E20 -> 0x001F4E28
*/
// Range: 0x1F4E20 -> 0x1F4E28
void xParCmdAlpha3rdPolyReg_Update() {
    /* anonymous block */ {
        // Range: 0x1F4E20 -> 0x1F4E28
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4E30 -> 0x001F4E38
*/
// Range: 0x1F4E30 -> 0x1F4E38
void xParCmdScale_Update() {
    /* anonymous block */ {
        // Range: 0x1F4E30 -> 0x1F4E38
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4E40 -> 0x001F4E48
*/
// Range: 0x1F4E40 -> 0x1F4E48
void xParCmdSmokeAlpha_Update() {
    /* anonymous block */ {
        // Range: 0x1F4E40 -> 0x1F4E48
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4E50 -> 0x001F4E58
*/
// Range: 0x1F4E50 -> 0x1F4E58
void xParCmdScale3rdPolyReg_Update() {
    /* anonymous block */ {
        // Range: 0x1F4E50 -> 0x1F4E58
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4E60 -> 0x001F4F08
*/
// Range: 0x1F4E60 -> 0x1F4F08
void xParCmdMoveRandomPar_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29+0x30 */) {
    /* anonymous block */ {
        // Range: 0x1F4E60 -> 0x1F4F08
        class xPar * p; // r16
        class xParCmdMoveRandomPar * cmd; // r4
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4F10 -> 0x001F500C
*/
// Range: 0x1F4F10 -> 0x1F500C
void xParCmdMoveRandom_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r17 */, float dt /* r23 */) {
    /* anonymous block */ {
        // Range: 0x1F4F10 -> 0x1F500C
        class xPar * p; // r4
        class xParCmdMove * cmd; // r16
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F5010 -> 0x001F5070
*/
// Range: 0x1F5010 -> 0x1F5070
void xParCmdMove_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1F5010 -> 0x1F5070
        class xPar * p; // r4
        class xParCmdMove * cmd; // r3
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F5070 -> 0x001F50D0
*/
// Range: 0x1F5070 -> 0x1F50D0
void xParCmdAccelerate_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1F5070 -> 0x1F50D0
        class xPar * p; // r4
        class xParCmdAccelerate * cmd; // r3
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F50D0 -> 0x001F51E0
*/
// Range: 0x1F50D0 -> 0x1F51E0
void xParCmdOrbitLine_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1F50D0 -> 0x1F51E0
        class xPar * p; // r4
        class xParCmdOrbitLine * cmd; // r3
        float mdt; // r29
        float force; // r6
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F51E0 -> 0x001F52A8
*/
// Range: 0x1F51E0 -> 0x1F52A8
void xParCmdOrbitPoint_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1F51E0 -> 0x1F52A8
        class xPar * p; // r4
        class xParCmdOrbitPoint * cmd; // r3
        float mdt; // r7
        float force; // r6
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F52B0 -> 0x001F5370
*/
// Range: 0x1F52B0 -> 0x1F5370
void xParCmdFollow_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1F52B0 -> 0x1F5370
        class xPar * p; // r5
        class xParCmdFollow * cmd; // r4
        float mdt; // r7
        float force; // r3
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F5370 -> 0x001F53A8
*/
// Range: 0x1F5370 -> 0x1F53A8
void xParCmdAge_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1F5370 -> 0x1F53A8
        class xPar * p; // r4
        float age_rate; // r1
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F53B0 -> 0x001F5460
*/
// Range: 0x1F53B0 -> 0x1F5460
void xParCmdKillSlow_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1F53B0 -> 0x1F5460
        class xPar * p; // r4
        class xParCmdKillSlow * cmd; // r3
        float speedLimit; // r3
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F5460 -> 0x001F54C0
*/
// Range: 0x1F5460 -> 0x1F54C0
void (* xParCmdGetUpdateFunc(unsigned int parType /* r2 */))(class xParCmd *, class xParGroup *, float) {
    /* anonymous block */ {
        // Range: 0x1F5460 -> 0x1F54C0
        signed int i; // r5
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F54C0 -> 0x001F5520
*/
// Range: 0x1F54C0 -> 0x1F5520
unsigned int xParCmdGetSize(unsigned int parType /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F54C0 -> 0x1F5520
        signed int i; // r5
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F5520 -> 0x001F5560
*/
// Range: 0x1F5520 -> 0x1F5560
void xParCmdRegister(unsigned int parType /* r2 */, unsigned int size /* r2 */, void (* func)(class xParCmd *, class xParGroup *, float) /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F5520 -> 0x1F5560
    }
}


/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F5560 -> 0x001F5934
*/
// Range: 0x1F5560 -> 0x1F5934
void xParCmdInit() {
    /* anonymous block */ {
        // Range: 0x1F5560 -> 0x1F5934
    }
}


