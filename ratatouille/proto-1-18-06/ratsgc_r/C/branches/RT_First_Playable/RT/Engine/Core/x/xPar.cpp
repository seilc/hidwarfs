/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xPar.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8008E470 -> 0x8008E6D8
*/
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
// total size: 0x0
struct xParEmitterAsset {};
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
struct xPar gParPool[500]; // size: 0xDAC0, address: 0x80A84CF8
struct xPar * gParDead; // size: 0x4, address: 0x80C07520
// Range: 0x8008E470 -> 0x8008E54C
void xParMemInit() {
    // Local variables
    int i; // r6

    // References
    // -> struct xPar * gParDead;
    // -> struct xPar gParPool[500];
}

// Range: 0x8008E54C -> 0x8008E58C
struct xPar * xParAlloc() {
    // References
    // -> struct xPar * gParDead;
}

static char __FUNCTION__[9]; // size: 0x9, address: 0x80BFD730
// Range: 0x8008E58C -> 0x8008E648
void xParFree(struct xPar * par /* r31 */) {
    // References
    // -> struct xPar * gParDead;
    // -> static char __FUNCTION__[9];
}

// Range: 0x8008E648 -> 0x8008E6D8
void xParInit(struct xPar * p /* r0 */) {}


