/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\IO\Pad\ConsolePadDeviceNativeWii.cpp
*/
void (* WiimoteSpeakerCB)(bool); // size: 0x4, address: 0x8084AE80
static class ConsoleButtonBinding baseButtonMap[13]; // size: 0xD0, address: 0x80787D98
static class ConsoleButtonBinding classicButtonMap[15]; // size: 0xF0, address: 0x80787E68
static int wiimoteControllerDataMode[4][4]; // size: 0x40, address: 0x80787F58
static class WiiExtensionStatus wiiExtensionStatus[4]; // size: 0x30, address: 0x8084AE88
static enum WiimoteDataMode wiimoteDataMode; // size: 0x4, address: 0x807BFE9C
static bool wiiClassicControllerStatus[4]; // size: 0x4, address: 0x8084AEB8
static enum WiiMotionPlusStatus wiiMotionPlusStatus[4]; // size: 0x10, address: 0x8084AEC0
static int wiiMotionPlusDesiredMode[4]; // size: 0x10, address: 0x8084AED0
static int dpdRefCount[4]; // size: 0x10, address: 0x8084AEE0
class Time wiiRemoteConnectTime; // size: 0x8, address: 0x8084AEF0
class Time wiiRemoteDisconnectTime[4]; // size: 0x20, address: 0x8084AEF8
static float ACC_MAX[2]; // size: 0x8, address: 0x80787FB0
static float DIR_SPEED_MIN[2]; // size: 0x8, address: 0x80787FB8
// Range: 0x80315904 -> 0x80315920
void * IO::PadNative::WiiExtensionStatus::WiiExtensionStatus() {
}
// Range: 0x8030F7BC -> 0x8030F81C
void IO::PadNative::DPDOn() {
    // References
    // -> static enum WiimoteDataMode wiimoteDataMode;
    // -> static int dpdRefCount[4];
}
// Range: 0x8030F81C -> 0x8030F880
void IO::PadNative::DPDOff() {
    // References
    // -> static enum WiimoteDataMode wiimoteDataMode;
    // -> static int dpdRefCount[4];
}
// Range: 0x8030F880 -> 0x8030F8D4
void IO::PadNative::DPDForceOff() {
    // References
    // -> static enum WiimoteDataMode wiimoteDataMode;
    // -> static int dpdRefCount[4];
}
// signature: IO::PadNative::PadMemAlloc(unsigned long)
// Range: 0x8030F8D4 -> 0x8030F8E8
void * IO::PadNative::PadMemAlloc() {
}
// signature: IO::PadNative::PadMemFree(void *)
// Range: 0x8030F8E8 -> 0x8030F91C
unsigned char IO::PadNative::PadMemFree() {
}
// Range: 0x8030F91C -> 0x8030FA1C
void IO::PadNative::Create() {
    // Local variables
    unsigned long work_size; // r0

    {
        // Range: 0x8030F948 -> 0x8030F994
        // Local variables
        int i; // r27
    }

    // References
    // -> static enum WiiMotionPlusStatus wiiMotionPlusStatus[4];
}
// signature: IO::PadNative::GetPadSubLayout(unsigned int)
// Range: 0x8030FA1C -> 0x8030FA70
static enum PadSubLayout IO::PadNative::GetPadSubLayout() {
}
// Range: 0x8030FA70 -> 0x8030FF0C
bool IO::PadNative::Poll(class PadInput & istate /* r25 */, int chan /* r26 */) {
    // Local variables
    long kpad_reads; // r29
    class KPADStatus kpads[16]; // r1+0x4C8
    unsigned long ctrlType; // r1+0xC
    bool padError; // r28
    int probeResult; // r0
    int kmplsStatus; // r3

    {
        // Range: 0x8030FBD8 -> 0x8030FDA0
        // Local variables
        int i; // r27

        {
            // Range: 0x8030FBFC -> 0x8030FC4C
            // Local variables
            class StickSourceVectorTemplate srcVec; // r1+0x38
        }
        {
            // Range: 0x8030FC50 -> 0x8030FCC8
            // Local variables
            class StickSourceVectorTemplate srcVec[2]; // r1+0x40
        }
        {
            // Range: 0x8030FCCC -> 0x8030FD40
            // Local variables
            float triggerPressure[2]; // r1+0x30
        }
        {
            // Range: 0x8030FD40 -> 0x8030FD78
            // Local variables
            int tempPressure; // r1+0x8
        }
    }
    {
        // Range: 0x8030FDA8 -> 0x8030FDF8
        // Local variables
        int i; // r24
    }
    {
        // Range: 0x8030FE88 -> 0x8030FEA8
        // Local variables
        class KMPLSStatus kmpls; // r1+0x8C
    }
    {
        // Range: 0x8030FEAC -> 0x8030FEF0
        // Local variables
        class KMPLSStatus kmpls; // r1+0x50
        class KPADUnifiedWpadStatus wpads[16]; // r1+0xC8
    }

    // References
    // -> static int wiiMotionPlusDesiredMode[4];
    // -> static enum WiiMotionPlusStatus wiiMotionPlusStatus[4];
    // -> static enum WiimoteDataMode wiimoteDataMode;
    // -> static class ConsoleButtonBinding baseButtonMap[13];
    // -> static class ConsoleButtonBinding classicButtonMap[15];
    // -> static bool wiiClassicControllerStatus[4];
    // -> class Time wiiRemoteConnectTime;
    // -> static class WiiExtensionStatus wiiExtensionStatus[4];
    // -> class Time wiiRemoteDisconnectTime[4];
}
// signature: IO::PadNative::ResetPadTiltAndIRData(IO::PadInput *)
// Range: 0x803105A0 -> 0x80310870
void IO::PadNative::ResetPadTiltAndIRData() {
    // References
    // -> static class Matrix43 _matIdentity;
    // -> class Vector3 vec3Zero;
    // -> class Vector2 vec2Zero;
    // -> class Vector4 vec4Zero;
}
// signature: IO::PadNative::CalculateSwingVector(IO::PadInput *, const KPADStatus &, const IO::PadTiltIndex)
// Range: 0x80310870 -> 0x80310D10
void IO::PadNative::CalculateSwingVector() {
    // Local variables
    class PadTilt & tilt; // r0
    class SwingRecognition & swing; // r9
    class Vector3 newAcc; // r1+0x14
    float f1; // f2
    float len2; // f0
    float len3; // f0

    // References
    // -> static float DIR_SPEED_MIN[2];
    // -> static float ACC_MAX[2];
}
// Range: 0x80310D10 -> 0x80310F5C
void IO::PadNative::SetPadTiltData(class PadInput * istate /* r30 */, class KPADStatus & kpad /* r31 */) {
}
// signature: IO::PadNative::SetGameCanUseWiiClassicController(bool, int)
// Range: 0x80310F5C -> 0x80310F6C
void IO::PadNative::SetGameCanUseWiiClassicController() {
    // References
    // -> static bool wiiClassicControllerStatus[4];
}
// signature: IO::PadNative::SetGameCanUseWiiMotionPlus(bool, int, bool)
// Range: 0x80310F6C -> 0x80310FD8
void IO::PadNative::SetGameCanUseWiiMotionPlus() {
    {
        // Range: 0x80310F6C -> 0x80310FB0
        // Local variables
        int mode; // r0
    }

    // References
    // -> static int wiiMotionPlusDesiredMode[4];
    // -> static enum WiiMotionPlusStatus wiiMotionPlusStatus[4];
}
// signature: IO::PadNative::SetWiiMotionPlusData(int, IO::PadInput *, const KMPLSStatus &)
// Range: 0x80310FD8 -> 0x8031114C
void IO::PadNative::SetWiiMotionPlusData(class PadInput * istate /* r31 */) {
    // References
    // -> static class Matrix43 _matIdentity;
    // -> static enum WiiMotionPlusStatus wiiMotionPlusStatus[4];
}
// signature: IO::PadNative::ForceWiiMotionPlusCalibration(int)
// Range: 0x8031114C -> 0x8031116C
void IO::PadNative::ForceWiiMotionPlusCalibration() {
    // References
    // -> static enum WiiMotionPlusStatus wiiMotionPlusStatus[4];
}
// Range: 0x8031116C -> 0x80311254
void IO::PadNative::SetPadIRPointerData(class PadInput * istate /* r30 */, class KPADStatus & kpad /* r31 */) {
}
// signature: IO::PadNative::SetAutoSleepTime(unsigned char)
// Range: 0x80311254 -> 0x80311258
void IO::PadNative::SetAutoSleepTime() {
}
// signature: IO::PadNative::WiimoteExtensionConnectCallback(long, long)
// Range: 0x80311258 -> 0x8031135C
void IO::PadNative::WiimoteExtensionConnectCallback() {
    // References
    // -> static int wiimoteControllerDataMode[4][4];
    // -> static enum WiimoteDataMode wiimoteDataMode;
    // -> static class WiiExtensionStatus wiiExtensionStatus[4];
}
// signature: IO::PadNative::WiimoteConnectCallback(long, long)
// Range: 0x8031135C -> 0x80311520
void IO::PadNative::WiimoteConnectCallback(long chan /* r30 */) {
    {
        // Range: 0x80311398 -> 0x803114B8
        // Local variables
        unsigned long extType; // r1+0x8
    }

    // References
    // -> class Time wiiRemoteDisconnectTime[4];
    // -> class Time wiiRemoteConnectTime;
    // -> void (* WiimoteSpeakerCB)(bool);
    // -> static int wiimoteControllerDataMode[4][4];
    // -> static enum WiimoteDataMode wiimoteDataMode;
    // -> static class WiiExtensionStatus wiiExtensionStatus[4];
}
// signature: IO::PadNative::WiiMotionPlusConnectCallback(long, long)
// Range: 0x80311520 -> 0x80311650
void IO::PadNative::WiiMotionPlusConnectCallback(long chan /* r31 */) {
    {
        // Range: 0x80311528 -> 0x80311558
        // Local variables
        unsigned long extType; // r1+0x8
    }
    {
        // Range: 0x8031157C -> 0x8031163C
        // Local variables
        unsigned char mplsStatus; // r0
    }

    // References
    // -> static int wiimoteControllerDataMode[4][4];
    // -> static class WiiExtensionStatus wiiExtensionStatus[4];
    // -> static enum WiimoteDataMode wiimoteDataMode;
    // -> static enum WiiMotionPlusStatus wiiMotionPlusStatus[4];
}
// signature: IO::PadNative::UpdateWiimoteDataFormat(int, int)
// Range: 0x80311650 -> 0x803116FC
void IO::PadNative::UpdateWiimoteDataFormat() {
    {
        // Range: 0x80311674 -> 0x803116F8
        // Local variables
        enum WiimoteControllerMode controllerMode; // r0
    }

    // References
    // -> static int wiimoteControllerDataMode[4][4];
    // -> static enum WiimoteDataMode wiimoteDataMode;
    // -> static class WiiExtensionStatus wiiExtensionStatus[4];
}
