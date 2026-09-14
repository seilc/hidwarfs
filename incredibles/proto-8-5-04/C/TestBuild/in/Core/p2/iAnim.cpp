/*
    Compile unit: C:\TestBuild\in\Core\p2\iAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned char g_iAnim_workBufferData[16384]; // size: 0x4000, address: 0x6229B0
unsigned char * g_iAnim_workBuffer; // size: 0x4, address: 0x607758
float slerpPolynomial[]; // size: 0x0, address: 0x506290
// total size: 0xC
class xVec3 {
    // Members
public:
    union { // inferred
        class RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
// total size: 0x10
class xQuat {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
// total size: 0x10
class RtQuat {
    // Members
public:
    class RwV3d imag; // offset 0x0, size 0xC
    float real; // offset 0xC, size 0x4
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\p2\iAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170EC0 -> 0x00171170
*/
// Range: 0x170EC0 -> 0x171170
void iAnimQuatSlerpPS2(class xQuat * quat1 /* r2 */, class xQuat * quat2 /* r2 */, class xVec3 * tran1 /* r2 */, class xVec3 * tran2 /* r2 */, float lerp /* r29 */, class xQuat * quatDest /* r2 */, class xVec3 * tranDest /* r2 */) {
    /* anonymous block */ {
        // Range: 0x170EC0 -> 0x171170
        unsigned int costheta; // r2
        unsigned int theta; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171170 -> 0x00171510
*/
// Range: 0x171170 -> 0x171510
void iAnimBlend(float BlendFactor /* r21 */, float BlendRecip /* r29+0xF0 */, unsigned short * BlendTimeOffset /* r23 */, float * BoneTable /* r29+0xDC */, unsigned int BoneCount /* r21 */, class xVec3 * Tran1 /* r20 */, class xQuat * Quat1 /* r19 */, class xVec3 * Tran2 /* r2 */, class xQuat * Quat2 /* r2 */, class xVec3 * TranDest /* r18 */, class xQuat * QuatDest /* r29+0xF0 */) {
    /* anonymous block */ {
        // Range: 0x171170 -> 0x171510
        unsigned int i; // r22
        unsigned int invert; // r22
        class RtQuat * q2; // r17
        class RtQuat ident; // r29+0xE0
        class xVec3 * t2; // r16
        float lerp; // r20
        float baselerp; // r20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171510 -> 0x00171530
*/
// Range: 0x171510 -> 0x171530
unsigned int iAnimBoneCount(void * RawData /* r2 */) {
    /* anonymous block */ {
        // Range: 0x171510 -> 0x171530
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171530 -> 0x00171538
*/
// Range: 0x171530 -> 0x171538
float iAnimDuration(void * RawData /* r2 */) {
    /* anonymous block */ {
        // Range: 0x171530 -> 0x171538
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171540 -> 0x00171548
*/
// Range: 0x171540 -> 0x171548
void iAnimEval(void * RawData /* r2 */, float time /* r29 */, unsigned int flags /* r2 */, class xVec3 * tran /* r2 */, class xQuat * quat /* r2 */) {
    /* anonymous block */ {
        // Range: 0x171540 -> 0x171548
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171550 -> 0x00171558
*/
// Range: 0x171550 -> 0x171558
void iAnimInit() {
    /* anonymous block */ {
        // Range: 0x171550 -> 0x171558
    }
}


