/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCommonPlayerActions.cpp
*/
static char * JUMP_START_DEFAULT_STATE; // size: 0x4, address: 0x807A3744
static float JUMP_HEIGHT; // size: 0x4, address: 0x807A3748
static float JUMP_VELOCITY; // size: 0x4, address: 0x8081CCC0
static float JUMP_DECEL; // size: 0x4, address: 0x8081CCC4
// signature: zCommonPlayerActionsNormalTransitions(zPlayerActionManager *, xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int)
// Range: 0x80140AD0 -> 0x80140BAC
void zCommonPlayerActionsNormalTransitions(class zPlayerActionManager * manager /* r23 */, class xAnimTable * table /* r24 */, char * fromState /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int userFlags /* r29 */) {
}
// signature: zCommonPlayerAction::WalkCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80140BB0 -> 0x80140C58
unsigned int zCommonPlayerAction::WalkCheck(class zCommonPlayerAction * this /* r30 */) {
}
// signature: zCommonPlayerAction::RunCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80140C60 -> 0x80140D08
unsigned int zCommonPlayerAction::RunCheck(class zCommonPlayerAction * this /* r30 */) {
}
// signature: zCommonPlayerAction::MoveCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80140D10 -> 0x80140E80
unsigned int zCommonPlayerAction::MoveCheck(class zCommonPlayerAction * this /* r30 */) {
}
// signature: zCommonPlayerAction::StopCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80140E80 -> 0x80140F08
unsigned int zCommonPlayerAction::StopCheck(class zCommonPlayerAction * this /* r30 */) {
}
// signature: zCommonPlayerAction::ApplyGust(xVec3 &)
// Range: 0x80140F10 -> 0x80140F14
void zCommonPlayerAction::ApplyGust() {
}
// signature: zCommonPlayerAction::ApplyBasicPhysics(const xVec3 &)
// Range: 0x80140F20 -> 0x80140F70
void zCommonPlayerAction::ApplyBasicPhysics() {
}
// Range: 0x80140F70 -> 0x80140F74
void zPlayerIdle::AddTweaks() {
}
// Range: 0x80140F80 -> 0x80141028
void zPlayerIdle::Reset(class zPlayerIdle * this /* r30 */) {
}
// signature: zPlayerIdle::AddStates(xAnimTable *)
// Range: 0x80141030 -> 0x801410A0
void zPlayerIdle::AddStates() {
}
// signature: zPlayerIdle::Move(xScene *, float, xEntFrame *)
// Range: 0x801410A0 -> 0x801410A4
void zPlayerIdle::Move() {
}
// Range: 0x801410B0 -> 0x801410E0
void zPlayerIdle::Begin() {
}
// Range: 0x801410E0 -> 0x80141118
void zPlayerIdle::End() {
    // Local variables
    class zPlayerFall * fall; // r0
}
// signature: zPlayerIdle::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80141120 -> 0x801411A0
void zPlayerIdle::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r29 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned short priority /* r31 */, unsigned int flags /* r0 */) {
}
// Range: 0x80141220 -> 0x80141498
void zPlayerIdle::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x80141A50 -> 0x80141B7C
void zPlayerIdle::AddActionTransitions(class xAnimTable * table /* r29 */) {
}
// signature: zPlayerIdle::ApplyGust(xVec3 &)
// Range: 0x80141B80 -> 0x80141BEC
void zPlayerIdle::ApplyGust() {
    {
        // Range: 0x80141B88 -> 0x80141BE4
        // Local variables
        class xVec3 gustXZ; // r1+0x8
    }
}
// signature: zPlayerSkidStop::AddStates(xAnimTable *)
// Range: 0x80141BF0 -> 0x80141C64
void zPlayerSkidStop::AddStates() {
}
// Range: 0x80141C70 -> 0x80141D9C
void zPlayerSkidStop::AddActionTransitions(class zPlayerSkidStop * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zPlayerSkidStop::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80141DA0 -> 0x80141DA4
void zPlayerSkidStop::AddTransitionsFrom() {
}
// Range: 0x80141DB0 -> 0x80141DB4
void zPlayerSkidStop::Begin() {
}
// signature: zPlayerWalkStart::AddStates(xAnimTable *)
// Range: 0x80141DC0 -> 0x80141E30
void zPlayerWalkStart::AddStates() {
}
// Range: 0x80141E30 -> 0x80142040
void zPlayerWalkStart::AddActionTransitions(class zPlayerWalkStart * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerWalkStart::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80142090 -> 0x80142110
void zPlayerWalkStart::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r29 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned short priority /* r31 */, unsigned int flags /* r0 */) {
}
// Range: 0x801421B0 -> 0x801421B4
void zPlayerWalkStart::Begin() {
}
// Range: 0x801421C0 -> 0x801421C4
void zPlayerWalkStart::End() {
}
// signature: zPlayerWalkStart::Update(float)
// Range: 0x801421D0 -> 0x80142218
void zPlayerWalkStart::Update(class zPlayerWalkStart * this /* r31 */) {
}
// signature: zPlayerWalk::AddStates(xAnimTable *)
// Range: 0x80142220 -> 0x80142290
void zPlayerWalk::AddStates() {
}
// Range: 0x80142290 -> 0x80142418
void zPlayerWalk::AddActionTransitions(class zPlayerWalk * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerWalk::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80142420 -> 0x80142490
void zPlayerWalk::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// signature: zPlayerWalk::Update(float)
// Range: 0x80142570 -> 0x80142584
void zPlayerWalk::Update() {
}
// Range: 0x80142590 -> 0x80142594
void zPlayerWalk::Begin() {
}
// Range: 0x801425A0 -> 0x801425A4
void zPlayerWalk::End() {
}
// Range: 0x801425B0 -> 0x801426F8
void zPlayerRun::AddStates(class zPlayerRun * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80142700 -> 0x80142840
void zPlayerRun::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x80142880 -> 0x80142A2C
void zPlayerRun::AddActionTransitions(class zPlayerRun * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerRun::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80142A30 -> 0x80142AA0
void zPlayerRun::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x80142B90 -> 0x80142B94
void zPlayerRun::End() {
}
// Range: 0x80142BA0 -> 0x80142D10
void zPlayerRun::Update(class zPlayerRun * this /* r31 */, float dt /* f30 */) {
    // Local variables
    float mag; // f0
}
// signature: zPlayerSlip::AddStates(xAnimTable *)
// Range: 0x80142D10 -> 0x80142D80
void zPlayerSlip::AddStates() {
}
// Range: 0x80142D80 -> 0x80142EAC
void zPlayerSlip::AddActionTransitions(class zPlayerSlip * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zPlayerSlip::AddStandardTransitionsFrom(xAnimTable *, const char *)
// Range: 0x80142EB0 -> 0x80142F00
void zPlayerSlip::AddStandardTransitionsFrom() {
}
// signature: zPlayerSlip::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80142F00 -> 0x80142F70
void zPlayerSlip::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x80143000 -> 0x8014300C
void zPlayerSlip::Reset() {
}
// Range: 0x80143010 -> 0x80143014
void zPlayerSlip::Begin() {
}
// signature: zPlayerSlip::Timestep(float)
// Range: 0x80143020 -> 0x80143024
void zPlayerSlip::Timestep() {
}
// signature: zPlayerSlip::ApplyGust(xVec3 &)
// Range: 0x80143030 -> 0x80143084
void zPlayerSlip::ApplyGust() {
    // Local variables
    class xVec3 gustXZ; // r1+0x8
}
// Range: 0x80143090 -> 0x80143190
void zPlayerJump::AddStates(class zPlayerJump * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerJump::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80143190 -> 0x801431DC
void zPlayerJump::AddTransitionsFrom() {
    // References
    // -> static char * JUMP_START_DEFAULT_STATE;
}
// Range: 0x801432C0 -> 0x80143378
void zPlayerJump::AddActionTransitions(class zPlayerJump * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x80143380 -> 0x801433A8
void zPlayerJump::Begin() {
}
// Range: 0x801433B0 -> 0x801433BC
void zPlayerJump::End() {
}
// Range: 0x801433D0 -> 0x80143504
void zPlayerJump::Move(class zPlayerJump * this /* r28 */, class xScene * s /* r29 */, float dt /* f30 */, class xEntFrame * frame /* r30 */) {
}
// signature: zPlayerJump::ApplyGust(xVec3 &)
// Range: 0x80143510 -> 0x80143570
void zPlayerJump::ApplyGust() {
    {
        // Range: 0x80143514 -> 0x80143568
        // Local variables
        class xVec3 gustXZ; // r1+0x8
    }
}
// signature: zPlayerJump::Timestep(float)
// Range: 0x80143570 -> 0x8014359C
void zPlayerJump::Timestep() {
}
// Range: 0x801435A0 -> 0x801436E0
void zPlayerFall::AddStates(class zPlayerFall * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x801436E0 -> 0x801437A8
void zPlayerFall::AddInternalTransitions(class xAnimTable * table /* r24 */) {
}
// Range: 0x80143800 -> 0x80143910
void zPlayerFall::AddActionTransitions(class zPlayerFall * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zPlayerFall::AddStandardTransitionsFrom(xAnimTable *, const char *)
// Range: 0x80143910 -> 0x80143960
void zPlayerFall::AddStandardTransitionsFrom() {
}
// signature: zPlayerFall::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80143960 -> 0x80143A14
void zPlayerFall::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */, enum SpecialActions specialAction /* r0 */) {
}
// Range: 0x80143AC0 -> 0x80143AE4
void zPlayerFall::Begin() {
}
// signature: zPlayerFall::Move(xScene *, float, xEntFrame *)
// Range: 0x80143AF0 -> 0x80143AF4
void zPlayerFall::Move() {
}
// Range: 0x80143B00 -> 0x80143B04
void zPlayerFall::End() {
}
// Range: 0x80143B10 -> 0x80143C58
void zPlayerLand::AddStates(class zPlayerLand * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// signature: zPlayerLand::AddInternalTransitions(xAnimTable *)
// Range: 0x80143CE0 -> 0x80143D50
void zPlayerLand::AddInternalTransitions() {
}
// Range: 0x80143D50 -> 0x80143F54
void zPlayerLand::AddActionTransitions(class zPlayerLand * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80143F60 -> 0x80144084
void zPlayerLand::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */, enum SpecialActions specialAction /* r0 */) {
}
// signature: zPlayerLand::AddStandardTransitionsFrom(xAnimTable *, const char *)
// Range: 0x80144250 -> 0x801442A0
void zPlayerLand::AddStandardTransitionsFrom() {
}
// Range: 0x801442A0 -> 0x801442A4
void zPlayerLand::Begin() {
}
// Range: 0x801442C0 -> 0x80144410
void zPlayerTriggered::AddStates(class zPlayerTriggered * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerTriggered::AddActionTransitions(xAnimTable *)
// Range: 0x80144410 -> 0x8014446C
void zPlayerTriggered::AddActionTransitions() {
}
// signature: zPlayerTriggered::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80144470 -> 0x80144574
void zPlayerTriggered::AddTransitionsFrom(class xAnimTable * table /* r23 */, char * fromStates /* r24 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r25 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned short priority /* r27 */, float blend /* f31 */, unsigned int flags /* r28 */, unsigned int userFlags /* r29 */) {
}
// signature: zPlayerTriggered::AddStandardTransitionsFrom(xAnimTable *, const char *)
// Range: 0x80144620 -> 0x80144670
void zPlayerTriggered::AddStandardTransitionsFrom() {
}
// Range: 0x80144670 -> 0x801446C8
void zPlayerTriggered::End(class zPlayerTriggered * this /* r31 */) {
    // Local variables
    class EventNotifyTriggeredAnimDone params; // r1+0x8
}
// Range: 0x801446D0 -> 0x801446DC
void zPlayerTriggered::Reset() {
}
// Range: 0x801446E0 -> 0x801447E0
void zPlayerLedge::AddStates(class zPlayerLedge * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x801447E0 -> 0x801448A8
void zPlayerLedge::AddInternalTransitions(class xAnimTable * table /* r27 */) {
}
// Range: 0x801448E0 -> 0x80144A20
void zPlayerLedge::AddActionTransitions(class zPlayerLedge * this /* r28 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerLedge::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80144A30 -> 0x80144AA0
void zPlayerLedge::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x80144B20 -> 0x80144B8C
void zPlayerLedge::Begin() {
}
// Range: 0x80144B90 -> 0x80144BD0
void zPlayerLedge::End() {
}
// signature: zPlayerLedge::Update(float)
// Range: 0x80144BD0 -> 0x80144C60
void zPlayerLedge::Update(class zPlayerLedge * this /* r31 */) {
}
// signature: zPlayerLedge::UpdateFall(float)
// Range: 0x80144C60 -> 0x80144C74
void zPlayerLedge::UpdateFall() {
}
// signature: zHitBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x80144C80 -> 0x80144D4C
void zHitBE(class xAnimState * state /* r31 */) {
    {
        // Range: 0x80144C94 -> 0x80144D38
        // Local variables
        bool found; // r7
        unsigned int entryID; // r0

        {
            // Range: 0x80144CD8 -> 0x80144D1C
            // Local variables
            unsigned int i; // r8
        }
    }
}
// signature: zPlayerHit::AddStates(xAnimTable *)
// Range: 0x80144D50 -> 0x80144DC0
void zPlayerHit::AddStates() {
}
// Range: 0x80144DC0 -> 0x80144E98
void zPlayerHit::AddActionTransitions(class xAnimTable * table /* r27 */) {
}
// Range: 0x80144EA0 -> 0x80144EB4
void zPlayerHit::Begin() {
}
// Range: 0x80144ED0 -> 0x80144EF4
void zPlayerHit::End() {
    // References
    // -> class zGlobals globals;
}
// signature: zPlayerHit::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80144F00 -> 0x80144F70
void zPlayerHit::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// signature: zPlayerHitLaunch::AddStates(xAnimTable *)
// Range: 0x80145030 -> 0x8014509C
void zPlayerHitLaunch::AddStates() {
}
// signature: zPlayerHitLaunch::AddInternalTransitions(xAnimTable *)
// Range: 0x801450A0 -> 0x801450A4
void zPlayerHitLaunch::AddInternalTransitions() {
}
// Range: 0x801450B0 -> 0x80145180
void zPlayerHitLaunch::AddActionTransitions(class xAnimTable * table /* r27 */) {
}
// Range: 0x801451A0 -> 0x801451F0
void zPlayerHitLaunch::End() {
    // References
    // -> class zGlobals globals;
}
// signature: zPlayerHitLaunch::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80145200 -> 0x80145270
void zPlayerHitLaunch::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x80145270 -> 0x801452C8
void zPlayerDefeated::Begin(class zPlayerDefeated * this /* r31 */) {
}
// Range: 0x801452D0 -> 0x80145450
void zPlayerDefeated::AddStates(class zPlayerDefeated * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerDefeated::Update(float)
// Range: 0x80145450 -> 0x801454C8
void zPlayerDefeated::Update(class zPlayerDefeated * this /* r31 */) {
    // Local variables
    class xAnimSingle * single; // r4

    // References
    // -> class zGlobals globals;
}
// signature: zPlayerDefeated::AddInternalTransitions(xAnimTable *)
// Range: 0x801454D0 -> 0x801454D4
void zPlayerDefeated::AddInternalTransitions() {
}
// Range: 0x801454E0 -> 0x801454F0
void zPlayerDefeated::End() {
}
// signature: zPlayerDefeated::AddActionTransitions(xAnimTable *)
// Range: 0x801454F0 -> 0x801454F4
void zPlayerDefeated::AddActionTransitions() {
}
// signature: zPlayerDefeated::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80145500 -> 0x801455B0
void zPlayerDefeated::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// Range: 0x80145710 -> 0x8014574C
void zPlayerFallToDeath::Begin(class zPlayerFallToDeath * this /* r31 */) {
}
// Range: 0x80145750 -> 0x80145850
void zPlayerFallToDeath::AddStates(class zPlayerFallToDeath * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerFallToDeath::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80145850 -> 0x801458C0
void zPlayerFallToDeath::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x80145990 -> 0x80145A54
void zPlayerFallToDeath::AddInternalTransitions(class xAnimTable * table /* r27 */) {
}
// Range: 0x80145A60 -> 0x80145AE4
void zPlayerFallToDeath::Update(class zPlayerFallToDeath * this /* r31 */, float dt /* f31 */) {
    // References
    // -> class zGlobals globals;
}
// signature: zPlayerCheat::AddStates(xAnimTable *)
// Range: 0x80145AF0 -> 0x80145B60
void zPlayerCheat::AddStates() {
}
// Range: 0x80145B60 -> 0x80145C74
void zPlayerCheat::AddActionTransitions(class zPlayerCheat * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x80145CA0 -> 0x80145CC8
void zPlayerCheat::End() {
}
// Range: 0x80145CD0 -> 0x80145DD8
void zCommonPlayerDash::AddStates(class zCommonPlayerDash * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80145DE0 -> 0x80145DF0
void zCommonPlayerDash::Reset() {
}
// signature: zCommonPlayerDash::Update(float)
// Range: 0x80145DF0 -> 0x80145DF4
void zCommonPlayerDash::Update() {
}
// Range: 0x80145E00 -> 0x80145EC0
void zCommonPlayerDash::Timestep(class zCommonPlayerDash * this /* r30 */, float dt /* f31 */) {
}
// Range: 0x80145ED0 -> 0x80145F94
void zCommonPlayerDash::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x80145FD0 -> 0x801460EC
void zCommonPlayerDash::AddActionTransitions(class zCommonPlayerDash * this /* r28 */, class xAnimTable * table /* r27 */) {
}
// signature: zCommonPlayerDash::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x801460F0 -> 0x80146160
void zCommonPlayerDash::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// signature: zCommonPlayerDash::Move(xScene *, float, xEntFrame *)
// Range: 0x801461A0 -> 0x801461A4
void zCommonPlayerDash::Move() {
}
// Range: 0x801461B0 -> 0x801461B4
void zCommonPlayerDash::Begin() {
}
// Range: 0x801461C0 -> 0x801461D0
void zCommonPlayerDash::End() {
}
// Range: 0x801461D0 -> 0x80146290
void zPlayerMGWin::AddStates(class zPlayerMGWin * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerMGWin::AddInternalTransitions(xAnimTable *)
// Range: 0x80146290 -> 0x80146300
void zPlayerMGWin::AddInternalTransitions() {
}
// signature: zPlayerMGWin::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80146300 -> 0x80146380
void zPlayerMGWin::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r29 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned short priority /* r31 */, unsigned int flags /* r0 */) {
}
// Range: 0x80146400 -> 0x80146414
void zPlayerMGWin::Begin() {
}
// signature: zPlayerMGWin::Update(float)
// Range: 0x80146420 -> 0x80146424
void zPlayerMGWin::Update() {
}
// Range: 0x80146430 -> 0x801464F0
void zPlayerMGLose::AddStates(class zPlayerMGLose * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerMGLose::AddInternalTransitions(xAnimTable *)
// Range: 0x801464F0 -> 0x80146560
void zPlayerMGLose::AddInternalTransitions() {
}
// signature: zPlayerMGLose::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80146560 -> 0x801465E0
void zPlayerMGLose::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r29 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned short priority /* r31 */, unsigned int flags /* r0 */) {
}
// signature: zPlayerMGLose::Update(float)
// Range: 0x80146670 -> 0x80146674
void zPlayerMGLose::Update() {
}
// signature: zPlayerDoubleJump::AddStates(xAnimTable *)
// Range: 0x80146680 -> 0x80146684
void zPlayerDoubleJump::AddStates() {
}
// Range: 0x80146690 -> 0x80146720
void zPlayerDoubleJump::AddActionTransitions(class zPlayerDoubleJump * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x80146720 -> 0x801467C4
void zPlayerDoubleJump::Begin() {
    // Local variables
    class zPlayerFall * fall; // r0
}
// signature: zPlayerDoubleJump::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x801467F0 -> 0x801467F4
void zPlayerDoubleJump::AddTransitionsFrom() {
}
// Range: 0x80146810 -> 0x80146898
void zPlayerDoubleJump::Timestep(class zPlayerDoubleJump * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x801468A0 -> 0x80146A78
void zPlayerDoubleJump::Move(class zPlayerDoubleJump * this /* r31 */, class xScene * s /* r28 */, float dt /* f31 */, class xEntFrame * frame /* r29 */) {
    // Local variables
    float initVelocity; // f0

    {
        // Range: 0x801469CC -> 0x80146A10
        // Local variables
        float newGravity; // f2
        float velocityAccelerationFactor; // f2
    }
}
// signature: zPlayerDoubleJump::ApplyGust(xVec3 &)
// Range: 0x80146A80 -> 0x80146A84
void zPlayerDoubleJump::ApplyGust() {
}
// Range: 0x80146A90 -> 0x80146AC8
void zCommonPlayerInterAction::Begin(class zCommonPlayerInterAction * this /* r31 */) {
}
// Range: 0x80146AD0 -> 0x80146AE4
void zCommonPlayerInterAction::End() {
}
// Range: 0x80146AF0 -> 0x80146C30
void zPlayerCustomAnim::AddStates(class zPlayerCustomAnim * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x80146C30 -> 0x80146CE0
void zPlayerCustomAnim::AddActionTransitions(class xAnimTable * table /* r28 */) {
}
// signature: zPlayerCustomAnim::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80146CE0 -> 0x80146D90
void zPlayerCustomAnim::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// Range: 0x80146F30 -> 0x80147274
void zPlayerCustomAnim::AddInternalTransitions(class xAnimTable * table /* r24 */) {
}
// Range: 0x80147880 -> 0x80147908
void zPlayerCustomAnim::Setup(class zPlayerCustomAnim * this /* r30 */) {
}
// Range: 0x80147910 -> 0x80147938
void zPlayerCustomAnim::Reset() {
}
// Range: 0x80147940 -> 0x80147A38
void zPlayerCustomAnim::Begin(class zPlayerCustomAnim * this /* r31 */) {
}
// Range: 0x80147A40 -> 0x80147AF8
void zPlayerCustomAnim::Update(class zPlayerCustomAnim * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x80147B10 -> 0x80147B88
void zPlayerCustomAnim::End(class zPlayerCustomAnim * this /* r31 */) {
}
// Range: 0x80147BA0 -> 0x80147CA8
void zPlayerCustomAnim::SetAnim(class zPlayerCustomAnim * this /* r31 */) {
    // Local variables
    void * buf; // r4
    class xAnimState * aState; // r29
}
