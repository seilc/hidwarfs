/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFXHighDynamicRange.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801FD460 -> 0x802000FC
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
unsigned char HDR_brightening; // size: 0x1, address: 0x80D6AD78
// Range: 0x801FD460 -> 0x801FD480
static void on_refresh_blur() {}

// Range: 0x801FD480 -> 0x801FD484
static void refresh_blur_packets() {}

static int background_glow_default; // size: 0x4, address: 0x80D6AD7C
static int background_darken_default; // size: 0x4, address: 0x80D64440
static int clamp_glow; // size: 0x4, address: 0x80D6AD80
static int preserve_glow; // size: 0x4, address: 0x80D6AD84
static float overbrighten; // size: 0x4, address: 0x80D64444
static float overbrighten_decay; // size: 0x4, address: 0x80D64448
static float overbrighten_diminish; // size: 0x4, address: 0x80D6444C
static float blur_offset; // size: 0x4, address: 0x80D6AD88
static float recombine; // size: 0x4, address: 0x80D64450
static float random_blur_offset; // size: 0x4, address: 0x80D6AD8C
static int downsamples; // size: 0x4, address: 0x80D64454
static unsigned char render; // size: 0x1, address: 0x80D64458
static unsigned char blur_faster; // size: 0x1, address: 0x80D64459
static float colorize_red; // size: 0x4, address: 0x80D6445C
static float colorize_green; // size: 0x4, address: 0x80D64460
static float colorize_blue; // size: 0x4, address: 0x80D64464
static float colorize_alpha; // size: 0x4, address: 0x80D64468
static float hdr_offset; // size: 0x4, address: 0x80D6446C
static int stress_test; // size: 0x4, address: 0x80D6AD90
static float stress_test_u; // size: 0x4, address: 0x80D6AD94
static float stress_test_v; // size: 0x4, address: 0x80D6AD98
static int optimal_dst_width; // size: 0x4, address: 0x80D64470
static int optimal_src_width; // size: 0x4, address: 0x80D64474
static int strips; // size: 0x4, address: 0x80D6AD9C
static float strip_width; // size: 0x4, address: 0x80D6ADA0
static unsigned char force_background_to_default; // size: 0x1, address: 0x80D6ADA4
static float test_fade_time; // size: 0x4, address: 0x80D64478
static int test_fade_glow; // size: 0x4, address: 0x80D6447C
static int test_fade_darken; // size: 0x4, address: 0x80D64480
static unsigned char render_blur_texture0; // size: 0x1, address: 0x80D6ADA5
static unsigned char skip_screen_render; // size: 0x1, address: 0x80D6ADA6
static float test_uoffset; // size: 0x4, address: 0x80D6ADA8
static float test_voffset; // size: 0x4, address: 0x80D6ADAC
// Range: 0x801FD484 -> 0x801FD4B0
static void on_test_fade() {
    // References
    // -> static float test_fade_time;
    // -> static int test_fade_darken;
    // -> static int test_fade_glow;
}

// Range: 0x801FD4B0 -> 0x801FD4DC
static void on_reset_background() {
    // References
    // -> static int test_fade_darken;
    // -> static int test_fade_glow;
}

