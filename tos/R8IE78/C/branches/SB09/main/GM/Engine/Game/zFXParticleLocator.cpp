/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zFXParticleLocator.cpp
*/
class activity_data * activities; // size: 0x4, address: 0x80734724
class NumberPool sNumberPool; // size: 0x14, address: 0x80734728
class other_volume * otherData; // size: 0x4, address: 0x8073473C
class NumberPool sOtherIndices; // size: 0x14, address: 0x80734740
bool (* setup_volume_table[7])(class activity_data & activity, class FXParticleSystem & asset); // size: 0x1C, address: 0x8068BB4C
void (* release_volume_table[7])(class activity_data & activity); // size: 0x1C, address: 0x8068BB68
// signature: FX::Particles::Locator::Point::get_offset(xVec3 &, const int)
// Range: 0x800BDEB0 -> 0x800BDEC8
void FX::Particles::Locator::Point::get_offset() {
}
// signature: FX::Particles::Locator::Point::setup_volume(FX::activity_data &, const Sext::FXParticleSystem &)
// Range: 0x800BDED0 -> 0x800BDEE4
bool FX::Particles::Locator::Point::setup_volume() {
}
// signature: FX::Particles::Locator::Sphere::get_offset(xVec3 &, const int)
// Range: 0x800BDEF0 -> 0x800BE064
void FX::Particles::Locator::Sphere::get_offset(class xVec3 & offset /* r29 */) {
    // Local variables
    float scale; // f31
    float ang; // f30
    float uz; // f27
    float r; // f0
    float rr; // f3
}
// signature: FX::Particles::Locator::Sphere::get_offset_edge(xVec3 &, const int)
// Range: 0x800BE070 -> 0x800BE1B4
void FX::Particles::Locator::Sphere::get_offset_edge(class xVec3 & offset /* r28 */) {
    // Local variables
    float scale; // f30
    float ang; // f29
    float uz; // f28
    float r; // f27
}
// signature: FX::Particles::Locator::Sphere::setup_volume(FX::activity_data &, const Sext::FXParticleSystem &)
// Range: 0x800BE1C0 -> 0x800BE210
bool FX::Particles::Locator::Sphere::setup_volume() {
}
// signature: FX::Particles::Locator::Sphere::release_volume(FX::activity_data &)
// Range: 0x800BE210 -> 0x800BE21C
void FX::Particles::Locator::Sphere::release_volume() {
}
// signature: FX::Particles::Locator::Circle::get_offset(xVec3 &, const int)
// Range: 0x800BE220 -> 0x800BE364
void FX::Particles::Locator::Circle::get_offset(class xVec3 & offset /* r27 */) {
    // Local variables
    class other_volume & volume; // r28
    float ang; // f30
    float rrx; // f29
    float rry; // f28

    // References
    // -> class other_volume * otherData;
}
// signature: FX::Particles::Locator::Circle::get_offset_edge(xVec3 &, const int)
// Range: 0x800BE370 -> 0x800BE450
void FX::Particles::Locator::Circle::get_offset_edge(class xVec3 & offset /* r30 */) {
    // Local variables
    class other_volume & volume; // r31
    float ang; // f30
    float rrx; // f29
    float rry; // f28

    // References
    // -> class other_volume * otherData;
}
// signature: FX::Particles::Locator::Circle::get_offset_cylinder(xVec3 &, const int)
// Range: 0x800BE450 -> 0x800BE5C0
void FX::Particles::Locator::Circle::get_offset_cylinder(class xVec3 & offset /* r28 */) {
    // Local variables
    class other_volume & volume; // r29
    float ang; // f31
    float rrx; // f29
    float rry; // f28
    float z; // f27

    // References
    // -> class other_volume * otherData;
}
// Range: 0x800BE5C0 -> 0x800BE6CC
bool FX::Particles::Locator::Circle::setup_volume(class activity_data & activity /* r30 */, class FXParticleSystem & asset /* r31 */) {
    // Local variables
    class other_volume & volume; // r5

    // References
    // -> class other_volume * otherData;
    // -> class NumberPool sOtherIndices;
}
// signature: FX::Particles::Locator::Line::get_offset(xVec3 &, const int)
// Range: 0x800BE6D0 -> 0x800BE758
void FX::Particles::Locator::Line::get_offset(class xVec3 & offset /* r30 */) {
    // Local variables
    class other_volume & volume; // r31
    float d; // f0

    // References
    // -> class other_volume * otherData;
}
// signature: FX::Particles::Locator::Line::get_offset_capsule(xVec3 &, const int)
// Range: 0x800BE760 -> 0x800BE9D8
void FX::Particles::Locator::Line::get_offset_capsule(class xVec3 & offset /* r28 */) {
    // Local variables
    class other_volume & volume; // r29
    float ang; // f31

    {
        // Range: 0x800BE7F0 -> 0x800BE8D4
        // Local variables
        float rrz; // f25
        float rry; // f26
        float rrx; // f27
        float rr; // f6
        float r; // f0
        float uz; // f30
    }
    {
        // Range: 0x800BE8D4 -> 0x800BE988
        // Local variables
        float rry; // f26
        float rrx; // f25
        float d; // f30
    }

    // References
    // -> class other_volume * otherData;
}
// signature: FX::Particles::Locator::Line::get_offset_capsule_edge(xVec3 &, const int)
// Range: 0x800BE9E0 -> 0x800BEB9C
void FX::Particles::Locator::Line::get_offset_capsule_edge(class xVec3 & offset /* r27 */) {
    // Local variables
    class other_volume & volume; // r28
    float ang; // f29

    {
        // Range: 0x800BEA5C -> 0x800BEB00
        // Local variables
        float rr; // f27
        float r; // f0
        float uz; // f28
    }
    {
        // Range: 0x800BEB00 -> 0x800BEB5C
        // Local variables
        float rr; // f28
        float d; // f27
    }

    // References
    // -> class other_volume * otherData;
}
// signature: FX::Particles::Locator::Line::get_offset_cylinder(xVec3 &, const int)
// Range: 0x800BEBA0 -> 0x800BECD8
void FX::Particles::Locator::Line::get_offset_cylinder(class xVec3 & offset /* r27 */) {
    // Local variables
    class other_volume & volume; // r28
    float ang; // f30
    float d; // f29
    float rr; // f28

    // References
    // -> class other_volume * otherData;
}
// signature: FX::Particles::Locator::Line::get_offset_cylinder_edge(xVec3 &, const int)
// Range: 0x800BECE0 -> 0x800BEDE8
void FX::Particles::Locator::Line::get_offset_cylinder_edge(class xVec3 & offset /* r28 */) {
    // Local variables
    class other_volume & volume; // r29
    float ang; // f30
    float d; // f29
    float rr; // f28

    // References
    // -> class other_volume * otherData;
}
// Range: 0x800BEDF0 -> 0x800BEF4C
bool FX::Particles::Locator::Line::setup_volume(class activity_data & activity /* r29 */, class FXParticleSystem & asset /* r30 */) {
    // Local variables
    class other_volume & volume; // r31

    {
        // Range: 0x800BEEC4 -> 0x800BEF30
        // Local variables
        float rr; // f3
        float d; // f2
        float r; // f1
    }

    // References
    // -> class other_volume * otherData;
    // -> class NumberPool sOtherIndices;
}
// signature: FX::Particles::Locator::Box::GetVertex(xVec3 &, float, float, float, int)
// Range: 0x800BEF50 -> 0x800BF020
void FX::Particles::Locator::Box::GetVertex() {
}
// signature: FX::Particles::Locator::Box::GetPoint(xVec3 &, float, float, float, int)
// Range: 0x800BF020 -> 0x800BF368
void FX::Particles::Locator::Box::GetPoint(class xVec3 & outVert /* r31 */, float inX /* f29 */, float inY /* f30 */, float inZ /* f31 */) {
}
// signature: FX::Particles::Locator::Box::get_offset(xVec3 &, const int)
// Range: 0x800BF370 -> 0x800BF474
void FX::Particles::Locator::Box::get_offset(class xVec3 & offset /* r27 */) {
    // Local variables
    class other_volume & volume; // r28

    // References
    // -> class other_volume * otherData;
}
// signature: FX::Particles::Locator::Box::get_offset_edge(xVec3 &, const int)
// Range: 0x800BF4C0 -> 0x800BF524
void FX::Particles::Locator::Box::get_offset_edge(class xVec3 & offset /* r30 */) {
    // Local variables
    class other_volume & volume; // r31

    // References
    // -> class other_volume * otherData;
}
// Range: 0x800BF530 -> 0x800BF5C8
bool FX::Particles::Locator::Box::setup_volume(class activity_data & activity /* r30 */, class FXParticleSystem & asset /* r31 */) {
    // References
    // -> class other_volume * otherData;
    // -> class NumberPool sOtherIndices;
}
// signature: FX::Particles::Locator::Model::setup_volume(FX::activity_data &, const Sext::FXParticleSystem &)
// Range: 0x800BF5D0 -> 0x800BF618
bool FX::Particles::Locator::Model::setup_volume() {
    // References
    // -> class xVec3 m_Ones;
}
// signature: FX::Particles::Locator::Curve::get_offset(xVec3 &, const int)
// Range: 0x800BF620 -> 0x800BF6A4
void FX::Particles::Locator::Curve::get_offset(class xVec3 & offset /* r29 */) {
    // Local variables
    class other_volume & volume; // r0

    // References
    // -> class other_volume * otherData;
}
// Range: 0x800BF6B0 -> 0x800BF750
bool FX::Particles::Locator::Curve::setup_volume(class activity_data & activity /* r29 */, class FXParticleSystem & asset /* r30 */) {
    // Local variables
    class other_volume & volume; // r0

    // References
    // -> class other_volume * otherData;
    // -> class NumberPool sOtherIndices;
}
// Range: 0x800BF750 -> 0x800BF798
void FX::Particles::Locator::release_volume(class activity_data & activity /* r31 */) {
    // References
    // -> class NumberPool sOtherIndices;
}
// Range: 0x800BF7A0 -> 0x800BF840
void FX::Particles::Locator::zFXParticleLocator::scene_enter() {
    // References
    // -> class NumberPool sModelIndices;
    // -> class model_volume * modelData;
    // -> class NumberPool sOtherIndices;
    // -> class other_volume * otherData;
    // -> class NumberPool sNumberPool;
    // -> class activity_data * activities;
}
// Range: 0x800BF840 -> 0x800BF89C
void FX::Particles::Locator::zFXParticleLocator::scene_exit() {
    // References
    // -> class NumberPool sModelIndices;
    // -> class model_volume * modelData;
    // -> class NumberPool sOtherIndices;
    // -> class other_volume * otherData;
    // -> class activity_data * activities;
    // -> class NumberPool sNumberPool;
}
// Range: 0x800BF8A0 -> 0x800BF954
bool FX::Particles::Locator::zFXParticleLocator::activate(class zFXParticleLocator * this /* r30 */, class FXParticleSystem & asset /* r31 */) {
    // References
    // -> class activity_data * activities;
    // -> bool (* setup_volume_table[7])(class activity_data & activity, class FXParticleSystem & asset);
    // -> class NumberPool sNumberPool;
}
// signature: FX::Particles::Locator::zFXParticleLocator::deactivate(const Sext::FXParticleSystem &)
// Range: 0x800BF960 -> 0x800BF9DC
void FX::Particles::Locator::zFXParticleLocator::deactivate(class zFXParticleLocator * this /* r31 */) {
    // References
    // -> class NumberPool sNumberPool;
    // -> class activity_data * activities;
    // -> void (* release_volume_table[7])(class activity_data & activity);
}
// signature: FX::Particles::Locator::zFXParticleLocator::make_locations(void *, int, int, int, const xMat4x3 *, const xVec3 *) const
// Range: 0x800BF9E0 -> 0x800BFAB4
void FX::Particles::Locator::zFXParticleLocator::make_locations(int stride /* r23 */, int loc_offset /* r24 */, class xMat4x3 * inWorldMat /* r25 */, class xVec3 * inScale /* r26 */) const {
    // Local variables
    class activity_data & activity; // r31
    void (* get_offset)(class xVec3 & outOffset, int volumeIdx); // r30
    unsigned char * p; // r29
    unsigned char * endp; // r28

    {
        // Range: 0x800BFA2C -> 0x800BFAA0
        // Local variables
        class xVec3 offset; // r1+0x14
        class xVec3 & loc; // r27
    }

    // References
    // -> class activity_data * activities;
}
