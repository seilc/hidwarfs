/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zFire.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801600FC -> 0x80166544
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
static float alpha; // size: 0x4, address: 0x80D629F8
static float flame_tall_width; // size: 0x4, address: 0x80D629FC
static float flame_tall_height; // size: 0x4, address: 0x80D62A00
static float flame_short_width; // size: 0x4, address: 0x80D62A04
static float flame_short_height; // size: 0x4, address: 0x80D62A08
static float rand_offset; // size: 0x4, address: 0x80D6A120
static float overlap_max; // size: 0x4, address: 0x80D62A0C
static float overlap_normal; // size: 0x4, address: 0x80D62A10
static float heat_spread_radius; // size: 0x4, address: 0x80D62A14
static float heat_spread_factor; // size: 0x4, address: 0x80D62A18
static float shrink_heat; // size: 0x4, address: 0x80D62A1C
static float hot; // size: 0x4, address: 0x80D62A20
static float card_frame_rate; // size: 0x4, address: 0x80D62A24
static float heat_decay; // size: 0x4, address: 0x80D62A28
static float heat_rate_death; // size: 0x4, address: 0x80D62A2C
static float heat_rate_growth; // size: 0x4, address: 0x80D62A30
static float heat_rate_decay; // size: 0x4, address: 0x80D62A34
static float heat_rate_spread; // size: 0x4, address: 0x80D62A38
static float heat_growth_max; // size: 0x4, address: 0x80D62A3C
static float blend_rate_down; // size: 0x4, address: 0x80D62A40
static float blend_rate_up; // size: 0x4, address: 0x80D62A44
static float ground_dist_max; // size: 0x4, address: 0x80D62A48
static float ground_dist_bias; // size: 0x4, address: 0x80D62A4C
static float ground_max_tilt; // size: 0x4, address: 0x80D62A50
static float clip_scale_radius; // size: 0x4, address: 0x80D62A54
static float reblast_delay; // size: 0x4, address: 0x80D62A58
static int brightness; // size: 0x4, address: 0x80D62A5C
static unsigned int emitter; // size: 0x4, address: 0x80D62A60
static float emit_radius; // size: 0x4, address: 0x80D62A64
static float rate_scale_heat; // size: 0x4, address: 0x80D62A68
static float rate_scale_dheat; // size: 0x4, address: 0x80D62A6C
static float rate_max; // size: 0x4, address: 0x80D62A70
static float emit_width; // size: 0x4, address: 0x80D62A74
static float y_min; // size: 0x4, address: 0x80D62A78
static float y_max; // size: 0x4, address: 0x80D6A124
static float vel_min; // size: 0x4, address: 0x80D62A7C
static float vel_max; // size: 0x4, address: 0x80D62A80
static float life_min; // size: 0x4, address: 0x80D62A84
static float life_max; // size: 0x4, address: 0x80D62A88
static float size_min; // size: 0x4, address: 0x80D62A8C
static float size_max; // size: 0x4, address: 0x80D62A90
static unsigned int texture; // size: 0x4, address: 0x80D6A128
static float emit_rate; // size: 0x4, address: 0x80D62A94
static float emit_radius; // size: 0x4, address: 0x80D62A98
static float size_min; // size: 0x4, address: 0x80D62A9C
static float size_max; // size: 0x4, address: 0x80D62AA0
static float vel_dir_vary; // size: 0x4, address: 0x80D62AA4
static float vel_dir_ymin; // size: 0x4, address: 0x80D62AA8
static float vel_min; // size: 0x4, address: 0x80D62AAC
static float vel_max; // size: 0x4, address: 0x80D62AB0
static float life_min; // size: 0x4, address: 0x80D62AB4
static float life_max; // size: 0x4, address: 0x80D62AB8
static float growth; // size: 0x4, address: 0x80D62ABC
static float rot_vel_min; // size: 0x4, address: 0x80D62AC0
static float rot_vel_max; // size: 0x4, address: 0x80D62AC4
static float intensity; // size: 0x4, address: 0x80D62AC8
static float freq; // size: 0x4, address: 0x80D62ACC
static unsigned char active; // size: 0x1, address: 0x80D6A12C
static unsigned char grounded; // size: 0x1, address: 0x80D62AD0
static float radius; // size: 0x4, address: 0x80D62AD4
static float fuel; // size: 0x4, address: 0x80D62AD8
static unsigned char render_fire; // size: 0x1, address: 0x80D62ADC
static unsigned char render_clipped_tris; // size: 0x1, address: 0x80D6A12D
// Range: 0x801600FC -> 0x8016013C
static void tweak_cos_to_deg(void * value /* r1+0x8 */) {
    // Local variables
    float & f; // r31
}

// Range: 0x8016013C -> 0x8016017C
static void tweak_deg_to_cos(void * value /* r1+0x8 */) {
    // Local variables
    float & f; // r31
}

// Range: 0x8016017C -> 0x8016019C
static void on_refresh_smoke_emitter() {}

// Range: 0x8016019C -> 0x801601BC
static void on_refresh_wisp_system() {}

// Range: 0x801601BC -> 0x801601EC
static void on_change_wisp_vel_dir_vary() {
    // References
    // -> static float vel_dir_vary;
    // -> static float vel_dir_ymin;
}

