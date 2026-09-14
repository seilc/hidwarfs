/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FB5C0 -> 0x003FBCC8
*/
// Range: 0x3FB5C0 -> 0x3FBCC8
// this: r2
void xDecalEmitter::get_render_data(class unit_data & unit /* r2 */, float scale /* r29+0x10 */, class xColor_tag & color /* r2 */, class xMat4x3 & mat /* r2 */, class xVec2 & uv0 /* r2 */, class xVec2 & uv1 /* r2 */, signed int min_alpha /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3FB5C0 -> 0x3FBCC8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FBCD0 -> 0x003FC228
*/
// Range: 0x3FBCD0 -> 0x3FC228
// this: r20
void xDecalEmitter::update(float dt /* r29+0x120 */) {
    /* anonymous block */ {
        // Range: 0x3FBCD0 -> 0x3FC228
        float dage; // r20
        class ptank_pool__color_mat_uv2 pool; // r29+0xB0
        signed int min_alpha; // r23
        class iterator it; // r29+0x118
        class unit_data & unit; // r2
        float scale; // r21
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FC230 -> 0x003FC580
*/
// Range: 0x3FC230 -> 0x3FC580
// this: r17
void xDecalEmitter::emit(class xMat4x3 & mat /* r2 */, class xVec3 & scale /* r2 */, signed int texture_index /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3FC230 -> 0x3FC580
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FC580 -> 0x003FC58C
*/
// Range: 0x3FC580 -> 0x3FC58C
// this: r2
void xDecalEmitter::set_curve(class curve_node * curve /* r2 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3FC580 -> 0x3FC58C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FC590 -> 0x003FC770
*/
// Range: 0x3FC590 -> 0x3FC770
// this: r16
void xDecalEmitter::refresh_config() {
    /* anonymous block */ {
        // Range: 0x3FC590 -> 0x3FC770
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FC770 -> 0x003FC7C0
*/
// Range: 0x3FC770 -> 0x3FC7C0
// this: r16
void xDecalEmitter::set_texture(char * name /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3FC770 -> 0x3FC7C0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FC7C0 -> 0x003FC800
*/
// Range: 0x3FC7C0 -> 0x3FC800
// this: r2
void xDecalEmitter::set_default_config() {
    /* anonymous block */ {
        // Range: 0x3FC7C0 -> 0x3FC800
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FC800 -> 0x003FC8C0
*/
// Range: 0x3FC800 -> 0x3FC8C0
// this: r16
void xDecalEmitter::init(signed int max_size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3FC800 -> 0x3FC8C0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FC8C0 -> 0x003FC958
*/
// Range: 0x3FC8C0 -> 0x3FC958
void xDecalUpdate(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3FC8C0 -> 0x3FC958
        unsigned int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FC960 -> 0x003FC968
*/
// Range: 0x3FC960 -> 0x3FC968
void xDecalInit() {
    /* anonymous block */ {
        // Range: 0x3FC960 -> 0x3FC968
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FC970 -> 0x003FCFB0
*/
// Range: 0x3FC970 -> 0x3FCFB0
void emit_env(class emit_context & ec /* r20 */, class xMat4x3 & mat /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3FC970 -> 0x3FCFB0
        class owner_group_type * owner_group; // r18
        unsigned char * temp_scratch; // r17
        unsigned char * mem; // r2
        class intersect_env_params * iarg; // r2
        class clip_decal_params * carg; // r16
        class xVec3 * decal_vert; // r2
        unsigned char * outcode; // r2
        float rx; // r29+0xA0
        float ry; // r29+0xA0
        class decal_instance * decal; // r18
        class immediate_mode_data * im; // r2
        unsigned short * index; // r4
        unsigned short i; // r3
        class RpGeometry * geom; // r2
        class RpTriangle * atri; // r19
        unsigned short i; // r4
        class RpMorphTarget * mt; // r2
        class RwSphere o; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FCFB0 -> 0x003FE6E4
*/
// Range: 0x3FCFB0 -> 0x3FE6E4
void emit(class emit_context & ec /* r29+0x19C */, class xMat4x3 & mat /* r20 */, class RpAtomic * model /* r29+0x198 */, class xMat4x3 * model_mat /* r29+0x180 */, unsigned char moving_model /* r30 */) {
    /* anonymous block */ {
        // Range: 0x3FCFB0 -> 0x3FE6E4
        class owner_group_type * owner_group; // r19
        class RpGeometry * geom; // r2
        class RpTriangle * tri; // r2
        class xVec3 * vert; // r21
        signed int tri_size; // r2
        signed int vert_size; // r2
        class xMat4x3 & mmat; // r2
        class xMat4x3 oldmmat; // r29+0x1E0
        class xMat4x3 imat; // r29+0x1A0
        class xVec3 * decal_vert; // r29+0x170
        unsigned char * temp_scratch; // r17
        class clip_decal_indexed_params * arg; // r2
        float * weight_buffer; // r16
        float rx; // r29+0x230
        float ry; // r29+0x230
        unsigned char mountable; // r2
        class decal_instance * decal; // r29+0x16C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FE6F0 -> 0x003FE9E8
*/
// Range: 0x3FE6F0 -> 0x3FE9E8
void sphere_emit(class emit_context & ec /* r19 */, class xVec3 & center /* r18 */, float radius /* r20 */, signed int check_flags /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3FE6F0 -> 0x3FE9E8
        class xSphere o; // r29+0x170
        class xMat4x3 mat; // r29+0x130
        class xCollis coll; // r29+0xD0
        class cb_decal_sphere_hits_ent cb; // r29+0xC0
        class xBound bound; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FE9F0 -> 0x003FEC94
*/
// Range: 0x3FE9F0 -> 0x3FEC94
void emit(class emit_context & ec /* r19 */, class xMat4x3 & mat /* r18 */, signed int check_flags /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3FE9F0 -> 0x3FEC94
        class xBox box; // r29+0xE0
        float rx; // r29+0x110
        float ry; // r29+0x110
        class xSphere o; // r29+0xD0
        class cb_decal_hits_ent cb; // r29+0xB0
        class xBound bound; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FECA0 -> 0x004001B0
*/
// Range: 0x3FECA0 -> 0x4001B0
void render_all() {
    /* anonymous block */ {
        // Range: 0x3FECA0 -> 0x4001B0
        signed int immediate_verts_used'924; // r4
        signed int i; // r7
        class decal_instance * decal; // r20
        class decal_instance * * it; // r29+0x140
        class decal_instance * * end; // r2
        unsigned int blend_mode; // r29+0x130
        class RwTexture * texture; // r29+0x12C
        class xMat4x3 * driver; // r29+0x110
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004001B0 -> 0x00400500
*/
// Range: 0x4001B0 -> 0x400500
void update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x4001B0 -> 0x400500
        class decal_instance * decal; // r17
        class decal_instance * end_decal; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00400500 -> 0x0040065C
*/
// Range: 0x400500 -> 0x40065C
void reset() {
    /* anonymous block */ {
        // Range: 0x400500 -> 0x40065C
        class decal_instance * decal; // r17
        class decal_instance * end_decal; // r2
        class immediate_mode_data * idata; // r4
        class immediate_mode_data * end_idata; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00400660 -> 0x00400764
*/
// Range: 0x400660 -> 0x400764
void scene_exit() {
    /* anonymous block */ {
        // Range: 0x400660 -> 0x400764
        class decal_instance * decal; // r17
        class decal_instance * end_decal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00400770 -> 0x004007E0
*/
// Range: 0x400770 -> 0x4007E0
void scene_enter() {
    /* anonymous block */ {
        // Range: 0x400770 -> 0x4007E0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004007E0 -> 0x00400974
*/
// Range: 0x4007E0 -> 0x400974
static void intersect_env(class intersect_env_params & arg /* r19 */) {
    /* anonymous block */ {
        // Range: 0x4007E0 -> 0x400974
        class xEnv * env; // r2
        class RwLine line; // r29+0x70
        float radius; // r29+0x8C
        class xClumpCollV3dGradient grad; // r29+0x50
        signed int i; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00400980 -> 0x00400E14
*/
// Range: 0x400980 -> 0x400E14
static signed int intersect_env_callback(class xClumpCollBSPTriangle * tri /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x400980 -> 0x400E14
        class intersect_env_params & arg; // r2
        signed int pflags; // r2
        float c1; // r29
        float c2; // r29
        signed int out_intersect; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00400E20 -> 0x00400EB0
*/
// Range: 0x400E20 -> 0x400EB0
static signed int compare_decals(void * e1 /* r2 */, void * e2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x400E20 -> 0x400EB0
        class decal_instance * d1; // r2
        class decal_instance * d2; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00400EB0 -> 0x00401128
*/
// Range: 0x400EB0 -> 0x401128
static class decal_instance * create_decal(class emit_context & ec /* r17 */, class xMat4x3 * driver /* r2 */, class owner_group_type * owner_group /* r2 */) {
    /* anonymous block */ {
        // Range: 0x400EB0 -> 0x401128
        unsigned short rwmodes[3][2]; // @ 0x0062BBF0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00401130 -> 0x004015F0
*/
// Range: 0x401130 -> 0x4015F0
static void refresh_decal(class decal_instance & decal /* r16 */) {
    /* anonymous block */ {
        // Range: 0x401130 -> 0x4015F0
        signed int min_alpha; // r2
        float ix; // r29+0x20
        float iy; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004015F0 -> 0x00401720
*/
// Range: 0x4015F0 -> 0x401720
static void add_to_owner_group(class decal_instance & decal /* r16 */, class owner_group_type * owner_group /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4015F0 -> 0x401720
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00401720 -> 0x004017BC
*/
// Range: 0x401720 -> 0x4017BC
static void remove_from_owner_group(class decal_instance & decal /* r2 */) {
    /* anonymous block */ {
        // Range: 0x401720 -> 0x4017BC
        class owner_group_type * owner_group; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004017C0 -> 0x00401A0C
*/
// Range: 0x4017C0 -> 0x401A0C
static void obb_to_capsule(class xLine3 & line /* r2 */, float & radius /* r2 */, class xBox & box /* r2 */, class xMat4x3 & mat /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4017C0 -> 0x401A0C
        float dx; // r29+0x10
        float dy; // r29+0x10
        float dz; // r29+0x10
        class xVec3 diag; // r29
        float rd1; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00401A10 -> 0x00401B14
*/
// Range: 0x401A10 -> 0x401B14
static void complete_decal_atomic(class RpAtomic * atomic /* r19 */, class xVec2 * uv /* r2 */, class RwSphere * o /* r18 */) {
    /* anonymous block */ {
        // Range: 0x401A10 -> 0x401B14
        class RpGeometry * geom; // r17
        class RpMorphTarget * mt; // r2
        class RwSphere bound; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00401B20 -> 0x00401EA0
*/
// Range: 0x401B20 -> 0x401EA0
static class RpAtomic * create_decal_atomic(class decal_instance & decal /* r21 */, signed int vert_size /* r23 */, signed int tri_size /* r16 */) {
    /* anonymous block */ {
        // Range: 0x401B20 -> 0x401EA0
        unsigned int geom_flags; // r17
        class RpMaterial * material; // r20
        class RpGeometry * geom; // r19
        class RpAtomic * atomic; // r22
        class RwFrame * frame; // r18
        class RpTriangle * tri; // r17
        class RpTriangle * end_tri; // r2
        class xColor_tag * color; // r7
        class xColor_tag * end_color; // r2
        class RwMatrixTag uvmat; // r29+0x90
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00401EA0 -> 0x0040329C
*/
// Range: 0x401EA0 -> 0x40329C
static void clip_decal_indexed(class clip_decal_indexed_params & arg /* r21 */) {
    /* anonymous block */ {
        // Range: 0x401EA0 -> 0x40329C
        class xVec3 * iv; // r2
        class RpTriangle * it; // r22
        class RpTriangle * end_it; // r2
        class RpTriangle * ot; // r20
        class RpTriangle * end_ot; // r2
        class combo_vertex * ov; // r19
        class combo_vertex * end_ov; // r2
        class xVec2 * ouv; // r18
        class clip_vertex * cv; // r17
        unsigned short * used; // r2
        float su; // r8
        float sv; // r7
        float du; // r6
        float dv; // r5
        float ux; // r4
        float uy; // r3
        signed int vi0; // r2
        signed int vi1; // r2
        signed int vi2; // r2
        signed int out0; // r2
        signed int out1; // r2
        signed int out2; // r2
        signed int out_union; // r2
        signed int i; // r8
        signed int vi; // r2
        unsigned short & stored; // r2
        class xVec3 & vxy; // r2
        signed int cv_offset; // r3
        signed int vsize; // r4
        float _c; // r2
        class clip_vertex * s0; // r13
        class clip_vertex * s1; // r12
        class clip_vertex * ends1; // r2
        class clip_vertex * d; // r5
        float s; // r29+0x170
        float s; // r29+0x170
        float _c; // r2
        class clip_vertex * s0; // r14
        class clip_vertex * s1; // r13
        class clip_vertex * ends1; // r2
        class clip_vertex * d; // r12
        float s; // r29+0x170
        float s; // r29+0x170
        float _c; // r2
        class clip_vertex * s0; // r14
        class clip_vertex * s1; // r13
        class clip_vertex * ends1; // r2
        class clip_vertex * d; // r12
        float s; // r29+0x170
        float s; // r29+0x170
        float _c; // r2
        class clip_vertex * s0; // r14
        class clip_vertex * s1; // r13
        class clip_vertex * ends1; // r2
        class clip_vertex * d; // r12
        float s; // r29+0x170
        float s; // r29+0x170
        float _c; // r2
        class clip_vertex * s0; // r14
        class clip_vertex * s1; // r13
        class clip_vertex * ends1; // r2
        class clip_vertex * d; // r12
        float s; // r29+0x170
        float s; // r29+0x170
        float _c; // r2
        class clip_vertex * s0; // r13
        class clip_vertex * s1; // r12
        class clip_vertex * ends1; // r2
        class clip_vertex * d; // r8
        float s; // r29+0x170
        float s; // r29+0x170
        class clip_vertex * rcv; // r24
        class clip_vertex * end_rcv; // r2
        signed int * poly_vert_index; // r2
        signed int * pvi; // r15
        signed int vi; // r2
        unsigned short & stored; // r2
        unsigned short fan_center; // r2
        signed int * end_pvi; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004032A0 -> 0x00403EBC
*/
// Range: 0x4032A0 -> 0x403EBC
static void clip_decal(class clip_decal_params & arg /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4032A0 -> 0x403EBC
        class xVec3 * iv; // r10
        class xVec3 * end_iv; // r2
        class xVec3 * ov; // r9
        class xVec3 * end_ov; // r2
        class xVec2 * ouv; // r8
        class xVec3 * cv; // r7
        unsigned char * outcode; // r6
        float su; // r7
        float sv; // r6
        float du; // r5
        float dv; // r4
        float ux; // r3
        float uy; // r2
        signed int out_union; // r2
        signed int cv_offset; // r5
        signed int vsize; // r3
        float _c; // r1
        class xVec3 * s0; // r18
        class xVec3 * s1; // r17
        class xVec3 * ends1; // r2
        class xVec3 * d; // r16
        float s; // r29+0x50
        float s; // r29+0x50
        float _c; // r1
        class xVec3 * s0; // r3
        class xVec3 * s1; // r16
        class xVec3 * ends1; // r2
        class xVec3 * d; // r19
        float s; // r29+0x50
        float s; // r29+0x50
        float _c; // r1
        class xVec3 * s0; // r3
        class xVec3 * s1; // r16
        class xVec3 * ends1; // r2
        class xVec3 * d; // r19
        float s; // r29+0x50
        float s; // r29+0x50
        float _c; // r1
        class xVec3 * s0; // r3
        class xVec3 * s1; // r16
        class xVec3 * ends1; // r2
        class xVec3 * d; // r19
        float s; // r29+0x50
        float s; // r29+0x50
        float _c; // r1
        class xVec3 * s0; // r3
        class xVec3 * s1; // r16
        class xVec3 * ends1; // r2
        class xVec3 * d; // r19
        float s; // r29+0x50
        float s; // r29+0x50
        float _c; // r1
        class xVec3 * s0; // r3
        class xVec3 * s1; // r11
        class xVec3 * ends1; // r2
        class xVec3 * d; // r18
        float s; // r29+0x50
        float s; // r29+0x50
        class xVec3 * poly_vert; // r2
        class xVec2 * poly_uv; // r2
        class xVec3 * pv; // r18
        class xVec2 * puv; // r17
        class xVec2 * end_puv; // r2
        class xVec3 * tri_vert1; // r17
        class xVec3 * tri_vert2; // r16
        class xVec3 * end_tri_vert2; // r2
        class xVec2 * tri_uv1; // r20
        class xVec2 * tri_uv2; // r19
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xDecal.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00403EC0 -> 0x00404038
*/
// Range: 0x403EC0 -> 0x404038
static void transform_combo_vertices(class xVec3 * vert /* r2 */, class combo_vertex * cv /* r2 */, signed int vert_size /* r2 */, class xVec3 * src_vert /* r2 */) {
    /* anonymous block */ {
        // Range: 0x403EC0 -> 0x404038
        class xVec3 * end_vert; // r2
        class xVec3 & s0; // r2
        class xVec3 & s1; // r2
        float o; // r29
        class xVec3 & s1; // r2
        class xVec3 & s2; // r2
        float o; // r29
    }
}


