/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003178E0 -> 0x00317C58
*/
// Range: 0x3178E0 -> 0x317C58
unsigned char update_camera(class xMat4x3 * matrix /* r16 */, float dt /* r29+0xE0 */) {
    /* anonymous block */ {
        // Range: 0x3178E0 -> 0x317C58
        float lerp; // r21
        class xVec3 fromTarget; // r29+0xD0
        class xVec3 currEuler; // r29+0xC0
        class xVec3 idealEuler; // r29+0xB0
        class xMat3x3 tmpMat; // r29+0x70
        class xMat4x3 resultMat; // r29+0x30
        signed int i; // r6
        float * currf; // r2
        float * idealf; // r2
        float mag; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00317C60 -> 0x00317C8C
*/
// Range: 0x317C60 -> 0x317C8C
unsigned char enabled() {
    /* anonymous block */ {
        // Range: 0x317C60 -> 0x317C8C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00317C90 -> 0x003184F0
*/
// Range: 0x317C90 -> 0x3184F0
void fx_render() {
    /* anonymous block */ {
        // Range: 0x317C90 -> 0x3184F0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003184F0 -> 0x003185F4
*/
// Range: 0x3184F0 -> 0x3185F4
unsigned char render() {
    /* anonymous block */ {
        // Range: 0x3184F0 -> 0x3185F4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00318600 -> 0x00318614
*/
// Range: 0x318600 -> 0x318614
unsigned char IsPlayerInControl() {
    /* anonymous block */ {
        // Range: 0x318600 -> 0x318614
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00318620 -> 0x00318770
*/
// Range: 0x318620 -> 0x318770
void reset() {
    /* anonymous block */ {
        // Range: 0x318620 -> 0x318770
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00318770 -> 0x003189E0
*/
// Range: 0x318770 -> 0x3189E0
void init() {
    /* anonymous block */ {
        // Range: 0x318770 -> 0x3189E0
        signed char @27585; // @ 0x00637C34
        class drop_state_type drop_state; // @ 0x00685C70
        signed char @27582; // @ 0x00637C30
        class grab_state_type grab_state; // @ 0x00685C10
        signed char @27579; // @ 0x00637C20
        class out_state_type out_state; // @ 0x00637C28
        signed char @27576; // @ 0x00637C14
        class in_state_type in_state; // @ 0x00637C18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003189E0 -> 0x00318A60
*/
// Range: 0x3189E0 -> 0x318A60
enum substate_enum supdate_fade_in(class drop_state_type & gst /* r2 */, float & dt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3189E0 -> 0x318A60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00318A60 -> 0x00318AA8
*/
// Range: 0x318A60 -> 0x318AA8
enum substate_enum supdate_start_fade_in(class drop_state_type & gst /* r2 */, float & dt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x318A60 -> 0x318AA8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00318AB0 -> 0x00318BB4
*/
// Range: 0x318AB0 -> 0x318BB4
enum substate_enum supdate_moving_out(float & dt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x318AB0 -> 0x318BB4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00318BC0 -> 0x00318C80
*/
// Range: 0x318BC0 -> 0x318C80
enum substate_enum supdate_starting(float & dt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x318BC0 -> 0x318C80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00318C80 -> 0x00318D00
*/
// Range: 0x318C80 -> 0x318D00
enum substate_enum supdate_stopped(class drop_state_type & gst /* r2 */, float & dt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x318C80 -> 0x318D00
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00318D00 -> 0x00318DE0
*/
// Range: 0x318D00 -> 0x318DE0
enum substate_enum supdate_stopping(class drop_state_type & gst /* r2 */, float & dt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x318D00 -> 0x318DE0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00318DE0 -> 0x00318F08
*/
// Range: 0x318DE0 -> 0x318F08
enum substate_enum supdate_moving_in(float & dt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x318DE0 -> 0x318F08
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00318F10 -> 0x00318F90
*/
// Range: 0x318F10 -> 0x318F90
enum substate_enum supdate_fade_out(class grab_state_type & gst /* r2 */, float & dt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x318F10 -> 0x318F90
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00318F90 -> 0x00318FD8
*/
// Range: 0x318F90 -> 0x318FD8
enum substate_enum supdate_start_fade_out(class grab_state_type & gst /* r2 */, float & dt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x318F90 -> 0x318FD8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00318FE0 -> 0x003190E4
*/
// Range: 0x318FE0 -> 0x3190E4
enum substate_enum supdate_moving_out(float & dt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x318FE0 -> 0x3190E4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003190F0 -> 0x003191B0
*/
// Range: 0x3190F0 -> 0x3191B0
enum substate_enum supdate_starting(float & dt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3190F0 -> 0x3191B0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003191B0 -> 0x00319230
*/
// Range: 0x3191B0 -> 0x319230
enum substate_enum supdate_stopped(class grab_state_type & gst /* r2 */, float & dt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3191B0 -> 0x319230
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00319230 -> 0x00319310
*/
// Range: 0x319230 -> 0x319310
enum substate_enum supdate_stopping(class grab_state_type & gst /* r2 */, float & dt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x319230 -> 0x319310
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00319310 -> 0x00319438
*/
// Range: 0x319310 -> 0x319438
enum substate_enum supdate_moving_in(float & dt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x319310 -> 0x319438
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00319440 -> 0x00319488
*/
// Range: 0x319440 -> 0x319488
enum substate_enum supdate_begin_wait(class grab_state_type & gst /* r2 */, float & dt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x319440 -> 0x319488
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00319490 -> 0x00319498
*/
// Range: 0x319490 -> 0x319498
enum substate_enum supdate_reorient() {
    /* anonymous block */ {
        // Range: 0x319490 -> 0x319498
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003194A0 -> 0x003198E0
*/
// Range: 0x3194A0 -> 0x3198E0
void load_settings(class xIniFile & ini /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3194A0 -> 0x3198E0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003198E0 -> 0x00319AF8
*/
// Range: 0x3198E0 -> 0x319AF8
void render_ghost() {
    /* anonymous block */ {
        // Range: 0x3198E0 -> 0x319AF8
        class xEnt & ent; // r16
        class xModelInstance * xm; // r18
        class RpAtomic & model; // r17
        unsigned char alpha; // r2
        class xModelInstance * xm; // r19
        class RpAtomic & model; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00319B00 -> 0x00319B84
*/
// Range: 0x319B00 -> 0x319B84
static void oob_before_anim_mat(class xAnimPlay * play /* r17 */, class xQuat * quat /* r2 */, class xVec3 * tran /* r16 */, signed int boneCount /* r2 */) {
    /* anonymous block */ {
        // Range: 0x319B00 -> 0x319B84
        class xVec3 adjustTran; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00376390 -> 0x003767A4
*/
// Range: 0x376390 -> 0x3767A4
// this: r2
void drop_state_type::start() {
    /* anonymous block */ {
        // Range: 0x376390 -> 0x3767A4
        class xModelInstance & m; // r2
        class xEntFrame & f; // r2
        class xAnimState * idle_anim_state; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003767B0 -> 0x0037693C
*/
// Range: 0x3767B0 -> 0x37693C
void stop() {
    /* anonymous block */ {
        // Range: 0x3767B0 -> 0x37693C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00376940 -> 0x00376FA4
*/
// Range: 0x376940 -> 0x376FA4
// this: r18
enum state_enum drop_state_type::update(class xScene & s /* r17 */, float & dt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x376940 -> 0x376FA4
        float movedt; // r29+0x11C
        enum substate_enum newstate; // r2
        float fadedt; // r29+0x118
        enum substate_enum newstate; // r2
        class xMat4x3 & pm; // r2
        class xAnimSingle * asingle; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00376FB0 -> 0x0037767C
*/
// Range: 0x376FB0 -> 0x37767C
// this: r17
void grab_state_type::start() {
    /* anonymous block */ {
        // Range: 0x376FB0 -> 0x37767C
        unsigned int bufsize; // r29+0x6C
        unsigned int cheatAlternateHand; // r2
        void * info; // r2
        class xVec3 dir; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00377680 -> 0x00377688
*/
// Range: 0x377680 -> 0x377688
void stop() {
    /* anonymous block */ {
        // Range: 0x377680 -> 0x377688
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00377690 -> 0x00377C74
*/
// Range: 0x377690 -> 0x377C74
// this: r19
enum state_enum grab_state_type::update(class xScene & s /* r17 */, float & dt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x377690 -> 0x377C74
        float movedt; // r29+0x13C
        enum substate_enum newstate; // r2
        float fadedt; // r29+0x138
        enum substate_enum newstate; // r2
        class xModelInstance * model; // r18
        class xMat4x3 & pm; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00377C80 -> 0x00377CA4
*/
// Range: 0x377C80 -> 0x377CA4
void start() {
    /* anonymous block */ {
        // Range: 0x377C80 -> 0x377CA4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00377CB0 -> 0x00377CB8
*/
// Range: 0x377CB0 -> 0x377CB8
void stop() {
    /* anonymous block */ {
        // Range: 0x377CB0 -> 0x377CB8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00377CC0 -> 0x00377DF0
*/
// Range: 0x377CC0 -> 0x377DF0
enum state_enum update(float & dt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x377CC0 -> 0x377DF0
        unsigned char oob; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00377DF0 -> 0x00377E0C
*/
// Range: 0x377DF0 -> 0x377E0C
void start() {
    /* anonymous block */ {
        // Range: 0x377DF0 -> 0x377E0C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00377E10 -> 0x00377E18
*/
// Range: 0x377E10 -> 0x377E18
void stop() {
    /* anonymous block */ {
        // Range: 0x377E10 -> 0x377E18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayerOOBState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00377E20 -> 0x00377EBC
*/
// Range: 0x377E20 -> 0x377EBC
enum state_enum update() {
    /* anonymous block */ {
        // Range: 0x377E20 -> 0x377EBC
        unsigned char oob; // r16
    }
}


