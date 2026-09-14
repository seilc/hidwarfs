/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80012128 -> 0x800121B8
*/
// Range: 0x80012128 -> 0x80012150
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80012150 -> 0x80012198
void xDebugRemoveTweak(const char * name /* r31 */) {}

// Range: 0x80012198 -> 0x800121B8
void xDebugAddFlagTweak(const char * name /* r0 */, int * v /* r0 */, int mask /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800177E8 -> 0x800178A4
*/
// Range: 0x800177E8 -> 0x80017808
static void _t_auto_tweak_flag(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, enum /* @enum$1152xCamSupport_cpp */ {
    DEBUG_FLAG_RENDER = 1,
} mask /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */) {}

// Range: 0x80017808 -> 0x80017828
void _auto_tweak_flag(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int mask /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */) {}

// Range: 0x80017828 -> 0x80017850
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80017850 -> 0x80017870
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80017870 -> 0x800178A4
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8002510C -> 0x800251AC
*/
// Range: 0x8002510C -> 0x800251AC
struct tweak_callback tweak_callback::create_update(void (* on_update)(struct tweak_info &) /* r0 */) {
    // Local variables
    struct tweak_callback cb; // r1+0x8
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8002E02C -> 0x8002E0CC
*/
// Range: 0x8002E02C -> 0x8002E0CC
struct tweak_callback tweak_callback::create_change(void (* on_change)(struct tweak_info &) /* r0 */) {
    // Local variables
    struct tweak_callback cb; // r1+0x8
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8002EE9C -> 0x8002EFA8
*/
// Range: 0x8002EE9C -> 0x8002EED0
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x8002EED0 -> 0x8002EF00
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, const char * * labels /* r0 */, const unsigned int * values /* r0 */, unsigned long labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}

// Range: 0x8002EF00 -> 0x8002EF20
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x8002EF20 -> 0x8002EF40
static void _t_auto_tweak_flag(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, enum /* @enum$1047xDebugGraph_cpp */ {
    FLAG_RENDER = 1,
    FLAG_PAUSE = 2,
    FLAG_AUTO_SCALE = 4,
    FLAG_BIND_INT = 8,
} mask /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */) {}

// Range: 0x8002EF40 -> 0x8002EFA8
void xDebugRemoveTweaks(const char * name /* r29 */, unsigned char (* cb)(struct tweak_info &, void *) /* r30 */, void * context /* r31 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80039440 -> 0x80039508
*/
// Range: 0x80039440 -> 0x80039508
struct tweak_callback tweak_callback::create(void (* on_change)(struct tweak_info &) /* r0 */, void (* on_select)(struct tweak_info &) /* r0 */, void (* on_unselect)(struct tweak_info &) /* r0 */, void (* on_start_edit)(struct tweak_info &) /* r0 */, void (* on_stop_edit)(struct tweak_info &) /* r0 */, void (* on_expand)(struct tweak_info &) /* r0 */, void (* on_collapse)(struct tweak_info &) /* r0 */, void (* on_update)(struct tweak_info &) /* r22 */, void (* convert_mem_to_tweak)(struct tweak_info &, void *) /* r23 */, void (* convert_tweak_to_mem)(struct tweak_info &, void *) /* r24 */) {
    // Local variables
    struct tweak_callback cb; // r1+0x8
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8004458C -> 0x80044668
*/
// Range: 0x8004458C -> 0x800445BC
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, const char * * labels /* r0 */, const unsigned int * values /* r0 */, unsigned int labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}

// Range: 0x800445BC -> 0x800445EC
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, const char * * labels /* r0 */, const int * values /* r0 */, enum /* @enum$1406xDecal_cpp */ {
    BLEND_MODE_INVALID = -1,
    BLEND_MODE_AVERAGE = 0,
    BLEND_MODE_ADDITIVE = 1,
    BLEND_MODE_BRIGHT = 2,
    MAX_BLEND_MODE = 3,
} labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}

// Range: 0x800445EC -> 0x80044614
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80044614 -> 0x80044634
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80044634 -> 0x80044668
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80059E10 -> 0x80059E10
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006BA00 -> 0x8006BA00
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006F270 -> 0x8006F270
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80072074 -> 0x80072120
*/
// Range: 0x80072074 -> 0x80072120
struct tweak_callback tweak_callback::create_expand(void (* on_expand)(struct tweak_info &) /* r0 */, void (* on_collapse)(struct tweak_info &) /* r0 */) {
    // Local variables
    struct tweak_callback cb; // r1+0x8
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8007BD04 -> 0x8007BDA0
*/
// Range: 0x8007BD04 -> 0x8007BD2C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, unsigned int vmin /* r0 */, unsigned int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x8007BD80 -> 0x8007BDA0
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80087E00 -> 0x80087E30
*/
// Range: 0x80087E00 -> 0x80087E30
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, const char * * labels /* r0 */, const int * values /* r0 */, enum /* @enum$3293xModel_cpp */ {
    RL_SORT_NONE = 0,
    RL_SORT_MODEL = 1,
    RL_SORT_ENTITY = 2,
    MAX_RL_SORT = 3,
} labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80092F98 -> 0x80092F98
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80096DD8 -> 0x80096DD8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A22E4 -> 0x800A230C
*/
// Range: 0x800A22E4 -> 0x800A230C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A5DA8 -> 0x800A5E6C
*/
// Range: 0x800A5DA8 -> 0x800A5DDC
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x800A5DDC -> 0x800A5E0C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, int vmin /* r6 */, int vmax /* r7 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x800A5E0C -> 0x800A5E6C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r9 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B1AD4 -> 0x800B1B58
*/
// Range: 0x800B1AD4 -> 0x800B1B08
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x800B1B08 -> 0x800B1B38
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, const char * * labels /* r0 */, const int * values /* r0 */, enum type_enum labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}

// Range: 0x800B1B38 -> 0x800B1B58
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B4CCC -> 0x800B4CFC
*/
// Range: 0x800B4CCC -> 0x800B4CFC
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, const char * * labels /* r0 */, const unsigned int * values /* r0 */, unsigned int labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C79D0 -> 0x800C7A4C
*/
// Range: 0x800C79D0 -> 0x800C79F0
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x800C79F0 -> 0x800C7A18
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x800C7A18 -> 0x800C7A4C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800DD8C4 -> 0x800DD8C4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80102F60 -> 0x801031F4
*/
// Range: 0x80102F60 -> 0x80102F88
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80102F88 -> 0x80102FB0
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, enum zCommonPlayerUpgradeLevel vmin /* r0 */, enum zCommonPlayerUpgradeLevel vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80102FB0 -> 0x80103010
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r9 */) {}

// Range: 0x80103010 -> 0x80103038
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80103038 -> 0x8010306C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xVec3 * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x8010306C -> 0x80103118
struct tweak_callback tweak_callback::create_converter(void (* convert_mem_to_tweak)(struct tweak_info &, void *) /* r0 */, void (* convert_tweak_to_mem)(struct tweak_info &, void *) /* r0 */) {
    // Local variables
    struct tweak_callback cb; // r1+0x8
}

// Range: 0x80103118 -> 0x801031A0
static void _t_auto_tweak(const char * prefix /* r24 */, const char * name /* r25 */, unsigned int * v /* r26 */, float vmin /* f31 */, float vmax /* f2 */, const struct tweak_callback * cb /* r27 */, void * context /* r28 */, unsigned int flags /* r29 */, unsigned char process /* r30 */) {}

// Range: 0x801031A0 -> 0x801031D4
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x801031D4 -> 0x801031F4
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80116A18 -> 0x80116A18
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8011E5FC -> 0x8011E678
*/
// Range: 0x8011E5FC -> 0x8011E630
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x8011E630 -> 0x8011E650
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x8011E650 -> 0x8011E678
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80124F54 -> 0x80125028
*/
// Range: 0x80124F54 -> 0x80124F88
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x80124F88 -> 0x80124FB8
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, const char * * labels /* r0 */, const unsigned int * values /* r0 */, unsigned int labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}

