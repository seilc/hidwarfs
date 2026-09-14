/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031A690 -> 0x0031ACFC
*/
// Range: 0x31A690 -> 0x31ACFC
void insert_animations(class xAnimTable & table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x31A690 -> 0x31ACFC
        char * start_to; // @ 0x00636C9C
        char * start_from; // @ 0x00636C98
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031AD00 -> 0x0031AE8C
*/
// Range: 0x31AD00 -> 0x31AE8C
unsigned char update(class xScene * sc /* r16 */, float dt /* r29+0x3C */) {
    /* anonymous block */ {
        // Range: 0x31AD00 -> 0x31AE8C
        enum state_enum newtype; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031AE90 -> 0x0031AEAC
*/
// Range: 0x31AE90 -> 0x31AEAC
void deinit() {
    /* anonymous block */ {
        // Range: 0x31AE90 -> 0x31AEAC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031AEB0 -> 0x0031B51C
*/
// Range: 0x31AEB0 -> 0x31B51C
void load_settings(class xIniFile & ini /* r16 */) {
    /* anonymous block */ {
        // Range: 0x31AEB0 -> 0x31B51C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031B520 -> 0x0031B57C
*/
// Range: 0x31B520 -> 0x31B57C
void load(class xBase & data /* r17 */, class xDynAsset & asset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x31B520 -> 0x31B57C
        class hook_type & hook; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031B580 -> 0x0031B708
*/
// Range: 0x31B580 -> 0x31B708
static void init_cache() {
    /* anonymous block */ {
        // Range: 0x31B580 -> 0x31B708
        class zScene & s; // r2
        class hook_type * it; // r8
        class hook_type * end; // r2
        signed int imax; // r2
        unsigned int drop_type_id; // r2
        signed int i; // r19
        unsigned int size; // r29+0x5C
        class xDynAsset * a; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031B710 -> 0x0031B934
*/
// Range: 0x31B710 -> 0x31B934
static void start() {
    /* anonymous block */ {
        // Range: 0x31B710 -> 0x31B934
        class xEnt & player; // r2
        char * anim_name; // r17
        signed int found; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031B940 -> 0x0031BAC0
*/
// Range: 0x31B940 -> 0x31BAC0
static signed int find_nearest_hook(class xVec3 & loc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x31B940 -> 0x31BAC0
        signed int found; // r2
        float closest; // r10
        signed int i; // r13
        float attach_dist; // r29+0x50
        class xVec3 dloc; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031BAC0 -> 0x0031BAE0
*/
// Range: 0x31BAC0 -> 0x31BAE0
static unsigned int check_anim_hit_to_death() {
    /* anonymous block */ {
        // Range: 0x31BAC0 -> 0x31BAE0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031BAE0 -> 0x0031BB34
*/
// Range: 0x31BAE0 -> 0x31BB34
static unsigned int check_anim_hit_to_cycle() {
    /* anonymous block */ {
        // Range: 0x31BAE0 -> 0x31BB34
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031BB40 -> 0x0031BB88
*/
// Range: 0x31BB40 -> 0x31BB88
static unsigned int check_anim_hit_to_bottom() {
    /* anonymous block */ {
        // Range: 0x31BB40 -> 0x31BB88
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031BB90 -> 0x0031BBD8
*/
// Range: 0x31BB90 -> 0x31BBD8
static unsigned int check_anim_hit_to_top() {
    /* anonymous block */ {
        // Range: 0x31BB90 -> 0x31BBD8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031BBE0 -> 0x0031BC28
*/
// Range: 0x31BBE0 -> 0x31BC28
static unsigned int check_anim_hit_to_dive() {
    /* anonymous block */ {
        // Range: 0x31BBE0 -> 0x31BC28
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031BC30 -> 0x0031BC38
*/
// Range: 0x31BC30 -> 0x31BC38
static unsigned int check_anim_mount_to_cycle_start() {
    /* anonymous block */ {
        // Range: 0x31BC30 -> 0x31BC38
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031BC40 -> 0x0031BC48
*/
// Range: 0x31BC40 -> 0x31BC48
static unsigned int check_anim_start() {
    /* anonymous block */ {
        // Range: 0x31BC40 -> 0x31BC48
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031BC50 -> 0x0031BDD4
*/
// Range: 0x31BC50 -> 0x31BDD4
static unsigned char find_drop_off() {
    /* anonymous block */ {
        // Range: 0x31BC50 -> 0x31BDD4
        signed int near_index; // r12
        float near_dist2; // r6
        signed int i; // r11
        class xVec3 dloc; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031BDE0 -> 0x0031C074
*/
// Range: 0x31BDE0 -> 0x31C074
static void move_wedgie(class xVec3 & stretch_loc /* r16 */) {
    /* anonymous block */ {
        // Range: 0x31BDE0 -> 0x31C074
        class xMat4x3 tm; // r29+0xB0
        class xMat4x3 mworld; // r29+0x70
        class xMat4x3 mlocal; // r29+0x30
        class xVec3 tweak_cord_off; // @ 0x00684440
        unsigned char registered; // @ 0x00637BFC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031C080 -> 0x0031C2A4
*/
// Range: 0x31C080 -> 0x31C2A4
class xVec2 stick_position(unsigned int controller /* r2 */) {
    /* anonymous block */ {
        // Range: 0x31C080 -> 0x31C2A4
        class xVec2 v; // r29+0x8
        class _tagPadAnalog & a; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036DDB0 -> 0x0036EC18
*/
// Range: 0x36DDB0 -> 0x36EC18
// this: r16
static void hanging_state_type::start() {
    /* anonymous block */ {
        // Range: 0x36DDB0 -> 0x36EC18
        class xVec3 eu; // r29+0xF8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036EC20 -> 0x0036EF20
*/
// Range: 0x36EC20 -> 0x36EF20
// this: r17
static void hanging_state_type::stop() {
    /* anonymous block */ {
        // Range: 0x36EC20 -> 0x36EF20
        class xMat4x3 & mm; // r2
        class xEnt * ent; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036EF20 -> 0x00373B6C
*/
// Range: 0x36EF20 -> 0x373B6C
// this: r20
static enum state_enum hanging_state_type::update(class xScene & s /* r19 */, float & dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x36EF20 -> 0x373B6C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00373B70 -> 0x003740A8
*/
// Range: 0x373B70 -> 0x3740A8
// this: r21
static unsigned char hanging_state_type::repath(class xScene & s /* r29+0xBC */) {
    /* anonymous block */ {
        // Range: 0x373B70 -> 0x3740A8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003740B0 -> 0x00374A50
*/
// Range: 0x3740B0 -> 0x374A50
// this: r16
static void hanging_state_type::trigger_collision(class env_info & ei /* r2 */, float mag /* r20 */, class xCollis & coll /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3740B0 -> 0x374A50
        class xSurface * surf; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00374A80 -> 0x003755A4
*/
// Range: 0x374A80 -> 0x3755A4
// this: r17
static float hanging_state_type::trigger_collision(class ent_info & ei /* r16 */, float mag /* r20 */) {
    /* anonymous block */ {
        // Range: 0x374A80 -> 0x3755A4
        class xSurface * surf; // r2
        float hitParams[4]; // r29+0x90
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003755C0 -> 0x00375680
*/
// Range: 0x3755C0 -> 0x375680
static unsigned char collide(class xCollis & coll /* r18 */, class xSphere & o /* r17 */, class xEnt & ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3755C0 -> 0x375680
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00375680 -> 0x00375708
*/
// Range: 0x375680 -> 0x375708
// this: r2
static class xSphere hanging_state_type::player_bound() {
    /* anonymous block */ {
        // Range: 0x375680 -> 0x375708
        class xSphere o; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00375710 -> 0x00375C58
*/
// Range: 0x375710 -> 0x375C58
// this: r17
static void hanging_state_type::collide_start(class xScene & s /* r16 */) {
    /* anonymous block */ {
        // Range: 0x375710 -> 0x375C58
        class xEnt & ent; // r2
        class xSphere o; // r29+0x1E0
        class xCollis coll; // r29+0x180
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00375C60 -> 0x00375C9C
*/
// Range: 0x375C60 -> 0x375C9C
static void render() {
    /* anonymous block */ {
        // Range: 0x375C60 -> 0x375C9C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00375CA0 -> 0x00375FC8
*/
// Range: 0x375CA0 -> 0x375FC8
// this: r16
static void attaching_state_type::start() {
    /* anonymous block */ {
        // Range: 0x375CA0 -> 0x375FC8
        float travel_time; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00375FD0 -> 0x0037600C
*/
// Range: 0x375FD0 -> 0x37600C
// this: r2
static void attaching_state_type::stop() {
    /* anonymous block */ {
        // Range: 0x375FD0 -> 0x37600C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00376010 -> 0x00376378
*/
// Range: 0x376010 -> 0x376378
// this: r17
static enum state_enum attaching_state_type::update(float & dt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x376010 -> 0x376378
        float g; // r29+0xB0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerBungeeState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00376380 -> 0x0037638C
*/
// Range: 0x376380 -> 0x37638C
static void render() {
    /* anonymous block */ {
        // Range: 0x376380 -> 0x37638C
    }
}


