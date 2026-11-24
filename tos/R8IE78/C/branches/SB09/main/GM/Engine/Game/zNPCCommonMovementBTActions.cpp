/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNPCCommonMovementBTActions.cpp
*/
unsigned int laneNumber; // size: 0x4, address: 0x80753F34
// Range: 0x800E29A0 -> 0x800E2B68
bool zNPCBTPathThruMPsShiftedAction::IsWalkable(class zNPCBTPathThruMPsShiftedAction * this /* r29 */, class xVec3 * start /* r30 */, class xVec3 * end /* r31 */) {
    // Local variables
    class zWallNet * startWN; // r0
    class zWallNet * endWN; // r0
    bool intersect; // r7

    {
        // Range: 0x800E2A40 -> 0x800E2B48
        // Local variables
        int j; // r0
    }
}
// Range: 0x800E2B70 -> 0x800E2C64
class xMovePoint * zNPCBTPathThruMPsShiftedAction::NetworkGetClosestWalkable(class zNPCBTPathThruMPsShiftedAction * this /* r25 */, class xMovePoint * network /* r27 */, class xVec3 * pos /* r26 */) {
    // Local variables
    class xMovePoint * closestWalkable; // r28

    {
        // Range: 0x800E2B8C -> 0x800E2C40
        // Local variables
        int numberOfMPs; // r0

        {
            // Range: 0x800E2BC0 -> 0x800E2C40
            // Local variables
            float closestDist2; // f31
            int movePointsLength; // r0
            class xMovePoint * movePointsArray[200]; // r1+0x8

            {
                // Range: 0x800E2BE8 -> 0x800E2C40
                // Local variables
                int i; // r27

                {
                    // Range: 0x800E2BF4 -> 0x800E2C40
                    // Local variables
                    float dist2; // f1
                }
            }
        }
    }
}
// Range: 0x800E2C70 -> 0x800E2F54
bool zNPCBTPathThruMPsShiftedAction::InitializeMPs(class zNPCBTPathThruMPsShiftedAction * this /* r30 */) {
    // Local variables
    class xVec3 npcPos; // r1+0x54
    unsigned int laneMax; // r11
    float shiftPercent; // r1+0x8
    class xVec3 mpPos; // r1+0x30

    {
        // Range: 0x800E2E30 -> 0x800E2EF0
        // Local variables
        float dotXZ; // f1
        class xVec3 currToNext; // r1+0x3C
        class xVec3 npcToCurr; // r1+0x48
    }

    // References
    // -> static unsigned int NPC_VAR_PATH_SHIFT_PERCENT;
    // -> unsigned int laneNumber;
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
}
// Range: 0x800E2F60 -> 0x800E2F94
void zNPCBTPathThruMPsShiftedAction::Begin(class zNPCBTPathThruMPsShiftedAction * this /* r31 */) {
}
// signature: zNPCBTPathThruMPsShiftedAction::Update(float)
// Range: 0x800E2FA0 -> 0x800E319C
enum eTaskState zNPCBTPathThruMPsShiftedAction::Update(class zNPCBTPathThruMPsShiftedAction * this /* r31 */) {
    // Local variables
    enum eTaskState result; // r0

    {
        // Range: 0x800E2FC8 -> 0x800E3180
        // Local variables
        class xMovePoint * prevMP; // r30

