/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\AssetManager\Loader\LoadQueries.cpp
*/
static class MSTQueryModule mstQueryMod; // size: 0x160, address: 0x80774408
static class ModuleRegistrator mstQueryModReg; // size: 0x8, address: 0x80774568
class Module * mstQueryModule; // size: 0x4, address: 0x806C953C
class RelativePriority priority[6]; // size: 0x48, address: 0x806C9540
// Range: 0x801B0BF0 -> 0x801B0C00
class DomainDirMgr * Loader::DomainDirectoryManager() {
    // References
    // -> static class MSTQueryModule mstQueryMod;
}
// Range: 0x801B0C00 -> 0x801B0C64
void * Loader::MSTQueryModule::MSTQueryModule(class MSTQueryModule * this /* r31 */) {
    // References
    // -> struct {} __vt__Q26Loader14MSTQueryModule;
}
// signature: Loader::MSTQueryModule::GetPriority(int &) const
// Range: 0x801B0C70 -> 0x801B0CD4
class RelativePriority * Loader::MSTQueryModule::GetPriority() const {
    // References
    // -> class Module * dynaMemModule;
    // -> class Module * mediaModule;
    // -> class RelativePriority priority[6];
    // -> class Module * testSuiteModule;
}
// signature: Loader::MSTQueryModule::Startup(int)
// Range: 0x801B0CE0 -> 0x801B0D2C
void Loader::MSTQueryModule::Startup(class MSTQueryModule * this /* r31 */) {
}
// signature: Loader::MSTQueryModule::Shutdown(int)
// Range: 0x801B0D30 -> 0x801B0D7C
void Loader::MSTQueryModule::Shutdown(class MSTQueryModule * this /* r31 */) {
}
// signature: Loader::MSTQueryModule::Update(int)
// Range: 0x801B0D80 -> 0x801B0DBC
void Loader::MSTQueryModule::Update(class MSTQueryModule * this /* r31 */) {
}
// Range: 0x801B0DC0 -> 0x801B0E38
void Loader::MSTQueryModule::MakePools(class MSTQueryModule * this /* r31 */) {
}
// Range: 0x801B0F20 -> 0x801B0F9C
void Loader::MSTQueryModule::KillPools(class MSTQueryModule * this /* r31 */) {
}
// Range: 0x801B0FA0 -> 0x801B0FEC
void Loader::MSTQueryModule::SubmitQuery(class MSTQueryModule * this /* r29 */, class QueryAnswerCB * answer /* r30 */, class SectionKey * key /* r31 */) {
}
// Range: 0x801B0FF0 -> 0x801B1048
void Loader::MSTQueryModule::UpdateQueries(class MSTQueryModule * this /* r30 */) {
}
// Range: 0x801B1050 -> 0x801B109C
void Loader::MSTQueryModule::QueueMSTLoad(class MSTQueryModule * this /* r29 */, char * packfileName /* r30 */, class LoadErrorCB * errorCB /* r31 */) {
}
// Range: 0x801B10A0 -> 0x801B1184
bool Loader::MSTQueryModule::QueueDSTLoad(class MSTQueryModule * this /* r27 */, class TableTrack * masterTable /* r28 */, char * domPath /* r29 */, class LoadErrorCB * errorCB /* r30 */) {
    // Local variables
    class SectionTable * sectionTable; // r0
    unsigned int pathHash; // r0
    class TableEntry * loadEntry; // r31
    int numEntries; // r0
    class TableEntry * seRec; // r5

    {
        // Range: 0x801B10EC -> 0x801B1124
        // Local variables
        int i; // r0
    }
}
// Range: 0x801B1190 -> 0x801B1214
void Loader::MSTQueryModule::UpdateLoadQueue(class MSTQueryModule * this /* r30 */) {
}
// signature: Loader::QueryData::Prepare(Loader::QueryAnswerCB *, Loader::SectionKey *)
// Range: 0x801B1220 -> 0x801B1250
void Loader::QueryData::Prepare() {
}
// Range: 0x801B1250 -> 0x801B1388
void Loader::QueryData::Process(class QueryData * this /* r28 */) {
    // Local variables
    char * domainPath; // r30
    class TableTrack * domTable; // r4
    bool dstQueued; // r0
    char * packFilePath; // r29
    class TableTrack * mstTable; // r4
    bool mstQueued; // r0

    // References
    // -> static class MSTQueryModule mstQueryMod;
}
// Range: 0x801B1390 -> 0x801B14AC
void Loader::QueryData::ExamineTable(class QueryData * this /* r30 */, class TableTrack * domainTable /* r31 */, class SectionKey * key /* r23 */) {
    // Local variables
    class SectionTable * sectTable; // r0
    int key_sectionTypeID; // r26
    unsigned short key_langID; // r0
    unsigned int key_nameHash; // r0
    int key_user; // r25
    unsigned char key_parcelType; // r24
    unsigned int key_fromDomHash; // r0
    int numEntries; // r0
    class TableEntry * seRec; // r5

    {
        // Range: 0x801B1404 -> 0x801B1480
        // Local variables
        int i; // r0
    }
}
// signature: Loader::QueryData::TellUserSuccess(Loader::TableTrack *, HEStructs::TableEntry *)
// Range: 0x801B14B0 -> 0x801B14F8
void Loader::QueryData::TellUserSuccess(class QueryData * this /* r8 */) {
    // Local variables
    class QueryResults * qr; // r7
}
// signature: Loader::QueryData::ScanLoadedForMST(const char *)
// Range: 0x801B1500 -> 0x801B156C
class TableTrack * Loader::QueryData::ScanLoadedForMST() {
    // Local variables
    unsigned int pathHash; // r0

