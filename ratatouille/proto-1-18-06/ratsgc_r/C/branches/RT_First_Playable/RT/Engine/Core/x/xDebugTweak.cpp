/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8002F050 -> 0x80039438
*/
unsigned char gDebugTweakRendering; // size: 0x1, address: 0x80C07088
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
static struct basic_rect screen_bounds; // size: 0x10, address: 0x80C0A448
static unsigned char HIMEM_DEBUG_TWEAK_BASE[4194304]; // size: 0x400000, address: 0x8045AF30
static unsigned char HIMEM_MORE_TWEAK_BASE[2097152]; // size: 0x200000, address: 0x8085AF30
static unsigned char * xDebugTweak_StaticCurr; // size: 0x4, address: 0x80BFBDF8
static unsigned char * xDebugTweak_StaticMax; // size: 0x4, address: 0x80BFBDFC
// Range: 0x8002F050 -> 0x8002F060
void xDebugTweak_StaticReset() {
    // References
    // -> static unsigned char HIMEM_MORE_TWEAK_BASE[2097152];
    // -> static unsigned char * xDebugTweak_StaticCurr;
}

static char __FUNCTION__[24]; // size: 0x18, address: 0x80BFBE00
// Range: 0x8002F060 -> 0x8002F10C
void * xDebugTweak_StaticAlloc(unsigned int size /* r30 */) {
    // Local variables
    void * result; // r31

    // References
    // -> static unsigned char * xDebugTweak_StaticCurr;
    // -> static char __FUNCTION__[24];
    // -> static unsigned char * xDebugTweak_StaticMax;
}

static char __FUNCTION__[26]; // size: 0x1A, address: 0x80415490
static char __FUNCTION__[26]; // size: 0x1A, address: 0x804154AC
static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFBE18
static char __FUNCTION__[17]; // size: 0x11, address: 0x80BFBE28
static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFBE3C
static char __FUNCTION__[18]; // size: 0x12, address: 0x80BFBE4C
static char __FUNCTION__[19]; // size: 0x13, address: 0x80BFBE60
static char __FUNCTION__[17]; // size: 0x11, address: 0x80BFBE74
static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFBE88
static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFBE98
// Range: 0x8002F10C -> 0x8002F16C
struct tweak_callback * xDebugTweakChainCallbacks(const struct tweak_callback & cb1 /* r30 */, const struct tweak_callback & cb2 /* r31 */) {}

// total size: 0x30
struct tweak_callback_wrapper : public tweak_callback {
    // Functions
    static tweak_callback_wrapper(const struct tweak_callback & cb1, const struct tweak_callback & cb2);

    // Members
    const struct tweak_callback * cb1; // offset 0x28, size 0x4
    const struct tweak_callback * cb2; // offset 0x2C, size 0x4
};
// Range: 0x8002F16C -> 0x8002F204
// this: r31
static tweak_callback_wrapper::tweak_callback_wrapper(const struct tweak_callback & cb1 /* r0 */, const struct tweak_callback & cb2 /* r0 */) {}

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
// total size: 0xC
struct /* @class$930xDebugTweak_cpp */ {
    // Members
    int value_def; // offset 0x0, size 0x4
    int value_min; // offset 0x4, size 0x4
    int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$931xDebugTweak_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int value_min; // offset 0x4, size 0x4
    unsigned int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$932xDebugTweak_cpp */ {
    // Members
    float value_def; // offset 0x0, size 0x4
    float value_min; // offset 0x4, size 0x4
    float value_max; // offset 0x8, size 0x4
};
// total size: 0x1
struct /* @class$933xDebugTweak_cpp */ {
    // Members
    unsigned char value_def; // offset 0x0, size 0x1
};
// total size: 0x10
struct /* @class$934xDebugTweak_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int labels_size; // offset 0x4, size 0x4
    const char * * labels; // offset 0x8, size 0x4
    void * values; // offset 0xC, size 0x4
};
// total size: 0x8
struct /* @class$935xDebugTweak_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
};
// total size: 0x10
struct /* @class$936xDebugTweak_cpp */ {
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
        struct /* @class$930xDebugTweak_cpp */ {
            // Members
            int value_def; // offset 0x0, size 0x4
            int value_min; // offset 0x4, size 0x4
            int value_max; // offset 0x8, size 0x4
        } int_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$931xDebugTweak_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int value_min; // offset 0x4, size 0x4
            unsigned int value_max; // offset 0x8, size 0x4
        } uint_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$932xDebugTweak_cpp */ {
            // Members
            float value_def; // offset 0x0, size 0x4
            float value_min; // offset 0x4, size 0x4
            float value_max; // offset 0x8, size 0x4
        } float_context; // offset 0x18, size 0xC
        // total size: 0x1
        struct /* @class$933xDebugTweak_cpp */ {
            // Members
            unsigned char value_def; // offset 0x0, size 0x1
        } bool_context; // offset 0x18, size 0x1
        // total size: 0x10
        struct /* @class$934xDebugTweak_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int labels_size; // offset 0x4, size 0x4
            const char * * labels; // offset 0x8, size 0x4
            void * values; // offset 0xC, size 0x4
        } select_context; // offset 0x18, size 0x10
        // total size: 0x8
        struct /* @class$935xDebugTweak_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int mask; // offset 0x4, size 0x4
        } flag_context; // offset 0x18, size 0x8
        // total size: 0x10
        struct /* @class$936xDebugTweak_cpp */ {
            // Members
            unsigned char pad[16]; // offset 0x0, size 0x10
        } all_context; // offset 0x18, size 0x10
    };
};
// Range: 0x8002F204 -> 0x8002F334
static void tweak_callback_wrapper::wrap_convert_tweak_to_mem(const struct tweak_info & info /* r29 */, void * value /* r30 */) {
    // Local variables
    const struct tweak_callback_wrapper * cb_wrap; // r31
    struct tweak_info ncinfo; // r1+0x8

    // References
    // -> static char __FUNCTION__[26];
}

// Range: 0x8002F334 -> 0x8002F464
static void tweak_callback_wrapper::wrap_convert_mem_to_tweak(const struct tweak_info & info /* r29 */, void * value /* r30 */) {
    // Local variables
    const struct tweak_callback_wrapper * cb_wrap; // r31
    struct tweak_info ncinfo; // r1+0x8

    // References
    // -> static char __FUNCTION__[26];
}

// Range: 0x8002F464 -> 0x8002F574
static void tweak_callback_wrapper::wrap_on_update(const struct tweak_info & info /* r30 */) {
    // Local variables
    const struct tweak_callback_wrapper * cb_wrap; // r31
    struct tweak_info ncinfo; // r1+0x8

    // References
    // -> static char __FUNCTION__[15];
}

// Range: 0x8002F574 -> 0x8002F684
static void tweak_callback_wrapper::wrap_on_collapse(const struct tweak_info & info /* r30 */) {
    // Local variables
    const struct tweak_callback_wrapper * cb_wrap; // r31
    struct tweak_info ncinfo; // r1+0x8

    // References
    // -> static char __FUNCTION__[17];
}

// Range: 0x8002F684 -> 0x8002F794
static void tweak_callback_wrapper::wrap_on_expand(const struct tweak_info & info /* r30 */) {
    // Local variables
    const struct tweak_callback_wrapper * cb_wrap; // r31
    struct tweak_info ncinfo; // r1+0x8

    // References
    // -> static char __FUNCTION__[15];
}

// Range: 0x8002F794 -> 0x8002F8A4
static void tweak_callback_wrapper::wrap_on_stop_edit(const struct tweak_info & info /* r30 */) {
    // Local variables
    const struct tweak_callback_wrapper * cb_wrap; // r31
    struct tweak_info ncinfo; // r1+0x8

    // References
    // -> static char __FUNCTION__[18];
}

// Range: 0x8002F8A4 -> 0x8002F9B4
static void tweak_callback_wrapper::wrap_on_start_edit(const struct tweak_info & info /* r30 */) {
    // Local variables
    const struct tweak_callback_wrapper * cb_wrap; // r31
    struct tweak_info ncinfo; // r1+0x8

    // References
    // -> static char __FUNCTION__[19];
}

// Range: 0x8002F9B4 -> 0x8002FAC4
static void tweak_callback_wrapper::wrap_on_unselect(const struct tweak_info & info /* r30 */) {
    // Local variables
    const struct tweak_callback_wrapper * cb_wrap; // r31
    struct tweak_info ncinfo; // r1+0x8

    // References
    // -> static char __FUNCTION__[17];
}

// Range: 0x8002FAC4 -> 0x8002FBD4
static void tweak_callback_wrapper::wrap_on_select(const struct tweak_info & info /* r30 */) {
    // Local variables
    const struct tweak_callback_wrapper * cb_wrap; // r31
    struct tweak_info ncinfo; // r1+0x8

    // References
    // -> static char __FUNCTION__[15];
}

// Range: 0x8002FBD4 -> 0x8002FCE4
static void tweak_callback_wrapper::wrap_on_change(const struct tweak_info & info /* r30 */) {
    // Local variables
    const struct tweak_callback_wrapper * cb_wrap; // r31
    struct tweak_info ncinfo; // r1+0x8

    // References
    // -> static char __FUNCTION__[15];
}

static signed short special_char_lookup[256]; // size: 0x200, address: 0x803A92D8
// Range: 0x8002FCE4 -> 0x8002FD3C
static int simemcmp(void * d1 /* r3 */, void * d2 /* r4 */, unsigned long size /* r0 */) {
    // Local variables
    const char * s1; // r3
    const char * end_s1; // r5
    const char * s2; // r4
    int cmp; // r0

    // References
    // -> static signed short special_char_lookup[256];
}

// Range: 0x8002FD3C -> 0x8002FD84
static int sistrcmp(void * d1 /* r3 */, void * d2 /* r4 */) {
    // Local variables
    const char * s1; // r3
    const char * s2; // r4
    char c1; // r7
    int cmp; // r5

    // References
    // -> static signed short special_char_lookup[256];
}

// Range: 0x8002FD84 -> 0x8002FDF0
static int sicompare(const struct substr & s1 /* r30 */, const struct substr & s2 /* r31 */) {
    // Local variables
    int c; // r0
}

static float tweak_move_delay; // size: 0x4, address: 0x80BFBEA8
static float tweak_move_speed; // size: 0x4, address: 0x80BFBEAC
static float tweak_move_super_speed; // size: 0x4, address: 0x80BFBEB0
static float tweak_box_value_font_width; // size: 0x4, address: 0x80C0708C
static float tweak_box_value_font_height; // size: 0x4, address: 0x80C07090
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
static struct xColor_tag tweak_box_help_color; // size: 0x4, address: 0x80C0A458
static struct xColor_tag tweak_box_name_color[8]; // size: 0x20, address: 0x803A94D8
static struct xColor_tag tweak_box_value_normal_color[8]; // size: 0x20, address: 0x803A94F8
static struct xColor_tag tweak_box_value_edit_color[8]; // size: 0x20, address: 0x803A9518
static struct xColor_tag tweak_box_value_press_color[8]; // size: 0x20, address: 0x803A9538
static struct xColor_tag tweak_box_value_read_only_color[8]; // size: 0x20, address: 0x803A9558
static char help_text_short[110]; // size: 0x6E, address: 0x803A9578
static char help_text_long_browse[263]; // size: 0x107, address: 0x803A95E8
static char help_text_long_edit[322]; // size: 0x142, address: 0x803A96F0
static char * tweak_dump_files[11]; // size: 0x2C, address: 0x804154C8
static char whitespace_buffer[101]; // size: 0x65, address: 0x803A9834
static unsigned char debug_tweak_inited; // size: 0x1, address: 0x80C07094
// total size: 0x30
struct value_type : public tweak_info {
    // Members
    signed short edit_digit; // offset 0x28, size 0x2
    unsigned char change_index; // offset 0x2A, size 0x1
    unsigned char pad; // offset 0x2B, size 0x1
    unsigned short parent; // offset 0x2C, size 0x2
    unsigned short next; // offset 0x2E, size 0x2
};
static struct value_type * values; // size: 0x4, address: 0x80BFBEB4
// total size: 0x84
struct stripped_value_type {
    // Members
    char name[128]; // offset 0x0, size 0x80
    struct value_type * value; // offset 0x80, size 0x4
};
static struct stripped_value_type * stripped_values; // size: 0x4, address: 0x80BFBEB8
static class fixed_stack_list * strings; // size: 0x4, address: 0x80BFBEBC
// total size: 0x30
struct node_type : public empty_node_type {
    // Members
    struct tweak_info value; // offset 0x8, size 0x28
};
// total size: 0x8
struct empty_node_type {
    // Members
    struct node_type * prev; // offset 0x0, size 0x4
    struct node_type * next; // offset 0x4, size 0x4
};
// total size: 0xC18
class fixed_stack_list {
    // Members
    unsigned long _size; // offset 0x0, size 0x4
    struct empty_node_type head; // offset 0x4, size 0x8
    struct empty_node_type tail; // offset 0xC, size 0x8
    struct node_type * stack; // offset 0x14, size 0x4
    struct node_type buffer[64]; // offset 0x18, size 0xC00
};
static class fixed_stack_list inserts; // size: 0xC18, address: 0x80A5AF30
static unsigned int values_size; // size: 0x4, address: 0x80C07098
static unsigned int erase_size; // size: 0x4, address: 0x80C0709C
static unsigned int first_visible; // size: 0x4, address: 0x80C070A0
static unsigned int selected; // size: 0x4, address: 0x80C070A4
// total size: 0x14
struct tag_entry {
    // Members
    struct substr name; // offset 0x0, size 0x8
    char op; // offset 0x8, size 0x1
    struct substr * args; // offset 0xC, size 0x4
    unsigned long args_size; // offset 0x10, size 0x4
};
// total size: 0x8
struct tag_entry_list {
    // Members
    const struct tag_entry * entries; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
// total size: 0x74
class xtextbox {
    // Static members
    static unsigned char japanese_word_breaking; // size: 0x1
    static struct callback text_cb; // size: 0xC

