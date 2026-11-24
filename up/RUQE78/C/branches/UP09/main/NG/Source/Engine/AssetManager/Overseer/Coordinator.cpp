/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\AssetManager\Overseer\Coordinator.cpp
*/
static class CoordinatorModule coordinatorMod; // size: 0xA0, address: 0x80845FC8
static class ModuleRegistrator coordinatorModreg; // size: 0x8, address: 0x80846068
class Module * coordinatorModule; // size: 0x4, address: 0x807BD3AC
static bool allowTestWorldToRun; // size: 0x1, address: 0x80846070
static class RelativePriority priority[2]; // size: 0x18, address: 0x807BD3B0
// Range: 0x802D628C -> 0x802D629C
class Coordinator * Overseer::GetCoordinator() {
    // References
    // -> static class CoordinatorModule coordinatorMod;
}
// signature: Overseer::CoordinatorModule::GetPriority(int &) const
// Range: 0x802D629C -> 0x802D62E0
class RelativePriority * Overseer::CoordinatorModule::GetPriority() const {
    // References
    // -> static class RelativePriority priority[2];
    // -> class Module * domainModule;
}
// signature: Overseer::CoordinatorModule::Startup(int)
// Range: 0x802D62E0 -> 0x802D64A0
void Overseer::CoordinatorModule::Startup(class CoordinatorModule * this /* r28 */) {
    // References
    // -> struct {} __vt__Q28Overseer15DomLoadProgress;
}
// signature: Overseer::CoordinatorModule::Shutdown(int)
// Range: 0x802D64A0 -> 0x802D6544
void Overseer::CoordinatorModule::Shutdown(class CoordinatorModule * this /* r30 */) {
}
// signature: Overseer::CoordinatorModule::FirstUpdate(int)
// Range: 0x802D6544 -> 0x802D67B8
void Overseer::CoordinatorModule::FirstUpdate(class CoordinatorModule * this /* r31 */) {
    // References
    // -> struct {} __vt__Q28Overseer15DomLoadProgress;
    // -> static char * defaultSectionName;
    // -> static class ConfigManager * configManager;
    // -> class StartupConfig * config;
}
// signature: Overseer::CoordinatorModule::Update(int)
// Range: 0x802D67B8 -> 0x802D67D4
void Overseer::CoordinatorModule::Update() {
    // References
    // -> static class CoordinatorModule coordinatorMod;
}
// Range: 0x802D67D4 -> 0x802D6870
void Overseer::Coordinator::Update(class Coordinator * this /* r26 */) {
    // Local variables
    bool complete; // r27
}
// Range: 0x802D6870 -> 0x802D6954
class LoadSet * Overseer::Coordinator::GetNewLoadSet(class Coordinator * this /* r31 */) {
    // References
    // -> struct {} __vt__Q28Overseer15DomLoadProgress;
}
// signature: Overseer::LoadSet::AddDomain(const char *, unsigned short)
// Range: 0x802D6954 -> 0x802D69E0
void Overseer::LoadSet::AddDomain(class LoadSet * this /* r30 */) {
    {
        // Range: 0x802D6968 -> 0x802D69C0
        // Local variables
        int i; // r31
    }
}
// Range: 0x802D69E0 -> 0x802D69EC
void Overseer::LoadSet::StartLoad() {
}
// Range: 0x802D69EC -> 0x802D6B64
void Overseer::LoadSet::Unload(class LoadSet * this /* r26 */) {
    {
        // Range: 0x802D6A00 -> 0x802D6B34
        // Local variables
        int i; // r27
    }

    // References
    // -> static class DomainModule domainMod;
    // -> class __locale _current_locale;
}
// Range: 0x802D6B64 -> 0x802D6E98
void Overseer::LoadSet::Update(class LoadSet * this /* r22 */) {
    {
        // Range: 0x802D6B90 -> 0x802D6D38
        // Local variables
        bool done; // r24

        {
            // Range: 0x802D6BE4 -> 0x802D6D10
            // Local variables
            int i; // r23
        }
    }
    {
        // Range: 0x802D6D3C -> 0x802D6E68
        // Local variables
        int i; // r23
    }

    // References
    // -> class __locale _current_locale;
    // -> static class DomainModule domainMod;
}
// signature: Overseer::LoadSet::GetDomain(int)
// Range: 0x802D6E98 -> 0x802D6EA8
class Domain * Overseer::LoadSet::GetDomain() {
}
// signature: Overseer::DomLoadProgress::ReportProgress(unsigned long long, Domains::Domain *)
// Range: 0x802D6EA8 -> 0x802D6EAC
void Overseer::DomLoadProgress::ReportProgress() {
}
// signature: Overseer::DomLoadProgress::AlsoLoadDomain(unsigned long long, const char *)
// Range: 0x802D6EAC -> 0x802D7068
void Overseer::DomLoadProgress::AlsoLoadDomain(class DomLoadProgress * this /* r28 */, char * domainPath /* r27 */) {
    {
        // Range: 0x802D6EC4 -> 0x802D6EE8
        // Local variables
        int i; // r26

        {
            // Range: 0x802D6EC4 -> 0x802D6EE8
            // Local variables
            int comp; // r0
        }
    }
    {
        // Range: 0x802D6EFC -> 0x802D704C
        // Local variables
        int i; // r29
    }

    // References
    // -> class __locale _current_locale;
    // -> static class DomainModule domainMod;
}
// signature: Overseer::DomLoadProgress::DomainLoaded(unsigned long long, Domains::Domain *)
// Range: 0x802D7068 -> 0x802D7128
void Overseer::DomLoadProgress::DomainLoaded() {
    {
        // Range: 0x802D706C -> 0x802D70A0
        // Local variables
        int i; // r8
    }
    {
        // Range: 0x802D70AC -> 0x802D7118
        // Local variables
        int i; // r0
    }
}
// signature: Overseer::DomLoadProgress::DomainReady(unsigned long long, Domains::Domain *)
// Range: 0x802D7128 -> 0x802D71F4
void Overseer::DomLoadProgress::DomainReady() {
    {
        // Range: 0x802D712C -> 0x802D7160
        // Local variables
        int i; // r8
    }
    {
        // Range: 0x802D716C -> 0x802D71D8
        // Local variables
        int i; // r0
    }

    // References
    // -> static bool allowTestWorldToRun;
}
