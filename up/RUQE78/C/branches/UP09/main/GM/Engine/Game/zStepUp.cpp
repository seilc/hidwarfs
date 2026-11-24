/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zStepUp.cpp
*/
// signature: Sext::zJumpZoneAsset::Create(World::EntityHandleBase *, Sext::zJumpZoneAsset *)
// Range: 0x800D8130 -> 0x800D81D4
class Entity * Sext::zJumpZoneAsset::Create(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__9zJumpZone;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x800D81E0 -> 0x800D8224
void zStepUp::Init(class zStepUp * this /* r30 */, void * inAsset /* r31 */) {
}
// Range: 0x800D8230 -> 0x800D8330
void zStepUp::Setup(class zStepUp * this /* r31 */) {
    // Local variables
    class Vector4 row_1; // r1+0x28
    class Vector4 row_2; // r1+0x18
    class Vector4 row_3; // r1+0x8
}
// Range: 0x800D8330 -> 0x800D8374
void zStepUp::Reset(class zStepUp * this /* r31 */) {
}
// signature: zStepUp::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800D8380 -> 0x800D8468
void zStepUp::HandleEvent(class zStepUp * this /* r29 */) {
}
// Range: 0x800D8470 -> 0x800D854C
class Entity * Sext::zStepUpAsset::Create(class EntityHandleBase * handle /* r29 */, class zStepUpAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__7zStepUp;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zStepUp::TimeStep(float)
// Range: 0x800D8550 -> 0x800D8554
void zStepUp::TimeStep() {
}
// Range: 0x800D8560 -> 0x800D86E4
bool zStepUp::CanStart(class zStepUp * this /* r30 */, class zCommonPlayer * player /* r31 */) {
    // Local variables
    unsigned int currentActionID; // r0

    // References
    // -> static class xBox sUnitBoxb;
}
// signature: zStepUp::GetAnimPackage(ePlayerName)
// Range: 0x800D86F0 -> 0x800D872C
class zAnimPackage * zStepUp::GetAnimPackage() {
}
// Range: 0x800D8730 -> 0x800D87C4
void zStepUp::ContextCheckForPresence(class zStepUp * this /* r29 */, class zCommonPlayer * player /* r30 */) {
    {
        // Range: 0x800D8750 -> 0x800D87A8
        // Local variables
        class zUpContextAction * ca; // r0
    }
}
// signature: StepUpCollisionCollector::StepUpCollisionCollector(zCommonPlayer *)
// Range: 0x800D8A40 -> 0x800D8A74
void * StepUpCollisionCollector::StepUpCollisionCollector() {
    // References
    // -> struct {} __vt__24StepUpCollisionCollector;
}
// Range: 0x801555D0 -> 0x80155674
void StepUpCollisionCollector::addCdBodyPair(class StepUpCollisionCollector * this /* r29 */, class hkpCdBody & bodyA /* r30 */, class hkpCdBody & bodyB /* r31 */) {
}
// Range: 0x800D87E0 -> 0x800D8A38
bool zStepUp::ClimbCheck(class zCommonPlayer * player /* r26 */) {
    // Local variables
    class xVec3 nextPos; // r1+0x5C
    class xVec3 newPos; // r1+0x50
    class hkpWorld * havokWorld; // r28
    class hkpSphereShape shape; // r1+0x68
    class hkMotionState motionState; // r1+0x120
    class hkpCollidable collA; // r1+0xD4
    class hkpCollisionInput * input; // r27
    class StepUpCollisionCollector collector; // r1+0x1D0
    int x; // r0

    {
        // Range: 0x800D895C -> 0x800D8A0C
        // Local variables
        class hkpCollidable collB; // r1+0x88
    }
}
