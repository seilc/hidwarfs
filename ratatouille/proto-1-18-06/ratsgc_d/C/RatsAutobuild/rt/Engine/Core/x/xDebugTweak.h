/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80014D48 -> 0x80014E58
*/
// Range: 0x80014D48 -> 0x80014DB0
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x80014DB0 -> 0x80014E08
void xDebugRemoveTweak(const char * name /* r30 */) {}

// Range: 0x80014E08 -> 0x80014E58
void xDebugAddFlagTweak(const char * name /* r1+0x8 */, int * v /* r1+0xC */, int mask /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8001B304 -> 0x8001B4D8
*/
// Range: 0x8001B304 -> 0x8001B35C
static void _t_auto_tweak_flag(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, int * v /* r1+0x10 */, enum /* @enum$956xCamSupport_cpp */ {
    DEBUG_FLAG_RENDER = 1,
} mask /* r1+0x14 */, const struct tweak_callback * cb /* r1+0x18 */, void * context /* r1+0x1C */, unsigned int flags /* r1+0x20 */) {}

// Range: 0x8001B35C -> 0x8001B3B4
void _auto_tweak_flag(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, int * v /* r1+0x10 */, int mask /* r1+0x14 */, const struct tweak_callback * cb /* r1+0x18 */, void * context /* r1+0x1C */, unsigned int flags /* r1+0x20 */) {}

// Range: 0x8001B3B4 -> 0x8001B41C
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x8001B41C -> 0x8001B484
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x8001B484 -> 0x8001B4D8
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8002BC58 -> 0x8002BD1C
*/
// Range: 0x8002BC58 -> 0x8002BD1C
struct tweak_callback tweak_callback::create_update(void (* on_update)(struct tweak_info &) /* r4 */) {
    // Local variables
    struct tweak_callback cb; // r1+0x8
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80036138 -> 0x800361FC
*/
// Range: 0x80036138 -> 0x800361FC
struct tweak_callback tweak_callback::create_change(void (* on_change)(struct tweak_info &) /* r4 */) {
    // Local variables
    struct tweak_callback cb; // r1+0x8
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800372A0 -> 0x8003748C
*/
// Range: 0x800372A0 -> 0x800372F4
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x800372F4 -> 0x80037364
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned int * values /* r1+0x20 */, unsigned long labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}

// Range: 0x80037364 -> 0x800373CC
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x800373CC -> 0x80037424
static void _t_auto_tweak_flag(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, int * v /* r1+0x10 */, enum /* @enum$851xDebugGraph_cpp */ {
    FLAG_RENDER = 1,
    FLAG_PAUSE = 2,
    FLAG_AUTO_SCALE = 4,
    FLAG_BIND_INT = 8,
} mask /* r1+0x14 */, const struct tweak_callback * cb /* r1+0x18 */, void * context /* r1+0x1C */, unsigned int flags /* r1+0x20 */) {}

// Range: 0x80037424 -> 0x8003748C
void xDebugRemoveTweaks(const char * name /* r30 */, unsigned char (* cb)(struct tweak_info &, void *) /* r1+0x8 */, void * context /* r1+0xC */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80042E5C -> 0x80042F48
*/
// Range: 0x80042E5C -> 0x80042F48
struct tweak_callback tweak_callback::create(void (* on_change)(struct tweak_info &) /* r4 */, void (* on_select)(struct tweak_info &) /* r5 */, void (* on_unselect)(struct tweak_info &) /* r6 */, void (* on_start_edit)(struct tweak_info &) /* r7 */, void (* on_stop_edit)(struct tweak_info &) /* r8 */, void (* on_expand)(struct tweak_info &) /* r9 */, void (* on_collapse)(struct tweak_info &) /* r10 */, void (* on_update)(struct tweak_info &) /* r1+0x58 */, void (* convert_mem_to_tweak)(struct tweak_info &, void *) /* r1+0x5C */, void (* convert_tweak_to_mem)(struct tweak_info &, void *) /* r1+0x60 */) {
    // Local variables
    struct tweak_callback cb; // r1+0x8
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80050534 -> 0x80050738
*/
// Range: 0x80050534 -> 0x800505A4
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned int * values /* r1+0x20 */, unsigned int labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}

// Range: 0x800505A4 -> 0x80050614
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const int * values /* r1+0x20 */, enum /* @enum$1242xDecal_cpp */ {
    BLEND_MODE_INVALID = -1,
    BLEND_MODE_AVERAGE = 0,
    BLEND_MODE_ADDITIVE = 1,
    BLEND_MODE_BRIGHT = 2,
    MAX_BLEND_MODE = 3,
} labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}

// Range: 0x80050614 -> 0x8005067C
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x8005067C -> 0x800506E4
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x800506E4 -> 0x80050738
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006A540 -> 0x8006A540
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8007E7D4 -> 0x8007E7D4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80082B48 -> 0x80082B48
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80086D88 -> 0x80086E60
*/
// Range: 0x80086D88 -> 0x80086E60
struct tweak_callback tweak_callback::create_expand(void (* on_expand)(struct tweak_info &) /* r4 */, void (* on_collapse)(struct tweak_info &) /* r5 */) {
    // Local variables
    struct tweak_callback cb; // r1+0x8
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800927DC -> 0x80092900
*/
// Range: 0x800927DC -> 0x80092844
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, unsigned int vmin /* r1+0x1C */, unsigned int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x80092898 -> 0x80092900
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A2B7C -> 0x800A2BEC
*/
// Range: 0x800A2B7C -> 0x800A2BEC
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const int * values /* r1+0x20 */, enum /* @enum$3090xModel_cpp */ {
    RL_SORT_NONE = 0,
    RL_SORT_MODEL = 1,
    RL_SORT_ENTITY = 2,
    MAX_RL_SORT = 3,
} labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800AFE20 -> 0x800AFE20
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B42CC -> 0x800B42CC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C69AC -> 0x800C6A14
*/
// Range: 0x800C69AC -> 0x800C6A14
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800CAF88 -> 0x800CB0E8
*/
// Range: 0x800CAF88 -> 0x800CAFDC
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x800CAFDC -> 0x800CB04C
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned char * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x800CB04C -> 0x800CB0E8
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, int vmin /* r1+0x14 */, int vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x4B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D92CC -> 0x800D93F8
*/
// Range: 0x800D92CC -> 0x800D9320
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x800D9320 -> 0x800D9390
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const int * values /* r1+0x20 */, enum type_enum labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}

// Range: 0x800D9390 -> 0x800D93F8
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800DD2F4 -> 0x800DD364
*/
// Range: 0x800DD2F4 -> 0x800DD364
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned int * values /* r1+0x20 */, unsigned int labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F4E28 -> 0x800F4F4C
*/
// Range: 0x800F4E28 -> 0x800F4E90
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x800F4E90 -> 0x800F4EF8
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x800F4EF8 -> 0x800F4F4C
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80110C38 -> 0x80110C38
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013F8F8 -> 0x8013FD34
*/
// Range: 0x8013F8F8 -> 0x8013F960
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x8013F960 -> 0x8013F9C8
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, enum zCommonPlayerUpgradeLevel vmin /* r1+0x1C */, enum zCommonPlayerUpgradeLevel vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x8013F9C8 -> 0x8013FA64
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, int vmin /* r1+0x14 */, int vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x4B */) {}

// Range: 0x8013FA64 -> 0x8013FACC
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x8013FACC -> 0x8013FB20
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xVec3 * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x8013FB20 -> 0x8013FBF0
struct tweak_callback tweak_callback::create_converter(void (* convert_mem_to_tweak)(struct tweak_info &, void *) /* r4 */, void (* convert_tweak_to_mem)(struct tweak_info &, void *) /* r5 */) {
    // Local variables
    struct tweak_callback cb; // r1+0x8
}

// Range: 0x8013FBF0 -> 0x8013FC78
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, float vmin /* r1+0x1C */, float vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x30 */) {}

