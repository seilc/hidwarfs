/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zSweptCircle.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802C7728 -> 0x802C79E4
*/
// total size: 0x40
class zSweptCircle {
    // Functions
    void PrepareXZ(const struct xVec3 & start, float radius, const struct xVec3 & dir, float dist);

    void Reset();

    unsigned char SweptCircleToPoint(struct xVec2 & point);

    // Members
public:
    struct xVec2 start; // offset 0x0, size 0x8
    float radius; // offset 0x8, size 0x4
    float dist; // offset 0xC, size 0x4
    struct xVec2 dir; // offset 0x10, size 0x8
    struct xVec2 end; // offset 0x18, size 0x8
    struct xVec2 left; // offset 0x20, size 0x8
    float curDist; // offset 0x28, size 0x4
    struct xVec2 curEnd; // offset 0x2C, size 0x8
    unsigned char hitSomething; // offset 0x34, size 0x1
    struct xVec2 contactPoint; // offset 0x38, size 0x8
};
// total size: 0x8
struct xVec2 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
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
// Range: 0x802C7728 -> 0x802C7824
// this: r29
void zSweptCircle::PrepareXZ(const struct xVec3 & start /* r30 */, float radius /* f30 */, const struct xVec3 & dir /* r31 */, float dist /* f31 */) {
    // Local variables
    struct xVec3 end; // r1+0x8
}

// Range: 0x802C7824 -> 0x802C7868
// this: r31
void zSweptCircle::Reset() {}

// Range: 0x802C7868 -> 0x802C79E4
// this: r30
unsigned char zSweptCircle::SweptCircleToPoint(struct xVec2 & point /* r31 */) {
    // Local variables
    struct xVec2 toStart; // r1+0x8
    float startAlong; // f30
    float distAway; // f0
    float distToStart2; // f0
    float backDist; // f1
}


