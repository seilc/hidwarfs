/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xCamSupport.cpp
*/
static class path_node prev_path[33]; // size: 0x18C, address: 0x807538C0
class config cfg; // size: 0x18, address: 0x80753A50
float tim_speed; // size: 0x4, address: 0x806F234C
class xVec3 tim_vect; // size: 0xC, address: 0x80753A68
float tim_maxBleedOut; // size: 0x4, address: 0x806F2350
float tim_BleedOut; // size: 0x4, address: 0x80753A74
int tim_Adpative; // size: 0x4, address: 0x806F2354
float tim_invert; // size: 0x4, address: 0x806F2358
static int ent_cache_size; // size: 0x4, address: 0x80753A78
float camCollisionBlend; // size: 0x4, address: 0x806F235C
// signature: xCamSupportPath::create(int, int)
// Range: 0x800211B0 -> 0x800213DC
void xCamSupportPath::create(class xCamSupportPath * this /* r29 */) {
    // Local variables
    unsigned int alloc_size; // r30

    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: xCamSupportPath::reset(const xVec3 &)
// Range: 0x800213E0 -> 0x80021440
void xCamSupportPath::reset() {
    // Local variables
    class path_node * p; // r8
    class path_node * endp; // r0
}
// Range: 0x80021440 -> 0x80021450
void xCamSupportPath::refresh_config() {
}
// signature: xCamSupportPath::polar_subdivide(const xCamCoordPolar &, const xCamCoordPolar &)
// Range: 0x80021450 -> 0x80021528
int xCamSupportPath::polar_subdivide(class xCamSupportPath * this /* r31 */) {
    // Local variables
    int vert_used; // r30
    int subdiv_end; // r29
}
// signature: xCamSupportPath::prune(int, int)
// Range: 0x80021530 -> 0x80021794
void xCamSupportPath::prune(class xCamSupportPath * this /* r27 */) {
    // Local variables
    int i0; // r31
    int i1; // r30
    int i2; // r29
    int end_i2; // r28

    {
        // Range: 0x80021590 -> 0x80021744
        // Local variables
        float BCmag; // f0
        float ABmag; // f0
        float dz; // f1
        float dy; // f5
        float dx; // f2
        class path_node * C; // r25
        class path_node * B; // r26
        class path_node * A; // r4
    }
}
// signature: xCamSupportPath::smooth(int, int)
// Range: 0x800217A0 -> 0x80021C20
void xCamSupportPath::smooth() {
    // Local variables
    float * w; // r8
    class path_node * pp; // r9
    class path_node * end_pp; // r7
    int r; // r10
    int i; // r9
    int end_i; // r0
    int path_end; // r10

    {
        // Range: 0x8002185C -> 0x80021BE0
        // Local variables
        class path_node * node; // r31
        float Rz; // f2
        float Ry; // f1
        float Rx; // f0
        int end_j; // r12
        int j; // r11

        {
            // Range: 0x8002185C -> 0x800218E0
            // Local variables
            class path_node * B; // r23
        }
        {
            // Range: 0x80021B90 -> 0x80021BA8
            // Local variables
            class path_node * B; // r8
        }
    }

    // References
    // -> static class path_node prev_path[33];
}
// Range: 0x80021C20 -> 0x800220F0
float xCamSupportPath::traverse(class xCamSupportPath * this /* r26 */, class xVec3 * rloc /* r27 */, float velmag /* f19 */, float dt /* f20 */) {
    // Local variables
    int i; // r30
    int end; // r29

    {
        // Range: 0x80021DC8 -> 0x80022048
        // Local variables
        float t; // f0
        float segdist; // f0
        float dz; // f24
        float dy; // f25
        float dx; // f26
        class path_node * p1; // r28
        class path_node * p0; // r25

        {
            // Range: 0x80021DE0 -> 0x80021FAC
            // Local variables
            float d; // f1
            float next_subdist; // f0
            float ndz; // f21
            float ndy; // f22
            float ndx; // f23
            class path_node * p2; // r3

            {
                // Range: 0x80021DE0 -> 0x80021FAC
                // Local variables
                float damp; // f0
            }
        }
        {
            // Range: 0x80021FDC -> 0x80022044
            // Local variables
            float s; // f3
        }
    }
}
// Range: 0x800220F0 -> 0x8002223C
void xCamSupportPath::refresh_dist(class xCamSupportPath * this /* r30 */) {
    {
        // Range: 0x80022128 -> 0x800221E8
        // Local variables
        int i; // r31

        {
            // Range: 0x80022128 -> 0x800221E8
            // Local variables
            float segdist; // f0
            float dz; // f1
            float dy; // f5
            float dx; // f2
            class xVec3 * v1; // r3
            class xVec3 * v0; // r3
        }
    }
}
// Range: 0x80022240 -> 0x80022840
int xCamSupportPath::polar_subdivide(class path_node * vert /* r28 */, int vert_size /* r29 */, class xCamCoordPolar * start /* r30 */, class xCamCoordPolar * end /* r31 */, float thresh /* r1+0x8 */) {
    // Local variables
    class path_node head; // r1+0x18
    class path_node tail; // r1+0xC
    int vert_used; // r22
    float ABx; // f4
    float ABy; // f5
    float ABz; // f2
    float best_total; // r1+0x30

    {
        // Range: 0x80022464 -> 0x80022794
        // Local variables
        float dtotal; // f1
        class path_node * endv; // r20
        class path_node * v; // r21
        float total; // f31
        float ddist; // f14
        float dphi; // f15
        float dtheta; // f16
        float dz; // f17
        float dy; // f18
        float dx; // f19
        float isubdiv; // f26
        float dist; // f20
        float phi; // f21
        float theta; // f22
        float z; // f23
        float y; // f24
        float x; // f25

        {
            // Range: 0x80022488 -> 0x80022498
            // Local variables
            float ABz; // f1
            float ABy; // f4
            float ABx; // f3
            float cp; // f26
        }
        {
            // Range: 0x80022498 -> 0x80022714
            // Local variables
            float ABz; // f1
            float ABy; // f4
            float ABx; // f3
            class xVec3 * A; // r0
        }
    }
}
// Range: 0x80022840 -> 0x80022B60
void xCamSupportPath::compute_weights(float * w /* r21 */, int n /* r22 */, float s /* f31 */) {
    // Local variables
    float start_efrac; // f24
    float sum; // f7

    {
        // Range: 0x800228CC -> 0x800229F4
        // Local variables
        int i; // r24

        {
            // Range: 0x800228CC -> 0x800229F4
            // Local variables
            float efrac; // f23

            {
                // Range: 0x800228CC -> 0x800228F4
                // Local variables
                int j; // r23

                {
                    // Range: 0x800228CC -> 0x800228F4
                    // Local variables
                    float sw; // f1
                    float ecoeff; // f1
                    float pfe; // f1
                    float scoeff; // f2
                    float pfs; // f1
                    float ispow; // f0
                    float spow; // f0
                }
            }
        }
    }
    {
        // Range: 0x80022A04 -> 0x80022A04
        // Local variables
        int i; // r6
    }

    // References
    // -> int binom_triangle[528];
}
// signature: @unnamed@WAD00_cpp@::arc_sphere_to_plane(const xMat4x3 &, float, float, const xVec3 &, float)
// Range: 0x80022C10 -> 0x80022E84
static float @unnamed@WAD00_cpp@::arc_sphere_to_plane() {
    // Local variables
    class xVec3 N; // r1+0x14
    class xVec3 point_on_plane; // r1+0x8
    float D; // f0
    float D_Rc; // f22
    float Nx2_Ny2; // f31
    float det; // f25
    float cost; // f1
    float t; // f0
}
// signature: xCamSupportLOSBar::reset(const xVec3 &, const xVec3 &)
// Range: 0x80022E90 -> 0x80022ED0
void xCamSupportLOSBar::reset() {
    // References
    // -> class config cfg;
}
// signature: xCamSupportLOSBar::begin_update(const xVec3 &)
// Range: 0x80022ED0 -> 0x80022F68
void xCamSupportLOSBar::begin_update() {
    // Local variables
    float dy; // f0

    // References
    // -> class config cfg;
}
// Range: 0x80022F70 -> 0x80023048
void xCamSupportLOSBar::precollide() {
    // Local variables
    float dx; // f6
    float dz; // f3
    float xzdist2; // f31
    float dylower; // f5
    float dyupper; // f30
    float rlower; // f0
    float rupper; // f0
    float ylower; // f0
    float yupper; // f0
    float ycenter; // f0

    // References
    // -> static int ent_cache_size;
    // -> class config cfg;
}
// Range: 0x80023050 -> 0x8002382C
bool xCamSupportLOSBar::collide_pivot(class xCamSupportLOSBar * this /* r30 */) {
    // Local variables
    class xCapsule to_cap; // r1+0x140
    float to_t; // f31
    float to_dist; // f0
    class xVec3 to_tohit; // r1+0xE0
    class xVec3 to_impact; // r1+0xD4
    class xCapsule from_cap; // r1+0x108
    float from_t; // f0
    float from_dist; // f0
    class xVec3 from_tohit; // r1+0xBC
    class xVec3 cap_offset; // r1+0xB0
    class xVec3 impact; // r1+0xA4
    class xVec3 N; // r1+0x98
    float D; // f30
    float min_from_t; // f0

    {
        // Range: 0x800230F4 -> 0x80023380
        // Local variables
        class xCapsule new_cap; // r1+0x124
        float new_rail_yoffset; // f2

        {
            // Range: 0x800231C4 -> 0x80023380
            // Local variables
            float newy; // f1
            float xzdist; // f0
            float dz; // f2
            float dx; // f1
            float newpitch; // f29
            float oldpitch; // f0
            float vrot; // f29
            float Rc; // f1
            float bar_mag; // f0
            class xMat4x3 vcircle_mat; // r1+0x1D0
            float D; // f29
            class xVec3 N; // r1+0xC8
        }
    }
    {
        // Range: 0x800233D8 -> 0x80023440
        // Local variables
        int tries; // r28
        float end_s; // f29
        float start_s; // r31

        {
            // Range: 0x800233F0 -> 0x80023424
            // Local variables
            class xCapsule cap; // r1+0xEC
            float s; // f31
        }
    }
    {
        // Range: 0x80023500 -> 0x80023624
        // Local variables
        class xMat3x3 rot_mat; // r1+0x160
        float max_rot; // f0
        class xMat4x3 circle_mat; // r1+0x190
        float Rc; // f29
        class xVec3 uCP; // r1+0x74
        class xVec3 CP; // r1+0x80
        class xVec3 P; // r1+0x8C
    }
    {
        // Range: 0x80023628 -> 0x800237E4
        // Local variables
        float det; // f1
        class xVec3 PV; // r1+0x38
        float R2; // f29
        float R; // f0
        class xVec3 rot_axis; // r1+0x44
        class xVec3 BP; // r1+0x50
        class xVec3 AP; // r1+0x5C
        class xVec3 * B; // r28
        class xVec3 * P; // r0
        class xVec3 depen; // r1+0x68
        float depen_mul; // f1

        {
            // Range: 0x80023728 -> 0x800237E4
            // Local variables
            float offset_mag; // f0
            class xVec3 BV; // r1+0x20
            class xVec3 V; // r1+0x2C
        }
    }

    // References
    // -> class config cfg;
}
