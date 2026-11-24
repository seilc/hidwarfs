/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zEnv.cpp
*/
class _OGEnvSchema _OGEnvschema; // size: 0x18, address: 0x8076D218
class SchemaRegistrator _OGEnvschemaReg; // size: 0x8, address: 0x8076D230
// Range: 0x800C8C80 -> 0x800C8C90
void World::_OGEnvEntity::Deactivate() {
}
// Range: 0x800C8C90 -> 0x800C8CE0
void World::_OGEnvEntity::Destroy(class _OGEnvEntity * this /* r31 */) {
}
// signature: World::_OGEnvSchema::Fix(World::Asset *, long, int)
// Range: 0x800C8D40 -> 0x800C8D48
void World::_OGEnvSchema::Fix() {
}
// signature: World::_OGEnvSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800C8D50 -> 0x800C8D9C
class EntityStub * World::_OGEnvSchema::CreateStub(class _OGEnvSchema * this /* r31 */) {
}
// signature: World::_OGEnvSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800C8DA0 -> 0x800C8DB8
void World::_OGEnvSchema::DestroyStub() {
}
// signature: World::_OGEnvSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800C8DC0 -> 0x800C8E24
class Entity * World::_OGEnvSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World12_OGEnvEntity;
}
// signature: zEnvInit(void *, void *)
// Range: 0x800C8E70 -> 0x800C8F14
void zEnvInit() {
    // References
    // -> class LightKit * g_EnviromentLightKit;
}
// Range: 0x800C8F20 -> 0x800C8F28
void zEnvSceneExit() {
}
