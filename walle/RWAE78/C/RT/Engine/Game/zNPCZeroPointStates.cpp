/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zNPCZeroPointStates.cpp
*/
int sZeroPointDropBounces; // size: 0x4, address: 0x806CDE74
// Range: 0x80147670 -> 0x80147F00
void zZeroPointFireAction::Activate(class zZeroPointFireAction * this /* r31 */) {
    // References
    // -> static class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
}
// Range: 0x80147F00 -> 0x8014841C
void zZeroPointFireAction::Deactivate(class zZeroPointFireAction * this /* r27 */) {
}
// Range: 0x80148420 -> 0x80148A08
class zNPCStateResult zZeroPointFireAction::ActionUpdate(class zZeroPointFireAction * this /* r29 */, float dt /* f31 */) {
    // Local variables
    class xVec3 targetRelativePosition; // r1+0x14
    float targetDistance; // f0
    class xVec3 beamEnd; // r1+0x8

    {
        // Range: 0x80148560 -> 0x80148668
        // Local variables
        float normalDistanceSquared; // f1
        float relativeDistanceSquared; // f0

        {
            // Range: 0x801485C8 -> 0x80148660
            // Local variables
            class zCombatDamageInfo combatDamageInfo; // r1+0x20
        }
    }

    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult Done;
    // -> class zNPCStateResult TimerDone;
    // -> class zNPCStateResult Fail;
    // -> class zNPCStateResult Success;
    // -> class xVec3 m_Null;
}
// Range: 0x80148A10 -> 0x801493D4
void zZeroPointPullAction::Activate(class zZeroPointPullAction * this /* r31 */) {
    // Local variables
    class xVec3 endFacing; // r1+0x8
    float angle; // f1

    // References
    // -> static class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x801493E0 -> 0x8014993C
void zZeroPointPullAction::Deactivate(class zZeroPointPullAction * this /* r27 */) {
}
// Range: 0x80149940 -> 0x80149F14
class zNPCStateResult zZeroPointPullAction::ActionUpdate(class zZeroPointPullAction * this /* r29 */, float dt /* f31 */) {
    // Local variables
    float newDistance; // f7

    {
        // Range: 0x801499B0 -> 0x80149D1C
        // Local variables
        class xQuat currentFacing; // r1+0x8
        float fraction; // f1
        class xMat4x3 newTransform; // r1+0x58
    }
    {
        // Range: 0x80149D1C -> 0x80149EEC
        // Local variables
        class xMat4x3 newTransform; // r1+0x18
    }

    // References
    // -> class zNPCStateResult Success;
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult Done;
    // -> class zNPCStateResult TimerDone;
    // -> class xVec3 m_Null;
}
// Range: 0x80149F20 -> 0x8014A5EC
void zZeroPointHoldAction::Activate(class zZeroPointHoldAction * this /* r26 */) {
    // References
    // -> static class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
}
// Range: 0x8014A5F0 -> 0x8014AB4C
void zZeroPointHoldAction::Deactivate(class zZeroPointHoldAction * this /* r27 */) {
}
// Range: 0x8014AB50 -> 0x8014AF68
class zNPCStateResult zZeroPointHoldAction::ActionUpdate(class zZeroPointHoldAction * this /* r29 */, float dt /* f31 */) {
    // Local variables
    class xMat4x3 newTransform; // r1+0x8

    // References
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult Done;
    // -> class zNPCStateResult TimerDone;
    // -> class xVec3 m_Null;
}
// Range: 0x8014AF70 -> 0x8014B64C
void zZeroPointThrowAction::Activate(class zZeroPointThrowAction * this /* r26 */) {
    // References
    // -> static class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
}
// Range: 0x8014B650 -> 0x8014BB7C
void zZeroPointThrowAction::Deactivate(class zZeroPointThrowAction * this /* r27 */) {
}
// Range: 0x8014BB80 -> 0x8014C220
class zNPCStateResult zZeroPointThrowAction::ActionUpdate(class zZeroPointThrowAction * this /* r30 */, float dt /* f31 */) {
    {
        // Range: 0x8014BE08 -> 0x8014C03C
        // Local variables
        float directionConstant; // f0
        float * yDir; // r0
        class xVec3 throwVelocity; // r1+0x30
        bool inCube; // r0

        {
            // Range: 0x8014BF70 -> 0x8014BFD4
            // Local variables
            class hkVector4 impulse; // r1+0x20
            class hkpRigidBody * rigidBody; // r0
        }
    }
    {
        // Range: 0x8014C03C -> 0x8014C184
        // Local variables
        class xMat4x3 newTransform; // r1+0x40
    }

    // References
    // -> class xVec3 m_Null;
    // -> class zNPCStateResult NotDone;
    // -> class zNPCStateResult Done;
    // -> class zNPCStateResult TimerDone;
}
