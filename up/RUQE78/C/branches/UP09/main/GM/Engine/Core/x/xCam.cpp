/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xCam.cpp
*/
float SHAKE_FOREVER; // size: 0x4, address: 0x80774F70
static enum xCamCoordType coord_table[3][3]; // size: 0x24, address: 0x80774F8C
static enum xCamOrientType orient_table[2][2]; // size: 0x10, address: 0x80774FB0
// Range: 0x8003C9F0 -> 0x8003CA00
void xCam::start() {
}
// Range: 0x8003CA00 -> 0x8003CA10
void xCam::stop() {
}
// Range: 0x8003CA10 -> 0x8003CDC8
void xCam::refresh_mat(class xCam * this /* r31 */) {
}
// Range: 0x8003CDD0 -> 0x8003CE30
void xCam::GetTargets(class xVec3 * Pos0 /* r30 */, class xVec3 * Pos1 /* r31 */) const {
}
// Range: 0x8003CE50 -> 0x8003CEA4
void xCam::create() {
}
// signature: xCamShake::Start(float, float, float, float, float, const xVec3 *, const xVec3 *, bool)
// Range: 0x8003CEB0 -> 0x8003CF58
void xCamShake::Start() {
}
// signature: xCamShake::Update(float, xMat4x3 &)
// Range: 0x8003CF60 -> 0x8003D764
void xCamShake::Update(class xCamShake * this /* r29 */, class xMat4x3 & m /* r30 */) {
    // Local variables
    float x; // f30
    float y; // f10
    float scale; // f29
    float noise; // f30
    float scale; // f29
    float scale; // f29
    class xVec3 e; // r1+0x8

    {
        // Range: 0x8003D164 -> 0x8003D2C8
        // Local variables
        float len; // f0
        class xVec3 d; // r1+0x14

        {
            // Range: 0x8003D2B0 -> 0x8003D2C8
            // Local variables
            float s; // f0
        }
    }

    // References
    // -> static unsigned int * next;
    // -> static unsigned int state[624];
    // -> static int left;
}
// signature: xCamGroup::create(xCamGroup *)
// Range: 0x8003D770 -> 0x8003DBE0
void xCamGroup::create(class xCamGroup * this /* r24 */) {
    {
        // Range: 0x8003D9D0 -> 0x8003D9D8
        // Local variables
        class xCamBlend * * end; // r25
        class xCamBlend * * it; // r26
    }

    // References
    // -> struct {} __vt__12xCamTimeBias;
    // -> struct {} __vt__9xCamBlend;
    // -> static class xMemWatermark memWatermark;
    // -> class zGlobals globals;
    // -> class xMat4x3 g_I3;
}
// Range: 0x8003DBE0 -> 0x8003DCA0
void xCamGroup::destroy(class xCamGroup * this /* r29 */) {
    {
        // Range: 0x8003DC34 -> 0x8003DC40
        // Local variables
        class xCamBlend * * end; // r30
        class xCamBlend * * it; // r31
    }
}
// Range: 0x8003DCA0 -> 0x8003DE3C
void xCamGroup::reset(class xCamGroup * this /* r31 */) {
    // References
    // -> class xMat4x3 g_I3;
}
// Range: 0x8003DE40 -> 0x8003E1CC
void xCamGroup::update(class xCamGroup * this /* r30 */, class xScene & scene /* r26 */, float dt /* f31 */) {
    // References
    // -> float SECS_PER_VBLANK;
    // -> class DoFEffectSettings GlobalDoFSettings;
}
// signature: xCamGroup::transition_to(xCam &, const xCamTransitionParams *, bool, bool)
// Range: 0x8003E220 -> 0x8003E358
bool xCamGroup::transition_to(class xCamGroup * this /* r30 */, class xCam & cam /* r31 */) {
    {
        // Range: 0x8003E30C -> 0x8003E33C
        // Local variables
        class xCam * next; // r0
    }
}
// signature: xCamGroup::add(xCam &, bool)
// Range: 0x8003E360 -> 0x8003E370
void xCamGroup::add() {
}
// signature: xCamGroup::remove(xCam &, bool)
// Range: 0x8003E370 -> 0x8003E520
void xCamGroup::remove(class xCamGroup * this /* r31 */, class xCam & cam /* r30 */) {
}
// signature: xCamGroup::set_primary(xCam *, bool)
// Range: 0x8003E520 -> 0x8003E8CC
void xCamGroup::set_primary(class xCamGroup * this /* r29 */, class xCam * toCamera /* r30 */) {
}
// signature: xCamGroup::get_blend(xCamTransition *, xCam &)
// Range: 0x8003E8D0 -> 0x8003EAA0
class xCam * xCamGroup::get_blend(class xCamGroup * this /* r30 */) {
    // Local variables
    float blend_time; // f2

