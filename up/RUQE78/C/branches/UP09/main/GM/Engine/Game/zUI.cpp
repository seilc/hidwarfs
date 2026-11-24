/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zUI.cpp
*/
bool bAllowInput; // size: 0x1, address: 0x807B5714
bool bAllowSelectInput; // size: 0x1, address: 0x807B5715
static void * (* staticAllocator)(unsigned int size, void * user); // size: 0x4, address: 0x8082C160
static void * staticUser; // size: 0x4, address: 0x8082C164
static void (* signalHandler)(class zUI * from, unsigned long long dest, unsigned int event, class EventAny * params, void * user); // size: 0x4, address: 0x8082C168
static void * signalUser; // size: 0x4, address: 0x8082C16C
static int padPortInitiatedPause; // size: 0x4, address: 0x807B5718
static int playersActiveAtInitiatedPause; // size: 0x4, address: 0x8082C170
static float aspect_ratio; // size: 0x4, address: 0x8082C174
static bool gAllowPortActivationThisFrame[4]; // size: 0x4, address: 0x8082C178
static bool gFirstTimeStartGame; // size: 0x1, address: 0x807B571C
static enum ePauseType pause_type; // size: 0x4, address: 0x8082C17C
// signature: @unnamed@WAD03_cpp@::UIEventHandler(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x802694E0 -> 0x802694FC
static void @unnamed@WAD03_cpp@::UIEventHandler(class xBase * from /* r0 */) {
}
// Range: 0x80269500 -> 0x80269570
void zUI_Init(class zUI * text /* r30 */, class zUI * asset /* r31 */) {
}
// Range: 0x80269580 -> 0x80269868
void zUI::GetTransform(class zUI * this /* r30 */, class Matrix43 & modTransform /* r31 */) const {
    // Local variables
    float x; // f0
    float y; // f0
    float z; // f0

    {
        // Range: 0x80269700 -> 0x80269850
        // Local variables
        class Matrix43 parentTransform; // r1+0x128
    }

    // References
    // -> class Vector4 vec4Zero;
    // -> class Vector4 vec4OneZ;
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4OneX;
}
// Range: 0x802698D0 -> 0x80269A10
void zUI::GetNoScaleTransform(class zUI * this /* r29 */, class Matrix43 & transform /* r30 */) const {
    {
        // Range: 0x80269914 -> 0x802699F4
        // Local variables
        class Matrix43 parentTransform; // r1+0x98
    }

    // References
    // -> class Vector4 vec4Zero;
}
// Range: 0x80269A10 -> 0x80269B58
void zUI::Signal(class zUI * this /* r29 */, class xBase * from /* r30 */, unsigned int event /* r31 */) {
    {
        // Range: 0x80269A50 -> 0x80269AC0
        // Local variables
        unsigned int i; // r28
    }
    {
        // Range: 0x80269AD8 -> 0x80269B30
        // Local variables
        unsigned int i; // r25
    }

    // References
    // -> static void * signalUser;
    // -> static void (* signalHandler)(class zUI * from, unsigned long long dest, unsigned int event, class EventAny * params, void * user);
}
// Range: 0x80269B60 -> 0x80269C1C
void zUI::DoInit(class zUI * this /* r29 */) {
}
// Range: 0x80269C20 -> 0x80269C24
void zUI::DoSetup() {
}
// Range: 0x80269C30 -> 0x80269C9C
void zUI::DoReset(class zUI * this /* r31 */) {
}
// Range: 0x80269CA0 -> 0x8026A114
void zUI::DoResetMotion(class zUI * this /* r31 */) {
    // Local variables
    class Matrix43 transform; // r1+0x70

    {
        // Range: 0x80269DD4 -> 0x80269EC4
        // Local variables
        class Matrix43 anchorTransform; // r1+0x40
        class zUI * anchorWidget; // r0
        class uid parentID; // r1+0x8
    }
    {
        // Range: 0x80269EC4 -> 0x8026A0B0
        {
            // Range: 0x80269EC8 -> 0x80269F70
            // Local variables
            class View * view; // r0
        }
    }

    // References
    // -> static float aspect_ratio;
    // -> static class Matrix43 _matIdentity;
}
// signature: zUI::DoHandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8026A120 -> 0x8026A6EC
void zUI::DoHandleEvent(class zUI * this /* r31 */, class EventAny * genericParams /* r28 */) {
    {
        // Range: 0x8026A57C -> 0x8026A6B4
        // Local variables
        class UI_Motion * toParamWidgetPtr; // r29
        class EventActionLegacy * params; // r0
    }
}
// signature: zUI::SetAllowPadActivationThisFrame(int, bool)
// Range: 0x8026A6F0 -> 0x8026A700
void zUI::SetAllowPadActivationThisFrame() {
    // References
    // -> static bool gAllowPortActivationThisFrame[4];
}
// Range: 0x8026A700 -> 0x8026B434
void zUI::DoUpdate(class zUI * this /* r15 */, float dt /* f30 */) {
    {
        // Range: 0x8026A7C0 -> 0x8026B3EC
        // Local variables
        enum ePauseType pausetype; // r16
        enum _tagTRCState state; // r0
        int startidx; // r1+0x8

        {
            // Range: 0x8026AA3C -> 0x8026B370
            // Local variables
            int player; // r0
        }
    }

    // References
    // -> bool bAllowSelectInput;
    // -> float afterTimer;
    // -> bool zSystemUIShowingChanged;
    // -> static unsigned int activeUIPads;
    // -> static enum ePauseType pause_type;
    // -> bool noPressStart;
    // -> static bool gAllowPortActivationThisFrame[4];
    // -> static bool gFirstTimeStartGame;
    // -> class zGlobals globals;
    // -> class zPlayerInputPadMgr padManager;
    // -> bool bAllowInput;
}
// Range: 0x8026B440 -> 0x8026B444
void zUI::DoExit() {
}
// signature: zUI::CalcAcceleratedDistance(const float, const float, const float, const float, const float, const float)
// Range: 0x8026B450 -> 0x8026B4D8
float zUI::CalcAcceleratedDistance() {
    // Local variables
    float timePassed; // f3
    float timeLength; // f9
    float topVelocity; // f1
    float curDistance; // f2

    {
        // Range: 0x8026B4AC -> 0x8026B4D0
        // Local variables
        float timeToEnd; // f3
    }
}
// Range: 0x8026B4E0 -> 0x8026C074
void zUI::ApplyMotion(class zUI * this /* r25 */) {
    // Local variables
    class zUIMotionFrame frame; // r1+0x48
    float timeCompensation; // f24
    bool fireEndEvent; // r28
    class UIMotionCommandAsset * motionCmd; // r27

    {
        // Range: 0x8026B64C -> 0x8026BE90
        // Local variables
        int i; // r26

        {
            // Range: 0x8026B64C -> 0x8026B64C
            // Local variables
            class UIMotionCommandMove & cmd; // r0
        }
        {
            // Range: 0x8026B64C -> 0x8026B64C
            // Local variables
            class UIMotionCommandScale & cmd; // r0

            {
                // Range: 0x8026B64C -> 0x8026B64C
                // Local variables
                float scaleY; // f23
                float scaleX; // f25
            }
        }
        {
            // Range: 0x8026B64C -> 0x8026B654
            // Local variables
            class UIMotionCommandRotate & cmd; // r0

            {
                // Range: 0x8026B64C -> 0x8026B654
                // Local variables
                float cosA; // f0
                float sinA; // f0
                float rotation; // f1
            }
        }
        {
            // Range: 0x8026B654 -> 0x8026B654
            // Local variables
            class UIMotionCommandOpacity & cmd; // r0

            {
                // Range: 0x8026B654 -> 0x8026B654
                // Local variables
                float opacityChange; // f0
            }
        }
        {
            // Range: 0x8026B654 -> 0x8026B654
            // Local variables
            class UIMotionCommandAbsoluteScale & cmd; // r0

            {
                // Range: 0x8026B654 -> 0x8026B654
                // Local variables
                float scaleY; // f0
                float scaleX; // f0

                {
                    // Range: 0x8026B654 -> 0x8026B654
                    // Local variables
                    float percent; // f4
                    float timeLength; // f5
                    float timePassed; // f4
                }
            }
        }
        {
            // Range: 0x8026B654 -> 0x8026B654
            // Local variables
            class UIMotionCommandBrightness & cmd; // r0

            {
                // Range: 0x8026B654 -> 0x8026B654
                // Local variables
                float brightnessChange; // f0
            }
        }
        {
            // Range: 0x8026B654 -> 0x8026BDB4
            // Local variables
            class UIMotionCommandColor & cmd; // r0

            {
                // Range: 0x8026B654 -> 0x8026BDB4
                // Local variables
                float blueChange; // f0
                float greenChange; // f0
                float redChange; // f0
            }
        }
        {
            // Range: 0x8026BDB8 -> 0x8026BE50
            // Local variables
            class UIMotionCommandUVScroll & cmd; // r0
        }
        {
            // Range: 0x8026BE54 -> 0x8026BE8C
            // Local variables
            class UIMotionCommandVisibility & cmd; // r0
        }
    }
    {
        // Range: 0x8026BEC4 -> 0x8026BF9C
        // Local variables
        class xBase uiMotionBase; // r1+0x10
        class EntityHandleBase dummyHandle; // r1+0x78
        bool in; // r26
    }
    {
        // Range: 0x8026BF9C -> 0x8026BFD8
        // Local variables
        class UI_Motion * oldMotion; // r26
    }

    // References
    // -> struct {} __vt__5xBase;
}
// signature: zUI::GetParameterizedMotionTime(float, unsigned short, Sext::uid)
// Range: 0x8026C080 -> 0x8026C330
float zUI::GetParameterizedMotionTime(float motionTime /* f31 */) {
    {
        // Range: 0x8026C0B8 -> 0x8026C108
        // Local variables
        class xTimer * timer; // r4
        float totalTime; // f1
    }
    {
        // Range: 0x8026C108 -> 0x8026C160
        // Local variables
        class zPlayer * player; // r3
    }
    {
        // Range: 0x8026C1F4 -> 0x8026C250
        // Local variables
        class xCounter * counter; // r3
    }

    // References
    // -> class xGlobals * xglobals;
    // -> float HP_GAME_MAX_MAXHEALTH;
}
// Range: 0x8026C330 -> 0x8026C3C4
void zUI::DoInitMotion() {
}
// signature: zUI::DoApplyMotionFrame(const zUIMotionFrame *)
// Range: 0x8026C3D0 -> 0x8026C464
void zUI::DoApplyMotionFrame() {
}
// signature: zUI::AutoMenu(Sext::uid Sext::zUI::*, unsigned int)
// Range: 0x8026C470 -> 0x8026C644
void zUI::AutoMenu(class zUI * this /* r29 */, unsigned int event /* r31 */) {
    // Local variables
    class zUI * ui; // r30
    unsigned long long id; // r3:r4
    unsigned int autoMenuLimit; // r5
}
// Range: 0x8026C650 -> 0x8026C6B4
void zUI::FocusOn(class zUI * this /* r31 */) {
}
// Range: 0x8026C6C0 -> 0x8026C724
void zUI::FocusOff(class zUI * this /* r31 */) {
}
// Range: 0x8026C730 -> 0x8026C758
void zUI::Visible() {
    // References
    // -> bool uiAnyActive;
}
// Range: 0x8026C760 -> 0x8026C780
void zUI::Invisible() {
}
// Range: 0x8026C780 -> 0x8026C88C
void zUI::Select(class zUI * this /* r29 */) {
}
// Range: 0x8026C890 -> 0x8026C998
void zUI::Unselect(class zUI * this /* r29 */) {
}
// signature: zUISetCustomSignalHandler(void (*)(zUI *, unsigned long long, unsigned int, Sext::EventAny *, void *), void *)
// Range: 0x8026C9A0 -> 0x8026C9B4
void zUISetCustomSignalHandler() {
    // References
    // -> static void * signalUser;
    // -> static void (* signalHandler)(class zUI * from, unsigned long long dest, unsigned int event, class EventAny * params, void * user);
}
// signature: zUISetPauseType(Sext::ePauseType)
// Range: 0x8026C9C0 -> 0x8026C9CC
void zUISetPauseType() {
    // References
    // -> static enum ePauseType pause_type;
}
