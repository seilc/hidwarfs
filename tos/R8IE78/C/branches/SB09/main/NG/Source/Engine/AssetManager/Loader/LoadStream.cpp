/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\AssetManager\Loader\LoadStream.cpp
*/
static class LSPoolModule lsPoolMod; // size: 0xB4, address: 0x80774570
static class ModuleRegistrator lsPoolModReg; // size: 0x8, address: 0x80774628
class Module * lsPoolModule; // size: 0x4, address: 0x806C9598
class RelativePriority priority[4]; // size: 0x30, address: 0x806C95A0
static class MemCB_MetaRecord memCB_MetaRec; // size: 0x4, address: 0x80774630
// Range: 0x801B19C0 -> 0x801B1A0C
void * Loader::LSPoolModule::LSPoolModule(class LSPoolModule * this /* r31 */) {
    // References
    // -> struct {} __vt__Q26Loader12LSPoolModule;
}
// signature: Loader::LSPoolModule::GetPriority(int &) const
// Range: 0x801B1A10 -> 0x801B1A64
class RelativePriority * Loader::LSPoolModule::GetPriority() const {
    // References
    // -> class Module * mediaModule;
    // -> class RelativePriority priority[4];
    // -> class Module * testSuiteModule;
}
// signature: Loader::LSPoolModule::Startup(int)
// Range: 0x801B1A70 -> 0x801B1A80
void Loader::LSPoolModule::Startup() {
}
// signature: Loader::LSPoolModule::Shutdown(int)
// Range: 0x801B1A80 -> 0x801B1A90
void Loader::LSPoolModule::Shutdown() {
}
// signature: Loader::LSPoolModule::Update(int)
// Range: 0x801B1A90 -> 0x801B1AA0
void Loader::LSPoolModule::Update() {
}
// Range: 0x801B1AA0 -> 0x801B1B24
void Loader::LSPoolModule::MakePool(class LSPoolModule * this /* r28 */) {
}
// Range: 0x801B1C80 -> 0x801B1D00
void Loader::LSPoolModule::KillPool(class LSPoolModule * this /* r28 */) {
    {
        // Range: 0x801B1C94 -> 0x801B1CEC
        // Local variables
        class NodeType * streams; // r0
    }
}
// Range: 0x801B1D00 -> 0x801B1D54
class LoadStream * Loader::LSPoolModule::GrabLoadStream(class LSPoolModule * this /* r31 */) {
}
// Range: 0x801B1D60 -> 0x801B1DCC
void Loader::LSPoolModule::FreeLoadStream(class LSPoolModule * this /* r29 */, class LoadStream * loadStream /* r30 */) {
}
// Range: 0x801B1DD0 -> 0x801B1E24
void Loader::LSPoolModule::UpdateStreams() {
}
// Range: 0x801B1E30 -> 0x801B1E94
void Loader::LoadStream::Init(class LoadStream * this /* r30 */) {
}
// Range: 0x801B1EA0 -> 0x801B1EE4
void Loader::LoadStream::Done(class LoadStream * this /* r31 */) {
}
// Range: 0x801B1EF0 -> 0x801B1F18
bool Loader::LoadStream::VerifyOkToFree() {
    // Local variables
    enum enOpStatus opStat; // r0
}
// Range: 0x801B1F20 -> 0x801B1F34
void Loader::LoadStream::Disconnect() {
}
// Range: 0x801B1F40 -> 0x801B1F6C
enum enStatus Loader::LoadStream::IsConnected() {
}
// Range: 0x801B1F70 -> 0x801B1F9C
enum enStatus Loader::LoadStream::IsDisconnected() {
}
// Range: 0x801B1FA0 -> 0x801B1FCC
enum enStatus Loader::LoadStream::ReadIsDone() {
}
// signature: Loader::LoadStream::GetMetaRecords(int *)
// Range: 0x801B1FD0 -> 0x801B2000
class MetaRecord * Loader::LoadStream::GetMetaRecords() {
}
// Range: 0x801B2000 -> 0x801B2024
void Loader::LSWorker::Init() {
}
// signature: Loader::LSWorker::Update(Loader::LoadStream *)
// Range: 0x801B2030 -> 0x801B206C
void Loader::LSWorker::Update() {
}
// signature: Loader::ConnectInfo::Update(Loader::LoadStream *)
// Range: 0x801B2070 -> 0x801B2178
void Loader::ConnectInfo::Update(class ConnectInfo * this /* r31 */) {
    {
        // Range: 0x801B2108 -> 0x801B2120
        // Local variables
        enum enOpStatus opStat; // r0
    }
    {
        // Range: 0x801B2140 -> 0x801B2158
        // Local variables
        enum enOpStatus opStat; // r0
    }

    // References
    // -> static class MSTQueryModule mstQueryMod;
}
// signature: Loader::OurQueryCB::QueryDone(Loader::SectionKey *, Loader::QueryResults *)
// Range: 0x801B2180 -> 0x801B230C
void Loader::OurQueryCB::QueryDone(class OurQueryCB * this /* r30 */, class QueryResults * qr /* r31 */) {
}
// signature: Loader::OurQueryCB::HandleError(Loader::LoadErrorCB::enError)
// Range: 0x801B2310 -> 0x801B2330
void Loader::OurQueryCB::HandleError() {
}
// Range: 0x801B2330 -> 0x801B23E0
class MemHandle * Loader::OurQueryCB::MakeMetaDataCopy(class QueryResults * qr /* r30 */) {
    // Local variables
    int numMetaRec; // r0
    int amtMetaData; // r31
    class MetaRecord * metaRec; // r4
    class MemHandle * memHandle; // r30

    {
        // Range: 0x801B2374 -> 0x801B2388
        // Local variables
        int i; // r0
    }

    // References
    // -> static class MemCB_MetaRecord memCB_MetaRec;
}
// signature: Loader::TransferInfo::Start(Loader::LoadStream *, char *, int, int)
// Range: 0x801B23E0 -> 0x801B240C
void Loader::TransferInfo::Start() {
}
// signature: Loader::TransferInfo::Update(Loader::LoadStream *)
// Range: 0x801B2410 -> 0x801B24D8
void Loader::TransferInfo::Update(class TransferInfo * this /* r31 */) {
    {
        // Range: 0x801B2478 -> 0x801B248C
        // Local variables
        enum enOpStatus opStat; // r0
    }
    {
        // Range: 0x801B24B0 -> 0x801B24C4
        // Local variables
        enum enOpStatus opStat; // r0
    }
}
// signature: Loader::DisconnectInfo::Update(Loader::LoadStream *)
// Range: 0x801B24E0 -> 0x801B254C
void Loader::DisconnectInfo::Update(class DisconnectInfo * this /* r31 */) {
    {
        // Range: 0x801B2520 -> 0x801B2538
        // Local variables
        enum enOpStatus opStat; // r0
    }
}
