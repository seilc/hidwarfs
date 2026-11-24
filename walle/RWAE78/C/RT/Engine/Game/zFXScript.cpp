/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zFXScript.cpp
*/
class _OGFXScriptAssetSchema _OGFXScriptAssetschema; // size: 0x18, address: 0x8076DFE0
class SchemaRegistrator _OGFXScriptAssetschemaReg; // size: 0x8, address: 0x8076DFF8
// Range: 0x800D7560 -> 0x800D7570
void World::_OGFXScriptAssetEntity::Deactivate() {
}
// Range: 0x800D7570 -> 0x800D75C0
void World::_OGFXScriptAssetEntity::Destroy(class _OGFXScriptAssetEntity * this /* r31 */) {
}
// signature: World::_OGFXScriptAssetSchema::Fix(World::Asset *, long, int)
// Range: 0x800D7620 -> 0x800D7628
void World::_OGFXScriptAssetSchema::Fix() {
}
// signature: World::_OGFXScriptAssetSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800D7630 -> 0x800D767C
class EntityStub * World::_OGFXScriptAssetSchema::CreateStub(class _OGFXScriptAssetSchema * this /* r31 */) {
}
// signature: World::_OGFXScriptAssetSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800D7680 -> 0x800D7698
void World::_OGFXScriptAssetSchema::DestroyStub() {
}
// signature: World::_OGFXScriptAssetSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800D76A0 -> 0x800D7704
class Entity * World::_OGFXScriptAssetSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World22_OGFXScriptAssetEntity;
}
// signature: FXScriptEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800D7750 -> 0x800D7754
static void FXScriptEventWrapper() {
}
// signature: zFXScript::Init(void *, void *)
// Range: 0x800D7760 -> 0x800D782C
void zFXScript::Init(void * base /* r31 */) {
    // References
    // -> struct {} __vt__9zFXScript;
}
// Range: 0x800D7830 -> 0x800D7C6C
void zFXScript::BuildAssetList(class zFXScript * this /* r19 */) {
    // Local variables
    class vec3 * origin; // r0
    class PKRAssetTOCInfo assetInfo; // r1+0x8
    unsigned int i; // r20
}
// Range: 0x800D7C70 -> 0x800D7E24
void zFXScript::RegisterScript(class zFXScript * this /* r29 */) {
    // Local variables
    unsigned int i; // r30

    {
        // Range: 0x800D7C84 -> 0x800D7CA8
        // Local variables
        class zParticleSystem * sys; // r0
        class zParticleGenerator * pg; // r0
    }
    {
        // Range: 0x800D7CA8 -> 0x800D7DE8
        // Local variables
        class zObjectSystem * sys; // r0
        class zObjectGenerator * og; // r0
    }
}
// Range: 0x800D7E50 -> 0x800D7EC0
void zFXScript::RegisterAllScripts() {
    // Local variables
    int i; // r30
    int cnt; // r0
    unsigned int size; // r1+0x8
    unsigned long long wuid; // r1+0x10

    {
        // Range: 0x800D7E70 -> 0x800D7E9C
        // Local variables
        class zFXScript * fxScript; // r0
    }
}
// Range: 0x800D7EC0 -> 0x800D7F6C
void zFXScript_SceneExit() {
    // Local variables
    int tidx; // r0
    class zFXScript * current; // r29
    class zFXScript * last; // r28

    // References
    // -> class zGlobals globals;
}
