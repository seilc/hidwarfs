/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Video\Cinematic.cpp
*/
static class CinematicModule cinmod; // size: 0x98, address: 0x80809C38
static class ModuleRegistrator cinematicModReg; // size: 0x8, address: 0x80809CD0
class Module * cinematicModule; // size: 0x4, address: 0x8070B708
static class PoolArray elements; // size: 0xC, address: 0x80809CD8
// signature: @unnamed@WAD02_cpp@::CinematicModule::Startup(int)
// Range: 0x802BBA84 -> 0x802BBAD8
static void @unnamed@WAD02_cpp@::CinematicModule::Startup() {
    // References
    // -> static class PoolArray elements;
}
// signature: @unnamed@WAD02_cpp@::CinematicModule::Shutdown(int)
// Range: 0x802BBAD8 -> 0x802BBE74
static void @unnamed@WAD02_cpp@::CinematicModule::Shutdown() {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolArray elements;
}
// signature: @unnamed@WAD02_cpp@::CinematicModule::Update(int)
// Range: 0x802BBE74 -> 0x802BBF0C
static void @unnamed@WAD02_cpp@::CinematicModule::Update() {
    // Local variables
    float dt; // f31

    {
        // Range: 0x802BBE94 -> 0x802BBED4
        // Local variables
        int i; // r28
    }

    // References
    // -> static class PoolArray elements;
    // -> float dt;
}
// signature: Video::AddCinematic(Video::ICinematicElement *)
// Range: 0x802BBF0C -> 0x802BBF3C
void Video::AddCinematic() {
    // References
    // -> static class PoolArray elements;
}
// signature: Video::RemoveCinematic(Video::ICinematicElement *)
// Range: 0x802BBF3C -> 0x802BBFA0
void Video::RemoveCinematic() {
    {
        // Range: 0x802BBF48 -> 0x802BBF8C
        // Local variables
        int i; // r9
    }

    // References
    // -> static class PoolArray elements;
}
