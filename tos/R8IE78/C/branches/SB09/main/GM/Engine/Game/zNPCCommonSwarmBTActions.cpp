/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNPCCommonSwarmBTActions.cpp
*/
// signature: zNPCBTSwarmMoveToAction::Setup(const Sext::ActionBase *)
// Range: 0x800E5FE0 -> 0x800E5FF4
void zNPCBTSwarmMoveToAction::Setup() {
}
// Range: 0x800E6000 -> 0x800E63C0
void zNPCBTSwarmMoveToAction::Begin(class zNPCBTSwarmMoveToAction * this /* r15 */) {
    // Local variables
    class Action_NPC_SwarmMoveTo * asset; // r18
    int numChildren; // r17
    class xVec3 dest; // r1+0x8

    {
        // Range: 0x800E60C4 -> 0x800E6324
        // Local variables
        int i; // r16

        {
            // Range: 0x800E60C4 -> 0x800E6324
            // Local variables
            class zNPCEntity * npcEnt; // r19
        }
    }

    // References
    // -> class Factory factory;
    // -> struct {} __vt__25zNPCSteeringMoveToControl;
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
}
// signature: zNPCBTSwarmMoveToAction::IsArrived(const zNPCEntity *, const xVec3 *)
// Range: 0x800E6430 -> 0x800E64A8
bool zNPCBTSwarmMoveToAction::IsArrived(class zNPCBTSwarmMoveToAction * this /* r30 */, class zNPCEntity * npcEnt /* r31 */) {
    // Local variables
    float dist2; // f0
    float boundXZ; // f0
}
// signature: zNPCBTSwarmMoveToAction::IsStuck(const zNPCEntity *, const zNPCBTStuckRangeMultiplier *, const xVec3 *)
// Range: 0x800E64B0 -> 0x800E65D0
bool zNPCBTSwarmMoveToAction::IsStuck(class zNPCEntity * npcEnt /* r30 */, class zNPCBTStuckRangeMultiplier * stuckRangeMultiplier /* r31 */) {
    {
        // Range: 0x800E64D4 -> 0x800E6560
        // Local variables
        float bound; // f0
        float dist2; // f0
    }
    {
        // Range: 0x800E6560 -> 0x800E65B0
        // Local variables
        float boundXZ; // f0
        float dist2; // f0
    }
}
// Range: 0x800E65D0 -> 0x800E6718
enum eTaskState zNPCBTSwarmMoveToAction::Update(class zNPCBTSwarmMoveToAction * this /* r27 */, float dt /* f31 */) {
    // Local variables
    bool allArrived; // r29
    int numberOfChildren; // r0

    {
        // Range: 0x800E6620 -> 0x800E66F0
        // Local variables
        int i; // r28

        {
            // Range: 0x800E6620 -> 0x800E66F0
            // Local variables
            class zNPCEntity * npcEnt; // r29
        }
    }
}
// Range: 0x800E6720 -> 0x800E67F4
void zNPCBTSwarmMoveToAction::Cleanup(class zNPCBTSwarmMoveToAction * this /* r28 */) {
    {
        // Range: 0x800E6734 -> 0x800E67E0
        // Local variables
        int numChildren; // r30

        {
            // Range: 0x800E6778 -> 0x800E67B8
            // Local variables
            int i; // r29
        }
    }
}
// Range: 0x800E6800 -> 0x800E686C
void zNPCBTSwarmMoveToAction::SetMaxSpeed(class zNPCBTSwarmMoveToAction * this /* r31 */, float maxSpeed /* f31 */) {
    // Local variables
    int numberOfChildren; // r0

    {
        // Range: 0x800E6830 -> 0x800E6854
        // Local variables
        int i; // r0
    }
}
// Range: 0x800E6870 -> 0x800E68D4
void zNPCBTSwarmMoveToAction::SetSeekToDest(class zNPCBTSwarmMoveToAction * this /* r31 */) {
    // Local variables
    int numberOfChildren; // r0

    {
        // Range: 0x800E6898 -> 0x800E68C0
        // Local variables
        int i; // r0
    }
}
// Range: 0x800E68E0 -> 0x800E6990
void zNPCBTSwarmWanderAction::Begin(class zNPCBTSwarmWanderAction * this /* r29 */) {
    // Local variables
    int numberOfChildren; // r0

    {
        // Range: 0x800E6914 -> 0x800E6960
        // Local variables
        int i; // r30

        {
            // Range: 0x800E6914 -> 0x800E6960
            // Local variables
            class zNPCEntity * npcEnt; // r0
        }
    }
}
// Range: 0x800E69B0 -> 0x800E6C68
class xVec3 zNPCBTSwarmWanderAction::GetWanderDestination(class zNPCEntity * npcEnt /* r28 */) {
    // Local variables
    class xVec3 dest; // r1+0x68

