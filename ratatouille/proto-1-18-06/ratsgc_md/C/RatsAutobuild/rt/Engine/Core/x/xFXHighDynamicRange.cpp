/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFXHighDynamicRange.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80104610 -> 0x801060C0
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
unsigned char HDR_brightening; // size: 0x1, address: 0x803C28D0
static float overbrighten; // size: 0x4, address: 0x803BE4C0
static float overbrighten_decay; // size: 0x4, address: 0x803BE4C4
static int downsamples; // size: 0x4, address: 0x803BE4C8
static unsigned char blur_faster; // size: 0x1, address: 0x803BE4CC
static float colorize_red; // size: 0x4, address: 0x803BE4D0
static float colorize_green; // size: 0x4, address: 0x803BE4D4
static float colorize_blue; // size: 0x4, address: 0x803BE4D8
static float colorize_alpha; // size: 0x4, address: 0x803BE4DC
// Range: 0x80104610 -> 0x80104614
static void add_tweaks() {}

static unsigned char enabled; // size: 0x1, address: 0x803BE4E0
static int background_glow_normal; // size: 0x4, address: 0x803C28D4
static int background_darken_normal; // size: 0x4, address: 0x803C28D8
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
static struct interpolator background_glow; // size: 0x18, address: 0x803C28DC
static struct interpolator background_darken; // size: 0x18, address: 0x803C28F4
// total size: 0x10
struct _RwUInt128 {
    // Members
    unsigned long long top; // offset 0x0, size 0x8
    unsigned long long bottom; // offset 0x8, size 0x8
};
// Range: 0x80104614 -> 0x80104628
void xFXHighDynamicRangeSetColorize(float r /* f0 */, float g /* f0 */, float b /* f0 */, float alpha /* f0 */) {
    // References
    // -> static float colorize_alpha;
    // -> static float colorize_blue;
    // -> static float colorize_green;
    // -> static float colorize_red;
}

// Range: 0x80104628 -> 0x80104668
void xFXHighDynamicRangeInit() {
    // References
    // -> static int background_darken_normal;
    // -> static int background_glow_normal;
    // -> static unsigned char enabled;
}

// Range: 0x80104668 -> 0x8010466C
static void add_global_tweaks() {}

// Range: 0x8010466C -> 0x80104670
void xFXHighDynamicRangeSceneEnter() {}

// Range: 0x80104670 -> 0x80104674
void xFXHighDynamicRangeSceneExit() {}

// Range: 0x80104674 -> 0x801046B0
void xFXHighDynamicRangeReset() {
    // References
    // -> static int background_darken_normal;
    // -> static struct interpolator background_darken;
    // -> static int background_glow_normal;
    // -> static struct interpolator background_glow;
    // -> static unsigned char enabled;
}

// Range: 0x801046B0 -> 0x801046F4
// this: r0
static void interpolator::reset(int value /* r0 */) {}

void * RwEngineInstance; // size: 0x4, address: 0x803C4584
unsigned int FB_YRES; // size: 0x4, address: 0x803BE160
unsigned int FB_XRES; // size: 0x4, address: 0x803BE15C
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
// Range: 0x801046F4 -> 0x8010496C
void xFXHighDynamicRangeStartRender() {
    // Local variables
    unsigned int mask; // r31
    float rcz; // f31
    float nsz; // f30
    struct rwGameCube2DVertex verts[4]; // r1+0x1C
    struct xColor_tag clearcolor; // r1+0x18
    unsigned char alpha_glow; // r31

    // References
    // -> static struct interpolator background_glow;
    // -> void * RwEngineInstance;
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
    // -> unsigned char HDR_brightening;
    // -> static unsigned char enabled;
}

// Range: 0x8010496C -> 0x801049A4
static void set_vert(struct rwGameCube2DVertex & vert /* r0 */, float x /* f0 */, float y /* f0 */, float u /* f0 */, float v /* f0 */, struct xColor_tag & color /* r0 */, float nsz /* f0 */) {}

int hdr_dump_efb; // size: 0x4, address: 0x803C290C
void * texData[8]; // size: 0x20, address: 0x803C2910
unsigned short sizes[9][2]; // size: 0x24, address: 0x803BE4E4
// Range: 0x801049A4 -> 0x80104B34
static void set_sample_offsets(unsigned short curSizeX /* r0 */, unsigned short curSizeY /* r0 */) {
    // Local variables
    float isizex; // f31
    float isizey; // f30
    float offsets[4][2]; // r1+0x28
    float matrix[2][4]; // r1+0x8
}

