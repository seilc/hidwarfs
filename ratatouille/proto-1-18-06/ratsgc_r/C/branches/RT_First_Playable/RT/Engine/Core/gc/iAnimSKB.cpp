/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\gc\iAnimSKB.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D41F8 -> 0x800D5FE0
*/
// total size: 0x1C
struct iAnimSKBHeader {
    // Members
    unsigned int Magic; // offset 0x0, size 0x4
    void * ExtractedData; // offset 0x4, size 0x4
    unsigned short BoneCount; // offset 0x8, size 0x2
    unsigned short TimeCount; // offset 0xA, size 0x2
    unsigned short KeyCount; // offset 0xC, size 0x2
    unsigned short TranCount; // offset 0xE, size 0x2
    float Scale[3]; // offset 0x10, size 0xC
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
// total size: 0xA
struct iAnimSKBKey {
    // Members
    unsigned short Frame; // offset 0x0, size 0x2
    unsigned short TranIndex; // offset 0x2, size 0x2
    signed short Quat[3]; // offset 0x4, size 0x6
};
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
// Range: 0x800D41F8 -> 0x800D48EC
void iAnimEvalSKB(struct iAnimSKBHeader * data /* r0 */, float time /* f1 */, unsigned int flags /* r0 */, struct xVec3 * tran /* r29 */, struct xQuat * quat /* r30 */) {
    // Local variables
    unsigned int i; // r26
    unsigned int tidx; // r8
    unsigned int bcount; // r25
    unsigned int tcount; // r7
    struct iAnimSKBKey * keys; // r26
    unsigned short * times; // r10
    signed short * tran1; // r31
    unsigned short * offsets; // r24
    float timeX; // f28
    float scalex; // f28
    float scaley; // f31
    float scalez; // f27
    signed short * tmpTran; // r3
    float scalex; // f27
    float scaley; // f26
    float scalez; // f25
    float time1; // f4
    float lerp; // f24
    struct iAnimSKBKey * k; // r23
    struct RtQuat q1; // r1+0x18
    struct RtQuat q2; // r1+0x8
    struct RtQuatSlerpCache qcache; // r1+0x28
    float rSclFrom; // f0
    float rSclTo; // f1
    float z; // f9
    float z; // f10
    signed short * tmpTran0; // r4
    signed short * tmpTran1; // r8
}

// Range: 0x800D4910 -> 0x800D49A0
static float QUAT_DECOMPRESS(signed short x /* r0 */, signed short y /* r0 */, signed short z /* r0 */, float scale /* f1 */) {}

// Range: 0x800D49A0 -> 0x800D49E8
float iAnimDurationSKB(struct iAnimSKBHeader * data /* r0 */) {}

// total size: 0x24
struct SKAKey {
    // Members
    float quat[4]; // offset 0x0, size 0x10
    float tran[3]; // offset 0x10, size 0xC
    float time; // offset 0x1C, size 0x4
    unsigned int prevFrame; // offset 0x20, size 0x4
};
// total size: 0xC
struct SKAHeader {
    // Members
    unsigned int numFrames; // offset 0x0, size 0x4
    unsigned int flags; // offset 0x4, size 0x4
    float duration; // offset 0x8, size 0x4
};
// total size: 0x20
struct ANMHeader {
    // Members
    unsigned int chunkType; // offset 0x0, size 0x4
    unsigned int chunkLength; // offset 0x4, size 0x4
    unsigned int chunkVersion; // offset 0x8, size 0x4
    int hanimVersion; // offset 0xC, size 0x4
    int hanimTypeID; // offset 0x10, size 0x4
    unsigned int numFrames; // offset 0x14, size 0x4
    int flags; // offset 0x18, size 0x4
    float duration; // offset 0x1C, size 0x4
};
// total size: 0x24
struct ANMKey {
    // Members
    float time; // offset 0x0, size 0x4
    float quat[4]; // offset 0x4, size 0x10
    float tran[3]; // offset 0x14, size 0xC
    unsigned int prevFrame; // offset 0x20, size 0x4
};
static char __FUNCTION__[25]; // size: 0x19, address: 0x80430CC0
// Range: 0x800D49E8 -> 0x800D4F54
void _iAnimSKBAdjustTranslate(struct iAnimSKBHeader * data /* r26 */, unsigned int bone /* r21 */, float * starttran /* r27 */, float * endtran /* r28 */) {
    // Local variables
    int ipos; // r21
    unsigned int i; // r10
    unsigned int idx; // r0
    unsigned int keyfirst; // r12
    unsigned int keylast; // r25
    unsigned int tranCount; // r0
    unsigned int kcount; // r31
    unsigned int bcount; // r25
    unsigned int tcount; // r24
    float outScale[3]; // r1+0x2C
    float pos; // f7
    float factor[3]; // r1+0x20
    float oldmax[3]; // r1+0x14
    float newmax[3]; // r1+0x8
    float timefirst; // f1
    struct iAnimSKBKey * keys; // r30
    signed short * times; // r23
    signed short * tran; // r29
    unsigned short * offsets; // r22
    signed short * tmpTran; // r24

    // References
    // -> static char __FUNCTION__[25];
}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80BFEDF0
// Range: 0x800D4F54 -> 0x800D508C
int _iAnimSKBNumExtract(struct iAnimSKBHeader * data /* r0 */, unsigned int bone /* r29 */) {
    // Local variables
    unsigned int i; // r5
    unsigned int keylast; // r4
    unsigned int bcount; // r28
    unsigned int tcount; // r27
    struct iAnimSKBKey * keys; // r31
    unsigned short * offsets; // r26
    int tranFound; // r30
    int lastTime; // r6

    // References
    // -> static char __FUNCTION__[20];
}

static char __FUNCTION__[30]; // size: 0x1E, address: 0x80430CDC
// Range: 0x800D508C -> 0x800D544C
int _iAnimSKBExtractTranslateAxis(struct iAnimSKBHeader * data /* r25 */, unsigned int bone /* r20 */, struct xVec3 * tranArray /* r26 */, int tranCount /* r27 */, unsigned char * axis /* r28 */) {
    // Local variables
    unsigned int i; // r17
    unsigned int j; // r19
    unsigned int keylast; // r15
    unsigned int bcount; // r15
    unsigned int tcount; // r17
    struct iAnimSKBKey * keys; // r18
    signed short * tran; // r16
    unsigned short * offsets; // r19
    struct xVec3 * lastTran; // r18
    int tranFound; // r31
    int lastTime; // r30
    signed short * tmpTran; // r29
    float lerp; // f2

    // References
    // -> static char __FUNCTION__[30];
}

// Range: 0x800D544C -> 0x800D54A0
float QuatToYaw(struct xQuat * q /* r0 */) {
    // Local variables
    float yaw; // f0
}

// Range: 0x800D54A0 -> 0x800D5508
void YawToQuat(float yaw /* f0 */, struct xQuat * q /* r31 */) {}

// Range: 0x800D5508 -> 0x800D557C
static void QuatMul(struct xQuat * o /* r0 */, struct xQuat * a /* r0 */, struct xQuat * b /* r0 */) {
    // Local variables
    float s; // f2
}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80BFEE04
// total size: 0x10
struct xQuat {
    // Members
    struct xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
// Range: 0x800D557C -> 0x800D5B7C
int _iAnimSKBExtractYaw(struct iAnimSKBHeader * data /* r0 */, unsigned int bone /* r21 */, float * yawArray /* r29 */, int yawCount /* r30 */) {
    // Local variables
    unsigned int i; // r24
    unsigned int j; // r23
    unsigned int keylast; // r22
    unsigned int bcount; // r22
    unsigned int tcount; // r23
    struct iAnimSKBKey * keys; // r25
    unsigned short * offsets; // r26
    struct xQuat currQuat; // r1+0x18
    float currYaw; // f20
    float lastYaw; // f19
    float lastCurrYaw; // f19
    int yawFound; // r31
    int lastTime; // r21
    struct xQuat antiYaw; // r1+0x8

    // References
    // -> static char __FUNCTION__[20];
}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80BFEE18
// Range: 0x800D5B7C -> 0x800D5FE0
void _iAnimSKBAdjustYaw(struct iAnimSKBHeader * data /* r0 */, unsigned int bone /* r25 */, float yawStart /* f28 */, float yawEnd /* f29 */) {
    // Local variables
    unsigned int i; // r30
    unsigned int keyfirst; // r29
    unsigned int keylast; // r28
    unsigned int kcount; // r27
    unsigned int bcount; // r28
    unsigned int tcount; // r29
    struct xQuat quatA; // r1+0x18
    struct xQuat quatB; // r1+0x8
    float timefirst; // f30
    struct iAnimSKBKey * keys; // r30
    signed short * times; // r31
    unsigned short * offsets; // r26
    float invTimeDiff; // f29

    // References
    // -> static char __FUNCTION__[19];
}


