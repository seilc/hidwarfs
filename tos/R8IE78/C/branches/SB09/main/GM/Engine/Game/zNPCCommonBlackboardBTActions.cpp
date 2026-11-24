/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNPCCommonBlackboardBTActions.cpp
*/
unsigned int laneNumber; // size: 0x4, address: 0x80753F20
// signature: zNPCBTWriteCurHitPointsAction::Update(float)
// Range: 0x800DC840 -> 0x800DC8A4
enum eTaskState zNPCBTWriteCurHitPointsAction::Update() {
    // Local variables
    unsigned int var; // r4
    float curHitPoints; // r1+0x8
}
// signature: zNPCBTWriteMaxHitPointsAction::Update(float)
// Range: 0x800DC8B0 -> 0x800DC914
enum eTaskState zNPCBTWriteMaxHitPointsAction::Update() {
    // Local variables
    unsigned int var; // r4
    float maxHitPoints; // r1+0x8
}
// Range: 0x800DC920 -> 0x800DCA68
bool zNPCBTWriteInsideWallnetAction::FindInsideWNPos(class zNPCBTWriteInsideWallnetAction * this /* r29 */, class xVec3 & pos /* r30 */) {
    // Local variables
    class Action_NPC_Write_InsideWallnet * actionAsset; // r6
    unsigned int var; // r4
    float dist; // f30
    class zWallNetPositionXZ wallNetPosition; // r1+0x8
    float boundRadiusXZ; // f0
}
// signature: zNPCBTWriteInsideWallnetAction::Update(float)
// Range: 0x800DCB10 -> 0x800DCB88
enum eTaskState zNPCBTWriteInsideWallnetAction::Update(class zNPCBTWriteInsideWallnetAction * this /* r30 */) {
    // Local variables
    unsigned int var; // r31
    class xVec3 pos; // r1+0x8
}
// signature: zNPCFlyingBTWriteInsideWallnetAction::Update(float)
// Range: 0x800DCB90 -> 0x800DCC1C
enum eTaskState zNPCFlyingBTWriteInsideWallnetAction::Update(class zNPCFlyingBTWriteInsideWallnetAction * this /* r29 */) {
    // Local variables
    class Action_NPC_Flying_Write_InsideWallnet * actionAsset; // r31
    unsigned int var; // r30
    class xVec3 pos; // r1+0x8
}
// signature: zNPCBTWriteNumberOfMovepointsAction::Update(float)
// Range: 0x800DCD20 -> 0x800DCD9C
enum eTaskState zNPCBTWriteNumberOfMovepointsAction::Update() {
    // Local variables
    unsigned int var; // r30
    int numberOfMovepoints; // r1+0x8
}
// signature: zNPCBTWriteLockedPlayerAction::Update(float)
// Range: 0x800DCDA0 -> 0x800DCEB4
enum eTaskState zNPCBTWriteLockedPlayerAction::Update(class zNPCBTWriteLockedPlayerAction * this /* r31 */) {
    // Local variables
    float minDist2; // f31
    class zPlayer * player; // r1+0x8

    {
        // Range: 0x800DCDD0 -> 0x800DCE58
        // Local variables
        int i; // r28

        {
            // Range: 0x800DCDD4 -> 0x800DCE58
            // Local variables
            float dist2; // f1
        }
    }

    // References
    // -> static unsigned int NPC_VAR_LOCKED_PLAYER;
    // -> class xGlobals * xglobals;
}
// signature: zNPCBTWriteClosestPlayerAction::Update(float)
// Range: 0x800DCEC0 -> 0x800DCFD4
enum eTaskState zNPCBTWriteClosestPlayerAction::Update(class zNPCBTWriteClosestPlayerAction * this /* r31 */) {
    // Local variables
    float minDist2; // f31
    class zPlayer * player; // r1+0x8

    {
        // Range: 0x800DCEF0 -> 0x800DCF78
        // Local variables
        int i; // r28

        {
            // Range: 0x800DCEF4 -> 0x800DCF78
            // Local variables
            float dist2; // f1
        }
    }

