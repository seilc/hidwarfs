/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\AssetManager\Overseer\ScadMgr.cpp
*/
static class ScadMgrModule scadMgrMod; // size: 0x9C, address: 0x807FE234
static class ModuleRegistrator scadMgrModReg; // size: 0x8, address: 0x807FE2D0
class Module * scadMgrModule; // size: 0x4, address: 0x80706F58
// Range: 0x80236678 -> 0x80236688
class ScadMgr * Overseer::GetScadManager() {
    // References
    // -> static class ScadMgrModule scadMgrMod;
}
// signature: Overseer::ScadMgrModule::Startup(int)
// Range: 0x80236688 -> 0x80236900
void Overseer::ScadMgrModule::Startup(class ScadMgrModule * this /* r31 */) {
}
// signature: Overseer::ScadMgrModule::Shutdown(int)
// Range: 0x80236900 -> 0x80236C0C
void Overseer::ScadMgrModule::Shutdown(class ScadMgrModule * this /* r21 */) {
    // References
    // -> static class MemHandle nullHandle;
    // -> static class DynaMemModule dynaMemMod;
}
// signature: Overseer::ScadMgrModule::Update(int)
// Range: 0x80236C0C -> 0x80236C10
void Overseer::ScadMgrModule::Update() {
}
// signature: Overseer::ScadMgr::FindGoodie(unsigned long long, bool)
// Range: 0x80237090 -> 0x80237254
class Goodie * Overseer::ScadMgr::FindGoodie(class ScadMgr * this /* r29 */, unsigned long long blobID /* r31:r30 */) {
}
// Range: 0x80237254 -> 0x80237424
class EntityHandleBase * Overseer::ScadMgr::FindEntity(class ScadMgr * this /* r29 */, unsigned long long entityUID /* r31:r30 */) {
}
// signature: Overseer::ScadMgr::FindEntityByType(int, unsigned int)
// Range: 0x80237424 -> 0x80237464
class Entity * Overseer::ScadMgr::FindEntityByType() {
}
// signature: Overseer::ScadMgr::CountEntityByType(int)
// Range: 0x80237464 -> 0x80237494
unsigned int Overseer::ScadMgr::CountEntityByType() {
    // Local variables
    unsigned int count; // r3
}
// Range: 0x80237494 -> 0x802374A4
unsigned long long Overseer::Goodie::GetAssetID(class Goodie * this /* r4 */) const {
}
// Range: 0x802374A4 -> 0x802374D4
class Asset * Overseer::Goodie::GetAsset() const {
}
// Range: 0x802374D4 -> 0x802374DC
int Overseer::Goodie::GetAssetSize() const {
}
// Range: 0x802374DC -> 0x80237724
class EntityHandleBase * Overseer::Goodie::FindInternal(unsigned long long id /* r30:r29 */) const {
    // References
    // -> static class ScadMgrModule scadMgrMod;
}
// signature: Overseer::Goodie::ActivateEntity(World::EntityHandleBase *, World::EntityStub *) const
// Range: 0x80237724 -> 0x802377C4
class Entity * Overseer::Goodie::ActivateEntity(class Goodie * this /* r30 */, class EntityHandleBase * handle /* r31 */) const {
    // Local variables
    class Entity * ent; // r0
}
// signature: Overseer::Goodie::DeactivateEntity(World::EntityHandleBase *, World::Entity *) const
// Range: 0x802377C4 -> 0x802377D8
void Overseer::Goodie::DeactivateEntity() const {
}
// signature: Overseer::Goodie::CreateStub(World::EntityHandleBase *, World::Entity *) const
// Range: 0x802377D8 -> 0x80237878
class EntityStub * Overseer::Goodie::CreateStub(class Goodie * this /* r30 */, class EntityHandleBase * handle /* r31 */) const {
    // Local variables
    class EntityStub * entStub; // r0
}
// signature: Overseer::Goodie::DestroyStub(World::EntityHandleBase *, World::EntityStub *) const
// Range: 0x80237878 -> 0x80237898
void Overseer::Goodie::DestroyStub() const {
}
