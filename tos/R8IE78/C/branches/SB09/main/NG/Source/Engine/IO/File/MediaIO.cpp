/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\IO\File\MediaIO.cpp
*/
static class MediaModule mediamod; // size: 0x9C, address: 0x807798C8
static class ModuleRegistrator mediaIOModReg; // size: 0x8, address: 0x80779968
class Module * mediaModule; // size: 0x4, address: 0x806CDFD4
class RelativePriority priority[2]; // size: 0x18, address: 0x806CDFD8
// Range: 0x801E26D0 -> 0x801E271C
void * IO::MediaModule::MediaModule(class MediaModule * this /* r31 */) {
    // References
    // -> struct {} __vt__Q22IO11MediaModule;
}
// signature: IO::MediaModule::GetPriority(int &) const
// Range: 0x801E2720 -> 0x801E2764
class RelativePriority * IO::MediaModule::GetPriority() const {
    // References
    // -> class RelativePriority priority[2];
    // -> class Module * testSuiteModule;
}
// signature: IO::MediaModule::Startup(int)
// Range: 0x801E2770 -> 0x801E27E0
void IO::MediaModule::Startup(class MediaModule * this /* r31 */) {
}
// signature: IO::MediaModule::Shutdown(int)
// Range: 0x801E27E0 -> 0x801E2830
void IO::MediaModule::Shutdown(class MediaModule * this /* r31 */) {
}
// signature: IO::MediaMogul::AddHandler(IO::enMediaTarget, IO::MediaHandler *)
// Range: 0x801E2830 -> 0x801E2860
void IO::MediaMogul::AddHandler() {
}
// Range: 0x801E2860 -> 0x801E28B4
void IO::MediaMogul::Init(class MediaMogul * this /* r31 */) {
}
// Range: 0x801E28C0 -> 0x801E2958
void IO::MediaMogul::Done(class MediaMogul * this /* r27 */) {
    // Local variables
    int num; // r30

    {
        // Range: 0x801E28D4 -> 0x801E291C
        // Local variables
        int i; // r29

        {
            // Range: 0x801E28D4 -> 0x801E291C
            // Local variables
            class MediaHandler * hand; // r28
        }
    }
}
// Range: 0x801E2960 -> 0x801E29B4
void IO::MediaMogul::InitHandlers(class MediaMogul * this /* r28 */) {
    // Local variables
    int num; // r30

    {
        // Range: 0x801E2974 -> 0x801E29A0
        // Local variables
        int i; // r29
    }
}
// Range: 0x801E29C0 -> 0x801E2A08
void IO::MediaMogul::InitMediaConfig(class MediaMogul * this /* r31 */) {
}
// signature: IO::MediaMogul::FindHandler(IO::enMediaTarget)
// Range: 0x801E2A10 -> 0x801E2A5C
class MediaHandler * IO::MediaMogul::FindHandler() {
    // Local variables
    int num; // r0

    {
        // Range: 0x801E2A14 -> 0x801E2A54
        // Local variables
        int i; // r0

        {
            // Range: 0x801E2A14 -> 0x801E2A54
            // Local variables
            class MediaHandler * hand; // r5
        }
    }

    // References
    // -> static class MediaModule mediamod;
}
// Range: 0x801E2A60 -> 0x801E2AD8
void IO::MediaHandler::ThreadCreate(class MediaHandler * this /* r31 */) {
    // Local variables
    class Runnable * runner; // r0
}
// Range: 0x801E2AE0 -> 0x801E2B38
void IO::MediaHandler::ThreadSendHalt() {
}
// Range: 0x801E2B40 -> 0x801E2B9C
void IO::MediaHandler::CmdQueueCreate(class MediaHandler * this /* r30 */) {
    // Local variables
    int queueSize; // r31
}
// Range: 0x801E2BB0 -> 0x801E2C0C
void IO::MediaHandler::CmdQueueDestroy(class MediaHandler * this /* r31 */) {
}
