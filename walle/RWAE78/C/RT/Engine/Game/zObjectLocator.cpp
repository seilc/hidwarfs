/*
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zObjectLocator.cpp
*/
float OBJ_RAND_SCALE; // size: 0x4, address: 0x80704D60
int MAX_OBJ_ACTIVE_ACTIVITIES; // size: 0x4, address: 0x80704D64
class activity_data * obj_activities; // size: 0x4, address: 0x807FBAB0
int obj_activities_used; // size: 0x4, address: 0x807FBAB4
static bool (* setup_volume_table[7])(class activity_data * activity, class object_generator * asset); // size: 0x1C, address: 0x806D2E90
static void (* edge_emit_table[7])(class activity_data * activity, bool edge_only); // size: 0x1C, address: 0x806D2EAC
// signature: setup_attach_fixed(zObjectLocator::activity_data &, const Sext::object_generator &, zObjectGeneratorSpawnPt &)
// Range: 0x80206DD0 -> 0x80206E68
bool setup_attach_fixed() {
}
// signature: update_attach_entity(zObjectLocator::activity_data &, float)
// Range: 0x80206E70 -> 0x80206E8C
void update_attach_entity(class activity_data * activity /* r4 */) {
}
// signature: update_attach_entity_bone(zObjectLocator::activity_data &, float)
// Range: 0x80206E90 -> 0x80206EDC
void update_attach_entity_bone(class activity_data * activity /* r31 */) {
    // Local variables
    class xMat4x3 bone_mat; // r1+0x8
}
// signature: obj_get_offset_point(xVec3 &, ObjectLocator::obj_volume_data &)
// Range: 0x80206EE0 -> 0x80206EF8
void obj_get_offset_point() {
}
// signature: setup_volume_point(zObjectLocator::activity_data &, const Sext::object_generator &)
// Range: 0x80206F00 -> 0x80206F14
bool setup_volume_point() {
}
// signature: edge_emit_point(zObjectLocator::activity_data &, bool)
// Range: 0x80206F20 -> 0x80206F28
void edge_emit_point() {
}
// Range: 0x80206F30 -> 0x802070D8
void obj_get_offset_sphere(class xVec3 * offset /* r27 */, class obj_volume_data * data /* r28 */) {
    // Local variables
    float ang; // f31
    float uz; // f30
    float r; // f0
    float rr; // f4

    // References
    // -> float OBJ_RAND_SCALE;
}
// Range: 0x802070E0 -> 0x8020724C
void obj_get_offset_sphere_edge(class xVec3 * offset /* r27 */, class obj_volume_data * data /* r28 */) {
    // Local variables
    float ang; // f31
    float uz; // f27
    float r; // f27

    // References
    // -> float OBJ_RAND_SCALE;
}
// signature: setup_volume_sphere(zObjectLocator::activity_data &, const Sext::object_generator &)
// Range: 0x80207250 -> 0x80207284
bool setup_volume_sphere() {
    // Local variables
    int edge_only; // r0
}
// signature: edge_emit_sphere(zObjectLocator::activity_data &, bool)
// Range: 0x80207290 -> 0x802072B4
void edge_emit_sphere() {
}
// Range: 0x802072C0 -> 0x8020749C
void obj_get_offset_circle(class xVec3 * offset /* r28 */, class obj_volume_data * data /* r29 */) {
    // Local variables
    float ang; // f31
    float rrx; // f30
    float rry; // f27

    // References
    // -> float OBJ_RAND_SCALE;
}
// Range: 0x802074A0 -> 0x80207568
void obj_get_offset_circle_edge(class xVec3 * offset /* r30 */, class obj_volume_data * data /* r31 */) {
    // Local variables
    float ang; // f31
    float rrx; // f30
    float rry; // f29
}
// Range: 0x80207570 -> 0x80207760
void obj_get_offset_circle_cylinder(class xVec3 * offset /* r29 */, class obj_volume_data * data /* r30 */) {
    // Local variables
    float ang; // f31
    float rrx; // f30
    float rry; // f27
    float z; // f28

    // References
    // -> float OBJ_RAND_SCALE;
}
// signature: edge_emit_circle(zObjectLocator::activity_data &, bool)
// Range: 0x80207760 -> 0x802077B8
void edge_emit_circle() {
}
// signature: setup_volume_circle(zObjectLocator::activity_data &, const Sext::object_generator &)
// Range: 0x802077C0 -> 0x80207894
bool setup_volume_circle() {
    // References
    // -> float OBJ_RAND_SCALE;
}
// Range: 0x802078A0 -> 0x8020791C
void obj_get_offset_line(class xVec3 * offset /* r30 */, class obj_volume_data * data /* r31 */) {
    // Local variables
    float d; // f0

    // References
    // -> float OBJ_RAND_SCALE;
}
// Range: 0x80207920 -> 0x80207C48
void obj_get_offset_capsule(class xVec3 * offset /* r28 */, class obj_volume_data * data /* r29 */) {
    // Local variables
    float ang; // f31

    {
        // Range: 0x802079B0 -> 0x80207AC8
        // Local variables
        float rrz; // f28
        float rry; // f27
        float rrx; // f26
        float rr; // f6
        float r; // f0
        float uz; // f30
    }
    {
        // Range: 0x80207AC8 -> 0x80207BF8
        // Local variables
        float rry; // f26
        float rrx; // f29
        float d; // f30
    }

    // References
    // -> float OBJ_RAND_SCALE;
}
// Range: 0x80207C50 -> 0x80207E44
void obj_get_offset_capsule_edge(class xVec3 * offset /* r27 */, class obj_volume_data * data /* r28 */) {
    // Local variables
    float ang; // f31

    {
        // Range: 0x80207CCC -> 0x80207DA8
        // Local variables
        float rr; // f29
        float r; // f0
        float uz; // f27
    }
    {
        // Range: 0x80207DA8 -> 0x80207E04
        // Local variables
        float rr; // f27
        float d; // f2
    }

    // References
    // -> float OBJ_RAND_SCALE;
}
// Range: 0x80207E50 -> 0x80207FD0
void obj_get_offset_cylinder(class xVec3 * offset /* r27 */, class obj_volume_data * data /* r28 */) {
    // Local variables
    float ang; // f31
    float d; // f27
    float rr; // f29

    // References
    // -> float OBJ_RAND_SCALE;
}
// Range: 0x80207FD0 -> 0x802080C4
void obj_get_offset_cylinder_edge(class xVec3 * offset /* r27 */, class obj_volume_data * data /* r28 */) {
    // Local variables
    float ang; // f31
    float d; // f30
    float rr; // f29

    // References
    // -> float OBJ_RAND_SCALE;
}
// signature: setup_volume_line(zObjectLocator::activity_data &, const Sext::object_generator &)
// Range: 0x802080D0 -> 0x802081E8
bool setup_volume_line(class activity_data * activity /* r31 */) {
    // Local variables
    class LineVolume * line; // r0
    int edge_only; // r7
    class obj_volume_data * ovolume; // r0

    {
        // Range: 0x80208178 -> 0x802081D0
        // Local variables
        float rr; // f3
        float d; // f2
        float r; // f1
    }
}
// signature: edge_emit_line(zObjectLocator::activity_data &, bool)
// Range: 0x802081F0 -> 0x8020826C
void edge_emit_line() {
    // Local variables
    class LineVolume * line; // r0
}
// signature: setup_volume_model(zObjectLocator::activity_data &, const Sext::object_generator &)
// Range: 0x80208270 -> 0x80208304
bool setup_volume_model() {
    // Local variables
    class xEnt * attach_to; // r4

    {
        // Range: 0x80208290 -> 0x802082FC
        // Local variables
        int total_vertices; // reg65535
        int models_size; // r6

        {
            // Range: 0x802082B4 -> 0x802082E4
            {
                // Range: 0x802082C0 -> 0x802082E4
                // Local variables
                int size; // r7
            }
        }
    }
}
// signature: edge_emit_model(zObjectLocator::activity_data &, bool)
// Range: 0x80208310 -> 0x80208318
void edge_emit_model() {
}
// Range: 0x80208320 -> 0x80208410
void obj_get_offset_box(class xVec3 * offset /* r27 */, class obj_volume_data * data /* r28 */) {
    // Local variables
    float x; // f31
    float y; // f30
    float z; // f0

    // References
    // -> float OBJ_RAND_SCALE;
}
// Range: 0x80208410 -> 0x802084C8
void obj_get_offset_box_edge(class xVec3 * offset /* r27 */, class obj_volume_data * data /* r28 */) {
    // Local variables
    float x; // f31
    float z; // f0

    // References
    // -> float OBJ_RAND_SCALE;
}
// Range: 0x802084D0 -> 0x802085EC
bool setup_volume_box(class activity_data * activity /* r30 */, class object_generator * asset /* r31 */) {
    // Local variables
    int edge_only; // r0
}
// signature: edge_emit_box(zObjectLocator::activity_data &, bool)
// Range: 0x802085F0 -> 0x80208614
void edge_emit_box() {
}
// Range: 0x80208620 -> 0x8020868C
void obj_get_offset_curve(class xVec3 * offset /* r30 */, class obj_volume_data * data /* r31 */) {
}
// Range: 0x80208690 -> 0x802086FC
void obj_get_offset_curve_edge(class xVec3 * offset /* r30 */, class obj_volume_data * data /* r31 */) {
}
// Range: 0x80208700 -> 0x802087DC
bool setup_volume_curve(class activity_data * activity /* r30 */, class object_generator * asset /* r31 */) {
    // Local variables
    class Curve * pCurve; // r4
    int edge_only; // r0
    class xBox bound; // r1+0x18
    class xSphere sphere; // r1+0x8
}
// signature: edge_emit_curve(zObjectLocator::activity_data &, bool)
// Range: 0x802087E0 -> 0x80208804
void edge_emit_curve() {
}
// Range: 0x80208810 -> 0x8020887C
void zObjectLocator::scene_enter() {
    // References
    // -> int obj_activities_used;
    // -> class activity_data * obj_activities;
    // -> int MAX_OBJ_ACTIVE_ACTIVITIES;
}
// Range: 0x80208880 -> 0x80208898
void zObjectLocator::scene_exit() {
    // References
    // -> int obj_activities_used;
    // -> class activity_data * obj_activities;
}
// Range: 0x802088A0 -> 0x802088AC
void zObjectLocator::create() {
}
// Range: 0x802088B0 -> 0x802088B4
void zObjectLocator::restart() {
}
// signature: zObjectLocator::activate(const Sext::object_generator &, zObjectGeneratorSpawnPt &, xEnt *)
// Range: 0x802088C0 -> 0x80208EB4
bool zObjectLocator::activate(class zObjectLocator * this /* r31 */) {
    // References
    // -> static bool (* setup_volume_table[7])(class activity_data * activity, class object_generator * asset);
    // -> class xMat4x3 g_I3;
    // -> class activity_data * obj_activities;
    // -> int MAX_OBJ_ACTIVE_ACTIVITIES;
    // -> int obj_activities_used;
}
// Range: 0x80208EC0 -> 0x80209040
void zObjectLocator::deactivate() {
    // References
    // -> class activity_data * obj_activities;
    // -> int obj_activities_used;
}
// signature: zObjectLocator::update(float)
// Range: 0x80209040 -> 0x8020905C
void zObjectLocator::update() {
}
// signature: zObjectLocator::make_locations(void *, int, int, int)
// Range: 0x80209060 -> 0x80209198
void zObjectLocator::make_locations(class zObjectLocator * this /* r24 */, int stride /* r25 */) {
    // Local variables
    class xMat4x3 * amat; // r30
    void (* get_offset)(class xVec3 * offset, class obj_volume_data * data); // r29
    class obj_volume_data * volume; // r28
    unsigned char * p; // r27
    unsigned char * endp; // r26

    {
        // Range: 0x802090A0 -> 0x80209174
        // Local variables
        class xVec3 offset; // r1+0x8
        class xVec3 * loc; // r0
    }
}
// signature: zObjectLocator::set_frame(const xMat4x3 &)
// Range: 0x802091A0 -> 0x802093AC
void zObjectLocator::set_frame() {
}