    // References
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
    // -> class xGlobals * xglobals;
}
// signature: zNPCBTWriteTargetPlayerAction::FindWeightedDistance(const xVec3 &)
// Range: 0x800DCFE0 -> 0x800DD0F0
float zNPCBTWriteTargetPlayerAction::FindWeightedDistance() {
    // Local variables
    class Action_NPC_Write_TargetPlayer * actionAsset; // r6
    float maxDistance; // f31
    bool excludeBeyondMaxDist; // r0
    float distanceWeight; // f30
    float dist2; // f0
    float distVal; // f1
}
// signature: zNPCBTWriteTargetPlayerAction::FindWeightedNumAttacking(const zPlayer *)
// Range: 0x800DD0F0 -> 0x800DD118
float zNPCBTWriteTargetPlayerAction::FindWeightedNumAttacking() {
    // Local variables
    class Action_NPC_Write_TargetPlayer * actionAsset; // r3
    float numAttackingWeight; // f0
}
// signature: zNPCBTWriteTargetPlayerAction::FindWeightedNumTargeting(const zPlayer *)
// Range: 0x800DD120 -> 0x800DD148
float zNPCBTWriteTargetPlayerAction::FindWeightedNumTargeting() {
    // Local variables
    class Action_NPC_Write_TargetPlayer * actionAsset; // r3
    float numTargetingWeight; // f0
}
// Range: 0x800DD150 -> 0x800DD200
float zNPCBTWriteTargetPlayerAction::FindWeightedPlayerStatus(class zPlayer * player /* r30 */) {
    // Local variables
    class Action_NPC_Write_TargetPlayer * actionAsset; // r31
    float playerStatusWeight; // f31
    float statusVal; // f0
}
// Range: 0x800DD200 -> 0x800DD210
void zNPCBTWriteTargetPlayerAction::Begin() {
}
// signature: zNPCBTWriteTargetPlayerAction::Update(float)
// Range: 0x800DD210 -> 0x800DD454
enum eTaskState zNPCBTWriteTargetPlayerAction::Update(class zNPCBTWriteTargetPlayerAction * this /* r30 */) {
    // Local variables
    class Action_NPC_Write_TargetPlayer * actionAsset; // r5
    bool checkIfInWallNet; // r0
    bool checkIfSwitched; // r0
    bool notifyPlayer; // r0
    bool runOnce; // r31
    float maxPriority; // f30
    class zPlayer * player; // r1+0xC
    class zPlayer * currentPlayer; // r1+0x8

    {
        // Range: 0x800DD284 -> 0x800DD350
        // Local variables
        int i; // r23

        {
            // Range: 0x800DD284 -> 0x800DD350
            // Local variables
            float priority; // f0
            class xVec3 & curPos; // r22
        }
    }

    // References
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
    // -> class xGlobals * xglobals;
}
// signature: zNPCBTWritePatrolMovePointAction::Update(float)
// Range: 0x800DD460 -> 0x800DD594
enum eTaskState zNPCBTWritePatrolMovePointAction::Update(class zNPCBTWritePatrolMovePointAction * this /* r31 */) {
    // Local variables
    class xMovePoint * currMP; // r1+0xC

    {
        // Range: 0x800DD49C -> 0x800DD50C
        // Local variables
        class xVec3 mpPos; // r1+0x1C
    }
    {
        // Range: 0x800DD50C -> 0x800DD57C
        // Local variables
        class xMovePoint * nextMP; // r1+0x8

        {
            // Range: 0x800DD524 -> 0x800DD57C
            // Local variables
            class xVec3 mpPos; // r1+0x10
        }
    }

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
    // -> static unsigned int NPC_VAR_TARGET_MP;
}
// signature: zNPCBTWritePatrolMovePointShiftedAction::Update(float)
// Range: 0x800DD6D0 -> 0x800DD988
enum eTaskState zNPCBTWritePatrolMovePointShiftedAction::Update(class zNPCBTWritePatrolMovePointShiftedAction * this /* r30 */) {
    // Local variables
    class xMovePoint * currMP; // r1+0x18

