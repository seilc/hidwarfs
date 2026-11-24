/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\TRC\TRCModule.cpp
*/
static class TRCModule trcMod; // size: 0x264, address: 0x808529D8
static class ModuleRegistrator trcModreg; // size: 0x8, address: 0x80852C40
class Module * trcModule; // size: 0x4, address: 0x807C1748
static class RelativePriority priority[3]; // size: 0x24, address: 0x807C174C
// signature: TRC::TRCModule::GetPriority(int &) const
// Range: 0x8035A62C -> 0x8035A684
class RelativePriority * TRC::TRCModule::GetPriority() const {
    // References
    // -> class Module * scaleformModule;
    // -> class Module * consolePadModule;
    // -> static class RelativePriority priority[3];
    // -> class Module * padModule;
}
// signature: TRC::TRCModule::Startup(int)
// Range: 0x8035A684 -> 0x8035A6D8
void TRC::TRCModule::Startup(class TRCModule * this /* r31 */) {
    // References
    // -> class CriticalSection wiiDVDErrorCriticalSection;
}
// signature: TRC::TRCModule::Update(int)
// Range: 0x8035A6D8 -> 0x8035A728
void TRC::TRCModule::Update(class TRCModule * this /* r31 */) {
    // References
    // -> static class MsgBoxManager sMsgBoxManager;
}
// signature: TRC::TRCModule::RegisterGameInterface(TRC::GameInterface *)
// Range: 0x8035A728 -> 0x8035A730
void TRC::TRCModule::RegisterGameInterface() {
}
