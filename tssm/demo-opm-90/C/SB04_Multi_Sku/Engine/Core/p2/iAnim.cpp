/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B6F60 -> 0x004B7210
*/
// Range: 0x4B6F60 -> 0x4B7210
void iAnimQuatSlerpPS2(class xQuat * quat1 /* r2 */, class xQuat * quat2 /* r2 */, class xVec3 * tran1 /* r2 */, class xVec3 * tran2 /* r2 */, float lerp /* r29 */, class xQuat * quatDest /* r2 */, class xVec3 * tranDest /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B6F60 -> 0x4B7210
        unsigned int costheta; // r2
        unsigned int theta; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B7210 -> 0x004B75B0
*/
// Range: 0x4B7210 -> 0x4B75B0
void iAnimBlend(float BlendFactor /* r21 */, float BlendRecip /* r29+0xF0 */, unsigned short * BlendTimeOffset /* r23 */, float * BoneTable /* r29+0xDC */, unsigned int BoneCount /* r21 */, class xVec3 * Tran1 /* r20 */, class xQuat * Quat1 /* r19 */, class xVec3 * Tran2 /* r2 */, class xQuat * Quat2 /* r2 */, class xVec3 * TranDest /* r18 */, class xQuat * QuatDest /* r29+0xF0 */) {
    /* anonymous block */ {
        // Range: 0x4B7210 -> 0x4B75B0
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
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B75B0 -> 0x004B75D0
*/
// Range: 0x4B75B0 -> 0x4B75D0
unsigned int iAnimBoneCount(void * RawData /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B75B0 -> 0x4B75D0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B75D0 -> 0x004B75F0
*/
// Range: 0x4B75D0 -> 0x4B75F0
float iAnimDuration(void * RawData /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B75D0 -> 0x4B75F0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B75F0 -> 0x004B75F8
*/
// Range: 0x4B75F0 -> 0x4B75F8
void iAnimEval(void * RawData /* r2 */, float time /* r29 */, unsigned int flags /* r2 */, class xVec3 * tran /* r2 */, class xQuat * quat /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B75F0 -> 0x4B75F8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B7600 -> 0x004B7608
*/
// Range: 0x4B7600 -> 0x4B7608
void iAnimInit() {
    /* anonymous block */ {
        // Range: 0x4B7600 -> 0x4B7608
    }
}


