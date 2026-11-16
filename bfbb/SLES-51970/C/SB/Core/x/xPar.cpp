/*
    Compile unit: C:\SB\Core\x\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class xPar gParPool[2000]; // size: 0x2EE00, address: 0x568890
class xPar * gParDead; // size: 0x4, address: 0x50EF70
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
// total size: 0xC
class xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x0
class xParEmitterAsset {};

/*
    Compile unit: C:\SB\Core\x\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F39C0 -> 0x001F3A40
*/
// Range: 0x1F39C0 -> 0x1F3A40
void xParInit(class xPar * p /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F39C0 -> 0x1F3A40
    }
}


/*
    Compile unit: C:\SB\Core\x\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F3A40 -> 0x001F3A94
*/
// Range: 0x1F3A40 -> 0x1F3A94
void xParFree(class xPar * par /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F3A40 -> 0x1F3A94
    }
}


/*
    Compile unit: C:\SB\Core\x\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F3AA0 -> 0x001F3AE0
*/
// Range: 0x1F3AA0 -> 0x1F3AE0
class xPar * xParAlloc() {
    /* anonymous block */ {
        // Range: 0x1F3AA0 -> 0x1F3AE0
    }
}


/*
    Compile unit: C:\SB\Core\x\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F3AE0 -> 0x001F3B2C
*/
// Range: 0x1F3AE0 -> 0x1F3B2C
void xParMemInit() {
    /* anonymous block */ {
        // Range: 0x1F3AE0 -> 0x1F3B2C
        signed int i; // r5
    }
}


