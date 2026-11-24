/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\IO\Pad.cpp
*/
static class PadModule padmod; // size: 0x98, address: 0x80803C68
static class ModuleRegistrator padModReg; // size: 0x8, address: 0x80803D00
class Module * padModule; // size: 0x4, address: 0x8070A040
static class Pad * * g_ppAllPads; // size: 0x4, address: 0x80803D08
static int g_NumOfDevicesAllocated; // size: 0x4, address: 0x80803D0C
class PoolList attachedList; // size: 0x1C, address: 0x80803D10
class PadDevice * headDevice; // size: 0x4, address: 0x80803D2C
class PoolArray devices; // size: 0xC, address: 0x80803D30
// signature: IO::PadNS::DeviceSortCompare(const void *, const void *)
// Range: 0x80280678 -> 0x802806A0
int IO::PadNS::DeviceSortCompare() {
    // Local variables
    class DeviceSortValue * v1; // r0
    class DeviceSortValue * v2; // r0
}
// signature: IO::PadModule::Startup(int)
// Range: 0x802806A0 -> 0x80280B84
void IO::PadModule::Startup() {
    // References
    // -> static class Pad * * g_ppAllPads;
    // -> static int g_NumOfDevicesAllocated;
    // -> class PadDevice * headDevice;
    // -> class PoolList attachedList;
    // -> class Vector3 vec3Zero;
    // -> class Vector4 vec4Zero;
    // -> class Vector2 vec2OneX;
    // -> class Vector2 vec2Zero;
}
// signature: IO::PadModule::Shutdown(int)
// Range: 0x80280B84 -> 0x80280BA8
void IO::PadModule::Shutdown() {
    // References
    // -> class PoolArray devices;
}
// signature: IO::PadModule::StepBegin(int)
// Range: 0x80280BA8 -> 0x80280C0C
void IO::PadModule::StepBegin() {
    // References
    // -> class PoolList attachedList;
}
// signature: IO::PadModule::Update(int)
// Range: 0x80280C0C -> 0x80280CBC
void IO::PadModule::Update() {
    {
        // Range: 0x80280C1C -> 0x80280C34
        // Local variables
        int i; // r25
    }

    // References
    // -> static int g_NumOfDevicesAllocated;
    // -> class PoolList attachedList;
    // -> static class Pad * * g_ppAllPads;
}
// signature: IO::PadModule::FinalStepEnd(int)
// Range: 0x80280CBC -> 0x80280D74
void IO::PadModule::FinalStepEnd() {
    {
        // Range: 0x80280CDC -> 0x80280D28
        // Local variables
        int i; // r26
    }

    // References
    // -> static int g_NumOfDevicesAllocated;
    // -> class PoolList attachedList;
    // -> static class Pad * * g_ppAllPads;
}
// Range: 0x80280D74 -> 0x80280EA0
class PadDevice * IO::Pad::FindAvailableDevice(char * name /* r19 */, bool connected /* r20 */) {
    {
        // Range: 0x80280D7C -> 0x80280E7C
        // Local variables
        int endi; // r22
        int i; // r23

        {
            // Range: 0x80280D7C -> 0x80280E7C
            // Local variables
            class PadDevice * device; // r21

            {
                // Range: 0x80280D94 -> 0x80280D94
                // Local variables
                class PadInput istate; // r1+0x8
            }
        }
    }

    // References
    // -> class PoolArray devices;
}
// Range: 0x80280EA0 -> 0x8028110C
void IO::Pad::CommitDeviceRegistry() {
    // Local variables
    class PadDevice * n; // r3
    int deviceCount; // r30
    class StackPoolArray sortArray; // r1+0x8

    {
        // Range: 0x80280F0C -> 0x80280F48
        // Local variables
        int i; // r7
    }
    {
        // Range: 0x80280F94 -> 0x80280F94
        // Local variables
        int i; // r3
    }

    // References
    // -> static int g_NumOfDevicesAllocated;
    // -> class PoolArray devices;
    // -> class PadDevice * headDevice;
}
// Range: 0x8028110C -> 0x80281154
void IO::PadInput::Create() {
}
// Range: 0x80281154 -> 0x80281160
void IO::PadInput::Destroy() {
}
// signature: IO::Pad::TryConnectingToPort(unsigned int)
// Range: 0x80281160 -> 0x80281430
class Pad * IO::Pad::TryConnectingToPort() {
    {
        // Range: 0x80281174 -> 0x80281414
        // Local variables
        class PadInput istate; // r1+0x8
        class PadDevice * device; // r30
    }

    // References
    // -> class Vector3 vec3Zero;
    // -> class Vector4 vec4Zero;
    // -> class Vector2 vec2OneX;
    // -> class Vector2 vec2Zero;
    // -> class PoolList attachedList;
    // -> class PoolArray devices;
}
// signature: IO::GetPadFromPort(unsigned int)
// Range: 0x80281430 -> 0x8028145C
class Pad * IO::GetPadFromPort() {
    // References
    // -> static class Pad * * g_ppAllPads;
    // -> static int g_NumOfDevicesAllocated;
}
// signature: IO::GetAttachedPadFromPort(unsigned int)
// Range: 0x8028145C -> 0x80281498
class Pad * IO::GetAttachedPadFromPort() {
    // References
    // -> static class Pad * * g_ppAllPads;
    // -> static int g_NumOfDevicesAllocated;
}
