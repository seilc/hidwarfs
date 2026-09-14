/*
    Compile unit: C:\TestBuild\in\GAME\zHudFamilyMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class basic_rect screen_bounds; // size: 0x10, address: 0x0
static class basic_rect default_adjust; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
// total size: 0x28
struct /* @anon0 */ {} zHud::FamilyMeter::__vtable; // size: 0x28, address: 0x607450
// total size: 0x24
struct /* @anon1 */ {} zHud::hud_element::__vtable; // size: 0x24, address: 0x0
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
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
// total size: 0x10
class basic_rect {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
// total size: 0x0
class motive_node {};
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
// total size: 0x28
class FamilyMeter : public hud_element {
    // Members
public:
    class image_widget * m_pHealthImage; // offset 0x18, size 0x4
    class image_widget * m_pHeadImage; // offset 0x1C, size 0x4
    float m_fHealthCurrent; // offset 0x20, size 0x4
    enum eFamilyMeterHeadLayer m_Head; // offset 0x24, size 0x4
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
// total size: 0x8
class /* @class */ {
    // Members
public:
    unsigned char visible; // offset 0x0, size 0x1
    unsigned char enabled; // offset 0x1, size 0x1
    unsigned char active; // offset 0x2, size 0x1
    float timer; // offset 0x4, size 0x4
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
// total size: 0x28
class asset : public xDynAsset {
    // Members
public:
    class xVec3 loc; // offset 0x10, size 0xC
    class xVec3 size; // offset 0x1C, size 0xC
};
enum /* @enum */ {
    ACT_NONE = 0,
    ACT_SHOW = 1,
    ACT_HIDE = 2,
    MAX_ACT = 3,
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
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x28
struct /* @anon0 */ {};
enum eFamilyMeterHeadLayer {
    HEAD_NONE = -1,
    HEAD_FROZONE = 0,
    HEAD_MRS_I = 1,
    HEAD_DASH_VIOLET = 2,
    HEAD_NUM_LAYERS = 3,
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
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x40
class RwSky2DVertex {
    // Members
public:
    class RwSky2DVertexAlignmentOverlay u; // offset 0x0, size 0x40
};
// total size: 0x24
struct /* @anon1 */ {};
// total size: 0x40
class RwSky2DVertexAlignmentOverlay {
    // Members
public:
    union { // inferred
        class RwSky2DVertexFields els; // offset 0x0, size 0x40
        __int128 qWords[4]; // offset 0x0, size 0x40
    };
};
// total size: 0x8
class RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x18
class hud_element : public xBase {
    // Members
public:
    class hud_element * _next; // offset 0x10, size 0x4
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
// total size: 0x10
class RwRGBAReal {
    // Members
public:
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\GAME\zHudFamilyMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00499670 -> 0x00499688
*/
// Range: 0x499670 -> 0x499688
// this: r2
void FamilyMeter::set_health(float HealthPercent /* r29 */) {
    /* anonymous block */ {
        // Range: 0x499670 -> 0x499688
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zHudFamilyMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00499690 -> 0x004997C8
*/
// Range: 0x499690 -> 0x4997C8
// this: r16
void FamilyMeter::set_head(enum eFamilyMeterHeadLayer StageCount /* r2 */) {
    /* anonymous block */ {
        // Range: 0x499690 -> 0x4997C8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zHudFamilyMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004997D0 -> 0x00499834
*/
// Range: 0x4997D0 -> 0x499834
// this: r2
void FamilyMeter::enable(unsigned char bEnable /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4997D0 -> 0x499834
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zHudFamilyMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00499840 -> 0x00499888
*/
// Range: 0x499840 -> 0x499888
// this: r16
void FamilyMeter::hide() {
    /* anonymous block */ {
        // Range: 0x499840 -> 0x499888
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zHudFamilyMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00499890 -> 0x004998D8
*/
// Range: 0x499890 -> 0x4998D8
// this: r16
void FamilyMeter::show() {
    /* anonymous block */ {
        // Range: 0x499890 -> 0x4998D8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zHudFamilyMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004998E0 -> 0x004998E8
*/
// Range: 0x4998E0 -> 0x4998E8
void update() {
    /* anonymous block */ {
        // Range: 0x4998E0 -> 0x4998E8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zHudFamilyMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004998F0 -> 0x004998F8
*/
// Range: 0x4998F0 -> 0x4998F8
void destroy() {
    /* anonymous block */ {
        // Range: 0x4998F0 -> 0x4998F8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zHudFamilyMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00499900 -> 0x00499C7C
*/
// Range: 0x499900 -> 0x499C7C
// this: r18
void FamilyMeter::setup() {
    /* anonymous block */ {
        // Range: 0x499900 -> 0x499C7C
        unsigned int HealthImageID; // r16
        unsigned int HeadImageID; // r16
        class RwTexCoords upperleft; // r29+0x48
        class RwTexCoords lowerright; // r29+0x40
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zHudFamilyMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00499C80 -> 0x00499CB0
*/
// Range: 0x499C80 -> 0x499CB0
// this: r16
void FamilyMeter::reset() {
    /* anonymous block */ {
        // Range: 0x499C80 -> 0x499CB0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zHudFamilyMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00499CB0 -> 0x00499CDC
*/
// Range: 0x499CB0 -> 0x499CDC
// this: r2
FamilyMeter::FamilyMeter() {
    /* anonymous block */ {
        // Range: 0x499CB0 -> 0x499CDC
    }
}


