/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xDecal.cpp
*/
static class decal_instance * decals; // size: 0x4, address: 0x80720090
static class decal_instance * * render_list; // size: 0x4, address: 0x80720094
static class immediate_mode_data * immediate_buffer; // size: 0x4, address: 0x80720098
static class immediate_mode_data * immediate_free; // size: 0x4, address: 0x8072009C
static int immediate_used; // size: 0x4, address: 0x807200A0
static int decals_used; // size: 0x4, address: 0x807200A4
static bool decals_sorted; // size: 0x1, address: 0x807200A8
static int immediate_indices_used; // size: 0x4, address: 0x807200AC
static int immediate_verts_used; // size: 0x4, address: 0x807200B0
// signature: @unnamed@WAD00_cpp@::is_conveyor_belt(xEnt *)
// Range: 0x80025A70 -> 0x80025AA4
static bool @unnamed@WAD00_cpp@::is_conveyor_belt() {
}
// signature: @unnamed@WAD00_cpp@::facing_away(const xVec3 &, const xVec3 &, const xVec3 &)
// Range: 0x80024580 -> 0x80024658
static bool @unnamed@WAD00_cpp@::facing_away(class xVec3 & vert0 /* r30 */, class xVec3 & vert2 /* r31 */) {
    // Local variables
    class xVec3 dir1; // r1+0x20
    class xVec3 dir2; // r1+0x14
    class xVec3 normal; // r1+0x8
    float length2; // f31
}
// signature: @unnamed@WAD00_cpp@::get_outcode(const xVec3 &, const xVec3 &, const xVec3 &)
// Range: 0x80025480 -> 0x80025504
static int @unnamed@WAD00_cpp@::get_outcode() {
    // Local variables
    int oc; // r0
}
// signature: @unnamed@WAD00_cpp@::compute_outcodes(unsigned char *, const xVec3 *, int, const xBox &)
// Range: 0x80027250 -> 0x80027330
static void @unnamed@WAD00_cpp@::compute_outcodes(unsigned char * outcode /* r27 */, class xVec3 * vert /* r28 */, class xBox & box /* r29 */) {
    // Local variables
    class xVec3 * end_vert; // r30
}
// signature: @unnamed@WAD00_cpp@::transform_combo_vertices(xVec3 *, const @unnamed@WAD00_cpp@::combo_vertex *, int, const xVec3 *)
// Range: 0x80022900 -> 0x80022A64
static void @unnamed@WAD00_cpp@::transform_combo_vertices(class xVec3 * vert /* r28 */, class combo_vertex * cv /* r29 */, class xVec3 * src_vert /* r30 */) {
    // Local variables
    class xVec3 * end_vert; // r31

    {
        // Range: 0x80022920 -> 0x80022A44
        // Local variables
        class xVec3 & s0; // r4

        {
            // Range: 0x80022920 -> 0x80022920
            // Local variables
            float o; // f7
            class xVec3 & s1; // r3
        }
        {
            // Range: 0x80022920 -> 0x80022A44
            // Local variables
            float o; // f9
            class xVec3 & s2; // r3
            class xVec3 & s1; // r3
        }
    }
}
// Range: 0x80022A70 -> 0x80023518
static void @unnamed@WAD00_cpp@::clip_decal(class clip_decal_params & arg /* r15 */) {
    // Local variables
    class xVec3 * iv; // r30
    class xVec3 * end_iv; // r1+0x78
    class xVec3 * ov; // r29
    class xVec3 * end_ov; // r28
    class xVec2 * ouv; // r27
    class xVec3 * onorm; // r26
    class xVec3 * cv; // r25
    unsigned char * outcode; // r24
    float su; // f31
    float sv; // f30
    float du; // f29
    float dv; // f28
    float ux; // f27
    float uy; // f26

    {
        // Range: 0x80022AE0 -> 0x800234B4
        // Local variables
        class xVec3 c2; // r1+0x20
        class xVec3 c1; // r1+0x2C
        class xVec3 v2; // r1+0x38
        class xVec3 v1; // r1+0x44
        class xVec3 norm; // r1+0x50
        class xVec3 l2; // r1+0x5C
        class xVec3 l1; // r1+0x68
        int out_union; // r14

        {
            // Range: 0x80022AE0 -> 0x800234A0
            // Local variables
            class xVec3 * tri_norm2; // r16
            class xVec3 * tri_norm1; // r17
            class xVec2 * tri_uv2; // r18
            class xVec2 * tri_uv1; // r19
            class xVec3 * end_tri_vert2; // r1+0x74
            class xVec3 * tri_vert2; // r20
            class xVec3 * tri_vert1; // r14
            class xVec3 * end_pnorm; // r17
            class xVec3 * pnorm; // r14
            class xVec2 * end_puv; // r0
            class xVec2 * puv; // r4
            class xVec3 * pv; // r3
            class xVec3 * poly_norm; // r21
            class xVec2 * poly_uv; // r22
            class xVec3 * poly_vert; // r23
            int vsize; // r17
            int cv_offset; // r16

            {
                // Range: 0x80022AE0 -> 0x80022AE0
                // Local variables
                class xVec3 * d; // r20
                class xVec3 * ends1; // r19
                class xVec3 * s1; // r18
                class xVec3 * s0; // r3
                float _c; // f25

                {
                    // Range: 0x80022AE0 -> 0x80022AE0
                    // Local variables
                    float s; // f2
                }
                {
                    // Range: 0x80022AE0 -> 0x80022AE0
                    // Local variables
                    float s; // f2
                }
            }
            {
                // Range: 0x80022E28 -> 0x80022E28
                // Local variables
                class xVec3 * d; // r17
                class xVec3 * ends1; // r20
                class xVec3 * s1; // r18
                class xVec3 * s0; // r3
                float _c; // f25

                {
                    // Range: 0x80022E28 -> 0x80022E28
                    // Local variables
                    float s; // f2
                }
                {
                    // Range: 0x80022E28 -> 0x80022E28
                    // Local variables
                    float s; // f2
                }
            }
            {
                // Range: 0x80022F2C -> 0x80022F2C
                // Local variables
                class xVec3 * d; // r17
                class xVec3 * ends1; // r20
                class xVec3 * s1; // r18
                class xVec3 * s0; // r3
                float _c; // f25

                {
                    // Range: 0x80022F2C -> 0x80022F2C
                    // Local variables
                    float s; // f2
                }
                {
                    // Range: 0x80022F2C -> 0x80022F2C
                    // Local variables
                    float s; // f2
                }
            }
            {
                // Range: 0x80023030 -> 0x80023030
                // Local variables
                class xVec3 * d; // r17
                class xVec3 * ends1; // r20
                class xVec3 * s1; // r18
                class xVec3 * s0; // r3
                float _c; // f25

                {
                    // Range: 0x80023030 -> 0x80023030
                    // Local variables
                    float s; // f2
                }
                {
                    // Range: 0x80023030 -> 0x80023030
                    // Local variables
                    float s; // f2
                }
            }
            {
                // Range: 0x80023134 -> 0x80023134
                // Local variables
                class xVec3 * d; // r17
                class xVec3 * ends1; // r20
                class xVec3 * s1; // r18
                class xVec3 * s0; // r3
                float _c; // f25

                {
                    // Range: 0x80023134 -> 0x80023134
                    // Local variables
                    float s; // f2
                }
                {
                    // Range: 0x80023134 -> 0x80023134
                    // Local variables
                    float s; // f2
                }
            }
            {
                // Range: 0x80023238 -> 0x80023238
                // Local variables
                class xVec3 * d; // r19
                class xVec3 * ends1; // r17
                class xVec3 * s1; // r14
                class xVec3 * s0; // r3
                float _c; // f25

                {
                    // Range: 0x80023238 -> 0x80023238
                    // Local variables
                    float s; // f2
                }
                {
                    // Range: 0x80023238 -> 0x80023238
                    // Local variables
                    float s; // f2
                }
            }
        }
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x800235B0 -> 0x80024578
static void @unnamed@WAD00_cpp@::clip_decal_indexed(class clip_decal_indexed_params & arg /* r15 */) {
    // Local variables
    class xVec3 * iv; // r26
    unsigned short * it; // r25
    unsigned short * end_it; // r1+0x18
    unsigned short * ot; // r24
    unsigned short * end_ot; // r1+0x14
    class combo_vertex * ov; // r23
    class combo_vertex * end_ov; // r1+0x10
    class xVec2 * ouv; // r22
    class clip_vertex * cv; // r21
    unsigned short * used; // r20
    float su; // f31
    float sv; // f30
    float du; // f29
    float dv; // f28
    float ux; // f27
    float uy; // f26

    {
        // Range: 0x800236E0 -> 0x800244E0
        // Local variables
        int out_union; // r16
        int out2; // r16
        int out1; // r17
        int out0; // r18
        int vi2; // r19
        int vi1; // r1+0x8
        int vi0; // r1+0xC

        {
            // Range: 0x800236E0 -> 0x800236E0
            // Local variables
            int i; // r0

            {
                // Range: 0x800236E0 -> 0x800236E0
                // Local variables
                unsigned short & stored; // r0
                int vi; // r5

                {
                    // Range: 0x800236E0 -> 0x800236E0
                    // Local variables
                    class xVec3 & vxy; // r5
                }
            }
        }
        {
            // Range: 0x800236E0 -> 0x800244E0
            // Local variables
            int * end_pvi; // r5
            unsigned short fan_center; // r3
            int * pvi; // r8
            int * poly_vert_index; // r7
            class clip_vertex * end_rcv; // r0
            class clip_vertex * rcv; // r6
            int vsize; // r14
            int cv_offset; // r17

            {
                // Range: 0x800236E0 -> 0x800236E0
                // Local variables
                class clip_vertex * d; // r27
                class clip_vertex * ends1; // r28
                class clip_vertex * s1; // r18
                class clip_vertex * s0; // r3
                float _c; // f22

                {
                    // Range: 0x800236E0 -> 0x800236E0
                    // Local variables
                    float s; // f2
                }
                {
                    // Range: 0x800236E0 -> 0x800236E0
                    // Local variables
                    float s; // f2
                }
            }
            {
                // Range: 0x800236E0 -> 0x800236E0
                // Local variables
                class clip_vertex * d; // r27
                class clip_vertex * ends1; // r28
                class clip_vertex * s1; // r18
                class clip_vertex * s0; // r3
                float _c; // f22

                {
                    // Range: 0x800236E0 -> 0x800236E0
                    // Local variables
                    float s; // f2
                }
                {
                    // Range: 0x800236E0 -> 0x800236E0
                    // Local variables
                    float s; // f2
                }
            }
            {
                // Range: 0x800236E0 -> 0x800236E0
                // Local variables
                class clip_vertex * d; // r27
                class clip_vertex * ends1; // r28
                class clip_vertex * s1; // r18
                class clip_vertex * s0; // r3
                float _c; // f22

                {
                    // Range: 0x800236E0 -> 0x800236E0
                    // Local variables
                    float s; // f2
                }
                {
                    // Range: 0x800236E0 -> 0x800236E0
                    // Local variables
                    float s; // f2
                }
            }
            {
                // Range: 0x800236E0 -> 0x800236E0
                // Local variables
                class clip_vertex * d; // r27
                class clip_vertex * ends1; // r28
                class clip_vertex * s1; // r18
                class clip_vertex * s0; // r3
                float _c; // f22

                {
                    // Range: 0x800236E0 -> 0x800236E0
                    // Local variables
                    float s; // f2
                }
                {
                    // Range: 0x800236E0 -> 0x800236E0
                    // Local variables
                    float s; // f2
                }
            }
            {
                // Range: 0x800236E0 -> 0x800236E0
                // Local variables
                class clip_vertex * d; // r27
                class clip_vertex * ends1; // r28
                class clip_vertex * s1; // r18
                class clip_vertex * s0; // r3
                float _c; // f22

                {
                    // Range: 0x800236E0 -> 0x800236E0
                    // Local variables
                    float s; // f2
                }
                {
                    // Range: 0x800236E0 -> 0x800236E0
                    // Local variables
                    float s; // f2
                }
            }
            {
                // Range: 0x800236E0 -> 0x800236E0
                // Local variables
                class clip_vertex * d; // r18
                class clip_vertex * ends1; // r16
                class clip_vertex * s1; // r14
                class clip_vertex * s0; // r3
                float _c; // f22

                {
                    // Range: 0x800236E0 -> 0x800236E0
                    // Local variables
                    float s; // f2
                }
                {
                    // Range: 0x800236E0 -> 0x800236E0
                    // Local variables
                    float s; // f2
                }
            }
            {
                // Range: 0x800236E0 -> 0x800236E0
                // Local variables
                unsigned short & stored; // r0
                int vi; // r11
            }
        }
    }
}
// Range: 0x800271E0 -> 0x80027250
static void @unnamed@WAD00_cpp@::transform_points(class xVec3 * out /* r26 */, class xVec3 * in /* r27 */, int size /* r28 */, class xMat4x3 & mat /* r29 */) {
    {
        // Range: 0x80027200 -> 0x8002723C
        // Local variables
        int i; // r30
    }
}
// Range: 0x80027810 -> 0x80027870
static void @unnamed@WAD00_cpp@::transform_normals(class xVec3 * out /* r26 */, class xVec3 * in /* r27 */, int size /* r28 */, class xMat4x3 & mat /* r29 */) {
    {
        // Range: 0x80027830 -> 0x8002785C
        // Local variables
        int i; // r30
    }
}
// Range: 0x800246C0 -> 0x800246EC
static class immediate_mode_data * @unnamed@WAD00_cpp@::alloc_immediate_data() {
    // References
    // -> static int immediate_used;
    // -> static class immediate_mode_data * immediate_free;
}
// Range: 0x800246F0 -> 0x80024820
static void @unnamed@WAD00_cpp@::free_decal(class decal_instance * decal /* r29 */) {
    // Local variables
    class decal_instance * move_decal; // r30

    // References
    // -> static bool decals_sorted;
    // -> static class decal_instance * decals;
    // -> static int decals_used;
}
// Range: 0x800248F0 -> 0x80024BAC
static void @unnamed@WAD00_cpp@::refresh_decal(class decal_instance & decal /* r31 */) {
    // Local variables
    float t; // f1
    class animix current; // r1+0x8

    {
        // Range: 0x80024920 -> 0x80024A1C
        // Local variables
        int currFrame; // r9
    }
    {
        // Range: 0x80024B38 -> 0x80024B98
        // Local variables
        float iy; // f0
        float ix; // f4
    }
}
// signature: @unnamed@WAD00_cpp@::create_decal(const xDecal::emit_context &, const xMat4x3 *)
// Range: 0x80024BC0 -> 0x80024E74
static class decal_instance * @unnamed@WAD00_cpp@::create_decal(class emit_context & ec /* r30 */) {
    {
        // Range: 0x80024DF8 -> 0x80024E50
        // Local variables
        float aniend; // f0
        float anistart; // f0
    }

    // References
    // -> class xColor g_WHITE;
    // -> static bool decals_sorted;
    // -> static class decal_instance * decals;
    // -> static int decals_used;
}
// Range: 0x80024E80 -> 0x80024EDC
static void @unnamed@WAD00_cpp@::destroy_decal(class decal_instance & decal /* r31 */) {
    // References
    // -> static int immediate_used;
    // -> static class immediate_mode_data * immediate_free;
}
// signature: @unnamed@WAD00_cpp@::set_immediate_indices(unsigned short *, const unsigned short *, int)
// Range: 0x80024EE0 -> 0x80024EE8
static void @unnamed@WAD00_cpp@::set_immediate_indices() {
}
// signature: @unnamed@WAD00_cpp@::compare_decals(const void *, const void *)
// Range: 0x80024EF0 -> 0x80024F48
static int @unnamed@WAD00_cpp@::compare_decals() {
    // Local variables
    class decal_instance * d1; // r5
    class decal_instance * d2; // r4
}
// Range: 0x80024F90 -> 0x80025380
static void @unnamed@WAD00_cpp@::intersect_env(class intersect_env_params & arg /* r25 */) {
    {
        // Range: 0x80024FB4 -> 0x80024FB4
        // Local variables
        class intersect_env_CB _tempCB; // r1+0xD0
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x80025570 -> 0x8002563C
void xDecal::scene_enter() {
    // References
    // -> static int decals_used;
    // -> static class immediate_mode_data * immediate_buffer;
    // -> static class decal_instance * * render_list;
    // -> static class decal_instance * decals;
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x80025700 -> 0x80025754
void xDecal::scene_exit() {
    // Local variables
    class decal_instance * decal; // r31
    class decal_instance * end_decal; // r30

    // References
    // -> static class decal_instance * decals;
    // -> static int decals_used;
}
// Range: 0x80025760 -> 0x800257F8
void xDecal::reset() {
    // Local variables
    class decal_instance * decal; // r30
    class decal_instance * end_decal; // r29
    class immediate_mode_data * idata; // r3
    class immediate_mode_data * end_idata; // r4

    // References
    // -> static bool decals_sorted;
    // -> static int immediate_used;
    // -> static class immediate_mode_data * immediate_free;
    // -> static class immediate_mode_data * immediate_buffer;
    // -> static class decal_instance * decals;
    // -> static int decals_used;
}
// signature: xDecal::update_conveyed_decal(xDecal::decal_instance *, float)
// Range: 0x80025800 -> 0x800258BC
void xDecal::update_conveyed_decal() {
    // Local variables
    float platSpeed; // f2

    {
        // Range: 0x80025804 -> 0x800258B8
        // Local variables
        float timeRemaining; // f2
    }
}
// Range: 0x800258C0 -> 0x80025A54
void xDecal::update(float dt /* f30 */) {
    // Local variables
    float dt_mult; // f31
    class decal_instance * decal; // r30
    class decal_instance * end_decal; // r31

    // References
    // -> static class decal_instance * decals;
    // -> static int decals_used;
}
// Range: 0x80025AB0 -> 0x80026144
void xDecal::render_all() {
    // Local variables
    class decal_instance * decal; // r17
    class decal_instance * * it; // r16
    class decal_instance * * end; // r15
    class decal_instance * prev_rendered; // r18

    {
        // Range: 0x80025B20 -> 0x80025B58
        // Local variables
        int i; // r6
    }

    // References
    // -> class Scene * primaryScene;
    // -> static int immediate_verts_used;
    // -> static int immediate_indices_used;
    // -> static int decals_used;
    // -> static class decal_instance * * render_list;
    // -> static class decal_instance * decals;
    // -> static bool decals_sorted;
}
// Range: 0x80026A20 -> 0x80026B2C
void * xDecal::emit(class emit_context & ec /* r31 */, class xMat4x3 & mat /* r28 */, int check_flags /* r29 */, class xMat4x3 * driver_mat /* r27 */) {
    // Local variables
    class xMat4x3 useMat; // r1+0x8
    void * ptr; // r28

    {
        // Range: 0x80026AC4 -> 0x80026B10
        // Local variables
        int i; // r27
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: xDecal::emit_ent(const xDecal::emit_context &, const xMat4x3 &, const World::xOGModelRef &, xEnt *)
// Range: 0x80026B30 -> 0x80026B50
void xDecal::emit_ent() {
}
// Range: 0x80026B50 -> 0x80027110
void xDecal::emit_model(class emit_context & ec /* r21 */, class xMat4x3 & mat /* r22 */, class xOGModelRef * model /* r23 */, class xMat4x3 * model_mat /* r24 */, class xEnt * driver_ent /* r25 */) {
    // Local variables
    class ModelPrototype & proto; // r26
    class Builder * builder; // r0
    class StaticBuilder * staticBuilder; // r26
    unsigned short * convertedTris; // r30
    class FixedVertexBuffer & vBuffer; // r0
    class xVec3 * vert; // r29
    int vert_size; // r28
    class CollKDTree & tree; // r0
    int tri_size; // r27
    class xMat4x3 mmat; // r1+0x48
    class xMat4x3 imat; // r1+0x8
    class xVec3 * decal_vert; // r31
    unsigned char * temp_scratch; // reg65535
    class clip_decal_indexed_params * arg; // r26

    {
        // Range: 0x80026C30 -> 0x80026CE8
        // Local variables
        float * vertBufferStart; // r0
        unsigned short * outPos; // r3

        {
            // Range: 0x80026C58 -> 0x80026CE8
            // Local variables
            unsigned int idx; // r4

            {
                // Range: 0x80026C58 -> 0x80026CE8
                // Local variables
                float * v2; // r9
                float * v1; // r10
                class Triangle & tri; // r6
            }
        }
    }
    {
        // Range: 0x80026DD0 -> 0x80026E14
        // Local variables
        float ry; // f30
        float rx; // f31
    }
    {
        // Range: 0x80026EDC -> 0x80027060
        {
            // Range: 0x80026EDC -> 0x80027060
            // Local variables
            class immediate_mode_data * im; // r25
            class decal_instance * decal; // r0

            {
                // Range: 0x80026FA8 -> 0x80026FF8
                // Local variables
                int i; // r4
            }
            {
                // Range: 0x80027024 -> 0x80027060
                // Local variables
                int i; // r24
            }
        }
    }

    // References
    // -> static class immediate_mode_data * immediate_free;
    // -> static int decals_used;
}
// Range: 0x800274C0 -> 0x8002780C
void * xDecal::emit_env(class emit_context & ec /* r25 */, class xMat4x3 & mat /* r26 */, class xMat4x3 * driver_mat /* r27 */) {
    // Local variables
    class decal_instance * decal; // r31
    unsigned char * temp_scratch; // reg65535
    class intersect_env_params * iarg; // r30
    class clip_decal_params * carg; // r29
    class xVec3 * decal_vert; // r24
    unsigned long long * surfaceIDs; // r28
    class xVec2 useSize; // r1+0x8
    float rx; // f31
    float ry; // f30

    {
        // Range: 0x800276B0 -> 0x80027784
        // Local variables
        unsigned short * index; // r3
        class immediate_mode_data * im; // r24

        {
            // Range: 0x80027700 -> 0x80027724
            // Local variables
            unsigned short i; // r4
        }
        {
            // Range: 0x80027748 -> 0x80027784
            // Local variables
            int i; // r27
        }
    }

    // References
    // -> static class immediate_mode_data * immediate_free;
    // -> static int decals_used;
}
// Range: 0x80027870 -> 0x800278FC
void xDecal::emit_context::GetSize(class emit_context * this /* r28 */, class xVec2 & outSize /* r29 */) const {
    // Local variables
    float rand; // f0
}
