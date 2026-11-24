/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\World\EntityManager.cpp
*/
static class EntityMgrModule entityMgrMod; // size: 0x9C, address: 0x807832A8
static class ModuleRegistrator entityMgrModReg; // size: 0x8, address: 0x80783348
class Module * entityMgrModule; // size: 0x4, address: 0x806CF560
class EmbeddedTreeAVL g_handleSortedTree; // size: 0x8, address: 0x80783350
class EmbeddedTreeAVL * g_handleTypeTrees; // size: 0x4, address: 0x80783358
// Range: 0x802055B0 -> 0x802055C0
class EntityManager * World::GetEntityManager() {
    // References
    // -> static class EntityMgrModule entityMgrMod;
}
// Range: 0x802055C0 -> 0x80205604
void * World::EntityMgrModule::EntityMgrModule(class EntityMgrModule * this /* r31 */) {
    // References
    // -> struct {} __vt__Q25World15EntityMgrModule;
}
// signature: World::EntityMgrModule::Startup(int)
// Range: 0x80205610 -> 0x80205664
void World::EntityMgrModule::Startup(class EntityMgrModule * this /* r31 */) {
}
// signature: World::EntityMgrModule::Shutdown(int)
// Range: 0x80205670 -> 0x802056C8
void World::EntityMgrModule::Shutdown(class EntityMgrModule * this /* r31 */) {
}
// Range: 0x802056D0 -> 0x802057BC
void World::EntityManager::Init(class EntityManager * this /* r28 */) {
    // References
    // -> class EmbeddedTreeAVL * g_handleTypeTrees;
    // -> unsigned int g_rttidMaxType;
}
// Range: 0x80205830 -> 0x80205920
void World::EntityManager::Done(class EntityManager * this /* r27 */) {
    // Local variables
    class Iterator it_handle; // r1+0x8

    {
        // Range: 0x80205870 -> 0x802058D4
        // Local variables
        int poolEleCount; // r28
    }

    // References
    // -> class EmbeddedTreeAVL g_handleSortedTree;
    // -> class EmbeddedTreeAVL * g_handleTypeTrees;
}
// signature: World::EntityManager::FindHandle(unsigned long long)
// Range: 0x80205920 -> 0x8020599C
class EntityHandleBase * World::EntityManager::FindHandle() {
    // References
    // -> class EmbeddedTreeAVL g_handleSortedTree;
}
// Range: 0x802059A0 -> 0x80205A20
class EntityHandleBase * World::EntityManager::InsertHandle(class EntityManager * this /* r30 */, unsigned long long uid /* r29:r28 */) {
    // References
    // -> class EmbeddedTreeAVL g_handleSortedTree;
}
// signature: World::EntityManager::RemoveHandle(World::EntityHandleBase *)
// Range: 0x80205F80 -> 0x80205FD4
void World::EntityManager::RemoveHandle() {
    // Local variables
    class Iterator it_handle; // r1+0x8
}
// Range: 0x80205FE0 -> 0x80206084
void World::EntityManager::RemoveHandle(class EntityManager * this /* r27 */, class Iterator & it_handle /* r28 */) {
    // References
    // -> class EmbeddedTreeAVL * g_handleTypeTrees;
    // -> class EmbeddedTreeAVL g_handleSortedTree;
}
// signature: World::EntityManager::FindEntityByType(unsigned int, unsigned int)
// Range: 0x802068B0 -> 0x802068E4
class Entity * World::EntityManager::FindEntityByType() {
    // Local variables
    class EntityHandleBase * handle; // r0
}
// signature: World::EntityManager::FindEntityHandleByType(unsigned int, unsigned int)
// Range: 0x802068F0 -> 0x80206A2C
class EntityHandleBase * World::EntityManager::FindEntityHandleByType(unsigned int index /* r31 */) {
    // Local variables
    class EmbeddedTreeAVL & tree; // r3
    class Iterator it_handle; // r1+0x8

    // References
    // -> class EmbeddedTreeAVL * g_handleTypeTrees;
}
// signature: World::EntityManager::CountEntityByType(unsigned int)
// Range: 0x80206AB0 -> 0x80206AC4
unsigned int World::EntityManager::CountEntityByType() {
    // References
    // -> class EmbeddedTreeAVL * g_handleTypeTrees;
}
// signature: World::EntityManager::ByTypeInsert(World::EntityHandleBase *)
// Range: 0x80206AD0 -> 0x80206B28
void World::EntityManager::ByTypeInsert() {
    // References
    // -> class EmbeddedTreeAVL * g_handleTypeTrees;
}
