/*
    Compile unit: C:\SB\Core\x\xHudFontMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class basic_rect screen_bounds; // size: 0x10, address: 0x4FBB70
static class basic_rect default_adjust; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
// total size: 0x28
struct /* @anon2 */ {} xhud::font_meter_widget::__vtable; // size: 0x28, address: 0x508DA0
// total size: 0x28
struct /* @anon0 */ {} xhud::widget::__vtable; // size: 0x28, address: 0x508D70
// total size: 0x28
struct /* @anon1 */ {} xhud::meter_widget::__vtable; // size: 0x28, address: 0x508DD0
// total size: 0x10
class xBase {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class xLinkAsset * link; // offset 0x8, size 0x4
    signed int (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *); // offset 0xC, size 0x4
};
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
// total size: 0x24
class xfont {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    float width; // offset 0x4, size 0x4
    float height; // offset 0x8, size 0x4
    float space; // offset 0xC, size 0x4
    class iColor_tag color; // offset 0x10, size 0x4
    class basic_rect clip; // offset 0x14, size 0x10
};
// total size: 0x84
class widget {
    // Members
public:
    // total size: 0x2
    class /* @class */ {
        // Members
    public:
        unsigned char visible; // offset 0x0, size 0x1
        unsigned char enabled; // offset 0x1, size 0x1
    } flag; // offset 0x0, size 0x2
    class render_context rc; // offset 0x4, size 0x34
    class render_context start_rc; // offset 0x38, size 0x34
    class asset * a; // offset 0x6C, size 0x4
    enum /* @enum */ {
        ACT_NONE = 0,
        ACT_SHOW = 1,
        ACT_HIDE = 2,
        MAX_ACT = 3,
    } activity; // offset 0x70, size 0x4
    class motive_node * _motive_top; // offset 0x78, size 0x4
    class motive_node * _motive_temp; // offset 0x7C, size 0x4
    class motive_node * * _motive_temp_tail; // offset 0x80, size 0x4
};
// total size: 0x28
struct /* @anon0 */ {};
// total size: 0x28
class asset : public xDynAsset {
    // Members
public:
    class xVec3 loc; // offset 0x10, size 0xC
    class xVec3 size; // offset 0x1C, size 0xC
};
// total size: 0x74
class font_meter_asset : public meter_asset {
    // Members
public:
    class font_context font; // offset 0x4C, size 0x24
    unsigned char counter_mode; // offset 0x70, size 0x1
    unsigned char pad1; // offset 0x71, size 0x1
    unsigned char pad2; // offset 0x72, size 0x1
    unsigned char pad3; // offset 0x73, size 0x1
};
enum /* @enum */ {
    ACT_NONE = 0,
    ACT_SHOW = 1,
    ACT_HIDE = 2,
    MAX_ACT = 3,
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
// total size: 0x14C
class font_meter_widget : public meter_widget {
    // Members
public:
    class font_context font; // offset 0xC4, size 0x24
    class font_context start_font; // offset 0xE8, size 0x24
    signed int precision; // offset 0x10C, size 0x4
    class xVec2 offset; // offset 0x110, size 0x8
    char buffer[12]; // offset 0x118, size 0xC
    signed int last_value; // offset 0x124, size 0x4
    class xfont xf; // offset 0x128, size 0x24
};
// total size: 0x4
class color32u {
    // Members
public:
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
// total size: 0x28
class motive_node {
    // Members
public:
    class motive m; // offset 0x0, size 0x24
    class motive_node * next; // offset 0x24, size 0x4
};
// total size: 0xC
class xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x24
class font_context {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    signed int justify; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
    float space; // offset 0x10, size 0x4
    float drop_x; // offset 0x14, size 0x4
    float drop_y; // offset 0x18, size 0x4
    class color32u c; // offset 0x1C, size 0x4
    class color32u drop_c; // offset 0x20, size 0x4
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
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x4C
class meter_asset : public asset {
    // Members
public:
    float start_value; // offset 0x28, size 0x4
    float min_value; // offset 0x2C, size 0x4
    float max_value; // offset 0x30, size 0x4
    float increment_time; // offset 0x34, size 0x4
    float decrement_time; // offset 0x38, size 0x4
    // total size: 0x10
    class /* @class */ {
        // Members
    public:
        unsigned int start_increment; // offset 0x0, size 0x4
        unsigned int increment; // offset 0x4, size 0x4
        unsigned int start_decrement; // offset 0x8, size 0x4
        unsigned int decrement; // offset 0xC, size 0x4
    } sound; // offset 0x3C, size 0x10
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
// total size: 0x28
struct /* @anon1 */ {};
// total size: 0x10
class /* @class */ {
    // Members
public:
    unsigned int start_increment; // offset 0x0, size 0x4
    unsigned int increment; // offset 0x4, size 0x4
    unsigned int start_decrement; // offset 0x8, size 0x4
    unsigned int decrement; // offset 0xC, size 0x4
};
// total size: 0x28
struct /* @anon2 */ {};
// total size: 0x24
class motive {
    // Members
public:
    float * value; // offset 0x0, size 0x4
    float delta; // offset 0x4, size 0x4
    float start_delta; // offset 0x8, size 0x4
    float max_offset; // offset 0xC, size 0x4
    float offset; // offset 0x10, size 0x4
    float accel; // offset 0x14, size 0x4
    unsigned char (* fp_update)(class widget &, class motive &, float); // offset 0x18, size 0x4
    void * context; // offset 0x1C, size 0x4
    unsigned char inverse; // offset 0x20, size 0x1
};
// total size: 0xC4
class meter_widget : public widget {
    // Members
public:
    class meter_asset & res; // offset 0x84, size 0x4
    float value; // offset 0x88, size 0x4
    float min_value; // offset 0x8C, size 0x4
    float max_value; // offset 0x90, size 0x4
    float end_value; // offset 0x94, size 0x4
    float value_vel; // offset 0x98, size 0x4
    float value_accel; // offset 0x9C, size 0x4
    float ping_delay; // offset 0xA0, size 0x4
    float pitch; // offset 0xA4, size 0x4
    class sound_queue pings; // offset 0xA8, size 0x1C
};
// total size: 0x1C
class sound_queue {
    // Members
public:
    unsigned int _playing[5]; // offset 0x0, size 0x14
    signed int head; // offset 0x14, size 0x4
    signed int tail; // offset 0x18, size 0x4
};
// total size: 0x2
class /* @class */ {
    // Members
public:
    unsigned char visible; // offset 0x0, size 0x1
    unsigned char enabled; // offset 0x1, size 0x1
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

/*
    Compile unit: C:\SB\Core\x\xHudFontMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002996C0 -> 0x002997C8
*/
// Range: 0x2996C0 -> 0x2997C8
// this: r16
void font_meter_widget::render() {
    /* anonymous block */ {
        // Range: 0x2996C0 -> 0x2997C8
        float x; // r23
        float y; // r22
    }
}


/*
    Compile unit: C:\SB\Core\x\xHudFontMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002997D0 -> 0x00299A68
*/
// Range: 0x2997D0 -> 0x299A68
// this: r16
void font_meter_widget::update(float dt /* r29+0x40 */) {
    /* anonymous block */ {
        // Range: 0x2997D0 -> 0x299A68
        float a; // r1
        signed int new_value; // r2
        class font_meter_asset & fma; // r2
        class basic_rect bounds; // r29+0x30
        char * format_text[3]; // @ 0x004DCD10
    }
}


/*
    Compile unit: C:\SB\Core\x\xHudFontMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00299A70 -> 0x00299ADC
*/
// Range: 0x299A70 -> 0x299ADC
// this: r17
unsigned char font_meter_widget::is(unsigned int id /* r16 */) {
    /* anonymous block */ {
        // Range: 0x299A70 -> 0x299ADC
        unsigned int myid; // @ 0x0050FDD0
        signed char @3845; // @ 0x0050FDD4
    }
}


/*
    Compile unit: C:\SB\Core\x\xHudFontMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00299AE0 -> 0x00299B18
*/
// Range: 0x299AE0 -> 0x299B18
unsigned int type() {
    /* anonymous block */ {
        // Range: 0x299AE0 -> 0x299B18
    }
}


/*
    Compile unit: C:\SB\Core\x\xHudFontMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00299B20 -> 0x00299B28
*/
// Range: 0x299B20 -> 0x299B28
// this: r2
void font_meter_widget::destroy() {
    /* anonymous block */ {
        // Range: 0x299B20 -> 0x299B28
    }
}


/*
    Compile unit: C:\SB\Core\x\xHudFontMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00299B30 -> 0x00299C9C
*/
// Range: 0x299B30 -> 0x299C9C
void load(class xBase & data /* r16 */, class xDynAsset & asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x299B30 -> 0x299C9C
    }
}


