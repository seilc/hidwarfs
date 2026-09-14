/*
    Compile unit: E:\SD2\Game\flat\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0x10
class RwVideoMode {
    // Members
public:
    signed int width; // offset 0x0, size 0x4
    signed int height; // offset 0x4, size 0x4
    signed int depth; // offset 0x8, size 0x4
    enum RwVideoModeFlag flags; // offset 0xC, size 0x4
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
enum RwVideoModeFlag {
    rwVIDEOMODEEXCLUSIVE = 1,
    rwVIDEOMODEINTERLACE = 2,
    rwVIDEOMODEFFINTERLACE = 4,
    rwVIDEOMODEFSAA0 = 8,
    rwVIDEOMODEFSAA1 = 16,
    rwVIDEOMODEFLAGFORCEENUMSIZEINT = 2147483647,
};

/*
    Compile unit: E:\SD2\Game\flat\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D430 -> 0x0019D5A0
*/
// Range: 0x19D430 -> 0x19D5A0
void iScrFxDrawLetterbox(signed int y_offset /* r18 */) {
    /* anonymous block */ {
        // Range: 0x19D430 -> 0x19D5A0
        class RwVideoMode video_mode; // r29+0x40
        unsigned short indices[4]; // @ 0x003575C0
        class RwSky2DVertex v[4]; // @ 0x00371890
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D5A0 -> 0x0019D95C
*/
// Range: 0x19D5A0 -> 0x19D95C
void iScrFxDrawFade(class iColor_tag * col /* r16 */) {
    /* anonymous block */ {
        // Range: 0x19D5A0 -> 0x19D95C
        class RwVideoMode video_mode; // r29+0x20
        unsigned short indices[4]; // @ 0x003575B8
        class RwSky2DVertex v[4]; // @ 0x00371790
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D960 -> 0x0019D9C8
*/
// Range: 0x19D960 -> 0x19D9C8
void iScrFxEnd() {
    /* anonymous block */ {
        // Range: 0x19D960 -> 0x19D9C8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iScrFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D9D0 -> 0x0019DA44
*/
// Range: 0x19D9D0 -> 0x19DA44
void iScrFxBegin() {
    /* anonymous block */ {
        // Range: 0x19D9D0 -> 0x19DA44
    }
}


