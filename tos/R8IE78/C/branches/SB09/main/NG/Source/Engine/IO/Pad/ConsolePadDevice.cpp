/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\IO\Pad\ConsolePadDevice.cpp
*/
static class ConsolePadDeviceModule paddevmod; // size: 0x98, address: 0x80779628
static class ModuleRegistrator consolePadDeviceModReg; // size: 0x8, address: 0x807796C0
class Module * consolePadModule; // size: 0x4, address: 0x806CDF30
static class PoolArray pads; // size: 0xC, address: 0x807796C8
class RelativePriority priority[3]; // size: 0x24, address: 0x806CDF34
// signature: IO::ConsolePadDeviceModule::GetPriority(int &) const
// Range: 0x801DD560 -> 0x801DD5A8
class RelativePriority * IO::ConsolePadDeviceModule::GetPriority() const {
    // References
    // -> class RelativePriority priority[3];
    // -> class Module * padModule;
}
// Range: 0x801DD5B0 -> 0x801DD5F4
void * IO::ConsolePadDeviceModule::ConsolePadDeviceModule(class ConsolePadDeviceModule * this /* r31 */) {
    // References
    // -> struct {} __vt__Q22IO22ConsolePadDeviceModule;
}
// signature: IO::ConsolePadDeviceModule::Startup(int)
// Range: 0x801DD600 -> 0x801DD604
void IO::ConsolePadDeviceModule::Startup() {
}
// signature: IO::ConsolePadDeviceModule::Shutdown(int)
// Range: 0x801DD610 -> 0x801DD614
void IO::ConsolePadDeviceModule::Shutdown() {
}
// Range: 0x801DD620 -> 0x801DD630
void * IO::ConsolePadDevice::ConsolePadDevice() {
    // References
    // -> struct {} __vt__Q22IO16ConsolePadDevice;
}
// Range: 0x801DD630 -> 0x801DD6A8
void IO::ConsolePadDevice::Setup(class ConsolePadDevice * this /* r30 */, int port /* r31 */) {
    // References
    // -> class PadDevice * headDevice;
}
// Range: 0x801DD6B0 -> 0x801DD718
void IO::ConsolePadDevice::Poll(class ConsolePadDevice * this /* r30 */, class PadInput & istate /* r31 */) {
}
// signature: IO::ConsolePadDevice::StartRumble(int, float)
// Range: 0x801DD780 -> 0x801DD78C
void IO::ConsolePadDevice::StartRumble() {
}
// signature: IO::ConsolePadDevice::StopRumble(int)
// Range: 0x801DD790 -> 0x801DD79C
void IO::ConsolePadDevice::StopRumble() {
}
// Range: 0x801DD7A0 -> 0x801DD808
void IO::ConsolePadDevice::StopAllRumble() {
    {
        // Range: 0x801DD7A8 -> 0x801DD7F4
        // Local variables
        int end; // r28
        int i; // r29
    }

    // References
    // -> static class PoolArray pads;
}
// Range: 0x801DD810 -> 0x801DD904
void IO::ConsolePadDevice::CreatePads() {
    // Local variables
    class PadInput dummyState; // r1+0x8

    {
        // Range: 0x801DD87C -> 0x801DD8AC
        // Local variables
        int i; // r28
    }
    {
        // Range: 0x801DD8B4 -> 0x801DD8F0
        // Local variables
        int i; // r28
    }

    // References
    // -> static class PoolArray pads;
}
// Range: 0x801DD910 -> 0x801DD990
void IO::ConsolePadDevice::DestroyPads() {
    // References
    // -> static class PoolArray pads;
}
