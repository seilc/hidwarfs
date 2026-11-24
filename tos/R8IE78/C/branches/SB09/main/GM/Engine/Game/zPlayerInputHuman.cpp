/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zPlayerInputHuman.cpp
*/
class Time shakeIdleDelay; // size: 0x8, address: 0x8075AFB0
class Time shakeIdleDelay; // size: 0x8, address: 0x8075AFC0
// Range: 0x8011BBC0 -> 0x8011BCE8
void * zPlayerInputHuman::zPlayerInputHuman(class zPlayerInputHuman * this /* r31 */) {
    {
        // Range: 0x8011BC38 -> 0x8011BC68
        // Local variables
        int i; // r7
    }
    {
        // Range: 0x8011BC8C -> 0x8011BCD0
        // Local variables
        int i; // r6
    }

    // References
    // -> struct {} __vt__17zPlayerInputHuman;
}
// signature: zPlayerInputHuman::ClearPressed(zPlayerInputNS::PadButton)
// Range: 0x8011BCF0 -> 0x8011BD0C
void zPlayerInputHuman::ClearPressed() {
}
// signature: zPlayerInputHuman::Pressed(zPlayerInputNS::Action, bool, bool)
// Range: 0x8011BD10 -> 0x8011BEBC
int zPlayerInputHuman::Pressed(class zPlayerInputHuman * this /* r29 */, enum Action which /* r30 */, bool any /* r31 */) {
    // References
    // -> class ButtonMap defaultButtonMap[103];
    // -> class ButtonMap wiiButtonMap[113];
}
// signature: zPlayerInputHuman::On(zPlayerInputNS::Action, bool, bool)
// Range: 0x8011BED0 -> 0x8011C014
int zPlayerInputHuman::On(class zPlayerInputHuman * this /* r29 */, enum Action which /* r30 */, bool any /* r31 */) {
    // References
    // -> class ButtonMap defaultButtonMap[103];
    // -> class ButtonMap wiiButtonMap[113];
}
// signature: zPlayerInputHuman::Released(zPlayerInputNS::Action, bool, bool)
// Range: 0x8011C020 -> 0x8011C188
int zPlayerInputHuman::Released(class zPlayerInputHuman * this /* r30 */, enum Action which /* r29 */, bool any /* r31 */) {
    {
        // Range: 0x8011C048 -> 0x8011C158
        {
            // Range: 0x8011C0B4 -> 0x8011C108
            // Local variables
            int released; // r0
        }
        {
            // Range: 0x8011C108 -> 0x8011C158
            // Local variables
            int released; // r0
        }
    }

    // References
    // -> class ButtonMap defaultButtonMap[103];
    // -> class ButtonMap wiiButtonMap[113];
}
// Range: 0x8011C1B0 -> 0x8011C2C4
float zPlayerInputHuman::Analog(class zPlayerInputHuman * this /* r30 */, enum Action which /* r31 */) {
    // References
    // -> class ButtonMap wiiButtonMap[113];
}
// Range: 0x8011C2E0 -> 0x8011C478
unsigned int zPlayerInputHuman::TapHold(class zPlayerInputHuman * this /* r28 */, enum TapHoldStatus & status /* r29 */, enum Action which /* r30 */) {
    // References
    // -> double millisecondsPerTick;
}
// signature: zPlayerInputHuman::ValidateStick(unsigned int, zPlayerInputNS::PadType)
// Range: 0x8011C480 -> 0x8011C4E0
bool zPlayerInputHuman::ValidateStick() {
}
// signature: zPlayerInputHuman::GetStickOffset(unsigned int, zPlayerInputNS::PadType)
// Range: 0x8011C4E0 -> 0x8011C630
class xVec2 zPlayerInputHuman::GetStickOffset(class zPlayerInputHuman * this /* r30 */, unsigned int idx /* r31 */) {
    // Local variables
    class xVec2 tmp; // r1+0x10

