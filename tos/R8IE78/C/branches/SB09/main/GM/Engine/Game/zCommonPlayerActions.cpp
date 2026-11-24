/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zCommonPlayerActions.cpp
*/
static char * JUMP_START_DEFAULT_STATE; // size: 0x4, address: 0x806B5290
static float JUMP_HEIGHT; // size: 0x4, address: 0x806B5294
static float JUMP_VELOCITY; // size: 0x4, address: 0x807332AC
static float JUMP_DECEL; // size: 0x4, address: 0x807332B0
// signature: zCommonPlayerActionsNormalTransitions(zPlayerActionManager *, xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int)
// Range: 0x800A3450 -> 0x800A352C
void zCommonPlayerActionsNormalTransitions(class zPlayerActionManager * manager /* r23 */, class xAnimTable * table /* r24 */, char * fromState /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int userFlags /* r29 */) {
}
// signature: zCommonPlayerAction::JumpLandCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800A3530 -> 0x800A3580
unsigned int zCommonPlayerAction::JumpLandCheck() {
}
// signature: zCommonPlayerAction::LandCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800A3580 -> 0x800A35C4
unsigned int zCommonPlayerAction::LandCheck() {
}
// signature: zCommonPlayerAction::FallCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800A35D0 -> 0x800A3600
unsigned int zCommonPlayerAction::FallCheck() {
}
// signature: zCommonPlayerAction::WalkCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800A3600 -> 0x800A36A0
unsigned int zCommonPlayerAction::WalkCheck(class zCommonPlayerAction * this /* r30 */) {
}
// signature: zCommonPlayerAction::RunCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800A36A0 -> 0x800A3740
unsigned int zCommonPlayerAction::RunCheck(class zCommonPlayerAction * this /* r30 */) {
}
// Range: 0x800A3740 -> 0x800A37F0
unsigned int zCommonPlayerAction::MoveCheck(class zCommonPlayerAction * this /* r28 */, class xAnimTransition * tran /* r29 */, class xAnimSingle * anim /* r30 */) {
}
// signature: zCommonPlayerAction::ApplyBasicPhysics(const xVec3 &)
// Range: 0x800A37F0 -> 0x800A381C
void zCommonPlayerAction::ApplyBasicPhysics() {
}
// Range: 0x800A3820 -> 0x800A38A4
void zPlayerIdle::Reset(class zPlayerIdle * this /* r30 */) {
}
// signature: zPlayerIdle::AddStates(xAnimTable *)
// Range: 0x800A38B0 -> 0x800A3920
void zPlayerIdle::AddStates() {
}
// signature: zPlayerIdle::Move(xScene *, float, xEntFrame *)
// Range: 0x800A3920 -> 0x800A3924
void zPlayerIdle::Move() {
}
// Range: 0x800A3930 -> 0x800A393C
void zPlayerIdle::Begin() {
}
// Range: 0x800A3940 -> 0x800A3978
void zPlayerIdle::End() {
    // Local variables
    class zPlayerFall * fall; // r0
}
// signature: zPlayerIdle::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800A3980 -> 0x800A39E8
void zPlayerIdle::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x800A3A60 -> 0x800A3CD8
void zPlayerIdle::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x800A3FA0 -> 0x800A4098
void zPlayerIdle::AddTransitionsTo(class zPlayerActionManager * manager /* r29 */, class xAnimTable * table /* r30 */, char * state /* r31 */) {
}
// signature: zPlayerIdle::AddActionTransitions(xAnimTable *)
// Range: 0x800A40A0 -> 0x800A40B0
void zPlayerIdle::AddActionTransitions() {
}
// Range: 0x800A40B0 -> 0x800A411C
unsigned int zPlayerIdle::InactiveIdleCB(class zPlayerIdle * this /* r29 */, class xAnimTransition * tran /* r30 */, class xAnimSingle * anim /* r31 */) {
}
// signature: zPlayerIdle::IdleCB(xAnimTransition *, xAnimSingle *)
// Range: 0x800A4120 -> 0x800A4154
unsigned int zPlayerIdle::IdleCB() {
}
// signature: zPlayerIdle::InactiveCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800A4160 -> 0x800A423C
unsigned int zPlayerIdle::InactiveCheck(class zPlayerIdle * this /* r29 */) {
    // References
    // -> class xGlobals * xglobals;
}
// signature: zPlayerIdle::ApplyGust(xVec3 &)
// Range: 0x800A4240 -> 0x800A42BC
void zPlayerIdle::ApplyGust(class zPlayerIdle * this /* r31 */) {
    {
        // Range: 0x800A4258 -> 0x800A42A8
        // Local variables
        class xVec3 gustXZ; // r1+0x8
    }
}
// signature: zPlayerSkidStop::AddStates(xAnimTable *)
// Range: 0x800A42C0 -> 0x800A4334
void zPlayerSkidStop::AddStates() {
}
// Range: 0x800A4340 -> 0x800A443C
void zPlayerSkidStop::AddActionTransitions(class zPlayerSkidStop * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zPlayerWalkStart::AddStates(xAnimTable *)
// Range: 0x800A4440 -> 0x800A44B0
void zPlayerWalkStart::AddStates() {
}
// Range: 0x800A44B0 -> 0x800A4614
void zPlayerWalkStart::AddActionTransitions(class zPlayerWalkStart * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zPlayerWalkStart::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800A4670 -> 0x800A46E8
void zPlayerWalkStart::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r29 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned short priority /* r31 */, unsigned int flags /* r0 */) {
}
// signature: zPlayerWalkStart::Update(float)
// Range: 0x800A4770 -> 0x800A47B8
void zPlayerWalkStart::Update(class zPlayerWalkStart * this /* r31 */) {
}
// signature: zPlayerWalkStart::StartWalkCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800A47C0 -> 0x800A47EC
unsigned int zPlayerWalkStart::StartWalkCheck() {
}
// signature: zPlayerWalk::AddStates(xAnimTable *)
// Range: 0x800A47F0 -> 0x800A4860
void zPlayerWalk::AddStates() {
}
// Range: 0x800A4860 -> 0x800A4984
void zPlayerWalk::AddActionTransitions(class zPlayerWalk * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zPlayerWalk::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800A4990 -> 0x800A49F8
void zPlayerWalk::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// signature: zPlayerWalk::Update(float)
// Range: 0x800A4A00 -> 0x800A4A14
void zPlayerWalk::Update() {
}
// Range: 0x800A4A20 -> 0x800A4B68
void zPlayerRun::AddStates(class zPlayerRun * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x800A4B70 -> 0x800A4CB0
void zPlayerRun::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x800A4CE0 -> 0x800A4E64
void zPlayerRun::AddActionTransitions(class zPlayerRun * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerRun::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800A4E70 -> 0x800A4ED8
void zPlayerRun::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x800A4EE0 -> 0x800A5050
void zPlayerRun::Update(class zPlayerRun * this /* r31 */, float dt /* f30 */) {
    // Local variables
    float mag; // f0
}
// signature: zPlayerSlip::AddStates(xAnimTable *)
// Range: 0x800A5050 -> 0x800A50C0
void zPlayerSlip::AddStates() {
}
// Range: 0x800A50C0 -> 0x800A5168
void zPlayerSlip::AddActionTransitions(class zPlayerSlip * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zPlayerSlip::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800A5170 -> 0x800A51D8
void zPlayerSlip::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// signature: zPlayerSlip::SlipCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800A5260 -> 0x800A528C
unsigned int zPlayerSlip::SlipCheck() {
}
// Range: 0x800A5290 -> 0x800A529C
void zPlayerSlip::Reset() {
}
// signature: zPlayerSlip::ApplyGust(xVec3 &)
// Range: 0x800A52A0 -> 0x800A5300
void zPlayerSlip::ApplyGust(class zPlayerSlip * this /* r31 */) {
    // Local variables
    class xVec3 gustXZ; // r1+0x8
}
// Range: 0x800A5300 -> 0x800A5400
void zPlayerJump::AddStates(class zPlayerJump * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerJump::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800A5400 -> 0x800A544C
void zPlayerJump::AddTransitionsFrom() {
    // References
    // -> static char * JUMP_START_DEFAULT_STATE;
}
// Range: 0x800A54D0 -> 0x800A5550
void zPlayerJump::AddActionTransitions(class zPlayerJump * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zPlayerJump::JumpCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800A5550 -> 0x800A5600
unsigned int zPlayerJump::JumpCheck(class zPlayerJump * this /* r31 */) {
}
// Range: 0x800A5600 -> 0x800A5628
void zPlayerJump::Begin() {
}
// Range: 0x800A5630 -> 0x800A563C
void zPlayerJump::End() {
}
// Range: 0x800A5640 -> 0x800A56CC
void zPlayerJump::Move(class zPlayerJump * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
}
// signature: zPlayerJump::ApplyGust(xVec3 &)
// Range: 0x800A56D0 -> 0x800A5748
void zPlayerJump::ApplyGust(class zPlayerJump * this /* r30 */) {
    {
        // Range: 0x800A56E0 -> 0x800A5730
        // Local variables
        class xVec3 gustXZ; // r1+0x8
    }
}
// signature: zPlayerJump::Timestep(float)
// Range: 0x800A5750 -> 0x800A577C
void zPlayerJump::Timestep() {
}
// Range: 0x800A5780 -> 0x800A58C0
void zPlayerFall::AddStates(class zPlayerFall * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x800A58C0 -> 0x800A5988
void zPlayerFall::AddInternalTransitions(class xAnimTable * table /* r24 */) {
}
// Range: 0x800A59B0 -> 0x800A5A98
void zPlayerFall::AddActionTransitions(class zPlayerFall * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zPlayerFall::AddStandardTransitionsFrom(xAnimTable *, const char *)
// Range: 0x800A5AA0 -> 0x800A5AF0
void zPlayerFall::AddStandardTransitionsFrom() {
}
// signature: zPlayerFall::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800A5AF0 -> 0x800A5B9C
void zPlayerFall::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */, enum SpecialActions specialAction /* r0 */) {
}
// Range: 0x800A5C20 -> 0x800A5C44
void zPlayerFall::Begin() {
}
// signature: zPlayerFall::FallHighCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800A5C50 -> 0x800A5C7C
unsigned int zPlayerFall::FallHighCheck() {
}
// Range: 0x800A5C80 -> 0x800A5DC8
void zPlayerLand::AddStates(class zPlayerLand * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// signature: zPlayerLand::AddInternalTransitions(xAnimTable *)
// Range: 0x800A5DF0 -> 0x800A5E60
void zPlayerLand::AddInternalTransitions() {
}
// Range: 0x800A5E60 -> 0x800A603C
void zPlayerLand::AddActionTransitions(class zPlayerLand * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x800A6040 -> 0x800A6164
void zPlayerLand::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */, enum SpecialActions specialAction /* r0 */) {
}
// signature: zPlayerLand::LandWalkCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800A6270 -> 0x800A62C4
unsigned int zPlayerLand::LandWalkCheck(class zPlayerLand * this /* r30 */) {
}
// signature: zPlayerLand::LandRunCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800A62D0 -> 0x800A6324
unsigned int zPlayerLand::LandRunCheck(class zPlayerLand * this /* r30 */) {
}
// signature: zPlayerLand::LandBeforeEnter(xAnimPlay *, xAnimState *)
// Range: 0x800A6330 -> 0x800A63A0
void zPlayerLand::LandBeforeEnter() {
    {
        // Range: 0x800A6354 -> 0x800A6394
        // Local variables
        unsigned int i; // r8
    }
}
// Range: 0x800A63A0 -> 0x800A64F0
void zPlayerTriggered::AddStates(class zPlayerTriggered * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerTriggered::AddActionTransitions(xAnimTable *)
// Range: 0x800A64F0 -> 0x800A654C
void zPlayerTriggered::AddActionTransitions() {
}
// signature: zPlayerTriggered::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800A6550 -> 0x800A6654
void zPlayerTriggered::AddTransitionsFrom(class xAnimTable * table /* r23 */, char * fromStates /* r24 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r25 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned short priority /* r27 */, float blend /* f31 */, unsigned int flags /* r28 */, unsigned int userFlags /* r29 */) {
}
// signature: zPlayerTriggered::AddStandardTransitionsFrom(xAnimTable *, const char *)
// Range: 0x800A66E0 -> 0x800A6730
void zPlayerTriggered::AddStandardTransitionsFrom() {
}
// signature: zPlayerTriggered::TriggeredAnimCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800A6730 -> 0x800A6764
unsigned int zPlayerTriggered::TriggeredAnimCheck() {
}
// Range: 0x800A6770 -> 0x800A67C8
void zPlayerTriggered::End(class zPlayerTriggered * this /* r31 */) {
    // Local variables
    class EventNotifyTriggeredAnimDone params; // r1+0x8
}
// Range: 0x800A67D0 -> 0x800A67DC
void zPlayerTriggered::Reset() {
}
// Range: 0x800A67E0 -> 0x800A68E0
void zPlayerLedge::AddStates(class zPlayerLedge * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x800A68E0 -> 0x800A69A8
void zPlayerLedge::AddInternalTransitions(class xAnimTable * table /* r27 */) {
}
// Range: 0x800A69D0 -> 0x800A6AE8
void zPlayerLedge::AddActionTransitions(class zPlayerLedge * this /* r28 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerLedge::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800A6AF0 -> 0x800A6B58
void zPlayerLedge::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x800A6BD0 -> 0x800A6C3C
void zPlayerLedge::Begin() {
}
// Range: 0x800A6C40 -> 0x800A6C80
void zPlayerLedge::End() {
}
// signature: zPlayerLedge::LedgeGrabUpCB(xAnimTransition *, xAnimSingle *)
// Range: 0x800A6C80 -> 0x800A6CA4
unsigned int zPlayerLedge::LedgeGrabUpCB() {
}
// signature: zPlayerLedge::Update(float)
// Range: 0x800A6CB0 -> 0x800A6D40
void zPlayerLedge::Update(class zPlayerLedge * this /* r31 */) {
}
// signature: zHitBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x800A6D40 -> 0x800A6DDC
void zHitBE(class xAnimState * state /* r31 */) {
    {
        // Range: 0x800A6D54 -> 0x800A6DC8
        // Local variables
        bool found; // r7
        unsigned int entryID; // r0

        {
            // Range: 0x800A6D78 -> 0x800A6DB4
            // Local variables
            unsigned int i; // r0
        }
    }
}
// signature: zPlayerHit::AddStates(xAnimTable *)
// Range: 0x800A6DE0 -> 0x800A6E50
void zPlayerHit::AddStates() {
}
// Range: 0x800A6E50 -> 0x800A6F28
void zPlayerHit::AddActionTransitions(class xAnimTable * table /* r27 */) {
}
// Range: 0x800A6F30 -> 0x800A6F50
void zPlayerHit::End() {
}
// signature: zPlayerHit::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800A6F50 -> 0x800A6FB8
void zPlayerHit::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// signature: zPlayerHit::HitCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800A7040 -> 0x800A7098
unsigned int zPlayerHit::HitCheck() {
}
// signature: zPlayerHitLaunch::AddStates(xAnimTable *)
// Range: 0x800A70A0 -> 0x800A710C
void zPlayerHitLaunch::AddStates() {
}
// Range: 0x800A7110 -> 0x800A71E0
void zPlayerHitLaunch::AddActionTransitions(class xAnimTable * table /* r27 */) {
}
// Range: 0x800A71E0 -> 0x800A722C
void zPlayerHitLaunch::End() {
}
// signature: zPlayerHitLaunch::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800A7230 -> 0x800A7298
void zPlayerHitLaunch::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// signature: zPlayerHitLaunch::LaunchCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800A7320 -> 0x800A7344
unsigned int zPlayerHitLaunch::LaunchCheck() {
}
// Range: 0x800A7350 -> 0x800A73A8
void zPlayerDefeated::Begin(class zPlayerDefeated * this /* r31 */) {
}
// Range: 0x800A73B0 -> 0x800A7538
void zPlayerDefeated::AddStates(class zPlayerDefeated * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerDefeated::DeathCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800A7540 -> 0x800A75A8
unsigned int zPlayerDefeated::DeathCheck(class zPlayerDefeated * this /* r30 */) {
}
// signature: zPlayerDefeated::DrownCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800A75B0 -> 0x800A7610
unsigned int zPlayerDefeated::DrownCheck(class zPlayerDefeated * this /* r30 */) {
}
// signature: zPlayerDefeated::Update(float)
// Range: 0x800A7610 -> 0x800A767C
void zPlayerDefeated::Update(class zPlayerDefeated * this /* r31 */) {
    // Local variables
    class xAnimSingle * single; // r4
}
// signature: zPlayerDefeated::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800A7680 -> 0x800A7730
void zPlayerDefeated::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// Range: 0x800A7830 -> 0x800A786C
void zPlayerFallToDeath::Begin(class zPlayerFallToDeath * this /* r31 */) {
}
// Range: 0x800A7870 -> 0x800A7970
void zPlayerFallToDeath::AddStates(class zPlayerFallToDeath * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerFallToDeath::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800A7970 -> 0x800A79D8
void zPlayerFallToDeath::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x800A7A60 -> 0x800A7B24
void zPlayerFallToDeath::AddInternalTransitions(class xAnimTable * table /* r27 */) {
}
// signature: zPlayerFallToDeath::StartCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800A7B30 -> 0x800A7BB4
unsigned int zPlayerFallToDeath::StartCheck() {
}
// Range: 0x800A7BC0 -> 0x800A7C38
void zPlayerFallToDeath::Update(class zPlayerFallToDeath * this /* r31 */, float dt /* f31 */) {
}
// signature: zPlayerCheat::AddStates(xAnimTable *)
// Range: 0x800A7C40 -> 0x800A7CB0
void zPlayerCheat::AddStates() {
}
// Range: 0x800A7CB0 -> 0x800A7DC4
void zPlayerCheat::AddActionTransitions(class zPlayerCheat * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x800A7DD0 -> 0x800A7ED8
void zCommonPlayerDash::AddStates(class zCommonPlayerDash * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x800A7EE0 -> 0x800A7EF0
void zCommonPlayerDash::Reset() {
}
// Range: 0x800A7EF0 -> 0x800A7FB0
void zCommonPlayerDash::Timestep(class zCommonPlayerDash * this /* r30 */, float dt /* f31 */) {
}
// Range: 0x800A7FC0 -> 0x800A8084
void zCommonPlayerDash::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x800A80B0 -> 0x800A81A4
void zCommonPlayerDash::AddActionTransitions(class zCommonPlayerDash * this /* r28 */, class xAnimTable * table /* r27 */) {
}
// signature: zCommonPlayerDash::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800A81B0 -> 0x800A8218
void zCommonPlayerDash::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// signature: zCommonPlayerDash::EndCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800A8260 -> 0x800A8284
unsigned int zCommonPlayerDash::EndCheck() {
    // Local variables
    unsigned int endIt; // r3
}
// Range: 0x800A8290 -> 0x800A82E8
void zPlayerDoubleJump::AddActionTransitions(class zPlayerDoubleJump * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x800A82F0 -> 0x800A8368
void zPlayerDoubleJump::Begin(class zPlayerDoubleJump * this /* r30 */) {
    // Local variables
    class zPlayerFall * fall; // r0
}
// Range: 0x800A8370 -> 0x800A83F8
void zPlayerDoubleJump::Timestep(class zPlayerDoubleJump * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x800A8400 -> 0x800A84F0
void zPlayerDoubleJump::Move(class zPlayerDoubleJump * this /* r28 */, class xScene * s /* r29 */, float dt /* f31 */, class xEntFrame * frame /* r30 */) {
    // Local variables
    float initVelocity; // f0

    {
        // Range: 0x800A8450 -> 0x800A8498
        // Local variables
        float newGravity; // f2
        float velocityAccelerationFactor; // f2
    }
}
// Range: 0x800A84F0 -> 0x800A8528
void zCommonPlayerInterAction::Begin(class zCommonPlayerInterAction * this /* r31 */) {
}
// Range: 0x800A8530 -> 0x800A8544
void zCommonPlayerInterAction::End() {
}
// signature: zPlayerCustomAnim::StartTranCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800A8570 -> 0x800A85B4
unsigned int zPlayerCustomAnim::StartTranCheck() {
}
// signature: zPlayerCustomAnim::StartLoopCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800A85C0 -> 0x800A8604
unsigned int zPlayerCustomAnim::StartLoopCheck() {
}
// signature: zPlayerCustomAnim::TranToTranDefCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800A8610 -> 0x800A8674
unsigned int zPlayerCustomAnim::TranToTranDefCheck(class zPlayerCustomAnim * this /* r30 */, class xAnimTransition * tran /* r31 */) {
}
// signature: zPlayerCustomAnim::TranToLoop1DefCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800A8680 -> 0x800A86F0
unsigned int zPlayerCustomAnim::TranToLoop1DefCheck(class zPlayerCustomAnim * this /* r30 */, class xAnimTransition * tran /* r31 */) {
}
// signature: zPlayerCustomAnim::TranToLoop2DefCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800A86F0 -> 0x800A8760
unsigned int zPlayerCustomAnim::TranToLoop2DefCheck(class zPlayerCustomAnim * this /* r30 */, class xAnimTransition * tran /* r31 */) {
}
// signature: zPlayerCustomAnim::TranToTranCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800A8760 -> 0x800A87D0
unsigned int zPlayerCustomAnim::TranToTranCheck(class zPlayerCustomAnim * this /* r30 */, class xAnimTransition * tran /* r31 */) {
}
// signature: zPlayerCustomAnim::TranToLoop1Check(xAnimTransition *, xAnimSingle *)
// Range: 0x800A87D0 -> 0x800A884C
unsigned int zPlayerCustomAnim::TranToLoop1Check(class zPlayerCustomAnim * this /* r30 */, class xAnimTransition * tran /* r31 */) {
}
// signature: zPlayerCustomAnim::TranToLoop2Check(xAnimTransition *, xAnimSingle *)
// Range: 0x800A8850 -> 0x800A88CC
unsigned int zPlayerCustomAnim::TranToLoop2Check(class zPlayerCustomAnim * this /* r30 */, class xAnimTransition * tran /* r31 */) {
}
// signature: zPlayerCustomAnim::LoopToLoopCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800A88D0 -> 0x800A8940
unsigned int zPlayerCustomAnim::LoopToLoopCheck(class zPlayerCustomAnim * this /* r30 */, class xAnimTransition * tran /* r31 */) {
}
// signature: zPlayerCustomAnim::LoopToTran1Check(xAnimTransition *, xAnimSingle *)
// Range: 0x800A8940 -> 0x800A89BC
unsigned int zPlayerCustomAnim::LoopToTran1Check(class zPlayerCustomAnim * this /* r30 */, class xAnimTransition * tran /* r31 */) {
}
// signature: zPlayerCustomAnim::LoopToTran2Check(xAnimTransition *, xAnimSingle *)
// Range: 0x800A89C0 -> 0x800A8A3C
unsigned int zPlayerCustomAnim::LoopToTran2Check(class zPlayerCustomAnim * this /* r30 */, class xAnimTransition * tran /* r31 */) {
}
// Range: 0x800A8A40 -> 0x800A8B80
void zPlayerCustomAnim::AddStates(class zPlayerCustomAnim * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x800A8B80 -> 0x800A8C20
void zPlayerCustomAnim::AddActionTransitions(class xAnimTable * table /* r28 */) {
}
// signature: zPlayerCustomAnim::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800A8D00 -> 0x800A8DB0
void zPlayerCustomAnim::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// Range: 0x800A8EB0 -> 0x800A91F4
void zPlayerCustomAnim::AddInternalTransitions(class xAnimTable * table /* r24 */) {
}
// Range: 0x800A9350 -> 0x800A93D0
void zPlayerCustomAnim::Setup(class zPlayerCustomAnim * this /* r30 */) {
}
// Range: 0x800A93D0 -> 0x800A93F8
void zPlayerCustomAnim::Reset() {
}
// Range: 0x800A9400 -> 0x800A9474
void zPlayerCustomAnim::Begin(class zPlayerCustomAnim * this /* r31 */) {
}
// Range: 0x800A9480 -> 0x800A9534
void zPlayerCustomAnim::Update(class zPlayerCustomAnim * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x800A9540 -> 0x800A95B8
void zPlayerCustomAnim::End(class zPlayerCustomAnim * this /* r31 */) {
}
// Range: 0x800A95C0 -> 0x800A96C0
void zPlayerCustomAnim::SetAnim(class zPlayerCustomAnim * this /* r31 */) {
    // Local variables
    void * buf; // r4
    class xAnimState * aState; // r29
}
// signature: zPlayerCustomAnim::SetBlend(xAnimTransition *)
// Range: 0x800A96C0 -> 0x800A9708
void zPlayerCustomAnim::SetBlend() {
}
// Range: 0x800A9710 -> 0x800A97C0
void zPlayerCustomAnim::SetNextState(class zPlayerCustomAnim * this /* r31 */) {
}
// Range: 0x800A97C0 -> 0x800A9824
void zPlayerCustomAnim::StartSequence(class zPlayerCustomAnim * this /* r29 */, unsigned long long seqID /* r31:r30 */) {
}
// Range: 0x800A9830 -> 0x800A9884
void zPlayerCustomAnim::PlayNext(class zPlayerCustomAnim * this /* r31 */) {
}
