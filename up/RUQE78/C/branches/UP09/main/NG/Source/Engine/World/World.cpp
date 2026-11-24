/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\World\World.cpp
*/
static class WorldModule worldmod; // size: 0x98, address: 0x80853318
static class ModuleRegistrator worldModReg; // size: 0x8, address: 0x808533B0
class Module * worldModule; // size: 0x4, address: 0x807C18B4
class Scene * primaryScene; // size: 0x4, address: 0x808533B8
static class PoolArray entitiesUpdateRender; // size: 0xC, address: 0x808533BC
// signature: @unnamed@WAD02_cpp@::WorldModule::Startup(int)
// Range: 0x80369C80 -> 0x8036A1C4
static void @unnamed@WAD02_cpp@::WorldModule::Startup() {
    // References
    // -> class ModelInstanceArticlePool modelInstanceArticlePool;
    // -> static class PoolArray entitiesUpdateRender;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> class Game * singleton;
}
// signature: @unnamed@WAD02_cpp@::WorldModule::Shutdown(int)
// Range: 0x8036A1C4 -> 0x8036A714
static void @unnamed@WAD02_cpp@::WorldModule::Shutdown() {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolArray entitiesUpdateRender;
    // -> class ModelInstanceArticlePool modelInstanceArticlePool;
}
// signature: @unnamed@WAD02_cpp@::WorldModule::Update(int)
// Range: 0x8036A714 -> 0x8036A738
static void @unnamed@WAD02_cpp@::WorldModule::Update() {
    // References
    // -> class Game * singleton;
}
// signature: @unnamed@WAD02_cpp@::WorldModule::StepEnd(int)
// Range: 0x8036A738 -> 0x8036A7C4
static void @unnamed@WAD02_cpp@::WorldModule::StepEnd() {
    // References
    // -> static class PoolArray entitiesUpdateRender;
}
