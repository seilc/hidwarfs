/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zDecalEmitter.cpp
*/
class _OGDecalEmitterSchema _OGDecalEmitterschema; // size: 0x18, address: 0x8076D1B0
class SchemaRegistrator _OGDecalEmitterschemaReg; // size: 0x8, address: 0x8076D1C8
// Range: 0x800C6CF0 -> 0x800C6D00
void World::_OGDecalEmitterEntity::Deactivate() {
}
// Range: 0x800C6D00 -> 0x800C6D50
void World::_OGDecalEmitterEntity::Destroy(class _OGDecalEmitterEntity * this /* r31 */) {
}
// signature: World::_OGDecalEmitterSchema::Fix(World::Asset *, long, int)
// Range: 0x800C6DB0 -> 0x800C6DB8
void World::_OGDecalEmitterSchema::Fix() {
}
// signature: World::_OGDecalEmitterSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800C6DC0 -> 0x800C6E0C
class EntityStub * World::_OGDecalEmitterSchema::CreateStub(class _OGDecalEmitterSchema * this /* r31 */) {
}
// signature: World::_OGDecalEmitterSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800C6E10 -> 0x800C6E28
void World::_OGDecalEmitterSchema::DestroyStub() {
}
// signature: World::_OGDecalEmitterSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800C6E30 -> 0x800C6E94
class Entity * World::_OGDecalEmitterSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World21_OGDecalEmitterEntity;
}
// Range: 0x800C6EE0 -> 0x800C6F84
void zDecalEmitter::Init(void * data /* r30 */, void * asset /* r31 */) {
}
// signature: zDecalEmitter::init(Sext::DecalEmitter &)
// Range: 0x800C6F90 -> 0x800C701C
void zDecalEmitter::init(class zDecalEmitter * this /* r31 */) {
}
// Range: 0x800C7020 -> 0x800C7074
void zDecalEmitter::ResetMat(class zDecalEmitter * this /* r31 */) {
}
// signature: zDecalEmitter::OnEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800C7080 -> 0x800C70B4
void zDecalEmitter::OnEvent() {
    // Local variables
    class zDecalEmitter * us; // r0
}
// signature: zDecalEmitter::emit(unsigned int)
// Range: 0x800C70C0 -> 0x800C7104
void zDecalEmitter::emit() {
}
