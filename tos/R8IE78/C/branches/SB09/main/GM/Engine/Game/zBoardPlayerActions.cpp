/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zBoardPlayerActions.cpp
*/
float DOUBLE_JUMP_VELOCITY; // size: 0x4, address: 0x806B4F10
float DOUBLE_JUMP_DECEL; // size: 0x4, address: 0x8072EF00
float SLIDE_JUMP_HEIGHT; // size: 0x4, address: 0x806B4F14
float SLIDE_JUMP_K_HEIGHT; // size: 0x4, address: 0x806B4F18
float SLIDE_JUMP_VELOCITY; // size: 0x4, address: 0x8072EF04
float SLIDE_JUMP_K_VELOCITY; // size: 0x4, address: 0x8072EF08
float SLIDE_JUMP_DECEL; // size: 0x4, address: 0x8072EF0C
float lastPlayerSlowDownRatio; // size: 0x4, address: 0x80733FAC
float lastPlayerSlowDownMeter; // size: 0x4, address: 0x80733FB0
float lastPlayersStickPos; // size: 0x4, address: 0x80733FB4
float minAccel; // size: 0x4, address: 0x806B4F1C
float maxAccel; // size: 0x4, address: 0x806B4F20
float speedMultRate; // size: 0x4, address: 0x806B4F24
float leanValue; // size: 0x4, address: 0x806B4F28
// signature: zBoardAnimPackageBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x8005A180 -> 0x8005A4B0
void zBoardAnimPackageBE(class xAnimState * state /* r30 */, void * object /* r31 */) {
    // Local variables
    class zBoardPlayer * player; // r0
    class zAnimPackage * currentPackage; // r29
    unsigned long long animPackageID; // r0:r0
    class zAnimPackage * defaultPackage; // r28

    {
        // Range: 0x8005A2BC -> 0x8005A328
        // Local variables
        int i; // r27

        {
            // Range: 0x8005A2BC -> 0x8005A328
            // Local variables
            void * rawData; // r4
        }
    }
    {
        // Range: 0x8005A328 -> 0x8005A384
        // Local variables
        void * rawData; // r4
    }
    {
        // Range: 0x8005A384 -> 0x8005A3D4
        // Local variables
        bool validData; // r0
        int numVFXData; // r1+0x18
        class xAnimVFX_Effect * vfxData; // r1+0x1C
    }
    {
        // Range: 0x8005A3D8 -> 0x8005A418
        // Local variables
        bool validData; // r0
        int numVFXData; // r1+0x10
        class xAnimVFX_Effect * vfxData; // r1+0x14
    }
    {
        // Range: 0x8005A418 -> 0x8005A460
        // Local variables
        bool validData; // r0
        class xAnimSoundEffect * soundData; // r1+0xC
    }
    {
        // Range: 0x8005A464 -> 0x8005A49C
        // Local variables
        bool validData; // r0
        class xAnimSoundEffect * soundData; // r1+0x8
    }
}
// signature: zBoardPlayerAction::BoardWalkCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8005A4B0 -> 0x8005A56C
unsigned int zBoardPlayerAction::BoardWalkCheck(class zBoardPlayerAction * this /* r30 */) {
}
// signature: zBoardPlayerAction::BoardRunCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8005A570 -> 0x8005A5D8
unsigned int zBoardPlayerAction::BoardRunCheck() {
}
// signature: zBoardPlayerAction::BoardStopCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8005A5E0 -> 0x8005A664
unsigned int zBoardPlayerAction::BoardStopCheck(class zBoardPlayerAction * this /* r30 */) {
}
// signature: zBoardPlayerAction::BoardLandCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8005A670 -> 0x8005A7A4
unsigned int zBoardPlayerAction::BoardLandCheck(class zBoardPlayerAction * this /* r31 */) {
}
// signature: zBoardPlayerAction::BoardFallCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8005A7B0 -> 0x8005A7E0
unsigned int zBoardPlayerAction::BoardFallCheck() {
}
// Range: 0x8005A7E0 -> 0x8005A864
unsigned int zBoardPlayerAction::BoardCandyCheck(class zBoardPlayerAction * this /* r28 */, class xAnimTransition * tran /* r29 */, class xAnimSingle * anim /* r30 */) {
}
// signature: zBoardPlayerAction::BoardCandyBuffCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8005A870 -> 0x8005A8C0
unsigned int zBoardPlayerAction::BoardCandyBuffCheck(class zBoardPlayerAction * this /* r30 */) {
}
// Range: 0x8005A8C0 -> 0x8005A93C
unsigned int zBoardPlayerAction::BoardQuicksandMoveCheck(class zBoardPlayerAction * this /* r29 */, class xAnimTransition * tran /* r30 */, class xAnimSingle * anim /* r31 */) {
}
// signature: zBoardPlayerAction::DefaultStateCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8005A940 -> 0x8005A998
unsigned int zBoardPlayerAction::DefaultStateCheck() {
}
// signature: zPlayerIdleBoard::IdleCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8005A9A0 -> 0x8005AA04
unsigned int zPlayerIdleBoard::IdleCheck() {
}
// Range: 0x8005AA10 -> 0x8005AB40
unsigned int zPlayerIdleBoard::IdleRegularCheck(class zPlayerIdleBoard * this /* r24 */, class xAnimTransition * tran /* r25 */, class xAnimSingle * anim /* r26 */) {
}
// Range: 0x8005AB40 -> 0x8005ABD0
unsigned int zPlayerIdleBoard::IdleSlipperyCheck(class zPlayerIdleBoard * this /* r27 */, class xAnimTransition * tran /* r28 */, class xAnimSingle * anim /* r29 */) {
}
// Range: 0x8005ABD0 -> 0x8005AC98
unsigned int zPlayerIdleBoard::IdleLowHealthCheck(class zPlayerIdleBoard * this /* r26 */, class xAnimTransition * tran /* r27 */, class xAnimSingle * anim /* r28 */) {
}
// Range: 0x8005ACA0 -> 0x8005ADC0
unsigned int zPlayerIdleBoard::IdleColdCheck(class zPlayerIdleBoard * this /* r30 */, class xAnimTransition * tran /* r31 */, class xAnimSingle * anim /* r26 */) {
    // References
    // -> class zGlobals globals;
}
// signature: zPlayerIdleBoard::DefaultIdleCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8005ADC0 -> 0x8005AE38
unsigned int zPlayerIdleBoard::DefaultIdleCheck(class zPlayerIdleBoard * this /* r30 */, class xAnimTransition * tran /* r31 */) {
}
// signature: zPlayerIdleBoard::ExtraIdleCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8005AE40 -> 0x8005AF04
unsigned int zPlayerIdleBoard::ExtraIdleCheck(class zPlayerIdleBoard * this /* r30 */, class xAnimTransition * tran /* r31 */) {
    {
        // Range: 0x8005AE70 -> 0x8005AEE8
        // Local variables
        float variance; // f1
    }
}
// signature: zPlayerIdleBoard::ExtraIdleCB(xAnimTransition *, xAnimSingle *)
// Range: 0x8005AF10 -> 0x8005B048
unsigned int zPlayerIdleBoard::ExtraIdleCB() {
    // Local variables
    class ExtraIdleTableEntry * variantGroup; // r31

    {
        // Range: 0x8005AF34 -> 0x8005AFC8
        // Local variables
        unsigned int choice; // r5

        {
            // Range: 0x8005AF60 -> 0x8005AFC8
            // Local variables
            int i; // r6

            {
                // Range: 0x8005AF60 -> 0x8005AFC8
                // Local variables
                unsigned int data; // r7
            }
        }
    }
    {
        // Range: 0x8005AFC8 -> 0x8005B030
        // Local variables
        unsigned int choice; // r6

        {
            // Range: 0x8005AFD8 -> 0x8005B030
            // Local variables
            int i; // r7
        }
    }
}
// Range: 0x8005B050 -> 0x8005B414
void zPlayerIdleBoard::AddStates(class zPlayerIdleBoard * this /* r23 */, class xAnimTable * table /* r24 */) {
}
// Range: 0x8005B420 -> 0x8005BD00
void zPlayerIdleBoard::AddInternalTransitions(class xAnimTable * table /* r19 */) {
}
// Range: 0x8005C050 -> 0x8005C2CC
void zPlayerIdleBoard::AddActionTransitions(class zPlayerIdleBoard * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zPlayerIdleBoard::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8005C3D0 -> 0x8005C4E0
void zPlayerIdleBoard::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// Range: 0x8005C4E0 -> 0x8005C63C
void zPlayerIdleBoard::Reset(class zPlayerIdleBoard * this /* r28 */) {
    // Local variables
    int i; // r29
    int j; // r5

    {
        // Range: 0x8005C53C -> 0x8005C624
        // Local variables
        unsigned int choice; // r6

        {
            // Range: 0x8005C54C -> 0x8005C5AC
            // Local variables
            unsigned int flag; // r0
            unsigned int data; // r6
        }
        {
            // Range: 0x8005C5B8 -> 0x8005C624
            // Local variables
            unsigned int data; // r7
        }
    }
}
// Range: 0x8005C640 -> 0x8005C6E4
void zPlayerIdleBoard::Begin(class zPlayerIdleBoard * this /* r31 */) {
    // Local variables
    float variance; // f1
}
// Range: 0x8005C6F0 -> 0x8005C74C
void zPlayerIdleBoard::Update(class zPlayerIdleBoard * this /* r31 */, float dt /* f31 */) {
    // Local variables
    unsigned int animFlags; // r0
}
// signature: zPlayerWalkBoard::WalkCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8005C750 -> 0x8005C84C
unsigned int zPlayerWalkBoard::WalkCheck(class zPlayerWalkBoard * this /* r30 */) {
}
// Range: 0x8005C850 -> 0x8005C908
unsigned int zPlayerWalkBoard::WalkRegularCheck(class zPlayerWalkBoard * this /* r26 */, class xAnimTransition * tran /* r27 */, class xAnimSingle * anim /* r28 */) {
}
// Range: 0x8005C910 -> 0x8005C9A0
unsigned int zPlayerWalkBoard::WalkSlipperyCheck(class zPlayerWalkBoard * this /* r27 */, class xAnimTransition * tran /* r28 */, class xAnimSingle * anim /* r29 */) {
}
// Range: 0x8005C9A0 -> 0x8005CB68
void zPlayerWalkBoard::AddStates(class zPlayerWalkBoard * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x8005CB70 -> 0x8005CDAC
void zPlayerWalkBoard::AddInternalTransitions(class xAnimTable * table /* r24 */) {
}
// Range: 0x8005CF30 -> 0x8005D21C
void zPlayerWalkBoard::AddActionTransitions(class zPlayerWalkBoard * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerWalkBoard::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8005D220 -> 0x8005D2D0
void zPlayerWalkBoard::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// Range: 0x8005D2D0 -> 0x8005D32C
void zPlayerWalkBoard::Begin(class zPlayerWalkBoard * this /* r31 */) {
}
// signature: zPlayerRunBoard::RunCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8005D330 -> 0x8005D3AC
unsigned int zPlayerRunBoard::RunCheck() {
}
// Range: 0x8005D3B0 -> 0x8005D4B8
unsigned int zPlayerRunBoard::RunRegularCheck(class zPlayerRunBoard * this /* r24 */, class xAnimTransition * tran /* r25 */, class xAnimSingle * anim /* r26 */) {
}
// Range: 0x8005D4C0 -> 0x8005D550
unsigned int zPlayerRunBoard::RunSlipperyCheck(class zPlayerRunBoard * this /* r27 */, class xAnimTransition * tran /* r28 */, class xAnimSingle * anim /* r29 */) {
}
// Range: 0x8005D550 -> 0x8005D600
unsigned int zPlayerRunBoard::RunBraveCheck(class zPlayerRunBoard * this /* r25 */, class xAnimTransition * tran /* r26 */, class xAnimSingle * anim /* r27 */) {
    // Local variables
    class zBoardPlayer * sbPlayer; // r28
}
// Range: 0x8005D600 -> 0x8005D6B0
unsigned int zPlayerRunBoard::RunSuccessCheck(class zPlayerRunBoard * this /* r25 */, class xAnimTransition * tran /* r26 */, class xAnimSingle * anim /* r27 */) {
    // Local variables
    class zBoardPlayer * sbPlayer; // r28
}
// Range: 0x8005D6B0 -> 0x8005D9F8
void zPlayerRunBoard::AddStates(class zPlayerRunBoard * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x8005DA00 -> 0x8005DFC8
void zPlayerRunBoard::AddInternalTransitions(class xAnimTable * table /* r21 */) {
}
// Range: 0x8005E1D0 -> 0x8005E484
void zPlayerRunBoard::AddActionTransitions(class zPlayerRunBoard * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zPlayerRunBoard::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8005E490 -> 0x8005E5A0
void zPlayerRunBoard::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// signature: zPlayerTurn180Board::Turn180Check(xAnimTransition *, xAnimSingle *)
// Range: 0x8005E5A0 -> 0x8005E6E8
unsigned int zPlayerTurn180Board::Turn180Check(class zPlayerTurn180Board * this /* r30 */) {
    // Local variables
    class zBoardPlayer * sbPlayer; // r31
    class xVec2 stickDir; // r1+0x8
    class xVec3 camRelInputDir; // r1+0x10
    float dotProdThreshold; // f31

    // References
    // -> class xVec3 m_Null;
}
// signature: zPlayerTurn180Board::Turn180DoneCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8005E730 -> 0x8005E7A0
unsigned int zPlayerTurn180Board::Turn180DoneCheck(class zPlayerTurn180Board * this /* r30 */) {
}
// signature: zPlayerTurn180Board::AddStates(xAnimTable *)
// Range: 0x8005E7A0 -> 0x8005E810
void zPlayerTurn180Board::AddStates() {
}
// Range: 0x8005E810 -> 0x8005EA64
void zPlayerTurn180Board::AddActionTransitions(class zPlayerTurn180Board * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerTurn180Board::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8005EAF0 -> 0x8005EB58
void zPlayerTurn180Board::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x8005EBE0 -> 0x8005EBEC
void zPlayerTurn180Board::Begin() {
}
// Range: 0x8005EBF0 -> 0x8005ED60
void zPlayerTurn180Board::Move(class zPlayerTurn180Board * this /* r29 */, class xScene * s /* r30 */, float dt /* f30 */, class xEntFrame * frame /* r31 */) {
    // Local variables
    float angleAway; // f3
    float turnSpeedUsed; // f31
}
// signature: zPlayerJumpBoard::SBJumpCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8005ED60 -> 0x8005EE9C
unsigned int zPlayerJumpBoard::SBJumpCheck(class zPlayerJumpBoard * this /* r30 */) {
}
// signature: zPlayerJumpBoard::SBJumpMovingCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8005EEA0 -> 0x8005EF1C
unsigned int zPlayerJumpBoard::SBJumpMovingCheck(class zPlayerJumpBoard * this /* r31 */) {
}
// signature: zPlayerJumpBoard::ApexCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8005EF20 -> 0x8005EF3C
unsigned int zPlayerJumpBoard::ApexCheck() {
}
// signature: zPlayerJumpBoard::TransToSpinPowerupCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8005EF40 -> 0x8005EF98
unsigned int zPlayerJumpBoard::TransToSpinPowerupCheck() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r30
}
// Range: 0x8005EFA0 -> 0x8005F0E8
void zPlayerJumpBoard::AddStates(class zPlayerJumpBoard * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// signature: zPlayerJumpBoard::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8005F0F0 -> 0x8005F19C
void zPlayerJumpBoard::AddTransitionsFrom(class xAnimTable * table /* r25 */, char * fromStates /* r26 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r28 */) {
}
// Range: 0x8005F2A0 -> 0x8005F604
void zPlayerJumpBoard::AddActionTransitions(class zPlayerJumpBoard * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x8005F790 -> 0x8005F84C
void zPlayerJumpBoard::AddInternalTransitions(class xAnimTable * table /* r27 */) {
}
// Range: 0x8005F850 -> 0x8005F964
void zPlayerJumpBoard::Begin() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r31
}
// signature: zPlayerJumpBoard::UpdateFall(float)
// Range: 0x8005F970 -> 0x8005F99C
void zPlayerJumpBoard::UpdateFall() {
}
// Range: 0x8005F9A0 -> 0x8005FAFC
void zPlayerJumpBoard::Move(class zPlayerJumpBoard * this /* r29 */, class xScene * s /* r30 */, float dt /* f30 */, class xEntFrame * frame /* r31 */) {
    {
        // Range: 0x8005F9EC -> 0x8005FA64
        // Local variables
        class xVec3 dposVel; // r1+0x14
    }
    {
        // Range: 0x8005FA64 -> 0x8005FAB4
        // Local variables
        class xVec3 dposVel; // r1+0x8
    }
}
// Range: 0x8005FB10 -> 0x8005FB24
void zPlayerJumpBoard::End() {
}
// signature: zPlayerJumpBoard::GetY(float) const
// Range: 0x8005FB30 -> 0x8005FB7C
float zPlayerJumpBoard::GetY() const {
    // Local variables
    float yVal; // f1

    {
        // Range: 0x8005FB3C -> 0x8005FB78
        // Local variables
        float td; // f5
    }
}
// signature: zPlayerFluidSprayBoard::AddStates(xAnimTable *)
// Range: 0x8005FB80 -> 0x8005FBEC
void zPlayerFluidSprayBoard::AddStates() {
}
// signature: zPlayerFluidSprayBoard::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8005FBF0 -> 0x8005FC50
void zPlayerFluidSprayBoard::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r11 */) {
}
// signature: zPlayerFluidSprayBoard::AddActionTransitions(xAnimTable *)
// Range: 0x8005FCC0 -> 0x8005FD1C
void zPlayerFluidSprayBoard::AddActionTransitions() {
}
// signature: zPlayerSlamStartBoard::AddStates(xAnimTable *)
// Range: 0x8005FD90 -> 0x8005FE00
void zPlayerSlamStartBoard::AddStates() {
}
// signature: zPlayerSlamStartBoard::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8005FE00 -> 0x8005FE60
void zPlayerSlamStartBoard::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r11 */) {
}
// signature: zPlayerSlamStartBoard::AddActionTransitions(xAnimTable *)
// Range: 0x8005FEE0 -> 0x8005FF3C
void zPlayerSlamStartBoard::AddActionTransitions() {
}
// Range: 0x8005FFC0 -> 0x8005FFEC
void zPlayerSlamStartBoard::Begin() {
}
// Range: 0x8005FFF0 -> 0x800600A8
void zPlayerSlamStartBoard::Move(class zPlayerSlamStartBoard * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
}
// signature: zPlayerSlamStartBoard::SlamCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800600B0 -> 0x80060260
unsigned int zPlayerSlamStartBoard::SlamCheck(class zPlayerSlamStartBoard * this /* r30 */) {
    {
        // Range: 0x800601A4 -> 0x80060244
        // Local variables
        class xVec2 swingVec; // r1+0x10
        unsigned int stability; // r1+0x8
    }
}
// signature: zPlayerSlamStartBoard::SlamApexCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80060280 -> 0x800602A0
unsigned int zPlayerSlamStartBoard::SlamApexCheck() {
}
// signature: zPlayerSlamFallBoard::SlamLandCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800602A0 -> 0x80060334
unsigned int zPlayerSlamFallBoard::SlamLandCheck(class zPlayerSlamFallBoard * this /* r31 */) {
}
// signature: zPlayerSlamFallBoard::AddStates(xAnimTable *)
// Range: 0x800603E0 -> 0x80060468
void zPlayerSlamFallBoard::AddStates() {
}
// signature: zPlayerSlamFallBoard::AddActionTransitions(xAnimTable *)
// Range: 0x80060470 -> 0x800604CC
void zPlayerSlamFallBoard::AddActionTransitions() {
}
// Range: 0x80060550 -> 0x80060578
void zPlayerSlamFallBoard::Begin() {
}
// signature: zPlayerSlamFallBoard::Move(xScene *, float, xEntFrame *)
// Range: 0x80060580 -> 0x800605C8
void zPlayerSlamFallBoard::Move() {
}
// signature: zPlayerSlamLandBoard::AddStates(xAnimTable *)
// Range: 0x800605D0 -> 0x80060640
void zPlayerSlamLandBoard::AddStates() {
}
// signature: zPlayerSlamLandBoard::AddActionTransitions(xAnimTable *)
// Range: 0x80060640 -> 0x8006069C
void zPlayerSlamLandBoard::AddActionTransitions() {
}
// Range: 0x800606A0 -> 0x800606E4
void zPlayerSlamLandBoard::Begin(class zPlayerSlamLandBoard * this /* r31 */) {
}
// Range: 0x800606F0 -> 0x80060760
void zPlayerSlamLandBoard::Move(class zPlayerSlamLandBoard * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
}
// signature: zPlayerFluidBurstBoard::AddStates(xAnimTable *)
// Range: 0x80060760 -> 0x800607E8
void zPlayerFluidBurstBoard::AddStates() {
}
// signature: zPlayerFluidBurstBoard::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800607F0 -> 0x80060850
void zPlayerFluidBurstBoard::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r11 */) {
}
// signature: zPlayerFluidBurstBoard::AddInternalTransitions(xAnimTable *)
// Range: 0x800608D0 -> 0x8006092C
void zPlayerFluidBurstBoard::AddInternalTransitions() {
}
// signature: zPlayerFluidBurstBoard::FluidBurstCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80060930 -> 0x80060968
unsigned int zPlayerFluidBurstBoard::FluidBurstCheck() {
}
// Range: 0x80060970 -> 0x800609E4
void zPlayerFluidBurstBoard::Begin(class zPlayerFluidBurstBoard * this /* r31 */) {
}
// Range: 0x800609F0 -> 0x80060A6C
unsigned int zPlayerFallBoard::FallMovingCheck(class zPlayerFallBoard * this /* r29 */, class xAnimTransition * tran /* r30 */, class xAnimSingle * anim /* r31 */) {
}
// signature: zPlayerFallBoard::FallHighCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80060A70 -> 0x80060AD0
unsigned int zPlayerFallBoard::FallHighCheck() {
}
// signature: zPlayerFallBoard::LandWalkCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80060AD0 -> 0x80060B48
unsigned int zPlayerFallBoard::LandWalkCheck(class zPlayerFallBoard * this /* r31 */) {
}
// signature: zPlayerFallBoard::LandRunCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80060B50 -> 0x80060BCC
unsigned int zPlayerFallBoard::LandRunCheck(class zPlayerFallBoard * this /* r31 */) {
}
// Range: 0x80060BD0 -> 0x80060E18
void zPlayerFallBoard::AddStates(class zPlayerFallBoard * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80060E20 -> 0x80060FD4
void zPlayerFallBoard::AddInternalTransitions(class xAnimTable * table /* r25 */) {
}
// Range: 0x80061000 -> 0x8006151C
void zPlayerFallBoard::AddActionTransitions(class zPlayerFallBoard * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// signature: zPlayerFallBoard::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80061620 -> 0x800616D0
void zPlayerFallBoard::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// Range: 0x800617F0 -> 0x80061804
void zPlayerFallBoard::Begin() {
}
// Range: 0x80061810 -> 0x800619D8
void zPlayerLandBoard::AddStates(class zPlayerLandBoard * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x800619E0 -> 0x80061C74
void zPlayerLandBoard::AddActionTransitions(class zPlayerLandBoard * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zPlayerLandBoard::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80061CF0 -> 0x80061D58
void zPlayerLandBoard::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// signature: zPlayerLandBoard::AddStandardTransitionsFrom(xAnimTable *, const char *)
// Range: 0x80061D60 -> 0x80061DB0
void zPlayerLandBoard::AddStandardTransitionsFrom() {
}
// Range: 0x80061DB0 -> 0x80061DCC
void zPlayerLandBoard::Begin() {
}
// Range: 0x80061DD0 -> 0x80061ED8
void zPlayerLandHighBoard::AddStates(class zPlayerLandHighBoard * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80061EE0 -> 0x80061FA0
void zPlayerLandHighBoard::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x80061FA0 -> 0x8006210C
void zPlayerLandHighBoard::AddActionTransitions(class zPlayerLandHighBoard * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zPlayerLandHighBoard::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80062110 -> 0x80062170
void zPlayerLandHighBoard::AddTransitionsFrom(unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// signature: zPlayerLandHighBoard::Move(xScene *, float, xEntFrame *)
// Range: 0x80062170 -> 0x80062184
void zPlayerLandHighBoard::Move() {
}
// Range: 0x80062190 -> 0x800622D8
void zPlayerDoubleJumpBoard::AddStates(class zPlayerDoubleJumpBoard * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x800622E0 -> 0x800623A0
void zPlayerDoubleJumpBoard::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x800623A0 -> 0x80062770
void zPlayerDoubleJumpBoard::AddActionTransitions(class zPlayerDoubleJumpBoard * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerDoubleJumpBoard::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80062870 -> 0x8006291C
void zPlayerDoubleJumpBoard::AddTransitionsFrom(class xAnimTable * table /* r25 */, char * fromStates /* r26 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r28 */) {
}
// Range: 0x80062A20 -> 0x80062A48
void zPlayerDoubleJumpBoard::Begin() {
}
// signature: zPlayerDoubleJumpBoard::DoubleJumpStartCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80062A50 -> 0x80062B28
unsigned int zPlayerDoubleJumpBoard::DoubleJumpStartCheck(class zPlayerDoubleJumpBoard * this /* r31 */) {
}
// signature: zPlayerDoubleJumpBoard::DoubleJumpStartMovingCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80062B30 -> 0x80062BAC
unsigned int zPlayerDoubleJumpBoard::DoubleJumpStartMovingCheck(class zPlayerDoubleJumpBoard * this /* r31 */) {
}
// signature: zPlayerDoubleJumpBoard::TransToFallCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80062BB0 -> 0x80062BD0
unsigned int zPlayerDoubleJumpBoard::TransToFallCheck() {
}
// signature: zPlayerDoubleJumpBoard::TransToSpinPowerupCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80062BD0 -> 0x80062C28
unsigned int zPlayerDoubleJumpBoard::TransToSpinPowerupCheck() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r30
}
// Range: 0x80062C30 -> 0x80062D90
void zPlayerDoubleJumpBoard::Move(class zPlayerDoubleJumpBoard * this /* r29 */, class xScene * s /* r30 */, float dt /* f30 */, class xEntFrame * frame /* r31 */) {
    {
        // Range: 0x80062C7C -> 0x80062CFC
        // Local variables
        class xVec3 dposVel; // r1+0x14
    }
    {
        // Range: 0x80062CFC -> 0x80062D48
        // Local variables
        class xVec3 dposVel; // r1+0x8
    }
}
// signature: zPlayerDoubleJumpBoard::GetY(float) const
// Range: 0x80062D90 -> 0x80062DEC
float zPlayerDoubleJumpBoard::GetY() const {
    // Local variables
    float yVal; // f1

    {
        // Range: 0x80062DA0 -> 0x80062DE8
        // Local variables
        float td; // f5
    }

    // References
    // -> float DOUBLE_JUMP_DECEL;
    // -> float DOUBLE_JUMP_VELOCITY;
}
// signature: zPlayerSpringboardBoard::BoardSpringboardCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80062DF0 -> 0x80062E94
unsigned int zPlayerSpringboardBoard::BoardSpringboardCheck() {
}
// Range: 0x80062EA0 -> 0x80062F68
void zPlayerSpringboardBoard::AddStates(class zPlayerSpringboardBoard * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// signature: zPlayerSpringboardBoard::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80062F70 -> 0x80062FD0
void zPlayerSpringboardBoard::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r11 */) {
}
// Range: 0x80063050 -> 0x80063278
void zPlayerSpringboardBoard::AddActionTransitions(class zPlayerSpringboardBoard * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x80063300 -> 0x80063318
void zPlayerSpringboardBoard::Begin() {
}
// signature: zPlayerSpringboardBoard::Move(xScene *, float, xEntFrame *)
// Range: 0x80063320 -> 0x8006340C
void zPlayerSpringboardBoard::Move(class zPlayerSpringboardBoard * this /* r28 */) {
    // Local variables
    class hkpCharacterProxy * proxy; // r30

    {
        // Range: 0x80063380 -> 0x800633E8
        // Local variables
        int i; // r29

        {
            // Range: 0x80063380 -> 0x800633E8
            // Local variables
            class hkpRigidBody * testB; // r0
            class hkpRootCdPoint testPoint; // r1+0x20
        }
    }
}
// Range: 0x80063470 -> 0x80063480
void zPlayerSpringboardBoard::End() {
}
// signature: zPlayerSpringboardBoard::BoardSpringboardDoubleJumpCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80063480 -> 0x800634A8
unsigned int zPlayerSpringboardBoard::BoardSpringboardDoubleJumpCheck() {
}
// Range: 0x800634B0 -> 0x8006367C
void zBoardPlayerSpinAttack::AddStates(class zBoardPlayerSpinAttack * this /* r24 */, class xAnimTable * table /* r25 */) {
}
// Range: 0x80063680 -> 0x800638B4
void zBoardPlayerSpinAttack::AddActionTransitions(class zBoardPlayerSpinAttack * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zBoardPlayerSpinAttack::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80063940 -> 0x800639A8
void zBoardPlayerSpinAttack::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x80063A30 -> 0x80063D64
void zBoardPlayerSpinAttack::AddInternalTransitions(class xAnimTable * table /* r23 */) {
}
// signature: zBoardPlayerSpinAttack::StartSpinAttackCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80063E70 -> 0x8006408C
unsigned int zBoardPlayerSpinAttack::StartSpinAttackCheck(class zBoardPlayerSpinAttack * this /* r29 */) {
    // Local variables
    class zBoardPlayer * sbPlayer; // r30
    bool shouldSpin; // r31
}
// signature: zBoardPlayerSpinAttack::FinishedQueueCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80064090 -> 0x80064130
unsigned int zBoardPlayerSpinAttack::FinishedQueueCheck(class zBoardPlayerSpinAttack * this /* r31 */) {
    // Local variables
    class zBoardPlayer * sbPlayer; // r4
}
// signature: zBoardPlayerSpinAttack::SpongebuffIdleSpinCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80064130 -> 0x8006417C
unsigned int zBoardPlayerSpinAttack::SpongebuffIdleSpinCheck() {
}
// Range: 0x80064180 -> 0x800641FC
unsigned int zBoardPlayerSpinAttack::SpongebuffMovingSpinCheck(class zBoardPlayerSpinAttack * this /* r29 */, class xAnimTransition * tran /* r30 */, class xAnimSingle * anim /* r31 */) {
}
// Range: 0x80064200 -> 0x80064450
void zBoardPlayerSpinAttack::AddAttacks(class zCombatAttack * attackStates /* r26 */, unsigned short bone /* r27 */) {
    // Local variables
    class zCombatAttack * spinAttackMoving; // r0
    class zCombatAttack * spongebuffAttack; // r0
    class zCombatAttack * spongebuffAttackMoving; // r0
}
// Range: 0x80064450 -> 0x800644C0
void zBoardPlayerSpinAttack::Begin() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r31
}
// signature: zBoardPlayerSpinAttack::Update(float)
// Range: 0x800644C0 -> 0x800645B0
void zBoardPlayerSpinAttack::Update(class zBoardPlayerSpinAttack * this /* r30 */) {
    // Local variables
    class zBoardPlayer * sbPlayer; // r31
}
// Range: 0x800645B0 -> 0x800646C0
void zBoardPlayerSpinAttack::Move(class zBoardPlayerSpinAttack * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
}
// Range: 0x800646C0 -> 0x800646F4
void zBoardPlayerSpinAttack::End() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r6
}
// Range: 0x80064700 -> 0x80064A0C
void zBoardPlayerHammerAttack::AddStates(class zBoardPlayerHammerAttack * this /* r24 */, class xAnimTable * table /* r25 */) {
}
// Range: 0x80064A10 -> 0x80064BE8
void zBoardPlayerHammerAttack::AddActionTransitions(class zBoardPlayerHammerAttack * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// Range: 0x80064BF0 -> 0x80064F58
void zBoardPlayerHammerAttack::AddInternalTransitions(class xAnimTable * table /* r23 */) {
}
// signature: zBoardPlayerHammerAttack::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80064FE0 -> 0x800650F8
void zBoardPlayerHammerAttack::AddTransitionsFrom(class xAnimTable * table /* r23 */, char * fromStates /* r24 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r25 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned short priority /* r27 */, float blend /* f31 */, unsigned int flags /* r28 */, unsigned int userFlags /* r29 */) {
}
// signature: zBoardPlayerHammerAttack::StartHammerAttackCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80065320 -> 0x80065554
unsigned int zBoardPlayerHammerAttack::StartHammerAttackCheck(class zBoardPlayerHammerAttack * this /* r29 */) {
    // Local variables
    class zBoardPlayer * sbPlayer; // r30
    bool shouldHammer; // r31

    {
        // Range: 0x80065480 -> 0x8006551C
        // Local variables
        class xVec2 swingVec; // r1+0x10
        unsigned int stability; // r1+0x8
    }
}
// signature: zBoardPlayerHammerAttack::AirHammerAttackCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80065560 -> 0x800655DC
unsigned int zBoardPlayerHammerAttack::AirHammerAttackCheck(class zBoardPlayerHammerAttack * this /* r31 */) {
}
// signature: zBoardPlayerHammerAttack::StartHammerSpongebuffCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800655E0 -> 0x8006562C
unsigned int zBoardPlayerHammerAttack::StartHammerSpongebuffCheck() {
}
// Range: 0x80065630 -> 0x80065660
void zBoardPlayerHammerAttack::Begin(class zBoardPlayerHammerAttack * this /* r6 */) {
    // Local variables
    class zBoardPlayer * sbPlayer; // r5
}
// Range: 0x80065660 -> 0x80065808
void zBoardPlayerHammerAttack::Update(class zBoardPlayerHammerAttack * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x800656B0 -> 0x800657CC
        // Local variables
        float swingAngle; // f3
        class xVec2 swingVec; // r1+0x8
    }
}
// signature: zBoardPlayerHammerAttack::Move(xScene *, float, xEntFrame *)
// Range: 0x80065850 -> 0x800658BC
void zBoardPlayerHammerAttack::Move() {
}
// Range: 0x800658C0 -> 0x800658E8
void zBoardPlayerHammerAttack::End() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r0
}
// signature: zBoardPlayerHammerAttack::SpongebuffHammerSplashCB(xAnimTransition *, xAnimSingle *)
// Range: 0x800658F0 -> 0x800659AC
unsigned int zBoardPlayerHammerAttack::SpongebuffHammerSplashCB() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r31

    // References
    // -> class zBombManager gBombManager;
}
// Range: 0x800659B0 -> 0x80065C84
void zBoardPlayerHammerAttack::AddAttacks(class zCombatAttack * attackStates /* r19 */, unsigned short bone /* r20 */) {
    // Local variables
    class zCombatAttack * baseAttack; // r0
    class zCombatAttack * airHammerCycle; // r0
    class zCombatAttack * airHammerLand; // r0
    class zCombatAttack * spongebuffAttack; // r0
    class zCombatAttack * spongebuffRecoverAttack; // r0
    class zCombatAttack * spongebuffAirHammerCycle; // r0
    class zCombatAttack * spongebuffAirHammerLand; // r0
}
// Range: 0x80065C90 -> 0x80065DD8
void zBoardPlayerPuckAttack::AddStates(class zBoardPlayerPuckAttack * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80065DE0 -> 0x80065F6C
void zBoardPlayerPuckAttack::AddActionTransitions(class zBoardPlayerPuckAttack * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// Range: 0x80065F70 -> 0x800660B4
void zBoardPlayerPuckAttack::AddInternalTransitions(class xAnimTable * table /* r25 */) {
}
// signature: zBoardPlayerPuckAttack::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80066120 -> 0x80066188
void zBoardPlayerPuckAttack::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// signature: zBoardPlayerPuckAttack::StartPuckAttackCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80066210 -> 0x8006639C
unsigned int zBoardPlayerPuckAttack::StartPuckAttackCheck(class zBoardPlayerPuckAttack * this /* r29 */) {
    // Local variables
    class zBoardPlayer * sbPlayer; // r30
}
// signature: zBoardPlayerPuckAttack::AimPuckCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800663A0 -> 0x800663BC
unsigned int zBoardPlayerPuckAttack::AimPuckCheck() {
}
// signature: zBoardPlayerPuckAttack::ShootPuckCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800663C0 -> 0x800663D0
unsigned int zBoardPlayerPuckAttack::ShootPuckCheck() {
}
// signature: zBoardPlayerPuckAttack::FirePuckCB(xAnimTransition *, xAnimSingle *)
// Range: 0x800663D0 -> 0x8006643C
unsigned int zBoardPlayerPuckAttack::FirePuckCB(class zBoardPlayerPuckAttack * this /* r31 */) {
    // Local variables
    class zBoardPlayer * sbPlayer; // r3
}
// Range: 0x80066440 -> 0x8006648C
void zBoardPlayerPuckAttack::Begin(class zBoardPlayerPuckAttack * this /* r6 */) {
    // Local variables
    class zBoardPlayer * sbPlayer; // r5
}
// Range: 0x80066490 -> 0x800664C0
void zBoardPlayerPuckAttack::End() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r5
}
// Range: 0x800664C0 -> 0x800665B0
void zBoardPlayerPuckAttack::Move(class zBoardPlayerPuckAttack * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
    // Local variables
    unsigned int animFlags; // r0

    {
        // Range: 0x800664F4 -> 0x80066570
        // Local variables
        float stickInput; // f4
    }
}
// Range: 0x800665B0 -> 0x800667C0
void zBoardPlayerPuckAttack::Update(class zBoardPlayerPuckAttack * this /* r27 */, float dt /* f31 */) {
    // Local variables
    class zBoardPlayer * sbPlayer; // r31

    {
        // Range: 0x800666F0 -> 0x8006679C
        // Local variables
        class hkpCharacterProxy * proxy; // r28
        bool resetTrampoline; // r29

        {
            // Range: 0x80066720 -> 0x8006678C
            // Local variables
            int i; // r27

            {
                // Range: 0x80066720 -> 0x8006678C
                // Local variables
                class hkpRigidBody * testB; // r0
                class hkpRootCdPoint testPoint; // r1+0x20
            }
        }
    }
}
// signature: zPlayerLedgeBoard::AddStates(xAnimTable *)
// Range: 0x80066920 -> 0x80066990
void zPlayerLedgeBoard::AddStates() {
}
// Range: 0x80066990 -> 0x80066A80
void zPlayerLedgeBoard::AddActionTransitions(class zPlayerLedgeBoard * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zPlayerLedgeBoard::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80066A80 -> 0x80066AE8
void zPlayerLedgeBoard::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x80066B70 -> 0x80066BC4
void zPlayerLedgeBoard::Begin(class zPlayerLedgeBoard * this /* r31 */) {
}
// signature: zPlayerLedgeBoard::Move(xScene *, float, xEntFrame *)
// Range: 0x80066BF0 -> 0x80066C14
void zPlayerLedgeBoard::Move() {
}
// Range: 0x80066C20 -> 0x80066C6C
void zPlayerLedgeBoard::End(class zPlayerLedgeBoard * this /* r31 */) {
}
// signature: zPlayerLedgeBoard::UpdateFall(float)
// Range: 0x80066C70 -> 0x80066C84
void zPlayerLedgeBoard::UpdateFall() {
}
// signature: zPlayerLedgeBoard::StartLedgeCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80066C90 -> 0x80066D2C
unsigned int zPlayerLedgeBoard::StartLedgeCheck(class zPlayerLedgeBoard * this /* r30 */) {
    // Local variables
    class zBoardPlayer * sbPlayer; // r4
}
// signature: zBoardHitByHammerBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x80066D30 -> 0x80066D6C
void zBoardHitByHammerBE(void * object /* r31 */) {
    // Local variables
    class zBoardPlayer * player; // r0
}
// signature: zBoardRestoreFromHitByHammerBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x80066D70 -> 0x80066DAC
void zBoardRestoreFromHitByHammerBE(void * object /* r31 */) {
    // Local variables
    class zBoardPlayer * player; // r0
}
// Range: 0x80066DB0 -> 0x80067260
void zPlayerHitBoard::AddStates(class zPlayerHitBoard * this /* r24 */, class xAnimTable * table /* r25 */) {
}
// Range: 0x80067260 -> 0x800673DC
void zPlayerHitBoard::AddInternalTransitions(class xAnimTable * table /* r25 */) {
}
// Range: 0x80067430 -> 0x80067590
void zPlayerHitBoard::AddActionTransitions(class zPlayerHitBoard * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zPlayerHitBoard::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80067590 -> 0x80067838
void zPlayerHitBoard::AddTransitionsFrom(class xAnimTable * table /* r22 */, char * fromStates /* r23 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r24 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r25 */, unsigned short priority /* r26 */, float blend /* f31 */, unsigned int flags /* r27 */, unsigned int userFlags /* r28 */) {
}
// Range: 0x80067E40 -> 0x80067E50
void zPlayerHitBoard::Begin() {
}
// Range: 0x80067E50 -> 0x80067EEC
void zPlayerHitBoard::Move(class zPlayerHitBoard * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
}
// Range: 0x80067EF0 -> 0x80067F4C
void zPlayerHitBoard::Update(class zPlayerHitBoard * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x80067F50 -> 0x80068040
void zPlayerHitBoard::Reset(class zPlayerHitBoard * this /* r31 */) {
    // Local variables
    unsigned int choice; // r5

    {
        // Range: 0x80067F5C -> 0x80067FC4
        // Local variables
        int i; // r6

        {
            // Range: 0x80067F5C -> 0x80067FC4
            // Local variables
            unsigned int flag; // r0
            unsigned int data; // r7
        }
    }
    {
        // Range: 0x80067FD0 -> 0x8006802C
        // Local variables
        int j; // r6

        {
            // Range: 0x80067FD0 -> 0x8006802C
            // Local variables
            unsigned int data; // r7
        }
    }
}
// signature: zPlayerHitBoard::HammerHitCB(xAnimTransition *, xAnimSingle *)
// Range: 0x80068040 -> 0x8006816C
unsigned int zPlayerHitBoard::HammerHitCB(class zPlayerHitBoard * this /* r31 */) {
    {
        // Range: 0x80068054 -> 0x800680E8
        // Local variables
        unsigned int choice; // r5

        {
            // Range: 0x8006807C -> 0x800680E8
            // Local variables
            int i; // r6

            {
                // Range: 0x8006807C -> 0x800680E8
                // Local variables
                unsigned int data; // r7
            }
        }
    }
    {
        // Range: 0x800680E8 -> 0x80068154
        // Local variables
        unsigned int choice; // r6

        {
            // Range: 0x800680F8 -> 0x80068154
            // Local variables
            int i; // r7
        }
    }
}
// signature: zPlayerHitBoard::HitFrontCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80068170 -> 0x800681D8
unsigned int zPlayerHitBoard::HitFrontCheck(class zPlayerHitBoard * this /* r31 */) {
}
// signature: zPlayerHitBoard::HitBackCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800681E0 -> 0x80068244
unsigned int zPlayerHitBoard::HitBackCheck(class zPlayerHitBoard * this /* r31 */) {
}
// signature: zPlayerHitBoard::HitHammerCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80068250 -> 0x800682B8
unsigned int zPlayerHitBoard::HitHammerCheck(class xAnimTransition * tran /* r30 */) {
    // Local variables
    class zBoardPlayer * sbPlayer; // r0
}
// signature: zPlayerHitBoard::HitGooFrontCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800682C0 -> 0x8006830C
unsigned int zPlayerHitBoard::HitGooFrontCheck() {
}
// signature: zPlayerHitBoard::HitGooBackCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80068310 -> 0x8006835C
unsigned int zPlayerHitBoard::HitGooBackCheck() {
}
// signature: zPlayerHitBoard::HitElectricArcCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80068360 -> 0x800683DC
unsigned int zPlayerHitBoard::HitElectricArcCheck(class zPlayerHitBoard * this /* r29 */) {
    // Local variables
    class zBoardPlayer * sbPlayer; // r30
}
// signature: zPlayerHitBoard::HitPowerupCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800683E0 -> 0x80068408
unsigned int zPlayerHitBoard::HitPowerupCheck() {
}
// Range: 0x80068410 -> 0x80068758
void zPlayerHitLaunchBoard::AddStates(class zPlayerHitLaunchBoard * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80068760 -> 0x80068914
void zPlayerHitLaunchBoard::AddInternalTransitions(class xAnimTable * table /* r25 */) {
}
// Range: 0x800689A0 -> 0x80068A70
void zPlayerHitLaunchBoard::AddActionTransitions(class xAnimTable * table /* r27 */) {
}
// signature: zPlayerHitLaunchBoard::AddStandardTransitionsFrom(xAnimTable *, const char *)
// Range: 0x80068A70 -> 0x80068AC0
void zPlayerHitLaunchBoard::AddStandardTransitionsFrom() {
}
// signature: zPlayerHitLaunchBoard::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80068AC0 -> 0x80068C38
void zPlayerHitLaunchBoard::AddTransitionsFrom(class xAnimTable * table /* r23 */, char * fromStates /* r24 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r25 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned short priority /* r27 */, float blend /* f31 */, unsigned int flags /* r28 */, unsigned int userFlags /* r29 */) {
}
// signature: zPlayerHitLaunchBoard::LaunchFrontCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80068F40 -> 0x80068F80
unsigned int zPlayerHitLaunchBoard::LaunchFrontCheck() {
}
// signature: zPlayerHitLaunchBoard::LaunchBackCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80068F80 -> 0x80068FC0
unsigned int zPlayerHitLaunchBoard::LaunchBackCheck() {
}
// signature: zPlayerHitLaunchBoard::KnockbackFrontCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80068FC0 -> 0x80069004
unsigned int zPlayerHitLaunchBoard::KnockbackFrontCheck() {
}
// signature: zPlayerHitLaunchBoard::KnockbackBackCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80069010 -> 0x80069054
unsigned int zPlayerHitLaunchBoard::KnockbackBackCheck() {
}
// signature: zPlayerHitLaunchBoard::LaunchGooFrontCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80069060 -> 0x800690A4
unsigned int zPlayerHitLaunchBoard::LaunchGooFrontCheck() {
}
// signature: zPlayerHitLaunchBoard::LaunchGooBackCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800690B0 -> 0x800690F4
unsigned int zPlayerHitLaunchBoard::LaunchGooBackCheck() {
}
// Range: 0x80069100 -> 0x800691C8
void zBoardPlayerFillWithGoo::AddStates(class zBoardPlayerFillWithGoo * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// signature: zBoardPlayerFillWithGoo::AddInternalTransitions(xAnimTable *)
// Range: 0x800691D0 -> 0x80069244
void zBoardPlayerFillWithGoo::AddInternalTransitions() {
}
// Range: 0x80069260 -> 0x8006936C
void zBoardPlayerFillWithGoo::AddActionTransitions(class zBoardPlayerFillWithGoo * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zBoardPlayerFillWithGoo::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80069370 -> 0x800693D8
void zBoardPlayerFillWithGoo::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// signature: zBoardPlayerFillWithGoo::StartFillWithGooCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80069460 -> 0x800694C8
unsigned int zBoardPlayerFillWithGoo::StartFillWithGooCheck() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r3
}
// Range: 0x800694D0 -> 0x80069584
void zBoardPlayerFillWithGoo::Begin(class zBoardPlayerFillWithGoo * this /* r29 */) {
    // Local variables
    class zBoardPlayer * sbPlayer; // r30
}
// Range: 0x80069590 -> 0x80069704
void zBoardPlayerFillWithGoo::Move(class zBoardPlayerFillWithGoo * this /* r29 */, class xScene * s /* r30 */, float dt /* f30 */, class xEntFrame * frame /* r31 */) {
    {
        // Range: 0x800695F4 -> 0x800696BC
        // Local variables
        float turnSpeedUsed; // f31
        float angleAway; // f0
    }
}
// signature: zBoardPlayerDrainGoo::AddStates(xAnimTable *)
// Range: 0x80069710 -> 0x80069780
void zBoardPlayerDrainGoo::AddStates() {
}
// Range: 0x80069780 -> 0x800698BC
void zBoardPlayerDrainGoo::AddActionTransitions(class zBoardPlayerDrainGoo * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zBoardPlayerDrainGoo::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800698C0 -> 0x80069928
void zBoardPlayerDrainGoo::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// signature: zBoardPlayerDrainGoo::StartDrainGooCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800699B0 -> 0x800699F0
unsigned int zBoardPlayerDrainGoo::StartDrainGooCheck() {
}
// Range: 0x800699F0 -> 0x80069A34
void zBoardPlayerDrainGoo::Begin(class zBoardPlayerDrainGoo * this /* r31 */) {
}
// signature: zBoardGainPowerupPropBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x80069A40 -> 0x80069A7C
void zBoardGainPowerupPropBE(void * object /* r31 */) {
    // Local variables
    class zBoardPlayer * bPlayer; // r0
}
// Range: 0x80069A80 -> 0x80069B1C
void zBoardGainPowerupSidekickBE(class xAnimPlay * play /* r29 */, class xAnimState * state /* r30 */, void * object /* r31 */) {
    // Local variables
    class zBoardPlayer * sbPlayer; // reg65535
}
// Range: 0x80069B20 -> 0x80069DB0
void zBoardPlayerGainPowerup::AddStates(class zBoardPlayerGainPowerup * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80069DB0 -> 0x80069F68
void zBoardPlayerGainPowerup::AddInternalTransitions(class xAnimTable * table /* r27 */) {
}
// Range: 0x8006A0F0 -> 0x8006A258
void zBoardPlayerGainPowerup::AddActionTransitions(class zBoardPlayerGainPowerup * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zBoardPlayerGainPowerup::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8006A260 -> 0x8006A340
void zBoardPlayerGainPowerup::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// signature: zBoardPlayerGainPowerup::GainSidekickPowerupCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8006A4C0 -> 0x8006A4F4
unsigned int zBoardPlayerGainPowerup::GainSidekickPowerupCheck() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r3
}
// signature: zBoardPlayerGainPowerup::GainSpongebuffPowerupCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8006A500 -> 0x8006A530
unsigned int zBoardPlayerGainPowerup::GainSpongebuffPowerupCheck() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r4
}
// signature: zBoardPlayerGainPowerup::GainInvincibilityPowerupCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8006A530 -> 0x8006A560
unsigned int zBoardPlayerGainPowerup::GainInvincibilityPowerupCheck() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r4
}
// signature: zBoardPlayerGainPowerup::GainSpinPowerupCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8006A560 -> 0x8006A594
unsigned int zBoardPlayerGainPowerup::GainSpinPowerupCheck() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r5
}
// signature: zBoardPlayerGainPowerup::GainHammerPowerupCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8006A5A0 -> 0x8006A5D4
unsigned int zBoardPlayerGainPowerup::GainHammerPowerupCheck() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r5
}
// signature: zBoardPlayerGainPowerup::GainPuckPowerupCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8006A5E0 -> 0x8006A614
unsigned int zBoardPlayerGainPowerup::GainPuckPowerupCheck() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r5
}
// Range: 0x8006A620 -> 0x8006A668
void zBoardPlayerGainPowerup::Begin() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r31
}
// Range: 0x8006A670 -> 0x8006A730
void zBoardPlayerGainPowerup::End() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r31
    class EventActionSBPowerup params; // r1+0x8
}
// Range: 0x8006A730 -> 0x8006A7FC
void zBoardPlayerSpinPowerupAttack::AddStates(class zBoardPlayerSpinPowerupAttack * this /* r24 */, class xAnimTable * table /* r25 */) {
}
// Range: 0x8006A800 -> 0x8006A8C8
void zBoardPlayerSpinPowerupAttack::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x8006A8D0 -> 0x8006A9D8
void zBoardPlayerSpinPowerupAttack::AddActionTransitions(class zBoardPlayerSpinPowerupAttack * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zBoardPlayerSpinPowerupAttack::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8006AAE0 -> 0x8006AB48
void zBoardPlayerSpinPowerupAttack::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// signature: zBoardPlayerSpinPowerupAttack::SpinPowerupCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8006ABD0 -> 0x8006ABF8
unsigned int zBoardPlayerSpinPowerupAttack::SpinPowerupCheck() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r5
}
// Range: 0x8006AC00 -> 0x8006ACE4
void zBoardPlayerSpinPowerupAttack::AddAttacks(class zCombatAttack * attackStates /* r21 */, unsigned short bone1 /* r22 */, unsigned short bone2 /* r23 */) {
    // Local variables
    class zCombatAttack * spinAttack; // r0
    class zCombatAttack * spinMovingAttack; // r0
}
// Range: 0x8006ACF0 -> 0x8006AD0C
void zBoardPlayerSpinPowerupAttack::Begin() {
}
// signature: zBoardPlayerSpinPowerupAttack::Update(float)
// Range: 0x8006AD10 -> 0x8006AE30
void zBoardPlayerSpinPowerupAttack::Update(class zBoardPlayerSpinPowerupAttack * this /* r28 */) {
    // Local variables
    class zBoardPlayer * sbPlayer; // r28
    class fixed_stack_list vortexList; // r1+0x38
    class xVec3 checkPos; // r1+0x2C

    {
        // Range: 0x8006AD90 -> 0x8006AE18
        {
            // Range: 0x8006AD9C -> 0x8006AE18
            // Local variables
            class xVec3 toPlayer; // r1+0x14
            class xVec3 enemyPos; // r1+0x20
        }
    }
}
// Range: 0x8006AE30 -> 0x8006B07C
void zBoardPlayerHammerPowerupAttack::AddStates(class zBoardPlayerHammerPowerupAttack * this /* r24 */, class xAnimTable * table /* r25 */) {
}
// Range: 0x8006B080 -> 0x8006B67C
void zBoardPlayerHammerPowerupAttack::AddInternalTransitions(class xAnimTable * table /* r23 */) {
}
// Range: 0x8006B7C0 -> 0x8006B840
void zBoardPlayerHammerPowerupAttack::AddActionTransitions(class zBoardPlayerHammerPowerupAttack * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zBoardPlayerHammerPowerupAttack::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8006B840 -> 0x8006B8F0
void zBoardPlayerHammerPowerupAttack::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// signature: zBoardPlayerHammerPowerupAttack::HammerPowerupCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8006BA10 -> 0x8006BA38
unsigned int zBoardPlayerHammerPowerupAttack::HammerPowerupCheck() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r5
}
// Range: 0x8006BA40 -> 0x8006BABC
unsigned int zBoardPlayerHammerPowerupAttack::HammerPowerupMovingCheck(class zBoardPlayerHammerPowerupAttack * this /* r29 */, class xAnimTransition * tran /* r30 */, class xAnimSingle * anim /* r31 */) {
}
// Range: 0x8006BAC0 -> 0x8006BC2C
void zBoardPlayerHammerPowerupAttack::AddAttacks(class zCombatAttack * attackStates /* r21 */, unsigned short bone1 /* r22 */, unsigned short bone2 /* r23 */, unsigned short bone3 /* r24 */) {
    // Local variables
    class zCombatAttack * idleAttack; // r0
    class zCombatAttack * walkLeftAttack; // r0
    class zCombatAttack * walkRightAttack; // r0
    class zCombatAttack * runAttack; // r0
}
// signature: zBoardPlayerHammerPowerupAttack::AttackPushCB(xAnimTransition *, xAnimSingle *)
// Range: 0x8006BC30 -> 0x8006BCA0
unsigned int zBoardPlayerHammerPowerupAttack::AttackPushCB(class zBoardPlayerHammerPowerupAttack * this /* r31 */) {
    // Local variables
    class xVec3 forwardVelocity; // r1+0x8
}
// signature: zBoardPlayerHammerPowerupAttack::SplashCB(xAnimTransition *, xAnimSingle *)
// Range: 0x8006BCB0 -> 0x8006BDA4
unsigned int zBoardPlayerHammerPowerupAttack::SplashCB(class zBoardPlayerHammerPowerupAttack * this /* r30 */) {
    // Local variables
    class xVec3 splashPos; // r1+0x18

    // References
    // -> class zBombManager gBombManager;
}
// Range: 0x8006BDB0 -> 0x8006BDCC
void zBoardPlayerHammerPowerupAttack::Begin() {
}
// signature: zBoardPlayerHammerPowerupAttack::Update(float)
// Range: 0x8006BDD0 -> 0x8006BDD4
void zBoardPlayerHammerPowerupAttack::Update() {
}
// Range: 0x8006BDE0 -> 0x8006C028
void zBoardPlayerPuckPowerupAttack::AddStates(class zBoardPlayerPuckPowerupAttack * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x8006C030 -> 0x8006C628
void zBoardPlayerPuckPowerupAttack::AddInternalTransitions(class xAnimTable * table /* r23 */) {
}
// Range: 0x8006C650 -> 0x8006C6D0
void zBoardPlayerPuckPowerupAttack::AddActionTransitions(class zBoardPlayerPuckPowerupAttack * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zBoardPlayerPuckPowerupAttack::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8006C6D0 -> 0x8006C780
void zBoardPlayerPuckPowerupAttack::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// signature: zBoardPlayerPuckPowerupAttack::PuckPowerupCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8006C8A0 -> 0x8006C8C8
unsigned int zBoardPlayerPuckPowerupAttack::PuckPowerupCheck() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r5
}
// Range: 0x8006C8D0 -> 0x8006C94C
unsigned int zBoardPlayerPuckPowerupAttack::PuckPowerupMovingCheck(class zBoardPlayerPuckPowerupAttack * this /* r29 */, class xAnimTransition * tran /* r30 */, class xAnimSingle * anim /* r31 */) {
}
// signature: zBoardPlayerPuckPowerupAttack::FirePuckCB(xAnimTransition *, xAnimSingle *)
// Range: 0x8006C950 -> 0x8006C9D8
unsigned int zBoardPlayerPuckPowerupAttack::FirePuckCB() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r31
    class xVec3 backwardVelocity; // r1+0x8
}
// Range: 0x8006C9E0 -> 0x8006C9FC
void zBoardPlayerPuckPowerupAttack::Begin() {
}
// signature: zBoardPlayerLosePowerup::AddStates(xAnimTable *)
// Range: 0x8006CA00 -> 0x8006CA70
void zBoardPlayerLosePowerup::AddStates() {
}
// Range: 0x8006CA70 -> 0x8006CC00
void zBoardPlayerLosePowerup::AddActionTransitions(class zBoardPlayerLosePowerup * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zBoardPlayerLosePowerup::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8006CC00 -> 0x8006CC68
void zBoardPlayerLosePowerup::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// signature: zBoardPlayerLosePowerup::LosePowerupCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8006CCF0 -> 0x8006CD80
unsigned int zBoardPlayerLosePowerup::LosePowerupCheck() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r31
}
// Range: 0x8006CD80 -> 0x8006CDCC
void zBoardPlayerLosePowerup::Begin() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r31
}
// Range: 0x8006CDD0 -> 0x8006CDF4
void zBoardPlayerLosePowerup::End() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r5
}
// Range: 0x8006CE00 -> 0x8006D044
void zBoardPlayerCandy::AddStates(class zBoardPlayerCandy * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x8006D050 -> 0x8006D46C
void zBoardPlayerCandy::AddInternalTransitions(class xAnimTable * table /* r23 */) {
}
// Range: 0x8006D5E0 -> 0x8006D708
void zBoardPlayerCandy::AddActionTransitions(class zBoardPlayerCandy * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zBoardPlayerCandy::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8006D710 -> 0x8006D7C0
void zBoardPlayerCandy::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// Range: 0x8006D7C0 -> 0x8006D898
void zBoardPlayerCandy::AddAttacks(class zCombatAttack * attackStates /* r22 */, unsigned short bone1 /* r23 */, unsigned short bone2 /* r24 */) {
    // Local variables
    class zCombatAttack * idleAttack; // r0
    class zCombatAttack * movingAttack; // r0
}
// signature: zBoardPlayerQuicksandJump::SBQuicksandJumpCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8006D8A0 -> 0x8006DA28
unsigned int zBoardPlayerQuicksandJump::SBQuicksandJumpCheck(class zBoardPlayerQuicksandJump * this /* r30 */) {
}
// signature: zBoardPlayerQuicksandJump::AddStates(xAnimTable *)
// Range: 0x8006DA30 -> 0x8006DA98
void zBoardPlayerQuicksandJump::AddStates() {
}
// signature: zBoardPlayerQuicksandJump::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8006DAA0 -> 0x8006DB08
void zBoardPlayerQuicksandJump::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, enum SpecialActions specialAction /* r0 */) {
}
// Range: 0x8006DB90 -> 0x8006DCD4
void zBoardPlayerQuicksandJump::AddActionTransitions(class zBoardPlayerQuicksandJump * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x8006DDE0 -> 0x8006DDFC
void zBoardPlayerQuicksandJump::Begin() {
}
// Range: 0x8006DE00 -> 0x8006DED0
void zBoardPlayerQuicksandJump::Move(class zBoardPlayerQuicksandJump * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
    // Local variables
    float t0; // f2
}
// Range: 0x8006DED0 -> 0x8006DF90
void zBoardPlayerQuicksandStuck::AddStates(class zBoardPlayerQuicksandStuck * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x8006DF90 -> 0x8006E058
void zBoardPlayerQuicksandStuck::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x8006E060 -> 0x8006E198
void zBoardPlayerQuicksandStuck::AddActionTransitions(class zBoardPlayerQuicksandStuck * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zBoardPlayerQuicksandStuck::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8006E1A0 -> 0x8006E250
void zBoardPlayerQuicksandStuck::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// signature: zBoardPlayerBungeeBall::SBBungeeBallCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8006E370 -> 0x8006E3E0
unsigned int zBoardPlayerBungeeBall::SBBungeeBallCheck(class zBoardPlayerBungeeBall * this /* r29 */) {
}
// signature: zBoardPlayerBungeeBall::SBBungeeBallFlattenedCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8006E3E0 -> 0x8006E40C
unsigned int zBoardPlayerBungeeBall::SBBungeeBallFlattenedCheck() {
}
// signature: zBoardPlayerBungeeBall::SBBungeeBallHitCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8006E410 -> 0x8006E48C
unsigned int zBoardPlayerBungeeBall::SBBungeeBallHitCheck() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r31
}
// signature: zBoardPlayerBungeeBall::SBBungeeBallDeathCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8006E490 -> 0x8006E500
unsigned int zBoardPlayerBungeeBall::SBBungeeBallDeathCheck(class zBoardPlayerBungeeBall * this /* r31 */) {
}
// signature: zBoardPlayerBungeeBall::SBBungeeBallFlingCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8006E500 -> 0x8006E560
unsigned int zBoardPlayerBungeeBall::SBBungeeBallFlingCheck() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r30
}
// signature: zBoardPlayerBungeeBall::SBBungeeBallBuffFlingCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8006E560 -> 0x8006E5C0
unsigned int zBoardPlayerBungeeBall::SBBungeeBallBuffFlingCheck() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r30
}
// signature: zBoardPlayerBungeeBall::SBBungeeBallReturnCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8006E5C0 -> 0x8006E5DC
unsigned int zBoardPlayerBungeeBall::SBBungeeBallReturnCheck() {
}
// signature: zBoardPlayerBungeeBall::SBBungeeBallIdleCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8006E5E0 -> 0x8006E60C
unsigned int zBoardPlayerBungeeBall::SBBungeeBallIdleCheck() {
}
// Range: 0x8006E610 -> 0x8006E8A0
void zBoardPlayerBungeeBall::AddStates(class zBoardPlayerBungeeBall * this /* r24 */, class xAnimTable * table /* r25 */) {
}
// Range: 0x8006E8A0 -> 0x8006EF74
void zBoardPlayerBungeeBall::AddInternalTransitions(class xAnimTable * table /* r21 */) {
}
// Range: 0x8006F4A0 -> 0x8006F698
void zBoardPlayerBungeeBall::AddActionTransitions(class zBoardPlayerBungeeBall * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// signature: zBoardPlayerBungeeBall::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8006F790 -> 0x8006F7F8
void zBoardPlayerBungeeBall::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x8006F880 -> 0x8006F980
void zBoardPlayerBungeeBall::Begin(class zBoardPlayerBungeeBall * this /* r29 */) {
    // Local variables
    class zBoardPlayer * sbPlayer; // r30
}
// signature: zBoardPlayerBungeeBall::Move(xScene *, float, xEntFrame *)
// Range: 0x8006F9F0 -> 0x8006FDBC
void zBoardPlayerBungeeBall::Move(class zBoardPlayerBungeeBall * this /* r26 */, float dt /* f31 */, class xEntFrame * frame /* r27 */) {
    // Local variables
    class zBoardPlayer * sbPlayer; // r30
    class zBungeeBall * bungeeBall; // r29
    unsigned int animFlags; // r0
    unsigned int unresponsive; // r28
    bool shouldFling; // r25
    float newYaw; // f0
    class xVec3 & offset; // r25
    float len; // f0

    {
        // Range: 0x8006FAE0 -> 0x8006FB7C
        // Local variables
        class xVec2 swingDir; // r1+0x18
        unsigned int stability; // r1+0x8
    }
    {
        // Range: 0x8006FBD8 -> 0x8006FC88
        // Local variables
        float lean; // f0
        float stickInput; // f2
    }
    {
        // Range: 0x8006FD20 -> 0x8006FD64
        // Local variables
        float newLen; // f0
    }
}
// signature: zBoardPlayerBungeeBall::Update(float)
// Range: 0x8006FDC0 -> 0x8006FEA0
void zBoardPlayerBungeeBall::Update(class zBoardPlayerBungeeBall * this /* r29 */) {
    // Local variables
    class zBoardPlayer * sbPlayer; // r30
}
// Range: 0x8006FEA0 -> 0x8006FF60
void zBoardPlayerBungeeBall::End() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r30
}
// Range: 0x8006FF60 -> 0x8006FFF0
void zBoardPlayerBungeeBall::AddAttacks(class zCombatAttack * attackStates /* r30 */, unsigned short bone /* r31 */) {
    // Local variables
    class zCombatAttack * flingAttack; // r0
}
// signature: zPlayerCheatBoard::AddStates(xAnimTable *)
// Range: 0x8006FFF0 -> 0x80070060
void zPlayerCheatBoard::AddStates() {
}
// Range: 0x80070060 -> 0x80070230
void zPlayerCheatBoard::AddActionTransitions(class zPlayerCheatBoard * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x80070310 -> 0x80070418
void zBoardPlayerKelpTrap::AddStates(class zBoardPlayerKelpTrap * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80070420 -> 0x800704C0
void zBoardPlayerKelpTrap::AddActionTransitions(class zBoardPlayerKelpTrap * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x800704C0 -> 0x800705C0
void zBoardPlayerKelpTrap::AddInternalTransitions(class xAnimTable * table /* r25 */) {
}
// Range: 0x800705E0 -> 0x8007061C
void zBoardPlayerKelpTrap::Begin() {
}
// signature: zBoardPlayerKelpTrap::BeforeEnter(xAnimPlay *, xAnimState *, void *)
// Range: 0x80070620 -> 0x80070694
void zBoardPlayerKelpTrap::BeforeEnter(class xAnimState * state /* r30 */, void * object /* r31 */) {
    // Local variables
    class zBoardPlayer * player; // r0
    class zAnimPackage * currentPackage; // r0
}
// Range: 0x800706A0 -> 0x80070700
void zBoardPlayerKelpTrap::End(class zBoardPlayerKelpTrap * this /* r31 */) {
}
// signature: zBoardPlayerKelpTrap::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80070700 -> 0x80070768
void zBoardPlayerKelpTrap::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// signature: zBoardPlayerKelpTrap::Move(xScene *, float, xEntFrame *)
// Range: 0x800707F0 -> 0x800708A8
void zBoardPlayerKelpTrap::Move(class zBoardPlayerKelpTrap * this /* r31 */) {
    {
        // Range: 0x80070810 -> 0x8007088C
        // Local variables
        class hkVector4 pos; // r1+0x20
    }
}
// signature: zBoardPlayerKelpTrap::KelpTrapCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800708B0 -> 0x800708C4
unsigned int zBoardPlayerKelpTrap::KelpTrapCheck() {
}
// signature: zBoardPlayerKelpTrap::KelpReleaseCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800708D0 -> 0x80070918
unsigned int zBoardPlayerKelpTrap::KelpReleaseCheck() {
    // Local variables
    class zPlantTrap * kelp; // r3
}
// Range: 0x80070920 -> 0x80070988
void zPlayerDefeatedBoard::Begin(class zPlayerDefeatedBoard * this /* r31 */) {
}
// signature: zBoardFrozenGooBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x80070990 -> 0x800709CC
void zBoardFrozenGooBE(void * object /* r31 */) {
    // Local variables
    class zBoardPlayer * player; // r0
}
// signature: zBoardGravestoneBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x800709D0 -> 0x80070A0C
void zBoardGravestoneBE(void * object /* r31 */) {
    // Local variables
    class zBoardPlayer * player; // r0
}
// Range: 0x80070A10 -> 0x80070C78
void zPlayerDefeatedBoard::AddStates(class zPlayerDefeatedBoard * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x80070C80 -> 0x80070D3C
void zPlayerDefeatedBoard::AddInternalTransitions(class xAnimTable * table /* r27 */) {
}
// signature: zPlayerDefeatedBoard::DeathCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80070D40 -> 0x80070DC8
unsigned int zPlayerDefeatedBoard::DeathCheck(class zPlayerDefeatedBoard * this /* r30 */, class xAnimTransition * tran /* r31 */) {
}
// signature: zPlayerDefeatedBoard::FrozenGooDeathCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80070DD0 -> 0x80070E84
unsigned int zPlayerDefeatedBoard::FrozenGooDeathCheck() {
    // Local variables
    class zBoardPlayer * sbPlayer; // r30

    // References
    // -> class zGlobals globals;
}
// signature: zPlayerDefeatedBoard::Update(float)
// Range: 0x80070E90 -> 0x80070F08
void zPlayerDefeatedBoard::Update(class zPlayerDefeatedBoard * this /* r31 */) {
    // Local variables
    class xAnimSingle * single; // r31
}
// Range: 0x80070F10 -> 0x80070F20
void zPlayerDefeatedBoard::End() {
}
// Range: 0x80070F20 -> 0x80071010
void zPlayerDefeatedBoard::Reset(class zPlayerDefeatedBoard * this /* r31 */) {
    // Local variables
    unsigned int choice; // r5

    {
        // Range: 0x80070F2C -> 0x80070F94
        // Local variables
        int i; // r6

        {
            // Range: 0x80070F2C -> 0x80070F94
            // Local variables
            unsigned int flag; // r0
            unsigned int data; // r7
        }
    }
    {
        // Range: 0x80070FA0 -> 0x80070FFC
        // Local variables
        int j; // r6

        {
            // Range: 0x80070FA0 -> 0x80070FFC
            // Local variables
            unsigned int data; // r7
        }
    }
}
// signature: zPlayerDefeatedBoard::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80071010 -> 0x8007117C
void zPlayerDefeatedBoard::AddTransitionsFrom(class xAnimTable * table /* r23 */, char * fromStates /* r24 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r25 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned short priority /* r27 */, float blend /* f31 */, unsigned int flags /* r28 */, unsigned int userFlags /* r29 */) {
}
// signature: zPlayerCelebrationBoard::AddStates(xAnimTable *)
// Range: 0x80071360 -> 0x800713C8
void zPlayerCelebrationBoard::AddStates() {
}
// signature: zPlayerCelebrationBoard::CelebrationCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800713D0 -> 0x8007143C
unsigned int zPlayerCelebrationBoard::CelebrationCheck(class zPlayerCelebrationBoard * this /* r31 */) {
}
// Range: 0x80071440 -> 0x80071510
void zPlayerCelebrationBoard::AddActionTransitions(class zPlayerCelebrationBoard * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zPlayerCelebrationBoard::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80071510 -> 0x80071578
void zPlayerCelebrationBoard::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x80071600 -> 0x80071610
void zPlayerCelebrationBoard::Begin() {
}
// Range: 0x80071610 -> 0x8007185C
void zPlayerSlide::AddStates(class zPlayerSlide * this /* r24 */, class xAnimTable * table /* r25 */) {
}
// Range: 0x80071860 -> 0x80071984
void zPlayerSlide::AddActionTransitions(class zPlayerSlide * this /* r29 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x80071A10 -> 0x80071D08
void zPlayerSlide::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// signature: zPlayerSlide::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80071DF0 -> 0x80071E58
void zPlayerSlide::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x80071ED0 -> 0x80071F2C
void zPlayerSlide::Begin() {
}
// signature: zSlideBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x80071F30 -> 0x80071FA4
void zSlideBE(class xAnimState * state /* r30 */, void * object /* r31 */) {
    // Local variables
    class zBoardPlayer * player; // r0
    class zAnimPackage * currentPackage; // r0
}
// Range: 0x80071FB0 -> 0x80072000
void zPlayerSlide::End() {
}
// signature: zPlayerSlide::UpdateFall(float)
// Range: 0x80072000 -> 0x80072030
void zPlayerSlide::UpdateFall() {
}
// Range: 0x80072030 -> 0x80072768
void zPlayerSlide::Move(class zPlayerSlide * this /* r27 */, class xScene * s /* r28 */, float dt /* f26 */, class xEntFrame * frame /* r29 */) {
    // Local variables
    bool allowMovement; // r31
    float playerInputX; // f25
    float playerInputY; // f1

    {
        // Range: 0x800720D0 -> 0x80072380
        // Local variables
        class zPlayerInput * playerInput; // r30

        {
            // Range: 0x8007213C -> 0x80072380
            // Local variables
            char msg[128]; // r1+0x70
        }
    }
    {
        // Range: 0x80072380 -> 0x80072718
        // Local variables
        float brakeLean; // f1
        float resultingLeanValue; // f2
        float thisStickPos; // f27
        unsigned int animFlags; // r0
        float JumpYDisplacement; // f28

        {
            // Range: 0x80072408 -> 0x80072674
            // Local variables
            float actualSpeedMult; // f25
            float speedMultDelta; // f4
            float idealSpeedMult; // f3
            float slowDownRatio; // f0
            class xVec3 LRMovementVec; // r1+0x60

            {
                // Range: 0x80072420 -> 0x800725BC
                // Local variables
                float stickOffset; // f0
                class xVec3 mySlopeRight; // r1+0x48
                class xVec3 mySlopeVec; // r1+0x54
                float dotProd; // f0
                float desiredLRSpeed; // f25
            }
        }
    }

    // References
    // -> float leanValue;
    // -> float speedMultRate;
    // -> float maxAccel;
    // -> float minAccel;
    // -> float lastPlayerSlowDownRatio;
    // -> float lastPlayersStickPos;
}
// signature: zPlayerSlide::GetY(float) const
// Range: 0x80072780 -> 0x800727EC
float zPlayerSlide::GetY() const {
    // Local variables
    float yVal; // f0

    {
        // Range: 0x8007279C -> 0x800727E8
        // Local variables
        float td; // f5
    }

    // References
    // -> float SLIDE_JUMP_DECEL;
    // -> float SLIDE_JUMP_VELOCITY;
}
// signature: zPlayerSlide::SlideHitCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800727F0 -> 0x80072814
unsigned int zPlayerSlide::SlideHitCheck() {
}
// signature: zPlayerSlide::SlideJumpCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80072820 -> 0x800728B0
unsigned int zPlayerSlide::SlideJumpCheck(class zPlayerSlide * this /* r31 */) {
}
// signature: zPlayerSlide::SlideJumpApexCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800728B0 -> 0x800728E8
unsigned int zPlayerSlide::SlideJumpApexCheck() {
}
// signature: zPlayerSlide::SlideLandCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800728F0 -> 0x80072900
unsigned int zPlayerSlide::SlideLandCheck() {
}
// signature: zPlayerSlide::SlideExitCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80072900 -> 0x80072980
unsigned int zPlayerSlide::SlideExitCheck() {
    // Local variables
    class zSlope * mySlope; // r30
    class hkVector4 pos; // r1+0x20
}
