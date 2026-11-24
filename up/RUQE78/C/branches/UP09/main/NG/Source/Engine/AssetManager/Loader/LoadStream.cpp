/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\AssetManager\Loader\LoadStream.cpp
*/
static class LSPoolModule lsPoolMod; // size: 0xB4, address: 0x80845DFC
static class ModuleRegistrator lsPoolModReg; // size: 0x8, address: 0x80845EB0
class Module * lsPoolModule; // size: 0x4, address: 0x807BD310
static class RelativePriority priority[4]; // size: 0x30, address: 0x807BD318
static class MemCB_MetaRecord memCB_MetaRec; // size: 0x4, address: 0x80845EBC
// signature: Loader::LSPoolModule::GetPriority(int &) const
// Range: 0x802D41E8 -> 0x802D423C
class RelativePriority * Loader::LSPoolModule::GetPriority() const {
    // References
    // -> class Module * mediaModule;
    // -> static class RelativePriority priority[4];
    // -> class Module * testSuiteModule;
}
// signature: Loader::LSPoolModule::Startup(int)
// Range: 0x802D423C -> 0x802D432C
void Loader::LSPoolModule::Startup(class LSPoolModule * this /* r24 */) {
    // References
    // -> struct {} __vt__Q26Loader10OurQueryCB;
}
// signature: Loader::LSPoolModule::Shutdown(int)
// Range: 0x802D432C -> 0x802D43D4
void Loader::LSPoolModule::Shutdown(class LSPoolModule * this /* r28 */) {
}
// signature: Loader::LSPoolModule::Update(int)
// Range: 0x802D43D4 -> 0x802D4508
void Loader::LSPoolModule::Update() {
}
// Range: 0x802D4508 -> 0x802D4710
void Loader::ConnectInfo::Update(class ConnectInfo * this /* r30 */, class LoadStream * ls /* r31 */) {
    {
        // Range: 0x802D45E0 -> 0x802D4654
        // Local variables
        enum enOpStatus opStat; // r0
    }
    {
        // Range: 0x802D4674 -> 0x802D46E8
        // Local variables
        enum enOpStatus opStat; // r0
    }

    // References
    // -> static class MSTQueryModule mstQueryMod;
}
// signature: Loader::OurQueryCB::QueryDone(Loader::SectionKey *, Loader::QueryResults *)
// Range: 0x802D4710 -> 0x802D48AC
void Loader::OurQueryCB::QueryDone(class OurQueryCB * this /* r30 */, class QueryResults * qr /* r31 */) {
}
// signature: Loader::OurQueryCB::HandleError(Loader::LoadErrorCB::enError)
// Range: 0x802D48AC -> 0x802D48CC
void Loader::OurQueryCB::HandleError() {
}
// Range: 0x802D48D0 -> 0x802D4AAC
class MemHandle * Loader::OurQueryCB::MakeMetaDataCopy(class QueryResults * qr /* r30 */) {
    // Local variables
    int numMetaRec; // r3
    int amtMetaData; // r31
    class MetaRecord * metaRec; // r6

    {
        // Range: 0x802D4904 -> 0x802D4904
        // Local variables
        int i; // r4
    }

    // References
    // -> static class MemCB_MetaRecord memCB_MetaRec;
    // -> static class DynaMemModule dynaMemMod;
    // -> static class MemHandle nullHandle;
}
// Range: 0x802D4AAC -> 0x802D4C4C
void Loader::TransferInfo::Update(class TransferInfo * this /* r30 */, class LoadStream * ls /* r31 */) {
    {
        // Range: 0x802D4B20 -> 0x802D4B94
        // Local variables
        enum enOpStatus opStat; // r0
    }
    {
        // Range: 0x802D4BBC -> 0x802D4C30
        // Local variables
        enum enOpStatus opStat; // r0
    }
}
