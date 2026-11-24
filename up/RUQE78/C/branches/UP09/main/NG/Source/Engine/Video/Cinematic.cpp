/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Video\Cinematic.cpp
*/
static class CinematicModule cinmod; // size: 0x98, address: 0x80853100
static class ModuleRegistrator cinematicModReg; // size: 0x8, address: 0x80853198
class Module * cinematicModule; // size: 0x4, address: 0x807C1880
static class PoolArray elements; // size: 0xC, address: 0x808531A0
// signature: @unnamed@WAD02_cpp@::CinematicModule::Startup(int)
// Range: 0x80362E6C -> 0x80363394
static void @unnamed@WAD02_cpp@::CinematicModule::Startup() {
    // References
    // -> static class PoolArray elements;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// signature: @unnamed@WAD02_cpp@::CinematicModule::Shutdown(int)
// Range: 0x80363394 -> 0x803638D8
static void @unnamed@WAD02_cpp@::CinematicModule::Shutdown() {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolArray elements;
}
// signature: @unnamed@WAD02_cpp@::CinematicModule::Update(int)
// Range: 0x803638D8 -> 0x80363970
static void @unnamed@WAD02_cpp@::CinematicModule::Update() {
    // Local variables
    float dt; // f31

    {
        // Range: 0x803638F8 -> 0x80363938
        // Local variables
        int i; // r28
    }

    // References
    // -> static class PoolArray elements;
    // -> float dt;
}
// signature: Video::AddCinematic(Video::ICinematicElement *)
// Range: 0x80363970 -> 0x803639A0
void Video::AddCinematic() {
    // References
    // -> static class PoolArray elements;
}
// signature: Video::RemoveCinematic(Video::ICinematicElement *)
// Range: 0x803639A0 -> 0x80363A04
void Video::RemoveCinematic() {
    {
        // Range: 0x803639AC -> 0x803639F0
        // Local variables
        int i; // r9
    }

    // References
    // -> static class PoolArray elements;
}
