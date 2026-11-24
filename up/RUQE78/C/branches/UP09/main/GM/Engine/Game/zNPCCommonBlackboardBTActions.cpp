/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCCommonBlackboardBTActions.cpp
*/
static unsigned int laneNumber; // size: 0x4, address: 0x80822B44
// signature: zNPCBTWriteLockedPlayerAction::Update(float)
// Range: 0x801A5D70 -> 0x801A5F04
enum eTaskState zNPCBTWriteLockedPlayerAction::Update(class zNPCBTWriteLockedPlayerAction * this /* r27 */) {
    // Local variables
    float minDist2; // f31
    class zPlayer * player; // r29

    {
        // Range: 0x801A5D9C -> 0x801A5E2C
        // Local variables
        int i; // r28

        {
            // Range: 0x801A5DAC -> 0x801A5E2C
            // Local variables
            float dist2; // f0
        }
    }

    // References
    // -> static unsigned int NPC_VAR_LOCKED_PLAYER;
    // -> class xGlobals * xglobals;
}
// signature: zNPCBTWriteClosestPlayerAction::Update(float)
// Range: 0x801A5F10 -> 0x801A60A4
enum eTaskState zNPCBTWriteClosestPlayerAction::Update(class zNPCBTWriteClosestPlayerAction * this /* r27 */) {
    // Local variables
    float minDist2; // f31
    class zPlayer * player; // r29

    {
        // Range: 0x801A5F3C -> 0x801A5FCC
        // Local variables
        int i; // r28

        {
            // Range: 0x801A5F4C -> 0x801A5FCC
            // Local variables
            float dist2; // f0
        }
    }

    // References
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
    // -> class xGlobals * xglobals;
}
// signature: zNPCBTWriteTargetPlayerAction::Setup(const Sext::ActionBase *)
// Range: 0x801A60B0 -> 0x801A60B4
void zNPCBTWriteTargetPlayerAction::Setup() {
}
// Range: 0x801A60C0 -> 0x801A60D8
void zNPCBTWriteTargetPlayerAction::Begin() {
}
// signature: zNPCBTWriteTargetPlayerAction::Update(float)
// Range: 0x801A60E0 -> 0x801A6A8C
enum eTaskState zNPCBTWriteTargetPlayerAction::Update(class zNPCBTWriteTargetPlayerAction * this /* r26 */) {
    // Local variables
    class Action_NPC_Write_TargetPlayer * actionAsset; // r5
    bool checkIfInWallNet; // r0
    bool checkIfSwitched; // r0
    bool notifyPlayer; // r0
    bool runOnce; // r30
    unsigned int userData; // r16
    int tauntCount; // r18
    float maxPriority; // f24
    class zPlayer * player; // r29
    class zPlayer * currentPlayer; // r27

    {
        // Range: 0x801A61B4 -> 0x801A6274
        // Local variables
        class zPlayer * attackingPlayer; // r16
    }
    {
        // Range: 0x801A6278 -> 0x801A62E4
        // Local variables
        int i; // r21
    }
    {
        // Range: 0x801A62FC -> 0x801A688C
        // Local variables
        int i; // r28

        {
            // Range: 0x801A62FC -> 0x801A688C
            // Local variables
            float priority; // f0
            class xVec3 & curPos; // r0
        }
    }

    // References
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
    // -> class xGlobals * xglobals;
}
// signature: zNPCBTWritePatrolMovePointAction::Update(float)
// Range: 0x801A6A90 -> 0x801A6D84
enum eTaskState zNPCBTWritePatrolMovePointAction::Update(class zNPCBTWritePatrolMovePointAction * this /* r31 */) {
    // Local variables
    class xMovePoint * currMP; // r29

    {
        // Range: 0x801A6AF4 -> 0x801A6C24
        // Local variables
        class xVec3 mpPos; // r1+0x18
    }
    {
        // Range: 0x801A6C24 -> 0x801A6D60
        // Local variables
        class xMovePoint * nextMP; // r1+0x8

        {
            // Range: 0x801A6C40 -> 0x801A6D60
            // Local variables
            class xVec3 mpPos; // r1+0xC
        }
    }

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
    // -> static unsigned int NPC_VAR_TARGET_MP;
}
// signature: zNPCBTWritePatrolMovePointShiftedAction::Update(float)
// Range: 0x801A6EB0 -> 0x801A716C
enum eTaskState zNPCBTWritePatrolMovePointShiftedAction::Update(class zNPCBTWritePatrolMovePointShiftedAction * this /* r30 */) {
    // Local variables
    class xMovePoint * currMP; // r1+0x18

