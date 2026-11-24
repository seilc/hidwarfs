/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCBiplaneSteering.cpp
*/
// Range: 0x801A2700 -> 0x801A275C
void zNPCBiplaneSteering::AllAttached(class zNPCBiplaneSteering * this /* r31 */) {
}
// signature: zNPCBiplaneSteering::Detached(zNPCStatus *)
// Range: 0x801A2760 -> 0x801A2764
void zNPCBiplaneSteering::Detached() {
}
// Range: 0x801A2770 -> 0x801A2834
void zNPCBiplaneSteering::SetControl(class zNPCBiplaneSteering * this /* r30 */, class zNPCSteeringControl * control /* r31 */) {
    // Local variables
    class zNPCSteeringControl * oldControl; // r0
}
// signature: zNPCBiplaneSteering::RemoveControl(zNPCSteeringControl *)
// Range: 0x801A2840 -> 0x801A28AC
void zNPCBiplaneSteering::RemoveControl(class zNPCBiplaneSteering * this /* r31 */) {
}
// signature: zNPCBiplaneSteering::ApplySteering(float)
// Range: 0x801A28B0 -> 0x801A28D0
void zNPCBiplaneSteering::ApplySteering() {
}
// Range: 0x801A28D0 -> 0x801A2EEC
void zNPCBiplaneSteering::ApplyControlsToHeading(class zNPCBiplaneSteering * this /* r30 */, float dt /* f26 */) {
    // Local variables
    float goalYaw; // f31
    float goalRoll; // f30
    float goalPitch; // f29
    float yawAngle; // f28
    float pitchAngle; // f25
    float rollAngle; // f26
    class xQuat yawQuat; // r1+0x38
    class xQuat pitchQuat; // r1+0x28
    class xQuat rollQuat; // r1+0x18

    {
        // Range: 0x801A29B0 -> 0x801A2D7C
        // Local variables
        float maxPitchRatio; // f27

        {
            // Range: 0x801A29D0 -> 0x801A2AD4
            // Local variables
            float pitchShift; // f2
        }
        {
            // Range: 0x801A2AD8 -> 0x801A2D10
            // Local variables
            float yawShift; // f4
            class xVec2 xzAtVec; // r1+0x8
            class xVec2 xzCollisionNormal; // r1+0x10
        }
    }
}
// Range: 0x801A2EF0 -> 0x801A3134
void zNPCBiplaneSteering::PostUpdate(class zNPCBiplaneSteering * this /* r30 */, float dt /* f31 */) {
    // Local variables
    class zNPCEntity * npcEnt; // r31
    class hkRotation hkNewRot; // r1+0x60
    class zBiplanePlayer * enemyPlayer; // r0
    float specWeapsRange; // f0
    float maxRange2; // f7
    float curRange2; // f0
    class xVec3 toTarget; // r1+0x50

    // References
    // -> class xGlobals * xglobals;
}
// signature: zNPCBiplaneMoveToControl::Enter(const zNPCSteeringControl *)
// Range: 0x801A3150 -> 0x801A316C
void zNPCBiplaneMoveToControl::Enter() {
}
// signature: zNPCBiplaneMoveToControl::CalculateAcc(xVec3 *, float)
// Range: 0x801A3170 -> 0x801A3490
void zNPCBiplaneMoveToControl::CalculateAcc(class zNPCBiplaneMoveToControl * this /* r30 */, class xVec3 * acc /* r31 */) {
    // Local variables
    class xVec3 toTarget; // r1+0x18
    class xVec2 rightXZ; // r1+0x10
    class xVec2 goalXZ; // r1+0x8
    float rightDotProd; // f0
    float atDotProd; // f0
}
// signature: zNPCBiplaneSpecialControl::Enter(const zNPCSteeringControl *)
// Range: 0x801A3490 -> 0x801A3518
void zNPCBiplaneSpecialControl::Enter(class zNPCBiplaneSpecialControl * this /* r30 */) {
}
// Range: 0x801A3520 -> 0x801A3BBC
void zNPCBiplaneSpecialControl::CalculateAcc(class zNPCBiplaneSpecialControl * this /* r29 */, class xVec3 * acc /* r30 */, float dt /* f31 */) {
    {
        // Range: 0x801A35CC -> 0x801A3688
        // Local variables
        class zNPCBiplaneSteering * biplaneSteering; // r6
    }
    {
        // Range: 0x801A3690 -> 0x801A37D8
        // Local variables
        class xVec2 curXZUp; // r1+0x58
    }
    {
        // Range: 0x801A37E8 -> 0x801A398C
        // Local variables
        class xVec2 xzAt; // r1+0x50
    }
    {
        // Range: 0x801A398C -> 0x801A3AE0
        // Local variables
        class xVec2 xzAt; // r1+0x48
    }
    {
        // Range: 0x801A3AE0 -> 0x801A3B98
        // Local variables
        class xVec2 curXZPos; // r1+0x38
        class xVec2 curGoalAim; // r1+0x40
    }
}
