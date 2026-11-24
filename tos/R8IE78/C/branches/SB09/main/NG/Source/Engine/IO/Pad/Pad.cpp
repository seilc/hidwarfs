/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\IO\Pad\Pad.cpp
*/
static class PadModule padmod; // size: 0x98, address: 0x80779A18
static class ModuleRegistrator padModReg; // size: 0x8, address: 0x80779AB0
class Module * padModule; // size: 0x4, address: 0x806CE000
static class Pad * * g_ppAllPads; // size: 0x4, address: 0x80779AB8
static int g_NumOfDevicesAllocated; // size: 0x4, address: 0x80779ABC
static int gNumDeletionsThisFrame; // size: 0x4, address: 0x80779AC0
class PoolList attachedList; // size: 0x1C, address: 0x80779AC4
class PadDevice * headDevice; // size: 0x4, address: 0x80779AE0
class PoolArray devices; // size: 0xC, address: 0x80779AE4
// Range: 0x801E2CD0 -> 0x801E2D1C
void * IO::PadModule::PadModule(class PadModule * this /* r31 */) {
    // References
    // -> struct {} __vt__Q22IO9PadModule;
}
// signature: IO::PadModule::Startup(int)
// Range: 0x801E2D20 -> 0x801E2D6C
void IO::PadModule::Startup() {
    // References
    // -> class PadDevice * headDevice;
}
// signature: IO::PadModule::Shutdown(int)
// Range: 0x801E2D70 -> 0x801E2D74
void IO::PadModule::Shutdown() {
}
// signature: IO::PadModule::StepBegin(int)
// Range: 0x801E2D80 -> 0x801E2D84
void IO::PadModule::StepBegin() {
}
// signature: IO::PadModule::Update(int)
// Range: 0x801E2D90 -> 0x801E2E68
void IO::PadModule::Update() {
    {
        // Range: 0x801E2DAC -> 0x801E2E0C
        // Local variables
        int i; // r28
    }
    {
        // Range: 0x801E2E14 -> 0x801E2E54
        // Local variables
        int i; // r28
    }

    // References
    // -> static int g_NumOfDevicesAllocated;
    // -> static class Pad * * g_ppAllPads;
    // -> static int gNumDeletionsThisFrame;
}
// signature: IO::PadModule::FinalStepEnd(int)
// Range: 0x801E2E70 -> 0x801E2F04
void IO::PadModule::FinalStepEnd() {
    {
        // Range: 0x801E2E90 -> 0x801E2ECC
        // Local variables
        int i; // r28
    }

    // References
    // -> static int g_NumOfDevicesAllocated;
    // -> static class Pad * * g_ppAllPads;
}
// signature: IO::PadDevice::Setup(const char *, int)
// Range: 0x801E2F10 -> 0x801E2F28
void IO::PadDevice::Setup() {
}
// signature: IO::Pad::FindConnectedDeviceByIndex(int)
// Range: 0x801E2F30 -> 0x801E2FB4
class PadDevice * IO::Pad::FindConnectedDeviceByIndex() {
    // Local variables
    class PadDevice * device; // r31
    class PadInput istate; // r1+0x8

    // References
    // -> class PoolArray devices;
}
// Range: 0x801E2FC0 -> 0x801E303C
class Pad * IO::Pad::Attach(class PadDevice * device /* r30 */) {
    // References
    // -> class PoolList attachedList;
}
// Range: 0x801E3040 -> 0x801E3090
void IO::Pad::Detach(class Pad * pad /* r31 */) {
    // References
    // -> class PoolList attachedList;
}
// signature: IO::Pad::Create(IO::PadDevice *)
// Range: 0x801E3090 -> 0x801E30B4
void IO::Pad::Create(class Pad * this /* r5 */) {
}
// Range: 0x801E30C0 -> 0x801E30D4
void IO::Pad::Destroy() {
}
// Range: 0x801E30E0 -> 0x801E3198
void IO::Pad::Startup() {
    // References
    // -> class PoolList attachedList;
}
// Range: 0x801E31A0 -> 0x801E31FC
void IO::Pad::StepBegin() {
    // References
    // -> class PoolList attachedList;
}
// Range: 0x801E3200 -> 0x801E334C
void IO::Pad::CommitDeviceRegistry() {
    // Local variables
    class PadDevice * n; // r3
    int deviceCount; // r30
    class StackPoolArray sortArray; // r1+0x8

    {
        // Range: 0x801E3264 -> 0x801E32B8
        // Local variables
        int i; // r7
    }
    {
        // Range: 0x801E32F0 -> 0x801E3328
        // Local variables
        int i; // r0
    }

    // References
    // -> static int g_NumOfDevicesAllocated;
    // -> class PoolArray devices;
    // -> class PadDevice * headDevice;
}
// Range: 0x801E33B0 -> 0x801E33D4
void IO::Pad::DestroyDeviceRegistry() {
    // References
    // -> class PoolArray devices;
}
// Range: 0x801E33E0 -> 0x801E3414
void IO::Pad::ResetZeroPoint(class Pad * this /* r31 */) {
}
// signature: IO::Pad::TryConnectingToPort(unsigned int)
// Range: 0x801E3420 -> 0x801E34A8
class Pad * IO::Pad::TryConnectingToPort() {
    {
        // Range: 0x801E3428 -> 0x801E3490
        // Local variables
        class PadInput istate; // r1+0x8
        class PadDevice * device; // r31
    }

    // References
    // -> class PoolArray devices;
}
// Range: 0x801E34B0 -> 0x801E34CC
int IO::Pad::GetDevicePort() {
}
// Range: 0x801E34D0 -> 0x801E3564
void IO::AttachAllPads() {
    // Local variables
    class PadDevice * playerDevice; // r0

    {
        // Range: 0x801E3504 -> 0x801E3550
        // Local variables
        int i; // r27
    }

    // References
    // -> static class Pad * * g_ppAllPads;
    // -> static int g_NumOfDevicesAllocated;
}
// signature: IO::GetPadFromPort(unsigned int)
// Range: 0x801E3570 -> 0x801E359C
class Pad * IO::GetPadFromPort() {
    // References
    // -> static class Pad * * g_ppAllPads;
    // -> static int g_NumOfDevicesAllocated;
}
// signature: IO::GetAttachedPadFromPort(unsigned int)
// Range: 0x801E35A0 -> 0x801E35DC
class Pad * IO::GetAttachedPadFromPort() {
    // References
    // -> static class Pad * * g_ppAllPads;
    // -> static int g_NumOfDevicesAllocated;
}