// Range: 0x80124FB8 -> 0x80124FE0
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80124FE0 -> 0x80125000
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80125000 -> 0x80125028
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80126EEC -> 0x80126F60
*/
// Range: 0x80126EEC -> 0x80126F0C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80126F0C -> 0x80126F40
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xVec3 * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x80126F40 -> 0x80126F60
static void _t_auto_tweak_flag(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, enum /* @enum$1959zFlameEmitter_cpp */ {
    FLAG_GROUND = 1,
    FLAG_VISIBLE = 2,
    FLAG_DRAW_GROUND = 4,
    FLAG_DRAW_SHORT = 8,
} mask /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80135ED8 -> 0x80136194
*/
// Range: 0x80135ED8 -> 0x80135F0C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x80135F0C -> 0x80135F3C
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const char * * labels /* r0 */, const unsigned char * values /* r0 */, enum /* @enum$1473zLaserBeam_cpp */ {
    BM_AVERAGE = 0,
    BM_ADDITIVE = 1,
    BM_OPAQUE = 2,
    BM_ONEONE = 3,
    MAX_BM = 4,
} labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}

// Range: 0x80135F3C -> 0x80135F6C
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, const char * * labels /* r0 */, const unsigned int * values /* r0 */, unsigned int labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}

// Range: 0x80135F6C -> 0x80135F9C
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const char * * labels /* r0 */, const unsigned char * values /* r0 */, enum /* @enum$1477zLaserBeam_cpp */ {
    RC_BURN = 0,
    RC_FADE = 1,
    MAX_RC = 2,
    RC_DEFAULT = 0,
} labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}

