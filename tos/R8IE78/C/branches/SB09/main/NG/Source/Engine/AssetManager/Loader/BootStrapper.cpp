/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\AssetManager\Loader\BootStrapper.cpp
*/
static class BootStrapModule bootStrapMod; // size: 0x9C, address: 0x80774350
static class ModuleRegistrator bootStrapModreg; // size: 0x8, address: 0x807743F0
class Module * bootStrapModule; // size: 0x4, address: 0x806C9458
class RelativePriority priority[9]; // size: 0x6C, address: 0x806C945C
static class LoadMemOwner loadMemOwner; // size: 0x4, address: 0x807743F8
// Range: 0x801AFA10 -> 0x801AFA5C
void * Loader::BootStrapModule::BootStrapModule(class BootStrapModule * this /* r31 */) {
    // References
    // -> struct {} __vt__Q26Loader15BootStrapModule;
}
// signature: Loader::BootStrapModule::GetPriority(int &) const
// Range: 0x801AFA60 -> 0x801AFAE0
class RelativePriority * Loader::BootStrapModule::GetPriority() const {
    // References
    // -> class Module * trcModule;
    // -> class Module * mstQueryModule;
    // -> class Module * dynaMemModule;
    // -> class Module * mediaModule;
    // -> class RelativePriority priority[9];
    // -> class Module * testSuiteModule;
}
// signature: Loader::BootStrapModule::Startup(int)
// Range: 0x801AFAE0 -> 0x801AFBDC
void Loader::BootStrapModule::Startup(class BootStrapModule * this /* r30 */) {
    // References
    // -> static class LoadMemOwner loadMemOwner;
    // -> struct {} __vt__Q26Loader12DrudgeDomDir;
    // -> struct {} __vt__Q26Loader13DrudgeBootINI;
    // -> static class ConfigManager * configManager;
}
// signature: Loader::BootStrapModule::Shutdown(int)
// Range: 0x801AFC60 -> 0x801AFCD4
void Loader::BootStrapModule::Shutdown(class BootStrapModule * this /* r30 */) {
}
// signature: Loader::BootStrapper::StoreBootINIMem(Domains::MemHandle *, int)
// Range: 0x801AFCE0 -> 0x801AFD30
void Loader::BootStrapper::StoreBootINIMem(class MemHandle * iniMem /* r31 */) {
    // References
    // -> static class ConfigManager * configManager;
    // -> class StartupConfig * config;
}
// Range: 0x801AFD30 -> 0x801AFDA0
void Loader::BootStrapper::BootStrap(class BootStrapper * this /* r30 */) {
    // Local variables
    bool isDone; // r31
}
// Range: 0x801AFDA0 -> 0x801AFDF4
void Loader::BootStrapper::BootStrapBegin(class BootStrapper * this /* r31 */) {
}
// Range: 0x801AFE00 -> 0x801AFE38
bool Loader::BootStrapper::BootStrapUpdate(class BootStrapper * this /* r31 */) {
}
// Range: 0x801AFE40 -> 0x801AFE90
void Loader::BootStrapper::MakeDrudgeQue(class BootStrapper * this /* r31 */) {
}
// Range: 0x801AFE90 -> 0x801AFEE4
void Loader::BootStrapper::KillDrudgeQue(class BootStrapper * this /* r31 */) {
}
// Range: 0x801AFEF0 -> 0x801AFF34
void Loader::BootStrapper::QueueDrudge(class BootStrapper * this /* r30 */, class DrudgeBase * drudge /* r31 */) {
}
// Range: 0x801AFF40 -> 0x801AFFF4
void Loader::BootStrapper::ProcDrudgeQue(class BootStrapper * this /* r30 */) {
    // Local variables
    class DrudgeBase * drudge; // r31
    bool isDone; // r0
}
// signature: Loader::DrudgeDomDir::Begin(Loader::BootStrapper *, IO::MediaFile *)
// Range: 0x801B0000 -> 0x801B0068
void Loader::DrudgeDomDir::Begin(class DrudgeDomDir * this /* r29 */, class MediaFile * mediaFile /* r30 */) {
    // Local variables
    class StartupConfig * systemConfig; // r31
    class MemCallbacks * memCB_domDir; // r0

    // References
    // -> class StartupConfig * config;
}
// signature: Loader::DrudgeDomDir::Update(Loader::BootStrapper *, IO::MediaFile *)
// Range: 0x801B0070 -> 0x801B0078
bool Loader::DrudgeDomDir::Update() {
    // Local variables
    bool rc; // r0
}
// signature: Loader::DrudgeDomDir::Finish(Loader::BootStrapper *, IO::MediaFile *)
// Range: 0x801B0080 -> 0x801B00EC
void Loader::DrudgeDomDir::Finish(class DrudgeDomDir * this /* r30 */, class BootStrapper * bs /* r31 */) {
    // Local variables
    int fileSize; // r1+0x8
    class MemHandle * bootDomDirMem; // r0
}
// signature: Loader::DrudgeBootINI::Begin(Loader::BootStrapper *, IO::MediaFile *)
// Range: 0x801B00F0 -> 0x801B0150
void Loader::DrudgeBootINI::Begin(class DrudgeBootINI * this /* r30 */) {
    // Local variables
    class StartupConfig * systemConfig; // r31

    // References
    // -> class StartupConfig * config;
    // -> static class MemCB_INIData memCB_INIData;
}
// signature: Loader::DrudgeBootINI::Finish(Loader::BootStrapper *, IO::MediaFile *)
// Range: 0x801B0150 -> 0x801B01C4
void Loader::DrudgeBootINI::Finish(class DrudgeBootINI * this /* r30 */, class BootStrapper * bs /* r31 */) {
    // Local variables
    int iniSize; // r1+0x8
    class MemHandle * bootINIMem; // r4
}
