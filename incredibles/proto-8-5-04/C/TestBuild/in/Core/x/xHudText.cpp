/*
    Compile unit: C:\TestBuild\in\Core\x\xHudText.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class basic_rect screen_bounds; // size: 0x10, address: 0x5F9920
static class basic_rect default_adjust; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
// total size: 0x2C
struct /* @anon1 */ {} xhud::text_widget::__vtable; // size: 0x2C, address: 0x604CB0
unsigned int FB_YRES; // size: 0x4, address: 0x6076C0
unsigned int FB_XRES; // size: 0x4, address: 0x6076BC
class callback text_cb; // size: 0xC, address: 0x5E7258
class xColor_tag g_BLACK; // size: 0x4, address: 0x5E7208
class xColor_tag g_WHITE; // size: 0x4, address: 0x5E7210
// total size: 0x28
struct /* @anon0 */ {} xhud::widget::__vtable; // size: 0x28, address: 0x5FD0E0
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
// total size: 0x30
class motive {
    // Members
public:
    union { // inferred
        float * value; // offset 0x0, size 0x4
        class xColor_tag * value_color; // offset 0x0, size 0x4
    };
    union { // inferred
        float delta; // offset 0x4, size 0x4
        float on_time; // offset 0x4, size 0x4
    };
    union { // inferred
        float max_offset; // offset 0x8, size 0x4
        float total_time; // offset 0x8, size 0x4
        float begin_scale; // offset 0x8, size 0x4
    };
    union { // inferred
        float accel; // offset 0xC, size 0x4
        float fade_time; // offset 0xC, size 0x4
        float final_scale; // offset 0xC, size 0x4
    };
    union { // inferred
        void * context; // offset 0x10, size 0x4
        class xColor_tag on_color; // offset 0x10, size 0x4
        float begin_alpha; // offset 0x10, size 0x4
    };
    union { // inferred
        float period; // offset 0x14, size 0x4
        class xColor_tag off_color; // offset 0x14, size 0x4
        float end_alpha; // offset 0x14, size 0x4
    };
    union { // inferred
        float elapsed; // offset 0x18, size 0x4
        float orig_width; // offset 0x18, size 0x4
    };
    union { // inferred
        float offset; // offset 0x1C, size 0x4
        float current_scale; // offset 0x1C, size 0x4
    };
    unsigned char (* fp_update)(class widget &, class motive &, float); // offset 0x20, size 0x4
    unsigned char (* fp_finish)(class widget &, class motive &); // offset 0x24, size 0x4
    union { // inferred
        float start_delta; // offset 0x28, size 0x4
        float orig_height; // offset 0x28, size 0x4
    };
    unsigned char hold; // offset 0x2C, size 0x1
    unsigned char inverse; // offset 0x2D, size 0x1
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
// total size: 0x30
class text_asset : public asset {
    // Members
public:
    unsigned int text_box; // offset 0x28, size 0x4
    unsigned int text; // offset 0x2C, size 0x4
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
// total size: 0x17C
class text_widget : public widget {
    // Members
public:
    char text[128]; // offset 0x88, size 0x80
    class xtextbox tb; // offset 0x108, size 0x74
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
        unsigned short dummy : 4; // offset 0x0, size 0x2
    } flag; // offset 0x8, size 0x2
    unsigned short context_size; // offset 0xA, size 0x2
    void * context; // offset 0xC, size 0x4
    class basic_rect bounds; // offset 0x10, size 0x10
    class basic_rect render_bounds; // offset 0x20, size 0x10
    class callback * cb; // offset 0x30, size 0x4
    class tag_type * tag; // offset 0x34, size 0x4
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
    unsigned short dummy : 4; // offset 0x0, size 0x2
};
// total size: 0x1
class /* @class */ {
    // Members
public:
    unsigned char active : 1; // offset 0x0, size 0x1
    unsigned char dirty : 1; // offset 0x0, size 0x1
    unsigned char show_backdrop : 1; // offset 0x0, size 0x1
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
// total size: 0x28
struct /* @anon0 */ {};
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
class /* @class */ {
    // Members
public:
    float width; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
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
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
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
// total size: 0xC
class callback {
    // Members
public:
    void (* render)(class jot &, class xtextbox &, float, float); // offset 0x0, size 0x4
    void (* layout_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x4, size 0x4
    void (* render_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x8, size 0x4
};
// total size: 0x8
class /* @class */ {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
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
// total size: 0x4
class RwRGBA {
    // Members
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
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
// total size: 0x10
class /* @class */ {
    // Members
public:
    float left; // offset 0x0, size 0x4
    float top; // offset 0x4, size 0x4
    float right; // offset 0x8, size 0x4
    float bottom; // offset 0xC, size 0x4
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
// total size: 0x0
class motive_node {};
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
enum /* @enum */ {
    YJ_TOP = 0,
    YJ_CENTER = 1,
    YJ_BOTTOM = 2,
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
// total size: 0x10
class basic_rect {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
// total size: 0x2C
struct /* @anon1 */ {};
enum /* @enum */ {
    ACT_NONE = 0,
    ACT_SHOW = 1,
    ACT_HIDE = 2,
    MAX_ACT = 3,
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xHudText.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042BDF0 -> 0x0042C1B4
*/
// Range: 0x42BDF0 -> 0x42C1B4
unsigned char blink_text_motive_update(class widget & w /* r2 */, class motive & m /* r2 */, float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x42BDF0 -> 0x42C1B4
        float fPot; // r1
        class text_widget & textWid; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudText.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042C1C0 -> 0x0042C1F0
*/
// Range: 0x42C1C0 -> 0x42C1F0
unsigned char blink_text_motive_reset(class widget & w /* r2 */, class motive & m /* r2 */) {
    /* anonymous block */ {
        // Range: 0x42C1C0 -> 0x42C1F0
        class text_widget & textWid; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudText.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042C1F0 -> 0x0042C370
*/
// Range: 0x42C1F0 -> 0x42C370
unsigned char scale_text_motive_update(class widget & w /* r2 */, class motive & m /* r2 */, float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x42C1F0 -> 0x42C370
        class text_widget & textWid; // r2
        float diff; // r2
        unsigned char result; // r6
        float remaining; // r1
        float fPot; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudText.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042C370 -> 0x0042C398
*/
// Range: 0x42C370 -> 0x42C398
unsigned char scale_text_motive_reset(class widget & w /* r2 */, class motive & m /* r2 */) {
    /* anonymous block */ {
        // Range: 0x42C370 -> 0x42C398
        class text_widget & textWid; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudText.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042C3A0 -> 0x0042C524
*/
// Range: 0x42C3A0 -> 0x42C524
unsigned char fade_text_motive_update(class widget & w /* r18 */, class motive & m /* r17 */, float dt /* r29+0x40 */) {
    /* anonymous block */ {
        // Range: 0x42C3A0 -> 0x42C524
        unsigned char result; // r16
        float diff; // r3
        float remaining; // r1
        class text_widget & textWid; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudText.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042C530 -> 0x0042C594
*/
// Range: 0x42C530 -> 0x42C594
// this: r18
void text_widget::set_text(char * intext /* r17 */) {
    /* anonymous block */ {
        // Range: 0x42C530 -> 0x42C594
        unsigned int textchars; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudText.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042C5A0 -> 0x0042C5E0
*/
// Range: 0x42C5A0 -> 0x42C5E0
// this: r16
void text_widget::render() {
    /* anonymous block */ {
        // Range: 0x42C5A0 -> 0x42C5E0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudText.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042C5E0 -> 0x0042C650
*/
// Range: 0x42C5E0 -> 0x42C650
// this: r16
void text_widget::update(float dt /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x42C5E0 -> 0x42C650
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudText.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042C650 -> 0x0042C6C8
*/
// Range: 0x42C650 -> 0x42C6C8
// this: r17
unsigned char text_widget::is(unsigned int id /* r16 */) {
    /* anonymous block */ {
        // Range: 0x42C650 -> 0x42C6C8
        signed char @5020; // @ 0x00609490
        unsigned int myid; // @ 0x0060948C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudText.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042C6D0 -> 0x0042C710
*/
// Range: 0x42C6D0 -> 0x42C710
unsigned int type() {
    /* anonymous block */ {
        // Range: 0x42C6D0 -> 0x42C710
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudText.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042C710 -> 0x0042C718
*/
// Range: 0x42C710 -> 0x42C718
// this: r2
void text_widget::destroy() {
    /* anonymous block */ {
        // Range: 0x42C710 -> 0x42C718
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudText.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042C720 -> 0x0042D038
*/
// Range: 0x42C720 -> 0x42D038
// this: r16
void text_widget::setup() {
    /* anonymous block */ {
        // Range: 0x42C720 -> 0x42D038
        class text_asset & ta; // r2
        class ztextbox * ztb; // r18
        unsigned int len; // r29+0x13C
        char * s; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudText.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042D040 -> 0x0042D098
*/
// Range: 0x42D040 -> 0x42D098
void load(class xBase & data /* r16 */, class xDynAsset & asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x42D040 -> 0x42D098
    }
}


