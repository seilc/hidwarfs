/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zInteraction.cpp
*/
static class InteractionInfo gInteractionInfo[35]; // size: 0x230, address: 0x807AF230
// Range: 0x80183910 -> 0x80183920
class xOGModel * zInteractionUP::GetAttachModel() {
}
// Range: 0x80183920 -> 0x8018397C
class xMat4x3 * zInteractionUP::GetAttachMat(class zInteractionUP * this /* r31 */) {
}
// signature: zInteractionUP::Init(void *)
// Range: 0x801839B0 -> 0x801839E8
void zInteractionUP::Init(class zInteractionUP * this /* r31 */) {
}
// Range: 0x801839F0 -> 0x80183A08
void zInteractionUP::Reset() {
}
// signature: zInteractionUP::Start(zCommonPlayer *)
// Range: 0x80183A10 -> 0x80183A18
void zInteractionUP::Start() {
}
// signature: zInteractionUP::Stop(zCommonPlayer *)
// Range: 0x80183A20 -> 0x80183A2C
void zInteractionUP::Stop() {
}
// signature: zInteractionUP::CanStart(zCommonPlayer *)
// Range: 0x80183A30 -> 0x80183A7C
bool zInteractionUP::CanStart() {
}
// signature: zInteractionUP::DefaultMoveToInteraction(zCommonPlayer *, float, bool)
// Range: 0x80183A80 -> 0x80183DB4
bool zInteractionUP::DefaultMoveToInteraction(class zInteractionUP * this /* r28 */, class zCommonPlayer * player /* r29 */, float dt /* f30 */) {
    // Local variables
    float movedist; // f31
    class xVec3 pos; // r1+0x60
    class xVec3 dir; // r1+0x54
    class xVec3 playerPos; // r1+0x48
    bool rotDone; // r0
    bool tranDone; // r30
    class xVec3 disp; // r1+0x3C
    float len; // f0
    class zUPPlayer * upPlayer; // r0

    {
        // Range: 0x80183CD8 -> 0x80183D68
        // Local variables
        class hkpRigidBody * rootRagdollBody; // r28
    }
}
// signature: zInteractionUP::MoveToInteraction(zCommonPlayer *, float)
// Range: 0x80183DC0 -> 0x80183DC8
bool zInteractionUP::MoveToInteraction() {
}
// signature: zInteractionUP::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80183DF0 -> 0x80183E40
void zInteractionUP::HandleEvent() {
}
// signature: zInteractionUP::SetVisible(bool)
// Range: 0x80183E40 -> 0x80184E78
void zInteractionUP::SetVisible(class zInteractionUP * this /* r27 */) {
    // References
    // -> class Scene * primaryScene;
    // -> float dt;
    // -> class Renderable3DTransform g_identity;
}
// signature: zInteractionUPWithIcons::Start(zCommonPlayer *)
// Range: 0x80184E80 -> 0x80184E90
void zInteractionUPWithIcons::Start() {
}
// signature: zInteractionUPWithIcons::Stop(zCommonPlayer *)
// Range: 0x80184E90 -> 0x80184EA4
void zInteractionUPWithIcons::Stop() {
}
// signature: zInteractionUPWithIcons::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80184EB0 -> 0x80184F64
void zInteractionUPWithIcons::HandleEvent(class zInteractionUPWithIcons * this /* r30 */, unsigned int toEvent /* r31 */) {
}
// Range: 0x80184F70 -> 0x80184F80
void zInteractionUPWithIcons::SetupIcons() {
}
// signature: zInteractionUPWithIcons::UpdateIcons(float)
// Range: 0x80184F80 -> 0x80184FAC
void zInteractionUPWithIcons::UpdateIcons() {
}
// Range: 0x80184FB0 -> 0x80184FD8
void zInteractionUPWithIcons::ResetIcons() {
}
// Range: 0x80184FE0 -> 0x801850E0
void zInteractionManager::ContextCollect(class zInteractionManager * this /* r30 */) {
    {
        // Range: 0x80184FF8 -> 0x801850B0
        // Local variables
        unsigned int i; // r31
    }

    // References
    // -> class zGlobals globals;
    // -> static class InteractionInfo gInteractionInfo[35];
}
// Range: 0x801850E0 -> 0x80185160
void zInteractionManager::SetCurrent(class zInteractionManager * this /* r30 */, class zInteractionUP * nextInteraction /* r31 */) {
}
// Range: 0x80185160 -> 0x80185170
void zInteractionManager::Reset() {
}
// signature: zInteractionManager::Update(float)
// Range: 0x80185170 -> 0x801851F4
void zInteractionManager::Update(class zInteractionManager * this /* r31 */) {
}
// signature: zInteractionManager::Move(float)
// Range: 0x80185200 -> 0x8018525C
void zInteractionManager::Move(class zInteractionManager * this /* r31 */) {
}
// Range: 0x80185260 -> 0x801852B8
void zInteractionManager::StopCurrentInteraction(class zInteractionManager * this /* r31 */) {
}
// Range: 0x801852C0 -> 0x801852E4
unsigned int zInteractionManager::GetCurrentInteractionType() {
}
// signature: zInteractionBeforeEnter(xAnimPlay *, xAnimState *, void *)
// Range: 0x801852F0 -> 0x80185364
void zInteractionBeforeEnter(class xAnimState * state /* r30 */, void * object /* r31 */) {
    // Local variables
    class zCommonPlayer * player; // r0
    class zAnimPackage * ap; // r0
}
