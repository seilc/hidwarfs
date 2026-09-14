/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00466340 -> 0x00466698
*/
// Range: 0x466340 -> 0x466698
static void render_uvmap() {
    /* anonymous block */ {
        // Range: 0x466340 -> 0x466698
        class xFXFastRaster fr; // r29+0xB0
        signed int mesh_width; // r2
        signed int mesh_height; // r2
        signed int qwords_max; // r20
        __int128 * pkt; // r19
        signed int qwords_used; // r18
        signed int qwords_remain; // r21
        unsigned int msb; // r29+0xCC
        unsigned int lsb; // r29+0xC8
        signed int dx; // r30
        signed int dy; // r2
        signed int x; // r17
        class xVec2 * uv0; // r16
        class xVec2 * uv1; // r22
        signed int i; // r23
        signed int y; // r7
        signed int j; // r6
        __int128 * start_strip_pkt; // r2
        float one; // @ 0x0062CC28
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004666A0 -> 0x00466898
*/
// Range: 0x4666A0 -> 0x466898
static void warp_animate_static_lens(class xVec2 * uvmap /* r2 */, class xVec2 & loc /* r2 */, float radius /* r29 */, float base_intensity /* r29 */) {
    /* anonymous block */ {
        // Range: 0x4666A0 -> 0x466898
        float mag; // r29
        float r2; // r3
        float ir2; // r2
        float umag; // r1
        float vmag; // r29
        signed int istart; // r11
        signed int iend; // r10
        signed int jstart; // r9
        signed int jend; // r8
        float dx; // r16
        float dy; // r15
        float x; // r14
        signed int i; // r2
        float y; // r13
        signed int j; // r6
        float xoff; // r29
        float yoff; // r29
        float dist2; // r29
        float scale; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004668A0 -> 0x00466C5C
*/
// Range: 0x4668A0 -> 0x466C5C
static void warp_animate_heat_shimmer(class xVec2 * uvmap /* r21 */, class warper & warp /* r2 */, class xVec2 & loc /* r20 */, float radius /* r23 */, float base_intensity /* r29+0x80 */, float s /* r29+0x80 */) {
    /* anonymous block */ {
        // Range: 0x4668A0 -> 0x466C5C
        float mag; // r22
        float start_theta; // r7
        signed int istart; // r19
        signed int iend; // r18
        signed int jstart; // r17
        signed int jend; // r16
        float phase; // r21
        float startcos0; // r21
        float startsin0; // r29+0x80
        float ir; // r29+0x80
        float dx; // r13
        float dy; // r12
        float ystart; // r11
        signed int ysize; // r2
        class xVec2 * uv; // r9
        class xVec2 * uv_xend; // r2
        signed int uvstride; // r2
        float x; // r10
        float tempcos; // r1
        float cos0; // r9
        float sin0; // r8
        float y; // r7
        float x2; // r6
        class xVec2 * uv_yend; // r2
        float dist2; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00466C60 -> 0x00466F50
*/
// Range: 0x466C60 -> 0x466F50
static void warp_animate_shockwave(class xVec2 * uvmap /* r2 */, class xVec2 & loc /* r2 */, float radius /* r29+0x20 */, float base_intensity /* r29+0x20 */, float s /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x466C60 -> 0x466F50
        float mag; // r29+0x20
        float umag; // r22
        float vmag; // r21
        float r2; // r20
        float ir; // r19
        signed int istart; // r9
        signed int iend; // r8
        signed int jstart; // r7
        signed int jend; // r5
        float dx; // r18
        float dy; // r17
        float x; // r16
        signed int i; // r2
        float y; // r14
        signed int j; // r11
        float xoff; // r13
        float yoff; // r12
        float dist2; // r29+0x20
        float theta; // r25
        float stheta; // r29+0x20
        float scale; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00466F50 -> 0x0046729C
*/
// Range: 0x466F50 -> 0x46729C
static void warp_animate_ripple(class xVec2 * uvmap /* r2 */, class warper & warp /* r2 */, class xVec2 & loc /* r23 */, float radius /* r29+0xD0 */, float base_intensity /* r29+0xD0 */, float s /* r29+0xD0 */) {
    /* anonymous block */ {
        // Range: 0x466F50 -> 0x46729C
        float mag; // r29+0xD0
        float umag; // r31
        float vmag; // r30
        float freq; // r29
        float r2; // r29+0xCC
        float ir2; // r28
        signed int istart; // r18
        signed int iend; // r17
        signed int jstart; // r22
        signed int jend; // r16
        float dx; // r27
        float dy; // r26
        float x; // r25
        signed int i; // r2
        float y; // r24
        signed int j; // r21
        float xoff; // r23
        float yoff; // r22
        float dist2; // r29+0xD0
        float t; // r29+0xD0
        float scale; // r29+0xD0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004672A0 -> 0x00467500
*/
// Range: 0x4672A0 -> 0x467500
static void warp_animate_lens(class xVec2 * uvmap /* r17 */, class xVec2 & loc /* r16 */, float radius /* r20 */, float base_intensity /* r22 */, float s /* r21 */) {
    /* anonymous block */ {
        // Range: 0x4672A0 -> 0x467500
        float mag; // r29+0x40
        float r2; // r3
        float ir2; // r2
        float umag; // r1
        float vmag; // r29+0x40
        signed int istart; // r11
        signed int iend; // r10
        signed int jstart; // r9
        signed int jend; // r8
        float dx; // r16
        float dy; // r15
        float x; // r14
        signed int i; // r2
        float y; // r13
        signed int j; // r7
        float xoff; // r29+0x40
        float yoff; // r29+0x40
        float dist2; // r29+0x40
        float scale; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00467500 -> 0x00467894
*/
// Range: 0x467500 -> 0x467894
static void warp_animate_warble(class xVec2 * uvmap /* r2 */, class warper & warp /* r2 */, class xVec2 & loc /* r23 */, float radius /* r29+0xC0 */, float base_intensity /* r29+0xC0 */, float s /* r29+0xC0 */) {
    /* anonymous block */ {
        // Range: 0x467500 -> 0x467894
        float random_u; // r29
        float random_v; // r28
        float r2; // r27
        float ir2; // r26
        signed int istart; // r18
        signed int iend; // r17
        signed int jstart; // r22
        signed int jend; // r16
        float dx; // r25
        float dy; // r24
        float x; // r23
        signed int i; // r2
        float y; // r22
        signed int j; // r21
        float xoff; // r29+0xC0
        float yoff; // r29+0xC0
        float dist2; // r29+0xC0
        float intensity; // r21
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004678A0 -> 0x004678D0
*/
// Range: 0x4678A0 -> 0x4678D0
void remove(class warper * warp /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4678A0 -> 0x4678D0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004678D0 -> 0x004679DC
*/
// Range: 0x4678D0 -> 0x4679DC
void modify(class warper * warp /* r17 */, class xVec3 & loc /* r16 */, float radius /* r29+0x30 */, float duration /* r29+0x30 */, enum type_enum type /* r2 */, float intensity /* r29+0x30 */, float freq /* r29+0x30 */, signed int flags /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4678D0 -> 0x4679DC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004679E0 -> 0x00467AB0
*/
// Range: 0x4679E0 -> 0x467AB0
class warper * emit(class xVec3 & loc /* r2 */, float radius /* r29 */, float duration /* r29 */, enum type_enum type /* r2 */, float intensity /* r29 */, float freq /* r29 */, signed int flags /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4679E0 -> 0x467AB0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00467AB0 -> 0x00467AEC
*/
// Range: 0x467AB0 -> 0x467AEC
enum type_enum find_type(unsigned int id /* r2 */) {
    /* anonymous block */ {
        // Range: 0x467AB0 -> 0x467AEC
        signed int i; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00467AF0 -> 0x00467B4C
*/
// Range: 0x467AF0 -> 0x467B4C
void render(class RwCamera * cam /* r16 */) {
    /* anonymous block */ {
        // Range: 0x467AF0 -> 0x467B4C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00467B50 -> 0x00467B58
*/
// Range: 0x467B50 -> 0x467B58
void pre_render() {
    /* anonymous block */ {
        // Range: 0x467B50 -> 0x467B58
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00467B60 -> 0x00467C50
*/
// Range: 0x467B60 -> 0x467C50
void update(float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x467B60 -> 0x467C50
        signed int type; // r8
        class warper * warp; // r7
        class warper * next_warp; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00467C50 -> 0x00467CBC
*/
// Range: 0x467C50 -> 0x467CBC
void reset() {
    /* anonymous block */ {
        // Range: 0x467C50 -> 0x467CBC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00467CC0 -> 0x00467CCC
*/
// Range: 0x467CC0 -> 0x467CCC
void scene_exit() {
    /* anonymous block */ {
        // Range: 0x467CC0 -> 0x467CCC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00467CD0 -> 0x00467F34
*/
// Range: 0x467CD0 -> 0x467F34
void scene_enter() {
    /* anonymous block */ {
        // Range: 0x467CD0 -> 0x467F34
        signed int i; // r4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00467F40 -> 0x004682B8
*/
// Range: 0x467F40 -> 0x4682B8
static unsigned char animate_uvmap(class xVec2 * uvmap /* r20 */, class RwCamera * cam /* r2 */) {
    /* anonymous block */ {
        // Range: 0x467F40 -> 0x4682B8
        class xMat4x3 & view_mat; // r2
        unsigned char need_render; // r19
        signed int type; // r18
        void (* animate_cb)(class xVec2 *, class warper &, class xVec2 &, float, float, float, float); // r2
        class warper * warp; // r17
        class xVec2 loc; // r29+0xD8
        float radius; // r29+0xE0
        float iz; // r29+0xE0
        class xVec3 loc3; // r29+0xC8
        float intensity; // r29+0xE0
    }
}