// Range: 0x8013FC78 -> 0x8013FCCC
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x8013FCCC -> 0x8013FD34
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801573AC -> 0x801573AC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015FAEC -> 0x8015FC10
*/
// Range: 0x8015FAEC -> 0x8015FB40
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x8015FB40 -> 0x8015FBA8
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x8015FBA8 -> 0x8015FC10
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801674C4 -> 0x801676C0
*/
// Range: 0x801674C4 -> 0x80167518
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x80167518 -> 0x80167588
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned int * values /* r1+0x20 */, unsigned int labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}

// Range: 0x80167588 -> 0x801675F0
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x801675F0 -> 0x80167658
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x80167658 -> 0x801676C0
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801698C0 -> 0x801699D4
*/
// Range: 0x801698C0 -> 0x80169928
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x80169928 -> 0x8016997C
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xVec3 * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x8016997C -> 0x801699D4
static void _t_auto_tweak_flag(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned int * v /* r1+0x10 */, enum /* @enum$1802zFlameEmitter_cpp */ {
    FLAG_GROUND = 1,
    FLAG_VISIBLE = 2,
    FLAG_DRAW_GROUND = 4,
    FLAG_DRAW_SHORT = 8,
} mask /* r1+0x14 */, const struct tweak_callback * cb /* r1+0x18 */, void * context /* r1+0x1C */, unsigned int flags /* r1+0x20 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017AEFC -> 0x8017B518
*/
// Range: 0x8017AEFC -> 0x8017AF50
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x8017AF50 -> 0x8017AFC0
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned char * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned char * values /* r1+0x20 */, enum /* @enum$1309zLaserBeam_cpp */ {
    BM_AVERAGE = 0,
    BM_ADDITIVE = 1,
    BM_OPAQUE = 2,
    BM_ONEONE = 3,
    MAX_BM = 4,
} labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}

