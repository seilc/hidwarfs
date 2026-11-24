/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\World\Entity.cpp
*/
static class EntityModule entmod; // size: 0x98, address: 0x808531B0
static class ModuleRegistrator entityModReg; // size: 0x8, address: 0x80853248
class Module * entityModule; // size: 0x4, address: 0x807C188C
static class RelativePriority priority[1]; // size: 0xC, address: 0x807C1890
class AbstractAllocator aaEntityPool; // size: 0x8, address: 0x80853258
// signature: @unnamed@WAD02_cpp@::EntityModule::GetPriority(int &) const
// Range: 0x80363A08 -> 0x80363A48
static class RelativePriority * @unnamed@WAD02_cpp@::EntityModule::GetPriority() const {
    // References
    // -> static class RelativePriority priority[1];
    // -> class Module * worldModule;
}
// signature: @unnamed@WAD02_cpp@::EntityModule::Startup(int)
// Range: 0x80363A48 -> 0x80363A4C
static void @unnamed@WAD02_cpp@::EntityModule::Startup() {
}
// signature: @unnamed@WAD02_cpp@::EntityPoolAllocCB(Memory::AbstractAllocator *, unsigned long, eMemMgrTag)
// Range: 0x80363A4C -> 0x803640A8
static void * @unnamed@WAD02_cpp@::EntityPoolAllocCB(unsigned long size /* r28 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: @unnamed@WAD02_cpp@::EntityPoolFreeCB(Memory::AbstractAllocator *, void *, unsigned long)
// Range: 0x803640A8 -> 0x803644F0
static void @unnamed@WAD02_cpp@::EntityPoolFreeCB(void * mem /* r30 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: World::EntityHandleBase::InitForBlobloid(Domains::BlobAddArg *)
// Range: 0x803644F0 -> 0x80364D10
void World::EntityHandleBase::InitForBlobloid(class EntityHandleBase * this /* r27 */) {
    // Local variables
    int wmlTypeID; // r7
    char * blobData; // r3

    // References
    // -> class RTTID_Data g_rttidDataTable[246];
    // -> class EmbeddedTreeAVL * g_handleTypeTrees;
    // -> class RTTID_Hash g_rttidHash[246];
    // -> unsigned int g_rttidMaxType;
}
// signature: World::EntityHandleBase::DeactivateEntity(World::Entity *)
// Range: 0x80364D10 -> 0x80364D24
void World::EntityHandleBase::DeactivateEntity() {
}
// Range: 0x80364D24 -> 0x80364D64
void World::EntityHandleBase::AddEntityToWorld() {
    // References
    // -> static class PoolArray entitiesUpdateRender;
}
// Range: 0x80364D64 -> 0x80364DDC
void World::EntityHandleBase::RemoveEntityFromWorld() {
    // References
    // -> static class PoolArray entitiesUpdateRender;
}
// signature: World::Entity::TotalHackReplaceHandle(World::EntityHandleBase *)
// Range: 0x80364DDC -> 0x80364DEC
void World::Entity::TotalHackReplaceHandle() {
}
// signature: World::EntityHandleBase::Activate(const Util::Referrer &)
// Range: 0x80364DEC -> 0x80364E5C
void World::EntityHandleBase::Activate(class EntityHandleBase * this /* r31 */) {
    // References
    // -> class RTTID_Data g_rttidDataTable[246];
}