// Range: 0x80135F9C -> 0x80135FCC
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const char * * labels /* r0 */, const unsigned char * values /* r0 */, enum /* @enum$1476zLaserBeam_cpp */ {
    RO_PLANAR = 0,
    RO_TANGENT = 1,
    MAX_RO = 2,
} labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}

// Range: 0x80135FCC -> 0x80135FFC
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const char * * labels /* r0 */, const unsigned char * values /* r0 */, enum /* @enum$1475zLaserBeam_cpp */ {
    BV_CARD = 0,
    BV_CONE = 1,
    MAX_BV = 2,
} labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}

// Range: 0x80135FFC -> 0x8013602C
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const char * * labels /* r0 */, const unsigned char * values /* r0 */, enum /* @enum$1480zLaserBeam_cpp */ {
    FO_IMMEDIATE = 0,
    FO_LINEAR = 1,
    FO_BLINK = 2,
    MAX_FO = 3,
} labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}

// Range: 0x8013602C -> 0x8013605C
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const char * * labels /* r0 */, const unsigned char * values /* r0 */, enum /* @enum$1479zLaserBeam_cpp */ {
    FI_IMMEDIATE = 0,
    FI_LINEAR = 1,
    FI_OVERSHOOT = 2,
    MAX_FI = 3,
} labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}

// Range: 0x8013605C -> 0x8013608C
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const char * * labels /* r0 */, const unsigned char * values /* r0 */, enum /* @enum$1478zLaserBeam_cpp */ {
    CA_NONE = 0,
    CA_PULSE = 1,
    CA_FLICKER = 2,
    MAX_CA = 3,
} labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}

// Range: 0x8013608C -> 0x801360BC
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const char * * labels /* r0 */, const unsigned char * values /* r0 */, enum /* @enum$1474zLaserBeam_cpp */ {
    MT_LOOP = 0,
    MT_REVERSE = 1,
    MT_STOP = 2,
    MAX_MT = 3,
} labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}

// Range: 0x801360BC -> 0x801360F0
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xColor_tag * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x801360F0 -> 0x80136120
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, int vmin /* r6 */, int vmax /* r7 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80136120 -> 0x80136140
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80136140 -> 0x80136174
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xVec3 * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x80136174 -> 0x80136194
static void _t_auto_tweak_flag(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, enum /* @enum$1472zLaserBeam_cpp */ {
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
} mask /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014379C -> 0x801437BC
*/
// Range: 0x8014379C -> 0x801437BC
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015402C -> 0x8015410C
*/
// Range: 0x8015402C -> 0x80154054
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80154054 -> 0x80154074
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80154074 -> 0x801540A8
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x801540A8 -> 0x801540DC
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xVec3 * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x801540DC -> 0x8015410C
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, const char * * labels /* r0 */, const unsigned int * values /* r0 */, unsigned int labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80154F08 -> 0x80154F28
*/
// Range: 0x80154F08 -> 0x80154F28
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015569C -> 0x8015569C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80165298 -> 0x80165298
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80166084 -> 0x801660A4
*/
// Range: 0x80166084 -> 0x801660A4
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016AA1C -> 0x8016AA44
*/
// Range: 0x8016AA1C -> 0x8016AA44
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80177000 -> 0x80177000
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801786F8 -> 0x801786F8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80179E34 -> 0x80179E34
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017B100 -> 0x8017B100
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80181C40 -> 0x80181C40
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80186888 -> 0x801868D8
*/
// Range: 0x80186888 -> 0x801868A8
static void _t_auto_tweak_flag(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, enum /* @enum$1151xParticleBatch_cpp */ {
    FLAG_NOZTEST = 1,
    FLAG_ZWRITE = 2,
    FLAG_ORDERED = 4,
    FLAG_BRIGHT = 8,
} mask /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */) {}

