/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCommonPlayerActions.cpp
*/
static char * JUMP_START_DEFAULT_STATE; // size: 0x4, address: 0x806F43A0
static float JUMP_HEIGHT; // size: 0x4, address: 0x806F43A4
static float JUMP_VELOCITY; // size: 0x4, address: 0x8076C5F8
static float JUMP_DECEL; // size: 0x4, address: 0x8076C5FC
float zPlayerDodge_delay; // size: 0x4, address: 0x806F43A8
// signature: zCommonPlayerActionsNormalTransitions(zPlayerActionManager *, xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int)
// Range: 0x800B6330 -> 0x800B640C
void zCommonPlayerActionsNormalTransitions(class zPlayerActionManager * manager /* r23 */, class xAnimTable * table /* r24 */, char * fromState /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int userFlags /* r29 */) {
}
// Range: 0x800B6410 -> 0x800B64D4
void zCommonPlayerActionsAirTransitions(class zPlayerActionManager * manager /* r27 */, class xAnimTable * table /* r28 */, char * transitionString /* r29 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */) {
}
// signature: zCommonPlayerAction::LandCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800B64E0 -> 0x800B6530
unsigned int zCommonPlayerAction::LandCheck() {
}
// signature: zCommonPlayerAction::FallCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800B6530 -> 0x800B6574
unsigned int zCommonPlayerAction::FallCheck() {
}
// signature: zCommonPlayerAction::WalkCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800B6580 -> 0x800B65D8
unsigned int zCommonPlayerAction::WalkCheck() {
}
// signature: zCommonPlayerAction::RunCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800B65E0 -> 0x800B6638
unsigned int zCommonPlayerAction::RunCheck() {
}
// signature: zCommonPlayerAction::ApplyGust(xVec3 &)
// Range: 0x800B6640 -> 0x800B6644
void zCommonPlayerAction::ApplyGust() {
}
// signature: zCommonPlayerAction::ApplyBasicPhysics(const xVec3 &)
// Range: 0x800B6650 -> 0x800B66A0
void zCommonPlayerAction::ApplyBasicPhysics() {
}
// Range: 0x800B66A0 -> 0x800B66A4
void zPlayerIdle::AddTweaks() {
}
// Range: 0x800B66B0 -> 0x800B6758
void zPlayerIdle::Reset(class zPlayerIdle * this /* r31 */) {
}
// signature: zPlayerIdle::AddStates(xAnimTable *)
// Range: 0x800B6760 -> 0x800B67C8
void zPlayerIdle::AddStates() {
}
// signature: zPlayerIdle::Move(xScene *, float, xEntFrame *)
// Range: 0x800B67D0 -> 0x800B67D4
void zPlayerIdle::Move() {
}
// Range: 0x800B67E0 -> 0x800B6818
void zPlayerIdle::Begin() {
}
// Range: 0x800B6820 -> 0x800B6858
void zPlayerIdle::End() {
    // Local variables
    class zPlayerFall * fall; // r0
}
// signature: zPlayerIdle::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800B6860 -> 0x800B68E0
void zPlayerIdle::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r29 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned short priority /* r31 */, unsigned int flags /* r0 */) {
}
// Range: 0x800B6960 -> 0x800B6BD8
void zPlayerIdle::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x800B7170 -> 0x800B72D8
void zPlayerIdle::AddActionTransitions(class xAnimTable * table /* r29 */) {
}
// signature: zPlayerIdle::IdleCB(xAnimTransition *, xAnimSingle *)
// Range: 0x800B72E0 -> 0x800B7314
unsigned int zPlayerIdle::IdleCB() {
}
// signature: zPlayerIdle::IdleAnyCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800B7320 -> 0x800B7338
unsigned int zPlayerIdle::IdleAnyCheck() {
}
// signature: zPlayerIdle::ApplyGust(xVec3 &)
// Range: 0x800B7340 -> 0x800B73AC
void zPlayerIdle::ApplyGust() {
    {
        // Range: 0x800B7348 -> 0x800B73A4
        // Local variables
        class xVec3 gustXZ; // r1+0x8
    }
}
// signature: zPlayerSkidStop::AddStates(xAnimTable *)
// Range: 0x800B73B0 -> 0x800B7420
void zPlayerSkidStop::AddStates() {
}
// Range: 0x800B7420 -> 0x800B7574
void zPlayerSkidStop::AddActionTransitions(class zPlayerSkidStop * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zPlayerSkidStop::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800B7580 -> 0x800B7584
void zPlayerSkidStop::AddTransitionsFrom() {
}
// Range: 0x800B7590 -> 0x800B7594
void zPlayerSkidStop::Begin() {
}
// signature: zPlayerWalkStart::AddStates(xAnimTable *)
// Range: 0x800B75A0 -> 0x800B760C
void zPlayerWalkStart::AddStates() {
}
// Range: 0x800B7610 -> 0x800B7870
void zPlayerWalkStart::AddActionTransitions(class zPlayerWalkStart * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerWalkStart::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800B78C0 -> 0x800B7940
void zPlayerWalkStart::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r29 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned short priority /* r31 */, unsigned int flags /* r0 */) {
}
// Range: 0x800B79D0 -> 0x800B79D4
void zPlayerWalkStart::Begin() {
}
// Range: 0x800B79E0 -> 0x800B79E4
void zPlayerWalkStart::End() {
}
// signature: zPlayerWalkStart::Update(float)
// Range: 0x800B79F0 -> 0x800B7A38
void zPlayerWalkStart::Update(class zPlayerWalkStart * this /* r31 */) {
}
// signature: zPlayerWalk::AddStates(xAnimTable *)
// Range: 0x800B7A40 -> 0x800B7AAC
void zPlayerWalk::AddStates() {
}
// Range: 0x800B7AB0 -> 0x800B7C88
void zPlayerWalk::AddActionTransitions(class zPlayerWalk * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerWalk::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800B7C90 -> 0x800B7D00
void zPlayerWalk::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// signature: zPlayerWalk::Update(float)
// Range: 0x800B7DA0 -> 0x800B7DB4
void zPlayerWalk::Update() {
}
// Range: 0x800B7DC0 -> 0x800B7DC4
void zPlayerWalk::Begin() {
}
// Range: 0x800B7DD0 -> 0x800B7DD4
void zPlayerWalk::End() {
}
// Range: 0x800B7DE0 -> 0x800B7F18
void zPlayerRun::AddStates(class zPlayerRun * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x800B7F20 -> 0x800B8060
void zPlayerRun::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x800B80A0 -> 0x800B8298
void zPlayerRun::AddActionTransitions(class zPlayerRun * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerRun::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800B82A0 -> 0x800B8310
void zPlayerRun::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x800B83B0 -> 0x800B83C0
void zPlayerRun::Begin() {
}
// Range: 0x800B83C0 -> 0x800B83C4
void zPlayerRun::End() {
}
// Range: 0x800B83D0 -> 0x800B8510
void zPlayerRun::Update(class zPlayerRun * this /* r31 */, float dt /* f30 */) {
    // Local variables
    float mag; // f0
}
// signature: zPlayerSlip::AddStates(xAnimTable *)
// Range: 0x800B8510 -> 0x800B857C
void zPlayerSlip::AddStates() {
}
// Range: 0x800B8580 -> 0x800B86E8
void zPlayerSlip::AddActionTransitions(class zPlayerSlip * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zPlayerSlip::AddStandardTransitionsFrom(xAnimTable *, const char *)
// Range: 0x800B86F0 -> 0x800B8740
void zPlayerSlip::AddStandardTransitionsFrom() {
}
// signature: zPlayerSlip::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800B8740 -> 0x800B87B0
void zPlayerSlip::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x800B8840 -> 0x800B884C
void zPlayerSlip::Reset() {
}
// Range: 0x800B8850 -> 0x800B8854
void zPlayerSlip::Begin() {
}
// signature: zPlayerSlip::Timestep(float)
// Range: 0x800B8860 -> 0x800B8864
void zPlayerSlip::Timestep() {
}
// signature: zPlayerSlip::ApplyGust(xVec3 &)
// Range: 0x800B8870 -> 0x800B88C4
void zPlayerSlip::ApplyGust() {
    // Local variables
    class xVec3 gustXZ; // r1+0x8
}
// Range: 0x800B88D0 -> 0x800B89C4
void zPlayerJump::AddStates(class zPlayerJump * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerJump::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800B89D0 -> 0x800B8A1C
void zPlayerJump::AddTransitionsFrom() {
    // References
    // -> static char * JUMP_START_DEFAULT_STATE;
}
// Range: 0x800B8B00 -> 0x800B8BCC
void zPlayerJump::AddActionTransitions(class zPlayerJump * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x800B8BD0 -> 0x800B8BF8
void zPlayerJump::Begin() {
}
// Range: 0x800B8C00 -> 0x800B8C0C
void zPlayerJump::End() {
}
// signature: zPlayerJump::Update(float)
// Range: 0x800B8C10 -> 0x800B8C24
void zPlayerJump::Update() {
}
// Range: 0x800B8C30 -> 0x800B8D6C
void zPlayerJump::Move(class zPlayerJump * this /* r28 */, class xScene * s /* r29 */, float dt /* f29 */, class xEntFrame * frame /* r30 */) {
}
// signature: zPlayerJump::ApplyGust(xVec3 &)
// Range: 0x800B8D70 -> 0x800B8DD0
void zPlayerJump::ApplyGust() {
    {
        // Range: 0x800B8D74 -> 0x800B8DC8
        // Local variables
        class xVec3 gustXZ; // r1+0x8
    }
}
// signature: zPlayerJump::Timestep(float)
// Range: 0x800B8DD0 -> 0x800B8DFC
void zPlayerJump::Timestep() {
}
// Range: 0x800B8E00 -> 0x800B8F30
void zPlayerFall::AddStates(class zPlayerFall * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x800B8F30 -> 0x800B8FF8
void zPlayerFall::AddInternalTransitions(class xAnimTable * table /* r24 */) {
}
// Range: 0x800B9050 -> 0x800B9174
void zPlayerFall::AddActionTransitions(class zPlayerFall * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zPlayerFall::AddStandardTransitionsFrom(xAnimTable *, const char *)
// Range: 0x800B9180 -> 0x800B91D0
void zPlayerFall::AddStandardTransitionsFrom() {
}
// signature: zPlayerFall::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800B91D0 -> 0x800B9284
void zPlayerFall::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */, enum SpecialActions specialAction /* r0 */) {
}
// Range: 0x800B9330 -> 0x800B9354
void zPlayerFall::Begin() {
}
// Range: 0x800B9360 -> 0x800B93E4
void zPlayerFall::Move(class zPlayerFall * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
    // Local variables
    class zPlayerBoardLaunch * boardLaunch; // r0
}
// Range: 0x800B93F0 -> 0x800B93F4
void zPlayerFall::End() {
}
// Range: 0x800B9400 -> 0x800B9538
void zPlayerLand::AddStates(class zPlayerLand * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// signature: zPlayerLand::AddInternalTransitions(xAnimTable *)
// Range: 0x800B95C0 -> 0x800B9630
void zPlayerLand::AddInternalTransitions() {
}
// Range: 0x800B9630 -> 0x800B9870
void zPlayerLand::AddActionTransitions(class zPlayerLand * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x800B9870 -> 0x800B9994
void zPlayerLand::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */, enum SpecialActions specialAction /* r0 */) {
}
// signature: zPlayerLand::AddStandardTransitionsFrom(xAnimTable *, const char *)
// Range: 0x800B9B60 -> 0x800B9BB0
void zPlayerLand::AddStandardTransitionsFrom() {
}
// Range: 0x800B9BB0 -> 0x800B9BB4
void zPlayerLand::Begin() {
}
// signature: zPlayerLand::LandWalkCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800B9BC0 -> 0x800B9C30
unsigned int zPlayerLand::LandWalkCheck() {
}
// signature: zPlayerLand::LandRunCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800B9C30 -> 0x800B9CA0
unsigned int zPlayerLand::LandRunCheck() {
}
// Range: 0x800B9CA0 -> 0x800B9CAC
void zPlayerLand::Reset() {
}
// Range: 0x800B9CB0 -> 0x800B9DF0
void zPlayerTriggered::AddStates(class zPlayerTriggered * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerTriggered::AddActionTransitions(xAnimTable *)
// Range: 0x800B9DF0 -> 0x800B9E4C
void zPlayerTriggered::AddActionTransitions() {
}
// signature: zPlayerTriggered::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800B9E50 -> 0x800B9F54
void zPlayerTriggered::AddTransitionsFrom(class xAnimTable * table /* r23 */, char * fromStates /* r24 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r25 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned short priority /* r27 */, float blend /* f31 */, unsigned int flags /* r28 */, unsigned int userFlags /* r29 */) {
}
// signature: zPlayerTriggered::AddStandardTransitionsFrom(xAnimTable *, const char *)
// Range: 0x800BA000 -> 0x800BA050
void zPlayerTriggered::AddStandardTransitionsFrom() {
}
// Range: 0x800BA050 -> 0x800BA0A8
void zPlayerTriggered::End(class zPlayerTriggered * this /* r31 */) {
    // Local variables
    class EventNotifyTriggeredAnimDone params; // r1+0x8
}
// Range: 0x800BA0B0 -> 0x800BA0BC
void zPlayerTriggered::Reset() {
}
// Range: 0x800BA0C0 -> 0x800BA1F0
void zPlayerDodge::AddStates(class zPlayerDodge * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x800BA1F0 -> 0x800BA3B4
void zPlayerDodge::AddActionTransitions(class zPlayerDodge * this /* r25 */, class xAnimTable * table /* r26 */) {
    // References
    // -> static char * JUMP_START_DEFAULT_STATE;
}
// signature: zPlayerDodge::AddStandardTransitionsFrom(xAnimTable *, const char *)
// Range: 0x800BA580 -> 0x800BA5D0
void zPlayerDodge::AddStandardTransitionsFrom() {
}
// signature: zPlayerDodge::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800BA5D0 -> 0x800BA6E0
void zPlayerDodge::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// signature: zPlayerDodge::Move(xScene *, float, xEntFrame *)
// Range: 0x800BA920 -> 0x800BA95C
void zPlayerDodge::Move() {
}
// Range: 0x800BA970 -> 0x800BAA30
void zPlayerDodge::Begin(class zPlayerDodge * this /* r30 */) {
}
// Range: 0x800BAA30 -> 0x800BAAB4
void zPlayerDodge::End(class zPlayerDodge * this /* r29 */) {
}
// signature: zPlayerDodge::Timestep(float)
// Range: 0x800BAAC0 -> 0x800BAAC4
void zPlayerDodge::Timestep() {
}
// Range: 0x800BAAD0 -> 0x800BAADC
void zPlayerDodge::Reset() {
}
// Range: 0x800BAAE0 -> 0x800BABD4
void zPlayerLedge::AddStates(class zPlayerLedge * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x800BABE0 -> 0x800BACA4
void zPlayerLedge::AddInternalTransitions(class xAnimTable * table /* r27 */) {
}
// Range: 0x800BACE0 -> 0x800BAE34
void zPlayerLedge::AddActionTransitions(class zPlayerLedge * this /* r28 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerLedge::AddStandardTransitionsFrom(xAnimTable *, const char *)
// Range: 0x800BAE40 -> 0x800BAE90
void zPlayerLedge::AddStandardTransitionsFrom() {
}
// signature: zPlayerLedge::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800BAE90 -> 0x800BAF00
void zPlayerLedge::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x800BAF80 -> 0x800BAFEC
void zPlayerLedge::Begin() {
}
// Range: 0x800BAFF0 -> 0x800BB030
void zPlayerLedge::End() {
}
// signature: zPlayerLedge::Update(float)
// Range: 0x800BB030 -> 0x800BB0C0
void zPlayerLedge::Update(class zPlayerLedge * this /* r31 */) {
}
// signature: zPlayerLedge::UpdateFall(float)
// Range: 0x800BB0C0 -> 0x800BB0D4
void zPlayerLedge::UpdateFall() {
}
// Range: 0x800BB0E0 -> 0x800BB37C
void zPlayerHitLaunch::AddStates(class zPlayerHitLaunch * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x800BB380 -> 0x800BB6B4
void zPlayerHitLaunch::AddInternalTransitions(class xAnimTable * table /* r25 */) {
}
// Range: 0x800BB910 -> 0x800BBAB8
void zPlayerHitLaunch::AddActionTransitions(class zPlayerHitLaunch * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x800BBAC0 -> 0x800BBAD4
void zPlayerHitLaunch::Begin() {
}
// signature: zPlayerHitLaunch::Move(xScene *, float, xEntFrame *)
// Range: 0x800BBAE0 -> 0x800BBAE4
void zPlayerHitLaunch::Move() {
}
// Range: 0x800BBAF0 -> 0x800BBB40
void zPlayerHitLaunch::End() {
    // References
    // -> class zGlobals globals;
}
// signature: zPlayerHitLaunch::AddStandardTransitionsFrom(xAnimTable *, const char *)
// Range: 0x800BBB40 -> 0x800BBB90
void zPlayerHitLaunch::AddStandardTransitionsFrom() {
}
// signature: zPlayerHitLaunch::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800BBB90 -> 0x800BBC40
void zPlayerHitLaunch::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// signature: zPlayerHitLaunch::LaunchFrontCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800BBC40 -> 0x800BBC58
unsigned int zPlayerHitLaunch::LaunchFrontCheck() {
}
// signature: zPlayerHitLaunch::LaunchBackCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800BBC60 -> 0x800BBC78
unsigned int zPlayerHitLaunch::LaunchBackCheck() {
}
// Range: 0x800BBC90 -> 0x800BBD04
void zPlayerDefeated::Begin(class zPlayerDefeated * this /* r30 */) {
}
// Range: 0x800BBD10 -> 0x800BBE7C
void zPlayerDefeated::AddStates(class zPlayerDefeated * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerDefeated::Update(float)
// Range: 0x800BBE80 -> 0x800BBEEC
void zPlayerDefeated::Update(class zPlayerDefeated * this /* r31 */) {
    // Local variables
    class xAnimSingle * single; // r4
}
// signature: zPlayerDefeated::AddInternalTransitions(xAnimTable *)
// Range: 0x800BBEF0 -> 0x800BBEF4
void zPlayerDefeated::AddInternalTransitions() {
}
// Range: 0x800BBF00 -> 0x800BBF10
void zPlayerDefeated::End() {
}
// signature: zPlayerDefeated::AddActionTransitions(xAnimTable *)
// Range: 0x800BBF10 -> 0x800BBF14
void zPlayerDefeated::AddActionTransitions() {
}
// signature: zPlayerDefeated::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800BBF20 -> 0x800BBFD0
void zPlayerDefeated::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// signature: zPlayerDefeated::AddMovingTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *))
// Range: 0x800BC130 -> 0x800BC190
void zPlayerDefeated::AddMovingTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r11 */) {
}
// signature: zPlayerDefeated::AddLandFrontTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *))
// Range: 0x800BC190 -> 0x800BC1F0
void zPlayerDefeated::AddLandFrontTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r11 */) {
}
// signature: zPlayerDefeated::AddLandBackTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *))
// Range: 0x800BC2D0 -> 0x800BC330
void zPlayerDefeated::AddLandBackTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r11 */) {
}
// Range: 0x800BC330 -> 0x800BC338
void zPlayerFallToDeath::Begin() {
}
// Range: 0x800BC340 -> 0x800BC3F8
void zPlayerFallToDeath::AddStates(class zPlayerFallToDeath * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerFallToDeath::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800BC400 -> 0x800BC470
void zPlayerFallToDeath::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// signature: zPlayerFallToDeath::AddInternalTransitions(xAnimTable *)
// Range: 0x800BC540 -> 0x800BC5B4
void zPlayerFallToDeath::AddInternalTransitions() {
}
// signature: zPlayerFallToDeath::Update(float)
// Range: 0x800BC5C0 -> 0x800BC5E0
void zPlayerFallToDeath::Update() {
}
// signature: zPlayerCheat::AddStates(xAnimTable *)
// Range: 0x800BC5E0 -> 0x800BC64C
void zPlayerCheat::AddStates() {
}
// Range: 0x800BC650 -> 0x800BC764
void zPlayerCheat::AddActionTransitions(class zPlayerCheat * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x800BC870 -> 0x800BC8D4
void zPlayerCheat::Begin(class zPlayerCheat * this /* r30 */) {
    // Local variables
    class zCarryableObject * cobj; // r31
}
// Range: 0x800BC8E0 -> 0x800BC94C
void zPlayerCheat::End(class zPlayerCheat * this /* r31 */) {
}
// Range: 0x800BC950 -> 0x800BC988
void zPlayerInteraction::Begin() {
}
// Range: 0x800BC990 -> 0x800BC9F0
void zPlayerInteraction::End(class zPlayerInteraction * this /* r31 */) {
}
// Range: 0x800BCA10 -> 0x800BCB04
void zPlayerSwitchLever::AddStates(class zPlayerSwitchLever * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerSwitchLever::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800BCB10 -> 0x800BCBC0
void zPlayerSwitchLever::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// signature: zPlayerSwitchLever::AddInternalTransitions(xAnimTable *)
// Range: 0x800BCD60 -> 0x800BCDD0
void zPlayerSwitchLever::AddInternalTransitions() {
}
// Range: 0x800BCDF0 -> 0x800BCF9C
void zPlayerSwitchLever::AddActionTransitions(class zPlayerSwitchLever * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// signature: zPlayerSwitchLever::Update(float)
// Range: 0x800BD030 -> 0x800BD0D4
void zPlayerSwitchLever::Update(class zPlayerSwitchLever * this /* r31 */) {
}
// Range: 0x800BD0F0 -> 0x800BD1F4
void zPlayerSwitchLever::Begin(class zPlayerSwitchLever * this /* r31 */) {
}
// Range: 0x800BD200 -> 0x800BD270
void zPlayerSwitchLever::End(class zPlayerSwitchLever * this /* r31 */) {
}
// Range: 0x800BD270 -> 0x800BD36C
void zCommonPlayerDash::AddStates(class zCommonPlayerDash * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x800BD370 -> 0x800BD380
void zCommonPlayerDash::Reset() {
}
// signature: zCommonPlayerDash::Update(float)
// Range: 0x800BD380 -> 0x800BD384
void zCommonPlayerDash::Update() {
}
// Range: 0x800BD390 -> 0x800BD454
void zCommonPlayerDash::Timestep(class zCommonPlayerDash * this /* r29 */, float dt /* f31 */) {
}
// Range: 0x800BD470 -> 0x800BD534
void zCommonPlayerDash::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x800BD570 -> 0x800BD68C
void zCommonPlayerDash::AddActionTransitions(class zCommonPlayerDash * this /* r28 */, class xAnimTable * table /* r27 */) {
}
// signature: zCommonPlayerDash::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800BD690 -> 0x800BD700
void zCommonPlayerDash::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// signature: zCommonPlayerDash::StartCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800BD7A0 -> 0x800BD808
unsigned int zCommonPlayerDash::StartCheck(class zCommonPlayerDash * this /* r31 */) {
}
// signature: zCommonPlayerDash::Move(xScene *, float, xEntFrame *)
// Range: 0x800BD810 -> 0x800BD814
void zCommonPlayerDash::Move() {
}
// Range: 0x800BD820 -> 0x800BD824
void zCommonPlayerDash::Begin() {
}
// Range: 0x800BD830 -> 0x800BD840
void zCommonPlayerDash::End() {
}
// Range: 0x800BD840 -> 0x800BD8F8
void zPlayerMGWin::AddStates(class zPlayerMGWin * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerMGWin::AddInternalTransitions(xAnimTable *)
// Range: 0x800BD900 -> 0x800BD970
void zPlayerMGWin::AddInternalTransitions() {
}
// signature: zPlayerMGWin::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800BD970 -> 0x800BD9F0
void zPlayerMGWin::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r29 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned short priority /* r31 */, unsigned int flags /* r0 */) {
}
// Range: 0x800BDA70 -> 0x800BDA84
void zPlayerMGWin::Begin() {
}
// signature: zPlayerMGWin::Update(float)
// Range: 0x800BDA90 -> 0x800BDA94
void zPlayerMGWin::Update() {
}
// Range: 0x800BDAA0 -> 0x800BDB58
void zPlayerMGLose::AddStates(class zPlayerMGLose * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerMGLose::AddInternalTransitions(xAnimTable *)
// Range: 0x800BDB60 -> 0x800BDBD0
void zPlayerMGLose::AddInternalTransitions() {
}
// signature: zPlayerMGLose::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800BDBD0 -> 0x800BDC50
void zPlayerMGLose::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r29 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned short priority /* r31 */, unsigned int flags /* r0 */) {
}
// Range: 0x800BDCD0 -> 0x800BDCE4
void zPlayerMGLose::Begin() {
}
// signature: zPlayerMGLose::Update(float)
// Range: 0x800BDCF0 -> 0x800BDCF4
void zPlayerMGLose::Update() {
}
// signature: zPlayerDoubleJump::AddStates(xAnimTable *)
// Range: 0x800BDD00 -> 0x800BDD04
void zPlayerDoubleJump::AddStates() {
}
// Range: 0x800BDD10 -> 0x800BDDC8
void zPlayerDoubleJump::AddActionTransitions(class zPlayerDoubleJump * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x800BDDD0 -> 0x800BDEAC
void zPlayerDoubleJump::Begin(class zPlayerDoubleJump * this /* r31 */) {
    // Local variables
    class zPlayerFall * fall; // r0
}
// signature: zPlayerDoubleJump::Update(float)
// Range: 0x800BDEB0 -> 0x800BDEC4
void zPlayerDoubleJump::Update() {
}
// Range: 0x800BDED0 -> 0x800BDEE4
void zPlayerDoubleJump::End() {
}
// signature: zPlayerDoubleJump::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800BDEF0 -> 0x800BDEF4
void zPlayerDoubleJump::AddTransitionsFrom() {
}
// Range: 0x800BDF00 -> 0x800BDF0C
void zPlayerDoubleJump::Reset() {
}
// Range: 0x800BDF10 -> 0x800BDF98
void zPlayerDoubleJump::Timestep(class zPlayerDoubleJump * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x800BDFA0 -> 0x800BE178
void zPlayerDoubleJump::Move(class zPlayerDoubleJump * this /* r27 */, class xScene * s /* r28 */, float dt /* f31 */, class xEntFrame * frame /* r29 */) {
    // Local variables
    float initVelocity; // f0

    {
        // Range: 0x800BE0DC -> 0x800BE114
        // Local variables
        float newGravity; // f2
        float velocityAccelerationFactor; // f2
    }
}
// signature: zPlayerDoubleJump::ApplyGust(xVec3 &)
// Range: 0x800BE180 -> 0x800BE184
void zPlayerDoubleJump::ApplyGust() {
}
