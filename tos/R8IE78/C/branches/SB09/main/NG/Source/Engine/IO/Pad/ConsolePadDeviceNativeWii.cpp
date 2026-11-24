/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\IO\Pad\ConsolePadDeviceNativeWii.cpp
*/
void (* WiimoteSpeakerCB)(int, bool); // size: 0x4, address: 0x807796D4
static class ConsoleButtonBinding baseButtonMap[13]; // size: 0xD0, address: 0x80693310
static class ConsoleButtonBinding classicButtonMap[15]; // size: 0xF0, address: 0x806933E0
static class ConsoleButtonBinding classicJustForHomeButtonMap[2]; // size: 0x20, address: 0x806934D0
static class ConsoleButtonBinding baseForJustHomeButtonMap[2]; // size: 0x20, address: 0x806934F0
static class ConsoleButtonBinding gamecubeButtonMap[13]; // size: 0xD0, address: 0x80693510
static class ConsoleButtonBinding gamecubeButtonMapForJustB[1]; // size: 0x10, address: 0x806935E0
static int wiimoteControllerDataMode[5][4]; // size: 0x50, address: 0x806935F0
static class WiiExtensionStatus wiiExtensionStatus[4]; // size: 0x30, address: 0x807796D8
static enum WiimoteDataMode wiimoteDataMode[4]; // size: 0x10, address: 0x806CDF60
static bool wiiClassicControllerStatus[4]; // size: 0x4, address: 0x80779708
static bool gamecubeControllerStatus[4]; // size: 0x4, address: 0x8077970C
static enum WiiMotionPlusStatus wiiMotionPlusStatus[4]; // size: 0x10, address: 0x80779710
static int wiiMotionPlusDesiredMode[4]; // size: 0x10, address: 0x80779720
static int dpdRefCount[4]; // size: 0x10, address: 0x80779730
class Time wiiRemoteConnectTime; // size: 0x8, address: 0x80779740
class Time wiiRemoteDisconnectTime[4]; // size: 0x20, address: 0x80779748
int powerCallbackWaitTime; // size: 0x4, address: 0x80693644
int extensionConnectWaitTime; // size: 0x4, address: 0x80693648
static float ACC_MAX[2]; // size: 0x8, address: 0x80693668
static float DIR_SPEED_MIN[2]; // size: 0x8, address: 0x80693670
// Range: 0x801E41F0 -> 0x801E4220
void * IO::PadNative::WiiExtensionStatus::WiiExtensionStatus(class WiiExtensionStatus * this /* r31 */) {
}
// Range: 0x801E0420 -> 0x801E043C
void IO::PadNative::WiiExtensionStatus::Reset() {
}
// Range: 0x801DD990 -> 0x801DD9CC
void IO::PadNative::DPDOn() {
}
// signature: IO::PadNative::DPDOn(int)
// Range: 0x801DD9D0 -> 0x801DDA28
void IO::PadNative::DPDOn() {
    // References
    // -> static enum WiimoteDataMode wiimoteDataMode[4];
    // -> static int dpdRefCount[4];
}
// Range: 0x801DDA30 -> 0x801DDA6C
void IO::PadNative::DPDOff() {
}
// signature: IO::PadNative::DPDOff(int)
// Range: 0x801DDA70 -> 0x801DDACC
void IO::PadNative::DPDOff() {
    // References
    // -> static enum WiimoteDataMode wiimoteDataMode[4];
    // -> static int dpdRefCount[4];
}
// Range: 0x801DDAD0 -> 0x801DDB44
void IO::PadNative::DPDForceOff() {
    // References
    // -> static enum WiimoteDataMode wiimoteDataMode[4];
    // -> static int dpdRefCount[4];
}
// signature: IO::PadNative::PadMemAlloc(unsigned long)
// Range: 0x801DDB50 -> 0x801DDB64
void * IO::PadNative::PadMemAlloc() {
}
// signature: IO::PadNative::PadMemFree(void *)
// Range: 0x801DDB70 -> 0x801DDBA4
unsigned char IO::PadNative::PadMemFree() {
}
// Range: 0x801DDBB0 -> 0x801DDCE8
void IO::PadNative::Create() {
    // Local variables
    unsigned long workSize; // r0

    {
        // Range: 0x801DDBDC -> 0x801DDC34
        // Local variables
        int i; // r27
    }
    {
        // Range: 0x801DDC7C -> 0x801DDCD0
        // Local variables
        int i; // r27
    }

    // References
    // -> static enum WiiMotionPlusStatus wiiMotionPlusStatus[4];
}
// Range: 0x801DDCF0 -> 0x801DEEF4
bool IO::PadNative::Poll(class PadInput & istate /* r30 */, int chan /* r31 */) {
    // Local variables
    unsigned long clearedWiimote; // r22
    unsigned long hitAButton; // r21
    unsigned long gameCubeAble; // r23
    long kpad_reads; // r0
    class KPADStatus kpads[16]; // r1+0x178
    unsigned long ctrlType; // r1+0x24
    bool padError; // r20
    int probeResult; // r0
    bool hitBonPrev; // r19

    {
        // Range: 0x801DDFDC -> 0x801DE80C
        // Local variables
        int i; // r18

        {
            // Range: 0x801DE00C -> 0x801DE058
            // Local variables
            class StickSourceVectorTemplate srcVec; // r1+0xA0
        }
        {
            // Range: 0x801DE05C -> 0x801DE0D0
            // Local variables
            class StickSourceVectorTemplate srcVec[2]; // r1+0xF8
        }
        {
            // Range: 0x801DE0F4 -> 0x801DE148
            // Local variables
            int i; // r0
        }
        {
            // Range: 0x801DE148 -> 0x801DE1E4
            // Local variables
            class StickSourceVectorTemplate srcVec; // r1+0x98
            double back; // f10
            double front; // f9
            double right; // f5
            double left; // f0
            double w4; // f4
            double w3; // f2
            double w2; // f3
            double w1; // f0
        }
        {
            // Range: 0x801DE1E4 -> 0x801DE238
            // Local variables
            int kmplsStatus; // r3

            {
                // Range: 0x801DE1FC -> 0x801DE218
                // Local variables
                class KPADMPStatus kmpls; // r1+0x138
            }
        }
        {
            // Range: 0x801DE23C -> 0x801DE3D8
            // Local variables
            float tempFloatPressure; // r1+0x1C
            int tempPressure; // r1+0x20
        }
        {
            // Range: 0x801DE3DC -> 0x801DE500
            // Local variables
            int tempPressure; // r1+0x18
            float triggerPressure[2]; // r1+0x90
        }
        {
            // Range: 0x801DE504 -> 0x801DE648
            // Local variables
            float tempFloatPressure; // r1+0x10
            int tempPressure; // r1+0x14
            float triggerPressure[2]; // r1+0x88
        }
        {
            // Range: 0x801DE648 -> 0x801DE7D0
            // Local variables
            float tempFloatPressure; // r1+0x8
            int tempPressure; // r1+0xC
        }
    }
    {
        // Range: 0x801DE80C -> 0x801DE88C
        // Local variables
        int i; // r18
    }
    {
        // Range: 0x801DE9DC -> 0x801DEED8
        // Local variables
        class PADStatus Pads[4]; // r1+0x108
        unsigned long connectedBits; // r18
        unsigned long resetBits; // r3
        unsigned long padBit; // r17

        {
            // Range: 0x801DE9E4 -> 0x801DEA38
            // Local variables
            int i; // r0
        }
        {
            // Range: 0x801DEB04 -> 0x801DECD0
            // Local variables
            unsigned long hitStartButton; // r18
            float triggerPressure[2]; // r1+0x80
            int preFlags; // r17
            class StickSourceVectorTemplate srcVec[2]; // r1+0xE8
        }
        {
            // Range: 0x801DECD4 -> 0x801DED74
            // Local variables
            float triggerPressure[2]; // r1+0x78
        }
        {
            // Range: 0x801DED74 -> 0x801DEECC
            // Local variables
            float triggerPressure[2]; // r1+0x70
            class StickSourceVectorTemplate srcVec[2]; // r1+0xD8
        }
    }

    // References
    // -> static class ConsoleButtonBinding gamecubeButtonMapForJustB[1];
    // -> static class ConsoleButtonBinding gamecubeButtonMap[13];
    // -> static int wiiMotionPlusDesiredMode[4];
    // -> static enum WiimoteDataMode wiimoteDataMode[4];
    // -> static class ConsoleButtonBinding classicJustForHomeButtonMap[2];
    // -> static class ConsoleButtonBinding baseForJustHomeButtonMap[2];
    // -> static class ConsoleButtonBinding baseButtonMap[13];
    // -> static class ConsoleButtonBinding classicButtonMap[15];
    // -> static enum WiiMotionPlusStatus wiiMotionPlusStatus[4];
    // -> class Vector2 vec2OneX;
    // -> class Vector2 vec2Zero;
    // -> static bool wiiClassicControllerStatus[4];
    // -> class Time wiiRemoteConnectTime;
    // -> static class WiiExtensionStatus wiiExtensionStatus[4];
    // -> double millisecondsPerTick;
    // -> class Time wiiRemoteDisconnectTime[4];
    // -> class Module * trcModule;
    // -> static bool gamecubeControllerStatus[4];
}
// signature: IO::PadNative::CalculateSwingVector(IO::PadInput *, const KPADStatus &, const IO::PadTiltIndex)
// Range: 0x801DF930 -> 0x801DFCA8
void IO::PadNative::CalculateSwingVector(enum PadTiltIndex index /* r27 */) {
    // Local variables
    class PadTilt & tilt; // r0
    class SwingRecognition & swing; // r29
    class Vector3 newAcc; // r1+0x14
    float f1; // f2
    float len2; // f0
    float len3; // f0

    // References
    // -> static float DIR_SPEED_MIN[2];
    // -> static float ACC_MAX[2];
}
// signature: IO::PadNative::CalculateTiltAngles(IO::PadInput *, const KPADStatus &, const IO::PadTiltIndex)
// Range: 0x801DFCB0 -> 0x801DFDD8
void IO::PadNative::CalculateTiltAngles(class PadInput * istate /* r29 */, enum PadTiltIndex index /* r30 */) {
    // Local variables
    class Vector acc; // r1+0x8
}
// Range: 0x801DFDE0 -> 0x801DFF44
void IO::PadNative::SetPadTiltData(class PadInput * istate /* r30 */, class KPADStatus & kpad /* r31 */) {
}
// signature: IO::PadNative::SetGameCanUseWiiClassicController(bool, int)
// Range: 0x801DFF50 -> 0x801DFF60
void IO::PadNative::SetGameCanUseWiiClassicController() {
    // References
    // -> static bool wiiClassicControllerStatus[4];
}
// signature: IO::PadNative::SetGameCanUseGamecubeController(bool, int)
// Range: 0x801DFF60 -> 0x801DFF70
void IO::PadNative::SetGameCanUseGamecubeController() {
    // References
    // -> static bool gamecubeControllerStatus[4];
}
// signature: IO::PadNative::SetGameCanUseWiiMotionPlus(bool, int, bool)
// Range: 0x801DFF70 -> 0x801E002C
void IO::PadNative::SetGameCanUseWiiMotionPlus(int chan /* r31 */) {
    {
        // Range: 0x801DFF98 -> 0x801DFFE0
        // Local variables
        int mode; // r0
    }

    // References
    // -> bool SB09Hack_disableMotionPlus;
    // -> static int wiiMotionPlusDesiredMode[4];
    // -> static enum WiiMotionPlusStatus wiiMotionPlusStatus[4];
}
// signature: IO::PadNative::SetWiiMotionPlusData(int, IO::PadInput *, const KPADMPStatus &)
// Range: 0x801E0030 -> 0x801E0138
void IO::PadNative::SetWiiMotionPlusData(int chan /* r30 */, class PadInput * istate /* r31 */) {
    // References
    // -> static class Matrix43 _matIdentity;
    // -> static enum WiiMotionPlusStatus wiiMotionPlusStatus[4];
}
// signature: IO::PadNative::ForceWiiMotionPlusCalibration(int)
// Range: 0x801E0140 -> 0x801E0160
void IO::PadNative::ForceWiiMotionPlusCalibration() {
    // References
    // -> static enum WiiMotionPlusStatus wiiMotionPlusStatus[4];
}
// Range: 0x801E0160 -> 0x801E02C4
void IO::PadNative::SetPadIRPointerData(class PadInput * istate /* r27 */, class KPADStatus & kpad /* r31 */) {
    // Local variables
    float xRadius; // f2
    float yRadius; // f3
    class Vec2 pos; // r1+0x18
}
// signature: IO::PadNative::SetAutoSleepTime(unsigned char)
// Range: 0x801E02D0 -> 0x801E02D4
void IO::PadNative::SetAutoSleepTime() {
}
// signature: IO::PadNative::WiimoteExtensionConnectCallback(long, long)
// Range: 0x801E02E0 -> 0x801E0310
void IO::PadNative::WiimoteExtensionConnectCallback() {
}
// signature: IO::PadNative::WiimoteConnectCallback(long, long)
// Range: 0x801E0310 -> 0x801E041C
void IO::PadNative::WiimoteConnectCallback(long chan /* r30 */) {
    {
        // Range: 0x801E0340 -> 0x801E03D0
        // Local variables
        unsigned long extType; // r1+0x8
    }

    // References
    // -> class Time wiiRemoteDisconnectTime[4];
    // -> void (* WiimoteSpeakerCB)(int, bool);
    // -> class Time wiiRemoteConnectTime;
    // -> bool isHomeMenuActive;
    // -> static class WiiExtensionStatus wiiExtensionStatus[4];
}
// signature: IO::PadNative::WiiMotionPlusConnectCallback(long, long)
// Range: 0x801E0440 -> 0x801E0524
void IO::PadNative::WiiMotionPlusConnectCallback(long chan /* r31 */) {
    {
        // Range: 0x801E0448 -> 0x801E0478
        // Local variables
        unsigned long extType; // r1+0x8
    }
    {
        // Range: 0x801E04B8 -> 0x801E0510
        // Local variables
        unsigned char mplsStatus; // r0
    }

    // References
    // -> static enum WiiMotionPlusStatus wiiMotionPlusStatus[4];
}
// signature: IO::PadNative::UpdateWiimoteDataFormat(int, int)
// Range: 0x801E0530 -> 0x801E05F0
void IO::PadNative::UpdateWiimoteDataFormat() {
    {
        // Range: 0x801E0554 -> 0x801E05EC
        // Local variables
        enum WiimoteControllerMode controllerMode; // r0
    }

    // References
    // -> static int wiimoteControllerDataMode[5][4];
    // -> static enum WiimoteDataMode wiimoteDataMode[4];
    // -> static class WiiExtensionStatus wiiExtensionStatus[4];
}
// Range: 0x801E05F0 -> 0x801E0620
bool IO::PadNative::IsMotionControlNeeded() {
    // References
    // -> static bool wiiClassicControllerStatus[4];
    // -> static bool gamecubeControllerStatus[4];
}
// signature: IO::PadNative::SetWiimoteSpeakerCB(void (*)(int, bool))
// Range: 0x801E0620 -> 0x801E0648
void IO::PadNative::SetWiimoteSpeakerCB() {
    // References
    // -> void (* WiimoteSpeakerCB)(int, bool);
}
// signature: IO::PadNative::DisconnectPad(int)
// Range: 0x801E0650 -> 0x801E0654
void IO::PadNative::DisconnectPad() {
}
// signature: IO::PadNative::atanWindow(float, float, float)
// Range: 0x801E0660 -> 0x801E06F4
static float IO::PadNative::atanWindow(float value /* f30 */, float radius /* f31 */) {
}
// Range: 0x801E0700 -> 0x801E07A4
static float IO::PadNative::tanWindow(float value /* f29 */, float multiplier /* f30 */, float radius /* f31 */) {
    // Local variables
    float middle; // f0
}
// signature: IO::PadNative::KPADGetExtendedDPD(IO::PadInput *, Vec2, Vec2, float, Vec, float, float, bool)
// Range: 0x801E07B0 -> 0x801E0B98
class Vec2 IO::PadNative::KPADGetExtendedDPD(class PadInput * istate /* r26 */, class Vec2 & pos /* r27 */, class Vec2 & horizon /* r28 */, class Vec & angle /* r29 */, float xRadius /* f29 */, float yRadius /* f30 */) {
    // Local variables
    class Vec2 lastPosInAngleSpace; // r1+0x38
    class Vec2 lastHorizon; // r1+0x30
    class Vec lastAngle; // r1+0x4C
    float lastDist; // f7
    float ratio; // f31
    class Vec2 posInAngleSpace; // r1+0x28

    {
        // Range: 0x801E0930 -> 0x801E0AF0
        // Local variables
        float yNewPosInAngleSpace; // f28
        float yDiffOffset; // f1
        float xNewPosInAngleSpace; // f27
        float xDiffOffset; // f1
        class Vec rotatedAngle; // r1+0x40
        class Vec2 rotatedLastAngle; // r1+0x18
        float zDiffAngle; // f27
        class Vec2 result; // r1+0x20
    }
}
