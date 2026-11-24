/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCCommonMovementBTActions.cpp
*/
static unsigned int laneNumber; // size: 0x4, address: 0x80822BA8
// Range: 0x801B1190 -> 0x801B1B34
bool zNPCBTPathThruMPsShiftedAction::InitializeMPs(class zNPCBTPathThruMPsShiftedAction * this /* r28 */) {
    // Local variables
    unsigned int laneMax; // r9
    float shiftPercent; // f31

    {
        // Range: 0x801B1368 -> 0x801B1B10
        // Local variables
        class xVec3 mpPos; // r1+0x130
        class xVec3 prevPos; // r1+0x13C
        class xMovePoint * next2; // r1+0x8
        class xMovePoint * next; // r1+0xC
    }

    // References
    // -> class xVec3 m_Null;
    // -> static unsigned int NPC_VAR_PATH_SHIFT_PERCENT;
    // -> static unsigned int laneNumber;
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
}
// Range: 0x801B1B40 -> 0x801B1FBC
void zNPCBTPathThruMPsShiftedAction::Begin(class zNPCBTPathThruMPsShiftedAction * this /* r31 */) {
    // References
    // -> struct {} __vt__31zNPCSearchMapLinkCostCalculator;
}
// signature: zNPCBTPathThruMPsShiftedAction::Update(float)
// Range: 0x801B1FC0 -> 0x801B20E8
enum eTaskState zNPCBTPathThruMPsShiftedAction::Update(class zNPCBTPathThruMPsShiftedAction * this /* r30 */) {
    // Local variables
    enum eTaskState result; // r0

    {
        // Range: 0x801B1FFC -> 0x801B20CC
        // Local variables
        class xMovePoint * next; // r1+0xC

        {
            // Range: 0x801B2018 -> 0x801B20A8
            // Local variables
            class xVec3 mpPos; // r1+0x1C
            class xVec3 prevPos; // r1+0x28
            float shiftPercent; // r1+0x8
        }
    }

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
    // -> static unsigned int NPC_VAR_PATH_SHIFT_PERCENT;
}
// Range: 0x801B20F0 -> 0x801B214C
void zNPCBTPathThruMPsShiftedAction::End(class zNPCBTPathThruMPsShiftedAction * this /* r31 */) {
}
// Range: 0x801B2150 -> 0x801B215C
void zNPCBTMoveToAction::Initialize() {
}
// signature: zNPCBTMoveToAction::Setup(const Sext::ActionBase *)
// Range: 0x801B2160 -> 0x801B2170
void zNPCBTMoveToAction::Setup() {
}
// Range: 0x801B2170 -> 0x801B25E0
void zNPCBTMoveToAction::Begin(class zNPCBTMoveToAction * this /* r31 */) {
    // References
    // -> struct {} __vt__31zNPCSearchMapLinkCostCalculator;
}
// Range: 0x801B25E0 -> 0x801B2844
bool zNPCBTMoveToAction::IsArrived() {
    // Local variables
    bool isFinalDest; // r5

    {
        // Range: 0x801B2648 -> 0x801B2774
        // Local variables
        float arriveTolerance; // f0
        float bound; // f0
        float dist2; // f0
    }
    {
        // Range: 0x801B2774 -> 0x801B2838
        // Local variables
        float arriveTolerance; // f0
        float boundXZ; // f0
        float dist2; // f0
    }
}
// Range: 0x801B2850 -> 0x801B2984
void zNPCBTMoveToAction::UpdateDestination(class zNPCBTMoveToAction * this /* r31 */) {
    // Local variables
    class xVec3 dest; // r1+0x14

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
}
// Range: 0x801B2990 -> 0x801B2FAC
enum eTaskState zNPCBTMoveToAction::Update(class zNPCBTMoveToAction * this /* r31 */, float dt /* f31 */) {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801B2FD0 -> 0x801B303C
void zNPCBTMoveToAction::Cleanup(class zNPCBTMoveToAction * this /* r31 */) {
}
// Range: 0x801B3040 -> 0x801B306C
void zNPCBTJumpAction::Initialize() {
}
// Range: 0x801B3070 -> 0x801B3520
void zNPCBTJumpAction::Begin(class zNPCBTJumpAction * this /* r27 */) {
    // Local variables
    class Action_NPC_Jump * asset; // r29
    bool checkDestination; // r0
    bool useLaunchVelXZ; // r0
    unsigned int destVar; // r28

    {
        // Range: 0x801B3304 -> 0x801B34E4
        // Local variables
        class xVec3 dest; // r1+0x20

        {
            // Range: 0x801B3310 -> 0x801B345C
            // Local variables
            class zVariableEventData eventData; // r1+0x30

            {
                // Range: 0x801B3320 -> 0x801B33EC
                // Local variables
                class xMovePoint * destMP; // r0
            }
        }
    }

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
}
// Range: 0x801B3520 -> 0x801B3A04
enum eTaskState zNPCBTJumpAction::Update(class zNPCBTJumpAction * this /* r31 */, float dt /* f31 */) {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801B3A20 -> 0x801B3EE8
void zNPCBTFollowPlayerAction::Begin(class zNPCBTFollowPlayerAction * this /* r31 */) {
    // References
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
    // -> struct {} __vt__31zNPCSearchMapLinkCostCalculator;
}
// Range: 0x801B3F20 -> 0x801B3F90
void zNPCBTFollowPlayerAction::End(class zNPCBTFollowPlayerAction * this /* r31 */) {
}
// Range: 0x801B3F90 -> 0x801B4010
void zNPCBTFollowPlayerAction::Cleanup(class zNPCBTFollowPlayerAction * this /* r31 */) {
}
// Range: 0x801B4010 -> 0x801B413C
class zPlayer * zNPCBTFollowPlayerAction::GetPlayer(class zNPCBTFollowPlayerAction * this /* r27 */) {
    // Local variables
    class zPlayer * closestPlayer; // r31
    float minDist2; // f31

