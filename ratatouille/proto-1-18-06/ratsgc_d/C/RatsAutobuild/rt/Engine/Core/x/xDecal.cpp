/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDecal.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800440E0 -> 0x80050534
*/
char __FUNCTION__$localstatic1$xEntMotionGetSpeed__FPC10xEntMotion[19]; // size: 0x13, address: 0x80D5EF08
char __FUNCTION__$localstatic1$xEntSpeedDataSet__FP13xEntSpeedDataff[17]; // size: 0x11, address: 0x80D5EF1B
char __FUNCTION__$localstatic1$xEntMotionAccelerate__FP10xEntMotionff[21]; // size: 0x15, address: 0x804F22A8
char __FUNCTION__$localstatic1$xEntMPAtEnd__FP10xEntMotion[12]; // size: 0xC, address: 0x80D5EF2C
char __FUNCTION__$localstatic1$xEntMotionSetSpeed__FP10xEntMotionf[19]; // size: 0x13, address: 0x80D5EF38
char __FUNCTION__$localstatic1$xEntMotionReverse__FP10xEntMotion[18]; // size: 0x12, address: 0x80D5EF4B
char __FUNCTION__$localstatic1$insert__21xSpacePartitionTree2DFPvifff[7]; // size: 0x7, address: 0x80D5EF5D
char __FUNCTION__$localstatic1$insert__21xSpacePartitionTree2DFPviffff[7]; // size: 0x7, address: 0x80D5EF64
char __FUNCTION__$localstatic1$alloc_entry__21xSpacePartitionTree2DFv[12]; // size: 0xC, address: 0x80D5EF6B
char __FUNCTION__$localstatic1$alloc_node__21xSpacePartitionTree2DFv[11]; // size: 0xB, address: 0x80D5EF77
char __FUNCTION__$localstatic1$alloc_children__21xSpacePartitionTree2DFv[15]; // size: 0xF, address: 0x80D5EF82
char __FUNCTION__$localstatic1$free_children__21xSpacePartitionTree2DFPQ221xSpacePartitionTree2D4cell[14]; // size: 0xE, address: 0x80D5EF91
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
static unsigned char skip_backface; // size: 0x1, address: 0x80D68EC8
static unsigned char skip_facing_away; // size: 0x1, address: 0x80D5EF9F
static float skip_facing_cos; // size: 0x4, address: 0x80D5EFA0
static float zbias; // size: 0x4, address: 0x80D5EFA4
static float conv_fade_time; // size: 0x4, address: 0x80D5EFA8
static int filter_tri; // size: 0x4, address: 0x80D5EFAC
static unsigned char invert_normals; // size: 0x1, address: 0x80D68EC9
static unsigned char render_hit_tests; // size: 0x1, address: 0x80D68ECA
static unsigned char render_volume; // size: 0x1, address: 0x80D68ECB
static unsigned char render_normals; // size: 0x1, address: 0x80D68ECC
static unsigned char render_tri_face; // size: 0x1, address: 0x80D68ECD
static unsigned char render_tri_intersect; // size: 0x1, address: 0x80D68ECE
static unsigned char render_tri_clipped; // size: 0x1, address: 0x80D68ECF
static unsigned char render_tri_unclipped; // size: 0x1, address: 0x80D68ED0
static unsigned char enable; // size: 0x1, address: 0x80D68ED1
static unsigned char track_camera; // size: 0x1, address: 0x80D5EFB0
static float size; // size: 0x4, address: 0x80D5EFB4
static float dist_min; // size: 0x4, address: 0x80D5EFB8
static float dist_max; // size: 0x4, address: 0x80D5EFBC
static float sweep_arc; // size: 0x4, address: 0x80D5EFC0
static float sweep_speed; // size: 0x4, address: 0x80D68ED4
static int blend_mode; // size: 0x4, address: 0x80D68ED8
static unsigned int texture; // size: 0x4, address: 0x80D5EFC4
static unsigned char cycle; // size: 0x1, address: 0x80D68EDC
static float life; // size: 0x4, address: 0x80D5EFC8
static float size; // size: 0x4, address: 0x80D5EFCC
static float dist_min; // size: 0x4, address: 0x80D5EFD0
static float dist_max; // size: 0x4, address: 0x80D5EFD4
static int blend_mode; // size: 0x4, address: 0x80D68EE0
static unsigned int texture; // size: 0x4, address: 0x80D5EFD8
// total size: 0x18
struct animix {
    // Members
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
    float scale_x; // offset 0x10, size 0x4
    float scale_y; // offset 0x14, size 0x4
};
// total size: 0x1C
struct curve_node {
    // Members
    float t; // offset 0x0, size 0x4
    struct animix ani; // offset 0x4, size 0x18
};
static struct curve_node test_curve_nodes[2]; // size: 0x38, address: 0x804F22C0
// total size: 0x4
struct node {
    // Members
    float t; // offset 0x0, size 0x4
};
// total size: 0x8
struct inode : public node {
    // Members
    float value[1]; // offset 0x4, size 0x4
};
// total size: 0x0
struct debug_data {};
// total size: 0xC
struct /* @class$768xDecal_cpp */ {
    // Members
    int value_def; // offset 0x0, size 0x4
    int value_min; // offset 0x4, size 0x4
    int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$769xDecal_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int value_min; // offset 0x4, size 0x4
    unsigned int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$770xDecal_cpp */ {
    // Members
    float value_def; // offset 0x0, size 0x4
    float value_min; // offset 0x4, size 0x4
    float value_max; // offset 0x8, size 0x4
};
// total size: 0x1
struct /* @class$771xDecal_cpp */ {
    // Members
    unsigned char value_def; // offset 0x0, size 0x1
};
// total size: 0x10
struct /* @class$772xDecal_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int labels_size; // offset 0x4, size 0x4
    const char * * labels; // offset 0x8, size 0x4
    void * values; // offset 0xC, size 0x4
};
// total size: 0x8
struct /* @class$773xDecal_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
};
// total size: 0x10
struct /* @class$774xDecal_cpp */ {
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
        struct /* @class$768xDecal_cpp */ {
            // Members
            int value_def; // offset 0x0, size 0x4
            int value_min; // offset 0x4, size 0x4
            int value_max; // offset 0x8, size 0x4
        } int_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$769xDecal_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int value_min; // offset 0x4, size 0x4
            unsigned int value_max; // offset 0x8, size 0x4
        } uint_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$770xDecal_cpp */ {
            // Members
            float value_def; // offset 0x0, size 0x4
            float value_min; // offset 0x4, size 0x4
            float value_max; // offset 0x8, size 0x4
        } float_context; // offset 0x18, size 0xC
        // total size: 0x1
        struct /* @class$771xDecal_cpp */ {
            // Members
            unsigned char value_def; // offset 0x0, size 0x1
        } bool_context; // offset 0x18, size 0x1
        // total size: 0x10
        struct /* @class$772xDecal_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int labels_size; // offset 0x4, size 0x4
            const char * * labels; // offset 0x8, size 0x4
            void * values; // offset 0xC, size 0x4
        } select_context; // offset 0x18, size 0x10
        // total size: 0x8
        struct /* @class$773xDecal_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int mask; // offset 0x4, size 0x4
        } flag_context; // offset 0x18, size 0x8
        // total size: 0x10
        struct /* @class$774xDecal_cpp */ {
            // Members
            unsigned char pad[16]; // offset 0x0, size 0x10
        } all_context; // offset 0x18, size 0x10
    };
};
// total size: 0x14
struct xResponseCurve {
    // Members
private:
    unsigned int _values; // offset 0x0, size 0x4
    const struct inode * curve; // offset 0x4, size 0x4
    unsigned int _nodes; // offset 0x8, size 0x4
    unsigned int active_node; // offset 0xC, size 0x4
    struct debug_data * debug; // offset 0x10, size 0x4
};
static struct xResponseCurve test_curve; // size: 0x14, address: 0x80D68EE4
// Range: 0x800440E0 -> 0x80044100
static void emit_from_camera() {}

// Range: 0x80044100 -> 0x80044120
static void emit_clear() {}

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
static struct tweak_callback cb_emit_from_camera; // size: 0x28, address: 0x80478ED0
static struct tweak_callback cb_emit_clear; // size: 0x28, address: 0x80478EF8
struct tweak_callback cb_tweak_force_lteq; // size: 0x28, address: 0x80478130
struct tweak_callback cb_tweak_force_gteq; // size: 0x28, address: 0x80478158
struct tweak_callback cb_tweak_convert_degrees; // size: 0x28, address: 0x80478090
char * blend_mode_labels[3]; // size: 0xC, address: 0x80D5F094
const char * * all_texture_labels; // size: 0x4, address: 0x80D6A91C
unsigned int * all_texture_ids; // size: 0x4, address: 0x80D6A920
unsigned int all_texture_count; // size: 0x4, address: 0x80D6A924
char * animix_labels[6]; // size: 0x18, address: 0x804F2360
// Range: 0x80044120 -> 0x800448B8
static void add_tweaks() {
    // Local variables
    char prefix[20]; // r1+0x10

    // References
    // -> char * animix_labels[6];
    // -> static struct xResponseCurve test_curve;
    // -> static struct curve_node test_curve_nodes[2];
    // -> static struct tweak_callback cb_emit_clear;
    // -> static struct tweak_callback cb_emit_from_camera;
    // -> unsigned int all_texture_count;
    // -> unsigned int * all_texture_ids;
    // -> const char * * all_texture_labels;
    // -> static unsigned int texture;
    // -> char * blend_mode_labels[3];
    // -> static int blend_mode;
    // -> static float dist_min;
    // -> struct tweak_callback cb_tweak_force_gteq;
    // -> static float dist_max;
    // -> struct tweak_callback cb_tweak_force_lteq;
    // -> static float size;
    // -> static float life;
    // -> static unsigned char cycle;
    // -> static unsigned int texture;
    // -> static int blend_mode;
    // -> static float sweep_speed;
    // -> struct tweak_callback cb_tweak_convert_degrees;
    // -> static float sweep_arc;
    // -> static float dist_min;
    // -> static float dist_max;
    // -> static float size;
    // -> static unsigned char track_camera;
    // -> static unsigned char enable;
    // -> static unsigned char render_tri_unclipped;
    // -> static unsigned char render_tri_clipped;
    // -> static unsigned char render_tri_intersect;
    // -> static unsigned char render_tri_face;
    // -> static unsigned char render_normals;
    // -> static unsigned char render_volume;
    // -> static unsigned char render_hit_tests;
    // -> static unsigned char invert_normals;
    // -> static int filter_tri;
    // -> static float skip_facing_cos;
    // -> static unsigned char skip_facing_away;
    // -> static float conv_fade_time;
    // -> static float zbias;
    // -> static unsigned char skip_backface;
}

enum /* @enum$1242xDecal_cpp */ {
    BLEND_MODE_INVALID = -1,
    BLEND_MODE_AVERAGE = 0,
    BLEND_MODE_ADDITIVE = 1,
    BLEND_MODE_BRIGHT = 2,
    MAX_BLEND_MODE = 3,
};
// total size: 0x14
struct owner_group_type {
    // Members
    unsigned int owner; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    int max_size; // offset 0x8, size 0x4
    struct decal_instance * head; // offset 0xC, size 0x4
    struct decal_instance * tail; // offset 0x10, size 0x4
};
enum decal_type {
    DECAL_TYPE_ATOMIC = 0,
    DECAL_TYPE_IMMEDIATE = 1,
    DECAL_TYPE_CARD = 2,
};
// total size: 0x18
struct _xMat3x2 {
    // Members
    struct xVec2 right; // offset 0x0, size 0x8
    struct xVec2 up; // offset 0x8, size 0x8
    struct xVec2 pos; // offset 0x10, size 0x8
};
// total size: 0x19C
struct immediate_mode_data {
    // Members
    struct xVec3 vert[16]; // offset 0x0, size 0xC0
    struct xVec2 uv[16]; // offset 0xC0, size 0x80
    unsigned short index[36]; // offset 0x140, size 0x48
    int vert_size; // offset 0x188, size 0x4
    int index_size; // offset 0x18C, size 0x4
    float x_min; // offset 0x190, size 0x4
    float x_max; // offset 0x194, size 0x4
    struct immediate_mode_data * next; // offset 0x198, size 0x4
};
union /* @class$2376xDecal_cpp */ {
    struct RpAtomic * atomic; // offset 0x0, size 0x4
    struct immediate_mode_data * immediate; // offset 0x0, size 0x4
    int card; // offset 0x0, size 0x4
};
// total size: 0xD0
struct decal_instance {
    // Members
    struct owner_group_type * owner_group; // offset 0x0, size 0x4
    struct decal_instance * group_prev; // offset 0x4, size 0x4
    struct decal_instance * group_next; // offset 0x8, size 0x4
    struct emit_context ec; // offset 0xC, size 0x5C
    enum decal_type type; // offset 0x68, size 0x4
    float age; // offset 0x6C, size 0x4
    float age_rate; // offset 0x70, size 0x4
    struct xEnt * driver_ent; // offset 0x74, size 0x4
    struct RpAtomic * driver_atomic; // offset 0x78, size 0x4
    const struct xMat4x3 * driver; // offset 0x7C, size 0x4
    int order; // offset 0x80, size 0x4
    struct RwTexture * texture; // offset 0x84, size 0x4
    float time_start; // offset 0x88, size 0x4
    float time_scale; // offset 0x8C, size 0x4
    struct animix ani; // offset 0x90, size 0x18
    struct xColor_tag color; // offset 0xA8, size 0x4
    struct _xMat3x2 uvmat; // offset 0xAC, size 0x18
    float conv_translation; // offset 0xC4, size 0x4
    union { // inferred
        unsigned short blend_mode[2]; // offset 0xC8, size 0x4
        unsigned int blend_mode_id; // offset 0xC8, size 0x4
    };
    union /* @class$2376xDecal_cpp */ {
        struct RpAtomic * atomic; // offset 0x0, size 0x4
        struct immediate_mode_data * immediate; // offset 0x0, size 0x4
        int card; // offset 0x0, size 0x4
    } data; // offset 0xCC, size 0x4
};
static struct decal_instance * decals; // size: 0x4, address: 0x80D68EF8
static struct decal_instance * * render_list; // size: 0x4, address: 0x80D68EFC
static struct immediate_mode_data * immediate_buffer; // size: 0x4, address: 0x80D68F00
static struct immediate_mode_data * immediate_free; // size: 0x4, address: 0x80D68F04
static int order_current_place; // size: 0x4, address: 0x80D68F08
static int decals_used; // size: 0x4, address: 0x80D68F0C
static unsigned char decals_sorted; // size: 0x1, address: 0x80D68F10
static int immediate_indices_used; // size: 0x4, address: 0x80D68F14
static int immediate_verts_used; // size: 0x4, address: 0x80D68F18
// total size: 0x1C
struct node_type {
    // Members
    struct node_type * prev; // offset 0x0, size 0x4
    struct node_type * next; // offset 0x4, size 0x4
    struct owner_group_type value; // offset 0x8, size 0x14
};
// total size: 0x20
class pool_list : public pool_list_base {};
static class pool_list owner_groups; // size: 0x20, address: 0x80B5E470
enum _SDRenderState {
    eRenderStateUnknown = 0,
    eRenderStateDefault = 1,
    eRenderStateOpaqueModels = 2,
    eRenderStateAlphaModels = 3,
    eRenderStateBubble = 4,
    eRenderStateProjectile = 5,
    eRenderStateFont = 6,
    eRenderStateHUD = 7,
    eRenderStateParticles = 8,
    eRenderStateLightning = 9,
    eRenderStateSkidMark = 10,
    eRenderStateStreak = 11,
    eRenderStateTide = 12,
    eRenderStateSkyDomeBack = 13,
    eRenderStateSkyDomeFlat = 14,
    eRenderStateSkyDome3D = 15,
    eRenderStateEnvironment = 16,
    eRenderStateFill = 17,
    eRenderStateGlare = 18,
    eRenderStateFireCards = 19,
    eRenderStateSplashCones = 20,
    eRenderStateWater = 21,
    eRenderStateGrass = 22,
    eRenderStateWaterSkyDome = 23,
    eRenderStateLaserBeam = 24,
    eRenderStateSpotlight = 25,
    eRenderStateLightVolume = 26,
    eRenderStateRibbon = 27,
    eRenderStateScanLaser = 28,
    eRenderStateHDRBeginRender = 29,
    eRenderStateBlurAlpha = 30,
    eRenderStateZParPTank = 31,
    eRenderStateXPTankPool = 32,
    eRenderStateUI = 33,
    eRenderStateForceField = 34,
    eRenderStateFrozone = 35,
    eRenderStateSmashRing = 36,
    eRenderStateLaserBolt = 37,
    eRenderStatePatStunRings = 38,
    eRenderStateDecal = 39,
    eRenderStateUberLaser = 40,
    eRenderStateGCWaterBumpGen = 41,
    eRenderStateScrFX = 42,
    eRenderStateIncrediSlam = 43,
    eRenderStateWaterHose = 44,
    eRenderStatePlayerIdentifier = 45,
    eRenderStateFrostBlast = 46,
    eRenderStateBlastRing = 47,
    eRenderStateFreezingNPCs = 48,
    eRenderStateBlurCards = 49,
    eRenderStateAlphaModelsExplicit = 50,
    eRenderStateBossBrain = 51,
    eRenderStatePlayerEffects = 52,
    eRenderStateTotal = -1,
};
static const struct xMat4x3 * debug_mat; // size: 0x4, address: 0x80D68F1C
// Range: 0x800448B8 -> 0x80044920
static void debug_transform(struct xVec3 * ov /* r1+0x8 */, const struct xVec3 * iv /* r1+0xC */, int size /* r1+0x10 */) {
    // Local variables
    int i; // r31

    // References
    // -> static const struct xMat4x3 * debug_mat;
}

