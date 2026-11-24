/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCompLogicAnimViewer.cpp
*/
unsigned int mNeedTweaks; // size: 0x4, address: 0x807A374C
bool mActionPressed; // size: 0x1, address: 0x8081CCC8
bool mIsActive; // size: 0x1, address: 0x8081CCC9
unsigned int mAutoAction; // size: 0x4, address: 0x8081CCCC
unsigned int mModelNameHash; // size: 0x4, address: 0x8081CCD0
static class zCompLogicAnimViewer * viewer; // size: 0x4, address: 0x8081CCD4
static class AnimFrameStepper sAnimFrameStepper; // size: 0x20, address: 0x8081CCD8
static char * stateNames[26]; // size: 0x68, address: 0x807A3750
class AnimViewerStates sAnimViewerStates; // size: 0x828, address: 0x8081CCF8
static class AnimSequence sAnimSequence; // size: 0xD0, address: 0x8081D520
float MAX_DISTANCE; // size: 0x4, address: 0x8077DF98
float MIN_DISTANCE; // size: 0x4, address: 0x8077DF9C
float START_DISTANCE; // size: 0x4, address: 0x8077DFA0
float START_PITCH; // size: 0x4, address: 0x8077DFA4
float SPEED_PITCH; // size: 0x4, address: 0x8077DFA8
float SPEED_YAW; // size: 0x4, address: 0x8077DFAC
float SPEED_DISTANCE; // size: 0x4, address: 0x8077DFB0
static class zAnimViewerCamera sAnimViewerCamera; // size: 0x158, address: 0x8081D5F0
struct {} __vt__17zAnimViewerCamera; // size: 0x50, address: 0x807AEAC0
struct {} __vt__17zBTConditionFalse; // size: 0x1C, address: 0x807AEB10
struct {} __vt__16zBTConditionTrue; // size: 0x1C, address: 0x807AEB2C
struct {} __vt__19zBTActionAlwaysFail; // size: 0x28, address: 0x807AEB48
struct {} __vt__23zBTActionAlwaysComplete; // size: 0x28, address: 0x807AEB70
static float reduceContactRatioHitee; // size: 0x4, address: 0x8077E2F4
static float reduceContactRatioHitter; // size: 0x4, address: 0x8077E2F8
static float forceStrength; // size: 0x4, address: 0x8077E2FC
// signature: AnimSequence::Init(const char *, AnimViewerStates &)
// Range: 0x80147CB0 -> 0x80147EA4
bool AnimSequence::Init() {
    // Local variables
    unsigned int frames; // r6
    bool inTime; // r7
    int prevAnim; // r8

    {
        // Range: 0x80147CB8 -> 0x80147E64
        // Local variables
        int i; // r9

        {
            // Range: 0x80147CB8 -> 0x80147CB8
            // Local variables
            int index; // r10
        }
    }

    // References
    // -> class __locale _current_locale;
}
// Range: 0x801483F0 -> 0x8014842C
void zAnimViewerCamera::create(class zAnimViewerCamera * this /* r31 */) {
}
// signature: zAnimViewerCamera::update(xScene &, float)
// Range: 0x80157E60 -> 0x80158120
void zAnimViewerCamera::update(class zAnimViewerCamera * this /* r31 */, float dt /* f31 */) {
    // References
    // -> float MIN_DISTANCE;
    // -> float MAX_DISTANCE;
    // -> float SPEED_DISTANCE;
    // -> float SPEED_YAW;
    // -> float SPEED_PITCH;
}
// Range: 0x80147EC0 -> 0x80147ED8
void * zCompLogicAnimViewer::zCompLogicAnimViewer() {
    // References
    // -> struct {} __vt__20zCompLogicAnimViewer;
}
// Range: 0x80147EF0 -> 0x80147EFC
unsigned long long zCompLogicAnimViewer::FindCharacterAssetID() {
    // References
    // -> unsigned int mModelNameHash;
}
// signature: zCompLogicAnimViewer::ReadINI(bool)
// Range: 0x80147F00 -> 0x80147F60
void zCompLogicAnimViewer::ReadINI() {
    // Local variables
    unsigned int * buf; // r31

    // References
    // -> static class AnimSequence sAnimSequence;
    // -> class AnimViewerStates sAnimViewerStates;
}
// Range: 0x80147F60 -> 0x80148040
void zCompLogicAnimViewer::CreateAnimTable(class xAnimTable * table /* r24 */) {
    // References
    // -> class AnimViewerStates sAnimViewerStates;
}
// signature: zCompLogicAnimViewer::Attached(const zNPCStatus *)
// Range: 0x80148040 -> 0x8014804C
void zCompLogicAnimViewer::Attached() {
    // References
    // -> static class zCompLogicAnimViewer * viewer;
}
// signature: zCompLogicAnimViewer::Detached(zNPCStatus *)
// Range: 0x80148050 -> 0x80148060
void zCompLogicAnimViewer::Detached() {
    // References
    // -> static class zCompLogicAnimViewer * viewer;
}
// signature: zCompLogicAnimViewer::Reset(const zNPCStatus *)
// Range: 0x80148060 -> 0x80148064
void zCompLogicAnimViewer::Reset() {
}
// Range: 0x80148070 -> 0x801483F0
void zCompLogicAnimViewer::AllAttached(class zCompLogicAnimViewer * this /* r25 */) {
    // Local variables
    class xEnt * ent; // r26

    // References
    // -> float START_PITCH;
    // -> float START_DISTANCE;
    // -> class xSphere sphere;
    // -> static class zAnimViewerCamera sAnimViewerCamera;
    // -> static class AnimFrameStepper sAnimFrameStepper;
    // -> class Scene * primaryScene;
    // -> class xGlobals * xglobals;
    // -> static class AnimSequence sAnimSequence;
    // -> unsigned int mNeedTweaks;
}
// Range: 0x80148430 -> 0x80148994
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
