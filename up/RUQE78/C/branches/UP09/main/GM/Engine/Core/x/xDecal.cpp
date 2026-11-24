/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xDecal.cpp
*/
static class decal_instance * decals; // size: 0x4, address: 0x808082BC
static class decal_instance * * render_list; // size: 0x4, address: 0x808082C0
static class immediate_mode_data * immediate_buffer; // size: 0x4, address: 0x808082C4
static class immediate_mode_data * immediate_free; // size: 0x4, address: 0x808082C8
static int immediate_used; // size: 0x4, address: 0x808082CC
static int order_current_place; // size: 0x4, address: 0x808082D0
static int decals_used; // size: 0x4, address: 0x808082D4
static bool decals_sorted; // size: 0x1, address: 0x808082D8
static int immediate_indices_used; // size: 0x4, address: 0x808082DC
static int immediate_verts_used; // size: 0x4, address: 0x808082E0
static class pool_list owner_groups; // size: 0x20, address: 0x808082E8
static class xDecalEmitter * active_emitters[32]; // size: 0x80, address: 0x80808308
static unsigned int active_emitters_size; // size: 0x4, address: 0x80808388
// signature: @unnamed@WAD00_cpp@::transform_combo_vertices(xVec3 *, const @unnamed@WAD00_cpp@::combo_vertex *, int, const xVec3 *)
// Range: 0x80044A70 -> 0x80044BA4
static void @unnamed@WAD00_cpp@::transform_combo_vertices() {
    // Local variables
    class xVec3 * end_vert; // r7

    {
        // Range: 0x80044A74 -> 0x80044B90
        // Local variables
        class xVec3 & s0; // r8

        {
            // Range: 0x80044A74 -> 0x80044A74
            // Local variables
            float o; // f7
            class xVec3 & s1; // r5
        }
        {
            // Range: 0x80044A74 -> 0x80044B90
            // Local variables
            float o; // f10
            class xVec3 & s2; // r5
            class xVec3 & s1; // r5
        }
    }
}
// signature: @unnamed@WAD00_cpp@::clip_decal(@unnamed@WAD00_cpp@::clip_decal_params &)
// Range: 0x80044BB0 -> 0x800458D8
static void @unnamed@WAD00_cpp@::clip_decal() {
    // Local variables
    class xVec3 * iv; // r8
    class xVec3 * end_iv; // r0
    class xVec3 * ov; // r9
    class xVec3 * end_ov; // r10
    class xVec2 * ouv; // r11
    class xVec3 * onorm; // r12
    class xVec3 * cv; // r31
    unsigned char * outcode; // r30
    float su; // f11
    float sv; // f12
    float du; // f13
    float dv; // f31
    float ux; // f30
    float uy; // f29

    {
        // Range: 0x80044C38 -> 0x80045834
        // Local variables
        class xVec3 c2; // r1+0x38
        class xVec3 c1; // r1+0x44
        class xVec3 v2; // r1+0x50
        class xVec3 v1; // r1+0x5C
        class xVec3 norm; // r1+0x68
        class xVec3 l2; // r1+0x74
        class xVec3 l1; // r1+0x80
        int out_union; // r29

        {
            // Range: 0x80044C90 -> 0x8004582C
            // Local variables
            class xVec3 * tri_norm2; // r18
            class xVec3 * tri_norm1; // r19
            class xVec2 * tri_uv2; // r20
            class xVec2 * tri_uv1; // r21
            class xVec3 * end_tri_vert2; // r29
            class xVec3 * tri_vert2; // r28
            class xVec3 * tri_vert1; // r22
            class xVec3 * end_pnorm; // r28
            class xVec3 * pnorm; // r27
            class xVec2 * end_puv; // r0
            class xVec2 * puv; // r28
            class xVec3 * pv; // r22
            class xVec3 * poly_norm; // r24
            class xVec2 * poly_uv; // r25
            class xVec3 * poly_vert; // r23
            int vsize; // r27
            int cv_offset; // r28

            {
                // Range: 0x80044C90 -> 0x80044C90
                // Local variables
                class xVec3 * d; // r23
                class xVec3 * ends1; // r27
                class xVec3 * s1; // r25
                class xVec3 * s0; // r24
                float _c; // f0

                {
                    // Range: 0x80044C90 -> 0x80044C90
                    // Local variables
                    float s; // f20
                }
                {
                    // Range: 0x80044C90 -> 0x80044C90
                    // Local variables
                    float s; // f20
                }
            }
            {
                // Range: 0x800450C4 -> 0x800450C4
                // Local variables
                class xVec3 * d; // r27
                class xVec3 * ends1; // r23
                class xVec3 * s1; // r25
                class xVec3 * s0; // r24
                float _c; // f0

                {
                    // Range: 0x800450C4 -> 0x800450C4
                    // Local variables
                    float s; // f20
                }
                {
                    // Range: 0x800450C4 -> 0x800450C4
                    // Local variables
                    float s; // f20
                }
            }
            {
                // Range: 0x800451E4 -> 0x800451E4
                // Local variables
                class xVec3 * d; // r27
                class xVec3 * ends1; // r23
                class xVec3 * s1; // r25
                class xVec3 * s0; // r24
                float _c; // f0

                {
                    // Range: 0x800451E4 -> 0x800451E4
                    // Local variables
                    float s; // f20
                }
                {
                    // Range: 0x800451E4 -> 0x800451E4
                    // Local variables
                    float s; // f20
                }
            }
            {
                // Range: 0x80045304 -> 0x80045304
                // Local variables
                class xVec3 * d; // r27
                class xVec3 * ends1; // r23
                class xVec3 * s1; // r25
                class xVec3 * s0; // r24
                float _c; // f0

                {
                    // Range: 0x80045304 -> 0x80045304
                    // Local variables
                    float s; // f20
                }
                {
                    // Range: 0x80045304 -> 0x80045304
                    // Local variables
                    float s; // f20
                }
            }
            {
                // Range: 0x80045424 -> 0x80045424
                // Local variables
                class xVec3 * d; // r27
                class xVec3 * ends1; // r23
                class xVec3 * s1; // r25
                class xVec3 * s0; // r24
                float _c; // f0

                {
                    // Range: 0x80045424 -> 0x80045424
                    // Local variables
                    float s; // f20
                }
                {
                    // Range: 0x80045424 -> 0x80045424
                    // Local variables
                    float s; // f20
                }
            }
            {
                // Range: 0x80045544 -> 0x80045544
                // Local variables
                class xVec3 * d; // r27
                class xVec3 * ends1; // r23
                class xVec3 * s1; // r25
                class xVec3 * s0; // r24
                float _c; // f0

                {
                    // Range: 0x80045544 -> 0x80045544
                    // Local variables
                    float s; // f20
                }
                {
                    // Range: 0x80045544 -> 0x80045544
                    // Local variables
                    float s; // f20
                }
            }
        }
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x800458E0 -> 0x80046CA0
static void @unnamed@WAD00_cpp@::clip_decal_indexed(class clip_decal_indexed_params & arg /* r24 */) {
    // Local variables
    class xVec3 * iv; // r31
    unsigned short * it; // r30
    unsigned short * end_it; // r1+0x34
    unsigned short * ot; // r29
    unsigned short * end_ot; // r1+0x30
    class combo_vertex * ov; // r28
    class combo_vertex * end_ov; // r1+0x2C
    class xVec2 * ouv; // r27
    class clip_vertex * cv; // r26
    unsigned short * used; // r25
    float su; // f23
    float sv; // f22
    float du; // f21
    float dv; // f20
    float ux; // f19
    float uy; // f18

    {
        // Range: 0x80045A44 -> 0x80046BC0
        // Local variables
        int out_union; // r12
        int out2; // r15
        int out1; // r12
        int out0; // r6
        int vi2; // r11
        int vi1; // r10
        int vi0; // r9

        {
            // Range: 0x80045A44 -> 0x80045A44
            // Local variables
            int i; // r0

            {
                // Range: 0x80045A44 -> 0x80045A44
                // Local variables
                unsigned short & stored; // r0
                int vi; // r10

                {
                    // Range: 0x80045A44 -> 0x80045A44
                    // Local variables
                    class xVec3 & vxy; // r10
                }
            }
        }
        {
            // Range: 0x80045A44 -> 0x80046BC0
            // Local variables
            int * end_pvi; // r8
            unsigned short fan_center; // r7
            int * pvi; // r18
            int * poly_vert_index; // r17
            class clip_vertex * end_rcv; // r14
            class clip_vertex * rcv; // r16
            int vsize; // r15
            int cv_offset; // r22

            {
                // Range: 0x80045A44 -> 0x80045A44
                // Local variables
                class clip_vertex * d; // r18
                class clip_vertex * ends1; // r19
                class clip_vertex * s1; // r20
                class clip_vertex * s0; // r21
                float _c; // f2

                {
                    // Range: 0x80045A44 -> 0x80045A44
                    // Local variables
                    float s; // f5
                }
                {
                    // Range: 0x80045A44 -> 0x80045A44
                    // Local variables
                    float s; // f5
                }
            }
            {
                // Range: 0x80045A44 -> 0x80045A44
                // Local variables
                class clip_vertex * d; // r21
                class clip_vertex * ends1; // r20
                class clip_vertex * s1; // r19
                class clip_vertex * s0; // r18
                float _c; // f2

                {
                    // Range: 0x80045A44 -> 0x80045A44
                    // Local variables
                    float s; // f5
                }
                {
                    // Range: 0x80045A44 -> 0x80045A44
                    // Local variables
                    float s; // f5
                }
            }
            {
                // Range: 0x80045A44 -> 0x80045A44
                // Local variables
                class clip_vertex * d; // r21
                class clip_vertex * ends1; // r20
                class clip_vertex * s1; // r19
                class clip_vertex * s0; // r18
                float _c; // f2

                {
                    // Range: 0x80045A44 -> 0x80045A44
                    // Local variables
                    float s; // f5
                }
                {
                    // Range: 0x80045A44 -> 0x80045A44
                    // Local variables
                    float s; // f5
                }
            }
            {
                // Range: 0x80045A44 -> 0x80045A44
                // Local variables
                class clip_vertex * d; // r21
                class clip_vertex * ends1; // r20
                class clip_vertex * s1; // r19
                class clip_vertex * s0; // r18
                float _c; // f2

                {
                    // Range: 0x80045A44 -> 0x80045A44
                    // Local variables
                    float s; // f5
                }
                {
                    // Range: 0x80045A44 -> 0x80045A44
                    // Local variables
                    float s; // f5
                }
            }
            {
                // Range: 0x80045A44 -> 0x80045A44
                // Local variables
                class clip_vertex * d; // r21
                class clip_vertex * ends1; // r20
                class clip_vertex * s1; // r19
                class clip_vertex * s0; // r18
                float _c; // f2

                {
                    // Range: 0x80045A44 -> 0x80045A44
                    // Local variables
                    float s; // f5
                }
                {
                    // Range: 0x80045A44 -> 0x80045A44
                    // Local variables
                    float s; // f5
                }
            }
            {
                // Range: 0x80045A44 -> 0x80045A44
                // Local variables
                class clip_vertex * d; // r17
                class clip_vertex * ends1; // r16
                class clip_vertex * s1; // r15
                class clip_vertex * s0; // r12
                float _c; // f2

                {
                    // Range: 0x80045A44 -> 0x80045A44
                    // Local variables
                    float s; // f5
                }
                {
                    // Range: 0x80045A44 -> 0x80045A44
                    // Local variables
                    float s; // f5
                }
            }
            {
                // Range: 0x80045A44 -> 0x80045A44
                // Local variables
                unsigned short & stored; // r0
                int vi; // r20
            }
        }
    }
}
// signature: @unnamed@WAD00_cpp@::remove_from_owner_group(@unnamed@WAD00_cpp@::decal_instance &)
// Range: 0x80046CA0 -> 0x80046D44
static void @unnamed@WAD00_cpp@::remove_from_owner_group() {
    // Local variables
    class owner_group_type * owner_group; // r5

    // References
    // -> static class pool_list owner_groups;
}
// signature: @unnamed@WAD00_cpp@::add_to_owner_group(@unnamed@WAD00_cpp@::decal_instance &, @unnamed@WAD00_cpp@::owner_group_type *)
// Range: 0x80046D50 -> 0x80046E90
static void @unnamed@WAD00_cpp@::add_to_owner_group() {
    // References
    // -> static class pool_list owner_groups;
}
// Range: 0x80046E90 -> 0x800471D4
static void @unnamed@WAD00_cpp@::refresh_decal(class decal_instance & decal /* r30 */) {
    // Local variables
    float t; // f1

    {
        // Range: 0x80046ECC -> 0x80046FB4
        // Local variables
        int currFrame; // r6
    }
    {
        // Range: 0x80047168 -> 0x800471BC
        // Local variables
        float iy; // f0
        float ix; // f4
    }
}
// signature: @unnamed@WAD00_cpp@::create_decal(const xDecal::emit_context &, const xMat4x3 *, @unnamed@WAD00_cpp@::owner_group_type *)
// Range: 0x800471E0 -> 0x8004762C
static class decal_instance * @unnamed@WAD00_cpp@::create_decal() {
    {
        // Range: 0x800475B8 -> 0x8004760C
        // Local variables
        float aniend; // f0
        float anistart; // f0
    }

    // References
    // -> static unsigned int * next;
    // -> static unsigned int state[624];
    // -> static int left;
    // -> class xColor g_WHITE;
    // -> static int order_current_place;
    // -> static bool decals_sorted;
    // -> static class decal_instance * decals;
    // -> static int decals_used;
}
// signature: @unnamed@WAD00_cpp@::compare_decals(const void *, const void *)
// Range: 0x80047630 -> 0x80047698
static int @unnamed@WAD00_cpp@::compare_decals() {
    // Local variables
    class decal_instance * d1; // r5
    class decal_instance * d2; // r4
}
// signature: @unnamed@WAD00_cpp@::intersect_env_CB::intersect_env_CB(@unnamed@WAD00_cpp@::intersect_env_params &)
// Range: 0x800476A0 -> 0x800479F0
static void * @unnamed@WAD00_cpp@::intersect_env_CB::intersect_env_CB(class intersect_env_CB * this /* r30 */) {
    // References
    // -> class xQuat g_IQ;
}
// Range: 0x80048750 -> 0x80048E14
void xDecal::scene_enter() {
    // References
    // -> static int decals_used;
    // -> static class pool_list owner_groups;
    // -> static class immediate_mode_data * immediate_buffer;
    // -> static class decal_instance * * render_list;
    // -> static class decal_instance * decals;
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x80048E20 -> 0x80048EAC
void xDecal::scene_exit() {
    // Local variables
    class decal_instance * decal; // r30
    class decal_instance * end_decal; // r29

    // References
    // -> static int immediate_used;
    // -> static class immediate_mode_data * immediate_free;
    // -> static class decal_instance * decals;
    // -> static int decals_used;
}
// Range: 0x80048EB0 -> 0x80048F8C
void xDecal::reset() {
    // Local variables
    class decal_instance * decal; // r31
    class decal_instance * end_decal; // r29
    class immediate_mode_data * idata; // r3
    class immediate_mode_data * end_idata; // r4

    // References
    // -> static bool decals_sorted;
    // -> static class pool_list owner_groups;
    // -> static class immediate_mode_data * immediate_buffer;
    // -> static int immediate_used;
    // -> static class immediate_mode_data * immediate_free;
    // -> static class decal_instance * decals;
    // -> static int decals_used;
}
// Range: 0x80048F90 -> 0x800493CC
void xDecal::update(float dt /* f25 */) {
    // Local variables
    float dt_mult; // f26
    class decal_instance * decal; // r28
    class decal_instance * end_decal; // r27

    // References
    // -> static bool decals_sorted;
    // -> static int immediate_used;
    // -> static class immediate_mode_data * immediate_free;
    // -> static class decal_instance * decals;
    // -> static int decals_used;
}
// Range: 0x800493D0 -> 0x800499A4
void xDecal::render_all() {
    // Local variables
    class decal_instance * decal; // r19
    class decal_instance * * it; // r18
    class decal_instance * * end; // r17
    class decal_instance * prev_rendered; // r5

    {
        // Range: 0x80049448 -> 0x80049458
        // Local variables
        int i; // r7
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
// Range: 0x8004A820 -> 0x8004A910
void xDecal::emit(class emit_context & ec /* r27 */, class xMat4x3 & mat /* r28 */, int check_flags /* r29 */) {
    // Local variables
    class xBox box; // r1+0x80
    float rx; // f3
    float ry; // f4

    {
        // Range: 0x8004A898 -> 0x8004A8E4
        // Local variables
        int i; // r29
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: xDecal::emit(const xDecal::emit_context &, const xMat4x3 &, const World::xOGModel *, const xMat4x3 *, bool, xEnt *)
// Range: 0x8004A910 -> 0x8004B554
void xDecal::emit(class emit_context & ec /* r28 */, class xMat4x3 & mat /* r29 */, class xMat4x3 * model_mat /* r30 */, class xEnt * driver_ent /* r31 */) {
    // Local variables
    class StaticBuilder * staticBuilder; // r0
    unsigned short * convertedTris; // r22
    class xVec3 * vert; // r21
    int tri_size; // r20
    class xMat4x3 mmat; // r1+0x78
    class xMat4x3 imat; // r1+0x38
    unsigned char * temp_scratch; // r0
    class clip_decal_indexed_params * arg; // r19

    {
        // Range: 0x8004AA0C -> 0x8004AAEC
        // Local variables
        float * vertBufferStart; // r0
        unsigned short * outPos; // r4

        {
            // Range: 0x8004AA48 -> 0x8004AA64
            // Local variables
            unsigned int idx; // r5

            {
                // Range: 0x8004AA48 -> 0x8004AA64
                // Local variables
                float * v2; // r9
                float * v1; // r10
                class Triangle & tri; // r7
            }
        }
    }
    {
        // Range: 0x8004ADA4 -> 0x8004ADA4
        // Local variables
        float ry; // f4
        float rx; // f3
    }
    {
        // Range: 0x8004B204 -> 0x8004B460
        {
            // Range: 0x8004B204 -> 0x8004B460
            // Local variables
            class decal_instance * decal; // r0

            {
                // Range: 0x8004B304 -> 0x8004B33C
                // Local variables
                int i; // r4
            }
            {
                // Range: 0x8004B40C -> 0x8004B420
                // Local variables
                int i; // r4
            }
        }
    }

    // References
    // -> static int immediate_used;
    // -> static class immediate_mode_data * immediate_free;
    // -> static class pool_list owner_groups;
    // -> static int decals_used;
}
// Range: 0x8004B560 -> 0x8004BC5C
void xDecal::emit_env(class emit_context & ec /* r23 */, class xMat4x3 & mat /* r24 */) {
    // Local variables
    unsigned char * temp_scratch; // r0
    class intersect_env_params * iarg; // r0
    class clip_decal_params * carg; // r27
    class xVec3 * decal_vert; // r26
    unsigned long long * surfaceIDs; // r25
    float rx; // f8
    float ry; // f9

    {
        // Range: 0x8004B8C0 -> 0x8004BBB0
        // Local variables
        unsigned short * index; // r3
        class decal_instance * decal; // r0

        {
            // Range: 0x8004B92C -> 0x8004B938
            // Local variables
            unsigned short i; // r4
        }
        {
            // Range: 0x8004BB5C -> 0x8004BB70
            // Local variables
            int i; // r4
        }
    }

    // References
    // -> static int immediate_used;
    // -> static class immediate_mode_data * immediate_free;
    // -> class zGlobals globals;
    // -> static class pool_list owner_groups;
    // -> static int decals_used;
}
// Range: 0x8004BC60 -> 0x8004BC70
void xDecalInit() {
    // References
    // -> static unsigned int active_emitters_size;
}
// Range: 0x8004BC70 -> 0x8004BCF0
void xDecalUpdate(float dt /* f31 */) {
    {
        // Range: 0x8004BC88 -> 0x8004BC88
        // Local variables
        unsigned long i; // r29
    }

    // References
    // -> static class xDecalEmitter * active_emitters[32];
    // -> static unsigned int active_emitters_size;
}
// signature: xDecalEmitter::update(float)
// Range: 0x8004BCF0 -> 0x8004C8A0
void xDecalEmitter::update(class xDecalEmitter * this /* r19 */) {
    // Local variables
    float dage; // f2
    class xMat4x3 mat; // r1+0x120
    class xColor color; // r1+0x20
    class xVec2 uv1; // r1+0x70
    class xVec2 uv2; // r1+0x68
    int num; // r23
    class iterator end; // r1+0x60
    class iterator it; // r1+0x58

    {
        // Range: 0x8004BDF8 -> 0x8004C7F8
        // Local variables
        class ImmediateContext geom; // r1+0xA8

        {
            // Range: 0x8004C074 -> 0x8004C7F8
            {
                // Range: 0x8004C084 -> 0x8004C08C
                // Local variables
                class xVec3 pts[4]; // r1+0xF0
                float scale; // f1

                {
                    // Range: 0x8004C08C -> 0x8004C08C
                    // Local variables
                    int i; // r0
                }
            }
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// signature: xDecalEmitter::get_render_data(const xDecalEmitter::unit_data &, float, xColor &, xMat4x3 &, xVec2 &, xVec2 &, int)
// Range: 0x8004C8A0 -> 0x8004CCC4
void xDecalEmitter::get_render_data(class xDecalEmitter * this /* r27 */, class unit_data & unit /* r28 */, float scale /* f31 */, class xMat4x3 & mat /* r29 */, class xVec2 & uv0 /* r30 */, class xVec2 & uv1 /* r31 */) {
}
