/*
    Compile unit: E:\SD2\Game\flat\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float slerpPolynomial[24]; // size: 0x60, address: 0x28A5E0
signed int CmpBoneTime(void *, void *); // size: 0x0, address: 0x0
unsigned int gActiveHeap; // size: 0x4, address: 0x357CAC
signed int CmpTime(void *, void *); // size: 0x0, address: 0x0
unsigned char * giAnimScratch; // size: 0x4, address: 0x3574A0
// total size: 0x10
class iAnimSKBKey {
    // Members
public:
    unsigned short TimeIndex; // offset 0x0, size 0x2
    signed short Quat[4]; // offset 0x2, size 0x8
    signed short Tran[3]; // offset 0xA, size 0x6
};
// total size: 0x10
class _xQuat {
    // Members
public:
    class _xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
// total size: 0x1C
class iAnimSKBHeader {
    // Members
public:
    unsigned int Magic; // offset 0x0, size 0x4
    unsigned int Flags; // offset 0x4, size 0x4
    unsigned short BoneCount; // offset 0x8, size 0x2
    unsigned short TimeCount; // offset 0xA, size 0x2
    unsigned int KeyCount; // offset 0xC, size 0x4
    float Scale[3]; // offset 0x10, size 0xC
};
// total size: 0xC
class _xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x20
class ANMHeader {
    // Members
public:
    unsigned int chunkType; // offset 0x0, size 0x4
    unsigned int chunkLength; // offset 0x4, size 0x4
    unsigned int chunkVersion; // offset 0x8, size 0x4
    signed int hanimVersion; // offset 0xC, size 0x4
    signed int hanimTypeID; // offset 0x10, size 0x4
    unsigned int numFrames; // offset 0x14, size 0x4
    signed int flags; // offset 0x18, size 0x4
    float duration; // offset 0x1C, size 0x4
};
// total size: 0xC
class SKAHeader {
    // Members
public:
    unsigned int numFrames; // offset 0x0, size 0x4
    unsigned int flags; // offset 0x4, size 0x4
    float duration; // offset 0x8, size 0x4
};
// total size: 0x24
class SKAKey {
    // Members
public:
    float quat[4]; // offset 0x0, size 0x10
    float tran[3]; // offset 0x10, size 0xC
    float time; // offset 0x1C, size 0x4
    unsigned int prevFrame; // offset 0x20, size 0x4
};
// total size: 0x24
class ANMKey {
    // Members
public:
    float time; // offset 0x0, size 0x4
    float quat[4]; // offset 0x4, size 0x10
    float tran[3]; // offset 0x14, size 0xC
    unsigned int prevFrame; // offset 0x20, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011BE00 -> 0x0011C120
*/
// Range: 0x11BE00 -> 0x11C120
void _iAnimSKBFlip180(class iAnimSKBHeader * data /* r2 */, unsigned int bone /* r2 */) {
    /* anonymous block */ {
        // Range: 0x11BE00 -> 0x11C120
        float _z; // r6
        float _y; // r5
        float _x; // r29+0x10
        float _s; // r10
        float quat[4]; // r29
        unsigned short * offsets; // r11
        class iAnimSKBKey * keys; // r2
        unsigned int tcount; // r2
        unsigned int kcount; // r6
        unsigned int keylast; // r5
        unsigned int keyfirst; // r4
        unsigned int i; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011C120 -> 0x0011C5BC
*/
// Range: 0x11C120 -> 0x11C5BC
void _iAnimSKBAdjustTranslate(class iAnimSKBHeader * data /* r29+0xF0 */, unsigned int bone /* r2 */, float * tran /* r29+0xE0 */) {
    /* anonymous block */ {
        // Range: 0x11C120 -> 0x11C5BC
        unsigned short * offsets; // r9
        class iAnimSKBKey * keys; // r2
        float newmax[3]; // r29+0x130
        float oldmax[3]; // r29+0x120
        float factor[3]; // r29+0x110
        float pos; // r20
        float outScale[3]; // r29+0x100
        unsigned int tcount; // r2
        unsigned int kcount; // r29+0xB0
        unsigned int keylast; // r23
        unsigned int keyfirst; // r30
        unsigned int idx; // r16
        unsigned int i; // r22
        signed int ipos; // r5
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011C5C0 -> 0x0011C868
*/
// Range: 0x11C5C0 -> 0x11C868
void _iAnimSKBSwapTranslate(class iAnimSKBHeader * data /* r2 */, unsigned int bonelo /* r21 */, unsigned int bonehi /* r30 */) {
    /* anonymous block */ {
        // Range: 0x11C5C0 -> 0x11C868
        unsigned short keyIndex; // r6
        unsigned short * offsets; // r19
        class iAnimSKBKey * keys; // r18
        class iAnimSKBKey * bufmid; // r29+0xA0
        class iAnimSKBKey * bufhi; // r22
        class iAnimSKBKey * buflo; // r23
        unsigned int tcount; // r17
        unsigned int bcount; // r16
        unsigned int j; // r4
        unsigned int i; // r5
        signed int out; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011C870 -> 0x0011C894
*/
// Range: 0x11C870 -> 0x11C894
float iAnimDurationSKB(class iAnimSKBHeader * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x11C870 -> 0x11C894
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011C8A0 -> 0x0011CB88
*/
// Range: 0x11C8A0 -> 0x11CB88
void _iAnimSKBFixTransPop(void * data /* r2 */, void * pose /* r2 */, unsigned int maxbone /* r16 */) {
    /* anonymous block */ {
        // Range: 0x11C8A0 -> 0x11CB88
        class iAnimSKBHeader * hb; // r23
        float * ta; // r19
        class iAnimSKBKey * ka; // r2
        class iAnimSKBHeader * ha; // r18
        class _xVec3 * t_b; // r2
        class _xQuat * q_b; // r30
        class _xVec3 * t_a; // r2
        class _xQuat * q_a; // r2
        float invDuration; // r4
        unsigned int boneIndex; // r17
        unsigned int i; // r4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011CB90 -> 0x0011D03C
*/
// Range: 0x11CB90 -> 0x11D03C
void iAnimEvalSKB(class iAnimSKBHeader * data /* r2 */, float time /* r29 */, unsigned int flags /* r2 */, class _xVec3 * tran /* r12 */, class _xQuat * quat /* r11 */) {
    /* anonymous block */ {
        // Range: 0x11CB90 -> 0x11D03C
        unsigned int theta; // r2
        unsigned int costheta; // r2
        class iAnimSKBKey * k; // r14
        float lerp; // r29
        float time2; // r2
        float time1; // r29
        unsigned short * offsets; // r10
        float * times; // r9
        class iAnimSKBKey * keys; // r8
        unsigned int tcount; // r13
        unsigned int bcount; // r3
        unsigned int tidx; // r7
        unsigned int i; // r13
    }
}


