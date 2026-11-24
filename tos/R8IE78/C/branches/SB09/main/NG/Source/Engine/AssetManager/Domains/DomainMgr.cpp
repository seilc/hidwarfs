/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\AssetManager\Domains\DomainMgr.cpp
*/
static class DomainModule domainMod; // size: 0xA0, address: 0x807742A8
static class ModuleRegistrator domainModReg; // size: 0x8, address: 0x80774348
class Module * domainModule; // size: 0x4, address: 0x806C9428
class RelativePriority priority[2]; // size: 0x18, address: 0x806C9430
// Range: 0x801AF370 -> 0x801AF3B4
void * Domains::DomainModule::DomainModule(class DomainModule * this /* r31 */) {
    // References
    // -> struct {} __vt__Q27Domains12DomainModule;
}
// signature: Domains::DomainModule::GetPriority(int &) const
// Range: 0x801AF3C0 -> 0x801AF404
class RelativePriority * Domains::DomainModule::GetPriority() const {
    // References
    // -> class RelativePriority priority[2];
    // -> class Module * bootStrapModule;
}
// signature: Domains::DomainModule::Startup(int)
// Range: 0x801AF410 -> 0x801AF478
void Domains::DomainModule::Startup(class DomainModule * this /* r30 */) {
}
// signature: Domains::DomainModule::Shutdown(int)
// Range: 0x801AF480 -> 0x801AF4D8
void Domains::DomainModule::Shutdown(class DomainModule * this /* r31 */) {
}
// Range: 0x801AF4E0 -> 0x801AF52C
void Domains::DomainModule::Update(int stage /* r31 */) {
    // References
    // -> static class DomainModule domainMod;
}
// Range: 0x801AF530 -> 0x801AF540
bool Domains::IsDomainUnloading() {
    // References
    // -> static class DomainModule domainMod;
}
// signature: Domains::UnloadDomain(const char *)
// Range: 0x801AF540 -> 0x801AF590
void Domains::UnloadDomain() {
    // References
    // -> static class DomainModule domainMod;
}
// Range: 0x801AF590 -> 0x801AF5E8
void Domains::DomainMgr::Init(class DomainMgr * this /* r31 */) {
}
// Range: 0x801AF5F0 -> 0x801AF644
void Domains::DomainMgr::Done(class DomainMgr * this /* r31 */) {
}
// Range: 0x801AF650 -> 0x801AF744
class Domain * Domains::DomainMgr::CreateDomain(class DomainMgr * this /* r28 */, char * domainName /* r29 */) {
    // Local variables
    unsigned int domRefMask; // r30

    {
        // Range: 0x801AF674 -> 0x801AF6B0
        // Local variables
        int rc; // r0
        char nameBuff[128]; // r1+0x8
    }
}
// Range: 0x801AF750 -> 0x801AF7E4
class Iterator Domains::DomainMgr::DestroyDomain(class DomainMgr * this /* r28 */, class Iterator & it_dom /* r29 */) {
    // Local variables
    class Domain * dom; // r30
}
// Range: 0x801AF7F0 -> 0x801AF864
class Domain * Domains::DomainMgr::FindDomain(char * domainName /* r29 */) {
    {
        // Range: 0x801AF810 -> 0x801AF84C
        // Local variables
        int rc; // r0
        char nameBuff[128]; // r1+0x8
    }
}
// signature: Domains::HARDWIRE_CleanupDomainName(char *, const char *)
// Range: 0x801AF900 -> 0x801AF95C
void Domains::HARDWIRE_CleanupDomainName() {
    // Local variables
    char * out; // r3
    char * in; // r4

    // References
    // -> class __locale _current_locale;
}
// signature: Domains::DomainMgr::DomainRequest(const char *, Domains::ProgressCB *, unsigned short)
// Range: 0x801AF870 -> 0x801AF8F8
class Domain * Domains::DomainMgr::DomainRequest(class DomainMgr * this /* r29 */, class ProgressCB * progressCB /* r31 */, unsigned short packLangID /* r30 */) {
    // Local variables
    char theDomName[256]; // r1+0x8
    class Domain * dom; // r0
}
// Range: 0x801AF960 -> 0x801AF998
bool Domains::DomainMgr::IsDomainUnloading() {
}
// Range: 0x801AF9A0 -> 0x801AFA10
void Domains::DomainMgr::Update(class DomainMgr * this /* r28 */) {
    {
        // Range: 0x801AF9C0 -> 0x801AF9FC
        // Local variables
        class Domain * dom; // r29
    }
}
