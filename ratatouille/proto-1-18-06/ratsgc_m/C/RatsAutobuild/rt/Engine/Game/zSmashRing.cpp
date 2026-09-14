/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zSmashRing.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013328C -> 0x8013408C
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
// Range: 0x8013328C -> 0x80133290
static void add_tweaks() {}

static class module_type * module; // size: 0x4, address: 0x803C1930
// Range: 0x80133290 -> 0x801332A4
static void get_scene_parameters(int & max_rings /* r0 */, int & ring_emitters_max /* r0 */) {}

// total size: 0x1
struct /* @class$1136zSmashRing_cpp */ {
    // Members
    unsigned char sort_rings; // offset 0x0, size 0x1
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
// total size: 0x60
struct activity_data {
    // Members
    class zSmashRingEmitter * owner; // offset 0x0, size 0x4
    const struct config_type * cfg; // offset 0x4, size 0x4
    int raster_id; // offset 0x8, size 0x4
    int emitter_id; // offset 0xC, size 0x4
    int ring_index; // offset 0x10, size 0x4
    float age; // offset 0x14, size 0x4
    struct xVec3 center; // offset 0x18, size 0xC
    float sscale; // offset 0x24, size 0x4
    float ds; // offset 0x28, size 0x4
    float force_scale; // offset 0x2C, size 0x4
    float force_damp; // offset 0x30, size 0x4
    float yaccel_rise; // offset 0x34, size 0x4
    float yaccel_fall; // offset 0x38, size 0x4
    float du; // offset 0x3C, size 0x4
    float dcos; // offset 0x40, size 0x4
    float dsin; // offset 0x44, size 0x4
    float age_end_scale; // offset 0x48, size 0x4
    float age_fall_scale; // offset 0x4C, size 0x4
    float alpha0_start; // offset 0x50, size 0x4
    float dalpha0; // offset 0x54, size 0x4
    float alpha1_start; // offset 0x58, size 0x4
    float dalpha1; // offset 0x5C, size 0x4
};
// total size: 0x4
struct emitter_id_node {
    // Members
    struct emitter_id_node * next; // offset 0x0, size 0x4
};
// total size: 0xAC
class module_type {
    // Functions
    static module_type(int rings_max, int ring_emitters_max);

    static void reset();

    static void update(float dt);

    static void render();

    static void free_emitter_id(int id);

    static struct ring_type * alloc_ring();

    static void free_ring(struct ring_type * ring);

    static void update_rings(float dt);

    static void render_rings();

    static unsigned char rings_full() const;

