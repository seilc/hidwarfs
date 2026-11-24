/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zPlayerAction.cpp
*/
// signature: zPlayerAction::NewState(xAnimTable *, const char *, unsigned int, unsigned int, float, float *, float *, float, unsigned short *, void (*)(xAnimPlay *, xAnimState *, void *), void (*)(xAnimState *, xAnimSingle *, void *), void (*)(xAnimPlay *, xQuat *, xVec3 *, xVec3 *, int), void *)
// Range: 0x801727F0 -> 0x80172860
class xAnimState * zPlayerAction::NewState(class zPlayerAction * this /* r12 */, void (* beforeEnter)(class xAnimPlay * play, class xAnimState * state, void * object) /* r0 */, void (* stateCallback)(class xAnimState * state, class xAnimSingle * anim, void * object) /* r0 */, void (* beforeAnimMatrices)(class xAnimPlay * play, class xQuat * quat, class xVec3 * scale, class xVec3 * tran, int boneCount) /* r0 */, void * userData /* r11 */) {
}
// signature: zPlayerAction::NewStateMany(xAnimTable *, const char *, int, unsigned int, unsigned int, float, float *, float *, float, unsigned short *, void (*)(xAnimPlay *, xAnimState *, void *), void (*)(xAnimState *, xAnimSingle *, void *), void (*)(xAnimPlay *, xQuat *, xVec3 *, xVec3 *, int), void *)
// Range: 0x80172860 -> 0x801728C4
void zPlayerAction::NewStateMany(unsigned short * fadeOffset /* r1+0x28 */, void (* beforeEnter)(class xAnimPlay * play, class xAnimState * state, void * object) /* r0 */, void (* stateCallback)(class xAnimState * state, class xAnimSingle * anim, void * object) /* r0 */, void (* beforeAnimMatrices)(class xAnimPlay * play, class xQuat * quat, class xVec3 * scale, class xVec3 * tran, int boneCount) /* r0 */, void * userData /* r0 */) {
}
// signature: zPlayerAction::AddActionTransition(xAnimTable *, const char *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int)
// Range: 0x801728D0 -> 0x8017292C
void zPlayerAction::AddActionTransition(unsigned int userFlags /* r12 */) {
}
// signature: zPlayerAction::ActionChange(xAnimTransition *, xAnimSingle *, void *)
// Range: 0x80172930 -> 0x801729E4
unsigned int zPlayerAction::ActionChange() {
    // Local variables
    class zPlayerAction * nextAction; // r30
}
// Range: 0x801729F0 -> 0x80172A58
bool zPlayerAction::IsEnabled(class zPlayerAction * this /* r31 */) {
}
// signature: zPlayerAction::Move(xScene *, float, xEntFrame *)
// Range: 0x80172A60 -> 0x80172A74
void zPlayerAction::Move() {
}
// signature: zPlayerAction::BeginUpdate(float)
// Range: 0x80172A80 -> 0x80172A94
void zPlayerAction::BeginUpdate() {
}
// signature: zPlayerAction::Update(float)
// Range: 0x80172AA0 -> 0x80172AB4
void zPlayerAction::Update() {
}
// signature: zPlayerAction::UpdateFall(float)
// Range: 0x80172AC0 -> 0x80172AD4
void zPlayerAction::UpdateFall() {
}
// signature: zPlayerAction::EndUpdate(float)
// Range: 0x80172AE0 -> 0x80172AF4
void zPlayerAction::EndUpdate() {
}
// signature: zPlayerAction::CollisionResponse(const xVec3 &, const SphereCollisionResults &, xVec3 &)
// Range: 0x80172B00 -> 0x80172B08
bool zPlayerAction::CollisionResponse() {
}
// Range: 0x80172B10 -> 0x80172BC0
void zPlayerActionManager::SetCurrentAction(class zPlayerActionManager * this /* r30 */, class zPlayerAction * newCurrentAction /* r31 */) {
}
// Range: 0x80172BC0 -> 0x80172BE4
unsigned int zPlayerActionManager::GetCurrentActionID() const {
}
// Range: 0x80172BF0 -> 0x80172C68
void zPlayerActionManager::Setup(class zPlayerActionManager * this /* r29 */) {
    {
        // Range: 0x80172C0C -> 0x80172C3C
        // Local variables
        unsigned int i; // r30
    }
}
// Range: 0x80172C70 -> 0x80172D38
void zPlayerActionManager::Reset(class zPlayerActionManager * this /* r29 */) {
    {
        // Range: 0x80172CB4 -> 0x80172CDC
        // Local variables
        unsigned int i; // r30
    }
    {
        // Range: 0x80172CEC -> 0x80172D04
        // Local variables
        unsigned int i; // r6
    }
}
// Range: 0x80172D40 -> 0x80172DB8
void zPlayerActionManager::Exit(class zPlayerActionManager * this /* r29 */) {
    {
        // Range: 0x80172D5C -> 0x80172D8C
        // Local variables
        unsigned int i; // r30
    }
}
// Range: 0x80172DC0 -> 0x80172E40
void zPlayerActionManager::AddStates(class zPlayerActionManager * this /* r28 */, class xAnimTable * table /* r29 */) {
    {
        // Range: 0x80172DD8 -> 0x80172E10
        // Local variables
        unsigned int i; // r30
    }
}
// signature: zPlayerActionManager::AddStandardTransitionsTo(unsigned int, xAnimTable *, const char *)
// Range: 0x80172E40 -> 0x80172E64
void zPlayerActionManager::AddStandardTransitionsTo() {
}
// signature: zPlayerActionManager::AddTransitionsTo(unsigned int, xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80172E70 -> 0x80172ED0
void zPlayerActionManager::AddTransitionsTo(unsigned int actionID /* r11 */, unsigned int userFlags /* r1+0x18 */, enum SpecialActions specialAction /* r0 */) {
}
// signature: zPlayerActionManager::GetAction(unsigned int)
// Range: 0x80172ED0 -> 0x80172EE0
class zPlayerAction * zPlayerActionManager::GetAction() {
}
// signature: zPlayerActionManager::GetAction(unsigned int) const
// Range: 0x80172EE0 -> 0x80172EF0
class zPlayerAction * zPlayerActionManager::GetAction() const {
}