// Range: 0x8017AFC0 -> 0x8017B030
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned int * values /* r1+0x20 */, unsigned int labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}

// Range: 0x8017B030 -> 0x8017B0A0
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned char * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned char * values /* r1+0x20 */, enum /* @enum$1313zLaserBeam_cpp */ {
    RC_BURN = 0,
    RC_FADE = 1,
    MAX_RC = 2,
    RC_DEFAULT = 0,
} labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}

// Range: 0x8017B0A0 -> 0x8017B110
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned char * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned char * values /* r1+0x20 */, enum /* @enum$1312zLaserBeam_cpp */ {
    RO_PLANAR = 0,
    RO_TANGENT = 1,
    MAX_RO = 2,
} labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}

// Range: 0x8017B110 -> 0x8017B180
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned char * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned char * values /* r1+0x20 */, enum /* @enum$1311zLaserBeam_cpp */ {
    BV_CARD = 0,
    BV_CONE = 1,
    MAX_BV = 2,
} labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}

// Range: 0x8017B180 -> 0x8017B1F0
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned char * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned char * values /* r1+0x20 */, enum /* @enum$1316zLaserBeam_cpp */ {
    FO_IMMEDIATE = 0,
    FO_LINEAR = 1,
    FO_BLINK = 2,
    MAX_FO = 3,
} labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}

// Range: 0x8017B1F0 -> 0x8017B260
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned char * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned char * values /* r1+0x20 */, enum /* @enum$1315zLaserBeam_cpp */ {
    FI_IMMEDIATE = 0,
    FI_LINEAR = 1,
    FI_OVERSHOOT = 2,
    MAX_FI = 3,
} labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}

// Range: 0x8017B260 -> 0x8017B2D0
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned char * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned char * values /* r1+0x20 */, enum /* @enum$1314zLaserBeam_cpp */ {
    CA_NONE = 0,
    CA_PULSE = 1,
    CA_FLICKER = 2,
    MAX_CA = 3,
} labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}

// Range: 0x8017B2D0 -> 0x8017B340
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned char * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned char * values /* r1+0x20 */, enum /* @enum$1310zLaserBeam_cpp */ {
    MT_LOOP = 0,
    MT_REVERSE = 1,
    MT_STOP = 2,
    MAX_MT = 3,
} labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}

