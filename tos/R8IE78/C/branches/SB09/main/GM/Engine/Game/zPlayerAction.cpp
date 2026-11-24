/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zPlayerAction.cpp
*/
// Range: 0x801191A0 -> 0x801191B8
void * zPlayerAction::zPlayerAction() {
    // References
    // -> struct {} __vt__13zPlayerAction;
}
// signature: zPlayerAction::NewState(xAnimTable *, const char *, unsigned int, unsigned int, float, float *, float *, float, unsigned short *, void (*)(xAnimPlay *, xAnimState *, void *), void (*)(xAnimPlay *, xAnimState *, void *), void (*)(xAnimState *, xAnimSingle *, void *), void (*)(xAnimPlay *, xQuat *, xVec3 *, xVec3 *, int), unsigned int)
// Range: 0x801191C0 -> 0x80119238
class xAnimState * zPlayerAction::NewState(class zPlayerAction * this /* r12 */, void (* beforeEnter)(class xAnimPlay * play, class xAnimState * state, void * object) /* r0 */, void (* beforeEnd)(class xAnimPlay * play, class xAnimState * state, void * object) /* r0 */, void (* stateCallback)(class xAnimState * state, class xAnimSingle * anim, void * object) /* r0 */, void (* beforeAnimMatrices)(class xAnimPlay * play, class xQuat * quat, class xVec3 * scale, class xVec3 * tran, int boneCount) /* r0 */, unsigned int userData /* r11 */) {
}
// signature: zPlayerAction::NewStateMany(xAnimTable *, const char *, int, unsigned int, unsigned int, float, float *, float *, float, unsigned short *, void (*)(xAnimPlay *, xAnimState *, void *), void (*)(xAnimPlay *, xAnimState *, void *), void (*)(xAnimState *, xAnimSingle *, void *), void (*)(xAnimPlay *, xQuat *, xVec3 *, xVec3 *, int), unsigned int)
// Range: 0x80119240 -> 0x801192AC
void zPlayerAction::NewStateMany(unsigned short * fadeOffset /* r1+0x28 */, void (* beforeEnter)(class xAnimPlay * play, class xAnimState * state, void * object) /* r0 */, void (* beforeEnd)(class xAnimPlay * play, class xAnimState * state, void * object) /* r0 */, void (* stateCallback)(class xAnimState * state, class xAnimSingle * anim, void * object) /* r0 */, void (* beforeAnimMatrices)(class xAnimPlay * play, class xQuat * quat, class xVec3 * scale, class xVec3 * tran, int boneCount) /* r0 */, unsigned int userData /* r0 */) {
}
// signature: zPlayerAction::AddActionTransition(xAnimTable *, const char *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int)
// Range: 0x801192B0 -> 0x8011930C
void zPlayerAction::AddActionTransition(unsigned int userFlags /* r12 */) {
}
// signature: zPlayerAction::ActionChange(xAnimTransition *, xAnimSingle *, void *)
// Range: 0x80119310 -> 0x80119340
unsigned int zPlayerAction::ActionChange() {
    // Local variables
    class zPlayerAction * nextAction; // r4
}
// Range: 0x80119340 -> 0x80119388
bool zPlayerAction::IsEnabled(class zPlayerAction * this /* r31 */) {
}
// signature: zPlayerAction::Move(xScene *, float, xEntFrame *)
// Range: 0x80119390 -> 0x801193A4
void zPlayerAction::Move() {
}
// signature: zPlayerAction::BeginUpdate(float)
// Range: 0x801193B0 -> 0x801193C4
void zPlayerAction::BeginUpdate() {
}
// signature: zPlayerAction::UpdateFall(float)
// Range: 0x801193D0 -> 0x801193E4
void zPlayerAction::UpdateFall() {
}
// signature: zPlayerAction::EndUpdate(float)
// Range: 0x801193F0 -> 0x80119404
void zPlayerAction::EndUpdate() {
}
// Range: 0x80119410 -> 0x801194B8
void zPlayerActionManager::SetCurrentAction(class zPlayerActionManager * this /* r30 */, class zPlayerAction * newCurrentAction /* r31 */) {
}
// Range: 0x801194C0 -> 0x801194E4
unsigned int zPlayerActionManager::GetCurrentActionID() const {
}
// Range: 0x801194F0 -> 0x80119574
void zPlayerActionManager::Init(class zPlayerActionManager * this /* r29 */, unsigned int actionCount /* r30 */) {
    // Local variables
    unsigned int listMemSize; // r31
}
// signature: zPlayerActionManager::Add(zPlayer *, zPlayerAction *)
// Range: 0x80119580 -> 0x801195D4
void zPlayerActionManager::Add(class zPlayerActionManager * this /* r30 */, class zPlayerAction * action /* r31 */) {
}
// Range: 0x801195E0 -> 0x8011964C
void zPlayerActionManager::Setup(class zPlayerActionManager * this /* r29 */) {
    {
        // Range: 0x801195F8 -> 0x80119630
        // Local variables
        unsigned int i; // r30
    }
}
// Range: 0x80119650 -> 0x8011970C
void zPlayerActionManager::Reset(class zPlayerActionManager * this /* r29 */) {
    {
        // Range: 0x8011968C -> 0x801196C4
        // Local variables
        unsigned int i; // r30
    }
    {
        // Range: 0x801196C4 -> 0x801196F0
        // Local variables
        unsigned int i; // r6
    }
}
// Range: 0x80119710 -> 0x8011977C
void zPlayerActionManager::Exit(class zPlayerActionManager * this /* r29 */) {
    {
        // Range: 0x80119734 -> 0x80119768
        // Local variables
        unsigned int i; // r30
    }
}
// Range: 0x80119780 -> 0x801198E4
void zPlayerActionManager::BeginUpdate(class zPlayerActionManager * this /* r29 */, float dt /* f31 */) {
    {
        // Range: 0x801197AC -> 0x80119830
        // Local variables
        unsigned int i; // r30
    }
    {
        // Range: 0x80119850 -> 0x801198AC
        // Local variables
        class zInteractionUP * contextInteraction; // r3
        class zCommonPlayer * commonPlayer; // r30
    }
}
// signature: zPlayerActionManager::Update(float)
// Range: 0x801198F0 -> 0x80119944
void zPlayerActionManager::Update(class zPlayerActionManager * this /* r31 */) {
}
// Range: 0x80119950 -> 0x801199B8
void zPlayerActionManager::AddStates(class zPlayerActionManager * this /* r28 */, class xAnimTable * table /* r29 */) {
    {
        // Range: 0x80119968 -> 0x801199A4
        // Local variables
        unsigned int i; // r30
    }
}
// Range: 0x801199C0 -> 0x80119A44
void zPlayerActionManager::AddTransitions(class zPlayerActionManager * this /* r28 */, class xAnimTable * table /* r29 */) {
    {
        // Range: 0x801199D8 -> 0x80119A30
        // Local variables
        unsigned int i; // r30
    }
}
// signature: zPlayerActionManager::AddStandardTransitionsTo(unsigned int, xAnimTable *, const char *)
// Range: 0x80119A50 -> 0x80119A74
void zPlayerActionManager::AddStandardTransitionsTo() {
}
// signature: zPlayerActionManager::AddDefaultTransitionsTo(unsigned int, xAnimTable *, const char *)
// Range: 0x80119A80 -> 0x80119AA4
void zPlayerActionManager::AddDefaultTransitionsTo() {
}
// signature: zPlayerActionManager::AddTransitionsTo(unsigned int, xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80119AB0 -> 0x80119B10
void zPlayerActionManager::AddTransitionsTo(unsigned int actionID /* r11 */, unsigned int userFlags /* r1+0x18 */, enum SpecialActions specialAction /* r0 */) {
}
// signature: zPlayerActionManager::IsEnabled(unsigned int) const
// Range: 0x80119B10 -> 0x80119B3C
bool zPlayerActionManager::IsEnabled() const {
    // Local variables
    unsigned int index; // r0
}
