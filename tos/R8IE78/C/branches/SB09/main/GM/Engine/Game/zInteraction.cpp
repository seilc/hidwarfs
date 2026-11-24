/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zInteraction.cpp
*/
static class InteractionInfo gInteractionInfo[3]; // size: 0x30, address: 0x806BD800
// signature: @unnamed@WAD02_cpp@::InteractionEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800CD470 -> 0x800CD48C
static void @unnamed@WAD02_cpp@::InteractionEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x800CD490 -> 0x800CD4F0
class xMat4x3 * zInteractionUP::GetAttachMat(class zInteractionUP * this /* r31 */) {
}
// signature: zInteractionUP::Init(void *)
// Range: 0x800CD4F0 -> 0x800CD528
void zInteractionUP::Init(class zInteractionUP * this /* r31 */) {
}
// Range: 0x800CD530 -> 0x800CD548
void zInteractionUP::Reset() {
}
// signature: zInteractionUP::Start(zCommonPlayer *)
// Range: 0x800CD550 -> 0x800CD558
void zInteractionUP::Start() {
}
// signature: zInteractionUP::Stop(zCommonPlayer *)
// Range: 0x800CD560 -> 0x800CD56C
void zInteractionUP::Stop() {
}
// signature: zInteractionUP::CanStart(zCommonPlayer *)
// Range: 0x800CD570 -> 0x800CD5BC
bool zInteractionUP::CanStart() {
}
// signature: zInteractionUP::DefaultMoveToInteraction(zCommonPlayer *, float, bool)
// Range: 0x800CD5C0 -> 0x800CD730
bool zInteractionUP::DefaultMoveToInteraction(class zInteractionUP * this /* r30 */, class zCommonPlayer * player /* r29 */, float dt /* f30 */) {
    // Local variables
    float movedist; // f31
    class xVec3 pos; // r1+0x38
    class xVec3 dir; // r1+0x2C
    class xVec3 playerPos; // r1+0x20
    bool rotDone; // r0
    bool tranDone; // r30
    class xVec3 disp; // r1+0x14
    float len; // f0
}
// signature: zInteractionUP::MoveToInteraction(zCommonPlayer *, float)
// Range: 0x800CD730 -> 0x800CD738
bool zInteractionUP::MoveToInteraction() {
}
// signature: zInteractionUP::GetStartPosition(zCommonPlayer *, xVec3 &)
// Range: 0x800CD740 -> 0x800CD750
void zInteractionUP::GetStartPosition() {
}
// signature: zInteractionUP::GetStartDirection(zCommonPlayer *, xVec3 &)
// Range: 0x800CD750 -> 0x800CD760
void zInteractionUP::GetStartDirection() {
}
// signature: zInteractionUP::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800CD760 -> 0x800CD7B0
void zInteractionUP::HandleEvent() {
}
// signature: zInteractionUP::SetVisible(bool)
// Range: 0x800CD7B0 -> 0x800CD830
void zInteractionUP::SetVisible(class zInteractionUP * this /* r31 */) {
}
// signature: zInteractionUPWithIcons::Start(zCommonPlayer *)
// Range: 0x800CD830 -> 0x800CD840
void zInteractionUPWithIcons::Start() {
}
// signature: zInteractionUPWithIcons::Stop(zCommonPlayer *)
// Range: 0x800CD840 -> 0x800CD854
void zInteractionUPWithIcons::Stop() {
}
// signature: zInteractionUPWithIcons::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800CD860 -> 0x800CD8C0
void zInteractionUPWithIcons::HandleEvent(class zInteractionUPWithIcons * this /* r30 */, unsigned int toEvent /* r31 */) {
}
// Range: 0x800CD8C0 -> 0x800CD8D0
void zInteractionUPWithIcons::SetupIcons() {
}
// signature: zInteractionUPWithIcons::UpdateIcons(float)
// Range: 0x800CD8D0 -> 0x800CD8FC
void zInteractionUPWithIcons::UpdateIcons() {
}
// Range: 0x800CD900 -> 0x800CD93C
void zInteractionUPWithIcons::ResetIcons(class zInteractionUPWithIcons * this /* r31 */) {
}
// Range: 0x800CD940 -> 0x800CDA44
void zInteractionManager::ContextCollect(class zInteractionManager * this /* r30 */) {
    {
        // Range: 0x800CD950 -> 0x800CDA28
        // Local variables
        unsigned int i; // r31
    }

    // References
    // -> static class InteractionInfo gInteractionInfo[3];
    // -> class zGlobals globals;
}
// Range: 0x800CDA50 -> 0x800CDAC8
void zInteractionManager::SetCurrent(class zInteractionManager * this /* r30 */, class zInteractionUP * nextInteraction /* r31 */) {
}
// Range: 0x800CDAE0 -> 0x800CDAF0
void zInteractionManager::Reset() {
}
// signature: zInteractionManager::Update(float)
// Range: 0x800CDAF0 -> 0x800CDB74
void zInteractionManager::Update(class zInteractionManager * this /* r31 */) {
}
// signature: zInteractionManager::Move(float)
// Range: 0x800CDB80 -> 0x800CDBDC
void zInteractionManager::Move(class zInteractionManager * this /* r31 */) {
}
// Range: 0x800CDBE0 -> 0x800CDC38
void zInteractionManager::StopCurrentInteraction(class zInteractionManager * this /* r31 */) {
}
// Range: 0x800CDC40 -> 0x800CDC64
unsigned int zInteractionManager::GetCurrentInteractionType() {
}
