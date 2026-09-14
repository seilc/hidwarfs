/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zTextBox.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E1B80 -> 0x800E2BAC
*/
// total size: 0x10
struct basic_rect {
    // Static members
    static struct basic_rect m_Null; // size: 0x10
    static struct basic_rect m_Unit; // size: 0x10

    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
static struct ztextbox * head_active; // size: 0x4, address: 0x803C2388
// Range: 0x800E1B80 -> 0x800E1BC4
static void render_bk_fill(const struct ztextbox & e /* r31 */) {}

// total size: 0x4
struct RwRGBA {
    // Members
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0x4
struct xColor_tag {
    // Members
    union { // inferred
        struct { // inferred
            unsigned char r; // offset 0x0, size 0x1
            unsigned char g; // offset 0x1, size 0x1
            unsigned char b; // offset 0x2, size 0x1
            unsigned char a; // offset 0x3, size 0x1
        };
        struct RwRGBA rgba; // offset 0x0, size 0x4
    };
};
void * RwEngineInstance; // size: 0x4, address: 0x803C4584
unsigned int FB_XRES; // size: 0x4, address: 0x803BE15C
unsigned int FB_YRES; // size: 0x4, address: 0x803BE160
// total size: 0x18
struct rwGameCube2DVertex {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    unsigned char r; // offset 0xC, size 0x1
    unsigned char g; // offset 0xD, size 0x1
    unsigned char b; // offset 0xE, size 0x1
    unsigned char a; // offset 0xF, size 0x1
    float u; // offset 0x10, size 0x4
    float v; // offset 0x14, size 0x4
};
// Range: 0x800E1BC4 -> 0x800E1DA4
static void render_bk_tex_scale(const struct ztextbox & e /* r30 */) {
    // Local variables
    struct xColor_tag color; // r1+0x18
    float rcz; // f31
    float nsz; // f30
    struct rwGameCube2DVertex vert[6]; // r1+0x2C
    struct basic_rect r; // r1+0x1C

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
}

// Range: 0x800E1DA4 -> 0x800E1DDC
static void set_vert(struct rwGameCube2DVertex & vert /* r0 */, float x /* f0 */, float y /* f0 */, float u /* f0 */, float v /* f0 */, struct xColor_tag & c /* r0 */, float nsz /* f0 */) {}

// Range: 0x800E1DDC -> 0x800E1DE0
static void render_bk_tex_wrap() {}

// total size: 0x20
struct /* @class$849zTextBox_cpp */ {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
    float lu; // offset 0x10, size 0x4
    float lv; // offset 0x14, size 0x4
    float hu; // offset 0x18, size 0x4
    float hv; // offset 0x1C, size 0x4
};
// Range: 0x800E1DE0 -> 0x800E2204
static void render_bk_by_pieces(const struct ztextbox & e /* r24 */) {
    // Local variables
    struct xColor_tag color; // r1+0x18
    float rcz; // f31
    float nsz; // f30
    struct basic_rect r; // r1+0x1C
    float borderX; // f13
    float borderY; // f29
    float borderU; // f28
    float borderV; // f27
    // total size: 0x20
    struct /* @class$849zTextBox_cpp */ {
        // Members
        float x; // offset 0x0, size 0x4
        float y; // offset 0x4, size 0x4
        float w; // offset 0x8, size 0x4
        float h; // offset 0xC, size 0x4
        float lu; // offset 0x10, size 0x4
        float lv; // offset 0x14, size 0x4
        float hu; // offset 0x18, size 0x4
        float hv; // offset 0x1C, size 0x4
    } pieces[9]; // r1+0x2C
    struct rwGameCube2DVertex vert[54]; // r1+0x14C
    unsigned int i; // r31

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
}

static void (* render_bk_table[4])(struct ztextbox &); // size: 0x10, address: 0x803BE358
static unsigned int xjlookup[3]; // size: 0xC, address: 0x803C683C
static unsigned int yjlookup[3]; // size: 0xC, address: 0x803C6848
// Range: 0x800E2204 -> 0x800E24F4
static void init_textbox(struct ztextbox & e /* r30 */) {
    // Local variables
    const struct asset_type & a; // r31
    int lines; // r1+0xC
    float minh; // f31
    float maxh; // f30
    float hmore; // f2

    // References
    // -> static unsigned int yjlookup[3];
    // -> static unsigned int xjlookup[3];
}

// total size: 0x34
struct RwRaster {
    // Members
    struct RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    int width; // offset 0xC, size 0x4
    int height; // offset 0x10, size 0x4
    int depth; // offset 0x14, size 0x4
    int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    int originalWidth; // offset 0x28, size 0x4
    int originalHeight; // offset 0x2C, size 0x4
    int originalStride; // offset 0x30, size 0x4
};
// total size: 0x30
class xfont {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    float width; // offset 0x4, size 0x4
    float height; // offset 0x8, size 0x4
    float space; // offset 0xC, size 0x4
    struct xColor_tag color; // offset 0x10, size 0x4
    struct xColor_tag shadowColor; // offset 0x14, size 0x4
    float shadowOffsetX; // offset 0x18, size 0x4
    float shadowOffsetY; // offset 0x1C, size 0x4
    struct basic_rect clip; // offset 0x20, size 0x10
};
// total size: 0x8
struct substr {
    // Members
    const char * text; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
// total size: 0x2
struct /* @class$723zTextBox_cpp */ {
    // Members
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
// total size: 0x20
struct split_tag {
    // Members
    struct substr tag; // offset 0x0, size 0x8
    struct substr name; // offset 0x8, size 0x8
    struct substr action; // offset 0x10, size 0x8
    struct substr value; // offset 0x18, size 0x8
};
// total size: 0x14
struct tag_type {
    // Members
    struct substr name; // offset 0x0, size 0x8
    void (* parse_tag)(struct jot &, class xtextbox &, class xtextbox &, struct split_tag &); // offset 0x8, size 0x4
    void (* reset_tag)(struct jot &, class xtextbox &, class xtextbox &, struct split_tag &); // offset 0xC, size 0x4
    void * context; // offset 0x10, size 0x4
};
// total size: 0x38
struct jot {
    // Members
    struct substr s; // offset 0x0, size 0x8
    // total size: 0x2
    struct /* @class$723zTextBox_cpp */ {
        // Members
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
    struct basic_rect bounds; // offset 0x10, size 0x10
    struct basic_rect render_bounds; // offset 0x20, size 0x10
    const struct callback * cb; // offset 0x30, size 0x4
    const struct tag_type * tag; // offset 0x34, size 0x4
};
// total size: 0xC
struct callback {
    // Members
    void (* render)(struct jot &, class xtextbox &, float, float); // offset 0x0, size 0x4
    void (* layout_update)(struct jot &, class xtextbox &, class xtextbox &); // offset 0x4, size 0x4
    void (* render_update)(struct jot &, class xtextbox &, class xtextbox &); // offset 0x8, size 0x4
};
// total size: 0x14
struct tag_entry {
    // Members
    struct substr name; // offset 0x0, size 0x8
    char op; // offset 0x8, size 0x1
    struct substr * args; // offset 0xC, size 0x4
    unsigned long args_size; // offset 0x10, size 0x4
};
// total size: 0x8
struct tag_entry_list {
    // Members
    const struct tag_entry * entries; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
// total size: 0x388
struct jot_block {
    // Members
    struct jot jots[16]; // offset 0x0, size 0x380
    struct jot_block * next_block; // offset 0x380, size 0x4
    unsigned char used; // offset 0x384, size 0x1
};
// total size: 0x20
struct jot_line {
    // Members
    struct basic_rect bounds; // offset 0x0, size 0x10
    float baseline; // offset 0x10, size 0x4
    unsigned long first; // offset 0x14, size 0x4
    unsigned long last; // offset 0x18, size 0x4
    unsigned char page_break; // offset 0x1C, size 0x1
};
// total size: 0x88
struct jot_line_block {
    // Members
    struct jot_line jot_lines[4]; // offset 0x0, size 0x80
    struct jot_line_block * next_block; // offset 0x80, size 0x4
    unsigned char used; // offset 0x84, size 0x1
};
// total size: 0x4C
struct context_buffer_block {
    // Members
    unsigned char context_buffer[64]; // offset 0x0, size 0x40
    unsigned long size; // offset 0x40, size 0x4
    struct context_buffer_block * next_block; // offset 0x44, size 0x4
    unsigned char used; // offset 0x48, size 0x1
};
// total size: 0x10C
class layout {
    // Members
    class xtextbox tb; // offset 0x0, size 0x74
    struct jot_block * first_jot_block; // offset 0x74, size 0x4
    unsigned long _jots_size; // offset 0x78, size 0x4
    struct jot_line_block * first_line_block; // offset 0x7C, size 0x4
    unsigned long _lines_size; // offset 0x80, size 0x4
    struct context_buffer_block * first_context_buffer; // offset 0x84, size 0x4
    unsigned short dynamics[64]; // offset 0x88, size 0x80
    unsigned long dynamics_size; // offset 0x108, size 0x4
};
// total size: 0x74
class xtextbox {
    // Static members
    static unsigned char japanese_word_breaking; // size: 0x1
    static struct callback text_cb; // size: 0xC

