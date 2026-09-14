/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\gc\iAnimSKB.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80078CF8 -> 0x8007A6E8
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
// Range: 0x80078CF8 -> 0x800793E8
void iAnimEvalSKB(struct iAnimSKBHeader * data /* r0 */, float time /* f1 */, unsigned int flags /* r0 */, struct xVec3 * tran /* r26 */, struct xQuat * quat /* r27 */) {
    // Local variables
    unsigned int i; // r24
    unsigned int tidx; // r9
    unsigned int bcount; // r31
    unsigned int tcount; // r7
    struct iAnimSKBKey * keys; // r30
    unsigned short * times; // r8
    signed short * tran1; // r29
    unsigned short * offsets; // r28
    float timeX; // f28
    float scalex; // f28
    float scaley; // f31
    float scalez; // f27
    struct iAnimSKBKey * k; // r28
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

// Range: 0x8007940C -> 0x8007949C
static float QUAT_DECOMPRESS(signed short x /* r0 */, signed short y /* r0 */, signed short z /* r0 */, float scale /* f1 */) {}

// Range: 0x8007949C -> 0x800794E4
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
// Range: 0x800794E4 -> 0x8007998C
void _iAnimSKBAdjustTranslate(struct iAnimSKBHeader * data /* r0 */, unsigned int bone /* r0 */, float * starttran /* r0 */, float * endtran /* r0 */) {
    // Local variables
    int ipos; // r0
    unsigned int i; // r4
    unsigned int idx; // r0
    unsigned int keyfirst; // r8
    unsigned int keylast; // r9
    unsigned int tranCount; // r25
    unsigned int kcount; // r10
    unsigned int bcount; // r25
    unsigned int tcount; // r29
    float outScale[3]; // r1+0x2C
    float pos; // f7
    float factor[3]; // r1+0x20
    float oldmax[3]; // r1+0x14
    float newmax[3]; // r1+0x8
    float timefirst; // f1
    struct iAnimSKBKey * keys; // r11
    signed short * times; // r30
    signed short * tran; // r12
    unsigned short * offsets; // r29
    signed short * tmpTran; // r24
}

// Range: 0x8007998C -> 0x80079A4C
int _iAnimSKBNumExtract(struct iAnimSKBHeader * data /* r0 */, unsigned int bone /* r0 */) {
    // Local variables
    unsigned int i; // r6
    unsigned int keylast; // r7
    unsigned int tcount; // r9
    struct iAnimSKBKey * keys; // r5
    unsigned short * offsets; // r6
    int tranFound; // r3
    int lastTime; // r11
}

// Range: 0x80079A4C -> 0x80079CAC
int _iAnimSKBExtractTranslateAxis(struct iAnimSKBHeader * data /* r0 */, unsigned int bone /* r0 */, struct xVec3 * tranArray /* r5 */, unsigned char * axis /* r0 */) {
    // Local variables
    unsigned int i; // r4
    unsigned int j; // r26
    unsigned int keylast; // r6
    unsigned int tcount; // r6
    struct iAnimSKBKey * keys; // r8
    signed short * tran; // r9
    unsigned short * offsets; // r12
    struct xVec3 * lastTran; // r25
    int tranFound; // r10
    int lastTime; // r11
    signed short * tmpTran; // r12
    float lerp; // f3
}

// Range: 0x80079CAC -> 0x80079D00
float QuatToYaw(struct xQuat * q /* r0 */) {
    // Local variables
    float yaw; // f0
}

// Range: 0x80079D00 -> 0x80079D68
void YawToQuat(float yaw /* f0 */, struct xQuat * q /* r31 */) {}

// Range: 0x80079D68 -> 0x80079DDC
static void QuatMul(struct xQuat * o /* r0 */, struct xQuat * a /* r0 */, struct xQuat * b /* r0 */) {
    // Local variables
    float s; // f2
}

// total size: 0x10
struct xQuat {
    // Members
    struct xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
// Range: 0x80079DDC -> 0x8007A2D4
int _iAnimSKBExtractYaw(struct iAnimSKBHeader * data /* r0 */, unsigned int bone /* r0 */, float * yawArray /* r23 */) {
    // Local variables
    unsigned int i; // r28
    unsigned int j; // r6
    unsigned int keylast; // r27
    unsigned int tcount; // r8
    struct iAnimSKBKey * keys; // r26
    unsigned short * offsets; // r4
    struct xQuat currQuat; // r1+0x18
    float currYaw; // f22
    float lastYaw; // f5
    float lastCurrYaw; // f21
    int yawFound; // r25
    int lastTime; // r24
    struct xQuat antiYaw; // r1+0x8
}

// Range: 0x8007A2D4 -> 0x8007A6E8
void _iAnimSKBAdjustYaw(struct iAnimSKBHeader * data /* r0 */, unsigned int bone /* r0 */, float yawStart /* f28 */, float yawEnd /* f0 */) {
    // Local variables
    unsigned int i; // r30
    unsigned int keyfirst; // r29
    unsigned int keylast; // r28
    unsigned int kcount; // r27
    unsigned int tcount; // r10
    struct xQuat quatA; // r1+0x18
    struct xQuat quatB; // r1+0x8
    float timefirst; // f30
    struct iAnimSKBKey * keys; // r26
    signed short * times; // r11
    unsigned short * offsets; // r5
    float invTimeDiff; // f29
}


