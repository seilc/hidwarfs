/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zDugPlayerActions.cpp
*/
// Range: 0x8014F4F0 -> 0x8014F57C
void zDugPlayerIdle::AddStates(class zDugPlayerIdle * this /* r30 */, class xAnimTable * table /* r31 */) {
}
// Range: 0x8014F580 -> 0x8014F668
void zDugPlayerIdle::AddActionTransitions(class zDugPlayerIdle * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// Range: 0x8014F670 -> 0x8014F738
void zDugPlayerIdle::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x8014F770 -> 0x8014F838
void zDugPlayerIdle::Move(class zDugPlayerIdle * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
}
// Range: 0x8014F840 -> 0x8014F9E0
void zDugPlayerIdle::Begin(class zDugPlayerIdle * this /* r31 */) {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8014F9E0 -> 0x8014FAC8
void zDugPlayerWalk::AddActionTransitions(class zDugPlayerWalk * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// Range: 0x8014FAD0 -> 0x8014FBB8
void zDugPlayerRun::AddActionTransitions(class zDugPlayerRun * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// Range: 0x8014FBC0 -> 0x8014FCB0
void zDugPlayerMelee::AddAttacks(class zCombatAttack * attackStates /* r20 */) {
    // Local variables
    class zCombatAttack * attack; // r0
}
// signature: zDugPlayerJump::AddActionTransitions(xAnimTable *)
// Range: 0x8014FCB0 -> 0x8014FCB4
void zDugPlayerJump::AddActionTransitions() {
}
// signature: zDugPlayerFall::AddActionTransitions(xAnimTable *)
// Range: 0x8014FCC0 -> 0x8014FCC4
void zDugPlayerFall::AddActionTransitions() {
}
// Range: 0x8014FCD0 -> 0x8014FD20
void zDugPlayerLand::AddActionTransitions(class zDugPlayerLand * this /* r30 */, class xAnimTable * table /* r31 */) {
}
// Range: 0x8014FD20 -> 0x8014FD70
void zDugPlayerPlant::AddActionTransitions(class zDugPlayerPlant * this /* r30 */, class xAnimTable * table /* r31 */) {
}
// Range: 0x8014FD70 -> 0x8014FDC4
void zDugFainted::AddActionTransitions(class zDugFainted * this /* r30 */, class xAnimTable * table /* r31 */) {
}
// Range: 0x8014FDD0 -> 0x8014FDD4
void zDugPlayerLedge::Setup() {
}
// Range: 0x8014FDF0 -> 0x8015007C
void zDugPlayerCrawl::AddStates(class zDugPlayerCrawl * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// signature: zDugPlayerCrawl::AddActionTransitions(xAnimTable *)
// Range: 0x80150080 -> 0x801500D8
void zDugPlayerCrawl::AddActionTransitions() {
}
// Range: 0x801500E0 -> 0x801504F8
void zDugPlayerCrawl::AddInternalTransitions(class xAnimTable * table /* r22 */) {
}
// Range: 0x80150C00 -> 0x80150C78
void zDugPlayerCrawl::Begin(class zDugPlayerCrawl * this /* r31 */) {
}
// signature: zCrawlBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x80150C80 -> 0x80150D08
void zCrawlBE(class xAnimState * state /* r30 */, void * object /* r31 */) {
    // Local variables
    class zUPPlayer * player; // r0
    class zAnimPackage * currentPackage; // r0
}
// Range: 0x80150D10 -> 0x80150E1C
void zDugPlayerCrawl::End(class zDugPlayerCrawl * this /* r30 */) {
}
// signature: zDugPlayerCrawl::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80150E20 -> 0x80150E90
void zDugPlayerCrawl::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// signature: zDugPlayerCrawl::Move(xScene *, float, xEntFrame *)
// Range: 0x80150F20 -> 0x80151148
void zDugPlayerCrawl::Move(class zDugPlayerCrawl * this /* r30 */, float dt /* f30 */) {
    // Local variables
    class xVec2 dir; // r1+0x8
}
// signature: zSniffBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x80151150 -> 0x80151230
void zSniffBE(class xAnimState * state /* r29 */) {
    // Local variables
    class zDugPlayer * player; // r31
    class zAnimPackage * currentPackage; // r30
}
// signature: zDigBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x80151230 -> 0x801512AC
void zDigBE(class xAnimState * state /* r30 */, void * object /* r31 */) {
    // Local variables
    class zDugPlayer * player; // r0
    class zAnimPackage * currentPackage; // r0
}
// Range: 0x801512B0 -> 0x80151544
void zDugPlayerSniff::AddStates(class zDugPlayerSniff * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80151550 -> 0x80151654
void zDugPlayerSniff::AddActionTransitions(class zDugPlayerSniff * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x80151660 -> 0x80151994
void zDugPlayerSniff::AddInternalTransitions(class xAnimTable * table /* r25 */) {
}
// signature: zDugPlayerSniff::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80151BF0 -> 0x80151C60
void zDugPlayerSniff::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x80151C60 -> 0x80151CAC
void zDugPlayerSniff::Begin(class zDugPlayerSniff * this /* r31 */) {
}
// Range: 0x80151CB0 -> 0x80151CE8
void zDugPlayerSniff::End(class zDugPlayerSniff * this /* r31 */) {
}
// Range: 0x80151CF0 -> 0x80151E28
void zDugPlayerSniff::Move(class zDugPlayerSniff * this /* r28 */, class xScene * s /* r29 */, float dt /* f30 */, class xEntFrame * frame /* r30 */) {
}
// Range: 0x80151E30 -> 0x80151F3C
void zDugPlayerLever::AddStates(class zDugPlayerLever * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80151F40 -> 0x80152000
void zDugPlayerLever::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x80152000 -> 0x801520A4
void zDugPlayerLever::AddActionTransitions(class zDugPlayerLever * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x801520B0 -> 0x80152100
void zDugPlayerLever::Begin(class zDugPlayerLever * this /* r31 */) {
}
// signature: zDugLeverBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x80152100 -> 0x8015217C
void zDugLeverBE(class xAnimState * state /* r30 */, void * object /* r31 */) {
    // Local variables
    class zUPPlayer * player; // r0
    class zAnimPackage * currentPackage; // r0
}
// signature: zDugPlayerLever::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80152180 -> 0x801521F0
void zDugPlayerLever::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// signature: zDugPlayerLever::Move(xScene *, float, xEntFrame *)
// Range: 0x801521F0 -> 0x801522AC
void zDugPlayerLever::Move(class zDugPlayerLever * this /* r31 */) {
}
// Range: 0x801522B0 -> 0x8015236C
void zDugPlayerLever::End(class zDugPlayerLever * this /* r30 */) {
}
// signature: zDugPlayerUnsummon::AddStates(xAnimTable *)
// Range: 0x80152370 -> 0x801523E0
void zDugPlayerUnsummon::AddStates() {
}
// Range: 0x801523E0 -> 0x8015245C
void zDugPlayerUnsummon::AddActionTransitions(class zDugPlayerUnsummon * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zDugPlayerUnsummon::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80152460 -> 0x801524D0
void zDugPlayerUnsummon::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x80152560 -> 0x8015256C
void zDugPlayerUnsummon::Begin() {
}
// signature: zDugPlayerUnsummon::Move(xScene *, float, xEntFrame *)
// Range: 0x80152570 -> 0x801526B8
void zDugPlayerUnsummon::Move(class zDugPlayerUnsummon * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 turnDir; // r1+0x8
}
