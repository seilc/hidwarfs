/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xHavokPhysicsObject.h
*/
// signature: xHavokPhysicsObject::SystemApplyHavok1Param<const hkVector4 &>(void (hkpRigidBody::*)(const hkVector4 &)const , const hkVector4 &, xHavokPhysicsObject::SystemApplicationType)
// Range: 0x8000AA50 -> 0x8000AB80
void xHavokPhysicsObject::SystemApplyHavok1Param<const hkVector4 &>(void (hkpRigidBody::* & routine)(void * this, void * this, class hkVector4 &) /* r29 */, class hkVector4 & param /* r30 */) {
    {
        // Range: 0x8000AA6C -> 0x8000AB6C
        {
            // Range: 0x8000AA88 -> 0x8000AAAC
            // Local variables
            class hkpRigidBody * * it; // r27

            {
                // Range: 0x8000AA88 -> 0x8000AAAC
                // Local variables
                class hkpRigidBody * body; // r3
            }
        }
        {
            // Range: 0x8000AAC8 -> 0x8000AB6C
            // Local variables
            unsigned int index; // r0
            class hkpPhysicsSystem * packedPhysicsSystem; // r0

            {
                // Range: 0x8000AADC -> 0x8000AADC
                // Local variables
                class hkpRigidBody * * it; // r26

                {
                    // Range: 0x8000AADC -> 0x8000AADC
                    // Local variables
                    class hkpRigidBody * packedBody; // r4
                    class hkpRigidBody * body; // r3
                }
            }
        }
    }
}
// signature: xHavokPhysicsObject::SystemApplyHavok3Params<hkpMotion::MotionType, hkpEntityActivation, hkpUpdateCollisionFilterOnEntityMode>(void (hkpRigidBody::*)(hkpMotion::MotionType, hkpEntityActivation, hkpUpdateCollisionFilterOnEntityMode)const , hkpMotion::MotionType, hkpEntityActivation, hkpUpdateCollisionFilterOnEntityMode, xHavokPhysicsObject::SystemApplicationType)
// Range: 0x8000ABD0 -> 0x8000AD18
void xHavokPhysicsObject::SystemApplyHavok3Params<hkpMotion::MotionType, hkpEntityActivation, hkpUpdateCollisionFilterOnEntityMode>(void (hkpRigidBody::* & routine)(void * this, void * this, enum MotionType, enum hkpEntityActivation, enum hkpUpdateCollisionFilterOnEntityMode) /* r26 */, enum MotionType param1 /* r27 */, enum hkpEntityActivation param2 /* r28 */, enum hkpUpdateCollisionFilterOnEntityMode param3 /* r29 */) {
    {
        // Range: 0x8000ABF4 -> 0x8000AD04
        {
            // Range: 0x8000AC10 -> 0x8000AC3C
            // Local variables
            class hkpRigidBody * * it; // r24

            {
                // Range: 0x8000AC10 -> 0x8000AC3C
                // Local variables
                class hkpRigidBody * body; // r3
            }
        }
        {
            // Range: 0x8000AC58 -> 0x8000AD04
            // Local variables
            unsigned int index; // r0
            class hkpPhysicsSystem * packedPhysicsSystem; // r0

            {
                // Range: 0x8000AC6C -> 0x8000AC6C
                // Local variables
                class hkpRigidBody * * it; // r30

                {
                    // Range: 0x8000AC6C -> 0x8000AC6C
                    // Local variables
                    class hkpRigidBody * packedBody; // r4
                    class hkpRigidBody * body; // r3
                }
            }
        }
    }
}
// Range: 0x80007360 -> 0x800073A0
void * xHavokPhysicsObject::PhysicsJointRelativeTransforms::operator new(unsigned long nbytes /* r31 */) {
    // Local variables
    class hkReferencedObject * b; // r0

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x800073A0 -> 0x80007424
void * xHavokPhysicsObject::PhysicsJointRelativeTransforms::PhysicsJointRelativeTransforms() {
    // References
    // -> static class Matrix43 _matIdentity;
    // -> struct {} __vt__Q219xHavokPhysicsObject30PhysicsJointRelativeTransforms;
}
// Range: 0x80098D10 -> 0x80098F34
void * xHavokPhysicsObject::PhysicsJointRelativeTransforms::~PhysicsJointRelativeTransforms(class PhysicsJointRelativeTransforms * this /* r30 */) {
    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> struct {} __vt__Q219xHavokPhysicsObject30PhysicsJointRelativeTransforms;
}
