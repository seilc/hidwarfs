/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCompLogicAnimViewer.cpp
*/
unsigned int mNeedTweaks; // size: 0x4, address: 0x806F43BC
bool mActionPressed; // size: 0x1, address: 0x8076C600
bool mIsActive; // size: 0x1, address: 0x8076C601
unsigned int mAutoAction; // size: 0x4, address: 0x8076C604
unsigned int mModelNameHash; // size: 0x4, address: 0x8076C608
static class zCompLogicAnimViewer * viewer; // size: 0x4, address: 0x8076C60C
static class AnimFrameStepper sAnimFrameStepper; // size: 0x20, address: 0x8076C610
static char * stateNames[26]; // size: 0x68, address: 0x806F43C0
class AnimViewerStates sAnimViewerStates; // size: 0x828, address: 0x8076C630
static class AnimSequence sAnimSequence; // size: 0xD0, address: 0x8076CE58
float MAX_DISTANCE; // size: 0x4, address: 0x806CC200
float MIN_DISTANCE; // size: 0x4, address: 0x806CC204
float START_DISTANCE; // size: 0x4, address: 0x806CC208
float START_PITCH; // size: 0x4, address: 0x806CC20C
float SPEED_PITCH; // size: 0x4, address: 0x806CC210
float SPEED_YAW; // size: 0x4, address: 0x806CC214
float SPEED_DISTANCE; // size: 0x4, address: 0x806CC218
static class zAnimViewerCamera sAnimViewerCamera; // size: 0x148, address: 0x8076CF28
// signature: AnimSequence::Init(const char *, AnimViewerStates &)
// Range: 0x800C4000 -> 0x800C41F4
bool AnimSequence::Init() {
    // Local variables
    unsigned int frames; // r6
    bool inTime; // r7
    int prevAnim; // r8

    {
        // Range: 0x800C4008 -> 0x800C41B4
        // Local variables
        int i; // r9

        {
            // Range: 0x800C4008 -> 0x800C4008
            // Local variables
            int index; // r10
        }
    }

    // References
    // -> class __locale _current_locale;
}
// Range: 0x800C4660 -> 0x800C469C
void zAnimViewerCamera::create(class zAnimViewerCamera * this /* r31 */) {
}
// signature: zAnimViewerCamera::update(xScene &, float)
// Range: 0x800CEFA0 -> 0x800CF20C
void zAnimViewerCamera::update(class zAnimViewerCamera * this /* r30 */, float dt /* f31 */) {
    // References
    // -> float MIN_DISTANCE;
    // -> float MAX_DISTANCE;
    // -> float SPEED_DISTANCE;
    // -> float SPEED_YAW;
    // -> float SPEED_PITCH;
}
// Range: 0x800C4240 -> 0x800C4258
void * zCompLogicAnimViewer::zCompLogicAnimViewer() {
    // References
    // -> struct {} __vt__20zCompLogicAnimViewer;
}
// signature: zCompLogicAnimViewer::SystemEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800C4260 -> 0x800C4268
bool zCompLogicAnimViewer::SystemEvent() {
}
// Range: 0x800C4270 -> 0x800C427C
unsigned long long zCompLogicAnimViewer::FindCharacterAssetID() {
    // References
    // -> unsigned int mModelNameHash;
}
// signature: zCompLogicAnimViewer::ReadINI(bool)
// Range: 0x800C4280 -> 0x800C42E0
void zCompLogicAnimViewer::ReadINI() {
    // Local variables
    unsigned int * buf; // r31

    // References
    // -> static class AnimSequence sAnimSequence;
    // -> class AnimViewerStates sAnimViewerStates;
}
// Range: 0x800C42E0 -> 0x800C43BC
void zCompLogicAnimViewer::CreateAnimTable(class xAnimTable * table /* r24 */) {
    // References
    // -> class AnimViewerStates sAnimViewerStates;
}
// signature: zCompLogicAnimViewer::Attached(const zNPCStatus *)
// Range: 0x800C43C0 -> 0x800C43CC
void zCompLogicAnimViewer::Attached() {
    // References
    // -> static class zCompLogicAnimViewer * viewer;
}
// signature: zCompLogicAnimViewer::Detached(zNPCStatus *)
// Range: 0x800C43D0 -> 0x800C43E0
void zCompLogicAnimViewer::Detached() {
    // References
    // -> static class zCompLogicAnimViewer * viewer;
}
// signature: zCompLogicAnimViewer::Reset(const zNPCStatus *)
// Range: 0x800C43E0 -> 0x800C43E4
void zCompLogicAnimViewer::Reset() {
}
// Range: 0x800C43F0 -> 0x800C4654
void zCompLogicAnimViewer::AllAttached(class zCompLogicAnimViewer * this /* r29 */) {
    // Local variables
    class xEnt * ent; // r26

    // References
    // -> float START_PITCH;
    // -> float START_DISTANCE;
    // -> static class zAnimViewerCamera sAnimViewerCamera;
    // -> static class AnimFrameStepper sAnimFrameStepper;
    // -> class xGlobals * xglobals;
    // -> static class AnimSequence sAnimSequence;
    // -> unsigned int mNeedTweaks;
}
// Range: 0x800C46A0 -> 0x800C4BF8
void zCompLogicAnimViewer::Update(class zCompLogicAnimViewer * this /* r28 */, float dt /* f31 */) {
    // Local variables
    bool transition; // r29
    float stepped_dt; // f0

    // References
    // -> bool mActionPressed;
    // -> unsigned int mAutoAction;
    // -> static class AnimSequence sAnimSequence;
    // -> static class AnimFrameStepper sAnimFrameStepper;
    // -> unsigned int mNeedTweaks;
    // -> bool mIsActive;
    // -> static class zAnimViewerCamera sAnimViewerCamera;
}
