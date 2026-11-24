/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\IO\ConsolePadDeviceNativeWii.cpp
*/
static class ConsoleButtonBinding baseButtonMap[13]; // size: 0xD0, address: 0x806D6090
static int wiimoteControllerDataMode[3][4]; // size: 0x30, address: 0x806D6160
static class WiiExtensionStatus wiiExtensionStatus[4]; // size: 0x30, address: 0x808038A8
static enum WiimoteDataMode wiimoteDataMode; // size: 0x4, address: 0x80709FA0
class Time wiiRemoteConnectTime; // size: 0x8, address: 0x808038D8
static float ACC_MAX[2]; // size: 0x8, address: 0x806D61A8
static float DIR_SPEED_MIN[2]; // size: 0x8, address: 0x806D61B0
class Vector3 lastAcc[2]; // size: 0x18, address: 0x808038E0
class Vector3 deltaAcc[2]; // size: 0x18, address: 0x808038F8
class Vector3 dirVec[2]; // size: 0x18, address: 0x80803910
float dirSpeedMax[2]; // size: 0x8, address: 0x80803928
// Range: 0x80282190 -> 0x802821AC
void * IO::PadNative::WiiExtensionStatus::WiiExtensionStatus() {
}
// signature: IO::PadNative::PadMemAlloc(unsigned long)
// Range: 0x8027D3E0 -> 0x8027D3F4
void * IO::PadNative::PadMemAlloc() {
}
// signature: IO::PadNative::PadMemFree(void *)
// Range: 0x8027D3F4 -> 0x8027D428
unsigned char IO::PadNative::PadMemFree() {
}
// Range: 0x8027D428 -> 0x8027DE4C
bool IO::PadNative::Poll(class PadInput * istate /* r26 */, int chan /* r27 */) {
    // Local variables
    long kpad_reads; // r0
    class KPADStatus kpads[16]; // r1+0x80
    unsigned long ctrlType; // r1+0xC
    bool padError; // r28
    int probeResult; // r0

    {
        // Range: 0x8027D7F0 -> 0x8027DBF4
        // Local variables
        int i; // r29

        {
            // Range: 0x8027D80C -> 0x8027DBF4
            // Local variables
            int tempPressure; // r1+0x8

            {
                // Range: 0x8027D80C -> 0x8027D96C
                // Local variables
                class StickSourceVectorTemplate srcVec; // r1+0x30
            }
        }
    }
    {
        // Range: 0x8027DBFC -> 0x8027DDC4
        // Local variables
        int i; // r29
    }

    // References
    // -> static class ConsoleButtonBinding baseButtonMap[13];
    // -> static int wiimoteControllerDataMode[3][4];
    // -> static enum WiimoteDataMode wiimoteDataMode;
    // -> double millisecondsPerTick;
    // -> class Time wiiRemoteConnectTime;
    // -> static class WiiExtensionStatus wiiExtensionStatus[4];
    // -> class Vector3 vec3Zero;
    // -> class Vector4 vec4Zero;
    // -> class Vector2 vec2OneX;
    // -> class Vector2 vec2Zero;
}
// signature: IO::PadNative::CalculateSwingVector(IO::PadInput *, const KPADStatus &, const IO::PadTiltIndex)
// Range: 0x8027DE4C -> 0x8027E220
void IO::PadNative::CalculateSwingVector(class PadInput * istate /* r26 */, enum PadTiltIndex index /* r27 */) {
    // Local variables
    class Vector3 newAcc; // r1+0x8
    float f1; // f3
    float len; // f0

    // References
    // -> static float DIR_SPEED_MIN[2];
    // -> float dirSpeedMax[2];
    // -> class Vector3 dirVec[2];
    // -> class Vector3 lastAcc[2];
    // -> class Vector3 deltaAcc[2];
    // -> static float ACC_MAX[2];
}
// signature: IO::PadNative::WiimoteExtensionConnectCallback(long, long)
// Range: 0x8027E220 -> 0x8027E2F4
void IO::PadNative::WiimoteExtensionConnectCallback() {
    // References
    // -> static int wiimoteControllerDataMode[3][4];
    // -> static enum WiimoteDataMode wiimoteDataMode;
    // -> static class WiiExtensionStatus wiiExtensionStatus[4];
}
// signature: IO::PadNative::WiimoteConnectCallback(long, long)
// Range: 0x8027E2F4 -> 0x8027E458
void IO::PadNative::WiimoteConnectCallback(long chan /* r30 */) {
    {
        // Range: 0x8027E324 -> 0x8027E41C
        // Local variables
        unsigned long extType; // r1+0x8
    }

    // References
    // -> class Time wiiRemoteConnectTime;
    // -> static int wiimoteControllerDataMode[3][4];
    // -> static enum WiimoteDataMode wiimoteDataMode;
    // -> static class WiiExtensionStatus wiiExtensionStatus[4];
}
