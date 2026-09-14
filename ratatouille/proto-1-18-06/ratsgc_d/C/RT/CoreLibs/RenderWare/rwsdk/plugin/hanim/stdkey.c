/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\plugin\hanim\stdkey.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803E08CC -> 0x803E1A48
*/
static char __dbFunctionName[21]; // size: 0x15, address: 0x804E7A78
// total size: 0x24
struct RpHAnimKeyFrame {
    // Members
    struct RpHAnimKeyFrame * prevFrame; // offset 0x0, size 0x4
    float time; // offset 0x4, size 0x4
    struct RtQuat q; // offset 0x8, size 0x10
    struct RwV3d t; // offset 0x18, size 0xC
};
// total size: 0x24
struct RpHAnimInterpFrame {
    // Members
    struct RpHAnimKeyFrame * keyFrame1; // offset 0x0, size 0x4
    struct RpHAnimKeyFrame * keyFrame2; // offset 0x4, size 0x4
    struct RtQuat q; // offset 0x8, size 0x10
    struct RwV3d t; // offset 0x18, size 0xC
};
// Range: 0x803E08CC -> 0x803E0994
void RpHAnimKeyFrameApply(void * pMatrix /* r30 */, void * pVoidIFrame /* r29 */) {
    // Local variables
    struct RpHAnimInterpFrame * iFrame; // r31

    // References
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804E7A8D
union _rwIEEEFloatShapeType {
    float value; // offset 0x0, size 0x4
    unsigned int word; // offset 0x0, size 0x4
};
// Range: 0x803E0994 -> 0x803E0FD8
void RpHAnimKeyFrameInterpolate(void * pVoidOut /* r1+0x8 */, void * pVoidIn1 /* r1+0xC */, void * pVoidIn2 /* r1+0x10 */, float time /* r1+0x14 */) {
    // Local variables
    struct RpHAnimInterpFrame * pOut; // r29
    struct RpHAnimKeyFrame * pIn1; // r31
    struct RpHAnimKeyFrame * pIn2; // r30
    float fCosTheta; // f28
    float fAlpha; // f30
    float fBeta; // f29
    int bObtuseTheta; // r25
    int bNearlyZeroTheta; // r24
    float fTheta; // f27
    float fCosecTheta; // f18
    float z; // f31
    float p; // f21
    float q; // f20
    float r; // f19
    float w; // r1+0x40
    float s; // f26
    float c; // r1+0x3C
    float df; // f25
    int hx; // r28
    int ix; // r27
    union _rwIEEEFloatShapeType gf_u; // r1+0x38
    int idf; // r23
    union _rwIEEEFloatShapeType gf_u; // r1+0x34
    union _rwIEEEFloatShapeType sf_u; // r1+0x30
    float z; // f24
    float v; // r1+0x2C
    float r; // r1+0x28
    float z; // f23
    float v; // r1+0x24
    float r; // r1+0x20
    float z; // f22
    float v; // r1+0x1C
    float r; // r1+0x18

    // References
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804E7AA8
// Range: 0x803E0FD8 -> 0x803E15A4
void RpHAnimKeyFrameBlend(void * pVoidOut /* r1+0x8 */, void * pVoidIn1 /* r1+0xC */, void * pVoidIn2 /* r1+0x10 */, float fAlpha /* f30 */) {
    // Local variables
    struct RpHAnimInterpFrame * pOut; // r29
    struct RpHAnimInterpFrame * pIn1; // r31
    struct RpHAnimInterpFrame * pIn2; // r30
    float fBeta; // f29
    float fTheta; // f28
    float fCosTheta; // f27
    int bObtuseTheta; // r26
    int bNearlyZeroTheta; // r25
    float fCosecTheta; // f18
    float z; // f31
    float p; // f21
    float q; // f20
    float r; // f19
    float w; // r1+0x3C
    float s; // f26
    float c; // r1+0x38
    float df; // f25
    int hx; // r28
    int ix; // r27
    union _rwIEEEFloatShapeType gf_u; // r1+0x34
    int idf; // r24
    union _rwIEEEFloatShapeType gf_u; // r1+0x30
    union _rwIEEEFloatShapeType sf_u; // r1+0x2C
    float z; // f24
    float v; // r1+0x28
    float r; // r1+0x24
    float z; // f23
    float v; // r1+0x20
    float r; // r1+0x1C
    float z; // f22
    float v; // r1+0x18
    float r; // r1+0x14

    // References
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804E7ABD
// total size: 0x30
struct RtAnimInterpolatorInfo {
    // Members
    int typeID; // offset 0x0, size 0x4
    int interpKeyFrameSize; // offset 0x4, size 0x4
    int animKeyFrameSize; // offset 0x8, size 0x4
    void (* keyFrameApplyCB)(void *, void *); // offset 0xC, size 0x4
    void (* keyFrameBlendCB)(void *, void *, void *, float); // offset 0x10, size 0x4
    void (* keyFrameInterpolateCB)(void *, void *, void *, float, void *); // offset 0x14, size 0x4
    void (* keyFrameAddCB)(void *, void *, void *); // offset 0x18, size 0x4
    void (* keyFrameMulRecipCB)(void *, void *); // offset 0x1C, size 0x4
    struct RtAnimAnimation * (* keyFrameStreamReadCB)(struct RwStream *, struct RtAnimAnimation *); // offset 0x20, size 0x4
    int (* keyFrameStreamWriteCB)(struct RtAnimAnimation *, struct RwStream *); // offset 0x24, size 0x4
    int (* keyFrameStreamGetSizeCB)(struct RtAnimAnimation *); // offset 0x28, size 0x4
    int customDataSize; // offset 0x2C, size 0x4
};
// total size: 0x18
struct RtAnimAnimation {
    // Members
    struct RtAnimInterpolatorInfo * interpInfo; // offset 0x0, size 0x4
    int numFrames; // offset 0x4, size 0x4
    int flags; // offset 0x8, size 0x4
    float duration; // offset 0xC, size 0x4
    void * pFrames; // offset 0x10, size 0x4
    void * customData; // offset 0x14, size 0x4
};
// Range: 0x803E15A4 -> 0x803E16CC
struct RtAnimAnimation * RpHAnimKeyFrameStreamRead(struct RwStream * stream /* r28 */, struct RtAnimAnimation * pAnimation /* r31 */) {
    // Local variables
    int i; // r30
    int temp; // r1+0x8
    struct RpHAnimKeyFrame * pFrames; // r29

    // References
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804E7AD7
// Range: 0x803E16CC -> 0x803E17E4
int RpHAnimKeyFrameStreamWrite(const struct RtAnimAnimation * pAnimation /* r29 */, struct RwStream * stream /* r28 */) {
    // Local variables
    int i; // r31
    int temp; // r1+0x8
    struct RpHAnimKeyFrame * pFrames; // r30

    // References
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[29]; // size: 0x1D, address: 0x804E7AF2
// Range: 0x803E17E4 -> 0x803E1868
int RpHAnimKeyFrameStreamGetSize(const struct RtAnimAnimation * animation /* r30 */) {
    // Local variables
    int size; // r31

    // References
    // -> static char __dbFunctionName[29];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E7B0F
// total size: 0x10
struct RtQuat {
    // Members
    struct RwV3d imag; // offset 0x0, size 0xC
    float real; // offset 0xC, size 0x4
};
// Range: 0x803E1868 -> 0x803E1958
void RpHAnimKeyFrameMulRecip(void * pVoidFrame /* r27 */, void * pVoidStart /* r28 */) {
    // Local variables
    struct RpHAnimKeyFrame * pAnimFrame; // r31
    struct RpHAnimKeyFrame * pStartFrame; // r29
    struct RtQuat qInverse; // r1+0x18
    struct RtQuat qFrame; // r1+0x8

    // References
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804E7B27
// Range: 0x803E1958 -> 0x803E1A48
void RpHAnimKeyFrameAdd(void * pVoidOut /* r25 */, void * pVoidIn1 /* r26 */, void * pVoidIn2 /* r27 */) {
    // Local variables
    struct RpHAnimInterpFrame * pOut; // r30
    struct RpHAnimInterpFrame * pIn1; // r29
    struct RpHAnimInterpFrame * pIn2; // r28

    // References
    // -> static char __dbFunctionName[19];
}


