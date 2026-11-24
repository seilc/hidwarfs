/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\System\CoreTasking.cpp
*/
static class CoreTaskingModule mod; // size: 0x98, address: 0x80806B08
static class RelativePriority priority[1]; // size: 0xC, address: 0x8070B488
class CoreJobProcessor singleton; // size: 0xB8, address: 0x80806BB0
static int waiters; // size: 0x4, address: 0x80806C68
static class ModuleRegistrator coreTaskingModReg; // size: 0x8, address: 0x80806C70
class Module * coreTaskingModule; // size: 0x4, address: 0x8070B4B4
// signature: @unnamed@WAD02_cpp@::CoreTaskingModule::GetPriority(int &) const
// Range: 0x802AD8A4 -> 0x802AD8E4
static class RelativePriority * @unnamed@WAD02_cpp@::CoreTaskingModule::GetPriority() const {
    // References
    // -> static class RelativePriority priority[1];
    // -> class Module * taskingModule;
}
// signature: @unnamed@WAD02_cpp@::CoreTaskingModule::Startup(int)
// Range: 0x802AD8E4 -> 0x802AD8E8
static void @unnamed@WAD02_cpp@::CoreTaskingModule::Startup() {
}
// signature: @unnamed@WAD02_cpp@::CoreTaskingModule::Shutdown(int)
// Range: 0x802AD8E8 -> 0x802AD8EC
static void @unnamed@WAD02_cpp@::CoreTaskingModule::Shutdown() {
}
// signature: @unnamed@WAD02_cpp@::CoreTaskingModule::Update(int)
// Range: 0x802AD8EC -> 0x802AD8F0
static void @unnamed@WAD02_cpp@::CoreTaskingModule::Update() {
}
// Range: 0x802AD8F0 -> 0x802AD950
void System::CoreJobProcessor::Slot::Run(class Slot * this /* r31 */) {
}
// Range: 0x802AD950 -> 0x802ADC5C
void * System::CoreJobProcessor::~CoreJobProcessor(class CoreJobProcessor * this /* r30 */) {
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
// Range: 0x802ADF68 -> 0x802ADFDC
void System::CoreJobProcessor::Start(class CoreJobProcessor * this /* r29 */) {
    {
        // Range: 0x802ADF84 -> 0x802ADF98
        // Local variables
        int i; // r30
    }
}
// Range: 0x802ADFDC -> 0x802AE084
void System::CoreJobProcessor::Stop(class CoreJobProcessor * this /* r27 */) {
    {
        // Range: 0x802AE014 -> 0x802AE01C
        // Local variables
        int i; // r28
    }
}
// signature: System::CoreJobProcessor::NextQueue(int)
// Range: 0x802AE084 -> 0x802AE168
class CoreQueueRef * System::CoreJobProcessor::NextQueue() {
    {
        // Range: 0x802AE094 -> 0x802AE160
        // Local variables
        int priority; // r0

        {
            // Range: 0x802AE094 -> 0x802AE160
            // Local variables
            unsigned int endIndex; // r8
            unsigned int index; // r7
            class PriorityLevel * level; // r0
        }
    }
}
// signature: System::CoreJobProcessor::SignalExeComplete(int, System::CoreQueueRef *, System::CoreJob *, unsigned int)
// Range: 0x802AE168 -> 0x802AE294
void System::CoreJobProcessor::SignalExeComplete(class CoreQueueRef * qr /* r31 */) {
    // Local variables
    unsigned int completeNumber; // r29

    {
        // Range: 0x802AE188 -> 0x802AE1C8
        // Local variables
        class CoreJobPendingRef * end; // r4
        class CoreJobPendingRef * it; // r3
    }
    {
        // Range: 0x802AE1D4 -> 0x802AE200
        // Local variables
        class CoreJobPendingRef * end; // r6
        class CoreJobPendingRef * it; // r4
    }
    {
        // Range: 0x802AE210 -> 0x802AE274
        // Local variables
        class CoreJobCompleteFence * it; // r28
    }
}
// Range: 0x802AE294 -> 0x802AE46C
bool System::CoreJobProcessor::ProcessNextJob(class CoreJobProcessor * this /* r27 */, int slotIndex /* r28 */) {
    // Local variables
    class CoreQueueRef * qr; // r30
    int currentJobNumber; // r29

    // References
    // -> static int waiters;
}