// Range: 0x801868A8 -> 0x801868D8
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, const char * * labels /* r0 */, const unsigned int * values /* r0 */, unsigned int labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018934C -> 0x80189458
*/
// Range: 0x8018934C -> 0x8018936C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x8018936C -> 0x801893A0
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x801893A0 -> 0x801893D4
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xColor_tag * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x801893D4 -> 0x80189404
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned short * v /* r0 */, int vmin /* r6 */, int vmax /* r7 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80189404 -> 0x80189438
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xVec3 * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x80189438 -> 0x80189458
static void _t_auto_tweak_flag(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, enum /* @enum$2203zSmoke_cpp */ {
    FLAG_ON = 1,
    FLAG_BEHIND_FIRE = 2,
} mask /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018E9F4 -> 0x8018EB04
*/
// Range: 0x8018E9F4 -> 0x8018EA28
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x8018EA28 -> 0x8018EA48
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x8018EA48 -> 0x8018EA7C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xColor_tag * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x8018EA7C -> 0x8018EAA4
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x8018EAA4 -> 0x8018EAD4
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, const char * * labels /* r0 */, const unsigned int * values /* r0 */, unsigned int labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}

// Range: 0x8018EAD4 -> 0x8018EB04
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, const char * * labels /* r0 */, const int * values /* r0 */, int labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801910C0 -> 0x80191198
*/
// Range: 0x801910C0 -> 0x801910E8
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801910E8 -> 0x8019111C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xVec3 * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x8019111C -> 0x80191144
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80191144 -> 0x80191164
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80191164 -> 0x80191198
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80195F0C -> 0x80195F0C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801A2F8C -> 0x801A3038
*/
// Range: 0x801A2F8C -> 0x801A2FC0
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x801A2FC0 -> 0x801A2FE8
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801A2FE8 -> 0x801A3008
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801A3008 -> 0x801A3038
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const char * * labels /* r0 */, const unsigned char * values /* r0 */, enum /* @enum$1254zGrass_cpp */ {
    ORIENT_UP = 0,
    ORIENT_ROTATE = 1,
    ORIENT_SKEW = 2,
    MAX_ORIENT = 3,
} labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801A6FC8 -> 0x801A7044
*/
// Range: 0x801A6FC8 -> 0x801A6FFC
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x801A6FFC -> 0x801A701C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801A701C -> 0x801A7044
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B01D4 -> 0x801B0228
*/
// Range: 0x801B01D4 -> 0x801B01F4
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801B01F4 -> 0x801B0228
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B0B44 -> 0x801B0B98
*/
// Range: 0x801B0B44 -> 0x801B0B78
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xVec3 * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x801B0B78 -> 0x801B0B98
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B7C50 -> 0x801B7C70
*/
// Range: 0x801B7C50 -> 0x801B7C70
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801BA118 -> 0x801BA228
*/
// Range: 0x801BA118 -> 0x801BA148
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, const char * * labels /* r0 */, const int * values /* r0 */, enum /* @enum$2053zDust_cpp */ {
    RING_CHAIN_RANDOM = 0,
    RING_CHAIN_ROTATE = 1,
    RING_CHAIN_WAVE = 2,
    RING_CHAIN_TYPES = 3,
} labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}

// Range: 0x801BA148 -> 0x801BA178
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, const char * * labels /* r0 */, const unsigned int * values /* r0 */, unsigned int labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}

// Range: 0x801BA178 -> 0x801BA1A0
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801BA1A0 -> 0x801BA1C0
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801BA1C0 -> 0x801BA1F4
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xVec3 * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x801BA1F4 -> 0x801BA228
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801BDBB4 -> 0x801BDCE4
*/
// Range: 0x801BDBB4 -> 0x801BDBDC
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801BDBDC -> 0x801BDC10
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xColor_tag * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x801BDC10 -> 0x801BDC44
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x801BDC44 -> 0x801BDC64
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801BDC64 -> 0x801BDC94
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, const char * * labels /* r0 */, const unsigned int * values /* r0 */, unsigned int labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}