static char __FUNCTION__[25]; // size: 0x19, address: 0x804F22F8
// total size: 0x10
struct combo_vertex {
    // Members
    unsigned short index[3]; // offset 0x0, size 0x6
    unsigned short count; // offset 0x6, size 0x2
    float n; // offset 0x8, size 0x4
    float m; // offset 0xC, size 0x4
};
// Range: 0x80044920 -> 0x80044B2C
static void transform_combo_vertices(struct xVec3 * vert /* r30 */, const struct combo_vertex * cv /* r31 */, int vert_size /* r1+0x8 */, const struct xVec3 * src_vert /* r25 */) {
    // Local variables
    struct xVec3 * end_vert; // r24
    const struct xVec3 & s0; // r29
    const struct xVec3 & s1; // r28
    float o; // f31
    const struct xVec3 & s1; // r27
    const struct xVec3 & s2; // r26
    float o; // f30

    // References
    // -> static char __FUNCTION__[25];
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80D5EFDC
static int MAX_CLIPPED_VERTS; // size: 0x4, address: 0x80D6C974
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
struct xColor_tag g_WHITE; // size: 0x4, address: 0x80D6C6A4
struct xColor_tag g_YELLOW; // size: 0x4, address: 0x80D6C69C
struct xColor_tag g_RED; // size: 0x4, address: 0x80D6C680
struct xColor_tag g_SEAGREEN; // size: 0x4, address: 0x80D6C6D4
// total size: 0x3C
struct /* @class$2474xDecal_cpp */ {
    // Members
    const struct xVec3 * vert; // offset 0x0, size 0x4
    int vert_size; // offset 0x4, size 0x4
    const unsigned char * outcode; // offset 0x8, size 0x4
    struct xBox box; // offset 0xC, size 0x18
    struct xVec2 size; // offset 0x24, size 0x8
    struct xVec2 uv[2]; // offset 0x2C, size 0x10
};
// total size: 0x10
struct /* @class$2475xDecal_cpp */ {
    // Members
    struct xVec3 * vert; // offset 0x0, size 0x4
    int vert_size; // offset 0x4, size 0x4
    int max_vert_size; // offset 0x8, size 0x4
    struct xVec2 * uv; // offset 0xC, size 0x4
};
// total size: 0x50
struct clip_decal_params {
    // Members
    // total size: 0x3C
    struct /* @class$2474xDecal_cpp */ {
        // Members
        const struct xVec3 * vert; // offset 0x0, size 0x4
        int vert_size; // offset 0x4, size 0x4
        const unsigned char * outcode; // offset 0x8, size 0x4
        struct xBox box; // offset 0xC, size 0x18
        struct xVec2 size; // offset 0x24, size 0x8
        struct xVec2 uv[2]; // offset 0x2C, size 0x10
    } in; // offset 0x0, size 0x3C
    // total size: 0x10
    struct /* @class$2475xDecal_cpp */ {
        // Members
        struct xVec3 * vert; // offset 0x0, size 0x4
        int vert_size; // offset 0x4, size 0x4
        int max_vert_size; // offset 0x8, size 0x4
        struct xVec2 * uv; // offset 0xC, size 0x4
    } out; // offset 0x3C, size 0x10
    struct xVec3 * clip_buffer; // offset 0x4C, size 0x4
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
// Range: 0x80044B2C -> 0x80045DCC
static void clip_decal(struct clip_decal_params & arg /* r31 */) {
    // Local variables
    const struct xVec3 * iv; // r20
    const struct xVec3 * end_iv; // r1+0xEC
    struct xVec3 * ov; // r29
    struct xVec3 * end_ov; // r1+0xE8
    struct xVec2 * ouv; // r21
    struct xVec3 * cv; // r28
    const unsigned char * outcode; // r18
    float su; // f25
    float sv; // f24
    float du; // f23
    float dv; // f22
    float ux; // f21
    float uy; // f20
    int ti; // r1+0xE4
    struct xVec3 tv[3]; // r1+0x168
    struct xVec3 l1; // r1+0x114
    struct xVec3 l2; // r1+0x108
    struct xVec3 norm; // r1+0xFC
    struct xVec3 norm_loc; // r1+0xF0
    struct xVec3 tv[3]; // r1+0x144
    int out_union; // r1+0xE0
    struct xVec3 tv[3]; // r1+0x120
    int cv_offset; // r30
    int vsize; // r19
    float _c; // f31
    const struct xVec3 * s0; // r27
    const struct xVec3 * s1; // r17
    const struct xVec3 * ends1; // r1+0xDC
    struct xVec3 * d; // r1+0xD8
    float s; // f19
    float s; // f18
    float _c; // f30
    const struct xVec3 * s0; // r26
    const struct xVec3 * s1; // r1+0xD4
    const struct xVec3 * ends1; // r1+0xD0
    struct xVec3 * d; // r1+0xCC
    float s; // r1+0xC8
    float s; // r1+0xC4
    float _c; // f29
    const struct xVec3 * s0; // r25
    const struct xVec3 * s1; // r1+0xC0
    const struct xVec3 * ends1; // r1+0xBC
    struct xVec3 * d; // r1+0xB8
    float s; // r1+0xB4
    float s; // r1+0xB0
    float _c; // f28
    const struct xVec3 * s0; // r24
    const struct xVec3 * s1; // r1+0xAC
    const struct xVec3 * ends1; // r1+0xA8
    struct xVec3 * d; // r1+0xA4
    float s; // r1+0xA0
    float s; // r1+0x9C
    float _c; // f27
    const struct xVec3 * s0; // r23
    const struct xVec3 * s1; // r1+0x98
    const struct xVec3 * ends1; // r1+0x94
    struct xVec3 * d; // r1+0x90
    float s; // r1+0x8C
    float s; // r1+0x88
    float _c; // f26
    const struct xVec3 * s0; // r22
    const struct xVec3 * s1; // r1+0x84
    const struct xVec3 * ends1; // r1+0x80
    struct xVec3 * d; // r1+0x7C
    float s; // r1+0x78
    float s; // r1+0x74
    const struct xVec3 * poly_vert; // r1+0x70
    struct xVec2 * poly_uv; // r1+0x6C
    int new_verts; // r1+0x68
    struct xVec3 tv[9]; // r1+0x18C
    int i; // r1+0x64
    const struct xVec3 * pv; // r1+0x60
    struct xVec2 * puv; // r1+0x5C
    struct xVec2 * end_puv; // r1+0x58
    const struct xVec3 * tri_vert1; // r1+0x54
    const struct xVec3 * tri_vert2; // r1+0x50
    const struct xVec3 * end_tri_vert2; // r1+0x4C
    const struct xVec2 * tri_uv1; // r1+0x48
    const struct xVec2 * tri_uv2; // r1+0x44

    // References
    // -> struct xColor_tag g_SEAGREEN;
    // -> static unsigned char render_tri_clipped;
    // -> static char __FUNCTION__[11];
    // -> static int MAX_CLIPPED_VERTS;
    // -> struct xColor_tag g_RED;
    // -> static unsigned char render_tri_unclipped;
    // -> struct xColor_tag g_YELLOW;
    // -> static unsigned char render_tri_face;
    // -> struct xColor_tag g_WHITE;
    // -> static unsigned char render_normals;
    // -> static int filter_tri;
}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80D5EFE7
struct xColor_tag g_MAGENTA; // size: 0x4, address: 0x80D6C698
// total size: 0x44
struct /* @class$2651xDecal_cpp */ {
    // Members
    const struct RpTriangle * tri; // offset 0x0, size 0x4
    int tri_size; // offset 0x4, size 0x4
    const struct xVec3 * vert; // offset 0x8, size 0x4
    int vert_size; // offset 0xC, size 0x4
    const unsigned char * outcode; // offset 0x10, size 0x4
    struct xBox box; // offset 0x14, size 0x18
    struct xVec2 size; // offset 0x2C, size 0x8
    struct xVec2 uv[2]; // offset 0x34, size 0x10
};
// total size: 0x1C
struct /* @class$2652xDecal_cpp */ {
    // Members
    struct RpTriangle * tri; // offset 0x0, size 0x4
    int tri_size; // offset 0x4, size 0x4
    int max_tri_size; // offset 0x8, size 0x4
    struct combo_vertex * vert; // offset 0xC, size 0x4
    int vert_size; // offset 0x10, size 0x4
    int max_vert_size; // offset 0x14, size 0x4
    struct xVec2 * uv; // offset 0x18, size 0x4
};
// total size: 0x10
struct clip_vertex : public xVec3 {
    // Members
    unsigned char prev; // offset 0xC, size 0x1
    unsigned char next; // offset 0xD, size 0x1
    unsigned char clipped; // offset 0xE, size 0x1
    unsigned char inner; // offset 0xF, size 0x1
};
// total size: 0x8
struct /* @class$2653xDecal_cpp */ {
    // Members
    struct clip_vertex * clip_buffer; // offset 0x0, size 0x4
    unsigned short * vert_usage_buffer; // offset 0x4, size 0x4
};
// total size: 0x68
struct clip_decal_indexed_params {
    // Members
    // total size: 0x44
    struct /* @class$2651xDecal_cpp */ {
        // Members
        const struct RpTriangle * tri; // offset 0x0, size 0x4
        int tri_size; // offset 0x4, size 0x4
        const struct xVec3 * vert; // offset 0x8, size 0x4
        int vert_size; // offset 0xC, size 0x4
        const unsigned char * outcode; // offset 0x10, size 0x4
        struct xBox box; // offset 0x14, size 0x18
        struct xVec2 size; // offset 0x2C, size 0x8
        struct xVec2 uv[2]; // offset 0x34, size 0x10
    } in; // offset 0x0, size 0x44
    // total size: 0x1C
    struct /* @class$2652xDecal_cpp */ {
        // Members
        struct RpTriangle * tri; // offset 0x0, size 0x4
        int tri_size; // offset 0x4, size 0x4
        int max_tri_size; // offset 0x8, size 0x4
        struct combo_vertex * vert; // offset 0xC, size 0x4
        int vert_size; // offset 0x10, size 0x4
        int max_vert_size; // offset 0x14, size 0x4
        struct xVec2 * uv; // offset 0x18, size 0x4
    } out; // offset 0x44, size 0x1C
    // total size: 0x8
    struct /* @class$2653xDecal_cpp */ {
        // Members
        struct clip_vertex * clip_buffer; // offset 0x0, size 0x4
        unsigned short * vert_usage_buffer; // offset 0x4, size 0x4
    } buffer; // offset 0x60, size 0x8
};
// Range: 0x80045DCC -> 0x80047B38
static void clip_decal_indexed(struct clip_decal_indexed_params & arg /* r31 */) {
    // Local variables
    const struct xVec3 * iv; // r1+0x168
    const struct RpTriangle * it; // r1+0x164
    const struct RpTriangle * end_it; // r1+0x160
    struct RpTriangle * ot; // r1+0x15C
    struct RpTriangle * end_ot; // r1+0x158
    struct combo_vertex * ov; // r23
    struct combo_vertex * end_ov; // r1+0x154
    struct xVec2 * ouv; // r1+0x150
    struct clip_vertex * cv; // r30
    unsigned short * used; // r1+0x14C
    float su; // f25
    float sv; // f24
    float du; // f23
    float dv; // f22
    float ux; // f21
    float uy; // f20
    int vi0; // r1+0x148
    int vi1; // r1+0x144
    int vi2; // r1+0x140
    int out0; // r1+0x13C
    int out1; // r1+0x138
    int out2; // r1+0x134
    int out_intersect; // r1+0x130
    struct xVec3 tv[3]; // r1+0x208
    int i; // r1+0x12C
    struct xVec3 tv[3]; // r1+0x1E4
    int i; // r1+0x128
    struct xVec3 l1; // r1+0x190
    struct xVec3 l2; // r1+0x184
    struct xVec3 norm; // r1+0x178
    struct xVec3 norm_loc; // r1+0x16C
    float c1; // f19
    float c2; // f18
    struct xVec3 tv[3]; // r1+0x1C0
    int i; // r1+0x124
    int out_union; // r1+0x120
    struct xVec3 tv[3]; // r1+0x19C
    int i; // r1+0x11C
    int i; // r1+0x118
    int vi; // r1+0x114
    unsigned short & stored; // r1+0x110
    const struct xVec3 & vxy; // r1+0x10C
    int cv_offset; // r22
    int vsize; // r1+0x108
    float _c; // f31
    const struct clip_vertex * s0; // r21
    const struct clip_vertex * s1; // r1+0x104
    const struct clip_vertex * ends1; // r1+0x100
    struct clip_vertex * d; // r29
    float s; // r1+0xFC
    int wrap; // r1+0xF8
    float s; // r1+0xF4
    int wrap; // r1+0xF0
    float _c; // f30
    const struct clip_vertex * s0; // r20
    const struct clip_vertex * s1; // r1+0xEC
    const struct clip_vertex * ends1; // r1+0xE8
    struct clip_vertex * d; // r28
    float s; // r1+0xE4
    int wrap; // r1+0xE0
    float s; // r1+0xDC
    int wrap; // r1+0xD8
    float _c; // f29
    const struct clip_vertex * s0; // r19
    const struct clip_vertex * s1; // r1+0xD4
    const struct clip_vertex * ends1; // r1+0xD0
    struct clip_vertex * d; // r27
    float s; // r1+0xCC
    int wrap; // r1+0xC8
    float s; // r1+0xC4
    int wrap; // r1+0xC0
    float _c; // f28
    const struct clip_vertex * s0; // r18
    const struct clip_vertex * s1; // r1+0xBC
    const struct clip_vertex * ends1; // r1+0xB8
    struct clip_vertex * d; // r26
    float s; // r1+0xB4
    int wrap; // r1+0xB0
    float s; // r1+0xAC
    int wrap; // r1+0xA8
    float _c; // f27
    const struct clip_vertex * s0; // r17
    const struct clip_vertex * s1; // r1+0xA4
    const struct clip_vertex * ends1; // r1+0xA0
    struct clip_vertex * d; // r25
    float s; // r1+0x9C
    int wrap; // r1+0x98
    float s; // r1+0x94
    int wrap; // r1+0x90
    float _c; // f26
    const struct clip_vertex * s0; // r1+0x8C
    const struct clip_vertex * s1; // r1+0x88
    const struct clip_vertex * ends1; // r1+0x84
    struct clip_vertex * d; // r24
    float s; // r1+0x80
    int wrap; // r1+0x7C
    float s; // r1+0x78
    int wrap; // r1+0x74
    const struct clip_vertex * rcv; // r1+0x70
    const struct clip_vertex * end_rcv; // r1+0x6C
    int * poly_vert_index; // r1+0x68
    int * pvi; // r1+0x64
    int vi; // r1+0x60
    unsigned short & stored; // r1+0x5C
    struct xVec3 tv1[9]; // r1+0x22C
    int i; // r1+0x58
    int i; // r1+0x54
    unsigned short fan_center; // r1+0x8
    int * end_pvi; // r1+0x50

    // References
    // -> struct xColor_tag g_SEAGREEN;
    // -> static unsigned char render_tri_clipped;
    // -> static int MAX_CLIPPED_VERTS;
    // -> static char __FUNCTION__[19];
    // -> struct xColor_tag g_RED;
    // -> static unsigned char render_tri_unclipped;
    // -> struct xColor_tag g_YELLOW;
    // -> static unsigned char render_tri_face;
    // -> static unsigned char invert_normals;
    // -> static unsigned char skip_backface;
    // -> static unsigned char skip_facing_away;
    // -> struct xColor_tag g_WHITE;
    // -> static unsigned char render_normals;
    // -> struct xColor_tag g_MAGENTA;
    // -> static unsigned char render_tri_intersect;
    // -> static int filter_tri;
}

// Range: 0x80047B38 -> 0x80047DA8
static void get_bary_coords(float & b1 /* r3 */, float & b2 /* r4 */, const struct xVec3 & p /* r5 */, const struct xVec3 & t0 /* r6 */, const struct xVec3 & t1 /* r7 */, const struct xVec3 & t2 /* r8 */) {
    // Local variables
    float Ax; // f29
    float Ay; // f28
    float Az; // f27
    float Bx; // f26
    float By; // f25
    float Bz; // f24
    float Cx; // f20
    float Cy; // f19
    float Cz; // f18
    float AA; // f31
    float BB; // f30
    float AB; // f23
    float AC; // f22
    float BC; // f21
    float det; // r1+0x14
    float div; // r1+0x10
}

// Range: 0x80047DA8 -> 0x80047EC8
static void get_bary_coords(float & b1 /* r3 */, const struct xVec3 & p /* r4 */, const struct xVec3 & t0 /* r5 */, const struct xVec3 & t1 /* r6 */) {
    // Local variables
    float Ax; // f31
    float Ay; // f30
    float Az; // f29
    float Bx; // f26
    float By; // f25
    float Bz; // f24
    float AA; // f28
    float AB; // f23
}

// Range: 0x80047F24 -> 0x80047FEC
static unsigned char facing_away(const struct xVec3 & vert0 /* r31 */, const struct xVec3 & vert1 /* r1+0x8 */, const struct xVec3 & vert2 /* r1+0xC */) {
    // Local variables
    struct xVec3 dir1; // r1+0x28
    struct xVec3 dir2; // r1+0x1C
    struct xVec3 normal; // r1+0x10
    float length2; // f31

    // References
    // -> static float skip_facing_cos;
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80D5EFFA
// total size: 0x0
struct RpSkin {};
// Range: 0x80047FEC -> 0x80048104
static void destroy_atomic(struct RpAtomic * atomic /* r30 */) {
    // Local variables
    struct RwFrame * frame; // r29
    struct RpGeometry * geom; // r31
    struct RpSkin * skin; // r28

    // References
    // -> static char __FUNCTION__[15];
}

// total size: 0x30
struct xMat3x3 {
    // Members
    struct xVec3 right; // offset 0x0, size 0xC
    int flags; // offset 0xC, size 0x4
    struct xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    struct xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
};
// total size: 0x40
struct xMat4x3 : public xMat3x3 {
    // Members
    struct xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
struct xMat4x3 g_I3; // size: 0x40, address: 0x80B7FA80
// total size: 0x40
struct RwMatrixTag {
    // Members
    struct RwV3d right; // offset 0x0, size 0xC
    unsigned int flags; // offset 0xC, size 0x4
    struct RwV3d up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    struct RwV3d at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
    struct RwV3d pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// Range: 0x80048104 -> 0x80048328
static struct RpAtomic * create_decal_atomic(const struct decal_instance & decal /* r31 */, int vert_size /* r23 */, int tri_size /* r20 */) {
    // Local variables
    unsigned int geom_flags; // r28
    struct RpMaterial * material; // r29
    struct RpGeometry * geom; // r30
    struct RpAtomic * atomic; // r27
    struct RwFrame * frame; // r26
    struct RpTriangle * tri; // r25
    struct RpTriangle * end_tri; // r22
    struct xColor_tag * color; // r24
    struct xColor_tag * end_color; // r21
    struct RwMatrixTag uvmat; // r1+0x8

    // References
    // -> struct xMat4x3 g_I3;
}

// Range: 0x80048328 -> 0x8004835C
static void copy_uvmat(struct RwMatrixTag & omat /* r3 */, const struct _xMat3x2 & imat /* r4 */) {}

static char __FUNCTION__[31]; // size: 0x1F, address: 0x804F2311
// total size: 0x10
struct RwSphere {
    // Members
    struct RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// Range: 0x8004835C -> 0x80048458
static void complete_decal_atomic(struct RpAtomic * atomic /* r30 */, const struct xVec2 * uv /* r1+0x8 */, struct RwSphere * o /* r26 */) {
    // Local variables
    struct RpGeometry * geom; // r31
    struct RpTriangle * otri; // r1+0x10
    struct RpMorphTarget * mt; // r29
    struct xVec2 * ouv; // r28
    int tri_size; // r1+0xC
    int vert_size; // r27
    struct RwSphere bound; // r1+0x14
}

// total size: 0x18
struct xLine3 {
    // Members
    struct xVec3 p1; // offset 0x0, size 0xC
    struct xVec3 p2; // offset 0xC, size 0xC
};
// Range: 0x8004847C -> 0x80048628
static void obb_to_capsule(struct xLine3 & line /* r31 */, float & radius /* r28 */, const struct xBox & box /* r30 */, const struct xMat4x3 & mat /* r29 */) {
    // Local variables
    float dx; // f27
    float dy; // f26
    float dz; // f31
    struct xVec3 diag; // r1+0x8
    float rd1; // f30
    float rd2; // f29
}

// Range: 0x80048628 -> 0x8004865C
static struct immediate_mode_data * alloc_immediate_data() {
    // Local variables
    struct immediate_mode_data * ret; // r31

    // References
    // -> static struct immediate_mode_data * immediate_free;
}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80D5F009
// Range: 0x8004865C -> 0x80048750
static void free_immediate_data(struct immediate_mode_data * im /* r31 */) {
    // References
    // -> static struct immediate_mode_data * immediate_free;
    // -> static char __FUNCTION__[20];
}

// Range: 0x80048750 -> 0x800487D0
static struct owner_group_type * find_owner_group(unsigned int owner /* r1+0x8 */) {
    // Local variables
    struct node_type * it; // r31
    struct node_type * const end; // r30

    // References
    // -> static class pool_list owner_groups;
}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80D5F01D
char __FUNCTION__$localstatic1$back__53pool_list<Q220@unnamed@xDecal_cpp@16owner_group_type>Fv[5]; // size: 0x5, address: 0x80D5F030
// Range: 0x800487D0 -> 0x8004889C
static struct owner_group_type * create_owner_group(unsigned int owner /* r30 */) {
    // Local variables
    struct owner_group_type & owner_group; // r31

    // References
    // -> static class pool_list owner_groups;
    // -> static char __FUNCTION__[19];
}

// total size: 0x8
struct node_base {
    // Members
    struct node_base * prev; // offset 0x0, size 0x4
    struct node_base * next; // offset 0x4, size 0x4
};
// total size: 0x20
class pool_list_base {
    // Members
protected:
    int _size; // offset 0x0, size 0x4
    int _max_size; // offset 0x4, size 0x4
    struct node_base head; // offset 0x8, size 0x8
    struct node_base tail; // offset 0x10, size 0x8
    struct node_base * stack; // offset 0x18, size 0x4
    void * buffer; // offset 0x1C, size 0x4
};
static char __FUNCTION__[24]; // size: 0x18, address: 0x804F2330
char __FUNCTION__$localstatic1$get_iterator__53pool_list<Q220@unnamed@xDecal_cpp@16owner_group_type>FPCQ220@unnamed@xDecal_cpp@16owner_group_type[13]; // size: 0xD, address: 0x80D5F035
// Range: 0x8004889C -> 0x80048C08
static void remove_from_owner_group(struct decal_instance & decal /* r31 */) {
    // Local variables
    struct owner_group_type * owner_group; // r30
    struct decal_instance * test_decal; // r29

    // References
    // -> static class pool_list owner_groups;
    // -> static char __FUNCTION__[24];
}

// Range: 0x80048C08 -> 0x80048C5C
static void queue_removal(struct decal_instance & decal /* r31 */) {}

static unsigned char done; // size: 0x1, address: 0x80D68F20
static signed char init; // size: 0x1, address: 0x80D68F21
static char __FUNCTION__[19]; // size: 0x13, address: 0x80D5F042
// Range: 0x80048C5C -> 0x80048E94
static void add_to_owner_group(struct decal_instance & decal /* r30 */, struct owner_group_type * owner_group /* r31 */) {
    // References
    // -> static char __FUNCTION__[19];
    // -> static unsigned char done;
    // -> static signed char init;
    // -> static class pool_list owner_groups;
}

// Range: 0x80048E94 -> 0x80048EE4
static void relink_in_owner_group(struct decal_instance & decal /* r3 */) {}

// Range: 0x80048EE4 -> 0x80048F34
static struct decal_instance * alloc_decal() {
    // Local variables
    struct decal_instance * decal; // r31

    // References
    // -> static unsigned char decals_sorted;
    // -> static int decals_used;
    // -> static struct decal_instance * decals;
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80D5F055
// Range: 0x80048F34 -> 0x80049020
static void free_decal(struct decal_instance * decal /* r31 */) {
    // Local variables
    struct decal_instance * move_decal; // r30

    // References
    // -> static unsigned char decals_sorted;
    // -> static int decals_used;
    // -> static struct decal_instance * decals;
    // -> static char __FUNCTION__[11];
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80D5F060
// Range: 0x80049158 -> 0x800494C8
static void refresh_decal(struct decal_instance & decal /* r31 */) {
    // Local variables
    float anistart; // f31
    float aniend; // f28
    float t; // f27
    int min_alpha; // r30
    float ix; // f30
    float iy; // f29

    // References
    // -> static char __FUNCTION__[14];
}

// total size: 0x8
struct xVec2 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
static unsigned short rwmodes[3][2]; // size: 0xC, address: 0x80D6C994
// Range: 0x800494C8 -> 0x800496B0
static struct decal_instance * create_decal(const struct emit_context & ec /* r30 */, const struct xMat4x3 * driver /* r1+0x8 */, struct owner_group_type * owner_group /* r1+0xC */) {
    // Local variables
    struct decal_instance * decal; // r31
    float anistart; // f31
    float aniend; // f30

    // References
    // -> static unsigned short rwmodes[3][2];
    // -> struct xColor_tag g_WHITE;
    // -> static int order_current_place;
}

// Range: 0x8004976C -> 0x800497FC
static void destroy_decal(struct decal_instance & decal /* r31 */) {}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80D5F06E
// Range: 0x800497FC -> 0x800498C4
static unsigned char check_skip_emit(const struct emit_context & ec /* r31 */, struct owner_group_type * owner_group /* r30 */) {
    // References
    // -> static char __FUNCTION__[16];
}

// Range: 0x800498C4 -> 0x8004990C
static void set_immediate_indices(unsigned short * index /* r3 */, const struct RpTriangle * tri /* r4 */, int tri_size /* r5 */) {
    // Local variables
    const struct RpTriangle * end_tri; // r31
}

// Range: 0x8004990C -> 0x800499DC
static int compare_decals(void * e1 /* r3 */, void * e2 /* r4 */) {
    // Local variables
    const struct decal_instance * d1; // r31
    const struct decal_instance * d2; // r30
}

// Range: 0x800499DC -> 0x80049A04
static void begin_render() {
    // References
    // -> static float zbias;
}

// Range: 0x80049A04 -> 0x80049A30
static void end_render() {}

unsigned char HDR_brightening; // size: 0x1, address: 0x80D6AD78
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
// total size: 0x24
struct RxObjSpace3DVertex {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float nx; // offset 0xC, size 0x4
    float ny; // offset 0x10, size 0x4
    float nz; // offset 0x14, size 0x4
    unsigned char r; // offset 0x18, size 0x1
    unsigned char g; // offset 0x19, size 0x1
    unsigned char b; // offset 0x1A, size 0x1
    unsigned char a; // offset 0x1B, size 0x1
    float u; // offset 0x1C, size 0x4
    float v; // offset 0x20, size 0x4
};
// total size: 0x10
struct xVec4 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
// total size: 0x90
struct tagiRenderInput {
    // Members
    struct rwGameCube2DVertex * m_vertex_2d; // offset 0x0, size 0x4
    unsigned short * m_index; // offset 0x4, size 0x4
    struct RxObjSpace3DVertex * m_vertex; // offset 0x8, size 0x4
    float * m_vertexTZ; // offset 0xC, size 0x4
    unsigned int m_mode; // offset 0x10, size 0x4
    int m_vertexType; // offset 0x14, size 0x4
    int m_vertexTypeSize; // offset 0x18, size 0x4
    int m_indexCount; // offset 0x1C, size 0x4
    int m_vertexCount; // offset 0x20, size 0x4
    struct xMat4x3 m_camViewMatrix; // offset 0x30, size 0x40
    struct xVec4 m_camViewR; // offset 0x70, size 0x10
    struct xVec4 m_camViewU; // offset 0x80, size 0x10
};
struct tagiRenderInput gRenderBuffer; // size: 0x90, address: 0x80D23AD0
// Range: 0x80049A30 -> 0x80049AA8
static void flush_render_immediate(const struct xMat4x3 * mat /* r1+0x8 */) {
    // Local variables
    struct RxObjSpace3DVertex * verts; // r31
    unsigned short * indices; // r30

    // References
    // -> static int immediate_indices_used;
    // -> static int immediate_verts_used;
    // -> struct tagiRenderInput gRenderBuffer;
}

enum RwPrimitiveType {
    rwPRIMTYPENAPRIMTYPE = 0,
    rwPRIMTYPELINELIST = 1,
    rwPRIMTYPEPOLYLINE = 2,
    rwPRIMTYPETRILIST = 3,
    rwPRIMTYPETRISTRIP = 4,
    rwPRIMTYPETRIFAN = 5,
    rwPRIMTYPEPOINTLIST = 6,
    rwPRIMITIVETYPEFORCEENUMSIZEINT = 2147483647,
};
static char __FUNCTION__[23]; // size: 0x17, address: 0x804F2348
// Range: 0x80049AA8 -> 0x80049BC0
static void flush_render_immediate(const struct decal_instance * instance /* r31 */) {
    // Local variables
    struct xMat4x3 mat; // r1+0x10
    const struct xMat4x3 * decal_mat; // r30

    // References
    // -> static char __FUNCTION__[23];
}

// Range: 0x80049BC0 -> 0x80049BD0
static void begin_render_immediate() {
    // References
    // -> static int immediate_indices_used;
    // -> static int immediate_verts_used;
}

// Range: 0x80049BD0 -> 0x80049BF8
static void end_render_immediate(const struct decal_instance * instance /* r1+0x8 */) {}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80D5F07E
// total size: 0x80
struct intersect_env_params {
    // Members
    struct xVec3 * v; // offset 0x0, size 0x4
    struct xVec3 * endv; // offset 0x4, size 0x4
    unsigned char * outcode; // offset 0x8, size 0x4
    struct xBox box; // offset 0xC, size 0x18
    struct xMat4x3 imat; // offset 0x30, size 0x40
    const struct xMat4x3 * mat; // offset 0x70, size 0x4
};
// Range: 0x80049BF8 -> 0x80049E7C
static int intersect_env_callback(struct xClumpCollBSPTriangle * tri /* r30 */, void * data /* r1+0x8 */) {
    // Local variables
    struct intersect_env_params & arg; // r31
    int pflags; // r29
    float c1; // f31
    float c2; // f30
    int out_intersect; // r28

    // References
    // -> static unsigned char invert_normals;
    // -> static unsigned char skip_backface;
    // -> static unsigned char skip_facing_away;
}

static int CLIP_XLOWER; // size: 0x4, address: 0x80D6C9A0
static int CLIP_XUPPER; // size: 0x4, address: 0x80D6C9A4
static int CLIP_YLOWER; // size: 0x4, address: 0x80D6C9A8
static int CLIP_YUPPER; // size: 0x4, address: 0x80D6C9AC
static int CLIP_ZLOWER; // size: 0x4, address: 0x80D6C9B0
static int CLIP_ZUPPER; // size: 0x4, address: 0x80D6C9B4
// Range: 0x80049E7C -> 0x80049F34
static int get_outcode(const struct xVec3 & v /* r3 */, const struct xVec3 & lower /* r4 */, const struct xVec3 & upper /* r5 */) {
    // Local variables
    int oc; // r31

    // References
    // -> static int CLIP_ZUPPER;
    // -> static int CLIP_ZLOWER;
    // -> static int CLIP_YUPPER;
    // -> static int CLIP_YLOWER;
    // -> static int CLIP_XUPPER;
    // -> static int CLIP_XLOWER;
}

// total size: 0x18
struct analog_data {
    // Members
    struct xVec2 offset; // offset 0x0, size 0x8
    struct xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
};
enum xCamCoordType {
    XCAM_COORD_INVALID = -1,
    XCAM_COORD_CART = 0,
    XCAM_COORD_CYLINDER = 1,
    XCAM_COORD_SPHERE = 2,
    XCAM_COORD_MAX = 3,
};
enum xCamOrientType {
    XCAM_ORIENT_INVALID = -1,
    XCAM_ORIENT_QUAT = 0,
    XCAM_ORIENT_EULER = 1,
    XCAM_ORIENT_MAX = 2,
};
// total size: 0x18
struct xCamCoordCylinder {
    // Members
    struct xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    float height; // offset 0x10, size 0x4
    float theta; // offset 0x14, size 0x4
};
// total size: 0x20
struct xCamCoordSphere {
    // Members
    struct xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    struct xQuat dir; // offset 0x10, size 0x10
};
// total size: 0x20
struct xCamCoord {
    // Members
    union { // inferred
        struct xVec3 cart; // offset 0x0, size 0xC
        struct xCamCoordCylinder cylinder; // offset 0x0, size 0x18
        struct xCamCoordSphere sphere; // offset 0x0, size 0x20
    };
};
// total size: 0xC
struct xCamOrientEuler {
    // Members
    float yaw; // offset 0x0, size 0x4
    float pitch; // offset 0x4, size 0x4
    float roll; // offset 0x8, size 0x4
};
// total size: 0x10
struct xCamOrient {
    // Members
    union { // inferred
        struct xQuat quat; // offset 0x0, size 0x10
        struct xCamOrientEuler euler; // offset 0x0, size 0xC
    };
};
// total size: 0x30
struct xCamSpatialInfo {
    // Members
    struct xCamCoord coord; // offset 0x0, size 0x20
    struct xCamOrient orient; // offset 0x20, size 0x10
};
// total size: 0x8
struct xCamConfigCommon {
    // Members
    unsigned char priority; // offset 0x0, size 0x1
    unsigned char pad1; // offset 0x1, size 0x1
    unsigned char pad2; // offset 0x2, size 0x1
    unsigned char pad3; // offset 0x3, size 0x1
    float blend_time; // offset 0x4, size 0x4
};
// total size: 0x0
class xCamTransition {};
// total size: 0x14
class xCamTimeBias : public xCamBias {
    // Members
    float bias; // offset 0x8, size 0x4
    float time; // offset 0xC, size 0x4
    float blendTime; // offset 0x10, size 0x4
};
// total size: 0x8
class xCamBias {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned char mIsBiDirectional; // offset 0x4, size 0x1
};
// total size: 0x0
class zCam2Player {};
// total size: 0x170
struct xCamBlend : public xCam {
    // Members
    struct xCam * src; // offset 0x140, size 0x4
    struct xCam * dst; // offset 0x144, size 0x4
    class xCamBias * bias; // offset 0x148, size 0x4
    class xCamTimeBias timeBias; // offset 0x14C, size 0x14
    class xCamTransition * transition; // offset 0x160, size 0x4
};
// total size: 0x10
struct /* @class$1601xDecal_cpp */ {
    // Members
    int flags; // offset 0x0, size 0x4
    struct xColor_tag color[3]; // offset 0x4, size 0xC
};
// total size: 0x18
struct zone_data {
    // Members
    struct xVec3 offset; // offset 0x0, size 0xC
    struct xVec3 face; // offset 0xC, size 0xC
};
// total size: 0x54
struct xCamConfigFollow {
    // Members
    struct zone_data zone_rest; // offset 0x0, size 0x18
    struct zone_data zone_above; // offset 0x18, size 0x18
    struct zone_data zone_below; // offset 0x30, size 0x18
    float speed_zone_offset; // offset 0x48, size 0x4
    float speed_zone_face; // offset 0x4C, size 0x4
    float speed_move_orbit; // offset 0x50, size 0x4
};
// total size: 0x18
struct xCamCoordPolar {
    // Members
    struct xVec3 origin; // offset 0x0, size 0xC
    float theta; // offset 0xC, size 0x4
    float phi; // offset 0x10, size 0x4
    float dist; // offset 0x14, size 0x4
};
// total size: 0x0
class zCamSplineCommonMix {};
// total size: 0x140
struct xCam {
    // Members
    struct xMat4x3 mat; // offset 0x0, size 0x40
    struct xMat4x3 coll_mat; // offset 0x40, size 0x40
    float fov; // offset 0x80, size 0x4
    int flags; // offset 0x84, size 0x4
    unsigned int owner; // offset 0x88, size 0x4
    struct xCamGroup * group; // offset 0x8C, size 0x4
    struct analog_data analog; // offset 0x90, size 0x18
    enum xCamCoordType coord_type; // offset 0xA8, size 0x4
    enum xCamOrientType orient_type; // offset 0xAC, size 0x4
    struct xCamSpatialInfo spatial; // offset 0xB0, size 0x30
    struct xCamSpatialInfo coll_spatial; // offset 0xE0, size 0x30
    struct xCamConfigCommon cfg_common; // offset 0x110, size 0x8
    void * __vptr$; // offset 0x118, size 0x4
private:
    int group_flags; // offset 0x11C, size 0x4
    struct xCamBlend * blender; // offset 0x120, size 0x4
public:
    // total size: 0x10
    struct /* @class$1601xDecal_cpp */ {
        // Members
        int flags; // offset 0x0, size 0x4
        struct xColor_tag color[3]; // offset 0x4, size 0xC
    } debug; // offset 0x124, size 0x10
};
// total size: 0xC
struct xCamTransitionParams : public xCamConfigCommon {
    // Members
    class xCamTransition * mTransitionObject; // offset 0x8, size 0x4
};
// total size: 0xE0
struct xCamGroup {
    // Members
    struct xMat4x3 mat; // offset 0x0, size 0x40
    struct xMat4x3 coll_mat; // offset 0x40, size 0x40
    struct xVec3 coll_atXZ; // offset 0x80, size 0xC
    float cameraPlayerAudioBias; // offset 0x8C, size 0x4
    struct xVec3 vel; // offset 0x90, size 0xC
    float fov; // offset 0x9C, size 0x4
    float fov_default; // offset 0xA0, size 0x4
    int flags; // offset 0xA4, size 0x4
    struct xCam * primary; // offset 0xA8, size 0x4
    struct analog_data analog; // offset 0xAC, size 0x18
private:
    int child_flags; // offset 0xC4, size 0x4
    int child_flags_mask; // offset 0xC8, size 0x4
    struct xCamBlend * blend_cam[4]; // offset 0xCC, size 0x10
};
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x8
struct RwV2d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x10
struct RwPlane {
    // Members
    struct RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
// total size: 0x14
struct RwFrustumPlane {
    // Members
    struct RwPlane plane; // offset 0x0, size 0x10
    unsigned char closestX; // offset 0x10, size 0x1
    unsigned char closestY; // offset 0x11, size 0x1
    unsigned char closestZ; // offset 0x12, size 0x1
    unsigned char pad; // offset 0x13, size 0x1
};
// total size: 0x184
struct RwCamera {
    // Members
    struct RwObjectHasFrame object; // offset 0x0, size 0x14
    enum RwCameraProjection projectionType; // offset 0x14, size 0x4
    struct RwCamera * (* beginUpdate)(struct RwCamera *); // offset 0x18, size 0x4
    struct RwCamera * (* endUpdate)(struct RwCamera *); // offset 0x1C, size 0x4
    struct RwMatrixTag viewMatrix; // offset 0x20, size 0x40
    struct RwRaster * frameBuffer; // offset 0x60, size 0x4
    struct RwRaster * zBuffer; // offset 0x64, size 0x4
    struct RwV2d viewWindow; // offset 0x68, size 0x8
    struct RwV2d recipViewWindow; // offset 0x70, size 0x8
    struct RwV2d viewOffset; // offset 0x78, size 0x8
    float nearPlane; // offset 0x80, size 0x4
    float farPlane; // offset 0x84, size 0x4
    float fogPlane; // offset 0x88, size 0x4
    float zScale; // offset 0x8C, size 0x4
    float zShift; // offset 0x90, size 0x4
    struct RwFrustumPlane frustumPlanes[6]; // offset 0x94, size 0x78
    struct RwBBox frustumBoundBox; // offset 0x10C, size 0x18
    struct RwV3d frustumCorners[8]; // offset 0x124, size 0x60
};
// total size: 0x8
struct xCamScreen {
    // Members
    struct RwCamera * icam; // offset 0x0, size 0x4
    float fov; // offset 0x4, size 0x4
};
// total size: 0x10
struct xUpdateCullEnt {
    // Members
    unsigned short index; // offset 0x0, size 0x2
    signed short groupIndex; // offset 0x2, size 0x2
    unsigned int (* update_cull_cb)(void *, void *); // offset 0x4, size 0x4
    void * cbdata; // offset 0x8, size 0x4
    struct xUpdateCullEnt * nextInGroup; // offset 0xC, size 0x4
};
// total size: 0xC
struct xGroupAsset : public xBaseAsset {
    // Members
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
};
// total size: 0x24
struct xGroup : public xBase {
    // Members
    struct xGroupAsset * asset; // offset 0x10, size 0x4
    struct xBase * * item; // offset 0x14, size 0x4
    unsigned int last_index; // offset 0x18, size 0x4
    unsigned int ptr_last_index; // offset 0x1C, size 0x4
    int flg_group; // offset 0x20, size 0x4
};
// total size: 0xC
struct xUpdateCullGroup {
    // Members
    unsigned int active; // offset 0x0, size 0x4
    unsigned short startIndex; // offset 0x4, size 0x2
    unsigned short endIndex; // offset 0x6, size 0x2
    struct xGroup * groupObject; // offset 0x8, size 0x4
};
// total size: 0x2C
struct xUpdateCullMgr {
    // Members
    unsigned int entCount; // offset 0x0, size 0x4
    unsigned int entActive; // offset 0x4, size 0x4
    void * ent; // offset 0x8, size 0x4
    struct xUpdateCullEnt * * mgr; // offset 0xC, size 0x4
    unsigned int mgrCount; // offset 0x10, size 0x4
    unsigned int mgrCurr; // offset 0x14, size 0x4
    struct xUpdateCullEnt * mgrList; // offset 0x18, size 0x4
    unsigned int grpCount; // offset 0x1C, size 0x4
    struct xUpdateCullGroup * grpList; // offset 0x20, size 0x4
    void (* activateCB)(void *); // offset 0x24, size 0x4
    void (* deactivateCB)(void *); // offset 0x28, size 0x4
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x1C
struct iFogParams {
    // Members
    enum RwFogType type; // offset 0x0, size 0x4
    float start; // offset 0x4, size 0x4
    float stop; // offset 0x8, size 0x4
    float density; // offset 0xC, size 0x4
    struct RwRGBA fogcolor; // offset 0x10, size 0x4
    struct RwRGBA bgcolor; // offset 0x14, size 0x4
    unsigned char * table; // offset 0x18, size 0x4
};
// total size: 0x0
struct PlaybackStruct {};
// total size: 0xC
struct PlaybackBuffers {
    // Members
    struct PlaybackStruct * PlaybackBuf; // offset 0x0, size 0x4
    struct PlaybackStruct * PlaybackCur; // offset 0x4, size 0x4
    struct PlaybackStruct * PlaybackEnd; // offset 0x8, size 0x4
};
enum sceDemoEndReason {
    SCE_DEMO_ENDREASON_ATTRACT_INTERRUPTED = 0,
    SCE_DEMO_ENDREASON_ATTRACT_COMPLETE = 1,
    SCE_DEMO_ENDREASON_PLAYABLE_INACTIVITY_TIMEOUT = 2,
    SCE_DEMO_ENDREASON_PLAYABLE_GAMEPLAY_TIMEOUT = 3,
    SCE_DEMO_ENDREASON_PLAYABLE_COMPLETE = 4,
    SCE_DEMO_ENDREASON_PLAYABLE_QUIT = 5,
};
// total size: 0x38
struct PS2DemoGlobals {
    // Members
    unsigned short language; // offset 0x0, size 0x2
    unsigned short aspect; // offset 0x2, size 0x2
    unsigned short play_mode; // offset 0x4, size 0x2
    unsigned short inactive_timeout; // offset 0x6, size 0x2
    unsigned short gameplay_timeout; // offset 0x8, size 0x2
    enum sceDemoEndReason exit_code; // offset 0xC, size 0x4
    unsigned int FMV_playing : 1; // offset 0x10, size 0x4
    unsigned int more_padding : 31; // offset 0x10, size 0x4
    float bail_timer; // offset 0x14, size 0x4
    int inactive_detect; // offset 0x18, size 0x4
    float inactive_timer; // offset 0x1C, size 0x4
    float gameplay_timer; // offset 0x20, size 0x4
    char subdir[16]; // offset 0x24, size 0x10
    unsigned short quit; // offset 0x34, size 0x2
    unsigned short vmode; // offset 0x36, size 0x2
};
// total size: 0x0
class xDebugLink {};
// total size: 0x6C0
struct xGlobals {
    // Members
    struct xCamGroup * cam; // offset 0x0, size 0x4
    struct xCamScreen * screen; // offset 0x4, size 0x4
    struct xVec4 frustplane[12]; // offset 0x8, size 0xC0
    int profile; // offset 0xC8, size 0x4
    char profFunc[6][128]; // offset 0xCC, size 0x300
    struct xUpdateCullMgr * updateMgr; // offset 0x3CC, size 0x4
    int sceneFirst; // offset 0x3D0, size 0x4
    char sceneStart[32]; // offset 0x3D4, size 0x20
    struct RpWorld * currWorld; // offset 0x3F4, size 0x4
    struct iFogParams fog; // offset 0x3F8, size 0x1C
    struct iFogParams fogA; // offset 0x414, size 0x1C
    struct iFogParams fogB; // offset 0x430, size 0x1C
    long long fog_t0; // offset 0x450, size 0x8
    long long fog_t1; // offset 0x458, size 0x8
    int option_vibration_p1; // offset 0x460, size 0x4
    int option_vibration_p2; // offset 0x464, size 0x4
    int option_vibration_p1_menu; // offset 0x468, size 0x4
    int option_vibration_p2_menu; // offset 0x46C, size 0x4
    int option_subtitles; // offset 0x470, size 0x4
    unsigned int slowdown; // offset 0x474, size 0x4
    float update_dt; // offset 0x478, size 0x4
    unsigned int dumpCutscene; // offset 0x47C, size 0x4
    unsigned int PlaybackMode; // offset 0x480, size 0x4
    struct PlaybackBuffers PlaybackFrames[4]; // offset 0x484, size 0x30
    char PlaybackFile[128]; // offset 0x4B4, size 0x80
    unsigned int PlaybackStartFrame; // offset 0x534, size 0x4
    unsigned int PlaybackEndFrame; // offset 0x538, size 0x4
    unsigned int PlaybackResolution; // offset 0x53C, size 0x4
    int MemTrackingLvl; // offset 0x540, size 0x4
    char MemTrackLogFileName[128]; // offset 0x544, size 0x80
    signed short ForceCutscene; // offset 0x5C4, size 0x2
    int useHIPHOP; // offset 0x5C8, size 0x4
    unsigned char NoMusic; // offset 0x5CC, size 0x1
    unsigned char NoCutscenes; // offset 0x5CD, size 0x1
    unsigned char NoPadCheck; // offset 0x5CE, size 0x1
    unsigned char firstStartPressed; // offset 0x5CF, size 0x1
    unsigned char fromLauncher; // offset 0x5D0, size 0x1
    unsigned char skipAssertWithController; // offset 0x5D1, size 0x1
    unsigned char enableHelperAI; // offset 0x5D2, size 0x1
    unsigned char enableHelperAIAttack; // offset 0x5D3, size 0x1
    unsigned char enableDebugControls; // offset 0x5D4, size 0x1
    unsigned char showReleaseMemInfo; // offset 0x5D5, size 0x1
    unsigned char PlaybackFlashDemo; // offset 0x5D6, size 0x1
    unsigned char FlashWIP; // offset 0x5D7, size 0x1
    unsigned char inLoadingScreen; // offset 0x5D8, size 0x1
    unsigned char LoadingScene; // offset 0x5D9, size 0x1
    unsigned char InitializingLoadingScreen; // offset 0x5DA, size 0x1
    unsigned char ForceMono; // offset 0x5DB, size 0x1
    unsigned char UnlimitedNukes; // offset 0x5DC, size 0x1
    unsigned int minVSyncCnt; // offset 0x5E0, size 0x4
    unsigned char dontShowPadMessageDuringLoadingOrCutScene; // offset 0x5E4, size 0x1
    unsigned char autoSaveFeature; // offset 0x5E5, size 0x1
    unsigned char skipAsserts; // offset 0x5E6, size 0x1
    unsigned char beforeFirstFrame; // offset 0x5E7, size 0x1
    int asyncLoadingScreen; // offset 0x5E8, size 0x4
    int asyncLoadingFlags; // offset 0x5EC, size 0x4
    char fromLauncherUser[32]; // offset 0x5F0, size 0x20
    class zPlayerContainer players; // offset 0x610, size 0x14
    struct zScene * sceneCur; // offset 0x624, size 0x4
    struct zScene * scenePreload; // offset 0x628, size 0x4
    struct PS2DemoGlobals * PS2demo; // offset 0x62C, size 0x4
    char watermark[127]; // offset 0x630, size 0x7F
    unsigned char watermarkAlpha; // offset 0x6AF, size 0x1
    float watermarkSize; // offset 0x6B0, size 0x4
    class xDebugLink * debugLink; // offset 0x6B4, size 0x4
    unsigned char enableRealTimeUpdate; // offset 0x6B8, size 0x1
    unsigned char showMenuOnBoot; // offset 0x6B9, size 0x1
    unsigned char enableHUD; // offset 0x6BA, size 0x1
    unsigned char skipAnimViewer; // offset 0x6BB, size 0x1
};
struct xGlobals * xglobals; // size: 0x4, address: 0x80D63020
// total size: 0x18
struct RwLine {
    // Members
    struct RwV3d start; // offset 0x0, size 0xC
    struct RwV3d end; // offset 0xC, size 0xC
};
// total size: 0xC
struct RwV3d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x18
struct xClumpCollV3dGradient {
    // Members
    float dydx; // offset 0x0, size 0x4
    float dzdx; // offset 0x4, size 0x4
    float dxdy; // offset 0x8, size 0x4
    float dzdy; // offset 0xC, size 0x4
    float dxdz; // offset 0x10, size 0x4
    float dydz; // offset 0x14, size 0x4
};
// Range: 0x80049F34 -> 0x8004A10C
static void intersect_env(struct intersect_env_params & arg /* r31 */) {
    // Local variables
    const struct xEnv * env; // r30
    struct RwLine line; // r1+0x30
    float radius; // r1+0x8
    struct RwV3d delta; // r1+0xC
    struct xClumpCollV3dGradient grad; // r1+0x18
    float recip; // f31
    int i; // r29

    // References
    // -> struct xGlobals * xglobals;
}

static int debug_volumes_start; // size: 0x4, address: 0x80D68F24
static int debug_volumes_size; // size: 0x4, address: 0x80D68F28
// total size: 0x60
struct debug_volume_type {
    // Members
    struct xMat4x3 mat; // offset 0x0, size 0x40
    struct xBox box; // offset 0x40, size 0x18
};
static struct debug_volume_type debug_volumes[10]; // size: 0x3C0, address: 0x80B5E490
// Range: 0x8004A10C -> 0x8004A148
static void debug_init() {
    // References
    // -> static int debug_volumes_size;
    // -> static int debug_volumes_start;
}

// total size: 0x8
struct substr {
    // Members
    const char * text; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
// Range: 0x8004A148 -> 0x8004A154
static void debug_update() {
    // References
    // -> static unsigned char enable;
}

// Range: 0x8004A154 -> 0x8004A35C
static void render_decal_immediate(const struct decal_instance & decal /* r31 */) {
    // Local variables
    const struct immediate_mode_data & im; // r30
    const unsigned short * iindex; // r28
    const unsigned short * end_iindex; // r24
    unsigned short * oindex; // r26
    struct RxObjSpace3DVertex * overt; // r25
    const struct xVec3 * ivert; // r27
    const struct xVec3 * end_ivert; // r23
    const struct xVec2 * uv; // r29
    float rx; // f31
    float ry; // f30
    float ux; // f29
    float uy; // f28
    float px; // f27
    float py; // f26
    float u; // f25
    float v; // f24

    // References
    // -> static int immediate_verts_used;
    // -> struct tagiRenderInput gRenderBuffer;
    // -> static int immediate_indices_used;
}

// total size: 0x4
struct RwRGBA {
    // Members
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// Range: 0x8004A35C -> 0x8004A3E0
static void set_vert(struct RxObjSpace3DVertex & vert /* r3 */, const struct xVec3 & loc /* r4 */, float u /* f1 */, float v /* f2 */, struct xColor_tag & color /* r5 */) {
    // Local variables
    struct RwV3d tmp; // r1+0xC
    struct RwRGBA col; // r1+0x8
}

unsigned char HDR_brightening; // size: 0x1, address: 0x80D6AD78
// total size: 0x10
struct RpHAnimNodeInfo {
    // Members
    int nodeID; // offset 0x0, size 0x4
    int nodeIndex; // offset 0x4, size 0x4
    int flags; // offset 0x8, size 0x4
    struct RwFrame * pFrame; // offset 0xC, size 0x4
};
enum RwStreamType {
    rwNASTREAM = 0,
    rwSTREAMFILE = 1,
    rwSTREAMFILENAME = 2,
    rwSTREAMMEMORY = 3,
    rwSTREAMCUSTOM = 4,
    rwSTREAMTYPEFORCEENUMSIZEINT = 2147483647,
};
enum RwStreamAccessType {
    rwNASTREAMACCESS = 0,
    rwSTREAMREAD = 1,
    rwSTREAMWRITE = 2,
    rwSTREAMAPPEND = 3,
    rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
struct RwStreamMemory {
    // Members
    unsigned int position; // offset 0x0, size 0x4
    unsigned int nSize; // offset 0x4, size 0x4
    unsigned char * memBlock; // offset 0x8, size 0x4
};
union RwStreamFile {
    void * fpFile; // offset 0x0, size 0x4
    void * constfpFile; // offset 0x0, size 0x4
};
// total size: 0x14
struct RwStreamCustom {
    // Members
    int (* sfnclose)(void *); // offset 0x0, size 0x4
    unsigned int (* sfnread)(void *, void *, unsigned int); // offset 0x4, size 0x4
    int (* sfnwrite)(void *, void *, unsigned int); // offset 0x8, size 0x4
    int (* sfnskip)(void *, unsigned int); // offset 0xC, size 0x4
    void * data; // offset 0x10, size 0x4
};
union RwStreamUnion {
    struct RwStreamMemory memory; // offset 0x0, size 0xC
    union RwStreamFile file; // offset 0x0, size 0x4
    struct RwStreamCustom custom; // offset 0x0, size 0x14
};
// total size: 0x24
struct RwStream {
    // Members
    enum RwStreamType type; // offset 0x0, size 0x4
    enum RwStreamAccessType accessType; // offset 0x4, size 0x4
    int position; // offset 0x8, size 0x4
    union RwStreamUnion Type; // offset 0xC, size 0x14
    int rwOwned; // offset 0x20, size 0x4
};
// total size: 0x30
struct RtAnimInterpolatorInfo {
    // Members
    int typeID; // offset 0x0, size 0x4
    int interpKeyFrameSize; // offset 0x4, size 0x4
    int animKeyFrameSize; // offset 0x8, size 0x4
    void (* keyFrameApplyCB)(void *, void *); // offset 0xC, size 0x4
    void (* keyFrameBlendCB)(void *, void *, void *, float); // offset 0x10, size 0x4
    void (* keyFrameInterpolateCB)(void *, void *, void *, float, void *); // offset 0x14, size 0x4
    void (* keyFrameAddCB)(void *, void *, void *); // offset 0x18, size 0x4
    void (* keyFrameMulRecipCB)(void *, void *); // offset 0x1C, size 0x4
    struct RtAnimAnimation * (* keyFrameStreamReadCB)(struct RwStream *, struct RtAnimAnimation *); // offset 0x20, size 0x4
    int (* keyFrameStreamWriteCB)(struct RtAnimAnimation *, struct RwStream *); // offset 0x24, size 0x4
    int (* keyFrameStreamGetSizeCB)(struct RtAnimAnimation *); // offset 0x28, size 0x4
    int customDataSize; // offset 0x2C, size 0x4
};
// total size: 0x18
struct RtAnimAnimation {
    // Members
    struct RtAnimInterpolatorInfo * interpInfo; // offset 0x0, size 0x4
    int numFrames; // offset 0x4, size 0x4
    int flags; // offset 0x8, size 0x4
    float duration; // offset 0xC, size 0x4
    void * pFrames; // offset 0x10, size 0x4
    void * customData; // offset 0x14, size 0x4
};
// total size: 0x4C
struct RtAnimInterpolator {
    // Members
    struct RtAnimAnimation * pCurrentAnim; // offset 0x0, size 0x4
    float currentTime; // offset 0x4, size 0x4
    void * pNextFrame; // offset 0x8, size 0x4
    struct RtAnimInterpolator * (* pAnimCallBack)(struct RtAnimInterpolator *, void *); // offset 0xC, size 0x4
    void * pAnimCallBackData; // offset 0x10, size 0x4
    float animCallBackTime; // offset 0x14, size 0x4
    struct RtAnimInterpolator * (* pAnimLoopCallBack)(struct RtAnimInterpolator *, void *); // offset 0x18, size 0x4
    void * pAnimLoopCallBackData; // offset 0x1C, size 0x4
    int maxInterpKeyFrameSize; // offset 0x20, size 0x4
    int currentInterpKeyFrameSize; // offset 0x24, size 0x4
    int currentAnimKeyFrameSize; // offset 0x28, size 0x4
    int numNodes; // offset 0x2C, size 0x4
    int isSubInterpolator; // offset 0x30, size 0x4
    int offsetInParent; // offset 0x34, size 0x4
    struct RtAnimInterpolator * parentAnimation; // offset 0x38, size 0x4
    void (* keyFrameApplyCB)(void *, void *); // offset 0x3C, size 0x4
    void (* keyFrameBlendCB)(void *, void *, void *, float); // offset 0x40, size 0x4
    void (* keyFrameInterpolateCB)(void *, void *, void *, float, void *); // offset 0x44, size 0x4
    void (* keyFrameAddCB)(void *, void *, void *); // offset 0x48, size 0x4
};
// total size: 0x24
struct RpHAnimHierarchy {
    // Members
    int flags; // offset 0x0, size 0x4
    int numNodes; // offset 0x4, size 0x4
    struct RwMatrixTag * pMatrixArray; // offset 0x8, size 0x4
    void * pMatrixArrayUnaligned; // offset 0xC, size 0x4
    struct RpHAnimNodeInfo * pNodeInfo; // offset 0x10, size 0x4
    struct RwFrame * parentFrame; // offset 0x14, size 0x4
    struct RpHAnimHierarchy * parentHierarchy; // offset 0x18, size 0x4
    int rootParentOffset; // offset 0x1C, size 0x4
    struct RtAnimInterpolator * currentAnim; // offset 0x20, size 0x4
};
// Range: 0x8004A3E0 -> 0x8004A5AC
static void render_decal_atomic(const struct decal_instance & decal /* r31 */) {
    // Local variables
    struct RpGeometry * geom; // r27
    struct RpMaterial * material; // r28
    struct RwMatrixTag uvmat; // r1+0x8
    struct RpHAnimHierarchy * heir; // r30
    struct RwMatrixTag * oldheirmat; // r26
    struct RwFrame * frame; // r29

    // References
    // -> struct xMat4x3 g_I3;
    // -> static char __FUNCTION__[20];
}

// Range: 0x8004A5AC -> 0x8004A624
static unsigned char check_driver_hidden(const struct decal_instance & decal /* r31 */) {}

static struct xMat4x3 cast_test_mat; // size: 0x40, address: 0x80B5E850
static float cast_test_sweep; // size: 0x4, address: 0x80D68F2C
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
// total size: 0x14
struct RwObjectHasFrame {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLLLink lFrame; // offset 0x8, size 0x8
    struct RwObjectHasFrame * (* sync)(struct RwObjectHasFrame *); // offset 0x10, size 0x4
};
// total size: 0x18
struct RwResEntry {
    // Members
    struct RwLLLink link; // offset 0x0, size 0x8
    int size; // offset 0x8, size 0x4
    void * owner; // offset 0xC, size 0x4
    struct RwResEntry * * ownerRef; // offset 0x10, size 0x4
    void (* destroyNotify)(struct RwResEntry *); // offset 0x14, size 0x4
};
// total size: 0xC
struct rxHeapSuperBlockDescriptor {
    // Members
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    struct rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
// total size: 0x8
struct rxHeapFreeBlock {
    // Members
    unsigned int size; // offset 0x0, size 0x4
    struct rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
// total size: 0x20
struct rxHeapBlockHeader {
    // Members
    struct rxHeapBlockHeader * prev; // offset 0x0, size 0x4
    struct rxHeapBlockHeader * next; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    struct rxHeapFreeBlock * freeEntry; // offset 0xC, size 0x4
    unsigned int pad[4]; // offset 0x10, size 0x10
};
// total size: 0x1C
struct RxHeap {
    // Members
    unsigned int superBlockSize; // offset 0x0, size 0x4
    struct rxHeapSuperBlockDescriptor * head; // offset 0x4, size 0x4
    struct rxHeapBlockHeader * headBlock; // offset 0x8, size 0x4
    struct rxHeapFreeBlock * freeBlocks; // offset 0xC, size 0x4
    unsigned int entriesAlloced; // offset 0x10, size 0x4
    unsigned int entriesUsed; // offset 0x14, size 0x4
    int dirty; // offset 0x18, size 0x4
};
// total size: 0x8
struct RxPipelineNodeParam {
    // Members
    void * dataParam; // offset 0x0, size 0x4
    struct RxHeap * heap; // offset 0x4, size 0x4
};
// total size: 0x1C
struct RxNodeMethods {
    // Members
    int (* nodeBody)(struct RxPipelineNode *, struct RxPipelineNodeParam *); // offset 0x0, size 0x4
    int (* nodeInit)(struct RxNodeDefinition *); // offset 0x4, size 0x4
    void (* nodeTerm)(struct RxNodeDefinition *); // offset 0x8, size 0x4
    int (* pipelineNodeInit)(struct RxPipelineNode *); // offset 0xC, size 0x4
    void (* pipelineNodeTerm)(struct RxPipelineNode *); // offset 0x10, size 0x4
    int (* pipelineNodeConfig)(struct RxPipelineNode *, struct RxPipeline *); // offset 0x14, size 0x4
    unsigned int (* configMsgHandler)(struct RxPipelineNode *, unsigned int, unsigned int, void *); // offset 0x18, size 0x4
};
// total size: 0x10
struct RxClusterDefinition {
    // Members
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    const char * attributeSet; // offset 0xC, size 0x4
};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
struct RxClusterRef {
    // Members
    struct RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
struct RxOutputSpec {
    // Members
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
// total size: 0x14
struct RxIoSpec {
    // Members
    unsigned int numClustersOfInterest; // offset 0x0, size 0x4
    struct RxClusterRef * clustersOfInterest; // offset 0x4, size 0x4
    enum RxClusterValidityReq * inputRequirements; // offset 0x8, size 0x4
    unsigned int numOutputs; // offset 0xC, size 0x4
    struct RxOutputSpec * outputs; // offset 0x10, size 0x4
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x40
struct RxNodeDefinition {
    // Members
    char * name; // offset 0x0, size 0x4
    struct RxNodeMethods nodeMethods; // offset 0x4, size 0x1C
    struct RxIoSpec io; // offset 0x20, size 0x14
    unsigned int pipelineNodePrivateDataSize; // offset 0x34, size 0x4
    enum RxNodeDefEditable editable; // offset 0x38, size 0x4
    int InputPipesCnt; // offset 0x3C, size 0x4
};
// total size: 0x8
struct RxPipelineCluster {
    // Members
    struct RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
// total size: 0x0
struct rxReq {};
// total size: 0xC
struct RxPipelineNodeTopSortData {
    // Members
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    struct rxReq * req; // offset 0x8, size 0x4
};
// total size: 0x28
struct RxPipelineNode {
    // Members
    struct RxNodeDefinition * nodeDef; // offset 0x0, size 0x4
    unsigned int numOutputs; // offset 0x4, size 0x4
    unsigned int * outputs; // offset 0x8, size 0x4
    struct RxPipelineCluster * * slotClusterRefs; // offset 0xC, size 0x4
    unsigned int * slotsContinue; // offset 0x10, size 0x4
    void * privateData; // offset 0x14, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x18, size 0x4
    struct RxPipelineNodeTopSortData * topSortData; // offset 0x1C, size 0x4
    void * initializationData; // offset 0x20, size 0x4
    unsigned int initializationDataSize; // offset 0x24, size 0x4
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x1C
struct RxCluster {
    // Members
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short stride; // offset 0x2, size 0x2
    void * data; // offset 0x4, size 0x4
    void * currentData; // offset 0x8, size 0x4
    unsigned int numAlloced; // offset 0xC, size 0x4
    unsigned int numUsed; // offset 0x10, size 0x4
    struct RxPipelineCluster * clusterRef; // offset 0x14, size 0x4
    unsigned int attributes; // offset 0x18, size 0x4
};
// total size: 0x30
struct RxPacket {
    // Members
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short numClusters; // offset 0x2, size 0x2
    struct RxPipeline * pipeline; // offset 0x4, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x8, size 0x4
    unsigned int * slotsContinue; // offset 0xC, size 0x4
    struct RxPipelineCluster * * slotClusterRefs; // offset 0x10, size 0x4
    struct RxCluster clusters[1]; // offset 0x14, size 0x1C
};
// total size: 0xC
struct RxPipelineRequiresCluster {
    // Members
    struct RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
// total size: 0x34
struct RxPipeline {
    // Members
    int locked; // offset 0x0, size 0x4
    unsigned int numNodes; // offset 0x4, size 0x4
    struct RxPipelineNode * nodes; // offset 0x8, size 0x4
    unsigned int packetNumClusterSlots; // offset 0xC, size 0x4
    enum rxEmbeddedPacketState embeddedPacketState; // offset 0x10, size 0x4
    struct RxPacket * embeddedPacket; // offset 0x14, size 0x4
    unsigned int numInputRequirements; // offset 0x18, size 0x4
    struct RxPipelineRequiresCluster * inputRequirements; // offset 0x1C, size 0x4
    void * superBlock; // offset 0x20, size 0x4
    unsigned int superBlockSize; // offset 0x24, size 0x4
    unsigned int entryPoint; // offset 0x28, size 0x4
    unsigned int pluginId; // offset 0x2C, size 0x4
    unsigned int pluginData; // offset 0x30, size 0x4
};
// total size: 0xC
struct RwSurfaceProperties {
    // Members
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0x1C
struct RpMaterial {
    // Members
    struct RwTexture * texture; // offset 0x0, size 0x4
    struct RwRGBA color; // offset 0x4, size 0x4
    struct RxPipeline * pipeline; // offset 0x8, size 0x4
    struct RwSurfaceProperties surfaceProps; // offset 0xC, size 0xC
    signed short refCount; // offset 0x18, size 0x2
    signed short pad; // offset 0x1A, size 0x2
};
// total size: 0xC
struct RpMaterialList {
    // Members
    struct RpMaterial * * materials; // offset 0x0, size 0x4
    int numMaterials; // offset 0x4, size 0x4
    int space; // offset 0x8, size 0x4
};
// total size: 0x8
struct RpTriangle {
    // Members
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    unsigned short matIndex; // offset 0x6, size 0x2
};
// total size: 0x8
struct RwTexCoords {
    // Members
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x10
struct RpMeshHeader {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    unsigned short numMeshes; // offset 0x4, size 0x2
    unsigned short serialNum; // offset 0x6, size 0x2
    unsigned int totalIndicesInMesh; // offset 0x8, size 0x4
    unsigned int firstMeshOffset; // offset 0xC, size 0x4
};
// total size: 0x1C
struct RpMorphTarget {
    // Members
    struct RpGeometry * parentGeom; // offset 0x0, size 0x4
    struct RwSphere boundingSphere; // offset 0x4, size 0x10
    struct RwV3d * verts; // offset 0x14, size 0x4
    struct RwV3d * normals; // offset 0x18, size 0x4
};
// total size: 0x60
struct RpGeometry {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    unsigned int flags; // offset 0x8, size 0x4
    unsigned short lockedSinceLastInst; // offset 0xC, size 0x2
    signed short refCount; // offset 0xE, size 0x2
    int numTriangles; // offset 0x10, size 0x4
    int numVertices; // offset 0x14, size 0x4
    int numMorphTargets; // offset 0x18, size 0x4
    int numTexCoordSets; // offset 0x1C, size 0x4
    struct RpMaterialList matList; // offset 0x20, size 0xC
    struct RpTriangle * triangles; // offset 0x2C, size 0x4
    struct RwRGBA * preLitLum; // offset 0x30, size 0x4
    struct RwTexCoords * texCoords[8]; // offset 0x34, size 0x20
    struct RpMeshHeader * mesh; // offset 0x54, size 0x4
    struct RwResEntry * repEntry; // offset 0x58, size 0x4
    struct RpMorphTarget * morphTarget; // offset 0x5C, size 0x4
};
// total size: 0x2C
struct RpClump {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLinkList atomicList; // offset 0x8, size 0x8
    struct RwLinkList lightList; // offset 0x10, size 0x8
    struct RwLinkList cameraList; // offset 0x18, size 0x8
    struct RwLLLink inWorldLink; // offset 0x20, size 0x8
    struct RpClump * (* callback)(struct RpClump *, void *); // offset 0x28, size 0x4
};
// total size: 0x14
struct RpInterpolator {
    // Members
    int flags; // offset 0x0, size 0x4
    signed short startMorphTarget; // offset 0x4, size 0x2
    signed short endMorphTarget; // offset 0x6, size 0x2
    float time; // offset 0x8, size 0x4
    float recipTime; // offset 0xC, size 0x4
    float position; // offset 0x10, size 0x4
};
// total size: 0x70
struct RpAtomic {
    // Members
    struct RwObjectHasFrame object; // offset 0x0, size 0x14
    struct RwResEntry * repEntry; // offset 0x14, size 0x4
    struct RpGeometry * geometry; // offset 0x18, size 0x4
    struct RwSphere boundingSphere; // offset 0x1C, size 0x10
    struct RwSphere worldBoundingSphere; // offset 0x2C, size 0x10
    struct RpClump * clump; // offset 0x3C, size 0x4
    struct RwLLLink inClumpLink; // offset 0x40, size 0x8
    struct RpAtomic * (* renderCallBack)(struct RpAtomic *); // offset 0x48, size 0x4
    struct RpInterpolator interpolator; // offset 0x4C, size 0x14
    unsigned short renderFrame; // offset 0x60, size 0x2
    unsigned short pad; // offset 0x62, size 0x2
    struct RwLinkList llWorldSectorsInAtomic; // offset 0x64, size 0x8
    struct RxPipeline * pipeline; // offset 0x6C, size 0x4
};
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
// total size: 0x8
struct xBaseAsset {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x50
struct xEntAsset : public xBaseAsset {
    // Members
    unsigned char flags; // offset 0x8, size 0x1
    unsigned char subtype; // offset 0x9, size 0x1
    unsigned char pflags; // offset 0xA, size 0x1
    unsigned char moreFlags; // offset 0xB, size 0x1
    unsigned int surfaceID; // offset 0xC, size 0x4
    struct xVec3 ang; // offset 0x10, size 0xC
    struct xVec3 pos; // offset 0x1C, size 0xC
    struct xVec3 scale; // offset 0x28, size 0xC
    float redMult; // offset 0x34, size 0x4
    float greenMult; // offset 0x38, size 0x4
    float blueMult; // offset 0x3C, size 0x4
    float seeThru; // offset 0x40, size 0x4
    float seeThruSpeed; // offset 0x44, size 0x4
    unsigned int modelInfoID; // offset 0x48, size 0x4
    unsigned int animListID; // offset 0x4C, size 0x4
};
// total size: 0xC
struct xModelPool {
    // Members
    struct xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    struct xModelInstance * List; // offset 0x8, size 0x4
};
// total size: 0xC
struct xAnimPhysicsData {
    // Members
    struct xVec3 * tranTable; // offset 0x0, size 0x4
    float * yawTable; // offset 0x4, size 0x4
    int tranCount; // offset 0x8, size 0x4
};
// total size: 0x24
struct xAnimFile {
    // Members
    struct xAnimFile * Next; // offset 0x0, size 0x4
    const char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int FileFlags; // offset 0xC, size 0x4
    float Duration; // offset 0x10, size 0x4
    float TimeOffset; // offset 0x14, size 0x4
    unsigned short BoneCount; // offset 0x18, size 0x2
    unsigned char NumAnims[2]; // offset 0x1A, size 0x2
    void * RawData; // offset 0x1C, size 0x4
    struct xAnimPhysicsData * PhysicsData; // offset 0x20, size 0x4
};
enum xSndHandle {
};
// total size: 0x8
struct xAnimActiveEffect {
    // Members
    struct xAnimEffect * Effect; // offset 0x0, size 0x4
    union { // inferred
        unsigned int Handle; // offset 0x4, size 0x4
        enum xSndHandle SndHandle; // offset 0x4, size 0x4
    };
};
// total size: 0x14
struct xAnimEffect {
    // Members
    struct xAnimEffect * Next; // offset 0x0, size 0x4
    unsigned short Flags; // offset 0x4, size 0x2
    unsigned short Probability; // offset 0x6, size 0x2
    float StartTime; // offset 0x8, size 0x4
    float EndTime; // offset 0xC, size 0x4
    unsigned int (* Callback)(unsigned int, struct xAnimActiveEffect *, struct xAnimSingle *, void *); // offset 0x10, size 0x4
};
// total size: 0x2C
struct xAnimTransition {
    // Members
    struct xAnimTransition * Next; // offset 0x0, size 0x4
    struct xAnimState * Dest; // offset 0x4, size 0x4
    unsigned int (* Conditional)(struct xAnimTransition *, struct xAnimSingle *, void *); // offset 0x8, size 0x4
    unsigned int (* Callback)(struct xAnimTransition *, struct xAnimSingle *, void *); // offset 0xC, size 0x4
    unsigned int Flags; // offset 0x10, size 0x4
    unsigned int UserFlags; // offset 0x14, size 0x4
    float SrcTime; // offset 0x18, size 0x4
    float DestTime; // offset 0x1C, size 0x4
    unsigned short Priority; // offset 0x20, size 0x2
    unsigned short QueuePriority; // offset 0x22, size 0x2
    float BlendRecip; // offset 0x24, size 0x4
    unsigned short * BlendOffset; // offset 0x28, size 0x4
};
// total size: 0x8
struct xAnimTransitionList {
    // Members
    struct xAnimTransitionList * Next; // offset 0x0, size 0x4
    struct xAnimTransition * T; // offset 0x4, size 0x4
};
// total size: 0x4
struct xAnimMultiFileBase {
    // Members
    unsigned int Count; // offset 0x0, size 0x4
};
// total size: 0x8
struct xAnimMultiFileEntry {
    // Members
    unsigned int ID; // offset 0x0, size 0x4
    struct xAnimFile * File; // offset 0x4, size 0x4
};
// total size: 0xC
struct xAnimMultiFile : public xAnimMultiFileBase {
    // Members
    struct xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
// total size: 0x10
struct xQuat {
    // Members
    struct xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
// total size: 0x4C
struct xAnimState {
    // Members
    struct xAnimState * Next; // offset 0x0, size 0x4
    const char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int Flags; // offset 0xC, size 0x4
    unsigned int UserFlags; // offset 0x10, size 0x4
    float Speed; // offset 0x14, size 0x4
    struct xAnimFile * Data; // offset 0x18, size 0x4
    struct xAnimEffect * Effects; // offset 0x1C, size 0x4
    struct xAnimTransitionList * Default; // offset 0x20, size 0x4
    struct xAnimTransitionList * List; // offset 0x24, size 0x4
    float * BoneBlend; // offset 0x28, size 0x4
    float * TimeSnap; // offset 0x2C, size 0x4
    float FadeRecip; // offset 0x30, size 0x4
    unsigned short * FadeOffset; // offset 0x34, size 0x4
    void * CallbackData; // offset 0x38, size 0x4
    struct xAnimMultiFile * MultiFile; // offset 0x3C, size 0x4
    void (* BeforeEnter)(struct xAnimPlay *, struct xAnimState *, void *); // offset 0x40, size 0x4
    void (* StateCallback)(struct xAnimState *, struct xAnimSingle *, void *); // offset 0x44, size 0x4
    void (* BeforeAnimMatrices)(struct xAnimPlay *, struct xQuat *, struct xVec3 *, int); // offset 0x48, size 0x4
};
// total size: 0x50
struct xAnimSingle {
    // Members
    unsigned int SingleFlags; // offset 0x0, size 0x4
    struct xAnimState * State; // offset 0x4, size 0x4
    float Time; // offset 0x8, size 0x4
    float CurrentSpeed; // offset 0xC, size 0x4
    float BilinearLerp[2]; // offset 0x10, size 0x8
    struct xAnimEffect * Effect; // offset 0x18, size 0x4
    unsigned int ActiveCount; // offset 0x1C, size 0x4
    float LastTime; // offset 0x20, size 0x4
    struct xAnimActiveEffect * ActiveList; // offset 0x24, size 0x4
    struct xAnimPlay * Play; // offset 0x28, size 0x4
    struct xAnimTransition * Sync; // offset 0x2C, size 0x4
    struct xAnimTransition * Tran; // offset 0x30, size 0x4
    struct xAnimSingle * Blend; // offset 0x34, size 0x4
    float BlendFactor; // offset 0x38, size 0x4
    struct xVec3 PhysDisp; // offset 0x3C, size 0xC
    float YawDisp; // offset 0x48, size 0x4
    unsigned int pad[1]; // offset 0x4C, size 0x4
};
// total size: 0x18
struct xAnimTable {
    // Members
    const char * Name; // offset 0x0, size 0x4
    struct xAnimTransition * TransitionList; // offset 0x4, size 0x4
    struct xAnimState * StateList; // offset 0x8, size 0x4
    unsigned int AnimIndex; // offset 0xC, size 0x4
    unsigned int MorphIndex; // offset 0x10, size 0x4
    unsigned int UserFlags; // offset 0x14, size 0x4
};
// total size: 0x20
struct xMemPool {
    // Members
    void * FreeList; // offset 0x0, size 0x4
    unsigned short NextOffset; // offset 0x4, size 0x2
    unsigned short Flags; // offset 0x6, size 0x2
    void * UsedList; // offset 0x8, size 0x4
    void (* InitCB)(struct xMemPool *, void *); // offset 0xC, size 0x4
    void * Buffer; // offset 0x10, size 0x4
    unsigned short Size; // offset 0x14, size 0x2
    unsigned short NumRealloc; // offset 0x16, size 0x2
    unsigned int Total; // offset 0x18, size 0x4
    unsigned short Allocated; // offset 0x1C, size 0x2
    unsigned short Pad0; // offset 0x1E, size 0x2
};
// total size: 0x20
struct xAnimPlay {
    // Members
    struct xAnimPlay * Next; // offset 0x0, size 0x4
    unsigned short NumSingle; // offset 0x4, size 0x2
    unsigned short BoneCount; // offset 0x6, size 0x2
    struct xAnimSingle * Single; // offset 0x8, size 0x4
    void * Object; // offset 0xC, size 0x4
    struct xAnimTable * Table; // offset 0x10, size 0x4
    struct xMemPool * Pool; // offset 0x14, size 0x4
    struct xModelInstance * ModelInst; // offset 0x18, size 0x4
    void (* BeforeAnimMatrices)(struct xAnimPlay *, struct xQuat *, struct xVec3 *, int); // offset 0x1C, size 0x4
};
// total size: 0x8
struct xModelPipe {
    // Members
    unsigned int Flags; // offset 0x0, size 0x4
    unsigned char Layer; // offset 0x4, size 0x1
    unsigned char AlphaDiscard; // offset 0x5, size 0x1
    unsigned short PipePad; // offset 0x6, size 0x2
};
// total size: 0x0
struct xSurface {};
// total size: 0x18
struct xModelBucket {
    // Members
    struct RpAtomic * Data; // offset 0x0, size 0x4
    struct RpAtomic * OriginalData; // offset 0x4, size 0x4
    union { // inferred
        struct xModelInstance * List; // offset 0x8, size 0x4
        struct xModelBucket * * BackRef; // offset 0x8, size 0x4
    };
    int ClipFlags; // offset 0xC, size 0x4
    struct xModelPipe Pipe; // offset 0x10, size 0x8
};
// total size: 0x10
struct RwRGBAReal {
    // Members
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
// total size: 0x40
struct RpLight {
    // Members
    struct RwObjectHasFrame object; // offset 0x0, size 0x14
    float radius; // offset 0x14, size 0x4
    struct RwRGBAReal color; // offset 0x18, size 0x10
    float minusCosAngle; // offset 0x28, size 0x4
    struct RwLinkList WorldSectorsInLight; // offset 0x2C, size 0x8
    struct RwLLLink inWorld; // offset 0x34, size 0x8
    unsigned short lightFrame; // offset 0x3C, size 0x2
    unsigned short pad; // offset 0x3E, size 0x2
};
// total size: 0x60
struct xLightKitLight {
    // Members
    unsigned int type; // offset 0x0, size 0x4
    struct RwRGBAReal color; // offset 0x4, size 0x10
    float matrix[16]; // offset 0x14, size 0x40
    float radius; // offset 0x54, size 0x4
    float angle; // offset 0x58, size 0x4
    struct RpLight * platLight; // offset 0x5C, size 0x4
};
// total size: 0x14
struct xLightKit {
    // Members
    unsigned int tagID; // offset 0x0, size 0x4
    unsigned int groupID; // offset 0x4, size 0x4
    unsigned int lightCount; // offset 0x8, size 0x4
    struct xLightKitLight * lightList; // offset 0xC, size 0x4
    int blended; // offset 0x10, size 0x4
};
// total size: 0x4
struct /* @class$1104xDecal_cpp */ {
    // Members
    struct xVec3 * verts; // offset 0x0, size 0x4
};
// total size: 0x0
struct xLight {};
// total size: 0xCC
struct xModelInstance {
    // Members
    struct xModelInstance * Next; // offset 0x0, size 0x4
    struct xModelInstance * Parent; // offset 0x4, size 0x4
    struct xModelPool * Pool; // offset 0x8, size 0x4
    struct xAnimPlay * Anim; // offset 0xC, size 0x4
    struct RpAtomic * Data; // offset 0x10, size 0x4
    struct xModelPipe Pipe; // offset 0x14, size 0x8
    unsigned char InFrustum; // offset 0x1C, size 0x1
    unsigned char TrueClip; // offset 0x1D, size 0x1
    signed char sortBias; // offset 0x1E, size 0x1
    unsigned char modelpad; // offset 0x1F, size 0x1
    float RedMultiplier; // offset 0x20, size 0x4
    float GreenMultiplier; // offset 0x24, size 0x4
    float BlueMultiplier; // offset 0x28, size 0x4
    float Alpha; // offset 0x2C, size 0x4
    float FadeStart; // offset 0x30, size 0x4
    float FadeEnd; // offset 0x34, size 0x4
    struct xSurface * Surf; // offset 0x38, size 0x4
    struct xModelBucket * * Bucket; // offset 0x3C, size 0x4
    struct xModelInstance * BucketNext; // offset 0x40, size 0x4
    struct xLightKit * LightKit; // offset 0x44, size 0x4
    struct xLightKit * LightKitBlend; // offset 0x48, size 0x4
    float BlendDuration; // offset 0x4C, size 0x4
    float BlendTimeRemaining; // offset 0x50, size 0x4
    void * Object; // offset 0x54, size 0x4
    unsigned short Flags; // offset 0x58, size 0x2
    unsigned char BoneCount; // offset 0x5A, size 0x1
    unsigned char BoneIndex; // offset 0x5B, size 0x1
    unsigned char * BoneRemap; // offset 0x5C, size 0x4
    struct RwMatrixTag * Mat; // offset 0x60, size 0x4
    struct xVec3 Scale; // offset 0x64, size 0xC
    struct xBox animBound; // offset 0x70, size 0x18
    struct xBox combinedAnimBound; // offset 0x88, size 0x18
    unsigned int modelID; // offset 0xA0, size 0x4
    unsigned int shadowID; // offset 0xA4, size 0x4
    // total size: 0x4
    struct /* @class$1104xDecal_cpp */ {
        // Members
        struct xVec3 * verts; // offset 0x0, size 0x4
    } anim_coll; // offset 0xA8, size 0x4
    struct xLight * lights[4]; // offset 0xAC, size 0x10
    float lightsDistance[4]; // offset 0xBC, size 0x10
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
struct RpSector {
    // Members
    int type; // offset 0x0, size 0x4
};
// total size: 0x18
struct RwBBox {
    // Members
    struct RwV3d sup; // offset 0x0, size 0xC
    struct RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x4
struct RpVertexNormal {
    // Members
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
};
// total size: 0x88
struct RpWorldSector {
    // Members
    int type; // offset 0x0, size 0x4
    struct RpTriangle * triangles; // offset 0x4, size 0x4
    struct RwV3d * vertices; // offset 0x8, size 0x4
    struct RpVertexNormal * normals; // offset 0xC, size 0x4
    struct RwTexCoords * texCoords[8]; // offset 0x10, size 0x20
    struct RwRGBA * preLitLum; // offset 0x30, size 0x4
    struct RwResEntry * repEntry; // offset 0x34, size 0x4
    struct RwLinkList collAtomicsInWorldSector; // offset 0x38, size 0x8
    struct RwLinkList lightsInWorldSector; // offset 0x40, size 0x8
    struct RwBBox boundingBox; // offset 0x48, size 0x18
    struct RwBBox tightBoundingBox; // offset 0x60, size 0x18
    struct RpMeshHeader * mesh; // offset 0x78, size 0x4
    struct RxPipeline * pipeline; // offset 0x7C, size 0x4
    unsigned short matListWindowBase; // offset 0x80, size 0x2
    unsigned short numVertices; // offset 0x82, size 0x2
    unsigned short numTriangles; // offset 0x84, size 0x2
    unsigned short pad; // offset 0x86, size 0x2
};
// total size: 0x70
struct RpWorld {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    unsigned int flags; // offset 0x8, size 0x4
    enum RpWorldRenderOrder renderOrder; // offset 0xC, size 0x4
    struct RpMaterialList matList; // offset 0x10, size 0xC
    struct RpSector * rootSector; // offset 0x1C, size 0x4
    int numTexCoordSets; // offset 0x20, size 0x4
    int numClumpsInWorld; // offset 0x24, size 0x4
    struct RwLLLink * currentClumpLink; // offset 0x28, size 0x4
    struct RwLinkList clumpList; // offset 0x2C, size 0x8
    struct RwLinkList lightList; // offset 0x34, size 0x8
    struct RwLinkList directionalLightList; // offset 0x3C, size 0x8
    struct RwV3d worldOrigin; // offset 0x44, size 0xC
    struct RwBBox boundingBox; // offset 0x50, size 0x18
    struct RpWorldSector * (* renderCallBack)(struct RpWorldSector *); // offset 0x68, size 0x4
    struct RxPipeline * pipeline; // offset 0x6C, size 0x4
};
// total size: 0x10
struct xClumpCollBSPBranchNode {
    // Members
    unsigned int leftInfo; // offset 0x0, size 0x4
    unsigned int rightInfo; // offset 0x4, size 0x4
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
// total size: 0x4
struct xClumpCollBSPVertInfo {
    // Members
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
};
union /* @class$1268xDecal_cpp */ {
    struct xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
    unsigned int rawIdx; // offset 0x0, size 0x4
    struct RwV3d * p; // offset 0x0, size 0x4
};
// total size: 0x8
struct xClumpCollBSPTriangle {
    // Members
    union /* @class$1268xDecal_cpp */ {
        struct xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
        unsigned int rawIdx; // offset 0x0, size 0x4
        struct RwV3d * p; // offset 0x0, size 0x4
    } v; // offset 0x0, size 0x4
    unsigned char flags; // offset 0x4, size 0x1
    unsigned char detailed_info_cache_index; // offset 0x5, size 0x1
    unsigned short matIndex; // offset 0x6, size 0x2
};
// total size: 0x10
struct xClumpCollBSPTree {
    // Members
    int numBranchNodes; // offset 0x0, size 0x4
    struct xClumpCollBSPBranchNode * branchNodes; // offset 0x4, size 0x4
    int numTriangles; // offset 0x8, size 0x4
    struct xClumpCollBSPTriangle * triangles; // offset 0xC, size 0x4
};
// total size: 0x8
struct xJSPNodeInfo {
    // Members
    int originalMatIndex; // offset 0x0, size 0x4
    unsigned short nodeFlags; // offset 0x4, size 0x2
    signed short sortOrder; // offset 0x6, size 0x2
};
// total size: 0x10
struct xJSPNodeTreeBranch {
    // Members
    unsigned short leftNode; // offset 0x0, size 0x2
    unsigned short rightNode; // offset 0x2, size 0x2
    unsigned char leftType; // offset 0x4, size 0x1
    unsigned char rightType; // offset 0x5, size 0x1
    unsigned short coord; // offset 0x6, size 0x2
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
// total size: 0x20
struct xJSPNodeTreeLeaf {
    // Members
    int nodeIndex; // offset 0x0, size 0x4
    int leafCount; // offset 0x4, size 0x4
    struct RwBBox box; // offset 0x8, size 0x18
};
// total size: 0x10
struct xJSPNodeTree {
    // Members
    int numBranchNodes; // offset 0x0, size 0x4
    struct xJSPNodeTreeBranch * branchNodes; // offset 0x4, size 0x4
    int numLeafNodes; // offset 0x8, size 0x4
    struct xJSPNodeTreeLeaf * leafNodes; // offset 0xC, size 0x4
};
// total size: 0x18
struct RpTie {
    // Members
    struct RwLLLink lAtomicInWorldSector; // offset 0x0, size 0x8
    struct RpAtomic * apAtom; // offset 0x8, size 0x4
    struct RwLLLink lWorldSectorInAtomic; // offset 0xC, size 0x8
    struct RpWorldSector * worldSector; // offset 0x14, size 0x4
};
// total size: 0xC
struct xJSPMiniLightTie {
    // Members
    struct RwLLLink lightInWorldSector; // offset 0x0, size 0x8
    struct RpLight * light; // offset 0x8, size 0x4
};
// total size: 0x108
struct xJSPNodeLight {
    // Members
    struct RpAtomic * atomic; // offset 0x0, size 0x4
    int lightCount; // offset 0x4, size 0x4
    struct RpTie dummyTie; // offset 0x8, size 0x18
    struct RpWorldSector dummySector; // offset 0x20, size 0x88
    struct xJSPMiniLightTie dummyLightTie[8]; // offset 0xA8, size 0x60
};
// total size: 0x2C
struct xJSPHeader {
    // Members
    char idtag[4]; // offset 0x0, size 0x4
    unsigned int version; // offset 0x4, size 0x4
    unsigned int jspNodeCount; // offset 0x8, size 0x4
    struct RpClump * clump; // offset 0xC, size 0x4
    struct xClumpCollBSPTree * colltree; // offset 0x10, size 0x4
    struct xJSPNodeInfo * jspNodeList; // offset 0x14, size 0x4
    unsigned int stripVecCount; // offset 0x18, size 0x4
    struct RwV3d * stripVecList; // offset 0x1C, size 0x4
    unsigned short vertDataFlags; // offset 0x20, size 0x2
    unsigned short vertDataStride; // offset 0x22, size 0x2
    struct xJSPNodeTree * nodetree; // offset 0x24, size 0x4
    struct xJSPNodeLight * nodelight; // offset 0x28, size 0x4
};
// total size: 0x10
struct iEnvMatOrder {
    // Members
    unsigned short jspIndex; // offset 0x0, size 0x2
    unsigned short nodeIndex; // offset 0x2, size 0x2
    int matGroup; // offset 0x4, size 0x4
    struct RpAtomic * atomic; // offset 0x8, size 0x4
    struct xJSPNodeInfo * nodeInfo; // offset 0xC, size 0x4
};
// total size: 0xA4
struct RwFrame {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLLLink inDirtyListLink; // offset 0x8, size 0x8
    struct RwMatrixTag modelling; // offset 0x10, size 0x40
    struct RwMatrixTag ltm; // offset 0x50, size 0x40
    struct RwLinkList objectList; // offset 0x90, size 0x8
    struct RwFrame * child; // offset 0x98, size 0x4
    struct RwFrame * next; // offset 0x9C, size 0x4
    struct RwFrame * root; // offset 0xA0, size 0x4
};
// total size: 0x44
struct iEnv {
    // Members
    struct RpWorld * world; // offset 0x0, size 0x4
    struct RpWorld * collision; // offset 0x4, size 0x4
    struct RpWorld * fx; // offset 0x8, size 0x4
    struct RpWorld * camera; // offset 0xC, size 0x4
    int jsp_count; // offset 0x10, size 0x4
    unsigned int * jsp_aid; // offset 0x14, size 0x4
    struct xJSPHeader * * jsp_list; // offset 0x18, size 0x4
    struct xBox * jsp_bound; // offset 0x1C, size 0x4
    int * jsp_visibilityCount; // offset 0x20, size 0x4
    int jspMatOrderCount; // offset 0x24, size 0x4
    struct iEnvMatOrder * jspMatOrderList; // offset 0x28, size 0x4
    struct RpLight * light[2]; // offset 0x2C, size 0x8
    struct RwFrame * light_frame[2]; // offset 0x34, size 0x8
    int memlvl; // offset 0x3C, size 0x4
    unsigned short numOpaque; // offset 0x40, size 0x2
    unsigned short numTransparent; // offset 0x42, size 0x2
};
// total size: 0x4C
struct xEnv {
    // Members
    struct iEnv * geom; // offset 0x0, size 0x4
    struct iEnv ienv; // offset 0x4, size 0x44
    struct xLightKit * lightKit; // offset 0x48, size 0x4
};
// total size: 0x74
struct xScene {
    // Members
    unsigned int sceneID; // offset 0x0, size 0x4
    unsigned short flags; // offset 0x4, size 0x2
    unsigned short numTrigs; // offset 0x6, size 0x2
    unsigned short numSpecialTriggers; // offset 0x8, size 0x2
    unsigned short numStats; // offset 0xA, size 0x2
    unsigned short numDyns; // offset 0xC, size 0x2
    unsigned short numNpcs; // offset 0xE, size 0x2
    unsigned short numActEnts; // offset 0x10, size 0x2
    float gravity; // offset 0x14, size 0x4
    float drag; // offset 0x18, size 0x4
    float friction; // offset 0x1C, size 0x4
    unsigned short numEntsAllocd; // offset 0x20, size 0x2
    unsigned short numTrigsAllocd; // offset 0x22, size 0x2
    unsigned short numSpecialTriggersAllocd; // offset 0x24, size 0x2
    unsigned short numStatsAllocd; // offset 0x26, size 0x2
    unsigned short numDynsAllocd; // offset 0x28, size 0x2
    unsigned short numNpcsAllocd; // offset 0x2A, size 0x2
    struct xEnt * * trigs; // offset 0x2C, size 0x4
    struct xEnt * * specialTriggers; // offset 0x30, size 0x4
    struct xEnt * * stats; // offset 0x34, size 0x4
    struct xEnt * * dyns; // offset 0x38, size 0x4
    struct xEnt * * npcs; // offset 0x3C, size 0x4
    struct xEnt * * actEnts; // offset 0x40, size 0x4
    struct xEnv * env; // offset 0x44, size 0x4
    struct xMemPool mempool; // offset 0x48, size 0x20
    struct xBase * (* resolvID)(unsigned int); // offset 0x68, size 0x4
    char * (* base2Name)(struct xBase *); // offset 0x6C, size 0x4
    char * (* id2Name)(unsigned int); // offset 0x70, size 0x4
};
// total size: 0x10
struct xRot {
    // Members
    struct xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
};
// total size: 0xF0
struct xEntFrame {
    // Members
    struct xMat4x3 mat; // offset 0x0, size 0x40
    struct xMat4x3 oldmat; // offset 0x40, size 0x40
    struct xVec3 oldvel; // offset 0x80, size 0xC
    struct xRot oldrot; // offset 0x8C, size 0x10
    struct xRot drot; // offset 0x9C, size 0x10
    struct xRot rot; // offset 0xAC, size 0x10
    struct xVec3 dvel; // offset 0xBC, size 0xC
    struct xVec3 vel; // offset 0xC8, size 0xC
    unsigned int mode; // offset 0xD4, size 0x4
    struct xVec3 dpos; // offset 0xD8, size 0xC
};
// total size: 0x5FC
struct xEntCollis {
    // Members
    unsigned char chk; // offset 0x0, size 0x1
    unsigned char pen; // offset 0x1, size 0x1
    unsigned char env_sidx; // offset 0x2, size 0x1
    unsigned char env_eidx; // offset 0x3, size 0x1
    unsigned char npc_sidx; // offset 0x4, size 0x1
    unsigned char npc_eidx; // offset 0x5, size 0x1
    unsigned char dyn_sidx; // offset 0x6, size 0x1
    unsigned char dyn_eidx; // offset 0x7, size 0x1
    unsigned char stat_sidx; // offset 0x8, size 0x1
    unsigned char stat_eidx; // offset 0x9, size 0x1
    unsigned char idx; // offset 0xA, size 0x1
    struct xCollis colls[18]; // offset 0xC, size 0x5E8
    void (* post)(struct xEnt *, struct xScene *, float, struct xEntCollis *); // offset 0x5F4, size 0x4
    unsigned int (* depenq)(struct xEnt *, struct xEnt *, struct xScene *, float, struct xCollis *); // offset 0x5F8, size 0x4
};
// total size: 0x18
struct xGridBound {
    // Members
    void * data; // offset 0x0, size 0x4
    unsigned short gx; // offset 0x4, size 0x2
    unsigned short gz; // offset 0x6, size 0x2
    unsigned char oversize; // offset 0x8, size 0x1
    unsigned char deleted; // offset 0x9, size 0x1
    unsigned char gpad; // offset 0xA, size 0x1
    unsigned char pad; // offset 0xB, size 0x1
    struct xGrid * grid; // offset 0xC, size 0x4
    struct xGridBound * * head; // offset 0x10, size 0x4
    struct xGridBound * next; // offset 0x14, size 0x4
};
// total size: 0x0
struct xFFX {};
// total size: 0x50
struct xEntDriveInfo {
    // Members
    struct xMat4x3 driveMat; // offset 0x0, size 0x40
    struct xVec3 centerOffset; // offset 0x40, size 0xC
    unsigned int flags; // offset 0x4C, size 0x4
};
// total size: 0x30
struct xShadowSimplePoly {
    // Members
    struct xVec3 vert[3]; // offset 0x0, size 0x24
    struct xVec3 norm; // offset 0x24, size 0xC
};
// total size: 0xA4
struct xShadowSimpleCache {
    // Members
    unsigned short flags; // offset 0x0, size 0x2
    unsigned char alpha; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
    unsigned int collPriority; // offset 0x4, size 0x4
    struct xVec3 pos; // offset 0x8, size 0xC
    struct xVec3 at; // offset 0x14, size 0xC
    float tol_movement; // offset 0x20, size 0x4
    float radiusOptional; // offset 0x24, size 0x4
    struct xEnt * castOnEnt; // offset 0x28, size 0x4
    struct xShadowSimplePoly poly; // offset 0x2C, size 0x30
    float envHeight; // offset 0x5C, size 0x4
    float shadowHeight; // offset 0x60, size 0x4
    union { // inferred
        unsigned int raster; // offset 0x64, size 0x4
        struct RwRaster * ptr_raster; // offset 0x64, size 0x4
    };
    float dydx; // offset 0x68, size 0x4
    float dydz; // offset 0x6C, size 0x4
    struct xVec3 corner[4]; // offset 0x70, size 0x30
    void * collSkipsItem; // offset 0xA0, size 0x4
};
// total size: 0x2C
struct xEntShadow {
    // Members
    struct xVec3 pos; // offset 0x0, size 0xC
    struct xVec3 vec; // offset 0xC, size 0xC
    struct RpAtomic * shadowModel; // offset 0x18, size 0x4
    float dst_cast; // offset 0x1C, size 0x4
    float radius[2]; // offset 0x20, size 0x8
    int flg_castOnOneDFF : 1; // offset 0x28, size 0x4
    int flg_castOnAllDFF : 1; // offset 0x28, size 0x4
    int flg_disableEnvCast : 1; // offset 0x28, size 0x4
    int flg_shadowUnused : 29; // offset 0x28, size 0x4
};
// total size: 0x0
struct anim_coll_data {};
// total size: 0xD8
struct xEnt : public xBase {
    // Members
    struct xEntAsset * asset; // offset 0x10, size 0x4
    unsigned short idx; // offset 0x14, size 0x2
    unsigned char flags; // offset 0x16, size 0x1
    unsigned char miscflags; // offset 0x17, size 0x1
    unsigned char subType; // offset 0x18, size 0x1
    unsigned char pflags; // offset 0x19, size 0x1
    unsigned short moreFlags; // offset 0x1A, size 0x2
    unsigned char isCulled : 2; // offset 0x1C, size 0x1
    unsigned char collisionEventReceived : 2; // offset 0x1C, size 0x1
    unsigned char driving_count : 7; // offset 0x1D, size 0x1
    unsigned char driving_reset : 1; // offset 0x1D, size 0x1
    unsigned char num_ffx; // offset 0x1E, size 0x1
    unsigned char collType; // offset 0x1F, size 0x1
    unsigned char collLev; // offset 0x20, size 0x1
    unsigned char chkby; // offset 0x21, size 0x1
    unsigned char penby; // offset 0x22, size 0x1
    void (* visUpdate)(struct xEnt *); // offset 0x24, size 0x4
    struct xModelInstance * model; // offset 0x28, size 0x4
    struct xModelInstance * collModel; // offset 0x2C, size 0x4
    struct xModelInstance * camcollModel; // offset 0x30, size 0x4
    void (* update)(struct xEnt *, struct xScene *, float); // offset 0x34, size 0x4
    void (* endUpdate)(struct xEnt *, struct xScene *, float); // offset 0x38, size 0x4
    void (* bupdate)(struct xEnt *, struct xVec3 *); // offset 0x3C, size 0x4
    void (* move)(struct xEnt *, struct xScene *, float, struct xEntFrame *); // offset 0x40, size 0x4
    void (* render)(struct xEnt *); // offset 0x44, size 0x4
    struct xEntFrame * frame; // offset 0x48, size 0x4
    struct xEntCollis * collis; // offset 0x4C, size 0x4
    struct xGridBound gridb; // offset 0x50, size 0x18
    struct xBound bound; // offset 0x68, size 0x4C
    void (* transl)(struct xEnt *, struct xVec3 *, struct xMat4x3 *); // offset 0xB4, size 0x4
    struct xFFX * ffx; // offset 0xB8, size 0x4
    struct xEnt * driver; // offset 0xBC, size 0x4
    struct xEnt * driven; // offset 0xC0, size 0x4
    struct xEntDriveInfo * driveInfo; // offset 0xC4, size 0x4
    struct xShadowSimpleCache * simpShadow; // offset 0xC8, size 0x4
    struct xEntShadow * entShadow; // offset 0xCC, size 0x4
    struct anim_coll_data * anim_coll; // offset 0xD0, size 0x4
    void * user_data; // offset 0xD4, size 0x4
};
// total size: 0x5C
struct emit_context {
    // Members
    unsigned int owner; // offset 0x0, size 0x4
    int flags; // offset 0x4, size 0x4
    int priority; // offset 0x8, size 0x4
    int max_owned; // offset 0xC, size 0x4
    int hard_max_owned; // offset 0x10, size 0x4
    float life; // offset 0x14, size 0x4
    float pause_time; // offset 0x18, size 0x4
    float accel_aging; // offset 0x1C, size 0x4
    float max_dist; // offset 0x20, size 0x4
    float lod_dist; // offset 0x24, size 0x4
    struct xVec2 size; // offset 0x28, size 0x8
    int blend_mode; // offset 0x30, size 0x4
    struct RwTexture * texture; // offset 0x34, size 0x4
    struct xVec2 uv[2]; // offset 0x38, size 0x10
    const struct xResponseCurve * curve; // offset 0x48, size 0x4
    void * context; // offset 0x4C, size 0x4
    void (* emitAtomicCB)(struct RpAtomic *, struct xMat4x3 *, struct xEnt *, void *); // offset 0x50, size 0x4
    void (* destAtomicCB)(struct RpAtomic *, void *); // offset 0x54, size 0x4
    void (* emitVertListCB)(struct xVec3 *, unsigned short *, int, struct xMat4x3 *, struct xEnt *, void *); // offset 0x58, size 0x4
};
// Range: 0x8004A624 -> 0x8004A7C4
static void cast_test() {
    // Local variables
    struct xMat4x3 mat; // r1+0x50
    float sweep; // f31
    struct xMat4x3 sweep_mat; // r1+0x10
    struct emit_context ec; // r1+0x90

    // References
    // -> static unsigned int texture;
    // -> static float size;
    // -> static float dist_min;
    // -> static float dist_max;
    // -> static int blend_mode;
    // -> static struct xMat4x3 cast_test_mat;
    // -> static float cast_test_sweep;
    // -> static float sweep_arc;
    // -> static float sweep_speed;
    // -> struct xGlobals * xglobals;
    // -> static unsigned char track_camera;
    // -> static unsigned char enable;
}

struct xVec3 g_O3; // size: 0xC, address: 0x80D6D198
// Range: 0x8004A7C4 -> 0x8004A900
static void debug_emit_from_camera() {
    // Local variables
    struct xMat4x3 mat; // r1+0x10
    struct emit_context ec; // r1+0x50

    // References
    // -> static unsigned int texture;
    // -> static struct xResponseCurve test_curve;
    // -> static unsigned char cycle;
    // -> static float life;
    // -> static float size;
    // -> static float dist_min;
    // -> static float dist_max;
    // -> static int blend_mode;
    // -> struct xGlobals * xglobals;
}

// Range: 0x8004A900 -> 0x8004A928
static void debug_emit_clear() {}

// Range: 0x8004A928 -> 0x8004A930
static void debug_render_begin(const struct xMat4x3 & mat /* r3 */) {
    // References
    // -> static const struct xMat4x3 * debug_mat;
}

// Range: 0x8004A930 -> 0x8004AA48
static void debug_render() {
    // Local variables
    struct xColor_tag color; // r1+0xC
    int i; // r31
    int index; // r30

    // References
    // -> static int debug_volumes_size;
    // -> static struct debug_volume_type debug_volumes[10];
    // -> static int debug_volumes_start;
    // -> struct xColor_tag g_WHITE;
    // -> static unsigned char render_volume;
}

// Range: 0x8004AA48 -> 0x8004AB20
static void debug_render_volume(const struct xBox & box /* r1+0x8 */, const struct xMat4x3 & mat /* r1+0xC */) {
    // Local variables
    int index; // r31

    // References
    // -> static int debug_volumes_size;
    // -> static struct debug_volume_type debug_volumes[10];
    // -> static int debug_volumes_start;
    // -> static unsigned char render_volume;
}

// Range: 0x8004AB20 -> 0x8004ABB8
void scene_enter() {
    // References
    // -> static int decals_used;
    // -> static class pool_list owner_groups;
    // -> static struct immediate_mode_data * immediate_buffer;
    // -> static struct decal_instance * * render_list;
    // -> static struct decal_instance * decals;
}

unsigned int gActiveHeap; // size: 0x4, address: 0x80D692A8
// Range: 0x8004ABB8 -> 0x8004AC0C
void scene_exit() {
    // Local variables
    struct decal_instance * decal; // r31
    struct decal_instance * end_decal; // r30

    // References
    // -> static int decals_used;
    // -> static struct decal_instance * decals;
}

// Range: 0x8004AC0C -> 0x8004ACBC
void reset() {
    // Local variables
    struct decal_instance * decal; // r30
    struct decal_instance * end_decal; // r29
    struct immediate_mode_data * idata; // r31
    struct immediate_mode_data * end_idata; // r28

    // References
    // -> static unsigned char decals_sorted;
    // -> static int decals_used;
    // -> static class pool_list owner_groups;
    // -> static struct immediate_mode_data * immediate_buffer;
    // -> static struct immediate_mode_data * immediate_free;
    // -> static struct decal_instance * decals;
}

static char __FUNCTION__[22]; // size: 0x16, address: 0x804F2378
// total size: 0x0
struct zReactiveAnimationData {};
// total size: 0x0
struct zReactiveGenre {};
// total size: 0xC
struct xSimpleObjAsset {
    // Members
    float animSpeed; // offset 0x0, size 0x4
    unsigned int initAnimState; // offset 0x4, size 0x4
    unsigned char collType; // offset 0x8, size 0x1
    unsigned char flags; // offset 0x9, size 0x1
};
// total size: 0x8
struct xDestructibleAssetAttachedAnimList {
    // Members
    unsigned int nanimations; // offset 0x0, size 0x4
    unsigned int * animationIDs; // offset 0x4, size 0x4
};
// total size: 0x34
struct xDestructibleAssetState {
    // Members
    unsigned int percent; // offset 0x0, size 0x4
    unsigned int modelID; // offset 0x4, size 0x4
    unsigned int shrapnelID; // offset 0x8, size 0x4
    unsigned int shrapnelhitID; // offset 0xC, size 0x4
    unsigned int soundgroupidleID; // offset 0x10, size 0x4
    unsigned int soundgroupfxID; // offset 0x14, size 0x4
    unsigned int soundgrouphitID; // offset 0x18, size 0x4
    unsigned int soundgroupfxIDswitch; // offset 0x1C, size 0x4
    unsigned int soundgrouphitIDswitch; // offset 0x20, size 0x4
    unsigned int rumbleIDhit; // offset 0x24, size 0x4
    unsigned int rumbleIDswitch; // offset 0x28, size 0x4
    unsigned int fx_flags; // offset 0x2C, size 0x4
    struct xDestructibleAssetAttachedAnimList * animlist; // offset 0x30, size 0x4
};
// total size: 0x40
struct xDestructibleAsset {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned int nstates; // offset 0x4, size 0x4
    unsigned int hit_points; // offset 0x8, size 0x4
    unsigned int hit_filter; // offset 0xC, size 0x4
    unsigned int hit_filter_excluded; // offset 0x10, size 0x4
    unsigned int healthPoints; // offset 0x14, size 0x4
    unsigned int expPoints; // offset 0x18, size 0x4
    float healthChance; // offset 0x1C, size 0x4
    float expChance; // offset 0x20, size 0x4
    unsigned int launch_flag; // offset 0x24, size 0x4
    unsigned int behaviour; // offset 0x28, size 0x4
    unsigned int flags; // offset 0x2C, size 0x4
    unsigned int soundgroupidleID; // offset 0x30, size 0x4
    float respawn; // offset 0x34, size 0x4
    unsigned char target_priority; // offset 0x38, size 0x1
    struct xDestructibleAssetState * states; // offset 0x3C, size 0x4
};
enum iSndGroupHandle {
};
// total size: 0x38
struct effectAsset : public xDynAsset {
    // Members
    float time; // offset 0x10, size 0x4
    float intensity; // offset 0x14, size 0x4
    unsigned int id; // offset 0x18, size 0x4
    unsigned char priority; // offset 0x1C, size 0x1
    unsigned char type; // offset 0x1D, size 0x1
    unsigned char rumbleInPause; // offset 0x1E, size 0x1
    unsigned char pad; // offset 0x1F, size 0x1
    float param1; // offset 0x20, size 0x4
    float param2; // offset 0x24, size 0x4
    float shakeMagnitude; // offset 0x28, size 0x4
    float shakeCycleMax; // offset 0x2C, size 0x4
    float shakeRotationalMagnitude; // offset 0x30, size 0x4
    unsigned char shakeY; // offset 0x34, size 0x1
};
// total size: 0x18
struct emitterBase : public xBase {
    // Members
    struct effectAsset * pEffectAsset; // offset 0x10, size 0x4
    void * __vptr$; // offset 0x14, size 0x4
};
// total size: 0x28
struct sphericalEmitterAsset : public xDynAsset {
    // Members
    unsigned int effectID; // offset 0x10, size 0x4
    float radius; // offset 0x14, size 0x4
    struct xVec3 position; // offset 0x18, size 0xC
    unsigned char onlyRumbleOnY; // offset 0x24, size 0x1
    unsigned char fallOff; // offset 0x25, size 0x1
    unsigned char onlyOnFloor; // offset 0x26, size 0x1
};
// total size: 0x20
struct sphericalEmitter : public emitterBase {
    // Members
    struct sphericalEmitterAsset * pAsset; // offset 0x18, size 0x4
    float radiusSqrd; // offset 0x1C, size 0x4
};
// total size: 0x8
struct zDestructibleStateAttachedAnimList {
    // Members
    unsigned int nanimations; // offset 0x0, size 0x4
    void * animData; // offset 0x4, size 0x4
};
// total size: 0x14
struct xPECircle {
    // Members
    float radius; // offset 0x0, size 0x4
    float deflection; // offset 0x4, size 0x4
    struct xVec3 dir; // offset 0x8, size 0xC
};
// total size: 0x4
struct xPESphere {
    // Members
    float radius; // offset 0x0, size 0x4
};
// total size: 0x8
struct xPERect {
    // Members
    float x_len; // offset 0x0, size 0x4
    float z_len; // offset 0x4, size 0x4
};
// total size: 0x1C
struct xPELine {
    // Members
    struct xVec3 pos1; // offset 0x0, size 0xC
    struct xVec3 pos2; // offset 0xC, size 0xC
    float radius; // offset 0x18, size 0x4
};
// total size: 0x4
struct xPEVolume {
    // Members
    unsigned int emit_volumeID; // offset 0x0, size 0x4
};
// total size: 0xC
struct xPEOffsetPoint {
    // Members
    struct xVec3 offset; // offset 0x0, size 0xC
};
// total size: 0xC
struct xPEVCyl {
    // Members
    float height; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
};
// total size: 0x18
struct xPEEntBone {
    // Members
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char type; // offset 0x1, size 0x1
    unsigned char bone; // offset 0x2, size 0x1
    unsigned char pad1; // offset 0x3, size 0x1
    struct xVec3 offset; // offset 0x4, size 0xC
    float radius; // offset 0x10, size 0x4
    float deflection; // offset 0x14, size 0x4
};
// total size: 0xC
struct xPEEntBound {
    // Members
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char type; // offset 0x1, size 0x1
    unsigned char pad1; // offset 0x2, size 0x1
    unsigned char pad2; // offset 0x3, size 0x1
    float expand; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
};
// total size: 0x54
struct xParEmitterAsset : public xBaseAsset {
    // Members
    unsigned char emit_flags; // offset 0x8, size 0x1
    unsigned char emit_type; // offset 0x9, size 0x1
    unsigned short pad; // offset 0xA, size 0x2
    unsigned int propID; // offset 0xC, size 0x4
    union { // inferred
        struct xPECircle e_circle; // offset 0x10, size 0x14
        struct xPESphere e_sphere; // offset 0x10, size 0x4
        struct xPERect e_rect; // offset 0x10, size 0x8
        struct xPELine e_line; // offset 0x10, size 0x1C
        struct xPEVolume e_volume; // offset 0x10, size 0x4
        struct xPEOffsetPoint e_offsetp; // offset 0x10, size 0xC
        struct xPEVCyl e_vcyl; // offset 0x10, size 0xC
        struct xPEEntBone e_entbone; // offset 0x10, size 0x18
        struct xPEEntBound e_entbound; // offset 0x10, size 0xC
    };
    unsigned int attachToID; // offset 0x2C, size 0x4
    struct xVec3 pos; // offset 0x30, size 0xC
    struct xVec3 vel; // offset 0x3C, size 0xC
    float vel_angle_variation; // offset 0x48, size 0x4
    unsigned int cull_mode; // offset 0x4C, size 0x4
    float cull_dist_sqr; // offset 0x50, size 0x4
};
// total size: 0x0
struct xParGroup {};
// total size: 0x14
struct xParInterp {
    // Members
    float val[2]; // offset 0x0, size 0x8
    unsigned int interp; // offset 0x8, size 0x4
    float freq; // offset 0xC, size 0x4
    float oofreq; // offset 0x10, size 0x4
};
// total size: 0x138
struct xParEmitterPropsAsset : public xBaseAsset {
    // Members
    unsigned int parSysID; // offset 0x8, size 0x4
    union { // inferred
        struct xParInterp rate; // offset 0xC, size 0x14
        struct xParInterp value[1]; // offset 0xC, size 0x14
    };
    struct xParInterp life; // offset 0x20, size 0x14
    struct xParInterp size_birth; // offset 0x34, size 0x14
    struct xParInterp size_death; // offset 0x48, size 0x14
    struct xParInterp color_birth[4]; // offset 0x5C, size 0x50
    struct xParInterp color_death[4]; // offset 0xAC, size 0x50
    struct xParInterp vel_scale; // offset 0xFC, size 0x14
    struct xParInterp vel_angle; // offset 0x110, size 0x14
    struct xVec3 vel; // offset 0x124, size 0xC
    unsigned int emit_limit; // offset 0x130, size 0x4
    float emit_limit_reset_time; // offset 0x134, size 0x4
};
// total size: 0x20
struct xModelTag {
    // Members
    struct xVec3 v; // offset 0x0, size 0xC
    unsigned int matidx; // offset 0xC, size 0x4
    float wt[4]; // offset 0x10, size 0x10
};
// total size: 0x0
struct xParSys {};
// total size: 0x94
struct xParEmitter : public xBase {
    // Members
    struct xParEmitterAsset * tasset; // offset 0x10, size 0x4
    struct xParGroup * group; // offset 0x14, size 0x4
    struct xParEmitterPropsAsset * prop; // offset 0x18, size 0x4
    unsigned int sortID; // offset 0x1C, size 0x4
    unsigned char rate_mode; // offset 0x20, size 0x1
    struct xVec3 last_emit_position; // offset 0x24, size 0xC
    struct xVec3 last_emit_velocity; // offset 0x30, size 0xC
    float rate; // offset 0x3C, size 0x4
    float rate_time; // offset 0x40, size 0x4
    float rate_fraction; // offset 0x44, size 0x4
    float rate_fraction_cull; // offset 0x48, size 0x4
    unsigned char emit_flags; // offset 0x4C, size 0x1
    unsigned char tweak_flags; // offset 0x4D, size 0x1
    unsigned char emit_pad[2]; // offset 0x4E, size 0x2
    unsigned char rot[3]; // offset 0x50, size 0x3
    struct xModelTag tag; // offset 0x54, size 0x20
    float oocull_distance_sqr; // offset 0x74, size 0x4
    float distance_to_cull_sqr; // offset 0x78, size 0x4
    void * attachTo; // offset 0x7C, size 0x4
    struct xParSys * parSys; // offset 0x80, size 0x4
    struct xBase * emit_volume; // offset 0x84, size 0x4
    struct xVec3 last_attach_loc; // offset 0x88, size 0xC
};
// total size: 0x94
struct zParEmitter : public xParEmitter {};
// total size: 0x10
struct zDestructibleStateFXParams {
    // Members
    float timer; // offset 0x0, size 0x4
    unsigned int flags; // offset 0x4, size 0x4
    struct zParEmitter * emitter; // offset 0x8, size 0x4
    unsigned int (* fn)(float); // offset 0xC, size 0x4
};
// total size: 0x8
struct zDestructibleStateFXList {
    // Members
    unsigned int nfx; // offset 0x0, size 0x4
    struct zDestructibleStateFXParams * fxParams; // offset 0x4, size 0x4
};
// total size: 0x44
struct zDestructibleState {
    // Members
    struct xModelInstance * model; // offset 0x0, size 0x4
    struct zShrapnelAsset * shrapnel; // offset 0x4, size 0x4
    struct zShrapnelAsset * shrapnelhit; // offset 0x8, size 0x4
    unsigned int percent; // offset 0xC, size 0x4
    enum iSndGroupHandle sg_handle_idle; // offset 0x10, size 0x4
    enum iSndGroupHandle sg_handle_hit; // offset 0x14, size 0x4
    enum iSndGroupHandle sg_handle_hit_switch; // offset 0x18, size 0x4
    enum xSndHandle sh_handle_idle; // offset 0x1C, size 0x4
    enum xSndHandle sh_handle_hit; // offset 0x20, size 0x4
    enum xSndHandle sh_handle_hit_switch; // offset 0x24, size 0x4
    unsigned int sg_fx_id; // offset 0x28, size 0x4
    unsigned int sg_fx_id_switch; // offset 0x2C, size 0x4
    struct sphericalEmitter * rumbleHit; // offset 0x30, size 0x4
    struct sphericalEmitter * rumbleSwitch; // offset 0x34, size 0x4
    struct zDestructibleStateAttachedAnimList * animList; // offset 0x38, size 0x4
    struct zDestructibleStateFXList fxList; // offset 0x3C, size 0x8
};
// total size: 0x7C
struct zDestructible {
    // Members
    struct xDestructibleAsset * asset; // offset 0x0, size 0x4
    unsigned int id; // offset 0x4, size 0x4
    unsigned int cur_hit_pts; // offset 0x8, size 0x4
    unsigned int curstateidx; // offset 0xC, size 0x4
    unsigned int nstates; // offset 0x10, size 0x4
    unsigned int hit_pts; // offset 0x14, size 0x4
    unsigned int hit_filter; // offset 0x18, size 0x4
    unsigned int hit_filter_excluded; // offset 0x1C, size 0x4
    unsigned int healthPoints; // offset 0x20, size 0x4
    unsigned int expPoints; // offset 0x24, size 0x4
    float healthChance; // offset 0x28, size 0x4
    float expChance; // offset 0x2C, size 0x4
    unsigned int launch_flag; // offset 0x30, size 0x4
    unsigned int behaviour; // offset 0x34, size 0x4
    unsigned int base_modelID; // offset 0x38, size 0x4
    enum iSndGroupHandle sg_handle_idle; // offset 0x3C, size 0x4
    enum xSndHandle sh_handle_idle; // offset 0x40, size 0x4
    struct xModelInstance * base_model; // offset 0x44, size 0x4
    struct xModelInstance * base_collision; // offset 0x48, size 0x4
    struct zDestructibleState * dstates; // offset 0x4C, size 0x4
    float hit_to_destroy_timer; // offset 0x50, size 0x4
    float timer; // offset 0x54, size 0x4
    float respawn_time; // offset 0x58, size 0x4
    void (* destroy_notify)(struct zDestructible *, void *); // offset 0x5C, size 0x4
    void * notify_context; // offset 0x60, size 0x4
    struct xEnt * root_ent; // offset 0x64, size 0x4
    unsigned int flags; // offset 0x68, size 0x4
    int owner; // offset 0x6C, size 0x4
    unsigned char has_animation; // offset 0x70, size 0x1
    unsigned char active; // offset 0x71, size 0x1
    struct xModelInstance * * baseChildrenList; // offset 0x74, size 0x4
    int baseChildrenCount; // offset 0x78, size 0x4
};
// total size: 0x10
struct xEntOpacity {
    // Members
    float startAlpha; // offset 0x0, size 0x4
    float endAlpha; // offset 0x4, size 0x4
    float deltaOpacity; // offset 0x8, size 0x4
    unsigned int oldPipeFlags; // offset 0xC, size 0x4
};
// total size: 0x108
struct zEntSimpleObj : public zEnt, public zEntAnimData {
    // Members
    struct xSimpleObjAsset * sasset; // offset 0xE8, size 0x4
    unsigned int sflags; // offset 0xEC, size 0x4
    struct zDestructible * destructible; // offset 0xF0, size 0x4
    struct zSimpleMgr * smgr; // offset 0xF4, size 0x4
    struct xEntOpacity opacity; // offset 0xF8, size 0x10
};
// total size: 0x3C
struct zSimpleMgr {
    // Members
    struct xSphere worldBound; // offset 0x0, size 0x10
    float noRenderDist; // offset 0x10, size 0x4
    float lodDist0; // offset 0x14, size 0x4
    float fadeDist; // offset 0x18, size 0x4
    unsigned int flags; // offset 0x1C, size 0x4
    struct xModelBucket * * lodBucket[2]; // offset 0x20, size 0x8
    struct RpAtomic * lodAtomic[2]; // offset 0x28, size 0x8
    struct RwMatrixTag * mat; // offset 0x30, size 0x4
    struct xModelInstance * model; // offset 0x34, size 0x4
    struct zEntSimpleObj * ent; // offset 0x38, size 0x4
};
// total size: 0xC
struct zEntAnimData {
    // Members
    union { // inferred
        struct { // inferred
            struct zReactiveAnimationData * reactiveAnimationData; // offset 0x0, size 0x4
            struct zReactiveGenre * reactGenre; // offset 0x4, size 0x4
            struct zSimpleMgr * smgrExtra; // offset 0x8, size 0x4
        };
        struct { // inferred
            void * anim; // offset 0x0, size 0x4
            float animTime; // offset 0x4, size 0x4
        };
    };
};
// total size: 0x4
struct xPlatformERData {
    // Members
    int nodata; // offset 0x0, size 0x4
};
// total size: 0x4
struct xPlatformOrbitData {
    // Members
    int nodata; // offset 0x0, size 0x4
};
// total size: 0x4
struct xPlatformSplineData {
    // Members
    int nodata; // offset 0x0, size 0x4
};
// total size: 0x4
struct xPlatformMPData {
    // Members
    int nodata; // offset 0x0, size 0x4
};
// total size: 0x4
struct xPlatformMechData {
    // Members
    int nodata; // offset 0x0, size 0x4
};
// total size: 0x4
struct xPlatformPenData {
    // Members
    int nodata; // offset 0x0, size 0x4
};
// total size: 0x4
struct xPlatformConvBeltData {
    // Members
    float speed; // offset 0x0, size 0x4
};
// total size: 0x8
struct xPlatformFallingData {
    // Members
    float speed; // offset 0x0, size 0x4
    unsigned int bustModelID; // offset 0x4, size 0x4
};
// total size: 0x10
struct xPlatformFRData {
    // Members
    float fspeed; // offset 0x0, size 0x4
    float rspeed; // offset 0x4, size 0x4
    float ret_delay; // offset 0x8, size 0x4
    float post_ret_delay; // offset 0xC, size 0x4
};
// total size: 0x10
struct xPlatformBreakawayData {
    // Members
    float warningTime; // offset 0x0, size 0x4
    float collapseIdleTime; // offset 0x4, size 0x4
    unsigned int breakflags; // offset 0x8, size 0x4
    float collisionOffTime; // offset 0xC, size 0x4
};
// total size: 0x2C
struct xPlatformSpringboardData {
    // Members
    float jmph[3]; // offset 0x0, size 0xC
    float jmpbounce; // offset 0xC, size 0x4
    unsigned int animID[3]; // offset 0x10, size 0xC
    struct xVec3 jmpdir; // offset 0x1C, size 0xC
    unsigned int springflags; // offset 0x28, size 0x4
};
// total size: 0x14
struct xPlatformTeeterData {
    // Members
    float itilt; // offset 0x0, size 0x4
    float maxtilt; // offset 0x4, size 0x4
    float invmass; // offset 0x8, size 0x4
    unsigned int soundGroupCreak; // offset 0xC, size 0x4
    unsigned int soundGroupEnd; // offset 0x10, size 0x4
};
// total size: 0x38
struct xPlatformPaddleData {
    // Members
    int startOrient; // offset 0x0, size 0x4
    int countOrient; // offset 0x4, size 0x4
    float orientLoop; // offset 0x8, size 0x4
    float orient[6]; // offset 0xC, size 0x18
    unsigned int paddleFlags; // offset 0x24, size 0x4
    float rotateSpeed; // offset 0x28, size 0x4
    float accelTime; // offset 0x2C, size 0x4
    float decelTime; // offset 0x30, size 0x4
    float hubRadius; // offset 0x34, size 0x4
};
// total size: 0x4
struct xPlatformFMData {
    // Members
    int nothingyet; // offset 0x0, size 0x4
};
// total size: 0x3C
struct xPlatformAsset {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char pad; // offset 0x1, size 0x1
    unsigned short flags; // offset 0x2, size 0x2
    union { // inferred
        struct xPlatformERData er; // offset 0x4, size 0x4
        struct xPlatformOrbitData orb; // offset 0x4, size 0x4
        struct xPlatformSplineData spl; // offset 0x4, size 0x4
        struct xPlatformMPData mp; // offset 0x4, size 0x4
        struct xPlatformMechData mech; // offset 0x4, size 0x4
        struct xPlatformPenData pen; // offset 0x4, size 0x4
        struct xPlatformConvBeltData cb; // offset 0x4, size 0x4
        struct xPlatformFallingData fall; // offset 0x4, size 0x8
        struct xPlatformFRData fr; // offset 0x4, size 0x10
        struct xPlatformBreakawayData ba; // offset 0x4, size 0x10
        struct xPlatformSpringboardData sb; // offset 0x4, size 0x2C
        struct xPlatformTeeterData teet; // offset 0x4, size 0x14
        struct xPlatformPaddleData paddle; // offset 0x4, size 0x38
        struct xPlatformFMData fm; // offset 0x4, size 0x4
    };
};
// total size: 0x28
struct xEntMotionERData {
    // Members
    struct xVec3 ret_pos; // offset 0x0, size 0xC
    struct xVec3 ext_dpos; // offset 0xC, size 0xC
    float ext_tm; // offset 0x18, size 0x4
    float ext_wait_tm; // offset 0x1C, size 0x4
    float ret_tm; // offset 0x20, size 0x4
    float ret_wait_tm; // offset 0x24, size 0x4
};
// total size: 0x18
struct xEntMotionOrbitData {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float w; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
    float period; // offset 0x14, size 0x4
};
// total size: 0xC
struct xEntMotionSplineData {
    // Members
    unsigned int spline_id; // offset 0x0, size 0x4
    float speed; // offset 0x4, size 0x4
    float lean_modifier; // offset 0x8, size 0x4
};
// total size: 0xC
struct xEntMotionMPData {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int mp_id; // offset 0x4, size 0x4
    float speed; // offset 0x8, size 0x4
};
// total size: 0x38
struct xEntMotionMechData {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char flags; // offset 0x1, size 0x1
    unsigned char sld_axis; // offset 0x2, size 0x1
    unsigned char rot_axis; // offset 0x3, size 0x1
    unsigned char scale_axis; // offset 0x4, size 0x1
    float sld_dist; // offset 0x8, size 0x4
    float sld_tm; // offset 0xC, size 0x4
    float sld_acc_tm; // offset 0x10, size 0x4
    float sld_dec_tm; // offset 0x14, size 0x4
    float rot_dist; // offset 0x18, size 0x4
    float rot_tm; // offset 0x1C, size 0x4
    float rot_acc_tm; // offset 0x20, size 0x4
    float rot_dec_tm; // offset 0x24, size 0x4
    float ret_delay; // offset 0x28, size 0x4
    float post_ret_delay; // offset 0x2C, size 0x4
    float scale_amount; // offset 0x30, size 0x4
    float scale_duration; // offset 0x34, size 0x4
};
// total size: 0x14
struct xEntMotionPenData {
    // Members
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char plane; // offset 0x1, size 0x1
    unsigned char pad[2]; // offset 0x2, size 0x2
    float len; // offset 0x4, size 0x4
    float range; // offset 0x8, size 0x4
    float period; // offset 0xC, size 0x4
    float phase; // offset 0x10, size 0x4
};
// total size: 0x3C
struct xEntMotionAsset {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char use_banking; // offset 0x1, size 0x1
    unsigned short ent_motion_flags; // offset 0x2, size 0x2
    union { // inferred
        struct xEntMotionERData er; // offset 0x4, size 0x28
        struct xEntMotionOrbitData orb; // offset 0x4, size 0x18
        struct xEntMotionSplineData spl; // offset 0x4, size 0xC
        struct xEntMotionMPData mp; // offset 0x4, size 0xC
        struct xEntMotionMechData mech; // offset 0x4, size 0x38
        struct xEntMotionPenData pen; // offset 0x4, size 0x14
    };
};
// total size: 0x44
struct xEntERData {
    // Members
    struct xVec3 a; // offset 0x0, size 0xC
    struct xVec3 b; // offset 0xC, size 0xC
    struct xVec3 dir; // offset 0x18, size 0xC
    float et; // offset 0x24, size 0x4
    float wet; // offset 0x28, size 0x4
    float rt; // offset 0x2C, size 0x4
    float wrt; // offset 0x30, size 0x4
    float p; // offset 0x34, size 0x4
    float brt; // offset 0x38, size 0x4
    float ert; // offset 0x3C, size 0x4
    int state; // offset 0x40, size 0x4
};
// total size: 0x28
struct xEntOrbitData {
    // Members
    struct xVec3 orig; // offset 0x0, size 0xC
    struct xVec3 c; // offset 0xC, size 0xC
    float a; // offset 0x18, size 0x4
    float b; // offset 0x1C, size 0x4
    float p; // offset 0x20, size 0x4
    float w; // offset 0x24, size 0x4
};
// total size: 0xC
struct xEntSpeedData {
    // Members
    float speed; // offset 0x0, size 0x4
    float acceleration; // offset 0x4, size 0x4
    float dest_speed; // offset 0x8, size 0x4
};
// total size: 0x0
class xNurbs {};
// total size: 0x30
struct xEntSplineData {
    // Members
    struct xEntSpeedData speed_data; // offset 0x0, size 0xC
    class xNurbs * spline; // offset 0xC, size 0x4
    float u; // offset 0x10, size 0x4
    unsigned char arrived; // offset 0x14, size 0x1
    float position_blend_v; // offset 0x18, size 0x4
    float orient_blend_v; // offset 0x1C, size 0x4
    struct xQuat current_orient; // offset 0x20, size 0x10
};
// total size: 0x0
struct xMovePoint {};
// total size: 0x0
struct xSpline3 {};
// total size: 0x44
struct xEntMPData {
    // Members
    struct xEntSpeedData speed_data; // offset 0x0, size 0xC
    float curdist; // offset 0xC, size 0x4
    struct xMovePoint * dest; // offset 0x10, size 0x4
    struct xMovePoint * src; // offset 0x14, size 0x4
    struct xSpline3 * spl; // offset 0x18, size 0x4
    float dist; // offset 0x1C, size 0x4
    unsigned int padalign; // offset 0x20, size 0x4
    struct xQuat aquat; // offset 0x24, size 0x10
    struct xQuat bquat; // offset 0x34, size 0x10
};
// total size: 0xD0
struct xEntMechData {
    // Members
    struct xBound original_bound; // offset 0x0, size 0x4C
    struct xVec3 original_position; // offset 0x4C, size 0xC
    struct xVec3 destination_position; // offset 0x58, size 0xC
    struct xVec3 direction; // offset 0x64, size 0xC
    float original_rotation; // offset 0x70, size 0x4
    float destination_rotation; // offset 0x74, size 0x4
    float sliding_speed; // offset 0x78, size 0x4
    float rotation_speed; // offset 0x7C, size 0x4
    int state; // offset 0x80, size 0x4
    float sliding_forth_decel_time; // offset 0x84, size 0x4
    float rotation_forth_decel_time; // offset 0x88, size 0x4
    float sliding_back_decel_time; // offset 0x8C, size 0x4
    float rotating_back_decel_time; // offset 0x90, size 0x4
    float scale_speed; // offset 0x94, size 0x4
    float current_scale; // offset 0x98, size 0x4
    float * entity_rotation_angle; // offset 0x9C, size 0x4
    struct xMat3x3 delta_rotation; // offset 0xA0, size 0x30
};
// total size: 0x50
struct xEntPenData {
    // Members
    struct xVec3 top; // offset 0x0, size 0xC
    float w; // offset 0xC, size 0x4
    struct xMat4x3 omat; // offset 0x10, size 0x40
};
// total size: 0x100
struct xEntMotion {
    // Members
    struct xEntMotionAsset * asset; // offset 0x0, size 0x4
    unsigned char type; // offset 0x4, size 0x1
    unsigned char pad; // offset 0x5, size 0x1
    unsigned short ent_motion_flags; // offset 0x6, size 0x2
    float t; // offset 0x8, size 0x4
    float tmr; // offset 0xC, size 0x4
    float d; // offset 0x10, size 0x4
    union { // inferred
        struct xEntERData er; // offset 0x20, size 0x44
        struct xEntOrbitData orb; // offset 0x20, size 0x28
        struct xEntSplineData spl; // offset 0x20, size 0x30
        struct xEntMPData mp; // offset 0x20, size 0x44
        struct xEntMechData mech; // offset 0x20, size 0xD0
        struct xEntPenData pen; // offset 0x20, size 0x50
    };
    struct xEnt * owner; // offset 0xF0, size 0x4
    struct xEnt * target; // offset 0xF4, size 0x4
};
// total size: 0x200
struct zPlatFMRunTime {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    float tmrs[17]; // offset 0x4, size 0x44
    float ttms[17]; // offset 0x48, size 0x44
    float atms[17]; // offset 0x8C, size 0x44
    float dtms[17]; // offset 0xD0, size 0x44
    float vms[17]; // offset 0x114, size 0x44
    float dss[17]; // offset 0x158, size 0x44
    float total_change[17]; // offset 0x19C, size 0x44
    struct xQuat startQuat; // offset 0x1E0, size 0x10
    struct xQuat destQuat; // offset 0x1F0, size 0x10
};
// total size: 0x310
struct zPlatform : public zEnt, public zEntAnimData {
    // Members
    struct xPlatformAsset * plat_asset; // offset 0xE8, size 0x4
    struct xEntMotion motion; // offset 0xF0, size 0x100
    unsigned short state; // offset 0x1F0, size 0x2
    unsigned short plat_flags; // offset 0x1F2, size 0x2
    float tmr; // offset 0x1F4, size 0x4
    int ctr; // offset 0x1F8, size 0x4
    struct xMovePoint * src; // offset 0x1FC, size 0x4
    struct xModelInstance * am; // offset 0x200, size 0x4
    struct xModelInstance * bm; // offset 0x204, size 0x4
    int moving; // offset 0x208, size 0x4
    struct xEntDrive drv; // offset 0x210, size 0xC0
    struct zPlatFMRunTime * fmrt; // offset 0x2D0, size 0x4
    struct zDestructible * destructible; // offset 0x2D4, size 0x4
    float elapsedTime; // offset 0x2D8, size 0x4
    struct xEntOpacity opacity; // offset 0x2DC, size 0x10
    enum iSndGroupHandle soundGroupTeeterCreak; // offset 0x2EC, size 0x4
    enum iSndGroupHandle soundGroupTeeterEnd; // offset 0x2F0, size 0x4
    enum xSndHandle soundTeeterCreak; // offset 0x2F4, size 0x4
    enum xSndHandle soundTeeterEnd; // offset 0x2F8, size 0x4
    enum xSndHandle sndID; // offset 0x2FC, size 0x4
    unsigned char hasStoppedRotating; // offset 0x300, size 0x1
    unsigned char hasReachedEnd; // offset 0x301, size 0x1
};
// Range: 0x8004ACBC -> 0x8004AF6C
void update_conveyed_decal(struct decal_instance * decal /* r31 */, float dt /* r1+0x8 */) {
    // Local variables
    struct zPlatform * driver_plat; // r28
    float platSpeed; // f31
    float timeRemaining; // f30
    struct xBound * bound; // r30
    struct xSphere * sphere; // r29
    struct xVec3 pos; // r1+0xC
    float x; // f29

    // References
    // -> static float conv_fade_time;
    // -> static char __FUNCTION__[22];
}

static char __FUNCTION__[7]; // size: 0x7, address: 0x80D5F0A0
// Range: 0x8004AF6C -> 0x8004B128
void update(float dt /* f31 */) {
    // Local variables
    float dt_mult; // f30
    struct decal_instance * decal; // r31
    struct decal_instance * end_decal; // r30

    // References
    // -> static char __FUNCTION__[7];
    // -> static struct immediate_mode_data * immediate_free;
    // -> static int decals_used;
    // -> static struct decal_instance * decals;
}

// Range: 0x8004B128 -> 0x8004B180
static unsigned char is_conveyor_belt(struct xEnt * ent /* r3 */) {}

// Range: 0x8004B180 -> 0x8004B3CC
void render_all() {
    // Local variables
    int i; // r28
    struct decal_instance * decal; // r31
    struct decal_instance * * it; // r30
    struct decal_instance * * const end; // r25
    unsigned int blend_mode; // r27
    struct RwTexture * texture; // r26
    const struct xMat4x3 * driver; // r24
    const struct decal_instance * prev_rendered; // r29
    struct RwRaster * raster; // r23

    // References
    // -> static int decals_used;
    // -> static struct decal_instance * * render_list;
    // -> static struct decal_instance * decals;
    // -> static unsigned char decals_sorted;
}

// total size: 0x38
struct xGrid {
    // Members
    unsigned char ingrid_id; // offset 0x0, size 0x1
    unsigned char pad[3]; // offset 0x1, size 0x3
    unsigned short nx; // offset 0x4, size 0x2
    unsigned short nz; // offset 0x6, size 0x2
    float minx; // offset 0x8, size 0x4
    float minz; // offset 0xC, size 0x4
    float maxx; // offset 0x10, size 0x4
    float maxz; // offset 0x14, size 0x4
    float csizex; // offset 0x18, size 0x4
    float csizez; // offset 0x1C, size 0x4
    float inv_csizex; // offset 0x20, size 0x4
    float inv_csizez; // offset 0x24, size 0x4
    float maxr; // offset 0x28, size 0x4
    struct xGridBound * * cells; // offset 0x2C, size 0x4
    struct xGridBound * other; // offset 0x30, size 0x4
    int iter_active; // offset 0x34, size 0x4
};
struct xGrid colls_grid; // size: 0x38, address: 0x80CF4940
struct xGrid colls_oso_grid; // size: 0x38, address: 0x80CF4978
struct xGrid npcs_grid; // size: 0x38, address: 0x80CF49B0
// total size: 0x18
struct xBox {
    // Members
    struct xVec3 upper; // offset 0x0, size 0xC
    struct xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0x10
struct xSphere {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// total size: 0x18
struct cb_decal_hits_ent {
    // Functions
    static cb_decal_hits_ent(const struct xBox & box, const struct xMat4x3 & mat, const struct xSphere & o, const struct emit_context & ec, int check, unsigned char skip_destructible);

    static unsigned char operator()(struct xEnt & ent);

    // Members
    const struct xBox & box; // offset 0x0, size 0x4
    const struct xMat4x3 & mat; // offset 0x4, size 0x4
    const struct xSphere & o; // offset 0x8, size 0x4
    const struct emit_context & ec; // offset 0xC, size 0x4
    int check; // offset 0x10, size 0x4
    unsigned char skip_destructible; // offset 0x14, size 0x1
};
// total size: 0x20
struct xQCData {
    // Members
    signed char xmin; // offset 0x0, size 0x1
    signed char ymin; // offset 0x1, size 0x1
    signed char zmin; // offset 0x2, size 0x1
    signed char zmin_dup; // offset 0x3, size 0x1
    signed char xmax; // offset 0x4, size 0x1
    signed char ymax; // offset 0x5, size 0x1
    signed char zmax; // offset 0x6, size 0x1
    signed char zmax_dup; // offset 0x7, size 0x1
    struct xVec3 min; // offset 0x8, size 0xC
    struct xVec3 max; // offset 0x14, size 0xC
};
// total size: 0x24
struct xBBox {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    struct xBox box; // offset 0xC, size 0x18
};
// total size: 0x14
struct xCylinder {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
// total size: 0x4C
struct xBound {
    // Members
    struct xQCData qcd; // offset 0x0, size 0x20
    unsigned char type; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    union { // inferred
        struct xSphere sph; // offset 0x24, size 0x10
        struct xBBox box; // offset 0x24, size 0x24
        struct xCylinder cyl; // offset 0x24, size 0x14
    };
    struct xMat4x3 * mat; // offset 0x48, size 0x4
};
// Range: 0x8004B3CC -> 0x8004B610
void emit(const struct emit_context & ec /* r31 */, const struct xMat4x3 & mat /* r29 */, int check_flags /* r28 */) {
    // Local variables
    struct xBox box; // r1+0x30
    float rx; // f31
    float ry; // f30
    int i; // r30
    struct xSphere o; // r1+0x8
    struct cb_decal_hits_ent cb; // r1+0x18
    struct xBound bound; // r1+0x48

    // References
    // -> struct xGrid npcs_grid;
    // -> struct xGrid colls_oso_grid;
    // -> struct xGrid colls_grid;
    // -> struct xGlobals * xglobals;
    // -> static unsigned char render_volume;
}

// total size: 0x3C
struct xQCControl {
    // Members
    float world_xmin; // offset 0x0, size 0x4
    float world_ymin; // offset 0x4, size 0x4
    float world_zmin; // offset 0x8, size 0x4
    float world_xmax; // offset 0xC, size 0x4
    float world_ymax; // offset 0x10, size 0x4
    float world_zmax; // offset 0x14, size 0x4
    float world_xsz; // offset 0x18, size 0x4
    float world_ysz; // offset 0x1C, size 0x4
    float world_zsz; // offset 0x20, size 0x4
    float scale_x; // offset 0x24, size 0x4
    float scale_y; // offset 0x28, size 0x4
    float scale_z; // offset 0x2C, size 0x4
    float center_x; // offset 0x30, size 0x4
    float center_y; // offset 0x34, size 0x4
    float center_z; // offset 0x38, size 0x4
};
// Range: 0x8004B610 -> 0x8004B62C
// this: r3
static cb_decal_hits_ent::cb_decal_hits_ent(const struct xBox & box /* r4 */, const struct xMat4x3 & mat /* r5 */, const struct xSphere & o /* r6 */, const struct emit_context & ec /* r7 */, int check /* r8 */, unsigned char skip_destructible /* r9 */) {}

// total size: 0xDC
struct zEnt : public xEnt {
    // Members
    struct xAnimTable * atbl; // offset 0xD8, size 0x4
};
// total size: 0x0
struct SphereCollisionResults {};
// total size: 0xC
class zPlayerAction {
    // Members
protected:
    class zPlayerActionManager * manager; // offset 0x0, size 0x4
    struct zPlayer * player; // offset 0x4, size 0x4
public:
    void * __vptr$; // offset 0x8, size 0x4
};
// total size: 0xC
class zPlayerActionManager {
    // Members
protected:
    class zPlayerAction * * actionList; // offset 0x0, size 0x4
    class zPlayerAction * currentAction; // offset 0x4, size 0x4
    unsigned int listSize; // offset 0x8, size 0x4
};
// total size: 0x24
struct PlayerStats {
    // Members
    int enemiesDefeated; // offset 0x0, size 0x4
    int meleeDamage; // offset 0x4, size 0x4
    int airMeleeDamage; // offset 0x8, size 0x4
    int rangeDamage; // offset 0xC, size 0x4
    int dodgeDamage; // offset 0x10, size 0x4
    int finishingMoves; // offset 0x14, size 0x4
    int damageTaken; // offset 0x18, size 0x4
    int biggestCombo; // offset 0x1C, size 0x4
    int timesDefeated; // offset 0x20, size 0x4
};
enum eBrainType {
    eBrainType_Unknown = 0,
    eBrainType_NPC_Thief = 1,
    eBrainType_NPC_Chef = 2,
    eBrainType_NPC_Alarmer = 3,
    eBrainType_NPC_Waiter = 4,
    eBrainType_CMG_StirringPlayer = 5,
    eBrainType_CMG_StirringRemy = 6,
    eBrainType_CMG_LeftArm = 7,
    eBrainType_CMG_RightArm = 8,
    eBrainType_CMG_PourNSwirl = 9,
    eBrainType_NPC_SpringBoard = 10,
    eBrainType_NPC_ContextSensitive = 11,
    eBrainType_NPC_AnimViewer = 12,
    eBrainType_NPC_SwarmOwl = 13,
    eBrainType_NPC_Simpleton = 14,
    eBrainType_Player_Remy = 15,
    eBrainType_Player_HumanVehicle = 16,
    eBrainType_Player_Ratball = 17,
    eBrainType_Player_MG1 = 18,
    eBrainType_Player_MG2_RatOnball = 19,
    eBrainType_Player_MG3_Pufferoids = 20,
    eBrainType_Player_MG4_GrapeStomper = 21,
    eBrainType_Player_MG5_CongaLine = 22,
    eBrainType_Player_MG6_AvoidTheStuff = 23,
};
// total size: 0x24
struct config_data {
    // Members
    int flags; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float color_red; // offset 0x8, size 0x4
    float color_green; // offset 0xC, size 0x4
    float color_blue; // offset 0x10, size 0x4
    float color_alpha; // offset 0x14, size 0x4
    float card_dist; // offset 0x18, size 0x4
    float zbias; // offset 0x1C, size 0x4
    int max_card_renders; // offset 0x20, size 0x4
};
// total size: 0x0
struct activity_data {};
// total size: 0x10
struct xFRect {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
// total size: 0x4
class xModelBlur {
    // Static members
    static int activities_used; // size: 0x4
    static struct activity_data * activities[6]; // size: 0x18
    static struct activity_data * activity_buffer; // size: 0x4

    // Members
    struct activity_data * activity; // offset 0x0, size 0x4
};
// total size: 0x28
struct mblur_data {
    // Members
    struct config_data cfg; // offset 0x0, size 0x24
    class xModelBlur blur; // offset 0x24, size 0x4
};
// total size: 0x8
class zPadAnalogControl {
    // Static members
    static int ANALOG_MAX; // size: 0x4
    static int ANALOG_MIN; // size: 0x4

    // Members
    class zPad * owner; // offset 0x0, size 0x4
    int analogIndex; // offset 0x4, size 0x4
};
// total size: 0x2
struct _tagPadAnalog {
    // Members
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_Enabled = 1,
    ePad_Total = 2,
};
// total size: 0x4
struct _tagiPad {
    // Members
    int port; // offset 0x0, size 0x4
};
// total size: 0x138
struct _tagxPad {
    // Members
    unsigned char value[22]; // offset 0x0, size 0x16
    unsigned char last_value[22]; // offset 0x16, size 0x16
    unsigned int on; // offset 0x2C, size 0x4
    unsigned int pressed; // offset 0x30, size 0x4
    unsigned int released; // offset 0x34, size 0x4
    struct _tagPadAnalog analog1; // offset 0x38, size 0x2
    struct _tagPadAnalog analog2; // offset 0x3A, size 0x2
    enum _tagPadState state; // offset 0x3C, size 0x4
    unsigned int flags; // offset 0x40, size 0x4
    signed short port; // offset 0x44, size 0x2
    signed short slot; // offset 0x46, size 0x2
    struct _tagiPad context; // offset 0x48, size 0x4
    float al2d_timer; // offset 0x4C, size 0x4
    float ar2d_timer; // offset 0x50, size 0x4
    float d_timer; // offset 0x54, size 0x4
    float up_tmr[22]; // offset 0x58, size 0x58
    float down_tmr[22]; // offset 0xB0, size 0x58
    struct analog_data analog[2]; // offset 0x108, size 0x30
};
// total size: 0x24
class zPad {
    // Static members
    static int MAX_PADS; // size: 0x4
    static int MAX_PORTS; // size: 0x4

    // Members
    unsigned char used; // offset 0x0, size 0x1
    unsigned char enable; // offset 0x1, size 0x1
    unsigned char triggered; // offset 0x2, size 0x1
    unsigned int key1; // offset 0x4, size 0x4
    unsigned int key2; // offset 0x8, size 0x4
    unsigned int key3; // offset 0xC, size 0x4
    int padPort; // offset 0x10, size 0x4
    class zPadAnalogControl analog1; // offset 0x14, size 0x8
    class zPadAnalogControl analog2; // offset 0x1C, size 0x8
};
// total size: 0x10
struct zPlayerCheckPoint {
    // Members
    struct xVec3 position; // offset 0x0, size 0xC
    float rotation; // offset 0xC, size 0x4
};
// total size: 0x8
struct AnalogStick {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x4
struct Buttons {
    // Members
    unsigned char jump; // offset 0x0, size 0x1
    unsigned char actionMove; // offset 0x1, size 0x1
    unsigned char contextMove; // offset 0x2, size 0x1
    unsigned char otherMove; // offset 0x3, size 0x1
};
// total size: 0x24
class zPlayerInput {
    // Members
public:
    struct AnalogStick stick1; // offset 0x0, size 0x8
    struct AnalogStick stick2; // offset 0x8, size 0x8
    struct Buttons on; // offset 0x10, size 0x4
    struct Buttons pressed; // offset 0x14, size 0x4
    struct Buttons released; // offset 0x18, size 0x4
private:
    class zPad * mPad; // offset 0x1C, size 0x4
    float mActionTimer; // offset 0x20, size 0x4
};
// total size: 0x0
struct zSlideCam {};
// total size: 0x0
class zNPCCommon {};
// total size: 0x208
struct zNPCAttackerData {
    // Members
    class zNPCCommon * npcAttacker[128]; // offset 0x0, size 0x200
    int npcAttackerTotal; // offset 0x200, size 0x4
    int npcAttackerTotalLastFrame; // offset 0x204, size 0x4
};
// total size: 0x60
struct triData : public tri_data {
    // Members
    struct xVec3 loc; // offset 0xC, size 0xC
    float yaw; // offset 0x18, size 0x4
    const struct xCollis * coll; // offset 0x1C, size 0x4
    struct xMat4x3 trioldmat; // offset 0x20, size 0x40
};
// total size: 0xC0
struct xEntDrive {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    float outroTime; // offset 0x4, size 0x4
    float outroTimer; // offset 0x8, size 0x4
    float influenceOfOldDriver; // offset 0xC, size 0x4
    float introTime; // offset 0x10, size 0x4
    float introTimer; // offset 0x14, size 0x4
    float influenceOfDriver; // offset 0x18, size 0x4
    struct xEnt * oldDriver; // offset 0x1C, size 0x4
    struct xEnt * driver; // offset 0x20, size 0x4
    struct xEnt * driven; // offset 0x24, size 0x4
    struct xVec3 drivenPosInOldDriver; // offset 0x28, size 0xC
    struct xVec3 drivenPosInDriver; // offset 0x34, size 0xC
    struct xVec3 lastDrivenPos; // offset 0x40, size 0xC
    float yawInDriver; // offset 0x4C, size 0x4
    struct xVec3 dLoc; // offset 0x50, size 0xC
    struct triData tri; // offset 0x60, size 0x60
};
// total size: 0x0
struct xModelAssetParam {};
// total size: 0x890
struct /* @class$2256xDecal_cpp */ {
    // Static members
    static int POS_COUNT_MAX; // size: 0x4

    // Members
    unsigned char debugging; // offset 0x0, size 0x1
    struct xVec3 positions[180]; // offset 0x4, size 0x870
    struct xVec3 startPos; // offset 0x874, size 0xC
    struct xVec3 endPos; // offset 0x880, size 0xC
    int posCount; // offset 0x88C, size 0x4
};
enum ReticleOrder {
    ROR_First = 0,
    ROR_Last = 1,
    ROR_None = 2,
};
enum zControlOwner {
    CONTROL_OWNER_GLOBAL = 1,
    CONTROL_OWNER_EVENT = 2,
    CONTROL_OWNER_OOB = 4,
    CONTROL_OWNER_INTERACTION = 8,
    CONTROL_OWNER_TALK_BOX = 16,
    CONTROL_OWNER_BLAST_DOORS = 32,
    CONTROL_OWNER_FLY_CAM = 512,
    CONTROL_OWNER_TURRET = 2048,
    CONTROL_OWNER_REWARDANIM = 4096,
};
enum ezNPCAttackerType {
    ezNPCAT_Melee = 0,
    ezNPCAT_Range = 1,
    ezNPCAT_All = 2,
    ezNPCAT_Total = 3,
};
// total size: 0x0
struct xSweptSphere {};
enum zHitSource {
    zHS_EVENT = 0,
    zHS_GENERAL = 1,
    zHS_EXPLOSION = 2,
    zHS_MELEE_HIGH = 3,
    zHS_MELEE_MID = 4,
    zHS_MELEE_LOW = 5,
    zHS_MELEE_BACK = 6,
    zHS_MELEE_DIZZY = 7,
    zHS_MELEE_MRI = 8,
    zHS_MELEE_FRO = 9,
    zHS_MELEE_NPC = 10,
    zHS_THROW = 11,
    zHS_PROJECTILE = 12,
    zHS_NUKE_MRI = 13,
    zHS_NUKE_FRO = 14,
    zHS_INCREDISLAM_LEVEL1 = 15,
    zHS_INCREDISLAM_LEVEL2 = 16,
    zHS_INCREDISLAM_LEVEL3 = 17,
    zHS_ICE_GLIDE_LEVEL1 = 18,
    zHS_ICE_GLIDE_LEVEL2 = 19,
    zHS_ICE_GLIDE_LEVEL3 = 20,
    zHS_DODGE_ROLL_LEVEL1 = 21,
    zHS_DODGE_ROLL_LEVEL2 = 22,
    zHS_DODGE_ROLL_LEVEL3 = 23,
    zHS_GOO = 24,
    zHS_FIRE = 25,
    zHS_LASERBEAM = 26,
    zHS_LEDGE_UP = 27,
    zHS_MELEE_UP = 28,
    zHS_LASER = 29,
    zHS_ENERGY = 30,
    zHS_SURFACE = 31,
    zHS_WATER = 32,
    zHS_DEATHPLANE = 33,
    zHS_KNOCKBACK = 34,
    zHS_INFINITE_FALL = 35,
    zHS_INCREDISLAM_FALL_LEVEL1 = 36,
    zHS_INCREDISLAM_FALL_LEVEL2 = 37,
    zHS_INCREDISLAM_FALL_LEVEL3 = 38,
    zHS_PUNCH_MRI_1_LEVEL1 = 39,
    zHS_PUNCH_MRI_1_LEVEL2 = 40,
    zHS_PUNCH_MRI_1_LEVEL3 = 41,
    zHS_PUNCH_MRI_2_LEVEL1 = 42,
    zHS_PUNCH_MRI_2_LEVEL2 = 43,
    zHS_PUNCH_MRI_2_LEVEL3 = 44,
    zHS_PUNCH_MRI_3_LEVEL1 = 45,
    zHS_PUNCH_MRI_3_LEVEL2 = 46,
    zHS_PUNCH_MRI_3_LEVEL3 = 47,
    zHS_PUNCH_MRI_4_LEVEL1 = 48,
    zHS_PUNCH_MRI_4_LEVEL2 = 49,
    zHS_PUNCH_MRI_4_LEVEL3 = 50,
    zHS_PUNCH_FRO_1_LEVEL1 = 51,
    zHS_PUNCH_FRO_1_LEVEL2 = 52,
    zHS_PUNCH_FRO_1_LEVEL3 = 53,
    zHS_PUNCH_FRO_2_LEVEL1 = 54,
    zHS_PUNCH_FRO_2_LEVEL2 = 55,
    zHS_PUNCH_FRO_2_LEVEL3 = 56,
    zHS_PUNCH_FRO_3_LEVEL1 = 57,
    zHS_PUNCH_FRO_3_LEVEL2 = 58,
    zHS_PUNCH_FRO_3_LEVEL3 = 59,
    zHS_PUNCH_FRO_4_LEVEL1 = 60,
    zHS_PUNCH_FRO_4_LEVEL2 = 61,
    zHS_PUNCH_FRO_4_LEVEL3 = 62,
    zHS_ENEMY_DAMAGE = 63,
    zHS_ENEMY_FLYBACK = 64,
    zHS_COUNT = 65,
    zHS_FORCE_INT = -1,
};
// total size: 0x14
struct xHierarchyNode {
    // Members
    struct xSphere sphere; // offset 0x0, size 0x10
    unsigned short userData; // offset 0x10, size 0x2
    signed char bone; // offset 0x12, size 0x1
};
// total size: 0x8
struct xHierarchTweakInfo {
    // Members
    const char * * boneNames; // offset 0x0, size 0x4
    unsigned char lastCount; // offset 0x4, size 0x1
    signed char hilight; // offset 0x5, size 0x1
    signed char boneCount; // offset 0x6, size 0x1
    unsigned char rootSelected; // offset 0x7, size 0x1
};
// total size: 0x20
struct xHierarchyBound {
    // Members
    struct xSphere master; // offset 0x0, size 0x10
    struct xHierarchyNode * nodes; // offset 0x10, size 0x4
    unsigned char count; // offset 0x14, size 0x1
    unsigned char maxCount; // offset 0x15, size 0x1
    struct xHierarchTweakInfo tweakInfo; // offset 0x18, size 0x8
};
// total size: 0x10
struct hitBoneInfo {
    // Members
    unsigned short bone; // offset 0x0, size 0x2
    struct xVec3 boneOffset; // offset 0x4, size 0xC
};
// total size: 0x0
struct zAnimCacheEntry {};
// total size: 0x8
struct effectBone {
    // Members
    unsigned short bone; // offset 0x0, size 0x2
    struct zAnimCacheEntry * positionCache; // offset 0x4, size 0x4
};
// total size: 0x8
struct RumbleEffectParams {
    // Members
    float startTime; // offset 0x0, size 0x4
    unsigned int emitterID; // offset 0x4, size 0x4
};
// total size: 0x0
struct zFrag {};
enum zFragType {
    eFragInactive = 0,
    eFragGroup = 1,
    eFragShrapnel = 2,
    eFragParticle = 3,
    eFragProjectile = 4,
    eFragLightning = 5,
    eFragSound = 6,
    eFragShockwave = 7,
    eFragExplosion = 8,
    eFragDistortion = 9,
    eFragFire = 10,
    eFragLight = 11,
    eFragSmoke = 12,
    eFragGoo = 13,
    eFragCount = 14,
    eFragForceSize = 2147483647,
};
// total size: 0x18
struct zFragAsset {
    // Members
    enum zFragType type; // offset 0x0, size 0x4
    unsigned int id; // offset 0x4, size 0x4
    unsigned int parentID[2]; // offset 0x8, size 0x8
    float lifetime; // offset 0x10, size 0x4
    float delay; // offset 0x14, size 0x4
};
// total size: 0xC
struct zShrapnelAsset {
    // Members
    int fassetCount; // offset 0x0, size 0x4
    unsigned int shrapnelID; // offset 0x4, size 0x4
    void (* initCB)(struct zShrapnelAsset *, struct xModelInstance *, struct xVec3 *, struct xVec3 *, void (*)(struct zFrag *, struct zFragAsset *)); // offset 0x8, size 0x4
};
// total size: 0xC
struct ShrapnelEffectParams {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    struct zShrapnelAsset * asset; // offset 0x4, size 0x4
    float startTime; // offset 0x8, size 0x4
};
// total size: 0x18
struct BlurEffectParams {
    // Members
    float start; // offset 0x0, size 0x4
    float end; // offset 0x4, size 0x4
    float life; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
    float fadeInTime; // offset 0x10, size 0x4
    float fadeOutTime; // offset 0x14, size 0x4
};
// total size: 0x8
struct FlashEffectParams {
    // Members
    signed short alpha; // offset 0x0, size 0x2
    float time; // offset 0x4, size 0x4
};
// total size: 0xB4
class zCombatAttack {
    // Members
public:
    unsigned int state; // offset 0x0, size 0x4
    float attackStart; // offset 0x4, size 0x4
    float attackEnd; // offset 0x8, size 0x4
    float attackRadius; // offset 0xC, size 0x4
    struct hitBoneInfo hitBones[4]; // offset 0x10, size 0x40
    signed short damage; // offset 0x50, size 0x2
    unsigned short source; // offset 0x52, size 0x2
    float velocityUp; // offset 0x54, size 0x4
    float velocityAway; // offset 0x58, size 0x4
    unsigned int flags; // offset 0x5C, size 0x4
    unsigned short effect; // offset 0x60, size 0x2
    unsigned short hitEffect; // offset 0x62, size 0x2
    float effectStart; // offset 0x64, size 0x4
    float effectEnd; // offset 0x68, size 0x4
    struct effectBone effectBones[2]; // offset 0x6C, size 0x10
    struct RumbleEffectParams rumbleEffect; // offset 0x7C, size 0x8
    struct ShrapnelEffectParams shrapnelEffect; // offset 0x84, size 0xC
    struct BlurEffectParams blurEffect; // offset 0x90, size 0x18
    struct FlashEffectParams flashEffect; // offset 0xA8, size 0x8
    void (* hitCB)(struct xEnt *, class zCombatAttack *, struct xEnt *, struct xVec3 *, struct xVec3 *); // offset 0xB0, size 0x4
};
enum zHitTarget {
    zHT_GENERAL = 0,
    zHT_FRONT = 1,
    zHT_BACK = 2,
    zHT_LEFT = 3,
    zHT_RIGHT = 4,
    zHT_ENTITY = 5,
    zHT_ENV = 6,
    zHT_CRITICAL = 7,
    zHT_COUNT = 8,
};
// total size: 0x20
struct sphereInfo {
    // Members
    struct xSphere sphere; // offset 0x0, size 0x10
    struct xSphere previousSphere; // offset 0x10, size 0x10
};
// total size: 0x8
struct block_data {
    // Members
    unsigned char prev; // offset 0x0, size 0x1
    unsigned char next; // offset 0x1, size 0x1
    unsigned short flags; // offset 0x2, size 0x2
    void * data; // offset 0x4, size 0x4
};
// total size: 0x20
class tier_queue_allocator {
    // Members
    struct block_data * blocks; // offset 0x0, size 0x4
    unsigned long _unit_size; // offset 0x4, size 0x4
    unsigned long _block_size; // offset 0x8, size 0x4
    unsigned long _block_size_shift; // offset 0xC, size 0x4
    unsigned long _max_blocks; // offset 0x10, size 0x4
    unsigned long _max_blocks_shift; // offset 0x14, size 0x4
    unsigned char head; // offset 0x18, size 0x1
    unsigned int size; // offset 0x1C, size 0x4
};
// total size: 0x2C
struct joint_data {
    // Members
    int flags; // offset 0x0, size 0x4
    unsigned int born; // offset 0x4, size 0x4
    struct xVec3 loc; // offset 0x8, size 0xC
    struct xVec3 norm; // offset 0x14, size 0xC
    float orient; // offset 0x20, size 0x4
    float scale; // offset 0x24, size 0x4
    float alpha; // offset 0x28, size 0x4
};
// total size: 0x8
class iterator {
    // Members
    unsigned long it; // offset 0x0, size 0x4
    class tier_queue * owner; // offset 0x4, size 0x4
};
// total size: 0x30
class tier_queue {
    // Members
    unsigned long first; // offset 0x0, size 0x4
    unsigned long _size; // offset 0x4, size 0x4
    unsigned long wrap_mask; // offset 0x8, size 0x4
    class tier_queue_allocator * alloc; // offset 0xC, size 0x4
    unsigned char blocks[32]; // offset 0x10, size 0x20
};
// total size: 0x48
struct activity_data {
    // Members
    struct xFXRibbon * owner; // offset 0x0, size 0x4
    struct activity_data * * position; // offset 0x4, size 0x4
    class tier_queue joints; // offset 0x8, size 0x30
    int curve_index; // offset 0x38, size 0x4
    float ilife; // offset 0x3C, size 0x4
    unsigned int mtime; // offset 0x40, size 0x4
    unsigned int mlife; // offset 0x44, size 0x4
};
// total size: 0xC
struct curve_node {
    // Members
    float time; // offset 0x0, size 0x4
    struct xColor_tag color; // offset 0x4, size 0x4
    float scale; // offset 0x8, size 0x4
};
// total size: 0x20
struct config_type {
    // Members
    float life_time; // offset 0x0, size 0x4
    unsigned int blend_src; // offset 0x4, size 0x4
    unsigned int blend_dst; // offset 0x8, size 0x4
    float pivot; // offset 0xC, size 0x4
    int flags; // offset 0x10, size 0x4
    const struct curve_node * curve; // offset 0x14, size 0x4
    int curve_size; // offset 0x18, size 0x4
    struct RwRaster * raster; // offset 0x1C, size 0x4
};
// total size: 0x0
struct debug_info {};
// total size: 0x14
struct xFXRibbon {
    // Static members
    static unsigned char need_sort; // size: 0x1
    static int activities_used; // size: 0x4
    static struct activity_data * activities[32]; // size: 0x80
    static class tier_queue_allocator joint_alloc; // size: 0x20

    // Members
    float texture_offset; // offset 0x0, size 0x4
    float texture_increment_scale; // offset 0x4, size 0x4
private:
    struct activity_data * act; // offset 0x8, size 0x4
    const struct config_type * cfg; // offset 0xC, size 0x4
    struct debug_info * debug; // offset 0x10, size 0x4
};
// total size: 0x38
class PunchEffect {
    // Members
    struct xFXRibbon * up[2]; // offset 0x0, size 0x8
    struct xFXRibbon * right[2]; // offset 0x8, size 0x8
    float lastTime; // offset 0x10, size 0x4
    float time; // offset 0x14, size 0x4
    float distance[2]; // offset 0x18, size 0x8
    struct xVec3 averageWidth[2]; // offset 0x20, size 0x18
};
// total size: 0xC
struct xHierarchyBoundInitData {
    // Members
    signed char bone; // offset 0x0, size 0x1
    float radius; // offset 0x4, size 0x4
    unsigned short userData; // offset 0x8, size 0x2
};
// total size: 0x180
struct zCombat {
    // Static members
    static int MAX_HIT_OBJECTS; // size: 0x4

    // Members
    struct xHierarchyBound bounds; // offset 0x0, size 0x20
    unsigned int lastBoundUpdateTime; // offset 0x20, size 0x4
    signed short currentHitPoints; // offset 0x24, size 0x2
    signed short maximumHitPoints; // offset 0x26, size 0x2
    unsigned short stateTableSize; // offset 0x28, size 0x2
    const class zCombatAttack * stateTable; // offset 0x2C, size 0x4
    const struct xAnimState * animationState; // offset 0x30, size 0x4
    const class zCombatAttack * runningAttack; // offset 0x34, size 0x4
    float runningAttackTimer; // offset 0x38, size 0x4
    struct xEnt * lastNPCDamaged; // offset 0x3C, size 0x4
    unsigned char disableMovement; // offset 0x40, size 0x1
    unsigned char runningEffect; // offset 0x41, size 0x1
    unsigned char runningBlur; // offset 0x42, size 0x1
    unsigned char hitting; // offset 0x43, size 0x1
    unsigned char hitEnv; // offset 0x44, size 0x1
    unsigned char hitObject; // offset 0x45, size 0x1
    unsigned char forceReset; // offset 0x46, size 0x1
    unsigned char hitObjectCount; // offset 0x47, size 0x1
    struct xEnt * hitObjects[24]; // offset 0x48, size 0x60
    signed short currentDamage; // offset 0xA8, size 0x2
    signed short lastHitDamage; // offset 0xAA, size 0x2
    enum zHitSource lastHitSource; // offset 0xAC, size 0x4
    enum zHitTarget lastHitTarget; // offset 0xB0, size 0x4
    struct sphereInfo location[4]; // offset 0xB4, size 0x80
    int (* envCollisionCB)(struct xEnt *, struct xSweptSphere *, struct xEnv *); // offset 0x134, size 0x4
    class PunchEffect punchEffect; // offset 0x138, size 0x38
    unsigned int effectParam; // offset 0x170, size 0x4
private:
    struct xEnt * DEBUG_ent; // offset 0x174, size 0x4
    const char * * DEBUG_bones; // offset 0x178, size 0x4
    int DEBUG_boneCount; // offset 0x17C, size 0x4
};
// total size: 0x38
struct zCombatDamageInfo {
    // Members
    int flags; // offset 0x0, size 0x4
    struct xBase * from; // offset 0x4, size 0x4
    int damage; // offset 0x8, size 0x4
    enum zHitSource source; // offset 0xC, size 0x4
    enum zHitTarget target; // offset 0x10, size 0x4
    struct xVec3 knockback; // offset 0x14, size 0xC
    struct xVec3 hitLocation; // offset 0x20, size 0xC
    struct xVec3 direction; // offset 0x2C, size 0xC
};
// total size: 0x0
struct xSerial {};
// total size: 0x0
class zInteraction {};
// total size: 0x18
struct xPortalAsset : public xBaseAsset {
    // Members
    unsigned int assetCameraID; // offset 0x8, size 0x4
    unsigned int assetMarkerID; // offset 0xC, size 0x4
    float ang; // offset 0x10, size 0x4
    unsigned int sceneID; // offset 0x14, size 0x4
};
// total size: 0x14
struct _zPortal : public xBase {
    // Members
    struct xPortalAsset * passet; // offset 0x10, size 0x4
};
// total size: 0x5C
struct xEnvAsset : public xBaseAsset {
    // Members
    unsigned int bspAssetID; // offset 0x8, size 0x4
    unsigned int startCameraAssetID; // offset 0xC, size 0x4
    unsigned int climateFlags; // offset 0x10, size 0x4
    float climateStrengthMin; // offset 0x14, size 0x4
    float climateStrengthMax; // offset 0x18, size 0x4
    unsigned int bspLightKit; // offset 0x1C, size 0x4
    unsigned int objectLightKit; // offset 0x20, size 0x4
    unsigned int flags; // offset 0x24, size 0x4
    unsigned int bspCollisionAssetID; // offset 0x28, size 0x4
    unsigned int bspFXAssetID; // offset 0x2C, size 0x4
    unsigned int bspCameraAssetID; // offset 0x30, size 0x4
    unsigned int bspMapperID; // offset 0x34, size 0x4
    unsigned int bspMapperCollisionID; // offset 0x38, size 0x4
    unsigned int bspMapperFXID; // offset 0x3C, size 0x4
    float loldHeight; // offset 0x40, size 0x4
    struct xVec3 minBounds; // offset 0x44, size 0xC
    struct xVec3 maxBounds; // offset 0x50, size 0xC
};
// total size: 0x14
struct _zEnv : public xBase {
    // Members
    struct xEnvAsset * easset; // offset 0x10, size 0x4
};
// total size: 0x10
struct xDynAsset : public xBaseAsset {
    // Members
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
// total size: 0x68
struct zSceneParameters : public xDynAsset {
    // Members
    unsigned int idle03ExtraCount; // offset 0x10, size 0x4
    struct xAnimFile * * idle03Extras; // offset 0x14, size 0x4
    unsigned int idle04ExtraCount; // offset 0x18, size 0x4
    struct xAnimFile * * idle04Extras; // offset 0x1C, size 0x4
    unsigned char bombCount; // offset 0x20, size 0x1
    unsigned char extraIdleDelay; // offset 0x21, size 0x1
    unsigned char hdrGlow; // offset 0x22, size 0x1
    unsigned char hdrDarken; // offset 0x23, size 0x1
    unsigned int uDefaultMusicHash; // offset 0x24, size 0x4
    unsigned int flags; // offset 0x28, size 0x4
    float waterTileWidth; // offset 0x2C, size 0x4
    float lodFadeDistance; // offset 0x30, size 0x4
    float waterTileOffsetX; // offset 0x34, size 0x4
    float waterTileOffsetZ; // offset 0x38, size 0x4
    unsigned char numCheckpoints; // offset 0x3C, size 0x1
    unsigned char pad1[3]; // offset 0x3D, size 0x3
    float grassDistFade; // offset 0x40, size 0x4
    float grassDistCull; // offset 0x44, size 0x4
    unsigned int piggybank; // offset 0x48, size 0x4
    unsigned int maxAnimationMem; // offset 0x4C, size 0x4
    unsigned int maxArtMem; // offset 0x50, size 0x4
    unsigned int maxDesignMem; // offset 0x54, size 0x4
    unsigned int maxProgrammingMem; // offset 0x58, size 0x4
    unsigned int pad[3]; // offset 0x5C, size 0xC
};
// total size: 0x6AC
struct zScene : public xScene {
    // Members
    struct _zPortal * pendingPortal; // offset 0x74, size 0x4
    int num_base; // offset 0x78, size 0x4
    struct xBase * * base; // offset 0x7C, size 0x4
    unsigned int num_update_base; // offset 0x80, size 0x4
    struct xBase * * update_base; // offset 0x84, size 0x4
    int baseCount[195]; // offset 0x88, size 0x30C
    struct xBase * baseList[195]; // offset 0x394, size 0x30C
    struct _zEnv * zen; // offset 0x6A0, size 0x4
    struct zSceneParameters * parameters; // offset 0x6A4, size 0x4
    unsigned char enableDrawing; // offset 0x6A8, size 0x1
};
// total size: 0x13A0
struct zPlayer : public zEnt {
    // Static members
    static int MAX_EXTRA_SPHERES; // size: 0x4
    static unsigned int BUTTON_DEFINITIONS[12]; // size: 0x30
    static char * BUTTON_NAMES[12]; // size: 0x30
    static unsigned int BUTTON_COUNT; // size: 0x4

    // Members
    class zPlayerActionManager actionManager; // offset 0xDC, size 0xC
    int index; // offset 0xE8, size 0x4
    void * __vptr$; // offset 0xEC, size 0x4
    struct xVec3 trigLastFramePos; // offset 0xF0, size 0xC
    struct xScene * sc; // offset 0xFC, size 0x4
    struct xMat4x3 lastmat; // offset 0x100, size 0x40
    struct PlayerStats playStats; // offset 0x140, size 0x24
    enum eBrainType brain_id; // offset 0x164, size 0x4
    struct xVec3 floor_pos; // offset 0x168, size 0xC
    struct xVec3 floor_normal; // offset 0x174, size 0xC
    struct xSphere extraSpheres[5]; // offset 0x180, size 0x50
    int numExtraSpheres; // offset 0x1D0, size 0x4
    int zPlayerFlags; // offset 0x1D4, size 0x4
    float collision_underneath_height; // offset 0x1D8, size 0x4
    float collision_underneath_time; // offset 0x1DC, size 0x4
    struct mblur_data * mblur; // offset 0x1E0, size 0x4
protected:
    class zPad * pad; // offset 0x1E4, size 0x4
    float slipFadeTimer; // offset 0x1E8, size 0x4
    int slide; // offset 0x1EC, size 0x4
    float slideTimer; // offset 0x1F0, size 0x4
    float controlOffTimer; // offset 0x1F4, size 0x4
    float controlOnTime; // offset 0x1F8, size 0x4
    unsigned int controlOff; // offset 0x1FC, size 0x4
    unsigned int controlOnEvent; // offset 0x200, size 0x4
    struct zPlayerCheckPoint checkPoint; // offset 0x204, size 0x10
    unsigned char cheatMode; // offset 0x214, size 0x1
    class zPlayerInput playerInput; // offset 0x218, size 0x24
    struct xVec3 lastDeltaPos; // offset 0x23C, size 0xC
    float update_dt; // offset 0x248, size 0x4
    float last_update_dt; // offset 0x24C, size 0x4
    struct xVec3 update_motion; // offset 0x250, size 0xC
    struct xVec3 previous_position; // offset 0x25C, size 0xC
    struct xVec3 predictRotate; // offset 0x268, size 0xC
    struct xVec3 predictTranslate; // offset 0x274, size 0xC
    float predictAngV; // offset 0x280, size 0x4
    struct xVec3 predictCurrDir; // offset 0x284, size 0xC
    float predictCurrVel; // offset 0x290, size 0x4
    struct zSlideCam * slideCam; // offset 0x294, size 0x4
    struct xJSPHeader * floor_jsp; // offset 0x298, size 0x4
    struct xClumpCollBSPTriangle * floor_bspTriangle; // offset 0x29C, size 0x4
    struct xVec3 floorNorm; // offset 0x2A0, size 0xC
    int slope; // offset 0x2AC, size 0x4
    float floor_collision_timer; // offset 0x2B0, size 0x4
    float floor_distance; // offset 0x2B4, size 0x4
    struct xEnt * floor_entity; // offset 0x2B8, size 0x4
    unsigned int floor_oid; // offset 0x2BC, size 0x4
    struct xSurface * floor_surface; // offset 0x2C0, size 0x4
    unsigned int collisionFlags; // offset 0x2C4, size 0x4
    unsigned char currentIsNearLedge; // offset 0x2C8, size 0x1
    unsigned char currentIsNearLedgeValid; // offset 0x2C9, size 0x1
    float fallingTime; // offset 0x2CC, size 0x4
    float idleAnimationTimer; // offset 0x2D0, size 0x4
    unsigned int lorezModelID; // offset 0x2D4, size 0x4
    struct xModelInstance * lorezModel; // offset 0x2D8, size 0x4
    struct xModelInstance * hirezModel; // offset 0x2DC, size 0x4
    struct zNPCAttackerData npcAttacker[3]; // offset 0x2E0, size 0x618
    class zNPCCommon * roundRobinMelee; // offset 0x8F8, size 0x4
    float roundRobinTimeOut; // offset 0x8FC, size 0x4
    float enemyKilledComboTimer; // offset 0x900, size 0x4
    int enemyKilledCombo; // offset 0x904, size 0x4
private:
    float depenetration_velocity; // offset 0x908, size 0x4
    struct xEntShadow entShadow_embedded; // offset 0x90C, size 0x2C
    struct xShadowSimpleCache simpShadow_embedded; // offset 0x938, size 0xA4
    unsigned int loaded_assetid; // offset 0x9DC, size 0x4
    struct xEntDrive drv; // offset 0x9E0, size 0xC0
    unsigned short parametersSize; // offset 0xAA0, size 0x2
    struct xModelAssetParam * parameters; // offset 0xAA4, size 0x4
    struct xEnt * reticleTarget; // offset 0xAA8, size 0x4
    struct RpAtomic * reticleModel; // offset 0xAAC, size 0x4
    float reticleRot; // offset 0xAB0, size 0x4
    float reticleAlpha; // offset 0xAB4, size 0x4
    struct xMat4x3 reticleMat; // offset 0xAC0, size 0x40
    float idleSoundTimer; // offset 0xB00, size 0x4
    unsigned int oldSlidePen; // offset 0xB04, size 0x4
    // total size: 0x890
    struct /* @class$2256xDecal_cpp */ {
        // Static members
        static int POS_COUNT_MAX; // size: 0x4

        // Members
        unsigned char debugging; // offset 0x0, size 0x1
        struct xVec3 positions[180]; // offset 0x4, size 0x870
        struct xVec3 startPos; // offset 0x874, size 0xC
        struct xVec3 endPos; // offset 0x880, size 0xC
        int posCount; // offset 0x88C, size 0x4
    } physicsDebug; // offset 0xB08, size 0x890
public:
    unsigned int * hitSoundsMap; // offset 0x1398, size 0x4
};
// total size: 0x14
class zPlayerContainer {
    // Members
    struct zPlayer * playerArray[4]; // offset 0x0, size 0x10
    int numPlayers; // offset 0x10, size 0x4
};
// total size: 0xC
struct /* @class$1267xDecal_cpp */ {
    // Members
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
};
// total size: 0xC
struct tri_data {
    // Members
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
};
// total size: 0x54
struct xCollis {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int oid; // offset 0x4, size 0x4
    void * optr; // offset 0x8, size 0x4
    struct xModelInstance * mptr; // offset 0xC, size 0x4
    float dist; // offset 0x10, size 0x4
    float test_dist; // offset 0x14, size 0x4
    struct xVec3 norm; // offset 0x18, size 0xC
    struct xVec3 tohit; // offset 0x24, size 0xC
    struct xVec3 depen; // offset 0x30, size 0xC
    struct xVec3 hdng; // offset 0x3C, size 0xC
    union { // inferred
        // total size: 0xC
        struct /* @class$1267xDecal_cpp */ {
            // Members
            float t; // offset 0x0, size 0x4
            float u; // offset 0x4, size 0x4
            float v; // offset 0x8, size 0x4
        } tuv; // offset 0x48, size 0xC
        struct tri_data tri; // offset 0x48, size 0xC
    };
};
// total size: 0x14
struct cb_decal_sphere_hits_ent {
    // Functions
    static cb_decal_sphere_hits_ent(struct xMat4x3 & mat, const struct xSphere & o, const struct emit_context & ec, int check, unsigned char skip_destructible);

    static unsigned char operator()(struct xEnt & ent);

    // Members
    struct xMat4x3 & mat; // offset 0x0, size 0x4
    const struct xSphere & o; // offset 0x4, size 0x4
    const struct emit_context & ec; // offset 0x8, size 0x4
    int check; // offset 0xC, size 0x4
    unsigned char skip_destructible; // offset 0x10, size 0x1
};
// Range: 0x8004B62C -> 0x8004B8D0
void sphere_emit(const struct emit_context & ec /* r28 */, const struct xVec3 & center /* r27 */, float radius /* f31 */, int check_flags /* r29 */) {
    // Local variables
    struct xSphere o; // r1+0x1C
    struct xMat4x3 mat; // r1+0x60
    struct xCollis coll; // r1+0x138
    struct xVec3 best_dir; // r1+0x10
    int i; // r31
    struct xSphere * extra_spheres[5]; // r1+0x40
    int num_spheres; // r26
    int j; // r30
    struct xBound tempBound; // r1+0xEC
    struct cb_decal_sphere_hits_ent cb; // r1+0x2C
    struct xBound bound; // r1+0xA0

    // References
    // -> struct xGrid npcs_grid;
    // -> struct xGrid colls_oso_grid;
    // -> struct xGrid colls_grid;
    // -> struct xGlobals * xglobals;
}

// Range: 0x8004B8D0 -> 0x8004B8E8
// this: r3
static cb_decal_sphere_hits_ent::cb_decal_sphere_hits_ent(struct xMat4x3 & mat /* r4 */, const struct xSphere & o /* r5 */, const struct emit_context & ec /* r6 */, int check /* r7 */, unsigned char skip_destructible /* r8 */) {}

// Range: 0x8004B8E8 -> 0x8004B968
void emit(const struct emit_context & ec /* r1+0x8 */, const struct xMat4x3 & mat /* r1+0xC */, const struct xModelInstance & model /* r1+0x10 */, unsigned char moving_model /* r1+0x14 */, struct xEnt * driver_ent /* r1+0x18 */) {
    // Local variables
    const struct xModelInstance * m; // r31
}

static char __FUNCTION__[5]; // size: 0x5, address: 0x80D5F0A7
// Range: 0x8004B968 -> 0x8004C330
void emit(const struct emit_context & ec /* r28 */, const struct xMat4x3 & mat /* r1+0x10 */, struct RpAtomic * model /* r19 */, const struct xMat4x3 * model_mat /* r1+0x14 */, unsigned char moving_model /* r1+0x18 */, struct xEnt * driver_ent /* r17 */) {
    // Local variables
    struct owner_group_type * owner_group; // r1+0x44
    struct RpGeometry * geom; // r23
    struct RpTriangle * tri; // r1+0x40
    struct xVec3 * vert; // r22
    int tri_size; // r1+0x3C
    int vert_size; // r24
    struct xMat4x3 & mmat; // r21
    struct xMat4x3 oldmmat; // r1+0x90
    struct xMat4x3 imat; // r1+0x50
    struct xVec3 * decal_vert; // r25
    unsigned char * temp_scratch; // r20
    unsigned char * mem; // r27
    struct clip_decal_indexed_params * arg; // r31
    float * weight_buffer; // r1+0x38
    float rx; // f31
    float ry; // f30
    unsigned char mountable; // r1+0x1D
    unsigned char skinned; // r18
    const struct xMat4x3 * driver; // r1+0x34
    struct decal_instance * decal; // r30
    struct immediate_mode_data * im; // r29
    int i; // r26
    int asdf; // r1+0x30
    struct RwSphere * o; // r1+0x2C

    // References
    // -> static char __FUNCTION__[5];
    // -> static struct immediate_mode_data * immediate_free;
    // -> static int decals_used;
}

// Range: 0x8004C330 -> 0x8004C39C
static void copy_atomic_tris(struct RpAtomic * atomic /* r1+0x8 */, const struct RpTriangle * tri /* r1+0xC */) {
    // Local variables
    struct RpGeometry * geom; // r31
    struct RpTriangle * otri; // r30
    int tri_size; // r29
}

// Range: 0x8004C39C -> 0x8004C430
static void transform_decal_atomic(struct RpAtomic * atomic /* r1+0x8 */, const struct combo_vertex * vert /* r1+0xC */, const struct xVec3 * src_vert /* r1+0x10 */, const struct xMat4x3 & mat /* r1+0x14 */) {
    // Local variables
    struct RpGeometry * geom; // r30
    struct xVec3 * overt; // r31
    int vert_size; // r29
}

// Range: 0x8004C430 -> 0x8004C4AC
static void transform_decal_atomic(struct RpAtomic * atomic /* r1+0x8 */, const struct combo_vertex * vert /* r1+0xC */, const struct xVec3 * src_vert /* r1+0x10 */) {
    // Local variables
    struct RpGeometry * geom; // r31
    struct xVec3 * overt; // r30
    int vert_size; // r29
}

// total size: 0x10
struct RwMatrixWeights {
    // Members
    float w0; // offset 0x0, size 0x4
    float w1; // offset 0x4, size 0x4
    float w2; // offset 0x8, size 0x4
    float w3; // offset 0xC, size 0x4
};
// Range: 0x8004C4AC -> 0x8004CFCC
static unsigned char transform_decal_atomic_skinned(struct RpAtomic * atomic /* r1+0x8 */, const struct combo_vertex * cv /* r30 */, struct RpAtomic * iatomic /* r1+0xC */, float * weight_buffer /* r31 */) {
    // Local variables
    struct RpGeometry * geom; // r1+0x88
    struct RpMorphTarget * mt; // r1+0x84
    struct xVec3 * vert; // r29
    int vert_size; // r1+0x80
    struct RwMatrixWeights * weights; // r1+0x7C
    unsigned int * indices; // r1+0x78
    struct RpGeometry * igeom; // r1+0x74
    struct RpMorphTarget * imt; // r1+0x70
    const struct xVec3 * ivert; // r1+0x6C
    struct RpSkin * iskin; // r1+0x68
    const struct RwMatrixWeights * iweights; // r1+0x64
    const unsigned int * iindices; // r28
    unsigned int bone_size; // r1+0x60
    struct xVec3 * end_vert; // r1+0x5C
    struct RwMatrixWeights * bone_weight; // r26
    unsigned int * bone_index; // r18
    int i0; // r20
    int i1; // r1+0x58
    float n; // f31
    float o; // f27
    const struct xVec3 & s0; // r1+0x54
    const struct xVec3 & s1; // r1+0x50
    unsigned int bi0; // r25
    const struct RwMatrixWeights & wt0; // r17
    unsigned int bi1; // r24
    const struct RwMatrixWeights & wt1; // r1+0x4C
    float sum; // f25
    int i; // r1+0x48
    float highest; // f24
    int highest_index; // r1+0x44
    int j; // r19
    int i1; // r1+0x40
    int i2; // r1+0x3C
    float m; // f30
    float n; // f29
    float o; // f26
    const struct xVec3 & s0; // r1+0x38
    const struct xVec3 & s1; // r1+0x34
    const struct xVec3 & s2; // r1+0x30
    unsigned int bi0; // r23
    const struct RwMatrixWeights & wt0; // r1+0x2C
    unsigned int bi1; // r22
    const struct RwMatrixWeights & wt1; // r1+0x28
    unsigned int bi2; // r21
    const struct RwMatrixWeights & wt2; // r1+0x24
    float sum; // f23
    int i; // r1+0x20
    float highest; // f28
    int highest_index; // r1+0x1C
    int j; // r27
    const struct RwMatrixTag * isbmat; // r1+0x18
    struct RpSkin * skin; // r1+0x14

    // References
    // -> static char __FUNCTION__[31];
}

// Range: 0x8004CFF0 -> 0x8004D05C
static void transform_points(struct xVec3 * out /* r1+0x8 */, const struct xVec3 * in /* r1+0xC */, int size /* r1+0x10 */, const struct xMat4x3 & mat /* r1+0x14 */) {
    // Local variables
    int i; // r31
}

// Range: 0x8004D05C -> 0x8004D174
static void compute_outcodes(unsigned char * outcode /* r31 */, const struct xVec3 * vert /* r30 */, int vert_size /* r27 */, const struct xBox & box /* r29 */) {
    // Local variables
    const struct xVec3 * end_vert; // r28
}

static char __FUNCTION__[9]; // size: 0x9, address: 0x80D5F0AC
// Range: 0x8004D174 -> 0x8004D920
void emit_env(const struct emit_context & ec /* r29 */, const struct xMat4x3 & mat /* r18 */) {
    // Local variables
    struct owner_group_type * owner_group; // r17
    unsigned char * temp_scratch; // r23
    unsigned char * mem; // r27
    struct intersect_env_params * iarg; // r26
    struct clip_decal_params * carg; // r31
    struct xVec3 * decal_vert; // r22
    unsigned char * outcode; // r1+0x18
    float rx; // f31
    float ry; // f30
    struct decal_instance * decal; // r30
    struct immediate_mode_data * im; // r28
    unsigned short * index; // r21
    unsigned short i; // r20
    struct RpGeometry * geom; // r19
    struct RwV3d * avert; // r1+0x14
    struct RpTriangle * atri; // r24
    unsigned short i; // r25
    struct RpMorphTarget * mt; // r1+0x10
    struct RwSphere o; // r1+0x1C

    // References
    // -> static char __FUNCTION__[9];
    // -> static struct immediate_mode_data * immediate_free;
    // -> static int decals_used;
}

static char __FUNCTION__[7]; // size: 0x7, address: 0x80D5F0B5
// Range: 0x8004D920 -> 0x8004DA08
void remove(unsigned int owner /* r1+0x8 */) {
    // Local variables
    struct decal_instance * decal; // r31
    struct decal_instance * end_decal; // r30

    // References
    // -> static char __FUNCTION__[7];
    // -> static struct immediate_mode_data * immediate_free;
    // -> static int decals_used;
    // -> static struct decal_instance * decals;
}

static struct xDecalEmitter * active_emitters[32]; // size: 0x80, address: 0x80B5E890
static unsigned int active_emitters_size; // size: 0x4, address: 0x80D68F30
static char __FUNCTION__[17]; // size: 0x11, address: 0x80D5F0BC
// Range: 0x8004DA08 -> 0x8004DB5C
static void register_emitter(struct xDecalEmitter * emitter /* r30 */) {
    // Local variables
    unsigned long i; // r31

    // References
    // -> static unsigned int active_emitters_size;
    // -> static struct xDecalEmitter * active_emitters[32];
    // -> static char __FUNCTION__[17];
}

enum texture_mode {
    TM_DEFAULT = 0,
    TM_RANDOM = 1,
    TM_CYCLE = 2,
    MAX_TM = 3,
    FORCE_INT_TM = -1,
};
// total size: 0x18
struct /* @class$1245xDecal_cpp */ {
    // Members
    struct xVec2 uv[2]; // offset 0x0, size 0x10
    unsigned char rows; // offset 0x10, size 0x1
    unsigned char cols; // offset 0x11, size 0x1
    enum texture_mode mode; // offset 0x14, size 0x4
};
// total size: 0x28
struct config {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    float life_time; // offset 0x4, size 0x4
    unsigned int blend_src; // offset 0x8, size 0x4
    unsigned int blend_dst; // offset 0xC, size 0x4
    // total size: 0x18
    struct /* @class$1245xDecal_cpp */ {
        // Members
        struct xVec2 uv[2]; // offset 0x0, size 0x10
        unsigned char rows; // offset 0x10, size 0x1
        unsigned char cols; // offset 0x11, size 0x1
        enum texture_mode mode; // offset 0x14, size 0x4
    } texture; // offset 0x10, size 0x18
};
// total size: 0x1C
struct /* @class$1246xDecal_cpp */ {
    // Members
    struct RwTexture * asset; // offset 0x0, size 0x4
    unsigned long units; // offset 0x4, size 0x4
    struct xVec2 size; // offset 0x8, size 0x8
    struct xVec2 isize; // offset 0x10, size 0x8
    int prev; // offset 0x18, size 0x4
};
// total size: 0xC
struct curve_node {
    // Members
    float time; // offset 0x0, size 0x4
    struct xColor_tag color; // offset 0x4, size 0x4
    float scale; // offset 0x8, size 0x4
};
// total size: 0x30
struct /* @class$1248xDecal_cpp */ {
    // Members
    unsigned char active; // offset 0x0, size 0x1
    unsigned char bind_to_player; // offset 0x1, size 0x1
    float time; // offset 0x4, size 0x4
    struct xVec3 center; // offset 0x8, size 0xC
    float size; // offset 0x14, size 0x4
    float scale; // offset 0x18, size 0x4
    float radius; // offset 0x1C, size 0x4
    float freq; // offset 0x20, size 0x4
    float duration; // offset 0x24, size 0x4
    float rate; // offset 0x28, size 0x4
    int emitted; // offset 0x2C, size 0x4
};
// total size: 0x23C
struct debug_info {
    // Members
    const char * name; // offset 0x0, size 0x4
    char prefix[128]; // offset 0x4, size 0x80
    struct curve_node curve[32]; // offset 0x84, size 0x180
    unsigned int texture; // offset 0x204, size 0x4
    unsigned int rendered; // offset 0x208, size 0x4
    // total size: 0x30
    struct /* @class$1248xDecal_cpp */ {
        // Members
        unsigned char active; // offset 0x0, size 0x1
        unsigned char bind_to_player; // offset 0x1, size 0x1
        float time; // offset 0x4, size 0x4
        struct xVec3 center; // offset 0x8, size 0xC
        float size; // offset 0x14, size 0x4
        float scale; // offset 0x18, size 0x4
        float radius; // offset 0x1C, size 0x4
        float freq; // offset 0x20, size 0x4
        float duration; // offset 0x24, size 0x4
        float rate; // offset 0x28, size 0x4
        int emitted; // offset 0x2C, size 0x4
    } spiral; // offset 0x20C, size 0x30
};
// total size: 0x6C
struct xDecalEmitter {
    // Functions
    void init(int max_size, const char * debug_name);

    void tweak_init(int max_size, const char * debug_name);

    void set_default_config();

    void set_texture(const char * name);

    void set_texture(unsigned int id);

    void set_texture(struct RwTexture * texture);

    void refresh_config();

    void set_curve(const struct curve_node * curve, unsigned long size);

    void emit(const struct xMat4x3 & mat, int texture_index);

    void emit(const struct xMat4x3 & mat, const struct xVec3 & scale, int texture_index);

    void update(float dt);

    void update_frac(struct unit_data & unit);

    void get_render_data(const struct unit_data & unit, float scale, struct xColor_tag & color, struct xMat4x3 & mat, struct xVec2 & uv0, struct xVec2 & uv1, int min_alpha);

    int select_texture_unit();

    void debug_init(const char * debug_name);

    void debug_update(float dt);

    void debug_update_curve();

    void add_tweaks(const char * prefix);

    void add_spiral_tweaks();

    void update_curve_tweaks();

    void create_test_curve(unsigned long size);

    void move_spiral_to_player();

    // Members
    struct config cfg; // offset 0x0, size 0x28
    // total size: 0x1C
    struct /* @class$1246xDecal_cpp */ {
        // Members
        struct RwTexture * asset; // offset 0x0, size 0x4
        unsigned long units; // offset 0x4, size 0x4
        struct xVec2 size; // offset 0x8, size 0x8
        struct xVec2 isize; // offset 0x10, size 0x8
        int prev; // offset 0x18, size 0x4
    } texture; // offset 0x28, size 0x1C
    class static_queue units; // offset 0x44, size 0x14
    const struct curve_node * curve; // offset 0x58, size 0x4
    unsigned long curve_size; // offset 0x5C, size 0x4
    unsigned long curve_index; // offset 0x60, size 0x4
    float ilife; // offset 0x64, size 0x4
    struct debug_info * debug; // offset 0x68, size 0x4
};
static struct xDecalEmitter dummy_emitter; // size: 0x6C, address: 0x80B5E910
// Range: 0x8004DB5C -> 0x8004DBB4
void xDecalInit() {
    // References
    // -> static struct xDecalEmitter dummy_emitter;
    // -> static unsigned int active_emitters_size;
}

// Range: 0x8004DBB4 -> 0x8004DC30
void xDecalUpdate(float dt /* r1+0x8 */) {
    // Local variables
    unsigned long i; // r31

    // References
    // -> static unsigned int active_emitters_size;
    // -> static struct xDecalEmitter * active_emitters[32];
}

// total size: 0x50
struct unit_data {
    // Members
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char curve_index; // offset 0x1, size 0x1
    unsigned char u; // offset 0x2, size 0x1
    unsigned char v; // offset 0x3, size 0x1
    float frac; // offset 0x4, size 0x4
    float age; // offset 0x8, size 0x4
    float cull_size; // offset 0xC, size 0x4
    struct xMat4x3 mat; // offset 0x10, size 0x40
};
// total size: 0x14
class static_queue {
    // Members
public:
    unsigned long _first; // offset 0x0, size 0x4
    unsigned long _size; // offset 0x4, size 0x4
    unsigned long _max_size; // offset 0x8, size 0x4
    unsigned long _max_size_mask; // offset 0xC, size 0x4
    struct unit_data * _buffer; // offset 0x10, size 0x4
};
static char __FUNCTION__[5]; // size: 0x5, address: 0x80D5F0CD
char __FUNCTION__$localstatic1$init__41static_queue<Q213xDecalEmitter9unit_data>FUlUi[5]; // size: 0x5, address: 0x80D5F0D2
// Range: 0x8004DC30 -> 0x8004DCE8
// this: r31
void xDecalEmitter::init(int max_size /* r30 */, const char * debug_name /* r1+0x8 */) {
    // References
    // -> static char __FUNCTION__[5];
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80D5F0D7
char __FUNCTION__$localstatic1$tweak_init__41static_queue<Q213xDecalEmitter9unit_data>FUl[11]; // size: 0xB, address: 0x80D5F0E2
// Range: 0x8004DCE8 -> 0x8004DD9C
// this: r31
void xDecalEmitter::tweak_init(int max_size /* r30 */, const char * debug_name /* r1+0x8 */) {
    // References
    // -> static char __FUNCTION__[11];
}

// Range: 0x8004DD9C -> 0x8004DE20
// this: r31
void xDecalEmitter::set_default_config() {}

// Range: 0x8004DE20 -> 0x8004DE58
// this: r1+0x8
void xDecalEmitter::set_texture(const char * name /* r1+0xC */) {}

// Range: 0x8004DE58 -> 0x8004DEC4
// this: r29
void xDecalEmitter::set_texture(unsigned int id /* r30 */) {}

// Range: 0x8004DEC4 -> 0x8004DED4
// this: r3
void xDecalEmitter::set_texture(struct RwTexture * texture /* r4 */) {}

// Range: 0x8004DED4 -> 0x8004E03C
// this: r31
void xDecalEmitter::refresh_config() {}

// Range: 0x8004E03C -> 0x8004E080
// this: r31
void xDecalEmitter::set_curve(const struct curve_node * curve /* r1+0x8 */, unsigned long size /* r1+0xC */) {}

static char __FUNCTION__[5]; // size: 0x5, address: 0x80D5F0ED
char __FUNCTION__$localstatic1$pop_back__41static_queue<Q213xDecalEmitter9unit_data>Fv[9]; // size: 0x9, address: 0x80D5F0F2
char __FUNCTION__$localstatic1$push_front__41static_queue<Q213xDecalEmitter9unit_data>Fv[11]; // size: 0xB, address: 0x80D5F0FB
char __FUNCTION__$localstatic1$front__41static_queue<Q213xDecalEmitter9unit_data>Fv[6]; // size: 0x6, address: 0x80D5F106
char __FUNCTION__$localstatic1$__ml__Q241static_queue<Q213xDecalEmitter9unit_data>8iteratorCFv[5]; // size: 0x5, address: 0x80D5F10C
// Range: 0x8004E080 -> 0x8004E23C
// this: r30
void xDecalEmitter::emit(const struct xMat4x3 & mat /* r28 */, int texture_index /* r29 */) {
    // Local variables
    struct unit_data & unit; // r31

    // References
    // -> static char __FUNCTION__[5];
}

// Range: 0x8004E23C -> 0x8004E258
static float choose_greatest(float a /* f1 */, float b /* f2 */, float c /* f3 */) {}

// total size: 0x8
class iterator {
    // Members
public:
    unsigned long _it; // offset 0x0, size 0x4
    class static_queue * _owner; // offset 0x4, size 0x4
};
static char __FUNCTION__[5]; // size: 0x5, address: 0x80D5F111
// Range: 0x8004E258 -> 0x8004E430
// this: r30
void xDecalEmitter::emit(const struct xMat4x3 & mat /* r27 */, const struct xVec3 & scale /* r29 */, int texture_index /* r28 */) {
    // Local variables
    struct unit_data & unit; // r31

    // References
    // -> static char __FUNCTION__[5];
}

static char __FUNCTION__[7]; // size: 0x7, address: 0x80D5F116
char __FUNCTION__$localstatic1$__apl__Q241static_queue<Q213xDecalEmitter9unit_data>8iteratorFi[6]; // size: 0x6, address: 0x80D5F11D
char __FUNCTION__$localstatic1$erase__41static_queue<Q213xDecalEmitter9unit_data>FRCQ241static_queue<Q213xDecalEmitter9unit_data>8iteratorRCQ241static_queue<Q213xDecalEmitter9unit_data>8iterator[6]; // size: 0x6, address: 0x80D5F123
// total size: 0x38
struct ptank_pool__color_mat_uv2 : public ptank_pool {
    // Members
    struct xColor_tag * color; // offset 0x20, size 0x4
    struct xMat4x3 * mat; // offset 0x24, size 0x4
    struct xVec2 * uv; // offset 0x28, size 0x4
    int stride_color; // offset 0x2C, size 0x4
    int stride_mat; // offset 0x30, size 0x4
    int stride_uv; // offset 0x34, size 0x4
};
// Range: 0x8004E430 -> 0x8004E740
// this: r31
void xDecalEmitter::update(float dt /* f30 */) {
    // Local variables
    unsigned long il; // r26
    unsigned long ir; // r25
    float dage; // f31
    struct ptank_pool__color_mat_uv2 pool; // r1+0x34
    int min_alpha; // r29
    class iterator it; // r1+0x1C
    struct unit_data & unit; // r30
    const struct curve_node & node0; // r28
    const struct curve_node & node1; // r27
    float scale; // r1+0x8
    struct RwSphere worldsph; // r1+0x24

    // References
    // -> struct xGlobals * xglobals;
    // -> static char __FUNCTION__[7];
}

// total size: 0x10
struct render_state {
    // Members
    struct RwTexture * texture; // offset 0x0, size 0x4
    unsigned int src_blend; // offset 0x4, size 0x4
    unsigned int dst_blend; // offset 0x8, size 0x4
    int flags; // offset 0xC, size 0x4
};
enum ptank_group_type {
    PGT_COLOR_MAT = 0,
    PGT_COLOR_MAT_UV2 = 1,
    PGT_POS_COLOR_SIZE = 2,
    PGT_POS_COLOR_SIZE_UV2 = 3,
    PGT_POS_COLOR_SIZE_ROT = 4,
    PGT_POS_COLOR_SIZE_ROT_UV2 = 5,
    MAX_PGT = 6,
};
// total size: 0x20
struct ptank_pool {
    // Members
    struct render_state rs; // offset 0x0, size 0x10
    unsigned int order_group; // offset 0x10, size 0x4
    int order_index; // offset 0x14, size 0x4
    unsigned long used; // offset 0x18, size 0x4
    struct RpAtomic * ptank; // offset 0x1C, size 0x4
};
// total size: 0x8
struct RpPTankLockStruct {
    // Members
    unsigned char * data; // offset 0x0, size 0x4
    int stride; // offset 0x4, size 0x4
};
// Range: 0x8004E740 -> 0x8004E750
static void lerp(float & v /* r3 */, float frac /* f1 */, float v0 /* f2 */, float v1 /* f3 */) {}

// Range: 0x8004E750 -> 0x8004E838
// this: r3
void xDecalEmitter::update_frac(struct unit_data & unit /* r4 */) {
    // Local variables
    const struct curve_node & node0; // r31
    const struct curve_node & node1; // r30
    float itime; // f31
}

// Range: 0x8004E838 -> 0x8004EA20
// this: r30
void xDecalEmitter::get_render_data(const struct unit_data & unit /* r31 */, float scale /* f31 */, struct xColor_tag & color /* r27 */, struct xMat4x3 & mat /* r29 */, struct xVec2 & uv0 /* r28 */, struct xVec2 & uv1 /* r26 */, int min_alpha /* r21 */) {
    // Local variables
    const struct curve_node & node0; // r25
    const struct curve_node & node1; // r24

    // References
    // -> struct xGlobals * xglobals;
}

// Range: 0x8004EA20 -> 0x8004EAB4
static void lerp(struct xColor_tag & v /* r29 */, float frac /* f31 */, struct xColor_tag & v0 /* r30 */, struct xColor_tag & v1 /* r31 */) {}

// Range: 0x8004EAB4 -> 0x8004EB34
static void lerp(unsigned char & v /* r3 */, float frac /* f1 */, unsigned char v0 /* r4 */, unsigned char v1 /* r5 */) {}

// Range: 0x8004EB34 -> 0x8004EBBC
// this: r31
int xDecalEmitter::select_texture_unit() {}

// Range: 0x8004EBBC -> 0x8004ECF8
// this: r31
void xDecalEmitter::debug_init(const char * debug_name /* r30 */) {
    // Local variables
    char prefix[128]; // r1+0x8
}

// Range: 0x8004ECF8 -> 0x8004EF10
// this: r31
void xDecalEmitter::debug_update(float dt /* r1+0x10 */) {
    // Local variables
    int emit; // r30
    float frac; // f31
    float ang; // f30
    float radius; // f29
    struct xVec3 tan; // r1+0x20
    struct xVec3 loc; // r1+0x14
    struct xMat4x3 mat; // r1+0x30
}

// Range: 0x8004EF10 -> 0x8004EFC0
// this: r31
void xDecalEmitter::debug_update_curve() {}

static struct tweak_callback cb_config; // size: 0x28, address: 0x804F2390
static signed char init; // size: 0x1, address: 0x80D68F34
static struct tweak_callback cb_ztest; // size: 0x28, address: 0x804F23B8
static signed char init; // size: 0x1, address: 0x80D68F35
static struct tweak_callback cb_curve; // size: 0x28, address: 0x804F23E0
static signed char init; // size: 0x1, address: 0x80D68F36
static struct tweak_callback cb_change_texture; // size: 0x28, address: 0x804F2408
static signed char init; // size: 0x1, address: 0x80D68F37
static char * tm_labels[3]; // size: 0xC, address: 0x80D5F12C
char * tweak_blend_mode_labels[11]; // size: 0x2C, address: 0x804F227C
unsigned int tweak_blend_mode_values[11]; // size: 0x2C, address: 0x80478180
// Range: 0x8004EFC0 -> 0x8004F758
// this: r31
void xDecalEmitter::add_tweaks(const char * prefix /* r30 */) {
    // Local variables
    char _buffer[128]; // r1+0xA28
    char _buffer[128]; // r1+0x9A8
    char _buffer[128]; // r1+0x928
    char _buffer[128]; // r1+0x8A8
    char _buffer[128]; // r1+0x828
    char _buffer[128]; // r1+0x7A8
    char _buffer[128]; // r1+0x728
    char _buffer[128]; // r1+0x6A8
    char _buffer[128]; // r1+0x628
    char _buffer[128]; // r1+0x5A8
    char _buffer[128]; // r1+0x528
    char _buffer[128]; // r1+0x4A8
    char _buffer[128]; // r1+0x428
    char _buffer[128]; // r1+0x3A8
    char _buffer[128]; // r1+0x328
    char _buffer[128]; // r1+0x2A8
    char _buffer[128]; // r1+0x228
    char _buffer[128]; // r1+0x1A8
    char _buffer[128]; // r1+0x128
    char _buffer[128]; // r1+0xA8

    // References
    // -> static struct tweak_callback cb_config;
    // -> static char * tm_labels[3];
    // -> static struct tweak_callback cb_change_texture;
    // -> unsigned int all_texture_count;
    // -> unsigned int * all_texture_ids;
    // -> const char * * all_texture_labels;
    // -> static signed char init;
    // -> static struct tweak_callback cb_curve;
    // -> static signed char init;
    // -> unsigned int tweak_blend_mode_values[11];
    // -> char * tweak_blend_mode_labels[11];
    // -> static struct tweak_callback cb_ztest;
    // -> static signed char init;
    // -> static signed char init;
}

// Range: 0x8004F758 -> 0x8004F9F4
// this: r31
void xDecalEmitter::add_spiral_tweaks() {
    // Local variables
    const char * prefix; // r30
    char _buffer[128]; // r1+0x408
    char _buffer[128]; // r1+0x388
    char _buffer[128]; // r1+0x308
    char _buffer[128]; // r1+0x288
    char _buffer[128]; // r1+0x208
    char _buffer[128]; // r1+0x188
    char _buffer[128]; // r1+0x108
    char _buffer[128]; // r1+0x88
    char _buffer[128]; // r1+0x8
}

static struct tweak_callback cb_node_time; // size: 0x28, address: 0x804F2430
static signed char init; // size: 0x1, address: 0x80D68F38
// Range: 0x8004F9F4 -> 0x8004FC24
// this: r30
void xDecalEmitter::update_curve_tweaks() {
    // Local variables
    char prefix[128]; // r1+0x1B0
    char * tail; // r28
    struct curve_node * curve; // r29
    unsigned long i; // r31
    char _buffer[128]; // r1+0x130
    char _buffer[128]; // r1+0xB0
    char _buffer[128]; // r1+0x30

    // References
    // -> static struct tweak_callback cb_node_time;
    // -> static signed char init;
}

// Range: 0x8004FC24 -> 0x8004FD2C
// this: r28
void xDecalEmitter::create_test_curve(unsigned long size /* r29 */) {
    // Local variables
    struct curve_node * curve; // r31
    unsigned long i; // r30

    // References
    // -> struct xColor_tag g_WHITE;
}

// Range: 0x8004FD2C -> 0x8004FD84
// this: r30
void xDecalEmitter::move_spiral_to_player() {
    // Local variables
    const struct xMat4x3 & mat; // r31

    // References
    // -> struct xGlobals * xglobals;
}

// Range: 0x8004FD84 -> 0x8004FDC4
void xDecalEmitter::on_change_curve(const struct tweak_info & info /* r30 */) {
    // Local variables
    struct xDecalEmitter & owner; // r31
}

// Range: 0x8004FDC4 -> 0x8004FDFC
void xDecalEmitter::on_change_config(const struct tweak_info & info /* r30 */) {
    // Local variables
    struct xDecalEmitter & owner; // r31
}

// Range: 0x8004FDFC -> 0x8004FF0C
void xDecalEmitter::on_change_node_time(const struct tweak_info & info /* r28 */) {
    // Local variables
    struct xDecalEmitter & owner; // r29
    char * found; // r27
    unsigned long i; // r30
    struct curve_node * curve; // r31
    unsigned long curve_size; // r26
}

// Range: 0x8004FF0C -> 0x8004FF50
void xDecalEmitter::on_change_texture(const struct tweak_info & info /* r30 */) {
    // Local variables
    struct xDecalEmitter & owner; // r31
}

// Range: 0x8004FF50 -> 0x8004FF54
void xDecalEmitter::on_change_ztest() {}

static float sDirDecalMoveUp; // size: 0x4, address: 0x80D5F138
static float sDirDecalDepth; // size: 0x4, address: 0x80D5F13C
static float sDirDecalMinNormY; // size: 0x4, address: 0x80D5F140
static unsigned char DRAW_BOX; // size: 0x1, address: 0x80D68F39
int MAX_FRAMES_TO_SKIP; // size: 0x4, address: 0x80D5F144
// total size: 0x10
class xDecalSimple {
    // Functions
    void Setup(unsigned int textureID);

    // Members
protected:
    int count; // offset 0x0, size 0x4
    unsigned char renderDecal; // offset 0x4, size 0x1
    unsigned char renderOnJSP; // offset 0x5, size 0x1
    unsigned char forceRenderOnBoth; // offset 0x6, size 0x1
    struct RwRaster * raster; // offset 0x8, size 0x4
    int numFrameSkipCount; // offset 0xC, size 0x4
};
// Range: 0x8004FF54 -> 0x80050048
void xDecalSimple::AddStaticTweaks() {
    // Local variables
    const char * prefix; // r31

    // References
    // -> static unsigned char DRAW_BOX;
    // -> static float sDirDecalMinNormY;
    // -> static float sDirDecalDepth;
    // -> static float sDirDecalMoveUp;
}

static char __FUNCTION__[6]; // size: 0x6, address: 0x80D5F148
// Range: 0x80050048 -> 0x8005010C
// this: r31
void xDecalSimple::Setup(unsigned int textureID /* r29 */) {
    // Local variables
    struct RwTexture * texture; // r30

    // References
    // -> int MAX_FRAMES_TO_SKIP;
    // -> static char __FUNCTION__[6];
}

// total size: 0x40
struct xShadowPoly {
    // Members
    struct xVec4 vert[3]; // offset 0x0, size 0x30
    float depth; // offset 0x30, size 0x4
    float pad[3]; // offset 0x34, size 0xC
};
// total size: 0x8C
struct xShadowCache {
    // Members
    struct xVec3 pos; // offset 0x0, size 0xC
    struct xVec2 radius; // offset 0xC, size 0x8
    int entCount; // offset 0x14, size 0x4
    int polyCount; // offset 0x18, size 0x4
    float polyRayDepth[5]; // offset 0x1C, size 0x14
    unsigned short castOnEnt; // offset 0x30, size 0x2
    unsigned short castOnPoly; // offset 0x32, size 0x2
    float minDepth; // offset 0x34, size 0x4
    float maxDepth; // offset 0x38, size 0x4
    unsigned int pad[3]; // offset 0x3C, size 0xC
    struct xEnt * ent[16]; // offset 0x48, size 0x40
    struct xShadowPoly * poly; // offset 0x88, size 0x4
};
// total size: 0x1C
struct zGlobalSettings {
    // Members
    unsigned short AnalogMin; // offset 0x0, size 0x2
    unsigned short AnalogMax; // offset 0x2, size 0x2
    unsigned int TakeDamage; // offset 0x4, size 0x4
    float DamageInvincibility; // offset 0x8, size 0x4
    float Gravity; // offset 0xC, size 0x4
    unsigned char AttractModeDuringGameplay; // offset 0x10, size 0x1
    unsigned int AccelScripts; // offset 0x14, size 0x4
    float CameraFOV; // offset 0x18, size 0x4
};
enum xSndEffect {
    xSndEffect_NONE = 0,
    xSndEffect_CAVE = 1,
    xSndEffect_MAX_TYPES = 2,
};
// total size: 0xC
struct zCheckPoint {
    // Members
    unsigned int initCamID; // offset 0x0, size 0x4
    unsigned char * jsp_active; // offset 0x4, size 0x4
    enum xSndEffect currentEffect; // offset 0x8, size 0x4
};
// total size: 0x0
struct zAssetPickupTable {};
// total size: 0x0
struct zCutsceneMgr {};
enum zGlobalDemoType {
    zDT_NONE = 0,
    zDT_E3 = 1,
    zDT_PUBLICITY = 2,
    zDT_OPM = 3,
    zDT_LAST = 4,
};
// total size: 0x0
class zEconomics {};
// total size: 0x4
class zLightweightSystemBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
enum ezMiniGameTypes {
    MG_GAMETYPE_UNKNOWN = 0,
    MG_GAMETYPE_TYPE1 = 1,
    MG_GAMETYPE_DEFENDTHEBASE = 2,
    MG_GAMETYPE_RATONBALL = 3,
    MG_GAMETYPE_PUFFEROIDS = 4,
    MG_GAMETYPE_GRAPESTOMPER = 5,
    MG_GAMETYPE_CONGALINE = 6,
    MG_GAMETYPE_AVOIDTHESTUFF = 7,
    MG_GAMETYPE_COUNT = 8,
};
// total size: 0x14
struct zMiniGameAsset : public xDynAsset {
    // Members
    unsigned int dispatcherID; // offset 0x10, size 0x4
};
enum eMiniGameState {
    GAMESTATE_GAME_START = 0,
    GAMESTATE_STAGE_START = 1,
    GAMESTATE_GAME_PLAY = 2,
    GAMESTATE_STAGE_END = 3,
    GAMESTATE_GAME_END = 4,
};
// total size: 0x2C
class zMiniGameBase : public xBase {
    // Static members
    static class zMiniGameBase * currentMiniGame; // size: 0x4

    // Members
protected:
    enum ezMiniGameTypes gameType; // offset 0x10, size 0x4
    struct zMiniGameAsset * asset; // offset 0x14, size 0x4
    int playerCount; // offset 0x18, size 0x4
    unsigned char gameDone; // offset 0x1C, size 0x1
    struct xBase * dispatcher; // offset 0x20, size 0x4
    enum eMiniGameState gameState; // offset 0x24, size 0x4
public:
    void * __vptr$; // offset 0x28, size 0x4
};
// total size: 0xC
class zMiniGameManager : public zLightweightSystemBase {
    // Members
    class zMiniGameBase * currentGame; // offset 0x4, size 0x4
    int userSetPlayerCount; // offset 0x8, size 0x4
};
// total size: 0x798
struct zGlobals : public xGlobals {
    // Members
    struct zGlobalSettings settings; // offset 0x6C0, size 0x1C
    struct zCheckPoint checkPoint; // offset 0x6DC, size 0xC
    unsigned int playerTag[9]; // offset 0x6E8, size 0x24
    unsigned char playerLoaded; // offset 0x70C, size 0x1
    unsigned char invertJoystick; // offset 0x70D, size 0x1
    float timeMultiplier; // offset 0x710, size 0x4
    float timeMultiplierTarget; // offset 0x714, size 0x4
    float XPMultiplier; // offset 0x718, size 0x4
    struct zAssetPickupTable * pickupTable; // offset 0x71C, size 0x4
    struct zCutsceneMgr * cmgr; // offset 0x720, size 0x4
    char startDebugMode[32]; // offset 0x724, size 0x20
    unsigned int noMovies; // offset 0x744, size 0x4
    unsigned int boundUpdateTime; // offset 0x748, size 0x4
    unsigned char draw_player_after_fx; // offset 0x74C, size 0x1
    unsigned char bAllowMasterCheats; // offset 0x74D, size 0x1
    unsigned char enableFriendlyFly; // offset 0x74E, size 0x1
    unsigned char stopCurrentConversation; // offset 0x74F, size 0x1
    enum zGlobalDemoType demoType; // offset 0x750, size 0x4
    struct zCutsceneMgr * DisabledCutsceneDoneMgr; // offset 0x754, size 0x4
    struct xVec3 cameraPlayersMidpoint; // offset 0x758, size 0xC
    struct xVec3 cameraLookAt; // offset 0x764, size 0xC
    int cameraAIFocus; // offset 0x770, size 0x4
    enum eBrainType firstPlayerBrainID; // offset 0x774, size 0x4
    class zEconomics * economics; // offset 0x778, size 0x4
    class zMiniGameManager * mgManager; // offset 0x77C, size 0x4
    unsigned char fmvJustFinished; // offset 0x780, size 0x1
    unsigned int initialRemyPowerUp[5]; // offset 0x784, size 0x14
};
struct zGlobals globals; // size: 0x798, address: 0x80D00728
// total size: 0x24
struct xRay3 {
    // Members
    struct xVec3 origin; // offset 0x0, size 0xC
    struct xVec3 dir; // offset 0xC, size 0xC
    float min_t; // offset 0x18, size 0x4
    float max_t; // offset 0x1C, size 0x4
    int flags; // offset 0x20, size 0x4
};
// total size: 0xC
struct xGridIterator {
    // Members
    struct xGridBound * * listhead; // offset 0x0, size 0x4
    struct xGridBound * curcell; // offset 0x4, size 0x4
    unsigned int delfound; // offset 0x8, size 0x4
};
struct xColor_tag g_BLUE; // size: 0x4, address: 0x80D6C68C
// Range: 0x8005010C -> 0x80050384
// this: r30
static unsigned char cb_decal_hits_ent::operator()(struct xEnt & ent /* r31 */) {
    // References
    // -> struct xColor_tag g_BLUE;
    // -> static unsigned char render_hit_tests;
    // -> struct zGlobals globals;
}

// Range: 0x80050384 -> 0x800503E4
static unsigned char check_destructible(struct xEnt & ent /* r3 */) {}

// Range: 0x800503E4 -> 0x80050534
// this: r30
static unsigned char cb_decal_sphere_hits_ent::operator()(struct xEnt & ent /* r31 */) {
    // Local variables
    struct xCollis coll; // r1+0xC

    // References
    // -> struct xColor_tag g_BLUE;
    // -> static unsigned char render_hit_tests;
}


