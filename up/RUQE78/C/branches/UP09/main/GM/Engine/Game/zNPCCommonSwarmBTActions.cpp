/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCCommonSwarmBTActions.cpp
*/
// signature: zNPCBTSwarmMoveToAction::Setup(const Sext::ActionBase *)
// Range: 0x801B8C20 -> 0x801B8C34
void zNPCBTSwarmMoveToAction::Setup() {
}
// Range: 0x801B8C40 -> 0x801B92B0
void zNPCBTSwarmMoveToAction::Begin(class zNPCBTSwarmMoveToAction * this /* r16 */) {
    // Local variables
    class Action_NPC_SwarmMoveTo * asset; // r19
    int numChildren; // r18
    class xVec3 dest; // r1+0x14

    {
        // Range: 0x801B8D94 -> 0x801B8D94
        // Local variables
        int i; // r17

        {
            // Range: 0x801B8D94 -> 0x801B8D94
            // Local variables
            class zNPCEntity * npcEnt; // r22
        }
    }

    // References
    // -> class zFactory factory;
    // -> struct {} __vt__25zNPCSteeringMoveToControl;
    // -> class xVec3 m_UnitAxisZ;
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
}
// signature: zNPCBTSwarmMoveToAction::IsArrived(const zNPCEntity *, const xVec3 *)
// Range: 0x801B92C0 -> 0x801B935C
bool zNPCBTSwarmMoveToAction::IsArrived() {
    // Local variables
    float dist2; // f0
    float boundXZ; // f0
}
// signature: zNPCBTSwarmMoveToAction::IsStuck(const zNPCEntity *, const zNPCBTStuckRangeMultiplier *, const xVec3 *)
// Range: 0x801B9360 -> 0x801B9534
bool zNPCBTSwarmMoveToAction::IsStuck() {
    {
        // Range: 0x801B9364 -> 0x801B9480
        // Local variables
        float bound; // f0
        float dist2; // f0
    }
    {
        // Range: 0x801B9480 -> 0x801B952C
        // Local variables
        float boundXZ; // f0
        float dist2; // f0
    }
}
// Range: 0x801B9540 -> 0x801B973C
enum eTaskState zNPCBTSwarmMoveToAction::Update(class zNPCBTSwarmMoveToAction * this /* r30 */, float dt /* f30 */) {
    // Local variables
    bool allArrived; // r27
    int numberOfChildren; // r0

    {
        // Range: 0x801B959C -> 0x801B96F8
        // Local variables
        int i; // r31

        {
            // Range: 0x801B959C -> 0x801B96F8
            // Local variables
            class zNPCEntity * npcEnt; // r27
        }
    }
}
// Range: 0x801B9740 -> 0x801B982C
void zNPCBTSwarmMoveToAction::Cleanup(class zNPCBTSwarmMoveToAction * this /* r28 */) {
    {
        // Range: 0x801B9760 -> 0x801B980C
        // Local variables
        int numChildren; // r30

        {
            // Range: 0x801B97A4 -> 0x801B97D8
            // Local variables
            int i; // r29
        }
    }
}
// Range: 0x801B9840 -> 0x801B9A38
void zNPCBTSwarmWanderAction::Begin(class zNPCBTSwarmWanderAction * this /* r31 */) {
    // Local variables
    int numberOfChildren; // r0

    {
        // Range: 0x801B987C -> 0x801B98B4
        // Local variables
        int i; // r28

        {
            // Range: 0x801B987C -> 0x801B98B4
            // Local variables
            class zNPCEntity * npcEnt; // r0
        }
    }
}
// Range: 0x801B9A40 -> 0x801B9ED4
class xVec3 zNPCBTSwarmWanderAction::GetWanderDestination(class zNPCEntity * npcEnt /* r30 */) {
    // Local variables
    class xVec3 dest; // r1+0xA4