    {
        // Range: 0x801A6EF0 -> 0x801A7054
        // Local variables
        class xVec3 mpPos; // r1+0x4C
        class xVec3 prevPos; // r1+0x58
        float shiftPercent; // r1+0x10
        unsigned int laneMax; // r9
        class Action_NPC_Write_PatrolMovePointShifted * actionAsset; // r0
        class xMovePoint * nextMP; // r1+0x14
    }
    {
        // Range: 0x801A7054 -> 0x801A7150
        // Local variables
        class xMovePoint * nextMP; // r1+0xC

        {
            // Range: 0x801A7078 -> 0x801A7150
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
    // -> static unsigned int laneNumber;
    // -> static unsigned int NPC_VAR_NEXT_TARGET_MP;
    // -> static unsigned int NPC_VAR_TARGET_MP;
}
// signature: zNPCBTWriteWanderPositionAction::Update(float)
// Range: 0x801A7830 -> 0x801A7CD4
enum eTaskState zNPCBTWriteWanderPositionAction::Update(class zNPCBTWriteWanderPositionAction * this /* r31 */) {
    // Local variables
    float radius; // f31

    {
        // Range: 0x801A7878 -> 0x801A7ABC
        // Local variables
        class xMat4x3 npcMat; // r1+0x48
        float randomDist; // f30
        float randomAngle; // f29
    }
    {
        // Range: 0x801A7ABC -> 0x801A7C0C
        // Local variables
        class xVec3 pos; // r1+0x14
    }
    {
        // Range: 0x801A7C0C -> 0x801A7C9C
        // Local variables
        class xVec3 pos; // r1+0x8
    }

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
}
// signature: zNPCBTWritePlayerPositionAction::Update(float)
// Range: 0x801A7CE0 -> 0x801A7FF4
enum eTaskState zNPCBTWritePlayerPositionAction::Update(class zNPCBTWritePlayerPositionAction * this /* r28 */) {
    // Local variables
    class Action_NPC_Write_PlayerPosition * asset; // r30
    enum OffsetTypes offsetType; // r31
    class xVec3 offset; // r1+0x14
    class zPlayer * player; // r29
    class xVec3 pos; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
}
// signature: zNPCBTWriteTrapPositionAction::Update(float)
// Range: 0x801A8000 -> 0x801A8164
enum eTaskState zNPCBTWriteTrapPositionAction::Update(class zNPCBTWriteTrapPositionAction * this /* r30 */) {
    // Local variables
    class xVec3 trapPos; // r1+0x14

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
    // -> static unsigned int NPC_VAR_TRAP_POS;
}
// signature: zNPCBTResetCurrentPlayerAction::Update(float)
// Range: 0x801A8170 -> 0x801A8234
enum eTaskState zNPCBTResetCurrentPlayerAction::Update() {
    // References
    // -> static unsigned int NPC_VAR_CURRENT_PLAYER;
}
// signature: zNPCBTSetNeedCombatCleanupAction::Update(float)
// Range: 0x801A8240 -> 0x801A8308
enum eTaskState zNPCBTSetNeedCombatCleanupAction::Update() {
    // References
    // -> static unsigned int NPC_VAR_NEED_COMBAT_CLEANUP;
}
// signature: zNPCBTSetNeedCombatTargetingCleanupAction::Update(float)
// Range: 0x801A8310 -> 0x801A83D8
enum eTaskState zNPCBTSetNeedCombatTargetingCleanupAction::Update() {
    // References
    // -> static unsigned int NPC_VAR_NEED_COMBAT_TARGETING_CLEANUP;
}
// signature: zNPCBTWriteNetworkMovePointAction::Update(float)
// Range: 0x801A83E0 -> 0x801A8620
enum eTaskState zNPCBTWriteNetworkMovePointAction::Update(class zNPCBTWriteNetworkMovePointAction * this /* r31 */) {
    // Local variables
    enum MovePointType type; // r0
    class xMovePoint * foundMovePoint; // r29
    class xVec3 targetPos; // r1+0x8

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
    // -> static unsigned int NPC_VAR_TARGET_MP;
}
// signature: zNPCBTWriteBlackboardUidPosition::Update(float)
// Range: 0x801A8620 -> 0x801A8790
enum eTaskState zNPCBTWriteBlackboardUidPosition::Update(class zNPCBTWriteBlackboardUidPosition * this /* r30 */) {
    {
        // Range: 0x801A8638 -> 0x801A8774
        // Local variables
        class xVec3 pos; // r1+0x10
        class xBase * pBase; // r0
    }

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
}
// signature: zNPCBTWriteCurrentPosition::Update(float)
// Range: 0x801A8790 -> 0x801A8BD0
enum eTaskState zNPCBTWriteCurrentPosition::Update(class zNPCBTWriteCurrentPosition * this /* r31 */) {
    // Local variables
    class Action_NPC_Write_CurrentPosition * actionAsset; // r5
    class xVec3 targetPosition; // r1+0x74
    class xVec3 offset; // r1+0x68

    {
        // Range: 0x801A887C -> 0x801A8AD8
        // Local variables
        int triangleID; // r0
    }

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
}
// signature: zNPCBTWriteChildMovePointAction::Update(float)
// Range: 0x801A8BD0 -> 0x801A8EDC
enum eTaskState zNPCBTWriteChildMovePointAction::Update(class zNPCBTWriteChildMovePointAction * this /* r28 */) {
    // Local variables
    class Action_NPC_Write_ChildMovePoint * asset; // r24
    float radius; // f31
    class xMovePoint * currMP; // r25

    {
        // Range: 0x801A8C68 -> 0x801A8EB8
        // Local variables
        class xMovePoint * nextMP; // r30

        {
            // Range: 0x801A8C94 -> 0x801A8D98
            // Local variables
            int rnd; // r26
            class xMovePoint * previousOption; // r23

            {
                // Range: 0x801A8CC0 -> 0x801A8D70
                // Local variables
                unsigned int idx; // r29

                {
                    // Range: 0x801A8CC0 -> 0x801A8D70
                    // Local variables
                    float dist2; // f0
                }
            }
        }
        {
            // Range: 0x801A8D98 -> 0x801A8EB0
            // Local variables
            class xVec3 mpPos; // r1+0x8
        }
    }

    // References
    // -> static unsigned int NPC_VAR_CURRENT_DESTINATION;
    // -> static unsigned int NPC_VAR_TARGET_MP;
    // -> class xGlobals * xglobals;
}
