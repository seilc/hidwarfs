/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCarlPlayerActions.cpp
*/
static class xVec3 CANE_BONE_OFFSET; // size: 0xC, address: 0x8077DC70
static class xVec3 RSWING_BACKPACK_BONE_OFFSET; // size: 0xC, address: 0x8077DC84
static class xVec3 RSWING_CANE_BONE_OFFSET; // size: 0xC, address: 0x8077DC90
// Range: 0x80124D60 -> 0x80124F9C
void zCarlPlayerIdle::AddActionTransitions(class zCarlPlayerIdle * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// Range: 0x80124FA0 -> 0x8012523C
void zCarlPlayerIdle::Reset(class zCarlPlayerIdle * this /* r31 */) {
}
// Range: 0x80125240 -> 0x80125340
void zCarlPlayerIdle::Begin(class zCarlPlayerIdle * this /* r30 */) {
}
// Range: 0x80125340 -> 0x801255B4
void zCarlPlayerWalk::AddActionTransitions(class zCarlPlayerWalk * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// Range: 0x801257C0 -> 0x80125A34
void zCarlPlayerRun::AddActionTransitions(class zCarlPlayerRun * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// Range: 0x80125A40 -> 0x80125B58
void zCarlPlayerJump::AddActionTransitions(class zCarlPlayerJump * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// Range: 0x80125B60 -> 0x80125C48
void zCarlPlayerAIJump::AddActionTransitions(class zCarlPlayerAIJump * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// Range: 0x80125C50 -> 0x80125D68
void zCarlPlayerFall::AddActionTransitions(class zCarlPlayerFall * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// Range: 0x80125D70 -> 0x80125F6C
void zCarlPlayerLand::AddActionTransitions(class zCarlPlayerLand * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// Range: 0x80125F70 -> 0x80125F80
void zCarlPlayerMelee::Begin() {
}
// Range: 0x80125F80 -> 0x8012600C
void zCarlPlayerMelee::PlayWiimoteSound() {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80126010 -> 0x80126138
void zCarlPlayerMelee::AddAttacks(class zCombatAttack * attackStates /* r18 */) {
    // Local variables
    class zCombatAttack * attack; // r0

    // References
    // -> static class xVec3 CANE_BONE_OFFSET;
}
// Range: 0x80126140 -> 0x80126214
void zCarlPlayerHit::AddStates(class zCarlPlayerHit * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80126220 -> 0x80126290
void zCarlPlayerHit::AddActionTransitions(class zCarlPlayerHit * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x80126290 -> 0x8012641C
void zCarlPlayerLedgeHoist::AddStates(class zCarlPlayerLedgeHoist * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80126420 -> 0x80126560
void zCarlPlayerLedgeHoist::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x80126660 -> 0x80126704
void zCarlPlayerLedgeHoist::AddActionTransitions(class zCarlPlayerLedgeHoist * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zCarlPlayerLedgeHoist::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80126710 -> 0x80126780
void zCarlPlayerLedgeHoist::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x80126810 -> 0x80126860
void zCarlPlayerLedgeHoist::Begin(class zCarlPlayerLedgeHoist * this /* r31 */) {
}
// signature: zCarlPlayerLedgeHoist::CanStartCombo(unsigned int) const
// Range: 0x80126870 -> 0x80126898
bool zCarlPlayerLedgeHoist::CanStartCombo() const {
}
// Range: 0x801268A0 -> 0x801268C8
bool zCarlPlayerLedgeHoist::IsPullingUp() {
}
// signature: zCarlPlayerRussellSwing::ReleaseCB(xAnimTransition *, xAnimSingle *)
// Range: 0x801268D0 -> 0x80126B40
unsigned int zCarlPlayerRussellSwing::ReleaseCB(class zCarlPlayerRussellSwing * this /* r31 */) {
    // Local variables
    float peak; // f6
    float peakTime; // f0
    float fallTime; // f0
    float airTime; // f6

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80126B50 -> 0x80126B58
unsigned int zCarlPlayerRussellSwing::GetComboActionID() {
}
// Range: 0x80126B60 -> 0x80126CA4
void zCarlPlayerRussellSwing::AddStates(class zCarlPlayerRussellSwing * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x80126CB0 -> 0x80126DBC
void zCarlPlayerRussellSwing::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// signature: zCarlPlayerRussellSwing::AddActionTransitions(xAnimTable *)
// Range: 0x80127010 -> 0x8012706C
void zCarlPlayerRussellSwing::AddActionTransitions() {
}
// signature: zCarlPlayerRussellSwing::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80127070 -> 0x801270E0
void zCarlPlayerRussellSwing::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x80127350 -> 0x80127548
void zCarlPlayerRussellSwing::Begin(class zCarlPlayerRussellSwing * this /* r31 */) {
    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class xGlobals * xglobals;
}
// Range: 0x80127550 -> 0x8012758C
void zCarlPlayerRussellSwing::End(class zCarlPlayerRussellSwing * this /* r31 */) {
}
// signature: zCarlPlayerRussellSwing::Move(xScene *, float, xEntFrame *)
// Range: 0x80127590 -> 0x801281F0
void zCarlPlayerRussellSwing::Move(class zCarlPlayerRussellSwing * this /* r29 */, float dt /* f30 */, class xEntFrame * frame /* r30 */) {
    // Local variables
    unsigned int animFlags; // r0

    {
        // Range: 0x801275DC -> 0x80127BA4
        // Local variables
        float diffAngle; // f2
        class xVec2 p2; // r1+0x18
        class xVec2 p1; // r1+0x20
        float destAngle; // f0
        float curAngle; // f28
        float len; // f0
        class xVec3 diff; // r1+0xC4
        class xVec3 cPos; // r1+0xD0
        class xVec3 rPos; // r1+0xDC
        class xMat4x3 cmat; // r1+0x168
        class xMat4x3 rmat; // r1+0x1A8
        float movedist; // f31
        bool rotDone; // r30
        bool posDone; // r31

        {
            // Range: 0x80127A74 -> 0x80127ABC
            // Local variables
            float max; // f0
        }
        {
            // Range: 0x80127AC0 -> 0x80127B08
            // Local variables
            float max; // f0
        }
    }
    {
        // Range: 0x80127BA8 -> 0x801280C8
        // Local variables
        class xVec3 diff; // r1+0xA0
        class xVec3 cPos; // r1+0xAC
        class xVec3 rPos; // r1+0xB8
        class xMat4x3 cmat; // r1+0xE8
        class xMat4x3 rmat; // r1+0x128
    }
    {
        // Range: 0x801280CC -> 0x801281B4
        // Local variables
        class xVec3 playerPos; // r1+0x88
        class xVec3 dpos; // r1+0x94
    }

    // References
    // -> static class IconCache cache[16];
    // -> static int total;
    // -> static class xVec3 RSWING_CANE_BONE_OFFSET;
    // -> static class xVec3 RSWING_BACKPACK_BONE_OFFSET;
    // -> class xGlobals * xglobals;
}
// signature: zCarlPlayerRussellSwing::Timestep(float)
// Range: 0x801281F0 -> 0x80128248
void zCarlPlayerRussellSwing::Timestep(class zCarlPlayerRussellSwing * this /* r31 */) {
}
// signature: zCarlPlayerKevinSwing::ReleaseCB(xAnimTransition *, xAnimSingle *)
// Range: 0x80128250 -> 0x80128574
unsigned int zCarlPlayerKevinSwing::ReleaseCB(class zCarlPlayerKevinSwing * this /* r31 */) {
    // Local variables
    class xVec3 startPos; // r1+0x38
    float peak; // f7
    float peakTime; // f0
    float fallTime; // f0
    float airTime; // f4

    // References
    // -> class zGlobals globals;
}
// Range: 0x80128590 -> 0x80128598
unsigned int zCarlPlayerKevinSwing::GetComboActionID() {
}
// Range: 0x801285A0 -> 0x8012866C
void zCarlPlayerKevinSwing::AddStates(class zCarlPlayerKevinSwing * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// signature: zCarlPlayerKevinSwing::AddInternalTransitions(xAnimTable *)
// Range: 0x80128670 -> 0x801286E8
void zCarlPlayerKevinSwing::AddInternalTransitions() {
}
// Range: 0x80128740 -> 0x801287E4
void zCarlPlayerKevinSwing::AddActionTransitions(class zCarlPlayerKevinSwing * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zCarlPlayerKevinSwing::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x801287F0 -> 0x80128860
void zCarlPlayerKevinSwing::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x80128C50 -> 0x80128E90
void zCarlPlayerKevinSwing::Begin(class zCarlPlayerKevinSwing * this /* r31 */) {
    // References
    // -> class xGlobals * xglobals;
}
// signature: zCarlKevinSwingBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x80128E90 -> 0x80128F68
void zCarlKevinSwingBE(class xAnimState * state /* r30 */, void * object /* r31 */) {
    // Local variables
    class zUPPlayer * player; // r0
    class zKevinDanglePoint * tempKDP; // r3

    {
        // Range: 0x80128E9C -> 0x80128EBC
        // Local variables
        int x; // r8
    }
    {
        // Range: 0x80128F0C -> 0x80128F50
        // Local variables
        class zAnimPackage * currentPackage; // r0
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80128F70 -> 0x80128FE0
void zCarlPlayerKevinSwing::End(class zCarlPlayerKevinSwing * this /* r31 */) {
}
// Range: 0x80128FE0 -> 0x80129928
void zCarlPlayerKevinSwing::Move(class zCarlPlayerKevinSwing * this /* r29 */, class xScene * s /* r31 */, float dt /* f30 */, class xEntFrame * frame /* r30 */) {
    // Local variables
    unsigned int animFlags; // r0

    {
        // Range: 0x80129040 -> 0x80129658
        // Local variables
        float diffAngle; // f2
        class xVec2 p2; // r1+0x18
        class xVec2 p1; // r1+0x20
        float destAngle; // f0
        float curAngle; // f31
        float len; // f0
        class xVec3 diff; // r1+0xC4
        class xVec3 entryDir; // r1+0xD0
        class xVec3 entryPos; // r1+0xDC
        float movedist; // f31
        bool rotDone; // r30
        bool posDone; // r31

        {
            // Range: 0x80129504 -> 0x8012954C
            // Local variables
            float max; // f0
        }
        {
            // Range: 0x80129550 -> 0x80129598
            // Local variables
            float max; // f0
        }
    }
    {
        // Range: 0x80129664 -> 0x801298F8
        // Local variables
        class xVec3 playerPos; // r1+0xAC
        class xVec3 dpos; // r1+0xB8
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80129940 -> 0x80129A70
void zCarlPlayerCaneBug::AddAttacks(class zCombatAttack * attackStates /* r20 */) {
    // Local variables
    class zCombatAttack * attack; // r0

    // References
    // -> static class xVec3 CANE_BONE_OFFSET;
}
// Range: 0x80129A70 -> 0x80129B80
void zCarlPlayerCaneBug::AddStates(class zCarlPlayerCaneBug * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80129B80 -> 0x80129D40
void zCarlPlayerCaneBug::AddInternalTransitions(class xAnimTable * table /* r24 */) {
}
// Range: 0x80129E80 -> 0x8012A030
void zCarlPlayerCaneBug::AddActionTransitions(class zCarlPlayerCaneBug * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zCarlPlayerCaneBug::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8012A0B0 -> 0x8012A160
void zCarlPlayerCaneBug::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// Range: 0x8012A2C0 -> 0x8012A41C
void zCarlPlayerCaneBug::Move(class zCarlPlayerCaneBug * this /* r28 */, class xScene * s /* r29 */, float dt /* f30 */, class xEntFrame * frame /* r30 */) {
    // Local variables
    unsigned int flags; // r0
}
// signature: zCarlPlayerCaneBug::Update(float)
// Range: 0x8012A420 -> 0x8012A768
void zCarlPlayerCaneBug::Update(class zCarlPlayerCaneBug * this /* r31 */) {
    // Local variables
    float squashStart; // f30
    float squashEnd; // f29
    float squashDistance; // f31
    bool isShooing; // r0
    float animFrame; // f0

    {
        // Range: 0x8012A4A8 -> 0x8012A738
        // Local variables
        class zCarlPlayerCaneBug_SquashNPCWithinDistance_CB squashNPCCB; // r1+0x10
        class zCarlPlayerCaneBug_SquashWithinDistance_CB squashCB; // r1+0x20
        class xVec3 squashPos; // r1+0x30
    }

    // References
    // -> class zPlayerInventory inventory;
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// Range: 0x8012A770 -> 0x8012A8B8
void zCarlPlayer_BlowBalloon::AddStates(class zCarlPlayer_BlowBalloon * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x8012A8C0 -> 0x8012A9C8
void zCarlPlayer_BlowBalloon::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// signature: zCarlPlayer_BlowBalloon::AddActionTransitions(xAnimTable *)
// Range: 0x8012ADE0 -> 0x8012AE38
void zCarlPlayer_BlowBalloon::AddActionTransitions() {
}
// signature: zCarlPlayer_BlowBalloon::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8012AE40 -> 0x8012AEB0
void zCarlPlayer_BlowBalloon::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x8012AF50 -> 0x8012B318
void zCarlPlayer_BlowBalloon::Update(class zCarlPlayer_BlowBalloon * this /* r30 */, float dt /* f31 */) {
    // Local variables
    bool showMasher; // r0

    // References
    // -> static class IconCache cache[16];
    // -> static int total;
}
// Range: 0x8012B320 -> 0x8012B370
void zCarlPlayer_BlowBalloon::Begin(class zCarlPlayer_BlowBalloon * this /* r31 */) {
}
// Range: 0x8012B370 -> 0x8012B3A8
void zCarlPlayer_BlowBalloon::End(class zCarlPlayer_BlowBalloon * this /* r31 */) {
}
// Range: 0x8012B3C0 -> 0x8012B508
void zCarlPlayerPry::AddStates(class zCarlPlayerPry * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x8012B510 -> 0x8012B594
void zCarlPlayerPry::AddActionTransitions(class zCarlPlayerPry * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x8012B5A0 -> 0x8012B6A8
void zCarlPlayerPry::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// signature: zCarlPlayerPry::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8012B790 -> 0x8012B800
void zCarlPlayerPry::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// signature: zPryBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x8012B800 -> 0x8012B87C
void zPryBE(class xAnimState * state /* r30 */, void * object /* r31 */) {
    // Local variables
    class zUPPlayer * player; // r0
    class zAnimPackage * currentPackage; // r0
}
// Range: 0x8012B880 -> 0x8012B8E8
void zCarlPlayerPry::Begin(class zCarlPlayerPry * this /* r31 */) {
}
// Range: 0x8012B8F0 -> 0x8012B944
void zCarlPlayerPry::End(class zCarlPlayerPry * this /* r31 */) {
}
// Range: 0x8012B960 -> 0x8012BD48
void zCarlPlayerPry::Update(class zCarlPlayerPry * this /* r30 */, float dt /* f31 */) {
    // Local variables
    bool showMasher; // r0

    // References
    // -> static class IconCache cache[16];
    // -> static int total;
}
// Range: 0x8012BD50 -> 0x8012BE98
void zCarlPlayerRussellRope::AddStates(class zCarlPlayerRussellRope * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x8012BF90 -> 0x8012C0D4
void zCarlPlayerRussellRope::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x8012C2B0 -> 0x8012C3B0
void zCarlPlayerRussellRope::AddActionTransitions(class zCarlPlayerRussellRope * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zCarlPlayerRussellRope::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8012C5A0 -> 0x8012C610
void zCarlPlayerRussellRope::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x8012C6B0 -> 0x8012C840
void zCarlPlayerRussellRope::Begin(class zCarlPlayerRussellRope * this /* r31 */) {
    // Local variables
    class zCarlPlayer * cPlayer; // r30

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8012C840 -> 0x8012C8E8
void zCarlPlayerRussellRope::End(class zCarlPlayerRussellRope * this /* r30 */) {
    // Local variables
    class zCarlPlayer * player; // r31
}
// Range: 0x8012C8F0 -> 0x8012CB74
void zCarlPlayerRussellRope::ContextCheckForPresence(class zCarlPlayerRussellRope * this /* r31 */) {
    // Local variables
    class xVec3 ropePivot; // r1+0x50
    class xVec3 ropeEnd; // r1+0x44
    class xVec3 intPos; // r1+0x38
    class xVec3 distAwayFromEnd; // r1+0x2C
    float checkDist2; // f31

    {
        // Range: 0x8012CB14 -> 0x8012CB58
        // Local variables
        class zUpContextAction * ca; // r0
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zCarlPlayerHearingAid::AddStates(xAnimTable *)
// Range: 0x8012CB80 -> 0x8012CBF0
void zCarlPlayerHearingAid::AddStates() {
}
// Range: 0x8012CBF0 -> 0x8012CC94
void zCarlPlayerHearingAid::AddActionTransitions(class zCarlPlayerHearingAid * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zCarlPlayerHearingAid::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8012CCA0 -> 0x8012CD10
void zCarlPlayerHearingAid::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x8012CDE0 -> 0x8012CDF8
void zCarlPlayerHearingAid::Begin() {
}
// signature: zCarlPlayerHeliumTank::AddStates(xAnimTable *)
// Range: 0x8012CE10 -> 0x8012CE80
void zCarlPlayerHeliumTank::AddStates() {
}
// Range: 0x8012CE80 -> 0x8012CF20
void zCarlPlayerHeliumTank::AddActionTransitions(class zCarlPlayerHeliumTank * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zCarlPlayerHeliumTank::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8012CF20 -> 0x8012CF90
void zCarlPlayerHeliumTank::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x8012D050 -> 0x8012D060
void zCarlPlayerHeliumTank::Setup() {
}
// Range: 0x8012D070 -> 0x8012D140
void zCarlPlayerHeliumTank::Begin(class zCarlPlayerHeliumTank * this /* r30 */) {
    // Local variables
    class xMat4x3 boneMat; // r1+0x8
}
// signature: zCarlPlayerHeliumTank::Timestep(float)
// Range: 0x8012D140 -> 0x8012D164
void zCarlPlayerHeliumTank::Timestep() {
}
