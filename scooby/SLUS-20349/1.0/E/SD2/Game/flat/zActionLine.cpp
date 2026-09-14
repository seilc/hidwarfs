/*
    Compile unit: E:\SD2\Game\flat\zActionLine.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class _tagActionLine * sActionLine[8]; // size: 0x20, address: 0x3B32D0
static class RwRaster * sActionLineRaster; // size: 0x4, address: 0x358668
unsigned int gActiveHeap; // size: 0x4, address: 0x357CAC
// total size: 0x38
class _tagActionLine {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    class _xVec3 pos[4]; // offset 0x4, size 0x30
    float time_left; // offset 0x34, size 0x4
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
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
// total size: 0x4
class RwRGBA {
    // Members
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0x60
class RwTexture {
    // Members
public:
    class RwRaster * raster; // offset 0x0, size 0x4
    class RwTexDictionary * dict; // offset 0x4, size 0x4
    class RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    signed int refCount; // offset 0x50, size 0x4
    enum RwTextureFilterMode filtering; // offset 0x54, size 0x4
    enum RwTextureAddressMode addressingU; // offset 0x58, size 0x4
    enum RwTextureAddressMode addressingV; // offset 0x5C, size 0x4
};
enum RwTextureFilterMode {
    rwFILTERNAFILTERMODE = 0,
    rwFILTERNEAREST = 1,
    rwFILTERLINEAR = 2,
    rwFILTERMIPNEAREST = 3,
    rwFILTERMIPLINEAR = 4,
    rwFILTERLINEARMIPNEAREST = 5,
    rwFILTERLINEARMIPLINEAR = 6,
    rwTEXTUREFILTERMODEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x8
class RwObject {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
// total size: 0xC
class _xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x34
class RwRaster {
    // Members
public:
    class RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    signed int width; // offset 0xC, size 0x4
    signed int height; // offset 0x10, size 0x4
    signed int depth; // offset 0x14, size 0x4
    signed int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    signed int originalWidth; // offset 0x28, size 0x4
    signed int originalHeight; // offset 0x2C, size 0x4
    signed int originalStride; // offset 0x30, size 0x4
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x4
class RxColorUnion {
    // Members
public:
    union { // inferred
        class RwRGBA preLitColor; // offset 0x0, size 0x4
        class RwRGBA color; // offset 0x0, size 0x4
    };
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x24
class RxObjSpace3DVertex {
    // Members
public:
    class RwV3d objVertex; // offset 0x0, size 0xC
    class RxColorUnion c; // offset 0xC, size 0x4
    class RwV3d objNormal; // offset 0x10, size 0xC
    float u; // offset 0x1C, size 0x4
    float v; // offset 0x20, size 0x4
};
enum RwTextureAddressMode {
    rwTEXTUREADDRESSNATEXTUREADDRESS = 0,
    rwTEXTUREADDRESSWRAP = 1,
    rwTEXTUREADDRESSMIRROR = 2,
    rwTEXTUREADDRESSCLAMP = 3,
    rwTEXTUREADDRESSBORDER = 4,
    rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 2147483647,
};

/*
    Compile unit: E:\SD2\Game\flat\zActionLine.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00279ED0 -> 0x00279F44
*/
// Range: 0x279ED0 -> 0x279F44
void zActionLineRender() {
    /* anonymous block */ {
        // Range: 0x279ED0 -> 0x279F44
        signed int i; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zActionLine.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00279F50 -> 0x00279FFC
*/
// Range: 0x279F50 -> 0x279FFC
static void RenderActionLine(class _tagActionLine * l /* r2 */) {
    /* anonymous block */ {
        // Range: 0x279F50 -> 0x279FFC
        class RwRGBA * _col; // r2
        signed int i; // r7
        class RxObjSpace3DVertex * vert; // r6
        class RxObjSpace3DVertex sStripVert[4]; // @ 0x003B32F0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zActionLine.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0027A000 -> 0x0027A070
*/
// Range: 0x27A000 -> 0x27A070
void zActionLineUpdate(float seconds /* r29 */) {
    /* anonymous block */ {
        // Range: 0x27A000 -> 0x27A070
        class _tagActionLine * l; // r6
        signed int i; // r5
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zActionLine.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0027A070 -> 0x0027A0E8
*/
// Range: 0x27A070 -> 0x27A0E8
void zActionLineInit() {
    /* anonymous block */ {
        // Range: 0x27A070 -> 0x27A0E8
        class RwTexture * tex; // r2
    }
}


