/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xIM.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E9D38 -> 0x801EA114
*/
static char __FUNCTION__[8]; // size: 0x8, address: 0x80C03658
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
// total size: 0x8
struct xVec2 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x4
struct RwRGBA {
    // Members
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
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
// Range: 0x801E9D38 -> 0x801E9EDC
void xIMLock(struct xIMLockContext & context /* r29 */, enum xIMFormat format /* r30 */, int vertCount /* r31 */) {
    // Local variables
    int pos_qwords; // r27
    int uv_qwords; // r26
    int color_qwords; // r25
    unsigned char * data_buffer; // r5

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
// Range: 0x801E9EDC -> 0x801E9F08
void xIMUnlock(struct xIMLockContext & context /* r0 */) {}

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
// Range: 0x801E9F08 -> 0x801EA040
void xIMRender(struct xIMLockContext & context /* r24 */, const struct xMat4x3 * mat /* r25 */, unsigned int flags /* r26 */) {
    // Local variables
    int verts_size; // r31
    const struct xVec3 * pos; // r30
    const struct xVec2 * uv; // r29
    const struct xColor_tag * color; // r28
    struct RxObjSpace3DVertex * vert_buffer; // r27
    struct RxObjSpace3DVertex * vert; // r6
    struct RxObjSpace3DVertex * end_vert; // r7
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
static struct rwGameCube2DVertex vx[4]; // size: 0x60, address: 0x80BC2EF8
void * RwEngineInstance; // size: 0x4, address: 0x80C09F34
// Range: 0x801EA040 -> 0x801EA114
void xIM2DRenderQuad(float x1 /* f0 */, float y1 /* f0 */, float x2 /* f0 */, float y2 /* f0 */, float uMax /* f0 */, float vMax /* f0 */, unsigned int alpha /* r0 */, unsigned int r /* r0 */, unsigned int g /* r0 */, unsigned int b /* r0 */) {
    // Local variables
    float z; // f7

    // References
    // -> static struct rwGameCube2DVertex vx[4];
    // -> void * RwEngineInstance;
}


