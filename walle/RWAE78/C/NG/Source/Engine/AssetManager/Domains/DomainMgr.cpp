/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\AssetManager\Domains\DomainMgr.cpp
*/
static class DomainModule domainMod; // size: 0xA0, address: 0x807FDCF0
static class ModuleRegistrator domainModReg; // size: 0x8, address: 0x807FDD90
class Module * domainModule; // size: 0x4, address: 0x80706D10
static class RelativePriority priority[4]; // size: 0x30, address: 0x80706D18
// signature: Domains::DomainModule::GetPriority(int &) const
// Range: 0x80230AA4 -> 0x80230AF8
class RelativePriority * Domains::DomainModule::GetPriority() const {
    // References
    // -> class Module * blobloidModule;
    // -> static class RelativePriority priority[4];
    // -> class Module * bootStrapModule;
}
// signature: Domains::DomainModule::Startup(int)
// Range: 0x80230AF8 -> 0x80230BBC
void Domains::DomainModule::Startup(class DomainModule * this /* r29 */) {
}
// signature: Domains::DomainModule::Shutdown(int)
// Range: 0x80230BBC -> 0x80230C40
void Domains::DomainModule::Shutdown(class DomainModule * this /* r30 */) {
}
// signature: Domains::DomainModule::Update(int)
// Range: 0x80230C40 -> 0x80230ED8
void Domains::DomainModule::Update() {
    // References
    // -> struct {} __vt__Q24Util38BlockAllocatorArray<Q27Domains6MyUIDs>;
    // -> static class DomainModule domainMod;
}
// Range: 0x80230ED8 -> 0x80230F1C
bool Domains::IsDomainUnloading() {
    // References
    // -> static class DomainModule domainMod;
}
// Range: 0x80230F1C -> 0x80231214
class Domain * Domains::DomainMgr::CreateDomain(class DomainMgr * this /* r28 */, char * domainName /* r29 */) {
    // Local variables
    unsigned int domRefMask; // r26

    {
        // Range: 0x80230F40 -> 0x80230F70
        // Local variables
        int rc; // r0
        char nameBuff[128]; // r1+0x8
    }

    // References
    // -> struct {} __vt__Q24Util38BlockAllocatorArray<Q27Domains6MyUIDs>;
}
