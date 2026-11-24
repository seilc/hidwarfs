/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zHouseBalloonBounce.cpp
*/
class xAnimTable * animTables; // size: 0x4, address: 0x8081FA98
// Range: 0x8017A100 -> 0x8017A408
void zHouseBalloonBounce::Init(class zHouseBalloonBounce * this /* r27 */, void * inAsset /* r25 */) {
    // References
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
}
// Range: 0x8017A410 -> 0x8017A6A8
void zHouseBalloonBounce::Setup(class zHouseBalloonBounce * this /* r30 */) {
    // Local variables
    class xAnimTable * table; // r31

    // References
    // -> class zGlobals globals;
    // -> class Scene * primaryScene;
    // -> class xAnimTable * animTables;
    // -> class xMat4x3 g_I3;
}
// Range: 0x8017A6B0 -> 0x8017A8F0
void zHouseBalloonBounce::SetupIcons(class zHouseBalloonBounce * this /* r31 */) {
    // Local variables
    class xVec3 iconPos; // r1+0x8
}
// Range: 0x8017A8F0 -> 0x8017A9A4
void zHouseBalloonBounce::Reset(class zHouseBalloonBounce * this /* r31 */) {
    {
        // Range: 0x8017A914 -> 0x8017A91C
        // Local variables
        int x; // r7
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zHouseBalloonBounce::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8017A9B0 -> 0x8017AC98
void zHouseBalloonBounce::HandleEvent(class zHouseBalloonBounce * this /* r30 */, unsigned int toEvent /* r31 */, class EventAny * params /* r29 */) {
    {
        // Range: 0x8017AB0C -> 0x8017ABC4
        // Local variables
        class xOGEntity * possibleDriver; // r4
        unsigned int flags; // r27
        class EventActionDrivenBy * paramst; // r0
    }
}
// Range: 0x8017ACA0 -> 0x8017AD7C
class Entity * Sext::zHouseBalloonBounceAsset::Create(class EntityHandleBase * handle /* r29 */, class zHouseBalloonBounceAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__19zHouseBalloonBounce;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zHouseBalloonBounce::Start(zCommonPlayer *)
// Range: 0x8017AD80 -> 0x8017ADA4
void zHouseBalloonBounce::Start() {
}
// Range: 0x8017ADB0 -> 0x8017AE28
void zHouseBalloonBounce::TimeStep(class zHouseBalloonBounce * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x8017AE30 -> 0x8017AFF0
void zHouseBalloonBounce::ContextCheckForPresence(class zHouseBalloonBounce * this /* r29 */, class zCommonPlayer * player /* r30 */) {
    // Local variables
    unsigned int playerAction; // r0

    {
        // Range: 0x8017AF18 -> 0x8017AFD4
        // Local variables
        class zUpContextAction * ca; // r0
    }
}
// signature: zHouseBalloonBounce::GetAnimPackage(ePlayerName)
// Range: 0x8017B000 -> 0x8017B03C
class zAnimPackage * zHouseBalloonBounce::GetAnimPackage() {
}
// Range: 0x8017B040 -> 0x8017B250
class xAnimTable * zHouseBalloonBounce::CreateAnimTable(unsigned long long animSetID /* r28:r27 */) {
    // Local variables
    class xAnimTable * table; // r26

    // References
    // -> class xAnimTable * animTables;
}
// signature: zHouseBalloonBounce::RemoveAnimTable(unsigned long long)
// Range: 0x8017B280 -> 0x8017B334
void zHouseBalloonBounce::RemoveAnimTable() {
    // Local variables
    class xAnimTable * table; // r31
    class xAnimTable * prev; // r30

    // References
    // -> class xAnimTable * animTables;
}
// Range: 0x8017B340 -> 0x8017B844
void zHouseBalloonBounce::DriveAttach(class zHouseBalloonBounce * this /* r29 */, class xOGEntity * passenger /* r30 */, unsigned int flags /* r31 */) {
    // Local variables
    class xMat4x3 D; // r1+0x48
    class xVec3 euler; // r1+0x8
    class xMat3x3 a_descaled; // r1+0x18
}
// Range: 0x8017B850 -> 0x8017B858
class xMat4x3 * zHouseBalloonBounce::DriveGetCurMat() {
}
// signature: zHouseBalloonBounce::DriveCauseMove(xMat4x3 *, xMat4x3 *, xMat4x3 *, xMat4x3 *, bool, bool, float, float)
// Range: 0x8017B860 -> 0x8017B8B8
void zHouseBalloonBounce::DriveCauseMove(class zHouseBalloonBounce * this /* r30 */, class xMat4x3 * parent /* r0 */, class xMat4x3 * oldMat /* r31 */) {
    // Local variables
    class xMat4x3 baseMat; // r1+0x8
}
