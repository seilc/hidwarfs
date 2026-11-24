/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zRibbonEmitter.cpp
*/
class _OGRibbonEmitterSchema _OGRibbonEmitterschema; // size: 0x18, address: 0x80799948
class SchemaRegistrator _OGRibbonEmitterschemaReg; // size: 0x8, address: 0x80799960
// Range: 0x801AE750 -> 0x801AE760
void World::_OGRibbonEmitterEntity::Deactivate() {
}
// Range: 0x801AE760 -> 0x801AE7B0
void World::_OGRibbonEmitterEntity::Destroy(class _OGRibbonEmitterEntity * this /* r31 */) {
}
// signature: World::_OGRibbonEmitterSchema::Fix(World::Asset *, long, int)
// Range: 0x801AE810 -> 0x801AE818
void World::_OGRibbonEmitterSchema::Fix() {
}
// signature: World::_OGRibbonEmitterSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801AE820 -> 0x801AE86C
class EntityStub * World::_OGRibbonEmitterSchema::CreateStub(class _OGRibbonEmitterSchema * this /* r31 */) {
}
// signature: World::_OGRibbonEmitterSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x801AE870 -> 0x801AE888
void World::_OGRibbonEmitterSchema::DestroyStub() {
}
// signature: World::_OGRibbonEmitterSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801AE890 -> 0x801AE8F8
class Entity * World::_OGRibbonEmitterSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World22_OGRibbonEmitterEntity;
}
// signature: zRibbonEmitter::Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x801AE940 -> 0x801AEA54
void zRibbonEmitter::Init(class xBase * data /* r31 */) {
    // References
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
}
// signature: zRibbonEmitter::init(Sext::RibbonEmitter &)
// Range: 0x801AEA60 -> 0x801AEB74
void zRibbonEmitter::init(class zRibbonEmitter * this /* r31 */) {
    // References
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
}
// signature: zRibbonEmitter::emit(void *)
// Range: 0x801AEB80 -> 0x801AEBEC
void zRibbonEmitter::emit(class zRibbonEmitter * this /* r7 */) {
}
// Range: 0x801AEBF0 -> 0x801AEC44
void zRibbonEmitter::ResetMat(class zRibbonEmitter * this /* r31 */) {
}
// signature: zRibbonEmitter::OnEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801AEC50 -> 0x801AED94
void zRibbonEmitter::OnEvent(class xBase * to /* r30 */, class EventAny * genericParams /* r31 */) {
    // Local variables
    class zRibbonEmitter * us; // r0

    {
        // Range: 0x801AECC0 -> 0x801AED50
        // Local variables
        class EventActionActivate * params; // r0
    }
}
// signature: zRibbonEmitter::setActive(bool)
// Range: 0x801AEDA0 -> 0x801AEE50
void zRibbonEmitter::setActive(class zRibbonEmitter * this /* r31 */) {
}