    // Members
public:
    class xfont font; // offset 0x0, size 0x30
    struct basic_rect bounds; // offset 0x30, size 0x10
    unsigned int flags; // offset 0x40, size 0x4
    float line_space; // offset 0x44, size 0x4
    float tab_stop; // offset 0x48, size 0x4
    float left_indent; // offset 0x4C, size 0x4
    float right_indent; // offset 0x50, size 0x4
    const struct callback * cb; // offset 0x54, size 0x4
    void * context; // offset 0x58, size 0x4
private:
    const char * * texts; // offset 0x5C, size 0x4
    const unsigned long * text_sizes; // offset 0x60, size 0x4
    unsigned long texts_size; // offset 0x64, size 0x4
    struct substr text; // offset 0x68, size 0x8
    unsigned int text_hash; // offset 0x70, size 0x4
};
// Range: 0x800E24F4 -> 0x800E24F8
static void parse_tag_blahblah() {}

static struct tag_type new_tags[1]; // size: 0x14, address: 0x803BE368
static unsigned long new_tags_size; // size: 0x4, address: 0x803BE37C
// Range: 0x800E24F8 -> 0x800E262C
static void cb_dispatch(struct xBase * to /* r4 */, unsigned int event /* r0 */, const float * argf /* r0 */) {
    // Local variables
    struct ztextbox & e; // r31
}

// total size: 0x20
struct xLinkAsset {
    // Members
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
// total size: 0x10
struct xBase {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    const struct xLinkAsset * link; // offset 0x8, size 0x4
    void (* eventFunc)(struct xBase *, struct xBase *, unsigned int, float *, struct xBase *, unsigned int); // offset 0xC, size 0x4
};
// total size: 0x1
struct /* @class$744zTextBox_cpp */ {
    // Members
    unsigned char active : 1; // offset 0x0, size 0x1
    unsigned char dirty : 1; // offset 0x0, size 0x1
    unsigned char show_backdrop : 1; // offset 0x0, size 0x1
};
// total size: 0x8
struct xBaseAsset {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x10
struct xDynAsset : public xBaseAsset {
    // Members
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
// total size: 0x8
struct /* @class$746zTextBox_cpp */ {
    // Members
    float width; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
};
// total size: 0x8
struct /* @class$747zTextBox_cpp */ {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x4
struct color_type {
    // Members
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
// total size: 0x10
struct /* @class$748zTextBox_cpp */ {
    // Members
    float left; // offset 0x0, size 0x4
    float top; // offset 0x4, size 0x4
    float right; // offset 0x8, size 0x4
    float bottom; // offset 0xC, size 0x4
};
enum /* @enum$749zTextBox_cpp */ {
    XJ_LEFT = 0,
    XJ_CENTER = 1,
    XJ_RIGHT = 2,
};
enum /* @enum$750zTextBox_cpp */ {
    YJ_TOP = 0,
    YJ_CENTER = 1,
    YJ_BOTTOM = 2,
};
enum /* @enum$751zTextBox_cpp */ {
    EX_UP = 0,
    EX_CENTER = 1,
    EX_DOWN = 2,
    MAX_EX = 3,
};
// total size: 0x1C
struct /* @class$753zTextBox_cpp */ {
    // Members
    unsigned int type; // offset 0x0, size 0x4
    struct color_type color; // offset 0x4, size 0x4
    unsigned int texture; // offset 0x8, size 0x4
    float borderU; // offset 0xC, size 0x4
    float borderV; // offset 0x10, size 0x4
    float borderWidth; // offset 0x14, size 0x4
    float borderHeight; // offset 0x18, size 0x4
};
// total size: 0x88
struct asset_type : public xDynAsset {
    // Members
    unsigned int text; // offset 0x10, size 0x4
    struct basic_rect bounds; // offset 0x14, size 0x10
    unsigned char yAsBottom; // offset 0x24, size 0x1
    unsigned char autoCenterOnScreen; // offset 0x25, size 0x1
    unsigned int font; // offset 0x28, size 0x4
    // total size: 0x8
    struct /* @class$746zTextBox_cpp */ {
        // Members
        float width; // offset 0x0, size 0x4
        float height; // offset 0x4, size 0x4
    } size; // offset 0x2C, size 0x8
    // total size: 0x8
    struct /* @class$747zTextBox_cpp */ {
        // Members
        float x; // offset 0x0, size 0x4
        float y; // offset 0x4, size 0x4
    } space; // offset 0x34, size 0x8
    struct color_type color; // offset 0x3C, size 0x4
    // total size: 0x10
    struct /* @class$748zTextBox_cpp */ {
        // Members
        float left; // offset 0x0, size 0x4
        float top; // offset 0x4, size 0x4
        float right; // offset 0x8, size 0x4
        float bottom; // offset 0xC, size 0x4
    } inset; // offset 0x40, size 0x10
    enum /* @enum$749zTextBox_cpp */ {
        XJ_LEFT = 0,
        XJ_CENTER = 1,
        XJ_RIGHT = 2,
    } xjustify; // offset 0x50, size 0x4
    enum /* @enum$750zTextBox_cpp */ {
        YJ_TOP = 0,
        YJ_CENTER = 1,
        YJ_BOTTOM = 2,
    } yjustify; // offset 0x54, size 0x4
    enum /* @enum$751zTextBox_cpp */ {
        EX_UP = 0,
        EX_CENTER = 1,
        EX_DOWN = 2,
        MAX_EX = 3,
    } expand; // offset 0x58, size 0x4
    float max_height; // offset 0x5C, size 0x4
    // total size: 0x1C
    struct /* @class$753zTextBox_cpp */ {
        // Members
        unsigned int type; // offset 0x0, size 0x4
        struct color_type color; // offset 0x4, size 0x4
        unsigned int texture; // offset 0x8, size 0x4
        float borderU; // offset 0xC, size 0x4
        float borderV; // offset 0x10, size 0x4
        float borderWidth; // offset 0x14, size 0x4
        float borderHeight; // offset 0x18, size 0x4
    } backdrop; // offset 0x60, size 0x1C
    struct color_type shadowColor; // offset 0x7C, size 0x4
    float shadowOffsetX; // offset 0x80, size 0x4
    float shadowOffsetY; // offset 0x84, size 0x4
};
// total size: 0xDC
struct ztextbox : public xBase {
    // Functions
    void load(const struct asset_type & a);

