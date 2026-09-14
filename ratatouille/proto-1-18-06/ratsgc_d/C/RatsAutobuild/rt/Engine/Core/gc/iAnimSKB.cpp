/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\gc\iAnimSKB.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80105BE8 -> 0x8010846C
*/
static char __FUNCTION__[13]; // size: 0xD, address: 0x80D61560
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
// Range: 0x80105BE8 -> 0x801064D8
void iAnimEvalSKB(struct iAnimSKBHeader * data /* r30 */, float time /* f22 */, unsigned int flags /* r1+0x8 */, struct xVec3 * tran /* r27 */, struct xQuat * quat /* r29 */) {
    // Local variables
    unsigned int i; // r25
    unsigned int tidx; // r24
    unsigned int tranCount; // r1+0x24
    unsigned int bcount; // r22
    unsigned int tcount; // r18
    struct iAnimSKBKey * keys; // r1+0x20
    unsigned short * times; // r26
    signed short * tran1; // r17
    unsigned short * offsets; // r23
    float timeX; // f31
    float scalex; // r1+0x1C
    float scaley; // r1+0x18
    float scalez; // r1+0x14
    float scalex; // f21
    float scaley; // f20
    float scalez; // f19
    struct iAnimSKBKey * k; // r28
    signed short * tmpTran; // r21
    float scalex; // f29
    float scaley; // f28
    float scalez; // f27
    float time1; // f26
    float time2; // f18
    float lerp; // f30
    struct iAnimSKBKey * k; // r31
    struct RtQuat q1; // r1+0x50
    struct RtQuat q2; // r1+0x40
    struct RtQuatSlerpCache qcache; // r1+0x60
    struct xVec3 t1; // r1+0x34
    struct xVec3 t2; // r1+0x28
    signed short * tmpTran0; // r20
    signed short * tmpTran1; // r19

    // References
    // -> static char __FUNCTION__[13];
}

// Range: 0x801064D8 -> 0x801065BC
static float QUAT_DECOMPRESS(signed short x /* r29 */, signed short y /* r30 */, signed short z /* r31 */, float scale /* f31 */) {}

// Range: 0x801065BC -> 0x80106608
float iAnimDurationSKB(struct iAnimSKBHeader * data /* r3 */) {}

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
static char __FUNCTION__[25]; // size: 0x19, address: 0x80516A28
// Range: 0x80106608 -> 0x80106CE8
void _iAnimSKBAdjustTranslate(struct iAnimSKBHeader * data /* r30 */, unsigned int bone /* r1+0x8 */, float * starttran /* r27 */, float * endtran /* r25 */) {
    // Local variables
    int ipos; // r26
    unsigned int i; // r29
    unsigned int idx; // r31
    unsigned int keyfirst; // r17
    unsigned int keylast; // r1+0x20
    unsigned int tranCount; // r1+0x1C
    unsigned int kcount; // r19
    unsigned int bcount; // r1+0x18
    unsigned int tcount; // r18
    float outScale[3]; // r1+0x48
    float pos; // f31
    float factor[3]; // r1+0x3C
    float oldmax[3]; // r1+0x30
    float newmax[3]; // r1+0x24
    float timefirst; // f30
    float timelast; // f29
    struct iAnimSKBKey * keys; // r28
    signed short * times; // r24
    signed short * tran; // r23
    unsigned short * offsets; // r22
    signed short * tmpTran; // r1+0x14
    signed short * tmpTran; // r21
    signed short * tmpTran; // r20

    // References
    // -> static char __FUNCTION__[25];
}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80D6156D
// Range: 0x80106CE8 -> 0x80106E58
int _iAnimSKBNumExtract(struct iAnimSKBHeader * data /* r31 */, unsigned int bone /* r21 */) {
    // Local variables
    unsigned int i; // r29
    unsigned int keyfirst; // r20
    unsigned int keylast; // r19
    unsigned int tranCount; // r18
    unsigned int kcount; // r17
    unsigned int bcount; // r24
    unsigned int tcount; // r23
    struct iAnimSKBKey * keys; // r30
    signed short * times; // r1+0xC
    signed short * tran; // r1+0x8
    unsigned short * offsets; // r26
    int tranFound; // r28
    int lastTime; // r27
    int currTime; // r25

    // References
    // -> static char __FUNCTION__[20];
}

