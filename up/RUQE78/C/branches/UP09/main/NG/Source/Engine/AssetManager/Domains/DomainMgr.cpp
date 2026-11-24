/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\AssetManager\Domains\DomainMgr.cpp
*/
static class DomainModule domainMod; // size: 0xA0, address: 0x80845B28
static class ModuleRegistrator domainModReg; // size: 0x8, address: 0x80845BC8
class Module * domainModule; // size: 0x4, address: 0x807BD1A0
static class RelativePriority priority[2]; // size: 0x18, address: 0x807BD1A8
// signature: Domains::DomainModule::GetPriority(int &) const
// Range: 0x802D11E4 -> 0x802D1228
class RelativePriority * Domains::DomainModule::GetPriority() const {
    // References
    // -> static class RelativePriority priority[2];
    // -> class Module * bootStrapModule;
}
// signature: Domains::DomainModule::Startup(int)
// Range: 0x802D1228 -> 0x802D12EC
void Domains::DomainModule::Startup(class DomainModule * this /* r29 */) {
}
// signature: Domains::DomainModule::Shutdown(int)
// Range: 0x802D12EC -> 0x802D1370
void Domains::DomainModule::Shutdown(class DomainModule * this /* r30 */) {
}
// Range: 0x802D1370 -> 0x802D1620
void Domains::DomainModule::Update(int stage /* r20 */) {
    // References
    // -> struct {} __vt__Q24Util23BlockAllocatorArray<Ux>;
    // -> static class DomainModule domainMod;
}
// Range: 0x802D1620 -> 0x802D1664
bool Domains::IsDomainUnloading() {
    // References
    // -> static class DomainModule domainMod;
}
// Range: 0x802D1664 -> 0x802D1964
class Domain * Domains::DomainMgr::CreateDomain(class DomainMgr * this /* r28 */, char * domainName /* r29 */) {
    // Local variables
    unsigned int domRefMask; // r26

    {
        // Range: 0x802D1688 -> 0x802D16B8
        // Local variables
        int rc; // r0
        char nameBuff[128]; // r1+0x8
    }

    // References
    // -> struct {} __vt__Q24Util23BlockAllocatorArray<Ux>;
}
