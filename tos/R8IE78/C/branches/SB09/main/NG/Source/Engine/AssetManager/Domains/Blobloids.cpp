/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\AssetManager\Domains\Blobloids.cpp
*/
static class BlobMemCB blobMemCB; // size: 0x4, address: 0x80774298
// Range: 0x801ACD80 -> 0x801ACE58
bool Domains::BlobGlob::InsertBlobloid(unsigned long long blobUID /* r26:r25 */, class BlobAddArg * addArg /* r27 */, unsigned int domRefMask /* r28 */, class DomainPriv * domain /* r29 */) {
    // Local variables
    class EntityHandleBase * handle; // r31
    bool blob_inserted; // r30
}
// signature: Domains::BlobGlob::RemoveBlobloid(World::EntityHandleBase *, unsigned int)
// Range: 0x801ACE60 -> 0x801ACEAC
void Domains::BlobGlob::RemoveBlobloid(class EntityHandleBase * handle /* r31 */) {
}
// signature: Domains::Blobloid::InitFromAddArg(Domains::BlobAddArg *)
// Range: 0x801ACEB0 -> 0x801ACEFC
void Domains::Blobloid::InitFromAddArg() {
}
// Range: 0x801ACF00 -> 0x801ACF38
void Domains::Blobloid::Done() {
}
// Range: 0x801ACF40 -> 0x801ACF70
char * Domains::Blobloid::BlobData() const {
}
// Range: 0x801ACF70 -> 0x801ACFE4
void Domains::Blobloid::CustomAllocate(class Blobloid * this /* r30 */, class BlobCustomAlloc * newCustAlloc /* r31 */) {
}
// signature: Domains::Blobloid::AddDomainRef(unsigned int)
// Range: 0x801ACFF0 -> 0x801AD010
void Domains::Blobloid::AddDomainRef() {
}
// signature: Domains::Blobloid::RemDomainRef(unsigned int)
// Range: 0x801AD010 -> 0x801AD064
void Domains::Blobloid::RemDomainRef() {
    {
        // Range: 0x801AD030 -> 0x801AD060
        // Local variables
        unsigned short curShift; // r5
    }
}
// signature: Domains::Blobloid::DoOverWrite(const Domains::BlobAddArg &)
// Range: 0x801AD070 -> 0x801AD098
bool Domains::Blobloid::DoOverWrite() {
}
