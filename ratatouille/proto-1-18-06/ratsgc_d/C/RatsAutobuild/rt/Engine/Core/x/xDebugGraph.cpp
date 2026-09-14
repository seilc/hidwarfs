/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugGraph.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80036200 -> 0x800372A0
*/
static char global_tweak_prefix[16]; // size: 0x10, address: 0x80D6C820
static unsigned char render_all; // size: 0x1, address: 0x80D68DF8
static unsigned char render_none; // size: 0x1, address: 0x80D68DF9
// Range: 0x80036200 -> 0x80036288
static void add_tweaks(const char * prefix /* r31 */) {
    // References
    // -> static unsigned char render_none;
    // -> static unsigned char render_all;
}

// total size: 0x2AC
struct graph_context {
    // Members
    char name[128]; // offset 0x0, size 0x80
    int flags; // offset 0x80, size 0x4
    float scale; // offset 0x84, size 0x4
    float originValue; // offset 0x88, size 0x4
    float offset; // offset 0x8C, size 0x4
    struct xColor_tag color; // offset 0x90, size 0x4
    float update_delay; // offset 0x94, size 0x4
    float update_time; // offset 0x98, size 0x4
    void * binding; // offset 0x9C, size 0x4
    float data[128]; // offset 0xA0, size 0x200
    int start; // offset 0x2A0, size 0x4
    int size; // offset 0x2A4, size 0x4
    struct graph_context * next; // offset 0x2A8, size 0x4
};
static struct graph_context * graph_buffer; // size: 0x4, address: 0x80D68DFC
static struct graph_context * head_free_graph; // size: 0x4, address: 0x80D68E00
// total size: 0x4
struct graph_handle {
    // Members
    union { // inferred
        struct graph_context * graph; // offset 0x0, size 0x4
        char * name; // offset 0x0, size 0x4
    };
};
static struct graph_handle * sorted_graphs; // size: 0x4, address: 0x80D68E04
static int graphs_size; // size: 0x4, address: 0x80D68E08
static unsigned char need_sort; // size: 0x1, address: 0x80D68E0C
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
// total size: 0x8
struct xVec2 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
static struct xVec2 * point_buffer; // size: 0x4, address: 0x80D68E10
static struct xColor_tag common_colors[21]; // size: 0x54, address: 0x80477678
static char * common_color_names[21]; // size: 0x54, address: 0x804F20A8
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
// Range: 0x80036288 -> 0x80036324
static struct xColor_tag choose_color(const char * name /* r1+0x8 */) {
    // Local variables
    unsigned int namehash; // r31

    // References
    // -> static struct xColor_tag common_colors[21];
}

static char buffer[128]; // size: 0x80, address: 0x8055D348
// Range: 0x80036324 -> 0x80036394
static char * get_tweak_prefix(const char * name /* r31 */) {
    // Local variables
    const char * sep; // r30

    // References
    // -> static char buffer[128];
}

// Range: 0x80036394 -> 0x800363E4
static void on_change_scale(const struct tweak_info & info /* r3 */) {
    // Local variables
    struct graph_context & graph; // r31
}

