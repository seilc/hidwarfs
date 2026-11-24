/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\System\Tasking.cpp
*/
static class TaskingModule taskingMod; // size: 0x98, address: 0x80809838
static class PoolArray jobProcessors; // size: 0xC, address: 0x808098D0
static class ModuleRegistrator taskingModReg; // size: 0x8, address: 0x808098E0
class Module * taskingModule; // size: 0x4, address: 0x8070B69C
// signature: @unnamed@WAD02_cpp@::TaskingModule::GetPriority(int &) const
// Range: 0x802B57E8 -> 0x802B57F8
static class RelativePriority * @unnamed@WAD02_cpp@::TaskingModule::GetPriority() const {
}
// signature: @unnamed@WAD02_cpp@::TaskingModule::Startup(int)
// Range: 0x802B57F8 -> 0x802B58B8
static void @unnamed@WAD02_cpp@::TaskingModule::Startup() {
    {
        // Range: 0x802B5858 -> 0x802B5858
        // Local variables
        int i; // r28
    }

    // References
    // -> static class PoolArray jobProcessors;
}
// signature: @unnamed@WAD02_cpp@::TaskingModule::Shutdown(int)
// Range: 0x802B58B8 -> 0x802B5C98
static void @unnamed@WAD02_cpp@::TaskingModule::Shutdown() {
    {
        // Range: 0x802B58D4 -> 0x802B58D4
        // Local variables
        int i; // r28
    }

    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolArray jobProcessors;
}
// Range: 0x802B5C98 -> 0x802B5FA4
void * System::JobProcessor::~JobProcessor(class JobProcessor * this /* r30 */) {
    // References
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int havokAllocs[2][5];
    // -> int gInHavokDeinit;
}
