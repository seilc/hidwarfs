/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\AssetManager\Loader\LoadQueries.cpp
*/
static class MSTQueryModule mstQueryMod; // size: 0x160, address: 0x80845C90
static class ModuleRegistrator mstQueryModReg; // size: 0x8, address: 0x80845DF0
class Module * mstQueryModule; // size: 0x4, address: 0x807BD2B4
static class RelativePriority priority[6]; // size: 0x48, address: 0x807BD2B8
// Range: 0x802D33A4 -> 0x802D33B4
class DomainDirMgr * Loader::DomainDirectoryManager() {
    // References
    // -> static class MSTQueryModule mstQueryMod;
}
// signature: Loader::MSTQueryModule::GetPriority(int &) const
// Range: 0x802D33B4 -> 0x802D3418
class RelativePriority * Loader::MSTQueryModule::GetPriority() const {
    // References
    // -> class Module * dynaMemModule;
    // -> class Module * mediaModule;
    // -> static class RelativePriority priority[6];
    // -> class Module * testSuiteModule;
}
// signature: Loader::MSTQueryModule::Startup(int)
// Range: 0x802D3418 -> 0x802D3550
void Loader::MSTQueryModule::Startup(class MSTQueryModule * this /* r30 */) {
}
// signature: Loader::MSTQueryModule::Shutdown(int)
// Range: 0x802D3550 -> 0x802D3730
void Loader::MSTQueryModule::Shutdown(class MSTQueryModule * this /* r26 */) {
    // References
    // -> static class MemHandle nullHandle;
    // -> static class DynaMemModule dynaMemMod;
}
// signature: Loader::MSTQueryModule::Update(int)
// Range: 0x802D3730 -> 0x802D38D4
void Loader::MSTQueryModule::Update(class MSTQueryModule * this /* r30 */) {
    // References
    // -> static class MemCB_SectTable memCB_sectTable;
}
// signature: Loader::MSTQueryModule::QueueDSTLoad(Loader::TableTrack *, const char *, Loader::LoadErrorCB *)
// Range: 0x802D38D4 -> 0x802D3A24
bool Loader::MSTQueryModule::QueueDSTLoad(class MSTQueryModule * this /* r29 */, class TableTrack * masterTable /* r30 */, class LoadErrorCB * errorCB /* r31 */) {
    // Local variables
    unsigned int pathHash; // r0
    class TableEntry * loadEntry; // r28
    int numEntries; // r0
    class TableEntry * seRec; // r5

    {
        // Range: 0x802D3944 -> 0x802D3974
        // Local variables
        int i; // r0
    }
}
// Range: 0x802D3A24 -> 0x802D3CA8
void Loader::QueryData::Process(class QueryData * this /* r29 */) {
    // Local variables
    char * domainPath; // r31
    class TableTrack * domTable; // r4
    char * packFilePath; // r30
    class TableTrack * mstTable; // r4

    // References
    // -> static class MSTQueryModule mstQueryMod;
}
// signature: Loader::QueryData::ExamineTable(Loader::TableTrack *, Loader::SectionKey *)
// Range: 0x802D3CA8 -> 0x802D3E34
void Loader::QueryData::ExamineTable(class QueryData * this /* r6 */) {
    // Local variables
    int key_sectionTypeID; // r0
    unsigned short key_langID; // r0
    unsigned int key_nameHash; // r0
    int key_user; // r31
    unsigned char key_parcelType; // r30
    unsigned int key_fromDomHash; // r0
    int numEntries; // r5
    class TableEntry * seRec; // r10

    {
        // Range: 0x802D3D54 -> 0x802D3DFC
        // Local variables
        int i; // r0
    }
}
// signature: Loader::QueryData::ScanLoadedForMST(const char *)
// Range: 0x802D3E34 -> 0x802D3E9C
class TableTrack * Loader::QueryData::ScanLoadedForMST() {
    // Local variables
    unsigned int pathHash; // r0

    {
        // Range: 0x802D3E6C -> 0x802D3E88
        // Local variables
        enum enTableType tabType; // r0
    }

    // References
    // -> static class MSTQueryModule mstQueryMod;
}
// signature: Loader::QueryData::ScanLoadedForDST(const char *)
// Range: 0x802D3E9C -> 0x802D3F04
class TableTrack * Loader::QueryData::ScanLoadedForDST() {
    // Local variables
    unsigned int pathHash; // r0

    {
        // Range: 0x802D3ED4 -> 0x802D3EF0
        // Local variables
        enum enTableType tabType; // r0
    }

    // References
    // -> static class MSTQueryModule mstQueryMod;
}
// Range: 0x802D3F04 -> 0x802D41E4
void Loader::MSTLoadItem::Finish(class MSTLoadItem * this /* r28 */) {
    // Local variables
    class MemHandle * memHandle; // r30
    int useSectorSize; // r29

    // References
    // -> static class MSTQueryModule mstQueryMod;
    // -> static class DynaMemModule dynaMemMod;
    // -> static class MemHandle nullHandle;
}