// total size: 0xC
struct /* @class$734xDebugGraph_cpp */ {
    // Members
    int value_def; // offset 0x0, size 0x4
    int value_min; // offset 0x4, size 0x4
    int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$735xDebugGraph_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int value_min; // offset 0x4, size 0x4
    unsigned int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$736xDebugGraph_cpp */ {
    // Members
    float value_def; // offset 0x0, size 0x4
    float value_min; // offset 0x4, size 0x4
    float value_max; // offset 0x8, size 0x4
};
// total size: 0x1
struct /* @class$737xDebugGraph_cpp */ {
    // Members
    unsigned char value_def; // offset 0x0, size 0x1
};
// total size: 0x10
struct /* @class$738xDebugGraph_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int labels_size; // offset 0x4, size 0x4
    const char * * labels; // offset 0x8, size 0x4
    void * values; // offset 0xC, size 0x4
};
// total size: 0x8
struct /* @class$739xDebugGraph_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
};
// total size: 0x10
struct /* @class$740xDebugGraph_cpp */ {
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
        struct /* @class$734xDebugGraph_cpp */ {
            // Members
            int value_def; // offset 0x0, size 0x4
            int value_min; // offset 0x4, size 0x4
            int value_max; // offset 0x8, size 0x4
        } int_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$735xDebugGraph_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int value_min; // offset 0x4, size 0x4
            unsigned int value_max; // offset 0x8, size 0x4
        } uint_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$736xDebugGraph_cpp */ {
            // Members
            float value_def; // offset 0x0, size 0x4
            float value_min; // offset 0x4, size 0x4
            float value_max; // offset 0x8, size 0x4
        } float_context; // offset 0x18, size 0xC
        // total size: 0x1
        struct /* @class$737xDebugGraph_cpp */ {
            // Members
            unsigned char value_def; // offset 0x0, size 0x1
        } bool_context; // offset 0x18, size 0x1
        // total size: 0x10
        struct /* @class$738xDebugGraph_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int labels_size; // offset 0x4, size 0x4
            const char * * labels; // offset 0x8, size 0x4
            void * values; // offset 0xC, size 0x4
        } select_context; // offset 0x18, size 0x10
        // total size: 0x8
        struct /* @class$739xDebugGraph_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int mask; // offset 0x4, size 0x4
        } flag_context; // offset 0x18, size 0x8
        // total size: 0x10
        struct /* @class$740xDebugGraph_cpp */ {
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
static struct tweak_callback cb_change_scale; // size: 0x28, address: 0x804776CC
// Range: 0x800363E4 -> 0x80036540
static void add_graph_tweaks(struct graph_context & graph /* r31 */) {
    // Local variables
    const char * prefix; // r30

    // References
    // -> static struct xColor_tag common_colors[21];
    // -> static char * common_color_names[21];
    // -> static struct tweak_callback cb_change_scale;
}

enum /* @enum$851xDebugGraph_cpp */ {
    FLAG_RENDER = 1,
    FLAG_PAUSE = 2,
    FLAG_AUTO_SCALE = 4,
    FLAG_BIND_INT = 8,
};
// Range: 0x80036540 -> 0x8003665C
static void remove_graph_tweaks(struct graph_context & graph /* r1+0x8 */) {
    // Local variables
    const char * prefix; // r30
    char buffer[128]; // r1+0xC
    char * tail; // r31
}

// total size: 0x8
struct substr {
    // Members
    const char * text; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
// Range: 0x8003665C -> 0x8003670C
static void create_graph(struct graph_context & graph /* r31 */, const char * name /* r29 */) {}

// Range: 0x8003670C -> 0x80036734
static void destroy_graph(struct graph_context & graph /* r1+0x8 */) {}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80D5EC08
// Range: 0x80036734 -> 0x800367FC
static struct graph_handle * alloc_graph() {
    // Local variables
    struct graph_context * g; // r31
    struct graph_handle * gh; // r30

    // References
    // -> static unsigned char need_sort;
    // -> static int graphs_size;
    // -> static struct graph_handle * sorted_graphs;
    // -> static struct graph_context * head_free_graph;
    // -> static char __FUNCTION__[12];
}

// Range: 0x800367FC -> 0x800368A0
static struct graph_handle * find_graph(const char * name /* r1+0x8 */) {
    // Local variables
    struct graph_handle * tail; // r31
    struct graph_handle * gh; // r30

    // References
    // -> static struct graph_handle * sorted_graphs;
    // -> static int graphs_size;
    // -> static unsigned char need_sort;
}

// Range: 0x800368A0 -> 0x80036910
static struct graph_handle * grab_graph(const char * name /* r30 */) {
    // Local variables
    struct graph_handle * gh; // r31