// total size: 0xC
struct /* @class$734zFire_cpp */ {
    // Members
    int value_def; // offset 0x0, size 0x4
    int value_min; // offset 0x4, size 0x4
    int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$735zFire_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int value_min; // offset 0x4, size 0x4
    unsigned int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$736zFire_cpp */ {
    // Members
    float value_def; // offset 0x0, size 0x4
    float value_min; // offset 0x4, size 0x4
    float value_max; // offset 0x8, size 0x4
};
// total size: 0x1
struct /* @class$737zFire_cpp */ {
    // Members
    unsigned char value_def; // offset 0x0, size 0x1
};
// total size: 0x10
struct /* @class$738zFire_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int labels_size; // offset 0x4, size 0x4
    const char * * labels; // offset 0x8, size 0x4
    void * values; // offset 0xC, size 0x4
};
// total size: 0x8
struct /* @class$739zFire_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
};
// total size: 0x10
struct /* @class$740zFire_cpp */ {
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
        struct /* @class$734zFire_cpp */ {
            // Members
            int value_def; // offset 0x0, size 0x4
            int value_min; // offset 0x4, size 0x4
            int value_max; // offset 0x8, size 0x4
        } int_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$735zFire_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int value_min; // offset 0x4, size 0x4
            unsigned int value_max; // offset 0x8, size 0x4
        } uint_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$736zFire_cpp */ {
            // Members
            float value_def; // offset 0x0, size 0x4
            float value_min; // offset 0x4, size 0x4
            float value_max; // offset 0x8, size 0x4
        } float_context; // offset 0x18, size 0xC
        // total size: 0x1
        struct /* @class$737zFire_cpp */ {
            // Members
            unsigned char value_def; // offset 0x0, size 0x1
        } bool_context; // offset 0x18, size 0x1
        // total size: 0x10
        struct /* @class$738zFire_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int labels_size; // offset 0x4, size 0x4
            const char * * labels; // offset 0x8, size 0x4
            void * values; // offset 0xC, size 0x4
        } select_context; // offset 0x18, size 0x10
        // total size: 0x8
        struct /* @class$739zFire_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int mask; // offset 0x4, size 0x4
        } flag_context; // offset 0x18, size 0x8
        // total size: 0x10
        struct /* @class$740zFire_cpp */ {
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
static struct tweak_callback cb_deg_cos; // size: 0x28, address: 0x804A7C18
static struct tweak_callback cb_refresh_smoke_emitter; // size: 0x28, address: 0x804A7C40
static struct tweak_callback cb_refresh_wisp_system; // size: 0x28, address: 0x804A7C68
static struct tweak_callback cb_wisp_vel_dir_vary; // size: 0x28, address: 0x804A7C90
struct tweak_callback cb_tweak_convert_degrees; // size: 0x28, address: 0x80478090
// Range: 0x801601EC -> 0x80160E24
static void add_tweaks(const char * prefix /* r31 */) {
    // Local variables
    const char * * smoke_emitter_labels; // r1+0x1C
    const unsigned int * smoke_emitter_ids; // r1+0x18
    unsigned int smoke_emitters; // r30
    const char * * texture_labels; // r1+0x14
    const unsigned int * texture_ids; // r1+0x10
    unsigned int textures; // r29

    // References
    // -> static unsigned char render_clipped_tris;
    // -> static unsigned char render_fire;
    // -> static float fuel;
    // -> static float radius;
    // -> static unsigned char grounded;
    // -> static unsigned char active;
    // -> static float freq;
    // -> static float intensity;
    // -> struct tweak_callback cb_tweak_convert_degrees;
    // -> static float rot_vel_max;
    // -> static float rot_vel_min;
    // -> static float growth;
    // -> static float life_max;
    // -> static float life_min;
    // -> static float vel_max;
    // -> static float vel_min;
    // -> static struct tweak_callback cb_wisp_vel_dir_vary;
    // -> static float vel_dir_vary;
    // -> static float size_max;
    // -> static float size_min;
    // -> static float emit_radius;
    // -> static float emit_rate;
    // -> static struct tweak_callback cb_refresh_wisp_system;
    // -> static unsigned int texture;
    // -> static float size_max;
    // -> static float size_min;
    // -> static float life_max;
    // -> static float life_min;
    // -> static float vel_max;
    // -> static float vel_min;
    // -> static float y_max;
    // -> static float y_min;
    // -> static float emit_width;
    // -> static float rate_max;
    // -> static float rate_scale_dheat;
    // -> static float rate_scale_heat;
    // -> static float emit_radius;
    // -> static struct tweak_callback cb_refresh_smoke_emitter;
    // -> static unsigned int emitter;
    // -> static int brightness;
    // -> static float reblast_delay;
    // -> static float clip_scale_radius;
    // -> static struct tweak_callback cb_deg_cos;
    // -> static float ground_max_tilt;
    // -> static float ground_dist_bias;
    // -> static float ground_dist_max;
    // -> static float blend_rate_up;
    // -> static float blend_rate_down;
    // -> static float heat_growth_max;
    // -> static float heat_rate_spread;
    // -> static float heat_rate_decay;
    // -> static float heat_rate_growth;
    // -> static float heat_rate_death;
    // -> static float heat_decay;
    // -> static float card_frame_rate;
    // -> static float hot;
    // -> static float shrink_heat;
    // -> static float heat_spread_factor;
    // -> static float heat_spread_radius;
    // -> static float overlap_normal;
    // -> static float overlap_max;
    // -> static float rand_offset;
    // -> static float flame_short_height;
    // -> static float flame_short_width;
    // -> static float flame_tall_height;
    // -> static float flame_tall_width;
    // -> static float alpha;
}

unsigned char _enabled; // size: 0x1, address: 0x80D6A12E
unsigned char frame_changed; // size: 0x1, address: 0x80D6A12F
struct zFlame * flames; // size: 0x4, address: 0x80D6A130
unsigned int flames_size; // size: 0x4, address: 0x80D6A134
unsigned int flames_used; // size: 0x4, address: 0x80D6A138
// total size: 0x1C
struct card_info {
    // Members
    unsigned int textures; // offset 0x0, size 0x4
    const char * format; // offset 0x4, size 0x4
    int start_index; // offset 0x8, size 0x4
    int rows; // offset 0xC, size 0x4
    int cols; // offset 0x10, size 0x4
    float bias_v0; // offset 0x14, size 0x4
    float bias_v1; // offset 0x18, size 0x4
};
static struct card_info short_card_info; // size: 0x1C, address: 0x804A7CB8
static struct card_info tall_card_info; // size: 0x1C, address: 0x804A7CD4
static struct RwTexture * face_texture; // size: 0x4, address: 0x80D6A13C
static struct RwTexture * floor_texture; // size: 0x4, address: 0x80D6A140
static float anim_frame_time; // size: 0x4, address: 0x80D6A144
static int anim_frame; // size: 0x4, address: 0x80D6A148
static struct zFlame * im_flames[64]; // size: 0x100, address: 0x80CF1BD0
static int im_flames_size; // size: 0x4, address: 0x80D6A14C
static int last_brightness; // size: 0x4, address: 0x80D6A150
static int last_background_glow; // size: 0x4, address: 0x80D6A154
// total size: 0x0
struct asset_type {};
// total size: 0x0
struct debug_info {};
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
// total size: 0x50
struct zSmokeSphereVolume {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
    float size_min; // offset 0x10, size 0x4
    float size_max; // offset 0x14, size 0x4
    float life_min; // offset 0x18, size 0x4
    float life_max; // offset 0x1C, size 0x4
    float vel_min; // offset 0x20, size 0x4
    float vel_max; // offset 0x24, size 0x4
    float growth; // offset 0x28, size 0x4
    struct xVec3 vel_dir; // offset 0x2C, size 0xC
    float vel_dir_vary; // offset 0x38, size 0x4
    float wind; // offset 0x3C, size 0x4
    struct xColor_tag color_birth; // offset 0x40, size 0x4
    struct xColor_tag color_death; // offset 0x44, size 0x4
    int texture_columns; // offset 0x48, size 0x4
    int texture_rows; // offset 0x4C, size 0x4
};
// total size: 0x10
struct xDynAsset : public xBaseAsset {
    // Members
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
// total size: 0xA0
class zSmokeEmitter : private xBase {
    // Members
public:
    int system_id; // offset 0x10, size 0x4
private:
    struct asset_type * asset; // offset 0x14, size 0x4
    struct xMat4x3 emit_mat; // offset 0x20, size 0x40
    float emitted; // offset 0x60, size 0x4
    int flags; // offset 0x64, size 0x4
    struct xVec3 vel_dir; // offset 0x68, size 0xC
    int max_frame; // offset 0x74, size 0x4
    float du; // offset 0x78, size 0x4
    float dv; // offset 0x7C, size 0x4
    float age_rate_min; // offset 0x80, size 0x4
    float age_rate_range; // offset 0x84, size 0x4
    float dr; // offset 0x88, size 0x4
    float dg; // offset 0x8C, size 0x4
    float db; // offset 0x90, size 0x4
    float da; // offset 0x94, size 0x4
    struct debug_info * debug; // offset 0x98, size 0x4
};
static class zSmokeEmitter * smoke_emitter; // size: 0x4, address: 0x80D6A158
static struct RwTexture * wisp_texture; // size: 0x4, address: 0x80D6A15C
static int wisp_system_id; // size: 0x4, address: 0x80D6A160
static int spawn_explosion_type; // size: 0x4, address: 0x80D6A164
// Range: 0x80160E24 -> 0x80160E6C
static void refresh_smoke_emitter() {
    // References
    // -> static class zSmokeEmitter * smoke_emitter;
    // -> static unsigned int emitter;
}

// Range: 0x80160E6C -> 0x80160EB8
static struct zFlame * alloc_flame() {
    // Local variables
    struct zFlame & flame; // r31