// total size: 0x20
struct _GXTexObj {
    // Members
    unsigned long dummy[8]; // offset 0x0, size 0x20
};
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
struct _GXRenderModeObj renderObject; // size: 0x3C, address: 0x803C1828
// total size: 0x4
struct _GXColor {
    // Members
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
// Range: 0x80104B58 -> 0x80105BD8
void xFXHighDynamicRangeRender() {
    // Local variables
    int i; // r24
    unsigned short curSizeX; // r31
    unsigned short curSizeY; // r30
    void * frame; // r29
    void * unaligned_frame; // r28
    float mProjection[4][4]; // r1+0x100
    float mIdentity[4][4]; // r1+0xC0
    struct _GXTexObj texObject; // r1+0xA0
    struct _GXTexObj texObject2; // r1+0x80
    int i; // r24
    struct _GXColor clamp_color; // r1+0x30
    struct _GXColor colorize; // r1+0x2C
    float overbrighten; // f31
    float alpha; // f1
    struct _GXColor scaleColor; // r1+0x28
    int i; // r26
    unsigned char ualpha; // r0
    float recombine_alpha; // f1
    struct _GXColor rwalpha; // r1+0x24
    char name[32]; // r1+0x60
    struct _GXTexObj screenBack; // r1+0x40
    unsigned char darken_alpha; // r0

    // References
    // -> int hdr_dump_efb;
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
    // -> static struct interpolator background_darken;
    // -> unsigned short sizes[9][2];
    // -> void * texData[8];
    // -> static int downsamples;
    // -> static float overbrighten_decay;
    // -> static float overbrighten;
    // -> static float colorize_alpha;
    // -> static float colorize_blue;
    // -> static float colorize_green;
    // -> static float colorize_red;
    // -> struct _GXRenderModeObj renderObject;
    // -> static unsigned char enabled;
}

// Range: 0x80105C00 -> 0x80105C04
void xFXHighDynamicRangeRestoreSettings() {}

// Range: 0x80105C04 -> 0x80105D1C
unsigned int xFXHighDynamicRangeBrightenPtank(unsigned char bright /* r31 */) {
    // Local variables
    unsigned char old_alpha_discard_value_gc; // r1+0x8

    // References
    // -> static struct interpolator background_glow;
    // -> void * RwEngineInstance;
}

// Range: 0x80105D1C -> 0x80105DB0
void xFXHighDynamicRangeRestorePtank(unsigned int oldtest /* r31 */) {}

// Range: 0x80105DB0 -> 0x80105DB4
void xFXHighDynamicRangeTunePalette() {}

// Range: 0x80105DB4 -> 0x80105DF0
void xFXHighDynamicRangeUpdate(float dt /* f31 */) {
    // References
    // -> static struct interpolator background_darken;
    // -> static struct interpolator background_glow;
}

// Range: 0x80105DF0 -> 0x80105E80
// this: r0
static void interpolator::update(float dt /* f0 */) {}

// Range: 0x80105E80 -> 0x80105E88
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
// Range: 0x80105E88 -> 0x80105ED8
void xFXHighDynamicRangeSetConfiguration(const struct xFXHighDynamicRangeConfiguration & configuration /* r0 */) {
    // References
    // -> static unsigned char blur_faster;
    // -> static int downsamples;
    // -> static float overbrighten_decay;
    // -> static float overbrighten;
    // -> static struct interpolator background_darken;
    // -> static struct interpolator background_glow;
}

// Range: 0x80105ED8 -> 0x80105EDC
static void refresh_blur_packets() {}

// Range: 0x80105EDC -> 0x80105F10
void xFXHighDynamicRangeGetConfiguration(struct xFXHighDynamicRangeConfiguration & configuration /* r0 */) {
    // References
    // -> static unsigned char blur_faster;
    // -> static int downsamples;
    // -> static float overbrighten_decay;
    // -> static float overbrighten;
    // -> static struct interpolator background_darken;
    // -> static struct interpolator background_glow;
}

// Range: 0x80105F10 -> 0x80105F14
void xFXHighDynamicRangeSetGlowClamp() {}

// Range: 0x80105F14 -> 0x80105F18
void xFXHighDynamicRangeResetGlowClamp() {}

// Range: 0x80105F18 -> 0x80105FA4
void xFXHighDynamicRangeSetBackground(int glow /* r3 */, int darken /* r31 */, float time /* f31 */) {
    // References
    // -> static struct interpolator background_darken;
    // -> static int background_darken_normal;
    // -> static struct interpolator background_glow;
    // -> static int background_glow_normal;
}

// Range: 0x80105FA4 -> 0x8010601C
// this: r3
static void interpolator::go(int value /* r4 */, float time /* f0 */) {}

// Range: 0x8010601C -> 0x801060C0
void xFXHighDynamicRangeSetBackgroundDefault(int glow /* r3 */, int darken /* r4 */, unsigned char apply /* r0 */) {
    // References
    // -> static int background_darken_normal;
    // -> static struct interpolator background_darken;
    // -> static struct interpolator background_glow;
    // -> static int background_glow_normal;
}


