/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zPhysicsObject.cpp
*/
// signature: zPhysicsObjectEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801F31D0 -> 0x801F31EC
static void zPhysicsObjectEventWrapper(class xBase * from /* r0 */) {
}
// signature: zPhysicsObject::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801F31F0 -> 0x801F328C
void zPhysicsObject::HandleEvent() {
    {
        // Range: 0x801F3224 -> 0x801F3270
        // Local variables
        class hkVector4 newVelocity; // r1+0x10
        class EventActionHit * hitParams; // r0
    }
}
// signature: zPhysicsObject::CreatePhysicsObject(World::ModelInstanceAsset *, xVec3 *, float, float, float, float, float, bool, Sext::magCharge, bool, Sext::zPOWGroupAsset::eCollisionLayer)
// Range: 0x801F3290 -> 0x801F3720
void zPhysicsObject::CreatePhysicsObject(class zPhysicsObject * this /* r28 */, class xVec3 * position /* r29 */, float linearDamping /* f27 */, float angularDamping /* f28 */, float elasticity /* f29 */, float friction /* f30 */, float mass /* f31 */, bool noActivateOnAdd /* r30 */, enum magCharge magnetBehavior /* r31 */, bool collisionDisabled /* r25 */, enum eCollisionLayer collisionLayer /* r24 */) {
    // Local variables
    class ModelPrototypeEntity * proto; // r0
    class hkpShape * p_body_shape; // r0
    class hkpRigidBody * & rigidBody; // r0
    class xQuat quat; // r1+0xD0

    {
        // Range: 0x801F3528 -> 0x801F355C
        // Local variables
        class hkpPropertyValue val; // r1+0x40
    }
    {
        // Range: 0x801F3560 -> 0x801F358C
        // Local variables
        class hkpPropertyValue val; // r1+0x38
    }

    // References
    // -> class CHavokShapeBuilder * s_instance;
}
// signature: zPhysicsObject::Update(float)
// Range: 0x801F3840 -> 0x801F3AD8
bool zPhysicsObject::Update(class zPhysicsObject * this /* r31 */) {
    {
        // Range: 0x801F3A58 -> 0x801F3AB4
        // Local variables
        class hkTransform tempXform; // r1+0x10
    }

    // References
    // -> class zFactory factory;
    // -> bool gSysForceExit;
    // -> bool gSoundReadyToExit;
}
// Range: 0x801F3B30 -> 0x801F3FDC
void zPhysicsObject::SetPos(class zPhysicsObject * this /* r30 */, class xVec3 * newPos /* r31 */, float dt /* f31 */) {
    // Local variables
    class xQuat quat; // r1+0x50
    class xMat3x3 tempMat; // r1+0x60

    {
        // Range: 0x801F3EE8 -> 0x801F3FB4
        // Local variables
        enum MotionType moType; // r0
    }
}
// Range: 0x801F3FE0 -> 0x801F50AC
void zPhysicsObject::Render() {
    // References
    // -> float dt;
    // -> class Renderable3DTransform g_identity;
}
// Range: 0x801F50B0 -> 0x801F50CC
class xVec3 * zPhysicsObject::GetPos() {
}
