/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zCompLogicAnimViewer.cpp
*/
unsigned int mNeedTweaks; // size: 0x4, address: 0x806B5298
bool mActionPressed; // size: 0x1, address: 0x807332B4
bool mIsActive; // size: 0x1, address: 0x807332B5
unsigned int mAutoAction; // size: 0x4, address: 0x807332B8
unsigned int mModelNameHash; // size: 0x4, address: 0x807332BC
static class zCompLogicAnimViewer * viewer; // size: 0x4, address: 0x807332C0
static class AnimFrameStepper sAnimFrameStepper; // size: 0x20, address: 0x807332C8
char * stateNames[26]; // size: 0x68, address: 0x806B52A0
class AnimViewerStates sAnimViewerStates; // size: 0x828, address: 0x807332E8
static class AnimSequence sAnimSequence; // size: 0xD0, address: 0x80733B10
float MAX_DISTANCE; // size: 0x4, address: 0x806899F8
float MIN_DISTANCE; // size: 0x4, address: 0x806899FC
float START_DISTANCE; // size: 0x4, address: 0x80689A00
float START_PITCH; // size: 0x4, address: 0x80689A04
float SPEED_PITCH; // size: 0x4, address: 0x80689A08
float SPEED_YAW; // size: 0x4, address: 0x80689A0C
float SPEED_DISTANCE; // size: 0x4, address: 0x80689A10
static class zAnimViewerCamera sAnimViewerCamera; // size: 0x158, address: 0x80733BE0
struct {} __vt__17zAnimViewerCamera; // size: 0x50, address: 0x806BD0F8
struct {} __vt__17zBTConditionFalse; // size: 0x1C, address: 0x806BD148
struct {} __vt__16zBTConditionTrue; // size: 0x1C, address: 0x806BD164
struct {} __vt__19zBTActionAlwaysFail; // size: 0x28, address: 0x806BD180
struct {} __vt__23zBTActionAlwaysComplete; // size: 0x28, address: 0x806BD1A8
struct {} __vt__14RubberCylinder; // size: 0x10, address: 0x806BD1D0
// signature: AnimFrameStepper::CalcFrame(const xAnimSingle *)
// Range: 0x800A9FC0 -> 0x800AA008
unsigned int AnimFrameStepper::CalcFrame() {
    // Local variables
    float frame; // f1
}
// Range: 0x800A9890 -> 0x800A992C
void * AnimViewerStates::AnimViewerStates(class AnimViewerStates * this /* r23 */) {
    {
        // Range: 0x800A98A4 -> 0x800A9914
        // Local variables
        int i; // r24
    }

    // References
    // -> char * stateNames[26];
}
// Range: 0x800A9930 -> 0x800A9A08
void AnimViewerStates::CreateAnimTable(class AnimViewerStates * this /* r24 */, class xAnimTable * table /* r25 */) {
    {
        // Range: 0x800A9944 -> 0x800A99F0
        // Local variables
        int i; // r26
    }
}
// Range: 0x800AA450 -> 0x800AA48C
int AnimSequence::NextIndex() {
}
// Range: 0x800A9A10 -> 0x800A9BA8
bool AnimSequence::Init(class AnimSequence * this /* r24 */, char * seqString /* r25 */, class AnimViewerStates & animStates /* r26 */) {
    // Local variables
    unsigned int frames; // r30
    bool inTime; // r29
    int prevAnim; // r28

    {
        // Range: 0x800A9A38 -> 0x800A9B7C
        // Local variables
        int i; // r27

        {
            // Range: 0x800A9A3C -> 0x800A9B10
            // Local variables
            int index; // r0
        }
    }
}
// Range: 0x800A9BB0 -> 0x800A9C38
class xAnimTransition * AnimSequence::Step::GetTransition(class Step * this /* r31 */) const {
    // Local variables
    class xAnimTransition * trans; // r0
}
// Range: 0x800AA010 -> 0x800AA04C
void zAnimViewerCamera::create(class zAnimViewerCamera * this /* r31 */) {
}
// signature: zAnimViewerCamera::update(xScene &, float)
// Range: 0x800AED60 -> 0x800AEFBC
void zAnimViewerCamera::update(class zAnimViewerCamera * this /* r31 */, float dt /* f31 */) {
    // References
    // -> float MIN_DISTANCE;
    // -> float MAX_DISTANCE;
    // -> float SPEED_DISTANCE;
    // -> float SPEED_YAW;
    // -> float SPEED_PITCH;
}
// Range: 0x800A9C40 -> 0x800A9C58
void * zCompLogicAnimViewer::zCompLogicAnimViewer() {
    // References
    // -> struct {} __vt__20zCompLogicAnimViewer;
}
// Range: 0x800A9C60 -> 0x800A9C6C
unsigned long long zCompLogicAnimViewer::FindCharacterAssetID() {
    // References
    // -> unsigned int mModelNameHash;
}
// signature: zCompLogicAnimViewer::ReadINI(bool)
// Range: 0x800A9C70 -> 0x800A9CD0
void zCompLogicAnimViewer::ReadINI() {
    // Local variables
    unsigned int * buf; // r31

    // References
    // -> static class AnimSequence sAnimSequence;
    // -> class AnimViewerStates sAnimViewerStates;
}
// Range: 0x800A9CD0 -> 0x800A9D10
void zCompLogicAnimViewer::CreateAnimTable(class xAnimTable * table /* r31 */) {
    // References
    // -> class AnimViewerStates sAnimViewerStates;
}
// signature: zCompLogicAnimViewer::Attached(const zNPCStatus *)
// Range: 0x800A9D10 -> 0x800A9D1C
void zCompLogicAnimViewer::Attached() {
    // References
    // -> static class zCompLogicAnimViewer * viewer;
}
// signature: zCompLogicAnimViewer::Detached(zNPCStatus *)
// Range: 0x800A9D20 -> 0x800A9D30
void zCompLogicAnimViewer::Detached() {
    // References
    // -> static class zCompLogicAnimViewer * viewer;
}
// signature: zCompLogicAnimViewer::SetAutoActionIteration(int)
// Range: 0x800A9D30 -> 0x800A9D90
void zCompLogicAnimViewer::SetAutoActionIteration() {
}
// Range: 0x800A9D90 -> 0x800A9E20
void zCompLogicAnimViewer::SetAnimationState(class zCompLogicAnimViewer * this /* r29 */) {
    // References
    // -> static class AnimSequence sAnimSequence;
}
// Range: 0x800A9E20 -> 0x800A9FBC
void zCompLogicAnimViewer::AllAttached(class zCompLogicAnimViewer * this /* r27 */) {
    // Local variables
    class xEnt * ent; // r27

    // References
    // -> float START_PITCH;
    // -> float START_DISTANCE;
    // -> static class zAnimViewerCamera sAnimViewerCamera;
    // -> static class AnimFrameStepper sAnimFrameStepper;
    // -> class xGlobals * xglobals;
    // -> static class AnimSequence sAnimSequence;
    // -> unsigned int mNeedTweaks;
}
// Range: 0x800AA050 -> 0x800AA448
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
