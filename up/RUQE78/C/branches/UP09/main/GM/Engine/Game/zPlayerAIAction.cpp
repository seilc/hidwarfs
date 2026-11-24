/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zPlayerAIAction.cpp
*/
// Range: 0x802C12F0 -> 0x802C12FC
class zPlayerInputAI * zPlayerAIAction::GetAIPad() {
}
// signature: IdlePlayerCollisionListener::contactPointAddedCallback(const hkpRootCdPoint &)
// Range: 0x802CBF40 -> 0x802CC064
void IdlePlayerCollisionListener::contactPointAddedCallback(class IdlePlayerCollisionListener * this /* r31 */) {
    // Local variables
    class xBase * baseA; // r5
    class xBase * baseB; // r4

    {
        // Range: 0x802CBFC8 -> 0x802CC04C
        // Local variables
        class zPlayer * theOther; // r30
    }
}
// signature: IdlePlayerCollisionListener::contactPointRemovedCallback(const hkpRootCdPoint &)
// Range: 0x802CC070 -> 0x802CC194
void IdlePlayerCollisionListener::contactPointRemovedCallback(class IdlePlayerCollisionListener * this /* r31 */) {
    // Local variables
    class xBase * baseA; // r5
    class xBase * baseB; // r4

    {
        // Range: 0x802CC0F8 -> 0x802CC17C
        // Local variables
        class zPlayer * theOther; // r30
    }
}
// signature: IdlePlayerCollisionListener::processConstraintsCallback(const hkArray<hkpRootCdPoint> &, hkpSimplexSolverInput &)
// Range: 0x802CBF30 -> 0x802CBF34
void IdlePlayerCollisionListener::processConstraintsCallback() {
}
// signature: IdleRayHitCollector::addRayHit(const hkpCdBody &, const hkpShapeRayCastCollectorOutput &)
// Range: 0x802CBEA0 -> 0x802CBF28
void IdleRayHitCollector::addRayHit() {
}
// Range: 0x802C1310 -> 0x802C13EC
void zPlayerAIActionIdle::Begin(class zPlayerAIActionIdle * this /* r31 */) {
    // References
    // -> struct {} __vt__27IdlePlayerCollisionListener;
    // -> class zFactory factory;
}
// signature: zPlayerAIActionIdle::TestRay(xVec3 &) const
// Range: 0x802C13F0 -> 0x802C1730
bool zPlayerAIActionIdle::TestRay(class zPlayerAIActionIdle * this /* r31 */) const {
    // Local variables
    class xVec3 start; // r1+0x7C
    class xVec3 end; // r1+0x70
    class IdleRayHitCollector collector; // r1+0x60
    class IdleRayHitCollector collector2; // r1+0x50

    {
        // Range: 0x802C1410 -> 0x802C1410
        // Local variables
        class hkMonitorStream & mStream; // r0

        {
            // Range: 0x802C1410 -> 0x802C1410
            // Local variables
            class TimerCommand * h; // r0
        }
    }
    {
        // Range: 0x802C153C -> 0x802C153C
        // Local variables
        class hkMonitorStream & mStream; // r0

        {
            // Range: 0x802C153C -> 0x802C153C
            // Local variables
            class TimerCommand * h; // r0
        }
    }
    {
        // Range: 0x802C15B4 -> 0x802C15B4
        // Local variables
        class hkMonitorStream & mStream; // r0

        {
            // Range: 0x802C15B4 -> 0x802C15B4
            // Local variables
            class TimerCommand * h; // r0
        }
    }
    {
        // Range: 0x802C16AC -> 0x802C16AC
        // Local variables
        class hkMonitorStream & mStream; // r0

        {
            // Range: 0x802C16AC -> 0x802C16AC
            // Local variables
            class TimerCommand * h; // r0
        }
    }

    // References
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> struct {} __vt__19IdleRayHitCollector;
}
// signature: zPlayerAIActionIdle::GetOutOfPlayersWay(float)
// Range: 0x802C1740 -> 0x802C1E90
bool zPlayerAIActionIdle::GetOutOfPlayersWay(class zPlayerAIActionIdle * this /* r24 */) {
    // Local variables
    bool turnToFace; // r28
    bool checkAway; // r27
    class xVec3 away; // r1+0x70

    {
        // Range: 0x802C17B8 -> 0x802C17F8
        // Local variables
        class xVec2 stickDir; // r1+0x20
    }
    {
        // Range: 0x802C1814 -> 0x802C1BC8
        // Local variables
        int i; // r26

        {
            // Range: 0x802C1814 -> 0x802C1BC8
            // Local variables
            unsigned int actionID; // r0
            bool avoidThisPlayer; // r25
            float fromOtherDist; // f0
            class xVec3 fromOther; // r1+0x64

            {
                // Range: 0x802C1824 -> 0x802C1828
                // Local variables
                class xVec3 vel; // r1+0x58
            }
            {
                // Range: 0x802C1828 -> 0x802C1828
                // Local variables
                class zPlayerFainted * fainted; // r0
            }
            {
                // Range: 0x802C1828 -> 0x802C1828
                // Local variables
                float COMBAT_TOO_CLOSE_DIST; // f24
            }
        }
    }

    // References
    // -> unsigned int numLiveEnemies;
    // -> class xGlobals * xglobals;
}
// Range: 0x802C1EB0 -> 0x802C1F2C
enum eTaskState zPlayerAIActionIdle::Update(class zPlayerAIActionIdle * this /* r30 */, float dt /* f31 */) {
    // Local variables
    class Action_Idle * asset; // r31
    unsigned int currAction; // r0
}
// Range: 0x802C1F30 -> 0x802C1F90
void zPlayerAIActionIdle::Cleanup(class zPlayerAIActionIdle * this /* r31 */) {
}
// Range: 0x802C1F90 -> 0x802C24B8
bool zPlayerAIActionMoveTo::EvaluatePath(class zPlayerAIActionMoveTo * this /* r30 */, float dt /* f31 */) {
    // Local variables
    enum eNavLinkActionCode newCode; // r1+0x8
    enum ePathEvalResult pathResult; // r0

    {
        // Range: 0x802C2114 -> 0x802C2490
        // Local variables
        enum eNavLinkActionCode nextAction; // r31
        class xVec3 nextPos; // r1+0x18
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x802C24D0 -> 0x802C2624
void zPlayerAIActionMoveTo::SetPlayer(class zPlayerAIActionMoveTo * this /* r27 */, class zCommonPlayer * player /* r28 */) {
    // References
    // -> struct {} __vt__20zSearchStrategyAStar;
    // -> class zFactory factory;
    // -> static unsigned int PLAYERAI_VAR_CURR_DEST;
}
// Range: 0x802C2660 -> 0x802C27C4
void zPlayerAIActionMoveTo::Begin(class zPlayerAIActionMoveTo * this /* r31 */) {
    // References
    // -> static unsigned int PLAYERAI_VAR_CURR_DEST;
    // -> class xVec3 m_Null;
}
// Range: 0x802C27D0 -> 0x802C2A38
bool zPlayerAIActionMoveTo::CheckIsStuck(class zPlayerAIActionMoveTo * this /* r31 */, class xVec3 & curPos /* r28 */, float dt /* f30 */, class StuckInfo * stuckInfo /* r29 */) {
    // Local variables
    enum ePlayerName playerName; // r30
    unsigned int currAction; // r0
    float stuck_time; // f0
    class xVec3 bossHeadPos; // r1+0x14
    float stuckDist2; // f0
}
// signature: zPlayerAIActionMoveTo::UpdateWalk(float)
// Range: 0x802C2A40 -> 0x802C2E50
void zPlayerAIActionMoveTo::UpdateWalk(class zPlayerAIActionMoveTo * this /* r31 */) {
    // Local variables
    class xVec3 dir; // r1+0x80
    class xVec2 stickDir; // r1+0x18
}
// signature: zPlayerAIActionMoveTo::UpdateRun(float)
// Range: 0x802C2E50 -> 0x802C3248
void zPlayerAIActionMoveTo::UpdateRun(class zPlayerAIActionMoveTo * this /* r31 */) {
    // Local variables
    class xVec3 dir; // r1+0x80
    class xVec2 stickDir; // r1+0x18
}
// signature: zPlayerAIActionMoveTo::UpdateJumpTo(float)
// Range: 0x802C3250 -> 0x802C3440
bool zPlayerAIActionMoveTo::UpdateJumpTo(class zPlayerAIActionMoveTo * this /* r31 */) {
    // Local variables
    class xVec3 dir; // r1+0x24
    class xVec2 stickDir; // r1+0x10

    {
        // Range: 0x802C33A8 -> 0x802C33F0
        // Local variables
        class zPlayerAIJump * aiJump; // r0
    }
    {
        // Range: 0x802C33F0 -> 0x802C3418
        // Local variables
        class zPlayerAIJump * aiJump; // r0
    }
}
// signature: zPlayerAIActionMoveTo::UpdateSwing(float)
// Range: 0x802C3440 -> 0x802C40B4
bool zPlayerAIActionMoveTo::UpdateSwing(class zPlayerAIActionMoveTo * this /* r30 */) {
    // References
    // -> unsigned int g_rttidParentTable[246];
    // -> class zGlobals globals;
}
// signature: zPlayerAIActionMoveTo::UpdateStuckJump(float)
// Range: 0x802C40C0 -> 0x802C4358
bool zPlayerAIActionMoveTo::UpdateStuckJump(class zPlayerAIActionMoveTo * this /* r31 */) {
    {
        // Range: 0x802C40E4 -> 0x802C4148
        // Local variables
        class zPlayerAIJump * aiJump; // r0
    }
    {
        // Range: 0x802C4148 -> 0x802C4330
        // Local variables
        class StuckInfo stuckInfo; // r1+0x50
        float threshold; // f31
        class xVec3 & playerPos; // r29

        {
            // Range: 0x802C4158 -> 0x802C4330
            // Local variables
            float jumpDiffLen; // f0
            class xVec3 jumpDiff; // r1+0x44

            {
                // Range: 0x802C4228 -> 0x802C4330
                // Local variables
                class xVec3 jumpDest; // r1+0x2C

                {
                    // Range: 0x802C4234 -> 0x802C42C0
                    // Local variables
                    class xVec3 diffWithAvoidence; // r1+0x38
                }
            }
        }
    }
}
// Range: 0x802C4360 -> 0x802C453C
enum eTaskState zPlayerAIActionMoveTo::Update(class zPlayerAIActionMoveTo * this /* r31 */, float dt /* f30 */) {
    // Local variables
    class xVec3 diff; // r1+0x14
    float len2XZ; // f0
    float threshold; // f0

    {
        // Range: 0x802C43FC -> 0x802C4444
        // Local variables
        class zWallNetPosition * curWallNetPosition; // r0
    }
    {
        // Range: 0x802C4494 -> 0x802C44CC
        // Local variables
        bool jumpEnded; // r0
    }
}
// Range: 0x802C4540 -> 0x802C45DC
void zPlayerAIActionMoveTo::End(class zPlayerAIActionMoveTo * this /* r26 */) {
    // References
    // -> static unsigned int PLAYERAI_VAR_CURR_DEST;
    // -> static class zSearchManager gSearchManager;
    // -> static class SearchTaskEntry gSearchTasks[16];
}
// Range: 0x802C45E0 -> 0x802C4674
void zPlayerAIActionMoveTo::Reset(class zPlayerAIActionMoveTo * this /* r31 */) {
}
// Range: 0x802C4680 -> 0x802C47A8
void zPlayerAIActionMoveTo::GetGoal(class zPlayerAIActionMoveTo * this /* r31 */) {
    // Local variables
    class xVec3 newGoal; // r1+0x20
    float NEW_GOAL_THRESHOLD; // f5

    // References
    // -> static unsigned int PLAYERAI_VAR_CURR_DEST;
}
// Range: 0x802C47B0 -> 0x802C4960
void zPlayerAIActionMoveTo::Cleanup(class zPlayerAIActionMoveTo * this /* r31 */) {
    // References
    // -> static class zSearchManager gSearchManager;
    // -> static class SearchTaskEntry gSearchTasks[16];
    // -> static unsigned int PLAYERAI_VAR_CURR_DEST;
}
// Range: 0x802C4960 -> 0x802C49C4
void zPlayerAIActionJump::Begin(class zPlayerAIActionJump * this /* r31 */) {
    // Local variables
    class zPlayerAIJump * aiJump; // r0
}
// signature: zPlayerAIActionJump::Update(float)
// Range: 0x802C49D0 -> 0x802C4A78
enum eTaskState zPlayerAIActionJump::Update(class zPlayerAIActionJump * this /* r31 */) {
}
// Range: 0x802C4A80 -> 0x802C4B44
void zPlayerAIActionJumpTo::Begin(class zPlayerAIActionJumpTo * this /* r31 */) {
    // Local variables
    class zPlayerAIJump * aiJump; // r0

    // References
    // -> static unsigned int PLAYERAI_VAR_CURR_DEST;
}
// signature: zPlayerAIActionJumpTo::Update(float)
// Range: 0x802C4B50 -> 0x802C4BF8
enum eTaskState zPlayerAIActionJumpTo::Update(class zPlayerAIActionJumpTo * this /* r31 */) {
}
// signature: zPlayerAIActionCancelAICommand::Update(float)
// Range: 0x802C4C00 -> 0x802C4CB8
enum eTaskState zPlayerAIActionCancelAICommand::Update() {
    // References
    // -> static unsigned int PLAYERAI_VAR_COMMAND;
}
// signature: zPlayerAIActionWritePlayerPos::SetPlayer(zCommonPlayer *)
// Range: 0x802C4CC0 -> 0x802C4D7C
void zPlayerAIActionWritePlayerPos::SetPlayer(class zPlayerAIActionWritePlayerPos * this /* r31 */) {
    // Local variables
    class Action_PlayerAI_Write_PlayerPos * asset; // r4
}
// Range: 0x802C4D80 -> 0x802C4D90
void zPlayerAIActionWritePlayerPos::Begin() {
}
// signature: zPlayerAIActionWritePlayerPos::Update(float)
// Range: 0x802C4D90 -> 0x802C4F88
enum eTaskState zPlayerAIActionWritePlayerPos::Update(class zPlayerAIActionWritePlayerPos * this /* r30 */) {
    // Local variables
    class Action_PlayerAI_Write_PlayerPos * asset; // r31

    {
        // Range: 0x802C4DAC -> 0x802C4F58
        // Local variables
        class xVec3 pos; // r1+0x14
        class zPlayer * target; // r27

        {
            // Range: 0x802C4DD0 -> 0x802C4E8C
            // Local variables
            float closestD2; // f31

            {
                // Range: 0x802C4DDC -> 0x802C4E78
                // Local variables
                int i; // r26

                {
                    // Range: 0x802C4DDC -> 0x802C4E78
                    // Local variables
                    float len2; // f0
                }
            }
        }
    }

    // References
    // -> static unsigned int PLAYERAI_VAR_CURR_DEST;
    // -> class xGlobals * xglobals;
}
// Range: 0x802C4F90 -> 0x802C4FC0
void zPlayerAIActionFleeFromNPCs::Begin() {
}
// Range: 0x802C4FC0 -> 0x802C553C
enum eTaskState zPlayerAIActionFleeFromNPCs::Update(class zPlayerAIActionFleeFromNPCs * this /* r29 */, float dt /* f25 */) {
    // Local variables
    class FleeFromNPCAccumulator fleeAccum; // r1+0xB8
    class xVec3 fleeDir; // r1+0xA8
    class xVec3 keepInRange; // r1+0x9C
    class zCommonPlayer * theOther; // r0
    class xVec3 toTheOther; // r1+0x90
    float dot; // f0
    class xVec2 stickDir; // r1+0x10

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> unsigned int g_rttidParentTable[246];
    // -> class zGlobals globals;
    // -> class xVec3 m_Null;
}
// Range: 0x802C5540 -> 0x802C5550
void zPlayerAIActionFleeFromNPCs::End() {
}
// Range: 0x802C5550 -> 0x802C5AF4
void zPlayerAIActionRotateToFace::SetupVariable(class zPlayerAIActionRotateToFace * this /* r31 */, class Action_PlayerAI_RotateToFace * asset /* r30 */) {
    {
        // Range: 0x802C5598 -> 0x802C5718
        // Local variables
        class zInteractionUP * ptr; // r3

        {
            // Range: 0x802C5598 -> 0x802C5714
            // Local variables
            class xVec3 targetPos; // r1+0x74
        }
    }
    {
        // Range: 0x802C5718 -> 0x802C588C
        // Local variables
        class zPlayer * ptr; // r3

        {
            // Range: 0x802C5718 -> 0x802C5888
            // Local variables
            class xVec3 targetPos; // r1+0x68
        }
    }
    {
        // Range: 0x802C588C -> 0x802C5ADC
        // Local variables
        class xVec3 vec; // r1+0x5C
    }
}
// signature: zPlayerAIActionRotateToFace::Setup(const Sext::ActionBase *)
// Range: 0x802C5B00 -> 0x802C5B18
void zPlayerAIActionRotateToFace::Setup() {
}
// signature: zPlayerAIActionRotateToFace::SetPlayer(zCommonPlayer *)
// Range: 0x802C5B20 -> 0x802C5ED8
void zPlayerAIActionRotateToFace::SetPlayer(class zPlayerAIActionRotateToFace * this /* r31 */) {
    // References
    // -> unsigned int g_rttidParentTable[246];
    // -> class zGlobals globals;
}
// signature: zPlayerAIActionRotateToFace::Update(float)
// Range: 0x802C5EE0 -> 0x802C5F84
enum eTaskState zPlayerAIActionRotateToFace::Update(class zPlayerAIActionRotateToFace * this /* r6 */) {
    // Local variables
    float dot; // f0
}
