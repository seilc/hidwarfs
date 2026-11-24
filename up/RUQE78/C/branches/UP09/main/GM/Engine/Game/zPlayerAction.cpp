/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zPlayerAction.cpp
*/
// Range: 0x80203640 -> 0x80203658
void * zPlayerAction::zPlayerAction() {
    // References
    // -> struct {} __vt__13zPlayerAction;
}
// signature: zPlayerAction::NewState(xAnimTable *, const char *, unsigned int, unsigned int, float, float *, float *, float, unsigned short *, void (*)(xAnimPlay *, xAnimState *, void *), void (*)(xAnimPlay *, xAnimState *, void *), void (*)(xAnimState *, xAnimSingle *, void *), void (*)(xAnimPlay *, xQuat *, xVec3 *, xVec3 *, int), unsigned int)
// Range: 0x80203660 -> 0x802036D8
class xAnimState * zPlayerAction::NewState(class zPlayerAction * this /* r12 */, void (* beforeEnter)(class xAnimPlay * play, class xAnimState * state, void * object) /* r0 */, void (* beforeEnd)(class xAnimPlay * play, class xAnimState * state, void * object) /* r0 */, void (* stateCallback)(class xAnimState * state, class xAnimSingle * anim, void * object) /* r0 */, void (* beforeAnimMatrices)(class xAnimPlay * play, class xQuat * quat, class xVec3 * scale, class xVec3 * tran, int boneCount) /* r0 */, unsigned int userData /* r11 */) {
}
// signature: zPlayerAction::NewStateMany(xAnimTable *, const char *, int, unsigned int, unsigned int, float, float *, float *, float, unsigned short *, void (*)(xAnimPlay *, xAnimState *, void *), void (*)(xAnimPlay *, xAnimState *, void *), void (*)(xAnimState *, xAnimSingle *, void *), void (*)(xAnimPlay *, xQuat *, xVec3 *, xVec3 *, int), unsigned int)
// Range: 0x802036E0 -> 0x8020374C
void zPlayerAction::NewStateMany(unsigned short * fadeOffset /* r1+0x28 */, void (* beforeEnter)(class xAnimPlay * play, class xAnimState * state, void * object) /* r0 */, void (* beforeEnd)(class xAnimPlay * play, class xAnimState * state, void * object) /* r0 */, void (* stateCallback)(class xAnimState * state, class xAnimSingle * anim, void * object) /* r0 */, void (* beforeAnimMatrices)(class xAnimPlay * play, class xQuat * quat, class xVec3 * scale, class xVec3 * tran, int boneCount) /* r0 */, unsigned int userData /* r0 */) {
}
// signature: zPlayerAction::AddActionTransition(xAnimTable *, const char *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int)
// Range: 0x80203750 -> 0x802037AC
void zPlayerAction::AddActionTransition(unsigned int userFlags /* r12 */) {
}
// signature: zPlayerAction::ActionChange(xAnimTransition *, xAnimSingle *, void *)
// Range: 0x802037B0 -> 0x80203864
unsigned int zPlayerAction::ActionChange() {
    // Local variables
    class zPlayerAction * nextAction; // r30
}
// Range: 0x80203870 -> 0x802038D8
bool zPlayerAction::IsEnabled(class zPlayerAction * this /* r31 */) {
}
// signature: zPlayerAction::Move(xScene *, float, xEntFrame *)
// Range: 0x802038E0 -> 0x802038F4
void zPlayerAction::Move() {
}
// signature: zPlayerAction::BeginUpdate(float)
// Range: 0x80203910 -> 0x80203924
void zPlayerAction::BeginUpdate() {
}
// signature: zPlayerAction::UpdateFall(float)
// Range: 0x80203940 -> 0x80203954
void zPlayerAction::UpdateFall() {
}
// signature: zPlayerAction::EndUpdate(float)
// Range: 0x80203960 -> 0x80203974
void zPlayerAction::EndUpdate() {
}
// Range: 0x80203990 -> 0x80203A40
void zPlayerActionManager::SetCurrentAction(class zPlayerActionManager * this /* r30 */, class zPlayerAction * newCurrentAction /* r31 */) {
}
// Range: 0x80203A40 -> 0x80203A64
unsigned int zPlayerActionManager::GetCurrentActionID() const {
}
// Range: 0x80203A70 -> 0x80203B04
void zPlayerActionManager::Init(class zPlayerActionManager * this /* r29 */, unsigned int actionCount /* r30 */) {
    // Local variables
    unsigned int listMemSize; // r31
}
// signature: zPlayerActionManager::Add(zPlayer *, zPlayerAction *)
// Range: 0x80203B10 -> 0x80203B6C
void zPlayerActionManager::Add(class zPlayerActionManager * this /* r30 */, class zPlayerAction * action /* r31 */) {
}
// Range: 0x80203B70 -> 0x80203BF0
void zPlayerActionManager::Setup(class zPlayerActionManager * this /* r29 */) {
    {
        // Range: 0x80203B8C -> 0x80203BBC
        // Local variables
        unsigned int i; // r30
    }
}
// Range: 0x80203BF0 -> 0x80203CC0
void zPlayerActionManager::Reset(class zPlayerActionManager * this /* r29 */) {
    {
        // Range: 0x80203C34 -> 0x80203C5C
        // Local variables
        unsigned int i; // r30
    }
    {
        // Range: 0x80203C6C -> 0x80203C84
        // Local variables
        unsigned int i; // r6
    }
}
// Range: 0x80203CC0 -> 0x80203D40
void zPlayerActionManager::Exit(class zPlayerActionManager * this /* r29 */) {
    {
        // Range: 0x80203CEC -> 0x80203D14
        // Local variables
        unsigned int i; // r30
    }
}
// Range: 0x80203D40 -> 0x80203EB4
void zPlayerActionManager::BeginUpdate(class zPlayerActionManager * this /* r29 */, float dt /* f31 */) {
    {
        // Range: 0x80203D74 -> 0x80203DE8
        // Local variables
        unsigned int i; // r30
    }
    {
        // Range: 0x80203E18 -> 0x80203E74
        // Local variables
        class zInteractionUP * contextInteraction; // r3
        class zCommonPlayer * commonPlayer; // r30
    }
}
// Range: 0x80203EC0 -> 0x80203F40
void zPlayerActionManager::AddStates(class zPlayerActionManager * this /* r28 */, class xAnimTable * table /* r29 */) {
    {
        // Range: 0x80203ED8 -> 0x80203F10
        // Local variables
        unsigned int i; // r30
    }
}
// signature: zPlayerActionManager::AddStandardTransitionsTo(unsigned int, xAnimTable *, const char *)
// Range: 0x80203F40 -> 0x80203F64
void zPlayerActionManager::AddStandardTransitionsTo() {
}
// signature: zPlayerActionManager::AddDefaultTransitionsTo(unsigned int, xAnimTable *, const char *)
// Range: 0x80203F70 -> 0x80203F94
void zPlayerActionManager::AddDefaultTransitionsTo() {
}
// signature: zPlayerActionManager::AddTransitionsTo(unsigned int, xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80203FA0 -> 0x80204000
void zPlayerActionManager::AddTransitionsTo(unsigned int actionID /* r11 */, unsigned int userFlags /* r1+0x18 */, enum SpecialActions specialAction /* r0 */) {
}
// signature: zPlayerActionManager::GetAction(unsigned int)
// Range: 0x80204000 -> 0x80204010
class zPlayerAction * zPlayerActionManager::GetAction() {
}
// signature: zPlayerActionManager::IsEnabled(unsigned int) const
// Range: 0x80204010 -> 0x80204040
bool zPlayerActionManager::IsEnabled() const {
    // Local variables
    unsigned int index; // r0
}