// Range: 0x8017B340 -> 0x8017B394
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xColor_tag * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x8017B394 -> 0x8017B404
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned char * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x8017B404 -> 0x8017B46C
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x8017B46C -> 0x8017B4C0
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xVec3 * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x8017B4C0 -> 0x8017B518
static void _t_auto_tweak_flag(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned int * v /* r1+0x10 */, enum /* @enum$1308zLaserBeam_cpp */ {
    FLAG_ON = 1,
    FLAG_ROTATE_ATTACH_TO = 2,
    FLAG_ONE_PER_FRAME = 4,
    FLAG_PASS_SPLINE = 8,
    FLAG_COLLIDE_PLAYER = 16,
    FLAG_COLLIDE_NPC = 32,
    FLAG_COLLIDE_ENV = 64,
    FLAG_COLLIDE_OTHER = 128,
    FLAG_RANDOM_COLOR_ANIM_TIME = 256,
    FLAG_PERP_DAMAGE = 512,
    FLAG_DAMAGE_DIR_LEFT = 1024,
    FLAG_DAMAGE_DIR_RIGHT = 2048,
    FLAG_ILLUMINATES_GROUND = 4096,
    FLAG_CONTINUOUS = 8192,
} mask /* r1+0x14 */, const struct tweak_callback * cb /* r1+0x18 */, void * context /* r1+0x1C */, unsigned int flags /* r1+0x20 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018AD54 -> 0x8018ADBC
*/
// Range: 0x8018AD54 -> 0x8018ADBC
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019E068 -> 0x8019E250
*/
// Range: 0x8019E068 -> 0x8019E0D0
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x8019E0D0 -> 0x8019E138
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x8019E138 -> 0x8019E18C
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x8019E18C -> 0x8019E1E0
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xVec3 * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x8019E1E0 -> 0x8019E250
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned int * values /* r1+0x20 */, unsigned int labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019F240 -> 0x8019F2A8
*/
// Range: 0x8019F240 -> 0x8019F2A8
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019FB54 -> 0x8019FB54
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B34B4 -> 0x801B34B4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B4480 -> 0x801B44E8
*/
// Range: 0x801B4480 -> 0x801B44E8
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B96FC -> 0x801B9764
*/
// Range: 0x801B96FC -> 0x801B9764
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C83BC -> 0x801C83BC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C9F0C -> 0x801C9F0C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801CBB30 -> 0x801CBB30
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801CD128 -> 0x801CD128
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D4FC0 -> 0x801D4FC0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801DA7B0 -> 0x801DA878
*/
// Range: 0x801DA7B0 -> 0x801DA808
static void _t_auto_tweak_flag(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, int * v /* r1+0x10 */, enum /* @enum$955xParticleBatch_cpp */ {
    FLAG_NOZTEST = 1,
    FLAG_ZWRITE = 2,
    FLAG_ORDERED = 4,
    FLAG_BRIGHT = 8,
} mask /* r1+0x14 */, const struct tweak_callback * cb /* r1+0x18 */, void * context /* r1+0x1C */, unsigned int flags /* r1+0x20 */) {}

// Range: 0x801DA808 -> 0x801DA878
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned int * values /* r1+0x20 */, unsigned int labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801DD98C -> 0x801DDBB8
*/
// Range: 0x801DD98C -> 0x801DD9F4
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x801DD9F4 -> 0x801DDA48
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x801DDA48 -> 0x801DDA9C
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xColor_tag * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x801DDA9C -> 0x801DDB0C
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned short * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x801DDB0C -> 0x801DDB60
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xVec3 * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x801DDB60 -> 0x801DDBB8
static void _t_auto_tweak_flag(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, int * v /* r1+0x10 */, enum /* @enum$2042zSmoke_cpp */ {
    FLAG_ON = 1,
    FLAG_BEHIND_FIRE = 2,
} mask /* r1+0x14 */, const struct tweak_callback * cb /* r1+0x18 */, void * context /* r1+0x1C */, unsigned int flags /* r1+0x20 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E3704 -> 0x801E395C
*/
// Range: 0x801E3704 -> 0x801E3758
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x801E3758 -> 0x801E37C0
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x801E37C0 -> 0x801E3814
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xColor_tag * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x801E3814 -> 0x801E387C
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x801E387C -> 0x801E38EC
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned int * values /* r1+0x20 */, unsigned int labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}

// Range: 0x801E38EC -> 0x801E395C
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const int * values /* r1+0x20 */, int labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E62DC -> 0x801E64BC
*/
// Range: 0x801E62DC -> 0x801E6344
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x801E6344 -> 0x801E6398
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xVec3 * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x801E6398 -> 0x801E6400
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x801E6400 -> 0x801E6468
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x801E6468 -> 0x801E64BC
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801EBDD4 -> 0x801EBDD4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801FB4E0 -> 0x801FB674
*/
// Range: 0x801FB4E0 -> 0x801FB534
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x801FB534 -> 0x801FB59C
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x801FB59C -> 0x801FB604
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x801FB604 -> 0x801FB674
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned char * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned char * values /* r1+0x20 */, enum /* @enum$1058zGrass_cpp */ {
    ORIENT_UP = 0,
    ORIENT_ROTATE = 1,
    ORIENT_SKEW = 2,
    MAX_ORIENT = 3,
} labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802000FC -> 0x80200220
*/
// Range: 0x802000FC -> 0x80200150
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x80200150 -> 0x802001B8
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x802001B8 -> 0x80200220
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020A5D0 -> 0x8020A68C
*/
// Range: 0x8020A5D0 -> 0x8020A638
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x8020A638 -> 0x8020A68C
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020B07C -> 0x8020B138
*/
// Range: 0x8020B07C -> 0x8020B0D0
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xVec3 * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x8020B0D0 -> 0x8020B138
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80213AD4 -> 0x80213B3C
*/
// Range: 0x80213AD4 -> 0x80213B3C
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802163D8 -> 0x80216630
*/
// Range: 0x802163D8 -> 0x80216448
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const int * values /* r1+0x20 */, enum /* @enum$1892zDust_cpp */ {
    RING_CHAIN_RANDOM = 0,
    RING_CHAIN_ROTATE = 1,
    RING_CHAIN_WAVE = 2,
    RING_CHAIN_TYPES = 3,
} labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}

// Range: 0x80216448 -> 0x802164B8
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned int * values /* r1+0x20 */, unsigned int labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}

// Range: 0x802164B8 -> 0x80216520
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x80216520 -> 0x80216588
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x80216588 -> 0x802165DC
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xVec3 * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x802165DC -> 0x80216630
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8021A9E0 -> 0x8021AC90
*/
// Range: 0x8021A9E0 -> 0x8021AA48
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x8021AA48 -> 0x8021AA9C
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xColor_tag * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x8021AA9C -> 0x8021AAF0
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x8021AAF0 -> 0x8021AB58
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x8021AB58 -> 0x8021ABC8
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned int * values /* r1+0x20 */, unsigned int labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}

