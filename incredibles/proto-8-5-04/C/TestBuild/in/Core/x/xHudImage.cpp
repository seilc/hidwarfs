/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class basic_rect screen_bounds; // size: 0x10, address: 0x0
static class basic_rect default_adjust; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
// total size: 0x28
struct /* @anon0 */ {} xhud::image_widget::__vtable; // size: 0x28, address: 0x605410
unsigned int gActiveHeap; // size: 0x4, address: 0x608A5C
unsigned int FB_YRES; // size: 0x4, address: 0x6076C0
unsigned int FB_XRES; // size: 0x4, address: 0x6076BC
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x6B2890
// total size: 0x28
struct /* @anon1 */ {} xhud::widget::__vtable; // size: 0x28, address: 0x5FD0E0
// total size: 0x40
class RwSky2DVertex {
    // Members
public:
    class RwSky2DVertexAlignmentOverlay u; // offset 0x0, size 0x40
};
// total size: 0x10
class xBase {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class xLinkAsset * link; // offset 0x8, size 0x4
    void (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // offset 0xC, size 0x4
};
// total size: 0xB0
class image_widget : public widget {
    // Members
public:
    class RwRaster * m_pRaster; // offset 0x88, size 0x4
    class LayerInfo * m_pLayers; // offset 0x8C, size 0x4
    unsigned int m_uLayerCount; // offset 0x90, size 0x4
    unsigned int m_uRenderLayerCount; // offset 0x94, size 0x4
    class RwSky2DVertex * m_pVertices; // offset 0x98, size 0x4
    class RwSky2DVertex * m_paVertices; // offset 0x9C, size 0x4
    unsigned short * m_paIndices; // offset 0xA0, size 0x4
    unsigned short m_uVertexCount; // offset 0xA4, size 0x2
    unsigned short m_uIndexCount; // offset 0xA6, size 0x2
    float m_fRecipZ; // offset 0xA8, size 0x4
    unsigned short m_VertexMax; // offset 0xAC, size 0x2
    unsigned short m_IndexMax; // offset 0xAE, size 0x2
};
// total size: 0x20
class xLinkAsset {
    // Members
public:
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
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
// total size: 0x4C
class LayerInfo {
    // Members
public:
    enum RENDERTYPE eType; // offset 0x0, size 0x4
    unsigned int uFlags; // offset 0x4, size 0x4
    class RwTexCoords upperLeft; // offset 0x8, size 0x8
    class RwTexCoords lowerRight; // offset 0x10, size 0x8
    float fCurPercent; // offset 0x18, size 0x4
    float fMinPercent; // offset 0x1C, size 0x4
    float fMaxPercent; // offset 0x20, size 0x4
    float fClampTopPercent; // offset 0x24, size 0x4
    float fOffsetX; // offset 0x28, size 0x4
    float fOffsetY; // offset 0x2C, size 0x4
    float fScaleX; // offset 0x30, size 0x4
    float fScaleY; // offset 0x34, size 0x4
    float fAlpha; // offset 0x38, size 0x4
    float fStrobe; // offset 0x3C, size 0x4
    float fStrobeFreq; // offset 0x40, size 0x4
    float fStrobeHeight; // offset 0x44, size 0x4
    signed int nStrobeCount; // offset 0x48, size 0x4
};
// total size: 0x0
class motive_node {};
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
// total size: 0x88
class widget {
    // Members
public:
    // total size: 0x8
    class /* @class */ {
        // Members
    public:
        unsigned char visible; // offset 0x0, size 0x1
        unsigned char enabled; // offset 0x1, size 0x1
        unsigned char active; // offset 0x2, size 0x1
        float timer; // offset 0x4, size 0x4
    } flag; // offset 0x0, size 0x8
    class render_context rc; // offset 0x8, size 0x34
    class render_context start_rc; // offset 0x3C, size 0x34
    class asset * a; // offset 0x70, size 0x4
    enum /* @enum */ {
        ACT_NONE = 0,
        ACT_SHOW = 1,
        ACT_HIDE = 2,
        MAX_ACT = 3,
    } activity; // offset 0x74, size 0x4
    class motive_node * _motive_top; // offset 0x7C, size 0x4
    class motive_node * _motive_temp; // offset 0x80, size 0x4
    class motive_node * * _motive_temp_tail; // offset 0x84, size 0x4
};
// total size: 0x2C
class image_asset : public asset {
    // Members
public:
    unsigned int image; // offset 0x28, size 0x4
};
// total size: 0x8
class /* @class */ {
    // Members
public:
    unsigned char visible; // offset 0x0, size 0x1
    unsigned char enabled; // offset 0x1, size 0x1
    unsigned char active; // offset 0x2, size 0x1
    float timer; // offset 0x4, size 0x4
};
// total size: 0x28
class asset : public xDynAsset {
    // Members
public:
    class xVec3 loc; // offset 0x10, size 0xC
    class xVec3 size; // offset 0x1C, size 0xC
};
enum LAYER_FLAGS {
    BLEND = 1,
    ADDITIVE = 2,
    SET_DEST_ALPHA = 4,
    USE_DEST_ALPHA = 8,
    BLEND_MASK = 15,
};
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x34
class render_context {
    // Members
public:
    class xVec3 loc; // offset 0x0, size 0xC
    class xVec3 size; // offset 0xC, size 0xC
    class xVec3 rot; // offset 0x18, size 0xC
    float r; // offset 0x24, size 0x4
    float g; // offset 0x28, size 0x4
    float b; // offset 0x2C, size 0x4
    float a; // offset 0x30, size 0x4
};
// total size: 0xC
class xVec3 {
    // Members
public:
    union { // inferred
        class RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
enum RENDERTYPE {
    TOPLEFT = 0,
    BOTTOMLEFT = 1,
    BOTTOMRIGHT = 2,
    TOPRIGHT = 3,
    STROBE_EFFECT = 4,
    OFFSET_CENTERPT = 5,
    ROTATE_CCW = 6,
    OFFSET_ROTATE_CCW = 7,
    VARIABLE_TOP = 8,
    VARIABLE_RIGHT = 9,
    COUNTER_CLOCKWISE = 10,
    HALF_CCW = 11,
    RANDOM_V = 12,
    SPECIAL_STROBE = 13,
};
// total size: 0x8
class RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x10
class basic_rect {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
enum /* @enum */ {
    ACT_NONE = 0,
    ACT_SHOW = 1,
    ACT_HIDE = 2,
    MAX_ACT = 3,
};
// total size: 0x28
struct /* @anon0 */ {};
// total size: 0x58
class RwTexture {
    // Members
public:
    class RwRaster * raster; // offset 0x0, size 0x4
    class RwTexDictionary * dict; // offset 0x4, size 0x4
    class RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    unsigned int filterAddressing; // offset 0x50, size 0x4
    signed int refCount; // offset 0x54, size 0x4
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
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
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x28
struct /* @anon1 */ {};
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
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
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
class RwObject {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043D7C0 -> 0x0043D834
*/
// Range: 0x43D7C0 -> 0x43D834
// this: r2
float image_widget::get_layer_strobe(unsigned int whichLayer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43D7C0 -> 0x43D834
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043D840 -> 0x0043D8AC
*/
// Range: 0x43D840 -> 0x43D8AC
// this: r2
void image_widget::set_layer_strobe(unsigned int whichLayer /* r2 */, float fStrobe /* r29 */) {
    /* anonymous block */ {
        // Range: 0x43D840 -> 0x43D8AC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043D8B0 -> 0x0043D938
*/
// Range: 0x43D8B0 -> 0x43D938
// this: r2
unsigned char image_widget::set_layer_strobe_prop(unsigned int whichLayer /* r2 */, float fStrobeFreq /* r29 */, float fStrobeHeight /* r29 */, signed int nStrobeCount /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43D8B0 -> 0x43D938
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043D940 -> 0x0043DC20
*/
// Range: 0x43D940 -> 0x43DC20
// this: r2
void image_widget::set_buffer_to_layer(enum RENDERTYPE eType /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43D940 -> 0x43DC20
        unsigned short * pIndex; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043DC20 -> 0x0043DC80
*/
// Range: 0x43DC20 -> 0x43DC80
// this: r2
unsigned char image_widget::set_layer_type(unsigned int whichLayer /* r2 */, enum RENDERTYPE eType /* r2 */, enum LAYER_FLAGS uBlendFlags /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43DC20 -> 0x43DC80
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043DC80 -> 0x0043DCEC
*/
// Range: 0x43DC80 -> 0x43DCEC
// this: r2
unsigned char image_widget::set_layer_uvs(unsigned int whichLayer /* r2 */, class RwTexCoords & upperLeft /* r2 */, class RwTexCoords & lowerRight /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43DC80 -> 0x43DCEC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043DCF0 -> 0x0043DD34
*/
// Range: 0x43DCF0 -> 0x43DD34
// this: r2
float image_widget::get_layer_max(unsigned int whichLayer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43DCF0 -> 0x43DD34
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043DD40 -> 0x0043DD84
*/
// Range: 0x43DD40 -> 0x43DD84
// this: r2
float image_widget::get_layer_alpha(unsigned int whichLayer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43DD40 -> 0x43DD84
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043DD90 -> 0x0043DDD8
*/
// Range: 0x43DD90 -> 0x43DDD8
// this: r2
unsigned char image_widget::set_layer_alpha(unsigned int whichLayer /* r2 */, float fAlpha /* r29 */) {
    /* anonymous block */ {
        // Range: 0x43DD90 -> 0x43DDD8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043DDE0 -> 0x0043DE3C
*/
// Range: 0x43DDE0 -> 0x43DE3C
// this: r2
unsigned char image_widget::get_layer_offset(unsigned int whichLayer /* r2 */, float & fOffsetX /* r2 */, float & fOffsetY /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43DDE0 -> 0x43DE3C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043DE40 -> 0x0043DE94
*/
// Range: 0x43DE40 -> 0x43DE94
// this: r2
unsigned char image_widget::set_layer_offset(unsigned int whichLayer /* r2 */, float fOffsetX /* r29 */, float fOffsetY /* r29 */) {
    /* anonymous block */ {
        // Range: 0x43DE40 -> 0x43DE94
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043DEA0 -> 0x0043DF30
*/
// Range: 0x43DEA0 -> 0x43DF30
// this: r2
unsigned char image_widget::set_layer_scale(unsigned int whichLayer /* r2 */, float fScaleX /* r29 */, float fScaleY /* r29 */) {
    /* anonymous block */ {
        // Range: 0x43DEA0 -> 0x43DF30
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043DF30 -> 0x0043DF74
*/
// Range: 0x43DF30 -> 0x43DF74
// this: r2
float image_widget::get_layer_clamp_top(unsigned int whichLayer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43DF30 -> 0x43DF74
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043DF80 -> 0x0043E024
*/
// Range: 0x43DF80 -> 0x43E024
// this: r2
unsigned char image_widget::set_layer_clamp_top(unsigned int whichLayer /* r2 */, float fPercent /* r29 */) {
    /* anonymous block */ {
        // Range: 0x43DF80 -> 0x43E024
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043E030 -> 0x0043E074
*/
// Range: 0x43E030 -> 0x43E074
// this: r2
float image_widget::get_layer_value(unsigned int whichLayer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43E030 -> 0x43E074
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043E080 -> 0x0043E158
*/
// Range: 0x43E080 -> 0x43E158
// this: r2
unsigned char image_widget::set_layer_value(unsigned int whichLayer /* r2 */, float fVal /* r29 */) {
    /* anonymous block */ {
        // Range: 0x43E080 -> 0x43E158
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043E160 -> 0x0043E264
*/
// Range: 0x43E160 -> 0x43E264
// this: r2
unsigned char image_widget::set_layer_minmax(unsigned int whichLayer /* r2 */, float fMinPercent /* r29 */, float fMaxPercent /* r29 */) {
    /* anonymous block */ {
        // Range: 0x43E160 -> 0x43E264
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043E270 -> 0x0043E2A8
*/
// Range: 0x43E270 -> 0x43E2A8
// this: r2
unsigned char image_widget::set_layers_to_render(unsigned short uLayers /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43E270 -> 0x43E2A8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043E2B0 -> 0x0043E3A0
*/
// Range: 0x43E2B0 -> 0x43E3A0
// this: r16
unsigned char image_widget::init_layers(unsigned short uLayers /* r18 */, unsigned short nVertsMax /* r19 */, unsigned short nIndicesMax /* r17 */) {
    /* anonymous block */ {
        // Range: 0x43E2B0 -> 0x43E3A0
        unsigned int i; // r18
        class LayerInfo * pLayer; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043E3A0 -> 0x0043E738
*/
// Range: 0x43E3A0 -> 0x43E738
// this: r17
unsigned char image_widget::render_random_v(unsigned int uLayer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43E3A0 -> 0x43E738
        float fTopX; // r24
        float fTopY; // r23
        float fWidth; // r27
        float fDeltaV; // r22
        float fTopU; // r29+0x50
        float fBotU; // r29+0x50
        float fBotV; // r29+0x50
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043E740 -> 0x0043EAA4
*/
// Range: 0x43E740 -> 0x43EAA4
// this: r2
unsigned char image_widget::render_special_strobe(unsigned int uLayer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43E740 -> 0x43EAA4
        float fBottomY; // r2
        float fTopY; // r12
        float v0; // r11
        float v1; // r10
        float u0; // r9
        float u1; // r8
        float fTopX; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043EAB0 -> 0x0043EE68
*/
// Range: 0x43EAB0 -> 0x43EE68
// this: r2
unsigned char image_widget::render_strobe_effect(unsigned int uLayer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43EAB0 -> 0x43EE68
        float fBottomY; // r7
        float fTopY; // r29
        float fRealTopY; // r29
        float vRange; // r29
        float v0; // r12
        float v1; // r11
        float u0; // r10
        float u1; // r9
        float fTopX; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043EE70 -> 0x0043F49C
*/
// Range: 0x43EE70 -> 0x43F49C
// this: r16
unsigned char image_widget::render_offset_rotate_ccw(unsigned int uLayer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43EE70 -> 0x43F49C
        float fRadians; // r20
        float fTopU; // r26
        float fTopV; // r25
        float fBotU; // r24
        float fBotV; // r23
        float fTopX; // r7
        float fTopY; // r6
        float fBotX; // r5
        float fBotY; // r2
        float fCenterX; // r22
        float fCenterY; // r21
        class xVec2 toTopLeft; // r29+0xA8
        class xVec2 toBotLeft; // r29+0xA0
        class xVec2 toTopRight; // r29+0x98
        class xVec2 toBotRight; // r29+0x90
        float fTemp10; // r29+0xB0
        float fTemp20; // r29+0xB0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043F4A0 -> 0x0043FA68
*/
// Range: 0x43F4A0 -> 0x43FA68
// this: r16
unsigned char image_widget::render_rotate_ccw(unsigned int uLayer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43F4A0 -> 0x43FA68
        float fRadians; // r20
        float fTopU; // r26
        float fTopV; // r25
        float fBotU; // r24
        float fBotV; // r23
        float fTopX; // r9
        float fTopY; // r7
        float fCenterX; // r22
        float fCenterY; // r21
        float fBotX; // r5
        float fBotY; // r2
        class xVec2 toTopLeft; // r29+0xA8
        class xVec2 toBotLeft; // r29+0xA0
        class xVec2 toTopRight; // r29+0x98
        class xVec2 toBotRight; // r29+0x90
        float fTemp10; // r29+0xB0
        float fTemp20; // r29+0xB0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043FA70 -> 0x00440644
*/
// Range: 0x43FA70 -> 0x440644
// this: r2
unsigned char image_widget::render_half_ccw(unsigned int uLayer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43FA70 -> 0x440644
        float fPercent; // r29+0xB0
        float fClampTopY; // r2
        float fClampTopV; // r1
        float fCenterX; // r15
        float fCenterY; // r29+0xB0
        float fCenterYPlusfHalfHeight; // r14
        float fCenterYMinusfHalfHeight; // r3
        float u0; // r13
        float u1; // r12
        float fCenterU; // r9
        float fCenterV; // r5
        float fRangeToFour; // r29+0xB0
        signed int nWholeTris; // r15
        signed int nWholeTrisPlus1; // r2
        signed int nWholeTrisPlus2; // r14
        float fInterpAmount; // r3
        unsigned int vertexIndex0; // r2
        unsigned int vertexIndex1; // r2
        unsigned int vertexIndex2; // r2
        float xCoord[2]; // r29+0xA8
        float yCoord[2]; // r29+0xA0
        float uCoord[2]; // r29+0x98
        float vCoord[2]; // r29+0x90
        unsigned int uHalfOffset; // r13
        unsigned int VertIndex; // r12
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00440650 -> 0x00441118
*/
// Range: 0x440650 -> 0x441118
// this: r2
unsigned char image_widget::render_counter_clockwise(unsigned int uLayer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x440650 -> 0x441118
        float u0; // r4
        float v0; // r3
        float u1; // r2
        float v1; // r1
        float fCenterX; // r13
        float fCenterY; // r10
        float fCenterYPlusfHalfHeight; // r9
        float fCenterYMinusfHalfHeight; // r8
        float fCenterU; // r7
        float fCenterV; // r6
        float fRangeToEight; // r29
        signed int nWholeTris; // r5
        signed int nWholeTrisPlus1; // r2
        signed int nWholeTrisPlus2; // r2
        float fInterpAmount; // r29
        float xCoord; // r9
        float yCoord; // r5
        float uCoord; // r3
        float vCoord; // r29
        signed int vertexIndex0; // r2
        signed int vertexIndex1; // r2
        signed int vertexIndex2; // r2
        signed int VertIndex; // r5
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00441120 -> 0x00441430
*/
// Range: 0x441120 -> 0x441430
// this: r2
unsigned char image_widget::render_variable_right(unsigned int uLayer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x441120 -> 0x441430
        float fPercent; // r13
        float fTopX; // r12
        float fTopY; // r29
        float fTopV; // r29
        float fBotU; // r29
        float fBotV; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00441430 -> 0x00441750
*/
// Range: 0x441430 -> 0x441750
// this: r2
unsigned char image_widget::render_variable_top(unsigned int uLayer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x441430 -> 0x441750
        float fPercent; // r5
        float fHeight; // r4
        float fTopY; // r12
        float fTopV; // r11
        float fTopX; // r29
        float fTopU; // r29
        float fBotU; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00441750 -> 0x00441B60
*/
// Range: 0x441750 -> 0x441B60
// this: r2
unsigned char image_widget::render_one_to_one(unsigned int uLayer /* r2 */, enum RENDERTYPE eType /* r2 */) {
    /* anonymous block */ {
        // Range: 0x441750 -> 0x441B60
        float fQuadX; // r7
        float fQuadY; // r6
        float fQuadWidth; // r5
        float fQuadHeight; // r4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00441B60 -> 0x004420AC
*/
// Range: 0x441B60 -> 0x4420AC
// this: r20
void image_widget::render() {
    /* anonymous block */ {
        // Range: 0x441B60 -> 0x4420AC
        unsigned int i; // r5
        enum LAYER_FLAGS eLayerMode; // r22
        unsigned char bFlushTempBuffer; // r21
        unsigned int uLayer; // r19
        unsigned int uNewMode; // r18
        unsigned char bRendered; // r5
        signed char @5439; // @ 0x0060950C
        float fNearZ; // @ 0x00609508
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004420B0 -> 0x004421EC
*/
// Range: 0x4420B0 -> 0x4421EC
// this: r16
void image_widget::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x4420B0 -> 0x4421EC
        unsigned int uLayer; // r7
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004421F0 -> 0x00442268
*/
// Range: 0x4421F0 -> 0x442268
// this: r17
unsigned char image_widget::is(unsigned int id /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4421F0 -> 0x442268
        signed char @5395; // @ 0x00609504
        unsigned int myid; // @ 0x00609500
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00442270 -> 0x004422B0
*/
// Range: 0x442270 -> 0x4422B0
unsigned int type() {
    /* anonymous block */ {
        // Range: 0x442270 -> 0x4422B0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004422B0 -> 0x004422CC
*/
// Range: 0x4422B0 -> 0x4422CC
// this: r2
void image_widget::destroy() {
    /* anonymous block */ {
        // Range: 0x4422B0 -> 0x4422CC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004422D0 -> 0x00442360
*/
// Range: 0x4422D0 -> 0x442360
void load(class xBase & data /* r16 */, class xDynAsset & asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4422D0 -> 0x442360
    }
}


