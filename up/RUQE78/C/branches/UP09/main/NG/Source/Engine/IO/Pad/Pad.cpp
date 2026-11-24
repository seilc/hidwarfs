/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\IO\Pad\Pad.cpp
*/
static class PadModule padmod; // size: 0x98, address: 0x8084B250
static class ModuleRegistrator padModReg; // size: 0x8, address: 0x8084B2E8
class Module * padModule; // size: 0x4, address: 0x807BFF38
static class Pad * * g_ppAllPads; // size: 0x4, address: 0x8084B2F0
static int g_NumOfDevicesAllocated; // size: 0x4, address: 0x8084B2F4
static int gNumDeletionsThisFrame; // size: 0x4, address: 0x8084B2F8
class PoolList attachedList; // size: 0x1C, address: 0x8084B2FC
class PadDevice * headDevice; // size: 0x4, address: 0x8084B318
class PoolArray devices; // size: 0xC, address: 0x8084B31C
// signature: IO::PadModule::Startup(int)
// Range: 0x8031391C -> 0x80314228
void IO::PadModule::Startup() {
    // References
    // -> class PoolArray devices;
    // -> static class Pad * * g_ppAllPads;
    // -> static int g_NumOfDevicesAllocated;
    // -> class PadDevice * headDevice;
    // -> class PoolList attachedList;
    // -> static class Matrix43 _matIdentity;
    // -> class Vector2 vec2OneX;
    // -> class Vector3 vec3Zero;
    // -> class Vector4 vec4Zero;
    // -> class Vector2 vec2Zero;
}
// signature: IO::PadModule::Shutdown(int)
// Range: 0x80314228 -> 0x8031424C
void IO::PadModule::Shutdown() {
    // References
    // -> class PoolArray devices;
}
// signature: IO::PadModule::StepBegin(int)
// Range: 0x8031424C -> 0x803142B0
void IO::PadModule::StepBegin() {
    // References
    // -> class PoolList attachedList;
}
// signature: IO::PadModule::Update(int)
// Range: 0x803142B0 -> 0x8031486C
void IO::PadModule::Update() {
    {
        // Range: 0x803142E0 -> 0x80314350
        // Local variables
        int i; // r18
    }
    {
        // Range: 0x80314374 -> 0x80314830
        // Local variables
        int i; // r15
    }

    // References
    // -> class PoolArray devices;
    // -> static class Matrix43 _matIdentity;
    // -> class Vector2 vec2OneX;
    // -> class Vector3 vec3Zero;
    // -> class Vector4 vec4Zero;
    // -> class Vector2 vec2Zero;
    // -> static int g_NumOfDevicesAllocated;
    // -> static class Pad * * g_ppAllPads;
    // -> class PoolList attachedList;
    // -> static int gNumDeletionsThisFrame;
}
// signature: IO::PadModule::FinalStepEnd(int)
// Range: 0x8031486C -> 0x80314924
void IO::PadModule::FinalStepEnd() {
    {
        // Range: 0x8031488C -> 0x803148D8
        // Local variables
        int i; // r26
    }

    // References
    // -> static int g_NumOfDevicesAllocated;
    // -> class PoolList attachedList;
    // -> static class Pad * * g_ppAllPads;
}
// Range: 0x80314924 -> 0x80314B88
void IO::Pad::CommitDeviceRegistry() {
    // Local variables
    class PadDevice * n; // r3
    int deviceCount; // r30
    class StackPoolArray sortArray; // r1+0x8

    {
        // Range: 0x80314990 -> 0x803149CC
        // Local variables
        int i; // r7
    }
    {
        // Range: 0x80314A10 -> 0x80314A10
        // Local variables
        int i; // r3
    }

    // References
    // -> static int g_NumOfDevicesAllocated;
    // -> class PoolArray devices;
    // -> class PadDevice * headDevice;
}
// Range: 0x80314B88 -> 0x80314BA4
int IO::Pad::GetDevicePort() {
}
// signature: IO::GetPadFromPort(unsigned int)
// Range: 0x80314BA4 -> 0x80314BD0
class Pad * IO::GetPadFromPort() {
    // References
    // -> static class Pad * * g_ppAllPads;
    // -> static int g_NumOfDevicesAllocated;
}
// signature: IO::GetAttachedPadFromPort(unsigned int)
// Range: 0x80314BD0 -> 0x80314C0C
class Pad * IO::GetAttachedPadFromPort() {
    // References
    // -> static class Pad * * g_ppAllPads;
    // -> static int g_NumOfDevicesAllocated;
}