// Range: 0x8021ABC8 -> 0x8021AC38
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned char * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x8021AC38 -> 0x8021AC90
static void _t_auto_tweak_flag(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned int * v /* r1+0x10 */, enum /* @enum$1445zSpotlight_cpp */ {
    FLAG_ON = 1,
    FLAG_DETECT_PLAYER = 2,
    FLAG_ROTATE_ATTACH_TO = 4,
} mask /* r1+0x14 */, const struct tweak_callback * cb /* r1+0x18 */, void * context /* r1+0x1C */, unsigned int flags /* r1+0x20 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80220C88 -> 0x80220CF0
*/
// Range: 0x80220C88 -> 0x80220CF0
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80227248 -> 0x80227308
*/
// Range: 0x80227248 -> 0x802272B0
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x802272B0 -> 0x80227308
static void _t_auto_tweak_flag(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, int * v /* r1+0x10 */, enum /* @enum$1564zParticleGenerator_cpp */ {
    FLAG_ON = 1,
    FLAG_RUNNING = 2,
} mask /* r1+0x14 */, const struct tweak_callback * cb /* r1+0x18 */, void * context /* r1+0x1C */, unsigned int flags /* r1+0x20 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8022C250 -> 0x8022C624
*/
// Range: 0x8022C250 -> 0x8022C2C0
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned char * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned char * values /* r1+0x20 */, unsigned char labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}

// Range: 0x8022C2C0 -> 0x8022C328
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x8022C328 -> 0x8022C37C
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xVec3 * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x8022C37C -> 0x8022C3D4
static void _t_auto_tweak_flag(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, unsigned char mask /* r1+0x14 */, const struct tweak_callback * cb /* r1+0x18 */, void * context /* r1+0x1C */, unsigned int flags /* r1+0x20 */) {}

// Range: 0x8022C3D4 -> 0x8022C444
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned char * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x8022C444 -> 0x8022C4B4
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned int * values /* r1+0x20 */, unsigned int labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}

// Range: 0x8022C4B4 -> 0x8022C510
static void _t_auto_tweak_flag(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, enum /* @enum$1283zParticleLocator_cpp */ {
    FLAG_REVERSE_REPEAT = 1,
} mask /* r1+0x14 */, const struct tweak_callback * cb /* r1+0x18 */, void * context /* r1+0x1C */, unsigned int flags /* r1+0x20 */) {}

// Range: 0x8022C510 -> 0x8022C56C
static void _t_auto_tweak_flag(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, int mask /* r1+0x14 */, const struct tweak_callback * cb /* r1+0x18 */, void * context /* r1+0x1C */, unsigned int flags /* r1+0x20 */) {}

// Range: 0x8022C56C -> 0x8022C5C8
static void _t_auto_tweak_flag(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, enum /* @enum$1287zParticleLocator_cpp */ {
    FLAG_SURFACE = 1,
} mask /* r1+0x14 */, const struct tweak_callback * cb /* r1+0x18 */, void * context /* r1+0x1C */, unsigned int flags /* r1+0x20 */) {}

// Range: 0x8022C5C8 -> 0x8022C624
static void _t_auto_tweak_flag(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, enum /* @enum$1286zParticleLocator_cpp */ {
    FLAG_CYLINDRICAL = 1,
} mask /* r1+0x14 */, const struct tweak_callback * cb /* r1+0x18 */, void * context /* r1+0x1C */, unsigned int flags /* r1+0x20 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80230318 -> 0x8023042C
*/
// Range: 0x80230318 -> 0x8023036C
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xColor_tag * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x8023036C -> 0x802303D4
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x802303D4 -> 0x8023042C
static void _t_auto_tweak_flag(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned int * v /* r1+0x10 */, enum /* @enum$1565zParticleSystemWaterfall_cpp */ {
    FLAG_TRANSFORM_VELOCITY = 1,
} mask /* r1+0x14 */, const struct tweak_callback * cb /* r1+0x18 */, void * context /* r1+0x1C */, unsigned int flags /* r1+0x20 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80233380 -> 0x80233568
*/
// Range: 0x80233380 -> 0x802333F0
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, signed short * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x802333F0 -> 0x80233458
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x80233458 -> 0x802334AC
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xColor_tag * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x802334AC -> 0x80233514
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x80233514 -> 0x80233568
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xVec3 * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802367FC -> 0x802368B8
*/
// Range: 0x802367FC -> 0x80236864
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x80236864 -> 0x802368B8
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80238544 -> 0x80238670
*/
// Range: 0x80238544 -> 0x802385AC
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x802385AC -> 0x80238600
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x80238600 -> 0x80238670
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned int * values /* r1+0x20 */, unsigned int labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802397FC -> 0x802397FC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80241970 -> 0x80241970
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802422F4 -> 0x80242418
*/
// Range: 0x802422F4 -> 0x80242348
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x80242348 -> 0x802423B0
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x802423B0 -> 0x80242418
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80246EF8 -> 0x802470E0
*/
// Range: 0x80246EF8 -> 0x80246F4C
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xColor_tag * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x80246F4C -> 0x80246FB4
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x80246FB4 -> 0x80247024
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned int * values /* r1+0x20 */, unsigned int labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}

// Range: 0x80247024 -> 0x80247078
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x80247078 -> 0x802470E0
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802480BC -> 0x80248194
*/
// Range: 0x802480BC -> 0x8024812C
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned char * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x8024812C -> 0x80248194
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80249CFC -> 0x80249E70
*/
// Range: 0x80249CFC -> 0x80249D64
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x80249D64 -> 0x80249DD4
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned char * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x80249DD4 -> 0x80249E70
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, int vmin /* r1+0x14 */, int vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x4B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8024CF80 -> 0x8024D1B8
*/
// Range: 0x8024CF80 -> 0x8024CFE8
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x8024CFE8 -> 0x8024D050
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x8024D050 -> 0x8024D0A4
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xVec3 * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x8024D0A4 -> 0x8024D10C
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x8024D10C -> 0x8024D164
static void _t_auto_tweak_flag(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned int * v /* r1+0x10 */, enum /* @enum$894zSparkEmitter_cpp */ {
    FLAG_INITIALLY_ON = 1,
    FLAG_USE_LIGHT = 2,
} mask /* r1+0x14 */, const struct tweak_callback * cb /* r1+0x18 */, void * context /* r1+0x1C */, unsigned int flags /* r1+0x20 */) {}

// Range: 0x8024D164 -> 0x8024D1B8
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80250600 -> 0x802506BC
*/
// Range: 0x80250600 -> 0x80250654
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xColor_tag * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x80250654 -> 0x802506BC
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025302C -> 0x80253218
*/
// Range: 0x8025302C -> 0x80253094
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x80253094 -> 0x802530E8
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x802530E8 -> 0x80253158
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned int * values /* r1+0x20 */, unsigned int labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}

