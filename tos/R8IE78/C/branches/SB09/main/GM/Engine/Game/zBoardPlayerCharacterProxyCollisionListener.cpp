/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zBoardPlayerCharacterProxyCollisionListener.cpp
*/
// Range: 0x80072980 -> 0x8007344C
void zBoardPlayerCharacterProxyCollisionListener::processConstraintsCallback(class zBoardPlayerCharacterProxyCollisionListener * this /* r15 */, class hkArray & manifold /* r16 */, class hkpSimplexSolverInput & input /* r14 */) {
    // Local variables
    class xEnt * pFloorEnt; // r28
    class xBase * pFloorBase; // r27
    int floorContact; // r1+0x2A8
    unsigned int floorShapeKey; // r1+0x2A4
    class hkpRigidBody * floorRigidBody; // r26
    class hkpSurfaceConstraintInfo * pConstraints; // r0
    class zSBPlayer * pPlayer; // r25
    class xBase * invincibilityDamagedObjects[8]; // r1+0x220
    int invincibilityDamagedObjectsCount; // r24

    {
        // Range: 0x80072A28 -> 0x80072FE0
        // Local variables
        int i; // r23

        {
            // Range: 0x80072A28 -> 0x80072FE0
            // Local variables
            class xVec3 oldNormal; // r1+0x1E0
            class xBase * baseB; // r5
            class xBase * baseA; // r4
            class hkpPhantom * phantomB; // r0
            class hkpPhantom * phantomA; // r17
            class hkpRigidBody * bodyB; // r18
            class hkpRigidBody * bodyA; // r19
            class hkpRigidBody * otherRigidBody; // r20
            unsigned int otherShapeKey; // r1+0x2A0
            class hkpWorldObject * otherHavokObj; // r21
            class xBase * otherBase; // r22
            class xVec3 newNormal; // r1+0x200
            class hkVector4 newhkNormal; // r1+0x210
            class hkpRootCdPoint point; // r1+0x270

            {
                // Range: 0x80072A28 -> 0x80072A28
                // Local variables
                class hkVector4 addedVel; // r1+0x1F0
                class zInflatablePlatform * platform; // r0
            }
            {
                // Range: 0x80072A28 -> 0x80072A2C
                // Local variables
                float temp_contact_y; // f0
                float temp_player_y; // f0
                class xEnt * pEnt; // r17
            }
            {
                // Range: 0x80072A2C -> 0x80072F2C
                // Local variables
                float speed; // f0
                class zProjectile * projectile; // r17

                {
                    // Range: 0x80072A2C -> 0x80072F2C
                    // Local variables
                    class ProjectileCollisionDetails collisionInfo; // r1+0x240
                    class hkpPropertyValue projNormal; // r1+0xB8
                    class hkpRigidBody * rigidBody; // r18
                }
            }
            {
                // Range: 0x80072F44 -> 0x80072FE0
                // Local variables
                int j; // r5

                {
                    // Range: 0x80072FA4 -> 0x80072FE0
                    // Local variables
                    class xEnt * targetEnt; // r0
                }
            }
        }
    }
    {
        // Range: 0x80072FEC -> 0x80073390
        // Local variables
        float newYaw; // f1
        float oldYaw; // f29
        class hkVector4 newAt; // r1+0x100
        class hkVector4 oldAt; // r1+0x110
        class hkVector4 forward; // r1+0x120
        class hkQuaternion newRot; // r1+0x130
        class hkQuaternion & oldRot; // r17
        class hkVector4 newPos; // r1+0x140
        class hkVector4 relPos; // r1+0x150
        class hkVector4 pos; // r1+0x160
        class hkQuaternion rotation; // r1+0x180
        class hkVector4 vel; // r1+0x190
        class hkVector4 angVel; // r1+0x1C0
        class hkVector4 linVel; // r1+0x1D0

        {
            // Range: 0x80073088 -> 0x800730E0
            // Local variables
            class hkVector4 addedVel; // r1+0x1A0
            class hkVector4 pos; // r1+0x1B0
            class zInflatablePlatform * platform; // r0
        }
        {
            // Range: 0x80073110 -> 0x8007316C
            // Local variables
            float angle; // f0
            class hkVector4 axis; // r1+0x170
        }
    }
    {
        // Range: 0x800733A0 -> 0x800733F0
        // Local variables
        class xVec3 velocity; // r1+0xE8
    }

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_Null;
}
// Range: 0x80073600 -> 0x80073734
void zBoardPlayerCharacterProxyCollisionListener::contactPointAddedCallback(class zBoardPlayerCharacterProxyCollisionListener * this /* r28 */, class hkpRootCdPoint & point /* r29 */) {
    // Local variables
    class hkVector4 newhkNormal; // r1+0x20
    class xVec3 newNormal; // r1+0x10
    class hkpRigidBody * bodyB; // r0
    class hkpPhantom * phantomB; // r0
    class hkpPhantom * phantomA; // r0
    class zSBPlayer * pPlayer; // r0

    {
        // Range: 0x8007367C -> 0x800736D0
        // Local variables
        class xBase * bodyBBase; // r0

        {
            // Range: 0x80073694 -> 0x800736D0
            // Local variables
            class zTrampoline * trampoline; // r0
        }
    }
    {
        // Range: 0x800736D4 -> 0x80073718
        // Local variables
        class xBase * phantomBBase; // r0

        {
            // Range: 0x800736E8 -> 0x80073718
            // Local variables
            class zNPCInfoNodeBouncer * bouncerNode; // r0
            class zNPCBase * npcBase; // r0
            class zNPCEntity * npcEntity; // r0
        }
    }
}
