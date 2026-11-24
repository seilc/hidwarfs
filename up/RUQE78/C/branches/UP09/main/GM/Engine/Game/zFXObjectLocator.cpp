/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zFXObjectLocator.cpp
*/
class activity_data * obj_activities; // size: 0x4, address: 0x8081E9C0
int obj_activities_used; // size: 0x4, address: 0x8081E9C4
static bool (* setup_volume_table[7])(class activity_data & activity, class FXObjectSystem & asset); // size: 0x1C, address: 0x80780964
// signature: FX::Objects::Point::setup_volume(FX::Objects::zFXObjectLocator::activity_data &, const Sext::FXObjectSystem &)
// Range: 0x801748B0 -> 0x801748C4
bool FX::Objects::Point::setup_volume() {
}
// Range: 0x801748D0 -> 0x80174A78
void FX::Objects::Sphere::obj_get_offset(class xVec3 & offset /* r28 */, class emit_volume_data & data /* r29 */) {
    // Local variables
    float ang; // f31
    float uz; // f30
    float r; // f0
    float rr; // f4
}
// signature: FX::Objects::Sphere::setup_volume(FX::Objects::zFXObjectLocator::activity_data &, const Sext::FXObjectSystem &)
// Range: 0x80174A90 -> 0x80174AC0
bool FX::Objects::Sphere::setup_volume() {
}
// signature: FX::Objects::Circle::setup_volume(FX::Objects::zFXObjectLocator::activity_data &, const Sext::FXObjectSystem &)
// Range: 0x80174AF0 -> 0x80174BB8
bool FX::Objects::Circle::setup_volume() {
}
// signature: FX::Objects::Line::setup_volume(FX::Objects::zFXObjectLocator::activity_data &, const Sext::FXObjectSystem &)
// Range: 0x80174C10 -> 0x80174D30
bool FX::Objects::Line::setup_volume(class activity_data & activity /* r31 */) {
    // Local variables
    class emit_volume_data & ovolume; // r0

    {
        // Range: 0x80174CAC -> 0x80174D18
        // Local variables
        float rr; // f3
        float d; // f2
        float r; // f1
    }
}
// signature: FX::Objects::Box::GetVertex(xVec3 &, float, float, float, int)
// Range: 0x80174D30 -> 0x80174E00
void FX::Objects::Box::GetVertex() {
}
// signature: FX::Objects::Box::setup_volume(FX::Objects::zFXObjectLocator::activity_data &, const Sext::FXObjectSystem &)
// Range: 0x80174E20 -> 0x80174ED4
bool FX::Objects::Box::setup_volume() {
}
// Range: 0x80174EE0 -> 0x80175068
void FX::Objects::Model::get_offset_vert_impl(int & outModelIndex /* r28 */, class xVec3 & offset /* r30 */, class emit_volume_data & data /* r29 */) {
    // Local variables
    int vert_index; // r31
    class ModelPrototypeEntity * modelProto; // r0
    class hkpShape * shape; // r0

    {
        // Range: 0x80174FA8 -> 0x80174FE4
        // Local variables
        float * vert; // r3
        class TrianglesSubpart & part; // r0
        class hkpMoppBvTreeShape * mopp; // r0
    }
    {
        // Range: 0x80174FE4 -> 0x80175018
        // Local variables
        class hkVector4 halfExtents; // r1+0x20
        class hkpConvexShape * pShape; // r0
    }
    {
        // Range: 0x80175018 -> 0x80175044
        // Local variables
        class hkVector4 halfExtents; // r1+0x10
    }
}
// signature: FX::Objects::Model::get_offset_vert(xVec3 &, FX::Objects::emit_volume_data &)
// Range: 0x80175070 -> 0x8017509C
void FX::Objects::Model::get_offset_vert() {
    // Local variables
    int modelIndex; // r1+0x8
}
// signature: FX::Objects::Model::get_offset_surface(xVec3 &, FX::Objects::emit_volume_data &)
// Range: 0x801750A0 -> 0x801750CC
void FX::Objects::Model::get_offset_surface() {
    // Local variables
    int modelIndex; // r1+0x8
}
// Range: 0x801750D0 -> 0x801751C8
void FX::Objects::Model::get_offset_vert_vol(class xVec3 & offset /* r30 */, class emit_volume_data & data /* r31 */) {
    // Local variables
    int modelIndex; // r1+0x8
    class xVec3 diff; // r1+0xC
    float scaleVal; // f6
}
// Range: 0x801751D0 -> 0x801752C8
void FX::Objects::Model::get_offset_surface_vol(class xVec3 & offset /* r30 */, class emit_volume_data & data /* r31 */) {
    // Local variables
    int modelIndex; // r1+0x8
    class xVec3 diff; // r1+0xC
    float scaleVal; // f6
}
// signature: FX::Objects::Model::setup_volume(FX::Objects::zFXObjectLocator::activity_data &, const Sext::FXObjectSystem &)
// Range: 0x801752D0 -> 0x8017569C
bool FX::Objects::Model::setup_volume(class activity_data & activity /* r25 */) {
    // Local variables
    int models_size; // r31
    int total_vertices; // r30
    int total_surfaces; // r29

    {
        // Range: 0x80175344 -> 0x80175660
        // Local variables
        int surfaces; // r26
        int size; // r27
        class hkpShape * shape; // r0
        class ModelPrototypeEntity * modelProto; // r0
        class ModelInstanceAsset & m; // r28

        {
            // Range: 0x801753A0 -> 0x801755D0
            // Local variables
            unsigned int add; // r7
            float * vert; // r6
            class xVec3 vertTotal; // r1+0x30

            {
                // Range: 0x801753AC -> 0x801753C0
                // Local variables
                int idx; // r8
            }
        }
        {
            // Range: 0x801755D0 -> 0x8017560C
            // Local variables
            class hkVector4 centre; // r1+0x20
        }
        {
            // Range: 0x8017560C -> 0x80175640
            // Local variables
            class hkVector4 centre; // r1+0x10
        }
    }
}
// signature: FX::Objects::Curve::setup_volume(FX::Objects::zFXObjectLocator::activity_data &, const Sext::FXObjectSystem &)
// Range: 0x801756B0 -> 0x8017572C
bool FX::Objects::Curve::setup_volume(class activity_data & activity /* r31 */) {
    // Local variables
    class xBox bound; // r1+0x18
    class xSphere sphere; // r1+0x8
}
