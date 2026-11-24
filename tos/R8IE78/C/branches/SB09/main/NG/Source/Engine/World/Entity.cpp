/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\World\Entity.cpp
*/
static class EntityModule entmod; // size: 0x98, address: 0x80783200
static class ModuleRegistrator entityModReg; // size: 0x8, address: 0x80783298
class Module * entityModule; // size: 0x4, address: 0x806CF550
class RelativePriority priority[1]; // size: 0xC, address: 0x806CF554
class AbstractAllocator aaEntityPool; // size: 0x8, address: 0x807832A0
// Range: 0x802052E0 -> 0x80205324
static void * @unnamed@WAD02_cpp@::EntityModule::EntityModule(class EntityModule * this /* r31 */) {
    // References
    // -> static struct {} __vt__Q219@unnamed@WAD02_cpp@12EntityModule;
}
// signature: @unnamed@WAD02_cpp@::EntityModule::GetPriority(int &) const
// Range: 0x80205330 -> 0x80205370
static class RelativePriority * @unnamed@WAD02_cpp@::EntityModule::GetPriority() const {
    // References
    // -> class RelativePriority priority[1];
    // -> class Module * worldModule;
}
// signature: World::EntityHandleBase::InitForBlobloid(Domains::BlobAddArg *)
// Range: 0x80205370 -> 0x80205468
void World::EntityHandleBase::InitForBlobloid(class EntityHandleBase * this /* r31 */) {
    // Local variables
    int wmlTypeID; // r7
    char * blobData; // r0

    // References
    // -> class RTTID_Hash g_rttidHash[264];
    // -> unsigned int g_rttidMaxType;
}
// signature: World::EntityHandleBase::InitialFixup(World::Asset *)
// Range: 0x80205470 -> 0x802054A0
void World::EntityHandleBase::InitialFixup() {
    // Local variables
    long offset; // r0

    // References
    // -> class RTTID_Data g_rttidDataTable[264];
}
// Range: 0x802054A0 -> 0x802054F4
class Entity * World::EntityHandleBase::ActivateEntity(class EntityHandleBase * this /* r31 */) {
    // Local variables
    class Entity * ent; // r0

    // References
    // -> class RTTID_Data g_rttidDataTable[264];
}
// signature: World::EntityHandleBase::DeactivateEntity(World::Entity *)
// Range: 0x80205500 -> 0x80205514
void World::EntityHandleBase::DeactivateEntity() {
}
// Range: 0x80205520 -> 0x80205534
void World::EntityHandleBase::AddEntityToWorld() {
}
// Range: 0x80205540 -> 0x80205544
void World::EntityHandleBase::RemoveEntityFromWorld() {
}
// signature: World::Entity::TotalHackReplaceHandle(World::EntityHandleBase *)
// Range: 0x80205550 -> 0x80205560
void World::Entity::TotalHackReplaceHandle() {
}
// signature: World::EntityHandleBase::Activate(const Util::Referrer &)
// Range: 0x80205560 -> 0x802055A8
void World::EntityHandleBase::Activate(class EntityHandleBase * this /* r31 */) {
}
