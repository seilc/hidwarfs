/*
    Compile unit: E:\SD2\Game\flat\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0x4
class iColor_tag {
    // Members
public:
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
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
// total size: 0x40
class RwSky2DVertexAlignmentOverlay {
    // Members
public:
    union { // inferred
        class RwSky2DVertexFields els; // offset 0x0, size 0x40
        __int128 qWords[4]; // offset 0x0, size 0x40
    };
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
// total size: 0x40
class RwSky2DVertex {
    // Members
public:
    class RwSky2DVertexAlignmentOverlay u; // offset 0x0, size 0x40
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019DBC0 -> 0x0019DD14
*/
// Range: 0x19DBC0 -> 0x19DD14
void iScrFxDrawLetterbox(signed int y_offset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x19DBC0 -> 0x19DD14
        unsigned short indices[4]; // r29+0x198
        class RwSky2DVertex v[4]; // r29+0x90
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019DD20 -> 0x0019E0C0
*/
// Range: 0x19DD20 -> 0x19E0C0
void iScrFxDrawFade(class iColor_tag * col /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19DD20 -> 0x19E0C0
        unsigned short indices[4]; // r29+0x118
        class RwSky2DVertex v[4]; // r29+0x10
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019E0C0 -> 0x0019E128
*/
// Range: 0x19E0C0 -> 0x19E128
void iScrFxEnd() {
    /* anonymous block */ {
        // Range: 0x19E0C0 -> 0x19E128
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019E130 -> 0x0019E1A4
*/
// Range: 0x19E130 -> 0x19E1A4
void iScrFxBegin() {
    /* anonymous block */ {
        // Range: 0x19E130 -> 0x19E1A4
    }
}


