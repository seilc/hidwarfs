/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\IO\ConsolePadDevice.cpp
*/
static class ConsolePadDeviceModule paddevmod; // size: 0x98, address: 0x808037F8
static class ModuleRegistrator consolePadDeviceModReg; // size: 0x8, address: 0x80803890
class Module * consolePadModule; // size: 0x4, address: 0x80709F70
static class PoolArray pads; // size: 0xC, address: 0x80803898
static class RelativePriority priority[3]; // size: 0x24, address: 0x80709F74
// signature: IO::ConsolePadDeviceModule::GetPriority(int &) const
// Range: 0x8027CE30 -> 0x8027CE78
class RelativePriority * IO::ConsolePadDeviceModule::GetPriority() const {
    // References
    // -> static class RelativePriority priority[3];
    // -> class Module * padModule;
}
// signature: IO::ConsolePadDeviceModule::Startup(int)
// Range: 0x8027CE78 -> 0x8027CE7C
void IO::ConsolePadDeviceModule::Startup() {
}
// signature: IO::ConsolePadDeviceModule::Shutdown(int)
// Range: 0x8027CE7C -> 0x8027CF14
void IO::ConsolePadDeviceModule::Shutdown() {
    // References
    // -> static class PoolArray pads;
}
// signature: IO::ConsolePadDeviceModule::StepBegin(int)
// Range: 0x8027CF14 -> 0x8027CF18
void IO::ConsolePadDeviceModule::StepBegin() {
}
// signature: IO::ConsolePadDeviceModule::StepEnd(int)
// Range: 0x8027CF18 -> 0x8027CF1C
void IO::ConsolePadDeviceModule::StepEnd() {
}
// Range: 0x8027CF5C -> 0x8027D114
void IO::ConsolePadDevice::Poll(class ConsolePadDevice * this /* r30 */, class PadInput * istate /* r31 */) {
    // References
    // -> class Vector3 vec3Zero;
    // -> class Vector4 vec4Zero;
    // -> class Vector2 vec2OneX;
    // -> class Vector2 vec2Zero;
}
// signature: IO::ConsolePadDevice::StartRumble(int, float)
// Range: 0x8027D114 -> 0x8027D120
void IO::ConsolePadDevice::StartRumble() {
}
// signature: IO::ConsolePadDevice::StopRumble(int)
// Range: 0x8027D120 -> 0x8027D12C
void IO::ConsolePadDevice::StopRumble() {
}
// Range: 0x8027D12C -> 0x8027D1AC
void IO::ConsolePadDevice::StopAllRumble() {
    {
        // Range: 0x8027D134 -> 0x8027D164
        // Local variables
        int end; // r28
        int i; // r29
    }

    // References
    // -> static class PoolArray pads;
}
// Range: 0x8027D1AC -> 0x8027D3A0
void IO::ConsolePadDevice::CreatePads() {
    // Local variables
    class PadInput dummyState; // r1+0x8

    {
        // Range: 0x8027D278 -> 0x8027D278
        // Local variables
        int i; // r24
    }
    {
        // Range: 0x8027D30C -> 0x8027D30C
        // Local variables
        int i; // r24
    }

    // References
    // -> class PadDevice * headDevice;
    // -> static class PoolArray pads;
    // -> struct {} __vt__Q22IO16ConsolePadDevice;
}