// Range: 0x80253158 -> 0x802531B0
static void _t_auto_tweak_flag(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, int * v /* r1+0x10 */, unsigned int mask /* r1+0x14 */, const struct tweak_callback * cb /* r1+0x18 */, void * context /* r1+0x1C */, unsigned int flags /* r1+0x20 */) {}

// Range: 0x802531B0 -> 0x80253218
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025567C -> 0x80255864
*/
// Range: 0x8025567C -> 0x802556E4
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x802556E4 -> 0x80255738
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x80255738 -> 0x8025578C
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xColor_tag * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x8025578C -> 0x802557F4
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x802557F4 -> 0x80255864
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned int * values /* r1+0x20 */, unsigned int labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802582E0 -> 0x80258420
*/
// Range: 0x802582E0 -> 0x80258348
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x80258348 -> 0x802583B8
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned int * values /* r1+0x20 */, unsigned int labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}

// Range: 0x802583B8 -> 0x80258420
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025B7FC -> 0x8025B928
*/
// Range: 0x8025B7FC -> 0x8025B850
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xVec3 * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x8025B850 -> 0x8025B8C0
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned char * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x8025B8C0 -> 0x8025B928
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025D5D4 -> 0x8025D5D4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802640B8 -> 0x802640B8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802706B4 -> 0x80270784
*/
// Range: 0x802706B4 -> 0x8027071C
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x8027071C -> 0x80270784
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80274894 -> 0x80274894
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802765CC -> 0x80276720
*/
// Range: 0x802765CC -> 0x80276650
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, float vmin /* r1+0x1C */, float vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x30 */) {}

// Range: 0x80276650 -> 0x802766B8
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x802766B8 -> 0x80276720
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80276CF4 -> 0x80276CF4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80277AEC -> 0x80277BD8
*/
// Range: 0x80277AEC -> 0x80277B70
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, float vmin /* r1+0x1C */, float vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x30 */) {}

// Range: 0x80277B70 -> 0x80277BD8
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80279C74 -> 0x80279C74
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027D1C4 -> 0x8027D39C
*/
// Range: 0x8027D1C4 -> 0x8027D21C
static void _t_auto_tweak_flag(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned int * v /* r1+0x10 */, enum zScreenWarpFlags mask /* r1+0x14 */, const struct tweak_callback * cb /* r1+0x18 */, void * context /* r1+0x1C */, unsigned int flags /* r1+0x20 */) {}

// Range: 0x8027D21C -> 0x8027D270
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x8027D270 -> 0x8027D2D8
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x8027D2D8 -> 0x8027D32C
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xVec3 * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x8027D32C -> 0x8027D39C
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned int * values /* r1+0x20 */, enum type_enum labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027DF7C -> 0x8027E054
*/
// Range: 0x8027DF7C -> 0x8027DFEC
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned char * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x8027DFEC -> 0x8027E054
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80280F2C -> 0x80280FE8
*/
// Range: 0x80280F2C -> 0x80280F80
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xVec3 * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x80280F80 -> 0x80280FE8
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80281868 -> 0x80281940
*/
// Range: 0x80281868 -> 0x802818D8
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned char * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x802818D8 -> 0x80281940
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80282AC8 -> 0x80282BB4
*/
// Range: 0x80282AC8 -> 0x80282B4C
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, float vmin /* r1+0x1C */, float vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x30 */) {}

