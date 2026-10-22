/*
    Compile unit: C:\TestBuild\in\GAME\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class basic_rect screen_bounds; // size: 0x10, address: 0x0
static class basic_rect default_adjust; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
static class ztextbox * head_active; // size: 0x4, address: 0x6120B0
static void (* render_bk_table[4])(class ztextbox &); // size: 0x10, address: 0x510FC0
static class tag_type new_tags[1]; // size: 0x14, address: 0x510FD0
static unsigned int new_tags_size; // size: 0x4, address: 0x610C54
void cb_dispatch(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x1E77B0
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x6A9D20
unsigned int FB_XRES; // size: 0x4, address: 0x610ABC
unsigned int FB_YRES; // size: 0x4, address: 0x610AC0
// total size: 0xDC
class ztextbox : public xBase {
    // Members
public:
    // total size: 0x1
    class /* @class */ {
        // Members
    public:
        unsigned char active : 1; // offset 0x0, size 0x1
        unsigned char dirty : 1; // offset 0x0, size 0x1
        unsigned char show_backdrop : 1; // offset 0x0, size 0x1
    } flag; // offset 0x10, size 0x1
    class asset_type * asset; // offset 0x14, size 0x4
    class xtextbox tb; // offset 0x18, size 0x74
    char * segments[16]; // offset 0x8C, size 0x40
    unsigned int segments_size; // offset 0xCC, size 0x4
    class ztextbox * next; // offset 0xD0, size 0x4
    class ztextbox * prev; // offset 0xD4, size 0x4
    class RwRaster * bgtex; // offset 0xD8, size 0x4
};
// total size: 0x4
class color_type {
    // Members
public:
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
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
// total size: 0x1
class /* @class */ {
    // Members
public:
    unsigned char active : 1; // offset 0x0, size 0x1
    unsigned char dirty : 1; // offset 0x0, size 0x1
    unsigned char show_backdrop : 1; // offset 0x0, size 0x1
};
// total size: 0x20
class split_tag {
    // Members
public:
    class substr tag; // offset 0x0, size 0x8
    class substr name; // offset 0x8, size 0x8
    class substr action; // offset 0x10, size 0x8
    class substr value; // offset 0x18, size 0x8
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
// total size: 0x38
class jot {
    // Members
public:
    class substr s; // offset 0x0, size 0x8
    // total size: 0x2
    class /* @class */ {
        // Members
    public:
        unsigned char invisible : 1; // offset 0x0, size 0x1
        unsigned char ethereal : 1; // offset 0x0, size 0x1
        unsigned char merge : 1; // offset 0x0, size 0x1
        unsigned char word_break : 1; // offset 0x0, size 0x1
        unsigned char word_end : 1; // offset 0x0, size 0x1
        unsigned char line_break : 1; // offset 0x0, size 0x1
        unsigned char stop : 1; // offset 0x0, size 0x1
        unsigned char tab : 1; // offset 0x0, size 0x1
        unsigned char insert : 1; // offset 0x1, size 0x1
        unsigned char dynamic : 1; // offset 0x1, size 0x1
        unsigned char page_break : 1; // offset 0x1, size 0x1
        unsigned char stateful : 1; // offset 0x1, size 0x1
        unsigned char japanese_break : 1; // offset 0x1, size 0x1
        unsigned short dummy : 3; // offset 0x0, size 0x2
    } flag; // offset 0x8, size 0x2
    unsigned short context_size; // offset 0xA, size 0x2
    void * context; // offset 0xC, size 0x4
    class basic_rect bounds; // offset 0x10, size 0x10
    class basic_rect render_bounds; // offset 0x20, size 0x10
    class callback * cb; // offset 0x30, size 0x4
    class tag_type * tag; // offset 0x34, size 0x4
};
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
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x74
class xtextbox {
    // Members
public:
    class xfont font; // offset 0x0, size 0x30
    class basic_rect bounds; // offset 0x30, size 0x10
    unsigned int flags; // offset 0x40, size 0x4
    float line_space; // offset 0x44, size 0x4
    float tab_stop; // offset 0x48, size 0x4
    float left_indent; // offset 0x4C, size 0x4
    float right_indent; // offset 0x50, size 0x4
    class callback * cb; // offset 0x54, size 0x4
    void * context; // offset 0x58, size 0x4
    char * * texts; // offset 0x5C, size 0x4
    unsigned int * text_sizes; // offset 0x60, size 0x4
    unsigned int texts_size; // offset 0x64, size 0x4
    class substr text; // offset 0x68, size 0x8
    unsigned int text_hash; // offset 0x70, size 0x4
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
class callback {
    // Members
public:
    void (* render)(class jot &, class xtextbox &, float, float); // offset 0x0, size 0x4
    void (* layout_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x4, size 0x4
    void (* render_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x8, size 0x4
};
// total size: 0x4
class xColor_tag {
    // Members
public:
    union { // inferred
        struct { // inferred
            unsigned char r; // offset 0x0, size 0x1
            unsigned char g; // offset 0x1, size 0x1
            unsigned char b; // offset 0x2, size 0x1
            unsigned char a; // offset 0x3, size 0x1
        };
        class RwRGBA rgba; // offset 0x0, size 0x4
    };
};
// total size: 0x14
class tag_type {
    // Members
public:
    class substr name; // offset 0x0, size 0x8
    void (* parse_tag)(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // offset 0x8, size 0x4
    void (* reset_tag)(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // offset 0xC, size 0x4
    void * context; // offset 0x10, size 0x4
};
// total size: 0x8
class /* @class */ {
    // Members
public:
    float width; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
};
// total size: 0x84
class asset_type : public xDynAsset {
    // Members
public:
    unsigned int text; // offset 0x10, size 0x4
    class basic_rect bounds; // offset 0x14, size 0x10
    unsigned int font; // offset 0x24, size 0x4
    // total size: 0x8
    class /* @class */ {
        // Members
    public:
        float width; // offset 0x0, size 0x4
        float height; // offset 0x4, size 0x4
    } size; // offset 0x28, size 0x8
    // total size: 0x8
    class /* @class */ {
        // Members
    public:
        float x; // offset 0x0, size 0x4
        float y; // offset 0x4, size 0x4
    } space; // offset 0x30, size 0x8
    class color_type color; // offset 0x38, size 0x4
    // total size: 0x10
    class /* @class */ {
        // Members
    public:
        float left; // offset 0x0, size 0x4
        float top; // offset 0x4, size 0x4
        float right; // offset 0x8, size 0x4
        float bottom; // offset 0xC, size 0x4
    } inset; // offset 0x3C, size 0x10
    enum /* @enum */ {
        XJ_LEFT = 0,
        XJ_CENTER = 1,
        XJ_RIGHT = 2,
    } xjustify; // offset 0x4C, size 0x4
    enum /* @enum */ {
        YJ_TOP = 0,
        YJ_CENTER = 1,
        YJ_BOTTOM = 2,
    } yjustify; // offset 0x50, size 0x4
    enum /* @enum */ {
        EX_UP = 0,
        EX_CENTER = 1,
        EX_DOWN = 2,
        MAX_EX = 3,
    } expand; // offset 0x54, size 0x4
    float max_height; // offset 0x58, size 0x4
    // total size: 0x1C
    class /* @class */ {
        // Members
    public:
        unsigned int type; // offset 0x0, size 0x4
        class color_type color; // offset 0x4, size 0x4
        unsigned int texture; // offset 0x8, size 0x4
        float borderU; // offset 0xC, size 0x4
        float borderV; // offset 0x10, size 0x4
        float borderWidth; // offset 0x14, size 0x4
        float borderHeight; // offset 0x18, size 0x4
    } backdrop; // offset 0x5C, size 0x1C
    class color_type shadowColor; // offset 0x78, size 0x4
    float shadowOffsetX; // offset 0x7C, size 0x4
    float shadowOffsetY; // offset 0x80, size 0x4
};
// total size: 0x8
class /* @class */ {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x8
class substr {
    // Members
public:
    char * text; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
// total size: 0x30
class xfont {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    float width; // offset 0x4, size 0x4
    float height; // offset 0x8, size 0x4
    float space; // offset 0xC, size 0x4
    class xColor_tag color; // offset 0x10, size 0x4
    class xColor_tag shadowColor; // offset 0x14, size 0x4
    float shadowOffsetX; // offset 0x18, size 0x4
    float shadowOffsetY; // offset 0x1C, size 0x4
    class basic_rect clip; // offset 0x20, size 0x10
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
// total size: 0x10
class /* @class */ {
    // Members
public:
    float left; // offset 0x0, size 0x4
    float top; // offset 0x4, size 0x4
    float right; // offset 0x8, size 0x4
    float bottom; // offset 0xC, size 0x4
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
enum /* @enum */ {
    XJ_LEFT = 0,
    XJ_CENTER = 1,
    XJ_RIGHT = 2,
};
// total size: 0x20
class /* @class */ {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
    float lu; // offset 0x10, size 0x4
    float lv; // offset 0x14, size 0x4
    float hu; // offset 0x18, size 0x4
    float hv; // offset 0x1C, size 0x4
};
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
enum /* @enum */ {
    YJ_TOP = 0,
    YJ_CENTER = 1,
    YJ_BOTTOM = 2,
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
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
// total size: 0x40
class RwSky2DVertex {
    // Members
public:
    class RwSky2DVertexAlignmentOverlay u; // offset 0x0, size 0x40
};
enum /* @enum */ {
    EX_UP = 0,
    EX_CENTER = 1,
    EX_DOWN = 2,
    MAX_EX = 3,
};
// total size: 0x2
class /* @class */ {
    // Members
public:
    unsigned char invisible : 1; // offset 0x0, size 0x1
    unsigned char ethereal : 1; // offset 0x0, size 0x1
    unsigned char merge : 1; // offset 0x0, size 0x1
    unsigned char word_break : 1; // offset 0x0, size 0x1
    unsigned char word_end : 1; // offset 0x0, size 0x1
    unsigned char line_break : 1; // offset 0x0, size 0x1
    unsigned char stop : 1; // offset 0x0, size 0x1
    unsigned char tab : 1; // offset 0x0, size 0x1
    unsigned char insert : 1; // offset 0x1, size 0x1
    unsigned char dynamic : 1; // offset 0x1, size 0x1
    unsigned char page_break : 1; // offset 0x1, size 0x1
    unsigned char stateful : 1; // offset 0x1, size 0x1
    unsigned char japanese_break : 1; // offset 0x1, size 0x1
    unsigned short dummy : 3; // offset 0x0, size 0x2
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
// total size: 0x1C
class /* @class */ {
    // Members
public:
    unsigned int type; // offset 0x0, size 0x4
    class color_type color; // offset 0x4, size 0x4
    unsigned int texture; // offset 0x8, size 0x4
    float borderU; // offset 0xC, size 0x4
    float borderV; // offset 0x10, size 0x4
    float borderWidth; // offset 0x14, size 0x4
    float borderHeight; // offset 0x18, size 0x4
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
    Compile unit: C:\TestBuild\in\GAME\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E7120 -> 0x001E7200
*/
// Range: 0x1E7120 -> 0x1E7200
void render_all() {
    /* anonymous block */ {
        // Range: 0x1E7120 -> 0x1E7200
        class ztextbox * it; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E7200 -> 0x001E7230
*/
// Range: 0x1E7200 -> 0x1E7230
void update_all() {
    /* anonymous block */ {
        // Range: 0x1E7200 -> 0x1E7230
        class ztextbox * it; // r3
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E7230 -> 0x001E7238
*/
// Range: 0x1E7230 -> 0x1E7238
void load(class xBase & data /* r2 */, class xDynAsset & asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1E7230 -> 0x1E7238
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E7240 -> 0x001E7268
*/
// Range: 0x1E7240 -> 0x1E7268
void init() {
    /* anonymous block */ {
        // Range: 0x1E7240 -> 0x1E7268
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E7270 -> 0x001E7328
*/
// Range: 0x1E7270 -> 0x1E7328
// this: r2
void ztextbox::get_text(char * buffer /* r21 */, unsigned int buffer_size /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1E7270 -> 0x1E7328
        char * * it; // r19
        char * * end; // r2
        char * s; // r2
        unsigned int len; // r18
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E7330 -> 0x001E738C
*/
// Range: 0x1E7330 -> 0x1E738C
// this: r16
void ztextbox::refresh() {
    /* anonymous block */ {
        // Range: 0x1E7330 -> 0x1E738C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E7390 -> 0x001E73B0
*/
// Range: 0x1E7390 -> 0x1E73B0
// this: r2
void ztextbox::clear_text() {
    /* anonymous block */ {
        // Range: 0x1E7390 -> 0x1E73B0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E73B0 -> 0x001E73F4
*/
// Range: 0x1E73B0 -> 0x1E73F4
// this: r2
void ztextbox::add_text(char * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1E73B0 -> 0x1E73F4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E7400 -> 0x001E7454
*/
// Range: 0x1E7400 -> 0x1E7454
// this: r2
void ztextbox::set_text(char * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1E7400 -> 0x1E7454
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E7460 -> 0x001E74D4
*/
// Range: 0x1E7460 -> 0x1E74D4
// this: r2
void ztextbox::deactivate() {
    /* anonymous block */ {
        // Range: 0x1E7460 -> 0x1E74D4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E74E0 -> 0x001E7528
*/
// Range: 0x1E74E0 -> 0x1E7528
// this: r2
void ztextbox::activate() {
    /* anonymous block */ {
        // Range: 0x1E74E0 -> 0x1E7528
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E7530 -> 0x001E7580
*/
// Range: 0x1E7530 -> 0x1E7580
// this: r2
void ztextbox::render_backdrop() {
    /* anonymous block */ {
        // Range: 0x1E7530 -> 0x1E7580
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E7580 -> 0x001E77A8
*/
// Range: 0x1E7580 -> 0x1E77A8
// this: r17
void ztextbox::load(class asset_type & a /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1E7580 -> 0x1E77A8
        class RwTexture * tex; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E77B0 -> 0x001E7C68
*/
// Range: 0x1E77B0 -> 0x1E7C68
static void cb_dispatch(class xBase * to /* r16 */, unsigned int event /* r2 */, float * argf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1E77B0 -> 0x1E7C68
        class ztextbox & e; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E7C70 -> 0x001E7C78
*/
// Range: 0x1E7C70 -> 0x1E7C78
static void parse_tag_blahblah() {
    /* anonymous block */ {
        // Range: 0x1E7C70 -> 0x1E7C78
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E7C80 -> 0x001E7F08
*/
// Range: 0x1E7C80 -> 0x1E7F08
static void init_textbox(class ztextbox & e /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1E7C80 -> 0x1E7F08
        class asset_type & a; // r16
        signed int lines; // r29+0x4C
        float minh; // r29+0x50
        float maxh; // r21
        float hmore; // r29+0x50
        unsigned int yjlookup[3]; // @ 0x005F0C80
        unsigned int xjlookup[3]; // @ 0x005F0C70
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E7F10 -> 0x001E8648
*/
// Range: 0x1E7F10 -> 0x1E8648
static void render_bk_by_pieces(class ztextbox & e /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1E7F10 -> 0x1E8648
        class xColor_tag color; // r29+0xEEC
        float rcz; // r21
        float nsz; // r20
        class basic_rect r; // r29+0xED0
        float borderX; // r12
        float borderY; // r11
        float borderU; // r10
        float borderV; // r9
        // total size: 0x20
        class /* @class */ {
            // Members
        public:
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float w; // offset 0x8, size 0x4
            float h; // offset 0xC, size 0x4
            float lu; // offset 0x10, size 0x4
            float lv; // offset 0x14, size 0x4
            float hu; // offset 0x18, size 0x4
            float hv; // offset 0x1C, size 0x4
        } pieces[9]; // r29+0xDB0
        class RwSky2DVertex vert[54]; // r29+0x30
        unsigned int i; // r12
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E8650 -> 0x001E8658
*/
// Range: 0x1E8650 -> 0x1E8658
static void render_bk_tex_wrap() {
    /* anonymous block */ {
        // Range: 0x1E8650 -> 0x1E8658
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E8660 -> 0x001E8CBC
*/
// Range: 0x1E8660 -> 0x1E8CBC
static void render_bk_tex_scale(class ztextbox & e /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1E8660 -> 0x1E8CBC
        class xColor_tag color; // r29+0x1CC
        float rcz; // r21
        float nsz; // r20
        class RwSky2DVertex vert[6]; // r29+0x40
        class basic_rect r; // r29+0x30
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E8CC0 -> 0x001E8D10
*/
// Range: 0x1E8CC0 -> 0x1E8D10
static void render_bk_fill(class ztextbox & e /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1E8CC0 -> 0x1E8D10
        class asset_type & a; // r2
    }
}


