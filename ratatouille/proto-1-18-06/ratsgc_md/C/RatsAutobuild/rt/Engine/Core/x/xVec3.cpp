/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80078B14 -> 0x80078C30
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
struct xVec3 m_Null; // size: 0xC, address: 0x803C5738
struct xVec3 m_Ones; // size: 0xC, address: 0x803C5744
struct xVec3 m_UnitAxisX; // size: 0xC, address: 0x803C5750
struct xVec3 m_UnitAxisY; // size: 0xC, address: 0x803C575C
struct xVec3 m_UnitAxisZ; // size: 0xC, address: 0x803C5768
// Range: 0x80078B14 -> 0x80078BFC
float xVec3Normalize(struct xVec3 * o /* r30 */, const struct xVec3 * v /* r31 */) {
    // Local variables
    float len; // f1
    float len2; // f1
    float len_inv; // f4
}

// Range: 0x80078BFC -> 0x80078C10
void xVec3Copy(struct xVec3 * o /* r0 */, const struct xVec3 * v /* r0 */) {
    // Local variables
    float vxy; // f0
    float vz; // f1
}

// Range: 0x80078C10 -> 0x80078C30
float xVec3Dot(const struct xVec3 * vec1 /* r3 */, const struct xVec3 * vec2 /* r4 */) {}