// Range: 0x801BDC94 -> 0x801BDCC4
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, int vmin /* r6 */, int vmax /* r7 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801BDCC4 -> 0x801BDCE4
static void _t_auto_tweak_flag(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, enum /* @enum$1641zSpotlight_cpp */ {
    FLAG_ON = 1,
    FLAG_DETECT_PLAYER = 2,
    FLAG_ROTATE_ATTACH_TO = 4,
} mask /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C3154 -> 0x801C3174
*/
// Range: 0x801C3154 -> 0x801C3174
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C8D3C -> 0x801C8D7C
*/
// Range: 0x801C8D3C -> 0x801C8D5C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801C8D5C -> 0x801C8D7C
static void _t_auto_tweak_flag(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, enum /* @enum$1764zParticleGenerator_cpp */ {
    FLAG_ON = 1,
    FLAG_RUNNING = 2,
} mask /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801CD24C -> 0x801CD3E4
*/
// Range: 0x801CD24C -> 0x801CD280
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const char * * labels /* r0 */, const unsigned char * values /* r0 */, unsigned char labels_size /* r8 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}

// Range: 0x801CD280 -> 0x801CD2A0
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801CD2A0 -> 0x801CD2D4
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xVec3 * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x801CD2D4 -> 0x801CD2F4
static void _t_auto_tweak_flag(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, unsigned char mask /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */) {}

// Range: 0x801CD2F4 -> 0x801CD324
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, int vmin /* r6 */, int vmax /* r7 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801CD324 -> 0x801CD354
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, const char * * labels /* r0 */, const unsigned int * values /* r0 */, unsigned int labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}

// Range: 0x801CD354 -> 0x801CD378
static void _t_auto_tweak_flag(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, enum /* @enum$1479zParticleLocator_cpp */ {
    FLAG_REVERSE_REPEAT = 1,
} mask /* r6 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */) {}

// Range: 0x801CD378 -> 0x801CD39C
static void _t_auto_tweak_flag(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, int mask /* r6 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */) {}

// Range: 0x801CD39C -> 0x801CD3C0
static void _t_auto_tweak_flag(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, enum /* @enum$1483zParticleLocator_cpp */ {
    FLAG_SURFACE = 1,
} mask /* r6 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */) {}

// Range: 0x801CD3C0 -> 0x801CD3E4
static void _t_auto_tweak_flag(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, enum /* @enum$1482zParticleLocator_cpp */ {
    FLAG_CYLINDRICAL = 1,
} mask /* r6 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D0D24 -> 0x801D0D98
*/
// Range: 0x801D0D24 -> 0x801D0D58
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xColor_tag * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x801D0D58 -> 0x801D0D78
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801D0D78 -> 0x801D0D98
static void _t_auto_tweak_flag(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, enum /* @enum$1765zParticleSystemWaterfall_cpp */ {
    FLAG_TRANSFORM_VELOCITY = 1,
} mask /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D37B0 -> 0x801D3890
*/
// Range: 0x801D37B0 -> 0x801D37E0
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, signed short * v /* r0 */, int vmin /* r6 */, int vmax /* r7 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801D37E0 -> 0x801D3808
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801D3808 -> 0x801D383C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xColor_tag * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x801D383C -> 0x801D385C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801D385C -> 0x801D3890
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xVec3 * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D63BC -> 0x801D6418
*/
// Range: 0x801D63BC -> 0x801D63E4
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801D63E4 -> 0x801D6418
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D7E60 -> 0x801D7EE4
*/
// Range: 0x801D7E60 -> 0x801D7E80
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801D7E80 -> 0x801D7EB4
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x801D7EB4 -> 0x801D7EE4
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, const char * * labels /* r0 */, const unsigned int * values /* r0 */, unsigned int labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D8E58 -> 0x801D8E58
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801DFFA4 -> 0x801DFFA4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E0308 -> 0x801E0384
*/
// Range: 0x801E0308 -> 0x801E033C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x801E033C -> 0x801E0364
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801E0364 -> 0x801E0384
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E44CC -> 0x801E45AC
*/
// Range: 0x801E44CC -> 0x801E4500
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xColor_tag * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x801E4500 -> 0x801E4528
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801E4528 -> 0x801E4558
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, const char * * labels /* r0 */, const unsigned int * values /* r0 */, unsigned int labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}

// Range: 0x801E4558 -> 0x801E458C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x801E458C -> 0x801E45AC
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E5350 -> 0x801E53A0
*/
// Range: 0x801E5350 -> 0x801E5380
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, int vmin /* r6 */, int vmax /* r7 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801E5380 -> 0x801E53A0
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E6AE4 -> 0x801E6B94
*/
// Range: 0x801E6AE4 -> 0x801E6B04
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801E6B04 -> 0x801E6B34
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, int vmin /* r6 */, int vmax /* r7 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801E6B34 -> 0x801E6B94
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r9 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E96FC -> 0x801E97F4
*/
// Range: 0x801E96FC -> 0x801E9724
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801E9724 -> 0x801E974C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801E974C -> 0x801E9780
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xVec3 * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x801E9780 -> 0x801E97A0
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801E97A0 -> 0x801E97C0
static void _t_auto_tweak_flag(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, enum /* @enum$1090zSparkEmitter_cpp */ {
    FLAG_INITIALLY_ON = 1,
    FLAG_USE_LIGHT = 2,
} mask /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */) {}

// Range: 0x801E97C0 -> 0x801E97F4
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801EC590 -> 0x801EC5E4
*/
// Range: 0x801EC590 -> 0x801EC5C4
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xColor_tag * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x801EC5C4 -> 0x801EC5E4
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801EEAB4 -> 0x801EEB80
*/
// Range: 0x801EEAB4 -> 0x801EEAD4
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801EEAD4 -> 0x801EEB08
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x801EEB08 -> 0x801EEB38
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, const char * * labels /* r0 */, const unsigned int * values /* r0 */, unsigned int labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}

