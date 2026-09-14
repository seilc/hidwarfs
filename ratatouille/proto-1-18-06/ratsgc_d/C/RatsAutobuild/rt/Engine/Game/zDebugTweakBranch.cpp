/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zDebugTweakBranch.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8034410C -> 0x803442C8
*/
// total size: 0x8
struct substr {
    // Members
    const char * text; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
// total size: 0xC
struct /* @class$734zDebugTweakBranch_cpp */ {
    // Members
    int value_def; // offset 0x0, size 0x4
    int value_min; // offset 0x4, size 0x4
    int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$735zDebugTweakBranch_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int value_min; // offset 0x4, size 0x4
    unsigned int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$736zDebugTweakBranch_cpp */ {
    // Members
    float value_def; // offset 0x0, size 0x4
    float value_min; // offset 0x4, size 0x4
    float value_max; // offset 0x8, size 0x4
};
// total size: 0x1
struct /* @class$737zDebugTweakBranch_cpp */ {
    // Members
    unsigned char value_def; // offset 0x0, size 0x1
};
// total size: 0x10
struct /* @class$738zDebugTweakBranch_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int labels_size; // offset 0x4, size 0x4
    const char * * labels; // offset 0x8, size 0x4
    void * values; // offset 0xC, size 0x4
};
// total size: 0x8
struct /* @class$739zDebugTweakBranch_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
};
// total size: 0x10
struct /* @class$740zDebugTweakBranch_cpp */ {
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
        struct /* @class$734zDebugTweakBranch_cpp */ {
            // Members
            int value_def; // offset 0x0, size 0x4
            int value_min; // offset 0x4, size 0x4
            int value_max; // offset 0x8, size 0x4
        } int_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$735zDebugTweakBranch_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int value_min; // offset 0x4, size 0x4
            unsigned int value_max; // offset 0x8, size 0x4
        } uint_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$736zDebugTweakBranch_cpp */ {
            // Members
            float value_def; // offset 0x0, size 0x4
            float value_min; // offset 0x4, size 0x4
            float value_max; // offset 0x8, size 0x4
        } float_context; // offset 0x18, size 0xC
        // total size: 0x1
        struct /* @class$737zDebugTweakBranch_cpp */ {
            // Members
            unsigned char value_def; // offset 0x0, size 0x1
        } bool_context; // offset 0x18, size 0x1
        // total size: 0x10
        struct /* @class$738zDebugTweakBranch_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int labels_size; // offset 0x4, size 0x4
            const char * * labels; // offset 0x8, size 0x4
            void * values; // offset 0xC, size 0x4
        } select_context; // offset 0x18, size 0x10
        // total size: 0x8
        struct /* @class$739zDebugTweakBranch_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int mask; // offset 0x4, size 0x4
        } flag_context; // offset 0x18, size 0x8
        // total size: 0x10
        struct /* @class$740zDebugTweakBranch_cpp */ {
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
// total size: 0x2C
class zDebugTweakBranch {
    // Functions
    zDebugTweakBranch(const char * name, void (* addTweaksFunction)(char *));

    void OnExpand(const struct tweak_info & info);

    // Members
    struct tweak_callback tweakCB; // offset 0x0, size 0x28
    void (* addTweaksFunction)(char *); // offset 0x28, size 0x4
};
// Range: 0x8034410C -> 0x80344174
// this: r31
zDebugTweakBranch::zDebugTweakBranch(const char * name /* r1+0x8 */, void (* addTweaksFunction)(char *) /* r1+0xC */) {}

static int gDebugTweakBranchMemUsed; // size: 0x4, address: 0x80D6BBB0
// Range: 0x80344174 -> 0x803441F4
class zDebugTweakBranch * zDebugTweakBranch::Create(const char * name /* r1+0x8 */, void (* addTweaksFunction)(char *) /* r1+0xC */) {
    // References
    // -> static int gDebugTweakBranchMemUsed;
}

// Range: 0x803441F4 -> 0x80344230
void zDebugTweakBranch::sOnExpand(const struct tweak_info & info /* r31 */) {
    // Local variables
    class zDebugTweakBranch * branch; // r30
}

// Range: 0x80344230 -> 0x8034426C
void zDebugTweakBranch::sOnCollapse(const struct tweak_info & info /* r31 */) {
    // Local variables
    class zDebugTweakBranch * branch; // r30
}

// Range: 0x8034426C -> 0x803442C4
// this: r31
void zDebugTweakBranch::OnExpand(const struct tweak_info & info /* r30 */) {}

// Range: 0x803442C4 -> 0x803442C8
void zDebugTweakBranch::OnCollapse() {}


