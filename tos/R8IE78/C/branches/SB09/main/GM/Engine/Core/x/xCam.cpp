/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xCam.cpp
*/
enum xCamCoordType coord_table[3][3]; // size: 0x24, address: 0x8067F1F4
enum xCamOrientType orient_table[2][2]; // size: 0x10, address: 0x8067F218
// Range: 0x8001DD70 -> 0x8001DE1C
static void @unnamed@WAD00_cpp@::CalculateAABB(class Vector4 & posAABBox /* r28 */, class Vector4 & scaleAABBox /* r29 */, class hkAabb & infoAABB /* r30 */) {
}
// Range: 0x8001DE20 -> 0x8001DE30
void xCam::start() {
}
// Range: 0x8001DE30 -> 0x8001DE40
void xCam::stop() {
}
// Range: 0x8001DE40 -> 0x8001DF70
void xCam::refresh_mat(class xCam * this /* r29 */, class xMat4x3 & mat /* r30 */, class xCamSpatialInfo & spatial /* r31 */) {
}
// Range: 0x8001DFE0 -> 0x8001E084
void xCam::refresh_mat(class xCam * this /* r31 */) {
}
// Range: 0x8001E090 -> 0x8001E0D4
void xCam::refresh_dof_effect() {
    // References
    // -> class DoFEffectSettings GlobalDoFSettings;
}
// Range: 0x8001E0E0 -> 0x8001E13C
void xCam::GetTargets(class xVec3 * Pos0 /* r30 */, class xVec3 * Pos1 /* r31 */) const {
}
// Range: 0x8001E140 -> 0x8001E198
void xCam::create() {
}
// signature: xCamShake::Start(float, float, float, float, float, const xVec3 *, const xVec3 *, bool)
// Range: 0x8001E1A0 -> 0x8001E268
void xCamShake::Start(class xCamShake * this /* r30 */, class xVec3 * player /* r31 */) {
}
// signature: xCamShake::Update(float, xMat4x3 &)
// Range: 0x8001E270 -> 0x8001E5A8
void xCamShake::Update(class xCamShake * this /* r30 */, class xMat4x3 & m /* r31 */) {
    // Local variables
    float x; // f31
    float y; // f29
    float scale; // f30
    float noise; // f29
    class xVec3 e; // r1+0x8

    {
        // Range: 0x8001E378 -> 0x8001E42C
        // Local variables
        float len; // f0
        class xVec3 d; // r1+0x14

        {
            // Range: 0x8001E410 -> 0x8001E42C
            // Local variables
            float s; // f0
        }
    }
}
// signature: xCamGroup::create(xCamGroup *)
// Range: 0x8001E5F0 -> 0x8001E708
void xCamGroup::create(class xCamGroup * this /* r29 */) {
    {
        // Range: 0x8001E6C4 -> 0x8001E6E8
        // Local variables
        class xCamBlend * * end; // r30
        class xCamBlend * * it; // r31
    }

    // References
    // -> class zGlobals globals;
    // -> class xMat4x3 g_I3;
}
// Range: 0x8001E710 -> 0x8001E7A0
void xCamGroup::destroy(class xCamGroup * this /* r29 */) {
    {
        // Range: 0x8001E73C -> 0x8001E768
        // Local variables
        class xCamBlend * * end; // r30
        class xCamBlend * * it; // r31
    }
}
// Range: 0x8001E7A0 -> 0x8001E828
void xCamGroup::reset(class xCamGroup * this /* r30 */) {
    // References
    // -> class xMat4x3 g_I3;
}
// Range: 0x8001E830 -> 0x8001E980
void xCamGroup::update(class xCamGroup * this /* r29 */, class xScene & scene /* r30 */, float dt /* f31 */) {
    {
        // Range: 0x8001E860 -> 0x8001E944
        // Local variables
        float len; // r1+0x8
    }

    // References
    // -> float SECS_PER_VBLANK;
}
// signature: xCamGroup::transition_to(xCam &, const xCamTransitionParams *, bool, bool)
// Range: 0x8001EA90 -> 0x8001EBC0
bool xCamGroup::transition_to(class xCamGroup * this /* r30 */, class xCam & cam /* r31 */) {
    {
        // Range: 0x8001EB78 -> 0x8001EBA8
        // Local variables
        class xCam * next; // r0
    }
}
// Range: 0x8001EBC0 -> 0x8001EC10
void xCamGroup::stop(class xCam & cam /* r31 */) {
}
// Range: 0x8001EC10 -> 0x8001EC40
class xCamBlend * xCamGroup::grab_blend_cam() {
    {
        // Range: 0x8001EC10 -> 0x8001EC38
        // Local variables
        class xCamBlend * * end; // r5
        class xCamBlend * * it; // r4
    }
}
// signature: xCamGroup::set_primary(xCam *, bool)
// Range: 0x8001EC40 -> 0x8001ED3C
void xCamGroup::set_primary(class xCamGroup * this /* r30 */, class xCam * toCamera /* r31 */) {
    {
        // Range: 0x8001EC7C -> 0x8001ECD4
        // Local variables
        float len; // r1+0x8
    }
}
// Range: 0x8001ED40 -> 0x8001EE84
class xCam * xCamGroup::get_blend(class xCamGroup * this /* r28 */, class xCamTransition * transition /* r29 */, class xCam & to /* r30 */) {
    // Local variables
    float blend_time; // f31