    // Members
public:
    class xfont font; // offset 0x0, size 0x30
    struct basic_rect bounds; // offset 0x30, size 0x10
    unsigned int flags; // offset 0x40, size 0x4
    float line_space; // offset 0x44, size 0x4
    float tab_stop; // offset 0x48, size 0x4
    float left_indent; // offset 0x4C, size 0x4
    float right_indent; // offset 0x50, size 0x4
    const struct callback * cb; // offset 0x54, size 0x4
    void * context; // offset 0x58, size 0x4
private:
    const char * * texts; // offset 0x5C, size 0x4
    const unsigned long * text_sizes; // offset 0x60, size 0x4
    unsigned long texts_size; // offset 0x64, size 0x4
    struct substr text; // offset 0x68, size 0x8
    unsigned int text_hash; // offset 0x70, size 0x4
};
static class xtextbox value_box; // size: 0x74, address: 0x80A5BB48
static class xtextbox help_box; // size: 0x74, address: 0x80A5BBBC
static unsigned char whole_screen; // size: 0x1, address: 0x80C070A8
static unsigned char moving; // size: 0x1, address: 0x80C070A9
static float move_time; // size: 0x4, address: 0x80C070AC
static unsigned char editting; // size: 0x1, address: 0x80C070B0
static unsigned char expand_help; // size: 0x1, address: 0x80C070B1
static struct xColor_tag background_color; // size: 0x4, address: 0x80C070B4
static char dump_file[32]; // size: 0x20, address: 0x80A5BC30
static unsigned int dump_file_index; // size: 0x4, address: 0x80C070B8
static float font_size_multiplier; // size: 0x4, address: 0x80C070BC
static unsigned char need_relink; // size: 0x1, address: 0x80C070C0
static unsigned char need_sort_stripped; // size: 0x1, address: 0x80C070C1
static unsigned int old_uint_value; // size: 0x4, address: 0x80C070C4
static unsigned short changed_values[256]; // size: 0x200, address: 0x80A5BC50
static unsigned int changed_values_size; // size: 0x4, address: 0x80C070C8
static unsigned char need_sort_changed; // size: 0x1, address: 0x80C070CC
// total size: 0x3
struct /* @class$2011xDebugTweak_cpp */ {
    // Members
    unsigned char any; // offset 0x0, size 0x1
    unsigned char selected; // offset 0x1, size 0x1
    unsigned char opened; // offset 0x2, size 0x1
};
static // total size: 0x3
struct /* @class$2011xDebugTweak_cpp */ {
    // Members
    unsigned char any; // offset 0x0, size 0x1
    unsigned char selected; // offset 0x1, size 0x1
    unsigned char opened; // offset 0x2, size 0x1
} automenu_enable; // size: 0x3, address: 0x80C070D0
static unsigned char warned_about_memory; // size: 0x1, address: 0x80C070D3
static int max_values; // size: 0x4, address: 0x80C070D4
static signed char init; // size: 0x1, address: 0x80C070D8
static int max_strings; // size: 0x4, address: 0x80C070DC
static signed char init; // size: 0x1, address: 0x80C070E0
static struct tweak_callback file_index_cb; // size: 0x28, address: 0x803A989C
static struct tweak_callback save_cb; // size: 0x28, address: 0x803A98C4
static struct tweak_callback save_changed_cb; // size: 0x28, address: 0x803A98EC
static struct tweak_callback save_opened_cb; // size: 0x28, address: 0x803A9914
static struct tweak_callback load_cb; // size: 0x28, address: 0x803A993C
static struct tweak_callback expand_all_cb; // size: 0x28, address: 0x803A9964
static struct tweak_callback collapse_all_cb; // size: 0x28, address: 0x803A998C
// Range: 0x8002FDF0 -> 0x800301E8
static void reset() {
    // References
    // -> static float tweak_move_super_speed;
    // -> static float tweak_move_speed;
    // -> static float tweak_move_delay;
    // -> static // total size: 0x3
struct /* @class$2011xDebugTweak_cpp */ {
    // Members
    unsigned char any; // offset 0x0, size 0x1
    unsigned char selected; // offset 0x1, size 0x1
    unsigned char opened; // offset 0x2, size 0x1
} automenu_enable;
    // -> static struct tweak_callback collapse_all_cb;
    // -> static struct tweak_callback expand_all_cb;
    // -> static float font_size_multiplier;
    // -> static struct tweak_callback load_cb;
    // -> static char dump_file[32];
    // -> static struct tweak_callback save_opened_cb;
    // -> static struct tweak_callback save_changed_cb;
    // -> static struct tweak_callback save_cb;
    // -> static struct tweak_callback file_index_cb;
    // -> static char * tweak_dump_files[11];
    // -> static unsigned int dump_file_index;
    // -> static struct xColor_tag background_color;
    // -> static int max_strings;
    // -> static signed char init;
    // -> static class fixed_stack_list * strings;
    // -> static int max_values;
    // -> static signed char init;
    // -> static unsigned int values_size;
    // -> static class fixed_stack_list inserts;
    // -> static unsigned int changed_values_size;
    // -> static unsigned int selected;
    // -> static unsigned int first_visible;
    // -> static unsigned int erase_size;
    // -> static unsigned char debug_tweak_inited;
    // -> static unsigned char need_sort_changed;
    // -> static unsigned char need_sort_stripped;
    // -> static unsigned char need_relink;
    // -> static unsigned char warned_about_memory;
}

// total size: 0x80
struct string_type {
    // Members
    char text[128]; // offset 0x0, size 0x80
};
// total size: 0x88
struct node_type : public empty_node_type {
    // Members
    struct string_type value; // offset 0x8, size 0x80
};
// total size: 0x8
struct empty_node_type {
    // Members
    struct node_type * prev; // offset 0x0, size 0x4
    struct node_type * next; // offset 0x4, size 0x4
};
// total size: 0x1B6D18
class fixed_stack_list {
    // Members
    unsigned long _size; // offset 0x0, size 0x4
    struct empty_node_type head; // offset 0x4, size 0x8
    struct empty_node_type tail; // offset 0xC, size 0x8
    struct node_type * stack; // offset 0x14, size 0x4
    struct node_type buffer[13216]; // offset 0x18, size 0x1B6D00
};
// Range: 0x800301E8 -> 0x80030220
static unsigned long size() {
    // References
    // -> static unsigned int erase_size;
    // -> static class fixed_stack_list inserts;
    // -> static unsigned int values_size;
}

// Range: 0x80030220 -> 0x80030288
static unsigned char full() {
    // References
    // -> static class fixed_stack_list * strings;
}

unsigned int gSoak; // size: 0x4, address: 0x80C07E3C
// Range: 0x80030288 -> 0x80030304
static unsigned char check_insert() {
    // References
    // -> static unsigned char warned_about_memory;
    // -> unsigned int gSoak;
}

// total size: 0x8
struct substr {
    // Members
    const char * text; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
// Range: 0x80030304 -> 0x8003045C
static void insert(const struct tweak_info & t /* r31 */) {
    // Local variables
    unsigned char exists; // r1+0x8
    struct tweak_info & nt; // r30
    char buffer[128]; // r1+0x14
    struct substr childstr; // r1+0xC
}

char __FUNCTION__$localstatic1$__rf__Q233fixed_stack_list<10tweak_info,64>8iteratorCFv[5]; // size: 0x5, address: 0x80BFBEC0
char __FUNCTION__$localstatic1$__ml__Q233fixed_stack_list<10tweak_info,64>8iteratorCFv[5]; // size: 0x5, address: 0x80BFBEC8
char __FUNCTION__$localstatic1$erase__33fixed_stack_list<10tweak_info,64>FQ233fixed_stack_list<10tweak_info,64>8iterator[6]; // size: 0x6, address: 0x80BFBED0
char __FUNCTION__$localstatic1$free__33fixed_stack_list<10tweak_info,64>FPQ233fixed_stack_list<10tweak_info,64>9node_type[5]; // size: 0x5, address: 0x80BFBED8
// total size: 0x4
class iterator {
    // Members
    struct node_type * n; // offset 0x0, size 0x4
};
// Range: 0x80030480 -> 0x80030680
static void erase(const struct substr & name /* r28 */) {
    // Local variables
    unsigned long at; // r1+0x18
    unsigned long end; // r30
    unsigned long i; // r29
    class iterator it; // r1+0x14
    unsigned char found; // r30
    struct substr pname; // r1+0x24

    // References
    // -> static unsigned int erase_size;
    // -> static class fixed_stack_list inserts;
    // -> static struct value_type * values;
    // -> static unsigned int selected;
    // -> static unsigned char need_relink;
}

// Range: 0x80030680 -> 0x800307D0
static void erase(const struct substr & name /* r27 */, unsigned char (* cb)(struct tweak_info &, void *) /* r28 */, void * context /* r29 */) {
    // Local variables
    unsigned long at; // r1+0x8
    unsigned char found; // r0
    unsigned long i; // r30

    // References
    // -> static unsigned int values_size;
    // -> static unsigned int erase_size;
    // -> static struct value_type * values;
    // -> static unsigned int selected;
}

// Range: 0x800307D0 -> 0x8003080C
static void render() {
    // References
    // -> static class xtextbox help_box;
}

// Range: 0x8003080C -> 0x80030DFC
static void update(float dt /* f31 */) {
    // Local variables
    unsigned char edit_pad; // r31
    struct value_type & sv; // r30
    unsigned char val; // r1+0x8
    unsigned int val; // r1+0xC
    int inc; // r0
    int i; // r28
    int inc; // r0
    int i; // r28
    unsigned short child; // r0
    unsigned char changed; // r0
    int inc; // r0
    int inc; // r4
    int inc; // r0
    int inc; // r0

    // References
    // -> static unsigned char moving;
    // -> static unsigned char editting;
    // -> static unsigned int selected;
    // -> static unsigned char expand_help;
    // -> static struct value_type * values;
    // -> static unsigned int values_size;
}

// Range: 0x80030DFC -> 0x80030E00
static void autosave_patch() {}

// Range: 0x80030E00 -> 0x80030ED0
static struct tweak_info * find(const struct substr & name /* r30 */) {
    // Local variables
    unsigned long at; // r1+0x10
    class iterator it; // r1+0xC

    // References
    // -> static class fixed_stack_list inserts;
    // -> static struct value_type * values;
}

// Range: 0x80030ED0 -> 0x80030F3C
static void expand(unsigned long at /* r3 */) {
    // Local variables
    struct value_type & v; // r3

    // References
    // -> static struct value_type * values;
}

// Range: 0x80030F3C -> 0x80030FA0
static void expand(const char * name /* r31 */) {
    // Local variables
    unsigned long at; // r1+0x8
}

// Range: 0x80030FA0 -> 0x80030FEC
static void collapse(unsigned long at /* r0 */) {
    // Local variables
    struct value_type & v; // r3

    // References
    // -> static struct value_type * values;
}

// Range: 0x80030FEC -> 0x80031070
static void select(const char * name /* r31 */) {
    // Local variables
    unsigned long at; // r1+0x8

    // References
    // -> static unsigned char editting;
    // -> static struct value_type * values;
}

// Range: 0x80031070 -> 0x80031094
static struct value_type * get_selected() {
    // References
    // -> static unsigned int selected;
    // -> static struct value_type * values;
}

// Range: 0x80031094 -> 0x800310FC
static struct tweak_info * get_parent(const struct tweak_info & info /* r31 */) {
    // Local variables
    const struct value_type & v; // r0
    unsigned short i; // r0

