/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCatapult.cpp
*/
// signature: zCatapultCollisionListener::contactPointConfirmedCallback(hkpContactPointConfirmedEvent &)
// Range: 0x80153F30 -> 0x8015404C
void zCatapultCollisionListener::contactPointConfirmedCallback(class zCatapultCollisionListener * this /* r29 */) {
    // Local variables
    class xBase * item; // r30
}
// signature: zCatapultCollisionListener::contactPointAddedCallback(hkpContactPointAddedEvent &)
// Range: 0x80153F20 -> 0x80153F24
void zCatapultCollisionListener::contactPointAddedCallback() {
}
// signature: zCatapultCollisionListener::contactPointRemovedCallback(hkpContactPointRemovedEvent &)
// Range: 0x80153F10 -> 0x80153F14
void zCatapultCollisionListener::contactPointRemovedCallback() {
}
// Range: 0x80131550 -> 0x801315D0
void zCatapult::Setup(class zCatapult * this /* r31 */) {
}
// signature: zCatapult::Update(float)
// Range: 0x801315D0 -> 0x80131788
void zCatapult::Update(class zCatapult * this /* r31 */) {
    // Local variables
    float fraction; // f3

    {
        // Range: 0x801316C4 -> 0x80131770
        // Local variables
        class hkQuaternion & targetHavokOrientation; // r0
        class hkVector4 targetHavokPosition; // r1+0x10
        class xVec3 displacement; // r1+0x20
        class xVec3 targetPosition; // r1+0x2C
    }
}
// Range: 0x80131790 -> 0x801319E0
void zCatapult::Fire(class zCatapult * this /* r29 */, class xEnt * entity /* r30 */, class xVec3 & adjustment /* r31 */) {
    // Local variables
    class xVec3 targetDirection; // r1+0x14
    class xVec3 drift; // r1+0x8
    float aimedHeight; // f10
    float finalHeight; // f0
    float doubleArc; // f30
    float variableTerm; // f2
    float addB; // f3
    float subB; // f2
    float addA; // f4
    float subA; // f5
    float gravity; // f0
    float addAError; // f1
    float subAError; // f6

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> struct {} __vt__26zCatapultCollisionListener;
}
// signature: zCatapult::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801319F0 -> 0x80131BA8
void zCatapult::HandleEvent(class zCatapult * this /* r31 */, class EventAny * genericParams /* r30 */) {
    {
        // Range: 0x80131B08 -> 0x80131B54
        // Local variables
        class xVec3 adjustment; // r1+0x8
        class xBase * toParamWidgetPtr; // r5
        class EventActionLegacy * params; // r0
    }
}
// Range: 0x80131BB0 -> 0x80131CC4
class Entity * Sext::Catapult::Create(class EntityHandleBase * handle /* r29 */, class Catapult * asset /* r30 */) {
    // References
    // -> struct {} __vt__9zCatapult;
    // -> struct {} __vt__Q25World9xOGEntity;
}
