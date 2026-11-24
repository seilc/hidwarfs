/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\AssetManager\Loader\LoadStream.cpp
*/
static class LSPoolModule lsPoolMod; // size: 0xB4, address: 0x807FDFBC
static class ModuleRegistrator lsPoolModReg; // size: 0x8, address: 0x807FE070
class Module * lsPoolModule; // size: 0x4, address: 0x80706E90
static class RelativePriority priority[4]; // size: 0x30, address: 0x80706E98
static class MemCB_MetaRecord memCB_MetaRec; // size: 0x4, address: 0x807FE07C
// signature: Loader::LSPoolModule::GetPriority(int &) const
// Range: 0x80233408 -> 0x8023345C
class RelativePriority * Loader::LSPoolModule::GetPriority() const {
    // References
    // -> class Module * mediaModule;
    // -> static class RelativePriority priority[4];
    // -> class Module * testSuiteModule;
}
// signature: Loader::LSPoolModule::Startup(int)
// Range: 0x8023345C -> 0x8023354C
void Loader::LSPoolModule::Startup(class LSPoolModule * this /* r24 */) {
    // References
    // -> struct {} __vt__Q26Loader10OurQueryCB;
}
// signature: Loader::LSPoolModule::Shutdown(int)
// Range: 0x8023354C -> 0x802335F4
void Loader::LSPoolModule::Shutdown(class LSPoolModule * this /* r28 */) {
}
// signature: Loader::LSPoolModule::Update(int)
// Range: 0x802335F4 -> 0x802336D8
void Loader::LSPoolModule::Update() {
}
// Range: 0x802336D8 -> 0x80233840
void Loader::ConnectInfo::Update(class ConnectInfo * this /* r29 */, class LoadStream * ls /* r30 */) {
    {
        // Range: 0x802337B0 -> 0x802337D4
        // Local variables
        enum enOpStatus opStat; // r0
    }
    {
        // Range: 0x802337F4 -> 0x80233818
        // Local variables
        enum enOpStatus opStat; // r0
    }

    // References
    // -> static class MSTQueryModule mstQueryMod;
}
// signature: Loader::OurQueryCB::QueryDone(Loader::SectionKey *, Loader::QueryResults *)
// Range: 0x80233840 -> 0x802339F4
void Loader::OurQueryCB::QueryDone(class OurQueryCB * this /* r30 */, class QueryResults * qr /* r31 */) {
}
// signature: Loader::OurQueryCB::HandleError(Loader::LoadErrorCB::enError)
// Range: 0x802339F4 -> 0x80233A14
void Loader::OurQueryCB::HandleError() {
}
// signature: Loader::MemCB_MetaRecord::Relocating(Domains::MemHandle *)
// Range: 0x8024F578 -> 0x8024F588
void Loader::MemCB_MetaRecord::Relocating() {
}
// Range: 0x80233A54 -> 0x80233C30
class MemHandle * Loader::OurQueryCB::MakeMetaDataCopy(class QueryResults * qr /* r30 */) {
    // Local variables
    int numMetaRec; // r3
    int amtMetaData; // r31
    class MetaRecord * metaRec; // r6

    {
        // Range: 0x80233A88 -> 0x80233A88
        // Local variables
        int i; // r4
    }

    // References
    // -> static class MemCB_MetaRecord memCB_MetaRec;
    // -> static class DynaMemModule dynaMemMod;
    // -> static class MemHandle nullHandle;
}
// Range: 0x80233C30 -> 0x80233D30
void Loader::TransferInfo::Update(class TransferInfo * this /* r29 */, class LoadStream * ls /* r30 */) {
    {
        // Range: 0x80233CA4 -> 0x80233CC8
        // Local variables
        enum enOpStatus opStat; // r0
    }
    {
        // Range: 0x80233CF0 -> 0x80233D14
        // Local variables
        enum enOpStatus opStat; // r0
    }
}
