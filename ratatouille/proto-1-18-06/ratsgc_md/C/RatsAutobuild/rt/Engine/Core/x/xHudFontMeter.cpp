/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xHudFontMeter.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003EE24 -> 0x8003F244
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
static struct basic_rect screen_bounds; // size: 0x10, address: 0x803C4EB8
// total size: 0x24
struct font_context {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    int justify; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
    float space; // offset 0x10, size 0x4
    float drop_x; // offset 0x14, size 0x4
    float drop_y; // offset 0x18, size 0x4
    struct xColor_tag c; // offset 0x1C, size 0x4
    struct xColor_tag drop_c; // offset 0x20, size 0x4
};
// total size: 0x150
class font_meter_widget : public meter_widget {
    // Functions
    font_meter_widget(const struct font_meter_asset & a);

    void destruct();

    void destroy();

    unsigned char is(unsigned int id) const;

    void update(float dt);

    void render();

    // Members
public:
    struct font_context font; // offset 0xC4, size 0x24
    struct font_context start_font; // offset 0xE8, size 0x24
    int precision; // offset 0x10C, size 0x4
protected:
    char buffer[12]; // offset 0x110, size 0xC
    int last_value; // offset 0x11C, size 0x4
    class xfont xf; // offset 0x120, size 0x30
};
// Range: 0x8003EE24 -> 0x8003EE74
void font_meter_widget::load(struct xBase & data /* r30 */, struct xDynAsset & asset /* r31 */) {}

// total size: 0x28
struct {} xhud::font_meter_widget::__vtable; // size: 0x28, address: 0x803BD740
// Range: 0x8003EE74 -> 0x8003EF58
// this: r31
font_meter_widget::font_meter_widget(const struct font_meter_asset & a /* r30 */) {
    // References
    // -> static struct basic_rect screen_bounds;
    // -> struct [anonymous] xhud::font_meter_widget::__vtable;
}

// total size: 0x10
struct /* @class$834xHudFontMeter_cpp */ {
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
    struct /* @class$834xHudFontMeter_cpp */ {
        // Members
        unsigned int start_increment; // offset 0x0, size 0x4
        unsigned int increment; // offset 0x4, size 0x4
        unsigned int start_decrement; // offset 0x8, size 0x4
        unsigned int decrement; // offset 0xC, size 0x4
    } sound; // offset 0x3C, size 0x10
};
enum xSndHandle {
};
enum iSndGroupHandle {
};
// total size: 0x0
struct xEnt {};
// total size: 0x1C
class sound_queue {
    // Members
    enum xSndHandle _playing[5]; // offset 0x0, size 0x14
    int head; // offset 0x14, size 0x4
    int tail; // offset 0x18, size 0x4
};
// total size: 0xC4
class meter_widget : public widget {
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
// total size: 0x8
struct /* @class$858xHudFontMeter_cpp */ {
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
enum /* @enum$859xHudFontMeter_cpp */ {
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
    struct /* @class$858xHudFontMeter_cpp */ {
        // Members
        unsigned char visible; // offset 0x0, size 0x1
        unsigned char enabled; // offset 0x1, size 0x1
        unsigned char active; // offset 0x2, size 0x1
        float timer; // offset 0x4, size 0x4
    } flag; // offset 0x0, size 0x8
    struct render_context rc; // offset 0x8, size 0x34
    struct render_context start_rc; // offset 0x3C, size 0x34
    const struct asset * a; // offset 0x70, size 0x4
    enum /* @enum$859xHudFontMeter_cpp */ {
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
// Range: 0x8003EF58 -> 0x8003EF78
// this: r0
void font_meter_widget::destruct() {}

// Range: 0x8003EF78 -> 0x8003EF98
// this: r0
void font_meter_widget::destroy() {}

static unsigned int myid; // size: 0x4, address: 0x803C0F30
static signed char init; // size: 0x1, address: 0x803C0F34
// Range: 0x8003EF98 -> 0x8003EFD8
unsigned int font_meter_widget::type() {
    // References
    // -> static unsigned int myid;
    // -> static signed char init;
}

// total size: 0x70
struct font_meter_asset : public meter_asset {
    // Members
    struct font_context font; // offset 0x4C, size 0x24
};
// Range: 0x8003EFD8 -> 0x8003F030
// this: r29
unsigned char font_meter_widget::is(unsigned int id /* r30 */) const {}

// Range: 0x8003F030 -> 0x8003F19C
// this: r31
void font_meter_widget::update(float dt /* f0 */) {
    // Local variables
    float a; // f1
    int new_value; // r5
}

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
struct xColor_tag g_BLACK; // size: 0x4, address: 0x803C4840
// Range: 0x8003F19C -> 0x8003F244
// this: r31
void font_meter_widget::render() {
    // References
    // -> struct xColor_tag g_BLACK;
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