static char __FUNCTION__[30]; // size: 0x1E, address: 0x80516A41
// Range: 0x80106E58 -> 0x801072A8
int _iAnimSKBExtractTranslateAxis(struct iAnimSKBHeader * data /* r30 */, unsigned int bone /* r1+0x8 */, struct xVec3 * tranArray /* r31 */, int tranCount /* r20 */, unsigned char * axis /* r24 */) {
    // Local variables
    unsigned int i; // r25
    unsigned int j; // r28
    unsigned int keyfirst; // r1+0x24
    unsigned int keylast; // r1+0x20
    unsigned int traCount; // r1+0x1C
    unsigned int kcount; // r1+0x18
    unsigned int bcount; // r18
    unsigned int tcount; // r17
    struct iAnimSKBKey * keys; // r27
    signed short * times; // r1+0x14
    signed short * tran; // r1+0x10
    unsigned short * offsets; // r19
    struct xVec3 currTran; // r1+0x28
    struct xVec3 * lastTran; // r29
    int tranFound; // r22
    int lastTime; // r23
    int currTime; // r21
    signed short * tmpTran; // r26
    float lerp; // f31

    // References
    // -> static char __FUNCTION__[30];
}

// Range: 0x801072A8 -> 0x8010735C
float QuatToYaw(struct xQuat * q /* r31 */) {
    // Local variables
    float yaw; // f31
    float x; // f30
    float y; // f29
}

// Range: 0x8010735C -> 0x801073CC
void YawToQuat(float yaw /* f31 */, struct xQuat * q /* r31 */) {}

// Range: 0x801073CC -> 0x801074E8
static void QuatMul(struct xQuat * o /* r3 */, struct xQuat * a /* r4 */, struct xQuat * b /* r5 */) {
    // Local variables
    float s; // f31
    float x; // f30
    float y; // f29
    float z; // f28
}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80D61581
// total size: 0x10
struct xQuat {
    // Members
    struct xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
// Range: 0x801074E8 -> 0x80107D48
int _iAnimSKBExtractYaw(struct iAnimSKBHeader * data /* r28 */, unsigned int bone /* r18 */, float * yawArray /* r29 */, int yawCount /* r24 */) {
    // Local variables
    unsigned int i; // r30
    unsigned int j; // r23
    unsigned int keyfirst; // r17
    unsigned int keylast; // r1+0x18
    unsigned int tranCount; // r1+0x14
    unsigned int kcount; // r1+0x10
    unsigned int bcount; // r21
    unsigned int tcount; // r20
    struct iAnimSKBKey * keys; // r31
    signed short * times; // r1+0xC
    signed short * tran; // r1+0x8
    unsigned short * offsets; // r22
    struct xQuat currQuat; // r1+0x2C
    float currYaw; // f31
    float lastYaw; // f29
    float lastCurrYaw; // f30
    int yawFound; // r26
    int lastTime; // r27
    int currTime; // r25
    float lerp; // f18
    struct xQuat antiYaw; // r1+0x1C

    // References
    // -> static char __FUNCTION__[20];
}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80D61595
// Range: 0x80107D48 -> 0x8010846C
void _iAnimSKBAdjustYaw(struct iAnimSKBHeader * data /* r29 */, unsigned int bone /* r22 */, float yawStart /* r1+0x8 */, float yawEnd /* r1+0xC */) {
    // Local variables
    unsigned int i; // r30
    unsigned int keyfirst; // r21
    unsigned int keylast; // r20
    unsigned int tranCount; // r19
    unsigned int kcount; // r25
    unsigned int bcount; // r24
    unsigned int tcount; // r26
    float yaw; // f20
    struct xQuat quatA; // r1+0x20
    struct xQuat quatB; // r1+0x10
    float timefirst; // f31
    float timelast; // f19
    struct iAnimSKBKey * keys; // r31
    signed short * times; // r28
    signed short * tran; // r18
    unsigned short * offsets; // r27
    float invTimeDiff; // f18

    // References
    // -> static char __FUNCTION__[19];
}