    {
        // Range: 0x800E6A04 -> 0x800E6AA4
        // Local variables
        class xMat4x3 npcMat; // r1+0x78
        float randomDist; // f30
        float randomAngle; // f31
    }
    {
        // Range: 0x800E6AA4 -> 0x800E6C28
        // Local variables
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
        int v1; // r0
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCBTSwarmWanderAction::Update(float)
// Range: 0x800E6C70 -> 0x800E6D54
enum eTaskState zNPCBTSwarmWanderAction::Update(class zNPCBTSwarmWanderAction * this /* r27 */) {
    // Local variables
    int numChildren; // r0

    {
        // Range: 0x800E6CB4 -> 0x800E6D3C
        // Local variables
        int i; // r29

        {
            // Range: 0x800E6CB4 -> 0x800E6D3C
            // Local variables
            class xVec3 * dest; // r0
            class zNPCEntity * npcEnt; // r28
        }
    }
}
// Range: 0x800E6D60 -> 0x800E6DE0
void zNPCBTSwarmFlockAction::InitMP(class zNPCBTSwarmFlockAction * this /* r27 */) {
    // Local variables
    class xMovePoint * npcMP; // r29

    {
        // Range: 0x800E6D70 -> 0x800E6DCC
        // Local variables
        int i; // r28
    }
}
// Range: 0x800E6DE0 -> 0x800E6EB4
void zNPCBTSwarmFlockAction::Begin(class zNPCBTSwarmFlockAction * this /* r28 */) {
    // Local variables
    int numberOfChildren; // r0

    {
        // Range: 0x800E6E3C -> 0x800E6E9C
        // Local variables
        int i; // r29

        {
            // Range: 0x800E6E3C -> 0x800E6E9C
            // Local variables
            class zNPCEntity * npcEnt; // r0
        }
    }
}
// signature: zNPCBTSwarmFlockAction::Update(float)
// Range: 0x800E6EC0 -> 0x800E7014
enum eTaskState zNPCBTSwarmFlockAction::Update(class zNPCBTSwarmFlockAction * this /* r24 */) {
    // Local variables
    bool allArrived; // r28
    int numberOfChildren; // r0

    {
        // Range: 0x800E6F08 -> 0x800E6FF0
        // Local variables
        int i; // r27

        {
            // Range: 0x800E6F08 -> 0x800E6FF0
            // Local variables
            class xVec3 * dest; // r25
            class zNPCEntity * npcEnt; // r26
        }
    }
}
// signature: zNPCBTSwarmFlockAction::NextMP(int)
// Range: 0x800E7020 -> 0x800E704C
void zNPCBTSwarmFlockAction::NextMP() {
}
// signature: zNPCBTSwarmFlockAction::GetFlockDestination(const zNPCEntity *, xMovePoint *, xMovePoint *)
// Range: 0x800E7050 -> 0x800E725C
class xVec3 zNPCBTSwarmFlockAction::GetFlockDestination(class zNPCBTSwarmFlockAction * this /* r25 */, class zNPCEntity * npcEnt /* r26 */, class xMovePoint * curMP /* r27 */) {
    // Local variables
    class xVec3 dest; // r1+0x44
    class xVec3 prevToCur; // r1+0x38
    float mpDist; // r31
    float randomAngle; // f31
    class xVec3 prevToCurRotated; // r1+0x2C
    float minDist; // f1
    float maxDist; // f30
    float cosAngle; // f0
    class xVec3 maxDest; // r1+0x20
    class xVec3 npcPosProj; // r1+0x14
    class xVec3 prevMPToNPCProj; // r1+0x8
    float traveled; // f0
    float curDist; // f0
    float randomDist; // f0

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_Null;
}
// signature: zNPCBTSwarmFlockAction::IsDestAtMP(const xVec3 *, xMovePoint *, xMovePoint *)
// Range: 0x800E7260 -> 0x800E7330
bool zNPCBTSwarmFlockAction::IsDestAtMP(class zNPCBTSwarmFlockAction * this /* r28 */, class xVec3 * dest /* r29 */) {
    // Local variables
    class xVec3 curToPrevMP; // r1+0x14
    float dist; // f0
    class xVec3 curToDest; // r1+0x8
    float cosAngle; // f0
}
// Range: 0x800E7330 -> 0x800E7484
void zNPCBTSwarmFlutterAction::Begin(class zNPCBTSwarmFlutterAction * this /* r27 */) {
    // Local variables
    int numberOfChildren; // r29

    {
        // Range: 0x800E7380 -> 0x800E7454
        // Local variables
        int i; // r28

        {
            // Range: 0x800E7380 -> 0x800E7454
            // Local variables
            class zNPCEntity * npcEnt; // r0
        }
    }
}
// Range: 0x800E7490 -> 0x800E77A0
class xVec3 zNPCBTSwarmFlutterAction::GetFlutterDestination(class zNPCBTSwarmFlutterAction * this /* r29 */, class zNPCEntity * npcEnt /* r27 */) {
    // Local variables
    class Action_NPC_SwarmFlutter * asset; // r0
    class xVec3 dest; // r1+0x68
    class zWallNet * wn; // r0

    {
        // Range: 0x800E74EC -> 0x800E75AC
        // Local variables
        float randomOffset; // f0
        class xMat4x3 npcMat; // r1+0x78
        float randomDist; // f30
        float randomAngle; // f31
    }
    {
        // Range: 0x800E75AC -> 0x800E7760
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
// Range: 0x800E77A0 -> 0x800E7900
class xVec3 zNPCBTSwarmFlutterAction::GetGlideDestination(class zNPCEntity * npcEnt /* r29 */) {
    // Local variables
    class xVec3 dest; // r1+0x8
    float currentY; // f31
    float randomAngle; // f30
    float randomDist; // f29
    class xMat4x3 npcMat; // r1+0x18
    float randomOffset; // f0

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x800E7900 -> 0x800E7B34
enum eTaskState zNPCBTSwarmFlutterAction::Update(class zNPCBTSwarmFlutterAction * this /* r26 */, float dt /* f29 */) {
    // Local variables
    class Action_NPC_SwarmFlutter * asset; // r29
    int numChildren; // r0

    {
        // Range: 0x800E7964 -> 0x800E7B00
        // Local variables
        int i; // r28

        {
            // Range: 0x800E7964 -> 0x800E7B00
            // Local variables
            class xVec3 * dest; // r20
            class zNPCEntity * npcEnt; // r27

            {
                // Range: 0x800E7964 -> 0x800E7B00
                // Local variables
                float prob; // f0
            }
        }
    }
}
// Range: 0x800E7B40 -> 0x800E7B84
void zNPCBTSwarmFlutterAction::Cleanup(class zNPCBTSwarmFlutterAction * this /* r31 */) {
}
// signature: zNPCBTWriteSwarmHidePointAction::Update(float)
// Range: 0x800E7B90 -> 0x800E7BFC
enum eTaskState zNPCBTWriteSwarmHidePointAction::Update() {
    // Local variables
    class xVec3 hidePoint; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
}
// signature: zNPCBTSwarmBugCollectedAction::Setup(const Sext::ActionBase *)
// Range: 0x800E7C00 -> 0x800E7C14
void zNPCBTSwarmBugCollectedAction::Setup() {
    // Local variables
    class Action_NPC_Swarm_BugCollected * asset; // r0
}
// signature: zNPCBTSwarmResetKilledMembersAction::Update(float)
// Range: 0x800E7C20 -> 0x800E7C50
enum eTaskState zNPCBTSwarmResetKilledMembersAction::Update() {
}
// signature: zNPCBTSwarmPathFollowMPAction::Setup(const Sext::ActionBase *)
// Range: 0x800E7C50 -> 0x800E7C78
void zNPCBTSwarmPathFollowMPAction::Setup() {
    // Local variables
    class Action_NPC_SwarmPathFollowMP * asset; // r0
}
// Range: 0x800E7C80 -> 0x800E7F44
void zNPCBTSwarmPathFollowMPAction::Begin(class zNPCBTSwarmPathFollowMPAction * this /* r31 */) {
    // Local variables
    int numChildren; // r16
    class xMovePoint * mp; // r1+0x8

    {
        // Range: 0x800E7D20 -> 0x800E7EF4
        // Local variables
        int i; // r15

        {
            // Range: 0x800E7D20 -> 0x800E7EF4
            // Local variables
            class zNPCEntity * npcEnt; // r17
        }
    }

    // References
    // -> class Factory factory;
    // -> struct {} __vt__19zSteeringPathSpline;
    // -> struct {} __vt__17zSteeringPathLine;
    // -> struct {} __vt__23zSteeringPathMovePoints;
    // -> static unsigned int NPC_VAR_TARGET_MP;
}
// Range: 0x800E7FA0 -> 0x800E801C
bool zNPCBTSwarmPathFollowMPAction::ArrivedAtMP(class zNPCBTSwarmPathFollowMPAction * this /* r30 */, int member /* r31 */) {
    // Local variables
    class zNPCEntity * npcEnt; // r0
    float dist2; // f0
}
// signature: zNPCBTSwarmPathFollowMPAction::Update(float)
// Range: 0x800E8020 -> 0x800E80DC
enum eTaskState zNPCBTSwarmPathFollowMPAction::Update(class zNPCBTSwarmPathFollowMPAction * this /* r27 */) {
    // Local variables
    int numChildren; // r0

    {
        // Range: 0x800E8064 -> 0x800E80C4
        // Local variables
        int i; // r28

        {
            // Range: 0x800E8064 -> 0x800E80C4
            // Local variables
            class zNPCEntity * npcEnt; // r0
        }
    }
}
// Range: 0x800E80E0 -> 0x800E8130
void zNPCBTSwarmPathFollowMPAction::End() {
    {
        // Range: 0x800E80EC -> 0x800E8120
        // Local variables
        class xMovePoint * mp; // r1+0x8
    }

    // References
    // -> static unsigned int NPC_VAR_TARGET_MP;
}
// Range: 0x800E8130 -> 0x800E8204
void zNPCBTSwarmPathFollowMPAction::Cleanup(class zNPCBTSwarmPathFollowMPAction * this /* r28 */) {
    {
        // Range: 0x800E8144 -> 0x800E81F0
        // Local variables
        int numChildren; // r30

        {
            // Range: 0x800E8188 -> 0x800E81C8
            // Local variables
            int i; // r29
        }
    }
}
// Range: 0x800E8210 -> 0x800E8508
void zNPCBTSwarmPathFollowCircleAction::Begin(class zNPCBTSwarmPathFollowCircleAction * this /* r21 */) {
    // Local variables
    class Action_NPC_SwarmPathFollowCircle * asset; // r25
    int numChildren; // r24
    class zNPCEntity * first; // r0
    class xVec3 center; // r1+0x8

    {
        // Range: 0x800E82A0 -> 0x800E84B0
        // Local variables
        int i; // r23

        {
            // Range: 0x800E82A0 -> 0x800E84B0
            // Local variables
            class zNPCEntity * npcEnt; // r22
        }
    }

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class Factory factory;
    // -> struct {} __vt__19zSteeringPathCircle;
}
// signature: zNPCBTSwarmPathFollowCircleAction::Update(float)
// Range: 0x800E8510 -> 0x800E8598
enum eTaskState zNPCBTSwarmPathFollowCircleAction::Update(class zNPCBTSwarmPathFollowCircleAction * this /* r29 */) {
    // Local variables
    int numChildren; // r0

    {
        // Range: 0x800E8554 -> 0x800E8580
        // Local variables
        int i; // r30
    }
}
// Range: 0x800E85A0 -> 0x800E8674
void zNPCBTSwarmPathFollowCircleAction::Cleanup(class zNPCBTSwarmPathFollowCircleAction * this /* r28 */) {
    {
        // Range: 0x800E85B4 -> 0x800E8660
        // Local variables
        int numChildren; // r30

        {
            // Range: 0x800E85F8 -> 0x800E8638
            // Local variables
            int i; // r29
        }
    }
}
