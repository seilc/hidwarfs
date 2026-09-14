/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CF050 -> 0x003CF0FC
*/
// Range: 0x3CF050 -> 0x3CF0FC
unsigned char delay_motive_update(class widget & w /* r2 */, class motive & m /* r2 */, float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x3CF050 -> 0x3CF0FC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CF100 -> 0x003CF110
*/
// Range: 0x3CF100 -> 0x3CF110
void right_hide_widget(class widget & w /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3CF100 -> 0x3CF110
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CF110 -> 0x003CF120
*/
// Range: 0x3CF110 -> 0x3CF120
void left_hide_widget(class widget & w /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3CF110 -> 0x3CF120
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CF120 -> 0x003CF130
*/
// Range: 0x3CF120 -> 0x3CF130
void bottom_hide_widget(class widget & w /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3CF120 -> 0x3CF130
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CF130 -> 0x003CF140
*/
// Range: 0x3CF130 -> 0x3CF140
void top_hide_widget(class widget & w /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3CF130 -> 0x3CF140
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CF140 -> 0x003CF238
*/
// Range: 0x3CF140 -> 0x3CF238
unsigned char shake_motive_update(class motive & m /* r2 */, float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x3CF140 -> 0x3CF238
        unsigned int & iter; // r2
        unsigned int i; // r2
        float diff; // r2
        float mult[4]; // @ 0x0062BF50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CF240 -> 0x003CF350
*/
// Range: 0x3CF240 -> 0x3CF350
unsigned char accelerate_motive_update(class motive & m /* r2 */, float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x3CF240 -> 0x3CF350
        float diff; // r2
        float remaining; // r1
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CF350 -> 0x003CF4DC
*/
// Range: 0x3CF350 -> 0x3CF4DC
unsigned char linear_motive_update(class widget & w /* r2 */, class motive & m /* r2 */, float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x3CF350 -> 0x3CF4DC
        float diff; // r3
        float remaining; // r1
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CF4E0 -> 0x003CF834
*/
// Range: 0x3CF4E0 -> 0x3CF834
static void render_one_model(class xModelInstance & m /* r18 */, float alpha /* r20 */, class basic_rect & r /* r17 */, class xVec3 & from /* r16 */, class xVec3 & to /* r21 */, class xMat4x3 & frame /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3CF4E0 -> 0x3CF834
        unsigned char oldAlphaCmp; // r2
        unsigned int oldZWrite; // r29+0x8C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CF840 -> 0x003CF85C
*/
// Range: 0x3CF840 -> 0x3CF85C
void cb_dispatch(class xBase * from /* r4 */, class xBase * to /* r2 */, unsigned int event /* r2 */, float * argf /* r2 */, class xBase * argw /* r2 */, unsigned int argwi /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3CF840 -> 0x3CF85C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CF860 -> 0x003CF938
*/
// Range: 0x3CF860 -> 0x3CF938
// this: r18
void widget::clear_motives() {
    /* anonymous block */ {
        // Range: 0x3CF860 -> 0x3CF938
        class motive_node * * itp; // r2
        class motive_node * it; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CF940 -> 0x003CFA10
*/
// Range: 0x3CF940 -> 0x3CFA10
// this: r2
void widget::add_motive(class motive & m /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3CF940 -> 0x3CFA10
        class motive_node * n; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CFA10 -> 0x003CFB04
*/
// Range: 0x3CFA10 -> 0x3CFB04
void render_all() {
    /* anonymous block */ {
        // Range: 0x3CFA10 -> 0x3CFB04
        class RwCamera * camera; // r16
        unsigned int i; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CFB10 -> 0x003CFB60
*/
// Range: 0x3CFB10 -> 0x3CFB60
static void fp_render(class widget & w /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3CFB10 -> 0x3CFB60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CFB70 -> 0x003CFE60
*/
// Range: 0x3CFB70 -> 0x3CFE60
// this: r2
void widget::delay_hide_widget(enum move_direction d /* r2 */, float time /* r29 */) {
    /* anonymous block */ {
        // Range: 0x3CFB70 -> 0x3CFE60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CFE60 -> 0x003D02F0
*/
// Range: 0x3CFE60 -> 0x3D02F0
// this: r20
void widget::hide(enum move_direction d /* r19 */, unsigned char clearmotives /* r2 */, unsigned char bSkipHideMotive /* r18 */) {
    /* anonymous block */ {
        // Range: 0x3CFE60 -> 0x3D02F0
        float sx; // r29+0x60
        float sy; // r29+0x60
        float cx; // r10
        float cy; // r9
        float tcx; // r3
        float tcy; // r1
        float vx; // r5
        float vy; // r1
        float ex; // r4
        float ey; // r3
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D0300 -> 0x003D06E4
*/
// Range: 0x3D0300 -> 0x3D06E4
// this: r20
void widget::show(enum move_direction dir /* r19 */, unsigned char clearmotives /* r2 */, unsigned char bSkipShowMotive /* r18 */) {
    /* anonymous block */ {
        // Range: 0x3D0300 -> 0x3D06E4
        float dx; // r7
        float dy; // r6
        float vx; // r5
        float vy; // r4
        float a; // r29+0x60
        float ax; // r3
        float ay; // r29+0x60
        float da; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D06F0 -> 0x003D0744
*/
// Range: 0x3D06F0 -> 0x3D0744
unsigned char is(unsigned int id /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3D06F0 -> 0x3D0744
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D0750 -> 0x003D0790
*/
// Range: 0x3D0750 -> 0x3D0790
unsigned int type() {
    /* anonymous block */ {
        // Range: 0x3D0750 -> 0x3D0790
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D0790 -> 0x003D0830
*/
// Range: 0x3D0790 -> 0x3D0830
void scene_enter() {
    /* anonymous block */ {
        // Range: 0x3D0790 -> 0x3D0830
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D0830 -> 0x003D0958
*/
// Range: 0x3D0830 -> 0x3D0958
// this: r18
void widget::updater(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3D0830 -> 0x3D0958
        class motive_node * * itp; // r17
        class motive_node * it; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D0960 -> 0x003D0968
*/
// Range: 0x3D0960 -> 0x3D0968
// this: r2
void widget::presetup() {
    /* anonymous block */ {
        // Range: 0x3D0960 -> 0x3D0968
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D0970 -> 0x003D09A4
*/
// Range: 0x3D0970 -> 0x3D09A4
void render() {
    /* anonymous block */ {
        // Range: 0x3D0970 -> 0x3D09A4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D09B0 -> 0x003D0A04
*/
// Range: 0x3D09B0 -> 0x3D0A04
void update(float dt /* r29+0x40 */) {
    /* anonymous block */ {
        // Range: 0x3D09B0 -> 0x3D0A04
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D0A10 -> 0x003D0A74
*/
// Range: 0x3D0A10 -> 0x3D0A74
void destroy() {
    /* anonymous block */ {
        // Range: 0x3D0A10 -> 0x3D0A74
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D0A80 -> 0x003D0AFC
*/
// Range: 0x3D0A80 -> 0x3D0AFC
void init() {
    /* anonymous block */ {
        // Range: 0x3D0A80 -> 0x3D0AFC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00404110 -> 0x004041C4
*/
// Range: 0x404110 -> 0x4041C4
static void for_each(unsigned char type /* r2 */, unsigned int size /* r17 */, class functor_update f /* r20 */) {
    /* anonymous block */ {
        // Range: 0x404110 -> 0x4041C4
        class zScene & s; // r2
        unsigned char * it; // r16
        unsigned char * end; // r2
        class widget_chunk * wc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004041D0 -> 0x00404254
*/
// Range: 0x4041D0 -> 0x404254
static void for_each(unsigned char type /* r2 */, unsigned int size /* r17 */, void (* f)(class widget &) /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4041D0 -> 0x404254
        class zScene & s; // r2
        unsigned char * it; // r19
        unsigned char * end; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHud.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00404260 -> 0x00404304
*/
// Range: 0x404260 -> 0x404304
static void for_each(unsigned char type /* r2 */, unsigned int size /* r17 */, class functor_disable f /* r29+0x5C */) {
    /* anonymous block */ {
        // Range: 0x404260 -> 0x404304
        class functor_disable f'53; // r18
        class zScene & s; // r2
        unsigned char * it; // r16
        unsigned char * end; // r2
        class widget_chunk * wc; // r2
    }
}