    void reset();

    void render();

    void render_backdrop();

    void activate();

    void deactivate();

    void set_text(const char * s);

    void set_text(unsigned int id);

    void add_text(const char * s);

    void add_text(unsigned int id);

    void clear_text();

    void refresh();

    void get_text(char * buffer, unsigned long buffer_size) const;

    // Members
    // total size: 0x1
    struct /* @class$744zTextBox_cpp */ {
        // Members
        unsigned char active : 1; // offset 0x0, size 0x1
        unsigned char dirty : 1; // offset 0x0, size 0x1
        unsigned char show_backdrop : 1; // offset 0x0, size 0x1
    } flag; // offset 0x10, size 0x1
    const struct asset_type * asset; // offset 0x14, size 0x4
    class xtextbox tb; // offset 0x18, size 0x74
    char * segments[16]; // offset 0x8C, size 0x40
    unsigned long segments_size; // offset 0xCC, size 0x4
    struct ztextbox * next; // offset 0xD0, size 0x4
    struct ztextbox * prev; // offset 0xD4, size 0x4
    struct RwRaster * bgtex; // offset 0xD8, size 0x4
};
// total size: 0x8
struct RwObject {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
// total size: 0x8
struct RwLLLink {
    // Members
    struct RwLLLink * next; // offset 0x0, size 0x4
    struct RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x8
struct RwLinkList {
    // Members
    struct RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x18
struct RwTexDictionary {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLinkList texturesInDict; // offset 0x8, size 0x8
    struct RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x58
struct RwTexture {
    // Members
    struct RwRaster * raster; // offset 0x0, size 0x4
    struct RwTexDictionary * dict; // offset 0x4, size 0x4
    struct RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    unsigned int filterAddressing; // offset 0x50, size 0x4
    int refCount; // offset 0x54, size 0x4
};
// Range: 0x800E262C -> 0x800E26D4
// this: r30
void ztextbox::load(const struct asset_type & a /* r31 */) {
    // Local variables
    struct RwTexture * tex; // r0
}

// Range: 0x800E26D4 -> 0x800E26D8
void ztextbox::update() {}

// Range: 0x800E26D8 -> 0x800E276C
// this: r31
void ztextbox::reset() {}

// Range: 0x800E276C -> 0x800E27D4
// this: r31
void ztextbox::render() {}

// Range: 0x800E27D4 -> 0x800E2814
// this: r0
void ztextbox::render_backdrop() {
    // References
    // -> static void (* render_bk_table[4])(struct ztextbox &);
}

// Range: 0x800E2814 -> 0x800E2854
// this: r0
void ztextbox::activate() {
    // References
    // -> static struct ztextbox * head_active;
}

// Range: 0x800E2854 -> 0x800E28AC
// this: r0
void ztextbox::deactivate() {
    // References
    // -> static struct ztextbox * head_active;
}

// Range: 0x800E28AC -> 0x800E28E8
// this: r30
void ztextbox::set_text(const char * s /* r31 */) {}

// Range: 0x800E28E8 -> 0x800E2940
// this: r31
void ztextbox::set_text(unsigned int id /* r4 */) {
    // Local variables
    const char * text; // r4
}

// Range: 0x800E2940 -> 0x800E2978
// this: r0
void ztextbox::add_text(const char * s /* r0 */) {}

// Range: 0x800E2978 -> 0x800E29C4
// this: r31
void ztextbox::add_text(unsigned int id /* r4 */) {
    // Local variables
    const char * text; // r4
}

// Range: 0x800E29C4 -> 0x800E29E0
// this: r0
void ztextbox::clear_text() {}

// Range: 0x800E29E0 -> 0x800E2A28
// this: r31
void ztextbox::refresh() {}

// Range: 0x800E2A28 -> 0x800E2AC4
// this: r0
void ztextbox::get_text(char * buffer /* r26 */, unsigned long buffer_size /* r27 */) const {
    // Local variables
    const char * const * it; // r31
    const char * const * end; // r30
    const char * s; // r29
    unsigned long len; // r28
}

// Range: 0x800E2AC4 -> 0x800E2AF4
void ztextbox::init() {
    // References
    // -> static struct ztextbox * head_active;
    // -> static unsigned long new_tags_size;
    // -> static struct tag_type new_tags[1];
}

// Range: 0x800E2AF4 -> 0x800E2B14
void ztextbox::load(struct xBase & data /* r0 */, struct xDynAsset & asset /* r0 */) {}

// total size: 0x0
struct xScene {};
// Range: 0x800E2B14 -> 0x800E2B6C
void ztextbox::update_all(struct xScene & s /* r30 */, float dt /* f31 */) {
    // Local variables
    struct ztextbox * it; // r31

    // References
    // -> static struct ztextbox * head_active;
}

// Range: 0x800E2B6C -> 0x800E2BAC
void ztextbox::render_all() {
    // Local variables
    struct ztextbox * it; // r31

    // References
    // -> static struct ztextbox * head_active;
}