    {
        // Range: 0x801B1528 -> 0x801B1558
        // Local variables
        enum enTableType tabType; // r0
    }

    // References
    // -> static class MSTQueryModule mstQueryMod;
}
// signature: Loader::QueryData::ScanLoadedForDST(const char *)
// Range: 0x801B1570 -> 0x801B15DC
class TableTrack * Loader::QueryData::ScanLoadedForDST() {
    // Local variables
    unsigned int pathHash; // r0

    {
        // Range: 0x801B1598 -> 0x801B15C8
        // Local variables
        enum enTableType tabType; // r0
    }

    // References
    // -> static class MSTQueryModule mstQueryMod;
}
// signature: Loader::QueryData::ScanQueuedForMST(const char *)
// Range: 0x801B15E0 -> 0x801B1658
bool Loader::QueryData::ScanQueuedForMST() {
    // Local variables
    unsigned int pathHash; // r0

    {
        // Range: 0x801B1610 -> 0x801B1640
        // Local variables
        unsigned int tableNameHash; // r0
    }

    // References
    // -> static class MSTQueryModule mstQueryMod;
}
// signature: Loader::QueryData::ScanQueuedForDST(const char *)
// Range: 0x801B1660 -> 0x801B16D8
bool Loader::QueryData::ScanQueuedForDST() {
    // Local variables
    unsigned int pathHash; // r0

    {
        // Range: 0x801B1690 -> 0x801B16C0
        // Local variables
        unsigned int tableNameHash; // r0
    }

    // References
    // -> static class MSTQueryModule mstQueryMod;
}
// signature: Loader::MSTLoadItem::Prepare(const char *, Loader::LoadErrorCB *)
// Range: 0x801B16E0 -> 0x801B1750
void Loader::MSTLoadItem::Prepare(class MSTLoadItem * this /* r30 */, char * fileName /* r31 */) {
}
// signature: Loader::MSTLoadItem::Prepare(Loader::TableTrack *, HEStructs::TableEntry *, Loader::LoadErrorCB *)
// Range: 0x801B1750 -> 0x801B17D0
void Loader::MSTLoadItem::Prepare(class MSTLoadItem * this /* r29 */, class TableTrack * parentTable /* r30 */, class TableEntry * loadEntry /* r31 */) {
}
// Range: 0x801B17D0 -> 0x801B187C
void Loader::MSTLoadItem::Begin(class MSTLoadItem * this /* r30 */, class MediaFile * mediaFile /* r31 */) {
    // Local variables
    class MemCallbacks * memCB; // r6

    // References
    // -> static class MemCB_SectTable memCB_sectTable;
}
// Range: 0x801B1880 -> 0x801B18D8
void Loader::MSTLoadItem::Process(class MSTLoadItem * this /* r31 */) {
    // Local variables
    bool isDone; // r0
}
// Range: 0x801B18E0 -> 0x801B19C0
void Loader::MSTLoadItem::Finish(class MSTLoadItem * this /* r29 */) {
    // Local variables
    class MemHandle * memHandle; // r31
    int useSectorSize; // r30

    // References
    // -> static class MSTQueryModule mstQueryMod;
}
