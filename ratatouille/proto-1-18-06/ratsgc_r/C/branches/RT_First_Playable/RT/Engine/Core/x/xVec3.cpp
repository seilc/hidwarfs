/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xVec3.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D3EEC -> 0x800D4010
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
struct xVec3 m_Null; // size: 0xC, address: 0x80C0B540
struct xVec3 m_Ones; // size: 0xC, address: 0x80C0B54C
struct xVec3 m_UnitAxisX; // size: 0xC, address: 0x80C0B558
struct xVec3 m_UnitAxisY; // size: 0xC, address: 0x80C0B564
struct xVec3 m_UnitAxisZ; // size: 0xC, address: 0x80C0B570
// Range: 0x800D3EEC -> 0x800D3FDC
float xVec3Normalize(struct xVec3 * o /* r30 */, const struct xVec3 * v /* r31 */) {
    // Local variables
    float len; // f1
    float len2; // f1
    float len_inv; // f4
}

// Range: 0x800D3FDC -> 0x800D3FF0
void xVec3Copy(struct xVec3 * o /* r0 */, const struct xVec3 * v /* r0 */) {
    // Local variables
    float vxy; // f0
    float vz; // f1
}

// Range: 0x800D3FF0 -> 0x800D4010
float xVec3Dot(const struct xVec3 * vec1 /* r3 */, const struct xVec3 * vec2 /* r4 */) {}


