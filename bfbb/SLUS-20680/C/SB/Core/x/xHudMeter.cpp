/*
    Compile unit: C:\SB\Core\x\xHudMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class basic_rect screen_bounds; // size: 0x10, address: 0x0
static class basic_rect default_adjust; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
// total size: 0x28
struct /* @anon0 */ {} xhud::meter_widget::__vtable; // size: 0x28, address: 0x508DD0
// total size: 0x28
struct /* @anon1 */ {} xhud::widget::__vtable; // size: 0x28, address: 0x508D70
// total size: 0x28
class motive_node {
    // Members
public:
    class motive m; // offset 0x0, size 0x24
    class motive_node * next; // offset 0x24, size 0x4
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
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
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
class asset : public xDynAsset {
    // Members
public:
    class xVec3 loc; // offset 0x10, size 0xC
    class xVec3 size; // offset 0x1C, size 0xC
};
// total size: 0xC
class xVec3 {
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
// total size: 0x28
struct /* @anon0 */ {};
// total size: 0x2
class /* @class */ {
    // Members
public:
    unsigned char visible; // offset 0x0, size 0x1
    unsigned char enabled; // offset 0x1, size 0x1
};
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
enum /* @enum */ {
    ACT_NONE = 0,
    ACT_SHOW = 1,
    ACT_HIDE = 2,
    MAX_ACT = 3,
};
// total size: 0x1C
class sound_queue {
    // Members
public:
    unsigned int _playing[5]; // offset 0x0, size 0x14
    signed int head; // offset 0x14, size 0x4
    signed int tail; // offset 0x18, size 0x4
};

/*
    Compile unit: C:\SB\Core\x\xHudMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00299CB0 -> 0x0029A050
*/
// Range: 0x299CB0 -> 0x29A050
// this: r17
void meter_widget::updater(float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x299CB0 -> 0x29A050
        float old_value; // r20
        float pitch; // r29+0x50
        float min_ping_time; // r3
        float pitch; // r29+0x50
        float min_ping_time; // r3
    }
}


/*
    Compile unit: C:\SB\Core\x\xHudMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029A050 -> 0x0029A0BC
*/
// Range: 0x29A050 -> 0x29A0BC
// this: r17
unsigned char meter_widget::is(unsigned int id /* r16 */) {
    /* anonymous block */ {
        // Range: 0x29A050 -> 0x29A0BC
        unsigned int myid; // @ 0x0050FDD8
        signed char @3750; // @ 0x0050FDDC
    }
}


/*
    Compile unit: C:\SB\Core\x\xHudMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029A0C0 -> 0x0029A0F8
*/
// Range: 0x29A0C0 -> 0x29A0F8
unsigned int type() {
    /* anonymous block */ {
        // Range: 0x29A0C0 -> 0x29A0F8
    }
}


/*
    Compile unit: C:\SB\Core\x\xHudMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029A100 -> 0x0029A108
*/
// Range: 0x29A100 -> 0x29A108
// this: r2
void meter_widget::destruct() {
    /* anonymous block */ {
        // Range: 0x29A100 -> 0x29A108
    }
}


/*
    Compile unit: C:\SB\Core\x\xHudMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029A110 -> 0x0029A188
*/
// Range: 0x29A110 -> 0x29A188
// this: r17
meter_widget::meter_widget(class meter_asset & a /* r16 */) {
    /* anonymous block */ {
        // Range: 0x29A110 -> 0x29A188
    }
}


/*
    Compile unit: C:\SB\Core\x\xHudMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029A190 -> 0x0029A1A0
*/
// Range: 0x29A190 -> 0x29A1A0
// this: r2
void meter_widget::set_value_immediate(float v /* r29 */) {
    /* anonymous block */ {
        // Range: 0x29A190 -> 0x29A1A0
    }
}


/*
    Compile unit: C:\SB\Core\x\xHudMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029A1A0 -> 0x0029A3CC
*/
// Range: 0x29A1A0 -> 0x29A3CC
// this: r16
void meter_widget::set_value(float v /* r22 */) {
    /* anonymous block */ {
        // Range: 0x29A1A0 -> 0x29A3CC
        float dvalue; // r20
        float sign; // r21
    }
}


