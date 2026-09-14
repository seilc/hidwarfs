/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xRenderBuffer.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802472A4 -> 0x80247430
*/
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
// total size: 0x6D80
struct tagiRenderArrays {
    // Members
    struct rwGameCube2DVertex m_vertex_2d[288]; // offset 0x0, size 0x1B00
    unsigned short m_index[960]; // offset 0x1B00, size 0x780
    struct RxObjSpace3DVertex m_vertex[480]; // offset 0x2280, size 0x4380
    float m_vertexTZ[480]; // offset 0x6600, size 0x780
};
struct tagiRenderArrays gRenderArr; // size: 0x6D80, address: 0x80D1CD50
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
// total size: 0x10
struct xVec4 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
// total size: 0x90
struct tagiRenderInput {
    // Members
    struct rwGameCube2DVertex * m_vertex_2d; // offset 0x0, size 0x4
    unsigned short * m_index; // offset 0x4, size 0x4
    struct RxObjSpace3DVertex * m_vertex; // offset 0x8, size 0x4
    float * m_vertexTZ; // offset 0xC, size 0x4
    unsigned int m_mode; // offset 0x10, size 0x4
    int m_vertexType; // offset 0x14, size 0x4
    int m_vertexTypeSize; // offset 0x18, size 0x4
    int m_indexCount; // offset 0x1C, size 0x4
    int m_vertexCount; // offset 0x20, size 0x4
    struct xMat4x3 m_camViewMatrix; // offset 0x30, size 0x40
    struct xVec4 m_camViewR; // offset 0x70, size 0x10
    struct xVec4 m_camViewU; // offset 0x80, size 0x10
};
struct tagiRenderInput gRenderBuffer; // size: 0x90, address: 0x80D23AD0
class i2dQuadBuffer * gQuadBuffer; // size: 0x4, address: 0x80D6B140
float sCameraNearClip; // size: 0x4, address: 0x80D654D8
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
// Range: 0x802472A4 -> 0x80247430
void xRenderBufferInit() {
    // Local variables
    struct rwGameCube2DVertex nullVert; // r1+0x8
    int i; // r31

    // References
    // -> class i2dQuadBuffer * gQuadBuffer;
    // -> struct tagiRenderInput gRenderBuffer;
    // -> float sCameraNearClip;
    // -> struct tagiRenderArrays gRenderArr;
}

// total size: 0x10
struct basic_rect {
    // Static members
    static struct basic_rect m_Null; // size: 0x10
    static struct basic_rect m_Unit; // size: 0x10

    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
// total size: 0x10
struct i2dRect {
    // Members
    union { // inferred
        struct { // inferred
            float tlx; // offset 0x0, size 0x4
            float tly; // offset 0x4, size 0x4
            float brx; // offset 0x8, size 0x4
            float bry; // offset 0xC, size 0x4
        };
        struct { // inferred
            float tlu; // offset 0x0, size 0x4
            float tlv; // offset 0x4, size 0x4
            float bru; // offset 0x8, size 0x4
            float brv; // offset 0xC, size 0x4
        };
    };
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
// total size: 0x8
class i2dQuadBuffer {
    // Members
    unsigned short vertsUsed; // offset 0x0, size 0x2
    unsigned short vertsMax; // offset 0x2, size 0x2
    struct rwGameCube2DVertex * vertArray; // offset 0x4, size 0x4
};

