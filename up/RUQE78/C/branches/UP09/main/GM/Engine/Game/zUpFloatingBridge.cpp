/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zUpFloatingBridge.cpp
*/
static class xAnimTable * animFloatingBridgeTables; // size: 0x4, address: 0x8081ABAC
// Range: 0x800F7C40 -> 0x800F7EE8
void zUpFloatingBridge_BalloonAdapter::Notify_BalloonPopped(class zUpFloatingBridge_BalloonAdapter * this /* r30 */) {
    // References
    // -> class zBalloonGenerator * pInstance;
}
// Range: 0x800F7EF0 -> 0x800F8210
void zUpFloatingBridge::TimeStep(class zUpFloatingBridge * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x800F8220 -> 0x800F8398
void zUpFloatingBridge::Setup(class zUpFloatingBridge * this /* r31 */) {
    // Local variables
    class hkpRigidBodyCinfo cinfo; // r1+0x10
    class xAnimTable * table; // r5

    // References
    // -> class zGlobals globals;
    // -> static class xAnimTable * animFloatingBridgeTables;
}
// Range: 0x800F83A0 -> 0x800F84F0
void zUpFloatingBridge::SetupIcons(class zUpFloatingBridge * this /* r27 */) {
    // Local variables
    class xVec3 iconArrowPos; // r1+0x2C
    class xVec3 iconCarlPos; // r1+0x20
}
// Range: 0x800F84F0 -> 0x800F8558
void zUpFloatingBridge::UpdateIcons(class zUpFloatingBridge * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x800F8560 -> 0x800F8594
void zUpFloatingBridge::ResetIcons(class zUpFloatingBridge * this /* r31 */) {
}
// signature: zUpFloatingBridge::State_Collapsed::Update(float, zUpFloatingBridge *)
// Range: 0x800F85C0 -> 0x800F8708
void zUpFloatingBridge::State_Collapsed::Update(class zUpFloatingBridge * bridge /* r27 */) {
    // References
    // -> struct {} __vt__Q217zUpFloatingBridge11State_Risen;
}
// signature: zUpFloatingBridge::State_Risen::Update(float, zUpFloatingBridge *)
// Range: 0x800F8710 -> 0x800F8858
void zUpFloatingBridge::State_Risen::Update(class zUpFloatingBridge * bridge /* r27 */) {
    // References
    // -> struct {} __vt__Q217zUpFloatingBridge15State_Collapsed;
}
// Range: 0x800F8860 -> 0x800F8934
bool zUpFloatingBridge::CanStart(class zUpFloatingBridge * this /* r30 */, class zCommonPlayer * player /* r31 */) {
    // Local variables
    class hkVector4 pos; // r1+0x10
    float dx; // f4
    float dy; // f2
    float dz; // f5
}
// Range: 0x800F8940 -> 0x800F8A40
void zUpFloatingBridge::ContextCheckForActivity(class zUpFloatingBridge * this /* r29 */, class zCommonPlayer * player /* r31 */) {
    {
        // Range: 0x800F8960 -> 0x800F89E8
        // Local variables
        class zUpContextAction * ca; // r0
    }
}
// Range: 0x800F8A50 -> 0x800F8BFC
class Entity * Sext::zUpFloatingBridgeAsset::Create(class EntityHandleBase * handle /* r29 */, class zUpFloatingBridgeAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__Q217zUpFloatingBridge15State_Collapsed;
    // -> struct {} __vt__32zUpFloatingBridge_BalloonAdapter;
    // -> struct {} __vt__17zUpFloatingBridge;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x800F8C00 -> 0x800F8F0C
void zUpFloatingBridge::Init(class zUpFloatingBridge * this /* r27 */, void * inAsset /* r28 */) {
    // Local variables
    class zUpFloatingBridgeAsset * typAsset; // r0

    // References
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
}
// Range: 0x800F8F10 -> 0x800F9224
void zUpFloatingBridge::Reset(class zUpFloatingBridge * this /* r30 */) {
    // References
    // -> class zBalloonGenerator * pInstance;
}
// Range: 0x800F9230 -> 0x800F92F4
void * zUpFloatingBridge::~zUpFloatingBridge(class zUpFloatingBridge * this /* r30 */) {
    // References
    // -> struct {} __vt__17zUpFloatingBridge;
}
// signature: zUpFloatingBridge::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800F9300 -> 0x800F9380
void zUpFloatingBridge::HandleEvent(class zUpFloatingBridge * this /* r30 */, unsigned int toEvent /* r31 */) {
}
// Range: 0x800F9380 -> 0x800F9388
class xVec3 * zUpFloatingBridge::GetSoundPosition() const {
}
// signature: zUpFloatingBridge::RemoveAnimTable(unsigned long long)
// Range: 0x800F9390 -> 0x800F9444
void zUpFloatingBridge::RemoveAnimTable() {
    // Local variables
    class xAnimTable * table; // r31
    class xAnimTable * prev; // r30

    // References
    // -> static class xAnimTable * animFloatingBridgeTables;
}
// Range: 0x800F9450 -> 0x800F973C
class xAnimTable * zUpFloatingBridge::CreateAnimTable(unsigned long long animSetID /* r28:r27 */) {
    // Local variables
    class xAnimTable * table; // r26

    // References
    // -> static class xAnimTable * animFloatingBridgeTables;
}