// Range: 0x801EEB38 -> 0x801EEB58
static void _t_auto_tweak_flag(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, unsigned int mask /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */) {}

// Range: 0x801EEB58 -> 0x801EEB80
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F0BF8 -> 0x801F0CD8
*/
// Range: 0x801F0BF8 -> 0x801F0C18
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801F0C18 -> 0x801F0C4C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x801F0C4C -> 0x801F0C80
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xColor_tag * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x801F0C80 -> 0x801F0CA8
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801F0CA8 -> 0x801F0CD8
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, const char * * labels /* r0 */, const unsigned int * values /* r0 */, unsigned int labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F31E0 -> 0x801F3258
*/
// Range: 0x801F31E0 -> 0x801F3200
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801F3200 -> 0x801F3230
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, const char * * labels /* r0 */, const unsigned int * values /* r0 */, unsigned int labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}

// Range: 0x801F3230 -> 0x801F3258
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F5F50 -> 0x801F5FD4
*/
// Range: 0x801F5F50 -> 0x801F5F84
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xVec3 * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x801F5F84 -> 0x801F5FB4
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, int vmin /* r6 */, int vmax /* r7 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x801F5FB4 -> 0x801F5FD4
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F78C0 -> 0x801F78C0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801FD50C -> 0x801FD50C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80208A28 -> 0x80208A70
*/
// Range: 0x80208A28 -> 0x80208A48
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80208A48 -> 0x80208A70
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020C400 -> 0x8020C400
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020DE88 -> 0x8020DF18
*/
// Range: 0x8020DE88 -> 0x8020DED0
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r6 */, void * context /* r7 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x8020DED0 -> 0x8020DEF8
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x8020DEF8 -> 0x8020DF18
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020E418 -> 0x8020E418
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020F18C -> 0x8020F1F4
*/
// Range: 0x8020F18C -> 0x8020F1D4
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r6 */, void * context /* r7 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x8020F1D4 -> 0x8020F1F4
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80210FFC -> 0x80210FFC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802144A8 -> 0x80214580
*/
// Range: 0x802144A8 -> 0x802144C8
static void _t_auto_tweak_flag(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, enum zScreenWarpFlags mask /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */) {}

// Range: 0x802144C8 -> 0x802144FC
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x802144FC -> 0x8021451C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x8021451C -> 0x80214550
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xVec3 * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x80214550 -> 0x80214580
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, const char * * labels /* r0 */, const unsigned int * values /* r0 */, enum type_enum labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80214588 -> 0x80214588
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802150D8 -> 0x80215128
*/
// Range: 0x802150D8 -> 0x80215108
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, int vmin /* r6 */, int vmax /* r7 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80215108 -> 0x80215128
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80217C68 -> 0x80217CBC
*/
// Range: 0x80217C68 -> 0x80217C9C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xVec3 * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x80217C9C -> 0x80217CBC
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802184F4 -> 0x80218544
*/
// Range: 0x802184F4 -> 0x80218524
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, int vmin /* r6 */, int vmax /* r7 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80218524 -> 0x80218544
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8021955C -> 0x802195C4
*/
// Range: 0x8021955C -> 0x802195A4
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r6 */, void * context /* r7 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x802195A4 -> 0x802195C4
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802198B8 -> 0x802198B8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8021D0A0 -> 0x8021D108
*/
// Range: 0x8021D0A0 -> 0x8021D0E8
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r6 */, void * context /* r7 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x8021D0E8 -> 0x8021D108
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8021F4FC -> 0x8021F564
*/
// Range: 0x8021F4FC -> 0x8021F544
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r6 */, void * context /* r7 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x8021F544 -> 0x8021F564
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80221CF8 -> 0x80221DAC
*/
// Range: 0x80221CF8 -> 0x80221D58
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r9 */) {}

