/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\TRC\TRCModule.cpp
*/
static class TRCModule trcMod; // size: 0x28C, address: 0x807829E8
static class ModuleRegistrator trcModreg; // size: 0x8, address: 0x80782C78
class Module * trcModule; // size: 0x4, address: 0x806CF40C
class RelativePriority priority[3]; // size: 0x24, address: 0x806CF410
// Range: 0x801FEDE0 -> 0x801FEE48
void * TRC::TRCModule::TRCModule(class TRCModule * this /* r31 */) {
    // References
    // -> struct {} __vt__Q23TRC8SaveLoad;
    // -> struct {} __vt__Q23TRC9TRCModule;
}
// signature: TRC::TRCModule::GetPriority(int &) const
// Range: 0x801FEE50 -> 0x801FEEA8
class RelativePriority * TRC::TRCModule::GetPriority() const {
    // References
    // -> class Module * scaleformModule;
    // -> class Module * consolePadModule;
    // -> class RelativePriority priority[3];
    // -> class Module * padModule;
}
// signature: TRC::TRCModule::Startup(int)
// Range: 0x801FEEB0 -> 0x801FEF04
void TRC::TRCModule::Startup(class TRCModule * this /* r31 */) {
    // References
    // -> class CriticalSection wiiDVDErrorCriticalSection;
}
// signature: TRC::TRCModule::Update(int)
// Range: 0x801FEF10 -> 0x801FEF60
void TRC::TRCModule::Update(class TRCModule * this /* r31 */) {
    // References
    // -> static class MsgBoxManager sMsgBoxManager;
}
// signature: TRC::TRCModule::RegisterGameInterface(TRC::GameInterface *)
// Range: 0x801FEF60 -> 0x801FEF68
void TRC::TRCModule::RegisterGameInterface() {
}
