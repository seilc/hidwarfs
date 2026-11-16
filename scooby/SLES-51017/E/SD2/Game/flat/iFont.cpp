/*
    Compile unit: E:\SD2\Game\flat\iFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class RwSky2DVertex * im2d_vert; // size: 0x4, address: 0x358A70
static signed int im2d_vert_ct; // size: 0x4, address: 0x358A74
float gFontWiggle; // size: 0x4, address: 0x358A78
float gFontWiggleTime; // size: 0x4, address: 0x358A7C
static class RxRenderStateVector rsv; // size: 0x30, address: 0x36D800
static float rcz; // size: 0x4, address: 0x358A80
static float nsz; // size: 0x4, address: 0x358A84
static class RwRaster * sRaster; // size: 0x4, address: 0x358A88
static class RwRaster * sButtonRaster; // size: 0x4, address: 0x358A8C
unsigned int gDBfont; // size: 0x4, address: 0x358A6C
class xFontInfo gFontList[4]; // size: 0x6A0, address: 0x36D030
class xFontGlobals_t gFontGlobals; // size: 0x10, address: 0x2B3CE0
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x2B6420
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
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
// total size: 0x40
class RwSky2DVertex {
    // Members
public:
    class RwSky2DVertexAlignmentOverlay u; // offset 0x0, size 0x40
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
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x1A8
class xFontInfo {
    // Members
public:
    unsigned short id; // offset 0x0, size 0x2
    unsigned short flags; // offset 0x2, size 0x2
    unsigned short char_width; // offset 0x4, size 0x2
    unsigned short char_height; // offset 0x6, size 0x2
    float oo_tex_width; // offset 0x8, size 0x4
    float oo_tex_height; // offset 0xC, size 0x4
    float u; // offset 0x10, size 0x4
    float v; // offset 0x14, size 0x4
    unsigned short layout; // offset 0x18, size 0x2
    unsigned short pad; // offset 0x1A, size 0x2
    unsigned char lookup[128]; // offset 0x1C, size 0x80
    class iFontSpacing pspc[128]; // offset 0x9C, size 0x100
    char * characters; // offset 0x19C, size 0x4
    class iFontInfo ps; // offset 0x1A0, size 0x8
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x4
class iColor_tag {
    // Members
public:
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
// total size: 0x10
class xFontGlobals_t {
    // Members
public:
    float dpx; // offset 0x0, size 0x4
    float dpy; // offset 0x4, size 0x4
    unsigned int draw; // offset 0x8, size 0x4
    float aspect_ratio; // offset 0xC, size 0x4
};
// total size: 0x30
class RxRenderStateVector {
    // Members
public:
    unsigned int Flags; // offset 0x0, size 0x4
    enum RwShadeMode ShadeMode; // offset 0x4, size 0x4
    enum RwBlendFunction SrcBlend; // offset 0x8, size 0x4
    enum RwBlendFunction DestBlend; // offset 0xC, size 0x4
    class RwRaster * TextureRaster; // offset 0x10, size 0x4
    enum RwTextureAddressMode AddressModeU; // offset 0x14, size 0x4
    enum RwTextureAddressMode AddressModeV; // offset 0x18, size 0x4
    enum RwTextureFilterMode FilterMode; // offset 0x1C, size 0x4
    class RwRGBA BorderColor; // offset 0x20, size 0x4
    enum RwFogType FogType; // offset 0x24, size 0x4
    class RwRGBA FogColor; // offset 0x28, size 0x4
    unsigned char * FogTable; // offset 0x2C, size 0x4
};
enum RwBlendFunction {
    rwBLENDNABLEND = 0,
    rwBLENDZERO = 1,
    rwBLENDONE = 2,
    rwBLENDSRCCOLOR = 3,
    rwBLENDINVSRCCOLOR = 4,
    rwBLENDSRCALPHA = 5,
    rwBLENDINVSRCALPHA = 6,
    rwBLENDDESTALPHA = 7,
    rwBLENDINVDESTALPHA = 8,
    rwBLENDDESTCOLOR = 9,
    rwBLENDINVDESTCOLOR = 10,
    rwBLENDSRCALPHASAT = 11,
    rwBLENDFUNCTIONFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4C
class xFontBox {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    float x; // offset 0x4, size 0x4
    float y; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
    unsigned int font; // offset 0x14, size 0x4
    class iColor_tag color; // offset 0x18, size 0x4
    class iColor_tag saved_color; // offset 0x1C, size 0x4
    float draw_width; // offset 0x20, size 0x4
    float draw_height; // offset 0x24, size 0x4
    float x_spacing; // offset 0x28, size 0x4
    float y_spacing; // offset 0x2C, size 0x4
    float depth; // offset 0x30, size 0x4
    float inset_left; // offset 0x34, size 0x4
    float inset_right; // offset 0x38, size 0x4
    float inset_top; // offset 0x3C, size 0x4
    float inset_bottom; // offset 0x40, size 0x4
    char * text; // offset 0x44, size 0x4
    class iColor_tag backdrop_color; // offset 0x48, size 0x4
};
// total size: 0x1C
class RwImage {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    signed int width; // offset 0x4, size 0x4
    signed int height; // offset 0x8, size 0x4
    signed int depth; // offset 0xC, size 0x4
    signed int stride; // offset 0x10, size 0x4
    unsigned char * cpPixels; // offset 0x14, size 0x4
    class RwRGBA * palette; // offset 0x18, size 0x4
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
// total size: 0x8
class iFontInfo {
    // Members
public:
    class RwTexture * texture; // offset 0x0, size 0x4
    class RwRaster * raster; // offset 0x4, size 0x4
};
enum RwTextureAddressMode {
    rwTEXTUREADDRESSNATEXTUREADDRESS = 0,
    rwTEXTUREADDRESSWRAP = 1,
    rwTEXTUREADDRESSMIRROR = 2,
    rwTEXTUREADDRESSCLAMP = 3,
    rwTEXTUREADDRESSBORDER = 4,
    rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x2
class iFontSpacing {
    // Members
public:
    unsigned char ox; // offset 0x0, size 0x1
    unsigned char dx; // offset 0x1, size 0x1
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
enum RwShadeMode {
    rwSHADEMODENASHADEMODE = 0,
    rwSHADEMODEFLAT = 1,
    rwSHADEMODEGOURAUD = 2,
    rwSHADEMODEFORCEENUMSIZEINT = 2147483647,
};

/*
    Compile unit: E:\SD2\Game\flat\iFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00199CF0 -> 0x00199DC4
*/
// Range: 0x199CF0 -> 0x199DC4
void iFontInit() {
    /* anonymous block */ {
        // Range: 0x199CF0 -> 0x199DC4
        class RwTexture * button_texture; // r2
        class RwTexture * font_texture; // r16
        unsigned int id; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00199DD0 -> 0x0019A234
*/
// Range: 0x199DD0 -> 0x19A234
static unsigned int iFontInitFont(class RwTexture * texture /* r2 */, char * characters /* r29+0xBC */, unsigned int layout /* r19 */, unsigned short u /* r18 */, unsigned short v /* r17 */, unsigned short char_width /* r16 */, unsigned short char_height /* r29+0xBA */, unsigned short flags /* r29+0xB8 */) {
    /* anonymous block */ {
        // Range: 0x199DD0 -> 0x19A234
        unsigned int ov; // r8
        unsigned int ou; // r7
        unsigned char maxu; // r6
        unsigned char minu; // r5
        unsigned char vv; // r4
        unsigned char uu; // r3
        unsigned char c; // r2
        unsigned char * imp; // r2
        class RwImage * image; // r23
        unsigned char val; // r7
        unsigned int tex_height; // r30
        unsigned int tex_width; // r29+0xA0
        class xFontInfo * font; // r21
        char t; // r6
        char * s; // r5
        unsigned int id; // r20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019A240 -> 0x0019AE48
*/
// Range: 0x19A240 -> 0x19AE48
void iFontDrawChar(char c /* r2 */, class iColor_tag color /* r29+0xCC */, class xFontBox * box /* r17 */) {
    /* anonymous block */ {
        // Range: 0x19A240 -> 0x19AE48
        float pulse_h; // r1
        float pulse_w; // r2
        float wave; // r1
        float pulse_h; // r1
        float pulse_w; // r2
        float wave; // r1
        float _dy; // r31
        float _dx; // r30
        float _y; // r29
        float _x; // r28
        float n; // r1
        float n; // r29+0xD0
        float n; // r1
        float n; // r29+0xD0
        float sy; // r3
        float sx; // r2
        unsigned int draw_bg; // r23
        class RwSky2DVertex * vert; // r16
        class xFontInfo * font; // r16
        unsigned int i; // r2
        float dv; // r27
        float du; // r26
        float v; // r25
        float u; // r24
        float dy; // r23
        float dx; // r22
        float y; // r21
        float x; // r20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019AEE0 -> 0x0019B2CC
*/
// Range: 0x19AEE0 -> 0x19B2CC
void iFontDrawBackdrop(class xFontBox * box /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19AEE0 -> 0x19B2CC
        class RwSky2DVertex vert[4]; // r29+0x10
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019B2D0 -> 0x0019B3A4
*/
// Range: 0x19B2D0 -> 0x19B3A4
void iFontRestoreRenderState() {
    /* anonymous block */ {
        // Range: 0x19B2D0 -> 0x19B3A4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019B3B0 -> 0x0019B44C
*/
// Range: 0x19B3B0 -> 0x19B44C
void iFontSetCharRenderState(class xFontBox * box /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19B3B0 -> 0x19B44C
        class xFontInfo * font; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019B450 -> 0x0019B4A0
*/
// Range: 0x19B450 -> 0x19B4A0
void iFontSetBackdropRenderState() {
    /* anonymous block */ {
        // Range: 0x19B450 -> 0x19B4A0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\iFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019B4A0 -> 0x0019B4F4
*/
// Range: 0x19B4A0 -> 0x19B4F4
void iFontSaveRenderState() {
    /* anonymous block */ {
        // Range: 0x19B4A0 -> 0x19B4F4
    }
}


