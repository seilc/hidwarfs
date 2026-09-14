/*
    Compile unit: C:\TestBuild\in\Core\x\xHudFontMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class basic_rect screen_bounds; // size: 0x10, address: 0x5E7D10
static class basic_rect default_adjust; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
// total size: 0x28
struct /* @anon2 */ {} xhud::font_meter_widget::__vtable; // size: 0x28, address: 0x5FD110
class xColor_tag g_BLACK; // size: 0x4, address: 0x5E7208
// total size: 0x28
struct /* @anon1 */ {} xhud::widget::__vtable; // size: 0x28, address: 0x5FD0E0
// total size: 0x28
struct /* @anon0 */ {} xhud::meter_widget::__vtable; // size: 0x28, address: 0x5FD140
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
// total size: 0x70
class font_meter_asset : public meter_asset {
    // Members
public:
    class font_context font; // offset 0x4C, size 0x24
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
// total size: 0x150
class font_meter_widget : public meter_widget {
    // Members
public:
    class font_context font; // offset 0xC4, size 0x24
    class font_context start_font; // offset 0xE8, size 0x24
    signed int precision; // offset 0x10C, size 0x4
    char buffer[12]; // offset 0x110, size 0xC
    signed int last_value; // offset 0x11C, size 0x4
    class xfont xf; // offset 0x120, size 0x30
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
// total size: 0xC4
class meter_widget : public widget {
    // Members
public:
    class meter_asset * res; // offset 0x88, size 0x4
    float value; // offset 0x8C, size 0x4
    float min_value; // offset 0x90, size 0x4
    float max_value; // offset 0x94, size 0x4
    float inc_value; // offset 0x98, size 0x4
    float end_value; // offset 0x9C, size 0x4
    float inc_accel; // offset 0xA0, size 0x4
    float ping_delay; // offset 0xA4, size 0x4
    class sound_queue pings; // offset 0xA8, size 0x1C
};
// total size: 0x28
struct /* @anon0 */ {};
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
// total size: 0x28
struct /* @anon1 */ {};
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
enum iSndHandle {
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
// total size: 0x1C
class sound_queue {
    // Members
public:
    enum iSndHandle _playing[5]; // offset 0x0, size 0x14
    signed int head; // offset 0x14, size 0x4
    signed int tail; // offset 0x18, size 0x4
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
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
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
    class xColor_tag c; // offset 0x1C, size 0x4
    class xColor_tag drop_c; // offset 0x20, size 0x4
};
// total size: 0x0
class motive_node {};
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
enum /* @enum */ {
    ACT_NONE = 0,
    ACT_SHOW = 1,
    ACT_HIDE = 2,
    MAX_ACT = 3,
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xHudFontMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001CB520 -> 0x001CB65C
*/
// Range: 0x1CB520 -> 0x1CB65C
// this: r16
void font_meter_widget::render() {
    /* anonymous block */ {
        // Range: 0x1CB520 -> 0x1CB65C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudFontMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001CB660 -> 0x001CB878
*/
// Range: 0x1CB660 -> 0x1CB878
// this: r16
void font_meter_widget::update(float dt /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x1CB660 -> 0x1CB878
        float a; // r29+0x20
        signed int new_value; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudFontMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001CB880 -> 0x001CB8F8
*/
// Range: 0x1CB880 -> 0x1CB8F8
// this: r17
unsigned char font_meter_widget::is(unsigned int id /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1CB880 -> 0x1CB8F8
        signed char @4455; // @ 0x00608BC8
        unsigned int myid; // @ 0x00608BC4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudFontMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001CB900 -> 0x001CB940
*/
// Range: 0x1CB900 -> 0x1CB940
unsigned int type() {
    /* anonymous block */ {
        // Range: 0x1CB900 -> 0x1CB940
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudFontMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001CB940 -> 0x001CB948
*/
// Range: 0x1CB940 -> 0x1CB948
// this: r2
void font_meter_widget::destroy() {
    /* anonymous block */ {
        // Range: 0x1CB940 -> 0x1CB948
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xHudFontMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001CB950 -> 0x001CBAB8
*/
// Range: 0x1CB950 -> 0x1CBAB8
void load(class xBase & data /* r16 */, class xDynAsset & asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1CB950 -> 0x1CBAB8
    }
}


