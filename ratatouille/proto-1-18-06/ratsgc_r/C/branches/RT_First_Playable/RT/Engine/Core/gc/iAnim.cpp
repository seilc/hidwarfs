/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\gc\iAnim.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F4174 -> 0x800F4914
*/
static unsigned char g_iAnim_workBufferData[16384]; // size: 0x4000, address: 0x80B82B40
unsigned char * g_iAnim_workBuffer; // size: 0x4, address: 0x80BFF6D0
// Range: 0x800F4174 -> 0x800F4178
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
// Range: 0x800F4178 -> 0x800F4198
void iAnimEval(void * RawData /* r0 */, float time /* f0 */, unsigned int flags /* r0 */, struct xVec3 * tran /* r0 */, struct xQuat * quat /* r0 */) {}

// Range: 0x800F4198 -> 0x800F41B8
float iAnimDuration(void * RawData /* r0 */) {}

// Range: 0x800F41B8 -> 0x800F41D8
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
// Range: 0x800F41D8 -> 0x800F4914
void iAnimBlend(float BlendFactor /* f31 */, float BlendRecip /* f0 */, unsigned short * BlendTimeOffset /* r20 */, float * BoneTable /* r21 */, unsigned int BoneCount /* r22 */, struct xVec3 * Tran1 /* r23 */, struct xQuat * Quat1 /* r24 */, struct xVec3 * Tran2 /* r8 */, struct xQuat * Quat2 /* r25 */, struct xVec3 * TranDest /* r26 */, struct xQuat * QuatDest /* r27 */) {
    // Local variables
    unsigned int i; // r18
    unsigned int invert; // r30
    struct RtQuat * q2; // r29
    struct RtQuat ident; // r1+0x8
    struct xVec3 * t2; // r28
    float lerp; // f29
    struct RtQuatSlerpCache qcache; // r1+0x40
    float rSclFrom; // f0
    float rSclTo; // f1
    float z; // f9
    float z; // f10
    float baselerp; // f29
    float lerp; // f30
    struct RtQuatSlerpCache qcache; // r1+0x18
    float rSclFrom; // f0
    float rSclTo; // f1
    float z; // f9
    float z; // f10
}


