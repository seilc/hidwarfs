/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xCam.cpp
*/
float SHAKE_FOREVER; // size: 0x4, address: 0x806C6D0C
static enum xCamCoordType coord_table[3][3]; // size: 0x24, address: 0x806C6D24
static enum xCamOrientType orient_table[2][2]; // size: 0x10, address: 0x806C6D48
// Range: 0x8001C1A0 -> 0x8001C1B0
void xCam::start() {
}
// Range: 0x8001C1B0 -> 0x8001C1C0
void xCam::stop() {
}
// Range: 0x8001C1C0 -> 0x8001C1C4
void xCam::scene_enter() {
}
// Range: 0x8001C1D0 -> 0x8001C1D4
void xCam::scene_exit() {
}
// Range: 0x8001C240 -> 0x8001C5F8
void xCam::refresh_mat(class xCam * this /* r31 */) {
}
// Range: 0x8001C600 -> 0x8001C720
void xCam::GetTargets(class xCam * this /* r26 */, class xVec3 * Pos0 /* r27 */, class xVec3 * Pos1 /* r28 */) const {
    // Local variables
    int playerIndex; // r4
    class zPlayer * p1; // r30
    class zPlayer * p2; // r29

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8001C740 -> 0x8001C78C
void xCam::create() {
}
// signature: xCamShake::Start(float, float, float, float, float, const xVec3 *, const xVec3 *, bool)
// Range: 0x8001C790 -> 0x8001C838
void xCamShake::Start() {
}
// signature: xCamShake::Update(float, xMat4x3 &)
// Range: 0x8001C840 -> 0x8001D06C
void xCamShake::Update(class xCamShake * this /* r29 */, class xMat4x3 * m /* r30 */) {
    // Local variables
    float x; // f30
    float y; // f10
    float scale; // f29
    float noise; // f30
    float scale; // f29
    float scale; // f29
    class xVec3 e; // r1+0x8

    {
        // Range: 0x8001CA54 -> 0x8001CBC0
        // Local variables
        float len; // f0
        class xVec3 d; // r1+0x14

        {
            // Range: 0x8001CBA8 -> 0x8001CBC0
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
// Range: 0x8001D0B0 -> 0x8001D518
void xCamGroup::create(class xCamGroup * this /* r25 */) {
    {
        // Range: 0x8001D310 -> 0x8001D318
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
// Range: 0x8001D520 -> 0x8001D5D8
void xCamGroup::destroy(class xCamGroup * this /* r29 */) {
    {
        // Range: 0x8001D574 -> 0x8001D580
        // Local variables
        class xCamBlend * * end; // r30
        class xCamBlend * * it; // r31
    }
}
// Range: 0x8001D5E0 -> 0x8001D77C
void xCamGroup::reset(class xCamGroup * this /* r31 */) {
    // References
    // -> class xMat4x3 g_I3;
}
// Range: 0x8001D780 -> 0x8001DB2C
void xCamGroup::update(class xCamGroup * this /* r30 */, class xScene * scene /* r26 */, float dt /* f31 */) {
    // References
    // -> float SECS_PER_VBLANK;
    // -> class DoFEffectSettings GlobalDoFSettings;
}
// signature: xCamGroup::transition_to(xCam &, const xCamTransitionParams *, bool, bool)
// Range: 0x8001DB70 -> 0x8001DC34
void xCamGroup::transition_to(class xCamGroup * this /* r31 */, class xCam * cam /* r10 */) {
    {
        // Range: 0x8001DBF0 -> 0x8001DC20
        // Local variables
        class xCam * next; // r0
    }
}
// signature: xCamGroup::add(xCam &, bool)
// Range: 0x8001DC40 -> 0x8001DC94
void xCamGroup::add() {
}
// signature: xCamGroup::remove(xCam &, bool)
// Range: 0x8001DCA0 -> 0x8001DE64
void xCamGroup::remove(class xCamGroup * this /* r31 */, class xCam * cam /* r30 */) {
}
// signature: xCamGroup::set_primary(xCam *, bool)
// Range: 0x8001DE70 -> 0x8001E25C
void xCamGroup::set_primary(class xCamGroup * this /* r29 */, class xCam * toCamera /* r30 */) {
}
// signature: xCamGroup::get_blend(xCamTransition *, xCam &)
// Range: 0x8001E260 -> 0x8001E430
class xCam * xCamGroup::get_blend(class xCamGroup * this /* r30 */) {
    // Local variables
    float blend_time; // f2

    {
        // Range: 0x8001E2E4 -> 0x8001E33C
        // Local variables
        class xCam * pTo; // r5
        class xCamBlend * parent; // r31
    }
}
// Range: 0x8001E430 -> 0x8001E56C
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
// Range: 0x8001E580 -> 0x8001E650
void xCamGroup::UpdatePhantom() {
    // Local variables
    class xVec3 cameraPos; // r1+0x30
    class Vector4 posAABBox; // r1+0x20
    class Vector4 scaleAABBox; // r1+0x10
    class hkAabb infoAABB; // r1+0x40
}
// Range: 0x8001E650 -> 0x8001E6F0
class xCam * xCam::do_transient_replacement() {
    // Local variables
    class xCam * curCam; // r30
    class xCam * next; // r29
}
// signature: xCamTimeBias::Start(int)
// Range: 0x8001E7D0 -> 0x8001E7E4
void xCamTimeBias::Start() {
}
// signature: xCamTimeBias::Update(float)
// Range: 0x8001E7F0 -> 0x8001E858
void xCamTimeBias::Update() {
}
// Range: 0x8001E860 -> 0x8001E8E0
void xCamTimeBias::Reverse() {
}
// Range: 0x8001E8E0 -> 0x8001E8E8
float xCamTimeBias::GetBias() {
}
// Range: 0x8001E8F0 -> 0x8001E908
bool xCamTimeBias::IsActive() {
}
// Range: 0x8001E910 -> 0x8001E92C
bool xCamTimeBias::DidComplete() {
}
// Range: 0x8001E930 -> 0x8001E98C
void xCamBlend::create() {
}
// Range: 0x8001E990 -> 0x8001E994
void xCamBlend::destroy() {
}
// Range: 0x8001E9A0 -> 0x8001ED0C
void xCamBlend::start(class xCamBlend * this /* r31 */) {
    // References
    // -> static enum xCamOrientType orient_table[2][2];
    // -> static enum xCamCoordType coord_table[3][3];
}
// Range: 0x8001ED10 -> 0x8001EF28
void xCamBlend::stop(class xCamBlend * this /* r31 */) {
}
// Range: 0x8001EF30 -> 0x8001EF90
void xCamBlend::pre_update(class xCamBlend * this /* r30 */, class xScene * scene /* r31 */) {
}
// Range: 0x8001EF90 -> 0x8001EFF0
void xCamBlend::post_update(class xCamBlend * this /* r30 */, class xScene * scene /* r31 */) {
}
// Range: 0x8001EFF0 -> 0x8001F214
void xCamBlend::update(class xCamBlend * this /* r31 */, class xScene * scene /* r30 */, float dt /* f30 */) {
    // Local variables
    float s; // f31
}
// Range: 0x8001F240 -> 0x8001F2BC
class xCam * xCamBlend::get_next(class xCamBlend * this /* r31 */) {
}
// Range: 0x8001F2C0 -> 0x8001F33C
class xCam * xCamBlend::find_camera(class xCamBlend * this /* r29 */, unsigned long long ownerID /* r31:r30 */) {
    // Local variables
    class xCam * found; // r3
}
// Range: 0x8001F360 -> 0x8001F4D0
void xCamBlend::blend_coord(class xCamBlend * this /* r30 */, float s /* f31 */) {
    {
        // Range: 0x8001F3D8 -> 0x8001F444
        // Local variables
        class xCamCoordCylinder c2; // r1+0x48
        class xCamCoordCylinder c1; // r1+0x60
    }
    {
        // Range: 0x8001F448 -> 0x8001F4B4
        // Local variables
        class xCamCoordSphere c2; // r1+0x8
        class xCamCoordSphere c1; // r1+0x28
    }
}
// Range: 0x8001FCB0 -> 0x80020A70
void xCamBlend::blend_orient(class xCamBlend * this /* r31 */, float s /* f30 */) {
    {
        // Range: 0x8001FD0C -> 0x8001FE6C
        // Local variables
        class xQuat c2; // r1+0x20
        class xQuat c1; // r1+0x30
    }
    {
        // Range: 0x8001FE70 -> 0x80020A38
        // Local variables
        class xCamOrientEuler c2; // r1+0x8
        class xCamOrientEuler c1; // r1+0x14
    }
}
// Range: 0x80020A70 -> 0x80020AD4
void xCamDebug::create() {
}
// Range: 0x80020AE0 -> 0x80020CD0
void xCamDebug::start(class xCamDebug * this /* r30 */) {
}
// signature: xCamDebug::update(xScene &, float)
// Range: 0x80020CD0 -> 0x80021178
void xCamDebug::update(class xCamDebug * this /* r30 */, float dt /* f29 */) {
    // Local variables
    class xVec2 primaryStickInput; // r1+0x10
    class xVec2 secondaryStickInput; // r1+0x8

    {
        // Range: 0x80020D48 -> 0x80020F70
        // Local variables
        class xVec3 dat; // r1+0x24
        float dy; // f5
        class xVec3 dright; // r1+0x30
        float dpitch; // f1
        float dyaw; // f3
        float move_mult; // f30
        float turn_mult; // f31
    }
    {
        // Range: 0x80020F70 -> 0x80021140
        // Local variables
        class xVec3 dat; // r1+0x18
        float dpitch; // f1
        float dyaw; // f3
        float move_mult; // f31
        float turn_mult; // f30
    }
}