    {
        // Range: 0x801B4050 -> 0x801B4104
        // Local variables
        int i; // r28

        {
            // Range: 0x801B4060 -> 0x801B4104
            // Local variables
            float dist2; // f0
            class xVec3 playerPos; // r1+0x14
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x801B4140 -> 0x801B423C
void zNPCBTFollowPlayerAction::UpdateDestination(class zNPCBTFollowPlayerAction * this /* r31 */) {
    {
        // Range: 0x801B4154 -> 0x801B4228
        // Local variables
        class xVec3 dest; // r1+0x8
    }
}
// Range: 0x801B4240 -> 0x801B42A4
void zNPCBTFollowPlayerAction::UpdatePlayer(class zNPCBTFollowPlayerAction * this /* r31 */) {
}
// Range: 0x801B42B0 -> 0x801B4798
void zNPCBTFleeAction::Begin(class zNPCBTFleeAction * this /* r31 */) {
    // Local variables
    class Action_NPC_Flee * asset; // r3

    // References
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
    // -> struct {} __vt__31zNPCSearchMapLinkCostCalculator;
}
// Range: 0x801B47A0 -> 0x801B4BFC
void zNPCBTFleeAction::UpdateDestination(class zNPCBTFleeAction * this /* r31 */) {
    // Local variables
    class xVec3 dest; // r1+0x38
    class Action_NPC_Flee * asset; // r7

    {
        // Range: 0x801B4864 -> 0x801B4938
        // Local variables
        class xVec3 fleeDir; // r1+0x2C
    }
    {
        // Range: 0x801B4938 -> 0x801B4B30
        // Local variables
        class xVec3 playerToNPC; // r1+0x20

        {
            // Range: 0x801B493C -> 0x801B49F4
            // Local variables
            float minDist2; // f31

            {
                // Range: 0x801B494C -> 0x801B49E0
                // Local variables
                int i; // r28

                {
                    // Range: 0x801B4960 -> 0x801B49E0
                    // Local variables
                    float dist2; // f0
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
// Range: 0x801B4C00 -> 0x801B5078
void zNPCBTFlutterAction::Begin(class zNPCBTFlutterAction * this /* r31 */) {
    // References
    // -> struct {} __vt__31zNPCSearchMapLinkCostCalculator;
}
// Range: 0x801B5080 -> 0x801B561C
void zNPCBTFlutterAction::UpdateDestination(class zNPCBTFlutterAction * this /* r29 */) {
    // Local variables
    class Action_NPC_Flutter * asset; // r0
    class xVec3 dest; // r1+0xA4
    class zWallNet * wn; // r0

    {
        // Range: 0x801B50D0 -> 0x801B5230
        // Local variables
        float randomOffset; // f0
        class xMat4x3 npcMat; // r1+0xB0
        float randomDist; // f0
        float randomAngle; // f31
    }
    {
        // Range: 0x801B5230 -> 0x801B5548
        // Local variables
        float randomOffset; // f0
        float c; // f3
        float b; // f10
        float a; // f9
        float temp; // f0
        float v; // f0
        float u; // f30
        class xVec3 vert3; // r1+0x80
        class xVec3 vert2; // r1+0x8C
        class xVec3 vert1; // r1+0x98
        int v3; // r8
        int v2; // r6
        int v1; // r7
        class zWallNetTriangle * tri; // r0
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801B5620 -> 0x801B5BD4
enum eTaskState zNPCBTFlutterAction::Update(class zNPCBTFlutterAction * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x801B5BE0 -> 0x801B60B8
void zNPCBTFollowProjectileAction::Begin(class zNPCBTFollowProjectileAction * this /* r31 */) {
    // Local variables
    int projectileID; // r3

    // References
    // -> struct {} __vt__31zNPCSearchMapLinkCostCalculator;
    // -> static unsigned int NPC_VAR_CURRENT_PROJECTILE_ID;
}
// Range: 0x801B60C0 -> 0x801B61D4
void zNPCBTFollowProjectileAction::UpdateDestination(class zNPCBTFollowProjectileAction * this /* r31 */) {
    // Local variables
    class xVec3 dest; // r1+0x8

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801B61E0 -> 0x801B6878
enum eTaskState zNPCBTFollowProjectileAction::Update(class zNPCBTFollowProjectileAction * this /* r31 */, float dt /* f31 */) {
    // Local variables
    int projectileID; // r3

    // References
    // -> class xVec3 m_Null;
    // -> static unsigned int NPC_VAR_CURRENT_PROJECTILE_ID;
}
// Range: 0x801B6880 -> 0x801B709C
void zNPCBTPathFollowMPAction::Begin(class zNPCBTPathFollowMPAction * this /* r28 */) {
    // Local variables
    class Action_NPC_PathFollowMP * asset; // r31
    unsigned int destVar; // r4
    enum eNPCMoveType moveType; // r30
    class xMovePoint * mp; // r29

    {
        // Range: 0x801B68B4 -> 0x801B69BC
        // Local variables
        class zVariableEventData eventData; // r1+0x58

        {
            // Range: 0x801B68C8 -> 0x801B6978
            // Local variables
            class NPCFollowPath * followPathData; // r0
        }
    }

    // References
    // -> static unsigned int NPC_VAR_TARGET_MP;
}
// Range: 0x801B70B0 -> 0x801B760C
enum eTaskState zNPCBTPathFollowMPAction::Update(class zNPCBTPathFollowMPAction * this /* r30 */, float dt /* f31 */) {
}
// Range: 0x801B7610 -> 0x801B76D0
void zNPCBTPathFollowMPAction::End(class zNPCBTPathFollowMPAction * this /* r30 */) {
    // Local variables
    class xMovePoint * mp; // r30

    // References
    // -> static unsigned int NPC_VAR_TARGET_MP;
}
// signature: zNPCBTStopAction::Setup(const Sext::ActionBase *)
// Range: 0x801B76E0 -> 0x801B76F4
void zNPCBTStopAction::Setup() {
    // Local variables
    class Action_NPC_Stop * asset; // r0
}
// Range: 0x801B7700 -> 0x801B7740
void zNPCBTStopAction::Begin() {
}
// signature: zNPCBTStopAction::Update(float)
// Range: 0x801B7740 -> 0x801B7778
enum eTaskState zNPCBTStopAction::Update() {
}
// signature: zNPCBTFaceFromEventAction::Setup(const Sext::ActionBase *)
// Range: 0x801B7790 -> 0x801B77AC
void zNPCBTFaceFromEventAction::Setup() {
    // Local variables
    class Action_NPC_FaceFromEvent * asset; // r0
}
// Range: 0x801B77B0 -> 0x801B7AE8
void zNPCBTFaceFromEventAction::Begin(class zNPCBTFaceFromEventAction * this /* r31 */) {
    {
        // Range: 0x801B7808 -> 0x801B7944
        // Local variables
        class zVariableEventData eventData; // r1+0x8

        {
            // Range: 0x801B78BC -> 0x801B7934
            // Local variables
            class xBase * faceObject; // r0
        }
    }
}
// Range: 0x801B7B00 -> 0x801B7B1C
void zNPCBTFaceFromEventAction::End() {
}
// signature: zNPCBTTeleportAction::Setup(const Sext::ActionBase *)
// Range: 0x801B7B20 -> 0x801B7B2C
void zNPCBTTeleportAction::Setup() {
}
// Range: 0x801B7B30 -> 0x801B7C6C
void zNPCBTTeleportAction::Begin() {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x801B7C70 -> 0x801B7FA8
enum eTaskState zNPCBTTeleportAction::Update(class zNPCBTTeleportAction * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 currentDest; // r1+0x14

    {
        // Range: 0x801B7C90 -> 0x801B7D74
        // Local variables
        class xMovePoint * destMP; // r0
        class zVariableEventData eventData; // r1+0x20
    }

    // References
    // -> class xVec3 m_Null;
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
}
// Range: 0x801B7FB0 -> 0x801B8070
void zNPCBTTeleportAction::End() {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x801B8070 -> 0x801B885C
void zNPCBTOrbitAction::Begin(class zNPCBTOrbitAction * this /* r31 */) {
    // Local variables
    class Action_NPC_Orbit * asset; // r3
    class xVec3 toPlayer; // r1+0x20

    // References
    // -> class xVec3 m_UnitAxisX;
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
    // -> struct {} __vt__31zNPCSearchMapLinkCostCalculator;
}
// Range: 0x801B8860 -> 0x801B8BFC
enum eTaskState zNPCBTOrbitAction::Update(class zNPCBTOrbitAction * this /* r31 */, float dt /* f31 */) {
    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_UnitAxisX;
}
// signature: zNPCBTSetFlyingAction::Update(float)
// Range: 0x801B8C00 -> 0x801B8C20
enum eTaskState zNPCBTSetFlyingAction::Update() {
}