    {
        // Range: 0x8011C568 -> 0x8011C5F8
        // Local variables
        class xVec2 dPad; // r1+0x8
    }
}
// signature: zPlayerInputHuman::GetStickDir(unsigned int, zPlayerInputNS::PadType)
// Range: 0x8011C630 -> 0x8011C6A8
class xVec2 zPlayerInputHuman::GetStickDir(class zPlayerInputHuman * this /* r31 */) {
    // Local variables
    class xVec2 tmp; // r1+0x8
}
// signature: zPlayerInputHuman::GetStickMag(unsigned int, zPlayerInputNS::PadType)
// Range: 0x8011C6B0 -> 0x8011C704
float zPlayerInputHuman::GetStickMag(class zPlayerInputHuman * this /* r31 */) {
}
// signature: zPlayerInputHuman::GetStickNormMag(unsigned int, zPlayerInputNS::PadType)
// Range: 0x8011C710 -> 0x8011C764
float zPlayerInputHuman::GetStickNormMag(class zPlayerInputHuman * this /* r31 */) {
}
// signature: zPlayerInputHuman::GetStickAng(unsigned int, zPlayerInputNS::PadType)
// Range: 0x8011C770 -> 0x8011C7C4
float zPlayerInputHuman::GetStickAng(class zPlayerInputHuman * this /* r31 */) {
}
// Range: 0x8011C7D0 -> 0x8011C878
enum InputDirection zPlayerInputHuman::StickOn(class zPlayerInputHuman * this /* r29 */, unsigned int idx /* r30 */, enum PadType type /* r31 */) {
}
// signature: zPlayerInputHuman::SwingOn(Sext::ePad, zPlayerInputNS::PadType)
// Range: 0x8011C880 -> 0x8011C940
enum InputDirection zPlayerInputHuman::SwingOn(class zPlayerInputHuman * this /* r31 */) {
    // Local variables
    unsigned int swingStability; // r1+0x8
    class xVec2 swingVec; // r1+0x10
}
// signature: zPlayerInputHuman::AngleToDirection(const float)
// Range: 0x8011C940 -> 0x8011CA20
enum InputDirection zPlayerInputHuman::AngleToDirection() {
}
// Range: 0x8011CA20 -> 0x8011CB74
class xVec3 zPlayerInputHuman::GetTiltAxisAccel(class zPlayerInputHuman * this /* r28 */, enum ePad pad /* r29 */, enum PadType type /* r30 */) {
    // Local variables
    class xVec3 tmp; // r1+0x8
    int idx; // r4
}
// signature: zPlayerInputHuman::GetTiltAngles(Sext::ePad, zPlayerInputNS::PadType)
// Range: 0x8011CB80 -> 0x8011CC24
class xVec2 zPlayerInputHuman::GetTiltAngles() {
    // Local variables
    class xVec2 tmp; // r1+0x8
    int idx; // r5
}
// signature: zPlayerInputHuman::GetTiltAsDigital(Sext::ePad, Sext::ePadTilt, float)
// Range: 0x8011CC30 -> 0x8011CD14
bool zPlayerInputHuman::GetTiltAsDigital(enum ePadTilt dir /* r31 */, float threshold /* f31 */) {
    // Local variables
    class xVec2 tiltAngles; // r1+0x8
    float angle; // f0
}
// signature: zPlayerInputHuman::GetTiltAsAnalog(Sext::ePad, Sext::ePadTilt)
// Range: 0x8011CD20 -> 0x8011CDA4
float zPlayerInputHuman::GetTiltAsAnalog(enum ePadTilt dir /* r31 */) {
    // Local variables
    class xVec2 tiltAngles; // r1+0x8
    float angle; // f0
}
// signature: zPlayerInputHuman::GetSwing(Sext::ePad, Sext::ePadSwing, float)
// Range: 0x8011CDB0 -> 0x8011CF04
bool zPlayerInputHuman::GetSwing(enum ePadSwing dir /* r30 */, float threshold /* f31 */) {
    {
        // Range: 0x8011CE34 -> 0x8011CEE4
        // Local variables
        class xVec2 swing; // r1+0x10
        unsigned int stability; // r1+0x8
        bool correctDirection; // r31
    }
}
// signature: zPlayerInputHuman::GetSwing2D(Sext::ePad, unsigned int &)
// Range: 0x8011CF10 -> 0x8011CF94
class xVec2 zPlayerInputHuman::GetSwing2D() {
    // Local variables
    class xVec2 tmp; // r1+0x10
    class Vector2 swing; // r1+0x8
}
// Range: 0x8011CFA0 -> 0x8011D084
class xVec3 zPlayerInputHuman::GetSwing3D(class zPlayerInputHuman * this /* r28 */, enum ePad pad /* r29 */, unsigned int & stability /* r30 */) {
    // Local variables
    class xVec3 tmp; // r1+0x14
    class Vector3 swing; // r1+0x8
}
// Range: 0x8011D090 -> 0x8011D380
float zPlayerInputHuman::GetShakeSpeed(class zPlayerInputHuman * this /* r29 */, enum ePad pad /* r31 */, enum ePadShake dir /* r28 */) {
    // Local variables
    float curShake; // f31
    unsigned int stability; // r1+0x8
    class xVec3 accel; // r1+0x5C
    class ShakeRecognition & shake; // r0

    // References
    // -> class Time shakeIdleDelay;
    // -> double secondsPerTick;
}
// Range: 0x8011D380 -> 0x8011D560
unsigned int zPlayerInputHuman::GetShakeCount(class zPlayerInputHuman * this /* r30 */, enum ePad pad /* r29 */) {
    // Local variables
    class ShakeRecognition & shake; // r0
    bool isSwinging; // r3

    // References
    // -> class Time shakeIdleDelay;
    // -> double secondsPerTick;
}
// signature: zPlayerInputHuman::GetAccRecordCount(Sext::ePad)
// Range: 0x8011D560 -> 0x8011D574
unsigned int zPlayerInputHuman::GetAccRecordCount() {
}
// signature: zPlayerInputHuman::GetAccRecord(Sext::ePad, unsigned int, xVec3 &)
// Range: 0x8011D580 -> 0x8011D5AC
void zPlayerInputHuman::GetAccRecord(class zPlayerInputHuman * this /* r7 */) {
    // Local variables
    class Vector3 & vec; // r0
}
// Range: 0x8011D5B0 -> 0x8011D610
bool zPlayerInputHuman::IsWiiClassicControllerConnected() {
}
// Range: 0x8011D610 -> 0x8011D630
bool zPlayerInputHuman::IsGamecubeControllerPrevious() {
    // References
    // -> class zGlobals globals;
    // -> class Module * trcModule;
}
// Range: 0x8011D630 -> 0x8011D650
bool zPlayerInputHuman::NunchukPrevious() {
    // References
    // -> class zGlobals globals;
    // -> class Module * trcModule;
}
// Range: 0x8011D650 -> 0x8011D670
bool zPlayerInputHuman::IsWiiClassicControllerPrevious() {
    // References
    // -> class zGlobals globals;
    // -> class Module * trcModule;
}
// Range: 0x8011D670 -> 0x8011D690
bool zPlayerInputHuman::IsWiiClassicControllerEnabled() {
    // References
    // -> class zGlobals globals;
    // -> class Module * trcModule;
}
// Range: 0x8011D690 -> 0x8011D70C
void zPlayerInputHuman::EnableWiiClassicController(class zPlayerInputHuman * this /* r31 */) {
    // References
    // -> class zGlobals globals;
    // -> class Module * trcModule;
}
// Range: 0x8011D710 -> 0x8011D78C
void zPlayerInputHuman::DisableWiiClassicController(class zPlayerInputHuman * this /* r31 */) {
    // References
    // -> class zGlobals globals;
    // -> class Module * trcModule;
}
// Range: 0x8011D790 -> 0x8011D7C0
void zPlayerInputHuman::EnableWiiNunchuk() {
    // References
    // -> class zGlobals globals;
    // -> class Module * trcModule;
}
// Range: 0x8011D7C0 -> 0x8011D7F0
void zPlayerInputHuman::DisableWiiNunchuk() {
    // References
    // -> class zGlobals globals;
    // -> class Module * trcModule;
}
// Range: 0x8011D7F0 -> 0x8011D820
bool zPlayerInputHuman::IsGamecubeControllerConnected() {
}
// Range: 0x8011D820 -> 0x8011D840
bool zPlayerInputHuman::IsGamecubeControllerEnabled() {
    // References
    // -> class zGlobals globals;
    // -> class Module * trcModule;
}
// Range: 0x8011D840 -> 0x8011D8BC
void zPlayerInputHuman::EnableGamecubeController(class zPlayerInputHuman * this /* r31 */) {
    // References
    // -> class zGlobals globals;
    // -> class Module * trcModule;
}
// Range: 0x8011D8C0 -> 0x8011D93C
void zPlayerInputHuman::DisableGamecubeController(class zPlayerInputHuman * this /* r31 */) {
    // References
    // -> class zGlobals globals;
    // -> class Module * trcModule;
}
// Range: 0x8011D940 -> 0x8011D99C
void zPlayerInputHuman::EnableWiiMotionPlus(bool extension /* r31 */) {
}
// Range: 0x8011D9A0 -> 0x8011D9EC
void zPlayerInputHuman::DisableWiiMotionPlus() {
}
// Range: 0x8011D9F0 -> 0x8011DA0C
bool zPlayerInputHuman::IsWiiMotionPlusConnected() {
}
// Range: 0x8011DA10 -> 0x8011DA30
float zPlayerInputHuman::GetWMPCalibration() {
}
// Range: 0x8011DA30 -> 0x8011DA60
void zPlayerInputHuman::ForceWMPCalibration() {
}
// Range: 0x8011DA60 -> 0x8011DA84
float zPlayerInputHuman::GetWMPYawSpeed() {
}
// Range: 0x8011DA90 -> 0x8011DAB4
float zPlayerInputHuman::GetWMPPitchSpeed() {
}
// Range: 0x8011DAC0 -> 0x8011DAE0
float zPlayerInputHuman::GetWMPRollSpeed() {
}
// Range: 0x8011DAE0 -> 0x8011DB58
void zPlayerInputHuman::GetWMPAngularSpeeds(class zPlayerInputHuman * this /* r28 */, float * yaw /* r29 */, float * pitch /* r30 */, float * roll /* r31 */) {
}
// Range: 0x8011DB60 -> 0x8011DC5C
float zPlayerInputHuman::GetWMPGlobalYawSpeed(class zPlayerInputHuman * this /* r30 */) {
    // Local variables
    class xMat3x3 orientation; // r1+0x38

    // References
    // -> class xVec3 m_UnitAxisX;
}
// Range: 0x8011DC60 -> 0x8011DD5C
float zPlayerInputHuman::GetWMPGlobalPitchSpeed(class zPlayerInputHuman * this /* r30 */) {
    // Local variables
    class xMat3x3 orientation; // r1+0x38

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x8011DD60 -> 0x8011DDD8
void zPlayerInputHuman::GetWMPGlobalAngularSpeeds(class zPlayerInputHuman * this /* r28 */, float * yaw /* r29 */, float * pitch /* r30 */, float * roll /* r31 */) {
}
// Range: 0x8011DDE0 -> 0x8011DE04
float zPlayerInputHuman::GetWMPYawAngle() {
}
// Range: 0x8011DE10 -> 0x8011DE34
float zPlayerInputHuman::GetWMPPitchAngle() {
}
// Range: 0x8011DE40 -> 0x8011DE60
float zPlayerInputHuman::GetWMPRollAngle() {
}
// Range: 0x8011DE60 -> 0x8011DED8
void zPlayerInputHuman::GetWMPAngles(class zPlayerInputHuman * this /* r28 */, float * yaw /* r29 */, float * pitch /* r30 */, float * roll /* r31 */) {
}
// Range: 0x8011DEE0 -> 0x8011E0BC
class xMat3x3 zPlayerInputHuman::GetWMPOrientation() {
    // Local variables
    class xMat3x3 tmp; // r1+0xC8
    class Matrix33 wmp; // r1+0x98

    // References
    // -> class xMat4x3 g_I3;
}
// Range: 0x8011E0C0 -> 0x8011E11C
class xVec2 zPlayerInputHuman::GetWMPLocalSwing2D(class zPlayerInputHuman * this /* r31 */) {
    // Local variables
    class xVec2 temp; // r1+0x8
}
// Range: 0x8011E120 -> 0x8011E17C
class xVec2 zPlayerInputHuman::GetWMPGlobalSwing2D(class zPlayerInputHuman * this /* r31 */) {
    // Local variables
    class xVec2 temp; // r1+0x8
}
// Range: 0x8011E180 -> 0x8011E1A4
class Vector & zPlayerInputHuman::GetWMPCorrectedAcc() {
    // References
    // -> class Vector4 vec4Zero;
}
// signature: zPlayerInputHuman::GetIR(zPlayerInputNS::IRStatus &, zPlayerInputNS::PadType)
// Range: 0x8011E1B0 -> 0x8011E384
class xVec2 zPlayerInputHuman::GetIR(class zPlayerInputHuman * this /* r30 */, enum IRStatus & status /* r31 */) {
    // Local variables
    class xVec2 tmp; // r1+0x48

    // References
    // -> double secondsPerTick;
}
// Range: 0x8011E390 -> 0x8011E484
class xVec2 zPlayerInputHuman::GetIRToScreen(class zPlayerInputHuman * this /* r29 */, enum IRStatus & status /* r30 */, enum PadType type /* r31 */) {
    // Local variables
    float viewportX; // f31
    float viewportY; // f30
    class xVec2 dataIR; // r1+0x8

    {
        // Range: 0x8011E3B4 -> 0x8011E3E8
        // Local variables
        class xVec2 empty; // r1+0x10
    }

    // References
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x8011E490 -> 0x8011E53C
void zPlayerInputHuman::StartRumble(class zPlayerInputHuman * this /* r31 */, float intensity /* f31 */) {
}
// Range: 0x8011E540 -> 0x8011E5DC
void zPlayerInputHuman::StopRumble(class zPlayerInputHuman * this /* r31 */) {
}
// Range: 0x8011E5E0 -> 0x8011E93C
void zPlayerInputHuman::Update(class zPlayerInputHuman * this /* r30 */, unsigned int port /* r31 */) {
    {
        // Range: 0x8011E5FC -> 0x8011E664
        // Local variables
        class Pad * tmp; // r29

        {
            // Range: 0x8011E610 -> 0x8011E664
            // Local variables
            int oldPort; // r28
        }
    }
    {
        // Range: 0x8011E6E0 -> 0x8011E710
        // Local variables
        int i; // r5
    }

    // References
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x8011E940 -> 0x8011EA2C
bool zPlayerInputHuman::IsControllerConnected(class zPlayerInputHuman * this /* r28 */) {
    // References
    // -> class Module * trcModule;
    // -> class zGlobals globals;
}
// Range: 0x8011EA30 -> 0x8011EAB0
void zPlayerInputHuman::Reset() {
    {
        // Range: 0x8011EA44 -> 0x8011EAAC
        // Local variables
        int i; // r9

        {
            // Range: 0x8011EA80 -> 0x8011EAAC
            // Local variables
            int j; // r0
        }
    }
}
// Range: 0x8011EAB0 -> 0x8011EBDC
class xVec2 zPlayerInputHuman::GetDpadAsStick(class zPlayerInputHuman * this /* r31 */) {
    // Local variables
    class xVec2 tmp; // r1+0x8
}
// Range: 0x8011EBE0 -> 0x8011ED7C
unsigned int zPlayerInputHuman::FlyCheat(class zPlayerInputHuman * this /* r30 */) {
    // References
    // -> class zGlobals globals;
}
// Range: 0x8011ED80 -> 0x8011EF1C
unsigned int zPlayerInputHuman::FlyCheatAI(class zPlayerInputHuman * this /* r30 */) {
    // References
    // -> class zGlobals globals;
}
// Range: 0x8011EF20 -> 0x8011F060
unsigned int zPlayerInputHuman::FlyCheatUp(class zPlayerInputHuman * this /* r30 */) {
}
// Range: 0x8011F060 -> 0x8011F1A0
unsigned int zPlayerInputHuman::FlyCheatDown(class zPlayerInputHuman * this /* r30 */) {
}
// Range: 0x8011F1A0 -> 0x8011F1D4
unsigned int zPlayerInputHuman::FlyCheatBoost() {
}
// Range: 0x8011F1E0 -> 0x8011F274
unsigned int zPlayerInputHuman::DebugStatsToggle(class zPlayerInputHuman * this /* r30 */) {
}
