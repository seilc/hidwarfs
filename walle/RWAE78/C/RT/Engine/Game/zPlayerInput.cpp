/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zPlayerInput.cpp
*/
class zPlayerInputPadMgr padManager; // size: 0x128, address: 0x80798530
static class ButtonMap defaultButtonMap[107]; // size: 0x358, address: 0x806CF978
static class ButtonMap wiiButtonMap[107]; // size: 0x358, address: 0x806CFCD0
static float IRStickOffsetX; // size: 0x4, address: 0x80798658
static float IRStickOffsetY; // size: 0x4, address: 0x80700080
static float IRStickDeadzoneWidth; // size: 0x4, address: 0x80700084
static float IRStickDeadzoneHeight; // size: 0x4, address: 0x80700088
static float IRStickOutzoneWidth; // size: 0x4, address: 0x8070008C
static float IRStickOutzoneHeight; // size: 0x4, address: 0x80700090
// Range: 0x80176E70 -> 0x80176E7C
class zPlayerInputPadMgr * zPlayerInputNS::GetPadManager() {
    // References
    // -> class zPlayerInputPadMgr padManager;
}
// signature: zPlayerInputNS::GetGamePort(zPlayerInput *)
// Range: 0x80176E80 -> 0x80176EEC
unsigned int zPlayerInputNS::GetGamePort() {
    // References
    // -> class zPlayerInputPadMgr padManager;
}
// signature: zPlayerInputNS::GetPadAtGamePort(int)
// Range: 0x80176EF0 -> 0x80176F3C
class zPlayerInput * zPlayerInputNS::GetPadAtGamePort() {
    // References
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x80176F40 -> 0x80176F80
class zPlayerInput * zPlayerInputNS::GetDebugPad() {
    // References
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x80176FB0 -> 0x8017709C
void zPlayerInputPadMgr::zPlayerInputUpdate() {
    {
        // Range: 0x80176FC8 -> 0x80176FD8
        // Local variables
        int i; // r30
    }

    // References
    // -> class zPlayerInputPadMgr padManager;
}
// signature: zPlayerInputPadMgr::SetNewPlayer(zPlayer *const )
// Range: 0x801770A0 -> 0x8017714C
class zPlayerInput * zPlayerInputPadMgr::SetNewPlayer() {
    // Local variables
    int i; // r7

    {
        // Range: 0x8017710C -> 0x8017713C
        // Local variables
        int i; // r6
    }

    // References
    // -> bool activePlayers[4];
}
// signature: zPlayerInputPadMgr::AcquirePad(IO::Pad *)
// Range: 0x80177150 -> 0x8017722C
bool zPlayerInputPadMgr::AcquirePad() {
    // Local variables
    int i; // r0
    int firstNull; // r5
}
// signature: zPlayerInputPadMgr::GetPadAtGamePort(int)
// Range: 0x80177230 -> 0x8017726C
class zPlayerInput * zPlayerInputPadMgr::GetPadAtGamePort() {
    {
        // Range: 0x80177238 -> 0x8017725C
        // Local variables
        int i; // r6
    }
}
// Range: 0x80177270 -> 0x801772D4
void * zPlayerInput::zPlayerInput() {
}
// signature: zPlayerInput::ClearPressed(zPlayerInputNS::PadButton)
// Range: 0x801772E0 -> 0x801772FC
void zPlayerInput::ClearPressed() {
}
// signature: zPlayerInput::Pressed(zPlayerInputNS::Action, bool, bool)
// Range: 0x80177300 -> 0x8017741C
int zPlayerInput::Pressed() {
    // References
    // -> static class ButtonMap defaultButtonMap[107];
    // -> static class ButtonMap wiiButtonMap[107];
}
// signature: zPlayerInput::On(zPlayerInputNS::Action, bool, bool)
// Range: 0x80177420 -> 0x80177520
int zPlayerInput::On() {
    // References
    // -> static class ButtonMap defaultButtonMap[107];
    // -> static class ButtonMap wiiButtonMap[107];
}
// signature: zPlayerInput::Released(zPlayerInputNS::Action, bool, bool)
// Range: 0x80177520 -> 0x80177644
int zPlayerInput::Released() {
    // References
    // -> static class ButtonMap defaultButtonMap[107];
    // -> static class ButtonMap wiiButtonMap[107];
}
// signature: zPlayerInput::GetStickOffset(unsigned int, zPlayerInputNS::PadType)
// Range: 0x80177650 -> 0x80177760
class xVec2 zPlayerInput::GetStickOffset() {
    // Local variables
    class xVec2 tmp; // r1+0x10
}
// signature: zPlayerInput::GetStickMag(unsigned int, zPlayerInputNS::PadType)
// Range: 0x80177760 -> 0x801778CC
float zPlayerInput::GetStickMag() {
}
// Range: 0x801778D0 -> 0x80177DE4
class xVec2 zPlayerInput::GetScreenAsStick(class zPlayerInput * this /* r31 */) {
    // Local variables
    class xVec2 tmp; // r1+0x30

    {
        // Range: 0x8017792C -> 0x80177D10
        // Local variables
        float viewportY; // f30
        float viewportX; // f31

        {
            // Range: 0x801779EC -> 0x80177D10
            // Local variables
            float normalizedPointerY; // f5
            float normalizedPointerX; // f4
            class xVec2 pointerPos; // r1+0x28
            enum IRStatus pointerStatus; // r1+0x8

            {
                // Range: 0x80177B64 -> 0x80177C10
                // Local variables
                float range; // f1
            }
            {
                // Range: 0x80177C10 -> 0x80177D10
                // Local variables
                float range; // f4
            }
        }
    }

