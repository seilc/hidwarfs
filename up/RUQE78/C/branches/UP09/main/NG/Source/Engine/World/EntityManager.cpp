/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\World\EntityManager.cpp
*/
static class EntityMgrModule entityMgrMod; // size: 0x9C, address: 0x80853260
static class ModuleRegistrator entityMgrModReg; // size: 0x8, address: 0x80853300
class Module * entityMgrModule; // size: 0x4, address: 0x807C189C
class EmbeddedTreeAVL g_handleSortedTree; // size: 0x8, address: 0x80853308
class EmbeddedTreeAVL * g_handleTypeTrees; // size: 0x4, address: 0x80853310
// Range: 0x80364E60 -> 0x80364E70
class EntityManager * World::GetEntityManager() {
    // References
    // -> static class EntityMgrModule entityMgrMod;
}
// signature: World::EntityMgrModule::Startup(int)
// Range: 0x80364E70 -> 0x803652E4
void World::EntityMgrModule::Startup(class EntityMgrModule * this /* r28 */) {
    // References
    // -> class EmbeddedTreeAVL * g_handleTypeTrees;
    // -> unsigned int g_rttidMaxType;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: World::EntityMgrModule::Shutdown(int)
// Range: 0x803652E4 -> 0x803658AC
void World::EntityMgrModule::Shutdown(class EntityMgrModule * this /* r29 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> class EmbeddedTreeAVL * g_handleTypeTrees;
    // -> unsigned int g_rttidMaxType;
    // -> class EmbeddedTreeAVL g_handleSortedTree;
}
// signature: World::EntityManager::FindHandle(unsigned long long)
// Range: 0x80366B00 -> 0x80366B7C
class EntityHandleBase * World::EntityManager::FindHandle() {
    // References
    // -> class EmbeddedTreeAVL g_handleSortedTree;
}
// signature: World::EntityManager::InsertHandle(unsigned long long)
// Range: 0x80366B98 -> 0x80367304
class EntityHandleBase * World::EntityManager::InsertHandle() {
    // References
    // -> class EmbeddedTreeAVL g_handleSortedTree;
}
// signature: World::EntityManager::RemoveHandle(World::EntityHandleBase *)
// Range: 0x80367E00 -> 0x803681B0
void World::EntityManager::RemoveHandle(class EntityManager * this /* r28 */) {
    // References
    // -> class EmbeddedTreeAVL * g_handleTypeTrees;
    // -> class EmbeddedTreeAVL g_handleSortedTree;
}
// Range: 0x803681B0 -> 0x8036854C
void World::EntityManager::RemoveHandle(class EntityManager * this /* r27 */, class Iterator & it_handle /* r28 */) {
    // References
    // -> class EmbeddedTreeAVL * g_handleTypeTrees;
    // -> class EmbeddedTreeAVL g_handleSortedTree;
}
// signature: World::EntityManager::FindEntityByType(unsigned int, unsigned int)
// Range: 0x803693E8 -> 0x80369590
class Entity * World::EntityManager::FindEntityByType() {
    // References
    // -> class EmbeddedTreeAVL * g_handleTypeTrees;
}
// signature: World::EntityManager::CountEntityByType(unsigned int)
// Range: 0x80369590 -> 0x803695A4
unsigned int World::EntityManager::CountEntityByType() {
    // References
    // -> class EmbeddedTreeAVL * g_handleTypeTrees;
}
