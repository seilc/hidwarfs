/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zUI.cpp
*/
bool bAllowInput; // size: 0x1, address: 0x806C246C
bool bAllowSelectInput; // size: 0x1, address: 0x806C246D
static void * (* staticAllocator)(unsigned int size, void * user); // size: 0x4, address: 0x8075A710
static void * staticUser; // size: 0x4, address: 0x8075A714
static void (* signalHandler)(class zUI * from, unsigned long long dest, unsigned int event, class EventAny * params, void * user); // size: 0x4, address: 0x8075A718
static void * signalUser; // size: 0x4, address: 0x8075A71C
static int padPortInitiatedPause; // size: 0x4, address: 0x806C2470
static int playersActiveAtInitiatedPause; // size: 0x4, address: 0x8075A720
float aspect_ratio; // size: 0x4, address: 0x8075B110
static bool gAllowPortActivationThisFrame[4]; // size: 0x4, address: 0x8075A724
static enum ePauseType pause_type; // size: 0x4, address: 0x8075A728
// signature: @unnamed@WAD03_cpp@::UIEventHandler(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8017E720 -> 0x8017E73C
static void @unnamed@WAD03_cpp@::UIEventHandler(class xBase * from /* r0 */) {
}
// Range: 0x8017E740 -> 0x8017E7A8
void zUI_Init(class zUI * text /* r30 */, class zUI * asset /* r31 */) {
}
// Range: 0x8017E7B0 -> 0x8017E920
void zUI::GetTransform(class zUI * this /* r30 */, class Matrix43 & modTransform /* r31 */) const {
    // Local variables
    float x; // f0
    float y; // f0
    float z; // f0

    {
        // Range: 0x8017E8C8 -> 0x8017E8F8
        // Local variables
        class Matrix43 parentTransform; // r1+0x68
    }

    // References
    // -> class Vector4 vec4Zero;
    // -> class Vector4 vec4OneZ;
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4OneX;
}
// Range: 0x8017E970 -> 0x8017E9E4
void zUI::GetNoScaleTransform(class zUI * this /* r30 */, class Matrix43 & transform /* r31 */) const {
    {
        // Range: 0x8017E9A0 -> 0x8017E9D0
        // Local variables
        class Matrix43 parentTransform; // r1+0x8
    }
}
// Range: 0x8017E9F0 -> 0x8017EB28
void zUI::Signal(class zUI * this /* r29 */, class xBase * from /* r30 */, unsigned int event /* r31 */) {
    {
        // Range: 0x8017EA30 -> 0x8017EAA4
        // Local variables
        unsigned int i; // r27
    }
    {
        // Range: 0x8017EAA8 -> 0x8017EB14
        // Local variables
        unsigned int i; // r25
    }

    // References
    // -> static void * signalUser;
    // -> static void (* signalHandler)(class zUI * from, unsigned long long dest, unsigned int event, class EventAny * params, void * user);
}
// Range: 0x8017EB30 -> 0x8017EBDC
void zUI::DoInit(class zUI * this /* r29 */) {
}
// Range: 0x8017EBE0 -> 0x8017EC4C
void zUI::DoReset(class zUI * this /* r31 */) {
}
// Range: 0x8017EC50 -> 0x8017EFE0
void zUI::DoResetMotion(class zUI * this /* r31 */) {
    // Local variables
    class Matrix43 transform; // r1+0x70

    {
        // Range: 0x8017ED10 -> 0x8017EDAC
        // Local variables
        class Matrix43 anchorTransform; // r1+0x40
        class zUI * anchorWidget; // r0
        class uid parentID; // r1+0x8
    }
    {
        // Range: 0x8017EDAC -> 0x8017EF94
        {
            // Range: 0x8017EDB0 -> 0x8017EE54
            // Local variables
            class View * view; // r0
        }
    }

    // References
    // -> float aspect_ratio;
    // -> static class Matrix43 _matIdentity;
}
// signature: zUI::DoHandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8017F050 -> 0x8017F564
void zUI::DoHandleEvent(class zUI * this /* r31 */, class EventAny * genericParams /* r28 */) {
    {
        // Range: 0x8017F4A4 -> 0x8017F534
        // Local variables
        class UI_Motion * toParamWidgetPtr; // r5
        class EventActionLegacy * params; // r0
    }
}
// Range: 0x8017F570 -> 0x8017F594
void zUI::ResetAllowPadActivationThisFrame() {
    {
        // Range: 0x8017F570 -> 0x8017F590
        // Local variables
        int i; // r0
    }

    // References
    // -> static bool gAllowPortActivationThisFrame[4];
}
// signature: zUI::SetAllowPadActivationThisFrame(int, bool)
// Range: 0x8017F5A0 -> 0x8017F5B0
void zUI::SetAllowPadActivationThisFrame() {
    // References
    // -> static bool gAllowPortActivationThisFrame[4];
}
// Range: 0x8017F5B0 -> 0x80180124
void zUI::DoUpdate(class zUI * this /* r15 */, float dt /* f30 */) {
    {
        // Range: 0x8017F63C -> 0x801800DC
        // Local variables
        enum ePauseType pausetype; // r16
        enum _tagTRCState state; // r0
        int startidx; // r1+0x8

        {
            // Range: 0x8017F7E8 -> 0x801800DC
            // Local variables
            int player; // r0
        }
    }

    // References
    // -> float afterTimer;
    // -> bool bAllowSelectInput;
    // -> bool zSystemUIShowingChanged;
    // -> static unsigned int activeUIPads;
    // -> static enum ePauseType pause_type;
    // -> bool noPressStart;
    // -> static bool gAllowPortActivationThisFrame[4];
    // -> class zGlobals globals;
    // -> class zPlayerInputPadMgr padManager;
    // -> bool bAllowInput;
}
// Range: 0x80180130 -> 0x80180184
void zUI::StopMotion(class zUI * this /* r31 */) {
}
// signature: zUI::RunMotion(Sext::UI_Motion *, bool, bool)
// Range: 0x80180190 -> 0x8018023C
void zUI::RunMotion(class zUI * this /* r29 */, class UI_Motion * asset /* r30 */, bool loop /* r31 */) {
}
// signature: zUI::CalcAcceleratedDistance(const float, const float, const float, const float, const float, const float)
// Range: 0x80180240 -> 0x801802C8
float zUI::CalcAcceleratedDistance() {
    // Local variables
    float timePassed; // f3
    float timeLength; // f9
    float topVelocity; // f1
    float curDistance; // f2

    {
        // Range: 0x8018029C -> 0x801802C0
        // Local variables
        float timeToEnd; // f3
    }
}
// Range: 0x801802D0 -> 0x80180E14
void zUI::ApplyMotion(class zUI * this /* r25 */) {
    // Local variables
    class zUIMotionFrame frame; // r1+0x48
    float timeCompensation; // f24
    bool fireEndEvent; // r28
    class UIMotionCommandAsset * motionCmd; // r27

    {
        // Range: 0x80180430 -> 0x80180C70
        // Local variables
        int i; // r26

        {
            // Range: 0x80180430 -> 0x80180430
            // Local variables
            class UIMotionCommandMove & cmd; // r0
        }
        {
            // Range: 0x80180430 -> 0x80180430
            // Local variables
            class UIMotionCommandScale & cmd; // r0

            {
                // Range: 0x80180430 -> 0x80180430
                // Local variables
                float scaleY; // f23
                float scaleX; // f25
            }
        }
        {
            // Range: 0x80180430 -> 0x80180438
            // Local variables
            class UIMotionCommandRotate & cmd; // r0

            {
                // Range: 0x80180430 -> 0x80180438
                // Local variables
                float cosA; // f0
                float sinA; // f0
                float rotation; // f1
            }
        }
        {
            // Range: 0x80180438 -> 0x80180438
            // Local variables
            class UIMotionCommandOpacity & cmd; // r0

            {
                // Range: 0x80180438 -> 0x80180438
                // Local variables
                float opacityChange; // f0
            }
        }
        {
            // Range: 0x80180438 -> 0x80180438
            // Local variables
            class UIMotionCommandAbsoluteScale & cmd; // r0

            {
                // Range: 0x80180438 -> 0x80180438
                // Local variables
                float scaleY; // f0
                float scaleX; // f0

                {
                    // Range: 0x80180438 -> 0x80180438
                    // Local variables
                    float percent; // f4
                    float timeLength; // f5
                    float timePassed; // f4
                }
            }
        }
        {
            // Range: 0x80180438 -> 0x80180438
            // Local variables
            class UIMotionCommandBrightness & cmd; // r0

            {
                // Range: 0x80180438 -> 0x80180438
                // Local variables
                float brightnessChange; // f0
            }
        }
        {
            // Range: 0x80180438 -> 0x80180B80
            // Local variables
            class UIMotionCommandColor & cmd; // r0

            {
                // Range: 0x80180438 -> 0x80180B80
                // Local variables
                float blueChange; // f0
                float greenChange; // f0
                float redChange; // f0
            }
        }
        {
            // Range: 0x80180B84 -> 0x80180C1C
            // Local variables
            class UIMotionCommandUVScroll & cmd; // r0
        }
        {
            // Range: 0x80180C20 -> 0x80180C58
            // Local variables
            class UIMotionCommandVisibility & cmd; // r0
        }
    }
    {
        // Range: 0x80180C90 -> 0x80180D3C
        // Local variables
        class xBase uiMotionBase; // r1+0x10
        class EntityHandleBase dummyHandle; // r1+0x78
        bool in; // r26
    }
    {
        // Range: 0x80180D3C -> 0x80180D78
        // Local variables
        class UI_Motion * oldMotion; // r26
    }
}
// signature: zUI::GetParameterizedMotionTime(float, unsigned short, Sext::uid)
// Range: 0x80180E20 -> 0x80181094
float zUI::GetParameterizedMotionTime(float motionTime /* f31 */) {
    {
        // Range: 0x80180E58 -> 0x80180E94
        // Local variables
        class xTimer * timer; // r0
        float totalTime; // f1
    }
    {
        // Range: 0x80180E94 -> 0x80180ED8
        // Local variables
        class zPlayer * player; // r0
    }
    {
        // Range: 0x80180F6C -> 0x80180FB4
        // Local variables
        class xCounter * counter; // r0
    }

    // References
    // -> class xGlobals * xglobals;
    // -> float HP_GAME_MAX_MAXHEALTH;
}
// Range: 0x801810A0 -> 0x80181134
void zUI::DoInitMotion() {
}
// signature: zUI::DoApplyMotionFrame(const zUIMotionFrame *)
// Range: 0x80181140 -> 0x801811D4
void zUI::DoApplyMotionFrame() {
}
// signature: zUI::AutoMenu(Sext::uid Sext::zUI::*, unsigned int)
// Range: 0x801811E0 -> 0x80181394
void zUI::AutoMenu(class zUI * this /* r29 */, unsigned int event /* r31 */) {
    // Local variables
    class zUI * ui; // r30
    unsigned long long id; // r3:r4
    unsigned int autoMenuLimit; // r5
}
// Range: 0x801813A0 -> 0x80181404
void zUI::FocusOn(class zUI * this /* r31 */) {
}
// Range: 0x80181410 -> 0x80181474
void zUI::FocusOff(class zUI * this /* r31 */) {
}
// Range: 0x80181480 -> 0x801814A8
void zUI::Visible() {
    // References
    // -> bool uiAnyActive;
}
// Range: 0x801814B0 -> 0x801814D0
void zUI::Invisible() {
}
// Range: 0x801814D0 -> 0x80181510
void zUI::Select() {
}
// Range: 0x80181510 -> 0x80181550
void zUI::Unselect() {
}
// signature: zUISetCustomSignalHandler(void (*)(zUI *, unsigned long long, unsigned int, Sext::EventAny *, void *), void *)
// Range: 0x80181550 -> 0x80181564
void zUISetCustomSignalHandler() {
    // References
    // -> static void * signalUser;
    // -> static void (* signalHandler)(class zUI * from, unsigned long long dest, unsigned int event, class EventAny * params, void * user);
}
// Range: 0x80181570 -> 0x8018157C
enum ePauseType zUIGetPauseType() {
    // References
    // -> static enum ePauseType pause_type;
}
// signature: zUISetPauseType(Sext::ePauseType)
// Range: 0x80181580 -> 0x8018158C
void zUISetPauseType() {
    // References
    // -> static enum ePauseType pause_type;
}
