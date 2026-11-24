/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zPlayerInputHuman.cpp
*/
static class Time shakeIdleDelay; // size: 0x8, address: 0x80824BD8
static class Time shakeIdleDelay; // size: 0x8, address: 0x80824BE8
// Range: 0x80207120 -> 0x80207388
void * zPlayerInputHuman::zPlayerInputHuman(class zPlayerInputHuman * this /* r31 */) {
    // References
    // -> struct {} __vt__17zPlayerInputHuman;
}
// signature: zPlayerInputHuman::ClearPressed(zPlayerInputNS::PadButton)
// Range: 0x80207390 -> 0x802073AC
void zPlayerInputHuman::ClearPressed() {
}
// signature: zPlayerInputHuman::Pressed(zPlayerInputNS::Action, bool, bool)
// Range: 0x802073B0 -> 0x80207520
int zPlayerInputHuman::Pressed(class zPlayerInputHuman * this /* r29 */, enum Action which /* r30 */, bool any /* r31 */) {
    // References
    // -> class ButtonMap defaultButtonMap[96];
    // -> class ButtonMap wiiButtonMap[104];
}
// signature: zPlayerInputHuman::On(zPlayerInputNS::Action, bool, bool)
// Range: 0x80207530 -> 0x80207684
int zPlayerInputHuman::On(class zPlayerInputHuman * this /* r29 */, enum Action which /* r30 */, bool any /* r31 */) {
    // References
    // -> class ButtonMap defaultButtonMap[96];
    // -> class ButtonMap wiiButtonMap[104];
}
// signature: zPlayerInputHuman::Released(zPlayerInputNS::Action, bool, bool)
// Range: 0x80207690 -> 0x80207808
int zPlayerInputHuman::Released(class zPlayerInputHuman * this /* r29 */, enum Action which /* r30 */, bool any /* r31 */) {
    // References
    // -> class ButtonMap defaultButtonMap[96];
    // -> class ButtonMap wiiButtonMap[104];
}
// Range: 0x80207810 -> 0x80207908
float zPlayerInputHuman::Analog(class zPlayerInputHuman * this /* r30 */, enum Action which /* r31 */) {
    // References
    // -> class ButtonMap wiiButtonMap[104];
}
// Range: 0x80207920 -> 0x80207AC8
unsigned int zPlayerInputHuman::TapHold(class zPlayerInputHuman * this /* r28 */, enum TapHoldStatus & status /* r29 */, enum Action which /* r30 */) {
    // References
    // -> double millisecondsPerTick;
}
// signature: zPlayerInputHuman::ValidateStick(unsigned int, zPlayerInputNS::PadType)
// Range: 0x80207AD0 -> 0x80207C38
bool zPlayerInputHuman::ValidateStick(unsigned int idx /* r31 */) {
    // References
    // -> class zGlobals globals;
}
// signature: zPlayerInputHuman::GetStickOffset(unsigned int, zPlayerInputNS::PadType)
// Range: 0x80207C40 -> 0x80207CF0
class xVec2 zPlayerInputHuman::GetStickOffset(class zPlayerInputHuman * this /* r30 */, unsigned int idx /* r31 */) {
    // Local variables
    class xVec2 tmp; // r1+0x8
}
// signature: zPlayerInputHuman::GetStickDir(unsigned int, zPlayerInputNS::PadType)
// Range: 0x80207CF0 -> 0x80207D68
class xVec2 zPlayerInputHuman::GetStickDir(class zPlayerInputHuman * this /* r31 */) {
    // Local variables
    class xVec2 tmp; // r1+0x8
}
// signature: zPlayerInputHuman::GetStickMag(unsigned int, zPlayerInputNS::PadType)
// Range: 0x80207D70 -> 0x80207DC4
float zPlayerInputHuman::GetStickMag(class zPlayerInputHuman * this /* r31 */) {
}
// signature: zPlayerInputHuman::GetStickNormMag(unsigned int, zPlayerInputNS::PadType)
// Range: 0x80207DD0 -> 0x80207E24
float zPlayerInputHuman::GetStickNormMag(class zPlayerInputHuman * this /* r31 */) {
}
// signature: zPlayerInputHuman::GetStickAng(unsigned int, zPlayerInputNS::PadType)
// Range: 0x80207E30 -> 0x80207E84
float zPlayerInputHuman::GetStickAng(class zPlayerInputHuman * this /* r31 */) {
}
// Range: 0x80207E90 -> 0x80207F40
enum InputDirection zPlayerInputHuman::StickOn(class zPlayerInputHuman * this /* r29 */, unsigned int idx /* r30 */, enum PadType type /* r31 */) {
}
// signature: zPlayerInputHuman::SwingOn(Sext::ePad, zPlayerInputNS::PadType)
// Range: 0x80207F40 -> 0x8020800C
enum InputDirection zPlayerInputHuman::SwingOn(class zPlayerInputHuman * this /* r31 */) {
    // Local variables
    unsigned int swingStability; // r1+0x8
    class xVec2 swingVec; // r1+0x10
}
// signature: zPlayerInputHuman::AngleToDirection(const float)
// Range: 0x80208010 -> 0x802080F0
enum InputDirection zPlayerInputHuman::AngleToDirection() {
}
// signature: zPlayerInputHuman::GetTiltAxisAccel(Sext::ePad, zPlayerInputNS::PadType)
// Range: 0x802080F0 -> 0x8020821C
class xVec3 zPlayerInputHuman::GetTiltAxisAccel() {
    // Local variables
    class xVec3 tmp; // r1+0x8
    int idx; // r7
}
// signature: zPlayerInputHuman::GetTiltAngles(Sext::ePad, zPlayerInputNS::PadType)
// Range: 0x80208230 -> 0x802082D4
class xVec2 zPlayerInputHuman::GetTiltAngles() {
    // Local variables
    class xVec2 tmp; // r1+0x8
    int idx; // r5
}
// signature: zPlayerInputHuman::GetTiltAsDigital(Sext::ePad, Sext::ePadTilt, float)
// Range: 0x802082E0 -> 0x802083C4
bool zPlayerInputHuman::GetTiltAsDigital(enum ePadTilt dir /* r31 */, float threshold /* f31 */) {
    // Local variables
    class xVec2 tiltAngles; // r1+0x8
    float angle; // f0
}
// signature: zPlayerInputHuman::GetTiltAsAnalog(Sext::ePad, Sext::ePadTilt)
// Range: 0x802083D0 -> 0x80208454
float zPlayerInputHuman::GetTiltAsAnalog(enum ePadTilt dir /* r31 */) {
    // Local variables
    class xVec2 tiltAngles; // r1+0x8
    float angle; // f0
}
// signature: zPlayerInputHuman::GetSwing(Sext::ePad, Sext::ePadSwing, float)
// Range: 0x80208460 -> 0x802085B4
bool zPlayerInputHuman::GetSwing(enum ePadSwing dir /* r30 */, float threshold /* f31 */) {
    {
        // Range: 0x802084E4 -> 0x80208594
        // Local variables
        class xVec2 swing; // r1+0x10
        unsigned int stability; // r1+0x8
        bool correctDirection; // r31
    }
}
// signature: zPlayerInputHuman::GetSwing2D(Sext::ePad, unsigned int &)
// Range: 0x802085C0 -> 0x80208644
class xVec2 zPlayerInputHuman::GetSwing2D() {
    // Local variables
    class xVec2 tmp; // r1+0x10
    class Vector2 swing; // r1+0x8
}
// signature: zPlayerInputHuman::GetSwing3D(Sext::ePad, unsigned int &)
// Range: 0x80208650 -> 0x80208708
class xVec3 zPlayerInputHuman::GetSwing3D() {
    // Local variables
    class xVec3 tmp; // r1+0x14
    class Vector3 swing; // r1+0x8
}
// Range: 0x80208710 -> 0x80208AD0
float zPlayerInputHuman::GetShakeSpeed(class zPlayerInputHuman * this /* r29 */, enum ePad pad /* r31 */, enum ePadShake dir /* r28 */) {
    // Local variables
    float curShake; // f31
    unsigned int stability; // r1+0x8
    class xVec3 accel; // r1+0xBC
    class ShakeRecognition & shake; // r0

    // References
    // -> long long startupTicks;
    // -> static class Time shakeIdleDelay;
    // -> double secondsPerTick;
}
// Range: 0x80208AD0 -> 0x80208CB8
unsigned int zPlayerInputHuman::GetShakeCount(class zPlayerInputHuman * this /* r30 */, enum ePad pad /* r29 */) {
    // Local variables
    class ShakeRecognition & shake; // r0
    bool isSwinging; // r3

    // References
    // -> static class Time shakeIdleDelay;
    // -> double secondsPerTick;
}
// signature: zPlayerInputHuman::GetAccRecordCount(Sext::ePad)
// Range: 0x80208CC0 -> 0x80208CD4
unsigned int zPlayerInputHuman::GetAccRecordCount() {
}
// signature: zPlayerInputHuman::GetAccRecord(Sext::ePad, unsigned int, xVec3 &)
// Range: 0x80208CE0 -> 0x80208D10
void zPlayerInputHuman::GetAccRecord() {
    // Local variables
    class Vector3 & vec; // r0
}
// Range: 0x80208D10 -> 0x80208D70
bool zPlayerInputHuman::IsWiiClassicControllerConnected() {
}
// Range: 0x80208D70 -> 0x80208DCC
void zPlayerInputHuman::EnableWiiClassicController(class zPlayerInputHuman * this /* r31 */) {
}
// Range: 0x80208DD0 -> 0x80208E2C
void zPlayerInputHuman::EnableWiiMotionPlus(bool extension /* r31 */) {
}
// Range: 0x80208E30 -> 0x80208E6C
void zPlayerInputHuman::DisableWiiMotionPlus() {
}
// Range: 0x80208E70 -> 0x80208E8C
bool zPlayerInputHuman::IsWiiMotionPlusConnected() {
}
// Range: 0x80208E90 -> 0x80208EB0
float zPlayerInputHuman::GetWMPCalibration() {
}
// Range: 0x80208EB0 -> 0x80208EE0
void zPlayerInputHuman::ForceWMPCalibration() {
}
// Range: 0x80208EE0 -> 0x80208F04
float zPlayerInputHuman::GetWMPYawSpeed() {
}
// Range: 0x80208F10 -> 0x80208F34
float zPlayerInputHuman::GetWMPPitchSpeed() {
}
// Range: 0x80208F40 -> 0x80208F60
float zPlayerInputHuman::GetWMPRollSpeed() {
}
// Range: 0x80208F60 -> 0x80208FF0
void zPlayerInputHuman::GetWMPAngularSpeeds(class zPlayerInputHuman * this /* r28 */, float * yaw /* r29 */, float * pitch /* r30 */, float * roll /* r31 */) {
}
// Range: 0x80208FF0 -> 0x80209140
float zPlayerInputHuman::GetWMPGlobalYawSpeed(class zPlayerInputHuman * this /* r31 */) {
    // Local variables
    class xMat3x3 orientation; // r1+0x38

    // References
    // -> class xVec3 m_UnitAxisX;
}
// Range: 0x80209140 -> 0x80209290
float zPlayerInputHuman::GetWMPGlobalPitchSpeed(class zPlayerInputHuman * this /* r31 */) {
    // Local variables
    class xMat3x3 orientation; // r1+0x38

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x80209290 -> 0x80209320
void zPlayerInputHuman::GetWMPGlobalAngularSpeeds(class zPlayerInputHuman * this /* r28 */, float * yaw /* r29 */, float * pitch /* r30 */, float * roll /* r31 */) {
}
// Range: 0x80209320 -> 0x80209344
float zPlayerInputHuman::GetWMPYawAngle() {
}
// Range: 0x80209350 -> 0x80209374
float zPlayerInputHuman::GetWMPPitchAngle() {
}
// Range: 0x80209380 -> 0x802093A0
float zPlayerInputHuman::GetWMPRollAngle() {
}
// Range: 0x802093A0 -> 0x80209430
void zPlayerInputHuman::GetWMPAngles(class zPlayerInputHuman * this /* r28 */, float * yaw /* r29 */, float * pitch /* r30 */, float * roll /* r31 */) {
}
// Range: 0x80209430 -> 0x802095D4
class xMat3x3 zPlayerInputHuman::GetWMPOrientation() {
    // Local variables
    class xMat3x3 tmp; // r1+0xC8
    class Matrix33 wmp; // r1+0x98
}
// Range: 0x802095E0 -> 0x8020963C
class xVec2 zPlayerInputHuman::GetWMPLocalSwing2D(class zPlayerInputHuman * this /* r31 */) {
    // Local variables
    class xVec2 temp; // r1+0x8
}
// Range: 0x80209640 -> 0x8020969C
class xVec2 zPlayerInputHuman::GetWMPGlobalSwing2D(class zPlayerInputHuman * this /* r31 */) {
    // Local variables
    class xVec2 temp; // r1+0x8
}
// signature: zPlayerInputHuman::GetIR(zPlayerInputNS::IRStatus &, zPlayerInputNS::PadType)
// Range: 0x802096A0 -> 0x80209810
class xVec2 zPlayerInputHuman::GetIR(class zPlayerInputHuman * this /* r30 */, enum IRStatus & status /* r31 */) {
    // Local variables
    class xVec2 tmp; // r1+0x38

    // References
    // -> double secondsPerTick;
}
// Range: 0x80209810 -> 0x80209968
class xVec2 zPlayerInputHuman::GetIRToScreen(class zPlayerInputHuman * this /* r29 */, enum IRStatus & status /* r30 */, enum PadType type /* r31 */) {
    // Local variables
    float viewportX; // f31
    float viewportY; // f30
    class xVec2 dataIR; // r1+0x8

    {
        // Range: 0x80209844 -> 0x80209878
        // Local variables
        class xVec2 empty; // r1+0x10
    }

    // References
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x80209970 -> 0x80209A1C
void zPlayerInputHuman::StartRumble(class zPlayerInputHuman * this /* r31 */, float intensity /* f31 */) {
}
// Range: 0x80209A20 -> 0x80209ABC
void zPlayerInputHuman::StopRumble(class zPlayerInputHuman * this /* r31 */) {
}
// Range: 0x80209AD0 -> 0x80209DB8
void zPlayerInputHuman::Update(class zPlayerInputHuman * this /* r30 */, unsigned int port /* r31 */) {
    {
        // Range: 0x80209AF8 -> 0x80209B60
        // Local variables
        class Pad * tmp; // r29

        {
            // Range: 0x80209B0C -> 0x80209B60
            // Local variables
            int oldPort; // r28
        }
    }

    // References
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x80209DC0 -> 0x80209E54
void zPlayerInputHuman::Reset() {
    {
        // Range: 0x80209E00 -> 0x80209E00
        // Local variables
        int i; // r0
    }
}
// Range: 0x80209E60 -> 0x80209F8C
class xVec2 zPlayerInputHuman::GetDpadAsStick(class zPlayerInputHuman * this /* r31 */) {
    // Local variables
    class xVec2 tmp; // r1+0x8
}
// Range: 0x80209F90 -> 0x8020A0A4
unsigned int zPlayerInputHuman::FlyCheat(class zPlayerInputHuman * this /* r30 */) {
    // References
    // -> class zGlobals globals;
}
// Range: 0x8020A0B0 -> 0x8020A1C4
unsigned int zPlayerInputHuman::FlyCheatAI(class zPlayerInputHuman * this /* r30 */) {
    // References
    // -> class zGlobals globals;
}
// Range: 0x8020A1D0 -> 0x8020A2D8
unsigned int zPlayerInputHuman::FlyCheatUp(class zPlayerInputHuman * this /* r30 */) {
}
// Range: 0x8020A2E0 -> 0x8020A3E8
unsigned int zPlayerInputHuman::FlyCheatDown(class zPlayerInputHuman * this /* r30 */) {
}
// Range: 0x8020A3F0 -> 0x8020A48C
unsigned int zPlayerInputHuman::DebugStatsToggle(class zPlayerInputHuman * this /* r30 */) {
}
