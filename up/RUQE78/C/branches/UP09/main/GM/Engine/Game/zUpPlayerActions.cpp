/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zUpPlayerActions.cpp
*/
static float lastPlayerSlowDownRatio; // size: 0x4, address: 0x8082CCF4
static float lastPlayerSlowDownMeter; // size: 0x4, address: 0x8082CCF8
static float lastPlayersStickPos; // size: 0x4, address: 0x8082CCFC
static float minAccel; // size: 0x4, address: 0x807B5798
static float maxAccel; // size: 0x4, address: 0x807B579C
static float speedMultRate; // size: 0x4, address: 0x807B57A0
static float leanValue; // size: 0x4, address: 0x807B57A4
unsigned int PLAYERANIM_LAUNCH_FLYING; // size: 0x4, address: 0x807B57B4
// signature: zUPPlayerInterAction::StartInteractionCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80273380 -> 0x802733FC
unsigned int zUPPlayerInterAction::StartInteractionCheck(class zUPPlayerInterAction * this /* r29 */) {
}
// Range: 0x80273400 -> 0x80273440
void zUPPlayerInterAction::Begin(class zUPPlayerInterAction * this /* r31 */) {
}
// signature: zUPPlayerInterAction::UpdateFall(float)
// Range: 0x80273450 -> 0x80273464
void zUPPlayerInterAction::UpdateFall() {
}
// signature: zUPPlayerComboAction::StartComboCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80273470 -> 0x802735C4
unsigned int zUPPlayerComboAction::StartComboCheck(class zUPPlayerComboAction * this /* r29 */) {
    // Local variables
    class zCommonPlayer * theOtherPlayer; // r0
}
// Range: 0x802735D0 -> 0x80273644
void zUPPlayerComboAction::Begin(class zUPPlayerComboAction * this /* r30 */) {
    // Local variables
    class zCommonPlayer * theOther; // r0
}
// signature: zComboActionBeforeEnter(xAnimPlay *, xAnimState *, void *)
// Range: 0x80273670 -> 0x80273744
void zComboActionBeforeEnter(class xAnimState * state /* r29 */) {
    // Local variables
    class zCommonPlayer * player; // r30
    class zCommonPlayer * theOther; // r0
    class zAnimPackage * ap; // r3
}
// signature: zFaintBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x80273750 -> 0x802737CC
void zFaintBE(class xAnimState * state /* r30 */, void * object /* r31 */) {
    // Local variables
    class zUPPlayer * player; // r0
    class zAnimPackage * currentPackage; // r0
}
// Range: 0x802737D0 -> 0x80273934
void zPlayerFainted::Begin(class zPlayerFainted * this /* r31 */) {
    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// Range: 0x80273940 -> 0x80273AB4
void zPlayerFainted::AddStates(class zPlayerFainted * this /* r24 */, class xAnimTable * table /* r25 */) {
}
// Range: 0x80273AC0 -> 0x80273BCC
void zPlayerFainted::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x80273EC0 -> 0x8027401C
void zPlayerFainted::AddActionTransitions(class xAnimTable * table /* r24 */) {
}
// signature: zPlayerFainted::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80274270 -> 0x802742EC
void zPlayerFainted::AddTransitionsFrom() {
}
// signature: zPlayerFainted::Move(xScene *, float, xEntFrame *)
// Range: 0x802743D0 -> 0x80274498
void zPlayerFainted::Move(class zPlayerFainted * this /* r31 */, float dt /* f31 */) {
}
// signature: zPlayerFainted::BalloonRespawnCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x802744A0 -> 0x80274D60
unsigned int zPlayerFainted::BalloonRespawnCheck(class zPlayerFainted * this /* r29 */) {
    {
        // Range: 0x802744C8 -> 0x80274D3C
        // Local variables
        class zBalloonCluster * holdingBalloon; // r30
        class xVec3 pos; // r1+0x104
        bool specialSummon; // r30
        bool noBalloon; // r31

        {
            // Range: 0x80274630 -> 0x8027468C
            // Local variables
            int x; // r26
        }
        {
            // Range: 0x80274BFC -> 0x80274D14
            // Local variables
            class xVec3 cordForce; // r1+0xF8
        }
    }

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> float respawnHeight;
    // -> class xGlobals * xglobals;
}
// signature: zPlayerFainted::BalloonCB(xAnimTransition *, xAnimSingle *)
// Range: 0x80274D60 -> 0x802751A8
unsigned int zPlayerFainted::BalloonCB(class zPlayerFainted * this /* r31 */) {
    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zPlayerFainted::BalloonExternalCB(xAnimTransition *, xAnimSingle *)
// Range: 0x802751B0 -> 0x802755EC
unsigned int zPlayerFainted::BalloonExternalCB(class zPlayerFainted * this /* r31 */) {
    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x802755F0 -> 0x802755F4
static void _PlayersDeadSceneResetCB() {
}
// Range: 0x80275600 -> 0x80275B4C
void zPlayerFainted::Update(class zPlayerFainted * this /* r31 */, float dt /* f31 */) {
    // Local variables
    bool allDead; // r0

    {
        // Range: 0x80275A9C -> 0x80275AA4
        // Local variables
        int x; // r27
    }

    // References
    // -> class zPlayerInventory inventory;
    // -> class xGlobals * xglobals;
    // -> class xVec3 m_UnitAxisY;
    // -> static enum State state;
}
// Range: 0x80275B50 -> 0x80275BBC
void zPlayerFainted::End(class zPlayerFainted * this /* r31 */) {
}
// Range: 0x80275BC0 -> 0x80275BE8
bool zPlayerFainted::IsBalloonFalling() {
    // Local variables
    unsigned int animFlags; // r0
}
// signature: zPlayerIdleUP::ExtraIdleCB(xAnimTransition *, xAnimSingle *)
// Range: 0x80275BF0 -> 0x80275D38
unsigned int zPlayerIdleUP::ExtraIdleCB() {
    // Local variables
    class ExtraIdleTableEntry * variantGroup; // r31

    {
        // Range: 0x80275C18 -> 0x80275CB0
        // Local variables
        unsigned int choice; // r5

        {
            // Range: 0x80275C44 -> 0x80275CA0
            // Local variables
            int i; // r6

            {
                // Range: 0x80275C44 -> 0x80275CA0
                // Local variables
                unsigned int data; // r7
            }
        }
    }
    {
        // Range: 0x80275CB0 -> 0x80275D1C
        // Local variables
        unsigned int choice; // r6

        {
            // Range: 0x80275CC8 -> 0x80275D0C
            // Local variables
            int i; // r7
        }
    }
}
// signature: zPlayerIdleUP::Idle01BE(xAnimPlay *, xAnimState *)
// Range: 0x80275D40 -> 0x80275E14
void zPlayerIdleUP::Idle01BE() {
    // Local variables
    unsigned int hash; // r7

    {
        // Range: 0x80275DCC -> 0x80275E08
        // Local variables
        unsigned int i; // r8
    }
}
// Range: 0x80275E20 -> 0x80276474
void zPlayerIdleUP::AddStates(class zPlayerIdleUP * this /* r23 */, class xAnimTable * table /* r24 */) {
}
// Range: 0x802764A0 -> 0x80276B60
void zPlayerIdleUP::AddInternalTransitions(class xAnimTable * table /* r22 */) {
}
// Range: 0x80276F30 -> 0x8027746C
void zPlayerIdleUP::AddActionTransitions(class zPlayerIdleUP * this /* r28 */, class xAnimTable * table /* r29 */) {
}
// signature: zPlayerIdleUP::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80277470 -> 0x802775F0
void zPlayerIdleUP::AddTransitionsFrom(class xAnimTable * table /* r25 */, char * fromStates /* r26 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r28 */, unsigned short priority /* r29 */, float blend /* f31 */, unsigned int flags /* r30 */, unsigned int userFlags /* r31 */) {
}
// Range: 0x802775F0 -> 0x802776DC
void zPlayerIdleUP::Reset(class zPlayerIdleUP * this /* r30 */) {
}
// Range: 0x802776E0 -> 0x802777FC
void zPlayerIdleUP::ResetExtraIdleTable() {
    // Local variables
    int i; // r31
    int j; // r5

    {
        // Range: 0x802776F0 -> 0x802777CC
        // Local variables
        unsigned int choice; // r6

        {
            // Range: 0x80277710 -> 0x80277754
            // Local variables
            unsigned int flag; // r0
            unsigned int data; // r6
        }
        {
            // Range: 0x80277778 -> 0x802777BC
            // Local variables
            unsigned int data; // r7
        }
    }
}
// Range: 0x80277800 -> 0x80277864
void zPlayerIdleUP::Begin(class zPlayerIdleUP * this /* r31 */) {
}
// Range: 0x80277870 -> 0x802778DC
void zPlayerIdleUP::Update(class zPlayerIdleUP * this /* r31 */, float dt /* f31 */) {
    // Local variables
    unsigned int animFlags; // r0
}
// Range: 0x802778E0 -> 0x80277954
void zPlayerIdleUP::Move(class zPlayerIdleUP * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
}
// Range: 0x80277960 -> 0x802779C0
void zPlayerWalkStartUP::AddActionTransitions(class zPlayerWalkStartUP * this /* r30 */, class xAnimTable * table /* r31 */) {
}
// Range: 0x802779C0 -> 0x80277C94
void zPlayerWalkUP::AddStates(class zPlayerWalkUP * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80277CA0 -> 0x80278084
void zPlayerWalkUP::AddInternalTransitions(class xAnimTable * table /* r23 */) {
}
// Range: 0x80278310 -> 0x802789F0
void zPlayerWalkUP::AddActionTransitions(class zPlayerWalkUP * this /* r23 */, class xAnimTable * table /* r24 */) {
}
// signature: zPlayerWalkUP::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80278EB0 -> 0x80278F2C
void zPlayerWalkUP::AddTransitionsFrom() {
}
// signature: zPlayerRunUP::Turn180Check(xAnimTransition *, xAnimSingle *)
// Range: 0x80278F30 -> 0x80278F3C
unsigned int zPlayerRunUP::Turn180Check() {
}
// Range: 0x80278F40 -> 0x8027902C
unsigned int zPlayerRunUP::RunToStopCheck(class zPlayerRunUP * this /* r28 */, class xAnimTransition * tran /* r29 */, class xAnimSingle * anim /* r30 */) {
}
// Range: 0x80279030 -> 0x8027919C
void zPlayerRunUP::AddStates(class zPlayerRunUP * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x802791A0 -> 0x80279368
void zPlayerRunUP::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x80279370 -> 0x80279950
void zPlayerRunUP::AddActionTransitions(class zPlayerRunUP * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zPlayerRunUP::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80279A30 -> 0x80279AAC
void zPlayerRunUP::AddTransitionsFrom() {
}
// Range: 0x80279AB0 -> 0x80279BA0
void zPlayerJumpUP::ContextCheckForNavigation(class zPlayerJumpUP * this /* r31 */) {
    {
        // Range: 0x80279B08 -> 0x80279B5C
        // Local variables
        class zUpContextAction * ca; // r0
    }
    {
        // Range: 0x80279B5C -> 0x80279B8C
        // Local variables
        class zUpContextAction * ca; // r0
    }
}
// Range: 0x80279BA0 -> 0x80279C78
void zPlayerJumpUP::AddStates(class zPlayerJumpUP * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerJumpUP::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80279C80 -> 0x80279D08
void zPlayerJumpUP::AddTransitionsFrom() {
}
// Range: 0x80279D10 -> 0x8027A03C
void zPlayerJumpUP::AddActionTransitions(class zPlayerJumpUP * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x8027A2D0 -> 0x8027A2F4
void zPlayerJumpUP::Begin() {
}
// Range: 0x8027A300 -> 0x8027A32C
void zPlayerJumpUP::End() {
}
// signature: zPlayerJumpUP::UpdateFall(float)
// Range: 0x8027A330 -> 0x8027A370
void zPlayerJumpUP::UpdateFall() {
}
// Range: 0x8027A370 -> 0x8027A48C
void zPlayerJumpUP::Move(class zPlayerJumpUP * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
    // Local variables
    float jumpDpos; // f3

    {
        // Range: 0x8027A3A8 -> 0x8027A404
        // Local variables
        float diffY; // f1
    }
}
// signature: zPlayerJumpUP::BeginUpdate(float)
// Range: 0x8027A490 -> 0x8027A4B0
void zPlayerJumpUP::BeginUpdate() {
}
// signature: zPlayerJumpUP::GetY(float) const
// Range: 0x8027A4B0 -> 0x8027A4D4
float zPlayerJumpUP::GetY() const {
    // Local variables
    float yVal; // f1
}
// Range: 0x8027A4E0 -> 0x8027A5B0
void zPlayerAIJump::ContextCheckForNavigation(class zPlayerAIJump * this /* r31 */) {
    {
        // Range: 0x8027A518 -> 0x8027A56C
        // Local variables
        class zUpContextAction * ca; // r0
    }
    {
        // Range: 0x8027A56C -> 0x8027A59C
        // Local variables
        class zUpContextAction * ca; // r0
    }
}
// Range: 0x8027A5B0 -> 0x8027A6D0
void zPlayerAIJump::AddStates(class zPlayerAIJump * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x8027A6D0 -> 0x8027A798
void zPlayerAIJump::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// signature: zPlayerAIJump::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8027A9D0 -> 0x8027AA58
void zPlayerAIJump::AddTransitionsFrom() {
}
// Range: 0x8027AA60 -> 0x8027AD6C
void zPlayerAIJump::AddActionTransitions(class zPlayerAIJump * this /* r30 */, class xAnimTable * table /* r31 */) {
}
// Range: 0x8027ADE0 -> 0x8027AF94
void zPlayerAIJump::Begin(class zPlayerAIJump * this /* r31 */) {
    // References
    // -> class zGlobals globals;
}
// Range: 0x8027AFB0 -> 0x8027B184
void zPlayerAIJump::Move(class zPlayerAIJump * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
    {
        // Range: 0x8027B038 -> 0x8027B160
        // Local variables
        class xVec3 newPos; // r1+0x20
        unsigned int animFlags; // r0
    }
}
// Range: 0x8027B190 -> 0x8027B268
void zPlayerFallUP::AddStates(class zPlayerFallUP * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x8027B270 -> 0x8027B4E8
void zPlayerFallUP::AddActionTransitions(class zPlayerFallUP * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zPlayerFallUP::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8027B4F0 -> 0x8027B56C
void zPlayerFallUP::AddTransitionsFrom() {
}
// Range: 0x8027B570 -> 0x8027B584
void zPlayerFallUP::Begin() {
}
// signature: zPlayerFallUP::Update(float)
// Range: 0x8027B590 -> 0x8027B660
void zPlayerFallUP::Update(class zPlayerFallUP * this /* r31 */) {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x8027B660 -> 0x8027B734
void zPlayerFallUP::End() {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x8027B740 -> 0x8027B8AC
void zPlayerLandUP::AddStates(class zPlayerLandUP * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x8027B8B0 -> 0x8027BE78
void zPlayerLandUP::AddActionTransitions(class zPlayerLandUP * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zPlayerLandUP::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8027BE80 -> 0x8027BEFC
void zPlayerLandUP::AddTransitionsFrom() {
}
// signature: zPlayerLandUP::AddStandardTransitionsFrom(xAnimTable *, const char *)
// Range: 0x8027BF00 -> 0x8027BF50
void zPlayerLandUP::AddStandardTransitionsFrom() {
}
// Range: 0x8027BF50 -> 0x8027C0C4
void zUPPlayerHit::AddStates(class zUPPlayerHit * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x8027C0D0 -> 0x8027C190
void zUPPlayerHit::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x8027C190 -> 0x8027C2A0
void zUPPlayerHit::AddActionTransitions(class zUPPlayerHit * this /* r24 */, class xAnimTable * table /* r25 */) {
}
// Range: 0x8027C2A0 -> 0x8027C2BC
void zUPPlayerHit::End() {
}
// Range: 0x8027C2C0 -> 0x8027C34C
void zUPPlayerHitLaunch::AddActionTransitions(class zUPPlayerHitLaunch * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x8027C350 -> 0x8027C3A4
void zUPPlayerHitLaunch::End() {
}
// Range: 0x8027C3C0 -> 0x8027C528
void zPlayerMelee::AddStates(class zPlayerMelee * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x8027C530 -> 0x8027C76C
void zPlayerMelee::AddInternalTransitions(class xAnimTable * table /* r23 */) {
}
// Range: 0x8027C990 -> 0x8027CBC8
void zPlayerMelee::AddActionTransitions(class zPlayerMelee * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zPlayerMelee::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8027CC50 -> 0x8027CCCC
void zPlayerMelee::AddTransitionsFrom() {
}
// Range: 0x8027CCD0 -> 0x8027CD98
void zPlayerMelee::ContextCheckForActivity(class zPlayerMelee * this /* r31 */) {
    {
        // Range: 0x8027CD00 -> 0x8027CD54
        // Local variables
        class zUpContextAction * ca; // r0
    }
    {
        // Range: 0x8027CD54 -> 0x8027CD84
        // Local variables
        class zUpContextAction * ca; // r0
    }
}
// signature: zPlayerLedgeUP::LedgeUpCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8027CDA0 -> 0x8027CDA8
unsigned int zPlayerLedgeUP::LedgeUpCheck() {
}
// Range: 0x8027CDC0 -> 0x8027CEE0
void zPlayerLedgeUP::AddStates(class zPlayerLedgeUP * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x8027CEE0 -> 0x8027CFA4
void zPlayerLedgeUP::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x8027CFD0 -> 0x8027D10C
void zPlayerLedgeUP::AddActionTransitions(class zPlayerLedgeUP * this /* r24 */, class xAnimTable * table /* r25 */) {
}
// signature: zPlayerLedgeUP::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8027D1F0 -> 0x8027D26C
void zPlayerLedgeUP::AddTransitionsFrom() {
}
// Range: 0x8027D270 -> 0x8027D2FC
void zPlayerLedgeUP::Begin(class zPlayerLedgeUP * this /* r31 */) {
}
// signature: zPlayerLedgeUP::Move(xScene *, float, xEntFrame *)
// Range: 0x8027D300 -> 0x8027D330
void zPlayerLedgeUP::Move() {
}
// Range: 0x8027D330 -> 0x8027D37C
void zPlayerLedgeUP::End(class zPlayerLedgeUP * this /* r31 */) {
}
// signature: zStepUpBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x8027D390 -> 0x8027D40C
void zStepUpBE(class xAnimState * state /* r30 */, void * object /* r31 */) {
    // Local variables
    class zUPPlayer * player; // r0
    class zAnimPackage * currentPackage; // r0
}
// signature: zPlayerStepUp::AddStates(xAnimTable *)
// Range: 0x8027D410 -> 0x8027D490
void zPlayerStepUp::AddStates() {
}
// Range: 0x8027D490 -> 0x8027D570
void zPlayerStepUp::AddActionTransitions(class zPlayerStepUp * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zPlayerStepUp::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8027D570 -> 0x8027D5EC
void zPlayerStepUp::AddTransitionsFrom() {
}
// Range: 0x8027D5F0 -> 0x8027D640
void zPlayerStepUp::End(class zPlayerStepUp * this /* r31 */) {
}
// Range: 0x8027D650 -> 0x8027D7C0
void zPlayerPushPull::AddStates(class zPlayerPushPull * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x8027D7C0 -> 0x8027DA08
void zPlayerPushPull::AddActionTransitions(class zPlayerPushPull * this /* r30 */, class xAnimTable * table /* r31 */) {
}
// Range: 0x8027DA10 -> 0x8027DC44
void zPlayerPushPull::AddInternalTransitions(class xAnimTable * table /* r24 */) {
}
// signature: zPlayerPushPull::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8027DF10 -> 0x8027DF8C
void zPlayerPushPull::AddTransitionsFrom() {
}
// signature: zPlayerPushPull::Move(xScene *, float, xEntFrame *)
// Range: 0x8027DF90 -> 0x8027E36C
void zPlayerPushPull::Move() {
    // Local variables
    class xVec3 newPos; // r1+0x44
    class xVec3 newAt; // r1+0x38
    class xVec3 disp; // r1+0x2C

    // References
    // -> class xVec3 m_UnitAxisZ;
}
// Range: 0x8027E370 -> 0x8027E4E4
void zPlayerTrapped::AddStates(class zPlayerTrapped * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x8027E4F0 -> 0x8027E618
void zPlayerTrapped::AddActionTransitions(class zPlayerTrapped * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x8027E6A0 -> 0x8027E7E0
void zPlayerTrapped::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x8027E960 -> 0x8027EA34
void zPlayerTrapped::Begin(class zPlayerTrapped * this /* r30 */) {
    // References
    // -> class xVec3 m_Null;
}
// signature: zTrapBeforeEnter(xAnimPlay *, xAnimState *, void *)
// Range: 0x8027EA40 -> 0x8027EABC
void zTrapBeforeEnter(class xAnimState * state /* r30 */, void * object /* r31 */) {
    // Local variables
    class zUPPlayer * player; // r0
    class zAnimPackage * currentPackage; // r0
}
// Range: 0x8027EAD0 -> 0x8027EB44
void zPlayerTrapped::End(class zPlayerTrapped * this /* r31 */) {
}
// signature: zPlayerTrapped::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8027EB50 -> 0x8027EBCC
void zPlayerTrapped::AddTransitionsFrom() {
}
// signature: zPlayerTrapped::Move(xScene *, float, xEntFrame *)
// Range: 0x8027EC60 -> 0x8027F330
void zPlayerTrapped::Move(class zPlayerTrapped * this /* r31 */, float dt /* f30 */) {
    // Local variables
    float percentageLeft; // f31
    class xVec3 offset; // r1+0xA0
    class xVec3 entryDir; // r1+0x94
    float curAngle; // f31
    float destAngle; // f0
    class xVec2 p1; // r1+0x20
    class xVec2 p2; // r1+0x18
    float diffAngle; // f2
    float movedist; // f30
    class xVec3 entryPos; // r1+0x88
    class xVec3 entryCross; // r1+0x7C
    class xVec3 diff; // r1+0x70
    float len; // f0

    {
        // Range: 0x8027EF4C -> 0x8027EF94
        // Local variables
        float max; // f0
    }
    {
        // Range: 0x8027EF98 -> 0x8027EFE0
        // Local variables
        float max; // f0
    }

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_Null;
}
// Range: 0x8027F330 -> 0x8027F3A8
void zPlayerSwim::Setup(class zPlayerSwim * this /* r30 */) {
    // Local variables
    class xVec3 zero; // r1+0x8
}
// Range: 0x8027F3B0 -> 0x8027F720
void zPlayerSwim::AddStates(class zPlayerSwim * this /* r24 */, class xAnimTable * table /* r25 */) {
}
// Range: 0x8027F720 -> 0x8027F890
void zPlayerSwim::AddActionTransitions(class zPlayerSwim * this /* r24 */, class xAnimTable * table /* r25 */) {
}
// Range: 0x8027FA90 -> 0x8027FF6C
void zPlayerSwim::AddInternalTransitions(class xAnimTable * table /* r25 */) {
}
// Range: 0x80280270 -> 0x80280390
void zPlayerSwim::Begin(class zPlayerSwim * this /* r30 */) {
}
// signature: zSwimBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x80280390 -> 0x80280488
void zSwimBE(class xAnimState * state /* r29 */) {
    // Local variables
    class zUPPlayer * player; // r31
    class zAnimPackage * currentPackage; // r30
}
// Range: 0x80280490 -> 0x80280658
void zPlayerSwim::Move(class zPlayerSwim * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
    {
        // Range: 0x802804C4 -> 0x80280538
        // Local variables
        class xVec3 carlPos; // r1+0x8
    }
}
// Range: 0x80280660 -> 0x8028081C
void zPlayerSwim::End(class zPlayerSwim * this /* r31 */) {
}
// signature: zPlayerSwim::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80280820 -> 0x8028089C
void zPlayerSwim::AddTransitionsFrom() {
}
// signature: zPlayerSwim::ExitCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80280920 -> 0x80280A54
unsigned int zPlayerSwim::ExitCheck(class zPlayerSwim * this /* r29 */) {
}
// signature: zPlayerUntie::Move(xScene *, float, xEntFrame *)
// Range: 0x80280A60 -> 0x80280BA4
void zPlayerUntie::Move(class zPlayerUntie * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 destDir; // r1+0x14

    // References
    // -> class xVec3 m_UnitAxisZ;
}
// signature: zPlayerUntie::AddStates(xAnimTable *)
// Range: 0x80280BB0 -> 0x80280C28
void zPlayerUntie::AddStates() {
}
// signature: zPlayerUntie::AddActionTransitions(xAnimTable *)
// Range: 0x80280C30 -> 0x80280CA4
void zPlayerUntie::AddActionTransitions() {
}
// signature: zPlayerUntie::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80280CB0 -> 0x80280D2C
void zPlayerUntie::AddTransitionsFrom() {
}
// Range: 0x80280DB0 -> 0x80280DB4
void zPlayerUntie::Begin() {
}
// Range: 0x80280DC0 -> 0x80280E38
void zPlayerUntie::End(class zPlayerUntie * this /* r31 */) {
}
// signature: zKevinSpringBoardBeforeEnter(xAnimPlay *, xAnimState *, void *)
// Range: 0x80280E40 -> 0x80280EFC
void zKevinSpringBoardBeforeEnter(class xAnimState * state /* r30 */, void * object /* r31 */) {
    // Local variables
    class zUPPlayer * player; // r0
    class zKevinSpringboard * tempKSB; // r3

    {
        // Range: 0x80280E68 -> 0x80280E68
        // Local variables
        int x; // r0
    }
    {
        // Range: 0x80280EA0 -> 0x80280EE4
        // Local variables
        class zAnimPackage * currentPackage; // r0
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80280F00 -> 0x80280FEC
void zPlayerKevinSpringboard::ContextCheckForPresence(class zPlayerKevinSpringboard * this /* r30 */) {
    // Local variables
    bool pass; // r31
    class zKevinSpringboard * tempKSB; // r6

    {
        // Range: 0x80280F28 -> 0x80280F28
        // Local variables
        int x; // r0
    }
    {
        // Range: 0x80280F90 -> 0x80280FD4
        // Local variables
        class zUpContextAction * ca; // r0
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80281000 -> 0x802810E0
void zPlayerKevinSpringboard::AddStates(class zPlayerKevinSpringboard * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// signature: zPlayerKevinSpringboard::AddInternalTransitions(xAnimTable *)
// Range: 0x802810E0 -> 0x80281150
void zPlayerKevinSpringboard::AddInternalTransitions() {
}
// signature: zPlayerKevinSpringboard::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80281150 -> 0x802811D8
void zPlayerKevinSpringboard::AddTransitionsFrom() {
}
// Range: 0x802812D0 -> 0x80281498
void zPlayerKevinSpringboard::AddActionTransitions(class zPlayerKevinSpringboard * this /* r30 */, class xAnimTable * table /* r31 */) {
}
// Range: 0x80281530 -> 0x80281C04
void zPlayerKevinSpringboard::Begin(class zPlayerKevinSpringboard * this /* r29 */) {
    // Local variables
    bool bigShot; // r31
    class zKevinSpringboard * tempKSB; // r30
    class zDirection * tempDir; // r0
    class xVec3 tempVec; // r1+0x48

    {
        // Range: 0x802815F8 -> 0x802816A4
        // Local variables
        class xVec3 p3; // r1+0x3C
    }
    {
        // Range: 0x802817A4 -> 0x802818D0
        // Local variables
        float jumpHeight; // f5
        float heightOffset; // f1
    }
}
// signature: zPlayerKevinSpringboard::UpdateFall(float)
// Range: 0x80281C10 -> 0x80281C4C
void zPlayerKevinSpringboard::UpdateFall() {
}
// Range: 0x80281C50 -> 0x80281DE0
void zPlayerKevinSpringboard::Move(class zPlayerKevinSpringboard * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
    // Local variables
    class xVec3 dposVel; // r1+0x8
}
// signature: zPlayerKevinSpringboard::BeginUpdate(float)
// Range: 0x80281DE0 -> 0x80281E00
void zPlayerKevinSpringboard::BeginUpdate() {
}
// Range: 0x80281E00 -> 0x80281FBC
void zPlayerSlide::AddStates(class zPlayerSlide * this /* r24 */, class xAnimTable * table /* r25 */) {
}
// Range: 0x80281FC0 -> 0x80282094
void zPlayerSlide::AddActionTransitions(class zPlayerSlide * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x802820A0 -> 0x80282298
void zPlayerSlide::AddInternalTransitions(class xAnimTable * table /* r25 */) {
}
// signature: zPlayerSlide::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80282550 -> 0x802825CC
void zPlayerSlide::AddTransitionsFrom() {
}
// Range: 0x80282650 -> 0x8028277C
void zPlayerSlide::Begin() {
    // Local variables
    bool bothHuman; // r0

    // References
    // -> class zGlobals globals;
    // -> enum SlidePlayer slidePlayerLock;
    // -> class xGlobals * xglobals;
}
// signature: zSlideBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x80282780 -> 0x802827FC
void zSlideBE(class xAnimState * state /* r30 */, void * object /* r31 */) {
    // Local variables
    class zUPPlayer * player; // r0
    class zAnimPackage * currentPackage; // r0
}
// Range: 0x80282800 -> 0x802828C8
void zPlayerSlide::End(class zPlayerSlide * this /* r30 */) {
    // References
    // -> enum SlidePlayer slidePlayerLock;
}
// Range: 0x802828D0 -> 0x802831D4
void zPlayerSlide::Move(class zPlayerSlide * this /* r27 */, class xScene * s /* r28 */, float dt /* f28 */, class xEntFrame * frame /* r29 */) {
    // Local variables
    bool allowMovement; // r30

    {
        // Range: 0x80282A20 -> 0x8028319C
        // Local variables
        float brakeLean; // f3
        float resultingLeanValue; // f2
        float thisStickPos; // f29

        {
            // Range: 0x80282A34 -> 0x802830BC
            // Local variables
            float actualSpeedMult; // f2
            float speedMultDelta; // f4
            float idealSpeedMult; // f0
            float slowDownRatio; // f0
            class xVec3 LRMovementVec; // r1+0xCC

            {
                // Range: 0x80282A40 -> 0x80282D8C
                // Local variables
                float stickOffset; // f1
                class xVec3 mySlopeRight; // r1+0xB4
                class xVec3 mySlopeVec; // r1+0xC0
                float dotProd; // f0
                float desiredLRSpeed; // f31
            }
            {
                // Range: 0x80282D8C -> 0x80283000
                // Local variables
                class xVec3 mySlopeRight; // r1+0x84
                class xVec3 mySlopeVec; // r1+0x90
                class xVec3 closestPoint; // r1+0x9C
                float dp; // f0
                class xVec3 toHuman; // r1+0xA8
                class zCommonPlayer * humanPlayer; // r0
            }
        }
    }

    // References
    // -> static float leanValue;
    // -> static float speedMultRate;
    // -> static float maxAccel;
    // -> static float minAccel;
    // -> static float lastPlayersStickPos;
    // -> static float lastPlayerSlowDownRatio;
}
// signature: zPlayerHidden::AddStates(xAnimTable *)
// Range: 0x802831E0 -> 0x80283258
void zPlayerHidden::AddStates() {
}
// signature: zPlayerHidden::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80283260 -> 0x802832E8
void zPlayerHidden::AddTransitionsFrom() {
}
// signature: zPlayerHidden::AddActionTransitions(xAnimTable *)
// Range: 0x80283380 -> 0x802833F8
void zPlayerHidden::AddActionTransitions() {
}
// Range: 0x80283480 -> 0x80283484
void zPlayerHidden::Begin() {
}
// Range: 0x80283490 -> 0x80283494
void zPlayerHidden::End() {
}
// signature: zPlayerHidden::Update(float)
// Range: 0x802834A0 -> 0x802834A4
void zPlayerHidden::Update() {
}
// signature: zPlayerHidden::Move(xScene *, float, xEntFrame *)
// Range: 0x802834B0 -> 0x802834B4
void zPlayerHidden::Move() {
}
// Range: 0x802834C0 -> 0x80283A10
unsigned int zPlayerSummon::SummonPlayer(class zCommonPlayer * player /* r29 */, bool noBalloon /* r30 */, class zDirection * newDirection /* r31 */) {
    {
        // Range: 0x802835C4 -> 0x802836B4
        // Local variables
        float angle; // r1+0xC
        class xVec3 upVec; // r1+0x1C
        class xMat4x3 newMat; // r1+0x68
    }
    {
        // Range: 0x802836B4 -> 0x802837E8
        // Local variables
        float angle; // r1+0x8
        class xMat4x3 newMat; // r1+0x28
    }
    {
        // Range: 0x802837E8 -> 0x80283820
        // Local variables
        class zUPHumanPlayer * humanPlayer; // r0
    }
    {
        // Range: 0x80283834 -> 0x80283878
        // Local variables
        int i; // r26
    }

    // References
    // -> class Scene * primaryScene;
    // -> class xGlobals * xglobals;
    // -> float respawnHeight;
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_Null;
}
// signature: zPlayerSummon::AddStates(xAnimTable *)
// Range: 0x80283A10 -> 0x80283A88
void zPlayerSummon::AddStates() {
}
// signature: zPlayerSummon::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80283A90 -> 0x80283B18
void zPlayerSummon::AddTransitionsFrom() {
}
// signature: zPlayerSummon::AddActionTransitions(xAnimTable *)
// Range: 0x80283BC0 -> 0x80283BE4
void zPlayerSummon::AddActionTransitions() {
}
// Range: 0x80283C10 -> 0x80283DC8
void zPlayerCrank::AddStates(class zPlayerCrank * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80283DD0 -> 0x80283F24
void zPlayerCrank::AddActionTransitions(class zPlayerCrank * this /* r24 */, class xAnimTable * table /* r25 */) {
}
// Range: 0x80283FE0 -> 0x802842D0
void zPlayerCrank::AddInternalTransitions(class xAnimTable * table /* r23 */) {
}
// Range: 0x802845D0 -> 0x80284708
void zPlayerCrank::Begin(class zPlayerCrank * this /* r30 */) {
    // References
    // -> class xVec3 m_Null;
}
// signature: zCrankBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x80284710 -> 0x8028478C
void zCrankBE(class xAnimState * state /* r30 */, void * object /* r31 */) {
    // Local variables
    class zUPPlayer * player; // r0
    class zAnimPackage * currentPackage; // r0
}
// signature: zPlayerCrank::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80284790 -> 0x8028480C
void zPlayerCrank::AddTransitionsFrom() {
}
// signature: zPlayerCrank::Move(xScene *, float, xEntFrame *)
// Range: 0x80284880 -> 0x80284C0C
void zPlayerCrank::Move(class zPlayerCrank * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x80284958 -> 0x80284BF0
        // Local variables
        class xVec2 diffPos; // r1+0x18
        class xVec2 p4; // r1+0x20
        class xVec3 p4a; // r1+0x48
        class xVec2 p3; // r1+0x28
        class xVec3 p2a; // r1+0x54

        {
            // Range: 0x802849E4 -> 0x80284AA0
            // Local variables
            float max; // f0
        }
        {
            // Range: 0x80284AA4 -> 0x80284AF8
            // Local variables
            float max; // f0
        }
        {
            // Range: 0x80284AF8 -> 0x80284B50
            // Local variables
            float max; // f0
        }
        {
            // Range: 0x80284B54 -> 0x80284BA8
            // Local variables
            float max; // f0
        }
    }
}
// signature: zPlayerCrank::Update(float)
// Range: 0x80284C10 -> 0x80284C80
void zPlayerCrank::Update(class zPlayerCrank * this /* r31 */) {
    // Local variables
    unsigned int animFlag; // r0
}
// Range: 0x80284C90 -> 0x80284D38
void zPlayerCrank::End(class zPlayerCrank * this /* r31 */) {
}
// signature: zPlayerCrank::CheckRotate(xVec2, float)
// Range: 0x80284D40 -> 0x80284F4C
void zPlayerCrank::CheckRotate(class zPlayerCrank * this /* r30 */) {
    // Local variables
    unsigned int shakeCount; // r0
}
// signature: zSinkingSurfaceBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x80284F50 -> 0x80284FCC
void zSinkingSurfaceBE(class xAnimState * state /* r30 */, void * object /* r31 */) {
    // Local variables
    class zUPPlayer * player; // r0
    class zAnimPackage * currentPackage; // r0
}
// Range: 0x80284FD0 -> 0x80285218
void zCommonPlayerSinkingSurface::AddStates(class zCommonPlayerSinkingSurface * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// signature: zCommonPlayerSinkingSurface::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80285220 -> 0x8028529C
void zCommonPlayerSinkingSurface::AddTransitionsFrom() {
}
// Range: 0x80285310 -> 0x802856F0
void zCommonPlayerSinkingSurface::AddInternalTransitions(class xAnimTable * table /* r23 */) {
}
// Range: 0x802858E0 -> 0x80285A74
void zCommonPlayerSinkingSurface::AddActionTransitions(class zCommonPlayerSinkingSurface * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x80285BC0 -> 0x80285C1C
void zCommonPlayerSinkingSurface::Begin() {
}
// Range: 0x80285C20 -> 0x80285C40
void zCommonPlayerSinkingSurface::End() {
}
// Range: 0x80285C50 -> 0x80285D78
void zPlayerPlant::AddStates(class zPlayerPlant * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80285D80 -> 0x80285EA4
void zPlayerPlant::AddActionTransitions(class zPlayerPlant * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x80285EC0 -> 0x80285FC0
void zPlayerPlant::AddInternalTransitions(class xAnimTable * table /* r25 */) {
}
// Range: 0x80286030 -> 0x802861BC
void zPlayerPlant::Begin(class zPlayerPlant * this /* r31 */) {
}
// signature: zPlantBeforeEnter(xAnimPlay *, xAnimState *, void *)
// Range: 0x802861C0 -> 0x8028623C
void zPlantBeforeEnter(class xAnimState * state /* r30 */, void * object /* r31 */) {
    // Local variables
    class zUPPlayer * player; // r0
    class zAnimPackage * currentPackage; // r0
}
// Range: 0x80286240 -> 0x802862C4
void zPlayerPlant::End(class zPlayerPlant * this /* r31 */) {
}
// signature: zPlayerPlant::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x802862D0 -> 0x8028634C
void zPlayerPlant::AddTransitionsFrom() {
}
// signature: zPlayerPlant::Move(xScene *, float, xEntFrame *)
// Range: 0x802863F0 -> 0x802866E0
void zPlayerPlant::Move(class zPlayerPlant * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x80286420 -> 0x802865AC
        // Local variables
        class hkVector4 pos; // r1+0x10
    }
}
// Range: 0x802866E0 -> 0x80286898
void zPlayerCaveWorm::AddStates(class zPlayerCaveWorm * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x802868A0 -> 0x80286970
void zPlayerCaveWorm::AddActionTransitions(class zPlayerCaveWorm * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x80286970 -> 0x80286B64
void zPlayerCaveWorm::AddInternalTransitions(class xAnimTable * table /* r25 */) {
}
// Range: 0x80286C30 -> 0x80286C88
void zPlayerCaveWorm::Begin() {
}
// signature: zCaveWormBeforeEnter(xAnimPlay *, xAnimState *, void *)
// Range: 0x80286C90 -> 0x80286D0C
void zCaveWormBeforeEnter(class xAnimState * state /* r30 */, void * object /* r31 */) {
    // Local variables
    class zUPPlayer * player; // r0
    class zAnimPackage * currentPackage; // r0
}
// Range: 0x80286D10 -> 0x80286D94
void zPlayerCaveWorm::End(class zPlayerCaveWorm * this /* r31 */) {
}
// signature: zPlayerCaveWorm::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80286DA0 -> 0x80286E1C
void zPlayerCaveWorm::AddTransitionsFrom() {
}
// signature: zPlayerCaveWorm::Move(xScene *, float, xEntFrame *)
// Range: 0x80286EB0 -> 0x80287030
void zPlayerCaveWorm::Move(class zPlayerCaveWorm * this /* r31 */, float dt /* f31 */) {
}
// signature: zPlayerHouseBalloonBounceBeforeEnter(xAnimPlay *, xAnimState *, void *)
// Range: 0x80287030 -> 0x802870AC
void zPlayerHouseBalloonBounceBeforeEnter(class xAnimState * state /* r30 */, void * object /* r31 */) {
    // Local variables
    class zUPPlayer * player; // r0
    class zAnimPackage * currentPackage; // r0
}
// Range: 0x802870B0 -> 0x802871D8
void zPlayerHouseBalloonBounce::AddStates(class zPlayerHouseBalloonBounce * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// signature: zPlayerHouseBalloonBounce::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x802871E0 -> 0x80287268
void zPlayerHouseBalloonBounce::AddTransitionsFrom() {
}
// Range: 0x80287340 -> 0x80287504
void zPlayerHouseBalloonBounce::AddActionTransitions(class zPlayerHouseBalloonBounce * this /* r30 */, class xAnimTable * table /* r31 */) {
}
// Range: 0x80287510 -> 0x80287614
void zPlayerHouseBalloonBounce::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x80287740 -> 0x802878D8
void zPlayerHouseBalloonBounce::Begin(class zPlayerHouseBalloonBounce * this /* r31 */) {
    // Local variables
    float bounceHeight; // f31
}
// Range: 0x802878E0 -> 0x80287954
void zPlayerHouseBalloonBounce::End(class zPlayerHouseBalloonBounce * this /* r30 */) {
}
// signature: zPlayerHouseBalloonBounce::BeginUpdate(float)
// Range: 0x80287960 -> 0x80287980
void zPlayerHouseBalloonBounce::BeginUpdate() {
}
// signature: zPlayerHouseBalloonBounce::UpdateFall(float)
// Range: 0x80287980 -> 0x802879C8
void zPlayerHouseBalloonBounce::UpdateFall() {
}
// signature: zPlayerHouseBalloonBounce::EndUpdate(float)
// Range: 0x802879D0 -> 0x80287A28
void zPlayerHouseBalloonBounce::EndUpdate(class zPlayerHouseBalloonBounce * this /* r31 */) {
}
// Range: 0x80287A30 -> 0x80287BCC
void zPlayerHouseBalloonBounce::Move(class zPlayerHouseBalloonBounce * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
    // Local variables
    float jumpDpos; // f1
    class xVec3 dposVel; // r1+0x8

    {
        // Range: 0x80287A68 -> 0x80287AC4
        // Local variables
        float diffY; // f1
    }
}
// Range: 0x80287BD0 -> 0x80287C04
void zPlayerHouseFloat::Begin() {
}
// signature: zPlayerHouseFloat::Update(float)
// Range: 0x80287C10 -> 0x80287CA8
void zPlayerHouseFloat::Update(class zPlayerHouseFloat * this /* r31 */) {
    // Local variables
    unsigned int animFlag; // r0
}
// Range: 0x80287CB0 -> 0x80287DD0
void zPlayerHouseFloat::AddStates(class zPlayerHouseFloat * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x80287DD0 -> 0x80287E98
void zPlayerHouseFloat::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// signature: zPlayerHouseFloat::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80287F10 -> 0x80287F98
void zPlayerHouseFloat::AddTransitionsFrom() {
}
// Range: 0x80288030 -> 0x80288170
void zPlayerHouseFloat::AddActionTransitions(class zPlayerHouseFloat * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// Range: 0x80288170 -> 0x8028817C
void zPlayerHouseFloat::End() {
}
// Range: 0x80288180 -> 0x8028832C
void zPlayerHouseFloat::Move(class zPlayerHouseFloat * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
    // Local variables
    class xVec3 houseFloatDir; // r1+0x8

    // References
    // -> class xVec3 m_UnitAxisZ;
}
// Range: 0x80288330 -> 0x802884E4
void zPlayerLeverLaunchUP::AddStates(class zPlayerLeverLaunchUP * this /* r25 */, class xAnimTable * table /* r26 */) {
    // References
    // -> unsigned int PLAYERANIM_LAUNCH_FLYING;
}
// signature: zPlayerLeverLaunchUP::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x802884F0 -> 0x8028856C
void zPlayerLeverLaunchUP::AddTransitionsFrom() {
}
// Range: 0x802885E0 -> 0x802886E8
void zPlayerLeverLaunchUP::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x80288860 -> 0x802889D4
void zPlayerLeverLaunchUP::AddActionTransitions(class zPlayerLeverLaunchUP * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x80288A30 -> 0x80288A40
void zPlayerLeverLaunchUP::Setup() {
}
// Range: 0x80288A50 -> 0x80288C70
void zPlayerLeverLaunchUP::Begin(class zPlayerLeverLaunchUP * this /* r29 */) {
    // Local variables
    class zPlayer * player; // r31
    class xVec3 * target; // r30
    float peak; // f6
    float peakTime; // f0
    float fallTime; // f0
    float airTime; // f8

    // References
    // -> class zGlobals globals;
}
// Range: 0x80288C70 -> 0x80288CF4
void zPlayerLeverLaunchUP::RagdollTransitioningOn(class zPlayerLeverLaunchUP * this /* r30 */, class xEnt * upPlayer /* r31 */) {
}
// Range: 0x80288D10 -> 0x80288DBC
void zPlayerLeverLaunchUP::End(class zPlayerLeverLaunchUP * this /* r30 */) {
    {
        // Range: 0x80288D58 -> 0x80288DA4
        // Local variables
        class hkpShapePhantom * phantom; // r31
    }
}
// Range: 0x80288DC0 -> 0x80288FF4
void zPlayerLeverLaunchUP::Move(class zPlayerLeverLaunchUP * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
    {
        // Range: 0x80288E00 -> 0x80288EE8
        // Local variables
        class xVec3 dpos; // r1+0x8
        class xVec3 playerPos; // r1+0x14
    }

    // References
    // -> unsigned int PLAYERANIM_LAUNCH_FLYING;
}
// signature: zPlayerRagdollFallUP::AddStates(xAnimTable *)
// Range: 0x80289010 -> 0x8028908C
void zPlayerRagdollFallUP::AddStates() {
    // References
    // -> unsigned int PLAYERANIM_LAUNCH_FLYING;
}
// signature: zPlayerRagdollFallUP::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80289090 -> 0x8028910C
void zPlayerRagdollFallUP::AddTransitionsFrom() {
}
// signature: zPlayerRagdollFallUP::AddInternalTransitions(xAnimTable *)
// Range: 0x802891A0 -> 0x802891A4
void zPlayerRagdollFallUP::AddInternalTransitions() {
}
// signature: zPlayerRagdollFallUP::AddActionTransitions(xAnimTable *)
// Range: 0x802891B0 -> 0x8028921C
void zPlayerRagdollFallUP::AddActionTransitions() {
}
// Range: 0x80289310 -> 0x80289354
void zPlayerRagdollFallUP::Begin() {
}
// Range: 0x80289360 -> 0x802893CC
void zPlayerRagdollFallUP::Update(class zPlayerRagdollFallUP * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x802893D0 -> 0x802893EC
void zPlayerRagdollFallUP::End() {
}
// Range: 0x802893F0 -> 0x802894C0
void zPlayerRagdollFallUP::RagdollTransitioningOn(class xEnt * upPlayer /* r29 */) {
    // Local variables
    class xVec3 & initialVelocity; // r0
    class xVec3 & initialAngularVelocity; // r0
    class hkVector4 linearVelocity; // r1+0x20
    class hkVector4 angularVelocity; // r1+0x10
}
