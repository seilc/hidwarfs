/*
    Compile unit: E:\SD2\Game\flat\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class xFontInfo gFontList[4]; // size: 0x6A0, address: 0x36D030
class xFontBox gBoxList[4]; // size: 0x130, address: 0x36D6D0
unsigned int gDBfont; // size: 0x4, address: 0x358A6C
class xFontGlobals_t gFontGlobals; // size: 0x10, address: 0x2B3CE0
static char * blankText; // size: 0x4, address: 0x357F28
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

/*
    Compile unit: E:\SD2\Game\flat\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198CB0 -> 0x00198CEC
*/
// Range: 0x198CB0 -> 0x198CEC
void xFontBoxSetBackdrop(class xFontBox * box /* r2 */, class iColor_tag color /* r29+0xC */) {
    /* anonymous block */ {
        // Range: 0x198CB0 -> 0x198CEC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198CF0 -> 0x00198D30
*/
// Range: 0x198CF0 -> 0x198D30
void xFontBoxSetJustification(class xFontBox * box /* r2 */, signed int mode /* r2 */) {
    /* anonymous block */ {
        // Range: 0x198CF0 -> 0x198D30
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198D30 -> 0x00198D80
*/
// Range: 0x198D30 -> 0x198D80
void xFontBoxSetInset(class xFontBox * box /* r2 */, float inset_left /* r29 */, float inset_right /* r29 */, float inset_top /* r29 */, float inset_bottom /* r29 */) {
    /* anonymous block */ {
        // Range: 0x198D30 -> 0x198D80
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198D80 -> 0x00198DC4
*/
// Range: 0x198D80 -> 0x198DC4
void xFontBoxSetDrawSpacing(class xFontBox * box /* r2 */, float x_spacing /* r29 */, float y_spacing /* r29 */) {
    /* anonymous block */ {
        // Range: 0x198D80 -> 0x198DC4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198DD0 -> 0x00198E14
*/
// Range: 0x198DD0 -> 0x198E14
void xFontBoxSetColor(class xFontBox * box /* r2 */, class iColor_tag color /* r29+0xC */) {
    /* anonymous block */ {
        // Range: 0x198DD0 -> 0x198E14
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198E20 -> 0x00198E94
*/
// Range: 0x198E20 -> 0x198E94
void xFontBoxSetFont(class xFontBox * box /* r2 */, unsigned int id /* r2 */) {
    /* anonymous block */ {
        // Range: 0x198E20 -> 0x198E94
        class xFontInfo * font; // r6
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198EA0 -> 0x00198EB8
*/
// Range: 0x198EA0 -> 0x198EB8
void xFontBoxSetText(class xFontBox * box /* r2 */, char * text /* r2 */) {
    /* anonymous block */ {
        // Range: 0x198EA0 -> 0x198EB8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198EC0 -> 0x00198EC8
*/
// Range: 0x198EC0 -> 0x198EC8
void xFontBoxDestroy(class xFontBox * box /* r2 */) {
    /* anonymous block */ {
        // Range: 0x198EC0 -> 0x198EC8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00198ED0 -> 0x0019907C
*/
// Range: 0x198ED0 -> 0x19907C
char * xFontBoxRender(class xFontBox * box /* r17 */) {
    /* anonymous block */ {
        // Range: 0x198ED0 -> 0x19907C
        float maxy; // r22
        float maxx; // r21
        float miny; // r2
        float minx; // r20
        char * ret; // r16
        char * t; // r2
        char * s; // r18
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00199080 -> 0x001995FC
*/
// Range: 0x199080 -> 0x1995FC
static char * JustifyLine(class xFontBox * box /* r18 */, char * text /* r17 */, float maxwidth /* r24 */, float maxheight /* r23 */) {
    /* anonymous block */ {
        // Range: 0x199080 -> 0x1995FC
        float space; // r1
        float space; // r1
        class xFontInfo * font; // r21
        char * end; // r20
        char * t; // r2
        char * s; // r19
        float testheight; // r29+0x9C
        float testwidth; // r29+0x98
        float whitespace_width; // r21
        float height; // r29+0xA0
        float width; // r20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00199600 -> 0x001999D8
*/
// Range: 0x199600 -> 0x1999D8
static char * ProcessWord(class xFontBox * box /* r21 */, char * text /* r2 */, float * width /* r20 */, float * height /* r22 */, float maxw /* r21 */) {
    /* anonymous block */ {
        // Range: 0x199600 -> 0x1999D8
        char c; // r2
        float dx; // r20
        class iColor_tag color; // r29+0xB4
        class xFontInfo * font; // r17
        unsigned int fontID; // r2
        char * s; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001999E0 -> 0x00199B5C
*/
// Range: 0x1999E0 -> 0x199B5C
class xFontBox * xFontBoxCreate(float x /* r29+0x10 */, float y /* r29+0x10 */, float w /* r29+0x10 */, float h /* r29+0x10 */, unsigned int id /* r2 */, class iColor_tag color /* r29+0xC */) {
    /* anonymous block */ {
        // Range: 0x1999E0 -> 0x199B5C
        class xFontInfo * font; // r3
        class xFontBox * box; // r2
        unsigned int i; // r8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00199B60 -> 0x00199BA4
*/
// Range: 0x199B60 -> 0x199BA4
void xFontBoxSetDrawSize(class xFontBox * box /* r2 */, float draw_width /* r29 */, float draw_height /* r29 */) {
    /* anonymous block */ {
        // Range: 0x199B60 -> 0x199BA4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00199BB0 -> 0x00199C0C
*/
// Range: 0x199BB0 -> 0x199C0C
void xFontRender() {
    /* anonymous block */ {
        // Range: 0x199BB0 -> 0x199C0C
        class xFontBox * box; // r17
        unsigned int i; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00199C10 -> 0x00199CE8
*/
// Range: 0x199C10 -> 0x199CE8
void xFontInit() {
    /* anonymous block */ {
        // Range: 0x199C10 -> 0x199CE8
        float pdone; // r29+0x10
    }
}