// total size: 0x8
struct substr {
    // Members
    const char * text; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
// total size: 0xC
struct /* @class$771xFXHighDynamicRange_cpp */ {
    // Members
    int value_def; // offset 0x0, size 0x4
    int value_min; // offset 0x4, size 0x4
    int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$772xFXHighDynamicRange_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int value_min; // offset 0x4, size 0x4
    unsigned int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$773xFXHighDynamicRange_cpp */ {
    // Members
    float value_def; // offset 0x0, size 0x4
    float value_min; // offset 0x4, size 0x4
    float value_max; // offset 0x8, size 0x4
};
// total size: 0x1
struct /* @class$774xFXHighDynamicRange_cpp */ {
    // Members
    unsigned char value_def; // offset 0x0, size 0x1
};
// total size: 0x10
struct /* @class$775xFXHighDynamicRange_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int labels_size; // offset 0x4, size 0x4
    const char * * labels; // offset 0x8, size 0x4
    void * values; // offset 0xC, size 0x4
};
// total size: 0x8
struct /* @class$776xFXHighDynamicRange_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
};
// total size: 0x10
struct /* @class$777xFXHighDynamicRange_cpp */ {
    // Members
    unsigned char pad[16]; // offset 0x0, size 0x10
};
// total size: 0x28
struct tweak_info {
    // Members
    struct substr name; // offset 0x0, size 0x8
    void * value; // offset 0x8, size 0x4
    const struct tweak_callback * cb; // offset 0xC, size 0x4
    void * context; // offset 0x10, size 0x4
    unsigned char type; // offset 0x14, size 0x1
    unsigned char value_size; // offset 0x15, size 0x1
    unsigned short flags; // offset 0x16, size 0x2
    union { // inferred
        // total size: 0xC
        struct /* @class$771xFXHighDynamicRange_cpp */ {
            // Members
            int value_def; // offset 0x0, size 0x4
            int value_min; // offset 0x4, size 0x4
            int value_max; // offset 0x8, size 0x4
        } int_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$772xFXHighDynamicRange_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int value_min; // offset 0x4, size 0x4
            unsigned int value_max; // offset 0x8, size 0x4
        } uint_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$773xFXHighDynamicRange_cpp */ {
            // Members
            float value_def; // offset 0x0, size 0x4
            float value_min; // offset 0x4, size 0x4
            float value_max; // offset 0x8, size 0x4
        } float_context; // offset 0x18, size 0xC
        // total size: 0x1
        struct /* @class$774xFXHighDynamicRange_cpp */ {
            // Members
            unsigned char value_def; // offset 0x0, size 0x1
        } bool_context; // offset 0x18, size 0x1
        // total size: 0x10
        struct /* @class$775xFXHighDynamicRange_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int labels_size; // offset 0x4, size 0x4
            const char * * labels; // offset 0x8, size 0x4
            void * values; // offset 0xC, size 0x4
        } select_context; // offset 0x18, size 0x10
        // total size: 0x8
        struct /* @class$776xFXHighDynamicRange_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int mask; // offset 0x4, size 0x4
        } flag_context; // offset 0x18, size 0x8
        // total size: 0x10
        struct /* @class$777xFXHighDynamicRange_cpp */ {
            // Members
            unsigned char pad[16]; // offset 0x0, size 0x10
        } all_context; // offset 0x18, size 0x10
    };
};
// total size: 0x28
struct tweak_callback {
    // Members
    void (* on_change)(struct tweak_info &); // offset 0x0, size 0x4
    void (* on_select)(struct tweak_info &); // offset 0x4, size 0x4
    void (* on_unselect)(struct tweak_info &); // offset 0x8, size 0x4
    void (* on_start_edit)(struct tweak_info &); // offset 0xC, size 0x4
    void (* on_stop_edit)(struct tweak_info &); // offset 0x10, size 0x4
    void (* on_expand)(struct tweak_info &); // offset 0x14, size 0x4
    void (* on_collapse)(struct tweak_info &); // offset 0x18, size 0x4
    void (* on_update)(struct tweak_info &); // offset 0x1C, size 0x4
    void (* convert_mem_to_tweak)(struct tweak_info &, void *); // offset 0x20, size 0x4
    void (* convert_tweak_to_mem)(struct tweak_info &, void *); // offset 0x24, size 0x4
};
static struct tweak_callback cb_test_fade; // size: 0x28, address: 0x804B9E18
static struct tweak_callback cb_reset_background; // size: 0x28, address: 0x804B9E40
static struct tweak_callback cb_refresh_blur; // size: 0x28, address: 0x804B9E68
// Range: 0x801FD4DC -> 0x801FDBF8
static void add_tweaks() {
    // Local variables
    const char * prefix; // r31

    // References
    // -> static struct tweak_callback cb_reset_background;
    // -> static struct tweak_callback cb_test_fade;
    // -> static float test_voffset;
    // -> static float test_uoffset;
    // -> static unsigned char skip_screen_render;
    // -> static unsigned char render_blur_texture0;
    // -> static int test_fade_darken;
    // -> static int test_fade_glow;
    // -> static float test_fade_time;
    // -> static unsigned char force_background_to_default;
    // -> static float strip_width;
    // -> static int strips;
    // -> static int optimal_src_width;
    // -> static int optimal_dst_width;
    // -> static float stress_test_v;
    // -> static float stress_test_u;
    // -> static int stress_test;
    // -> static float hdr_offset;
    // -> static float colorize_alpha;
    // -> static float colorize_blue;
    // -> static float colorize_green;
    // -> static float colorize_red;
    // -> static struct tweak_callback cb_refresh_blur;
    // -> static unsigned char blur_faster;
    // -> static unsigned char render;
    // -> static int downsamples;
    // -> static float random_blur_offset;
    // -> static float recombine;
    // -> static float blur_offset;
    // -> static float overbrighten_diminish;
    // -> static float overbrighten_decay;
    // -> static float overbrighten;
    // -> static int preserve_glow;
    // -> static int clamp_glow;
    // -> static int background_darken_default;
    // -> static int background_glow_default;
}

// total size: 0x10
struct xFRect {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
static struct xFRect downs[6]; // size: 0x60, address: 0x80522FF0
static unsigned char enabled; // size: 0x1, address: 0x80D64484
static int background_glow_normal; // size: 0x4, address: 0x80D6ADB0
static int background_darken_normal; // size: 0x4, address: 0x80D6ADB4
// total size: 0x18
struct interpolator {
    // Functions
    static void reset(int value);

