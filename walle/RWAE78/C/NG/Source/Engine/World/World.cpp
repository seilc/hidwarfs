/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\World\World.cpp
*/
static class WorldModule worldmod; // size: 0x98, address: 0x80809DA8
static class ModuleRegistrator worldModReg; // size: 0x8, address: 0x80809E40
class Module * worldModule; // size: 0x4, address: 0x8070B724
class PoolArray schemas; // size: 0xC, address: 0x80809E48
class Scene * primaryScene; // size: 0x4, address: 0x80809E54
int hackTestDeactivation; // size: 0x4, address: 0x80809E58
static class PoolArray entitiesUpdateMotion; // size: 0xC, address: 0x80809E5C
static class PoolArray entitiesUpdateRender; // size: 0xC, address: 0x80809E68
static class PoolArray entitiesUpdatePostDynamics; // size: 0xC, address: 0x80809E74
// Range: 0x802BCBF4 -> 0x802BCCB8
static void @unnamed@WAD02_cpp@::CommitSchemas() {
    // Local variables
    int numSchema; // r7

    {
        // Range: 0x802BCC5C -> 0x802BCC90
        // Local variables
        class SchemaRegistrator * n; // r8
    }

    // References
    // -> class SchemaRegistrator * head;
    // -> class PoolArray schemas;
    // -> bool commit;
    // -> int size;
}
// signature: @unnamed@WAD02_cpp@::WorldModule::Startup(int)
// Range: 0x802BCCB8 -> 0x802BCDD4
static void @unnamed@WAD02_cpp@::WorldModule::Startup() {
    {
        // Range: 0x802BCD6C -> 0x802BCDA4
        // Local variables
        int i; // r27
    }

    // References
    // -> class ModelInstanceArticlePool modelInstanceArticlePool;
    // -> class PoolArray schemas;
    // -> static class PoolArray entitiesUpdatePostDynamics;
    // -> static class PoolArray entitiesUpdateRender;
    // -> static class PoolArray entitiesUpdateMotion;
    // -> class Game * singleton;
}
// signature: @unnamed@WAD02_cpp@::WorldModule::Shutdown(int)
// Range: 0x802BCDD4 -> 0x802BDBC8
static void @unnamed@WAD02_cpp@::WorldModule::Shutdown() {
    {
        // Range: 0x802BCE04 -> 0x802BCE34
        // Local variables
        int i; // r27
    }

    // References
    // -> static class PoolArray entitiesUpdatePostDynamics;
    // -> static class PoolArray entitiesUpdateRender;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolArray entitiesUpdateMotion;
    // -> class PoolArray schemas;
    // -> class ModelInstanceArticlePool modelInstanceArticlePool;
}
// signature: @unnamed@WAD02_cpp@::WorldModule::Update(int)
// Range: 0x802BDBC8 -> 0x802BDD0C
static void @unnamed@WAD02_cpp@::WorldModule::Update() {
    // References
    // -> static class PoolArray entitiesUpdateRender;
    // -> static class PoolArray entitiesUpdatePostDynamics;
    // -> static class PoolArray entitiesUpdateMotion;
    // -> class Game * singleton;
}
// signature: World::AddEntity(World::EntityHandleBase *)
// Range: 0x802BDD0C -> 0x802BDD94
void World::AddEntity() {
    // References
    // -> static class PoolArray entitiesUpdatePostDynamics;
    // -> static class PoolArray entitiesUpdateRender;
    // -> static class PoolArray entitiesUpdateMotion;
}
// signature: World::RemoveEntity(World::EntityHandleBase *)
// Range: 0x802BDD94 -> 0x802BDEDC
void World::RemoveEntity() {
    // References
    // -> static class PoolArray entitiesUpdatePostDynamics;
    // -> static class PoolArray entitiesUpdateRender;
    // -> static class PoolArray entitiesUpdateMotion;
}
