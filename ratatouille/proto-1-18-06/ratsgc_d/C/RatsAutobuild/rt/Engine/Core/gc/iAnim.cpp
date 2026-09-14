/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\gc\iAnim.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012E94C -> 0x8012EDE8
*/
static unsigned char g_iAnim_workBufferData[16384]; // size: 0x4000, address: 0x80CE4BE0
unsigned char * g_iAnim_workBuffer; // size: 0x4, address: 0x80D61DF8
// Range: 0x8012E94C -> 0x8012E950
void iAnimInit() {}

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
// total size: 0x10
struct xQuat {
    // Members
    struct xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
// Range: 0x8012E950 -> 0x8012E998
void iAnimEval(void * RawData /* r1+0x8 */, float time /* r1+0xC */, unsigned int flags /* r1+0x10 */, struct xVec3 * tran /* r1+0x14 */, struct xQuat * quat /* r1+0x18 */) {}

// Range: 0x8012E998 -> 0x8012E9C0
float iAnimDuration(void * RawData /* r1+0x8 */) {}

// Range: 0x8012E9C0 -> 0x8012E9F4
unsigned int iAnimBoneCount(void * RawData /* r3 */) {}

// total size: 0x10
struct RtQuat {
    // Members
    struct RwV3d imag; // offset 0x0, size 0xC
    float real; // offset 0xC, size 0x4
};
// total size: 0x28
struct RtQuatSlerpCache {
    // Members
    struct RtQuat raFrom; // offset 0x0, size 0x10
    struct RtQuat raTo; // offset 0x10, size 0x10
    float omega; // offset 0x20, size 0x4
    int nearlyZeroOm; // offset 0x24, size 0x4
};
// Range: 0x8012E9F4 -> 0x8012EDE8
void iAnimBlend(float BlendFactor /* f28 */, float BlendRecip /* f27 */, unsigned short * BlendTimeOffset /* r25 */, float * BoneTable /* r21 */, unsigned int BoneCount /* r20 */, struct xVec3 * Tran1 /* r31 */, struct xQuat * Quat1 /* r26 */, struct xVec3 * Tran2 /* r1+0x8 */, struct xQuat * Quat2 /* r22 */, struct xVec3 * TranDest /* r28 */, struct xQuat * QuatDest /* r23 */) {
    // Local variables
    unsigned int i; // r29
    unsigned int invert; // r24
    struct RtQuat * q2; // r27
    struct RtQuat ident; // r1+0xC
    struct xVec3 * t2; // r30
    float lerp; // f30
    struct RtQuatSlerpCache qcache; // r1+0x44
    float baselerp; // f31
    float lerp; // f29
    struct RtQuatSlerpCache qcache; // r1+0x1C
}


