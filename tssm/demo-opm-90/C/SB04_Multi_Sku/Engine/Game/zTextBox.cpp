/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class basic_rect screen_bounds; // size: 0x10, address: 0x0
static class basic_rect default_adjust; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
static class ztextbox * head_active; // size: 0x4, address: 0x6383AC
static void (* render_bk_table[4])(class ztextbox &); // size: 0x10, address: 0x605050
static class tag_type new_tags[1]; // size: 0x14, address: 0x605060
static unsigned int new_tags_size; // size: 0x4, address: 0x636F88
void cb_dispatch(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x47B000
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x643E38
unsigned int FB_XRES; // size: 0x4, address: 0x636F1C
unsigned int FB_YRES; // size: 0x4, address: 0x636F20
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
        unsigned char skipFrame : 1; // offset 0x0, size 0x1
    } flag; // offset 0x10, size 0x1
    class asset_type * asset; // offset 0x14, size 0x4
    class xtextbox tb; // offset 0x18, size 0x74
    char * segments[16]; // offset 0x8C, size 0x40
    unsigned int segments_size; // offset 0xCC, size 0x4
    class ztextbox * next; // offset 0xD0, size 0x4
    class ztextbox * prev; // offset 0xD4, size 0x4
    class RwRaster * bgtex; // offset 0xD8, size 0x4
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
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
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
// total size: 0x10
class /* @class */ {
    // Members
public:
    float left; // offset 0x0, size 0x4
    float top; // offset 0x4, size 0x4
    float right; // offset 0x8, size 0x4
    float bottom; // offset 0xC, size 0x4
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
// total size: 0x10
class basic_rect {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
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
enum /* @enum */ {
    XJ_LEFT = 0,
    XJ_CENTER = 1,
    XJ_RIGHT = 2,
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
// total size: 0x4
class RwRGBA {
    // Members
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
enum /* @enum */ {
    EX_UP = 0,
    EX_CENTER = 1,
    EX_DOWN = 2,
    MAX_EX = 3,
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
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x40
class RwSky2DVertex {
    // Members
public:
    class RwSky2DVertexAlignmentOverlay u; // offset 0x0, size 0x40
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
// total size: 0x1
class /* @class */ {
    // Members
public:
    unsigned char active : 1; // offset 0x0, size 0x1
    unsigned char dirty : 1; // offset 0x0, size 0x1
    unsigned char show_backdrop : 1; // offset 0x0, size 0x1
    unsigned char skipFrame : 1; // offset 0x0, size 0x1
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
// total size: 0xC
class callback {
    // Members
public:
    void (* render)(class jot &, class xtextbox &, float, float); // offset 0x0, size 0x4
    void (* layout_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x4, size 0x4
    void (* render_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x8, size 0x4
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
// total size: 0x4
class color_type {
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
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
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
// total size: 0x8
class /* @class */ {
    // Members
public:
    float width; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
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
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0047A860 -> 0x0047A978
*/
// Range: 0x47A860 -> 0x47A978
void render_all() {
    /* anonymous block */ {
        // Range: 0x47A860 -> 0x47A978
        class ztextbox * it; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0047A980 -> 0x0047A9B0
*/
// Range: 0x47A980 -> 0x47A9B0
void update_all() {
    /* anonymous block */ {
        // Range: 0x47A980 -> 0x47A9B0
        class ztextbox * it; // r3
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0047A9B0 -> 0x0047A9B8
*/
// Range: 0x47A9B0 -> 0x47A9B8
void load(class xBase & data /* r2 */, class xDynAsset & asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x47A9B0 -> 0x47A9B8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0047A9C0 -> 0x0047A9E8
*/
// Range: 0x47A9C0 -> 0x47A9E8
void init() {
    /* anonymous block */ {
        // Range: 0x47A9C0 -> 0x47A9E8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0047A9F0 -> 0x0047AAA8
*/
// Range: 0x47A9F0 -> 0x47AAA8
// this: r2
void ztextbox::get_text(char * buffer /* r21 */, unsigned int buffer_size /* r20 */) {
    /* anonymous block */ {
        // Range: 0x47A9F0 -> 0x47AAA8
        char * * it; // r19
        char * * end; // r2
        char * s; // r2
        unsigned int len; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0047AAB0 -> 0x0047AB0C
*/
// Range: 0x47AAB0 -> 0x47AB0C
// this: r16
void ztextbox::refresh() {
    /* anonymous block */ {
        // Range: 0x47AAB0 -> 0x47AB0C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0047AB10 -> 0x0047AB30
*/
// Range: 0x47AB10 -> 0x47AB30
// this: r2
void ztextbox::clear_text() {
    /* anonymous block */ {
        // Range: 0x47AB10 -> 0x47AB30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0047AB30 -> 0x0047AB74
*/
// Range: 0x47AB30 -> 0x47AB74
// this: r2
void ztextbox::add_text(char * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x47AB30 -> 0x47AB74
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0047AB80 -> 0x0047AC28
*/
// Range: 0x47AB80 -> 0x47AC28
// this: r16
void ztextbox::set_text(unsigned int id /* r2 */) {
    /* anonymous block */ {
        // Range: 0x47AB80 -> 0x47AC28
        char * text; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0047AC30 -> 0x0047AC84
*/
// Range: 0x47AC30 -> 0x47AC84
// this: r2
void ztextbox::set_text(char * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x47AC30 -> 0x47AC84
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0047AC90 -> 0x0047AD04
*/
// Range: 0x47AC90 -> 0x47AD04
// this: r2
void ztextbox::deactivate() {
    /* anonymous block */ {
        // Range: 0x47AC90 -> 0x47AD04
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0047AD10 -> 0x0047AD74
*/
// Range: 0x47AD10 -> 0x47AD74
// this: r2
void ztextbox::activate(unsigned char skipFirstFrame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x47AD10 -> 0x47AD74
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0047AD80 -> 0x0047ADD0
*/
// Range: 0x47AD80 -> 0x47ADD0
// this: r2
void ztextbox::render_backdrop() {
    /* anonymous block */ {
        // Range: 0x47AD80 -> 0x47ADD0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0047ADD0 -> 0x0047AFF8
*/
// Range: 0x47ADD0 -> 0x47AFF8
// this: r17
void ztextbox::load(class asset_type & a /* r16 */) {
    /* anonymous block */ {
        // Range: 0x47ADD0 -> 0x47AFF8
        class RwTexture * tex; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0047B000 -> 0x0047B4D4
*/
// Range: 0x47B000 -> 0x47B4D4
static void cb_dispatch(class xBase * to /* r16 */, unsigned int event /* r2 */, float * argf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x47B000 -> 0x47B4D4
        class ztextbox & e; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0047B4E0 -> 0x0047B4E8
*/
// Range: 0x47B4E0 -> 0x47B4E8
static void parse_tag_blahblah() {
    /* anonymous block */ {
        // Range: 0x47B4E0 -> 0x47B4E8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0047B4F0 -> 0x0047B778
*/
// Range: 0x47B4F0 -> 0x47B778
static void init_textbox(class ztextbox & e /* r17 */) {
    /* anonymous block */ {
        // Range: 0x47B4F0 -> 0x47B778
        class asset_type & a; // r2
        signed int lines; // r29+0x4C
        float minh; // r29+0x50
        float maxh; // r21
        float hmore; // r29+0x50
        unsigned int yjlookup[3]; // @ 0x0062DEA8
        unsigned int xjlookup[3]; // @ 0x0062DE98
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0047B780 -> 0x0047BEB8
*/
// Range: 0x47B780 -> 0x47BEB8
static void render_bk_by_pieces(class ztextbox & e /* r16 */) {
    /* anonymous block */ {
        // Range: 0x47B780 -> 0x47BEB8
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
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0047BEC0 -> 0x0047BEC8
*/
// Range: 0x47BEC0 -> 0x47BEC8
static void render_bk_tex_wrap() {
    /* anonymous block */ {
        // Range: 0x47BEC0 -> 0x47BEC8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0047BED0 -> 0x0047C52C
*/
// Range: 0x47BED0 -> 0x47C52C
static void render_bk_tex_scale(class ztextbox & e /* r16 */) {
    /* anonymous block */ {
        // Range: 0x47BED0 -> 0x47C52C
        class xColor_tag color; // r29+0x1CC
        float rcz; // r21
        float nsz; // r20
        class RwSky2DVertex vert[6]; // r29+0x40
        class basic_rect r; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zTextBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0047C530 -> 0x0047C580
*/
// Range: 0x47C530 -> 0x47C580
static void render_bk_fill(class ztextbox & e /* r2 */) {
    /* anonymous block */ {
        // Range: 0x47C530 -> 0x47C580
        class asset_type & a; // r2
    }
}


