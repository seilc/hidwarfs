/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\AssetManager\Loader\BootStrapper.cpp
*/
static class BootStrapModule bootStrapMod; // size: 0x9C, address: 0x80845BD4
static class ModuleRegistrator bootStrapModreg; // size: 0x8, address: 0x80845C70
class Module * bootStrapModule; // size: 0x4, address: 0x807BD1D0
static class RelativePriority priority[9]; // size: 0x6C, address: 0x807BD1D4
static class LoadMemOwner loadMemOwner; // size: 0x4, address: 0x80845C7C
// signature: Loader::BootStrapModule::GetPriority(int &) const
// Range: 0x802D1968 -> 0x802D19E8
class RelativePriority * Loader::BootStrapModule::GetPriority() const {
    // References
    // -> class Module * trcModule;
    // -> class Module * mstQueryModule;
    // -> class Module * dynaMemModule;
    // -> class Module * mediaModule;
    // -> static class RelativePriority priority[9];
    // -> class Module * testSuiteModule;
}
// signature: Loader::BootStrapModule::Startup(int)
// Range: 0x802D19E8 -> 0x802D1CA8
void Loader::BootStrapModule::Startup(class BootStrapModule * this /* r29 */) {
    // References
    // -> static class LoadMemOwner loadMemOwner;
    // -> static class DynaMemModule dynaMemMod;
    // -> struct {} __vt__Q26Loader12DrudgeDomDir;
    // -> struct {} __vt__Q26Loader13DrudgeBootINI;
    // -> struct {} __vt__Q26Loader17DrudgeLoadErrorCB;
    // -> static class ConfigManager * configManager;
}
// signature: Loader::BootStrapModule::Shutdown(int)
// Range: 0x802D1CA8 -> 0x802D1D48
void Loader::BootStrapModule::Shutdown(class BootStrapModule * this /* r30 */) {
    // References
    // -> static class ConfigManager * configManager;
}
// Range: 0x802E6858 -> 0x802E685C
void Loader::LoadMemOwner::MemUserAsksTheImpossible() {
}
// Range: 0x802E6854 -> 0x802E6858
void Loader::LoadMemOwner::MemStuffed() {
}
// Range: 0x802E6850 -> 0x802E6854
void Loader::LoadMemOwner::MemClogged() {
}
// Range: 0x802E684C -> 0x802E6850
void Loader::LoadMemOwner::DefragDone() {
}
// signature: Loader::DrudgeDomDir::Begin(Loader::BootStrapper *, IO::MediaFile *)
// Range: 0x802D1D5C -> 0x802D1DDC
void Loader::DrudgeDomDir::Begin(class DrudgeDomDir * this /* r29 */, class MediaFile * mediaFile /* r30 */) {
    // Local variables
    class StartupConfig * systemConfig; // r31
    class MemCallbacks * memCB_domDir; // r0

    // References
    // -> class StartupConfig * config;
}
// signature: Loader::DrudgeDomDir::Update(Loader::BootStrapper *, IO::MediaFile *)
// Range: 0x802D1DDC -> 0x802D1DE4
bool Loader::DrudgeDomDir::Update() {
    // Local variables
    bool rc; // r0
}
// signature: Loader::DrudgeDomDir::Finish(Loader::BootStrapper *, IO::MediaFile *)
// Range: 0x802D1DE4 -> 0x802D1E28
void Loader::DrudgeDomDir::Finish() {
    // Local variables
    int fileSize; // r6
}
// signature: Loader::DrudgeBootINI::Begin(Loader::BootStrapper *, IO::MediaFile *)
// Range: 0x802D1E28 -> 0x802D1E70
void Loader::DrudgeBootINI::Begin() {
    // Local variables
    class StartupConfig * systemConfig; // r8

    // References
    // -> static class MemCB_INIData memCB_INIData;
    // -> class StartupConfig * config;
}
// signature: Loader::DrudgeBootINI::Finish(Loader::BootStrapper *, IO::MediaFile *)
// Range: 0x802D1E74 -> 0x802D226C
void Loader::DrudgeBootINI::Finish() {
    // Local variables
    int iniSize; // r25

    // References
    // -> static class DynaMemModule dynaMemMod;
    // -> static class MemHandle nullHandle;
    // -> static char * defaultSectionName;
    // -> static class ConfigManager * configManager;
    // -> class StartupConfig * config;
}
