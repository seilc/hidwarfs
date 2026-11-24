/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zPhysicsObject.cpp
*/
// signature: zPhysicsObject::zPhysicsObject(World::EntityHandleBase *)
// Range: 0x80103FD0 -> 0x80104038
void * zPhysicsObject::zPhysicsObject(class zPhysicsObject * this /* r31 */) {
    // References
    // -> struct {} __vt__14zPhysicsObject;
}
// signature: zPhysicsObjectEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80104040 -> 0x8010405C
static void zPhysicsObjectEventWrapper(class xBase * from /* r0 */) {
}
// signature: zPhysicsObject::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80104060 -> 0x801040E4
void zPhysicsObject::HandleEvent(class zPhysicsObject * this /* r31 */) {
    {
        // Range: 0x8010408C -> 0x801040CC
        // Local variables
        class hkVector4 newVelocity; // r1+0x10
        class EventActionHit * hitParams; // r0
    }
}
// Range: 0x801040F0 -> 0x80104160
void zPhysicsObject::CreateComponents(class zPhysicsObject * this /* r31 */) {
    // References
    // -> class xMat4x3 g_I3;
    // -> class Factory factory;
}
// Range: 0x80104160 -> 0x801042B0
bool zPhysicsObject::SetupPhysicsObject(class zPhysicsObject * this /* r25 */, class zPOWGroup * theOwner /* r11 */, class ModelInstanceAsset * model /* r26 */, class xVec3 * position /* r27 */, float linearDamping /* f27 */, float angularDamping /* f28 */, float elasticity /* f29 */, float friction /* f30 */, float mass /* f31 */, bool noActivateOnAdd /* r28 */, enum magCharge magnetBehavior /* r29 */, bool collisionDisabled /* r30 */, enum eCollisionLayer collisionLayer /* r31 */) {
}
// signature: zPhysicsObject::Reset(zPOWGroup *, World::ModelInstanceAsset *, xVec3 *, float, float, float, float, float, bool, Sext::magCharge, bool, Sext::eCollisionLayer)
// Range: 0x801042B0 -> 0x801043D4
bool zPhysicsObject::Reset(class zPhysicsObject * this /* r25 */, class ModelInstanceAsset * model /* r26 */, class xVec3 * position /* r27 */, float linearDamping /* f27 */, float angularDamping /* f28 */, float elasticity /* f29 */, float friction /* f30 */, float mass /* f31 */, bool noActivateOnAdd /* r28 */, enum magCharge magnetBehavior /* r29 */, bool collisionDisabled /* r30 */, enum eCollisionLayer collisionLayer /* r31 */) {
}
// signature: zPhysicsObject::CreatePhysicsObject(World::ModelInstanceAsset *, xVec3 *, float, float, float, float, float, bool, Sext::magCharge, bool, Sext::eCollisionLayer)
// Range: 0x801043E0 -> 0x801047BC
void zPhysicsObject::CreatePhysicsObject(class zPhysicsObject * this /* r28 */, class xVec3 * position /* r29 */, float linearDamping /* f27 */, float angularDamping /* f28 */, float elasticity /* f29 */, float friction /* f30 */, float mass /* f31 */, bool noActivateOnAdd /* r30 */, enum magCharge magnetBehavior /* r31 */, bool collisionDisabled /* r24 */, enum eCollisionLayer collisionLayer /* r27 */) {
    // Local variables
    class ModelPrototypeEntity * proto; // r0
    class hkpShape * p_body_shape; // r26
    class hkpRigidBody * & rigidBody; // r0
    class xQuat quat; // r1+0xA0

    {
        // Range: 0x801045D8 -> 0x8010460C
        // Local variables
        class hkpPropertyValue val; // r1+0x40
    }
    {
        // Range: 0x80104610 -> 0x8010463C
        // Local variables
        class hkpPropertyValue val; // r1+0x38
    }

    // References
    // -> class CHavokShapeBuilder * s_instance;
}
// Range: 0x801048B0 -> 0x80104904
void zPhysicsObject::CleanupPhysicsObject(class zPhysicsObject * this /* r31 */) {
}
// Range: 0x80104910 -> 0x80104954
void zPhysicsObject::RemoveFromSimWorld(class zPhysicsObject * this /* r31 */) {
}
// Range: 0x80104960 -> 0x80104AA0
bool zPhysicsObject::Update(class zPhysicsObject * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x80104A38 -> 0x80104A7C
        // Local variables
        class hkTransform tempXform; // r1+0x10
    }

    // References
    // -> class Factory factory;
}
// Range: 0x80104AF0 -> 0x80104C60
void zPhysicsObject::SetPos(class zPhysicsObject * this /* r29 */, class xVec3 * newPos /* r30 */, float dt /* f31 */) {
    // Local variables
    class xQuat quat; // r1+0x50
    class xMat3x3 tempMat; // r1+0x60
}
// Range: 0x80104C60 -> 0x80104CA4
bool zPhysicsObject::CheckPhysicsObjectDeath() {
}
// Range: 0x80104CB0 -> 0x80104CD4
void zPhysicsObject::Render() {
}
// Range: 0x80104CE0 -> 0x80104D28
void zPhysicsObject::DestroyComponents(class zPhysicsObject * this /* r31 */) {
    // References
    // -> class Factory factory;
}
// Range: 0x80104D30 -> 0x80104D4C
class xVec3 * zPhysicsObject::GetPos() {
}