        {
            // Range: 0x800E2FD4 -> 0x800E3080
            // Local variables
            float dotXZ; // f1
            class xVec3 NextToDest; // r1+0x48
            class xVec3 currToNext; // r1+0x54
        }
        {
            // Range: 0x800E3088 -> 0x800E3120
            // Local variables
            class xVec3 mpPos; // r1+0x30
            class xVec3 npcPos; // r1+0x3C
            float shiftPercent; // r1+0x8
        }
    }

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
    // -> static unsigned int NPC_VAR_PATH_SHIFT_PERCENT;
}
// Range: 0x800E31A0 -> 0x800E31A4
void zNPCBTPathThruMPsShiftedAction::End() {
}
// Range: 0x800E31B0 -> 0x800E31BC
void zNPCBTMoveToAction::Initialize() {
}
// signature: zNPCBTMoveToAction::Setup(const Sext::ActionBase *)
// Range: 0x800E31C0 -> 0x800E31D0
void zNPCBTMoveToAction::Setup() {
}
// Range: 0x800E31D0 -> 0x800E3260
void zNPCBTMoveToAction::InitPathFinder(class zNPCBTMoveToAction * this /* r31 */) {
}
// Range: 0x800E32C0 -> 0x800E3448
void zNPCBTMoveToAction::InitMovement(class zNPCBTMoveToAction * this /* r28 */) {
    // Local variables
    bool checkForWallNetEdges; // r29
}
// Range: 0x800E35A0 -> 0x800E3694
void zNPCBTMoveToAction::Begin(class zNPCBTMoveToAction * this /* r31 */) {
}
// Range: 0x800E36A0 -> 0x800E3700
void zNPCBTMoveToAction::SetDestination(class xVec3 & dest /* r31 */) {
}
// Range: 0x800E3700 -> 0x800E3894
bool zNPCBTMoveToAction::IsArrived(class zNPCBTMoveToAction * this /* r31 */) {
    // Local variables
    bool isFinalDest; // r5

    {
        // Range: 0x800E376C -> 0x800E380C
        // Local variables
        float arriveTolerance; // f0
        float bound; // f0
        float dist2; // f0
    }
    {
        // Range: 0x800E380C -> 0x800E3870
        // Local variables
        float arriveTolerance; // f0
        float boundXZ; // f0
        float dist2; // f0
    }
}
// Range: 0x800E38A0 -> 0x800E3A48
bool zNPCBTMoveToAction::IsStuck(class zNPCBTMoveToAction * this /* r31 */) {
    // Local variables
    class xVec3 dest; // r1+0x14

    {
        // Range: 0x800E3934 -> 0x800E39D0
        // Local variables
        float bound; // f0
        float dist2; // f0
    }
    {
        // Range: 0x800E39D0 -> 0x800E3A2C
        // Local variables
        float boundXZ; // f0
        float dist2; // f0
    }
}
// Range: 0x800E3A50 -> 0x800E3B10
bool zNPCBTMoveToAction::EvaluatePath(class zNPCBTMoveToAction * this /* r31 */) {
    // Local variables
    enum eNavLinkActionCode newCode; // r1+0x8
    float npcRadius; // f0
}
// Range: 0x800E3B10 -> 0x800E3BD0
void zNPCBTMoveToAction::UpdateFinalDestination(class zNPCBTMoveToAction * this /* r30 */, class xVec3 & newDest /* r31 */) {
    {
        // Range: 0x800E3B54 -> 0x800E3BB0
        // Local variables
        float npcRadius; // f31
    }
}
// Range: 0x800E3BD0 -> 0x800E3C1C
void zNPCBTMoveToAction::UpdateDestination(class zNPCBTMoveToAction * this /* r31 */) {
    // Local variables
    class xVec3 dest; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
}
// signature: zNPCBTMoveToAction::UpdateMoveTo(float)
// Range: 0x800E3C20 -> 0x800E3CE0
void zNPCBTMoveToAction::UpdateMoveTo(class zNPCBTMoveToAction * this /* r31 */) {
}
// Range: 0x800E3CE0 -> 0x800E3DD0
void zNPCBTMoveToAction::UpdatePathFinding(class zNPCBTMoveToAction * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x800E3D30 -> 0x800E3D74
        // Local variables
        float npcRadius; // f0
    }
}
// Range: 0x800E3DD0 -> 0x800E3F54
enum eTaskState zNPCBTMoveToAction::Update(class zNPCBTMoveToAction * this /* r31 */, float dt /* f31 */) {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x800E3F60 -> 0x800E3FD4
void zNPCBTMoveToAction::End(class zNPCBTMoveToAction * this /* r31 */) {
}
// Range: 0x800E3FE0 -> 0x800E4040
void zNPCBTMoveToAction::Cleanup(class zNPCBTMoveToAction * this /* r31 */) {
}
// Range: 0x800E4040 -> 0x800E406C
void zNPCBTJumpAction::Initialize() {
}
// Range: 0x800E4070 -> 0x800E4240
void zNPCBTJumpAction::Begin(class zNPCBTJumpAction * this /* r31 */) {
    // Local variables
    class Action_NPC_Jump * asset; // r28
    bool checkDestination; // r0
    bool useLaunchVelXZ; // r0
    unsigned int destVar; // r27

    {
        // Range: 0x800E414C -> 0x800E4204
        // Local variables
        class xVec3 dest; // r1+0x8

        {
            // Range: 0x800E4158 -> 0x800E41DC
            // Local variables
            class zVariableEventData eventData; // r1+0x18

            {
                // Range: 0x800E4168 -> 0x800E41C0
                // Local variables
                class xMovePoint * destMP; // r0
            }
        }
    }

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
}
// signature: zNPCBTJumpAction::SwitchAnim(const char *)
// Range: 0x800E4240 -> 0x800E4294
void zNPCBTJumpAction::SwitchAnim(class zNPCBTJumpAction * this /* r31 */) {
}
// Range: 0x800E42A0 -> 0x800E43D0
enum eTaskState zNPCBTJumpAction::Update(class zNPCBTJumpAction * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x800E43D0 -> 0x800E44C4
void zNPCBTFollowPlayerAction::Begin(class zNPCBTFollowPlayerAction * this /* r30 */) {
    // References
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// Range: 0x800E4500 -> 0x800E4540
void zNPCBTFollowPlayerAction::End(class zNPCBTFollowPlayerAction * this /* r31 */) {
}
// Range: 0x800E4540 -> 0x800E4580
void zNPCBTFollowPlayerAction::Cleanup(class zNPCBTFollowPlayerAction * this /* r31 */) {
}
// Range: 0x800E4580 -> 0x800E4674
class zPlayer * zNPCBTFollowPlayerAction::GetPlayer(class zNPCBTFollowPlayerAction * this /* r27 */) {
    // Local variables
    class zPlayer * closestPlayer; // r29
    float minDist2; // f31

    {
        // Range: 0x800E45AC -> 0x800E4650
        // Local variables
        int i; // r28

        {
            // Range: 0x800E45BC -> 0x800E4650
            // Local variables
            float dist2; // f0
            class xVec3 playerPos; // r1+0x8
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800E4680 -> 0x800E46E4
void zNPCBTFollowPlayerAction::UpdateDestination(class zNPCBTFollowPlayerAction * this /* r31 */) {
    {
        // Range: 0x800E4694 -> 0x800E46D0
        // Local variables
        class xVec3 dest; // r1+0x8
    }
}
// Range: 0x800E46F0 -> 0x800E4704
void zNPCBTFollowPlayerAction::UpdatePlayer() {
}
// Range: 0x800E4710 -> 0x800E475C
void zNPCBTEscortAction::UpdateDestination() {
    // Local variables
    class xVec3 dest; // r1+0x8

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800E4760 -> 0x800E48CC
void zNPCBTEscortAction::Begin(class zNPCBTEscortAction * this /* r30 */) {
}
// signature: zNPCBTEscortAction::Update(float)
// Range: 0x800E48E0 -> 0x800E48E4
enum eTaskState zNPCBTEscortAction::Update() {
}
// Range: 0x800E48F0 -> 0x800E49E4
void zNPCBTFleeAction::Begin(class zNPCBTFleeAction * this /* r31 */) {
    // Local variables
    class Action_NPC_Flee * asset; // r3

    // References
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// Range: 0x800E49F0 -> 0x800E4BD0
void zNPCBTFleeAction::UpdateDestination(class zNPCBTFleeAction * this /* r30 */) {
    // Local variables
    class xVec3 dest; // r1+0x20
    class Action_NPC_Flee * asset; // r4

    {
        // Range: 0x800E4A58 -> 0x800E4AA8
        // Local variables
        class xVec3 fleeDir; // r1+0x14
    }
    {
        // Range: 0x800E4AA8 -> 0x800E4BA4
        // Local variables
        class xVec3 playerToNPC; // r1+0x8

        {
            // Range: 0x800E4AAC -> 0x800E4B4C
            // Local variables
            float minDist2; // f31

            {
                // Range: 0x800E4ABC -> 0x800E4B4C
                // Local variables
                int i; // r31

                {
                    // Range: 0x800E4AC8 -> 0x800E4B4C
                    // Local variables
                    float dist2; // f1
                }
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> static unsigned int NPC_VAR_FLEE_DIR;
    // -> static unsigned int NPC_VAR_FLEE_POS;
    // -> class xVec3 m_Null;
}
// Range: 0x800E4BD0 -> 0x800E4CB8
void zNPCBTFlutterAction::Begin(class zNPCBTFlutterAction * this /* r31 */) {
}
// Range: 0x800E4CC0 -> 0x800E4FC4
void zNPCBTFlutterAction::UpdateDestination(class zNPCBTFlutterAction * this /* r29 */) {
    // Local variables
    class Action_NPC_Flutter * asset; // r0
    class xVec3 dest; // r1+0x68
    class zWallNet * wn; // r0

    {
        // Range: 0x800E4D14 -> 0x800E4DDC
        // Local variables
        float randomOffset; // f0
        class xMat4x3 npcMat; // r1+0x78
        float randomDist; // f30
        float randomAngle; // f31
    }
    {
        // Range: 0x800E4DDC -> 0x800E4F90
        // Local variables
        float randomOffset; // f0
        float c; // f1
        float b; // f31
        float a; // f30
        float temp; // f0
        float v; // f0
        float u; // f30
        class xVec3 vert3; // r1+0x44
        class xVec3 vert2; // r1+0x50
        class xVec3 vert1; // r1+0x5C
        int v3; // r7
        int v2; // r6
        int v1; // r4
        class zWallNetTriangle * tri; // r0
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x800E4FD0 -> 0x800E509C
enum eTaskState zNPCBTFlutterAction::Update(class zNPCBTFlutterAction * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x800E50A0 -> 0x800E5104
void zNPCBTFollowProjectileAction::Begin(class zNPCBTFollowProjectileAction * this /* r31 */) {
    // Local variables
    int projectileID; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_CURRENT_PROJECTILE_ID;
}
// Range: 0x800E5110 -> 0x800E517C
void zNPCBTFollowProjectileAction::UpdateDestination(class zNPCBTFollowProjectileAction * this /* r31 */) {
    // Local variables
    class xVec3 dest; // r1+0x8

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x800E5180 -> 0x800E5204
enum eTaskState zNPCBTFollowProjectileAction::Update(class zNPCBTFollowProjectileAction * this /* r31 */, float dt /* f31 */) {
    // Local variables
    int projectileID; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_CURRENT_PROJECTILE_ID;
}
// Range: 0x800E5210 -> 0x800E5408
void zNPCBTPathFollowMPAction::Begin(class zNPCBTPathFollowMPAction * this /* r29 */) {
    // Local variables
    class Action_NPC_PathFollowMP * asset; // r31
    unsigned int destVar; // r4
    enum eNPCMoveType moveType; // r30
    class xMovePoint * mp; // r1+0x8

    {
        // Range: 0x800E5244 -> 0x800E52BC
        // Local variables
        class zVariableEventData eventData; // r1+0x10

        {
            // Range: 0x800E5254 -> 0x800E52A0
            // Local variables
            class NPCFollowPath * followPathData; // r0
        }
    }

    // References
    // -> static unsigned int NPC_VAR_TARGET_MP;
}
// Range: 0x800E5420 -> 0x800E5474
bool zNPCBTPathFollowMPAction::ArrivedAtMP(class zNPCBTPathFollowMPAction * this /* r31 */) {
    // Local variables
    float dist2; // f0
}
// Range: 0x800E5480 -> 0x800E54E0
bool zNPCBTPathFollowMPAction::IsStuck(class zNPCBTPathFollowMPAction * this /* r31 */) {
}
// Range: 0x800E54F0 -> 0x800E5608
enum eTaskState zNPCBTPathFollowMPAction::Update(class zNPCBTPathFollowMPAction * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x800E5610 -> 0x800E5674
void zNPCBTPathFollowMPAction::End(class zNPCBTPathFollowMPAction * this /* r31 */) {
    // Local variables
    class xMovePoint * mp; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_TARGET_MP;
}
// signature: zNPCBTStopAction::Setup(const Sext::ActionBase *)
// Range: 0x800E5680 -> 0x800E5694
void zNPCBTStopAction::Setup() {
    // Local variables
    class Action_NPC_Stop * asset; // r0
}
// Range: 0x800E56A0 -> 0x800E56F8
void zNPCBTStopAction::Begin(class zNPCBTStopAction * this /* r31 */) {
}
// signature: zNPCBTStopAction::Update(float)
// Range: 0x800E5700 -> 0x800E5738
enum eTaskState zNPCBTStopAction::Update() {
}
// signature: zNPCBTFaceFromEventAction::Setup(const Sext::ActionBase *)
// Range: 0x800E5740 -> 0x800E575C
void zNPCBTFaceFromEventAction::Setup() {
    // Local variables
    class Action_NPC_FaceFromEvent * asset; // r0
}
// Range: 0x800E5760 -> 0x800E58D4
void zNPCBTFaceFromEventAction::Begin(class zNPCBTFaceFromEventAction * this /* r31 */) {
    {
        // Range: 0x800E57A8 -> 0x800E5868
        // Local variables
        class zVariableEventData eventData; // r1+0x8

        {
            // Range: 0x800E57F4 -> 0x800E585C
            // Local variables
            class xBase * faceObject; // r0
        }
    }
}
// Range: 0x800E58E0 -> 0x800E58FC
void zNPCBTFaceFromEventAction::End() {
}
// signature: zNPCBTTeleportAction::Setup(const Sext::ActionBase *)
// Range: 0x800E5900 -> 0x800E590C
void zNPCBTTeleportAction::Setup() {
}
// Range: 0x800E5910 -> 0x800E5A3C
enum eTaskState zNPCBTTeleportAction::Update(class zNPCBTTeleportAction * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 currentDest; // r1+0x8

    {
        // Range: 0x800E592C -> 0x800E599C
        // Local variables
        class xMovePoint * destMP; // r0
        class zVariableEventData eventData; // r1+0x18
    }

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
}
// Range: 0x800E5A40 -> 0x800E5BE8
void zNPCBTOrbitAction::Begin(class zNPCBTOrbitAction * this /* r31 */) {
    // Local variables
    class Action_NPC_Orbit * asset; // r3
    class xVec3 toPlayer; // r1+0x8

    // References
    // -> class xVec3 m_UnitAxisX;
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// signature: zNPCBTOrbitAction::UpdateOrbitDirection(float)
// Range: 0x800E5BF0 -> 0x800E5C78
void zNPCBTOrbitAction::UpdateOrbitDirection(class zNPCBTOrbitAction * this /* r31 */) {
}
// Range: 0x800E5C80 -> 0x800E5D70
void zNPCBTOrbitAction::UpdateOrbitDestination(class zNPCBTOrbitAction * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 playerToNPC; // r1+0x20
    class xVec3 newPlayerToNPC; // r1+0x14
    float orbitDirMultiplier; // f0
    class xVec3 dest; // r1+0x8

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_UnitAxisX;
}
// Range: 0x800E5D70 -> 0x800E5DF4
enum eTaskState zNPCBTOrbitAction::Update(class zNPCBTOrbitAction * this /* r31 */, float dt /* f31 */) {
}
// signature: zNPCBTSetFlyingAction::Update(float)
// Range: 0x800E5E00 -> 0x800E5E20
enum eTaskState zNPCBTSetFlyingAction::Update() {
}
// Range: 0x800E5E20 -> 0x800E5FB0
enum eTaskState zNPCBTSnapToFloorAction::Update(class zNPCBTSnapToFloorAction * this /* r29 */, float dt /* f29 */) {
    // Local variables
    class Action_NPC_SnapToFloor * asset; // r0
    float upOffset; // f31
    float downOffset; // f0
    float rayLength; // f30
    class xVec3 & npcPos; // r0
    class hkVector4 hkFromPos; // r1+0x30
    class hkVector4 hkToPos; // r1+0x20
    class zNPCRayHitCollector hitCollector; // r1+0x40

    {
        // Range: 0x800E5EF0 -> 0x800E5F78
        // Local variables
        class xVec3 currentDest; // r1+0x10
    }
}
