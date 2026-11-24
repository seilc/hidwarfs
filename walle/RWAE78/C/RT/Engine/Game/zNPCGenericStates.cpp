/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zNPCGenericStates.cpp
*/
class zNPCSteeringGenericParams jumpStartEndSteeringParams; // size: 0x58, address: 0x807914E8
class zNPCSteeringGenericParams jumpInAirSteeringParams; // size: 0x58, address: 0x80791540
// signature: zAnimPlayState::CheckTransitions(zNPCBase *, eCheckTrasitionStatus)
// Range: 0x80115EE0 -> 0x801160E0
void zAnimPlayState::CheckTransitions() {
}
// signature: zAnimPlayState::Activate(zNPCBase *)
// Range: 0x801160E0 -> 0x8011610C
void zAnimPlayState::Activate() {
}
// signature: zGenericAnimStateWSteering::Enter(zNPCBase *)
// Range: 0x80116110 -> 0x8011621C
void zGenericAnimStateWSteering::Enter(class zGenericAnimStateWSteering * this /* r30 */) {
}
// signature: zGenericAnimStateWSteering::Activate(zNPCBase *)
// Range: 0x80116260 -> 0x801162F8
void zGenericAnimStateWSteering::Activate(class zGenericAnimStateWSteering * this /* r30 */) {
}
// Range: 0x80116300 -> 0x80116514
void zGenericAnimStateWSteering::Update(class zGenericAnimStateWSteering * this /* r29 */, class zNPCBase * owner /* r30 */, float dt /* f30 */) {
    {
        // Range: 0x80116360 -> 0x801164E8
        // Local variables
        float leanAmt; // f0
        float turnRate; // f4
    }
}
// signature: zGenericMoveToState::CheckTransitions(zNPCBase *, eCheckTrasitionStatus)
// Range: 0x80116530 -> 0x801169FC
void zGenericMoveToState::CheckTransitions(class zGenericMoveToState * this /* r27 */, enum eCheckTrasitionStatus status /* r28 */) {
    // Local variables
    float boundR; // f0
    bool destinationReachable; // r0
    class xVec3 * currentDestination; // r0
}
// Range: 0x80116A20 -> 0x80116DA0
void zGenericAlignState::Enter(class zGenericAlignState * this /* r31 */, class zNPCBase * owner /* r29 */) {
    // Local variables
    float distance; // f0

    // References
    // -> class xVec3 m_UnitAxisX;
}
// Range: 0x80116DA0 -> 0x801172B8
void zGenericAlignState::Update(class zGenericAlignState * this /* r30 */, class zNPCBase * owner /* r31 */, float dt /* f31 */) {
    // Local variables
    float distance; // f0
    float turnRangeCheck; // f2

    // References
    // -> class xVec3 m_UnitAxisX;
}
// signature: zGenericAlignState::CheckTransitions(zNPCBase *, eCheckTrasitionStatus)
// Range: 0x801172C0 -> 0x801179B4
void zGenericAlignState::CheckTransitions(class zGenericAlignState * this /* r31 */, enum eCheckTrasitionStatus status /* r25 */) {
    // Local variables
    bool destinationReachable; // r0
    class xVec3 * currentDestination; // r0
    float curDist2; // f0

    {
        // Range: 0x80117768 -> 0x80117984
        // Local variables
        float boundR; // f0
    }
}
// signature: zGenericMoveToRangeState::CheckTransitions(zNPCBase *, eCheckTrasitionStatus)
// Range: 0x801179C0 -> 0x80118134
void zGenericMoveToRangeState::CheckTransitions(class zGenericMoveToRangeState * this /* r31 */, enum eCheckTrasitionStatus status /* r26 */) {
    // Local variables
    float boundR; // f0
    float checkDist; // f30
    bool destinationReachable; // r0
    class xVec3 * wantedDestinationPos; // r27
    class xVec3 * currentDestination; // r0
}
// signature: zGenericStopState::CheckTransitions(zNPCBase *, eCheckTrasitionStatus)
// Range: 0x80118140 -> 0x80118264
void zGenericStopState::CheckTransitions() {
}
// signature: zGenericTurnState::CheckTransitions(zNPCBase *, eCheckTrasitionStatus)
// Range: 0x80118270 -> 0x801186BC
void zGenericTurnState::CheckTransitions(class zGenericTurnState * this /* r29 */) {
}
// Range: 0x801186C0 -> 0x80118A80
void zGenericOneShotAnimationState::Update(class zGenericOneShotAnimationState * this /* r31 */, class zNPCBase * owner /* r28 */, float dt /* f30 */) {
}
// signature: zGenericNShotAnimationState::Enter(zNPCBase *)
// Range: 0x80118A80 -> 0x80118AB4
void zGenericNShotAnimationState::Enter(class zGenericNShotAnimationState * this /* r31 */) {
}
// Range: 0x80118AC0 -> 0x80118EB4
void zGenericNShotAnimationState::Update(class zGenericNShotAnimationState * this /* r30 */, class zNPCBase * owner /* r31 */, float dt /* f30 */) {
}
// signature: zGenericTimerState::Enter(zNPCBase *)
// Range: 0x80118EC0 -> 0x80118ED0
void zGenericTimerState::Enter() {
}
// Range: 0x80118ED0 -> 0x801190F0
void zGenericTimerState::Update(class zGenericTimerState * this /* r29 */, class zNPCBase * owner /* r30 */, float dt /* f31 */) {
}
// signature: zGenericTimerState::CheckTransitions(zNPCBase *, eCheckTrasitionStatus)
// Range: 0x801190F0 -> 0x80119210
void zGenericTimerState::CheckTransitions() {
}
// signature: zGenericFleeState::CheckTransitions(zNPCBase *, eCheckTrasitionStatus)
// Range: 0x80119210 -> 0x801194AC
void zGenericFleeState::CheckTransitions() {
    // Local variables
    float realFleeDist; // f0
    class xVec3 * checkPos; // r7
}
// signature: zGenericSequencerState::Enter(zNPCBase *)
// Range: 0x801194B0 -> 0x80119704
void zGenericSequencerState::Enter() {
}
// signature: zGenericSequencerState::Resume(zNPCBase *, eStatePopMsg, int)
// Range: 0x80119860 -> 0x80119ABC
void zGenericSequencerState::Resume() {
}
// signature: zGenericDistanceSwitchState::Enter(zNPCBase *)
// Range: 0x80119AC0 -> 0x80119F38
void zGenericDistanceSwitchState::Enter(class zGenericDistanceSwitchState * this /* r31 */) {
    // Local variables
    float distance2; // f0
    enum eDistanceLinguistic curDist; // r0
}
// signature: zGenericDistanceSwitchState::Resume(zNPCBase *, eStatePopMsg, int)
// Range: 0x80119F90 -> 0x8011A130
void zGenericDistanceSwitchState::Resume(class zGenericDistanceSwitchState * this /* r29 */, int popMsgFromStateEnum /* r30 */) {
    // Local variables
    float distance2; // f0
    enum eDistanceLinguistic curDist; // r0
}
// signature: zGenericDistanceSwitchState::UpdatePassive(zNPCBase *, float)
// Range: 0x8011A2F0 -> 0x8011B230
void zGenericDistanceSwitchState::UpdatePassive(class zGenericDistanceSwitchState * this /* r31 */) {
    // Local variables
    float distance2; // f0
    enum eDistanceLinguistic curDist; // r0
}
// signature: zGenericJumpToDestState::Activate(zNPCBase *)
// Range: 0x8011B230 -> 0x8011B2F0
void zGenericJumpToDestState::Activate(class zGenericJumpToDestState * this /* r29 */) {
    // References
    // -> class zNPCSteeringGenericParams jumpStartEndSteeringParams;
}
// signature: zGenericJumpToDestState::Update(zNPCBase *, float)
// Range: 0x8011B2F0 -> 0x8011B6AC
void zGenericJumpToDestState::Update(class zGenericJumpToDestState * this /* r31 */) {
    // Local variables
    enum eSteeringResultOld steeringResult; // r0

    // References
    // -> class zNPCSteeringGenericParams jumpStartEndSteeringParams;
    // -> class zNPCSteeringGenericParams jumpInAirSteeringParams;
}
// signature: zGenericLookoutState::RandomizeALookoutAngle(float, float, bool, float *, float)
// Range: 0x8011B6B0 -> 0x8011BA90
float zGenericLookoutState::RandomizeALookoutAngle(float initialAngle /* f28 */, float angleRange /* f29 */, float * ignoreAngle /* r30 */, float lookoutBeta /* f30 */) {
    {
        // Range: 0x8011B6F8 -> 0x8011B8B8
        // Local variables
        float randomAngle; // f0

        {
            // Range: 0x8011B71C -> 0x8011B888
            // Local variables
            float localIgnoreAngle; // f31

            {
                // Range: 0x8011B724 -> 0x8011B888
                // Local variables
                float randAngle; // f1
                float randBeta; // f1
            }
        }
    }
    {
        // Range: 0x8011B8B8 -> 0x8011BA40
        // Local variables
        float randomSideAngle; // f0

        {
            // Range: 0x8011B8B8 -> 0x8011B9D8
            // Local variables
            float randBeta; // f0
            float localIgnoreAngle; // f31
        }
    }
}
// Range: 0x8011BA90 -> 0x8011BE04
void zGenericLookoutState::Enter(class zGenericLookoutState * this /* r30 */, class zNPCBase * owner /* r31 */) {
    // Local variables
    float randomLookoutAngle; // f30
}
// signature: zGenericLookoutState::Resume(zNPCBase *, eStatePopMsg, int)
// Range: 0x8011BE10 -> 0x8011C5E4
void zGenericLookoutState::Resume(class zGenericLookoutState * this /* r31 */, class zNPCBase * owner /* r29 */) {
    {
        // Range: 0x8011BE48 -> 0x8011C020
        // Local variables
        class zGenericAnimStateWSteering * state; // r0
    }
    {
        // Range: 0x8011C024 -> 0x8011C234
        // Local variables
        float lookEndTime; // f0
        class zGenericTimerState * state; // r0
    }
    {
        // Range: 0x8011C244 -> 0x8011C4C0
        // Local variables
        class zGenericAnimStateWSteering * state; // r0
        float lastLookoutAngle; // r1+0x8
        float randomLookoutAngle; // f31
    }
}
// Range: 0x8011C5F0 -> 0x8011C608
void zAnimSignalerFXInfoNode::Attached() {
}
// signature: zAnimSignalerFXInfoNode::Update(float)
// Range: 0x8011C610 -> 0x8011C78C
void zAnimSignalerFXInfoNode::Update(class zAnimSignalerFXInfoNode * this /* r31 */) {
    // Local variables
    float curAnimTime; // f0

    {
        // Range: 0x8011C6D4 -> 0x8011C750
        // Local variables
        int i; // r28
    }
}
