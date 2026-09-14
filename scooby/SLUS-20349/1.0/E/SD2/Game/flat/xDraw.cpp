/*
    Compile unit: E:\SD2\Game\flat\xDraw.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class iColor_tag sgDrawColor; // size: 0x4, address: 0x357534
static float sph2_yaw; // size: 0x4, address: 0x0
class _xVec3 g_O3; // size: 0xC, address: 0x342E28
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x2B5AD0
// total size: 0xC
class _xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x30
class _xMat3x3 {
    // Members
public:
    class _xVec3 right; // offset 0x0, size 0xC
    signed int flags; // offset 0xC, size 0x4
    class _xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class _xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
};
// total size: 0x40
class RwSky2DVertexAlignmentOverlay {
    // Members
public:
    union { // inferred
        class RwSky2DVertexFields els; // offset 0x0, size 0x40
        __int128 qWords[4]; // offset 0x0, size 0x40
    };
};
// total size: 0x40
class _xMat4x3 {
    // Members
public:
    class _xVec3 right; // offset 0x0, size 0xC
    signed int flags; // offset 0xC, size 0x4
    class _xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class _xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
    class _xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x10
class RwRGBAReal {
    // Members
public:
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
// total size: 0x8
class _xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x4
class iColor_tag {
    // Members
public:
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
// total size: 0x18
class _xBox {
    // Members
public:
    class _xVec3 upper; // offset 0x0, size 0xC
    class _xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x40
class RwSky2DVertex {
    // Members
public:
    class RwSky2DVertexAlignmentOverlay u; // offset 0x0, size 0x40
};
// total size: 0x10
class _xSphere {
    // Members
public:
    class _xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// total size: 0x40
class RwSky2DVertexFields {
    // Members
public:
    class RwV3d scrVertex; // offset 0x0, size 0xC
    float camVertex_z; // offset 0xC, size 0x4
    float u; // offset 0x10, size 0x4
    float v; // offset 0x14, size 0x4
    float recipZ; // offset 0x18, size 0x4
    float pad1; // offset 0x1C, size 0x4
    class RwRGBAReal color; // offset 0x20, size 0x10
    class RwV3d objNormal; // offset 0x30, size 0xC
    float pad2; // offset 0x3C, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\xDraw.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013CBB0 -> 0x0013CC1C
*/
// Range: 0x13CBB0 -> 0x13CC1C
void xDrawLine(class _xVec3 * a /* r2 */, class _xVec3 * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x13CBB0 -> 0x13CC1C
        class RwV3d verts[2]; // r29+0x10
        unsigned int indices[2]; // r29+0x28
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xDraw.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013CC20 -> 0x0013CC70
*/
// Range: 0x13CC20 -> 0x13CC70
void xDrawSetColor(unsigned char r /* r2 */, unsigned char g /* r2 */, unsigned char b /* r2 */, unsigned char a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x13CC20 -> 0x13CC70
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xDraw.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013CC70 -> 0x0013CC9C
*/
// Range: 0x13CC70 -> 0x13CC9C
void xDrawSetColor(class iColor_tag color /* r29+0x8 */) {
    /* anonymous block */ {
        // Range: 0x13CC70 -> 0x13CC9C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xDraw.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013CCA0 -> 0x0013CCA8
*/
// Range: 0x13CCA0 -> 0x13CCA8
void xDrawEnd() {
    /* anonymous block */ {
        // Range: 0x13CCA0 -> 0x13CCA8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xDraw.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013CCB0 -> 0x0013CCB8
*/
// Range: 0x13CCB0 -> 0x13CCB8
void xDrawBegin() {
    /* anonymous block */ {
        // Range: 0x13CCB0 -> 0x13CCB8
    }
}


