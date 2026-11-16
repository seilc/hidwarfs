/*
    Compile unit: E:\SD2\Game\flat\xParGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int sParGroupRegTableInit; // size: 0x4, address: 0x358DB4
static signed int sParGroupRegTableCount; // size: 0x4, address: 0x358DB8
class xParGroup * sParGroupRegTable[255]; // size: 0x3FC, address: 0x3AA0A0
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
// total size: 0x50
class xPar {
    // Members
public:
    class xPar * m_next; // offset 0x0, size 0x4
    class xPar * m_prev; // offset 0x4, size 0x4
    float m_lifetime; // offset 0x8, size 0x4
    unsigned char m_c[4]; // offset 0xC, size 0x4
    class _xVec3 m_pos; // offset 0x10, size 0xC
    float m_size; // offset 0x1C, size 0x4
    class _xVec3 m_vel; // offset 0x20, size 0xC
    float m_sizeVel; // offset 0x2C, size 0x4
    unsigned char m_flag; // offset 0x30, size 0x1
    unsigned char m_mode; // offset 0x31, size 0x1
    unsigned char m_texIdx[2]; // offset 0x32, size 0x2
    unsigned char m_rotdeg[3]; // offset 0x34, size 0x3
    unsigned char pad8; // offset 0x37, size 0x1
    unsigned int pad32; // offset 0x38, size 0x4
    class zParEmitterAsset * m_asset; // offset 0x3C, size 0x4
    float m_cvel[4]; // offset 0x40, size 0x10
};
// total size: 0x78
class zParEmitterAsset : public p2BaseAsset {
    // Members
public:
    unsigned char emit_flags; // offset 0x8, size 0x1
    unsigned char emit_type; // offset 0x9, size 0x1
    unsigned char count; // offset 0xA, size 0x1
    unsigned char count_variation; // offset 0xB, size 0x1
    float interval; // offset 0xC, size 0x4
    union { // inferred
        class _tagEmitCircle e_circle; // offset 0x10, size 0x8
        class _tagEmitSphere e_sphere; // offset 0x10, size 0x4
        class _tagEmitRect e_rect; // offset 0x10, size 0x8
        class _tagEmitLine e_line; // offset 0x10, size 0x1C
        class _tagEmitVolume e_volume; // offset 0x10, size 0x4
        class _tagEmitOffsetPoint e_offsetp; // offset 0x10, size 0xC
    };
    unsigned int attachToID; // offset 0x2C, size 0x4
    unsigned int parSysID; // offset 0x30, size 0x4
    class _xVec3 pos; // offset 0x34, size 0xC
    class _xVec3 vel; // offset 0x40, size 0xC
    float vel_angle_variation; // offset 0x4C, size 0x4
    unsigned char color_birth[4]; // offset 0x50, size 0x4
    unsigned char color_death[4]; // offset 0x54, size 0x4
    float size_birth; // offset 0x58, size 0x4
    float size_birth_variation; // offset 0x5C, size 0x4
    float size_death; // offset 0x60, size 0x4
    float life; // offset 0x64, size 0x4
    float life_variation; // offset 0x68, size 0x4
    unsigned char pad_emit[2]; // offset 0x6C, size 0x2
    unsigned char cull_mode; // offset 0x6E, size 0x1
    float cull_dist_sqr; // offset 0x70, size 0x4
    unsigned char max_emit; // offset 0x74, size 0x1
};
// total size: 0xC
class _tagEmitOffsetPoint {
    // Members
public:
    class _xVec3 offset; // offset 0x0, size 0xC
};
// total size: 0x0
class xParCmdTex {};
// total size: 0x8
class _tagEmitCircle {
    // Members
public:
    float radius; // offset 0x0, size 0x4
    float deflection; // offset 0x4, size 0x4
};
// total size: 0x4
class _tagEmitSphere {
    // Members
public:
    float radius; // offset 0x0, size 0x4
};
// total size: 0x8
class p2BaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0xC
class _xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x8
class _tagEmitRect {
    // Members
public:
    float x_len; // offset 0x0, size 0x4
    float z_len; // offset 0x4, size 0x4
};
// total size: 0x1C
class _tagEmitLine {
    // Members
public:
    class _xVec3 pos1; // offset 0x0, size 0xC
    class _xVec3 pos2; // offset 0xC, size 0xC
    float radius; // offset 0x18, size 0x4
};
// total size: 0x4
class _tagEmitVolume {
    // Members
public:
    unsigned int emit_volumeID; // offset 0x0, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\xParGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D60D0 -> 0x001D6190
*/
// Range: 0x1D60D0 -> 0x1D6190
void xParGroupKillPar(class xParGroup * ps /* r2 */, class xPar * p /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D60D0 -> 0x1D6190
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xParGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D6190 -> 0x001D62FC
*/
// Range: 0x1D6190 -> 0x1D62FC
class xPar * xParGroupAddPar(class xParGroup * ps /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1D6190 -> 0x1D62FC
        unsigned char i; // r5
        signed int myPriority; // r4
        class xPar * p; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xParGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D6300 -> 0x001D642C
*/
// Range: 0x1D6300 -> 0x1D642C
void xParGroupAnimate(class xParGroup * ps /* r17 */, float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x1D6300 -> 0x1D642C
        float age; // r20
        class xPar * tmp; // r2
        class xPar * i; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xParGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D6430 -> 0x001D647C
*/
// Range: 0x1D6430 -> 0x1D647C
void xParGroupKillAllParticles(class xParGroup * ps /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1D6430 -> 0x1D647C
        class xPar * tmp; // r2
        class xPar * i; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xParGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D6480 -> 0x001D6488
*/
// Range: 0x1D6480 -> 0x1D6488
void xParGroupSetActive(class xParGroup * ps /* r2 */, unsigned int isActive /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D6480 -> 0x1D6488
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xParGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D6490 -> 0x001D64E8
*/
// Range: 0x1D6490 -> 0x1D64E8
void xParGroupUnregister(class xParGroup * ps /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D6490 -> 0x1D64E8
        unsigned char i; // r5
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xParGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D64F0 -> 0x001D65D8
*/
// Range: 0x1D64F0 -> 0x1D65D8
void xParGroupRegister(class xParGroup * ps /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D64F0 -> 0x1D65D8
        unsigned char i; // r5
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xParGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D65E0 -> 0x001D65E8
*/
// Range: 0x1D65E0 -> 0x1D65E8
void xParGroupSetPriority(class xParGroup * ps /* r2 */, unsigned char val /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D65E0 -> 0x1D65E8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xParGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D65F0 -> 0x001D65F8
*/
// Range: 0x1D65F0 -> 0x1D65F8
void xParGroupSetVisibility(class xParGroup * ps /* r2 */, signed int vis /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D65F0 -> 0x1D65F8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xParGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D6600 -> 0x001D6634
*/
// Range: 0x1D6600 -> 0x1D6634
void xParGroupSetStealing(class xParGroup * ps /* r2 */, signed int stealing /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D6600 -> 0x1D6634
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xParGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D6640 -> 0x001D6674
*/
// Range: 0x1D6640 -> 0x1D6674
void xParGroupSetBack2Life(class xParGroup * ps /* r2 */, signed int b2l /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D6640 -> 0x1D6674
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xParGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D6680 -> 0x001D66B4
*/
// Range: 0x1D6680 -> 0x1D66B4
void xParGroupSetAging(class xParGroup * ps /* r2 */, signed int age /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D6680 -> 0x1D66B4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xParGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D66C0 -> 0x001D670C
*/
// Range: 0x1D66C0 -> 0x1D670C
void xParGroupInit(class xParGroup * ps /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D66C0 -> 0x1D670C
    }
}


