/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\IO\Pad\ConsolePadDevice.cpp
*/
static class ConsolePadDeviceModule paddevmod; // size: 0x98, address: 0x8084ADD0
static class ModuleRegistrator consolePadDeviceModReg; // size: 0x8, address: 0x8084AE68
class Module * consolePadModule; // size: 0x4, address: 0x807BFE6C
static class PoolArray pads; // size: 0xC, address: 0x8084AE70
static class RelativePriority priority[3]; // size: 0x24, address: 0x807BFE70
// signature: IO::ConsolePadDeviceModule::GetPriority(int &) const
// Range: 0x8030F150 -> 0x8030F198
class RelativePriority * IO::ConsolePadDeviceModule::GetPriority() const {
    // References
    // -> static class RelativePriority priority[3];
    // -> class Module * padModule;
}
// signature: IO::ConsolePadDeviceModule::Startup(int)
// Range: 0x8030F198 -> 0x8030F19C
void IO::ConsolePadDeviceModule::Startup() {
}
// signature: IO::ConsolePadDeviceModule::Shutdown(int)
// Range: 0x8030F19C -> 0x8030F234
void IO::ConsolePadDeviceModule::Shutdown() {
    // References
    // -> static class PoolArray pads;
}
// signature: IO::ConsolePadDeviceModule::StepBegin(int)
// Range: 0x8030F234 -> 0x8030F238
void IO::ConsolePadDeviceModule::StepBegin() {
}
// signature: IO::ConsolePadDeviceModule::StepEnd(int)
// Range: 0x8030F238 -> 0x8030F23C
void IO::ConsolePadDeviceModule::StepEnd() {
}
// Range: 0x8030F240 -> 0x8030F538
void IO::ConsolePadDevice::Poll(class ConsolePadDevice * this /* r30 */, class PadInput & istate /* r31 */) {
    // References
    // -> class Vector2 vec2OneX;
    // -> static class Matrix43 _matIdentity;
    // -> class Vector3 vec3Zero;
    // -> class Vector4 vec4Zero;
    // -> class Vector2 vec2Zero;
}
// signature: IO::ConsolePadDevice::StartRumble(int, float)
// Range: 0x8030F538 -> 0x8030F544
void IO::ConsolePadDevice::StartRumble() {
}
// signature: IO::ConsolePadDevice::StopRumble(int)
// Range: 0x8030F544 -> 0x8030F550
void IO::ConsolePadDevice::StopRumble() {
}
// Range: 0x8030F550 -> 0x8030F5D0
void IO::ConsolePadDevice::StopAllRumble() {
    {
        // Range: 0x8030F558 -> 0x8030F588
        // Local variables
        int end; // r28
        int i; // r29
    }

    // References
    // -> static class PoolArray pads;
}
// Range: 0x8030F5D0 -> 0x8030F7B8
void IO::ConsolePadDevice::CreatePads() {
    // Local variables
    class PadInput dummyState; // r1+0x8

    {
        // Range: 0x8030F644 -> 0x8030F644
        // Local variables
        int i; // r24
    }
    {
        // Range: 0x8030F760 -> 0x8030F760
        // Local variables
        int i; // r24
    }

    // References
    // -> class PadDevice * headDevice;
    // -> static class PoolArray pads;
    // -> struct {} __vt__Q22IO16ConsolePadDevice;
}
