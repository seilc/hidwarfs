/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xHavokPhysicsObject.h
*/
// signature: xHavokPhysicsObject::SystemApplyHavok1Param<const hkVector4 &>(void (hkpRigidBody::*)(const hkVector4 &)const , const hkVector4 &, xHavokPhysicsObject::SystemApplicationType)
// Range: 0x80009970 -> 0x80009A90
void xHavokPhysicsObject::SystemApplyHavok1Param<const hkVector4 &>(class xHavokPhysicsObject * this /* r24 */, void (hkpRigidBody::* & routine)(void * this, void * this, class hkVector4 &) /* r30 */, class hkVector4 & param /* r31 */) {
    {
        // Range: 0x80009990 -> 0x80009A7C
        {
            // Range: 0x800099AC -> 0x800099EC
            // Local variables
            class hkpRigidBody * * it; // r28

            {
                // Range: 0x800099AC -> 0x800099EC
                // Local variables
                class hkpRigidBody * body; // r3
            }
        }
        {
            // Range: 0x800099EC -> 0x80009A7C
            // Local variables
            unsigned int index; // r0
            class hkpPhysicsSystem * packedPhysicsSystem; // r0

            {
                // Range: 0x80009A00 -> 0x80009A7C
                // Local variables
                class hkpRigidBody * * it; // r26

                {
                    // Range: 0x80009A00 -> 0x80009A7C
                    // Local variables
                    class hkpRigidBody * packedBody; // r4
                    class hkpRigidBody * body; // r25
                }
            }
        }
    }
}
// Range: 0x80051640 -> 0x80051700
void * xHavokPhysicsObject::PhysicsJointRelativeTransforms::~PhysicsJointRelativeTransforms(class PhysicsJointRelativeTransforms * this /* r29 */) {
    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> struct {} __vt__Q219xHavokPhysicsObject30PhysicsJointRelativeTransforms;
}
