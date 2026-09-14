/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\gc\i2dQuadBuffer.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80137604 -> 0x80137778
*/
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
    // Functions
    unsigned char Flush();

    // Members
    unsigned short vertsUsed; // offset 0x0, size 0x2
    unsigned short vertsMax; // offset 0x2, size 0x2
    struct rwGameCube2DVertex * vertArray; // offset 0x4, size 0x4
};
// Range: 0x80137604 -> 0x80137744
// this: r28
unsigned char i2dQuadBuffer::Flush() {
    // Local variables
    float ProjectionMatrix[7]; // r1+0x8
    struct rwGameCube2DVertex * verts; // r31
    struct rwGameCube2DVertex * end_marker; // r30
    unsigned int color; // r29
}