// Range: 0x80282B4C -> 0x80282BB4
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80282F24 -> 0x80282F24
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80286C04 -> 0x80286CF0
*/
// Range: 0x80286C04 -> 0x80286C88
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, float vmin /* r1+0x1C */, float vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x30 */) {}

// Range: 0x80286C88 -> 0x80286CF0
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8028941C -> 0x80289508
*/
// Range: 0x8028941C -> 0x802894A0
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, float vmin /* r1+0x1C */, float vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x30 */) {}

// Range: 0x802894A0 -> 0x80289508
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8028BF9C -> 0x8028C0F4
*/
// Range: 0x8028BF9C -> 0x8028C038
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, int vmin /* r1+0x14 */, int vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x4B */) {}

// Range: 0x8028C038 -> 0x8028C08C
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x8028C08C -> 0x8028C0F4
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80290D00 -> 0x80290E40
*/
// Range: 0x80290D00 -> 0x80290D70
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned int * values /* r1+0x20 */, unsigned int labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}

// Range: 0x80290D70 -> 0x80290DD8
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x80290DD8 -> 0x80290E40
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802917DC -> 0x802918AC
*/
// Range: 0x802917DC -> 0x802918AC
struct tweak_callback tweak_callback::create_edit(void (* on_start_edit)(struct tweak_info &) /* r4 */, void (* on_stop_edit)(struct tweak_info &) /* r5 */) {
    // Local variables
    struct tweak_callback cb; // r1+0x8
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80298D40 -> 0x80298E10
*/
// Range: 0x80298D40 -> 0x80298DA8
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x80298DA8 -> 0x80298E10
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8029CFCC -> 0x8029D238
*/
// Range: 0x8029CFCC -> 0x8029D020
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x8029D020 -> 0x8029D088
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x8029D088 -> 0x8029D0F8
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned char * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x8029D0F8 -> 0x8029D160
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x8029D160 -> 0x8029D1C8
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x8029D1C8 -> 0x8029D238
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned int * values /* r1+0x20 */, unsigned int labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A3B84 -> 0x802A3BEC
*/
// Range: 0x802A3B84 -> 0x802A3BEC
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A6AD4 -> 0x802A6B3C
*/
// Range: 0x802A6AD4 -> 0x802A6B3C
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A8BF4 -> 0x802A8C5C
*/
// Range: 0x802A8BF4 -> 0x802A8C5C
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802ACBD4 -> 0x802ACD3C
*/
// Range: 0x802ACBD4 -> 0x802ACC28
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xVec3 * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x802ACC28 -> 0x802ACC90
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x802ACC90 -> 0x802ACCE8
static void _t_auto_tweak_flag(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned int * v /* r1+0x10 */, int mask /* r1+0x14 */, const struct tweak_callback * cb /* r1+0x18 */, void * context /* r1+0x1C */, unsigned int flags /* r1+0x20 */) {}

// Range: 0x802ACCE8 -> 0x802ACD3C
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B1D14 -> 0x802B1E40
*/
// Range: 0x802B1D14 -> 0x802B1D84
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned int * values /* r1+0x20 */, unsigned int labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}

// Range: 0x802B1D84 -> 0x802B1DD8
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x802B1DD8 -> 0x802B1E40
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B3414 -> 0x802B3598
*/
// Range: 0x802B3414 -> 0x802B3484
static void _t_auto_tweak_select(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, const char * * labels /* r1+0x1C */, const unsigned int * values /* r1+0x20 */, unsigned int labels_size /* r1+0x24 */, const struct tweak_callback * cb /* r1+0x28 */, void * context /* r1+0x2C */, unsigned int flags /* r1+0x38 */, unsigned char process /* r1+0x3F */) {}

// Range: 0x802B3484 -> 0x802B34D8
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x802B34D8 -> 0x802B3540
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x802B3540 -> 0x802B3598
static void _t_auto_tweak_flag(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned int * v /* r1+0x10 */, enum /* @enum$760zCamPreset_cpp */ {
    FLAG_APPLY_ON_SCENE_PREPARE = 1,
    FLAG_APPLY_ON_RESET = 2,
    FLAG_RELATIVE = 4,
} mask /* r1+0x14 */, const struct tweak_callback * cb /* r1+0x18 */, void * context /* r1+0x1C */, unsigned int flags /* r1+0x20 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802BE160 -> 0x802BE2C0
*/
// Range: 0x802BE160 -> 0x802BE1FC
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, int vmin /* r1+0x14 */, int vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x4B */) {}