    {
        // Range: 0x8001EDA8 -> 0x8001EDE8
        // Local variables
        class xCam * pTo; // reg65535
        class xCamBlend * parent; // r31
    }
    {
        // Range: 0x8001EDE8 -> 0x8001EE50
        // Local variables
        class xCamBlend * blend; // r31
    }
}
// Range: 0x8001EE90 -> 0x8001EF88
void xCamGroup::CreatePhantom(class xCamGroup * this /* r31 */) {
    // Local variables
    class xVec3 cameraPos; // r1+0x40
    class Vector4 posAABBox; // r1+0x30
    class Vector4 scaleAABBox; // r1+0x20
    class hkAabb infoAABB; // r1+0x50
    class hkpPropertyValue val; // r1+0x18

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x8001EF90 -> 0x8001F034
void xCamGroup::UpdatePhantom(class xCamGroup * this /* r31 */) {
    // Local variables
    class xVec3 cameraPos; // r1+0x30
    class Vector4 posAABBox; // r1+0x20
    class Vector4 scaleAABBox; // r1+0x10
    class hkAabb infoAABB; // r1+0x40
}
// Range: 0x8001F040 -> 0x8001F0D0
class xCam * xCam::do_transient_replacement() {
    // Local variables
    class xCam * curCam; // r30
    class xCam * next; // r29
}
// Range: 0x8001F0F0 -> 0x8001F1A4
class xCamBlend * xCamGroup::create_blend() {
    // References
    // -> struct {} __vt__12xCamTimeBias;
    // -> struct {} __vt__9xCamBlend;
    // -> static class xMemWatermark memWatermark;
}
// signature: xCamTimeBias::Start(int)
// Range: 0x8001F1B0 -> 0x8001F1C4
void xCamTimeBias::Start() {
}
// signature: xCamTimeBias::Update(float)
// Range: 0x8001F1D0 -> 0x8001F1E0
void xCamTimeBias::Update() {
}
// Range: 0x8001F1E0 -> 0x8001F208
void xCamTimeBias::Reverse() {
}
// Range: 0x8001F210 -> 0x8001F218
float xCamTimeBias::GetBias() {
}
// Range: 0x8001F220 -> 0x8001F238
bool xCamTimeBias::IsActive() {
}
// Range: 0x8001F240 -> 0x8001F25C
bool xCamTimeBias::DidComplete() {
}
// Range: 0x8001F260 -> 0x8001F2CC
void xCamTimeBias::CalcBias() {
    // Local variables
    float t; // f2
}
// signature: xCamBias::GetBiasObject(xCamTransition *, xCamTimeBias &)
// Range: 0x8001F2D0 -> 0x8001F2F8
class xCamBias * xCamBias::GetBiasObject() {
}
// Range: 0x8001F300 -> 0x8001F344
void xCamBlend::create(class xCamBlend * this /* r31 */) {
}
// Range: 0x8001F350 -> 0x8001F4EC
void xCamBlend::start(class xCamBlend * this /* r31 */) {
    // References
    // -> enum xCamOrientType orient_table[2][2];
    // -> enum xCamCoordType coord_table[3][3];
}
// Range: 0x8001F4F0 -> 0x8001F608
void xCamBlend::stop(class xCamBlend * this /* r31 */) {
}
// Range: 0x8001F610 -> 0x8001F668
void xCamBlend::pre_update(class xCamBlend * this /* r30 */, class xScene & scene /* r31 */) {
}
// Range: 0x8001F670 -> 0x8001F6C8
void xCamBlend::post_update(class xCamBlend * this /* r30 */, class xScene & scene /* r31 */) {
}
// Range: 0x8001F6D0 -> 0x8001F9C0
void xCamBlend::update(class xCamBlend * this /* r31 */, class xScene & scene /* r30 */, float dt /* f30 */) {
    // Local variables
    float s; // f31
}
// signature: xCamBlend::GetTargets(xVec3 *, xVec3 *) const
// Range: 0x8001F9E0 -> 0x8001F9F4
void xCamBlend::GetTargets() const {
}
// Range: 0x8001FA00 -> 0x8001FA7C
class xCam * xCamBlend::get_next(class xCamBlend * this /* r31 */) {
}
// Range: 0x8001FA80 -> 0x8001FAEC
class xCam * xCamBlend::find_camera(class xCamBlend * this /* r29 */, unsigned long long ownerID /* r31:r30 */) {
    // Local variables
    class xCam * found; // r3
}
// signature: xCamBlend::attach(xCam &, xCam &)
// Range: 0x8001FB10 -> 0x8001FB44
void xCamBlend::attach() {
}
// Range: 0x8001FB50 -> 0x8001FB74
void xCamBlend::reverse() {
    // Local variables
    class xCam * temp; // r4
}
// Range: 0x8001FB80 -> 0x8001FCE8
void xCamBlend::blend_coord(class xCamBlend * this /* r30 */, float s /* f31 */) {
    {
        // Range: 0x8001FBF4 -> 0x8001FC60
        // Local variables
        class xCamCoordCylinder c2; // r1+0x48
        class xCamCoordCylinder c1; // r1+0x60
    }
    {
        // Range: 0x8001FC64 -> 0x8001FCD0
        // Local variables
        class xCamCoordSphere c2; // r1+0x8
        class xCamCoordSphere c1; // r1+0x28
    }
}
// Range: 0x80020240 -> 0x80020368
void xCamBlend::blend_orient(class xCamBlend * this /* r30 */, float s /* f31 */) {
    {
        // Range: 0x80020274 -> 0x800202E0
        // Local variables
        class xQuat c2; // r1+0x20
        class xQuat c1; // r1+0x30
    }
    {
        // Range: 0x800202E4 -> 0x80020350
        // Local variables
        class xCamOrientEuler c2; // r1+0x8
        class xCamOrientEuler c1; // r1+0x14
    }
}
