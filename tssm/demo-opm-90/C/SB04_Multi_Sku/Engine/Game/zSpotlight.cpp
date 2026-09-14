/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSpotlight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E7010 -> 0x002E7694
*/
// Range: 0x2E7010 -> 0x2E7694
void render_flares() {
    /* anonymous block */ {
        // Range: 0x2E7010 -> 0x2E7694
        class RxObjSpace3DVertex * vert_buffer; // r17
        class RxObjSpace3DVertex * vert; // r18
        class RxObjSpace3DVertex * end_vert; // r2
        class RwRaster * raster; // r16
        class flare_element * flare; // r21
        class flare_element * end_flare; // r2
        class xMat4x3 & mat; // r2
        class xColor_tag color; // r29+0x11C
        float size; // r29+0x120
        float rx; // r5
        float ry; // r4
        float rz; // r3
        float ux; // r2
        float uy; // r1
        float uz; // r29+0x120
        float x; // r13
        float y; // r12
        float z; // r9
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSpotlight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E76A0 -> 0x002E79F0
*/
// Range: 0x2E76A0 -> 0x2E79F0
void cb_dispatch(class xBase * to /* r2 */, unsigned int event /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2E76A0 -> 0x2E79F0
        class zSpotlight & e; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSpotlight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E79F0 -> 0x002E7BA4
*/
// Range: 0x2E79F0 -> 0x2E7BA4
// this: r17
void zSpotlight::add_flare() {
    /* anonymous block */ {
        // Range: 0x2E79F0 -> 0x2E7BA4
        class flare_element * flare; // r2
        float mag; // r5
        float size0; // r29+0x30
        float glow0; // r4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSpotlight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E7BB0 -> 0x002E7D40
*/
// Range: 0x2E7BB0 -> 0x2E7D40
// this: r16
void zSpotlight::update_position() {
    /* anonymous block */ {
        // Range: 0x2E7BB0 -> 0x2E7D40
        signed int attach_bone; // r2
        signed int target_bone; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSpotlight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E7D40 -> 0x002E7EC8
*/
// Range: 0x2E7D40 -> 0x2E7EC8
// this: r16
void zSpotlight::update(float dt /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x2E7D40 -> 0x2E7EC8
        unsigned char hit; // r2
        class xMat4x3 & model_mat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSpotlight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E7ED0 -> 0x002E7F34
*/
// Range: 0x2E7ED0 -> 0x2E7F34
void load(class xBase & data /* r16 */, class xDynAsset & asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2E7ED0 -> 0x2E7F34
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSpotlight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E7F40 -> 0x002E839C
*/
// Range: 0x2E7F40 -> 0x2E839C
void render_all() {
    /* anonymous block */ {
        // Range: 0x2E7F40 -> 0x2E839C
        class zScene & s; // r2
        class zSpotlight * it; // r17
        class zSpotlight * end; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSpotlight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E83A0 -> 0x002E89C8
*/
// Range: 0x2E83A0 -> 0x2E89C8
// this: r17
void zSpotlight::refresh_light_volume() {
    /* anonymous block */ {
        // Range: 0x2E83A0 -> 0x2E89C8
        float radius; // r29+0x1E0
        float max_dist; // r29+0x1E0
        float view_angle; // r29+0x1E0
        class xVec3 & cam_loc; // r2
        class xMat4x3 scale_mat; // r29+0x180
        class xMat4x3 expand_mat; // r29+0x140
        float scale; // r20
        float cam_dist; // r29+0x1E0
        float radius_at_camera; // r29+0x1E0
        class xMat4x3 trans_mat; // r29+0x100
        class xMat4x3 itrans_mat; // r29+0xC0
        class xMat4x3 temp_mat1; // r29+0x80
        class xMat4x3 temp_mat2; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSpotlight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E89D0 -> 0x002E9270
*/
// Range: 0x2E89D0 -> 0x2E9270
void setup_all() {
    /* anonymous block */ {
        // Range: 0x2E89D0 -> 0x2E9270
        class zScene & s; // r2
        class zSpotlight * spots; // r17
        signed int spots_size; // r16
        class zSpotlight * spot; // r20
        class zSpotlight * end_spot; // r2
        class cone_attrib * cone_buffer; // r23
        class cone_attrib * cone; // r3
        class cone_attrib * end_cone; // r2
        class RpAtomic * * lights; // r2
        class RpAtomic * * auras; // r2
        signed int lights_size; // r18
        signed int auras_size; // r17
        class cone_attrib * last_light_cone; // r16
        class cone_attrib * last_aura_cone; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSpotlight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E9270 -> 0x002E9330
*/
// Range: 0x2E9270 -> 0x2E9330
static class RpMeshHeader * cone_stripper(class RpBuildMesh * build_mesh /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2E9270 -> 0x2E9330
        class RpMeshHeader * mesh_header; // r2
        class RpMesh * mesh; // r2
        unsigned short * indices; // r8
        signed int left_index_value; // r7
        signed int right_index_value; // r6
        unsigned short * end_column; // r2
        signed int il; // r2
        signed int ir; // r4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSpotlight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E9330 -> 0x002E9560
*/
// Range: 0x2E9330 -> 0x2E9560
static void set_cone_atomic_color_faded(class RpAtomic * atomic /* r2 */, class xColor_tag color /* r29+0xC */) {
    /* anonymous block */ {
        // Range: 0x2E9330 -> 0x2E9560
        class xColor_tag * lum; // r4
        class xColor_tag * end_lum; // r2
        float rstart; // r29+0x10
        float gstart; // r14
        float bstart; // r13
        float astart; // r12
        float dr; // r11
        float dg; // r10
        float db; // r9
        float da; // r8
        float r; // r7
        float g; // r6
        float b; // r5
        float a; // r4
        class xColor_tag * end_column_lum; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSpotlight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E9560 -> 0x002E9788
*/
// Range: 0x2E9560 -> 0x2E9788
static class RpAtomic * create_cone_atomic() {
    /* anonymous block */ {
        // Range: 0x2E9560 -> 0x2E9788
        class RpMaterial * material; // r19
        class RpGeometry * geom; // r18
        class RpAtomic * atomic; // r17
        class RwFrame * frame; // r16
        class RpTriangle * tri; // r21
        class RpTriangle * end_tri; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSpotlight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E9790 -> 0x002E9944
*/
// Range: 0x2E9790 -> 0x2E9944
static void set_cone_verts(class RpAtomic * atomic /* r2 */, float radius /* r25 */, float slope /* r24 */, float max_dist /* r23 */) {
    /* anonymous block */ {
        // Range: 0x2E9790 -> 0x2E9944
        class RpMorphTarget * mt; // r2
        class xVec3 * vert; // r18
        class xVec3 * end_vert; // r2
        float dz; // r22
        float dradius; // r21
        float dcos; // r20
        float dsin; // r29+0x70
        float xdir; // r8
        float ydir; // r7
        float x; // r6
        float y; // r5
        float z; // r4
        float dx; // r3
        float dy; // r2
        class xVec3 * end_column_vert; // r2
        float end_radius; // r3
        float hdist; // r29+0x70
        float hdist2; // r2
        class xSphere o; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSpotlight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E9950 -> 0x002E99B0
*/
// Range: 0x2E9950 -> 0x2E99B0
static void set_cone_tris(class RpAtomic * atomic /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2E9950 -> 0x2E99B0
        class RpTriangle * tri; // r7
        class RpTriangle * end_tri; // r2
        signed int index0; // r6
        signed int index1; // r5
        signed int end_index1; // r4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSpotlight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E99B0 -> 0x002E9A70
*/
// Range: 0x2E99B0 -> 0x2E9A70
static signed int compare_cones(void * e1 /* r2 */, void * e2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2E99B0 -> 0x2E9A70
        class cone_attrib & a1; // r2
        class cone_attrib & a2; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zSpotlight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00311AC0 -> 0x00311B4C
*/
// Range: 0x311AC0 -> 0x311B4C
// this: r18
void light_volume_type::render() {
    /* anonymous block */ {
        // Range: 0x311AC0 -> 0x311B4C
    }
}