// Range: 0x80221D58 -> 0x80221D8C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x80221D8C -> 0x80221DAC
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80226508 -> 0x80226580
*/
// Range: 0x80226508 -> 0x80226538
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, const char * * labels /* r0 */, const unsigned int * values /* r0 */, unsigned int labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}

// Range: 0x80226538 -> 0x80226558
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80226558 -> 0x80226580
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80226E38 -> 0x80226EE4
*/
// Range: 0x80226E38 -> 0x80226EE4
struct tweak_callback tweak_callback::create_edit(void (* on_start_edit)(struct tweak_info &) /* r0 */, void (* on_stop_edit)(struct tweak_info &) /* r0 */) {
    // Local variables
    struct tweak_callback cb; // r1+0x8
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8022D1E4 -> 0x8022D22C
*/
// Range: 0x8022D1E4 -> 0x8022D204
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x8022D204 -> 0x8022D22C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80230F74 -> 0x80231078
*/
// Range: 0x80230F74 -> 0x80230FA8
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x80230FA8 -> 0x80230FD0
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80230FD0 -> 0x80231000
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, int vmin /* r6 */, int vmax /* r7 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80231000 -> 0x80231020
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80231020 -> 0x80231048
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80231048 -> 0x80231078
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, const char * * labels /* r0 */, const unsigned int * values /* r0 */, unsigned int labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8023708C -> 0x802370AC
*/
// Range: 0x8023708C -> 0x802370AC
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802399CC -> 0x802399EC
*/
// Range: 0x802399CC -> 0x802399EC
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8023B738 -> 0x8023B758
*/
// Range: 0x8023B738 -> 0x8023B758
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8023EF10 -> 0x8023EFB8
*/
// Range: 0x8023EF10 -> 0x8023EF44
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xVec3 * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x8023EF44 -> 0x8023EF64
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x8023EF64 -> 0x8023EF84
static void _t_auto_tweak_flag(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, int mask /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */) {}

// Range: 0x8023EF84 -> 0x8023EFB8
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8024363C -> 0x802436C0
*/
// Range: 0x8024363C -> 0x8024366C
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, const char * * labels /* r0 */, const unsigned int * values /* r0 */, unsigned int labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}

// Range: 0x8024366C -> 0x802436A0
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x802436A0 -> 0x802436C0
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80244B40 -> 0x80244BE4
*/
// Range: 0x80244B40 -> 0x80244B70
static void _t_auto_tweak_select(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, const char * * labels /* r0 */, const unsigned int * values /* r0 */, unsigned int labels_size /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r11 */, unsigned char process /* r0 */) {}

// Range: 0x80244B70 -> 0x80244BA4
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x80244BA4 -> 0x80244BC4
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80244BC4 -> 0x80244BE4
static void _t_auto_tweak_flag(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, enum /* @enum$956zCamPreset_cpp */ {
    FLAG_APPLY_ON_SCENE_PREPARE = 1,
    FLAG_APPLY_ON_RESET = 2,
    FLAG_RELATIVE = 4,
} mask /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8024E774 -> 0x8024E838
*/
// Range: 0x8024E774 -> 0x8024E7D4
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r9 */) {}

