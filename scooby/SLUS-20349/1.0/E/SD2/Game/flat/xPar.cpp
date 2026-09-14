/*
    Compile unit: E:\SD2\Game\flat\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class xPar gParPool[2000]; // size: 0x27100, address: 0x379200
class xPar * gParDead; // size: 0x4, address: 0x358290
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
// total size: 0xC
class _xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x0
class zParEmitterAsset {};

/*
    Compile unit: E:\SD2\Game\flat\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AF130 -> 0x001AF1A0
*/
// Range: 0x1AF130 -> 0x1AF1A0
void xParInit(class xPar * p /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AF130 -> 0x1AF1A0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AF1A0 -> 0x001AF1F0
*/
// Range: 0x1AF1A0 -> 0x1AF1F0
void xParFree(class xPar * par /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AF1A0 -> 0x1AF1F0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AF1F0 -> 0x001AF230
*/
// Range: 0x1AF1F0 -> 0x1AF230
class xPar * xParAlloc() {
    /* anonymous block */ {
        // Range: 0x1AF1F0 -> 0x1AF230
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AF230 -> 0x001AF27C
*/
// Range: 0x1AF230 -> 0x1AF27C
void xParMemInit() {
    /* anonymous block */ {
        // Range: 0x1AF230 -> 0x1AF27C
        signed int i; // r4
    }
}


