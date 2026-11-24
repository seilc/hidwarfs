/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zUPHumanPlayerActions.cpp
*/
// Range: 0x8011B260 -> 0x8011B2F8
void zUPHumanPlayer_Idle::AddStates(class zUPHumanPlayer_Idle * this /* r30 */, class xAnimTable * table /* r31 */) {
}
// Range: 0x8011B3A0 -> 0x8011B4AC
void zUPHumanPlayer_Idle::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x8011B740 -> 0x8011B834
void zUPHumanPlayer_Idle::AddActionTransitions(class zUPHumanPlayer_Idle * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x8011B840 -> 0x8011B8C4
void zUPHumanPlayer_Idle::ClearExtraIdleData() {
    // Local variables
    int i; // r0
    int j; // r6
}
// Range: 0x8011B8D0 -> 0x8011B9C4
void zUPHumanPlayer_Walk::AddActionTransitions(class zUPHumanPlayer_Walk * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x8011B9D0 -> 0x8011BAC4
void zUPHumanPlayer_Run::AddActionTransitions(class zUPHumanPlayer_Run * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x8011BAD0 -> 0x8011BB60
void zUPHumanPlayer_Jump::AddActionTransitions(class zUPHumanPlayer_Jump * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x8011BB60 -> 0x8011BBB0
void zUPHumanPlayer_AIJump::AddActionTransitions(class zUPHumanPlayer_AIJump * this /* r30 */, class xAnimTable * table /* r31 */) {
}
// Range: 0x8011BBB0 -> 0x8011BC40
void zUPHumanPlayer_Fall::AddActionTransitions(class zUPHumanPlayer_Fall * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x8011BC40 -> 0x8011BCB4
void zUPHumanPlayer_Land::AddActionTransitions(class zUPHumanPlayer_Land * this /* r30 */, class xAnimTable * table /* r31 */) {
}
// signature: zUPHumanPlayer_LeverLaunch::AddActionTransitions(xAnimTable *)
// Range: 0x8011BCC0 -> 0x8011BCC4
void zUPHumanPlayer_LeverLaunch::AddActionTransitions() {
}
// Range: 0x8011BCD0 -> 0x8011BD98
void zUPHumanPlayer_RopeTie::AddStates(class zUPHumanPlayer_RopeTie * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x8011BDA0 -> 0x8011BE48
void zUPHumanPlayer_RopeTie::AddActionTransitions(class xAnimTable * table /* r28 */) {
}
// signature: zUPHumanPlayer_RopeTie::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8011BE50 -> 0x8011BF00
void zUPHumanPlayer_RopeTie::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// Range: 0x8011C100 -> 0x8011C28C
void zUPHumanPlayer_VineSwing::AddStates(class zUPHumanPlayer_VineSwing * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x8011C290 -> 0x8011C460
void zUPHumanPlayer_VineSwing::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x8011C950 -> 0x8011CA60
void zUPHumanPlayer_VineSwing::AddActionTransitions(class xAnimTable * table /* r28 */) {
}
// signature: zUPHumanPlayer_VineSwing::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8011CC30 -> 0x8011CCA0
void zUPHumanPlayer_VineSwing::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x8011CD40 -> 0x8011CE04
void zUPHumanPlayer_VineSwing::Begin() {
}
// signature: zUPHumanPlayer_VineSwing::Move(xScene *, float, xEntFrame *)
// Range: 0x8011CE60 -> 0x8011D6C4
void zUPHumanPlayer_VineSwing::Move(class zUPHumanPlayer_VineSwing * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 playerPos; // r1+0x18C
    class xVec3 playerPoint; // r1+0x180
    class xVec3 offset; // r1+0x174

    {
        // Range: 0x8011CF80 -> 0x8011D130
        // Local variables
        float len; // f0
        float movedist; // f30
        class xVec3 entryDir; // r1+0x15C
        class xVec3 diff; // r1+0x168
        bool rotDone; // r29
    }
    {
        // Range: 0x8011D134 -> 0x8011D510
        // Local variables
        class xVec3 entryCross; // r1+0x120
        class xVec3 vinePos; // r1+0x12C
        float stickX; // f29
        bool atMax; // r29
        float frontDot; // f0
        bool straightBelow; // r28
        float theta; // f0
        float downDot; // f0
        class xVec3 playerToRootDir; // r1+0x138
        class xVec3 rootPosWorld; // r1+0x144
        class xVec3 playerPosWorld; // r1+0x150
    }
    {
        // Range: 0x8011D514 -> 0x8011D608
        // Local variables
        class xVec3 entryCross; // r1+0x108
        class xVec3 vinePos; // r1+0x114
    }
    {
        // Range: 0x8011D60C -> 0x8011D68C
        // Local variables
        class xVec3 dpos; // r1+0xF0
        class xVec3 playerPos; // r1+0xFC
    }

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_NegUnitAxisY;
    // -> class xColor g_RED;
    // -> class xColor g_WHITE;
}
// Range: 0x8011D7D0 -> 0x8011DA3C
void zUPHumanPlayer_VineSwing::End(class zUPHumanPlayer_VineSwing * this /* r29 */) {
    // References
    // -> class xVec3 m_NegUnitAxisY;
}
// signature: zUPHumanPlayer_VineSwing::ReleaseCB(xAnimTransition *, xAnimSingle *)
// Range: 0x8011DA50 -> 0x8011DCF8
unsigned int zUPHumanPlayer_VineSwing::ReleaseCB(class zUPHumanPlayer_VineSwing * this /* r31 */) {
    // Local variables
    float peak; // f6
    float peakTime; // f0
    float fallTime; // f0

    // References
    // -> class zGlobals globals;
}
// Range: 0x8011DD00 -> 0x8011DDC0
void zUPHumanPlayerCombatBlock::AddStates(class zUPHumanPlayerCombatBlock * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zUPHumanPlayerCombatBlock::AddInternalTransitions(xAnimTable *)
// Range: 0x8011DDC0 -> 0x8011DE34
void zUPHumanPlayerCombatBlock::AddInternalTransitions() {
}
// Range: 0x8011DE50 -> 0x8011DEF0
void zUPHumanPlayerCombatBlock::AddActionTransitions(class zUPHumanPlayerCombatBlock * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zUPHumanPlayerCombatBlock::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8011DEF0 -> 0x8011DF60
void zUPHumanPlayerCombatBlock::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x8011E010 -> 0x8011E16C
void zUPHumanPlayerCombatBlock::Begin() {
    // Local variables
    class zUPHumanPlayerCombatBlock_CatchNPCWithinDistance_CB catchNPCCB; // r1+0x10

    // References
    // -> class zPlayerInventory inventory;
    // -> class zGlobals globals;
}
// signature: zUPHumanPlayerCombatBlock::Move(xScene *, float, xEntFrame *)
// Range: 0x8011E170 -> 0x8011E184
void zUPHumanPlayerCombatBlock::Move() {
}
// signature: zUPHumanPlayerCombatTaunt::AddStates(xAnimTable *)
// Range: 0x8011E190 -> 0x8011E1FC
void zUPHumanPlayerCombatTaunt::AddStates() {
}
// Range: 0x8011E200 -> 0x8011E2C8
void zUPHumanPlayerCombatTaunt::AddActionTransitions(class zUPHumanPlayerCombatTaunt * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zUPHumanPlayerCombatTaunt::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8011E2D0 -> 0x8011E340
void zUPHumanPlayerCombatTaunt::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x8011E540 -> 0x8011E550
void zUPHumanPlayerCombatTaunt::Begin() {
}
// signature: zUPHumanPlayerCombatFinisher::AddStates(xAnimTable *)
// Range: 0x8011E560 -> 0x8011E5CC
void zUPHumanPlayerCombatFinisher::AddStates() {
}
// Range: 0x8011E5D0 -> 0x8011E65C
void zUPHumanPlayerCombatFinisher::AddActionTransitions(class zUPHumanPlayerCombatFinisher * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zUPHumanPlayerCombatFinisher::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8011E660 -> 0x8011E6D0
void zUPHumanPlayerCombatFinisher::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x8011E790 -> 0x8011E804
void zUPHumanPlayerCombatFinisher::Begin(class zUPHumanPlayerCombatFinisher * this /* r30 */) {
    // References
    // -> class zPlayerInventory inventory;
}
// Range: 0x8011E810 -> 0x8011E820
void zUPHumanPlayerCombatFinisher::End() {
}
// Range: 0x8011E830 -> 0x8011E9DC
void zUPHumanPlayerCombatFinisher::ContextCheckForActivity(class zUPHumanPlayerCombatFinisher * this /* r30 */) {
    // References
    // -> static int total;
    // -> static class IconCache cache[16];
}
// Range: 0x8011E9E0 -> 0x8011EA74
void zUPHumanPlayerHit::AddStates(class zUPHumanPlayerHit * this /* r30 */, class xAnimTable * table /* r31 */) {
}
// signature: zUPHumanPlayerHit::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8011EA80 -> 0x8011EB34
void zUPHumanPlayerHit::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// Range: 0x8011EC50 -> 0x8011EC70
void zUPHumanPlayerHit::Begin() {
}
// Range: 0x8011EC70 -> 0x8011ECA8
void zUPHumanPlayerHit::End(class zUPHumanPlayerHit * this /* r31 */) {
}
// Range: 0x8011ECC0 -> 0x8011ECF8
void zUPHumanPlayerHitLaunch::End(class zUPHumanPlayerHitLaunch * this /* r31 */) {
}
// signature: zUPHumanPlayerSpiderBeforeEnter(xAnimPlay *, xAnimState *, void *)
// Range: 0x8011ED00 -> 0x8011EDEC
void zUPHumanPlayerSpiderBeforeEnter(class xAnimState * state /* r31 */) {
    {
        // Range: 0x8011ED14 -> 0x8011EDD8
        // Local variables
        bool found; // r7
        class zUPHumanPlayer * player; // r0
        unsigned int entryID; // r0

        {
            // Range: 0x8011ED74 -> 0x8011EDBC
            // Local variables
            unsigned int i; // r8
        }
    }
}
// Range: 0x8011EDF0 -> 0x8011EF38
void zUPHumanPlayerSpiderAttached::AddStates(class zUPHumanPlayerSpiderAttached * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x8011EF40 -> 0x8011F26C
void zUPHumanPlayerSpiderAttached::AddInternalTransitions(class xAnimTable * table /* r22 */) {
}
// Range: 0x8011F4C0 -> 0x8011F60C
void zUPHumanPlayerSpiderAttached::AddActionTransitions(class zUPHumanPlayerSpiderAttached * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zUPHumanPlayerSpiderAttached::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8011F6E0 -> 0x8011F750
void zUPHumanPlayerSpiderAttached::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// signature: zUPHumanPlayerSpiderAttached::Move(xScene *, float, xEntFrame *)
// Range: 0x8011F820 -> 0x8011F824
void zUPHumanPlayerSpiderAttached::Move() {
}
// Range: 0x8011F830 -> 0x8011F858
void zUPHumanPlayerSpiderAttached::Begin() {
}
// Range: 0x8011F860 -> 0x8011FC60
void zUPHumanPlayerSpiderAttached::Update(class zUPHumanPlayerSpiderAttached * this /* r30 */, float dt /* f30 */) {
    // Local variables
    float minShakeCount; // f31
    unsigned int curShakeCount; // r0

    // References
    // -> static class IconCache cache[16];
    // -> static int total;
}
// Range: 0x8011FC60 -> 0x8011FCC8
void zUPHumanPlayerSpiderAttached::ContextCheckForActivity(class zUPHumanPlayerSpiderAttached * this /* r30 */) {
}
// Range: 0x8011FCE0 -> 0x8011FE28
void zUPHumanPlayerAIFakeFightDog::AddStates(class zUPHumanPlayerAIFakeFightDog * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x8011FE30 -> 0x8011FF38
void zUPHumanPlayerAIFakeFightDog::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x80120020 -> 0x801200B0
void zUPHumanPlayerAIFakeFightDog::AddActionTransitions(class zUPHumanPlayerAIFakeFightDog * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zUPHumanPlayerAIFakeFightDog::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x801200B0 -> 0x80120120
void zUPHumanPlayerAIFakeFightDog::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x801201D0 -> 0x80120230
void zUPHumanPlayerAIFakeFightDog::Begin(class zUPHumanPlayerAIFakeFightDog * this /* r31 */) {
    // Local variables
    class xBase * closestEnemy; // r0
}
// Range: 0x80120230 -> 0x801203C0
void zUPHumanPlayerAIFakeFightDog::Move(class zUPHumanPlayerAIFakeFightDog * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
    // Local variables
    class xBase * ent; // r0

    {
        // Range: 0x80120280 -> 0x8012037C
        // Local variables
        class xVec3 toNPC; // r1+0x8
    }
}