    // References
    // -> static struct value_type * values;
}

// Range: 0x800310FC -> 0x8003117C
static unsigned long count_children(const struct tweak_info & info /* r31 */) {
    // Local variables
    unsigned short i; // r0
    unsigned long total; // r31
    unsigned short it; // r3

    // References
    // -> static unsigned int values_size;
    // -> static struct value_type * values;
}

static char __FUNCTION__[10]; // size: 0xA, address: 0x80BFBEE0
// Range: 0x8003117C -> 0x80031238
static void get_value(const struct tweak_info & v /* r0 */, unsigned int & val /* r0 */, void * in /* r5 */) {
    // References
    // -> static char __FUNCTION__[10];
}

static char __FUNCTION__[10]; // size: 0xA, address: 0x80BFBEEC
// Range: 0x80031238 -> 0x800312E8
static void set_value(const struct tweak_info & v /* r0 */, unsigned int val /* r0 */, void * out /* r5 */) {
    // References
    // -> static char __FUNCTION__[10];
}

static char __FUNCTION__[10]; // size: 0xA, address: 0x80BFBEF8
// Range: 0x800312E8 -> 0x800313A8
static void get_value(const struct tweak_info & v /* r0 */, int & val /* r0 */, void * in /* r5 */) {
    // References
    // -> static char __FUNCTION__[10];
}

static char __FUNCTION__[10]; // size: 0xA, address: 0x80BFBF04
// Range: 0x800313A8 -> 0x80031458
static void set_value(const struct tweak_info & v /* r0 */, int val /* r0 */, void * out /* r5 */) {
    // References
    // -> static char __FUNCTION__[10];
}

// Range: 0x80031458 -> 0x80031470
static void get_value(const struct tweak_info & v /* r0 */, float & val /* r0 */, void * in /* r5 */) {}

// Range: 0x80031470 -> 0x80031484
static void set_value(const struct tweak_info & v /* r0 */, float val /* f0 */, void * out /* r4 */) {}

// Range: 0x80031484 -> 0x800314C8
static void autoload() {
    // Local variables
    unsigned int old_dump_file_index; // r31

    // References
    // -> static unsigned int dump_file_index;
}

// Range: 0x800314C8 -> 0x80031510
static void autosave() {
    // Local variables
    unsigned int old_dump_file_index; // r31

    // References
    // -> static unsigned int dump_file_index;
}

// Range: 0x80031510 -> 0x8003152C
static float box_top() {
    // References
    // -> static unsigned char whole_screen;
}

// Range: 0x8003152C -> 0x800315B8
static unsigned char find(const struct substr & name /* r27 */, unsigned long & at /* r28 */) {
    // Local variables
    unsigned long lower; // r31
    unsigned long upper; // r30
    unsigned long i; // r29
    int cmp; // r0

    // References
    // -> static struct value_type * values;
    // -> static unsigned int values_size;
}

// Range: 0x800315B8 -> 0x80031640
static unsigned long find_lowest(const char * name /* r0 */) {
    // Local variables
    struct substr ss; // r1+0x14
    unsigned long at; // r1+0x8
}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80BFBF10
char __FUNCTION__$localstatic1$get_iterator__79fixed_stack_list<Q325@unnamed@xDebugTweak_cpp@11debug_tweak11string_type,13216>FPCQ325@unnamed@xDebugTweak_cpp@11debug_tweak11string_type[13]; // size: 0xD, address: 0x80BFBF1C
char __FUNCTION__$localstatic1$erase__79fixed_stack_list<Q325@unnamed@xDebugTweak_cpp@11debug_tweak11string_type,13216>FQ279fixed_stack_list<Q325@unnamed@xDebugTweak_cpp@11debug_tweak11string_type,13216>8iterator[6]; // size: 0x6, address: 0x80BFBF2C
char __FUNCTION__$localstatic1$free__79fixed_stack_list<Q325@unnamed@xDebugTweak_cpp@11debug_tweak11string_type,13216>FPQ279fixed_stack_list<Q325@unnamed@xDebugTweak_cpp@11debug_tweak11string_type,13216>9node_type[5]; // size: 0x5, address: 0x80BFBF34
// total size: 0x4
class iterator {
    // Members
    struct node_type * n; // offset 0x0, size 0x4
};
// Range: 0x80031640 -> 0x800316E4
static void free_buffer(struct tweak_info & v /* r31 */) {
    // Local variables
    class iterator it; // r1+0xC

    // References
    // -> static class fixed_stack_list * strings;
    // -> static char __FUNCTION__[12];
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80BFBF3C
char __FUNCTION__$localstatic1$alloc__79fixed_stack_list<Q325@unnamed@xDebugTweak_cpp@11debug_tweak11string_type,13216>Fv[6]; // size: 0x6, address: 0x80BFBF4C
char __FUNCTION__$localstatic1$back__79fixed_stack_list<Q325@unnamed@xDebugTweak_cpp@11debug_tweak11string_type,13216>Fv[5]; // size: 0x5, address: 0x80BFBF54
// Range: 0x800316E4 -> 0x800317F0
static void alloc_buffer(struct tweak_info & v /* r30 */) {
    // Local variables
    char * buffer; // r0

    // References
    // -> static class fixed_stack_list * strings;
    // -> static char __FUNCTION__[13];
}

static unsigned char values_dirty; // size: 0x1, address: 0x80C070E1
static char __FUNCTION__[14]; // size: 0xE, address: 0x80BFBF5C
char __FUNCTION__$localstatic1$erase__33fixed_stack_list<10tweak_info,64>FQ233fixed_stack_list<10tweak_info,64>8iteratorQ233fixed_stack_list<10tweak_info,64>8iterator[6]; // size: 0x6, address: 0x80BFBF6C
// Range: 0x800317F0 -> 0x800319FC
static void flush_inserts() {
    // Local variables
    int src; // r30
    int dst; // r29
    class iterator it; // r1+0x10

    // References
    // -> static class fixed_stack_list inserts;
    // -> static struct value_type * values;
    // -> static unsigned int selected;
    // -> static unsigned int values_size;
    // -> static char __FUNCTION__[14];
    // -> static unsigned char values_dirty;
    // -> static unsigned char need_sort_stripped;
    // -> static unsigned char need_relink;
}

// Range: 0x800319FC -> 0x80031AF0
static void flush_erases() {
    // Local variables
    unsigned long src; // r29
    unsigned long dst; // r28
    struct value_type & sv; // r4
    struct value_type & dv; // r3

    // References
    // -> static unsigned int erase_size;
    // -> static unsigned int values_size;
    // -> static unsigned int selected;
    // -> static struct value_type * values;
    // -> static unsigned char need_sort_stripped;
    // -> static unsigned char need_relink;
    // -> static unsigned char values_dirty;
}

// Range: 0x80031AF0 -> 0x80031B44
static void flush_and_relink() {
    // References
    // -> static unsigned int values_size;
    // -> static unsigned int selected;
    // -> static unsigned char need_relink;
}

// Range: 0x80031B44 -> 0x80031B68
static void flush() {}

// Range: 0x80031B68 -> 0x80031BCC
static struct substr parent_name(const struct substr & name /* r0 */) {
    // Local variables
    int i; // r4
}

// Range: 0x80031BCC -> 0x80031C38
static struct substr child_name(const struct substr & name /* r7 */) {
    // Local variables
    int i; // r6
}

// Range: 0x80031C38 -> 0x80031CA8
static void add_parent(const struct substr & name /* r0 */, unsigned short flags /* r31 */) {
    // Local variables
    struct substr pn; // r1+0xC
    unsigned char exists; // r1+0x8
    struct tweak_info & t; // r0
}

static char __FUNCTION__[4]; // size: 0x4, address: 0x80BFBF74
char __FUNCTION__$localstatic1$alloc__33fixed_stack_list<10tweak_info,64>Fv[6]; // size: 0x6, address: 0x80BFBF78
// Range: 0x80031CA8 -> 0x80031F24
static struct tweak_info & get(const struct substr & name /* r29 */, unsigned char & exists /* r30 */, unsigned short flags /* r31 */) {
    // Local variables
    unsigned long at; // r1+0x20
    struct value_type & v; // r4
    class iterator it; // r1+0x1C
    class iterator it; // r1+0x18

    // References
    // -> static class fixed_stack_list inserts;
    // -> static struct value_type * values;
    // -> static unsigned int erase_size;
    // -> static char __FUNCTION__[4];
}

// Range: 0x80031F24 -> 0x80032074
static void relink() {
    // Local variables
    struct substr pname; // r1+0x10
    unsigned short i; // r30
    struct value_type & v; // r27
    unsigned short parent; // r26
    unsigned short prev; // r25
    unsigned short parent2; // r3

    // References
    // -> static unsigned int values_size;
    // -> static struct value_type * values;
    // -> static unsigned char need_relink;
}

// Range: 0x80032074 -> 0x80032114
static void reset_help_box() {
    // References
    // -> static class xtextbox help_box;
    // -> static struct xColor_tag tweak_box_help_color;
}

// total size: 0x2
struct /* @class$1741xDebugTweak_cpp */ {
    // Members
    unsigned char invisible : 1; // offset 0x0, size 0x1
    unsigned char ethereal : 1; // offset 0x0, size 0x1
    unsigned char merge : 1; // offset 0x0, size 0x1
    unsigned char word_break : 1; // offset 0x0, size 0x1
    unsigned char word_end : 1; // offset 0x0, size 0x1
    unsigned char line_break : 1; // offset 0x0, size 0x1
    unsigned char stop : 1; // offset 0x0, size 0x1
    unsigned char tab : 1; // offset 0x0, size 0x1
    unsigned char insert : 1; // offset 0x1, size 0x1
    unsigned char dynamic : 1; // offset 0x1, size 0x1
    unsigned char page_break : 1; // offset 0x1, size 0x1
    unsigned char stateful : 1; // offset 0x1, size 0x1
    unsigned char japanese_break : 1; // offset 0x1, size 0x1
    unsigned short dummy : 3; // offset 0x0, size 0x2
};
// total size: 0x20
struct split_tag {
    // Members
    struct substr tag; // offset 0x0, size 0x8
    struct substr name; // offset 0x8, size 0x8
    struct substr action; // offset 0x10, size 0x8
    struct substr value; // offset 0x18, size 0x8
};
// total size: 0x14
struct tag_type {
    // Members
    struct substr name; // offset 0x0, size 0x8
    void (* parse_tag)(struct jot &, class xtextbox &, class xtextbox &, struct split_tag &); // offset 0x8, size 0x4
    void (* reset_tag)(struct jot &, class xtextbox &, class xtextbox &, struct split_tag &); // offset 0xC, size 0x4
    void * context; // offset 0x10, size 0x4
};
// total size: 0x38
struct jot {
    // Members
    struct substr s; // offset 0x0, size 0x8
    // total size: 0x2
    struct /* @class$1741xDebugTweak_cpp */ {
        // Members
        unsigned char invisible : 1; // offset 0x0, size 0x1
        unsigned char ethereal : 1; // offset 0x0, size 0x1
        unsigned char merge : 1; // offset 0x0, size 0x1
        unsigned char word_break : 1; // offset 0x0, size 0x1
        unsigned char word_end : 1; // offset 0x0, size 0x1
        unsigned char line_break : 1; // offset 0x0, size 0x1
        unsigned char stop : 1; // offset 0x0, size 0x1
        unsigned char tab : 1; // offset 0x0, size 0x1
        unsigned char insert : 1; // offset 0x1, size 0x1
        unsigned char dynamic : 1; // offset 0x1, size 0x1
        unsigned char page_break : 1; // offset 0x1, size 0x1
        unsigned char stateful : 1; // offset 0x1, size 0x1
        unsigned char japanese_break : 1; // offset 0x1, size 0x1
        unsigned short dummy : 3; // offset 0x0, size 0x2
    } flag; // offset 0x8, size 0x2
    unsigned short context_size; // offset 0xA, size 0x2
    void * context; // offset 0xC, size 0x4
    struct basic_rect bounds; // offset 0x10, size 0x10
    struct basic_rect render_bounds; // offset 0x20, size 0x10
    const struct callback * cb; // offset 0x30, size 0x4
    const struct tag_type * tag; // offset 0x34, size 0x4
};
// total size: 0xC
struct callback {
    // Members
    void (* render)(struct jot &, class xtextbox &, float, float); // offset 0x0, size 0x4
    void (* layout_update)(struct jot &, class xtextbox &, class xtextbox &); // offset 0x4, size 0x4
    void (* render_update)(struct jot &, class xtextbox &, class xtextbox &); // offset 0x8, size 0x4
};
struct xColor_tag g_BLACK; // size: 0x4, address: 0x80C0A278
struct xColor_tag g_WHITE; // size: 0x4, address: 0x80C0A27C
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
// Range: 0x80032114 -> 0x8003215C
static void reset_value_box() {
    // References
    // -> static class xtextbox value_box;
}

// Range: 0x8003215C -> 0x80032210
static void refresh_help_box() {
    // Local variables
    const char * help_text; // r30

    // References
    // -> static class xtextbox help_box;
    // -> static char help_text_long_edit[322];
    // -> static char help_text_long_browse[263];
    // -> static unsigned char editting;
    // -> static char help_text_short[110];
    // -> static unsigned char expand_help;
}

// total size: 0x388
struct jot_block {
    // Members
    struct jot jots[16]; // offset 0x0, size 0x380
    struct jot_block * next_block; // offset 0x380, size 0x4
    unsigned char used; // offset 0x384, size 0x1
};
// total size: 0x20
struct jot_line {
    // Members
    struct basic_rect bounds; // offset 0x0, size 0x10
    float baseline; // offset 0x10, size 0x4
    unsigned long first; // offset 0x14, size 0x4
    unsigned long last; // offset 0x18, size 0x4
    unsigned char page_break; // offset 0x1C, size 0x1
};
// total size: 0x88
struct jot_line_block {
    // Members
    struct jot_line jot_lines[4]; // offset 0x0, size 0x80
    struct jot_line_block * next_block; // offset 0x80, size 0x4
    unsigned char used; // offset 0x84, size 0x1
};
// total size: 0x4C
struct context_buffer_block {
    // Members
    unsigned char context_buffer[64]; // offset 0x0, size 0x40
    unsigned long size; // offset 0x40, size 0x4
    struct context_buffer_block * next_block; // offset 0x44, size 0x4
    unsigned char used; // offset 0x48, size 0x1
};
// total size: 0x10C
class layout {
    // Members
    class xtextbox tb; // offset 0x0, size 0x74
    struct jot_block * first_jot_block; // offset 0x74, size 0x4
    unsigned long _jots_size; // offset 0x78, size 0x4
    struct jot_line_block * first_line_block; // offset 0x7C, size 0x4
    unsigned long _lines_size; // offset 0x80, size 0x4
    struct context_buffer_block * first_context_buffer; // offset 0x84, size 0x4
    unsigned short dynamics[64]; // offset 0x88, size 0x80
    unsigned long dynamics_size; // offset 0x108, size 0x4
};
// Range: 0x80032210 -> 0x80032334
static void render_values() {
    // Local variables
    float h; // f31
    float y; // f30
    unsigned long i; // r30
    const struct value_type & v; // r29
    float name_height; // f29
    float value_height; // f28

    // References
    // -> static unsigned int values_size;
    // -> static class xtextbox value_box;
    // -> static struct value_type * values;
    // -> static unsigned int first_visible;
    // -> static class xtextbox help_box;
}

// Range: 0x80032334 -> 0x800323A0
static unsigned short get_index(const struct value_type & v /* r0 */) {
    // Local variables
    int diff; // r4

    // References
    // -> static unsigned int values_size;
    // -> static struct value_type * values;
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80BFBF80
// Range: 0x800323A0 -> 0x80032494
static unsigned short get_next_visible(unsigned short i /* r31 */) {
    // Local variables
    const struct value_type & v; // r3

    // References
    // -> static unsigned int values_size;
    // -> static struct value_type * values;
    // -> static char __FUNCTION__[17];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80BFBF94
// Range: 0x80032494 -> 0x80032578
static unsigned short get_prev_visible(unsigned short i /* r31 */) {
    // Local variables
    unsigned short p; // r5

    // References
    // -> static struct value_type * values;
    // -> static char __FUNCTION__[17];
}

// Range: 0x80032578 -> 0x800325D8
static unsigned short begin_child(unsigned short i /* r0 */) {
    // Local variables
    unsigned short child; // r6

    // References
    // -> static struct value_type * values;
    // -> static unsigned int values_size;
}

// Range: 0x800325D8 -> 0x80032614
static unsigned short end_child(unsigned short i /* r3 */) {
    // References
    // -> static unsigned int values_size;
    // -> static struct value_type * values;
}

// Range: 0x80032614 -> 0x800326EC
static void set_selected(unsigned long sel /* r30 */) {
    // Local variables
    unsigned long p; // r0
    unsigned long p; // r0

    // References
    // -> static struct value_type * values;
    // -> static unsigned int selected;
}

// Range: 0x800326EC -> 0x8003286C
static void refresh_visible() {
    // Local variables
    unsigned short prev; // r0
    unsigned long past_selected; // r29
    float h; // f31
    float y; // f30
    unsigned long i; // r28
    const struct value_type & v; // r27
    float name_height; // f29
    float value_height; // f1

    // References
    // -> static unsigned int first_visible;
    // -> static unsigned int values_size;
    // -> static unsigned int selected;
    // -> static struct value_type * values;
    // -> static class xtextbox help_box;
}

// Range: 0x8003286C -> 0x80032898
static unsigned long depth(const struct value_type & v /* r0 */) {
    // Local variables
    unsigned long total; // r3
    unsigned long i; // r0

    // References
    // -> static struct value_type * values;
}

// Range: 0x80032898 -> 0x800328EC
static void get_font_size(class xfont & f /* r0 */, const struct value_type & v /* r0 */, unsigned int noScaleFlag /* r0 */) {
    // References
    // -> static float tweak_box_value_font_height;
    // -> static float font_size_multiplier;
    // -> static float tweak_box_value_font_width;
}

// Range: 0x800328EC -> 0x800329A8
static void fit_value(class xtextbox & tb /* r31 */, const struct value_type & v /* r0 */, float y /* f28 */, float left /* f29 */, float right /* f30 */, float indent /* f31 */, unsigned int noScaleFlag /* r0 */) {}

// Range: 0x800329A8 -> 0x80032AB0
static float set_box_name(const struct value_type & v /* r31 */, float y /* f30 */) {
    // Local variables
    struct substr cname; // r1+0x8

    // References
    // -> static class xtextbox value_box;
    // -> static struct xColor_tag tweak_box_name_color[8];
}

unsigned char mIsPresent; // size: 0x1, address: 0x80C09730
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
enum eNPCType {
    eNPCType_None = -1,
    eNPCType_Unknown = -1,
    eNPCType_First = 0,
    eNPCType_SwarmMember = 0,
    eNPCType_Swarm_Owl = 1,
    eNPCType_Swarm_Bug = 2,
    eNPCType_Thief = 3,
    eNPCType_Simpleton = 4,
    eNPCType_Alarmer = 5,
    eNPCType_Waiter = 6,
    eNPCType_CMG_StirringPlayer = 7,
    eNPCType_CMG_StirringRemy = 8,
    eNPCType_CMG_LeftArm = 9,
    eNPCType_CMG_RightArm = 10,
    eNPCType_CMG_PourNSwirl = 11,
    eNPCType_SpringBoard = 12,
    eNPCType_ContextSensitive = 13,
    eNPCType_AnimViewer = 14,
    eNPCType_InstaKill = 15,
    eNPCTypeCount = 16,
    eNPCTypeForceInt = 2147483647,
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
// total size: 0x74
struct zNPCAssetRATS : public xDynAsset {
    // Members
    struct xEntAsset ent_asset; // offset 0x10, size 0x50
    unsigned int lightKitID; // offset 0x60, size 0x4
    unsigned int npcWalls; // offset 0x64, size 0x4
    unsigned int npcPerception; // offset 0x68, size 0x4
    float updateDistance; // offset 0x6C, size 0x4
    unsigned int flags; // offset 0x70, size 0x4
};
// total size: 0x14
struct xModelAssetInfo {
    // Members
    unsigned int Magic; // offset 0x0, size 0x4
    unsigned int NumModelInst; // offset 0x4, size 0x4
    unsigned int AnimTableID; // offset 0x8, size 0x4
    unsigned int CombatID; // offset 0xC, size 0x4
    unsigned int BrainID; // offset 0x10, size 0x4
};
// total size: 0x0
class zICompLogic {};
// total size: 0x0
class zICompNPCEntity {};
// total size: 0x0
class zICompSteering {};
// total size: 0x0
class zICompPerception {};
// total size: 0x0
class zICompSound {};
// total size: 0x0
class zICompCombat {};
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
// total size: 0x1C
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
// total size: 0x10
struct RwSphere {
    // Members
    struct RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
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
// total size: 0x18
struct xBox {
    // Members
    struct xVec3 upper; // offset 0x0, size 0xC
    struct xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0x4
struct /* @class$1088xDebugTweak_cpp */ {
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
    struct /* @class$1088xDebugTweak_cpp */ {
        // Members
        struct xVec3 * verts; // offset 0x0, size 0x4
    } anim_coll; // offset 0xA8, size 0x4
    struct xLight * lights[4]; // offset 0xAC, size 0x10
    float lightsDistance[4]; // offset 0xBC, size 0x10
};
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
struct /* @class$1226xDebugTweak_cpp */ {
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
        struct /* @class$1226xDebugTweak_cpp */ {
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
// total size: 0x0
struct xGrid {};
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
union /* @class$1227xDebugTweak_cpp */ {
    struct xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
    unsigned int rawIdx; // offset 0x0, size 0x4
    struct RwV3d * p; // offset 0x0, size 0x4
};
// total size: 0x8
struct xClumpCollBSPTriangle {
    // Members
    union /* @class$1227xDebugTweak_cpp */ {
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
// total size: 0x70
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
    struct xMemPool mempool; // offset 0x48, size 0x1C
    struct xBase * (* resolvID)(unsigned int); // offset 0x64, size 0x4
    char * (* base2Name)(struct xBase *); // offset 0x68, size 0x4
    char * (* id2Name)(unsigned int); // offset 0x6C, size 0x4
};
// total size: 0x68
class zNPCBase : public xBase {
    // Members
protected:
    struct xVec3 lastPos; // offset 0x10, size 0xC
    struct xVec3 lastOrientation; // offset 0x1C, size 0xC
    float updateCullDistance; // offset 0x28, size 0x4
    enum eNPCType type; // offset 0x2C, size 0x4
    struct zNPCAssetRATS * npcAsset; // offset 0x30, size 0x4
    unsigned int npcAssetSize; // offset 0x34, size 0x4
    const struct xModelAssetInfo * modelAsset; // offset 0x38, size 0x4
    class zNPCBase * children; // offset 0x3C, size 0x4
    class zNPCBase * parent; // offset 0x40, size 0x4
    int numChildren; // offset 0x44, size 0x4
    unsigned char activated : 1; // offset 0x48, size 0x1
    unsigned char alive : 1; // offset 0x48, size 0x1
    unsigned char inUpdateDistance : 1; // offset 0x48, size 0x1
    unsigned char crossingUpdateDistance : 1; // offset 0x48, size 0x1
    unsigned char taggedForSpawn : 1; // offset 0x48, size 0x1
    unsigned char taggedForKill : 1; // offset 0x48, size 0x1
    unsigned int pad : 26; // offset 0x48, size 0x4
public:
    void * __vptr$; // offset 0x4C, size 0x4
protected:
    class zICompLogic * npcLogicComp; // offset 0x50, size 0x4
    class zICompNPCEntity * npcEntityComp; // offset 0x54, size 0x4
    class zICompSteering * npcSteeringComp; // offset 0x58, size 0x4
    class zICompPerception * npcPerceptionComp; // offset 0x5C, size 0x4
    class zICompSound * npcSoundComp; // offset 0x60, size 0x4
    class zICompCombat * npcCombatComp; // offset 0x64, size 0x4
};
// total size: 0x68
class zNPCAnimViewer : public zNPCBase {
    // Static members
    static unsigned char mIsPresent; // size: 0x1
};
static char buffer[128]; // size: 0x80, address: 0x80A5BE50
// Range: 0x80032AB0 -> 0x80032C74
static float set_box_value(const struct value_type & v /* r31 */, float y /* f31 */) {
    // References
    // -> static class xtextbox value_box;
    // -> static char buffer[128];
    // -> static unsigned char editting;
    // -> static struct xColor_tag tweak_box_value_normal_color[8];
    // -> static struct xColor_tag tweak_box_value_read_only_color[8];
    // -> static struct xColor_tag tweak_box_value_edit_color[8];
    // -> static struct xColor_tag tweak_box_value_press_color[8];
}

static char __FUNCTION__[10]; // size: 0xA, address: 0x80BFBFA8
// Range: 0x80032C74 -> 0x80032D30
static void get_value(const struct value_type & v /* r0 */, unsigned int & val /* r0 */) {
    // References
    // -> static char __FUNCTION__[10];
}

static char __FUNCTION__[10]; // size: 0xA, address: 0x80BFBFB4
// Range: 0x80032D30 -> 0x80032DE0
static void set_value(const struct value_type & v /* r0 */, unsigned int val /* r0 */) {
    // References
    // -> static char __FUNCTION__[10];
}

static char __FUNCTION__[10]; // size: 0xA, address: 0x80BFBFC0
// Range: 0x80032DE0 -> 0x80032EA0
static void get_value(const struct value_type & v /* r0 */, int & val /* r0 */) {
    // References
    // -> static char __FUNCTION__[10];
}

static char __FUNCTION__[10]; // size: 0xA, address: 0x80BFBFCC
// Range: 0x80032EA0 -> 0x80032F50
static void set_value(const struct value_type & v /* r0 */, int val /* r0 */) {
    // References
    // -> static char __FUNCTION__[10];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80BFBFD8
// Range: 0x80032F50 -> 0x800330B8
static unsigned int get_select_index(const struct value_type & v /* r31 */) {
    // Local variables
    unsigned int val; // r1+0x8
    unsigned char * values; // r0
    unsigned int i; // r3
    unsigned int i; // r3
    unsigned int i; // r3

    // References
    // -> static char __FUNCTION__[17];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80BFBFEC
// Range: 0x800330B8 -> 0x800331F0
static unsigned int get_select_value(const struct value_type & v /* r30 */, unsigned int index /* r31 */) {
    // References
    // -> static char __FUNCTION__[17];
}

// Range: 0x800331F0 -> 0x800332E0
static int calc_precision(float v /* f2 */) {
    // Local variables
    int p; // r0
}

// Range: 0x800332E0 -> 0x800335B0
static void write_value(char * buffer /* r30 */, const struct value_type & v /* r29 */, int width /* r31 */) {
    // Local variables
    int val; // r1+0x1C
    unsigned int val; // r1+0x18
    float val; // r1+0x14
    int lwidth; // r29
    int rwidth; // r6
    unsigned char val; // r1+0x8
    unsigned int val; // r1+0x10
    unsigned int index; // r0
    const char * val; // r1+0xC
}

// Range: 0x800335B0 -> 0x80033994
static unsigned char read_value(struct value_type & v /* r31 */, const char * text /* r29 */) {
    // Local variables
    int oldval; // r1+0x24
    int val; // r1+0x20
    unsigned int oldval; // r1+0x1C
    unsigned int val; // r1+0x18
    float oldval; // r1+0x14
    float val; // r1+0x10
    unsigned char oldval; // r30
    unsigned char val; // r4
    unsigned int val; // r1+0xC
    unsigned int oldval; // r30
    unsigned int oldval; // r1+0x8
    char value[128]; // r1+0xA8
    char label[128]; // r1+0x28
    unsigned int i; // r29
    unsigned int val; // r4
}

// Range: 0x80033994 -> 0x80033ABC
static void write_edit_value(char * buffer /* r28 */, const struct value_type & v /* r0 */, int digit /* r31 */) {
    // Local variables
    char temp[64]; // r1+0x8
    int len; // r30
    int loc; // r29
    char * dp; // r0
}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80BFC000
// Range: 0x80033ADC -> 0x80033B88
static unsigned long value_index(struct value_type & v /* r31 */) {
    // References
    // -> static struct value_type * values;
    // -> static char __FUNCTION__[12];
    // -> static unsigned int values_size;
}

// Range: 0x80033B88 -> 0x80033C88
static unsigned char reset_value(struct value_type & v /* r27 */, unsigned char recurse /* r0 */) {
    // Local variables
    unsigned long i; // r28
    unsigned short end; // r0
    unsigned char changed; // r27
    unsigned int val; // r1+0x8

    // References
    // -> static struct value_type * values;
}

// Range: 0x80033C88 -> 0x80033CAC
static void store_value(struct value_type & v /* r0 */) {
    // References
    // -> static unsigned int old_uint_value;
}

// Range: 0x80033CAC -> 0x80033CFC
static void restore_value(struct value_type & v /* r31 */) {
    // Local variables
    unsigned int val; // r1+0x8

    // References
    // -> static unsigned int old_uint_value;
}

static int lookup[10]; // size: 0x28, address: 0x803A99B4
static unsigned int lookup[10]; // size: 0x28, address: 0x803A99DC
static float lookup[10]; // size: 0x28, address: 0x803A9A04
static float lookup[6]; // size: 0x18, address: 0x80C0A4C0
// Range: 0x80033CFC -> 0x800341A4
static void modify_value(struct value_type & v /* r30 */, int scale /* r31 */) {
    // Local variables
    int val; // r1+0x10
    int mult; // r7
    float fsize; // f1
    unsigned int val; // r1+0xC
    unsigned int mult; // r5
    float fsize; // f1
    float val; // r1+0x8
    float fsize; // f1
    int ed; // r0
    float fsize; // f1
    int index; // r4

    // References
    // -> static float lookup[6];
    // -> static float lookup[10];
    // -> static unsigned int lookup[10];
    // -> static int lookup[10];
}

// Range: 0x800341A4 -> 0x800341F0
static int count_digits(int v /* r0 */) {
    // Local variables
    int total; // r3
}

// Range: 0x800341F0 -> 0x80034230
static int count_digits(float v /* f2 */) {
    // Local variables
    int total; // r3
}

// Range: 0x80034230 -> 0x8003431C
static void clip_edit_digit(struct value_type & v /* r31 */) {
    // Local variables
    int mindigits; // r30
    int maxdigits; // r3
    int mindigits; // r30
    int maxdigits; // r3
}

// Range: 0x8003431C -> 0x8003432C
static int compare_U16(void * e1 /* r0 */, void * e2 /* r0 */) {}

// Range: 0x8003432C -> 0x80034378
static void sort_changed() {
    // References
    // -> static unsigned char need_sort_changed;
    // -> static unsigned int changed_values_size;
    // -> static unsigned short changed_values[256];
}

// Range: 0x80034378 -> 0x800343F4
static void refresh_changed() {
    // Local variables
    struct value_type * v; // r31
    struct value_type * endv; // r30

    // References
    // -> static unsigned char need_sort_changed;
    // -> static unsigned int values_size;
    // -> static struct value_type * values;
    // -> static unsigned int changed_values_size;
}

// Range: 0x800343F4 -> 0x8003450C
static void mark_unchanged(struct value_type & v /* r31 */) {
    // Local variables
    unsigned short & ci; // r0
    unsigned short vi; // r0
    unsigned int i; // r6
    unsigned int j; // r4

    // References
    // -> static unsigned int changed_values_size;
    // -> static struct value_type * values;
    // -> static unsigned short changed_values[256];
    // -> static unsigned char need_sort_changed;
}

// Range: 0x8003450C -> 0x800345BC
static void mark_changed(struct value_type & v /* r31 */) {
    // Local variables
    unsigned int i; // r4
    unsigned int j; // r5

    // References
    // -> static unsigned int changed_values_size;
    // -> static unsigned short changed_values[256];
    // -> static unsigned char need_sort_changed;
}

// Range: 0x800345BC -> 0x80034640
static void on_change(struct value_type & v /* r31 */) {
    // Local variables
    unsigned int val; // r1+0x8
}

// Range: 0x80034640 -> 0x8003467C
static void on_select(const struct value_type & v /* r0 */) {}

// Range: 0x8003467C -> 0x800346B8
static void on_unselect(const struct value_type & v /* r0 */) {}

// Range: 0x800346B8 -> 0x800346F4
static void on_start_edit(const struct value_type & v /* r0 */) {}

// Range: 0x800346F4 -> 0x80034730
static void on_stop_edit(const struct value_type & v /* r0 */) {}

// Range: 0x80034730 -> 0x8003476C
static void on_expand(const struct value_type & v /* r0 */) {}

// Range: 0x8003476C -> 0x800347A8
static void on_collapse(const struct value_type & v /* r0 */) {}

// Range: 0x800347A8 -> 0x800347E4
static void on_update(const struct value_type & v /* r0 */) {}

// Range: 0x800347E4 -> 0x80034820
static void convert_mem_to_tweak(const struct value_type & v /* r0 */, void * value /* r0 */) {}

// Range: 0x80034820 -> 0x8003485C
static void convert_tweak_to_mem(const struct value_type & v /* r0 */, void * value /* r0 */) {}

// Range: 0x8003485C -> 0x800348B8
static unsigned char move_down() {
    // Local variables
    unsigned short next; // r0

    // References
    // -> static unsigned int values_size;
    // -> static unsigned int selected;
}

// Range: 0x800348B8 -> 0x8003490C
static unsigned char move_up() {
    // Local variables
    unsigned short prev; // r0

    // References
    // -> static unsigned int selected;
}

// Range: 0x8003490C -> 0x800349CC
static int timed_move(float dt /* f0 */) {
    // Local variables
    float inc_time; // f3
    int inc; // r3

    // References
    // -> static float move_time;
    // -> static float tweak_move_speed;
    // -> static float tweak_move_super_speed;
    // -> static float tweak_move_delay;
    // -> static unsigned char moving;
}

// Range: 0x800349CC -> 0x80034A08
static void refresh_dump_file() {
    // References
    // -> static unsigned int dump_file_index;
    // -> static char * tweak_dump_files[11];
    // -> static char dump_file[32];
}

// Range: 0x80034A08 -> 0x80034A70
static void strip_ugly(char * dst /* r3 */, const char * src /* r4 */) {
    // Local variables
    int depth; // r6
}

// Range: 0x80034A70 -> 0x80034AEC
static void strip_ugly(char * dst /* r3 */, const struct substr & ssrc /* r0 */) {
    // Local variables
    int depth; // r4
    const char * src; // r5
    const char * end_src; // r6
    char c; // r6
}

// Range: 0x80034AEC -> 0x80034B2C
static void strip_ugly(char * text /* r31 */) {
    // Local variables
    char buffer[256]; // r1+0x8
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80BFC00C
enum filter_mode {
    FILTER_ALL = 0,
    FILTER_OPEN = 1,
    FILTER_CHANGED = 2,
};
// total size: 0x20
struct DVDDiskID {
    // Members
    char gameName[4]; // offset 0x0, size 0x4
    char company[2]; // offset 0x4, size 0x2
    unsigned char diskNumber; // offset 0x6, size 0x1
    unsigned char gameVersion; // offset 0x7, size 0x1
    unsigned char streaming; // offset 0x8, size 0x1
    unsigned char streamingBufSize; // offset 0x9, size 0x1
    unsigned char padding[22]; // offset 0xA, size 0x16
};
// total size: 0x30
struct DVDCommandBlock {
    // Members
    struct DVDCommandBlock * next; // offset 0x0, size 0x4
    struct DVDCommandBlock * prev; // offset 0x4, size 0x4
    unsigned long command; // offset 0x8, size 0x4
    long state; // offset 0xC, size 0x4
    unsigned long offset; // offset 0x10, size 0x4
    unsigned long length; // offset 0x14, size 0x4
    void * addr; // offset 0x18, size 0x4
    unsigned long currTransferSize; // offset 0x1C, size 0x4
    unsigned long transferredSize; // offset 0x20, size 0x4
    struct DVDDiskID * id; // offset 0x24, size 0x4
    void (* callback)(long, struct DVDCommandBlock *); // offset 0x28, size 0x4
    void * userData; // offset 0x2C, size 0x4
};
// total size: 0x3C
struct DVDFileInfo {
    // Members
    struct DVDCommandBlock cb; // offset 0x0, size 0x30
    unsigned long startAddr; // offset 0x30, size 0x4
    unsigned long length; // offset 0x34, size 0x4
    void (* callback)(long, struct DVDFileInfo *); // offset 0x38, size 0x4
};
// total size: 0xF0
struct tag_iFile {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    char path[128]; // offset 0x4, size 0x80
    int fd; // offset 0x84, size 0x4
    struct DVDFileInfo file; // offset 0x88, size 0x3C
    void (* cb)(struct tag_xFile *); // offset 0xC4, size 0x4
    int akey; // offset 0xC8, size 0x4
    int buffer[8]; // offset 0xCC, size 0x20
    int real_pos; // offset 0xEC, size 0x4
};
// total size: 0x114
struct tag_xFile {
    // Members
    char relname[32]; // offset 0x0, size 0x20
    struct tag_iFile ps; // offset 0x20, size 0xF0
    void * user_data; // offset 0x110, size 0x4
};
// Range: 0x80034B2C -> 0x80034BE4
static void save_tweaks(enum filter_mode filter /* r31 */) {
    // Local variables
    struct tag_xFile file; // r1+0x88
    char buffer[128]; // r1+0x8

    // References
    // -> static unsigned int changed_values_size;
    // -> static char dump_file[32];
}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80BFC01C
// Range: 0x80034BE4 -> 0x80034D08
static void write_group(struct tag_xFile & file /* r31 */, const struct value_type & v /* r30 */) {
    // Local variables
    char buffer[256]; // r1+0x8
    const struct value_type & pv; // r30

    // References
    // -> static struct value_type * values;
    // -> static char __FUNCTION__[12];
}

// Range: 0x80034D08 -> 0x80034E08
static void write_tweak(struct tag_xFile & file /* r31 */, const struct value_type & v /* r30 */, unsigned long min_key_len /* r29 */) {
    // Local variables
    char buffer[256]; // r1+0x88
    char value_buffer[128]; // r1+0x8
    unsigned long name_len; // r0

    // References
    // -> static char whitespace_buffer[101];
}

// Range: 0x80034E08 -> 0x80034F08
static void write_all_tweaks(struct tag_xFile & file /* r30 */, enum filter_mode filter /* r31 */) {
    // Local variables
    unsigned long min_key_len; // r28
    unsigned long i; // r27
    unsigned short parent; // r27
    unsigned long i; // r26
    const struct value_type & v; // r25

    // References
    // -> static unsigned int values_size;
    // -> static struct value_type * values;
}

// Range: 0x80034F08 -> 0x80035010
static unsigned char filter_value(unsigned long i /* r30 */, enum filter_mode filter /* r31 */) {
    // Local variables
    const struct value_type & v; // r4
    unsigned long pi; // r0

    // References
    // -> static struct value_type * values;
    // -> static char __FUNCTION__[13];
    // -> static unsigned int values_size;
}

// Range: 0x80035010 -> 0x800350F8
static void write_changed_tweaks(struct tag_xFile & file /* r30 */) {
    // Local variables
    const unsigned short * cv; // r4
    const unsigned short * end_cv; // r28
    unsigned long min_key_len; // r31
    unsigned short parent; // r27
    const struct value_type & v; // r26

    // References
    // -> static struct value_type * values;
    // -> static unsigned short changed_values[256];
    // -> static unsigned int changed_values_size;
}

// Range: 0x800350F8 -> 0x8003517C
static struct value_type * find_stripped(const char * key /* r27 */) {
    // Local variables
    unsigned long lower; // r31
    unsigned long upper; // r30
    unsigned long i; // r29
    const struct stripped_value_type & sv; // r28
    int cmp; // r0

    // References
    // -> static struct stripped_value_type * stripped_values;
    // -> static unsigned int values_size;
}

// Range: 0x8003517C -> 0x80035220
static struct value_type * find_stripped(const struct substr & key /* r27 */) {
    // Local variables
    unsigned long lower; // r31
    unsigned long upper; // r30
    unsigned long i; // r29
    const struct stripped_value_type & sv; // r28
    struct substr vname; // r1+0x8
    int cmp; // r0

    // References
    // -> static struct stripped_value_type * stripped_values;
    // -> static unsigned int values_size;
}

// Range: 0x80035220 -> 0x800352BC
static void sort_stripped_values() {
    // Local variables
    struct value_type * v; // r31
    struct value_type * endv; // r30
    struct stripped_value_type * sv; // r29

    // References
    // -> static unsigned char need_sort_stripped;
    // -> static unsigned int values_size;
    // -> static struct stripped_value_type * stripped_values;
    // -> static struct value_type * values;
}

// Range: 0x800352BC -> 0x80035418
static void touch_branch(const char * name /* r27 */) {
    // Local variables
    struct substr path[8]; // r1+0x18
    int total; // r30
    unsigned long retries; // r29
    int i; // r28
    struct value_type * v; // r27

    // References
    // -> static unsigned char values_dirty;
}

// total size: 0x8
struct xIniValue {
    // Members
    const char * tok; // offset 0x0, size 0x4
    const char * val; // offset 0x4, size 0x4
};
// total size: 0xC
struct xIniSection {
    // Members
    const char * sec; // offset 0x0, size 0x4
    int first; // offset 0x4, size 0x4
    int count; // offset 0x8, size 0x4
};
// total size: 0x210
struct xIniFile {
    // Members
    int NumValues; // offset 0x0, size 0x4
    int NumSections; // offset 0x4, size 0x4
    struct xIniValue * Values; // offset 0x8, size 0x4
    struct xIniSection * Sections; // offset 0xC, size 0x4
    char name[256]; // offset 0x10, size 0x100
    char pathname[256]; // offset 0x110, size 0x100
};
// Range: 0x80035418 -> 0x800355C0
static void load_tweaks() {
    // Local variables
    struct tag_xFile file; // r1+0x8
    struct xIniFile * ini; // r31
    char * buffer; // r30
    unsigned char opened; // r29
    unsigned int fsize; // r28
    struct xIniValue * it; // r28
    struct xIniValue * end; // r27
    unsigned long retries; // r27
    struct xIniValue * iv; // r26
    struct xIniValue * end_iv; // r25
    struct value_type * v; // r0

    // References
    // -> static unsigned char values_dirty;
    // -> static char dump_file[32];
}

// Range: 0x800355C0 -> 0x80035678
static void badchar_to_hex(char * oname /* r3 */, const struct substr & iname /* r0 */) {
    // Local variables
    char * dst; // r31
    const char * src; // r30
    const char * end_src; // r29
    char c; // r6
}

// Range: 0x80035678 -> 0x80035760
static void hex_to_badchar(char * oname /* r3 */, const char * iname /* r4 */) {
    // Local variables
    char * dst; // r29
    const char * src; // r28
    const char * next_hex; // r27
    int hex1; // r0
    int hex2; // r0
}

// Range: 0x80035760 -> 0x800357B0
static int convert_hex_digit(int c /* r3 */) {}

// Range: 0x800357B0 -> 0x8003599C
static void automenu_save() {
    // Local variables
    char fname[13]; // r1+0x8
    struct tag_xFile file; // r1+0x318
    char buffer[256]; // r1+0x18
    char write_buffer[512]; // r1+0x118
    struct value_type * v; // r31
    struct value_type * endv; // r30

    // References
    // -> static unsigned int values_size;
    // -> static struct value_type * values;
    // -> static // total size: 0x3
struct /* @class$2011xDebugTweak_cpp */ {
    // Members
    unsigned char any; // offset 0x0, size 0x1
    unsigned char selected; // offset 0x1, size 0x1
    unsigned char opened; // offset 0x2, size 0x1
} automenu_enable;
    // -> static unsigned int first_visible;
    // -> static unsigned int selected;
}

// Range: 0x8003599C -> 0x80035BFC
static void automenu_load() {
    // Local variables
    struct tag_xFile file; // r1+0x118
    struct xIniFile * ini; // r31
    char * buffer; // r30
    char fname[13]; // r1+0x8
    unsigned char opened; // r29
    unsigned int fsize; // r28
    char name[256]; // r1+0x18
    struct xIniValue * it; // r27
    struct xIniValue * end; // r26
    unsigned long at; // r0
    struct value_type & v; // r3
    const char * selected_text; // r26
    const char * first_visible_text; // r27
    struct xIniValue * it; // r28
    struct xIniValue * end; // r25
    unsigned long at; // r0

    // References
    // -> static unsigned int first_visible;
    // -> static // total size: 0x3
struct /* @class$2011xDebugTweak_cpp */ {
    // Members
    unsigned char any; // offset 0x0, size 0x1
    unsigned char selected; // offset 0x1, size 0x1
    unsigned char opened; // offset 0x2, size 0x1
} automenu_enable;
    // -> static struct value_type * values;
}

// Range: 0x80035BFC -> 0x80035C1C
static void on_change_file_index() {}

// Range: 0x80035C1C -> 0x80035C40
static void on_change_save() {}

// Range: 0x80035C40 -> 0x80035C64
static void on_change_save_changed() {}

// Range: 0x80035C64 -> 0x80035C88
static void on_change_save_opened() {}

// Range: 0x80035C88 -> 0x80035CA8
static void on_change_load() {}

// Range: 0x80035CA8 -> 0x80035D6C
static void expand_all() {
    // Local variables
    unsigned long last_size; // r30
    unsigned long i; // r4
    struct value_type & v; // r5
    unsigned long i; // r29
    struct value_type & v; // r3

    // References
    // -> static unsigned int values_size;
    // -> static struct value_type * values;
}

// Range: 0x80035D6C -> 0x80035E40
static void collapse_all() {
    // Local variables
    unsigned long last_size; // r30
    unsigned long i; // r4
    struct value_type & v; // r5
    unsigned long i; // r29
    struct value_type & v; // r3

    // References
    // -> static unsigned int selected;
    // -> static unsigned int values_size;
    // -> static struct value_type * values;
}

// Range: 0x80035E40 -> 0x80035F94
static void expand_all(unsigned long at /* r1+0x8 */) {
    // Local variables
    char name_buffer[128]; // r1+0x14
    struct substr name; // r1+0xC
    unsigned long last_size; // r31
    unsigned short ci; // r0
    unsigned short end_ci; // r3
    struct value_type * v; // r30
    struct value_type * endv; // r29

    // References
    // -> static unsigned int values_size;
    // -> static struct value_type * values;
}

// Range: 0x80035F94 -> 0x80036058
static void collapse_all(unsigned long at /* r30 */) {
    // Local variables
    unsigned short ci; // r0
    unsigned short end_ci; // r3
    struct value_type * v; // r31
    struct value_type * endv; // r30

    // References
    // -> static struct value_type * values;
    // -> static unsigned int values_size;
}

// Range: 0x80036058 -> 0x80036078
static void on_change_expand_all() {}

// Range: 0x80036078 -> 0x80036098
static void on_change_collapse_all() {}

static int count; // size: 0x4, address: 0x80C070E4
static signed char init; // size: 0x1, address: 0x80C070E8
// Range: 0x80036098 -> 0x8003611C
static void test_callback(const struct tweak_info & v /* r0 */) {
    // Local variables
    char * s; // r31
    unsigned long len; // r0

    // References
    // -> static int count;
    // -> static signed char init;
}

static unsigned char above; // size: 0x1, address: 0x80C070E9
static signed char init; // size: 0x1, address: 0x80C070EA
// Range: 0x8003611C -> 0x80036250
static void test_add_remove() {
    // References
    // -> static unsigned char above;
    // -> static signed char init;
}

static float some_data; // size: 0x4, address: 0x80C070EC
static signed char init; // size: 0x1, address: 0x80C070F0
// Range: 0x80036250 -> 0x80036324
static void test_add_overflow(const struct tweak_info & v /* r28 */) {
    // Local variables
    int total; // r3
    char buffer[128]; // r1+0x8
    int i; // r29

    // References
    // -> static float some_data;
    // -> static signed char init;
}

// Range: 0x80036324 -> 0x80036364
static void test_clear_overflow(const struct tweak_info & v /* r3 */) {}

static unsigned int test_u32; // size: 0x4, address: 0x80C070F4
static signed char init; // size: 0x1, address: 0x80C070F8
static unsigned short test_u16; // size: 0x2, address: 0x80C070FA
static signed char init; // size: 0x1, address: 0x80C070FC
static unsigned char test_u8; // size: 0x1, address: 0x80C070FD
static signed char init; // size: 0x1, address: 0x80C070FE
static int test_i32; // size: 0x4, address: 0x80C07100
static signed char init; // size: 0x1, address: 0x80C07104
static signed short test_i16; // size: 0x2, address: 0x80C07106
static signed char init; // size: 0x1, address: 0x80C07108
static signed char test_i8; // size: 0x1, address: 0x80C07109
static signed char init; // size: 0x1, address: 0x80C0710A
static float test_f32; // size: 0x4, address: 0x80C0710C
static signed char init; // size: 0x1, address: 0x80C07110
static unsigned char test_bool; // size: 0x1, address: 0x80C07111
static signed char init; // size: 0x1, address: 0x80C07112
static unsigned int test_select; // size: 0x4, address: 0x80C07114
static signed char init; // size: 0x1, address: 0x80C07118
static char test_callback_buffer[32]; // size: 0x20, address: 0x80415534
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
static struct xVec3 test_vec; // size: 0xC, address: 0x80BFC028
static char * test_select_labels[9]; // size: 0x24, address: 0x80415554
static float test_select_values[9]; // size: 0x24, address: 0x803A9A2C
static float test_select_float; // size: 0x4, address: 0x80C0711C
static signed char init; // size: 0x1, address: 0x80C07120
static struct tweak_callback test_cb; // size: 0x28, address: 0x803A9A50
static struct tweak_callback test_add_remove_cb; // size: 0x28, address: 0x803A9A78
static char overflow_total[16]; // size: 0x10, address: 0x80BFC034
static struct tweak_callback test_add_overflow_cb; // size: 0x28, address: 0x803A9AA0
static struct tweak_callback test_clear_overflow_cb; // size: 0x28, address: 0x803A9AC8
// Range: 0x80036364 -> 0x800367E8
static void add_test_tweaks() {
    // References
    // -> static struct tweak_callback test_clear_overflow_cb;
    // -> static char overflow_total[16];
    // -> static struct tweak_callback test_add_overflow_cb;
    // -> static struct tweak_callback test_add_remove_cb;
    // -> static struct xVec3 test_vec;
    // -> static struct tweak_callback test_cb;
    // -> static char test_callback_buffer[32];
    // -> static float test_select_float;
    // -> static float test_select_values[9];
    // -> static char * test_select_labels[9];
    // -> static unsigned int test_select;
    // -> static unsigned char test_bool;
    // -> static float test_f32;
    // -> static signed char test_i8;
    // -> static signed short test_i16;
    // -> static int test_i32;
    // -> static unsigned char test_u8;
    // -> static unsigned short test_u16;
    // -> static unsigned int test_u32;
    // -> static signed char init;
    // -> static signed char init;
    // -> static signed char init;
    // -> static signed char init;
    // -> static signed char init;
    // -> static signed char init;
    // -> static signed char init;
    // -> static signed char init;
    // -> static signed char init;
    // -> static signed char init;
}

static int count; // size: 0x4, address: 0x80C07124
static signed char init; // size: 0x1, address: 0x80C07128
static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFC044
char __FUNCTION__$localstatic1$__rf__Q279fixed_stack_list<Q325@unnamed@xDebugTweak_cpp@11debug_tweak11string_type,13216>8iteratorCFv[5]; // size: 0x5, address: 0x80BFC054
// Range: 0x800367E8 -> 0x80036AFC
static void validate_stuff() {
    // Local variables
    unsigned long total; // r31
    unsigned long i; // r29
    class iterator it; // r1+0x1C
    unsigned char found; // r29
    struct substr s; // r1+0x20
    unsigned long i; // r31
    class iterator it; // r1+0x18
    class iterator it2; // r1+0x14

    // References
    // -> static class fixed_stack_list * strings;
    // -> static char __FUNCTION__[15];
    // -> static unsigned int values_size;
    // -> static struct value_type * values;
    // -> static int count;
    // -> static signed char init;
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFC05C
// Range: 0x80036AFC -> 0x80036BA8
static void xDebugAddTweak(const struct tweak_info & ti /* r31 */) {
    // Local variables
    char buffer[16]; // r1+0x8

    // References
    // -> static unsigned char debug_tweak_inited;
    // -> static char __FUNCTION__[15];
}

unsigned int xprintf_display; // size: 0x4, address: 0x80BFBD08
// Range: 0x80036BA8 -> 0x80036BDC
void debug_mode_tweak_begin() {
    // References
    // -> unsigned int xprintf_display;
}

// Range: 0x80036BDC -> 0x80036C10
void debug_mode_tweak_end() {
    // References
    // -> unsigned int xprintf_display;
}

static unsigned char hide; // size: 0x1, address: 0x80C07129
static unsigned char was_hidden; // size: 0x1, address: 0x80C0712A
static signed char init; // size: 0x1, address: 0x80C0712B
unsigned int xprintf_display_modes; // size: 0x4, address: 0x80BFBD0C
// Range: 0x80036C10 -> 0x80036CE4
void debug_mode_tweak() {
    // References
    // -> static unsigned char hide;
    // -> static unsigned char was_hidden;
    // -> static unsigned char whole_screen;
    // -> unsigned int xprintf_display;
    // -> unsigned int xprintf_display_modes;
    // -> static signed char init;
}

// Range: 0x80036CE4 -> 0x80036D34
void xDebugTweakUpdate(float dt /* f31 */) {
    // References
    // -> static unsigned char debug_tweak_inited;
}

enum xScreenDump {
    exSD_NONE = 0,
    exSD_NATIVE = 1,
    exSD_MASSIVE = 2,
    exSD_MASSIVE_RESET = 3,
};
enum xScreenDump gScreenDump; // size: 0x4, address: 0x80C06FB4
// Range: 0x80036D34 -> 0x80036DB4
void xDebugTweakRender() {
    // References
    // -> unsigned char gDebugTweakRendering;
    // -> static unsigned char hide;
    // -> static unsigned char debug_tweak_inited;
    // -> enum xScreenDump gScreenDump;
}

// Range: 0x80036DB4 -> 0x80036DF4
void xDebugRemoveTweak(const struct substr & name /* r31 */) {
    // References
    // -> static unsigned char debug_tweak_inited;
}

// Range: 0x80036DF4 -> 0x80036E54
void xDebugRemoveTweaks(const struct substr & name /* r29 */, unsigned char (* cb)(struct tweak_info &, void *) /* r30 */, void * context /* r31 */) {
    // References
    // -> static unsigned char debug_tweak_inited;
}

// Range: 0x80036E54 -> 0x80036E74
void xDebugResetTweaks() {}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFC06C
// Range: 0x80036E74 -> 0x80036F08
struct tweak_info * xDebugGetTweak(const char * name /* r31 */) {
    // References
    // -> static char __FUNCTION__[15];
}

// Range: 0x80036F08 -> 0x80036F28
struct tweak_info * xDebugGetTweak(const struct substr & name /* r0 */) {}

// Range: 0x80036F28 -> 0x80036F48
struct tweak_info * xDebugGetParentTweak(const struct tweak_info & info /* r0 */) {}

// Range: 0x80036F48 -> 0x80036F68
unsigned int xDebugCountChildTweaks(const struct tweak_info & info /* r0 */) {}

// Range: 0x80036F68 -> 0x80036F88
void xDebugSelectTweak(const char * name /* r0 */) {}

// Range: 0x80036F88 -> 0x80036FA8
void xDebugExpandTweak(const char * name /* r0 */) {}

// Range: 0x80036FA8 -> 0x80036FC8
struct tweak_info * xDebugGetSelectedTweak() {}

// Range: 0x80036FC8 -> 0x80037048
unsigned char xDebugTweakSelected(const char * name /* r31 */) {
    // Local variables
    const struct tweak_info * val; // r0
    const struct tweak_info * sel; // r3
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFC07C
// Range: 0x80037048 -> 0x8003712C
void xDebugAddTweak(const char * name /* r25 */, int * v /* r26 */, int vmin /* r27 */, int vmax /* r28 */, const struct tweak_callback * cb /* r29 */, void * context /* r30 */, unsigned int flags /* r31 */) {
    // Local variables
    struct tweak_info ti; // r1+0x8

    // References
    // -> static char __FUNCTION__[15];
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFC08C
// Range: 0x8003712C -> 0x80037220
void xDebugAddTweak(const char * name /* r25 */, signed short * v /* r31 */, signed short vmin /* r26 */, signed short vmax /* r27 */, const struct tweak_callback * cb /* r28 */, void * context /* r29 */, unsigned int flags /* r30 */) {
    // Local variables
    struct tweak_info ti; // r1+0x8

    // References
    // -> static char __FUNCTION__[15];
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFC09C
// Range: 0x80037220 -> 0x80037318
void xDebugAddTweak(const char * name /* r25 */, signed char * v /* r29 */, signed char vmin /* r26 */, signed char vmax /* r27 */, const struct tweak_callback * cb /* r30 */, void * context /* r31 */, unsigned int flags /* r28 */) {
    // Local variables
    struct tweak_info ti; // r1+0x8

    // References
    // -> static char __FUNCTION__[15];
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFC0AC
// Range: 0x80037318 -> 0x800373FC
void xDebugAddTweak(const char * name /* r25 */, unsigned int * v /* r26 */, unsigned int vmin /* r27 */, unsigned int vmax /* r28 */, const struct tweak_callback * cb /* r29 */, void * context /* r30 */, unsigned int flags /* r31 */) {
    // Local variables
    struct tweak_info ti; // r1+0x8

    // References
    // -> static char __FUNCTION__[15];
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFC0BC
// Range: 0x800373FC -> 0x800374F0
void xDebugAddTweak(const char * name /* r25 */, unsigned short * v /* r31 */, unsigned short vmin /* r26 */, unsigned short vmax /* r27 */, const struct tweak_callback * cb /* r28 */, void * context /* r29 */, unsigned int flags /* r30 */) {
    // Local variables
    struct tweak_info ti; // r1+0x8

    // References
    // -> static char __FUNCTION__[15];
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFC0CC
// Range: 0x800374F0 -> 0x800375E4
void xDebugAddTweak(const char * name /* r25 */, unsigned char * v /* r31 */, unsigned char vmin /* r26 */, unsigned char vmax /* r27 */, const struct tweak_callback * cb /* r28 */, void * context /* r29 */, unsigned int flags /* r30 */) {
    // Local variables
    struct tweak_info ti; // r1+0x8

    // References
    // -> static char __FUNCTION__[15];
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFC0DC
// Range: 0x800375E4 -> 0x800376EC
void xDebugAddTweak(const char * name /* r27 */, float * v /* r28 */, float vmin /* f30 */, float vmax /* f31 */, const struct tweak_callback * cb /* r29 */, void * context /* r30 */, unsigned int flags /* r31 */) {
    // Local variables
    struct tweak_info ti; // r1+0x8

    // References
    // -> static char __FUNCTION__[15];
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFC0EC
// Range: 0x800376EC -> 0x800377D0
void xDebugAddTweak(const char * name /* r25 */, unsigned long * v /* r26 */, unsigned long vmin /* r27 */, unsigned long vmax /* r28 */, const struct tweak_callback * cb /* r29 */, void * context /* r30 */, unsigned int flags /* r31 */) {
    // Local variables
    struct tweak_info ti; // r1+0x8

    // References
    // -> static char __FUNCTION__[15];
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x80BFC0FC
// Range: 0x800377D0 -> 0x80037910
void xDebugAddSelectTweak(const char * name /* r24 */, int * v /* r26 */, const char * * labels /* r27 */, const int * values /* r28 */, unsigned int labels_size /* r29 */, const struct tweak_callback * cb /* r30 */, void * context /* r31 */, unsigned int flags /* r25 */) {
    // Local variables
    struct tweak_info ti; // r1+0x8

    // References
    // -> static char __FUNCTION__[21];
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x80BFC114
// Range: 0x80037910 -> 0x80037A50
void xDebugAddSelectTweak(const char * name /* r24 */, signed char * v /* r26 */, const char * * labels /* r27 */, const signed char * values /* r28 */, unsigned int labels_size /* r29 */, const struct tweak_callback * cb /* r30 */, void * context /* r31 */, unsigned int flags /* r25 */) {
    // Local variables
    struct tweak_info ti; // r1+0x8

    // References
    // -> static char __FUNCTION__[21];
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x80BFC12C
// Range: 0x80037A50 -> 0x80037B90
void xDebugAddSelectTweak(const char * name /* r24 */, unsigned int * v /* r26 */, const char * * labels /* r27 */, const unsigned int * values /* r28 */, unsigned int labels_size /* r29 */, const struct tweak_callback * cb /* r30 */, void * context /* r31 */, unsigned int flags /* r25 */) {
    // Local variables
    struct tweak_info ti; // r1+0x8

    // References
    // -> static char __FUNCTION__[21];
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x80BFC144
// Range: 0x80037B90 -> 0x80037CD0
void xDebugAddSelectTweak(const char * name /* r24 */, unsigned short * v /* r26 */, const char * * labels /* r27 */, const unsigned short * values /* r28 */, unsigned int labels_size /* r29 */, const struct tweak_callback * cb /* r30 */, void * context /* r31 */, unsigned int flags /* r25 */) {
    // Local variables
    struct tweak_info ti; // r1+0x8

    // References
    // -> static char __FUNCTION__[21];
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x80BFC15C
// Range: 0x80037CD0 -> 0x80037E10
void xDebugAddSelectTweak(const char * name /* r24 */, unsigned char * v /* r26 */, const char * * labels /* r27 */, const unsigned char * values /* r28 */, unsigned int labels_size /* r29 */, const struct tweak_callback * cb /* r30 */, void * context /* r31 */, unsigned int flags /* r25 */) {
    // Local variables
    struct tweak_info ti; // r1+0x8

    // References
    // -> static char __FUNCTION__[21];
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x80BFC174
// Range: 0x80037E10 -> 0x80037F50
void xDebugAddSelectTweak(const char * name /* r24 */, float * v /* r26 */, const char * * labels /* r27 */, const float * values /* r28 */, unsigned int labels_size /* r29 */, const struct tweak_callback * cb /* r30 */, void * context /* r31 */, unsigned int flags /* r25 */) {
    // Local variables
    struct tweak_info ti; // r1+0x8

    // References
    // -> static char __FUNCTION__[21];
}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80BFC18C
// Range: 0x80037F50 -> 0x8003802C
void xDebugAddFlagTweak(const char * name /* r26 */, unsigned int * v /* r27 */, unsigned int mask /* r28 */, const struct tweak_callback * cb /* r29 */, void * context /* r30 */, unsigned int flags /* r31 */) {
    // Local variables
    struct tweak_info ti; // r1+0x8

    // References
    // -> static char __FUNCTION__[19];
}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80BFC1A0
// Range: 0x8003802C -> 0x8003810C
void xDebugAddFlagTweak(const char * name /* r26 */, unsigned char * v /* r27 */, unsigned char mask /* r28 */, const struct tweak_callback * cb /* r29 */, void * context /* r30 */, unsigned int flags /* r31 */) {
    // Local variables
    struct tweak_info ti; // r1+0x8

    // References
    // -> static char __FUNCTION__[19];
}

// Range: 0x8003810C -> 0x80038208
void xDebugAddTweak(const char * name /* r27 */, struct xVec3 * v /* r28 */, const struct tweak_callback * cb /* r29 */, void * context /* r30 */, unsigned int flags /* r31 */) {
    // Local variables
    char buffer[128]; // r1+0x8
}

// Range: 0x80038208 -> 0x80038344
void xDebugAddTweak(const char * name /* r27 */, struct xColor_tag * v /* r28 */, const struct tweak_callback * cb /* r29 */, void * context /* r30 */, unsigned int flags /* r31 */) {
    // Local variables
    char buffer[128]; // r1+0x8
}

// Range: 0x80038344 -> 0x800383B4
void xDebugAddBranchTweak(const char * name /* r0 */, const struct tweak_callback * cb /* r29 */, void * context /* r30 */, unsigned int flags /* r31 */) {
    // Local variables
    struct tweak_info ti; // r1+0x8
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFC1B4
// Range: 0x800383B4 -> 0x80038474
void xDebugAddTweak(const char * name /* r27 */, unsigned char * v /* r28 */, const struct tweak_callback * cb /* r29 */, void * context /* r30 */, unsigned int flags /* r31 */) {
    // Local variables
    struct tweak_info ti; // r1+0x8

    // References
    // -> static char __FUNCTION__[15];
}

// Range: 0x80038474 -> 0x80038514
void xDebugAddTweak(const char * name /* r0 */, const char * message /* r28 */, const struct tweak_callback * cb /* r29 */, void * context /* r30 */, unsigned int flags /* r31 */) {
    // Local variables
    struct tweak_info ti; // r1+0x8
}

static char buffer[128]; // size: 0x80, address: 0x80A5BED0
static char buffer2[128]; // size: 0x80, address: 0x80A5BF50
// Range: 0x80038514 -> 0x800386A4
static char * create_auto_name(const char * prefix /* r31 */, const char * name /* r4 */, unsigned char process /* r0 */) {
    // Local variables
    char delim[5]; // r1+0x8
    char * tail; // r30
    const char * s; // r29
    unsigned char lastrep; // r28
    unsigned long offset; // r27
    char * headstr; // r27
    char * bs; // r4
    char c; // r0
    int wsfound; // r3
    char * ws; // r5

    // References
    // -> static char buffer2[128];
    // -> static char buffer[128];
}

// Range: 0x800386A4 -> 0x80038730
void _auto_tweak_branch(const char * prefix /* r0 */, const char * name /* r0 */, const struct tweak_callback * cb /* r28 */, void * context /* r29 */, unsigned int flags /* r30 */) {
    // Local variables
    char * title; // r31
    unsigned long len; // r0
}

// Range: 0x80038730 -> 0x80038794
void _auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r26 */, int vmin /* r27 */, int vmax /* r28 */, const struct tweak_callback * cb /* r29 */, void * context /* r30 */, unsigned int flags /* r31 */, unsigned char process /* r0 */) {
    // Local variables
    const char * title; // r0
}

// Range: 0x80038794 -> 0x800387F8
void _auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, signed short * v /* r26 */, signed short vmin /* r27 */, signed short vmax /* r28 */, const struct tweak_callback * cb /* r29 */, void * context /* r30 */, unsigned int flags /* r31 */, unsigned char process /* r0 */) {
    // Local variables
    const char * title; // r0
}

// Range: 0x800387F8 -> 0x8003885C
void _auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r26 */, unsigned int vmin /* r27 */, unsigned int vmax /* r28 */, const struct tweak_callback * cb /* r29 */, void * context /* r30 */, unsigned int flags /* r31 */, unsigned char process /* r0 */) {
    // Local variables
    const char * title; // r0
}

// Range: 0x8003885C -> 0x800388C0
void _auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned short * v /* r26 */, unsigned short vmin /* r27 */, unsigned short vmax /* r28 */, const struct tweak_callback * cb /* r29 */, void * context /* r30 */, unsigned int flags /* r31 */, unsigned char process /* r0 */) {
    // Local variables
    const char * title; // r0
}

// Range: 0x800388C0 -> 0x80038924
void _auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r26 */, unsigned char vmin /* r27 */, unsigned char vmax /* r28 */, const struct tweak_callback * cb /* r29 */, void * context /* r30 */, unsigned int flags /* r31 */, unsigned char process /* r0 */) {
    // Local variables
    const char * title; // r0
}

// Range: 0x80038924 -> 0x800389AC
void _auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r28 */, float vmin /* f30 */, float vmax /* f31 */, const struct tweak_callback * cb /* r29 */, void * context /* r30 */, unsigned int flags /* r31 */, unsigned char process /* r9 */) {
    // Local variables
    const char * title; // r0
}

// Range: 0x800389AC -> 0x80038A18
void _auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r25 */, const char * * labels /* r26 */, const unsigned int * values /* r27 */, unsigned int labels_size /* r28 */, const struct tweak_callback * cb /* r29 */, void * context /* r30 */, unsigned int flags /* r31 */, unsigned char process /* r0 */) {
    // Local variables
    const char * title; // r0
}

// Range: 0x80038A18 -> 0x80038A84
void _auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r25 */, const char * * labels /* r26 */, const unsigned char * values /* r27 */, unsigned int labels_size /* r28 */, const struct tweak_callback * cb /* r29 */, void * context /* r30 */, unsigned int flags /* r31 */, unsigned char process /* r0 */) {
    // Local variables
    const char * title; // r0
}

// Range: 0x80038A84 -> 0x80038AF0
void _auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r25 */, const char * * labels /* r26 */, const int * values /* r27 */, unsigned int labels_size /* r28 */, const struct tweak_callback * cb /* r29 */, void * context /* r30 */, unsigned int flags /* r31 */, unsigned char process /* r0 */) {
    // Local variables
    const char * title; // r0
}

// Range: 0x80038AF0 -> 0x80038B48
void _auto_tweak_flag(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r27 */, unsigned int mask /* r28 */, const struct tweak_callback * cb /* r29 */, void * context /* r30 */, unsigned int flags /* r31 */) {
    // Local variables
    const char * title; // r0
}

// Range: 0x80038B48 -> 0x80038BA0
void _auto_tweak_flag(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r27 */, unsigned char mask /* r28 */, const struct tweak_callback * cb /* r29 */, void * context /* r30 */, unsigned int flags /* r31 */) {
    // Local variables
    const char * title; // r0
}

// Range: 0x80038BA0 -> 0x80038C08
void _auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xVec3 * v /* r28 */, const struct tweak_callback * cb /* r29 */, void * context /* r30 */, unsigned int flags /* r31 */, unsigned char process /* r9 */) {
    // Local variables
    const char * title; // r0
}

// Range: 0x80038C08 -> 0x80038C70
void _auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xColor_tag * v /* r28 */, const struct tweak_callback * cb /* r29 */, void * context /* r30 */, unsigned int flags /* r31 */, unsigned char process /* r9 */) {
    // Local variables
    const char * title; // r0
}

// Range: 0x80038C70 -> 0x80038CD8
void _auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r28 */, const struct tweak_callback * cb /* r29 */, void * context /* r30 */, unsigned int flags /* r31 */, unsigned char process /* r9 */) {
    // Local variables
    const char * title; // r0
}

// Range: 0x80038CD8 -> 0x80038D40
void _auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, const char * message /* r28 */, const struct tweak_callback * cb /* r29 */, void * context /* r30 */, unsigned int flags /* r31 */, unsigned char process /* r9 */) {
    // Local variables
    const char * title; // r0
}

// Range: 0x80038D40 -> 0x80038D54
void tweak_rtod(void * value /* r0 */) {
    // Local variables
    float & f; // r0
}

// Range: 0x80038D54 -> 0x80038D68
void tweak_dtor(void * value /* r0 */) {
    // Local variables
    float & f; // r0
}

struct tweak_callback cb_tweak_convert_degrees; // size: 0x28, address: 0x803A9AF0
// Range: 0x80038D68 -> 0x80038DA4
void tweak_acos(void * value /* r31 */) {
    // Local variables
    float & f; // r0
}

// Range: 0x80038DA4 -> 0x80038DE0
void tweak_cos(void * value /* r31 */) {
    // Local variables
    float & f; // r0
}

struct tweak_callback cb_tweak_convert_cos; // size: 0x28, address: 0x803A9B18
// Range: 0x80038DE0 -> 0x80038E68
void tweak_force_lt(const struct tweak_info & info /* r0 */) {}

// Range: 0x80038E68 -> 0x80038EF0
void tweak_force_gt(const struct tweak_info & info /* r0 */) {}

// Range: 0x80038EF0 -> 0x80038F78
void tweak_force_lteq(const struct tweak_info & info /* r0 */) {}

// Range: 0x80038F78 -> 0x80039000
void tweak_force_gteq(const struct tweak_info & info /* r0 */) {}

struct tweak_callback cb_tweak_force_lt; // size: 0x28, address: 0x803A9B40
struct tweak_callback cb_tweak_force_gt; // size: 0x28, address: 0x803A9B68
struct tweak_callback cb_tweak_force_lteq; // size: 0x28, address: 0x803A9B90
struct tweak_callback cb_tweak_force_gteq; // size: 0x28, address: 0x803A9BB8
char * tweak_blend_mode_labels[11]; // size: 0x2C, address: 0x80415578
unsigned int tweak_blend_mode_values[11]; // size: 0x2C, address: 0x803A9BE0
// Range: 0x80039000 -> 0x80039090
static void force_change(const struct tweak_info & info /* r29 */, int offset /* r30 */, struct cb_get_min & cb /* r31 */) {
    // Local variables
    int v; // r1+0xC
    int cv; // r1+0x8
    int nv; // r4
}

// total size: 0x1
struct cb_get_min {};
// Range: 0x80039090 -> 0x800390A4
static int cb_get_min::operator()(int v /* r4 */, int cv /* r5 */) {}

// Range: 0x800390A4 -> 0x80039134
static void force_change(const struct tweak_info & info /* r29 */, unsigned int offset /* r30 */, struct cb_get_min & cb /* r31 */) {
    // Local variables
    unsigned int v; // r1+0xC
    unsigned int cv; // r1+0x8
    unsigned int nv; // r4
}

// total size: 0x1
struct cb_get_min {};
// Range: 0x80039134 -> 0x80039148
static unsigned int cb_get_min::operator()(unsigned int v /* r4 */, unsigned int cv /* r5 */) {}

// Range: 0x80039148 -> 0x800391DC
static void force_change(const struct tweak_info & info /* r30 */, float offset /* f31 */, struct cb_get_min & cb /* r31 */) {
    // Local variables
    float v; // r1+0xC
    float cv; // r1+0x8
    float nv; // f0
}

// total size: 0x1
struct cb_get_min {};
// Range: 0x800391DC -> 0x800391EC
static float cb_get_min::operator()(float v /* f0 */, float cv /* f2 */) {}

// Range: 0x800391EC -> 0x8003927C
static void force_change(const struct tweak_info & info /* r29 */, int offset /* r30 */, struct cb_get_max & cb /* r31 */) {
    // Local variables
    int v; // r1+0xC
    int cv; // r1+0x8
    int nv; // r4
}

// total size: 0x1
struct cb_get_max {};
// Range: 0x8003927C -> 0x80039290
static int cb_get_max::operator()(int v /* r4 */, int cv /* r5 */) {}

// Range: 0x80039290 -> 0x80039320
static void force_change(const struct tweak_info & info /* r29 */, unsigned int offset /* r30 */, struct cb_get_max & cb /* r31 */) {
    // Local variables
    unsigned int v; // r1+0xC
    unsigned int cv; // r1+0x8
    unsigned int nv; // r4
}

// total size: 0x1
struct cb_get_max {};
// Range: 0x80039320 -> 0x80039334
static unsigned int cb_get_max::operator()(unsigned int v /* r4 */, unsigned int cv /* r5 */) {}

// Range: 0x80039334 -> 0x800393C8
static void force_change(const struct tweak_info & info /* r30 */, float offset /* f31 */, struct cb_get_max & cb /* r31 */) {
    // Local variables
    float v; // r1+0xC
    float cv; // r1+0x8
    float nv; // f0
}

// total size: 0x1
struct cb_get_max {};
// Range: 0x800393C8 -> 0x800393D8
static float cb_get_max::operator()(float v /* f0 */, float cv /* f2 */) {}


