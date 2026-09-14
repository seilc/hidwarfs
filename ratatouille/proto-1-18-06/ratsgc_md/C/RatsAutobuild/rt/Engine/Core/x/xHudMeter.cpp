/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xHudMeter.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003F2B4 -> 0x8003F660
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
static float tweak_accel; // size: 0x4, address: 0x803BD768
static float tweak_min_ping_time; // size: 0x4, address: 0x803BD76C
static float tweak_pitch_scale; // size: 0x4, address: 0x803BD770
// total size: 0xC4
class meter_widget : public widget {
    // Functions
    meter_widget(const struct meter_asset & a);

    void destruct();

    unsigned char is(unsigned int id) const;

    void updater(float dt);

    // Members
public:
    const struct meter_asset * res; // offset 0x88, size 0x4
    float value; // offset 0x8C, size 0x4
    float min_value; // offset 0x90, size 0x4
    float max_value; // offset 0x94, size 0x4
    float inc_value; // offset 0x98, size 0x4
    float end_value; // offset 0x9C, size 0x4
    float inc_accel; // offset 0xA0, size 0x4
    float ping_delay; // offset 0xA4, size 0x4
protected:
    class sound_queue pings; // offset 0xA8, size 0x1C
};
static unsigned char registered; // size: 0x1, address: 0x803C0F38
static signed char init; // size: 0x1, address: 0x803C0F39
// total size: 0x28
struct {} xhud::meter_widget::__vtable; // size: 0x28, address: 0x803BD774
// Range: 0x8003F2B4 -> 0x8003F3CC
// this: r30
meter_widget::meter_widget(const struct meter_asset & a /* r31 */) {
    // References
    // -> static float tweak_pitch_scale;
    // -> static float tweak_min_ping_time;
    // -> static float tweak_accel;
    // -> static unsigned char registered;
    // -> static signed char init;
    // -> struct [anonymous] xhud::meter_widget::__vtable;
}

// total size: 0x1C
class sound_queue {
    // Members
    enum xSndHandle _playing[5]; // offset 0x0, size 0x14
    int head; // offset 0x14, size 0x4
    int tail; // offset 0x18, size 0x4
};
// total size: 0x8
struct /* @class$858xHudMeter_cpp */ {
    // Members
    unsigned char visible; // offset 0x0, size 0x1
    unsigned char enabled; // offset 0x1, size 0x1
    unsigned char active; // offset 0x2, size 0x1
    float timer; // offset 0x4, size 0x4
};
// total size: 0xC
struct RwV3d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0xC
struct xVec3 {
    // Static members
    static struct xVec3 m_NegDoubleVec; // size: 0xC
    static struct xVec3 m_DoubleVec; // size: 0xC
    static struct xVec3 m_NegHalfVec; // size: 0xC
    static struct xVec3 m_HalfVec; // size: 0xC
    static struct xVec3 m_UnitAxisZ; // size: 0xC
    static struct xVec3 m_UnitAxisY; // size: 0xC
    static struct xVec3 m_UnitAxisX; // size: 0xC
    static struct xVec3 m_NegOnes; // size: 0xC
    static struct xVec3 m_Ones; // size: 0xC
    static struct xVec3 m_Null; // size: 0xC