    static void update(float dt);

    static void go(int value, float time);

    // Members
    int value; // offset 0x0, size 0x4
    float start; // offset 0x4, size 0x4
    float end; // offset 0x8, size 0x4
    float current; // offset 0xC, size 0x4
    float t; // offset 0x10, size 0x4
    float trate; // offset 0x14, size 0x4
};
static struct interpolator background_glow; // size: 0x18, address: 0x80D180B0
static struct interpolator background_darken; // size: 0x18, address: 0x80D180C8
// total size: 0x10
struct _RwUInt128 {
    // Members
    unsigned long long top; // offset 0x0, size 0x8
    unsigned long long bottom; // offset 0x8, size 0x8
};
// Range: 0x801FDBF8 -> 0x801FDC0C
void xFXHighDynamicRangeSetColorize(float r /* f1 */, float g /* f2 */, float b /* f3 */, float alpha /* f4 */) {
    // References
    // -> static float colorize_alpha;
    // -> static float colorize_blue;
    // -> static float colorize_green;
    // -> static float colorize_red;
}

// Range: 0x801FDC0C -> 0x801FDC6C
static void add_global_tweaks() {
    // Local variables
    const char * prefix; // r31

    // References
    // -> static unsigned char enabled;
}

// Range: 0x801FDC6C -> 0x801FDCAC
void xFXHighDynamicRangeInit() {
    // References
    // -> static int background_darken_default;
    // -> static int background_darken_normal;
    // -> static int background_glow_default;
    // -> static int background_glow_normal;
    // -> static unsigned char enabled;
}

// Range: 0x801FDCAC -> 0x801FDCB0
void xFXHighDynamicRangeSceneEnter() {}

// Range: 0x801FDCB0 -> 0x801FDCB4
void xFXHighDynamicRangeSceneExit() {}

// Range: 0x801FDCB4 -> 0x801FDCF8
void xFXHighDynamicRangeReset() {
    // References
    // -> static int background_darken_normal;
    // -> static struct interpolator background_darken;
    // -> static int background_glow_normal;
    // -> static struct interpolator background_glow;
    // -> static unsigned char enabled;
}

// Range: 0x801FDCF8 -> 0x801FDD3C
// this: r3
static void interpolator::reset(int value /* r4 */) {}

unsigned int FB_YRES; // size: 0x4, address: 0x80D63018
unsigned int FB_XRES; // size: 0x4, address: 0x80D63014
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
// Range: 0x801FDD3C -> 0x801FE04C
void xFXHighDynamicRangeStartRender() {
    // Local variables
    unsigned int mask; // r29
    float rcz; // f31
    float nsz; // f30
    struct rwGameCube2DVertex verts[4]; // r1+0x1C
    struct xColor_tag clearcolor; // r1+0x18
    unsigned char alpha_glow; // r31

    // References
    // -> static struct interpolator background_glow;
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
    // -> unsigned char HDR_brightening;
    // -> static unsigned char enabled;
    // -> static unsigned char render;
}

// Range: 0x801FE04C -> 0x801FE084
static void set_vert(struct rwGameCube2DVertex & vert /* r3 */, float x /* f1 */, float y /* f2 */, float u /* f3 */, float v /* f4 */, struct xColor_tag & color /* r4 */, float nsz /* f6 */) {}

int hdr_dump_efb; // size: 0x4, address: 0x80D6ADB8
int hdr_use_raster; // size: 0x4, address: 0x80D64488
void * texData[8]; // size: 0x20, address: 0x80D180E0
unsigned short sizes[9][2]; // size: 0x24, address: 0x80523050
// Range: 0x801FE084 -> 0x801FE2B4
static void set_sample_offsets(unsigned short curSizeX /* r1+0x8 */, unsigned short curSizeY /* r1+0xA */) {
    // Local variables
    float isizex; // f30
    float isizey; // f29
    float hdr_offset; // f31
    float offsets[4][2]; // r1+0x2C
    float matrix[2][4]; // r1+0xC

    // References
    // -> static float hdr_offset;
}

// total size: 0x20
struct _GXTexObj {
    // Members
    unsigned long dummy[8]; // offset 0x0, size 0x20
};
// Range: 0x801FE2B4 -> 0x801FE41C
static void debug_render_card(void * tex /* r1+0x10 */, float x /* f30 */, float y /* f31 */, float w /* f28 */, float h /* f29 */) {
    // Local variables
    struct _GXTexObj tobj; // r1+0x20
}

static unsigned char done; // size: 0x1, address: 0x80D6ADBC
static signed char init; // size: 0x1, address: 0x80D6ADBD
static char __FUNCTION__[26]; // size: 0x1A, address: 0x80523074
enum VITVMode {
    VI_TVMODE_NTSC_INT = 0,
    VI_TVMODE_NTSC_DS = 1,
    VI_TVMODE_NTSC_PROG = 2,
    VI_TVMODE_PAL_INT = 4,
    VI_TVMODE_PAL_DS = 5,
    VI_TVMODE_EURGB60_INT = 20,
    VI_TVMODE_EURGB60_DS = 21,
    VI_TVMODE_MPAL_INT = 8,
    VI_TVMODE_MPAL_DS = 9,
    VI_TVMODE_DEBUG_INT = 12,
    VI_TVMODE_DEBUG_PAL_INT = 16,
    VI_TVMODE_DEBUG_PAL_DS = 17,
};
enum VIXFBMode {
    VI_XFBMODE_SF = 0,
    VI_XFBMODE_DF = 1,
};
// total size: 0x3C
struct _GXRenderModeObj {
    // Members
    enum VITVMode viTVmode; // offset 0x0, size 0x4
    unsigned short fbWidth; // offset 0x4, size 0x2
    unsigned short efbHeight; // offset 0x6, size 0x2
    unsigned short xfbHeight; // offset 0x8, size 0x2
    unsigned short viXOrigin; // offset 0xA, size 0x2
    unsigned short viYOrigin; // offset 0xC, size 0x2
    unsigned short viWidth; // offset 0xE, size 0x2
    unsigned short viHeight; // offset 0x10, size 0x2
    enum VIXFBMode xFBmode; // offset 0x14, size 0x4
    unsigned char field_rendering; // offset 0x18, size 0x1
    unsigned char aa; // offset 0x19, size 0x1
    unsigned char sample_pattern[12][2]; // offset 0x1A, size 0x18
    unsigned char vfilter[7]; // offset 0x32, size 0x7
};
struct _GXRenderModeObj renderObject; // size: 0x3C, address: 0x80CE47F8
// total size: 0x4
struct _GXColor {
    // Members
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
// Range: 0x801FE470 -> 0x801FFB0C
void xFXHighDynamicRangeRender() {
    // Local variables
    int i; // r29
    unsigned short sX; // r19
    unsigned short sY; // r18
    unsigned short curSizeX; // r30
    unsigned short curSizeY; // r31
    void * frame; // r21
    void * unaligned_frame; // r22
    float mProjection[4][4]; // r1+0x110
    float mIdentity[4][4]; // r1+0xD0
    struct _GXTexObj texObject; // r1+0xB0
    struct _GXTexObj texObject2; // r1+0x90
    int i; // r27
    struct _GXColor clamp_color; // r1+0x44
    int scale_back; // r25
    struct _GXColor colorize; // r1+0x40
    float overbrighten; // f29
    float alpha; // f30
    float resample_alpha; // f27
    int resamples; // r17
    struct _GXColor scaleColor; // r1+0x3C
    int i; // r28
    unsigned char ualpha; // r24
    float oy; // f28
    int final_raster; // r26
    float recombine; // f20
    float recombine_alpha; // f31
    struct _GXColor rwalpha; // r1+0x38
    char name[32]; // r1+0x70
    struct _GXTexObj screenBack; // r1+0x50
    unsigned char darken_alpha; // r23

    // References
    // -> int hdr_dump_efb;
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
    // -> void * texData[8];
    // -> static unsigned char render_blur_texture0;
    // -> static struct interpolator background_darken;
    // -> static unsigned char skip_screen_render;
    // -> unsigned short sizes[9][2];
    // -> static int downsamples;
    // -> int hdr_use_raster;
    // -> static unsigned char done;
    // -> static char __FUNCTION__[26];
    // -> static signed char init;
    // -> static float recombine;
    // -> static struct xFRect downs[6];
    // -> static float overbrighten_diminish;
    // -> static float overbrighten_decay;
    // -> static float overbrighten;
    // -> static float colorize_alpha;
    // -> static float colorize_blue;
    // -> static float colorize_green;
    // -> static float colorize_red;
    // -> static int clamp_glow;
    // -> struct _GXRenderModeObj renderObject;
    // -> static unsigned char enabled;
    // -> static unsigned char render;
}

// Range: 0x801FFB0C -> 0x801FFB10
void xFXHighDynamicRangeRestoreSettings() {}

// Range: 0x801FFB10 -> 0x801FFC40
unsigned int xFXHighDynamicRangeBrightenPtank(unsigned char bright /* r1+0x8 */) {
    // Local variables
    unsigned char old_alpha_discard_value_gc; // r1+0x9

    // References
    // -> static struct interpolator background_glow;
    // -> static unsigned char render;
}

// Range: 0x801FFC40 -> 0x801FFCE0
void xFXHighDynamicRangeRestorePtank(unsigned int oldtest /* r31 */) {
    // References
    // -> static unsigned char render;
}

// Range: 0x801FFCE0 -> 0x801FFCE4
void xFXHighDynamicRangeTunePalette() {}

// Range: 0x801FFCE4 -> 0x801FFD64
void xFXHighDynamicRangeUpdate(float dt /* f31 */) {
    // References
    // -> static int background_darken_normal;
    // -> static struct interpolator background_darken;
    // -> static int background_glow_normal;
    // -> static struct interpolator background_glow;
    // -> static int background_darken_default;
    // -> static int background_glow_default;
    // -> static unsigned char force_background_to_default;
}

// Range: 0x801FFD64 -> 0x801FFE18
// this: r3
static void interpolator::update(float dt /* f1 */) {
    // Local variables
    float s; // f31
}

// Range: 0x801FFE18 -> 0x801FFE28
int xFXHighDynamicRangeGetBackgroundGlow() {
    // References
    // -> static struct interpolator background_glow;
}

// total size: 0x18
struct xFXHighDynamicRangeConfiguration {
    // Members
    int glow; // offset 0x0, size 0x4
    int darken; // offset 0x4, size 0x4
    int downsamples; // offset 0x8, size 0x4
    float overbrighten; // offset 0xC, size 0x4
    float overbrighten_decay; // offset 0x10, size 0x4
    unsigned char blur_faster; // offset 0x14, size 0x1
};
// Range: 0x801FFE28 -> 0x801FFE90
void xFXHighDynamicRangeSetConfiguration(const struct xFXHighDynamicRangeConfiguration & configuration /* r31 */) {
    // References
    // -> static unsigned char blur_faster;
    // -> static int downsamples;
    // -> static float overbrighten_decay;
    // -> static float overbrighten;
    // -> static struct interpolator background_darken;
    // -> static struct interpolator background_glow;
}

// Range: 0x801FFE90 -> 0x801FFECC
void xFXHighDynamicRangeGetConfiguration(struct xFXHighDynamicRangeConfiguration & configuration /* r3 */) {
    // References
    // -> static unsigned char blur_faster;
    // -> static int downsamples;
    // -> static float overbrighten_decay;
    // -> static float overbrighten;
    // -> static struct interpolator background_darken;
    // -> static struct interpolator background_glow;
}

// Range: 0x801FFECC -> 0x801FFED0
void xFXHighDynamicRangeSetGlowClamp() {}

// Range: 0x801FFED0 -> 0x801FFED4
void xFXHighDynamicRangeResetGlowClamp() {}

// Range: 0x801FFED4 -> 0x801FFF70
void xFXHighDynamicRangeSetBackground(int glow /* r30 */, int darken /* r31 */, float time /* f31 */) {
    // References
    // -> static struct interpolator background_darken;
    // -> static int background_darken_normal;
    // -> static struct interpolator background_glow;
    // -> static int background_glow_normal;
}

// Range: 0x801FFF70 -> 0x80200020
// this: r31
static void interpolator::go(int value /* r30 */, float time /* f31 */) {}

// Range: 0x80200020 -> 0x802000FC
void xFXHighDynamicRangeSetBackgroundDefault(int glow /* r30 */, int darken /* r31 */, unsigned char apply /* r1+0x8 */) {
    // References
    // -> static int background_darken_normal;
    // -> static struct interpolator background_darken;
    // -> static int background_glow_normal;
    // -> static struct interpolator background_glow;
}


