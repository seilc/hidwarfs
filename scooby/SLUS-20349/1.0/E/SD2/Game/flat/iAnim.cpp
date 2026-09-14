/*
    Compile unit: E:\SD2\Game\flat\iAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned char scratchBuffer[9120]; // size: 0x23A0, address: 0x366540
unsigned char * giAnimScratch; // size: 0x4, address: 0x3574A0
// total size: 0x28
class RtQuatSlerpCache {
    // Members
public:
    class RtQuat raFrom; // offset 0x0, size 0x10
    class RtQuat raTo; // offset 0x10, size 0x10
    float omega; // offset 0x20, size 0x4
    signed int nearlyZeroOm; // offset 0x24, size 0x4
};
// total size: 0x10
class RtQuat {
    // Members
public:
    class RwV3d imag; // offset 0x0, size 0xC
    float real; // offset 0xC, size 0x4
};
// total size: 0x10
class _xQuat {
    // Members
public:
    class _xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
// total size: 0xC
class _xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
    Compile unit: E:\SD2\Game\flat\iAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011D040 -> 0x0011D884
*/
// Range: 0x11D040 -> 0x11D884
void iAnimBlend(float BlendFactor /* r22 */, float BlendRecip /* r29+0x160 */, unsigned short * BlendTimeOffset /* r29+0xEC */, float * BoneTable /* r29+0xE8 */, unsigned int BoneCount /* r30 */, class _xVec3 * Tran1 /* r21 */, class _xQuat * Quat1 /* r20 */, class _xVec3 * Tran2 /* r2 */, class _xQuat * Quat2 /* r22 */, class _xVec3 * TranDest /* r19 */, class _xQuat * QuatDest /* r18 */) {
    /* anonymous block */ {
        // Range: 0x11D040 -> 0x11D884
        float z; // r4
        float z; // r5
        float rSclTo; // r1
        float rSclFrom; // r29+0x160
        class RtQuatSlerpCache qcache; // r29+0x130
        float lerp; // r21
        float baselerp; // r20
        float z; // r4
        float z; // r5
        float rSclTo; // r1
        float rSclFrom; // r29+0x160
        class RtQuatSlerpCache qcache; // r29+0x100
        float lerp; // r20
        class _xVec3 * t2; // r17
        class RtQuat ident; // r29+0xF0
        class RtQuat * q2; // r16
        unsigned int invert; // r29+0xB0
        unsigned int i; // r23
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011D890 -> 0x0011D898
*/
// Range: 0x11D890 -> 0x11D898
unsigned int iAnimBoneCount(void * RawData /* r2 */) {
    /* anonymous block */ {
        // Range: 0x11D890 -> 0x11D898
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011D8A0 -> 0x0011D8A8
*/
// Range: 0x11D8A0 -> 0x11D8A8
float iAnimDuration(void * RawData /* r2 */) {
    /* anonymous block */ {
        // Range: 0x11D8A0 -> 0x11D8A8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011D8B0 -> 0x0011D8B8
*/
// Range: 0x11D8B0 -> 0x11D8B8
void iAnimEval(void * RawData /* r2 */, float time /* r29 */, unsigned int flags /* r2 */, class _xVec3 * tran /* r2 */, class _xQuat * quat /* r2 */) {
    /* anonymous block */ {
        // Range: 0x11D8B0 -> 0x11D8B8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011D8C0 -> 0x0011D8C8
*/
// Range: 0x11D8C0 -> 0x11D8C8
void iAnimInit() {
    /* anonymous block */ {
        // Range: 0x11D8C0 -> 0x11D8C8
    }
}


