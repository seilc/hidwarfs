/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zTunnelCurve.cpp
*/
class _OGTunnelCurveSchema _OGTunnelCurveschema; // size: 0x18, address: 0x807E4B50
class SchemaRegistrator _OGTunnelCurveschemaReg; // size: 0x8, address: 0x807E4B68
// Range: 0x801C7280 -> 0x801C7290
void World::_OGTunnelCurveEntity::Deactivate() {
}
// Range: 0x801C7290 -> 0x801C72E0
void World::_OGTunnelCurveEntity::Destroy(class _OGTunnelCurveEntity * this /* r31 */) {
}
// signature: World::_OGTunnelCurveSchema::Fix(World::Asset *, long, int)
// Range: 0x801C7340 -> 0x801C7348
void World::_OGTunnelCurveSchema::Fix() {
}
// signature: World::_OGTunnelCurveSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801C7350 -> 0x801C739C
class EntityStub * World::_OGTunnelCurveSchema::CreateStub(class _OGTunnelCurveSchema * this /* r31 */) {
}
// signature: World::_OGTunnelCurveSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x801C73A0 -> 0x801C73B8
void World::_OGTunnelCurveSchema::DestroyStub() {
}
// signature: World::_OGTunnelCurveSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801C73C0 -> 0x801C7424
class Entity * World::_OGTunnelCurveSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World20_OGTunnelCurveEntity;
}
// Range: 0x801C7470 -> 0x801C74D8
void zTunnelCurve::Init(void * ent /* r30 */, void * inAsset /* r31 */) {
    // References
    // -> struct {} __vt__12zTunnelCurve;
}
// signature: TunnelCurveEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801C74E0 -> 0x801C74FC
static void TunnelCurveEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x801C7500 -> 0x801C75A4
void zTunnelCurve::Init(class zTunnelCurve * this /* r30 */, class zTunnelCurveAsset * inAsset /* r31 */) {
    // Local variables
    class Curve * pCurve; // r0
}
// Range: 0x801C75B0 -> 0x801C7A4C
void zTunnelCurve::CalculateBeadDirections(class zTunnelCurve * this /* r31 */) {
    {
        // Range: 0x801C7614 -> 0x801C79C0
        // Local variables
        unsigned int i; // r28

        {
            // Range: 0x801C7614 -> 0x801C79C0
            // Local variables
            class xMat3x3 result; // r1+0x30
            class xMat3x3 rotMat; // r1+0x60
            float alignment; // f0
            class xVec3 at; // r1+0x8
            class xVec3 right; // r1+0x14
            class xVec3 up; // r1+0x20
        }
    }
}
// Range: 0x801C7A50 -> 0x801C7E5C
void zTunnelCurve::GetMatrixFromOffset(class zTunnelCurve * this /* r30 */, float u /* f29 */, class xMat3x3 * mat /* r31 */) {
    // Local variables
    int start; // r9
    int end; // r10

    {
        // Range: 0x801C7A88 -> 0x801C7A9C
        // Local variables
        unsigned int i; // r6
    }
    {
        // Range: 0x801C7B5C -> 0x801C7BB4
        // Local variables
        float t; // f1
        class xQuat q; // r1+0x8
    }
}
// signature: zTunnelCurve::UpdatePlayer(const xVec3 &, bool)
// Range: 0x801C7E60 -> 0x801C7EF8
void zTunnelCurve::UpdatePlayer(class zTunnelCurve * this /* r31 */) {
    // Local variables
    float u; // r1+0x8
    class xVec3 posOnCurve; // r1+0x18
}
// signature: zTunnelCurve::UpdateCamera(const xVec3 &)
// Range: 0x801C7F00 -> 0x801C7F98
void zTunnelCurve::UpdateCamera(class zTunnelCurve * this /* r31 */) {
    // Local variables
    float u; // r1+0xC
    float dist; // r1+0x8
    class xVec3 posOnCurve; // r1+0x1C
}
// signature: zTunnelCurve::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801C7FA0 -> 0x801C7FB4
void zTunnelCurve::HandleEvent() {
}