    {
        // Range: 0x800DD714 -> 0x800DD874
        // Local variables
        class xVec3 mpPos; // r1+0x4C
        class xVec3 prevPos; // r1+0x58
        float shiftPercent; // r1+0x10
        unsigned int laneMax; // r9
        class xMovePoint * nextMP; // r1+0x14
    }
    {
        // Range: 0x800DD874 -> 0x800DD96C
        // Local variables
        class xMovePoint * nextMP; // r1+0xC

        {
            // Range: 0x800DD898 -> 0x800DD96C
            // Local variables
            class xVec3 mpPos; // r1+0x34
            float shiftPercent; // r1+0x8
            class xVec3 prevPos; // r1+0x40
            class xMovePoint * prevMP; // r26
        }
    }

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
    // -> static unsigned int NPC_VAR_PATH_SHIFT_PERCENT;
    // -> unsigned int laneNumber;
    // -> static unsigned int NPC_VAR_NEXT_TARGET_MP;
    // -> static unsigned int NPC_VAR_TARGET_MP;
}
// Range: 0x800DDC50 -> 0x800DDE48
bool zNPCBTWriteWanderPositionAction::FindWanderPosition(class zNPCBTWriteWanderPositionAction * this /* r30 */, class xVec3 & pos /* r31 */) {
    // Local variables
    float radius; // f31
    bool success; // r3

    {
        // Range: 0x800DDC98 -> 0x800DDDC4
        // Local variables
        class xMat4x3 npcMat; // r1+0x8
        float randomDist; // f29
        float randomAngle; // f30
    }
}
// signature: zNPCBTWriteWanderPositionAction::Update(float)
// Range: 0x800DDE50 -> 0x800DDEC4
enum eTaskState zNPCBTWriteWanderPositionAction::Update(class zNPCBTWriteWanderPositionAction * this /* r31 */) {
    // Local variables
    class xVec3 pos; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
}
// signature: zNPCFlyingBTWriteWanderPositionAction::Update(float)
// Range: 0x800DDED0 -> 0x800DDF4C
enum eTaskState zNPCFlyingBTWriteWanderPositionAction::Update(class zNPCFlyingBTWriteWanderPositionAction * this /* r31 */) {
    // Local variables
    class xVec3 pos; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
}
// Range: 0x800DDF50 -> 0x800DE094
bool zNPCBTWritePlayerPositionAction::FindPlayerPos(class zNPCBTWritePlayerPositionAction * this /* r28 */, class xVec3 & pos /* r29 */) {
    // Local variables
    class Action_NPC_Write_PlayerPosition * asset; // r31
    enum OffsetTypes offsetType; // r30
    class xVec3 offset; // r1+0xC
    class zPlayer * player; // r1+0x8
}
// signature: zNPCFlyingBTWritePlayerPositionAction::Update(float)
// Range: 0x800DE0A0 -> 0x800DE12C
enum eTaskState zNPCFlyingBTWritePlayerPositionAction::Update(class zNPCFlyingBTWritePlayerPositionAction * this /* r31 */) {
    // Local variables
    class xVec3 pos; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
}
// signature: zNPCBTWriteTrapPositionAction::Update(float)
// Range: 0x800DE130 -> 0x800DE1A8
enum eTaskState zNPCBTWriteTrapPositionAction::Update(class zNPCBTWriteTrapPositionAction * this /* r31 */) {
    // Local variables
    class xVec3 trapPos; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
    // -> static unsigned int NPC_VAR_TRAP_POS;
}
// signature: zNPCBTResetCurrentPlayerAction::Update(float)
// Range: 0x800DE1B0 -> 0x800DE1FC
enum eTaskState zNPCBTResetCurrentPlayerAction::Update() {
    // Local variables
    class zPlayer * nullPlayer; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// signature: zNPCBTSetNeedCombatCleanupAction::Update(float)
// Range: 0x800DE200 -> 0x800DE254
enum eTaskState zNPCBTSetNeedCombatCleanupAction::Update() {
    // Local variables
    int value; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_NEED_COMBAT_CLEANUP;
}
// signature: zNPCBTSetNeedCombatTargetingCleanupAction::Update(float)
// Range: 0x800DE260 -> 0x800DE2B4
enum eTaskState zNPCBTSetNeedCombatTargetingCleanupAction::Update() {
    // Local variables
    int value; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_NEED_COMBAT_TARGETING_CLEANUP;
}
// signature: zNPCBTWriteNetworkMovePointAction::Update(float)
// Range: 0x800DE2C0 -> 0x800DE478
enum eTaskState zNPCBTWriteNetworkMovePointAction::Update(class zNPCBTWriteNetworkMovePointAction * this /* r31 */) {
    // Local variables
    enum MovePointType type; // r0
    class xMovePoint * foundMovePoint; // r1+0x8
    class xVec3 targetPos; // r1+0xC

