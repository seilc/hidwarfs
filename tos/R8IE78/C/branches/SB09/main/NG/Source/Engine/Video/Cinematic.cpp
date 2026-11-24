/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Video\Cinematic.cpp
*/
static class CinematicModule cinmod; // size: 0x98, address: 0x80783150
static class ModuleRegistrator cinematicModReg; // size: 0x8, address: 0x807831E8
class Module * cinematicModule; // size: 0x4, address: 0x806CF544
static class PoolArray elements; // size: 0xC, address: 0x807831F0
// Range: 0x802050D0 -> 0x80205114
static void * @unnamed@WAD02_cpp@::CinematicModule::CinematicModule(class CinematicModule * this /* r31 */) {
    // References
    // -> static struct {} __vt__Q219@unnamed@WAD02_cpp@15CinematicModule;
}
// signature: @unnamed@WAD02_cpp@::CinematicModule::Startup(int)
// Range: 0x80205120 -> 0x80205174
static void @unnamed@WAD02_cpp@::CinematicModule::Startup() {
    // References
    // -> static class PoolArray elements;
}
// signature: @unnamed@WAD02_cpp@::CinematicModule::Shutdown(int)
// Range: 0x80205180 -> 0x802051A4
static void @unnamed@WAD02_cpp@::CinematicModule::Shutdown() {
    // References
    // -> static class PoolArray elements;
}
// signature: @unnamed@WAD02_cpp@::CinematicModule::Update(int)
// Range: 0x802051B0 -> 0x80205238
static void @unnamed@WAD02_cpp@::CinematicModule::Update() {
    // Local variables
    float dt; // f31

    {
        // Range: 0x802051D0 -> 0x80205218
        // Local variables
        int i; // r28
    }

    // References
    // -> static class PoolArray elements;
    // -> float dt;
}
// signature: Video::AddCinematic(Video::ICinematicElement *)
// Range: 0x80205240 -> 0x80205270
void Video::AddCinematic() {
    // References
    // -> static class PoolArray elements;
}
// signature: Video::RemoveCinematic(Video::ICinematicElement *)
// Range: 0x80205270 -> 0x802052D4
void Video::RemoveCinematic() {
    {
        // Range: 0x8020527C -> 0x802052D0
        // Local variables
        int i; // r9
    }

    // References
    // -> static class PoolArray elements;
}
