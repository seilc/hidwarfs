/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zFXObjectLocator.cpp
*/
class activity_data * obj_activities; // size: 0x4, address: 0x80734B80
int obj_activities_used; // size: 0x4, address: 0x80734B84
bool (* setup_volume_table[7])(class activity_data & activity, class FXObjectSystem & asset); // size: 0x1C, address: 0x8068BB98
// Range: 0x800C16F0 -> 0x800C1714
class activity_data * FX::Objects::alloc_activity_object() {
    // Local variables
    class activity_data * activity; // r0

    // References
    // -> class activity_data * obj_activities;
    // -> int obj_activities_used;
}
// signature: FX::Objects::free_activity(FX::Objects::zFXObjectLocator::activity_data *)
// Range: 0x800C1720 -> 0x800C1790
void FX::Objects::free_activity() {
    // Local variables
    class activity_data * tail_activity; // r7

    // References
    // -> class activity_data * obj_activities;
    // -> int obj_activities_used;
}
// signature: FX::Objects::Point::setup_volume(FX::Objects::zFXObjectLocator::activity_data &, const Sext::FXObjectSystem &)
// Range: 0x800C1790 -> 0x800C17A4
bool FX::Objects::Point::setup_volume() {
}
// Range: 0x800C17B0 -> 0x800C1908
void FX::Objects::Sphere::obj_get_offset(class xVec3 & offset /* r27 */, class emit_volume_data & data /* r28 */) {
    // Local variables
    float ang; // f28
    float uz; // f27
    float r; // f0
    float rr; // f4
}
// Range: 0x800C1910 -> 0x800C1A28
void FX::Objects::Sphere::obj_get_offset_edge(class xVec3 & offset /* r27 */, class emit_volume_data & data /* r28 */) {
    // Local variables
    float ang; // f30
    float uz; // f29
    float r; // f28
}
// signature: FX::Objects::Sphere::setup_volume(FX::Objects::zFXObjectLocator::activity_data &, const Sext::FXObjectSystem &)
// Range: 0x800C1A30 -> 0x800C1A60
bool FX::Objects::Sphere::setup_volume() {
}
// Range: 0x800C1A60 -> 0x800C1B98
void FX::Objects::Circle::obj_get_offset(class xVec3 & offset /* r27 */, class emit_volume_data & data /* r28 */) {
    // Local variables
    float ang; // f30
    float rrx; // f29
    float rry; // f28
}
// Range: 0x800C1BA0 -> 0x800C1C74
void FX::Objects::Circle::obj_get_offset_edge(class xVec3 & offset /* r30 */, class emit_volume_data & data /* r31 */) {
    // Local variables
    float ang; // f30
    float rrx; // f29
    float rry; // f28
}
// Range: 0x800C1C80 -> 0x800C1DE4
void FX::Objects::Circle::obj_get_offset_cylinder(class xVec3 & offset /* r28 */, class emit_volume_data & data /* r29 */) {
    // Local variables
    float ang; // f31
    float rrx; // f29
    float rry; // f28
    float z; // f27
}
// signature: FX::Objects::Circle::setup_volume(FX::Objects::zFXObjectLocator::activity_data &, const Sext::FXObjectSystem &)
// Range: 0x800C1DF0 -> 0x800C1EB8
bool FX::Objects::Circle::setup_volume() {
}
// Range: 0x800C1EC0 -> 0x800C1F3C
void FX::Objects::Line::obj_get_offset(class xVec3 & offset /* r30 */, class emit_volume_data & data /* r31 */) {
    // Local variables
    float d; // f0
}
// Range: 0x800C1F40 -> 0x800C21AC
void FX::Objects::Line::obj_get_offset_capsule(class xVec3 & offset /* r28 */, class emit_volume_data & data /* r29 */) {
    // Local variables
    float ang; // f31

    {
        // Range: 0x800C1FC4 -> 0x800C20A8
        // Local variables
        float rrz; // f25
        float rry; // f26
        float rrx; // f27
        float rr; // f6
        float r; // f0
        float uz; // f30
    }
    {
        // Range: 0x800C20A8 -> 0x800C215C
        // Local variables
        float rry; // f26
        float rrx; // f25
        float d; // f30
    }
}
// Range: 0x800C21B0 -> 0x800C2360
void FX::Objects::Line::obj_get_offset_capsule_edge(class xVec3 & offset /* r27 */, class emit_volume_data & data /* r28 */) {
    // Local variables
    float ang; // f29

    {
        // Range: 0x800C2220 -> 0x800C22C4
        // Local variables
        float rr; // f27
        float r; // f0
        float uz; // f28
    }
    {
        // Range: 0x800C22C4 -> 0x800C2320
        // Local variables
        float rr; // f28
        float d; // f27
    }
}
// Range: 0x800C2360 -> 0x800C248C
void FX::Objects::Line::obj_get_offset_cylinder(class xVec3 & offset /* r27 */, class emit_volume_data & data /* r28 */) {
    // Local variables
    float ang; // f30
    float d; // f29
    float rr; // f28
}
// Range: 0x800C2490 -> 0x800C258C
void FX::Objects::Line::obj_get_offset_cylinder_edge(class xVec3 & offset /* r28 */, class emit_volume_data & data /* r29 */) {
    // Local variables
    float ang; // f30
    float d; // f29
    float rr; // f28
}
// signature: FX::Objects::Line::setup_volume(FX::Objects::zFXObjectLocator::activity_data &, const Sext::FXObjectSystem &)
// Range: 0x800C2590 -> 0x800C26B0
bool FX::Objects::Line::setup_volume(class activity_data & activity /* r31 */) {
    // Local variables
    class emit_volume_data & ovolume; // r0

    {
        // Range: 0x800C262C -> 0x800C2698
        // Local variables
        float rr; // f3
        float d; // f2
        float r; // f1
    }
}
// signature: FX::Objects::Box::GetVertex(xVec3 &, float, float, float, int)
// Range: 0x800C26B0 -> 0x800C2780
void FX::Objects::Box::GetVertex() {
}
// Range: 0x800C2780 -> 0x800C2870
void FX::Objects::Box::get_offset(class xVec3 & offset /* r27 */, class emit_volume_data & data /* r28 */) {
    // Local variables
    float x; // f31
    float y; // f30
    float z; // f0
}
// Range: 0x800C2870 -> 0x800C28C8
void FX::Objects::Box::get_offset_edge(class xVec3 & offset /* r30 */, class emit_volume_data & data /* r31 */) {
}
// Range: 0x800C28D0 -> 0x800C2988
bool FX::Objects::Box::setup_volume(class activity_data & activity /* r30 */, class FXObjectSystem & asset /* r31 */) {
}
// Range: 0x800C2990 -> 0x800C2A14
void FX::Objects::Model::random_vert(int & outModelIndex /* r28 */, int & outVertIdx /* r29 */, unsigned int inTotalVertices /* r30 */, int * verticesPerModel /* r31 */) {
}
// Range: 0x800C2A20 -> 0x800C2B20
void FX::Objects::Model::random_point_on_triangle(class xVec3 & outLoc /* r25 */, class xVec3 & a /* r26 */, class xVec3 & b /* r27 */, class xVec3 & c /* r28 */) {
    // Local variables
    float total; // f0
    float percent; // f0
    float u; // f9
    float v; // f10
}
// Range: 0x800C2B20 -> 0x800C2C64
void FX::Objects::Model::get_offset_surface_impl(int & outModelIndex /* r29 */, class xVec3 & offset /* r30 */, class emit_volume_data & data /* r31 */) {
    // Local variables
    int idx; // r1+0x10
    class ModelPrototypeEntity * modelProto; // r0
    class hkpShape * shape; // r0

    {
        // Range: 0x800C2BA8 -> 0x800C2BF8
        // Local variables
        int stride; // r9
    }
    {
        // Range: 0x800C2BF8 -> 0x800C2C24
        // Local variables
        class hkVector4 halfExtents; // r1+0x30
    }
    {
        // Range: 0x800C2C24 -> 0x800C2C48
        // Local variables
        class hkVector4 halfExtents; // r1+0x20
    }
}
// Range: 0x800C2C70 -> 0x800C2DA0
void FX::Objects::Model::get_offset_vert_impl(int & outModelIndex /* r29 */, class xVec3 & offset /* r30 */, class emit_volume_data & data /* r31 */) {
    // Local variables
    int vert_index; // r1+0x10
    class ModelPrototypeEntity * modelProto; // r0
    class hkpShape * shape; // r0

    {
        // Range: 0x800C2CF8 -> 0x800C2D34
        // Local variables
        float * vert; // r4
    }
    {
        // Range: 0x800C2D34 -> 0x800C2D60
        // Local variables
        class hkVector4 halfExtents; // r1+0x30
    }
    {
        // Range: 0x800C2D60 -> 0x800C2D84
        // Local variables
        class hkVector4 halfExtents; // r1+0x20
    }
}
// signature: FX::Objects::Model::get_offset_vert(xVec3 &, FX::Objects::emit_volume_data &)
// Range: 0x800C2DA0 -> 0x800C2DCC
void FX::Objects::Model::get_offset_vert() {
    // Local variables
    int modelIndex; // r1+0x8
}
// signature: FX::Objects::Model::get_offset_surface(xVec3 &, FX::Objects::emit_volume_data &)
// Range: 0x800C2DD0 -> 0x800C2DFC
void FX::Objects::Model::get_offset_surface() {
    // Local variables
    int modelIndex; // r1+0x8
}
// Range: 0x800C2E00 -> 0x800C2EA8
void FX::Objects::Model::get_offset_vert_vol(class xVec3 & offset /* r30 */, class emit_volume_data & data /* r31 */) {
    // Local variables
    int modelIndex; // r1+0x8
    class xVec3 diff; // r1+0xC
    float scaleVal; // f1
}
// Range: 0x800C2EB0 -> 0x800C2F58
void FX::Objects::Model::get_offset_surface_vol(class xVec3 & offset /* r30 */, class emit_volume_data & data /* r31 */) {
    // Local variables
    int modelIndex; // r1+0x8
    class xVec3 diff; // r1+0xC
    float scaleVal; // f1
}
// signature: FX::Objects::Model::setup_volume(FX::Objects::zFXObjectLocator::activity_data &, const Sext::FXObjectSystem &)
// Range: 0x800C2F60 -> 0x800C31A0
bool FX::Objects::Model::setup_volume(class activity_data & activity /* r31 */) {
    // Local variables
    int models_size; // r29
    int total_vertices; // r28
    int total_surfaces; // r27

    {
        // Range: 0x800C2FD4 -> 0x800C3164
        // Local variables
        int surfaces; // r24
        int size; // r25
        class hkpShape * shape; // r0
        class ModelPrototypeEntity * modelProto; // r0
        class ModelInstanceAsset & m; // r26

        {
            // Range: 0x800C3030 -> 0x800C30DC
            // Local variables
            float * vert; // r3
            class xVec3 vertTotal; // r1+0x30

            {
                // Range: 0x800C3068 -> 0x800C30A0
                // Local variables
                int idx; // r0
            }
        }
        {
            // Range: 0x800C30DC -> 0x800C3114
            // Local variables
            class hkVector4 centre; // r1+0x20
        }
        {
            // Range: 0x800C3114 -> 0x800C3144
            // Local variables
            class hkVector4 centre; // r1+0x10
        }
    }
}
// Range: 0x800C31A0 -> 0x800C321C
void FX::Objects::Curve::obj_get_offset(class xVec3 & offset /* r30 */, class emit_volume_data & data /* r31 */) {
}
// signature: FX::Objects::Curve::setup_volume(FX::Objects::zFXObjectLocator::activity_data &, const Sext::FXObjectSystem &)
// Range: 0x800C3220 -> 0x800C329C
bool FX::Objects::Curve::setup_volume(class activity_data & activity /* r31 */) {
    // Local variables
    class xBox bound; // r1+0x18
    class xSphere sphere; // r1+0x8
}
// Range: 0x800C32A0 -> 0x800C3360
bool FX::Objects::zFXObjectLocator::activate(class zFXObjectLocator * this /* r30 */, class FXObjectSystem & asset /* r31 */) {
    // References
    // -> bool (* setup_volume_table[7])(class activity_data & activity, class FXObjectSystem & asset);
    // -> int obj_activities_used;
}
// Range: 0x800C3360 -> 0x800C33A4
void FX::Objects::zFXObjectLocator::deactivate(class zFXObjectLocator * this /* r31 */) {
}
// signature: FX::Objects::zFXObjectLocator::make_locations(void *, int, int, int, xMat4x3 *, const xVec3 *)
// Range: 0x800C33B0 -> 0x800C3474
void FX::Objects::zFXObjectLocator::make_locations(int stride /* r23 */, int loc_offset /* r24 */, class xMat4x3 * inWorldMat /* r25 */, class xVec3 * inScale /* r26 */) {
    // Local variables
    void (* get_offset)(class xVec3 & offset, class emit_volume_data & data); // r31
    class emit_volume_data & volume; // r30
    unsigned char * p; // r29
    unsigned char * endp; // r28

    {
        // Range: 0x800C33EC -> 0x800C3460
        // Local variables
        class xVec3 offset; // r1+0x14
        class xVec3 & loc; // r27
    }
}
