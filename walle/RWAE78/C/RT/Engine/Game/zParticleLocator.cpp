/*
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zParticleLocator.cpp
*/
static float PL_RAND_SCALE; // size: 0x4, address: 0x80704D68
static int activities_used; // size: 0x4, address: 0x807FBAB8
class activity_data * activities; // size: 0x4, address: 0x807FBABC
static bool (* setup_volume_table[7])(class activity_data * activity, class particle_generator * asset); // size: 0x1C, address: 0x806D2EC8
static void (* edge_emit_table[7])(class activity_data * activity, bool edge_only); // size: 0x1C, address: 0x806D2EE4
// signature: setup_attach_fixed(zParticleLocator::activity_data &, const Sext::particle_generator &, zParticleGeneratorSpawnPt &)
// Range: 0x802093B0 -> 0x80209448
bool setup_attach_fixed() {
}
// signature: update_attach_entity(zParticleLocator::activity_data &, float)
// Range: 0x80209450 -> 0x8020946C
void update_attach_entity(class activity_data * activity /* r4 */) {
}
// signature: update_attach_entity_bone(zParticleLocator::activity_data &, float)
// Range: 0x80209470 -> 0x802094BC
void update_attach_entity_bone(class activity_data * activity /* r31 */) {
    // Local variables
    class xMat4x3 bone_mat; // r1+0x8
}
// signature: get_offset_point(xVec3 &, volume_data &)
// Range: 0x802094C0 -> 0x802094D8
void get_offset_point() {
}
// signature: setup_volume_point(zParticleLocator::activity_data &, const Sext::particle_generator &)
// Range: 0x802094E0 -> 0x802094F4
bool setup_volume_point() {
}
// signature: edge_emit_point(zParticleLocator::activity_data &, bool)
// Range: 0x80209500 -> 0x80209508
void edge_emit_point() {
}
// Range: 0x80209510 -> 0x802096B8
void get_offset_sphere(class xVec3 * offset /* r27 */, class volume_data * data /* r28 */) {
    // Local variables
    float ang; // f31
    float uz; // f30
    float r; // f0
    float rr; // f4

    // References
    // -> static float PL_RAND_SCALE;
}
// Range: 0x802096C0 -> 0x8020982C
void get_offset_sphere_edge(class xVec3 * offset /* r27 */, class volume_data * data /* r28 */) {
    // Local variables
    float ang; // f31
    float uz; // f27
    float r; // f27

    // References
    // -> static float PL_RAND_SCALE;
}
// signature: setup_volume_sphere(zParticleLocator::activity_data &, const Sext::particle_generator &)
// Range: 0x80209830 -> 0x80209854
bool setup_volume_sphere() {
}
// signature: edge_emit_sphere(zParticleLocator::activity_data &, bool)
// Range: 0x80209860 -> 0x80209884
void edge_emit_sphere() {
}
// Range: 0x80209890 -> 0x80209A6C
void get_offset_circle(class xVec3 * offset /* r28 */, class volume_data * data /* r29 */) {
    // Local variables
    float ang; // f31
    float rrx; // f30
    float rry; // f27

    // References
    // -> static float PL_RAND_SCALE;
}
// Range: 0x80209A70 -> 0x80209B38
void get_offset_circle_edge(class xVec3 * offset /* r30 */, class volume_data * data /* r31 */) {
    // Local variables
    float ang; // f31
    float rrx; // f30
    float rry; // f29
}
// Range: 0x80209B40 -> 0x80209D30
void get_offset_circle_cylinder(class xVec3 * offset /* r29 */, class volume_data * data /* r30 */) {
    // Local variables
    float ang; // f31
    float rrx; // f30
    float rry; // f27
    float z; // f28

    // References
    // -> static float PL_RAND_SCALE;
}
// signature: edge_emit_circle(zParticleLocator::activity_data &, bool)
// Range: 0x80209D30 -> 0x80209D88
void edge_emit_circle() {
}
// signature: setup_volume_circle(zParticleLocator::activity_data &, const Sext::particle_generator &)
// Range: 0x80209D90 -> 0x80209E40
bool setup_volume_circle() {
    // References
    // -> static float PL_RAND_SCALE;
}
// Range: 0x80209E40 -> 0x80209EBC
void get_offset_line(class xVec3 * offset /* r30 */, class volume_data * data /* r31 */) {
    // Local variables
    float d; // f0

    // References
    // -> static float PL_RAND_SCALE;
}
// Range: 0x80209EC0 -> 0x8020A1E8
void get_offset_capsule(class xVec3 * offset /* r28 */, class volume_data * data /* r29 */) {
    // Local variables
    float ang; // f31

    {
        // Range: 0x80209F50 -> 0x8020A068
        // Local variables
        float rrz; // f28
        float rry; // f27
        float rrx; // f26
        float rr; // f6
        float r; // f0
        float uz; // f30
    }
    {
        // Range: 0x8020A068 -> 0x8020A198
        // Local variables
        float rry; // f26
        float rrx; // f29
        float d; // f30
    }

    // References
    // -> static float PL_RAND_SCALE;
}
// Range: 0x8020A1F0 -> 0x8020A3E4
void get_offset_capsule_edge(class xVec3 * offset /* r27 */, class volume_data * data /* r28 */) {
    // Local variables
    float ang; // f31

    {
        // Range: 0x8020A26C -> 0x8020A348
        // Local variables
        float rr; // f29
        float r; // f0
        float uz; // f27
    }
    {
        // Range: 0x8020A348 -> 0x8020A3A4
        // Local variables
        float rr; // f27
        float d; // f2
    }

    // References
    // -> static float PL_RAND_SCALE;
}
// Range: 0x8020A3F0 -> 0x8020A570
void get_offset_cylinder(class xVec3 * offset /* r27 */, class volume_data * data /* r28 */) {
    // Local variables
    float ang; // f31
    float d; // f27
    float rr; // f29

    // References
    // -> static float PL_RAND_SCALE;
}
// Range: 0x8020A570 -> 0x8020A664
void get_offset_cylinder_edge(class xVec3 * offset /* r27 */, class volume_data * data /* r28 */) {
    // Local variables
    float ang; // f31
    float d; // f30
    float rr; // f29

    // References
    // -> static float PL_RAND_SCALE;
}
// signature: setup_volume_line(zParticleLocator::activity_data &, const Sext::particle_generator &)
// Range: 0x8020A670 -> 0x8020A74C
bool setup_volume_line(class activity_data * activity /* r31 */) {
    // Local variables
    class LineVolume * line; // r0
    class volume_data * ovolume; // r0

    {
        // Range: 0x8020A704 -> 0x8020A734
        // Local variables
        float rr; // f2
        float d; // f0
        float r; // f0
    }
}
// signature: edge_emit_line(zParticleLocator::activity_data &, bool)
// Range: 0x8020A750 -> 0x8020A7CC
void edge_emit_line() {
    // Local variables
    class LineVolume * line; // r0
}
// signature: @unnamed@WAD04_cpp@::BoxShapeGetVertex(hkpBoxShape *, int, xVec3 &)
// Range: 0x8020A7D0 -> 0x8020A90C
static void @unnamed@WAD04_cpp@::BoxShapeGetVertex() {
    // Local variables
    class hkVector4 halfExtents; // r1+0x30
    class hkVector4 minPt; // r1+0x20
    class hkVector4 maxPt; // r1+0x10
    class hkVector4 wverts[8]; // r1+0x40

    {
        // Range: 0x8020A848 -> 0x8020A86C
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x8020A874 -> 0x8020A8A4
        // Local variables
        int i; // r6
    }
}
// Range: 0x8020A910 -> 0x8020AA44
void get_offset_model_vert(class xVec3 * offset /* r31 */, class volume_data * data /* r30 */) {
    // Local variables
    int vert_index; // r30
    class ModelInstanceAsset * * models; // r5
    int * vertices; // r6
    class ModelPrototypeEntity * modelProto; // r0

    {
        // Range: 0x8020A994 -> 0x8020A9D0
        // Local variables
        float * vert; // r3
    }
    {
        // Range: 0x8020A9D0 -> 0x8020A9F8
        // Local variables
        class xVec3 vec; // r1+0x14
    }
    {
        // Range: 0x8020A9F8 -> 0x8020AA2C
        {
            // Range: 0x8020AA08 -> 0x8020AA2C
            // Local variables
            class xVec3 vec; // r1+0x8
        }
    }
}
// signature: setup_volume_model(zParticleLocator::activity_data &, const Sext::particle_generator &)
// Range: 0x8020AA50 -> 0x8020AB5C
bool setup_volume_model(class activity_data * activity /* r28 */) {
    {
        // Range: 0x8020AA68 -> 0x8020AB34
        // Local variables
        int total_vertices; // reg65535
        int models_size; // r31

        {
            // Range: 0x8020AA70 -> 0x8020AB20
            // Local variables
            class ModelPrototypeEntity * modelProto; // r0
            class ModelInstanceAsset * m; // r30

            {
                // Range: 0x8020AAC8 -> 0x8020AAF0
                // Local variables
                int size; // reg65535
            }
            {
                // Range: 0x8020AAF0 -> 0x8020AB0C
                // Local variables
                int size; // r29
            }
        }
    }
}
// signature: edge_emit_model(zParticleLocator::activity_data &, bool)
// Range: 0x8020AB60 -> 0x8020AB68
void edge_emit_model() {
}
// Range: 0x8020AB70 -> 0x8020AC60
void get_offset_box(class xVec3 * offset /* r27 */, class volume_data * data /* r28 */) {
    // Local variables
    float x; // f31
    float y; // f30
    float z; // f0

    // References
    // -> static float PL_RAND_SCALE;
}
// Range: 0x8020AC60 -> 0x8020AD18
void get_offset_box_edge(class xVec3 * offset /* r27 */, class volume_data * data /* r28 */) {
    // Local variables
    float x; // f31
    float z; // f0

    // References
    // -> static float PL_RAND_SCALE;
}
// signature: setup_volume_box(zParticleLocator::activity_data &, const Sext::particle_generator &)
// Range: 0x8020AD20 -> 0x8020AE20
bool setup_volume_box(class activity_data * activity /* r31 */) {
}
// signature: edge_emit_box(zParticleLocator::activity_data &, bool)
// Range: 0x8020AE20 -> 0x8020AE44
void edge_emit_box() {
}
// Range: 0x8020AE50 -> 0x8020AEBC
void get_offset_curve(class xVec3 * offset /* r30 */, class volume_data * data /* r31 */) {
}
// Range: 0x8020AEC0 -> 0x8020AF2C
void get_offset_curve_edge(class xVec3 * offset /* r30 */, class volume_data * data /* r31 */) {
}
// Range: 0x8020AF30 -> 0x8020AFFC
bool setup_volume_curve(class activity_data * activity /* r30 */, class particle_generator * asset /* r31 */) {
    // Local variables
    class Curve * pCurve; // r4
    class xBox bound; // r1+0x18
    class xSphere sphere; // r1+0x8
}
// signature: edge_emit_curve(zParticleLocator::activity_data &, bool)
// Range: 0x8020B000 -> 0x8020B024
void edge_emit_curve() {
}
// Range: 0x8020B030 -> 0x8020B088
void zParticleLocator::scene_enter() {
    // References
    // -> static int activities_used;
    // -> class activity_data * activities;
}
// Range: 0x8020B090 -> 0x8020B0A8
void zParticleLocator::scene_exit() {
    // References
    // -> static int activities_used;
    // -> class activity_data * activities;
}
// Range: 0x8020B0B0 -> 0x8020B0BC
void zParticleLocator::create() {
}
// Range: 0x8020B0C0 -> 0x8020B0C4
void zParticleLocator::restart() {
}
// signature: zParticleLocator::activate(const Sext::particle_generator &, zParticleGeneratorSpawnPt &, xEnt *)
// Range: 0x8020B0D0 -> 0x8020B464
bool zParticleLocator::activate(class zParticleLocator * this /* r31 */) {
    // References
    // -> static bool (* setup_volume_table[7])(class activity_data * activity, class particle_generator * asset);
    // -> class activity_data * activities;
    // -> static int activities_used;
}
// Range: 0x8020B470 -> 0x8020B5F0
void zParticleLocator::deactivate() {
    // References
    // -> class activity_data * activities;
    // -> static int activities_used;
}
// signature: zParticleLocator::update(float)
// Range: 0x8020B5F0 -> 0x8020B60C
void zParticleLocator::update() {
}
// signature: zParticleLocator::make_locations(void *, int, int, int)
// Range: 0x8020B610 -> 0x8020B740
void zParticleLocator::make_locations(class zParticleLocator * this /* r24 */, int stride /* r25 */) {
    // Local variables
    class xMat4x3 * amat; // r30
    void (* get_offset)(class xVec3 * offset, class volume_data * data); // r29
    class volume_data * volume; // r28
    unsigned char * p; // r27
    unsigned char * endp; // r26

    {
        // Range: 0x8020B650 -> 0x8020B71C
        // Local variables
        class xVec3 offset; // r1+0x8
        class xVec3 * loc; // r0
    }
}
// signature: zParticleLocator::set_frame(const xMat4x3 &)
// Range: 0x8020B740 -> 0x8020B94C
void zParticleLocator::set_frame() {
}