    {
        // Range: 0x8003E954 -> 0x8003E9AC
        // Local variables
        class xCam * pTo; // r5
        class xCamBlend * parent; // r31
    }
}
// Range: 0x8003EAA0 -> 0x8003EBDC
void xCamGroup::CreatePhantom(class xCamGroup * this /* r30 */) {
    // Local variables
    class xVec3 cameraPos; // r1+0x40
    class Vector4 posAABBox; // r1+0x30
    class Vector4 scaleAABBox; // r1+0x20
    class hkAabb infoAABB; // r1+0x50
    class hkpPropertyValue val; // r1+0x18

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x8003EBF0 -> 0x8003ECC0
void xCamGroup::UpdatePhantom() {
    // Local variables
    class xVec3 cameraPos; // r1+0x30
    class Vector4 posAABBox; // r1+0x20
    class Vector4 scaleAABBox; // r1+0x10
    class hkAabb infoAABB; // r1+0x40
}
// Range: 0x8003ECC0 -> 0x8003ED60
class xCam * xCam::do_transient_replacement() {
    // Local variables
    class xCam * curCam; // r30
    class xCam * next; // r29
}
// signature: xCamTimeBias::Start(int)
// Range: 0x8003EDA0 -> 0x8003EDB4
void xCamTimeBias::Start() {
}
// signature: xCamTimeBias::Update(float)
// Range: 0x8003EDC0 -> 0x8003EE28
void xCamTimeBias::Update() {
}
// Range: 0x8003EE30 -> 0x8003EEB0
void xCamTimeBias::Reverse() {
}
// Range: 0x8003EEB0 -> 0x8003EEB8
float xCamTimeBias::GetBias() {
}
// Range: 0x8003EEC0 -> 0x8003EED8
bool xCamTimeBias::IsActive() {
}
// Range: 0x8003EEE0 -> 0x8003EEFC
bool xCamTimeBias::DidComplete() {
}
// Range: 0x8003EF00 -> 0x8003EF58
void xCamBlend::create() {
}
// Range: 0x8003EF60 -> 0x8003EF64
void xCamBlend::destroy() {
}
// Range: 0x8003EF70 -> 0x8003F2DC
void xCamBlend::start(class xCamBlend * this /* r31 */) {
    // References
    // -> static enum xCamOrientType orient_table[2][2];
    // -> static enum xCamCoordType coord_table[3][3];
}
// Range: 0x8003F2E0 -> 0x8003F500
void xCamBlend::stop(class xCamBlend * this /* r31 */) {
}
// Range: 0x8003F500 -> 0x8003F560
void xCamBlend::pre_update(class xCamBlend * this /* r30 */, class xScene & scene /* r31 */) {
}
// Range: 0x8003F560 -> 0x8003F5C0
void xCamBlend::post_update(class xCamBlend * this /* r30 */, class xScene & scene /* r31 */) {
}
// Range: 0x8003F5C0 -> 0x8003F8B0
void xCamBlend::update(class xCamBlend * this /* r31 */, class xScene & scene /* r30 */, float dt /* f30 */) {
    // Local variables
    float s; // f31
}
// signature: xCamBlend::GetTargets(xVec3 *, xVec3 *) const
// Range: 0x8003F8F0 -> 0x8003F904
void xCamBlend::GetTargets() const {
}
// Range: 0x8003F910 -> 0x8003F98C
class xCam * xCamBlend::get_next(class xCamBlend * this /* r31 */) {
}
// Range: 0x8003F990 -> 0x8003FA0C
class xCam * xCamBlend::find_camera(class xCamBlend * this /* r29 */, unsigned long long ownerID /* r31:r30 */) {
    // Local variables
    class xCam * found; // r3
}
// Range: 0x8003FA30 -> 0x8003FBA0
void xCamBlend::blend_coord(class xCamBlend * this /* r30 */, float s /* f31 */) {
    {
        // Range: 0x8003FAA8 -> 0x8003FB14
        // Local variables
        class xCamCoordCylinder c2; // r1+0x48
        class xCamCoordCylinder c1; // r1+0x60
    }
    {
        // Range: 0x8003FB18 -> 0x8003FB84
        // Local variables
        class xCamCoordSphere c2; // r1+0x8
        class xCamCoordSphere c1; // r1+0x28
    }
}
// Range: 0x80040320 -> 0x800410E0
void xCamBlend::blend_orient(class xCamBlend * this /* r31 */, float s /* f30 */) {
    {
        // Range: 0x8004037C -> 0x800404DC
        // Local variables
        class xQuat c2; // r1+0x20
        class xQuat c1; // r1+0x30
    }
    {
        // Range: 0x800404E0 -> 0x800410A8
        // Local variables
        class xCamOrientEuler c2; // r1+0x8
        class xCamOrientEuler c1; // r1+0x14
    }
}
