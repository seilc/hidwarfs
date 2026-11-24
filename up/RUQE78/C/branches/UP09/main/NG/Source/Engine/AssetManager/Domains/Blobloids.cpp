/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\AssetManager\Domains\Blobloids.cpp
*/
static class BlobMemCB blobMemCB; // size: 0x4, address: 0x80845B18
// signature: Domains::BlobMemCB::Relocating(Domains::MemHandle *)
// Range: 0x802E6864 -> 0x802E6868
void Domains::BlobMemCB::Relocating() {
}
// Range: 0x802CD354 -> 0x802CDCE8
bool Domains::BlobGlob::InsertBlobloid(unsigned long long blobUID /* r31:r26 */, class BlobAddArg * addArg /* r30 */, unsigned int domRefMask /* r27 */, class DomainPriv * domain /* r28 */) {
    // Local variables
    class EntityHandleBase * handle; // r29
    bool blob_inserted; // r5

    // References
    // -> class RTTID_Data g_rttidDataTable[246];
}
// signature: Domains::Blobloid::InitFromAddArg(Domains::BlobAddArg *)
// Range: 0x802CDCE8 -> 0x802CDEC8
void Domains::Blobloid::InitFromAddArg(class Blobloid * this /* r29 */) {
    // References
    // -> static class DynaMemModule dynaMemMod;
    // -> static class MemHandle nullHandle;
}
// Range: 0x802CDEC8 -> 0x802CE040
void Domains::Blobloid::Done() {
    // References
    // -> static class DynaMemModule dynaMemMod;
    // -> static class MemHandle nullHandle;
}
// Range: 0x802CE040 -> 0x802CE070
char * Domains::Blobloid::BlobData() const {
}
