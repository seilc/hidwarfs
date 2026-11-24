/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\AssetManager\Loader\BootStrapper.cpp
*/
static class BootStrapModule bootStrapMod; // size: 0x9C, address: 0x807FDD9C
static class ModuleRegistrator bootStrapModreg; // size: 0x8, address: 0x807FDE38
class Module * bootStrapModule; // size: 0x4, address: 0x80706D58
static class RelativePriority priority[8]; // size: 0x60, address: 0x80706D60
static class LoadMemOwner loadMemOwner; // size: 0x4, address: 0x807FDE44
// signature: Loader::BootStrapModule::GetPriority(int &) const
// Range: 0x80231254 -> 0x802312C8
class RelativePriority * Loader::BootStrapModule::GetPriority() const {
    // References
    // -> class Module * mstQueryModule;
    // -> class Module * dynaMemModule;
    // -> class Module * mediaModule;
    // -> static class RelativePriority priority[8];
    // -> class Module * testSuiteModule;
}
// signature: Loader::BootStrapModule::Startup(int)
// Range: 0x802312C8 -> 0x8023157C
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
// Range: 0x8023157C -> 0x8023161C
void Loader::BootStrapModule::Shutdown(class BootStrapModule * this /* r30 */) {
    // References
    // -> static class ConfigManager * configManager;
}
// Range: 0x8024F594 -> 0x8024F598
void Loader::LoadMemOwner::MemUserAsksTheImpossible() {
}
// Range: 0x8024F590 -> 0x8024F594
void Loader::LoadMemOwner::MemStuffed() {
}
// Range: 0x8024F58C -> 0x8024F590
void Loader::LoadMemOwner::MemClogged() {
}
// Range: 0x8024F588 -> 0x8024F58C
void Loader::LoadMemOwner::DefragDone() {
}
// signature: Loader::DrudgeDomDir::Begin(Loader::BootStrapper *, IO::MediaFile *)
// Range: 0x802316AC -> 0x8023172C
void Loader::DrudgeDomDir::Begin(class DrudgeDomDir * this /* r29 */, class MediaFile * mediaFile /* r30 */) {
    // Local variables
    class StartupConfig * systemConfig; // r31
    class MemCallbacks * memCB_domDir; // r0

    // References
    // -> class StartupConfig * config;
}
// signature: Loader::DrudgeDomDir::Update(Loader::BootStrapper *, IO::MediaFile *)
// Range: 0x8023172C -> 0x80231734
bool Loader::DrudgeDomDir::Update() {
    // Local variables
    bool rc; // r0
}
// signature: Loader::DrudgeDomDir::Finish(Loader::BootStrapper *, IO::MediaFile *)
// Range: 0x80231734 -> 0x80231778
void Loader::DrudgeDomDir::Finish() {
    // Local variables
    int fileSize; // r6
}
// signature: Loader::DrudgeBootINI::Begin(Loader::BootStrapper *, IO::MediaFile *)
// Range: 0x80231778 -> 0x802317C0
void Loader::DrudgeBootINI::Begin() {
    // Local variables
    class StartupConfig * systemConfig; // r8

    // References
    // -> static class MemCB_INIData memCB_INIData;
    // -> class StartupConfig * config;
}
// signature: Loader::DrudgeBootINI::Update(Loader::BootStrapper *, IO::MediaFile *)
// Range: 0x802317C0 -> 0x802317C8
bool Loader::DrudgeBootINI::Update() {
    // Local variables
    bool rc; // r0
}
// signature: Loader::DrudgeBootINI::Finish(Loader::BootStrapper *, IO::MediaFile *)
// Range: 0x802317C8 -> 0x80231BC0
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
