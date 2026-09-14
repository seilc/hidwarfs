/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xIM.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8024D7F8 -> 0x8024DE24
*/
static char __FUNCTION__[8]; // size: 0x8, address: 0x80D65268
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
// total size: 0x8
struct xVec2 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x4
struct xColor_tag {
    // Members
    union { // inferred
        struct { // inferred
            unsigned char r; // offset 0x0, size 0x1
            unsigned char g; // offset 0x1, size 0x1
            unsigned char b; // offset 0x2, size 0x1
            unsigned char a; // offset 0x3, size 0x1
        };
        struct RwRGBA rgba; // offset 0x0, size 0x4
    };
};
// total size: 0x18
struct xIMLockContext {
    // Members
    void * data; // offset 0x0, size 0x4
    struct xVec3 * pos; // offset 0x4, size 0x4
    struct xVec2 * uv; // offset 0x8, size 0x4
    struct xColor_tag * color; // offset 0xC, size 0x4
    int vertCount; // offset 0x10, size 0x4
    enum xIMFormat format; // offset 0x14, size 0x4
};
enum xIMFormat {
    XIM_TRISTRIP = 4,
    XIM_TRILIST = 3,
};
// Range: 0x8024D7F8 -> 0x8024D9E0
void xIMLock(struct xIMLockContext & context /* r31 */, enum xIMFormat format /* r24 */, int vertCount /* r29 */) {
    // Local variables
    int pos_qwords; // r28
    int uv_qwords; // r27
    int color_qwords; // r26
    int alloc_qwords; // r25
    unsigned char * data_buffer; // r30

    // References
    // -> static char __FUNCTION__[8];
}

// total size: 0x10
struct xIMLockParameters {
    // Members
    int flags; // offset 0x0, size 0x4
    const struct xVec3 * cpos; // offset 0x4, size 0x4
    const struct xVec2 * cuv; // offset 0x8, size 0x4
    const struct xColor_tag * ccolor; // offset 0xC, size 0x4
};
// Range: 0x8024D9E0 -> 0x8024DA1C
void xIMUnlock(struct xIMLockContext & context /* r31 */) {}

static char __FUNCTION__[10]; // size: 0xA, address: 0x80D65270
// total size: 0x30
struct xMat3x3 {
    // Members
    struct xVec3 right; // offset 0x0, size 0xC
    int flags; // offset 0xC, size 0x4
    struct xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    struct xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
};
// total size: 0x40
struct xMat4x3 : public xMat3x3 {
    // Members
    struct xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x24
struct RxObjSpace3DVertex {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float nx; // offset 0xC, size 0x4
    float ny; // offset 0x10, size 0x4
    float nz; // offset 0x14, size 0x4
    unsigned char r; // offset 0x18, size 0x1
    unsigned char g; // offset 0x19, size 0x1
    unsigned char b; // offset 0x1A, size 0x1
    unsigned char a; // offset 0x1B, size 0x1
    float u; // offset 0x1C, size 0x4
    float v; // offset 0x20, size 0x4
};
// total size: 0xC
struct RwV3d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x4
struct RwRGBA {
    // Members
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// Range: 0x8024DA1C -> 0x8024DB5C
void xIMRender(struct xIMLockContext & context /* r29 */, const struct xMat4x3 * mat /* r1+0x8 */, unsigned int flags /* r24 */) {
    // Local variables
    int verts_size; // r26
    const struct xVec3 * pos; // r28
    const struct xVec2 * uv; // r27
    const struct xColor_tag * color; // r30
    struct RxObjSpace3DVertex * vert_buffer; // r25
    struct RxObjSpace3DVertex * vert; // r31
    struct RxObjSpace3DVertex * end_vert; // r23
    struct RwV3d tmp; // r1+0x10
    struct RwRGBA col; // r1+0xC

    // References
    // -> static char __FUNCTION__[10];
}

// total size: 0x18
struct rwGameCube2DVertex {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    unsigned char r; // offset 0xC, size 0x1
    unsigned char g; // offset 0xD, size 0x1
    unsigned char b; // offset 0xE, size 0x1
    unsigned char a; // offset 0xF, size 0x1
    float u; // offset 0x10, size 0x4
    float v; // offset 0x14, size 0x4
};
static struct rwGameCube2DVertex vx[4]; // size: 0x60, address: 0x80D249C8
// Range: 0x8024DB5C -> 0x8024DE24
void xIM2DRenderQuad(float x1 /* f25 */, float y1 /* f26 */, float x2 /* f27 */, float y2 /* f28 */, float uMax /* f29 */, float vMax /* f30 */, unsigned int alpha /* r28 */, unsigned int r /* r29 */, unsigned int g /* r30 */, unsigned int b /* r31 */) {
    // Local variables
    float z; // f31
    float recipCamZ; // r1+0x8

    // References
    // -> static struct rwGameCube2DVertex vx[4];
}


