/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCommonPlayerContextActions.cpp
*/
static unsigned int PLAYERANIM_SPRINGBOARD_LAUNCH; // size: 0x4, address: 0x806F43AC
static unsigned int PLAYERANIM_CHARGEBOARD_COMPRESSING; // size: 0x4, address: 0x806F43B0
static unsigned int PLAYERANIM_CHARGEBOARD_COMPRESSED; // size: 0x4, address: 0x806F43B4
static unsigned int PLAYERANIM_LAUNCH_FLYING; // size: 0x4, address: 0x806F43B8
// Range: 0x800BE190 -> 0x800BE5D0
void zPlayerActionBeamRun::AddStates(class zPlayerActionBeamRun * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x800BE5D0 -> 0x800BE818
void zPlayerActionBeamRun::AddInternalTransitions(class xAnimTable * table /* r23 */) {
}
// Range: 0x800BEA00 -> 0x800BEB1C
void zPlayerActionBeamRun::AddActionTransitions(class zPlayerActionBeamRun * this /* r28 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerActionBeamRun::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800BEB20 -> 0x800BEB90
void zPlayerActionBeamRun::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x800BEC10 -> 0x800BED14
void zPlayerActionBeamRun::Begin(class zPlayerActionBeamRun * this /* r30 */) {
    // Local variables
    class xVec3 splineDir; // r1+0x38
}
// Range: 0x800BED20 -> 0x800BED2C
void zPlayerActionBeamRun::End() {
}
// Range: 0x800BED30 -> 0x800BF14C
void zPlayerActionBeamRun::TightropeMove(class zPlayerActionBeamRun * this /* r28 */, float dt /* f31 */, class xEntFrame * frame /* r29 */, class zContextObjectBeam * tightrope /* r30 */) {
    // Local variables
    float x; // f29
    float z; // f2
    float stickAngle; // f29
    float orientationLookAheadU; // r1+0xC
    float lookAheadDist; // f2
    class xVec3 lookAheadSplineDir; // r1+0x68
    float lookAheadSplineAngle; // f1
    float cosDiff; // f0
    float controllerSpeed; // f0

    {
        // Range: 0x800BF0C4 -> 0x800BF114
        // Local variables
        class xVec3 splineDir; // r1+0x5C
    }
}
// Range: 0x800BF150 -> 0x800BF270
void zPlayerActionBeamRun::Move(class zPlayerActionBeamRun * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
    // Local variables
    class zContextObjectBeam * tightrope; // r6
}
// Range: 0x800BF270 -> 0x800BF3A4
void zPlayerPoleSwing::AddStates(class zPlayerPoleSwing * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerPoleSwing::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800BF3B0 -> 0x800BF410
void zPlayerPoleSwing::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r11 */) {
}
// Range: 0x800BF490 -> 0x800BF6A4
void zPlayerPoleSwing::AddInternalTransitions(class xAnimTable * table /* r25 */) {
}
// Range: 0x800BFC50 -> 0x800BFCE8
void zPlayerPoleSwing::AddActionTransitions(class zPlayerPoleSwing * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x800BFCF0 -> 0x800BFD20
void zPlayerPoleSwing::Begin() {
}
// Range: 0x800BFD20 -> 0x800BFD44
void zPlayerPoleSwing::End() {
}
// Range: 0x800BFD50 -> 0x800BFF4C
void zPlayerPoleSwing::Move(class zPlayerPoleSwing * this /* r29 */, class xScene * s /* r30 */, float dt /* f29 */, class xEntFrame * frame /* r31 */) {
    // Local variables
    unsigned int animFlags; // r0
    class zContextObjectPoleSwing * poleSwing; // r4
    unsigned char prevChkby; // r29
}
// signature: zPlayerPoleSwing::Update(float)
// Range: 0x800BFF50 -> 0x800BFF54
void zPlayerPoleSwing::Update() {
}
// Range: 0x800BFF60 -> 0x800C0060
void zPlayerTrampoline::AddStates(class zPlayerTrampoline * this /* r25 */, class xAnimTable * table /* r26 */) {
    // References
    // -> static unsigned int PLAYERANIM_SPRINGBOARD_LAUNCH;
}
// signature: zPlayerTrampoline::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800C00C0 -> 0x800C0130
void zPlayerTrampoline::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x800C01B0 -> 0x800C02B8
void zPlayerTrampoline::AddInternalTransitions(class xAnimTable * table /* r27 */) {
}
// signature: zPlayerTrampoline::AddActionTransitions(xAnimTable *)
// Range: 0x800C04E0 -> 0x800C053C
void zPlayerTrampoline::AddActionTransitions() {
}
// Range: 0x800C05B0 -> 0x800C05EC
void zPlayerTrampoline::Begin(class zPlayerTrampoline * this /* r31 */) {
}
// Range: 0x800C05F0 -> 0x800C0944
void zPlayerTrampoline::Move(class zPlayerTrampoline * this /* r28 */, class xScene * s /* r29 */, float dt /* f31 */, class xEntFrame * frame /* r30 */) {
    // Local variables
    class xAnimSingle * single; // r27
    unsigned int animFlags; // r26

    // References
    // -> static unsigned int PLAYERANIM_SPRINGBOARD_LAUNCH;
}
// Range: 0x800C0950 -> 0x800C0A44
void zPlayerBoardLaunch::AddStates(class zPlayerBoardLaunch * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerBoardLaunch::AddStandardTransitionsFrom(xAnimTable *, const char *)
// Range: 0x800C0A50 -> 0x800C0AA0
void zPlayerBoardLaunch::AddStandardTransitionsFrom() {
}
// signature: zPlayerBoardLaunch::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800C0AA0 -> 0x800C0B8C
void zPlayerBoardLaunch::AddTransitionsFrom(class zPlayerBoardLaunch * this /* r23 */, class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// Range: 0x800C0D20 -> 0x800C0DEC
void zPlayerBoardLaunch::AddActionTransitions(class zPlayerBoardLaunch * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x800C0DF0 -> 0x800C0EB4
void zPlayerBoardLaunch::AddInternalTransitions(class xAnimTable * table /* r27 */) {
}
// Range: 0x800C0F30 -> 0x800C1094
void zPlayerBoardLaunch::Begin(class zPlayerBoardLaunch * this /* r31 */) {
}
// Range: 0x800C10A0 -> 0x800C10B4
void zPlayerBoardLaunch::End() {
}
// Range: 0x800C10C0 -> 0x800C12D8
void zPlayerBoardLaunch::Move(class zPlayerBoardLaunch * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
}
// signature: zPlayerBoardLaunch::Update(float)
// Range: 0x800C12E0 -> 0x800C1344
void zPlayerBoardLaunch::Update(class zPlayerBoardLaunch * this /* r31 */) {
    // Local variables
    class zPlayerFall * fall; // r0
}
// signature: zPlayerBoardLaunch::Timestep(float)
// Range: 0x800C1350 -> 0x800C13CC
void zPlayerBoardLaunch::Timestep() {
    {
        // Range: 0x800C1378 -> 0x800C13B8
        // Local variables
        float percent; // f3
    }
}
// Range: 0x800C13D0 -> 0x800C14D4
void zPlayerChargeboard::AddStates(class zPlayerChargeboard * this /* r25 */, class xAnimTable * table /* r26 */) {
    // References
    // -> static unsigned int PLAYERANIM_CHARGEBOARD_COMPRESSED;
    // -> static unsigned int PLAYERANIM_CHARGEBOARD_COMPRESSING;
}
// signature: zPlayerChargeboard::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800C1530 -> 0x800C15A0
void zPlayerChargeboard::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x800C1630 -> 0x800C16F8
void zPlayerChargeboard::AddInternalTransitions(class xAnimTable * table /* r27 */) {
}
// signature: zPlayerChargeboard::StartCheck(xAnimTransition *, xAnimSingle *)
// Range: 0x800C1840 -> 0x800C19D4
unsigned int zPlayerChargeboard::StartCheck(class zPlayerChargeboard * this /* r31 */) {
    // Local variables
    class zSpringboard * groundBoard; // r0

    {
        // Range: 0x800C18B0 -> 0x800C19B0
        // Local variables
        class ModelInstanceArticle * modelArt; // r3

        {
            // Range: 0x800C18BC -> 0x800C19B0
            {
                // Range: 0x800C18C8 -> 0x800C19B0
                {
                    // Range: 0x800C18D4 -> 0x800C19B0
                    {
                        // Range: 0x800C18D4 -> 0x800C19B0
                        // Local variables
                        class xVec3 playerPos; // r1+0x8
                        float yExtent; // f13
                        float yCenter; // f11
                    }
                }
            }
        }
    }
}
// Range: 0x800C19E0 -> 0x800C1AFC
void zPlayerChargeboard::AddActionTransitions(class zPlayerChargeboard * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x800C1BB0 -> 0x800C1BF4
void zPlayerChargeboard::Begin(class zPlayerChargeboard * this /* r31 */) {
}
// Range: 0x800C1C00 -> 0x800C1EB0
void zPlayerChargeboard::Move(class zPlayerChargeboard * this /* r29 */, class xScene * s /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
}
// Range: 0x800C1EB0 -> 0x800C1FEC
void zPlayerChargeboard::End(class zPlayerChargeboard * this /* r30 */) {
    {
        // Range: 0x800C1EE8 -> 0x800C1FBC
        // Local variables
        float length; // f0
    }
}
// Range: 0x800C1FF0 -> 0x800C221C
void zPlayerActionLaunch::AddStates(class zPlayerActionLaunch * this /* r25 */, class xAnimTable * table /* r26 */) {
    // References
    // -> static unsigned int PLAYERANIM_LAUNCH_FLYING;
}
// signature: zPlayerActionLaunch::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800C22B0 -> 0x800C2320
void zPlayerActionLaunch::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x800C23D0 -> 0x800C25D4
void zPlayerActionLaunch::AddInternalTransitions(class xAnimTable * table /* r27 */) {
}
// Range: 0x800C2760 -> 0x800C293C
void zPlayerActionLaunch::AddActionTransitions(class zPlayerActionLaunch * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x800C29D0 -> 0x800C29D4
void zPlayerActionLaunch::Begin() {
}
// signature: zPlayerActionLaunch::Update(float)
// Range: 0x800C29E0 -> 0x800C29F4
void zPlayerActionLaunch::Update() {
}
// Range: 0x800C2A00 -> 0x800C2AE4
void zPlayerActionLaunch::End(class zPlayerActionLaunch * this /* r31 */) {
    // Local variables
    class zLaunch * launch; // r5
    class xVec3 YPRvector; // r1+0x8
}
// Range: 0x800C2AF0 -> 0x800C2C4C
void zPlayerActionLaunch::Move(class zPlayerActionLaunch * this /* r29 */, class xScene * s /* r28 */, float dt /* f31 */, class xEntFrame * frame /* r30 */) {
    // Local variables
    class zLaunch * launch; // r31
    class xVec3 dpos; // r1+0x8

    // References
    // -> static unsigned int PLAYERANIM_LAUNCH_FLYING;
}
// Range: 0x800C2C50 -> 0x800C2C8C
bool zPlayerActionLaunch::IsFlying() {
    // References
    // -> static unsigned int PLAYERANIM_LAUNCH_FLYING;
}
// signature: zPlayerActionLaunch::UpdateFall(float)
// Range: 0x800C2C90 -> 0x800C2CA4
void zPlayerActionLaunch::UpdateFall() {
}
// Range: 0x800C2CB0 -> 0x800C2E1C
void zPlayerActionPipeClimb::AddStates(class zPlayerActionPipeClimb * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x800C2E20 -> 0x800C2FEC
void zPlayerActionPipeClimb::AddInternalTransitions(class xAnimTable * table /* r25 */) {
}
// Range: 0x800C31C0 -> 0x800C32DC
void zPlayerActionPipeClimb::AddActionTransitions(class zPlayerActionPipeClimb * this /* r28 */, class xAnimTable * table /* r27 */) {
}
// signature: zPlayerActionPipeClimb::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x800C32E0 -> 0x800C3350
void zPlayerActionPipeClimb::AddTransitionsFrom(unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r30 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r31 */, unsigned short priority /* r12 */, unsigned int flags /* r0 */) {
}
// Range: 0x800C33D0 -> 0x800C3560
void zPlayerActionPipeClimb::Begin(class zPlayerActionPipeClimb * this /* r30 */) {
    // Local variables
    class xVec3 splineDir; // r1+0x14
}
// Range: 0x800C3560 -> 0x800C35A0
void zPlayerActionPipeClimb::MountEnd() {
}
// Range: 0x800C35A0 -> 0x800C365C
void zPlayerActionPipeClimb::End(class zPlayerActionPipeClimb * this /* r31 */) {
    // Local variables
    class xVec3 YPRvector; // r1+0x8
}
// Range: 0x800C3660 -> 0x800C3E6C
void zPlayerActionPipeClimb::PipeClimbMove(class zPlayerActionPipeClimb * this /* r28 */, float dt /* f30 */, class xEntFrame * frame /* r29 */, class zContextObjectPipe * tightrope /* r30 */) {
    // Local variables
    class xVec3 stickVec; // r1+0x60
    class xVec3 worldStickVec; // r1+0x54
    class xVec3 worldStickVecN; // r1+0x48
    class xVec3 splineDir; // r1+0x3C
    float cosDiff; // f0
    class xVec3 splineDirN; // r1+0x30
    class xMat3x3 lookMat; // r1+0x70

    // References
    // -> class xMat4x3 g_I3;
}
// Range: 0x800C3E70 -> 0x800C3FF8
void zPlayerActionPipeClimb::Move(class zPlayerActionPipeClimb * this /* r27 */, class xScene * s /* r28 */, float dt /* f29 */, class xEntFrame * frame /* r29 */) {
    // Local variables
    class zContextObjectPipe * pipe; // r30
    unsigned char prevChkby; // r0
}
