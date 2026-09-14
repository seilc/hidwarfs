/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugGraph.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8002E0D0 -> 0x8002EE9C
*/
static char global_tweak_prefix[16]; // size: 0x10, address: 0x80C0A3F8
static unsigned char render_all; // size: 0x1, address: 0x80C07068
static unsigned char render_none; // size: 0x1, address: 0x80C07069
// Range: 0x8002E0D0 -> 0x8002E158
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
static struct graph_context * graph_buffer; // size: 0x4, address: 0x80C0706C
static struct graph_context * head_free_graph; // size: 0x4, address: 0x80C07070
// total size: 0x4
struct graph_handle {
    // Members
    union { // inferred
        struct graph_context * graph; // offset 0x0, size 0x4
        char * name; // offset 0x0, size 0x4
    };
};
static struct graph_handle * sorted_graphs; // size: 0x4, address: 0x80C07074
static int graphs_size; // size: 0x4, address: 0x80C07078
static unsigned char need_sort; // size: 0x1, address: 0x80C0707C
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
static struct xVec2 * point_buffer; // size: 0x4, address: 0x80C07080
static struct xColor_tag common_colors[21]; // size: 0x54, address: 0x803A90E8
static char * common_color_names[21]; // size: 0x54, address: 0x80415438
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
// Range: 0x8002E158 -> 0x8002E1C4
static struct xColor_tag choose_color(const char * name /* r0 */) {
    // Local variables
    unsigned int namehash; // r5

    // References
    // -> static struct xColor_tag common_colors[21];
}

static char buffer[128]; // size: 0x80, address: 0x8045AEB0
// Range: 0x8002E1C4 -> 0x8002E22C
static char * get_tweak_prefix(const char * name /* r31 */) {
    // Local variables
    const char * sep; // r0

    // References
    // -> static char buffer[128];
}

// Range: 0x8002E22C -> 0x8002E268
static void on_change_scale(const struct tweak_info & info /* r0 */) {
    // Local variables
    struct graph_context & graph; // r3
}

// total size: 0xC
struct /* @class$930xDebugGraph_cpp */ {
    // Members
    int value_def; // offset 0x0, size 0x4
    int value_min; // offset 0x4, size 0x4
    int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$931xDebugGraph_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int value_min; // offset 0x4, size 0x4
    unsigned int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$932xDebugGraph_cpp */ {
    // Members
    float value_def; // offset 0x0, size 0x4
    float value_min; // offset 0x4, size 0x4
    float value_max; // offset 0x8, size 0x4
};
// total size: 0x1
struct /* @class$933xDebugGraph_cpp */ {
    // Members
    unsigned char value_def; // offset 0x0, size 0x1
};
// total size: 0x10
struct /* @class$934xDebugGraph_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int labels_size; // offset 0x4, size 0x4
    const char * * labels; // offset 0x8, size 0x4
    void * values; // offset 0xC, size 0x4
};
// total size: 0x8
struct /* @class$935xDebugGraph_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
};
// total size: 0x10
struct /* @class$936xDebugGraph_cpp */ {
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
        struct /* @class$930xDebugGraph_cpp */ {
            // Members
            int value_def; // offset 0x0, size 0x4
            int value_min; // offset 0x4, size 0x4
            int value_max; // offset 0x8, size 0x4
        } int_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$931xDebugGraph_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int value_min; // offset 0x4, size 0x4
            unsigned int value_max; // offset 0x8, size 0x4
        } uint_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$932xDebugGraph_cpp */ {
            // Members
            float value_def; // offset 0x0, size 0x4
            float value_min; // offset 0x4, size 0x4
            float value_max; // offset 0x8, size 0x4
        } float_context; // offset 0x18, size 0xC
        // total size: 0x1
        struct /* @class$933xDebugGraph_cpp */ {
            // Members
            unsigned char value_def; // offset 0x0, size 0x1
        } bool_context; // offset 0x18, size 0x1
        // total size: 0x10
        struct /* @class$934xDebugGraph_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int labels_size; // offset 0x4, size 0x4
            const char * * labels; // offset 0x8, size 0x4
            void * values; // offset 0xC, size 0x4
        } select_context; // offset 0x18, size 0x10
        // total size: 0x8
        struct /* @class$935xDebugGraph_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int mask; // offset 0x4, size 0x4
        } flag_context; // offset 0x18, size 0x8
        // total size: 0x10
        struct /* @class$936xDebugGraph_cpp */ {
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
static struct tweak_callback cb_change_scale; // size: 0x28, address: 0x803A913C
// Range: 0x8002E268 -> 0x8002E3C0
static void add_graph_tweaks(struct graph_context & graph /* r30 */) {
    // Local variables
    const char * prefix; // r31

    // References
    // -> static struct xColor_tag common_colors[21];
    // -> static char * common_color_names[21];
    // -> static struct tweak_callback cb_change_scale;
}

enum /* @enum$1047xDebugGraph_cpp */ {
    FLAG_RENDER = 1,
    FLAG_PAUSE = 2,
    FLAG_AUTO_SCALE = 4,
    FLAG_BIND_INT = 8,
};
// Range: 0x8002E3C0 -> 0x8002E4CC
static void remove_graph_tweaks(struct graph_context & graph /* r0 */) {
    // Local variables
    const char * prefix; // r4
    char buffer[128]; // r1+0x8
    char * tail; // r31
}

// total size: 0x8
struct substr {
    // Members
    const char * text; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
// Range: 0x8002E4CC -> 0x8002E550
static void create_graph(struct graph_context & graph /* r30 */, const char * name /* r31 */) {}

// Range: 0x8002E550 -> 0x8002E570
static void destroy_graph(struct graph_context & graph /* r0 */) {}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80BFBDE0
// Range: 0x8002E570 -> 0x8002E614
static struct graph_handle * alloc_graph() {
    // Local variables
    struct graph_context * g; // r0
    struct graph_handle * gh; // r3

