/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xDecal.cpp
*/
int bspTypeId; // size: 0x4, address: 0x8075401C
static class decal_instance * decals; // size: 0x4, address: 0x80754020
static class decal_instance * * render_list; // size: 0x4, address: 0x80754024
static class immediate_mode_data * immediate_buffer; // size: 0x4, address: 0x80754028
static class immediate_mode_data * immediate_free; // size: 0x4, address: 0x8075402C
static int immediate_used; // size: 0x4, address: 0x80754030
static int order_current_place; // size: 0x4, address: 0x80754034
static int decals_used; // size: 0x4, address: 0x80754038
static bool decals_sorted; // size: 0x1, address: 0x8075403C
static int immediate_indices_used; // size: 0x4, address: 0x80754040
static int immediate_verts_used; // size: 0x4, address: 0x80754044
static class pool_list owner_groups; // size: 0x20, address: 0x80754048
char * blend_mode_labels[3]; // size: 0xC, address: 0x806F2898
char * animix_labels[6]; // size: 0x18, address: 0x806F28A8
static class xDecalEmitter * active_emitters[32]; // size: 0x80, address: 0x80754068
static unsigned int active_emitters_size; // size: 0x4, address: 0x807540E8
class xVec3 gShadowObjectRadius; // size: 0xC, address: 0x807540EC
// signature: @unnamed@WAD00_cpp@::transform_combo_vertices(xVec3 *, const @unnamed@WAD00_cpp@::combo_vertex *, int, const xVec3 *)
// Range: 0x80025EC0 -> 0x80025FF4
static void @unnamed@WAD00_cpp@::transform_combo_vertices() {
    // Local variables
    class xVec3 * end_vert; // r7

    {
        // Range: 0x80025EC4 -> 0x80025FE0
        // Local variables
        class xVec3 * s0; // r8

        {
            // Range: 0x80025EC4 -> 0x80025EC4
            // Local variables
            float o; // f7
            class xVec3 * s1; // r5
        }
        {
            // Range: 0x80025EC4 -> 0x80025FE0
            // Local variables
            float o; // f10
            class xVec3 * s2; // r5
            class xVec3 * s1; // r5
        }
    }
}
// Range: 0x80026000 -> 0x80026D60
static void @unnamed@WAD00_cpp@::clip_decal(class clip_decal_params * arg /* r18 */) {
    // Local variables
    class xVec3 * iv; // r27
    class xVec3 * end_iv; // r26
    class xVec3 * ov; // r25
    class xVec3 * end_ov; // r24
    class xVec2 * ouv; // r23
    class xVec3 * onorm; // r22
    class xVec3 * cv; // r21
    unsigned char * outcode; // r20
    float su; // f31
    float sv; // f30
    float du; // f29
    float dv; // f28
    float ux; // f27
    float uy; // f26

    {
        // Range: 0x800260A0 -> 0x80026CA4
        // Local variables
        class xVec3 c2; // r1+0x38
        class xVec3 c1; // r1+0x44
        class xVec3 v2; // r1+0x50
        class xVec3 v1; // r1+0x5C
        class xVec3 norm; // r1+0x68
        class xVec3 l2; // r1+0x74
        class xVec3 l1; // r1+0x80
        int out_union; // r19

        {
            // Range: 0x800260E0 -> 0x80026C9C
            // Local variables
            class xVec3 * tri_norm2; // r12
            class xVec3 * tri_norm1; // r11
            class xVec2 * tri_uv2; // r10
            class xVec2 * tri_uv1; // r9
            class xVec3 * end_tri_vert2; // r8
            class xVec3 * tri_vert2; // r7
            class xVec3 * tri_vert1; // r3
            class xVec3 * end_pnorm; // r7
            class xVec3 * pnorm; // r3
            class xVec2 * end_puv; // r0
            class xVec2 * puv; // r8
            class xVec3 * pv; // r7
            class xVec3 * poly_norm; // r6
            class xVec2 * poly_uv; // r5
            class xVec3 * poly_vert; // r4
            int vsize; // r3
            int cv_offset; // r0

            {
                // Range: 0x800260E0 -> 0x800260E0
                // Local variables
                class xVec3 * d; // r7
                class xVec3 * ends1; // r6
                class xVec3 * s1; // r5
                class xVec3 * s0; // r4
                float _c; // f0

                {
                    // Range: 0x800260E0 -> 0x800260E0
                    // Local variables
                    float s; // f3
                }
                {
                    // Range: 0x800260E0 -> 0x800260E0
                    // Local variables
                    float s; // f3
                }
            }
            {
                // Range: 0x80026534 -> 0x80026534
                // Local variables
                class xVec3 * d; // r7
                class xVec3 * ends1; // r3
                class xVec3 * s1; // r6
                class xVec3 * s0; // r5
                float _c; // f0

                {
                    // Range: 0x80026534 -> 0x80026534
                    // Local variables
                    float s; // f3
                }
                {
                    // Range: 0x80026534 -> 0x80026534
                    // Local variables
                    float s; // f3
                }
            }
            {
                // Range: 0x80026654 -> 0x80026654
                // Local variables
                class xVec3 * d; // r7
                class xVec3 * ends1; // r3
                class xVec3 * s1; // r6
                class xVec3 * s0; // r5
                float _c; // f0

                {
                    // Range: 0x80026654 -> 0x80026654
                    // Local variables
                    float s; // f3
                }
                {
                    // Range: 0x80026654 -> 0x80026654
                    // Local variables
                    float s; // f3
                }
            }
            {
                // Range: 0x80026774 -> 0x80026774
                // Local variables
                class xVec3 * d; // r7
                class xVec3 * ends1; // r3
                class xVec3 * s1; // r6
                class xVec3 * s0; // r5
                float _c; // f0

                {
                    // Range: 0x80026774 -> 0x80026774
                    // Local variables
                    float s; // f3
                }
                {
                    // Range: 0x80026774 -> 0x80026774
                    // Local variables
                    float s; // f3
                }
            }
            {
                // Range: 0x80026894 -> 0x80026894
                // Local variables
                class xVec3 * d; // r7
                class xVec3 * ends1; // r3
                class xVec3 * s1; // r6
                class xVec3 * s0; // r5
                float _c; // f0

                {
                    // Range: 0x80026894 -> 0x80026894
                    // Local variables
                    float s; // f3
                }
                {
                    // Range: 0x80026894 -> 0x80026894
                    // Local variables
                    float s; // f3
                }
            }
            {
                // Range: 0x800269B4 -> 0x800269B4
                // Local variables
                class xVec3 * d; // r7
                class xVec3 * ends1; // r3
                class xVec3 * s1; // r6
                class xVec3 * s0; // r5
                float _c; // f0

                {
                    // Range: 0x800269B4 -> 0x800269B4
                    // Local variables
                    float s; // f3
                }
                {
                    // Range: 0x800269B4 -> 0x800269B4
                    // Local variables
                    float s; // f3
                }
            }
        }
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x80026D60 -> 0x80028170
static void @unnamed@WAD00_cpp@::clip_decal_indexed(class clip_decal_indexed_params * arg /* r15 */) {
    // Local variables
    class xVec3 * iv; // r25
    unsigned short * it; // r24
    unsigned short * end_it; // r1+0x40
    unsigned short * ot; // r23
    unsigned short * end_ot; // r1+0x3C
    class combo_vertex * ov; // r22
    class combo_vertex * end_ov; // r1+0x38
    class xVec2 * ouv; // r21
    class clip_vertex * cv; // r20
    unsigned short * used; // r19
    float su; // f25
    float sv; // f24
    float du; // f23
    float dv; // f22
    float ux; // f21
    float uy; // f20

    {
        // Range: 0x80026ECC -> 0x80028088
        // Local variables
        int out_union; // r3
        int out2; // r1+0x2C
        int out1; // r1+0x30
        int out0; // r1+0x34
        int vi2; // r16
        int vi1; // r17
        int vi0; // r18

        {
            // Range: 0x80026ECC -> 0x80026ECC
            // Local variables
            int i; // r0

            {
                // Range: 0x80026ECC -> 0x80026ECC
                // Local variables
                unsigned short * stored; // r0
                int vi; // r6

                {
                    // Range: 0x80026ECC -> 0x80026ECC
                    // Local variables
                    class xVec3 * vxy; // r6
                }
            }
        }
        {
            // Range: 0x80026ECC -> 0x80028088
            // Local variables
            int * end_pvi; // r4
            unsigned short fan_center; // r0
            int * pvi; // r10
            int * poly_vert_index; // r9
            class clip_vertex * end_rcv; // r8
            class clip_vertex * rcv; // r7
            int vsize; // r6
            int cv_offset; // r4

            {
                // Range: 0x80026ECC -> 0x80026ECC
                // Local variables
                class clip_vertex * d; // r8
                class clip_vertex * ends1; // r7
                class clip_vertex * s1; // r6
                class clip_vertex * s0; // r5
                float _c; // f0

                {
                    // Range: 0x80026ECC -> 0x80026ECC
                    // Local variables
                    float s; // f3
                }
                {
                    // Range: 0x80026ECC -> 0x80026ECC
                    // Local variables
                    float s; // f3
                }
            }
            {
                // Range: 0x80026ECC -> 0x80026ECC
                // Local variables
                class clip_vertex * d; // r8
                class clip_vertex * ends1; // r7
                class clip_vertex * s1; // r6
                class clip_vertex * s0; // r5
                float _c; // f0

                {
                    // Range: 0x80026ECC -> 0x80026ECC
                    // Local variables
                    float s; // f3
                }
                {
                    // Range: 0x80026ECC -> 0x80026ECC
                    // Local variables
                    float s; // f3
                }
            }
            {
                // Range: 0x80026ECC -> 0x80026ECC
                // Local variables
                class clip_vertex * d; // r8
                class clip_vertex * ends1; // r7
                class clip_vertex * s1; // r6
                class clip_vertex * s0; // r5
                float _c; // f0

                {
                    // Range: 0x80026ECC -> 0x80026ECC
                    // Local variables
                    float s; // f3
                }
                {
                    // Range: 0x80026ECC -> 0x80026ECC
                    // Local variables
                    float s; // f3
                }
            }
            {
                // Range: 0x80026ECC -> 0x80026ECC
                // Local variables
                class clip_vertex * d; // r8
                class clip_vertex * ends1; // r7
                class clip_vertex * s1; // r6
                class clip_vertex * s0; // r5
                float _c; // f0

                {
                    // Range: 0x80026ECC -> 0x80026ECC
                    // Local variables
                    float s; // f3
                }
                {
                    // Range: 0x80026ECC -> 0x80026ECC
                    // Local variables
                    float s; // f3
                }
            }
            {
                // Range: 0x80026ECC -> 0x80026ECC
                // Local variables
                class clip_vertex * d; // r8
                class clip_vertex * ends1; // r7
                class clip_vertex * s1; // r6
                class clip_vertex * s0; // r5
                float _c; // f0

                {
                    // Range: 0x80026ECC -> 0x80026ECC
                    // Local variables
                    float s; // f3
                }
                {
                    // Range: 0x80026ECC -> 0x80026ECC
                    // Local variables
                    float s; // f3
                }
            }
            {
                // Range: 0x80026ECC -> 0x80026ECC
                // Local variables
                class clip_vertex * d; // r3
                class clip_vertex * ends1; // r8
                class clip_vertex * s1; // r7
                class clip_vertex * s0; // r5
                float _c; // f0

                {
                    // Range: 0x80026ECC -> 0x80026ECC
                    // Local variables
                    float s; // f3
                }
                {
                    // Range: 0x80026ECC -> 0x80026ECC
                    // Local variables
                    float s; // f3
                }
            }
            {
                // Range: 0x80026ECC -> 0x80026ECC
                // Local variables
                unsigned short * stored; // r0
                int vi; // r12
            }
        }
    }
}
// signature: @unnamed@WAD00_cpp@::remove_from_owner_group(@unnamed@WAD00_cpp@::decal_instance &)
// Range: 0x80028170 -> 0x80028214
static void @unnamed@WAD00_cpp@::remove_from_owner_group() {
    // Local variables
    class owner_group_type * owner_group; // r5

    // References
    // -> static class pool_list owner_groups;
}
// signature: @unnamed@WAD00_cpp@::add_to_owner_group(@unnamed@WAD00_cpp@::decal_instance &, @unnamed@WAD00_cpp@::owner_group_type *)
// Range: 0x80028220 -> 0x80028360
static void @unnamed@WAD00_cpp@::add_to_owner_group() {
    // References
    // -> static class pool_list owner_groups;
}
// Range: 0x80028360 -> 0x8002870C
static void @unnamed@WAD00_cpp@::refresh_decal(class decal_instance * decal /* r30 */) {
    // Local variables
    float t; // f1

    {
        // Range: 0x8002839C -> 0x80028484
        // Local variables
        int currFrame; // r6
    }
    {
        // Range: 0x80028638 -> 0x800286F4
        // Local variables
        class _xMat3x2 scalemat; // r1+0x80
        class _xMat3x2 concat; // r1+0x98
        float iy; // f13
        float ix; // f12
    }
}
// signature: @unnamed@WAD00_cpp@::create_decal(const xDecal::emit_context &, const xMat4x3 *, @unnamed@WAD00_cpp@::owner_group_type *)
// Range: 0x80028710 -> 0x80028B5C
static class decal_instance * @unnamed@WAD00_cpp@::create_decal() {
    {
        // Range: 0x80028AE8 -> 0x80028B3C
        // Local variables
        float aniend; // f0
        float anistart; // f0
    }

    // References
    // -> static unsigned int * next;
    // -> static unsigned int state[624];
    // -> static int left;
    // -> class xColor_tag g_WHITE;
    // -> static int order_current_place;
    // -> static bool decals_sorted;
    // -> static class decal_instance * decals;
    // -> static int decals_used;
}
// signature: @unnamed@WAD00_cpp@::compare_decals(const void *, const void *)
// Range: 0x80028B60 -> 0x80028BC8
static int @unnamed@WAD00_cpp@::compare_decals() {
    // Local variables
    class decal_instance * d1; // r5
    class decal_instance * d2; // r4
}
// Range: 0x80028BD0 -> 0x80029820
static void @unnamed@WAD00_cpp@::intersect_env(class intersect_env_params * arg /* r21 */) {
    // Local variables
    class xVec3 localCenter; // r1+0x120
    class xVec3 extents; // r1+0x114
    class xVec3 center; // r1+0x108
    class xQuat quat; // r1+0xF8
    class HavokPrimObj collBox; // r1+0x10
    int num; // r24
    class xBSP * bsp; // r23

    {
        // Range: 0x80028F50 -> 0x80028F50
        // Local variables
        int i; // r22

        {
            // Range: 0x80028F50 -> 0x80028F50
            // Local variables
            class hkArray collRecs; // r1+0xE8
            class hkpRigidBody * body; // r4

            {
                // Range: 0x80028F50 -> 0x80028F50
                // Local variables
                int i; // r27

                {
                    // Range: 0x80028F50 -> 0x80028F50
                    // Local variables
                    int out_intersect; // r0
                    class xVec3 v2; // r1+0xC4
                    class xVec3 v1; // r1+0xD0
                    class xVec3 norm; // r1+0xDC
                    class xVec3 * vtx2; // r0
                    class xVec3 * vtx1; // r0
                    class xVec3 * vtx0; // r0
                    class CollectedTriangle * rec; // r0

                    {
                        // Range: 0x80028F50 -> 0x80028F50
                        // Local variables
                        float c2; // f0
                        float c1; // f0
                    }
                }
            }
        }
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> int bspTypeId;
    // -> class zGlobals globals;
    // -> class xQuat g_IQ;
}
// Range: 0x80029A80 -> 0x8002A1B4
void xDecal::scene_enter() {
    // References
    // -> static int decals_used;
    // -> int bspTypeId;
    // -> static class xAssetTypeIDEntry typeList[248];
    // -> static class pool_list owner_groups;
    // -> static class immediate_mode_data * immediate_buffer;
    // -> static class decal_instance * * render_list;
    // -> static class decal_instance * decals;
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x8002A1C0 -> 0x8002A24C
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
// Range: 0x8002A250 -> 0x8002A32C
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
// signature: xDecal::update_conveyed_decal(@unnamed@WAD00_cpp@::decal_instance *, float)
// Range: 0x8002A330 -> 0x8002A434
void xDecal::update_conveyed_decal() {
    // Local variables
    class zPlatform * driver_plat; // r6
    float platSpeed; // f3

    {
        // Range: 0x8002A338 -> 0x8002A430
        // Local variables
        class xBound * bound; // r0
        float timeRemaining; // f2
    }
}
// Range: 0x8002A440 -> 0x8002A79C
void xDecal::update(float dt /* f30 */) {
    // Local variables
    float dt_mult; // f31
    class decal_instance * decal; // r29
    class decal_instance * end_decal; // r28

    // References
    // -> static bool decals_sorted;
    // -> static int immediate_used;
    // -> static class immediate_mode_data * immediate_free;
    // -> static class decal_instance * decals;
    // -> static int decals_used;
}
// Range: 0x8002A7A0 -> 0x8002AD7C
void xDecal::render_all() {
    // Local variables
    class decal_instance * decal; // r18
    class decal_instance * * it; // r17
    class decal_instance * * end; // r16
    class decal_instance * prev_rendered; // r3

    {
        // Range: 0x8002A818 -> 0x8002A828
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
// Range: 0x8002C0E0 -> 0x8002C1CC
void xDecal::emit(class emit_context * ec /* r27 */, class xMat4x3 * mat /* r28 */, int check_flags /* r29 */) {
    // Local variables
    class xBox box; // r1+0x80
    float rx; // f3
    float ry; // f4

    {
        // Range: 0x8002C158 -> 0x8002C1A0
        // Local variables
        int i; // r29
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: xDecal::emit(const xDecal::emit_context &, const xMat4x3 &, const xModelInstance *, const xMat4x3 *, bool, xEnt *)
// Range: 0x8002C1D0 -> 0x8002CDD4
void xDecal::emit(class emit_context * ec /* r19 */, class xMat4x3 * mat /* r20 */, class xMat4x3 * model_mat /* r21 */, class xEnt * driver_ent /* r22 */) {
    // Local variables
    class StaticBuilder * staticBuilder; // r0
    class xVec3 * vert; // r25
    unsigned short * tempTri; // r3
    int tri_size; // r24
    enum PrimitiveType type; // r0
    class xMat4x3 mmat; // r1+0x58
    class xMat4x3 imat; // r1+0x18
    unsigned char * temp_scratch; // r0
    class clip_decal_indexed_params * arg; // r23
    float rx; // f3
    float ry; // f4

    {
        // Range: 0x8002C32C -> 0x8002C3C4
        // Local variables
        unsigned char flip; // r8
        unsigned short i1; // r7
        unsigned short i0; // r6
        unsigned short * outPos; // r5
        unsigned short * lastIndex; // r4
    }
    {
        // Range: 0x8002CAD4 -> 0x8002CCE0
        // Local variables
        class decal_instance * decal; // r0

        {
            // Range: 0x8002CBD8 -> 0x8002CC14
            // Local variables
            int i; // r4
        }
    }

    // References
    // -> static int immediate_used;
    // -> static class immediate_mode_data * immediate_free;
    // -> static class pool_list owner_groups;
    // -> static int decals_used;
}
// Range: 0x8002CDE0 -> 0x8002D4B4
void xDecal::emit_env(class emit_context * ec /* r23 */, class xMat4x3 * mat /* r24 */) {
    // Local variables
    unsigned char * temp_scratch; // r0
    class intersect_env_params * iarg; // r0
    class clip_decal_params * carg; // r27
    class xVec3 * decal_vert; // r26
    unsigned long long * surfaceIDs; // r25
    float rx; // f8
    float ry; // f9

    {
        // Range: 0x8002D118 -> 0x8002D408
        // Local variables
        unsigned short * index; // r3
        class decal_instance * decal; // r0

        {
            // Range: 0x8002D184 -> 0x8002D190
            // Local variables
            unsigned short i; // r4
        }
        {
            // Range: 0x8002D3B4 -> 0x8002D3C8
            // Local variables
            int i; // r4
        }
    }

    // References
    // -> static int immediate_used;
    // -> static class immediate_mode_data * immediate_free;
    // -> static class pool_list owner_groups;
    // -> static int decals_used;
}
// Range: 0x8002D4C0 -> 0x8002D4D0
void xDecalInit() {
    // References
    // -> static unsigned int active_emitters_size;
}
// Range: 0x8002D4D0 -> 0x8002D550
void xDecalUpdate(float dt /* f31 */) {
    {
        // Range: 0x8002D4E8 -> 0x8002D4E8
        // Local variables
        unsigned long i; // r29
    }

    // References
    // -> static class xDecalEmitter * active_emitters[32];
    // -> static unsigned int active_emitters_size;
}
// signature: xDecalEmitter::update(float)
// Range: 0x8002D550 -> 0x8002E02C
void xDecalEmitter::update(class xDecalEmitter * this /* r20 */) {
    // Local variables
    float dage; // f2
    class xMat4x3 mat; // r1+0xF0
    class xColor_tag color; // r1+0x24
    class xVec2 uv1; // r1+0x70
    class xVec2 uv2; // r1+0x68
    int min_alpha; // r21
    int num; // r4
    class iterator end; // r1+0x60
    class iterator it; // r1+0x58

    {
        // Range: 0x8002D64C -> 0x8002DF8C
        // Local variables
        class ImmediateContext geom; // r1+0xA0

        {
            // Range: 0x8002D7DC -> 0x8002DF8C
            {
                // Range: 0x8002D7E4 -> 0x8002D7FC
                // Local variables
                class xVec3 pts[4]; // r1+0xC0
                float scale; // f1

                {
                    // Range: 0x8002D7FC -> 0x8002D7FC
                    // Local variables
                    int i; // r0
                }
            }
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// signature: xDecalEmitter::get_render_data(const xDecalEmitter::unit_data &, float, xColor_tag &, xMat4x3 &, xVec2 &, xVec2 &, int)
// Range: 0x8002E030 -> 0x8002E454
void xDecalEmitter::get_render_data(class xDecalEmitter * this /* r27 */, class unit_data * unit /* r28 */, float scale /* f31 */, class xMat4x3 * mat /* r29 */, class xVec2 * uv0 /* r30 */, class xVec2 * uv1 /* r31 */) {
}
