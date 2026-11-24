/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zSoundsNamed.cpp
*/
class _OGSoundsNamedSchema _OGSoundsNamedschema; // size: 0x18, address: 0x807E3978
class SchemaRegistrator _OGSoundsNamedschemaReg; // size: 0x8, address: 0x807E3990
static class zSoundsNamed * s_pSoundsNamedInSceneHead; // size: 0x4, address: 0x807E3998
static class zSoundsNamed * s_pSoundsNamedInSceneTail; // size: 0x4, address: 0x807E399C
// Range: 0x801C2690 -> 0x801C26A0
void World::_OGSoundsNamedEntity::Deactivate() {
}
// Range: 0x801C26A0 -> 0x801C26F0
void World::_OGSoundsNamedEntity::Destroy(class _OGSoundsNamedEntity * this /* r31 */) {
}
// signature: World::_OGSoundsNamedSchema::Fix(World::Asset *, long, int)
// Range: 0x801C2750 -> 0x801C2758
void World::_OGSoundsNamedSchema::Fix() {
}
// signature: World::_OGSoundsNamedSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801C2760 -> 0x801C27AC
class EntityStub * World::_OGSoundsNamedSchema::CreateStub(class _OGSoundsNamedSchema * this /* r31 */) {
}
// signature: World::_OGSoundsNamedSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x801C27B0 -> 0x801C27C8
void World::_OGSoundsNamedSchema::DestroyStub() {
}
// signature: World::_OGSoundsNamedSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801C27D0 -> 0x801C2838
class Entity * World::_OGSoundsNamedSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World20_OGSoundsNamedEntity;
}
// signature: @unnamed@WAD03_cpp@::SoundsNamedEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801C2880 -> 0x801C289C
static void @unnamed@WAD03_cpp@::SoundsNamedEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x801C28A0 -> 0x801C2A2C
void * zSoundsNamed::zSoundsNamed(class zSoundsNamed * this /* r30 */, class zSoundsNamedAsset * asset /* r31 */) {
    {
        // Range: 0x801C2980 -> 0x801C2994
        // Local variables
        unsigned int iSound; // r8
    }

    // References
    // -> static class zSoundsNamed * s_pSoundsNamedInSceneTail;
    // -> static class zSoundsNamed * s_pSoundsNamedInSceneHead;
    // -> struct {} __vt__12zSoundsNamed;
}
// signature: zSoundsNamed::Init(void *, void *)
// Range: 0x801C2A30 -> 0x801C2A40
void zSoundsNamed::Init() {
}
// signature: zSoundsNamed::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801C2A40 -> 0x801C2B94
void zSoundsNamed::HandleEvent(class zSoundsNamed * this /* r31 */) {
    // References
    // -> bool gSysForceExit;
    // -> static class zSoundModule * sMod;
    // -> class zGlobals globals;
}
