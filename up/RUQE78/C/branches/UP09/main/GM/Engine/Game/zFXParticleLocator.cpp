/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zFXParticleLocator.cpp
*/
class activity_data * activities; // size: 0x4, address: 0x8081E58C
int activities_used; // size: 0x4, address: 0x8081E590
static bool (* setup_volume_table[7])(class activity_data & activity, class FXParticleSystem & asset); // size: 0x1C, address: 0x80780940
// signature: FX::Particles::Point::get_offset(xVec3 &, FX::Particles::emit_volume_data &)
// Range: 0x8016F470 -> 0x8016F488
void FX::Particles::Point::get_offset() {
}
// signature: FX::Particles::Point::setup_volume(FX::Particles::zFXParticleLocator::activity_data &, const Sext::FXParticleSystem &)
// Range: 0x8016F490 -> 0x8016F4A4
bool FX::Particles::Point::setup_volume() {
}
// Range: 0x8016F4B0 -> 0x8016F65C
void FX::Particles::Sphere::get_offset(class xVec3 & offset /* r28 */, class emit_volume_data & data /* r29 */) {
    // Local variables
    float ang; // f31
    float uz; // f30
    float r; // f0
    float rr; // f4
}
// Range: 0x8016F660 -> 0x8016F7B4
void FX::Particles::Sphere::get_offset_edge(class xVec3 & offset /* r28 */, class emit_volume_data & data /* r29 */) {
    // Local variables
    float ang; // f31
    float uz; // f5
    float r; // f29
}
// signature: FX::Particles::Sphere::setup_volume(FX::Particles::zFXParticleLocator::activity_data &, const Sext::FXParticleSystem &)
// Range: 0x8016F7C0 -> 0x8016F7F0
bool FX::Particles::Sphere::setup_volume() {
}
// Range: 0x8016F7F0 -> 0x8016F9B8
void FX::Particles::Circle::get_offset(class xVec3 & offset /* r28 */, class emit_volume_data & data /* r29 */) {
    // Local variables
    float ang; // f31
    float rrx; // f30
    float rry; // f29
}
// Range: 0x8016F9C0 -> 0x8016FA88
void FX::Particles::Circle::get_offset_edge(class xVec3 & offset /* r30 */, class emit_volume_data & data /* r31 */) {
    // Local variables
    float ang; // f31
    float rrx; // f30
    float rry; // f29
}
// Range: 0x8016FA90 -> 0x8016FC7C
void FX::Particles::Circle::get_offset_cylinder(class xVec3 & offset /* r29 */, class emit_volume_data & data /* r30 */) {
    // Local variables
    float ang; // f31
    float rrx; // f30
    float rry; // f29
    float z; // f28
}
// signature: FX::Particles::Circle::setup_volume(FX::Particles::zFXParticleLocator::activity_data &, const Sext::FXParticleSystem &)
// Range: 0x8016FC80 -> 0x8016FD48
bool FX::Particles::Circle::setup_volume() {
}
// Range: 0x8016FD50 -> 0x8016FDCC
void FX::Particles::Line::get_offset(class xVec3 & offset /* r30 */, class emit_volume_data & data /* r31 */) {
    // Local variables
    float d; // f0
}
// Range: 0x8016FDD0 -> 0x8017010C
void FX::Particles::Line::get_offset_capsule(class xVec3 & offset /* r30 */, class emit_volume_data & data /* r31 */) {
    // Local variables
    float ang; // f31

    {
        // Range: 0x8016FE54 -> 0x8016FF7C
        // Local variables
        float rrz; // f26
        float rry; // f27
        float rrx; // f28
        float rr; // f6
        float r; // f0
        float uz; // f30
    }
    {
        // Range: 0x8016FF7C -> 0x801700BC
        // Local variables
        float rry; // f26
        float rrx; // f29
        float d; // f30
    }
}
// Range: 0x80170110 -> 0x80170304
void FX::Particles::Line::get_offset_capsule_edge(class xVec3 & offset /* r28 */, class emit_volume_data & data /* r29 */) {
    // Local variables
    float ang; // f31

    {
        // Range: 0x80170180 -> 0x80170264
        // Local variables
        float rr; // f28
        float r; // f0
        float uz; // f30
    }
    {
        // Range: 0x80170264 -> 0x801702C4
        // Local variables
        float rr; // f28
        float d; // f2
    }
}
// Range: 0x80170310 -> 0x8017046C
void FX::Particles::Line::get_offset_cylinder(class xVec3 & offset /* r27 */, class emit_volume_data & data /* r28 */) {
    // Local variables
    float ang; // f31
    float d; // f30
    float rr; // f29
}
// Range: 0x80170470 -> 0x8017056C
void FX::Particles::Line::get_offset_cylinder_edge(class xVec3 & offset /* r28 */, class emit_volume_data & data /* r29 */) {
    // Local variables
    float ang; // f31
    float d; // f30
    float rr; // f29
}
// signature: FX::Particles::Line::setup_volume(FX::Particles::zFXParticleLocator::activity_data &, const Sext::FXParticleSystem &)
// Range: 0x80170570 -> 0x80170690
bool FX::Particles::Line::setup_volume(class activity_data & activity /* r31 */) {
    // Local variables
    class emit_volume_data & ovolume; // r0

    {
        // Range: 0x8017060C -> 0x80170678
        // Local variables
        float rr; // f3
        float d; // f2
        float r; // f1
    }
}
// signature: FX::Particles::Box::GetVertex(xVec3 &, float, float, float, int)
// Range: 0x80170690 -> 0x80170760
void FX::Particles::Box::GetVertex() {
}
// Range: 0x80170760 -> 0x80170850
void FX::Particles::Box::get_offset(class xVec3 & offset /* r27 */, class emit_volume_data & data /* r28 */) {
    // Local variables
    float x; // f31
    float y; // f30
    float z; // f0
}
// Range: 0x80170850 -> 0x80170BAC
void FX::Particles::Box::get_offset_edge(class xVec3 & offset /* r31 */, class emit_volume_data & data /* r28 */) {
}
// signature: FX::Particles::Box::setup_volume(FX::Particles::zFXParticleLocator::activity_data &, const Sext::FXParticleSystem &)
// Range: 0x80170BB0 -> 0x80170C64
bool FX::Particles::Box::setup_volume() {
}
// Range: 0x80170C70 -> 0x8017143C
void FX::Particles::Model::get_offset_surface_impl(int & outModelIndex /* r29 */, class xVec3 & offset /* r30 */, class emit_volume_data & data /* r26 */) {
    // Local variables
    int idx; // r31
    class ModelPrototypeEntity * modelProto; // r0
    class hkpShape * shape; // r0

    {
        // Range: 0x80170D50 -> 0x80170E3C
        // Local variables
        float * p2; // r26
        float * p1; // r27
        float * p0; // r31
        int stride; // r6
        class TrianglesSubpart & part; // r0
        class hkpMoppBvTreeShape * mopp; // r0
    }
    {
        // Range: 0x80170E3C -> 0x80171124
        // Local variables
        class hkVector4 halfExtents; // r1+0x20
        class hkpConvexShape * pShape; // r0
    }
    {
        // Range: 0x80171124 -> 0x80171408
        // Local variables
        class hkVector4 halfExtents; // r1+0x10
    }
}
// Range: 0x80171440 -> 0x801715C8
void FX::Particles::Model::get_offset_vert_impl(int & outModelIndex /* r28 */, class xVec3 & offset /* r30 */, class emit_volume_data & data /* r29 */) {
    // Local variables
    int vert_index; // r31
    class ModelPrototypeEntity * modelProto; // r0
    class hkpShape * shape; // r0

    {
        // Range: 0x80171508 -> 0x80171544
        // Local variables
        float * vert; // r3
        class TrianglesSubpart & part; // r0
        class hkpMoppBvTreeShape * mopp; // r0
    }
    {
        // Range: 0x80171544 -> 0x80171578
        // Local variables
        class hkVector4 halfExtents; // r1+0x20
        class hkpConvexShape * pShape; // r0
    }
    {
        // Range: 0x80171578 -> 0x801715A4
        // Local variables
        class hkVector4 halfExtents; // r1+0x10
    }
}
// signature: FX::Particles::Model::get_offset_vert(xVec3 &, FX::Particles::emit_volume_data &)
// Range: 0x801715D0 -> 0x801715FC
void FX::Particles::Model::get_offset_vert() {
    // Local variables
    int modelIndex; // r1+0x8
}
// signature: FX::Particles::Model::get_offset_surface(xVec3 &, FX::Particles::emit_volume_data &)
// Range: 0x80171600 -> 0x8017162C
void FX::Particles::Model::get_offset_surface() {
    // Local variables
    int modelIndex; // r1+0x8
}
// Range: 0x80171630 -> 0x80171728
void FX::Particles::Model::get_offset_vert_vol(class xVec3 & offset /* r30 */, class emit_volume_data & data /* r31 */) {
    // Local variables
    int modelIndex; // r1+0x8
    class xVec3 diff; // r1+0xC
    float scaleVal; // f6
}
// Range: 0x80171730 -> 0x80171828
void FX::Particles::Model::get_offset_surface_vol(class xVec3 & offset /* r30 */, class emit_volume_data & data /* r31 */) {
    // Local variables
    int modelIndex; // r1+0x8
    class xVec3 diff; // r1+0xC
    float scaleVal; // f6
}
// signature: FX::Particles::Model::setup_volume(FX::Particles::zFXParticleLocator::activity_data &, const Sext::FXParticleSystem &)
// Range: 0x80171830 -> 0x80171C14
bool FX::Particles::Model::setup_volume(class activity_data & activity /* r25 */) {
    // Local variables
    int models_size; // r31
    int total_vertices; // r30
    int total_surfaces; // r29

    {
        // Range: 0x801718A4 -> 0x80171BD8
        // Local variables
        int surfaces; // r26
        int size; // r27
        class hkpShape * shape; // r0
        class ModelPrototypeEntity * modelProto; // r0
        class ModelInstanceAsset & m; // r28

        {
            // Range: 0x80171918 -> 0x80171B48
            // Local variables
            unsigned int add; // r7
            float * vert; // r6
            class xVec3 vertTotal; // r1+0x30

            {
                // Range: 0x80171924 -> 0x80171938
                // Local variables
                int idx; // r8
            }
        }
        {
            // Range: 0x80171B48 -> 0x80171B84
            // Local variables
            class hkVector4 centre; // r1+0x20
        }
        {
            // Range: 0x80171B84 -> 0x80171BB8
            // Local variables
            class hkVector4 centre; // r1+0x10
        }
    }
}
// Range: 0x80171C20 -> 0x80171CA8
void FX::Particles::Curve::get_offset(class xVec3 & offset /* r30 */, class emit_volume_data & data /* r31 */) {
}
// signature: FX::Particles::Curve::setup_volume(FX::Particles::zFXParticleLocator::activity_data &, const Sext::FXParticleSystem &)
// Range: 0x80171CB0 -> 0x80171D40
bool FX::Particles::Curve::setup_volume(class activity_data & activity /* r31 */) {
    // Local variables
    class xBox bound; // r1+0x18
    class xSphere sphere; // r1+0x8
}
// signature: FX::Particles::zFXParticleLocator::activate(const Sext::FXParticleSystem &)
// Range: 0x80171D40 -> 0x80171E78
bool FX::Particles::zFXParticleLocator::activate(class zFXParticleLocator * this /* r31 */) {
    // References
    // -> static bool (* setup_volume_table[7])(class activity_data & activity, class FXParticleSystem & asset);
    // -> class activity_data * activities;
    // -> int activities_used;
}
// signature: FX::Particles::zFXParticleLocator::make_locations(void *, int, int, int, const xMat4x3 *) const
// Range: 0x80171E80 -> 0x80171FA0
void FX::Particles::zFXParticleLocator::make_locations(int stride /* r25 */, class xMat4x3 * inWorldMat /* r26 */) const {
    // Local variables
    void (* get_offset)(class xVec3 & offset, class emit_volume_data & data); // r30
    class emit_volume_data & volume; // r29
    unsigned char * p; // r28
    unsigned char * endp; // r27

    {
        // Range: 0x80171EBC -> 0x80171F7C
        // Local variables
        class xVec3 offset; // r1+0x14
        class xVec3 & loc; // r0
    }
}