    {
        // Range: 0x801B9A8C -> 0x801B9BB4
        // Local variables
        class xMat4x3 npcMat; // r1+0xB0
        float randomDist; // f0
        float randomAngle; // f30
    }
    {
        // Range: 0x801B9BB4 -> 0x801B9E90
        // Local variables
        float c; // f3
        float b; // f10
        float a; // f9
        float temp; // f0
        float v; // f0
        float u; // f30
        class xVec3 vert3; // r1+0x80
        class xVec3 vert2; // r1+0x8C
        class xVec3 vert1; // r1+0x98
        int v3; // r7
        int v2; // r5
        int v1; // r0
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCBTSwarmWanderAction::Update(float)
// Range: 0x801B9EE0 -> 0x801BA008
enum eTaskState zNPCBTSwarmWanderAction::Update(class zNPCBTSwarmWanderAction * this /* r27 */) {
    // Local variables
    int numChildren; // r0

    {
        // Range: 0x801B9F28 -> 0x801B9FE0
        // Local variables
        int i; // r29

        {
            // Range: 0x801B9F28 -> 0x801B9FE0
            // Local variables
            class zNPCEntity * npcEnt; // r28
        }
    }
}
// Range: 0x801BA010 -> 0x801BA380
void zNPCBTSwarmFlockAction::Begin(class zNPCBTSwarmFlockAction * this /* r31 */) {
    // Local variables
    int numberOfChildren; // r0

    {
        // Range: 0x801BA2F0 -> 0x801BA334
        // Local variables
        int i; // r26

        {
            // Range: 0x801BA2F0 -> 0x801BA334
            // Local variables
            class zNPCEntity * npcEnt; // r0
        }
    }
}
// signature: zNPCBTSwarmFlockAction::Update(float)
// Range: 0x801BA380 -> 0x801BA534
enum eTaskState zNPCBTSwarmFlockAction::Update(class zNPCBTSwarmFlockAction * this /* r31 */) {
    // Local variables
    bool allArrived; // r25
    int numberOfChildren; // r0

    {
        // Range: 0x801BA3D4 -> 0x801BA500
        // Local variables
        int i; // r24

        {
            // Range: 0x801BA3D4 -> 0x801BA500
            // Local variables
            class zNPCEntity * npcEnt; // r23
        }
    }
}
// signature: zNPCBTSwarmFlockAction::GetFlockDestination(const zNPCEntity *, xMovePoint *, xMovePoint *)
// Range: 0x801BA540 -> 0x801BA994
class xVec3 zNPCBTSwarmFlockAction::GetFlockDestination(class zNPCEntity * npcEnt /* r30 */) {
    // Local variables
    class xVec3 dest; // r1+0x5C
    class xVec3 prevToCur; // r1+0x50
    float mpDist; // f0
    float randomAngle; // f29
    class xVec3 prevToCurRotated; // r1+0x44
    float minDist; // f29
    float maxDist; // f30
    float cosAngle; // f0
    class xVec3 maxDest; // r1+0x38
    class xVec3 npcPosProj; // r1+0x2C
    class xVec3 prevMPToNPCProj; // r1+0x20
    float traveled; // f0
    float curDist; // f0
    float randomDist; // f0

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_Null;
}
// signature: zNPCBTSwarmFlockAction::IsDestAtMP(const xVec3 *, xMovePoint *, xMovePoint *)
// Range: 0x801BA9A0 -> 0x801BABE0
bool zNPCBTSwarmFlockAction::IsDestAtMP() {
    // Local variables
    class xVec3 curToPrevMP; // r1+0x14
    float dist; // f0
    class xVec3 curToDest; // r1+0x8
    float cosAngle; // f0
}
// Range: 0x801BABE0 -> 0x801BAD4C
void zNPCBTSwarmFlutterAction::Begin(class zNPCBTSwarmFlutterAction * this /* r27 */) {
    // Local variables
    int numberOfChildren; // r29

    {
        // Range: 0x801BAC30 -> 0x801BAD10
        // Local variables
        int i; // r28

        {
            // Range: 0x801BAC30 -> 0x801BAD10
            // Local variables
            class zNPCEntity * npcEnt; // r0
        }
    }
}
// Range: 0x801BAD50 -> 0x801BB250
class xVec3 zNPCBTSwarmFlutterAction::GetFlutterDestination(class zNPCBTSwarmFlutterAction * this /* r29 */, class zNPCEntity * npcEnt /* r27 */) {
    // Local variables
    class Action_NPC_SwarmFlutter * asset; // r0
    class xVec3 dest; // r1+0xA4
    class zWallNet * wn; // r0

    {
        // Range: 0x801BADA0 -> 0x801BAEF8
        // Local variables
        float randomOffset; // f0
        class xMat4x3 npcMat; // r1+0xB0
        float randomDist; // f0
        float randomAngle; // f31
    }
    {
        // Range: 0x801BAEF8 -> 0x801BB210
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
// Range: 0x801BB250 -> 0x801BB80C
enum eTaskState zNPCBTSwarmFlutterAction::Update(class zNPCBTSwarmFlutterAction * this /* r24 */, float dt /* f21 */) {
    // Local variables
    class Action_NPC_SwarmFlutter * asset; // r27
    int numChildren; // r0

    {
        // Range: 0x801BB304 -> 0x801BB784
        // Local variables
        int i; // r26

        {
            // Range: 0x801BB304 -> 0x801BB784
            // Local variables
            class zNPCEntity * npcEnt; // r25

            {
                // Range: 0x801BB304 -> 0x801BB784
                // Local variables
                float prob; // f0
            }
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801BB810 -> 0x801BB854
void zNPCBTSwarmFlutterAction::Cleanup(class zNPCBTSwarmFlutterAction * this /* r31 */) {
}
// signature: zNPCBTWriteSwarmHidePointAction::Update(float)
// Range: 0x801BB860 -> 0x801BB948
enum eTaskState zNPCBTWriteSwarmHidePointAction::Update() {
    // Local variables
    class xVec3 hidePoint; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
}
// signature: zNPCBTSwarmBugCollectedAction::Setup(const Sext::ActionBase *)
// Range: 0x801BB970 -> 0x801BB984
void zNPCBTSwarmBugCollectedAction::Setup() {
    // Local variables
    class Action_NPC_Swarm_BugCollected * asset; // r0
}
// signature: zNPCBTSwarmBugCollectedAction::Update(float)
// Range: 0x801BB990 -> 0x801BB9F4
enum eTaskState zNPCBTSwarmBugCollectedAction::Update(class zNPCBTSwarmBugCollectedAction * this /* r6 */) {
    // References
    // -> class zPlayerInventory inventory;
}
// signature: zNPCBTSwarmBadgeCollectedAction::Update(float)
// Range: 0x801BBA00 -> 0x801BBBB4
enum eTaskState zNPCBTSwarmBadgeCollectedAction::Update(class zNPCBTSwarmBadgeCollectedAction * this /* r25 */) {
    // Local variables
    class Action_NPC_Swarm_BadgeCollected * asset; // r22
    int badgeNum; // r3
    int gold; // r29
    int silver; // r28
    int bronze; // r27
    int health; // r26
    int numChildren; // r0
    class zNPCGenericSwarm * swarmBase; // r25
    class xVec3 offset; // r1+0x20

    {
        // Range: 0x801BBAB0 -> 0x801BBB8C
        // Local variables
        int i; // r24

        {
            // Range: 0x801BBAB8 -> 0x801BBB8C
            // Local variables
            class xVec3 pos; // r1+0x14
            class zNPCEntity * npcEnt; // r0
        }
    }

    // References
    // -> class zPlayerInventory inventory;
}
// signature: zNPCBTSwarmResetKilledMembersAction::Update(float)
// Range: 0x801BBBC0 -> 0x801BBBF0
enum eTaskState zNPCBTSwarmResetKilledMembersAction::Update() {
}
// signature: zNPCBTSwarmPathFollowMPAction::Setup(const Sext::ActionBase *)
// Range: 0x801BBBF0 -> 0x801BBC18
void zNPCBTSwarmPathFollowMPAction::Setup() {
    // Local variables
    class Action_NPC_SwarmPathFollowMP * asset; // r0
}
// Range: 0x801BBC20 -> 0x801BC464
void zNPCBTSwarmPathFollowMPAction::Begin(class zNPCBTSwarmPathFollowMPAction * this /* r16 */) {
    // Local variables
    int numChildren; // r20
    class xMovePoint * mp; // r19

    {
        // Range: 0x801BBD48 -> 0x801BBD48
        // Local variables
        int i; // r18

        {
            // Range: 0x801BBD48 -> 0x801BBD48
            // Local variables
            class zNPCEntity * npcEnt; // r17
        }
    }

    // References
    // -> class zFactory factory;
    // -> struct {} __vt__19zSteeringPathSpline;
    // -> struct {} __vt__17zSteeringPathLine;
    // -> struct {} __vt__23zSteeringPathMovePoints;
    // -> struct {} __vt__29zNPCSteeringFollowPathControl;
    // -> class xVec3 m_UnitAxisZ;
    // -> static unsigned int NPC_VAR_TARGET_MP;
}
// signature: zNPCBTSwarmPathFollowMPAction::Update(float)
// Range: 0x801BC470 -> 0x801BC8A0
enum eTaskState zNPCBTSwarmPathFollowMPAction::Update(class zNPCBTSwarmPathFollowMPAction * this /* r27 */) {
    // Local variables
    int numChildren; // r0

    {
        // Range: 0x801BC4E4 -> 0x801BC848
        // Local variables
        int i; // r28

        {
            // Range: 0x801BC4E4 -> 0x801BC848
            // Local variables
            class zNPCEntity * npcEnt; // r0
        }
    }
}
// Range: 0x801BC8A0 -> 0x801BC954
void zNPCBTSwarmPathFollowMPAction::End() {
    {
        // Range: 0x801BC8B4 -> 0x801BC93C
        // Local variables
        class xMovePoint * mp; // r30
    }

    // References
    // -> static unsigned int NPC_VAR_TARGET_MP;
}
// Range: 0x801BC960 -> 0x801BCA4C
void zNPCBTSwarmPathFollowMPAction::Cleanup(class zNPCBTSwarmPathFollowMPAction * this /* r28 */) {
    {
        // Range: 0x801BC980 -> 0x801BCA2C
        // Local variables
        int numChildren; // r30

        {
            // Range: 0x801BC9C4 -> 0x801BC9F8
            // Local variables
            int i; // r29
        }
    }
}
// Range: 0x801BCA50 -> 0x801BD070
void zNPCBTSwarmPathFollowCircleAction::Begin(class zNPCBTSwarmPathFollowCircleAction * this /* r19 */) {
    // Local variables
    class Action_NPC_SwarmPathFollowCircle * asset; // r23
    int numChildren; // r22
    class zNPCEntity * first; // r0
    class xVec3 center; // r1+0x8

    {
        // Range: 0x801BCB58 -> 0x801BCB58
        // Local variables
        int i; // r21

        {
            // Range: 0x801BCB58 -> 0x801BCB58
            // Local variables
            class zNPCEntity * npcEnt; // r20
        }
    }

    // References
    // -> class zFactory factory;
    // -> struct {} __vt__19zSteeringPathCircle;
    // -> struct {} __vt__29zNPCSteeringFollowPathControl;
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisY;
}
// signature: zNPCBTSwarmPathFollowCircleAction::Update(float)
// Range: 0x801BD070 -> 0x801BD108
enum eTaskState zNPCBTSwarmPathFollowCircleAction::Update(class zNPCBTSwarmPathFollowCircleAction * this /* r29 */) {
    // Local variables
    int numChildren; // r0

    {
        // Range: 0x801BD0BC -> 0x801BD0DC
        // Local variables
        int i; // r30
    }
}
// Range: 0x801BD110 -> 0x801BD1FC
void zNPCBTSwarmPathFollowCircleAction::Cleanup(class zNPCBTSwarmPathFollowCircleAction * this /* r28 */) {
    {
        // Range: 0x801BD130 -> 0x801BD1DC
        // Local variables
        int numChildren; // r30

        {
            // Range: 0x801BD174 -> 0x801BD1A8
            // Local variables
            int i; // r29
        }
    }
}