    {
        // Range: 0x800DE3A8 -> 0x800DE3C8
        // Local variables
        class xVec3 npcPos; // r1+0x24
    }
    {
        // Range: 0x800DE3CC -> 0x800DE3EC
        // Local variables
        class xVec3 npcPos; // r1+0x18
    }

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
    // -> static unsigned int NPC_VAR_TARGET_MP;
}
// signature: zNPCBTWriteBlackboardUidPosition::Update(float)
// Range: 0x800DE480 -> 0x800DE52C
enum eTaskState zNPCBTWriteBlackboardUidPosition::Update(class zNPCBTWriteBlackboardUidPosition * this /* r31 */) {
    // Local variables
    class uid entUid; // r1+0x8

    {
        // Range: 0x800DE48C -> 0x800DE514
        // Local variables
        class xVec3 pos; // r1+0x10
        class xBase * pBase; // r0
    }

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
}
// Range: 0x800DE530 -> 0x800DE610
bool zNPCBTWriteCurrentPosition::FindCurrentPos(class zNPCBTWriteCurrentPosition * this /* r28 */, class xVec3 & targetPosition /* r29 */) {
    // Local variables
    class Action_NPC_Write_CurrentPosition * actionAsset; // r30
    class xVec3 offset; // r1+0x14

    {
        // Range: 0x800DE590 -> 0x800DE5F4
        // Local variables
        int triangleID; // r0
    }
}
// signature: zNPCFlyingBTWriteCurrentPosition::Update(float)
// Range: 0x800DE610 -> 0x800DE6A8
enum eTaskState zNPCFlyingBTWriteCurrentPosition::Update(class zNPCFlyingBTWriteCurrentPosition * this /* r31 */) {
    // Local variables
    class xVec3 pos; // r1+0x8
    class Action_NPC_Flying_Write_CurrentPosition * actionAsset; // r3

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
}
// signature: zNPCBTWriteChildMovePointAction::Update(float)
// Range: 0x800DE6B0 -> 0x800DE8CC
enum eTaskState zNPCBTWriteChildMovePointAction::Update(class zNPCBTWriteChildMovePointAction * this /* r28 */) {
    // Local variables
    class Action_NPC_Write_ChildMovePoint * asset; // r24
    float radius; // f31
    class xMovePoint * currMP; // r1+0xC

    {
        // Range: 0x800DE728 -> 0x800DE8A8
        // Local variables
        class xMovePoint * nextMP; // r1+0x8

        {
            // Range: 0x800DE764 -> 0x800DE844
            // Local variables
            int rnd; // r25
            class xMovePoint * previousOption; // r30

            {
                // Range: 0x800DE788 -> 0x800DE82C
                // Local variables
                unsigned int idx; // r29

                {
                    // Range: 0x800DE788 -> 0x800DE82C
                    // Local variables
                    float dist2; // f0
                }
            }
        }
        {
            // Range: 0x800DE844 -> 0x800DE89C
            // Local variables
            class xVec3 mpPos; // r1+0x10
        }
    }

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
    // -> static unsigned int NPC_VAR_TARGET_MP;
    // -> class xGlobals * xglobals;
}