    // References
    // -> static float IRStickOffsetY;
    // -> static float IRStickOutzoneHeight;
    // -> static float IRStickDeadzoneHeight;
    // -> static float IRStickOutzoneWidth;
    // -> static float IRStickDeadzoneWidth;
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x80177DF0 -> 0x80177EEC
class xVec2 zPlayerInput::GetDpadAsStick(class zPlayerInput * this /* r31 */) {
    // Local variables
    class xVec2 tmp; // r1+0x8
}
// signature: zPlayerInput::GetTiltAxisAccel(unsigned int, zPlayerInputNS::PadType)
// Range: 0x80177EF0 -> 0x80178000
class xVec3 zPlayerInput::GetTiltAxisAccel() {
    // Local variables
    class xVec3 tmp; // r1+0x8
}
// Range: 0x80178000 -> 0x801781F4
bool zPlayerInput::GetAccelAsDigital(enum PadTiltIndex pad /* r6 */, enum PadTiltDirection dir /* r31 */, float threshold /* f31 */) {
    // Local variables
    class xVec3 tmp; // r1+0x20
    class Vector3 currentAccel; // r1+0x14
    bool accelerating; // r0
    bool correctDirection; // r4
}
// signature: zPlayerInput::GetIR(zPlayerInputNS::IRStatus &, zPlayerInputNS::PadType)
// Range: 0x80178200 -> 0x8017840C
class xVec2 zPlayerInput::GetIR(class zPlayerInput * this /* r30 */, enum IRStatus * status /* r31 */) {
    // Local variables
    class xVec2 tmp; // r1+0x38

    // References
    // -> double secondsPerTick;
}
// Range: 0x80178410 -> 0x80178568
class xVec2 zPlayerInput::GetIRToScreen(class zPlayerInput * this /* r29 */, enum IRStatus * status /* r30 */, enum PadType type /* r31 */) {
    // Local variables
    float viewportX; // f31
    float viewportY; // f30
    class xVec2 dataIR; // r1+0x8

    {
        // Range: 0x80178444 -> 0x8017846C
        // Local variables
        class xVec2 empty; // r1+0x10
    }

    // References
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x80178570 -> 0x8017861C
void zPlayerInput::StartRumble(class zPlayerInput * this /* r31 */, float intensity /* f31 */) {
}
// Range: 0x80178620 -> 0x801786BC
void zPlayerInput::StopRumble(class zPlayerInput * this /* r31 */) {
}
// Range: 0x801786C0 -> 0x80178B14
void zPlayerInput::Update(class zPlayerInput * this /* r30 */, unsigned int port /* r31 */) {
    {
        // Range: 0x801786EC -> 0x80178728
        // Local variables
        class Pad * tmp; // r29
    }

    // References
    // -> bool activePlayers[4];
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x80178B20 -> 0x80178B30
unsigned int zPlayerInput::CameraCycleIn() {
}
// Range: 0x80178B30 -> 0x80178B40
unsigned int zPlayerInput::CameraCycleOut() {
}
// Range: 0x80178B40 -> 0x80178C50
unsigned int zPlayerInput::ZoomIn() {
    // References
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x80178C50 -> 0x80178D60
unsigned int zPlayerInput::ZoomOut() {
    // References
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x80178D60 -> 0x80178E0C
unsigned int zPlayerInput::TargetingCamHold() {
    // References
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x80178E10 -> 0x80178E38
unsigned int zPlayerInput::CenterCamera() {
}
// Range: 0x80178E40 -> 0x80178E88
unsigned int zPlayerInput::FlyCheat() {
    // References
    // -> int enableSuperSoaker;
    // -> unsigned int gSoak;
}
// Range: 0x80178E90 -> 0x80179298
class xVec2 zPlayerInput::GetEveControl(class zPlayerInput * this /* r31 */) {
    // Local variables
    class xVec2 tmp; // r1+0x20
    enum IRStatus pointerStatus; // r1+0x8
    class xVec2 pointerPos; // r1+0x18
    class zEvePlayer * evePlayer; // r31

    {
        // Range: 0x80179018 -> 0x80179118
        // Local variables
        class xVec2 eveScreenPos; // r1+0x10
        class xVec3 eveCenter; // r1+0x4C
    }

    // References
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x801792A0 -> 0x801792CC
unsigned int zPlayerInput::WalleSwitchCubes() {
}
// Range: 0x801792D0 -> 0x80179354
unsigned int zPlayerInput::WalleThrowCube(class zPlayerInput * this /* r30 */) {
}
// Range: 0x80179360 -> 0x801793E4
unsigned int zPlayerInput::WallEveThrowCube(class zPlayerInput * this /* r30 */) {
}
// Range: 0x801793F0 -> 0x80179478
unsigned int zPlayerInput::CrushCube(class zPlayerInput * this /* r30 */) {
}
// Range: 0x80179480 -> 0x80179508
unsigned int zPlayerInput::PickUpCube(class zPlayerInput * this /* r30 */) {
}
// Range: 0x80179510 -> 0x801797C0
unsigned int zPlayerInput::BoxformJump(class zPlayerInput * this /* r31 */) {
    // References
    // -> class zGlobals globals;
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x801797C0 -> 0x801798FC
unsigned int zPlayerInput::BoxformJumpOn(class zPlayerInput * this /* r30 */) {
    // References
    // -> class zGlobals globals;
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x80179900 -> 0x80179A04
unsigned int zPlayerInput::StorkJump(class zPlayerInput * this /* r30 */) {
    // References
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x80179A10 -> 0x80179AD8
int zPlayerInput::GetViewportIndex() {
    // References
    // -> class zPlayerInputPadMgr padManager;
}
