/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\IO\MediaIO.cpp
*/
static class MediaModule mediamod; // size: 0x9C, address: 0x80803B18
static class ModuleRegistrator mediaIOModReg; // size: 0x8, address: 0x80803BB8
class Module * mediaModule; // size: 0x4, address: 0x8070A00C
class OGCallbacks * ogCallbacks; // size: 0x4, address: 0x80803BC0
static class RelativePriority priority[2]; // size: 0x18, address: 0x8070A010
// Range: 0x802801D0 -> 0x802801E0
class MediaMogul * IO::GetMediaMogul() {
    // References
    // -> static class MediaModule mediamod;
}
// signature: IO::MediaModule::GetPriority(int &) const
// Range: 0x802801E0 -> 0x80280224
class RelativePriority * IO::MediaModule::GetPriority() const {
    // References
    // -> static class RelativePriority priority[2];
    // -> class Module * testSuiteModule;
}
// signature: IO::MediaModule::Startup(int)
// Range: 0x80280224 -> 0x802803F4
void IO::MediaModule::Startup(class MediaModule * this /* r22 */) {
}
// signature: IO::MediaModule::Shutdown(int)
// Range: 0x802803F4 -> 0x8028054C
void IO::MediaModule::Shutdown(class MediaModule * this /* r31 */) {
}
