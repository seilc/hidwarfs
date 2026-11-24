/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zPhysicsObject.cpp
*/
// signature: zPhysicsObject::CreatePhysicsObject(World::ModelInstanceAsset *, xVec3 *, float, float, float, Sext::magCharge, bool, Sext::zPOWGroupAsset::eCollisionLayer)
// Range: 0x80165FF0 -> 0x80166588
void zPhysicsObject::CreatePhysicsObject(class zPhysicsObject * this /* r29 */, class xVec3 * position /* r30 */, float elasticity /* f29 */, float friction /* f30 */, float mass /* f31 */, enum magCharge magnetBehavior /* r31 */, bool collisionDisabled /* r28 */, enum eCollisionLayer collisionLayer /* r27 */) {
    // Local variables
    class ModelPrototypeEntity * proto; // r0
    class hkpShape * p_body_shape; // r0
    class hkpRigidBody * * rigidBody; // r0
    class xQuat quat; // r1+0xA0

    {
        // Range: 0x8016615C -> 0x80166190
        // Local variables
        class hkpPropertyValue val; // r1+0x40
    }
    {
        // Range: 0x80166194 -> 0x801661C0
        // Local variables
        class hkpPropertyValue val; // r1+0x38
    }

    // References
    // -> float hkUFloat8_intToReal[256];
    // -> class CHavokShapeBuilder * s_instance;
}
// signature: zPhysicsObject::Update(float)
// Range: 0x80166650 -> 0x801668C0
bool zPhysicsObject::Update(class zPhysicsObject * this /* r31 */) {
    {
        // Range: 0x80166840 -> 0x8016689C
        // Local variables
        class hkTransform tempXform; // r1+0x10
    }

    // References
    // -> class zFactory factory;
    // -> bool gSysForceExit;
}
// Range: 0x80166920 -> 0x8016693C
class xVec3 * zPhysicsObject::GetPos() {
}
