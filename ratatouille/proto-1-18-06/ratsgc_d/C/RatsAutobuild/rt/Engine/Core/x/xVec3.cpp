/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xVec3.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80104AA4 -> 0x80104C3C
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
struct xVec3 m_Null; // size: 0xC, address: 0x80D6D920
struct xVec3 m_Ones; // size: 0xC, address: 0x80D6D92C
struct xVec3 m_UnitAxisX; // size: 0xC, address: 0x80D6D938
struct xVec3 m_UnitAxisY; // size: 0xC, address: 0x80D6D944
struct xVec3 m_UnitAxisZ; // size: 0xC, address: 0x80D6D950
// Range: 0x80104AA4 -> 0x80104BE0
float xVec3Normalize(struct xVec3 * o /* r30 */, const struct xVec3 * v /* r31 */) {
    // Local variables
    float len; // f31
    float len2; // f30
    float len_inv; // f29
}

// Range: 0x80104BE0 -> 0x80104C1C
void xVec3Copy(struct xVec3 * o /* r3 */, const struct xVec3 * v /* r4 */) {
    // Local variables
    float vxy; // f31
    float vz; // f30
}

// Range: 0x80104C1C -> 0x80104C3C
float xVec3Dot(const struct xVec3 * vec1 /* r3 */, const struct xVec3 * vec2 /* r4 */) {}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80D61538
static char __FUNCTION__[11]; // size: 0xB, address: 0x80D61543

