/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zModuleParSink.cpp
*/
class _OGParticleSinkSchema _OGParticleSinkschema; // size: 0x18, address: 0x80791370
class SchemaRegistrator _OGParticleSinkschemaReg; // size: 0x8, address: 0x80791388
static class zModuleParSink * g_mod_par_sink; // size: 0x4, address: 0x80791390
static class zModuleParSink mod_par_sink; // size: 0x20, address: 0x80791398
// Range: 0x800F0170 -> 0x800F0180
void World::_OGParticleSinkEntity::Deactivate() {
}
// Range: 0x800F0180 -> 0x800F01D0
void World::_OGParticleSinkEntity::Destroy(class _OGParticleSinkEntity * this /* r31 */) {
}
// signature: World::_OGParticleSinkSchema::Fix(World::Asset *, long, int)
// Range: 0x800F0230 -> 0x800F0238
void World::_OGParticleSinkSchema::Fix() {
}
// signature: World::_OGParticleSinkSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800F0240 -> 0x800F028C
class EntityStub * World::_OGParticleSinkSchema::CreateStub(class _OGParticleSinkSchema * this /* r31 */) {
}
// signature: World::_OGParticleSinkSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800F0290 -> 0x800F02A8
void World::_OGParticleSinkSchema::DestroyStub() {
}
// signature: World::_OGParticleSinkSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800F02B0 -> 0x800F0314
class Entity * World::_OGParticleSinkSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World21_OGParticleSinkEntity;
}
// Range: 0x800F03A0 -> 0x800F03C4
void zModuleParSink::ModulePrepUse() {
}
// Range: 0x800F03D0 -> 0x800F06A4
void zModuleParSink::ScenePostInit(class zModuleParSink * this /* r28 */) {
    {
        // Range: 0x800F0460 -> 0x800F0560
        // Local variables
        int i; // r29

        {
            // Range: 0x800F0460 -> 0x800F0560
            // Local variables
            class xMat4x3 mat; // r1+0x8
            class ParticleSink * ps; // r0
        }
    }
}
// Range: 0x800F06B0 -> 0x800F0704
void zModuleParSink::SceneExit(class zModuleParSink * this /* r31 */) {
}
// signature: zModuleParSink::Timestep(float)
// Range: 0x800F0710 -> 0x800F0714
void zModuleParSink::Timestep() {
}
