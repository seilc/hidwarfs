/*
    Compile unit: C:\SB\Core\p2\iAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned char scratchBuffer[9120]; // size: 0x23A0, address: 0x53C1F0
unsigned char * giAnimScratch; // size: 0x4, address: 0x50DD0C
// total size: 0x10
class xQuat {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x10
class RtQuat {
    // Members
public:
    class RwV3d imag; // offset 0x0, size 0xC
    float real; // offset 0xC, size 0x4
};
// total size: 0x28
class RtQuatSlerpCache {
    // Members
public:
    class RtQuat raFrom; // offset 0x0, size 0x10
    class RtQuat raTo; // offset 0x10, size 0x10
    float omega; // offset 0x20, size 0x4
    signed int nearlyZeroOm; // offset 0x24, size 0x4
};
// total size: 0xC
class xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};

/*
    Compile unit: C:\SB\Core\p2\iAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BA900 -> 0x001BB174
*/
// Range: 0x1BA900 -> 0x1BB174
void iAnimBlend(float BlendFactor /* r22 */, float BlendRecip /* r29+0x160 */, unsigned short * BlendTimeOffset /* r29+0xEC */, float * BoneTable /* r29+0xE8 */, unsigned int BoneCount /* r23 */, class xVec3 * Tran1 /* r21 */, class xQuat * Quat1 /* r20 */, class xVec3 * Tran2 /* r2 */, class xQuat * Quat2 /* r30 */, class xVec3 * TranDest /* r19 */, class xQuat * QuatDest /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1BA900 -> 0x1BB174
        unsigned int i; // r22
        unsigned int invert; // r29+0xD0
        class RtQuat * q2; // r17
        class RtQuat ident; // r29+0x150
        class xVec3 * t2; // r16
        float lerp; // r21
        class RtQuatSlerpCache qcache; // r29+0x120
        float rSclFrom; // r1
        float rSclTo; // r29+0x160
        float z; // r10
        float z; // r10
        float baselerp; // r21
        float lerp; // r20
        class RtQuatSlerpCache qcache; // r29+0xF0
        float rSclFrom; // r1
        float rSclTo; // r29+0x160
        float z; // r10
        float z; // r10
    }
}


/*
    Compile unit: C:\SB\Core\p2\iAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BB180 -> 0x001BB1A0
*/
// Range: 0x1BB180 -> 0x1BB1A0
unsigned int iAnimBoneCount(void * RawData /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BB180 -> 0x1BB1A0
    }
}


/*
    Compile unit: C:\SB\Core\p2\iAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BB1A0 -> 0x001BB1A8
*/
// Range: 0x1BB1A0 -> 0x1BB1A8
float iAnimDuration(void * RawData /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BB1A0 -> 0x1BB1A8
    }
}


/*
    Compile unit: C:\SB\Core\p2\iAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BB1B0 -> 0x001BB1B8
*/
// Range: 0x1BB1B0 -> 0x1BB1B8
void iAnimEval(void * RawData /* r2 */, float time /* r29 */, unsigned int flags /* r2 */, class xVec3 * tran /* r2 */, class xQuat * quat /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BB1B0 -> 0x1BB1B8
    }
}


/*
    Compile unit: C:\SB\Core\p2\iAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BB1C0 -> 0x001BB1C8
*/
// Range: 0x1BB1C0 -> 0x1BB1C8
void iAnimInit() {
    /* anonymous block */ {
        // Range: 0x1BB1C0 -> 0x1BB1C8
    }
}


