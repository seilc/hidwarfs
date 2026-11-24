/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xCamSupport.cpp
*/
static class path_node prev_path[33]; // size: 0x18C, address: 0x80808040
class config cfg; // size: 0x18, address: 0x808081D0
class xVec3 tim_vect; // size: 0xC, address: 0x808081E8
float tim_maxBleedOut; // size: 0x4, address: 0x807A1EF4
float tim_BleedOut; // size: 0x4, address: 0x808081F4
float camCollisionBlend; // size: 0x4, address: 0x807A1EF8
// signature: xCamSupportPath::create(int, int)
// Range: 0x80041170 -> 0x8004138C
void xCamSupportPath::create(class xCamSupportPath * this /* r29 */) {
    // Local variables
    unsigned int alloc_size; // r30

    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: xCamSupportPath::reset(const xVec3 &)
// Range: 0x80041390 -> 0x800413F0
void xCamSupportPath::reset() {
    // Local variables
    class path_node * p; // r8
    class path_node * endp; // r0
}
// Range: 0x800413F0 -> 0x80041400
void xCamSupportPath::refresh_config() {
}
// signature: xCamSupportPath::polar_subdivide(const xCamCoordPolar &, const xCamCoordPolar &)
// Range: 0x80041400 -> 0x800414D8
int xCamSupportPath::polar_subdivide(class xCamSupportPath * this /* r31 */) {
    // Local variables
    int vert_used; // r30
    int subdiv_end; // r29
}
// signature: xCamSupportPath::prune(int, int)
// Range: 0x800414E0 -> 0x800416A4
void xCamSupportPath::prune() {
    // Local variables
    int i0; // r4
    int i1; // r9
    int i2; // r10
    int end_i2; // r5

    {
        // Range: 0x800414FC -> 0x800416A0
        // Local variables
        float BCmag; // f0
        float ABmag; // f0
        float dz; // f2
        float dy; // f9
        float dx; // f3
        class path_node & C; // r11
        class path_node & B; // r6
        class path_node & A; // r6
    }
}
// signature: xCamSupportPath::smooth(int, int)
// Range: 0x800416B0 -> 0x80041B30
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
        // Range: 0x8004176C -> 0x80041AF0
        // Local variables
        class path_node & node; // r31
        float Rz; // f2
        float Ry; // f1
        float Rx; // f0
        int end_j; // r12
        int j; // r11

        {
            // Range: 0x8004176C -> 0x800417F0
            // Local variables
            class path_node & B; // r23
        }
        {
            // Range: 0x80041AA0 -> 0x80041AB8
            // Local variables
            class path_node & B; // r8
        }
    }

    // References
    // -> static class path_node prev_path[33];
}
// signature: xCamSupportPath::traverse(xVec3 &, float, float)
// Range: 0x80041B30 -> 0x80041F18
float xCamSupportPath::traverse() {
    // Local variables
    int i; // r9
    int end; // r10

    {
        // Range: 0x80041C64 -> 0x80041EE0
        // Local variables
        float t; // f0
        float segdist; // f0
        float dz; // f5
        float dy; // f4
        float dx; // f3
        class path_node & p1; // r11
        class path_node & p0; // r6

        {
            // Range: 0x80041C80 -> 0x80041E44
            // Local variables
            float d; // f8
            float next_subdist; // f0
            float ndz; // f27
            float ndy; // f28
            float ndx; // f12
            class path_node & p2; // r6

            {
                // Range: 0x80041C80 -> 0x80041E44
                // Local variables
                float damp; // f3
            }
        }
        {
            // Range: 0x80041E74 -> 0x80041EDC
            // Local variables
            float s; // f4
        }
    }
}
// Range: 0x80041F20 -> 0x80042004
void xCamSupportPath::refresh_dist() {
    {
        // Range: 0x80041F20 -> 0x80041F20
        // Local variables
        int i; // r8

        {
            // Range: 0x80041F20 -> 0x80041F20
            // Local variables
            float segdist; // f0
            float dz; // f2
            float dy; // f8
            float dx; // f3
            class xVec3 & v1; // r4
            class xVec3 & v0; // r4
        }
    }
}
// Range: 0x80042010 -> 0x800425F8
int xCamSupportPath::polar_subdivide(class path_node * vert /* r28 */, int vert_size /* r29 */, class xCamCoordPolar & start /* r30 */, class xCamCoordPolar & end /* r31 */, float thresh /* r1+0x8 */) {
    // Local variables
    class path_node head; // r1+0x18
    class path_node tail; // r1+0xC
    int vert_used; // r22
    float ABx; // f4
    float ABy; // f5
    float ABz; // f2
    float best_total; // r1+0x30

    {
        // Range: 0x8004222C -> 0x8004254C
        // Local variables
        float dtotal; // f1
        class path_node * endv; // r20
        class path_node * v; // r21
        float total; // f15
        float ddist; // f20
        float dphi; // f16
        float dtheta; // f28
        float dz; // f17
        float dy; // f18
        float dx; // f19
        float isubdiv; // f20
        float dist; // f21
        float phi; // f22
        float theta; // f23
        float z; // f24
        float y; // f25
        float x; // f26

        {
            // Range: 0x80042250 -> 0x80042260
            // Local variables
            float ABz; // f1
            float ABy; // f4
            float ABx; // f3
            float cp; // f14
        }
        {
            // Range: 0x80042260 -> 0x800424CC
            // Local variables
            float ABz; // f1
            float ABy; // f4
            float ABx; // f3
            class xVec3 & A; // r0
        }
    }
}
// Range: 0x80042600 -> 0x80042920
void xCamSupportPath::compute_weights(float * w /* r21 */, int n /* r22 */, float s /* f31 */) {
    // Local variables
    float start_efrac; // f24
    float sum; // f7

    {
        // Range: 0x8004268C -> 0x800427B4
        // Local variables
        int i; // r24

        {
            // Range: 0x8004268C -> 0x800427B4
            // Local variables
            float efrac; // f23

            {
                // Range: 0x8004268C -> 0x800426B4
                // Local variables
                int j; // r23

                {
                    // Range: 0x8004268C -> 0x800426B4
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
        // Range: 0x800427C4 -> 0x800427C4
        // Local variables
        int i; // r6
    }

    // References
    // -> int binom_triangle[528];
}
// signature: @unnamed@WAD00_cpp@::arc_sphere_to_plane(const xMat4x3 &, float, float, const xVec3 &, float)
// Range: 0x80042A00 -> 0x80042C4C
static float @unnamed@WAD00_cpp@::arc_sphere_to_plane() {
    // Local variables
    class xVec3 N; // r1+0x14
    class xVec3 point_on_plane; // r1+0x8
    float D; // f0
    float D_Rc; // f5
    float Nx2_Ny2; // f6
    float det; // f7
    float cost; // f1
    float t; // f0
}
// signature: xCamSupportLOSBar::reset(const xVec3 &, const xVec3 &)
// Range: 0x80042D20 -> 0x80042D60
void xCamSupportLOSBar::reset() {
    // References
    // -> class config cfg;
}
// signature: xCamSupportLOSBar::begin_update(const xVec3 &)
// Range: 0x80042D60 -> 0x80042DF8
void xCamSupportLOSBar::begin_update() {
    // Local variables
    float dy; // f0

    // References
    // -> class config cfg;
}
// Range: 0x80042E00 -> 0x80042E90
void xCamSupportLOSBar::precollide() {
    // Local variables
    float dx; // f6
    float dz; // f3
    float xzdist2; // f5
    float dylower; // f3
    float dyupper; // f1
    float rlower; // f0
    float rupper; // f0
    float ylower; // f0
    float yupper; // f0
    float ycenter; // f0

    // References
    // -> class config cfg;
}
// Range: 0x80042E90 -> 0x8004366C
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
        // Range: 0x80042F34 -> 0x800431C0
        // Local variables
        class xCapsule new_cap; // r1+0x124
        float new_rail_yoffset; // f2

        {
            // Range: 0x80043004 -> 0x800431C0
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
        // Range: 0x80043218 -> 0x80043280
        // Local variables
        int tries; // r28
        float end_s; // f29
        float start_s; // r31

        {
            // Range: 0x80043230 -> 0x80043264
            // Local variables
            class xCapsule cap; // r1+0xEC
            float s; // f31
        }
    }
    {
        // Range: 0x80043340 -> 0x80043464
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
        // Range: 0x80043468 -> 0x80043624
        // Local variables
        float det; // f1
        class xVec3 PV; // r1+0x38
        float R2; // f29
        float R; // f0
        class xVec3 rot_axis; // r1+0x44
        class xVec3 BP; // r1+0x50
        class xVec3 AP; // r1+0x5C
        class xVec3 & B; // r28
        class xVec3 & P; // r0
        class xVec3 depen; // r1+0x68
        float depen_mul; // f1

        {
            // Range: 0x80043568 -> 0x80043624
            // Local variables
            float offset_mag; // f0
            class xVec3 BV; // r1+0x20
            class xVec3 V; // r1+0x2C
        }
    }

    // References
    // -> class config cfg;
}
