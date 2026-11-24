/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCatapult.cpp
*/
class _OGCatapultSchema _OGCatapultschema; // size: 0x18, address: 0x8076BF10
class SchemaRegistrator _OGCatapultschemaReg; // size: 0x8, address: 0x8076BF28
// Range: 0x800ABD50 -> 0x800ABD60
void World::_OGCatapultEntity::Deactivate() {
}
// Range: 0x800ABD60 -> 0x800ABDB0
void World::_OGCatapultEntity::Destroy(class _OGCatapultEntity * this /* r31 */) {
}
// signature: World::_OGCatapultSchema::Fix(World::Asset *, long, int)
// Range: 0x800ABE10 -> 0x800ABE18
void World::_OGCatapultSchema::Fix() {
}
// signature: World::_OGCatapultSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800ABE20 -> 0x800ABE6C
class EntityStub * World::_OGCatapultSchema::CreateStub(class _OGCatapultSchema * this /* r31 */) {
}
// signature: World::_OGCatapultSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800ABE70 -> 0x800ABE88
void World::_OGCatapultSchema::DestroyStub() {
}
// signature: World::_OGCatapultSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800ABE90 -> 0x800ABEF8
class Entity * World::_OGCatapultSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World17_OGCatapultEntity;
}
// signature: zCatapultCollisionListener::contactPointConfirmedCallback(hkpContactPointConfirmedEvent &)
// Range: 0x800CB3A0 -> 0x800CB4C0
void zCatapultCollisionListener::contactPointConfirmedCallback(class zCatapultCollisionListener * this /* r29 */) {
    // Local variables
    class xBase * item; // r30
}
// signature: zCatapultCollisionListener::contactPointAddedCallback(hkpContactPointAddedEvent &)
// Range: 0x800CB390 -> 0x800CB394
void zCatapultCollisionListener::contactPointAddedCallback() {
}
// signature: zCatapultCollisionListener::contactPointRemovedCallback(hkpContactPointRemovedEvent &)
// Range: 0x800CB380 -> 0x800CB384
void zCatapultCollisionListener::contactPointRemovedCallback() {
}
// signature: zCatapult::Init(const xDynAsset &, unsigned long)
// Range: 0x800ABF40 -> 0x800ABFC4
void zCatapult::Init(class zCatapult * this /* r30 */, class xDynAsset * dynAsset /* r31 */) {
}
// Range: 0x800ABFE0 -> 0x800AC060
void zCatapult::Setup(class zCatapult * this /* r31 */) {
}
// signature: zCatapult::Update(float)
// Range: 0x800AC060 -> 0x800AC218
void zCatapult::Update(class zCatapult * this /* r31 */) {
    // Local variables
    float fraction; // f3

    {
        // Range: 0x800AC154 -> 0x800AC200
        // Local variables
        class hkQuaternion * targetHavokOrientation; // r0
        class hkVector4 targetHavokPosition; // r1+0x10
        class xVec3 displacement; // r1+0x20
        class xVec3 targetPosition; // r1+0x2C
    }
}
// Range: 0x800AC220 -> 0x800AC4C4
void zCatapult::Fire(class zCatapult * this /* r28 */, class xEnt * entity /* r29 */, class xVec3 * adjustment /* r30 */) {
    // Local variables
    class xVec3 targetDirection; // r1+0x14
    class xVec3 drift; // r1+0x8
    float aimedHeight; // f13
    float finalHeight; // f0
    float doubleArc; // f26
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
// Range: 0x800AC510 -> 0x800AC708
void zCatapult::HandleEvent(class zCatapult * this /* r31 */, class EventAny * genericParams /* r30 */) {
    {
        // Range: 0x800AC63C -> 0x800AC688
        // Local variables
        class xVec3 adjustment; // r1+0x8
        class xBase * toParamWidgetPtr; // r5
        class EventActionLegacy * params; // r0
    }
    {
        // Range: 0x800AC6C8 -> 0x800AC6F0
        // Local variables
        class xBase * toParamWidgetPtr; // r5
        class EventActionDrivenBy * params; // r0
    }
}
