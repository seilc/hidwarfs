/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zNPCCommonStates.cpp
*/
float TELEPORT_DEFAULT_EXTRA_DISTANCE; // size: 0x4, address: 0x806CDD80
// signature: zNPCActionAnim::StartOnNPC(zNPCEntity *, bool)
// Range: 0x800F9530 -> 0x800F974C
void zNPCActionAnim::StartOnNPC(class zNPCActionAnim * this /* r30 */, class zNPCEntity * npcEnt /* r31 */) {
}
// Range: 0x800F9750 -> 0x800F9870
class zNPCStateResult zNPCTeleportState::Enter() {
    // References
    // -> class zNPCStateResult NotDone;
    // -> class Scene * primaryScene;
}
// Range: 0x800F9870 -> 0x800F9B64
class zNPCStateResult zNPCTeleportState::Update(class zNPCTeleportState * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 * destPos; // r0
    float boundR; // f0
    int numNPCs; // r0
    class zNPCBase * * npcs; // r0

    {
        // Range: 0x800F98C4 -> 0x800F99A4
        // Local variables
        int i; // r0

        {
            // Range: 0x800F98C4 -> 0x800F99A4
            // Local variables
            class zNPCEntity * npcEnt; // r0

            {
                // Range: 0x800F98F8 -> 0x800F99A4
                // Local variables
                float limit; // f0
                float otherBoundR; // f0
                float dist2; // f0
            }
        }
    }

    // References
    // -> class zNPCStateResult Done;
    // -> class zGlobals globals;
    // -> class zNPCStateResult NotDone;
    // -> static class zNPCManager gNPCManager;
}
// Range: 0x800F9B90 -> 0x800F9CC0
void zNPCTeleportState::Exit() {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x800F9CC0 -> 0x800F9D7C
void zNPCNoMoveAction::Activate(class zNPCNoMoveAction * this /* r30 */) {
}
// Range: 0x800F9D80 -> 0x800F9FFC
class zNPCStateResult zNPCNoMoveAction::ActionUpdate(class zNPCNoMoveAction * this /* r30 */, float dt /* f31 */) {
    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult Done;
    // -> class zNPCStateResult TimerDone;
}
// Range: 0x800FA000 -> 0x800FA06C
void zNPCNoMoveAction::Deactivate() {
}
// Range: 0x800FA070 -> 0x800FA134
void zNPCNoMoveLoop::Activate(class zNPCNoMoveLoop * this /* r30 */) {
}
// Range: 0x800FA140 -> 0x800FA47C
class zNPCStateResult zNPCNoMoveLoop::ActionUpdate(class zNPCNoMoveLoop * this /* r31 */, float dt /* f31 */) {
    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult Done;
}
// Range: 0x800FA480 -> 0x800FA53C
void zNPCIdleAction::Activate(class zNPCIdleAction * this /* r30 */) {
}
// Range: 0x800FA540 -> 0x800FA6FC
class zNPCStateResult zNPCIdleAction::ActionUpdate(class zNPCIdleAction * this /* r30 */, float dt /* f31 */) {
    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult TimerDone;
}
// Range: 0x800FA700 -> 0x800FA76C
void zNPCIdleAction::Deactivate() {
}
// Range: 0x800FA770 -> 0x800FA82C
void zNPCOneShotAnimAction::Activate(class zNPCOneShotAnimAction * this /* r30 */) {
}
// signature: zNPCOneShotAnimAction::ActionUpdate(float)
// Range: 0x800FA840 -> 0x800FAA5C
class zNPCStateResult zNPCOneShotAnimAction::ActionUpdate(class zNPCOneShotAnimAction * this /* r30 */) {
    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult Done;
}
// Range: 0x800FAA60 -> 0x800FAACC
void zNPCOneShotAnimAction::Deactivate() {
}
// Range: 0x800FAAD0 -> 0x800FAAEC
class zNPCStateResult zNPCDamageAction::Enter() {
    // References
    // -> class zNPCStateResult NotDone;
}
// Range: 0x800FAB10 -> 0x800FAB6C
void zNPCDamageAction::Exit(class zNPCDamageAction * this /* r31 */) {
}
// Range: 0x800FAB80 -> 0x800FAE10
void zNPCLookoutAction::Activate(class zNPCLookoutAction * this /* r29 */) {
    {
        // Range: 0x800FABC0 -> 0x800FACC4
        // Local variables
        class xVec3 initialDir; // r1+0x14
    }

    // References
    // -> class xVec3 m_UnitAxisZ;
}
// Range: 0x800FAE10 -> 0x800FB0A8
class zNPCStateResult zNPCLookoutAction::ActionUpdate(class zNPCLookoutAction * this /* r31 */, float dt /* f31 */) {
    // References
    // -> class zNPCStateResult Done;
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult TimerDone;
}
// Range: 0x800FB0B0 -> 0x800FB2A8
class zNPCStateResult zNPCMoveToAction::Enter(class zNPCMoveToAction * this /* r31 */) {
    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult Arrived;
}
// Range: 0x800FB2B0 -> 0x800FB384
void zNPCMoveToAction::Activate(class zNPCMoveToAction * this /* r30 */) {
}
// Range: 0x800FB390 -> 0x800FB438
void zNPCMoveToAction::Exit(class zNPCMoveToAction * this /* r31 */) {
}
// Range: 0x800FB440 -> 0x800FB808
class zNPCStateResult zNPCMoveToAction::ActionUpdate(class zNPCMoveToAction * this /* r31 */, float dt /* f31 */) {
    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult Arrived;
    // -> class zNPCStateResult AnimDone;
    // -> class zNPCStateResult TimerDone;
}
// Range: 0x800FB810 -> 0x800FB9C0
class zNPCStateResult zNPCSeekAction::Enter(class zNPCSeekAction * this /* r31 */) {
    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult Arrived;
}
// Range: 0x800FB9C0 -> 0x800FBA7C
void zNPCSeekAction::Activate(class zNPCSeekAction * this /* r30 */) {
}
// Range: 0x800FBA80 -> 0x800FBB14
void zNPCSeekAction::Exit(class zNPCSeekAction * this /* r31 */) {
}
// Range: 0x800FBB20 -> 0x800FBED4
class zNPCStateResult zNPCSeekAction::ActionUpdate(class zNPCSeekAction * this /* r31 */, float dt /* f31 */) {
    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult Arrived;
    // -> class zNPCStateResult AnimDone;
    // -> class zNPCStateResult TimerDone;
}
// Range: 0x800FBEE0 -> 0x800FBF8C
class zNPCStateResult zNPCWanderAction::Enter() {
    // References
    // -> class zNPCStateResult NotDone;
}
// Range: 0x800FBF90 -> 0x800FC04C
void zNPCWanderAction::Activate(class zNPCWanderAction * this /* r30 */) {
}
// Range: 0x800FC050 -> 0x800FC0E4
void zNPCWanderAction::Exit(class zNPCWanderAction * this /* r31 */) {
}
// Range: 0x800FC0F0 -> 0x800FC36C
class zNPCStateResult zNPCWanderAction::ActionUpdate(class zNPCWanderAction * this /* r30 */, float dt /* f31 */) {
    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult AnimDone;
    // -> class zNPCStateResult TimerDone;
}
// Range: 0x800FC370 -> 0x800FC42C
void zNPCFleeAction::Activate(class zNPCFleeAction * this /* r30 */) {
}
// Range: 0x800FC430 -> 0x800FC49C
void zNPCFleeAction::Deactivate() {
}
// Range: 0x800FC4A0 -> 0x800FC71C
class zNPCStateResult zNPCFleeAction::ActionUpdate(class zNPCFleeAction * this /* r30 */, float dt /* f31 */) {
    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult AnimDone;
    // -> class zNPCStateResult TimerDone;
}
// Range: 0x800FC720 -> 0x800FC874
void zNPCIdleWithFidgetControl::Initialize(class zNPCIdleWithFidgetControl * this /* r28 */) {
    // References
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__21zNPCOneShotAnimAction;
    // -> class zFactory factory;
}
// Range: 0x800FC880 -> 0x800FC8F0
void zNPCIdleWithFidgetControl::Deinitialize(class zNPCIdleWithFidgetControl * this /* r30 */) {
    // References
    // -> class zFactory factory;
}
// Range: 0x800FC900 -> 0x800FCA04
class zNPCStateResult zNPCIdleWithFidgetControl::Enter(class zNPCIdleWithFidgetControl * this /* r28 */) {
}
// signature: zNPCIdleWithFidgetControl::ChildDone(zNPCState *, int, zNPCStateResult)
// Range: 0x800FCA10 -> 0x800FCBC0
class zNPCStateResult zNPCIdleWithFidgetControl::ChildDone(class zNPCIdleWithFidgetControl * this /* r30 */) {
    // Local variables
    unsigned int curWeight; // r8
    unsigned int animNumToPush; // r31
    float blendTime; // f0
}
// Range: 0x800FCBC0 -> 0x800FCBD8
class zNPCStateResult zNPCSequencerControl::Enter() {
}
// signature: zNPCSequencerControl::ChildDone(zNPCState *, int, zNPCStateResult)
// Range: 0x800FCBE0 -> 0x800FCC30
class zNPCStateResult zNPCSequencerControl::ChildDone() {
    // Local variables
    unsigned int nextStateID; // r5

    // References
    // -> class zNPCStateResult Done;
}
// Range: 0x800FCC30 -> 0x800FCCB0
void zNPCSequencerControl::Deinitialize(class zNPCSequencerControl * this /* r27 */) {
    {
        // Range: 0x800FCC44 -> 0x800FCC48
        // Local variables
        unsigned int i; // r28
    }

    // References
    // -> class zFactory factory;
}
// Range: 0x800FCCB0 -> 0x800FCDB0
class zNPCStateResult zNPCActivePerceptionControl::Enter(class zNPCActivePerceptionControl * this /* r29 */) {
}
// Range: 0x800FCDB0 -> 0x800FCE88
void zNPCActivePerceptionControl::Deinitialize(class zNPCActivePerceptionControl * this /* r27 */) {
    {
        // Range: 0x800FCDC4 -> 0x800FCE14
        // Local variables
        unsigned int i; // r28
    }

    // References
    // -> class zFactory factory;
}
// signature: zNPCActivePerceptionControl::ControlUpdate(float)
// Range: 0x800FCE90 -> 0x800FCFE4
class zNPCStateResult zNPCActivePerceptionControl::ControlUpdate(class zNPCActivePerceptionControl * this /* r29 */) {
    // References
    // -> class zNPCStateResult ControlForced;
    // -> class zNPCStateResult NotDone;
}
// signature: zNPCActivePerceptionControl::ChildDone(zNPCState *, int, zNPCStateResult)
// Range: 0x800FCFF0 -> 0x800FD100
class zNPCStateResult zNPCActivePerceptionControl::ChildDone(class zNPCActivePerceptionControl * this /* r27 */, class zNPCState * childState /* r28 */, class zNPCStateResult * childStateResult /* r29 */) {
    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult ControlForced;
}
// Range: 0x800FD100 -> 0x800FD160
void zNPCShootLaserControl::Deinitialize(class zNPCShootLaserControl * this /* r29 */) {
    {
        // Range: 0x800FD118 -> 0x800FD134
        // Local variables
        unsigned int i; // r30
    }
}
// Range: 0x800FD160 -> 0x800FD320
class zNPCStateResult zNPCShootLaserControl::ControlUpdate(class zNPCShootLaserControl * this /* r25 */, float dt /* f31 */) {
    {
        // Range: 0x800FD188 -> 0x800FD288
        // Local variables
        unsigned int i; // r26
    }

    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult TimerDone;
}
// signature: zNPCShootLaserControl::Calculate(unsigned int)
// Range: 0x800FD320 -> 0x800FD838
void zNPCShootLaserControl::Calculate(class zNPCShootLaserControl * this /* r26 */) {
    // Local variables
    class ShootInfo * curShootInfo; // r0
    class zRunEntLaser * laser; // r28
    class xVec3 * destPos; // r27
    class xVec3 destVel; // r1+0x44
    class xVec3 shootStartPos; // r1+0x38
    class xVec3 toTarget; // r1+0x2C
    class xVec3 toTargetRight; // r1+0x20
    float horOffset; // f29
    float verOffset; // f28
    class xVec3 destOffset; // r1+0x14
    float timeToShoot; // f1

    // References
    // -> class xVec3 m_UnitAxisZ;
}
// Range: 0x800FD840 -> 0x800FD864
class zNPCStateResult zNPCShootLaserControl::Enter() {
}
// signature: zNPCShootLaserControl::ChildDone(zNPCState *, int, zNPCStateResult)
// Range: 0x800FD870 -> 0x800FD878
class zNPCStateResult zNPCShootLaserControl::ChildDone() {
}
// Range: 0x800FD880 -> 0x800FD94C
void zNPCShootLaserControl::Exit(class zNPCShootLaserControl * this /* r29 */) {
    {
        // Range: 0x800FD898 -> 0x800FD8B4
        // Local variables
        unsigned int i; // r30
    }

    // References
    // -> class zFactory factory;
}
// Range: 0x800FD950 -> 0x800FDC8C
void zNPCFollowMPPathControl::Initialize(class zNPCFollowMPPathControl * this /* r30 */) {
    // References
    // -> struct {} __vt__23zNPCSteeringStopControl;
    // -> struct {} __vt__14zNPCIdleAction;
    // -> struct {} __vt__25zNPCSteeringMoveToControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCMoveToAction;
    // -> class xVec3 m_UnitAxisZ;
    // -> class zFactory factory;
}
// Range: 0x800FDC90 -> 0x800FDD40
void zNPCFollowMPPathControl::Deinitialize(class zNPCFollowMPPathControl * this /* r30 */) {
    // References
    // -> class zFactory factory;
}
// Range: 0x800FDD40 -> 0x800FE000
class zNPCStateResult zNPCFollowMPPathControl::Enter(class zNPCFollowMPPathControl * this /* r31 */) {
    // Local variables
    class zNPCInfoNodePathInfo * pathInfo; // r30

    {
        // Range: 0x800FDE58 -> 0x800FDEEC
        // Local variables
        class zNPCInfoNodeMovePointSave * mpSaveNode; // r0
    }

    // References
    // -> class zNPCStateResult Arrived;
    // -> struct {} __vt__20zNPCInfoNodePathInfo;
    // -> class zFactory factory;
}
// signature: zNPCFollowMPPathControl::ChildDone(zNPCState *, int, zNPCStateResult)
// Range: 0x800FE000 -> 0x800FE190
class zNPCStateResult zNPCFollowMPPathControl::ChildDone(class zNPCFollowMPPathControl * this /* r30 */) {
    // References
    // -> class zNPCStateResult Arrived;
}
// Range: 0x800FE190 -> 0x800FE318
void zNPCFollowMPPathControl::Exit(class zNPCFollowMPPathControl * this /* r31 */) {
    {
        // Range: 0x800FE1A8 -> 0x800FE264
        // Local variables
        class zNPCInfoNodeMovePointSave * mpSaveNode; // r30
    }

    // References
    // -> struct {} __vt__25zNPCInfoNodeMovePointSave;
    // -> class zFactory factory;
}
// Range: 0x800FE320 -> 0x800FE53C
class xMovePoint * zNPCFollowNPCOnPathControl::SearchNextMP(class zNPCFollowNPCOnPathControl * this /* r24 */, class xMovePoint * start /* r25 */, class xMovePoint * goal /* r26 */, float searchDistance /* f26 */, float * distance /* r27 */) {
    // Local variables
    class xMovePoint * bestPath; // r29
    float bestPathLength; // f28
    float longestPath; // f27

    {
        // Range: 0x800FE3A8 -> 0x800FE4B8
        // Local variables
        int i; // r28

        {
            // Range: 0x800FE3A8 -> 0x800FE4B8
            // Local variables
            float seperationDistance; // f0
            class xVec3 seperation; // r1+0xC

            {
                // Range: 0x800FE45C -> 0x800FE4B8
                // Local variables
                float childPathLength; // r1+0x8
            }
        }
    }
}
// Range: 0x800FE540 -> 0x800FE7F4
class zNPCStateResult zNPCFollowNPCOnPathControl::Enter(class zNPCFollowNPCOnPathControl * this /* r31 */) {
    // Local variables
    class zNPCInfoNodePathInfo * pathInfo; // r29

    // References
    // -> class zNPCStateResult NotDone;
    // -> struct {} __vt__20zNPCInfoNodePathInfo;
    // -> class zFactory factory;
}
// Range: 0x800FE800 -> 0x800FEC04
class zNPCStateResult zNPCFollowNPCOnPathControl::ActionUpdate(class zNPCFollowNPCOnPathControl * this /* r31 */, float dt /* f31 */) {
    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult Arrived;
    // -> class zNPCStateResult AnimDone;
    // -> class zNPCStateResult TimerDone;
}
// Range: 0x800FEC10 -> 0x800FEFCC
void zNPCFollowNPCOnPathControl::GetCurPathTangent(class zNPCFollowNPCOnPathControl * this /* r29 */, class xVec3 * tan /* r31 */) {
    {
        // Range: 0x800FED90 -> 0x800FEF98
        // Local variables
        float tanLength; // f0
    }

    // References
    // -> class xVec3 m_UnitAxisZ;
}
// Range: 0x800FEFD0 -> 0x800FF1A8
void zNPCFollowNPCOnPathControl::UpdateOrientation(class zNPCFollowNPCOnPathControl * this /* r31 */) {
    {
        // Range: 0x800FF0A4 -> 0x800FF190
        {
            // Range: 0x800FF0AC -> 0x800FF170
            // Local variables
            class xVec3 pathDir; // r1+0x8
        }
    }
}
// Range: 0x800FF1B0 -> 0x800FF7FC
bool zNPCFollowNPCOnPathControl::UpdateDestinationWithFollowPoint(class zNPCFollowNPCOnPathControl * this /* r31 */) {
    // Local variables
    class xMovePointPathPoint destNPCPathPoint; // r1+0x80
    class xVec3 destNPCPathPos; // r1+0x74
    float destNPCPathDist2; // f28
    float destNPCBoundR; // f0

    {
        // Range: 0x800FF30C -> 0x800FF714
        // Local variables
        float searchDistance; // f29

        {
            // Range: 0x800FF364 -> 0x800FF674
            // Local variables
            class xVec3 dest; // r1+0x44
            class xVec3 tan; // r1+0x50

            {
                // Range: 0x800FF3D8 -> 0x800FF5D4
                // Local variables
                float lastLegLength; // f0
                class xVec3 seperation; // r1+0x68

                {
                    // Range: 0x800FF46C -> 0x800FF5D4
                    // Local variables
                    class xVec3 curNPCFollowPos; // r1+0x5C
                }
            }
        }
        {
            // Range: 0x800FF674 -> 0x800FF714
            // Local variables
            class xVec3 dest; // r1+0x2C
            class xVec3 tan; // r1+0x38
        }
    }
    {
        // Range: 0x800FF714 -> 0x800FF7C4
        // Local variables
        class xVec3 dest; // r1+0x14
        class xVec3 tan; // r1+0x20
    }
}
// Range: 0x800FF800 -> 0x800FFBB4
void zNPCFollowNPCOnPathControl::UpdateDestination(class zNPCFollowNPCOnPathControl * this /* r30 */) {
    {
        // Range: 0x800FF848 -> 0x800FFB74
        // Local variables
        class xMovePoint * nextMP; // r27
        bool foundRealNext; // r31

        {
            // Range: 0x800FF8A8 -> 0x800FFB00
            // Local variables
            float boundXZ; // f0
            float dist2; // f0

            {
                // Range: 0x800FF8A8 -> 0x800FFAA4
                {
                    // Range: 0x800FF8A8 -> 0x800FF8AC
                    // Local variables
                    float searchDistance; // f27
                    float destNPCPathDist2; // f0
                    class xVec3 destNPCPathPos; // r1+0x28
                    class xMovePointPathPoint destNPCPathPoint; // r1+0x34
                }
            }
        }
    }
}
// Range: 0x800FFBC0 -> 0x800FFCA8
void zNPCFollowNPCOnPathControl::Exit(class zNPCFollowNPCOnPathControl * this /* r30 */) {
}
// Range: 0x800FFCB0 -> 0x800FFF6C
class zNPCStateResult zNPCFollowEntControl::Enter(class zNPCFollowEntControl * this /* r31 */) {
    // References
    // -> class zNPCStateResult NotDone;
}
// Range: 0x800FFF70 -> 0x801004B8
class zNPCStateResult zNPCFollowEntControl::ActionUpdate(class zNPCFollowEntControl * this /* r30 */, float dt /* f31 */) {
    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult Arrived;
    // -> class zNPCStateResult AnimDone;
    // -> class zNPCStateResult TimerDone;
}
// Range: 0x801004C0 -> 0x80100704
void zNPCFollowEntWithFidgetControl::Initialize(class zNPCFollowEntWithFidgetControl * this /* r30 */) {
    // References
    // -> struct {} __vt__20zNPCFollowEntControl;
    // -> struct {} __vt__25zNPCSteeringMoveToControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCMoveToAction;
    // -> class xVec3 m_UnitAxisZ;
    // -> class zFactory factory;
}
// Range: 0x80100710 -> 0x80100780
void zNPCFollowEntWithFidgetControl::Deinitialize(class zNPCFollowEntWithFidgetControl * this /* r30 */) {
    // References
    // -> class zFactory factory;
}
// Range: 0x80100780 -> 0x80100884
class zNPCStateResult zNPCFollowEntWithFidgetControl::Enter(class zNPCFollowEntWithFidgetControl * this /* r28 */) {
}
// signature: zNPCFollowEntWithFidgetControl::ChildDone(zNPCState *, int, zNPCStateResult)
// Range: 0x80100890 -> 0x80100A40
class zNPCStateResult zNPCFollowEntWithFidgetControl::ChildDone(class zNPCFollowEntWithFidgetControl * this /* r30 */) {
    // Local variables
    unsigned int curWeight; // r8
    unsigned int animNumToPush; // r31
    float blendTime; // f0
}
// Range: 0x80100A40 -> 0x80100D4C
class zNPCStateResult zNPCFollowPlayerControl::Enter(class zNPCFollowPlayerControl * this /* r31 */) {
    // Local variables
    class xVec3 dest; // r1+0x14

    // References
    // -> class zNPCStateResult NotDone;
}
// Range: 0x80100D60 -> 0x8010136C
class zNPCStateResult zNPCFollowPlayerControl::ActionUpdate(class zNPCFollowPlayerControl * this /* r30 */, float dt /* f31 */) {
    // Local variables
    class xVec3 drivenByVel; // r1+0x5C

    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult Arrived;
    // -> class zNPCStateResult AnimDone;
    // -> class zNPCStateResult TimerDone;
}
// Range: 0x80101370 -> 0x801016F4
void zNPCFollowPlayerControl::GetDesiredDestination(class zNPCFollowPlayerControl * this /* r28 */, class xVec3 * destPos /* r29 */, bool skipLOSCheck /* r30 */) {
    // Local variables
    class xVec3 npcPos; // r1+0x20
    class xVec3 playerPos; // r1+0x14
    class xVec3 playerToNPC; // r1+0x8
    float dist; // f31

    {
        // Range: 0x801014B8 -> 0x801015A8
        // Local variables
        float newDist; // f0
    }

    // References
    // -> class xVec3 m_UnitAxisZ;
}
// signature: zNPCFollowPlayerControl::AvoidLOS(xVec3 &, const xVec3 &, float)
// Range: 0x80101700 -> 0x80101AF4
void zNPCFollowPlayerControl::AvoidLOS(class zNPCFollowPlayerControl * this /* r27 */, class xVec3 * out /* r28 */, class xVec3 * currentDir /* r29 */) {
    // Local variables
    float avoidAngle; // f31
    class xVec3 playerAt; // r1+0x2C
    float cosLOS; // f0

    {
        // Range: 0x80101844 -> 0x80101AA0
        // Local variables
        float cosRight; // f0
        float cosLeft; // f0
        float playerCrossDotUp; // f0
        class xVec3 playerAtCross; // r1+0x8
        class xVec3 rightBorder; // r1+0x14
        class xVec3 leftBorder; // r1+0x20
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zNPCFollowPlayerControl::AvoidCamera(xVec3 &, const xVec3 &, float)
// Range: 0x80101B00 -> 0x80101F00
void zNPCFollowPlayerControl::AvoidCamera(class xVec3 * out /* r28 */, class xVec3 * currentDir /* r29 */) {
    // Local variables
    float avoidAngle; // f31
    class xVec3 playerPos; // r1+0x2C
    class xVec3 playerToCam; // r1+0x20
    float cosCam; // f0

    {
        // Range: 0x80101C8C -> 0x80101EA4
        // Local variables
        float cosRight; // f0
        float cosLeft; // f0
        class xVec3 rightBorder; // r1+0x8
        class xVec3 leftBorder; // r1+0x14
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x80101F10 -> 0x801022E4
void zNPCFollowPlayerWithFidgetControl::Initialize(class zNPCFollowPlayerWithFidgetControl * this /* r30 */) {
    // References
    // -> struct {} __vt__31zNPCSteeringFollowPlayerControl;
    // -> struct {} __vt__23zNPCFollowPlayerControl;
    // -> struct {} __vt__25zNPCSteeringMoveToControl;
    // -> struct {} __vt__19zNPCSteeringControl;
    // -> struct {} __vt__16zNPCMoveToAction;
    // -> class xVec3 m_UnitAxisZ;
    // -> class zFactory factory;
}
// Range: 0x801022F0 -> 0x80102360
void zNPCFollowPlayerWithFidgetControl::Deinitialize(class zNPCFollowPlayerWithFidgetControl * this /* r30 */) {
    // References
    // -> class zFactory factory;
}
// Range: 0x80102360 -> 0x80102464
class zNPCStateResult zNPCFollowPlayerWithFidgetControl::Enter(class zNPCFollowPlayerWithFidgetControl * this /* r28 */) {
}
// signature: zNPCFollowPlayerWithFidgetControl::ChildDone(zNPCState *, int, zNPCStateResult)
// Range: 0x80102470 -> 0x80102620
class zNPCStateResult zNPCFollowPlayerWithFidgetControl::ChildDone(class zNPCFollowPlayerWithFidgetControl * this /* r30 */) {
    // Local variables
    unsigned int curWeight; // r8
    unsigned int animNumToPush; // r31
    float blendTime; // f0
}