    // References
    // -> static unsigned char need_sort;
    // -> static int graphs_size;
    // -> static struct graph_handle * sorted_graphs;
    // -> static struct graph_context * head_free_graph;
    // -> static char __FUNCTION__[12];
}

// Range: 0x8002E614 -> 0x8002E694
static struct graph_handle * find_graph(const char * name /* r1+0x8 */) {
    // Local variables
    struct graph_handle * tail; // r31
    struct graph_handle * gh; // r0

    // References
    // -> static int graphs_size;
    // -> static struct graph_handle * sorted_graphs;
    // -> static unsigned char need_sort;
}

// Range: 0x8002E694 -> 0x8002E6F8
static struct graph_handle * grab_graph(const char * name /* r31 */) {
    // Local variables
    struct graph_handle * gh; // r0

    // References
    // -> static int graphs_size;
}

static unsigned char done; // size: 0x1, address: 0x80C07084
static signed char init; // size: 0x1, address: 0x80C07085
static char __FUNCTION__[10]; // size: 0xA, address: 0x80BFBDEC
// Range: 0x8002E6F8 -> 0x8002E830
static void add_value(struct graph_context & graph /* r31 */, float value /* f1 */) {
    // References
    // -> static unsigned char done;
    // -> static char __FUNCTION__[10];
    // -> static signed char init;
}

// Range: 0x8002E830 -> 0x8002E910
static void bind_graph(const char * name /* r0 */, void * binding /* r29 */, float update_delay /* f31 */, int flags /* r30 */) {
    // Local variables
    struct graph_handle * gh; // r0
    struct graph_context & graph; // r31
    const char * prefix; // r5
    char buffer[128]; // r1+0x8
}

// Range: 0x8002E910 -> 0x8002E998
void xDebugGraphSceneEnter() {
    // Local variables
    struct graph_context * g; // r3
    struct graph_context * endg; // r5

    // References
    // -> static char global_tweak_prefix[16];
    // -> static struct graph_context * head_free_graph;
    // -> static struct graph_context * graph_buffer;
    // -> static int graphs_size;
    // -> static struct xVec2 * point_buffer;
    // -> static struct graph_handle * sorted_graphs;
}

// Range: 0x8002E998 -> 0x8002EA00
void xDebugGraphSceneExit() {
    // Local variables
    struct graph_handle * gh; // r31
    struct graph_handle * endgh; // r30

    // References
    // -> static int graphs_size;
    // -> static struct graph_handle * sorted_graphs;
    // -> static char global_tweak_prefix[16];
}

// Range: 0x8002EA00 -> 0x8002EAF0
void xDebugGraphUpdate(float dt /* f31 */) {
    // Local variables
    struct graph_handle * gh; // r31
    struct graph_handle * endgh; // r30
    struct graph_context & graph; // r3

    // References
    // -> static int graphs_size;
    // -> static struct graph_handle * sorted_graphs;
}

unsigned int FB_XRES; // size: 0x4, address: 0x80C00BDC
unsigned int FB_YRES; // size: 0x4, address: 0x80C00BE0
// Range: 0x8002EAF0 -> 0x8002ED18
void xDebugGraphRender() {
    // Local variables
    struct xVec2 * point; // r31
    float sx; // f31
    float sy; // f4
    float sw; // f30
    float sh; // f1
    float yoffset; // f27
    float xscale; // f29
    int rendered; // r30
    struct graph_handle * gh; // r29
    struct graph_handle * endgh; // r28
    struct graph_context & graph; // r27
    float yscale; // f3
    int i; // r6
    float value; // f4

    // References
    // -> static unsigned char render_all;
    // -> static int graphs_size;
    // -> static struct graph_handle * sorted_graphs;
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
    // -> static struct xVec2 * point_buffer;
    // -> static unsigned char render_none;
}

// Range: 0x8002ED18 -> 0x8002EDA4
void xDebugGraphSetScale(const char * name /* r0 */, float scale /* f31 */) {
    // Local variables
    struct graph_context & graph; // r3
}

// Range: 0x8002EDA4 -> 0x8002EDE0
void xDebugGraphSetOriginValue(const char * name /* r0 */, float originValue /* f31 */) {
    // Local variables
    struct graph_handle * gh; // r0
}

// Range: 0x8002EDE0 -> 0x8002EE20
void xDebugGraphAdd(const char * name /* r0 */, float value /* f31 */) {
    // Local variables
    struct graph_handle * gh; // r0
}

// Range: 0x8002EE20 -> 0x8002EE78
void xDebugGraphAdd(const char * name /* r0 */, int value /* r31 */) {
    // Local variables
    struct graph_handle * gh; // r0
}

// Range: 0x8002EE78 -> 0x8002EE9C
void xDebugGraphBind(const char * name /* r0 */, const float * value /* r0 */, float update_delay /* f0 */) {}


