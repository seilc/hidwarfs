/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\AssetManager\Overseer\Coordinator.cpp
*/
static class CoordinatorModule coordinatorMod; // size: 0xA0, address: 0x807FE188
static class ModuleRegistrator coordinatorModreg; // size: 0x8, address: 0x807FE228
class Module * coordinatorModule; // size: 0x4, address: 0x80706F2C
static bool allowTestWorldToRun; // size: 0x1, address: 0x807FE230
static class RelativePriority priority[2]; // size: 0x18, address: 0x80706F30
// Range: 0x802356D8 -> 0x802356E8
class Coordinator * Overseer::GetCoordinator() {
    // References
    // -> static class CoordinatorModule coordinatorMod;
}
// signature: Overseer::CoordinatorModule::GetPriority(int &) const
// Range: 0x802356E8 -> 0x8023572C
class RelativePriority * Overseer::CoordinatorModule::GetPriority() const {
    // References
    // -> static class RelativePriority priority[2];
    // -> class Module * domainModule;
}
// signature: Overseer::CoordinatorModule::Startup(int)
// Range: 0x8023572C -> 0x802358EC
void Overseer::CoordinatorModule::Startup(class CoordinatorModule * this /* r28 */) {
    // References
    // -> struct {} __vt__Q28Overseer15DomLoadProgress;
}
// signature: Overseer::CoordinatorModule::Shutdown(int)
// Range: 0x802358EC -> 0x80235990
void Overseer::CoordinatorModule::Shutdown(class CoordinatorModule * this /* r30 */) {
}
// signature: Overseer::CoordinatorModule::FirstUpdate(int)
// Range: 0x80235990 -> 0x80235C04
void Overseer::CoordinatorModule::FirstUpdate(class CoordinatorModule * this /* r31 */) {
    // References
    // -> struct {} __vt__Q28Overseer15DomLoadProgress;
    // -> static char * defaultSectionName;
    // -> static class ConfigManager * configManager;
    // -> class StartupConfig * config;
}
// signature: Overseer::CoordinatorModule::Update(int)
// Range: 0x80235C04 -> 0x80235C20
void Overseer::CoordinatorModule::Update() {
    // References
    // -> static class CoordinatorModule coordinatorMod;
}
// Range: 0x80235C20 -> 0x80235CB4
void Overseer::Coordinator::Update(class Coordinator * this /* r26 */) {
    // Local variables
    bool complete; // r27
}
// Range: 0x80235CB4 -> 0x80235D98
class LoadSet * Overseer::Coordinator::GetNewLoadSet(class Coordinator * this /* r31 */) {
    // References
    // -> struct {} __vt__Q28Overseer15DomLoadProgress;
}
// signature: Overseer::LoadSet::AddDomain(const char *, unsigned short)
// Range: 0x80235D98 -> 0x80235E24
void Overseer::LoadSet::AddDomain(class LoadSet * this /* r30 */) {
    {
        // Range: 0x80235DAC -> 0x80235E04
        // Local variables
        int i; // r31
    }
}
// Range: 0x80235E24 -> 0x80235E30
void Overseer::LoadSet::StartLoad() {
}
// Range: 0x80235E30 -> 0x80235FA8
void Overseer::LoadSet::Unload(class LoadSet * this /* r26 */) {
    {
        // Range: 0x80235E44 -> 0x80235F78
        // Local variables
        int i; // r27
    }

    // References
    // -> static class DomainModule domainMod;
    // -> class __locale _current_locale;
}
// Range: 0x80235FA8 -> 0x802362DC
void Overseer::LoadSet::Update(class LoadSet * this /* r22 */) {
    {
        // Range: 0x80235FD4 -> 0x8023617C
        // Local variables
        bool done; // r24

        {
            // Range: 0x80236028 -> 0x80236154
            // Local variables
            int i; // r23
        }
    }
    {
        // Range: 0x80236180 -> 0x802362AC
        // Local variables
        int i; // r23
    }

    // References
    // -> class __locale _current_locale;
    // -> static class DomainModule domainMod;
}
// signature: Overseer::LoadSet::GetDomain(int)
// Range: 0x802362DC -> 0x802362EC
class Domain * Overseer::LoadSet::GetDomain() {
}
// signature: Overseer::DomLoadProgress::ReportProgress(unsigned long long, Domains::Domain *)
// Range: 0x802362EC -> 0x802362F0
void Overseer::DomLoadProgress::ReportProgress() {
}
// signature: Overseer::DomLoadProgress::AlsoLoadDomain(unsigned long long, const char *)
// Range: 0x802362F0 -> 0x802364AC
void Overseer::DomLoadProgress::AlsoLoadDomain(class DomLoadProgress * this /* r28 */, char * domainPath /* r27 */) {
    {
        // Range: 0x80236308 -> 0x8023632C
        // Local variables
        int i; // r26

        {
            // Range: 0x80236308 -> 0x8023632C
            // Local variables
            int comp; // r0
        }
    }
    {
        // Range: 0x80236340 -> 0x80236490
        // Local variables
        int i; // r29
    }

    // References
    // -> class __locale _current_locale;
    // -> static class DomainModule domainMod;
}
// signature: Overseer::DomLoadProgress::DomainLoaded(unsigned long long, Domains::Domain *)
// Range: 0x802364AC -> 0x8023656C
void Overseer::DomLoadProgress::DomainLoaded() {
    {
        // Range: 0x802364B0 -> 0x802364E4
        // Local variables
        int i; // r8
    }
    {
        // Range: 0x802364F0 -> 0x8023655C
        // Local variables
        int i; // r0
    }
}
// signature: Overseer::DomLoadProgress::DomainReady(unsigned long long, Domains::Domain *)
// Range: 0x8023656C -> 0x80236638
void Overseer::DomLoadProgress::DomainReady() {
    {
        // Range: 0x80236570 -> 0x802365A4
        // Local variables
        int i; // r8
    }
    {
        // Range: 0x802365B0 -> 0x8023661C
        // Local variables
        int i; // r0
    }

    // References
    // -> static bool allowTestWorldToRun;
}