    // References
    // -> static int graphs_size;
}

static unsigned char done; // size: 0x1, address: 0x80D68E14
static signed char init; // size: 0x1, address: 0x80D68E15
static char __FUNCTION__[10]; // size: 0xA, address: 0x80D5EC14
// Range: 0x80036910 -> 0x80036A98
static void add_value(struct graph_context & graph /* r31 */, float value /* f31 */) {
    // Local variables
    float & d; // r30

    // References
    // -> static unsigned char done;
    // -> static char __FUNCTION__[10];
    // -> static signed char init;
}

// Range: 0x80036A98 -> 0x80036B88
static void bind_graph(const char * name /* r1+0x8 */, void * binding /* r28 */, float update_delay /* r1+0xC */, int flags /* r1+0x10 */) {
    // Local variables
    struct graph_handle * gh; // r30
    struct graph_context & graph; // r31
    const char * prefix; // r29
    char buffer[128]; // r1+0x14
}

// Range: 0x80036B88 -> 0x80036C38
void xDebugGraphSceneEnter() {
    // Local variables
    int blech; // r1+0xC
    int blah; // r1+0x8
    struct graph_context * g; // r31
    struct graph_context * endg; // r30

    // References
    // -> static char global_tweak_prefix[16];
    // -> static struct graph_context * head_free_graph;
    // -> static struct graph_context * graph_buffer;
    // -> static int graphs_size;
    // -> static struct xVec2 * point_buffer;
    // -> static struct graph_handle * sorted_graphs;
}

// Range: 0x80036C38 -> 0x80036CA4
void xDebugGraphSceneExit() {
    // Local variables
    struct graph_handle * gh; // r31
    struct graph_handle * endgh; // r30
    struct graph_context & graph; // r29

    // References
    // -> static int graphs_size;
    // -> static struct graph_handle * sorted_graphs;
    // -> static char global_tweak_prefix[16];
}

// Range: 0x80036CA4 -> 0x80036DA0
void xDebugGraphUpdate(float dt /* r1+0x8 */) {
    // Local variables
    struct graph_handle * gh; // r30
    struct graph_handle * endgh; // r29
    struct graph_context & graph; // r31

    // References
    // -> static int graphs_size;
    // -> static struct graph_handle * sorted_graphs;
}

unsigned int FB_XRES; // size: 0x4, address: 0x80D63014
unsigned int FB_YRES; // size: 0x4, address: 0x80D63018
// Range: 0x80036DA0 -> 0x80037090
void xDebugGraphRender() {
    // Local variables
    struct xVec2 * point; // r28
    float sx; // f29
    float sy; // f28
    float sw; // f27
    float sh; // f26
    float xoffset; // f31
    float yoffset; // f30
    float xscale; // f25
    int rendered; // r27
    struct graph_handle * gh; // r29
    struct graph_handle * endgh; // r26
    struct graph_context & graph; // r31
    float yscale; // f24
    int i; // r30
    float value; // f23
    struct xColor_tag color; // r1+0x10

    // References
    // -> static unsigned char render_all;
    // -> static int graphs_size;
    // -> static struct graph_handle * sorted_graphs;
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
    // -> static struct xVec2 * point_buffer;
    // -> static unsigned char render_none;
}

// Range: 0x80037090 -> 0x80037154
void xDebugGraphSetScale(const char * name /* r28 */, float scale /* f31 */) {
    // Local variables
    struct graph_handle * gh; // r30
    struct graph_context & graph; // r31
}

// Range: 0x80037154 -> 0x800371A4
void xDebugGraphSetOriginValue(const char * name /* r1+0x8 */, float originValue /* r1+0xC */) {
    // Local variables
    struct graph_handle * gh; // r31
    struct graph_context & graph; // r30
}

// Range: 0x800371A4 -> 0x800371F4
void xDebugGraphAdd(const char * name /* r1+0x8 */, float value /* r1+0xC */) {
    // Local variables
    struct graph_handle * gh; // r31
    struct graph_context & graph; // r30
}

// Range: 0x800371F4 -> 0x80037264
void xDebugGraphAdd(const char * name /* r1+0x8 */, int value /* r1+0xC */) {
    // Local variables
    struct graph_handle * gh; // r31
    struct graph_context & graph; // r30
}

// Range: 0x80037264 -> 0x800372A0
void xDebugGraphBind(const char * name /* r1+0x8 */, const float * value /* r1+0xC */, float update_delay /* r1+0x10 */) {}


