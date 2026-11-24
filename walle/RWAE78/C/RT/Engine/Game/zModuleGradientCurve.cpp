/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zModuleGradientCurve.cpp
*/
class _OGGradientCurveSchema _OGGradientCurveschema; // size: 0x18, address: 0x807912F8
class SchemaRegistrator _OGGradientCurveschemaReg; // size: 0x8, address: 0x80791310
static class zModuleGradientCurve * g_mod_grad_curve; // size: 0x4, address: 0x80791318
static class zModuleGradientCurve mod_grad_curve; // size: 0x20, address: 0x80791320
// Range: 0x800EF5B0 -> 0x800EF5C0
void World::_OGGradientCurveEntity::Deactivate() {
}
// Range: 0x800EF5C0 -> 0x800EF610
void World::_OGGradientCurveEntity::Destroy(class _OGGradientCurveEntity * this /* r31 */) {
}
// signature: World::_OGGradientCurveSchema::Fix(World::Asset *, long, int)
// Range: 0x800EF670 -> 0x800EF678
void World::_OGGradientCurveSchema::Fix() {
}
// signature: World::_OGGradientCurveSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800EF680 -> 0x800EF6CC
class EntityStub * World::_OGGradientCurveSchema::CreateStub(class _OGGradientCurveSchema * this /* r31 */) {
}
// signature: World::_OGGradientCurveSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800EF6D0 -> 0x800EF6E8
void World::_OGGradientCurveSchema::DestroyStub() {
}
// signature: World::_OGGradientCurveSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800EF6F0 -> 0x800EF754
class Entity * World::_OGGradientCurveSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World22_OGGradientCurveEntity;
}
// Range: 0x800EF7A0 -> 0x800EF7BC
void GradientCurve::zModuleGradientCurve::ModulePrepUse() {
}
// Range: 0x800EF7C0 -> 0x800EF868
void GradientCurve::zModuleGradientCurve::SceneInit(class zModuleGradientCurve * this /* r29 */) {
    {
        // Range: 0x800EF80C -> 0x800EF83C
        // Local variables
        unsigned int i; // r30

        {
            // Range: 0x800EF80C -> 0x800EF83C
            // Local variables
            class GradientCurve * gc; // r0
        }
    }
}
// Range: 0x800EF870 -> 0x800EF91C
void GradientCurve::zModuleGradientCurve::SceneExit(class zModuleGradientCurve * this /* r26 */) {
    {
        // Range: 0x800EF888 -> 0x800EF890
        // Local variables
        unsigned int i; // r27
    }
}
// signature: GradientCurve::zModuleGradientCurve::GetCurve(unsigned long long) const
// Range: 0x800EF920 -> 0x800EF964
class zGradientCurve * GradientCurve::zModuleGradientCurve::GetCurve() const {
    // Local variables
    class zGradientCurve * c; // r3
    class zGradientCurve * end; // r7
}
