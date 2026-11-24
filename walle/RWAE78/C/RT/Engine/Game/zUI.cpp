/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zUI.cpp
*/
bool bAllowInput; // size: 0x1, address: 0x80700E14
bool bAllowSelectInput; // size: 0x1, address: 0x80700E15
static void * (* staticAllocator)(unsigned int size, void * user); // size: 0x4, address: 0x807E4B70
static void * staticUser; // size: 0x4, address: 0x807E4B74
static void (* signalHandler)(class zUI * from, unsigned long long dest, unsigned int event, class EventAny * params, void * user); // size: 0x4, address: 0x807E4B78
static void * signalUser; // size: 0x4, address: 0x807E4B7C
static int playersActiveAtInitiatedPause; // size: 0x4, address: 0x807E4B80
static float aspect_ratio; // size: 0x4, address: 0x807E4B84
static bool gAllowPortActivationThisFrame[4]; // size: 0x4, address: 0x807E4B88
static bool gFirstTimeStartGame; // size: 0x1, address: 0x80700E16
static enum ePauseType pause_type; // size: 0x4, address: 0x807E4B8C
// signature: @unnamed@WAD03_cpp@::UIEventHandler(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801C7FC0 -> 0x801C7FDC
static void @unnamed@WAD03_cpp@::UIEventHandler(class xBase * from /* r0 */) {
}
// Range: 0x801C7FE0 -> 0x801C8050
void zUI_Init(class zUI * text /* r30 */, class zUI * asset /* r31 */) {
}
// Range: 0x801C8050 -> 0x801C8058
bool zUI::Blends() const {
}
// Range: 0x801C8060 -> 0x801C8348
void zUI::GetTransform(class zUI * this /* r30 */, class Matrix43 * transform /* r31 */) const {
    {
        // Range: 0x801C81E0 -> 0x801C8330
        // Local variables
        class Matrix43 parentTransform; // r1+0x128
    }

    // References
    // -> class Vector4 vec4Zero;
    // -> class Vector4 vec4OneZ;
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4OneX;
}
// Range: 0x801C83B0 -> 0x801C8504
void zUI::GetNoScaleTransform(class zUI * this /* r29 */, class Matrix43 * transform /* r30 */) const {
    {
        // Range: 0x801C83F8 -> 0x801C84E8
        // Local variables
        class Matrix43 parentTransform; // r1+0x98
    }

    // References
    // -> class Vector4 vec4Zero;
}
// Range: 0x801C8510 -> 0x801C86B8
void zUI::Signal(class zUI * this /* r27 */, class xBase * from /* r28 */, unsigned int event /* r29 */) {
    {
        // Range: 0x801C8550 -> 0x801C8620
        // Local variables
        unsigned int i; // r30
    }
    {
        // Range: 0x801C8638 -> 0x801C8690
        // Local variables
        unsigned int i; // r31
    }

    // References
    // -> static void * signalUser;
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
    // -> static void (* signalHandler)(class zUI * from, unsigned long long dest, unsigned int event, class EventAny * params, void * user);
}
// Range: 0x801C86C0 -> 0x801C875C
void zUI::DoInit(class zUI * this /* r31 */) {
}
// Range: 0x801C8760 -> 0x801C8764
void zUI::DoSetup() {
}
// Range: 0x801C8770 -> 0x801C87DC
void zUI::DoReset(class zUI * this /* r31 */) {
}
// Range: 0x801C87E0 -> 0x801C8CA4
void zUI::DoResetMotion(class zUI * this /* r31 */) {
    // Local variables
    class Matrix43 transform; // r1+0x70

    {
        // Range: 0x801C8914 -> 0x801C8A58
        // Local variables
        class Matrix43 anchorTransform; // r1+0x40
        class zUI * anchorWidget; // r0
        class uid parentID; // r1+0x8
    }
    {
        // Range: 0x801C8A58 -> 0x801C8C40
        {
            // Range: 0x801C8A5C -> 0x801C8B00
            // Local variables
            class View * view; // r0
        }
    }

    // References
    // -> static float aspect_ratio;
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
    // -> static class Matrix43 _matIdentity;
}
// signature: zUI::DoHandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801C8CB0 -> 0x801C92C0
void zUI::DoHandleEvent(class zUI * this /* r29 */, class EventAny * genericParams /* r30 */) {
    {
        // Range: 0x801C9108 -> 0x801C928C
        // Local variables
        class UI_Motion * toParamWidgetPtr; // r31
        class EventActionLegacy * params; // r0
    }

    // References
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
}
// signature: zUI::SetAllowPadActivationThisFrame(int, bool)
// Range: 0x801C92C0 -> 0x801C92D0
void zUI::SetAllowPadActivationThisFrame() {
    // References
    // -> static bool gAllowPortActivationThisFrame[4];
}
// Range: 0x801C92D0 -> 0x801CA06C
void zUI::DoUpdate(class zUI * this /* r15 */, float dt /* f31 */) {
    {
        // Range: 0x801C9384 -> 0x801CA02C
        // Local variables
        enum ePauseType pausetype; // r18
        enum _tagTRCState state; // r0
        int startidx; // r1+0x8

        {
            // Range: 0x801C95E8 -> 0x801C9FB0
            // Local variables
            bool releasedDirection; // r16
            bool pressedDirection; // r17
            int player; // r0
        }
    }

    // References
    // -> float afterTimer;
    // -> float playerInControl;
    // -> bool bAllowSelectInput;
    // -> bool zSystemUIShowingChanged;
    // -> bool activePlayers[4];
    // -> static enum ePauseType pause_type;
    // -> bool noPressStart;
    // -> static bool gAllowPortActivationThisFrame[4];
    // -> static bool gFirstTimeStartGame;
    // -> class zGlobals globals;
    // -> class zPlayerInputPadMgr padManager;
    // -> bool bAllowInput;
}
// Range: 0x801CA070 -> 0x801CA074
void zUI::DoExit() {
}
// Range: 0x801CA080 -> 0x801CB0DC
void zUI::ApplyMotion(class zUI * this /* r25 */) {
    // Local variables
    class zUIMotionFrame frame; // r1+0x30
    float timeCompensation; // f23
    bool fireEndEvent; // r28
    class UIMotionCommandAsset * motionCmd; // r27

    {
        // Range: 0x801CA1F4 -> 0x801CAF20
        // Local variables
        int i; // r26

        {
            // Range: 0x801CA1F4 -> 0x801CA1F8
            // Local variables
            class UIMotionCommandMove * cmd; // r0
        }
        {
            // Range: 0x801CA1F8 -> 0x801CA1F8
            // Local variables
            class UIMotionCommandScale * cmd; // r0

            {
                // Range: 0x801CA1F8 -> 0x801CA1F8
                // Local variables
                float scaleY; // f1
                float scaleX; // f0
            }
        }
        {
            // Range: 0x801CA1F8 -> 0x801CA204
            // Local variables
            class UIMotionCommandRotate * cmd; // r0

            {
                // Range: 0x801CA1F8 -> 0x801CA204
                // Local variables
                float cosA; // f0
                float sinA; // f0
                float rotation; // f1
            }
        }
        {
            // Range: 0x801CA204 -> 0x801CA204
            // Local variables
            class UIMotionCommandOpacity * cmd; // r0

            {
                // Range: 0x801CA204 -> 0x801CA204
                // Local variables
                float opacityChange; // f0
            }
        }
        {
            // Range: 0x801CA204 -> 0x801CA204
            // Local variables
            class UIMotionCommandAbsoluteScale * cmd; // r0

            {
                // Range: 0x801CA204 -> 0x801CA204
                // Local variables
                float scaleY; // f0
                float scaleX; // f0

                {
                    // Range: 0x801CA204 -> 0x801CA204
                    // Local variables
                    float percent; // f4
                    float timeLength; // f5
                    float timePassed; // f4
                }
            }
        }
        {
            // Range: 0x801CA204 -> 0x801CA204
            // Local variables
            class UIMotionCommandBrightness * cmd; // r0

            {
                // Range: 0x801CA204 -> 0x801CA204
                // Local variables
                float brightnessChange; // f0
            }
        }
        {
            // Range: 0x801CA204 -> 0x801CAD70
            // Local variables
            class UIMotionCommandColor * cmd; // r0

            {
                // Range: 0x801CA204 -> 0x801CAD70
                // Local variables
                float blueChange; // f0
                float greenChange; // f0
                float redChange; // f0
            }
        }
        {
            // Range: 0x801CAD74 -> 0x801CAEE0
            // Local variables
            class UIMotionCommandUVScroll * cmd; // r0
        }
        {
            // Range: 0x801CAEE4 -> 0x801CAF1C
            // Local variables
            class UIMotionCommandVisibility * cmd; // r0
        }
    }
    {
        // Range: 0x801CAF54 -> 0x801CAFFC
        // Local variables
        class xBase uiMotionBase; // r1+0x10
        bool in; // r26
    }
    {
        // Range: 0x801CAFFC -> 0x801CB038
        // Local variables
        class UI_Motion * oldMotion; // r26
    }

    // References
    // -> struct {} __vt__5xBase;
}
// signature: zUI::GetParameterizedMotionTime(float, unsigned short, Sext::uid)
// Range: 0x801CB0E0 -> 0x801CB4F0
float zUI::GetParameterizedMotionTime() {
    {
        // Range: 0x801CB108 -> 0x801CB1B0
        // Local variables
        class xTimer * timer; // r0
        float totalTime; // f2
    }
    {
        // Range: 0x801CB1B0 -> 0x801CB284
        // Local variables
        class zPlayer * player; // r0
    }
    {
        // Range: 0x801CB36C -> 0x801CB420
        // Local variables
        class xCounter * counter; // r0
    }

    // References
    // -> class xGlobals * xglobals;
    // -> float HP_GAME_MAX_MAXHEALTH;
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
}
// Range: 0x801CB4F0 -> 0x801CB58C
void zUI::DoInitMotion() {
}
// signature: zUI::DoApplyMotionFrame(const zUIMotionFrame *)
// Range: 0x801CB590 -> 0x801CB624
void zUI::DoApplyMotionFrame() {
}
// signature: zUI::AutoMenu(Sext::uid Sext::zUI::*, unsigned int)
// Range: 0x801CB630 -> 0x801CB860
void zUI::AutoMenu(class zUI * this /* r29 */, unsigned int event /* r30 */) {
    // Local variables
    class zUI * ui; // r31
    unsigned long long id; // r9:r10
    unsigned int autoMenuLimit; // r6

    // References
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
}
// Range: 0x801CB860 -> 0x801CB8C4
void zUI::FocusOn(class zUI * this /* r31 */) {
}
// Range: 0x801CB8D0 -> 0x801CB934
void zUI::FocusOff(class zUI * this /* r31 */) {
}
// Range: 0x801CB940 -> 0x801CB968
void zUI::Visible() {
    // References
    // -> bool uiAnyActive;
}
// Range: 0x801CB970 -> 0x801CB990
void zUI::Invisible() {
}
// Range: 0x801CB990 -> 0x801CBA9C
void zUI::Select(class zUI * this /* r29 */) {
}
// Range: 0x801CBAA0 -> 0x801CBBA8
void zUI::Unselect(class zUI * this /* r29 */) {
}
// signature: zUISetCustomSignalHandler(void (*)(zUI *, unsigned long long, unsigned int, Sext::EventAny *, void *), void *)
// Range: 0x801CBBB0 -> 0x801CBBC4
void zUISetCustomSignalHandler() {
    // References
    // -> static void * signalUser;
    // -> static void (* signalHandler)(class zUI * from, unsigned long long dest, unsigned int event, class EventAny * params, void * user);
}
// Range: 0x801CBBD0 -> 0x801CBBDC
enum ePauseType zUIGetPauseType() {
    // References
    // -> static enum ePauseType pause_type;
}
// signature: zUISetPauseType(Sext::ePauseType)
// Range: 0x801CBBE0 -> 0x801CBBEC
void zUISetPauseType() {
    // References
    // -> static enum ePauseType pause_type;
}