// Range: 0x802BE1FC -> 0x802BE250
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xVec3 * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x802BE250 -> 0x802BE2C0
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, signed short * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802C393C -> 0x802C3A0C
*/
// Range: 0x802C393C -> 0x802C39A4
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x802C39A4 -> 0x802C3A0C
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802CD920 -> 0x802CD920
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802D1538 -> 0x802D1610
*/
// Range: 0x802D1538 -> 0x802D15A8
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned char * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x802D15A8 -> 0x802D1610
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802D58B8 -> 0x802D5920
*/
// Range: 0x802D58B8 -> 0x802D5920
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802D6B54 -> 0x802D6C78
*/
// Range: 0x802D6B54 -> 0x802D6BA8
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x802D6BA8 -> 0x802D6C10
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x802D6C10 -> 0x802D6C78
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802D7490 -> 0x802D754C
*/
// Range: 0x802D7490 -> 0x802D74E4
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x802D74E4 -> 0x802D754C
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802DCC5C -> 0x802DCD80
*/
// Range: 0x802DCC5C -> 0x802DCCB0
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x802DCCB0 -> 0x802DCD18
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x802DCD18 -> 0x802DCD80
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802E169C -> 0x802E17C0
*/
// Range: 0x802E169C -> 0x802E16F0
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xVec3 * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x802E16F0 -> 0x802E1758
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x802E1758 -> 0x802E17C0
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802E273C -> 0x802E27A4
*/
// Range: 0x802E273C -> 0x802E27A4
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802E5024 -> 0x802E5178
*/
// Range: 0x802E5024 -> 0x802E50A8
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, float vmin /* r1+0x1C */, float vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x30 */) {}

// Range: 0x802E50A8 -> 0x802E5110
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x802E5110 -> 0x802E5178
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802E7C28 -> 0x802E7CE4
*/
// Range: 0x802E7C28 -> 0x802E7C90
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x802E7C90 -> 0x802E7CE4
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xVec3 * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802E9374 -> 0x802E9430
*/
// Range: 0x802E9374 -> 0x802E93C8
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xVec3 * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x802E93C8 -> 0x802E9430
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802F4080 -> 0x802F40E8
*/
// Range: 0x802F4080 -> 0x802F40E8
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802F7620 -> 0x802F7688
*/
// Range: 0x802F7620 -> 0x802F7688
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802FB9E0 -> 0x802FBA48
*/
// Range: 0x802FB9E0 -> 0x802FBA48
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802FC8E8 -> 0x802FC950
*/
// Range: 0x802FC8E8 -> 0x802FC950
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802FE8EC -> 0x802FE940
*/
// Range: 0x802FE8EC -> 0x802FE940
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80304128 -> 0x80304128
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8030A7F4 -> 0x8030A85C
*/
// Range: 0x8030A7F4 -> 0x8030A85C
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8030D368 -> 0x8030D3D0
*/
// Range: 0x8030D368 -> 0x8030D3D0
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8031618C -> 0x803161F4
*/
// Range: 0x8031618C -> 0x803161F4
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80317288 -> 0x803172F0
*/
// Range: 0x80317288 -> 0x803172F0
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8031800C -> 0x80318074
*/
// Range: 0x8031800C -> 0x80318074
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80318FB4 -> 0x80319008
*/
// Range: 0x80318FB4 -> 0x80319008
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8031C420 -> 0x8031C488
*/
// Range: 0x8031C420 -> 0x8031C488
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8031EF6C -> 0x8031EFD4
*/
// Range: 0x8031EF6C -> 0x8031EFD4
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80321A0C -> 0x80321B30
*/
// Range: 0x80321A0C -> 0x80321A60
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x80321A60 -> 0x80321AC8
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x80321AC8 -> 0x80321B30
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803230B8 -> 0x803231DC
*/
// Range: 0x803230B8 -> 0x8032310C
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x8032310C -> 0x80323174
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}

// Range: 0x80323174 -> 0x803231DC
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, int * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803261A0 -> 0x803261A0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80336C54 -> 0x80336C54
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8033B2A4 -> 0x8033B3D0
*/
// Range: 0x8033B2A4 -> 0x8033B2F8
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, struct xVec3 * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}

// Range: 0x8033B2F8 -> 0x8033B368
static void _t_auto_tweak(const char * prefix /* r1+0x10 */, const char * name /* r1+0x14 */, unsigned char * v /* r1+0x18 */, int vmin /* r1+0x1C */, int vmax /* r1+0x20 */, const struct tweak_callback * cb /* r1+0x24 */, void * context /* r1+0x28 */, unsigned int flags /* r1+0x2C */, unsigned char process /* r1+0x3B */) {}

// Range: 0x8033B368 -> 0x8033B3D0
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, float * v /* r1+0x10 */, float vmin /* r1+0x14 */, float vmax /* r1+0x18 */, const struct tweak_callback * cb /* r1+0x1C */, void * context /* r1+0x20 */, unsigned int flags /* r1+0x24 */, unsigned char process /* r1+0x28 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80345304 -> 0x80345358
*/
// Range: 0x80345304 -> 0x80345358
static void _t_auto_tweak(const char * prefix /* r1+0x8 */, const char * name /* r1+0xC */, unsigned char * v /* r1+0x10 */, const struct tweak_callback * cb /* r1+0x14 */, void * context /* r1+0x18 */, unsigned int flags /* r1+0x1C */, unsigned char process /* r1+0x2B */) {}