    // Members
    // total size: 0x1
    struct /* @class$1136zSmashRing_cpp */ {
        // Members
        unsigned char sort_rings; // offset 0x0, size 0x1
    } flag; // offset 0x0, size 0x1
    struct ring_type * rings; // offset 0x4, size 0x4
    int rings_max; // offset 0x8, size 0x4
    int rings_used; // offset 0xC, size 0x4
    struct RwRaster * rasters[32]; // offset 0x10, size 0x80
    int rasters_used; // offset 0x90, size 0x4
    struct activity_data * ring_emitters; // offset 0x94, size 0x4
    int ring_emitters_max; // offset 0x98, size 0x4
    int ring_emitters_used; // offset 0x9C, size 0x4
    struct emitter_id_node * emitter_id_buffer; // offset 0xA0, size 0x4
    struct emitter_id_node * emitter_id_head; // offset 0xA4, size 0x4
    int emitter_ids_max; // offset 0xA8, size 0x4
};
// Range: 0x801332A4 -> 0x80133350
// this: r31
static module_type::module_type(int rings_max /* r0 */, int ring_emitters_max /* r0 */) {}

// Range: 0x80133350 -> 0x80133354
static void module_type::debug_init() {}

// Range: 0x80133354 -> 0x801333DC
// this: r0
static void module_type::reset() {
    // Local variables
    int i; // r7
    struct emitter_id_node * it; // r5
    struct emitter_id_node * end; // r4
}

// Range: 0x801333DC -> 0x80133460
// this: r29
static void module_type::update(float dt /* f31 */) {
    // Local variables
    struct activity_data * ring_emitter; // r31
    struct activity_data * end_ring_emitter; // r30
}

// Range: 0x80133460 -> 0x80133464
static void module_type::debug_update() {}

// Range: 0x80133464 -> 0x80133490
// this: r0
static void module_type::render() {}

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
// Range: 0x80133490 -> 0x801334AC
// this: r0
static void module_type::free_emitter_id(int id /* r0 */) {
    // Local variables
    struct emitter_id_node * node; // r4
}

// Range: 0x801334AC -> 0x801334D8
// this: r0
static struct ring_type * module_type::alloc_ring() {}

// Range: 0x801334D8 -> 0x80133538
// this: r31
static void module_type::free_ring(struct ring_type * ring /* r4 */) {
    // Local variables
    struct ring_type * tail; // r0
}

// Range: 0x801335E4 -> 0x801336B8
// this: r29
static void module_type::update_rings(float dt /* f31 */) {
    // Local variables
    struct ring_type * ring; // r31
    struct ring_type * end_ring; // r30
    float t; // f2
}

void * RwEngineInstance; // size: 0x4, address: 0x803C3054
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
// Range: 0x801336B8 -> 0x80133A58
// this: r23
static void module_type::render_rings() {
    // Local variables
    struct xIMLockContext lock; // r1+0x8
    struct xVec3 * pos; // r31
    struct xVec2 * uv; // r30
    unsigned int * color; // r29
    int verts_size; // r28
    int last_raster_id; // r27
    struct ring_type * ring; // r26
    struct ring_type * end_ring; // r25
    int raster_id; // r24
    struct ring_type * batch_ring; // r5
    float Cx; // f30
    float Cz; // f31
    float Ay; // f29
    float By; // f28
    float r0; // f27
    float r1; // f26
    unsigned int color0; // r24
    unsigned int color1; // r22
    float du; // f25
    float dsin; // f24
    float dcos; // f23
    float u; // f22
    float s; // f21
    float c; // f20
    struct xVec3 * const end_pos; // r21
    float tempc; // f0

    // References
    // -> void * RwEngineInstance;
}

// total size: 0x8
struct xVec2 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
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
// Range: 0x80133A58 -> 0x80133AD8
static void module_type::render_ring_batch(struct xIMLockContext & lock /* r31 */) {
    // References
    // -> void * RwEngineInstance;
}

// Range: 0x80133AD8 -> 0x80133B5C
void zSmashRingSceneEnter() {
    // Local variables
    int max_rings; // r1+0xC
    int ring_emitters_max; // r1+0x8

    // References
    // -> static class module_type * module;
}

// Range: 0x80133B5C -> 0x80133B68
void zSmashRingSceneExit() {
    // References
    // -> static class module_type * module;
}

// Range: 0x80133B68 -> 0x80133B94
void zSmashRingReset() {
    // References
    // -> static class module_type * module;
}

// Range: 0x80133B94 -> 0x80133BC0
void zSmashRingUpdate(float dt /* f0 */) {
    // References
    // -> static class module_type * module;
}

// Range: 0x80133BC0 -> 0x80133BEC
void zSmashRingRender() {
    // References
    // -> static class module_type * module;
}

// total size: 0x34
struct config_type {
    // Members
    unsigned int texture; // offset 0x0, size 0x4
    int texture_repeats; // offset 0x4, size 0x4
    float radius_inner; // offset 0x8, size 0x4
    float radius_outer; // offset 0xC, size 0x4
    float radial_vel; // offset 0x10, size 0x4
    float emit_dist; // offset 0x14, size 0x4
    float gravity_rise; // offset 0x18, size 0x4
    float gravity_fall; // offset 0x1C, size 0x4
    float max_height; // offset 0x20, size 0x4
    float height_damp; // offset 0x24, size 0x4
    int ring_segments; // offset 0x28, size 0x4
    struct xColor_tag color_lower; // offset 0x2C, size 0x4
    struct xColor_tag color_upper; // offset 0x30, size 0x4
};
// total size: 0x8
struct substr {
    // Members
    const char * text; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
// total size: 0xC
struct /* @class$693zSmashRing_cpp */ {
    // Members
    int value_def; // offset 0x0, size 0x4
    int value_min; // offset 0x4, size 0x4
    int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$694zSmashRing_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int value_min; // offset 0x4, size 0x4
    unsigned int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$695zSmashRing_cpp */ {
    // Members
    float value_def; // offset 0x0, size 0x4
    float value_min; // offset 0x4, size 0x4
    float value_max; // offset 0x8, size 0x4
};
// total size: 0x1
struct /* @class$696zSmashRing_cpp */ {
    // Members
    unsigned char value_def; // offset 0x0, size 0x1
};
// total size: 0x10
struct /* @class$697zSmashRing_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int labels_size; // offset 0x4, size 0x4
    const char * * labels; // offset 0x8, size 0x4
    void * values; // offset 0xC, size 0x4
};
// total size: 0x8
struct /* @class$698zSmashRing_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
};
// total size: 0x10
struct /* @class$699zSmashRing_cpp */ {
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
        struct /* @class$693zSmashRing_cpp */ {
            // Members
            int value_def; // offset 0x0, size 0x4
            int value_min; // offset 0x4, size 0x4
            int value_max; // offset 0x8, size 0x4
        } int_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$694zSmashRing_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int value_min; // offset 0x4, size 0x4
            unsigned int value_max; // offset 0x8, size 0x4
        } uint_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$695zSmashRing_cpp */ {
            // Members
            float value_def; // offset 0x0, size 0x4
            float value_min; // offset 0x4, size 0x4
            float value_max; // offset 0x8, size 0x4
        } float_context; // offset 0x18, size 0xC
        // total size: 0x1
        struct /* @class$696zSmashRing_cpp */ {
            // Members
            unsigned char value_def; // offset 0x0, size 0x1
        } bool_context; // offset 0x18, size 0x1
        // total size: 0x10
        struct /* @class$697zSmashRing_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int labels_size; // offset 0x4, size 0x4
            const char * * labels; // offset 0x8, size 0x4
            void * values; // offset 0xC, size 0x4
        } select_context; // offset 0x18, size 0x10
        // total size: 0x8
        struct /* @class$698zSmashRing_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int mask; // offset 0x4, size 0x4
        } flag_context; // offset 0x18, size 0x8
        // total size: 0x10
        struct /* @class$699zSmashRing_cpp */ {
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
// total size: 0x4
class zSmashRingEmitter {
    // Functions
    void update(float dt);

