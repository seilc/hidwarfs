/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNPCCommonBTUtilityFunctions.h
*/
// signature: BT_Utility::SetMovementLimits(const zNPCBase *, zNPCSteering *, zNPCSteeringControl *, Sext::eNPCMoveType, float, float, float, float)
// Range: 0x800E3450 -> 0x800E3598
void BT_Utility::SetMovementLimits(class zNPCSteering * steeringComponent /* r31 */) {
    // Local variables
    float maxSpeed; // f5
    float maxAcc; // f6
    float turningRadius; // f7
    float turnSpring; // f31

    {
        // Range: 0x800E34EC -> 0x800E3518
        // Local variables
        class xVec3 limits; // r1+0x14
        float turningAcceleration; // f0
    }
    {
        // Range: 0x800E3538 -> 0x800E3568
        // Local variables
        class xVec3 limits; // r1+0x8
        float turningAcceleration; // f0
    }
}
// signature: BT_Utility::CalcFlyingNPCsAdjustedY(const Sext::FlyingNPCHeightAdjustment *, const zNPCBase *, const xVec3 &)
// Range: 0x800DCC20 -> 0x800DCD1C
float BT_Utility::CalcFlyingNPCsAdjustedY(class FlyingNPCHeightAdjustment * adjustment /* r29 */, class xVec3 & originalPos /* r30 */) {
    {
        // Range: 0x800DCC80 -> 0x800DCCF4
        // Local variables
        float y; // r1+0x8
        int triID; // r0
        class zWallNet * wn; // r31
    }
}
