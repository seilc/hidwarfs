/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zNPCStandardStates.cpp
*/
// signature: zNPCStateStandardAnimWithSteering::SetupAnim(const char *, float, float, const zStandardStatesLeanData *)
// Range: 0x8012C700 -> 0x8012C7A0
void zNPCStateStandardAnimWithSteering::SetupAnim(class zNPCStateStandardAnimWithSteering * this /* r30 */, float _blendTime /* f30 */, float _animStartTime /* f31 */, class zStandardStatesLeanData * _leanData /* r31 */) {
}
// signature: zNPCStateStandardAnimWithSteering::SetupSteering(const zNPCSteeringGenericParams *)
// Range: 0x8012C7A0 -> 0x8012C8A0
void zNPCStateStandardAnimWithSteering::SetupSteering() {
}
// signature: zNPCStateStandardAnimWithSteering::SetDestination(const xVec3 &)
// Range: 0x8012C8A0 -> 0x8012C8E4
void zNPCStateStandardAnimWithSteering::SetDestination() {
}
// signature: zNPCStateStandardAnimWithSteering::SetDestinationPtr(const xVec3 *)
// Range: 0x8012C8F0 -> 0x8012C91C
void zNPCStateStandardAnimWithSteering::SetDestinationPtr() {
}
// signature: zNPCStateStandardAnimWithSteering::SetFacing(const xVec3 &)
// Range: 0x8012C920 -> 0x8012C964
void zNPCStateStandardAnimWithSteering::SetFacing() {
}
// signature: zNPCStateStandardAnimWithSteering::SetFacingPtr(const xVec3 *)
// Range: 0x8012C970 -> 0x8012C99C
void zNPCStateStandardAnimWithSteering::SetFacingPtr() {
}
// signature: zNPCStateStandardAnimWithSteering::SetDestinationVel(const xVec3 &)
// Range: 0x8012C9A0 -> 0x8012C9E4
void zNPCStateStandardAnimWithSteering::SetDestinationVel() {
}
// signature: zNPCStateStandardAnimWithSteering::SetDestinationVelPtr(const xVec3 *)
// Range: 0x8012C9F0 -> 0x8012CA1C
void zNPCStateStandardAnimWithSteering::SetDestinationVelPtr() {
}
// signature: zNPCStateStandardAnimWithSteering::Enter(zNPCBase *)
// Range: 0x8012CA20 -> 0x8012CAE4
void zNPCStateStandardAnimWithSteering::Enter(class zNPCStateStandardAnimWithSteering * this /* r30 */) {
}
// signature: zNPCStateStandardAnimWithSteering::Activate(zNPCBase *)
// Range: 0x8012CAF0 -> 0x8012CB7C
void zNPCStateStandardAnimWithSteering::Activate(class zNPCStateStandardAnimWithSteering * this /* r30 */) {
}
// Range: 0x8012CB80 -> 0x8012CD90
void zNPCStateStandardAnimWithSteering::Update(class zNPCStateStandardAnimWithSteering * this /* r29 */, class zNPCBase * owner /* r30 */, float dt /* f30 */) {
    {
        // Range: 0x8012CBE0 -> 0x8012CD64
        // Local variables
        float leanAmt; // f0
        float turnRate; // f4
    }
}
// signature: zNPCStateStandardMove::SetDestination(const xVec3 &)
// Range: 0x8012CD90 -> 0x8012CDBC
void zNPCStateStandardMove::SetDestination() {
}
// signature: zNPCStateStandardMove::SetDestinationPtr(const xVec3 *)
// Range: 0x8012CDC0 -> 0x8012CE34
void zNPCStateStandardMove::SetDestinationPtr() {
}
// Range: 0x8012CE40 -> 0x8012D1E0
void zNPCStateStandardMove::Update(class zNPCStateStandardMove * this /* r28 */, class zNPCBase * owner /* r29 */, float dt /* f31 */) {
    // Local variables
    float distance; // f0

    // References
    // -> class xVec3 m_UnitAxisX;
}
// signature: zNPCStateStandardMove::CheckTransitions(zNPCBase *, eCheckTrasitionStatus)
// Range: 0x8012D1E0 -> 0x8012D6B4
void zNPCStateStandardMove::CheckTransitions(class zNPCStateStandardMove * this /* r25 */, enum eCheckTrasitionStatus status /* r26 */) {
    // Local variables
    bool destinationReachable; // r0
    class xVec3 * currentDestination; // r0
}
// Range: 0x8012D6C0 -> 0x8012DBC0
void zNPCStateStandardFollowPath::Update(class zNPCStateStandardFollowPath * this /* r31 */, class zNPCBase * owner /* r28 */, float dt /* f31 */) {
    // Local variables
    float distance; // f0

    // References
    // -> class xVec3 m_UnitAxisX;
}
// Range: 0x8012DBC0 -> 0x8012DC38
void zNPCStateStandardFollowPath::CheckTransitions(class zNPCStateStandardFollowPath * this /* r29 */, class zNPCBase * owner /* r30 */, enum eCheckTrasitionStatus status /* r31 */) {
    // Local variables
    bool destinationReachable; // r0
}
// Range: 0x8012DC40 -> 0x8012DFF8
void zNPCStateStandardAnimateOnce::Update(class zNPCStateStandardAnimateOnce * this /* r31 */, class zNPCBase * owner /* r28 */, float dt /* f30 */) {
}
// signature: zNPCStateStandardMain::Enter(zNPCBase *)
// Range: 0x8012E000 -> 0x8012E144
void zNPCStateStandardMain::Enter() {
}
// signature: zNPCStateStandardJumpTo::Enter(zNPCBase *)
// Range: 0x8012E150 -> 0x8012E15C
void zNPCStateStandardJumpTo::Enter() {
}
// signature: zNPCStateStandardJumpTo::Update(zNPCBase *, float)
// Range: 0x8012E170 -> 0x8012E528
void zNPCStateStandardJumpTo::Update(class zNPCStateStandardJumpTo * this /* r31 */) {
    // Local variables
    enum eSteeringResultOld steeringResult; // r0
}
// signature: zNPCStateStandardJumpPath::Activate(zNPCBase *)
// Range: 0x8012E530 -> 0x8012E534
void zNPCStateStandardJumpPath::Activate() {
}
// signature: zNPCStateStandardJumpPath::CheckTransitions(zNPCBase *, eCheckTrasitionStatus)
// Range: 0x8012E550 -> 0x8012E5E0
void zNPCStateStandardJumpPath::CheckTransitions(class zNPCStateStandardJumpPath * this /* r31 */) {
}
// Range: 0x8012E5E0 -> 0x8012E7B8
void zNPCStateStandardCustomAnimation::SetupAnimByIndex(class zNPCStateStandardCustomAnimation * this /* r30 */, int animationPostfix /* r0 */, float blendTime /* f30 */, float animStartTime /* f31 */, class zStandardStatesLeanData * leanData /* r31 */) {
    // Local variables
    char * baseCustomName; // r28
    char customName[20]; // r1+0x8
}
// Range: 0x8012E7C0 -> 0x8012EB1C
void zNPCStateStandardCustomSequence::SetupAnimByIndex(class zNPCStateStandardCustomSequence * this /* r26 */, int sequenceNumber /* r27 */, float blendTime /* f30 */, float animStartTime /* f31 */, class zStandardStatesLeanData * leanData /* r28 */) {
    // Local variables
    char * baseSequenceEnter; // r31
    char * baseSequenceLoop; // r30
    char * baseSequenceExit; // r29
}
// Range: 0x8012EB20 -> 0x8012F180
void zNPCStateStandardCustomSequence::Update(class zNPCStateStandardCustomSequence * this /* r28 */, class zNPCBase * owner /* r29 */, float dt /* f31 */) {
}
// signature: zNPCStateStandardIdle::SetupAnimations(const char *, const char *, float, float)
// Range: 0x8012F180 -> 0x8012F1F8
void zNPCStateStandardIdle::SetupAnimations(class zNPCStateStandardIdle * this /* r30 */, char * commonFidget /* r31 */, float blendTime /* f30 */, float animStartTime /* f31 */) {
}
// signature: zNPCStateStandardIdle::AddRareFidget(const char *)
// Range: 0x8012F200 -> 0x8012F24C
void zNPCStateStandardIdle::AddRareFidget(class zNPCStateStandardIdle * this /* r31 */) {
}
// signature: zNPCStateStandardIdle::Activate(zNPCBase *)
// Range: 0x8012F250 -> 0x8012F2EC
void zNPCStateStandardIdle::Activate(class zNPCStateStandardIdle * this /* r30 */) {
}
// Range: 0x8012F2F0 -> 0x8012F674
void zNPCStateStandardIdle::Update(class zNPCStateStandardIdle * this /* r29 */, class zNPCBase * owner /* r30 */, float dt /* f31 */) {
}
// signature: zNPCStateStandardTeleport::Update(zNPCBase *, float)
// Range: 0x8012F680 -> 0x8012F79C
void zNPCStateStandardTeleport::Update() {
}