    void deactivate();

    // Members
public:
    struct activity_data * act; // offset 0x0, size 0x4
};
// Range: 0x80133BEC -> 0x80133EEC
// this: r30
void zSmashRingEmitter::update(float dt /* f0 */) {
    // Local variables
    float s0; // f30
    float s1; // f0
    float rmin; // f21
    float rmax; // f29
    float rvel; // f1
    float r0; // f22
    float r1; // f28
    float dr; // f27
    float ds; // f26
    float force_scale; // f25
    float force_damp; // f24
    float r; // f23
    float s; // f22
    float force; // f21
    struct ring_type * ring; // r0
    float tpeak; // f20
    float ypeak; // f19
    float tfall; // f0
    float alpha1; // f19

    // References
    // -> static class module_type * module;
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
// total size: 0x54
struct ring_type {
    // Functions
    static void set_sort_key(int raster_id, int emitter_id, int ring_id);

    // Members
    int sort_key; // offset 0x0, size 0x4
    int segments; // offset 0x4, size 0x4
    float age; // offset 0x8, size 0x4
    float age_end; // offset 0xC, size 0x4
    float age_fall; // offset 0x10, size 0x4
    struct xVec3 center; // offset 0x14, size 0xC
    float y; // offset 0x20, size 0x4
    float ypeak; // offset 0x24, size 0x4
    float yvel; // offset 0x28, size 0x4
    float yaccel_rise; // offset 0x2C, size 0x4
    float yaccel_fall; // offset 0x30, size 0x4
    float radius0; // offset 0x34, size 0x4
    float radius1; // offset 0x38, size 0x4
    float u; // offset 0x3C, size 0x4
    float du; // offset 0x40, size 0x4
    float dcos; // offset 0x44, size 0x4
    float dsin; // offset 0x48, size 0x4
    struct xColor_tag color0; // offset 0x4C, size 0x4
    struct xColor_tag color1; // offset 0x50, size 0x4
};
// Range: 0x80133EEC -> 0x80133F04
// this: r0
static void ring_type::set_sort_key(int raster_id /* r0 */, int emitter_id /* r0 */, int ring_id /* r0 */) {}

// Range: 0x80133F04 -> 0x80133F20
// this: r0
static unsigned char module_type::rings_full() const {}

// Range: 0x80133F20 -> 0x80133F80
void zSmashRingEmitter::free_activity(struct activity_data * v /* r31 */) {
    // Local variables
    struct activity_data * tail; // r4

    // References
    // -> static class module_type * module;
}

// Range: 0x80134044 -> 0x8013408C
// this: r31
void zSmashRingEmitter::deactivate() {
    // References
    // -> static class module_type * module;
}


