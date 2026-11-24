/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\System\Tasking.cpp
*/
static class TaskingModule taskingMod; // size: 0x98, address: 0x80852710
static class PoolArray jobProcessors; // size: 0xC, address: 0x808527A8
static class ModuleRegistrator taskingModReg; // size: 0x8, address: 0x808527B8
class Module * taskingModule; // size: 0x4, address: 0x807C16C4
// signature: @unnamed@WAD02_cpp@::TaskingModule::Startup(int)
// Range: 0x80357C90 -> 0x80358464
static void @unnamed@WAD02_cpp@::TaskingModule::Startup() {
    {
        // Range: 0x80358408 -> 0x80358408
        // Local variables
        int i; // r30
    }

    // References
    // -> static class PoolArray jobProcessors;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: @unnamed@WAD02_cpp@::TaskingModule::Shutdown(int)
// Range: 0x80358464 -> 0x803589EC
static void @unnamed@WAD02_cpp@::TaskingModule::Shutdown() {
    {
        // Range: 0x80358488 -> 0x80358488
        // Local variables
        int i; // r28
    }

    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolArray jobProcessors;
}