    // Members
    union { // inferred
        struct RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
// total size: 0x34
struct render_context {
    // Members
    struct xVec3 loc; // offset 0x0, size 0xC
    struct xVec3 size; // offset 0xC, size 0xC
    struct xVec3 rot; // offset 0x18, size 0xC
    float r; // offset 0x24, size 0x4
    float g; // offset 0x28, size 0x4
    float b; // offset 0x2C, size 0x4
    float a; // offset 0x30, size 0x4
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
// total size: 0x28
struct asset : public xDynAsset {
    // Members
    struct xVec3 loc; // offset 0x10, size 0xC
    struct xVec3 size; // offset 0x1C, size 0xC
};
enum /* @enum$859xHudMeter_cpp */ {
    ACT_NONE = 0,
    ACT_SHOW = 1,
    ACT_HIDE = 2,
    MAX_ACT = 3,
};
// total size: 0x0
struct motive_node {};
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
// total size: 0x0
struct holder {};
// total size: 0x10
class block_allocator {
    // Members
    int block_size; // offset 0x0, size 0x4
    int max_blocks; // offset 0x4, size 0x4
    struct holder * head; // offset 0x8, size 0x4
    void * buffer; // offset 0xC, size 0x4
};
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
// total size: 0x30
struct motive {
    // Members
    union { // inferred
        float * value; // offset 0x0, size 0x4
        float time_to_blink; // offset 0x0, size 0x4
    };
    union { // inferred
        float delta; // offset 0x4, size 0x4
        float start_blink_period; // offset 0x4, size 0x4
    };
    union { // inferred
        float max_offset; // offset 0x8, size 0x4
        float begin_scale; // offset 0x8, size 0x4
        float end_blink_period; // offset 0x8, size 0x4
    };
    union { // inferred
        float accel; // offset 0xC, size 0x4
        float final_scale; // offset 0xC, size 0x4
        float fade_blink_time; // offset 0xC, size 0x4
    };
    union { // inferred
        void * context; // offset 0x10, size 0x4
        float begin_alpha; // offset 0x10, size 0x4
        struct xColor_tag on_blink_color; // offset 0x10, size 0x4
    };
    union { // inferred
        float period; // offset 0x14, size 0x4
        float end_alpha; // offset 0x14, size 0x4
        struct xColor_tag off_blink_color; // offset 0x14, size 0x4
    };
    union { // inferred
        float elapsed; // offset 0x18, size 0x4
        float orig_width; // offset 0x18, size 0x4
    };
    union { // inferred
        float offset; // offset 0x1C, size 0x4
        float current_scale; // offset 0x1C, size 0x4
        float current_blink_time; // offset 0x1C, size 0x4
    };
    unsigned char (* fp_update)(class widget &, struct motive &, float); // offset 0x20, size 0x4
    unsigned char (* fp_finish)(class widget &, struct motive &); // offset 0x24, size 0x4
    union { // inferred
        float start_delta; // offset 0x28, size 0x4
        float orig_height; // offset 0x28, size 0x4
        float period_blink_time; // offset 0x28, size 0x4
    };
    unsigned char hold; // offset 0x2C, size 0x1
    unsigned char inverse; // offset 0x2D, size 0x1
};
enum move_direction {
    LEFT = 0,
    RIGHT = 1,
    TOP = 2,
    BOTTOM = 3,
};
// total size: 0x88
class widget {
    // Static members
    static class block_allocator motive_allocator; // size: 0x10

    // Members
public:
    // total size: 0x8
    struct /* @class$858xHudMeter_cpp */ {
        // Members
        unsigned char visible; // offset 0x0, size 0x1
        unsigned char enabled; // offset 0x1, size 0x1
        unsigned char active; // offset 0x2, size 0x1
        float timer; // offset 0x4, size 0x4
    } flag; // offset 0x0, size 0x8
    struct render_context rc; // offset 0x8, size 0x34
    struct render_context start_rc; // offset 0x3C, size 0x34
    const struct asset * a; // offset 0x70, size 0x4
    enum /* @enum$859xHudMeter_cpp */ {
        ACT_NONE = 0,
        ACT_SHOW = 1,
        ACT_HIDE = 2,
        MAX_ACT = 3,
    } activity; // offset 0x74, size 0x4
    void * __vptr$; // offset 0x78, size 0x4
private:
    struct motive_node * _motive_top; // offset 0x7C, size 0x4
    struct motive_node * _motive_temp; // offset 0x80, size 0x4
    struct motive_node * * _motive_temp_tail; // offset 0x84, size 0x4
};
// Range: 0x8003F3CC -> 0x8003F3EC
// this: r0
void meter_widget::destruct() {}

static unsigned int myid; // size: 0x4, address: 0x803C0F3C
static signed char init; // size: 0x1, address: 0x803C0F40
// Range: 0x8003F3EC -> 0x8003F42C
unsigned int meter_widget::type() {
    // References
    // -> static unsigned int myid;
    // -> static signed char init;
}

// total size: 0x10
struct /* @class$834xHudMeter_cpp */ {
    // Members
    unsigned int start_increment; // offset 0x0, size 0x4
    unsigned int increment; // offset 0x4, size 0x4
    unsigned int start_decrement; // offset 0x8, size 0x4
    unsigned int decrement; // offset 0xC, size 0x4
};
// total size: 0x4C
struct meter_asset : public asset {
    // Members
    float start_value; // offset 0x28, size 0x4
    float min_value; // offset 0x2C, size 0x4
    float max_value; // offset 0x30, size 0x4
    float increment_time; // offset 0x34, size 0x4
    float decrement_time; // offset 0x38, size 0x4
    // total size: 0x10
    struct /* @class$834xHudMeter_cpp */ {
        // Members
        unsigned int start_increment; // offset 0x0, size 0x4
        unsigned int increment; // offset 0x4, size 0x4
        unsigned int start_decrement; // offset 0x8, size 0x4
        unsigned int decrement; // offset 0xC, size 0x4
    } sound; // offset 0x3C, size 0x10
};
// Range: 0x8003F42C -> 0x8003F484
// this: r29
unsigned char meter_widget::is(unsigned int id /* r30 */) const {}

// Range: 0x8003F484 -> 0x8003F660
// this: r31
void meter_widget::updater(float dt /* f31 */) {
    // Local variables
    float old_value; // f3
    float pitch; // r1+0xC
    float pitch; // r1+0x8

    // References
    // -> static float tweak_pitch_scale;
    // -> static float tweak_min_ping_time;
}

enum iSndGroupHandle {
};
// total size: 0x0
struct xEnt {};
enum xSndHandle {
};

