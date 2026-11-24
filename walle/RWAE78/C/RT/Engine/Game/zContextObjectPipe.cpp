/*
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zContextObjectPipe.cpp
*/
static class xOGSchema PipeSchema; // size: 0x18, address: 0x807F8E10
static class SchemaRegistrator PipeSchemaReg; // size: 0x8, address: 0x807F8E28
// signature: World::PipeEntity::RegisterContext(World::xOGEntityContext *)
// Range: 0x8022A750 -> 0x8022A75C
void World::PipeEntity::RegisterContext() {
}
// Range: 0x8022A740 -> 0x8022A74C
void World::PipeEntity::UnregisterContext() {
}
// Range: 0x8022A6B0 -> 0x8022A740
void World::PipeEntity::UpdateRender() {
}
// Range: 0x801F7D20 -> 0x801F7D94
void zContextObjectPipe_Init(void * ent /* r30 */, void * inAsset /* r31 */) {
    // References
    // -> struct {} __vt__18zContextObjectPipe;
}
// Range: 0x801F7DA0 -> 0x801F7E30
void zContextObjectPipe::SceneExit() {
    // Local variables
    int tidx; // r0
    class zContextObjectPipe * current; // r31
    class zContextObjectPipe * last; // r30

    // References
    // -> class zGlobals globals;
}
// signature: PipeEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801F7E30 -> 0x801F7E4C
static void PipeEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x801F7E50 -> 0x801F7FE4
void zContextObjectPipe::Init(class zContextObjectPipe * this /* r29 */, class zContextObjectPipeAsset * inAsset /* r30 */) {
    // Local variables
    class Curve * pCurve; // r0
    float u1; // f31
    float u2; // r1+0xC
    class PipeContext context; // r1+0x8
}
// Range: 0x801F7FF0 -> 0x801F84B4
void zContextObjectPipe::CalculateBeadDirections(class zContextObjectPipe * this /* r28 */) {
    {
        // Range: 0x801F8064 -> 0x801F8428
        // Local variables
        unsigned int i; // r29

        {
            // Range: 0x801F8064 -> 0x801F8428
            // Local variables
            class xMat3x3 result; // r1+0x30
            class xMat3x3 rotMat; // r1+0x60
            class xVec3 at; // r1+0x8
            class xVec3 right; // r1+0x14
            class xVec3 up; // r1+0x20
        }
    }
}
// Range: 0x801F84C0 -> 0x801F84E4
void zContextObjectPipe::Setup() {
    // References
    // -> class xVec3 g_X3;
}
// signature: zContextObjectPipe::UpdateFacingVec(float)
// Range: 0x801F84F0 -> 0x801F8658
void zContextObjectPipe::UpdateFacingVec(class zContextObjectPipe * this /* r31 */) {
    // Local variables
    int start; // r7
    int end; // r8
    class xMat3x3 mat; // r1+0x18

    {
        // Range: 0x801F8504 -> 0x801F8518
        // Local variables
        unsigned int i; // r9
    }
    {
        // Range: 0x801F85D4 -> 0x801F862C
        // Local variables
        float t; // f1
        class xQuat q; // r1+0x8
    }
}
// signature: zContextObjectPipe::Advance(float, float &, bool, bool)
// Range: 0x801F8660 -> 0x801F8730
bool zContextObjectPipe::Advance(class zContextObjectPipe * this /* r29 */, float dist /* f31 */, float * u /* r30 */, bool forward /* r31 */) {
    // Local variables
    bool result; // r0
}
// Range: 0x801F8730 -> 0x801F8B20
bool zContextObjectPipe::CanMount(class zContextObjectPipe * this /* r24 */, class zCommonPlayer * player /* r25 */, class MountData * mountData /* r26 */, class zContextObjectPriority * priority /* r27 */) const {
    // Local variables
    class xVec3 * pos; // r28
    class xIsect intersectData; // r1+0x9C
    class xVec3 splineDir; // r1+0x54
    bool upright; // r0
    float curvePosU; // r1+0x8
    class xVec3 curvePos; // r1+0x48
    float currDistance2; // f0
    class zContextObjectPriority thisPriority; // r1+0x88
    float xzVel; // f0
}
// Range: 0x801F8B30 -> 0x801F8DF8
bool zContextObjectPipe::Mount(class zContextObjectPipe * this /* r28 */, class zCommonPlayer * player /* r29 */, class MountData * mountData /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 pos; // r1+0x44
    class xVec3 splineDir; // r1+0x38
    class xVec3 splineDirN; // r1+0x2C
    bool match; // r0
}
// Range: 0x801F8E00 -> 0x801F8E08
unsigned char zContextObjectPipe::ClearChkby() const {
}
// signature: zContextObjectPipe::RestoreChkby(unsigned char) const
// Range: 0x801F8E10 -> 0x801F8E14
void zContextObjectPipe::RestoreChkby() const {
}
// signature: zContextObjectPipe::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801F8E20 -> 0x801F8F8C
void zContextObjectPipe::HandleEvent() {
}
