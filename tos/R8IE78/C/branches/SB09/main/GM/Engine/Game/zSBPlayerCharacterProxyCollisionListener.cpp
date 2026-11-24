/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zSBPlayerCharacterProxyCollisionListener.cpp
*/
// Range: 0x8015ADB0 -> 0x8015BB08
void zSBPlayerCharacterProxyCollisionListener::processConstraintsCallback(class zSBPlayerCharacterProxyCollisionListener * this /* r15 */, class hkArray & manifold /* r16 */, class hkpSimplexSolverInput & input /* r17 */) {
    // Local variables
    class xEnt * pFloorEnt; // r29
    class xBase * pFloorBase; // r28
    int floorContact; // r1+0x2F8
    unsigned int floorShapeKey; // r1+0x2F4
    class hkpRigidBody * floorRigidBody; // r27
    class hkpSurfaceConstraintInfo * pConstraints; // r0
    class zSBPlayer * pPlayer; // r26
    class xBase * invincibilityDamagedObjects[8]; // r1+0x210
    int invincibilityDamagedObjectsCount; // r25

    {
        // Range: 0x8015AE60 -> 0x8015B474
        // Local variables
        int i; // r24

        {
            // Range: 0x8015AE60 -> 0x8015B474
            // Local variables
            class xVec3 & oldNormal; // r0
            class xBase * baseB; // r5
            class xBase * baseA; // r4
            class hkpPhantom * phantomB; // r0
            class hkpPhantom * phantomA; // r18
            class hkpRigidBody * bodyB; // r19
            class hkpRigidBody * bodyA; // r20
            class hkpRigidBody * otherRigidBody; // r21
            unsigned int otherShapeKey; // r1+0x2F0
            class hkpWorldObject * otherHavokObj; // r22
            class xBase * otherBase; // r23
            class xVec3 newNormal; // r1+0x200
            class hkVector4 & newhkNormal; // r0
            class hkpRootCdPoint point; // r1+0x2C0

            {
                // Range: 0x8015AE60 -> 0x8015AE60
                // Local variables
                class hkVector4 addedVel; // r1+0x1F0
                class zInflatablePlatform * platform; // r0
            }
            {
                // Range: 0x8015AE60 -> 0x8015AE64
                // Local variables
                float temp_contact_y; // f0
                float temp_player_y; // f0
                class xEnt * pEnt; // r18
            }
            {
                // Range: 0x8015AE64 -> 0x8015B3A0
                // Local variables
                float speed; // f0
                class zProjectile * projectile; // r18

                {
                    // Range: 0x8015AE64 -> 0x8015B3A0
                    // Local variables
                    class ProjectileCollisionDetails collisionInfo; // r1+0x290
                    class hkpPropertyValue projNormal; // r1+0xB8
                    class hkpRigidBody * rigidBody; // r19
                }
            }
            {
                // Range: 0x8015B3B8 -> 0x8015B43C
                // Local variables
                int j; // r5
            }
            {
                // Range: 0x8015B444 -> 0x8015B474
                // Local variables
                class zSpinner * spinner; // r0
            }
        }
    }
    {
        // Range: 0x8015B480 -> 0x8015B7EC
        // Local variables
        float newYaw; // f1
        float oldYaw; // f29
        class hkVector4 newAt; // r1+0x110
        class hkVector4 oldAt; // r1+0x120
        class hkVector4 forward; // r1+0x130
        class hkQuaternion newRot; // r1+0x140
        class hkQuaternion & oldRot; // r18
        class hkVector4 newPos; // r1+0x150
        class hkVector4 relPos; // r1+0x160
        class hkVector4 pos; // r1+0x170
        class hkQuaternion rotation; // r1+0x190
        class hkVector4 vel; // r1+0x1A0
        class hkVector4 angVel; // r1+0x1D0
        class hkVector4 linVel; // r1+0x1E0

        {
            // Range: 0x8015B4E4 -> 0x8015B53C
            // Local variables
            class hkVector4 addedVel; // r1+0x1B0
            class hkVector4 pos; // r1+0x1C0
            class zInflatablePlatform * platform; // r0
        }
        {
            // Range: 0x8015B56C -> 0x8015B5C8
            // Local variables
            float angle; // f0
            class hkVector4 axis; // r1+0x180
        }
    }
    {
        // Range: 0x8015B7FC -> 0x8015B84C
        // Local variables
        class xVec3 velocity; // r1+0x100
    }
    {
        // Range: 0x8015B868 -> 0x8015B92C
        // Local variables
        float len; // f0
        class xVec3 floorNormal; // r1+0xF4

        {
            // Range: 0x8015B8C4 -> 0x8015B92C
            // Local variables
            int i; // r18

            {
                // Range: 0x8015B8C4 -> 0x8015B92C
                // Local variables
                class xVec3 newNormal; // r1+0xE8
                class hkVector4 & newhkNormal; // r0
                class hkpRootCdPoint point; // r1+0x260
            }
        }
    }
    {
        // Range: 0x8015B940 -> 0x8015BAD4
        // Local variables
        int currentConstraint; // r14

        {
            // Range: 0x8015B95C -> 0x8015BAD0
            // Local variables
            int i; // r18

            {
                // Range: 0x8015B95C -> 0x8015BAD0
                // Local variables
                class xBase * baseB; // r5
                class xBase * baseA; // r4
                class hkpRigidBody * bodyB; // r0
                class hkpRigidBody * bodyA; // r25
                unsigned int otherShapeKey; // r15
                class hkpRigidBody * otherRigidBody; // r24
                class xBase * otherBase; // r23
                class hkpRootCdPoint point; // r1+0x230
                bool isDamageSurface; // r22

                {
                    // Range: 0x8015B95C -> 0x8015BA54
                    // Local variables
                    class SurfaceGamePlay * surface; // r0
                    class xEnt * pEnt; // r0
                }
            }
        }
    }

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_Null;
}
// Range: 0x8015BB10 -> 0x8015BCC8
void zSBPlayerCharacterProxyCollisionListener::contactPointAddedCallback(class zSBPlayerCharacterProxyCollisionListener * this /* r28 */, class hkpRootCdPoint & point /* r29 */) {
    // Local variables
    class hkVector4 & newhkNormal; // r0
    class xVec3 newNormal; // r1+0x14
    class hkpRigidBody * bodyB; // r0
    class hkpPhantom * phantomB; // r0
    class hkpPhantom * phantomA; // r0
    class zSBPlayer * pPlayer; // r0

    {
        // Range: 0x8015BB74 -> 0x8015BC44
        // Local variables
        class xBase * bodyBBase; // r30

        {
            // Range: 0x8015BB94 -> 0x8015BBF0
            // Local variables
            class EventActionAnimPlay param; // r1+0x8
            class zTrampoline * trampoline; // r0
        }
        {
            // Range: 0x8015BBF4 -> 0x8015BC44
            // Local variables
            class zNPCInfoNodeBouncer * bouncerNode; // r0
            class zNPCBase * npcBase; // r0
            class zNPCEntity * npcEntity; // r0
        }
    }
    {
        // Range: 0x8015BC48 -> 0x8015BCB0
        // Local variables
        class xBase * phantomBBase; // r0

        {
            // Range: 0x8015BC5C -> 0x8015BCB0
            // Local variables
            class zNPCInfoNodeBouncer * bouncerNode; // r0
            class zNPCBase * npcBase; // r0
            class zNPCEntity * npcEntity; // r0
        }
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zSBPlayerCharacterProxyCollisionListener::objectInteractionCallback(hkpCharacterProxy *, const hkpCharacterObjectInteractionEvent &, hkpCharacterObjectInteractionResult &)
// Range: 0x8015BCD0 -> 0x8015BD00
void zSBPlayerCharacterProxyCollisionListener::objectInteractionCallback() {
    // Local variables
    class hkpRigidBody * body; // r3

    {
        // Range: 0x8015BCD4 -> 0x8015BCFC
        // Local variables
        class xBase * base; // r3
    }
}
