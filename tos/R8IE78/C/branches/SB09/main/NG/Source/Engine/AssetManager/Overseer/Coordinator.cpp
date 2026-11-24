/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\AssetManager\Overseer\Coordinator.cpp
*/
static class CoordinatorModule coordinatorMod; // size: 0xA0, address: 0x80774738
static class ModuleRegistrator coordinatorModreg; // size: 0x8, address: 0x807747D8
class Module * coordinatorModule; // size: 0x4, address: 0x806C9634
static bool allowTestWorldToRun; // size: 0x1, address: 0x807747E0
class RelativePriority priority[2]; // size: 0x18, address: 0x806C9638
// Range: 0x801B4190 -> 0x801B41A0
class Coordinator * Overseer::GetCoordinator() {
    // References
    // -> static class CoordinatorModule coordinatorMod;
}
// Range: 0x801B41A0 -> 0x801B41E4
void * Overseer::CoordinatorModule::CoordinatorModule(class CoordinatorModule * this /* r31 */) {
    // References
    // -> struct {} __vt__Q28Overseer17CoordinatorModule;
}
// signature: Overseer::CoordinatorModule::GetPriority(int &) const
// Range: 0x801B41F0 -> 0x801B4234
class RelativePriority * Overseer::CoordinatorModule::GetPriority() const {
    // References
    // -> class RelativePriority priority[2];
    // -> class Module * domainModule;
}
// signature: Overseer::CoordinatorModule::Startup(int)
// Range: 0x801B4240 -> 0x801B42C4
void Overseer::CoordinatorModule::Startup(class CoordinatorModule * this /* r29 */) {
}
// signature: Overseer::CoordinatorModule::Shutdown(int)
// Range: 0x801B42D0 -> 0x801B4348
void Overseer::CoordinatorModule::Shutdown(class CoordinatorModule * this /* r31 */) {
}
// signature: Overseer::CoordinatorModule::FirstUpdate(int)
// Range: 0x801B4350 -> 0x801B4360
void Overseer::CoordinatorModule::FirstUpdate() {
}
// signature: Overseer::CoordinatorModule::Update(int)
// Range: 0x801B4360 -> 0x801B437C
void Overseer::CoordinatorModule::Update() {
    // References
    // -> static class CoordinatorModule coordinatorMod;
}
// Range: 0x801B4380 -> 0x801B4400
void Overseer::CoordinatorModule::INIFirstDomain(class CoordinatorModule * this /* r31 */) {
    // Local variables
    class INIAccess accessINI; // r1+0x8
    char * firstDomainPath; // r4

    // References
    // -> class StartupConfig * config;
}
// Range: 0x801B4400 -> 0x801B449C
void Overseer::Coordinator::Update(class Coordinator * this /* r26 */) {
    // Local variables
    bool complete; // r27
}
// Range: 0x801B44A0 -> 0x801B4524
void Overseer::Coordinator::MakeLoadSetPool(class Coordinator * this /* r28 */) {
}
// Range: 0x801B45A0 -> 0x801B45F4
void Overseer::Coordinator::KillLoadSetPool(class Coordinator * this /* r31 */) {
}
// Range: 0x801B4600 -> 0x801B4640
class LoadSet * Overseer::Coordinator::GetNewLoadSet(class Coordinator * this /* r31 */) {
}
// Range: 0x801B4690 -> 0x801B46E0
void Overseer::Coordinator::AddLoadSet(class Coordinator * this /* r30 */, char * domainPath /* r31 */) {
}
// Range: 0x801B46E0 -> 0x801B471C
void * Overseer::LoadSet::LoadSet(class LoadSet * this /* r31 */) {
    // References
    // -> struct {} __vt__Q28Overseer15DomLoadProgress;
}
// Range: 0x801B4720 -> 0x801B4770
void Overseer::LoadSet::Reset() {
    {
        // Range: 0x801B4728 -> 0x801B4768
        // Local variables
        int i; // r9
    }
}
// signature: Overseer::LoadSet::AddDomain(const char *, unsigned short)
// Range: 0x801B4770 -> 0x801B47F0
void Overseer::LoadSet::AddDomain(class LoadSet * this /* r30 */) {
    {
        // Range: 0x801B4788 -> 0x801B47DC
        // Local variables
        int i; // r31
    }
}
// Range: 0x801B47F0 -> 0x801B47FC
void Overseer::LoadSet::StartLoad() {
}
// Range: 0x801B4800 -> 0x801B4860
void Overseer::LoadSet::Unload(class LoadSet * this /* r29 */) {
    {
        // Range: 0x801B4814 -> 0x801B4844
        // Local variables
        int i; // r30
    }
}
// Range: 0x801B4860 -> 0x801B4994
void Overseer::LoadSet::Update(class LoadSet * this /* r31 */) {
    {
        // Range: 0x801B488C -> 0x801B491C
        // Local variables
        bool done; // r27

        {
            // Range: 0x801B48B0 -> 0x801B490C
            // Local variables
            int i; // r26
        }
    }
    {
        // Range: 0x801B4920 -> 0x801B4978
        // Local variables
        int i; // r26
    }

    // References
    // -> static class DomainModule domainMod;
}
// signature: Overseer::LoadSet::GetDomain(int)
// Range: 0x801B49A0 -> 0x801B49B0
class Domain * Overseer::LoadSet::GetDomain() {
}
// signature: Overseer::DomLoadProgress::AlsoLoadDomain(unsigned long long, const char *)
// Range: 0x801B49B0 -> 0x801B4A7C
void Overseer::DomLoadProgress::AlsoLoadDomain(class DomLoadProgress * this /* r28 */, char * domainPath /* r29 */) {
    {
        // Range: 0x801B49C8 -> 0x801B4A00
        // Local variables
        int i; // r30

        {
            // Range: 0x801B49C8 -> 0x801B4A00
            // Local variables
            int comp; // r0
        }
    }
    {
        // Range: 0x801B4A00 -> 0x801B4A68
        // Local variables
        int i; // r30
    }

    // References
    // -> static class DomainModule domainMod;
}
// signature: Overseer::DomLoadProgress::DomainLoaded(unsigned long long, Domains::Domain *)
// Range: 0x801B4A80 -> 0x801B4B10
void Overseer::DomLoadProgress::DomainLoaded() {
    {
        // Range: 0x801B4A84 -> 0x801B4AC4
        // Local variables
        int i; // r8
    }
    {
        // Range: 0x801B4AC4 -> 0x801B4B00
        // Local variables
        int i; // r7
    }
}
// signature: Overseer::DomLoadProgress::DomainReady(unsigned long long, Domains::Domain *)
// Range: 0x801B4B10 -> 0x801B4BAC
void Overseer::DomLoadProgress::DomainReady() {
    {
        // Range: 0x801B4B14 -> 0x801B4B54
        // Local variables
        int i; // r8
    }
    {
        // Range: 0x801B4B54 -> 0x801B4B90
        // Local variables
        int i; // r7
    }

    // References
    // -> static bool allowTestWorldToRun;
}
