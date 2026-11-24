/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\System\CoreTasking.cpp
*/
static class CoreTaskingModule mod; // size: 0x98, address: 0x8084DEF0
static class RelativePriority priority[1]; // size: 0xC, address: 0x807C1500
class CoreJobProcessor singleton; // size: 0xC0, address: 0x8084DF98
static int waiters; // size: 0x4, address: 0x8084E058
static class ModuleRegistrator coreTaskingModReg; // size: 0x8, address: 0x8084E060
class Module * coreTaskingModule; // size: 0x4, address: 0x807C152C
// signature: @unnamed@WAD02_cpp@::CoreTaskingModule::GetPriority(int &) const
// Range: 0x8034D570 -> 0x8034D5B0
static class RelativePriority * @unnamed@WAD02_cpp@::CoreTaskingModule::GetPriority() const {
    // References
    // -> static class RelativePriority priority[1];
    // -> class Module * taskingModule;
}
// signature: @unnamed@WAD02_cpp@::CoreTaskingModule::Startup(int)
// Range: 0x8034D5B0 -> 0x8034D5B4
static void @unnamed@WAD02_cpp@::CoreTaskingModule::Startup() {
}
// signature: @unnamed@WAD02_cpp@::CoreTaskingModule::Shutdown(int)
// Range: 0x8034D5B4 -> 0x8034D5B8
static void @unnamed@WAD02_cpp@::CoreTaskingModule::Shutdown() {
}
// signature: @unnamed@WAD02_cpp@::CoreTaskingModule::Update(int)
// Range: 0x8034D5B8 -> 0x8034D5BC
static void @unnamed@WAD02_cpp@::CoreTaskingModule::Update() {
}
// Range: 0x8034D5BC -> 0x8034D61C
void System::CoreJobProcessor::Slot::Run(class Slot * this /* r31 */) {
}
// Range: 0x8034D61C -> 0x8034D69C
void * System::CoreJobProcessor::~CoreJobProcessor(class CoreJobProcessor * this /* r30 */) {
}
// Range: 0x8034D6A0 -> 0x8034D714
void System::CoreJobProcessor::Start(class CoreJobProcessor * this /* r29 */) {
    {
        // Range: 0x8034D6BC -> 0x8034D6D0
        // Local variables
        int i; // r30
    }
}
// Range: 0x8034D714 -> 0x8034D7BC
void System::CoreJobProcessor::Stop(class CoreJobProcessor * this /* r27 */) {
    {
        // Range: 0x8034D74C -> 0x8034D754
        // Local variables
        int i; // r28
    }
}
// signature: System::CoreJobProcessor::NextQueue(int)
// Range: 0x8034D7BC -> 0x8034D8A0
class CoreQueueRef * System::CoreJobProcessor::NextQueue() {
    {
        // Range: 0x8034D7CC -> 0x8034D898
        // Local variables
        int priority; // r0

        {
            // Range: 0x8034D7CC -> 0x8034D898
            // Local variables
            unsigned int endIndex; // r8
            unsigned int index; // r7
            class PriorityLevel & level; // r0
        }
    }
}
// signature: System::CoreJobProcessor::SignalExeComplete(int, System::CoreQueueRef *, System::CoreJob *, unsigned int)
// Range: 0x8034D8A0 -> 0x8034D9CC
void System::CoreJobProcessor::SignalExeComplete(class CoreQueueRef * qr /* r31 */) {
    // Local variables
    unsigned int completeNumber; // r29

    {
        // Range: 0x8034D8C0 -> 0x8034D900
        // Local variables
        class CoreJobPendingRef * end; // r4
        class CoreJobPendingRef * it; // r3
    }
    {
        // Range: 0x8034D90C -> 0x8034D938
        // Local variables
        class CoreJobPendingRef * end; // r6
        class CoreJobPendingRef * it; // r4
    }
    {
        // Range: 0x8034D948 -> 0x8034D9AC
        // Local variables
        class CoreJobCompleteFence * it; // r28
    }
}
// Range: 0x8034D9CC -> 0x8034DCA8
bool System::CoreJobProcessor::ProcessNextJob(class CoreJobProcessor * this /* r27 */, int slotIndex /* r28 */) {
    // Local variables
    class CoreQueueRef * qr; // r30
    int currentJobNumber; // r29

    // References
    // -> static int waiters;
}