    // References
    // -> unsigned int flames_used;
    // -> struct zFlame * flames;
    // -> unsigned int flames_size;
}

// Range: 0x80160EB8 -> 0x80160F2C
static void free_flame(struct zFlame & flame /* r31 */) {
    // Local variables
    struct zFlame * moved; // r30

    // References
    // -> unsigned int flames_used;
    // -> struct zFlame * flames;
}

// Range: 0x80161080 -> 0x80161150
static void spread_heat(float dt /* f1 */) {
    // Local variables
    float spread_delta; // f31
    struct zFlame * flame; // r31
    struct zFlame * end_flame; // r29
    float spread; // f30
    struct zFlame * * n; // r30
    struct zFlame * * endn; // r28

    // References
    // -> unsigned int flames_used;
    // -> struct zFlame * flames;
    // -> static float heat_rate_spread;
}

union entry_node {
    union entry_node * next_free_node; // offset 0x0, size 0x4
    unsigned short next; // offset 0x0, size 0x2
    unsigned short entry; // offset 0x2, size 0x2
};
union cell {
    union cell * next_free_cell; // offset 0x0, size 0x4
    unsigned short parent; // offset 0x0, size 0x2
    unsigned short children; // offset 0x2, size 0x2
    unsigned short entries; // offset 0x4, size 0x2
    unsigned char cid; // offset 0x6, size 0x1
    unsigned char level; // offset 0x7, size 0x1
    unsigned short xcode; // offset 0x8, size 0x2
    unsigned short ycode; // offset 0xA, size 0x2
};
// total size: 0xD4
class xSpacePartitionTree2D {
    // Members
public:
    int total_cells_used; // offset 0x0, size 0x4
private:
    struct xVec2 origin; // offset 0x4, size 0x8
    struct xVec2 size; // offset 0xC, size 0x8
    float cell_size[9]; // offset 0x14, size 0x24
    float cell_isize[9]; // offset 0x38, size 0x24
    float cell_frac[9]; // offset 0x5C, size 0x24
    int max_depth; // offset 0x80, size 0x4
    float ilogdepth; // offset 0x84, size 0x4
    int grid_size_x; // offset 0x88, size 0x4
    int grid_shift_x; // offset 0x8C, size 0x4
    int grid_mask_x; // offset 0x90, size 0x4
    int grid_size_y; // offset 0x94, size 0x4
    int grid_shift_y; // offset 0x98, size 0x4
    int grid_mask_y; // offset 0x9C, size 0x4
    unsigned short current_searchid; // offset 0xA0, size 0x2
    union entry_data * free_entries; // offset 0xA4, size 0x4
    union entry_node * free_nodes; // offset 0xA8, size 0x4
    union cell * free_cells; // offset 0xAC, size 0x4
    int free_cells_size; // offset 0xB0, size 0x4
    int safety_free_cells_size; // offset 0xB4, size 0x4
    union cell * grid; // offset 0xB8, size 0x4
    union entry_data * entry_buffer; // offset 0xBC, size 0x4
    int entry_buffer_size; // offset 0xC0, size 0x4
    union entry_node * node_buffer; // offset 0xC4, size 0x4
    int node_buffer_size; // offset 0xC8, size 0x4
    union cell * cell_buffer; // offset 0xCC, size 0x4
    int cell_buffer_size; // offset 0xD0, size 0x4
};
class xSpacePartitionTree2D space_tree; // size: 0xD4, address: 0x80BA9010
// Range: 0x80161150 -> 0x8016123C
static void update_flames(float dt /* f31 */) {
    // Local variables
    float heat_decay; // f30
    struct zFlame * flame; // r31
    struct zFlame * end_flame; // r30

    // References
    // -> class xSpacePartitionTree2D space_tree;
    // -> unsigned char frame_changed;
    // -> unsigned int flames_used;
    // -> struct zFlame * flames;
    // -> static float heat_decay;
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
// total size: 0x0
struct warper {};
// total size: 0xB0
struct zFlame {
    // Functions
    float get_damage() const;

    unsigned char hits_bound(const struct xBound & bound) const;

    void get_knockback(struct xVec3 & knockBackDir, float & knockBackAmt, const struct xVec3 & entPos) const;

    void get_bound(struct xBound & bound) const;

    void refuel(float fuel, int flags);

    void update(float dt, float heat_decay);

    void update_effects(float dt);

    unsigned char create(const struct spawn_data & info);

    void destroy();

    float absorb_heat(float dh);

    void emit_wisps(float dt);

    void emit_smoke(float dheat, float dt);

    void unlink_nearby();

    void relink_nearby(struct zFlame * old_addr);

    void refresh_nearby();

    // Members
    unsigned int flags; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float fuel; // offset 0x8, size 0x4
    float heat; // offset 0xC, size 0x4
    struct xMat4x3 mat; // offset 0x10, size 0x40
    float heat_absorb; // offset 0x50, size 0x4
    float heat_nearby; // offset 0x54, size 0x4
    float effects_heat; // offset 0x58, size 0x4
    float alpha; // offset 0x5C, size 0x4
    struct xVec2 scale; // offset 0x60, size 0x8
    float smoke_emitted; // offset 0x68, size 0x4
    float wisps_emitted; // offset 0x6C, size 0x4
    struct warper * warp; // offset 0x70, size 0x4
    struct property_set * props; // offset 0x74, size 0x4
    struct handle h; // offset 0x78, size 0x4
    unsigned char nearby_size; // offset 0x7C, size 0x1
    unsigned char pad1; // offset 0x7D, size 0x1
    unsigned char face_frame; // offset 0x7E, size 0x1
    unsigned char floor_frame; // offset 0x7F, size 0x1
    struct zFlame * nearby[6]; // offset 0x80, size 0x18
    enum xSndHandle sound; // offset 0x98, size 0x4
    signed char face_flip; // offset 0x9C, size 0x1
    signed char floor_flip; // offset 0x9D, size 0x1
    unsigned char pad2; // offset 0x9E, size 0x1
    unsigned char pad3; // offset 0x9F, size 0x1
    struct xVec3 driverOffset; // offset 0xA0, size 0xC
    unsigned int pad4; // offset 0xAC, size 0x4
};
// Range: 0x8016123C -> 0x801612A4
static void apply_heat_scale(struct zFlame & flame /* r3 */) {
    // References
    // -> static float flame_tall_height;
    // -> static float flame_tall_width;
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
struct /* @class$1023zFire_cpp */ {
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
    struct /* @class$1023zFire_cpp */ {
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
// total size: 0x40
struct wisp_particle {
    // Members
    struct xVec3 loc; // offset 0x0, size 0xC
    float size; // offset 0xC, size 0x4
    struct xVec3 vel; // offset 0x10, size 0xC
    float life; // offset 0x1C, size 0x4
    float dsize; // offset 0x20, size 0x4
    float alpha; // offset 0x24, size 0x4
    float dalpha; // offset 0x28, size 0x4
    float pad1; // offset 0x2C, size 0x4
    float rot; // offset 0x30, size 0x4
    float drot; // offset 0x34, size 0x4
    float pad2; // offset 0x38, size 0x4
    float pad3; // offset 0x3C, size 0x4
};
// total size: 0x10
struct RwSphere {
    // Members
    struct RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// Range: 0x801612A4 -> 0x801614CC
static int update_wisp_particles(unsigned char * mem /* r27 */, int count /* r1+0x8 */, struct ptank_pool & apool /* r1+0xC */, float dt /* f31 */) {
    // Local variables
    struct ptank_pool__pos_color_size_rot & pool; // r30
    float glow; // f30
    struct wisp_particle * p; // r31
    struct wisp_particle * end; // r29
    struct RwSphere worldsph; // r1+0x10
    unsigned char intensity; // r28

    // References
    // -> struct xGlobals * xglobals;
    // -> static int brightness;
}

// total size: 0x40
struct ptank_pool__pos_color_size_rot : public ptank_pool {
    // Members
    struct xVec3 * pos; // offset 0x20, size 0x4
    struct xColor_tag * color; // offset 0x24, size 0x4
    struct xVec2 * size; // offset 0x28, size 0x4
    float * rot; // offset 0x2C, size 0x4
    int stride_pos; // offset 0x30, size 0x4
    int stride_color; // offset 0x34, size 0x4
    int stride_size; // offset 0x38, size 0x4
    int stride_rot; // offset 0x3C, size 0x4
};
// total size: 0x8
struct xVec2 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
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
// total size: 0x28
struct xParticleBatchSystem {
    // Members
    enum ptank_group_type pool_type; // offset 0x0, size 0x4
    struct render_state rs; // offset 0x4, size 0x10
    unsigned int order_group; // offset 0x14, size 0x4
    int order_index; // offset 0x18, size 0x4
    int stride; // offset 0x1C, size 0x4
    int (* update)(unsigned char *, int, struct ptank_pool &, float, void *); // offset 0x20, size 0x4
    void * context; // offset 0x24, size 0x4
};
// Range: 0x801614CC -> 0x8016158C
static void create_wisp_system() {
    // Local variables
    struct xParticleBatchSystem system; // r1+0x8

    // References
    // -> static int wisp_system_id;
    // -> static struct RwTexture * wisp_texture;
    // -> static unsigned int texture;
}

// Range: 0x8016158C -> 0x80161694
static void refresh_wisp_system() {
    // Local variables
    float base_alpha; // f31
    struct xParticleBatchSystem system; // r1+0x8

    // References
    // -> static int wisp_system_id;
    // -> static struct RwTexture * wisp_texture;
    // -> static int brightness;
    // -> static unsigned int texture;
}

// Range: 0x80161694 -> 0x80161768
static void tune_textures() {
    // Local variables
    int min_alpha; // r31
    float base_alpha; // f31

    // References
    // -> static int last_background_glow;
    // -> static int brightness;
    // -> static int last_brightness;
    // -> static struct RwTexture * wisp_texture;
    // -> static struct RwTexture * floor_texture;
    // -> static struct RwTexture * face_texture;
}

// Range: 0x80161768 -> 0x80161794
static void emit_spawn_blast(const struct xVec3 & center /* r1+0x8 */) {
    // References
    // -> static int spawn_explosion_type;
}

// Range: 0x80161794 -> 0x8016182C
static void add_status_tweaks() {
    // Local variables
    const char * prefix; // r31

    // References
    // -> unsigned int flames_used;
    // -> unsigned int flames_size;
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
// total size: 0x4
struct RwRGBA {
    // Members
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
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
// total size: 0x4
struct /* @class$1327zFire_cpp */ {
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
    struct /* @class$1327zFire_cpp */ {
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
union /* @class$1010zFire_cpp */ {
    struct xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
    unsigned int rawIdx; // offset 0x0, size 0x4
    struct RwV3d * p; // offset 0x0, size 0x4
};
// total size: 0x8
struct xClumpCollBSPTriangle {
    // Members
    union /* @class$1010zFire_cpp */ {
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
// total size: 0xC
struct /* @class$1465zFire_cpp */ {
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
        struct /* @class$1465zFire_cpp */ {
            // Members
            float t; // offset 0x0, size 0x4
            float u; // offset 0x4, size 0x4
            float v; // offset 0x8, size 0x4
        } tuv; // offset 0x48, size 0xC
        struct tri_data tri; // offset 0x48, size 0xC
    };
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
// total size: 0x60
struct property_set {
    // Members
    float damage; // offset 0x0, size 0x4
    float knockback; // offset 0x4, size 0x4
    float heat_magnify; // offset 0x8, size 0x4
    float height; // offset 0xC, size 0x4
    struct xEnt * driver; // offset 0x10, size 0x4
    struct xBound damageBound; // offset 0x14, size 0x4C
};
static struct property_set debug_props; // size: 0x60, address: 0x8051EB98
// total size: 0x30
struct spawn_data {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    struct xVec3 loc; // offset 0x4, size 0xC
    struct xVec3 up; // offset 0x10, size 0xC
    float radius; // offset 0x1C, size 0x4
    float fuel; // offset 0x20, size 0x4
    float heat; // offset 0x24, size 0x4
    float heat_absorb; // offset 0x28, size 0x4
    struct property_set * props; // offset 0x2C, size 0x4
};
// Range: 0x8016182C -> 0x8016194C
static void debug_update() {
    // Local variables
    struct spawn_data sd; // r1+0x8

    // References
    // -> static unsigned char grounded;
    // -> static float fuel;
    // -> static float radius;
    // -> struct xGlobals * xglobals;
    // -> static unsigned char active;
}

// total size: 0xDC
struct zEnt : public xEnt {
    // Members
    struct xAnimTable * atbl; // offset 0xD8, size 0x4
};
enum xCollideSphereHitType {
    exCOLLIDESPHEREHITTYPE_UNKNOWN = 0,
    exCOLLIDESPHEREHITTYPE_INTERIOR = 1,
    exCOLLIDESPHEREHITTYPE_EDGE = 2,
    exCOLLIDESPHEREHITTYPE_VERTEX = 3,
};
// total size: 0x10
class xPlane {
    // Members
public:
    struct xVec3 norm; // offset 0x0, size 0xC
    float d; // offset 0xC, size 0x4
};
// total size: 0x5C
struct SphereCollisionResults {
    // Members
    struct xVec3 tested_dir; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    int collisionFlags; // offset 0x10, size 0x4
    struct xVec3 contact; // offset 0x14, size 0xC
    struct xVec3 normal; // offset 0x20, size 0xC
    float collidingSphereRadius; // offset 0x2C, size 0x4
    unsigned int oid; // offset 0x30, size 0x4
    void * optr; // offset 0x34, size 0x4
    struct xModelInstance * mptr; // offset 0x38, size 0x4
    struct xJSPHeader * jsp; // offset 0x3C, size 0x4
    struct xClumpCollBSPTriangle * bspTriangle; // offset 0x40, size 0x4
    enum xCollideSphereHitType hitTriangleType; // offset 0x44, size 0x4
    class xPlane triPlane; // offset 0x48, size 0x10
    int sphereIndex; // offset 0x58, size 0x4
};
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
struct /* @class$2135zFire_cpp */ {
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
// total size: 0x0
struct xFXRibbon {};
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
    struct /* @class$2135zFire_cpp */ {
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
static char __FUNCTION__[12]; // size: 0xC, address: 0x80D62ADD
unsigned int gActiveHeap; // size: 0x4, address: 0x80D692A8
// Range: 0x8016194C -> 0x80161AE0
void scene_enter() {
    // Local variables
    char buffer[128]; // r1+0x8

    // References
    // -> static int last_background_glow;
    // -> static int last_brightness;
    // -> static char __FUNCTION__[12];
    // -> static struct RwTexture * floor_texture;
    // -> static struct RwTexture * face_texture;
    // -> static struct card_info short_card_info;
    // -> static struct card_info tall_card_info;
    // -> static int anim_frame;
    // -> static float anim_frame_time;
    // -> unsigned int flames_size;
    // -> unsigned int gActiveHeap;
    // -> struct zFlame * flames;
    // -> unsigned int flames_used;
    // -> unsigned char _enabled;
    // -> static int im_flames_size;
}

// Range: 0x80161AE0 -> 0x80161B18
void scene_exit() {
    // References
    // -> unsigned char _enabled;
}

// total size: 0x8
struct substr {
    // Members
    const char * text; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
static char __FUNCTION__[6]; // size: 0x6, address: 0x80D62AE9
// Range: 0x80161B18 -> 0x80161BB8
void setup() {
    // References
    // -> static char __FUNCTION__[6];
    // -> static int spawn_explosion_type;
    // -> unsigned char _enabled;
}

// Range: 0x80161BB8 -> 0x80161BD0
void reset() {
    // References
    // -> unsigned int flames_used;
    // -> unsigned char _enabled;
}

static struct property_set debug_props; // size: 0x60, address: 0x8051EBF8
// total size: 0x2
struct zCheats {
    // Members
    unsigned char halfDamage : 1; // offset 0x0, size 0x1
    unsigned char incredipower : 1; // offset 0x0, size 0x1
    unsigned char chronos : 1; // offset 0x0, size 0x1
    unsigned char noFriction : 1; // offset 0x0, size 0x1
    unsigned char scaleHead : 1; // offset 0x0, size 0x1
    unsigned char firePlants : 1; // offset 0x0, size 0x1
    unsigned char discoMode : 1; // offset 0x0, size 0x1
    unsigned char flamingFeet : 1; // offset 0x0, size 0x1
    unsigned char blurry : 1; // offset 0x1, size 0x1
    unsigned char ethereal : 1; // offset 0x1, size 0x1
    unsigned char glowingSwimmer : 1; // offset 0x1, size 0x1
    unsigned char bigMouth : 1; // offset 0x1, size 0x1
    unsigned char bigCritters : 1; // offset 0x1, size 0x1
    unsigned char makeHarder : 1; // offset 0x1, size 0x1
    unsigned char makeEasier : 1; // offset 0x1, size 0x1
};
struct zCheats gCheats; // size: 0x2, address: 0x80D69E88
// Range: 0x80161BD0 -> 0x80161D68
void update(float dt /* f31 */) {
    // Local variables
    struct spawn_data sd; // r1+0x8

    // References
    // -> unsigned char frame_changed;
    // -> static float anim_frame_time;
    // -> static int anim_frame;
    // -> static float card_frame_rate;
    // -> static float fuel;
    // -> static float radius;
    // -> struct xGlobals * xglobals;
    // -> struct zCheats gCheats;
    // -> unsigned char _enabled;
}

static unsigned char always_render_im; // size: 0x1, address: 0x80D6A168
static signed char init; // size: 0x1, address: 0x80D6A169
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
// total size: 0x10
struct xVec4 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
// Range: 0x80161D68 -> 0x8016264C
void pre_render() {
    // Local variables
    int rs_flags; // r28
    int min_glow; // r24
    struct ptank_pool__color_mat_uv2 face_pool; // r1+0xD8
    struct ptank_pool__color_mat_uv2 floor_pool; // r1+0xA0
    const struct xMat4x3 & cam_mat; // r30
    float Cx; // r1+0x7C
    float Cy; // r1+0x78
    float Cz; // r1+0x74
    struct zFlame * flame; // r31
    struct zFlame * end_flame; // r23
    float Px; // f23
    float Py; // f22
    float Pz; // f21
    float PCx; // f26
    float PCy; // f20
    float PCz; // f25
    float effect_radius; // f19
    float xzdist2; // r1+0x70
    float min_xzdist2; // r1+0x6C
    struct xVec4 effect_loc; // r1+0x90
    struct RwSphere worldsph; // r1+0x80
    int intensity; // r27
    int alpha; // r26
    unsigned int color; // r25
    int uvindex; // r29
    float u; // f31
    float v; // f30
    float Ux; // f18
    float Uy; // r1+0x68
    float Uz; // r1+0x64
    float PCxUx; // r1+0x60
    float PCxUy; // r1+0x5C
    float PCxUz; // r1+0x58
    float PCxUmag2; // r1+0x54
    float Rscale; // r1+0x50
    float Rx; // f29
    float Ry; // f28
    float Rz; // f27
    float width; // r1+0x4C
    float height; // r1+0x48
    float face_width; // r1+0x44
    float floor_width; // f24
    float floor_height; // r1+0x40
    float PCxRx; // r1+0x3C
    float PCxRy; // r1+0x38
    float PCxRz; // r1+0x34
    float PCxRmag2; // r1+0x30
    float Vscale; // r1+0x2C
    float Vx; // r1+0x28
    float Vy; // r1+0x24
    float Vz; // r1+0x20
    float Wx; // r1+0x1C
    float Wy; // r1+0x18
    float Wz; // r1+0x14

    // References
    // -> static int anim_frame;
    // -> static float flame_tall_width;
    // -> static float flame_short_height;
    // -> static float flame_short_width;
    // -> static int brightness;
    // -> struct xGlobals * xglobals;
    // -> static int im_flames_size;
    // -> static struct zFlame * im_flames[64];
    // -> static unsigned char always_render_im;
    // -> static signed char init;
    // -> static float clip_scale_radius;
    // -> unsigned int flames_used;
    // -> struct zFlame * flames;
    // -> struct zGlobals globals;
    // -> static struct RwTexture * floor_texture;
    // -> static struct RwTexture * face_texture;
    // -> static unsigned char render_fire;
    // -> unsigned char _enabled;
}

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
static char __FUNCTION__[7]; // size: 0x7, address: 0x80D62AEF
enum xIMFormat {
    XIM_TRISTRIP = 4,
    XIM_TRILIST = 3,
};
// total size: 0x18
struct xIMLockContext {
    // Members
    void * data; // offset 0x0, size 0x4
    struct xVec3 * pos; // offset 0x4, size 0x4
    struct xVec2 * uv; // offset 0x8, size 0x4
    struct xColor_tag * color; // offset 0xC, size 0x4
    int vertCount; // offset 0x10, size 0x4
    enum xIMFormat format; // offset 0x14, size 0x4
};
// Range: 0x8016264C -> 0x801635B4
void render() {
    // Local variables
    int min_alpha; // r1+0x74
    const struct xMat4x3 & cam_mat; // r18
    int face_verts; // r1+0x70
    struct xIMLockContext face_lock; // r1+0x9C
    struct xIMLockContext floor_lock; // r1+0x84
    int floor_verts; // r23
    int i; // r26
    struct zFlame * flame; // r17
    struct xVec3 * face_pos; // r25
    struct xVec3 * floor_pos; // r30
    struct xVec2 * face_uv; // r24
    struct xVec2 * floor_uv; // r27
    unsigned int * face_color; // r28
    unsigned int * floor_color; // r29
    unsigned char firstVert; // r21
    float Cx; // r1+0x6C
    float Cy; // r1+0x68
    float Cz; // r1+0x64
    struct xVec3 lastPos; // r1+0x78
    struct zFlame * flame; // r31
    float s; // f20
    float Ex; // f31
    float Ey; // f30
    float Ez; // f29
    float Px; // f28
    float Py; // f27
    float Pz; // f26
    float CPx; // r1+0x60
    float CPy; // r1+0x5C
    float CPz; // r1+0x58
    float Ux; // r1+0x54
    float Uy; // r1+0x50
    float Uz; // r1+0x4C
    float UxCPx; // r1+0x48
    float UxCPy; // r1+0x44
    float UxCPz; // r1+0x40
    float UxCPmag2; // r1+0x3C
    float Rscale; // r1+0x38
    float Rx; // r1+0x34
    float Ry; // r1+0x30
    float Rz; // r1+0x2C
    float h; // r1+0x28
    float Vx; // f25
    float Vy; // f24
    float Vz; // f23
    float Vscale; // f21
    float Escale; // r1+0x24
    struct zFlame * flame; // r20
    int uvindex; // r1+0x20
    float u0; // f19
    float v0; // f22
    float u1; // f18
    float v1; // r1+0x1C
    struct zFlame * flame; // r19
    int intensity; // r1+0x18
    int alpha; // r1+0x14
    unsigned int color; // r22

    // References
    // -> static int brightness;
    // -> static struct RwTexture * floor_texture;
    // -> static struct RwTexture * face_texture;
    // -> static char __FUNCTION__[7];
    // -> static int im_flames_size;
    // -> static struct zFlame * im_flames[64];
    // -> static int anim_frame;
    // -> static float flame_tall_width;
    // -> static float flame_short_height;
    // -> static float flame_short_width;
    // -> struct zGlobals globals;
    // -> static unsigned char render_fire;
    // -> unsigned char _enabled;
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
// total size: 0x10
struct xSphere {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
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
// total size: 0x24
struct xRay3 {
    // Members
    struct xVec3 origin; // offset 0x0, size 0xC
    struct xVec3 dir; // offset 0xC, size 0xC
    float min_t; // offset 0x18, size 0x4
    float max_t; // offset 0x1C, size 0x4
    int flags; // offset 0x20, size 0x4
};
// total size: 0x8
struct cb_ss {
    // Functions
    static cb_ss(struct xSweptSphere & sws, struct xRay3 & ray);

    static unsigned char operator()(struct xEnt & ent);

    // Members
    struct xSweptSphere & sws; // offset 0x0, size 0x4
    struct xRay3 & ray; // offset 0x4, size 0x4
};
// total size: 0x8
struct cb_sss {
    // Functions
    static cb_sss(struct xSweptSphere & sws, struct xRay3 & ray);

    static unsigned char operator()(struct xEnt & ent);

    // Members
    struct xSweptSphere & sws; // offset 0x0, size 0x4
    struct xRay3 & ray; // offset 0x4, size 0x4
};
// Range: 0x801635B4 -> 0x80163714
static unsigned char collide_swept_sphere_statics(struct xSweptSphere & sws /* r31 */, unsigned char check_destructibles /* r1+0x8 */) {
    // Local variables
    struct xScene * scene; // r30
    struct xBound bound; // r1+0x40
    struct xRay3 ray; // r1+0x1C
    struct cb_ss cb; // r1+0x14
    struct cb_sss cb; // r1+0xC

    // References
    // -> struct xGrid colls_oso_grid;
    // -> struct xGrid colls_grid;
    // -> struct zGlobals globals;
}

// Range: 0x80163714 -> 0x80163720
// this: r3
static cb_sss::cb_sss(struct xSweptSphere & sws /* r4 */, struct xRay3 & ray /* r5 */) {}

// Range: 0x80163720 -> 0x8016372C
// this: r3
static cb_ss::cb_ss(struct xSweptSphere & sws /* r4 */, struct xRay3 & ray /* r5 */) {}

static char __FUNCTION__[5]; // size: 0x5, address: 0x80D62AF6
union entry_data {
    union entry_data * next_free_entry; // offset 0x0, size 0x4
    void * value; // offset 0x0, size 0x4
    int type; // offset 0x4, size 0x4
    unsigned short searchid; // offset 0x8, size 0x2
    unsigned short owner_size; // offset 0xA, size 0x2
    unsigned short owner[4]; // offset 0xC, size 0x8
};
// total size: 0x4
struct handle {
    // Members
    union entry_data * node; // offset 0x0, size 0x4
};
// total size: 0xCC
struct xSweptSphere {
    // Members
    unsigned char detect_initial_penetration; // offset 0x0, size 0x1
    unsigned char init_collide; // offset 0x1, size 0x1
    struct xVec3 start; // offset 0x4, size 0xC
    struct xVec3 end; // offset 0x10, size 0xC
    float radius; // offset 0x1C, size 0x4
    unsigned short xEntFilterFlags; // offset 0x20, size 0x2
    float dist; // offset 0x24, size 0x4
    struct xVec3 dir; // offset 0x28, size 0xC
    struct xBox box; // offset 0x34, size 0x18
    struct xQCData qcd; // offset 0x4C, size 0x20
    float curdist; // offset 0x6C, size 0x4
    unsigned int oid; // offset 0x70, size 0x4
    void * optr; // offset 0x74, size 0x4
    struct xModelInstance * mptr; // offset 0x78, size 0x4
    struct xVec3 worldContact; // offset 0x7C, size 0xC
    int hitIt; // offset 0x88, size 0x4
    struct xVec3 worldPos; // offset 0x8C, size 0xC
    struct xVec3 worldNormal; // offset 0x98, size 0xC
    struct xVec3 worldTangent; // offset 0xA4, size 0xC
    struct xJSPHeader * jsp; // offset 0xB0, size 0x4
    struct xClumpCollBSPTriangle * bspTriangle; // offset 0xB4, size 0x4
    enum xCollideSphereHitType type; // offset 0xB8, size 0x4
    class xPlane tri_plane; // offset 0xBC, size 0x10
};
// Range: 0x801637A0 -> 0x80163CAC
struct handle emit(const struct spawn_data & params /* r26 */, unsigned char * success /* r28 */) {
    // Local variables
    struct handle h; // r1+0x10
    struct spawn_data d; // r1+0x5C
    float overlap_radius; // f31
    struct zFlame * nearbies[6]; // r1+0x44
    int nearbies_size; // r25
    struct zFlame * * nearby; // r30
    struct zFlame * * end_nearby; // r23
    struct zFlame * nearby; // r1+0xC
    struct xVec3 start; // r1+0x20
    struct xVec3 end; // r1+0x14
    struct xSweptSphere sws; // r1+0x8C
    float iy2; // f28
    float ixz; // f30
    float overlap_radius; // f29
    struct zFlame * nearbies[6]; // r1+0x2C
    int nearbies_size; // r24
    struct zFlame * * nearby; // r29
    struct zFlame * * end_nearby; // r22
    struct zFlame * nearby; // r1+0x8
    struct zFlame * flame; // r31
    union entry_data * node; // r21

    // References
    // -> class xSpacePartitionTree2D space_tree;
    // -> unsigned int flames_size;
    // -> unsigned int flames_used;
    // -> static char __FUNCTION__[5];
    // -> static float overlap_max;
    // -> static float ground_max_tilt;
    // -> static float ground_dist_bias;
    // -> static float ground_dist_max;
    // -> unsigned char _enabled;
}

// Range: 0x80163CAC -> 0x80164154
void emit_sphere(const struct spawn_data & params /* r22 */, const struct xVec3 & center /* r29 */, float radius /* f27 */) {
    // Local variables
    struct spawn_data d; // r1+0x44
    float maxr; // f28
    float minr; // f26
    int min_fit; // r24
    int max_fit; // r26
    int fit; // r31
    float r; // f31
    float totalr; // f25
    float start_theta; // f24
    struct xVec3 origin; // r1+0x38
    int max_ring; // r23
    float max_dist; // f23
    float max_dist2; // f21
    float rr; // f22
    float diam; // f30
    int ring; // r30
    int total; // r25
    int amount; // r28
    float theta; // f29
    struct xVec3 v; // r1+0x2C
    struct xVec3 endv; // r1+0x20
    struct xVec3 dv; // r1+0x14
    int i; // r27
    struct xVec3 voff; // r1+0x8

    // References
    // -> static float rand_offset;
    // -> static float overlap_max;
    // -> static float overlap_normal;
    // -> unsigned char _enabled;
}

static char __FUNCTION__[8]; // size: 0x8, address: 0x80D62AFB
// Range: 0x80164154 -> 0x80164228
void destroy(struct handle & h /* r31 */) {
    // Local variables
    struct zFlame & flame; // r30

    // References
    // -> class xSpacePartitionTree2D space_tree;
    // -> static char __FUNCTION__[8];
    // -> unsigned char _enabled;
}

// total size: 0x14
struct cb_flame_sphere_check {
    // Functions
    static cb_flame_sphere_check(struct zFlame * * found, unsigned int max_found, const struct xVec3 & loc, float r);

    static unsigned char operator()(union entry_data * entry);

    // Members
    struct zFlame * * found; // offset 0x0, size 0x4
    unsigned int max_found; // offset 0x4, size 0x4
    const struct xVec3 * loc; // offset 0x8, size 0x4
    float r; // offset 0xC, size 0x4
    unsigned int total; // offset 0x10, size 0x4
};
// Range: 0x80164228 -> 0x801642BC
unsigned int find_in_sphere(struct zFlame * * found /* r1+0x8 */, unsigned int max_found /* r30 */, const struct xVec3 & loc /* r31 */, float r /* f31 */) {
    // Local variables
    struct cb_flame_sphere_check cb; // r1+0xC

    // References
    // -> class xSpacePartitionTree2D space_tree;
}

// Range: 0x801642BC -> 0x801642D8
// this: r3
static cb_flame_sphere_check::cb_flame_sphere_check(struct zFlame * * found /* r4 */, unsigned int max_found /* r5 */, const struct xVec3 & loc /* r6 */, float r /* f1 */) {}

// total size: 0x18
struct cb_flame_circle_check {
    // Functions
    static cb_flame_circle_check(struct zFlame * * found, unsigned int max_found, float x, float z, float r);

    static unsigned char operator()(union entry_data * entry);

    // Members
    struct zFlame * * found; // offset 0x0, size 0x4
    unsigned int max_found; // offset 0x4, size 0x4
    float x; // offset 0x8, size 0x4
    float z; // offset 0xC, size 0x4
    float r; // offset 0x10, size 0x4
    unsigned int total; // offset 0x14, size 0x4
};
// Range: 0x801642D8 -> 0x80164374
unsigned int find_in_circle(struct zFlame * * found /* r1+0x8 */, unsigned int max_found /* r31 */, float x /* f29 */, float z /* f30 */, float r /* f31 */) {
    // Local variables
    struct cb_flame_circle_check cb; // r1+0xC

    // References
    // -> class xSpacePartitionTree2D space_tree;
}

// Range: 0x80164374 -> 0x80164394
// this: r3
static cb_flame_circle_check::cb_flame_circle_check(struct zFlame * * found /* r4 */, unsigned int max_found /* r5 */, float x /* f1 */, float z /* f2 */, float r /* f3 */) {}

// Range: 0x80164394 -> 0x801643E4
// this: r3
float zFlame::get_damage() const {
    // Local variables
    float end_heat; // f31

    // References
    // -> static float hot;
}

// Range: 0x801643E4 -> 0x80164420
// this: r31
unsigned char zFlame::hits_bound(const struct xBound & bound /* r1+0x8 */) const {}

static char __FUNCTION__[22]; // size: 0x16, address: 0x8051EC58
struct xVec3 m_UnitAxisX; // size: 0xC, address: 0x80D6D938
struct xVec3 m_UnitAxisZ; // size: 0xC, address: 0x80D6D950
// Range: 0x80164420 -> 0x801647E8
void IntRayWithBoxFindNorm(const struct xVec3 & BoxScale /* r31 */, const struct xVec3 & RayDest /* r29 */, struct xVec3 & Norm /* r30 */) {
    // Local variables
    float onFaceX; // f31
    float onFaceY; // f30
    float onFaceZ; // f29
    struct xVec3 RayDestNorm; // r1+0x8
    float onFaceXPar; // f28
    float onFaceZPar; // f27

    // References
    // -> static char __FUNCTION__[22];
    // -> struct xVec3 m_UnitAxisZ;
    // -> struct xVec3 m_UnitAxisX;
}

// Range: 0x801647E8 -> 0x80164900
// this: r31
void zFlame::get_knockback(struct xVec3 & knockBackDir /* r30 */, float & knockBackAmt /* r29 */, const struct xVec3 & entPos /* r1+0x8 */) const {
    // Local variables
    struct xVec3 entPosBox; // r1+0x24
    struct xVec3 boxCenter; // r1+0x18
    struct xVec3 boxScale; // r1+0xC
}

// Range: 0x80164900 -> 0x8016493C
// this: r31
void zFlame::get_bound(struct xBound & bound /* r1+0x8 */) const {}

// Range: 0x8016493C -> 0x801649E4
// this: r31
void zFlame::refuel(float fuel /* f31 */, int flags /* r1+0x8 */) {
    // Local variables
    float dfuel; // f30

    // References
    // -> static float reblast_delay;
}

static char __FUNCTION__[7]; // size: 0x7, address: 0x80D62B03
// Range: 0x801649E4 -> 0x80164D38
// this: r31
void zFlame::update(float dt /* f29 */, float heat_decay /* r1+0x8 */) {
    // Local variables
    float add_heat; // f31
    float dh; // f28
    float dh; // f30
    float dh; // f27

    // References
    // -> static float heat_growth_max;
    // -> static float heat_rate_decay;
    // -> static float heat_rate_growth;
    // -> static char __FUNCTION__[7];
    // -> static float heat_rate_death;
}

// Range: 0x80164D38 -> 0x80164F28
// this: r31
void zFlame::update_effects(float dt /* f28 */) {
    // Local variables
    float end_heat; // f29
    float dh; // f31
    float diff; // f30
    struct xVec3 warp_loc; // r1+0x8
    float warp_intensity; // f27

    // References
    // -> static unsigned int texture;
    // -> static float alpha;
    // -> static float shrink_heat;
    // -> static float freq;
    // -> static float intensity;
    // -> static float blend_rate_up;
    // -> static float blend_rate_down;
}

static char __FUNCTION__[7]; // size: 0x7, address: 0x80D62B0A
// Range: 0x80164F28 -> 0x801652F0
// this: r31
unsigned char zFlame::create(const struct spawn_data & info /* r30 */) {
    // Local variables
    unsigned int rval; // r29
    struct xVec3 warp_loc; // r1+0x8
    float warp_intensity; // f31

    // References
    // -> static char __FUNCTION__[7];
    // -> static float freq;
    // -> static float intensity;
    // -> static unsigned int texture;
}

// Range: 0x801652F0 -> 0x80165348
// this: r31
void zFlame::destroy() {}

// Range: 0x80165348 -> 0x80165380
// this: r3
float zFlame::absorb_heat(float dh /* f1 */) {}

// Range: 0x80165380 -> 0x801657C0
// this: r30
void zFlame::emit_wisps(float dt /* r1+0x8 */) {
    // Local variables
    int emit; // r29
    float cx; // f21
    float cy; // f20
    float cz; // f19
    float radius; // f18
    float size_min; // f30
    float size_max; // r1+0x28
    float size_delta; // r1+0x24
    float vy_min; // f29
    float vy_delta; // r1+0x20
    float vmag_min; // f28
    float vmag_delta; // r1+0x1C
    float life_min; // f27
    float life_delta; // r1+0x18
    float growth; // r1+0x14
    float drot_min; // f26
    float drot_delta; // r1+0x10
    unsigned char * mem; // r1+0xC
    int have; // r28
    struct wisp_particle * p; // r31
    struct wisp_particle * endp; // r27
    float vang; // f25
    float vy; // f31
    float vmag; // f24
    float r; // f23
    float ilife; // f22

    // References
    // -> static int wisp_system_id;
    // -> static float rot_vel_max;
    // -> static float rot_vel_min;
    // -> static float growth;
    // -> static float life_max;
    // -> static float life_min;
    // -> static float vel_max;
    // -> static float vel_min;
    // -> static float vel_dir_ymin;
    // -> static float size_max;
    // -> static float size_min;
    // -> static float emit_radius;
    // -> static float emit_rate;
    // -> static unsigned int texture;
}

// Range: 0x801657C0 -> 0x801658C0
static void random_sphere_offset(struct xVec3 & offset /* r1+0x8 */, float radius /* f28 */) {
    // Local variables
    float ang; // f30
    float uz; // f31
    float r; // f29
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80D62B11
// Range: 0x801658C0 -> 0x80165CBC
// this: r31
void zFlame::emit_smoke(float dheat /* r1+0x8 */, float dt /* f18 */) {
    // Local variables
    float rate; // f31
    int emit; // r28
    struct xVec3 * buffer; // r27
    struct xVec3 * loc; // r30
    struct xVec3 * vel; // r26
    float cx; // f27
    float cy; // f26
    float cz; // f25
    float x_min; // f24
    float y_min; // f23
    float z_min; // f22
    float xz_range; // f30
    float y_range; // f21
    float vel_min; // f29
    float vel_range; // f20
    int i; // r29
    float size_min; // f28
    float size_max; // f19

    // References
    // -> static float life_min;
    // -> static float life_max;
    // -> static float size_max;
    // -> static float size_min;
    // -> static float vel_max;
    // -> static float vel_min;
    // -> static float y_min;
    // -> static float y_max;
    // -> static float emit_width;
    // -> static char __FUNCTION__[11];
    // -> static float rate_max;
    // -> static float rate_scale_dheat;
    // -> static float rate_scale_heat;
    // -> static class zSmokeEmitter * smoke_emitter;
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80D62B1C
// Range: 0x80165CBC -> 0x80165E94
// this: r28
void zFlame::unlink_nearby() {
    // Local variables
    struct zFlame * * n; // r30
    struct zFlame * * endn; // r27
    struct zFlame & nf; // r31
    struct zFlame * * m; // r29

    // References
    // -> static char __FUNCTION__[14];
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80D62B2A
// Range: 0x80165E94 -> 0x80165FDC
// this: r28
void zFlame::relink_nearby(struct zFlame * old_addr /* r1+0x8 */) {
    // Local variables
    struct zFlame * * n; // r30
    struct zFlame * * endn; // r27
    struct zFlame & bro; // r29
    struct zFlame * * m; // r31

    // References
    // -> static char __FUNCTION__[14];
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80D62B38
// total size: 0x8
struct flame_distance_pair {
    // Members
    float dist; // offset 0x0, size 0x4
    struct zFlame * flame; // offset 0x4, size 0x4
};
// Range: 0x80165FDC -> 0x801661FC
// this: r30
void zFlame::refresh_nearby() {
    // Local variables
    struct zFlame * found[16]; // r1+0x8
    int found_size; // r26
    struct zFlame * * n; // r31
    struct zFlame * * endn; // r25
    struct flame_distance_pair pairs[16]; // r1+0x48
    struct flame_distance_pair * p; // r29
    struct zFlame & bro; // r28
    float dx; // f31
    float dy; // f30
    float dz; // f29
    struct zFlame & bro; // r27

    // References
    // -> static char __FUNCTION__[15];
    // -> static float heat_spread_radius;
}

// total size: 0x10
struct cell_data {
    // Members
    struct xVec2 uv[2]; // offset 0x0, size 0x10
};
// total size: 0x50
struct card_data {
    // Members
    struct xMat4x3 mat; // offset 0x0, size 0x40
    struct xColor_tag color; // offset 0x40, size 0x4
    unsigned int pad1; // offset 0x44, size 0x4
    unsigned int pad2; // offset 0x48, size 0x4
    unsigned int pad3; // offset 0x4C, size 0x4
};
// total size: 0x60
struct icard_data : public card_data {
    // Members
    struct handle h; // offset 0x50, size 0x4
};
// total size: 0x8
struct group_data {
    // Members
    struct icard_data * cards; // offset 0x0, size 0x4
    unsigned int used; // offset 0x4, size 0x4
};
// total size: 0x44
class card_animator {
    // Members
public:
    float frame_rate; // offset 0x0, size 0x4
private:
    struct RwTexture * * textures; // offset 0x4, size 0x4
    struct cell_data * cells; // offset 0x8, size 0x4
    int cells_size; // offset 0xC, size 0x4
    struct group_data * groups; // offset 0x10, size 0x4
    unsigned int groups_size; // offset 0x14, size 0x4
    unsigned int cards_per_group; // offset 0x18, size 0x4
    unsigned char * group_choices; // offset 0x1C, size 0x4
    unsigned int group_choices_size; // offset 0x20, size 0x4
    unsigned int _frame; // offset 0x24, size 0x4
    float _frame_time; // offset 0x28, size 0x4
    struct handle_link head_link; // offset 0x2C, size 0xC
    struct handle_link tail_link; // offset 0x38, size 0xC
};
// total size: 0xC
struct handle_link {
    // Members
    struct handle_link * next; // offset 0x0, size 0x4
    struct handle_link * prev; // offset 0x4, size 0x4
    struct icard_data * card; // offset 0x8, size 0x4
};
// total size: 0x4
struct handle {
    // Members
private:
    struct handle_link * link; // offset 0x0, size 0x4
};
// total size: 0xC
struct xGridIterator {
    // Members
    struct xGridBound * * listhead; // offset 0x0, size 0x4
    struct xGridBound * curcell; // offset 0x4, size 0x4
    unsigned int delfound; // offset 0x8, size 0x4
};
// total size: 0x18
struct xBox {
    // Members
    struct xVec3 upper; // offset 0x0, size 0xC
    struct xVec3 lower; // offset 0xC, size 0xC
};
// Range: 0x801661FC -> 0x80166280
// this: r30
static unsigned char cb_ss::operator()(struct xEnt & ent /* r31 */) {
    // Local variables
    int type; // r29
}

// Range: 0x80166280 -> 0x80166340
// this: r30
static unsigned char cb_sss::operator()(struct xEnt & ent /* r31 */) {
    // Local variables
    int type; // r29
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80D62B47
static char __FUNCTION__[15]; // size: 0xF, address: 0x80D62B56
// Range: 0x80166340 -> 0x80166450
// this: r31
static unsigned char cb_flame_sphere_check::operator()(union entry_data * entry /* r29 */) {
    // Local variables
    struct zFlame * flame; // r30
    struct xVec3 offset; // r1+0x8
    float max_dist; // f31
    float dist2; // f30
}

// Range: 0x80166450 -> 0x80166544
// this: r3
static unsigned char cb_flame_circle_check::operator()(union entry_data * entry /* r4 */) {
    // Local variables
    struct zFlame * flame; // r31
    float dx; // f31
    float dz; // f30
    float max_dist; // f29
    float dist2; // f28
}


