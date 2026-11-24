/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\AssetManager\Domains\Blobloids.cpp
*/
static class BlobloidModule blobloidMod; // size: 0x9C, address: 0x807FDC30
static class ModuleRegistrator blobmodreg; // size: 0x8, address: 0x807FDCD0
class Module * blobloidModule; // size: 0x4, address: 0x80706CCC
static class BlobMemCB blobMemCB; // size: 0x4, address: 0x807FDCD8
static class RelativePriority priority[2]; // size: 0x18, address: 0x80706CD0
// signature: Domains::BlobMemCB::Relocating(Domains::MemHandle *)
// Range: 0x8024F5B8 -> 0x8024F5BC
void Domains::BlobMemCB::Relocating() {
}
// Range: 0x8022D0A8 -> 0x8022D0B8
class BlobGlob * Domains::GetBlobManager() {
    // References
    // -> static class BlobloidModule blobloidMod;
}
// signature: Domains::BlobloidModule::GetPriority(int &) const
// Range: 0x8022D0B8 -> 0x8022D0FC
class RelativePriority * Domains::BlobloidModule::GetPriority() const {
    // References
    // -> static class RelativePriority priority[2];
    // -> class Module * scadMgrModule;
}
// signature: Domains::BlobloidModule::Startup(int)
// Range: 0x8022D0FC -> 0x8022D144
void Domains::BlobloidModule::Startup(class BlobloidModule * this /* r31 */) {
}
// signature: Domains::BlobloidModule::Shutdown(int)
// Range: 0x8022D144 -> 0x8022D194
void Domains::BlobloidModule::Shutdown(class BlobloidModule * this /* r31 */) {
}
// signature: Domains::BlobloidModule::Update(int)
// Range: 0x8022D194 -> 0x8022D198
void Domains::BlobloidModule::Update() {
}
// Range: 0x8022D198 -> 0x8022DE30
bool Domains::BlobGlob::InsertBlobloid(class BlobAddArg * addArg /* r25 */, unsigned int domRefMask /* r26 */, class DomainPriv * domain /* r27 */) {
    // Local variables
    class Goodie * goodie; // r28
    bool blob_inserted; // r3

    // References
    // -> class PoolArray schemas;
    // -> static class DynaMemModule dynaMemMod;
    // -> static class MemHandle nullHandle;
    // -> static class ScadMgrModule scadMgrMod;
}
// signature: Domains::BlobGlob::RemoveBlobloid(Overseer::Goodie *, unsigned int)
// Range: 0x8022DE30 -> 0x8022E218
void Domains::BlobGlob::RemoveBlobloid() {
    // References
    // -> static class DynaMemModule dynaMemMod;
    // -> static class MemHandle nullHandle;
    // -> static class ScadMgrModule scadMgrMod;
}