// Range: 0x8024E7D4 -> 0x8024E808
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xVec3 * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x8024E808 -> 0x8024E838
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, signed short * v /* r0 */, int vmin /* r6 */, int vmax /* r7 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80253638 -> 0x80253680
*/
// Range: 0x80253638 -> 0x80253660
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80253660 -> 0x80253680
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025BFE4 -> 0x8025BFE4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025F608 -> 0x8025F658
*/
// Range: 0x8025F608 -> 0x8025F638
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, int vmin /* r6 */, int vmax /* r7 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x8025F638 -> 0x8025F658
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80262F7C -> 0x80262F9C
*/
// Range: 0x80262F7C -> 0x80262F9C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80263D1C -> 0x80263D98
*/
// Range: 0x80263D1C -> 0x80263D50
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x80263D50 -> 0x80263D78
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80263D78 -> 0x80263D98
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802644C8 -> 0x8026451C
*/
// Range: 0x802644C8 -> 0x802644FC
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x802644FC -> 0x8026451C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8026926C -> 0x802692E8
*/
// Range: 0x8026926C -> 0x802692A0
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x802692A0 -> 0x802692C0
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x802692C0 -> 0x802692E8
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8026D310 -> 0x8026D38C
*/
// Range: 0x8026D310 -> 0x8026D344
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xVec3 * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x8026D344 -> 0x8026D36C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x8026D36C -> 0x8026D38C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8026E188 -> 0x8026E1A8
*/
// Range: 0x8026E188 -> 0x8026E1A8
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027071C -> 0x802707AC
*/
// Range: 0x8027071C -> 0x80270764
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r6 */, void * context /* r7 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x80270764 -> 0x8027078C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x8027078C -> 0x802707AC
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80272DFC -> 0x80272E50
*/
// Range: 0x80272DFC -> 0x80272E1C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x80272E1C -> 0x80272E50
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xVec3 * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027429C -> 0x802742F0
*/
// Range: 0x8027429C -> 0x802742D0
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xVec3 * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x802742D0 -> 0x802742F0
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027DEBC -> 0x8027DEDC
*/
// Range: 0x8027DEBC -> 0x8027DEDC
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80280A7C -> 0x80280A9C
*/
// Range: 0x80280A7C -> 0x80280A9C
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80284860 -> 0x80284880
*/
// Range: 0x80284860 -> 0x80284880
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80285538 -> 0x80285558
*/
// Range: 0x80285538 -> 0x80285558
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80286B50 -> 0x80286B84
*/
// Range: 0x80286B50 -> 0x80286B84
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8028BB1C -> 0x8028BB1C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80291670 -> 0x80291690
*/
// Range: 0x80291670 -> 0x80291690
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80293B78 -> 0x80293B98
*/
// Range: 0x80293B78 -> 0x80293B98
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8029BE94 -> 0x8029BEB4
*/
// Range: 0x8029BE94 -> 0x8029BEB4
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8029CD40 -> 0x8029CD60
*/
// Range: 0x8029CD40 -> 0x8029CD60
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8029D908 -> 0x8029D928
*/
// Range: 0x8029D908 -> 0x8029D928
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8029E504 -> 0x8029E538
*/
// Range: 0x8029E504 -> 0x8029E538
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A1408 -> 0x802A1428
*/
// Range: 0x802A1408 -> 0x802A1428
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A3A20 -> 0x802A3A40
*/
// Range: 0x802A3A20 -> 0x802A3A40
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A5F5C -> 0x802A5FD8
*/
// Range: 0x802A5F5C -> 0x802A5F90
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x802A5F90 -> 0x802A5FB0
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x802A5FB0 -> 0x802A5FD8
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A72CC -> 0x802A7348
*/
// Range: 0x802A72CC -> 0x802A7300
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x802A7300 -> 0x802A7320
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x802A7320 -> 0x802A7348
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, int * v /* r0 */, int vmin /* r0 */, int vmax /* r0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B842C -> 0x802B842C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802BC20C -> 0x802BC290
*/
// Range: 0x802BC20C -> 0x802BC240
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, struct xVec3 * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x802BC240 -> 0x802BC270
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, int vmin /* r6 */, int vmax /* r7 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}

// Range: 0x802BC270 -> 0x802BC290
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xDebugTweak.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802C5834 -> 0x802C5888
*/
// Range: 0x802C5834 -> 0x802C5868
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, unsigned char * v /* r0 */, const struct tweak_callback * cb /* r8 */, void * context /* r9 */, unsigned int flags /* r10 */, unsigned char process /* r0 */) {}

// Range: 0x802C5868 -> 0x802C5888
static void _t_auto_tweak(const char * prefix /* r0 */, const char * name /* r0 */, float * v /* r0 */, float vmin /* f0 */, float vmax /* f0 */, const struct tweak_callback * cb /* r0 */, void * context /* r0 */, unsigned int flags /* r0 */, unsigned char process /* r0 */) {}


