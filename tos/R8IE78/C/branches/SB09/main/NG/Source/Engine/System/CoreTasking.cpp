/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\System\CoreTasking.cpp
*/
static class CoreTaskingModule mod; // size: 0x98, address: 0x8077D018
class RelativePriority priority[1]; // size: 0xC, address: 0x806CF1A0
class CoreJobProcessor singleton; // size: 0xC0, address: 0x8077D0C0
int waiters; // size: 0x4, address: 0x80784120
static class ModuleRegistrator coreTaskingModReg; // size: 0x8, address: 0x8077D180
class Module * coreTaskingModule; // size: 0x4, address: 0x806CF1CC
// Range: 0x801FA8E0 -> 0x801FA924
static void * @unnamed@WAD02_cpp@::CoreTaskingModule::CoreTaskingModule(class CoreTaskingModule * this /* r31 */) {
    // References
    // -> static struct {} __vt__Q219@unnamed@WAD02_cpp@17CoreTaskingModule;
}
// signature: @unnamed@WAD02_cpp@::CoreTaskingModule::GetPriority(int &) const
// Range: 0x801FA930 -> 0x801FA970
static class RelativePriority * @unnamed@WAD02_cpp@::CoreTaskingModule::GetPriority() const {
    // References
    // -> class RelativePriority priority[1];
    // -> class Module * taskingModule;
}
// Range: 0x801FAA60 -> 0x801FAA94
class CoreJob * System::CoreJobQueue::Pop(class CoreJobQueue * this /* r6 */) {
    // Local variables
    class CoreJob * job; // r0
}
// Range: 0x801FAAA0 -> 0x801FAAE8
void System::CoreJobProcessor::Slot::Run(class Slot * this /* r31 */) {
}
// Range: 0x801FAAF0 -> 0x801FAB00
void * System::CoreJobProcessor::CoreJobProcessor() {
    // References
    // -> struct {} __vt__Q26System16CoreJobProcessor;
}
// Range: 0x801FAB60 -> 0x801FABBC
void System::CoreJobProcessor::Start(class CoreJobProcessor * this /* r29 */) {
    {
        // Range: 0x801FAB78 -> 0x801FABA8
        // Local variables
        int i; // r30
    }
}
// Range: 0x801FABC0 -> 0x801FAC28
void System::CoreJobProcessor::Stop(class CoreJobProcessor * this /* r29 */) {
    {
        // Range: 0x801FABE4 -> 0x801FAC14
        // Local variables
        int i; // r30
    }
}
// signature: System::CoreJobProcessor::NextQueue(int)
// Range: 0x801FAC30 -> 0x801FAD18
class CoreQueueRef * System::CoreJobProcessor::NextQueue() {
    {
        // Range: 0x801FAC34 -> 0x801FAD10
        // Local variables
        int priority; // r0

        {
            // Range: 0x801FAC34 -> 0x801FAD10
            // Local variables
            unsigned int endIndex; // r10
            unsigned int index; // r9
            class PriorityLevel & level; // r0
        }
    }
}
// signature: System::CoreJobProcessor::SignalExeStart(int, System::CoreQueueRef *, System::CoreJob *, unsigned int)
// Range: 0x801FAD20 -> 0x801FAD54
void System::CoreJobProcessor::SignalExeStart() {
}
// signature: System::CoreJobProcessor::SignalExeComplete(int, System::CoreQueueRef *, System::CoreJob *, unsigned int)
// Range: 0x801FAD60 -> 0x801FAE60
void System::CoreJobProcessor::SignalExeComplete(class CoreQueueRef * qr /* r31 */) {
    // Local variables
    unsigned int completeNumber; // r29

    {
        // Range: 0x801FAD74 -> 0x801FADC0
        // Local variables
        class CoreJobPendingRef * end; // r4
        class CoreJobPendingRef * it; // r3
    }
    {
        // Range: 0x801FADC0 -> 0x801FADF8
        // Local variables
        class CoreJobPendingRef * end; // r6
        class CoreJobPendingRef * it; // r4
    }
    {
        // Range: 0x801FADFC -> 0x801FAE4C
        // Local variables
        class CoreJobCompleteFence * it; // r28
    }
}
// Range: 0x801FAE60 -> 0x801FAFB4
bool System::CoreJobProcessor::ProcessNextJob(class CoreJobProcessor * this /* r27 */, int slotIndex /* r28 */) {
    // Local variables
    class CoreQueueRef * qr; // r30
    int currentJobNumber; // r31
    class CoreJob * job; // r29

    // References
    // -> int waiters;
}
