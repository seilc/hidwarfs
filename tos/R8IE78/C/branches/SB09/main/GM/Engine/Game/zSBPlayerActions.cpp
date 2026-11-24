/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zSBPlayerActions.cpp
*/
float DOUBLE_JUMP_VELOCITY; // size: 0x4, address: 0x806C1DFC
float DOUBLE_JUMP_DECEL; // size: 0x4, address: 0x80754B2C
// signature: zSBAnimPackageBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x801372E0 -> 0x80137680
void zSBAnimPackageBE(class xAnimState * state /* r29 */) {
    // Local variables
    class zSBPlayer * player; // r31
    class zAnimPackage * currentPackage; // r28
    unsigned long long animPackageID; // r0:r0
    class zAnimPackage * defaultPackage; // r30

    {
        // Range: 0x8013748C -> 0x801374F8
        // Local variables
        int i; // r27

        {
            // Range: 0x8013748C -> 0x801374F8
            // Local variables
            void * rawData; // r4
        }
    }
    {
        // Range: 0x801374F8 -> 0x80137554
        // Local variables
        void * rawData; // r4
    }
    {
        // Range: 0x80137554 -> 0x801375A4
        // Local variables
        bool validData; // r0
        int numVFXData; // r1+0x18
        class xAnimVFX_Effect * vfxData; // r1+0x1C
    }
    {
        // Range: 0x801375A8 -> 0x801375E8
        // Local variables
        bool validData; // r0
        int numVFXData; // r1+0x10
        class xAnimVFX_Effect * vfxData; // r1+0x14
    }
    {
        // Range: 0x801375E8 -> 0x80137630
        // Local variables
        bool validData; // r0
        class xAnimSoundEffect * soundData; // r1+0xC
    }
    {
        // Range: 0x80137634 -> 0x8013766C
        // Local variables
        bool validData; // r0
        class xAnimSoundEffect * soundData; // r1+0x8
    }
}
// signature: zSBPlayerAction::SBWalkCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80137680 -> 0x8013773C
unsigned int zSBPlayerAction::SBWalkCheck(class zSBPlayerAction * this /* r30 */) {
}
// signature: zSBPlayerAction::SBRunCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80137740 -> 0x801377A8
unsigned int zSBPlayerAction::SBRunCheck() {
}
// signature: zSBPlayerAction::SBStopCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x801377B0 -> 0x80137834
unsigned int zSBPlayerAction::SBStopCheck(class zSBPlayerAction * this /* r30 */) {
}
// signature: zSBPlayerAction::SBLandCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80137840 -> 0x8013796C
unsigned int zSBPlayerAction::SBLandCheck(class zSBPlayerAction * this /* r31 */) {
}
// signature: zSBPlayerAction::SBFallCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80137970 -> 0x801379A0
unsigned int zSBPlayerAction::SBFallCheck() {
}
// Range: 0x801379A0 -> 0x80137A24
unsigned int zSBPlayerAction::SBCandyCheck(class zSBPlayerAction * this /* r28 */, class xAnimTransition * tran /* r29 */, class xAnimSingle * anim /* r30 */) {
}
// signature: zSBPlayerAction::SBCandyBuffCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80137A30 -> 0x80137A80
unsigned int zSBPlayerAction::SBCandyBuffCheck(class zSBPlayerAction * this /* r30 */) {
}
// Range: 0x80137A80 -> 0x80137B14
unsigned int zSBPlayerAction::SBQuicksandMoveCheck(class zSBPlayerAction * this /* r29 */, class xAnimTransition * tran /* r30 */, class xAnimSingle * anim /* r31 */) {
}
// Range: 0x80137B20 -> 0x80137B94
unsigned int zSBPlayerAction::SBQuicksandStopCheck(class zSBPlayerAction * this /* r28 */, class xAnimTransition * tran /* r29 */, class xAnimSingle * anim /* r30 */) {
}
// signature: zSBPlayerAction::DefaultStateCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80137BA0 -> 0x80137BF8
unsigned int zSBPlayerAction::DefaultStateCheck() {
}
// signature: zPlayerIdleSB::IdleCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80137C00 -> 0x80137C84
unsigned int zPlayerIdleSB::IdleCheck() {
}
// Range: 0x80137C90 -> 0x80137D38
unsigned int zPlayerIdleSB::IdleRegularCheck(class zPlayerIdleSB * this /* r28 */, class xAnimTransition * tran /* r29 */, class xAnimSingle * anim /* r30 */) {
}
// Range: 0x80137D40 -> 0x80137DC0
unsigned int zPlayerIdleSB::IdleNormalHappyCheck(class zPlayerIdleSB * this /* r27 */, class xAnimTransition * tran /* r28 */, class xAnimSingle * anim /* r29 */) {
}
// Range: 0x80137DC0 -> 0x80137E40
unsigned int zPlayerIdleSB::IdleHappyCheck(class zPlayerIdleSB * this /* r27 */, class xAnimTransition * tran /* r28 */, class xAnimSingle * anim /* r29 */) {
}
// Range: 0x80137E40 -> 0x80137EC0
unsigned int zPlayerIdleSB::IdleHappierCheck(class zPlayerIdleSB * this /* r27 */, class xAnimTransition * tran /* r28 */, class xAnimSingle * anim /* r29 */) {
}
// signature: zPlayerIdleSB::IdleExtraInterruptCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80137EC0 -> 0x80137F58
unsigned int zPlayerIdleSB::IdleExtraInterruptCheck(class zPlayerIdleSB * this /* r31 */) {
    {
        // Range: 0x80137EC8 -> 0x80137F40
        // Local variables
        float variance; // f1
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x80137F60 -> 0x80138008
unsigned int zPlayerIdleSB::IdleSlipperyCheck(class zPlayerIdleSB * this /* r29 */, class xAnimTransition * tran /* r30 */, class xAnimSingle * anim /* r31 */) {
}
// Range: 0x80138010 -> 0x801380D8
unsigned int zPlayerIdleSB::IdleLowHealthCheck(class zPlayerIdleSB * this /* r26 */, class xAnimTransition * tran /* r27 */, class xAnimSingle * anim /* r28 */) {
}
// Range: 0x801380E0 -> 0x801381A8
unsigned int zPlayerIdleSB::IdleColdCheck(class zPlayerIdleSB * this /* r29 */, class xAnimTransition * tran /* r30 */, class xAnimSingle * anim /* r31 */) {
}
// signature: zPlayerIdleSB::DefaultIdleCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x801381B0 -> 0x8013821C
unsigned int zPlayerIdleSB::DefaultIdleCheck(class zPlayerIdleSB * this /* r31 */) {
    // References
    // -> class zGlobals globals;
}
// signature: zPlayerIdleSB::ExtraIdleCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80138220 -> 0x801382D8
unsigned int zPlayerIdleSB::ExtraIdleCheck(class zPlayerIdleSB * this /* r31 */) {
    {
        // Range: 0x80138228 -> 0x801382C0
        // Local variables
        float variance; // f1
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x801382E0 -> 0x80138374
unsigned int zPlayerIdleSB::ExtraIdleDontFaceCamCheck(class zPlayerIdleSB * this /* r29 */, class xAnimTransition * tran /* r30 */, class xAnimSingle * anim /* r31 */) {
}
// signature: zPlayerIdleSB::ExtraIdleDontFaceCamBuffCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80138380 -> 0x80138404
unsigned int zPlayerIdleSB::ExtraIdleDontFaceCamBuffCheck(class zPlayerIdleSB * this /* r31 */) {
}
// Range: 0x80138410 -> 0x801384A4
unsigned int zPlayerIdleSB::ExtraIdleFaceCamCheck(class zPlayerIdleSB * this /* r29 */, class xAnimTransition * tran /* r30 */, class xAnimSingle * anim /* r31 */) {
}
// signature: zPlayerIdleSB::ExtraIdleFaceCamBuffCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x801384B0 -> 0x80138510
unsigned int zPlayerIdleSB::ExtraIdleFaceCamBuffCheck() {
}
// signature: zPlayerIdleSB::TurnToFaceCamCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80138510 -> 0x801386B4
unsigned int zPlayerIdleSB::TurnToFaceCamCheck(class zPlayerIdleSB * this /* r30 */, class xAnimTransition * tran /* r31 */) {
    {
        // Range: 0x80138524 -> 0x80138698
        // Local variables
        float dotProd; // f0
        float randomOffsetDeg; // r1+0x8
        class xMat4x3 camMat; // r1+0x18
    }
}
// signature: zPlayerIdleSB::TurnLeftCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x801386C0 -> 0x80138774
unsigned int zPlayerIdleSB::TurnLeftCheck(class zPlayerIdleSB * this /* r31 */) {
    {
        // Range: 0x801386E0 -> 0x8013875C
        // Local variables
        float variance; // f1
    }
}
// signature: zPlayerIdleSB::TurnRightCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80138780 -> 0x80138830
unsigned int zPlayerIdleSB::TurnRightCheck(class zPlayerIdleSB * this /* r31 */) {
    {
        // Range: 0x801387A0 -> 0x80138818
        // Local variables
        float variance; // f1
    }
}
// signature: zPlayerIdleSB::IdleAgingStartCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80138830 -> 0x80138884
unsigned int zPlayerIdleSB::IdleAgingStartCheck() {
    // References
    // -> class zGlobals globals;
}
// signature: zPlayerIdleSB::IdleAgingNextCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80138890 -> 0x801388C4
unsigned int zPlayerIdleSB::IdleAgingNextCheck() {
}
// Range: 0x801388D0 -> 0x8013894C
unsigned int zPlayerIdleSB::IdleAgingOutCheck(class zPlayerIdleSB * this /* r29 */, class xAnimTransition * tran /* r30 */, class xAnimSingle * anim /* r31 */) {
}
// Range: 0x80138950 -> 0x801389CC
unsigned int zPlayerIdleSB::IdleAgingOutColdCheck(class zPlayerIdleSB * this /* r29 */, class xAnimTransition * tran /* r30 */, class xAnimSingle * anim /* r31 */) {
}
// Range: 0x801389D0 -> 0x80138C68
unsigned int zPlayerIdleSB::IdleAgingCrumbleCheck(class zPlayerIdleSB * this /* r30 */, class xAnimTransition * tran /* r28 */, class xAnimSingle * anim /* r29 */) {
    // Local variables
    bool shouldExit; // r31
    float SwingStabilityMin; // f31
    float SwingStabilityRange; // f30
    float SwingThreshold; // f29
    unsigned int stability; // r1+0x8
    class xVec2 swingVecPrimary; // r1+0x18
    class xVec2 swingVecSecondary; // r1+0x10

    {
        // Range: 0x80138BCC -> 0x80138C34
        // Local variables
        float variance; // f1
    }
}
// signature: zPlayerIdleSB::ExtraIdleCB(xAnimTransition *, xAnimSingle *)
// Range: 0x80138C70 -> 0x80138DA8
unsigned int zPlayerIdleSB::ExtraIdleCB() {
    // Local variables
    class ExtraIdleTableEntry * variantGroup; // r31

    {
        // Range: 0x80138C94 -> 0x80138D28
        // Local variables
        unsigned int choice; // r5

        {
            // Range: 0x80138CC0 -> 0x80138D28
            // Local variables
            int i; // r6

            {
                // Range: 0x80138CC0 -> 0x80138D28
                // Local variables
                unsigned int data; // r7
            }
        }
    }
    {
        // Range: 0x80138D28 -> 0x80138D90
        // Local variables
        unsigned int choice; // r6

        {
            // Range: 0x80138D38 -> 0x80138D90
            // Local variables
            int i; // r7
        }
    }
}
// signature: zPlayerIdleSB::ResetExtraIdleVarsCB(xAnimTransition *, xAnimSingle *)
// Range: 0x80138DB0 -> 0x80138E3C
unsigned int zPlayerIdleSB::ResetExtraIdleVarsCB(class zPlayerIdleSB * this /* r31 */) {
    // Local variables
    float variance; // f1
}
// Range: 0x80138E40 -> 0x80138E98
void zSBAgingIdleBE(class xAnimPlay * play /* r29 */, class xAnimState * state /* r30 */, void * object /* r31 */) {
    // Local variables
    class zSBPlayer * player; // r0
}
// signature: zSBAgingIdlePopOutBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x80138EA0 -> 0x80138EB4
void zSBAgingIdlePopOutBE() {
    // Local variables
    class zSBPlayer * player; // r0
}
// Range: 0x80138EC0 -> 0x80139BAC
void zPlayerIdleSB::AddStates(class zPlayerIdleSB * this /* r24 */, class xAnimTable * table /* r25 */) {
}
// Range: 0x80139BB0 -> 0x8013B564
void zPlayerIdleSB::AddInternalTransitions(class xAnimTable * table /* r15 */) {
    // Local variables
    float AgingIdleBlendTime; // f31
}
// Range: 0x8013BB70 -> 0x8013BFD4
void zPlayerIdleSB::AddActionTransitions(class zPlayerIdleSB * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zPlayerIdleSB::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8013BFE0 -> 0x8013C280
void zPlayerIdleSB::AddTransitionsFrom(class xAnimTable * table /* r25 */, char * fromStates /* r26 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r28 */, unsigned short priority /* r29 */, float blend /* f31 */, unsigned int flags /* r30 */, unsigned int userFlags /* r31 */) {
}
// Range: 0x8013C280 -> 0x8013C3DC
void zPlayerIdleSB::Reset(class zPlayerIdleSB * this /* r28 */) {
    // Local variables
    int i; // r29
    int j; // r5

    {
        // Range: 0x8013C2DC -> 0x8013C3C4
        // Local variables
        unsigned int choice; // r6

        {
            // Range: 0x8013C2EC -> 0x8013C34C
            // Local variables
            unsigned int flag; // r0
            unsigned int data; // r6
        }
        {
            // Range: 0x8013C358 -> 0x8013C3C4
            // Local variables
            unsigned int data; // r7
        }
    }
}
// Range: 0x8013C3E0 -> 0x8013C49C
void zPlayerIdleSB::Begin(class zPlayerIdleSB * this /* r31 */) {
    // Local variables
    float variance; // f1
}
// Range: 0x8013C4A0 -> 0x8013C5D8
void zPlayerIdleSB::Update(class zPlayerIdleSB * this /* r31 */, float dt /* f31 */) {
    // Local variables
    unsigned int animFlags; // r0

    {
        // Range: 0x8013C508 -> 0x8013C5A4
        // Local variables
        class xMat4x3 camMat; // r1+0x8
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x8013C5E0 -> 0x8013C670
void zPlayerIdleSB::Move(class zPlayerIdleSB * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
    // Local variables
    unsigned int animFlags; // r0
}
// Range: 0x8013C670 -> 0x8013C6E8
void zPlayerIdleSB::End(class zPlayerIdleSB * this /* r31 */) {
    // Local variables
    float variance; // f1
}
// signature: zPlayerWalkSB::WalkCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8013C6F0 -> 0x8013C7F0
unsigned int zPlayerWalkSB::WalkCheck(class zPlayerWalkSB * this /* r30 */) {
}
// Range: 0x8013C7F0 -> 0x8013C890
unsigned int zPlayerWalkSB::WalkSlipperyCheck(class zPlayerWalkSB * this /* r26 */, class xAnimTransition * tran /* r27 */, class xAnimSingle * anim /* r28 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r29
}
// signature: zPlayerWalkSB::WalkToRun1Check(xAnimTransition *, xAnimSingle *)
// Range: 0x8013C890 -> 0x8013C900
unsigned int zPlayerWalkSB::WalkToRun1Check(class xAnimSingle * anim /* r30 */) {
}
// signature: zPlayerWalkSB::WalkToRun2Check(xAnimTransition *, xAnimSingle *)
// Range: 0x8013C900 -> 0x8013C970
unsigned int zPlayerWalkSB::WalkToRun2Check(class xAnimSingle * anim /* r30 */) {
}
// Range: 0x8013C970 -> 0x8013CAE0
void zPlayerWalkSB::AddStates(class zPlayerWalkSB * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x8013CAE0 -> 0x8013CCA4
void zPlayerWalkSB::AddInternalTransitions(class xAnimTable * table /* r24 */) {
}
// Range: 0x8013CE50 -> 0x8013D3FC
void zPlayerWalkSB::AddActionTransitions(class zPlayerWalkSB * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerWalkSB::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8013D500 -> 0x8013D620
void zPlayerWalkSB::AddTransitionsFrom(class xAnimTable * table /* r25 */, char * fromStates /* r26 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r28 */, unsigned short priority /* r29 */, float blend /* f31 */, unsigned int flags /* r30 */, unsigned int userFlags /* r31 */) {
}
// Range: 0x8013D620 -> 0x8013D67C
void zPlayerWalkSB::Begin(class zPlayerWalkSB * this /* r31 */) {
}
// signature: zPlayerRunSB::RunCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8013D680 -> 0x8013D704
unsigned int zPlayerRunSB::RunCheck(class zPlayerRunSB * this /* r31 */) {
}
// Range: 0x8013D710 -> 0x8013D7A0
unsigned int zPlayerRunSB::RunRegularCheck(class zPlayerRunSB * this /* r28 */, class xAnimTransition * tran /* r29 */, class xAnimSingle * anim /* r30 */) {
}
// signature: zPlayerRunSB::RunRegularNormalCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8013D7A0 -> 0x8013D804
unsigned int zPlayerRunSB::RunRegularNormalCheck(class zPlayerRunSB * this /* r31 */) {
    {
        // Range: 0x8013D7B4 -> 0x8013D7EC
        // Local variables
        class zSBPlayer * sbPlayer; // r3
    }
}
// Range: 0x8013D810 -> 0x8013D890
unsigned int zPlayerRunSB::RunRegularHappyCheck(class zPlayerRunSB * this /* r27 */, class xAnimTransition * tran /* r28 */, class xAnimSingle * anim /* r29 */) {
}
// Range: 0x8013D890 -> 0x8013D910
unsigned int zPlayerRunSB::RunRegularHappierCheck(class zPlayerRunSB * this /* r27 */, class xAnimTransition * tran /* r28 */, class xAnimSingle * anim /* r29 */) {
}
// Range: 0x8013D910 -> 0x8013D9B0
unsigned int zPlayerRunSB::RunSlipperyCheck(class zPlayerRunSB * this /* r26 */, class xAnimTransition * tran /* r27 */, class xAnimSingle * anim /* r28 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r29
}
// Range: 0x8013D9B0 -> 0x8013DABC
unsigned int zPlayerRunSB::RunBraveCheck(class zPlayerRunSB * this /* r30 */, class xAnimTransition * tran /* r31 */, class xAnimSingle * anim /* r25 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r26

    // References
    // -> class zGlobals globals;
}
// Range: 0x8013DAC0 -> 0x8013DB88
unsigned int zPlayerRunSB::RunSuccessCheck(class zPlayerRunSB * this /* r25 */, class xAnimTransition * tran /* r26 */, class xAnimSingle * anim /* r27 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r28
}
// Range: 0x8013DB90 -> 0x8013E0F0
void zPlayerRunSB::AddStates(class zPlayerRunSB * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x8013E0F0 -> 0x8013EC60
void zPlayerRunSB::AddInternalTransitions(class xAnimTable * table /* r19 */) {
}
// Range: 0x8013EF60 -> 0x8013F40C
void zPlayerRunSB::AddActionTransitions(class zPlayerRunSB * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zPlayerRunSB::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8013F410 -> 0x8013F6B0
void zPlayerRunSB::AddTransitionsFrom(class xAnimTable * table /* r25 */, char * fromStates /* r26 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r28 */, unsigned short priority /* r29 */, float blend /* f31 */, unsigned int flags /* r30 */, unsigned int userFlags /* r31 */) {
}
// signature: zPlayerTurn180SB::Turn180Check(xAnimTransition *, xAnimSingle *)
// Range: 0x8013F6B0 -> 0x8013F7FC
unsigned int zPlayerTurn180SB::Turn180Check(class zPlayerTurn180SB * this /* r30 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r31
    class xVec2 stickDir; // r1+0x8
    class xVec3 camRelInputDir; // r1+0x10
    float dotProdThreshold; // f31

    // References
    // -> class xVec3 m_Null;
}
// signature: zPlayerTurn180SB::Turn180DoneCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8013F800 -> 0x8013F870
unsigned int zPlayerTurn180SB::Turn180DoneCheck(class zPlayerTurn180SB * this /* r30 */) {
}
// signature: zPlayerTurn180SB::AddStates(xAnimTable *)
// Range: 0x8013F870 -> 0x8013F8F0
void zPlayerTurn180SB::AddStates() {
}
// Range: 0x8013F8F0 -> 0x8013FCB4
void zPlayerTurn180SB::AddActionTransitions(class zPlayerTurn180SB * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zPlayerTurn180SB::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8013FD40 -> 0x8013FDBC
void zPlayerTurn180SB::AddTransitionsFrom() {
}
// Range: 0x8013FE40 -> 0x8013FFC0
void zPlayerTurn180SB::Move(class zPlayerTurn180SB * this /* r29 */, class xScene * s /* r30 */, float dt /* f29 */, class xEntFrame * frame /* r31 */) {
    // Local variables
    float angleAway; // f31
    float turnSpeedUsed; // f30
}
// signature: zPlayerJumpSB::SBJumpCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8013FFC0 -> 0x80140250
unsigned int zPlayerJumpSB::SBJumpCheck(class zPlayerJumpSB * this /* r31 */) {
    // Local variables
    bool jumpButtonPressed; // r30

    // References
    // -> class zGlobals globals;
}
// signature: zPlayerJumpSB::SBJumpMovingCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80140250 -> 0x801402CC
unsigned int zPlayerJumpSB::SBJumpMovingCheck(class zPlayerJumpSB * this /* r31 */) {
}
// Range: 0x801402D0 -> 0x80140440
void zPlayerJumpSB::AddStates(class zPlayerJumpSB * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// signature: zPlayerJumpSB::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80140440 -> 0x8014054C
void zPlayerJumpSB::AddTransitionsFrom(class xAnimTable * table /* r28 */, char * fromStates /* r29 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */) {
}
// Range: 0x80140650 -> 0x80140A70
void zPlayerJumpSB::AddActionTransitions(class zPlayerJumpSB * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// Range: 0x80140B70 -> 0x80140C2C
void zPlayerJumpSB::AddInternalTransitions(class xAnimTable * table /* r27 */) {
}
// Range: 0x80140C30 -> 0x80140D54
void zPlayerJumpSB::Begin(class zPlayerJumpSB * this /* r30 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r31
}
// signature: zPlayerJumpSB::UpdateFall(float)
// Range: 0x80140D60 -> 0x80140D9C
void zPlayerJumpSB::UpdateFall() {
}
// Range: 0x80140DA0 -> 0x80140EFC
void zPlayerJumpSB::Move(class zPlayerJumpSB * this /* r29 */, class xScene * s /* r30 */, float dt /* f30 */, class xEntFrame * frame /* r31 */) {
    {
        // Range: 0x80140DEC -> 0x80140E64
        // Local variables
        class xVec3 dposVel; // r1+0x14
    }
    {
        // Range: 0x80140E64 -> 0x80140EB4
        // Local variables
        class xVec3 dposVel; // r1+0x8
    }
}
// signature: zPlayerJumpSB::GetY(float) const
// Range: 0x80140F00 -> 0x80140F4C
float zPlayerJumpSB::GetY() const {
    // Local variables
    float yVal; // f1

    {
        // Range: 0x80140F0C -> 0x80140F48
        // Local variables
        float td; // f5
    }
}
// Range: 0x80140F50 -> 0x801410BC
void zPlayerFluidSpraySB::AddStates(class zPlayerFluidSpraySB * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// signature: zPlayerFluidSpraySB::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x801410C0 -> 0x8014129C
void zPlayerFluidSpraySB::AddTransitionsFrom(class xAnimTable * table /* r28 */, char * fromStates /* r29 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */) {
}
// Range: 0x801414A0 -> 0x801415A8
void zPlayerFluidSpraySB::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x801415B0 -> 0x80141770
void zPlayerFluidSpraySB::AddActionTransitions(class zPlayerFluidSpraySB * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x801417E0 -> 0x801417F0
void zPlayerFluidSpraySB::End() {
}
// signature: zPlayerFluidSpraySB::Spray100Check(xAnimTransition *, xAnimSingle *)
// Range: 0x801417F0 -> 0x80141818
unsigned int zPlayerFluidSpraySB::Spray100Check() {
    // Local variables
    class zSBPlayer * sbPlayer; // r4
}
// signature: zPlayerFluidSpraySB::Spray75Check(xAnimTransition *, xAnimSingle *)
// Range: 0x80141820 -> 0x80141848
unsigned int zPlayerFluidSpraySB::Spray75Check() {
    // Local variables
    class zSBPlayer * sbPlayer; // r4
}
// signature: zPlayerFluidSpraySB::Spray50Check(xAnimTransition *, xAnimSingle *)
// Range: 0x80141850 -> 0x80141878
unsigned int zPlayerFluidSpraySB::Spray50Check() {
    // Local variables
    class zSBPlayer * sbPlayer; // r4
}
// signature: zPlayerFluidSpraySB::Spray25Check(xAnimTransition *, xAnimSingle *)
// Range: 0x80141880 -> 0x801418A8
unsigned int zPlayerFluidSpraySB::Spray25Check() {
    // Local variables
    class zSBPlayer * sbPlayer; // r4
}
// signature: zPlayerSlamStartSB::AddStates(xAnimTable *)
// Range: 0x801418B0 -> 0x80141930
void zPlayerSlamStartSB::AddStates() {
}
// signature: zPlayerSlamStartSB::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80141930 -> 0x801419B8
void zPlayerSlamStartSB::AddTransitionsFrom() {
}
// Range: 0x80141A40 -> 0x80141B40
void zPlayerSlamStartSB::AddActionTransitions(class zPlayerSlamStartSB * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// Range: 0x80141BC0 -> 0x80141BEC
void zPlayerSlamStartSB::Begin() {
}
// signature: zPlayerSlamStartSB::SlamCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80141BF0 -> 0x80141DCC
unsigned int zPlayerSlamStartSB::SlamCheck(class zPlayerSlamStartSB * this /* r30 */) {
    {
        // Range: 0x80141D10 -> 0x80141DB0
        // Local variables
        class xVec2 swingVec; // r1+0x10
        unsigned int stability; // r1+0x8
    }
}
// signature: zPlayerSlamFallSB::AddStates(xAnimTable *)
// Range: 0x80141DD0 -> 0x80141E68
void zPlayerSlamFallSB::AddStates() {
}
// signature: zPlayerSlamFallSB::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80141E70 -> 0x80141EF4
void zPlayerSlamFallSB::AddTransitionsFrom() {
}
// Range: 0x80141F00 -> 0x80142000
void zPlayerSlamFallSB::AddActionTransitions(class zPlayerSlamFallSB * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// Range: 0x80142080 -> 0x801420A8
void zPlayerSlamFallSB::Begin() {
}
// signature: zPlayerSlamFallSB::Move(xScene *, float, xEntFrame *)
// Range: 0x801420B0 -> 0x801420F8
void zPlayerSlamFallSB::Move() {
}
// signature: zPlayerSlamLandSB::AddStates(xAnimTable *)
// Range: 0x80142100 -> 0x80142180
void zPlayerSlamLandSB::AddStates() {
}
// signature: zPlayerSlamLandSB::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80142180 -> 0x80142204
void zPlayerSlamLandSB::AddTransitionsFrom() {
}
// Range: 0x80142210 -> 0x8014234C
void zPlayerSlamLandSB::AddActionTransitions(class zPlayerSlamLandSB * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// Range: 0x80142350 -> 0x80142390
void zPlayerSlamLandSB::Begin() {
    // Local variables
    class zSBPlayer * sbPlayer; // r31
}
// Range: 0x80142390 -> 0x801423B0
void zPlayerSlamLandSB::End() {
}
// signature: zPlayerFluidBurstSB::AddStates(xAnimTable *)
// Range: 0x801423B0 -> 0x80142448
void zPlayerFluidBurstSB::AddStates() {
}
// signature: zPlayerFluidBurstSB::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80142450 -> 0x801424D8
void zPlayerFluidBurstSB::AddTransitionsFrom() {
}
// signature: zPlayerFluidBurstSB::AddInternalTransitions(xAnimTable *)
// Range: 0x80142560 -> 0x801425C8
void zPlayerFluidBurstSB::AddInternalTransitions() {
}
// signature: zPlayerFluidBurstSB::FluidBurstCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x801425D0 -> 0x8014263C
unsigned int zPlayerFluidBurstSB::FluidBurstCheck(class zPlayerFluidBurstSB * this /* r30 */) {
}
// Range: 0x80142640 -> 0x801426B4
void zPlayerFluidBurstSB::Begin(class zPlayerFluidBurstSB * this /* r31 */) {
}
// Range: 0x801426C0 -> 0x8014273C
unsigned int zPlayerFallSB::FallMovingCheck(class zPlayerFallSB * this /* r29 */, class xAnimTransition * tran /* r30 */, class xAnimSingle * anim /* r31 */) {
}
// signature: zPlayerFallSB::FallHighCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80142740 -> 0x801427A0
unsigned int zPlayerFallSB::FallHighCheck() {
}
// signature: zPlayerFallSB::LandWalkCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x801427A0 -> 0x80142818
unsigned int zPlayerFallSB::LandWalkCheck(class zPlayerFallSB * this /* r31 */) {
}
// signature: zPlayerFallSB::LandRunCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80142820 -> 0x8014289C
unsigned int zPlayerFallSB::LandRunCheck(class zPlayerFallSB * this /* r31 */) {
}
// Range: 0x801428A0 -> 0x80142B30
void zPlayerFallSB::AddStates(class zPlayerFallSB * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80142B30 -> 0x80142CE4
void zPlayerFallSB::AddInternalTransitions(class xAnimTable * table /* r25 */) {
}
// Range: 0x80142D10 -> 0x8014348C
void zPlayerFallSB::AddActionTransitions(class zPlayerFallSB * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zPlayerFallSB::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80143590 -> 0x801436B0
void zPlayerFallSB::AddTransitionsFrom(class xAnimTable * table /* r25 */, char * fromStates /* r26 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r28 */, unsigned short priority /* r29 */, float blend /* f31 */, unsigned int flags /* r30 */, unsigned int userFlags /* r31 */) {
}
// Range: 0x801437D0 -> 0x801439D0
void zPlayerLandSB::AddStates(class zPlayerLandSB * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x801439D0 -> 0x80143E24
void zPlayerLandSB::AddActionTransitions(class zPlayerLandSB * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zPlayerLandSB::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80143EA0 -> 0x80143F1C
void zPlayerLandSB::AddTransitionsFrom() {
}
// signature: zPlayerLandSB::AddStandardTransitionsFrom(xAnimTable *, const char *)
// Range: 0x80143F20 -> 0x80143F70
void zPlayerLandSB::AddStandardTransitionsFrom() {
}
// Range: 0x80143F70 -> 0x80143F8C
void zPlayerLandSB::Begin() {
}
// Range: 0x80143F90 -> 0x801440B8
void zPlayerLandHighSB::AddStates(class zPlayerLandHighSB * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x801440C0 -> 0x80144180
void zPlayerLandHighSB::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x80144180 -> 0x8014439C
void zPlayerLandHighSB::AddActionTransitions(class zPlayerLandHighSB * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zPlayerLandHighSB::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x801443A0 -> 0x80144418
void zPlayerLandHighSB::AddTransitionsFrom() {
}
// Range: 0x80144420 -> 0x80144428
void zPlayerLandHighSB::End() {
}
// Range: 0x80144430 -> 0x801445A0
void zPlayerDoubleJumpSB::AddStates(class zPlayerDoubleJumpSB * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x801445A0 -> 0x80144660
void zPlayerDoubleJumpSB::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x80144660 -> 0x80144B0C
void zPlayerDoubleJumpSB::AddActionTransitions(class zPlayerDoubleJumpSB * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zPlayerDoubleJumpSB::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80144B90 -> 0x80144C9C
void zPlayerDoubleJumpSB::AddTransitionsFrom(class xAnimTable * table /* r28 */, char * fromStates /* r29 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */) {
}
// Range: 0x80144DA0 -> 0x80144DC8
void zPlayerDoubleJumpSB::Begin() {
}
// signature: zPlayerDoubleJumpSB::DoubleJumpStartCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80144DD0 -> 0x80144EF4
unsigned int zPlayerDoubleJumpSB::DoubleJumpStartCheck(class zPlayerDoubleJumpSB * this /* r30 */) {
    {
        // Range: 0x80144DE8 -> 0x80144EDC
        // Local variables
        bool shouldDoubleJump; // r31
    }
}
// signature: zPlayerDoubleJumpSB::DoubleJumpStartMovingCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80144F00 -> 0x80144F7C
unsigned int zPlayerDoubleJumpSB::DoubleJumpStartMovingCheck(class zPlayerDoubleJumpSB * this /* r31 */) {
}
// signature: zPlayerDoubleJumpSB::TransToFallCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80144F80 -> 0x80144FA0
unsigned int zPlayerDoubleJumpSB::TransToFallCheck() {
}
// Range: 0x80144FA0 -> 0x80145100
void zPlayerDoubleJumpSB::Move(class zPlayerDoubleJumpSB * this /* r29 */, class xScene * s /* r30 */, float dt /* f30 */, class xEntFrame * frame /* r31 */) {
    {
        // Range: 0x80144FEC -> 0x8014506C
        // Local variables
        class xVec3 dposVel; // r1+0x14
    }
    {
        // Range: 0x8014506C -> 0x801450B8
        // Local variables
        class xVec3 dposVel; // r1+0x8
    }
}
// signature: zPlayerDoubleJumpSB::GetY(float) const
// Range: 0x80145100 -> 0x8014515C
float zPlayerDoubleJumpSB::GetY() const {
    // Local variables
    float yVal; // f1

    {
        // Range: 0x80145110 -> 0x80145158
        // Local variables
        float td; // f5
    }

    // References
    // -> float DOUBLE_JUMP_DECEL;
    // -> float DOUBLE_JUMP_VELOCITY;
}
// signature: zPlayerSpringboardSB::SBSpringboardCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80145160 -> 0x801451B4
unsigned int zPlayerSpringboardSB::SBSpringboardCheck() {
}
// Range: 0x801451C0 -> 0x801452A0
void zPlayerSpringboardSB::AddStates(class zPlayerSpringboardSB * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// signature: zPlayerSpringboardSB::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x801452A0 -> 0x80145328
void zPlayerSpringboardSB::AddTransitionsFrom() {
}
// Range: 0x801453B0 -> 0x80145708
void zPlayerSpringboardSB::AddActionTransitions(class zPlayerSpringboardSB * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x80145790 -> 0x801457A8
void zPlayerSpringboardSB::Begin() {
}
// signature: zPlayerSpringboardSB::Move(xScene *, float, xEntFrame *)
// Range: 0x801457B0 -> 0x801458B4
void zPlayerSpringboardSB::Move(class zPlayerSpringboardSB * this /* r28 */) {
    // Local variables
    class hkpCharacterProxy * proxy; // r30

    {
        // Range: 0x80145828 -> 0x80145890
        // Local variables
        int i; // r29

        {
            // Range: 0x80145828 -> 0x80145890
            // Local variables
            class hkpRigidBody * testB; // r0
            class hkpRootCdPoint testPoint; // r1+0x20
        }
    }
}
// Range: 0x801458C0 -> 0x801458D0
void zPlayerSpringboardSB::End() {
}
// signature: zPlayerSpringboardSB::SBSpringboardDoubleJumpCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x801458D0 -> 0x801458F8
unsigned int zPlayerSpringboardSB::SBSpringboardDoubleJumpCheck() {
}
// Range: 0x80145900 -> 0x80145B4C
void zSBPlayerSpinAttack::AddStates(class zSBPlayerSpinAttack * this /* r24 */, class xAnimTable * table /* r25 */) {
}
// Range: 0x80145B50 -> 0x80145EB4
void zSBPlayerSpinAttack::AddActionTransitions(class zSBPlayerSpinAttack * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zSBPlayerSpinAttack::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80145F40 -> 0x80145FBC
void zSBPlayerSpinAttack::AddTransitionsFrom() {
}
// Range: 0x80146040 -> 0x80146468
void zSBPlayerSpinAttack::AddInternalTransitions(class xAnimTable * table /* r23 */) {
}
// signature: zSBPlayerSpinAttack::StartSpinAttackCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x801465E0 -> 0x80146938
unsigned int zSBPlayerSpinAttack::StartSpinAttackCheck(class zSBPlayerSpinAttack * this /* r30 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r31
    bool shouldSpin; // r29

    {
        // Range: 0x8014682C -> 0x801468E8
        // Local variables
        class xVec2 swingVec; // r1+0x10
        unsigned int stability; // r1+0x8
        float SwingThreshold; // f29
        float SwingStabilityRange; // f30
        float SwingStabilityMin; // f31

        {
            // Range: 0x801468B4 -> 0x801468E8
            // Local variables
            float swingAngle; // f0
        }
    }

    // References
    // -> class zGlobals globals;
}
// signature: zSBPlayerSpinAttack::FinishedQueueCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80146940 -> 0x801469E0
unsigned int zSBPlayerSpinAttack::FinishedQueueCheck(class zSBPlayerSpinAttack * this /* r31 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r4
}
// signature: zSBPlayerSpinAttack::SpongebuffIdleSpinCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x801469E0 -> 0x80146A2C
unsigned int zSBPlayerSpinAttack::SpongebuffIdleSpinCheck() {
}
// Range: 0x80146A30 -> 0x80146AAC
unsigned int zSBPlayerSpinAttack::SpongebuffMovingSpinCheck(class zSBPlayerSpinAttack * this /* r29 */, class xAnimTransition * tran /* r30 */, class xAnimSingle * anim /* r31 */) {
}
// Range: 0x80146AB0 -> 0x80146D00
void zSBPlayerSpinAttack::AddAttacks(class zCombatAttack * attackStates /* r26 */, unsigned short bone /* r27 */) {
    // Local variables
    class zCombatAttack * spinAttackMoving; // r0
    class zCombatAttack * spongebuffAttack; // r0
    class zCombatAttack * spongebuffAttackMoving; // r0
}
// Range: 0x80146D00 -> 0x80146D68
void zSBPlayerSpinAttack::Begin() {
    // Local variables
    class zSBPlayer * sbPlayer; // r30
}
// signature: zSBPlayerSpinAttack::Update(float)
// Range: 0x80146D70 -> 0x80146FCC
void zSBPlayerSpinAttack::Update(class zSBPlayerSpinAttack * this /* r31 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r0

    {
        // Range: 0x80146E70 -> 0x80146ED0
        // Local variables
        unsigned int stability; // r1+0xC
        float SwingStabilityComplete; // f31
    }
    {
        // Range: 0x80146ED0 -> 0x80146F9C
        // Local variables
        class xVec2 swingVec; // r1+0x10
        unsigned int stability; // r1+0x8
        float SwingThreshold; // f29
        float SwingStabilityRange; // f30
        float SwingStabilityMin; // f31

        {
            // Range: 0x80146F60 -> 0x80146F9C
            // Local variables
            float swingAngle; // f0
        }
    }
}
// Range: 0x80146FD0 -> 0x801470E0
void zSBPlayerSpinAttack::Move(class zSBPlayerSpinAttack * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
}
// Range: 0x801470E0 -> 0x80147108
void zSBPlayerSpinAttack::End() {
    // Local variables
    class zSBPlayer * sbPlayer; // r4
}
// Range: 0x80147110 -> 0x801474C8
void zSBPlayerHammerAttack::AddStates(class zSBPlayerHammerAttack * this /* r23 */, class xAnimTable * table /* r24 */) {
}
// Range: 0x801474D0 -> 0x801477BC
void zSBPlayerHammerAttack::AddActionTransitions(class zSBPlayerHammerAttack * this /* r28 */, class xAnimTable * table /* r29 */) {
}
// Range: 0x801477C0 -> 0x80147BE0
void zSBPlayerHammerAttack::AddInternalTransitions(class xAnimTable * table /* r22 */) {
}
// signature: zSBPlayerHammerAttack::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80147C40 -> 0x80147E34
void zSBPlayerHammerAttack::AddTransitionsFrom(class xAnimTable * table /* r25 */, char * fromStates /* r26 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r28 */, unsigned short priority /* r29 */, float blend /* f31 */, unsigned int flags /* r30 */, unsigned int userFlags /* r31 */) {
}
// signature: zSBPlayerHammerAttack::StartHammerAttackCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80148060 -> 0x80148318
unsigned int zSBPlayerHammerAttack::StartHammerAttackCheck(class zSBPlayerHammerAttack * this /* r30 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r31
    bool shouldHammer; // r29

    {
        // Range: 0x80148250 -> 0x801482FC
        // Local variables
        class xVec2 swingVec; // r1+0x10
        unsigned int stability; // r1+0x8

        {
            // Range: 0x801482CC -> 0x801482FC
            // Local variables
            float swingAngle; // f0
        }
    }

    // References
    // -> class zGlobals globals;
}
// signature: zSBPlayerHammerAttack::AirHammerAttackCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80148320 -> 0x801483A4
unsigned int zSBPlayerHammerAttack::AirHammerAttackCheck(class zSBPlayerHammerAttack * this /* r31 */) {
}
// signature: zSBPlayerHammerAttack::StartHammerSpongebuffCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x801483B0 -> 0x801483FC
unsigned int zSBPlayerHammerAttack::StartHammerSpongebuffCheck() {
}
// signature: zSBPlayerHammerAttack::HammerInterruptMedCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80148400 -> 0x80148450
unsigned int zSBPlayerHammerAttack::HammerInterruptMedCheck() {
}
// Range: 0x80148450 -> 0x80148674
void zSBPlayerHammerAttack::Update(class zSBPlayerHammerAttack * this /* r30 */, float dt /* f31 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r31

    {
        // Range: 0x8014848C -> 0x801484F0
        // Local variables
        float timeInAnim; // f0
        float setAttackStateTime; // f1
    }
    {
        // Range: 0x8014851C -> 0x80148638
        // Local variables
        float swingAngle; // f3
        class xVec2 swingVec; // r1+0x8
    }
}
// signature: zSBPlayerHammerAttack::Move(xScene *, float, xEntFrame *)
// Range: 0x80148680 -> 0x801486EC
void zSBPlayerHammerAttack::Move() {
}
// Range: 0x801486F0 -> 0x80148738
void zSBPlayerHammerAttack::End() {
    // Local variables
    class zSBPlayer * sbPlayer; // r5
}
// signature: zSBPlayerHammerAttack::HammerSplashCB(xAnimTransition *, xAnimSingle *)
// Range: 0x80148740 -> 0x8014896C
unsigned int zSBPlayerHammerAttack::HammerSplashCB(class zSBPlayerHammerAttack * this /* r29 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r31
    float radius; // f31
    float knockbackAway; // f30
    float knockbackUp; // f29
    float damageAmount; // f28
    float offsetForward; // f27
    float offsetSide; // f26
    enum eHitSource hitSource; // r30
    class xVec3 splashPos; // r1+0x44
    class xVec3 sideOffset; // r1+0x38
    class xVec3 splashLeft; // r1+0x2C
    class xVec3 splashRight; // r1+0x20
}
// Range: 0x80148970 -> 0x80148C88
void zSBPlayerHammerAttack::AddAttacks(class zCombatAttack * attackStates /* r20 */, unsigned short bone /* r21 */) {
    // Local variables
    class zCombatAttack * baseAttack; // r0
    class zCombatAttack * baseRecoverAttack; // r0
    class zCombatAttack * airHammerCycle; // r0
    class zCombatAttack * airHammerLand; // r0
    class zCombatAttack * spongebuffAttack; // r0
    class zCombatAttack * spongebuffRecoverAttack; // r0
    class zCombatAttack * spongebuffAirHammerCycle; // r0
    class zCombatAttack * spongebuffAirHammerLand; // r0
}
// Range: 0x80148C90 -> 0x80148EA0
void zSBPlayerHammerAttack::hkpHammerRecoilCdBodyPairCollector::addCdBodyPair(class hkpHammerRecoilCdBodyPairCollector * this /* r27 */, class hkpCdBody & bodyA /* r28 */, class hkpCdBody & bodyB /* r29 */) {
    // Local variables
    class hkpCollidable * rootCollidable; // r31
    class hkpRigidBody * body; // r0
    bool addObject; // r30
    bool spongeBuff; // r4

    {
        // Range: 0x80148CCC -> 0x80148E04
        // Local variables
        class xBase * bodyOwner; // r3
    }
    {
        // Range: 0x80148E08 -> 0x80148E74
        // Local variables
        class xEnt * hitSpotOwner; // r3
    }
}
// Range: 0x80148EA0 -> 0x8014925C
void zSBPlayerHammerAttack::ReportHit(class zSBPlayerHammerAttack * this /* r28 */, class xBase * target /* r26 */, class xVec3 & hitLoc /* r29 */) {
    {
        // Range: 0x80148F08 -> 0x80149228
        // Local variables
        class xVec3 playerToHitLoc; // r1+0x70
        class hkpCollidable collidable; // r1+0xD0
        class hkMotionState motionState; // r1+0x120
        class xVec3 testLoc; // r1+0x7C
        class hkpBoxShape boxCheck; // r1+0xA0
        class hkVector4 halfExtent; // r1+0x90
        class hkpHammerRecoilCdBodyPairCollector collector; // r1+0x1D0
        class hkpWorld * havokWorld; // r30

        {
            // Range: 0x801491B4 -> 0x80149228
            // Local variables
            float recoilYMedHighThreshUsed; // f2
        }
    }

    // References
    // -> float hkConvexShapeDefaultRadius;
    // -> struct {} __vt__Q221zSBPlayerHammerAttack34hkpHammerRecoilCdBodyPairCollector;
}
// Range: 0x80149260 -> 0x80149280
bool zSBPlayerHammerAttack::HasAlreadyRecoiled() {
}
// Range: 0x80149280 -> 0x801493F0
void zSBPlayerPuckAttack::AddStates(class zSBPlayerPuckAttack * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x801493F0 -> 0x80149680
void zSBPlayerPuckAttack::AddActionTransitions(class zSBPlayerPuckAttack * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x80149680 -> 0x801497C4
void zSBPlayerPuckAttack::AddInternalTransitions(class xAnimTable * table /* r25 */) {
}
// signature: zSBPlayerPuckAttack::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80149830 -> 0x801498AC
void zSBPlayerPuckAttack::AddTransitionsFrom() {
}
// signature: zSBPlayerPuckAttack::StartPuckAttackCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80149930 -> 0x80149B80
unsigned int zSBPlayerPuckAttack::StartPuckAttackCheck() {
    // Local variables
    class zSBPlayer * sbPlayer; // r31
    bool shouldStartPuck; // r30

    // References
    // -> class zGlobals globals;
}
// signature: zSBPlayerPuckAttack::AimPuckCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80149B80 -> 0x80149B9C
unsigned int zSBPlayerPuckAttack::AimPuckCheck() {
}
// signature: zSBPlayerPuckAttack::ShootPuckCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80149BA0 -> 0x80149BB0
unsigned int zSBPlayerPuckAttack::ShootPuckCheck() {
}
// signature: zSBPlayerPuckAttack::FirePuckCB(xAnimTransition *, xAnimSingle *)
// Range: 0x80149BB0 -> 0x80149C48
unsigned int zSBPlayerPuckAttack::FirePuckCB(class zSBPlayerPuckAttack * this /* r30 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r31
}
// Range: 0x80149C50 -> 0x80149C98
void zSBPlayerPuckAttack::Begin() {
}
// Range: 0x80149CA0 -> 0x80149CB0
void zSBPlayerPuckAttack::End() {
}
// Range: 0x80149CB0 -> 0x80149D00
bool zSBPlayerPuckAttack::IsAiming(class zSBPlayerPuckAttack * this /* r31 */) {
}
// Range: 0x80149D00 -> 0x80149F90
void zSBPlayerPuckAttack::Move(class zSBPlayerPuckAttack * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
    // Local variables
    unsigned int animFlags; // r0

    {
        // Range: 0x80149D34 -> 0x80149DC0
        // Local variables
        bool cameraTurnDone; // r0
    }
    {
        // Range: 0x80149DC4 -> 0x80149F50
        // Local variables
        float curTurnSpeed; // f1
        float stickInput; // f4

        {
            // Range: 0x80149E20 -> 0x80149E9C
            // Local variables
            float currentMaxSpeed; // f1
        }
    }
}
// Range: 0x80149F90 -> 0x8014A238
void zSBPlayerPuckAttack::Update(class zSBPlayerPuckAttack * this /* r27 */, float dt /* f31 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r31

    {
        // Range: 0x8014A0E0 -> 0x8014A160
        // Local variables
        float angleAway; // f0
        class xMat4x3 camMat; // r1+0x50
    }
    {
        // Range: 0x8014A160 -> 0x8014A214
        // Local variables
        class hkpCharacterProxy * proxy; // r28
        bool resetTrampoline; // r29

        {
            // Range: 0x8014A198 -> 0x8014A204
            // Local variables
            int i; // r27

            {
                // Range: 0x8014A198 -> 0x8014A204
                // Local variables
                class hkpRigidBody * testB; // r0
                class hkpRootCdPoint testPoint; // r1+0x20
            }
        }
    }
}
// signature: zPlayerLedgeSB::AddStates(xAnimTable *)
// Range: 0x8014A240 -> 0x8014A2C0
void zPlayerLedgeSB::AddStates() {
}
// Range: 0x8014A2C0 -> 0x8014A440
void zPlayerLedgeSB::AddActionTransitions(class zPlayerLedgeSB * this /* r30 */, class xAnimTable * table /* r31 */) {
}
// signature: zPlayerLedgeSB::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8014A440 -> 0x8014A4BC
void zPlayerLedgeSB::AddTransitionsFrom() {
}
// Range: 0x8014A540 -> 0x8014A588
void zPlayerLedgeSB::Begin(class zPlayerLedgeSB * this /* r31 */) {
}
// Range: 0x8014A590 -> 0x8014A5CC
void zPlayerLedgeSB::End(class zPlayerLedgeSB * this /* r31 */) {
}
// signature: zPlayerLedgeSB::UpdateFall(float)
// Range: 0x8014A5D0 -> 0x8014A5E4
void zPlayerLedgeSB::UpdateFall() {
}
// signature: zPlayerLedgeSB::StartLedgeCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8014A5F0 -> 0x8014A68C
unsigned int zPlayerLedgeSB::StartLedgeCheck(class zPlayerLedgeSB * this /* r30 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r4
}
// signature: zHitByHammerBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x8014A690 -> 0x8014A6CC
void zHitByHammerBE(void * object /* r31 */) {
    // Local variables
    class zSBPlayer * player; // r0
}
// signature: zRestoreFromHitByHammerBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x8014A6D0 -> 0x8014A70C
void zRestoreFromHitByHammerBE(void * object /* r31 */) {
    // Local variables
    class zSBPlayer * player; // r0
}
// Range: 0x8014A710 -> 0x8014AD28
void zPlayerHitSB::AddStates(class zPlayerHitSB * this /* r23 */, class xAnimTable * table /* r24 */) {
}
// Range: 0x8014AD30 -> 0x8014AEAC
void zPlayerHitSB::AddInternalTransitions(class xAnimTable * table /* r25 */) {
}
// Range: 0x8014AF00 -> 0x8014B1AC
void zPlayerHitSB::AddActionTransitions(class zPlayerHitSB * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zPlayerHitSB::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8014B230 -> 0x8014B854
void zPlayerHitSB::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// Range: 0x8014C020 -> 0x8014C070
void zPlayerHitSB::Begin(class zPlayerHitSB * this /* r31 */) {
}
// Range: 0x8014C070 -> 0x8014C12C
void zPlayerHitSB::Move(class zPlayerHitSB * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
}
// Range: 0x8014C130 -> 0x8014C1BC
void zPlayerHitSB::Update(class zPlayerHitSB * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x8014C1C0 -> 0x8014C2B0
void zPlayerHitSB::Reset(class zPlayerHitSB * this /* r31 */) {
    // Local variables
    unsigned int choice; // r5

    {
        // Range: 0x8014C1CC -> 0x8014C234
        // Local variables
        int i; // r6

        {
            // Range: 0x8014C1CC -> 0x8014C234
            // Local variables
            unsigned int flag; // r0
            unsigned int data; // r7
        }
    }
    {
        // Range: 0x8014C240 -> 0x8014C29C
        // Local variables
        int j; // r6

        {
            // Range: 0x8014C240 -> 0x8014C29C
            // Local variables
            unsigned int data; // r7
        }
    }
}
// signature: zPlayerHitSB::HammerHitCB(xAnimTransition *, xAnimSingle *)
// Range: 0x8014C2B0 -> 0x8014C3DC
unsigned int zPlayerHitSB::HammerHitCB(class zPlayerHitSB * this /* r31 */) {
    {
        // Range: 0x8014C2C4 -> 0x8014C358
        // Local variables
        unsigned int choice; // r5

        {
            // Range: 0x8014C2EC -> 0x8014C358
            // Local variables
            int i; // r6

            {
                // Range: 0x8014C2EC -> 0x8014C358
                // Local variables
                unsigned int data; // r7
            }
        }
    }
    {
        // Range: 0x8014C358 -> 0x8014C3C4
        // Local variables
        unsigned int choice; // r6

        {
            // Range: 0x8014C368 -> 0x8014C3C4
            // Local variables
            int i; // r7
        }
    }
}
// signature: zPlayerHitSB::AnyHitCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8014C3E0 -> 0x8014C440
unsigned int zPlayerHitSB::AnyHitCheck(class zPlayerHitSB * this /* r31 */) {
}
// signature: zPlayerHitSB::HitFrontCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8014C440 -> 0x8014C4A8
unsigned int zPlayerHitSB::HitFrontCheck(class zPlayerHitSB * this /* r31 */) {
}
// signature: zPlayerHitSB::HitBackCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8014C4B0 -> 0x8014C514
unsigned int zPlayerHitSB::HitBackCheck(class zPlayerHitSB * this /* r31 */) {
}
// signature: zPlayerHitSB::AnyHitFrontCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8014C520 -> 0x8014C590
unsigned int zPlayerHitSB::AnyHitFrontCheck(class zPlayerHitSB * this /* r30 */) {
}
// signature: zPlayerHitSB::AnyHitBackCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8014C590 -> 0x8014C5FC
unsigned int zPlayerHitSB::AnyHitBackCheck(class zPlayerHitSB * this /* r30 */) {
}
// Range: 0x8014C600 -> 0x8014C6A4
unsigned int zPlayerHitSB::HitHammerCheck(class zPlayerHitSB * this /* r28 */, class xAnimTransition * tran /* r29 */, class xAnimSingle * anim /* r30 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r31
}
// signature: zPlayerHitSB::HitBuffFrontCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8014C6B0 -> 0x8014C71C
unsigned int zPlayerHitSB::HitBuffFrontCheck() {
    // References
    // -> class zGameCheats gGameCheats;
}
// signature: zPlayerHitSB::HitBuffBackCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8014C720 -> 0x8014C78C
unsigned int zPlayerHitSB::HitBuffBackCheck() {
    // References
    // -> class zGameCheats gGameCheats;
}
// Range: 0x8014C790 -> 0x8014C884
unsigned int zPlayerHitSB::HitElectricArcCheck(class zPlayerHitSB * this /* r28 */, class xAnimTransition * tran /* r29 */, class xAnimSingle * anim /* r30 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r31
}
// Range: 0x8014C890 -> 0x8014C934
unsigned int zPlayerHitSB::HitByDOTCheck(class zPlayerHitSB * this /* r28 */, class xAnimTransition * tran /* r29 */, class xAnimSingle * anim /* r30 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r31
}
// signature: zPlayerHitSB::HitPowerupCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8014C940 -> 0x8014C9B0
unsigned int zPlayerHitSB::HitPowerupCheck() {
    // Local variables
    class zSBPlayer * sbPlayer; // r30
}
// signature: zPlayerHitSB::CanExitCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8014C9B0 -> 0x8014CA20
unsigned int zPlayerHitSB::CanExitCheck(class zPlayerHitSB * this /* r31 */) {
}
// Range: 0x8014CA20 -> 0x8014CEF0
void zPlayerHitLaunchSB::AddStates(class zPlayerHitLaunchSB * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x8014CEF0 -> 0x8014D11C
void zPlayerHitLaunchSB::AddInternalTransitions(class xAnimTable * table /* r25 */) {
}
// Range: 0x8014D120 -> 0x8014D298
void zPlayerHitLaunchSB::AddActionTransitions(class zPlayerHitLaunchSB * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zPlayerHitLaunchSB::AddStandardTransitionsFrom(xAnimTable *, const char *)
// Range: 0x8014D2A0 -> 0x8014D2F0
void zPlayerHitLaunchSB::AddStandardTransitionsFrom() {
}
// signature: zPlayerHitLaunchSB::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8014D2F0 -> 0x8014D674
void zPlayerHitLaunchSB::AddTransitionsFrom(class xAnimTable * table /* r25 */, char * fromStates /* r26 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r28 */, unsigned short priority /* r29 */, float blend /* f31 */, unsigned int flags /* r30 */, unsigned int userFlags /* r31 */) {
}
// signature: zPlayerHitLaunchSB::LaunchFrontCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8014DB40 -> 0x8014DBF0
unsigned int zPlayerHitLaunchSB::LaunchFrontCheck(class zPlayerHitLaunchSB * this /* r31 */) {
}
// signature: zPlayerHitLaunchSB::LaunchBackCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8014DBF0 -> 0x8014DCA0
unsigned int zPlayerHitLaunchSB::LaunchBackCheck(class zPlayerHitLaunchSB * this /* r31 */) {
}
// Range: 0x8014DCA0 -> 0x8014DD80
void zSBPlayerFillWithGoo::AddStates(class zSBPlayerFillWithGoo * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// signature: zSBPlayerFillWithGoo::AddInternalTransitions(xAnimTable *)
// Range: 0x8014DD80 -> 0x8014DDF4
void zSBPlayerFillWithGoo::AddInternalTransitions() {
}
// Range: 0x8014DE00 -> 0x8014DF8C
void zSBPlayerFillWithGoo::AddActionTransitions(class zSBPlayerFillWithGoo * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zSBPlayerFillWithGoo::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8014DF90 -> 0x8014E100
void zSBPlayerFillWithGoo::AddTransitionsFrom(class xAnimTable * table /* r24 */, char * fromStates /* r25 */) {
}
// signature: zSBPlayerFillWithGoo::StartFillWithGooCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8014E300 -> 0x8014E348
unsigned int zSBPlayerFillWithGoo::StartFillWithGooCheck() {
    // Local variables
    class zSBPlayer * sbPlayer; // r4
}
// signature: zSBPlayerFillWithGoo::FillWithGooFrom100Check(xAnimTransition *, xAnimSingle *)
// Range: 0x8014E350 -> 0x8014E3B0
unsigned int zSBPlayerFillWithGoo::FillWithGooFrom100Check() {
    // Local variables
    class zSBPlayer * sbPlayer; // r31
}
// signature: zSBPlayerFillWithGoo::FillWithGooFrom25Check(xAnimTransition *, xAnimSingle *)
// Range: 0x8014E3B0 -> 0x8014E408
unsigned int zSBPlayerFillWithGoo::FillWithGooFrom25Check() {
    // Local variables
    class zSBPlayer * sbPlayer; // r31
}
// signature: zSBPlayerFillWithGoo::FillWithGooFrom50Check(xAnimTransition *, xAnimSingle *)
// Range: 0x8014E410 -> 0x8014E468
unsigned int zSBPlayerFillWithGoo::FillWithGooFrom50Check() {
    // Local variables
    class zSBPlayer * sbPlayer; // r31
}
// signature: zSBPlayerFillWithGoo::FillWithGooFrom75Check(xAnimTransition *, xAnimSingle *)
// Range: 0x8014E470 -> 0x8014E4C8
unsigned int zSBPlayerFillWithGoo::FillWithGooFrom75Check() {
    // Local variables
    class zSBPlayer * sbPlayer; // r31
}
// Range: 0x8014E4D0 -> 0x8014E584
void zSBPlayerFillWithGoo::Begin(class zSBPlayerFillWithGoo * this /* r29 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r30
}
// Range: 0x8014E590 -> 0x8014E700
void zSBPlayerFillWithGoo::Move(class zSBPlayerFillWithGoo * this /* r29 */, class xScene * s /* r30 */, float dt /* f30 */, class xEntFrame * frame /* r31 */) {
    {
        // Range: 0x8014E5F4 -> 0x8014E6B8
        // Local variables
        float turnSpeedUsed; // f31
        float angleAway; // f1
    }
}
// signature: zSBPlayerDrainGoo::AddStates(xAnimTable *)
// Range: 0x8014E700 -> 0x8014E780
void zSBPlayerDrainGoo::AddStates() {
}
// Range: 0x8014E780 -> 0x8014E94C
void zSBPlayerDrainGoo::AddActionTransitions(class zSBPlayerDrainGoo * this /* r30 */, class xAnimTable * table /* r31 */) {
}
// signature: zSBPlayerDrainGoo::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8014E950 -> 0x8014E9CC
void zSBPlayerDrainGoo::AddTransitionsFrom() {
}
// signature: zSBPlayerDrainGoo::StartDrainGooCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8014EA50 -> 0x8014EC44
unsigned int zSBPlayerDrainGoo::StartDrainGooCheck(class zSBPlayerDrainGoo * this /* r30 */) {
    // Local variables
    bool shouldDrain; // r31

    {
        // Range: 0x8014EB4C -> 0x8014EBF4
        // Local variables
        class xVec2 swingVec; // r1+0x10
        unsigned int stability; // r1+0x8
        float SwingThreshold; // f29
        float SwingStabilityRange; // f30
        float SwingStabilityMin; // f31
    }
}
// signature: zGainPowerupPropBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x8014EC50 -> 0x8014EC8C
void zGainPowerupPropBE(void * object /* r31 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r0
}
// Range: 0x8014EC90 -> 0x8014ED2C
void zGainPowerupSidekickBE(class xAnimPlay * play /* r29 */, class xAnimState * state /* r30 */, void * object /* r31 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // reg65535
}
// Range: 0x8014ED30 -> 0x8014F010
void zSBPlayerGainPowerup::AddStates(class zSBPlayerGainPowerup * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x8014F010 -> 0x8014F1C8
void zSBPlayerGainPowerup::AddInternalTransitions(class xAnimTable * table /* r27 */) {
}
// Range: 0x8014F350 -> 0x8014F514
void zSBPlayerGainPowerup::AddActionTransitions(class zSBPlayerGainPowerup * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zSBPlayerGainPowerup::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8014F520 -> 0x8014F6A0
void zSBPlayerGainPowerup::AddTransitionsFrom(class xAnimTable * table /* r25 */, char * fromStates /* r26 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r28 */, unsigned short priority /* r29 */, float blend /* f31 */, unsigned int flags /* r30 */, unsigned int userFlags /* r31 */) {
}
// signature: zSBPlayerGainPowerup::GainSidekickPowerupCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8014F820 -> 0x8014F854
unsigned int zSBPlayerGainPowerup::GainSidekickPowerupCheck() {
    // Local variables
    class zSBPlayer * sbPlayer; // r3
}
// signature: zSBPlayerGainPowerup::GainSpongebuffPowerupCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8014F860 -> 0x8014F890
unsigned int zSBPlayerGainPowerup::GainSpongebuffPowerupCheck() {
    // Local variables
    class zSBPlayer * sbPlayer; // r4
}
// signature: zSBPlayerGainPowerup::GainInvincibilityPowerupCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8014F890 -> 0x8014F8C0
unsigned int zSBPlayerGainPowerup::GainInvincibilityPowerupCheck() {
    // Local variables
    class zSBPlayer * sbPlayer; // r4
}
// signature: zSBPlayerGainPowerup::GainSpinPowerupCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8014F8C0 -> 0x8014F8E8
unsigned int zSBPlayerGainPowerup::GainSpinPowerupCheck() {
    // Local variables
    class zSBPlayer * sbPlayer; // r3
}
// signature: zSBPlayerGainPowerup::GainHammerPowerupCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8014F8F0 -> 0x8014F918
unsigned int zSBPlayerGainPowerup::GainHammerPowerupCheck() {
    // Local variables
    class zSBPlayer * sbPlayer; // r3
}
// signature: zSBPlayerGainPowerup::GainPuckPowerupCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8014F920 -> 0x8014F948
unsigned int zSBPlayerGainPowerup::GainPuckPowerupCheck() {
    // Local variables
    class zSBPlayer * sbPlayer; // r3
}
// Range: 0x8014F950 -> 0x8014F998
void zSBPlayerGainPowerup::Begin() {
    // Local variables
    class zSBPlayer * sbPlayer; // r31
}
// Range: 0x8014F9A0 -> 0x8014FA9C
void zSBPlayerGainPowerup::Update(class zSBPlayerGainPowerup * this /* r30 */, float dt /* f31 */) {
    // Local variables
    unsigned int animFlags; // r0

    {
        // Range: 0x8014F9E0 -> 0x8014FA7C
        // Local variables
        float time; // f0
    }
}
// Range: 0x8014FAA0 -> 0x8014FB60
void zSBPlayerGainPowerup::End() {
    // Local variables
    class zSBPlayer * sbPlayer; // r31
    class EventActionSBPowerup params; // r1+0x8
}
// Range: 0x8014FB60 -> 0x8014FC44
void zSBPlayerSpinPowerupAttack::AddStates(class zSBPlayerSpinPowerupAttack * this /* r24 */, class xAnimTable * table /* r25 */) {
}
// Range: 0x8014FC50 -> 0x8014FD18
void zSBPlayerSpinPowerupAttack::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x8014FD20 -> 0x8014FE1C
void zSBPlayerSpinPowerupAttack::AddActionTransitions(class zSBPlayerSpinPowerupAttack * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zSBPlayerSpinPowerupAttack::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8014FE20 -> 0x8014FE9C
void zSBPlayerSpinPowerupAttack::AddTransitionsFrom() {
}
// signature: zSBPlayerSpinPowerupAttack::SpinPowerupCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x8014FF20 -> 0x8014FF48
unsigned int zSBPlayerSpinPowerupAttack::SpinPowerupCheck() {
    // Local variables
    class zSBPlayer * sbPlayer; // r5
}
// Range: 0x8014FF50 -> 0x80150028
void zSBPlayerSpinPowerupAttack::AddAttacks(class zCombatAttack * attackStates /* r22 */, unsigned short bone1 /* r23 */, unsigned short bone2 /* r24 */) {
    // Local variables
    class zCombatAttack * spinAttack; // r0
    class zCombatAttack * spinMovingAttack; // r0
}
// Range: 0x80150030 -> 0x80150040
void zSBPlayerSpinPowerupAttack::Begin() {
}
// Range: 0x80150040 -> 0x801502D4
void zSBPlayerHammerPowerupAttack::AddStates(class zSBPlayerHammerPowerupAttack * this /* r24 */, class xAnimTable * table /* r25 */) {
}
// Range: 0x801502E0 -> 0x801508DC
void zSBPlayerHammerPowerupAttack::AddInternalTransitions(class xAnimTable * table /* r23 */) {
}
// Range: 0x80150A20 -> 0x80150B24
void zSBPlayerHammerPowerupAttack::AddActionTransitions(class zSBPlayerHammerPowerupAttack * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zSBPlayerHammerPowerupAttack::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80150B30 -> 0x80150C50
void zSBPlayerHammerPowerupAttack::AddTransitionsFrom(class xAnimTable * table /* r25 */, char * fromStates /* r26 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r28 */, unsigned short priority /* r29 */, float blend /* f31 */, unsigned int flags /* r30 */, unsigned int userFlags /* r31 */) {
}
// signature: zSBPlayerHammerPowerupAttack::HammerPowerupCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80150D70 -> 0x80150D98
unsigned int zSBPlayerHammerPowerupAttack::HammerPowerupCheck() {
    // Local variables
    class zSBPlayer * sbPlayer; // r5
}
// Range: 0x80150DA0 -> 0x80150E1C
unsigned int zSBPlayerHammerPowerupAttack::HammerPowerupMovingCheck(class zSBPlayerHammerPowerupAttack * this /* r29 */, class xAnimTransition * tran /* r30 */, class xAnimSingle * anim /* r31 */) {
}
// Range: 0x80150E20 -> 0x80150F8C
void zSBPlayerHammerPowerupAttack::AddAttacks(class zCombatAttack * attackStates /* r21 */, unsigned short bone1 /* r22 */, unsigned short bone2 /* r23 */, unsigned short bone3 /* r24 */) {
    // Local variables
    class zCombatAttack * idleAttack; // r0
    class zCombatAttack * walkLeftAttack; // r0
    class zCombatAttack * walkRightAttack; // r0
    class zCombatAttack * runAttack; // r0
}
// signature: zSBPlayerHammerPowerupAttack::AttackPushCB(xAnimTransition *, xAnimSingle *)
// Range: 0x80150F90 -> 0x80151000
unsigned int zSBPlayerHammerPowerupAttack::AttackPushCB(class zSBPlayerHammerPowerupAttack * this /* r31 */) {
    // Local variables
    class xVec3 forwardVelocity; // r1+0x8
}
// signature: zSBPlayerHammerPowerupAttack::SplashCB(xAnimTransition *, xAnimSingle *)
// Range: 0x80151000 -> 0x801510B8
unsigned int zSBPlayerHammerPowerupAttack::SplashCB(class zSBPlayerHammerPowerupAttack * this /* r30 */) {
    // Local variables
    class xVec3 splashPos; // r1+0x8
}
// Range: 0x801510C0 -> 0x801510D0
void zSBPlayerHammerPowerupAttack::Begin() {
}
// Range: 0x801510D0 -> 0x80151360
void zSBPlayerPuckPowerupAttack::AddStates(class zSBPlayerPuckPowerupAttack * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80151360 -> 0x80151958
void zSBPlayerPuckPowerupAttack::AddInternalTransitions(class xAnimTable * table /* r23 */) {
}
// Range: 0x80151980 -> 0x80151A84
void zSBPlayerPuckPowerupAttack::AddActionTransitions(class zSBPlayerPuckPowerupAttack * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zSBPlayerPuckPowerupAttack::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80151A90 -> 0x80151BB0
void zSBPlayerPuckPowerupAttack::AddTransitionsFrom(class xAnimTable * table /* r25 */, char * fromStates /* r26 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r28 */, unsigned short priority /* r29 */, float blend /* f31 */, unsigned int flags /* r30 */, unsigned int userFlags /* r31 */) {
}
// signature: zSBPlayerPuckPowerupAttack::PuckPowerupCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80151CD0 -> 0x80151CF8
unsigned int zSBPlayerPuckPowerupAttack::PuckPowerupCheck() {
    // Local variables
    class zSBPlayer * sbPlayer; // r5
}
// Range: 0x80151D00 -> 0x80151D7C
unsigned int zSBPlayerPuckPowerupAttack::PuckPowerupMovingCheck(class zSBPlayerPuckPowerupAttack * this /* r29 */, class xAnimTransition * tran /* r30 */, class xAnimSingle * anim /* r31 */) {
}
// signature: zSBPlayerPuckPowerupAttack::FirePuckCB(xAnimTransition *, xAnimSingle *)
// Range: 0x80151D80 -> 0x80151E08
unsigned int zSBPlayerPuckPowerupAttack::FirePuckCB() {
    // Local variables
    class zSBPlayer * sbPlayer; // r31
    class xVec3 backwardVelocity; // r1+0x8
}
// Range: 0x80151E10 -> 0x80151E20
void zSBPlayerPuckPowerupAttack::Begin() {
}
// signature: zSBPlayerLosePowerup::AddStates(xAnimTable *)
// Range: 0x80151E20 -> 0x80151EA0
void zSBPlayerLosePowerup::AddStates() {
}
// Range: 0x80151EA0 -> 0x801520DC
void zSBPlayerLosePowerup::AddActionTransitions(class zSBPlayerLosePowerup * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zSBPlayerLosePowerup::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x801520E0 -> 0x8015215C
void zSBPlayerLosePowerup::AddTransitionsFrom() {
}
// signature: zSBPlayerLosePowerup::LosePowerupCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x801521E0 -> 0x80152270
unsigned int zSBPlayerLosePowerup::LosePowerupCheck() {
    // Local variables
    class zSBPlayer * sbPlayer; // r31
}
// Range: 0x80152270 -> 0x801522E8
void zSBPlayerLosePowerup::Begin() {
    // Local variables
    class zSBPlayer * sbPlayer; // r31
}
// Range: 0x801522F0 -> 0x80152308
void zSBPlayerLosePowerup::End() {
    // Local variables
    class zSBPlayer * sbPlayer; // r4
}
// Range: 0x80152310 -> 0x8015259C
void zSBPlayerCandy::AddStates(class zSBPlayerCandy * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x801525A0 -> 0x801529BC
void zSBPlayerCandy::AddInternalTransitions(class xAnimTable * table /* r23 */) {
}
// Range: 0x80152B30 -> 0x80152CE8
void zSBPlayerCandy::AddActionTransitions(class zSBPlayerCandy * this /* r30 */, class xAnimTable * table /* r31 */) {
}
// signature: zSBPlayerCandy::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80152CF0 -> 0x80152E10
void zSBPlayerCandy::AddTransitionsFrom(class xAnimTable * table /* r25 */, char * fromStates /* r26 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r28 */, unsigned short priority /* r29 */, float blend /* f31 */, unsigned int flags /* r30 */, unsigned int userFlags /* r31 */) {
}
// Range: 0x80152E10 -> 0x80152EF4
void zSBPlayerCandy::AddAttacks(class zCombatAttack * attackStates /* r21 */, unsigned short bone1 /* r22 */, unsigned short bone2 /* r23 */) {
    // Local variables
    class zCombatAttack * idleAttack; // r0
    class zCombatAttack * movingAttack; // r0
}
// signature: zSBPlayerQuicksandJump::SBQuicksandJumpCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80152F00 -> 0x801530C4
unsigned int zSBPlayerQuicksandJump::SBQuicksandJumpCheck(class zSBPlayerQuicksandJump * this /* r30 */) {
    // Local variables
    bool shouldJump; // r31
}
// signature: zSBPlayerQuicksandJump::AddStates(xAnimTable *)
// Range: 0x801530D0 -> 0x80153148
void zSBPlayerQuicksandJump::AddStates() {
}
// signature: zSBPlayerQuicksandJump::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80153150 -> 0x801531D4
void zSBPlayerQuicksandJump::AddTransitionsFrom(enum SpecialActions specialAction /* r1+0x28 */) {
}
// Range: 0x80153260 -> 0x80153434
void zSBPlayerQuicksandJump::AddActionTransitions(class zSBPlayerQuicksandJump * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x80153540 -> 0x8015355C
void zSBPlayerQuicksandJump::Begin() {
}
// Range: 0x80153560 -> 0x80153630
void zSBPlayerQuicksandJump::Move(class zSBPlayerQuicksandJump * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
    // Local variables
    float t0; // f2
}
// Range: 0x80153630 -> 0x80153708
void zSBPlayerQuicksandStuck::AddStates(class zSBPlayerQuicksandStuck * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x80153710 -> 0x801537D8
void zSBPlayerQuicksandStuck::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x801537E0 -> 0x801539B8
void zSBPlayerQuicksandStuck::AddActionTransitions(class zSBPlayerQuicksandStuck * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zSBPlayerQuicksandStuck::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x801539C0 -> 0x80153AE0
void zSBPlayerQuicksandStuck::AddTransitionsFrom(class xAnimTable * table /* r25 */, char * fromStates /* r26 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r28 */, unsigned short priority /* r29 */, float blend /* f31 */, unsigned int flags /* r30 */, unsigned int userFlags /* r31 */) {
}
// signature: zSBPlayerBungeeBall::SBBungeeBallCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80153BE0 -> 0x80153C50
unsigned int zSBPlayerBungeeBall::SBBungeeBallCheck(class zSBPlayerBungeeBall * this /* r29 */) {
}
// signature: zSBPlayerBungeeBall::SBBungeeBallHitExitCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80153C50 -> 0x80153CC4
unsigned int zSBPlayerBungeeBall::SBBungeeBallHitExitCheck() {
    // Local variables
    enum eHitSource hitSource; // r31
}
// signature: zSBPlayerBungeeBall::SBBungeeBallFlattenedCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80153CD0 -> 0x80153D2C
unsigned int zSBPlayerBungeeBall::SBBungeeBallFlattenedCheck() {
    // Local variables
    class zSBPlayer * sbPlayer; // r31
}
// signature: zSBPlayerBungeeBall::SBBungeeBallHitCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80153D30 -> 0x80153DEC
unsigned int zSBPlayerBungeeBall::SBBungeeBallHitCheck() {
    // Local variables
    class zSBPlayer * sbPlayer; // r31

    // References
    // -> class zGameCheats gGameCheats;
}
// signature: zSBPlayerBungeeBall::SBBungeeBallFlingCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80153DF0 -> 0x80153E50
unsigned int zSBPlayerBungeeBall::SBBungeeBallFlingCheck() {
    // Local variables
    class zSBPlayer * sbPlayer; // r30
}
// signature: zSBPlayerBungeeBall::SBBungeeBallBuffFlingCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80153E50 -> 0x80153EB0
unsigned int zSBPlayerBungeeBall::SBBungeeBallBuffFlingCheck() {
    // Local variables
    class zSBPlayer * sbPlayer; // r30
}
// Range: 0x80153EB0 -> 0x8015418C
void zSBPlayerBungeeBall::AddStates(class zSBPlayerBungeeBall * this /* r24 */, class xAnimTable * table /* r25 */) {
}
// Range: 0x80154190 -> 0x80154864
void zSBPlayerBungeeBall::AddInternalTransitions(class xAnimTable * table /* r21 */) {
}
// Range: 0x80154D10 -> 0x80154F28
void zSBPlayerBungeeBall::AddActionTransitions(class zSBPlayerBungeeBall * this /* r28 */, class xAnimTable * table /* r29 */) {
}
// signature: zSBPlayerBungeeBall::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80155030 -> 0x801550AC
void zSBPlayerBungeeBall::AddTransitionsFrom() {
}
// Range: 0x80155130 -> 0x801551D8
void zSBPlayerBungeeBall::Begin(class zSBPlayerBungeeBall * this /* r29 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r30
}
// signature: zSBPlayerBungeeBall::Move(xScene *, float, xEntFrame *)
// Range: 0x801551E0 -> 0x80155704
void zSBPlayerBungeeBall::Move(class zSBPlayerBungeeBall * this /* r25 */, float dt /* f31 */, class xEntFrame * frame /* r26 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r30
    class zBungeeBall * bungeeBall; // r29
    unsigned int animFlags; // r0
    unsigned int unresponsive; // r28
    bool shouldFling; // r27
    float newYaw; // f0
    float forcedRotateAngle; // r1+0x8
    bool needsForcedRotate; // r0
    class xVec3 & offset; // r24
    float len; // f0

    {
        // Range: 0x80155308 -> 0x801553A4
        // Local variables
        class xVec2 swingDir; // r1+0x18
        unsigned int stability; // r1+0xC
    }
    {
        // Range: 0x801553A4 -> 0x80155560
        // Local variables
        float lean; // f0
        float curTurnSpeed; // f2
        float stickInput; // f0

        {
            // Range: 0x80155410 -> 0x8015548C
            // Local variables
            float currentMaxSpeed; // f2
        }
    }
    {
        // Range: 0x80155670 -> 0x801556B0
        // Local variables
        float newLen; // f0
    }
}
// signature: zSBPlayerBungeeBall::Update(float)
// Range: 0x80155710 -> 0x80155800
void zSBPlayerBungeeBall::Update(class zSBPlayerBungeeBall * this /* r29 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r30
}
// Range: 0x80155800 -> 0x801558A8
void zSBPlayerBungeeBall::End(class zSBPlayerBungeeBall * this /* r30 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r31
}
// Range: 0x801558B0 -> 0x80155984
void zSBPlayerBungeeBall::AddAttacks(class zCombatAttack * attackStates /* r23 */, unsigned short bone1 /* r24 */, unsigned short bone2 /* r25 */) {
    // Local variables
    class zCombatAttack * flingAttack; // r0
    class zCombatAttack * buffFlingAttack; // r0
}
// signature: zSBPlayerBombRoll::SBNoBombCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80155990 -> 0x801559A4
unsigned int zSBPlayerBombRoll::SBNoBombCheck() {
}
// signature: zSBPlayerBombRoll::SBBombStopCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x801559B0 -> 0x801559DC
unsigned int zSBPlayerBombRoll::SBBombStopCheck() {
}
// Range: 0x801559E0 -> 0x80155A68
unsigned int zSBPlayerBombRoll::SBBombMoveCheck(class zSBPlayerBombRoll * this /* r29 */, class xAnimTransition * tran /* r30 */, class xAnimSingle * anim /* r31 */) {
}
// Range: 0x80155A70 -> 0x80155B98
void zSBPlayerBombRoll::AddStates(class zSBPlayerBombRoll * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80155BA0 -> 0x80155CE0
void zSBPlayerBombRoll::AddInternalTransitions(class xAnimTable * table /* r24 */) {
}
// Range: 0x80155DE0 -> 0x8015605C
void zSBPlayerBombRoll::AddActionTransitions(class zSBPlayerBombRoll * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zSBPlayerBombRoll::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x801560E0 -> 0x8015615C
void zSBPlayerBombRoll::AddTransitionsFrom() {
}
// Range: 0x801561D0 -> 0x8015622C
void zSBPlayerBombRoll::Begin() {
    // Local variables
    class zSBPlayer * sbPlayer; // r30
}
// signature: zSBPlayerBombRoll::Move(xScene *, float, xEntFrame *)
// Range: 0x80156230 -> 0x80156350
void zSBPlayerBombRoll::Move(float dt /* f31 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r30
    class zProjectileSBBombNPC * bombRoll; // r31
    class xVec3 & offset; // r29
    float len; // f0

    {
        // Range: 0x80156258 -> 0x8015629C
        // Local variables
        class xVec3 facingDirection; // r1+0x20
    }
    {
        // Range: 0x801562AC -> 0x801562EC
        // Local variables
        float newLen; // f0
    }
}
// Range: 0x80156350 -> 0x801563A0
void zSBPlayerBombRoll::End() {
    // Local variables
    class zSBPlayer * sbPlayer; // r31
}
// signature: zPlayerCheatSB::AddStates(xAnimTable *)
// Range: 0x801563A0 -> 0x80156420
void zPlayerCheatSB::AddStates() {
}
// Range: 0x80156420 -> 0x80156678
void zPlayerCheatSB::AddActionTransitions(class zPlayerCheatSB * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// Range: 0x80156680 -> 0x801567A8
void zSBPlayerKelpTrap::AddStates(class zSBPlayerKelpTrap * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x801567B0 -> 0x801568A0
void zSBPlayerKelpTrap::AddActionTransitions(class zSBPlayerKelpTrap * this /* r28 */, class xAnimTable * table /* r29 */) {
}
// Range: 0x801568A0 -> 0x801569A0
void zSBPlayerKelpTrap::AddInternalTransitions(class xAnimTable * table /* r25 */) {
}
// Range: 0x801569C0 -> 0x80156A48
void zSBPlayerKelpTrap::Begin() {
    // Local variables
    class zSBPlayer * sbPlayer; // r31
}
// signature: zSBPlayerKelpTrap::BeforeEnter(xAnimPlay *, xAnimState *, void *)
// Range: 0x80156A50 -> 0x80156AC4
void zSBPlayerKelpTrap::BeforeEnter(class xAnimState * state /* r30 */, void * object /* r31 */) {
    // Local variables
    class zSBPlayer * player; // r0
    class zAnimPackage * currentPackage; // r0
}
// Range: 0x80156AD0 -> 0x80156B08
void zSBPlayerKelpTrap::End() {
    // Local variables
    class zSBPlayer * sbPlayer; // r4
}
// signature: zSBPlayerKelpTrap::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80156B10 -> 0x80156B8C
void zSBPlayerKelpTrap::AddTransitionsFrom() {
}
// signature: zSBPlayerKelpTrap::Move(xScene *, float, xEntFrame *)
// Range: 0x80156C10 -> 0x80156CC8
void zSBPlayerKelpTrap::Move(class zSBPlayerKelpTrap * this /* r31 */) {
    {
        // Range: 0x80156C30 -> 0x80156CAC
        // Local variables
        class hkVector4 pos; // r1+0x20
    }
}
// signature: zSBPlayerKelpTrap::KelpTrapCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80156CD0 -> 0x80156CE4
unsigned int zSBPlayerKelpTrap::KelpTrapCheck() {
}
// signature: zSBPlayerKelpTrap::KelpReleaseCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80156CF0 -> 0x80156D38
unsigned int zSBPlayerKelpTrap::KelpReleaseCheck() {
    // Local variables
    class zPlantTrap * kelp; // r3
}
// Range: 0x80156D40 -> 0x80156D64
static void _PlayerDeadSceneResetCB() {
}
// Range: 0x80156D70 -> 0x80156E1C
void zPlayerDefeatedSB::Begin(class zPlayerDefeatedSB * this /* r31 */) {
    // References
    // -> class zGlobals globals;
}
// signature: zDefeatedFragBobBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x80156E20 -> 0x80156E5C
void zDefeatedFragBobBE(void * object /* r31 */) {
    // Local variables
    class zSBPlayer * player; // r0
}
// signature: zDefeatedFrozenBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x80156E60 -> 0x80156E9C
void zDefeatedFrozenBE(void * object /* r31 */) {
    // Local variables
    class zSBPlayer * player; // r0
}
// signature: zGravestoneBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x80156EA0 -> 0x80156EDC
void zGravestoneBE(void * object /* r31 */) {
    // Local variables
    class zSBPlayer * player; // r0
}
// signature: zDefeatedDeathBonesBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x80156EE0 -> 0x80156F1C
void zDefeatedDeathBonesBE(void * object /* r31 */) {
    // Local variables
    class zSBPlayer * player; // r0
}
// Range: 0x80156F20 -> 0x80157524
void zPlayerDefeatedSB::AddStates(class zPlayerDefeatedSB * this /* r24 */, class xAnimTable * table /* r25 */) {
}
// Range: 0x80157530 -> 0x801576A4
void zPlayerDefeatedSB::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// signature: zPlayerDefeatedSB::PowerupStateCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x801576D0 -> 0x801576F8
unsigned int zPlayerDefeatedSB::PowerupStateCheck() {
}
// Range: 0x80157700 -> 0x80157824
unsigned int zPlayerDefeatedSB::DeathCheck(class zPlayerDefeatedSB * this /* r29 */, class xAnimTransition * tran /* r30 */, class xAnimSingle * anim /* r31 */) {
}
// Range: 0x80157830 -> 0x801578BC
unsigned int zPlayerDefeatedSB::FragBobCheck(class zPlayerDefeatedSB * this /* r29 */, class xAnimTransition * tran /* r30 */, class xAnimSingle * anim /* r31 */) {
}
// Range: 0x801578C0 -> 0x80157980
unsigned int zPlayerDefeatedSB::KelpTrapCheck(class zPlayerDefeatedSB * this /* r29 */, class xAnimTransition * tran /* r30 */, class xAnimSingle * anim /* r31 */) {
    {
        // Range: 0x80157920 -> 0x80157968
        // Local variables
        class zSBPlayer * sbPlayer; // r31
    }
}
// signature: zPlayerDefeatedSB::LavaDeathCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80157980 -> 0x801579D0
unsigned int zPlayerDefeatedSB::LavaDeathCheck(class zPlayerDefeatedSB * this /* r31 */) {
}
// signature: zPlayerDefeatedSB::LavaVersionCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x801579D0 -> 0x80157A18
unsigned int zPlayerDefeatedSB::LavaVersionCheck(class xAnimTransition * tran /* r31 */) {
}
// signature: zPlayerDefeatedSB::GooDeathCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80157A20 -> 0x80157A70
unsigned int zPlayerDefeatedSB::GooDeathCheck(class zPlayerDefeatedSB * this /* r31 */) {
}
// signature: zPlayerDefeatedSB::GooVersionCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80157A70 -> 0x80157AB8
unsigned int zPlayerDefeatedSB::GooVersionCheck(class xAnimTransition * tran /* r31 */) {
}
// signature: zPlayerDefeatedSB::FrozenGooDeathCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80157AC0 -> 0x80157B8C
unsigned int zPlayerDefeatedSB::FrozenGooDeathCheck(class zPlayerDefeatedSB * this /* r30 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r30

    // References
    // -> class zGlobals globals;
}
// signature: zPlayerDefeatedSB::AcidDeathCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80157B90 -> 0x80157BE0
unsigned int zPlayerDefeatedSB::AcidDeathCheck(class zPlayerDefeatedSB * this /* r31 */) {
}
// signature: zPlayerDefeatedSB::AcidVersionCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80157BE0 -> 0x80157C28
unsigned int zPlayerDefeatedSB::AcidVersionCheck(class xAnimTransition * tran /* r31 */) {
}
// Range: 0x80157C30 -> 0x80157D24
unsigned int zPlayerDefeatedSB::FrozenVentDeathCheck(class zPlayerDefeatedSB * this /* r28 */, class xAnimTransition * tran /* r29 */, class xAnimSingle * anim /* r30 */) {
    // Local variables
    class zSBPlayer * sbPlayer; // r31

    // References
    // -> class zGlobals globals;
}
// signature: zPlayerDefeatedSB::FaceCameraCB(xAnimTransition *, xAnimSingle *)
// Range: 0x80157D30 -> 0x80157DC0
unsigned int zPlayerDefeatedSB::FaceCameraCB(class zPlayerDefeatedSB * this /* r31 */) {
    // Local variables
    float randomOffset; // f3
}
// Range: 0x80157DC0 -> 0x80157ED8
void zPlayerDefeatedSB::Update(class zPlayerDefeatedSB * this /* r30 */, float dt /* f31 */) {
    {
        // Range: 0x80157DFC -> 0x80157EB8
        // Local variables
        class xAnimSingle * single; // r31

        {
            // Range: 0x80157E20 -> 0x80157E58
            // Local variables
            float startFadeTime; // f1
        }
        {
            // Range: 0x80157E58 -> 0x80157E9C
            // Local variables
            float startFadeTime; // f1
        }
    }
}
// Range: 0x80157EE0 -> 0x80157FD0
void zPlayerDefeatedSB::Move(class zPlayerDefeatedSB * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
    {
        // Range: 0x80157F04 -> 0x80157F90
        // Local variables
        class xVec3 moveDir; // r1+0x8
    }
}
// Range: 0x80157FD0 -> 0x80158050
void zPlayerDefeatedSB::Reset(class zPlayerDefeatedSB * this /* r31 */) {
}
// signature: zPlayerDefeatedSB::ResetRandomAnims(xAnimState **, int *, int *)
// Range: 0x80158050 -> 0x80158134
void zPlayerDefeatedSB::ResetRandomAnims(class xAnimState * * vars /* r30 */, int * numVars /* r31 */) {
    // Local variables
    unsigned int choice; // r6

    {
        // Range: 0x8015805C -> 0x801580C4
        // Local variables
        int i; // r8

        {
            // Range: 0x8015805C -> 0x801580C4
            // Local variables
            unsigned int flag; // r0
            unsigned int data; // r9
        }
    }
    {
        // Range: 0x801580D0 -> 0x80158120
        // Local variables
        int j; // r7

        {
            // Range: 0x801580D0 -> 0x80158120
            // Local variables
            unsigned int data; // r0
        }
    }
}
// signature: zPlayerDefeatedSB::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80158140 -> 0x80158710
void zPlayerDefeatedSB::AddTransitionsFrom(class xAnimTable * table /* r25 */, char * fromStates /* r26 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r28 */, unsigned short priority /* r31 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// Range: 0x80158B10 -> 0x80158B4C
void zPlayerFallToDeathSB::Begin(class zPlayerFallToDeathSB * this /* r31 */) {
}
// Range: 0x80158B50 -> 0x80158BE4
void zPlayerFallToDeathSB::Update(class zPlayerFallToDeathSB * this /* r31 */, float dt /* f31 */) {
}
// signature: zPlayerCelebrationSB::AddStates(xAnimTable *)
// Range: 0x80158BF0 -> 0x80158C68
void zPlayerCelebrationSB::AddStates() {
}
// signature: zPlayerCelebrationSB::CelebrationCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x80158C70 -> 0x80158CDC
unsigned int zPlayerCelebrationSB::CelebrationCheck(class zPlayerCelebrationSB * this /* r31 */) {
}
// Range: 0x80158CE0 -> 0x80158DDC
void zPlayerCelebrationSB::AddActionTransitions(class zPlayerCelebrationSB * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zPlayerCelebrationSB::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80158DE0 -> 0x80158E5C
void zPlayerCelebrationSB::AddTransitionsFrom() {
}
// Range: 0x80158EE0 -> 0x80158EF0
void zPlayerCelebrationSB::Begin() {
}
// Range: 0x80158EF0 -> 0x80158FD0
void zPlayerSingleCustomAnimSB::AddStates(class zPlayerSingleCustomAnimSB * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x80158FD0 -> 0x80159098
void zPlayerSingleCustomAnimSB::AddActionTransitions(class xAnimTable * table /* r25 */) {
}
// Range: 0x80159110 -> 0x801591D8
void zPlayerSingleCustomAnimSB::AddInternalTransitions(class xAnimTable * table /* r24 */) {
}
// signature: zPlayerSingleCustomAnimSB::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80159270 -> 0x801592EC
void zPlayerSingleCustomAnimSB::AddTransitionsFrom() {
}
// Range: 0x801592F0 -> 0x80159328
void zPlayerSingleCustomAnimSB::Begin() {
}
// Range: 0x80159330 -> 0x80159378
void zPlayerSingleCustomAnimSB::End(class zPlayerSingleCustomAnimSB * this /* r31 */) {
}
// Range: 0x80159380 -> 0x80159390
void zPlayerSingleCustomAnimSB::Reset() {
}
// Range: 0x80159390 -> 0x80159440
void zPlayerSingleCustomAnimSB::PlayAnim(class zPlayerSingleCustomAnimSB * this /* r29 */, unsigned long long id /* r31:r30 */) {
    // Local variables
    void * buf; // r3
}
// signature: zPlayerSingleCustomAnimSB::PlayAnimFromAnimPackage(unsigned long long, unsigned int)
// Range: 0x80159440 -> 0x80159548
void zPlayerSingleCustomAnimSB::PlayAnimFromAnimPackage(class zPlayerSingleCustomAnimSB * this /* r31 */, unsigned int index /* r28 */) {
    // Local variables
    class zAnimPackage * animPackage; // r29
    void * rawData; // r3
    class xAnimVFX_Effect * vfxData; // r1+0x10
    int numVFXData; // r1+0xC
    class xAnimSoundEffect * soundData; // r1+0x8
}
