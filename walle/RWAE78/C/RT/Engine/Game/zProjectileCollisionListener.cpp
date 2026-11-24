/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zProjectileCollisionListener.cpp
*/
// Range: 0x80184C30 -> 0x80185FE8
void ProjectileCollisionListener::contactPointConfirmedCallback(class ProjectileCollisionListener * this /* r19 */, class hkpContactPointConfirmedEvent * event /* r31 */) {
    // Local variables
    class hkpRigidBody * bodyA; // r0
    class hkpRigidBody * bodyB; // r0
    class hkpPhantom * phantomA; // r0
    class hkpPhantom * phantomB; // r0
    class xBase * baseA; // r20
    class xBase * baseB; // r21
    class xMat4x3 collisionMatrix; // r1+0x140
    bool isDestructible; // r0
    class zProjectile * pProj; // r0

    {
        // Range: 0x80184C68 -> 0x80185BF0
        // Local variables
        class hkVector4 * contactNormal; // r0
        class hkpPropertyValue projNormal; // r1+0xB0
        bool bProjectileIsA; // r0
        class SurfaceGamePlay * surfaceB; // r24
        class SurfaceGamePlay * surfaceA; // r25
        class hkpRigidBody * bodyB; // r26
        class hkpRigidBody * bodyA; // r27
        class zProjectileTrajectory * pProjTraj; // r28
        class xEnt * pProjOwner; // r0
        class zProjectile * pProj; // r0

        {
            // Range: 0x80184CCC -> 0x80185980
            // Local variables
            class hkpRigidBodyCinfo infoNonProj; // r1+0x1B0
            class hkpRigidBody * pBody; // r20
            class zProjectile * pProj; // r0
            class xEnt * pEnt; // r4
            bool hitFrameProcessed; // r30
            bool pEntB_PlaySound; // r0
            bool pEntA_PlaySound; // r0
            class xEnt * pEntB; // r22
            class xEnt * pEntA; // r23
            class hkpRigidBodyCinfo infoB; // r1+0x270
            class hkpRigidBodyCinfo infoA; // r1+0x330
            class hkVector4 linearVelB; // r1+0xE0
            class hkVector4 linearVelA; // r1+0xF0

            {
                // Range: 0x80185064 -> 0x80185674
                // Local variables
                class hkpRigidBody * obj; // r3
                float resultFriction; // f0
                float frictionB; // f30
                float frictionA; // f29
                bool usingTriSurfaceB; // r1+0x10
                bool usingTriSurfaceA; // r1+0x11
                unsigned int shapeKeyB; // r20
                class hkInplaceArray data; // r1+0x180
                int numDatas; // r20
                unsigned int shapeKeyA; // r21
                int indexB; // r0
                int indexA; // r0

                {
                    // Range: 0x801855FC -> 0x80185674
                    // Local variables
                    class hkpPropertyValue val; // r1+0xB8
                }
            }
        }
    }
    {
        // Range: 0x80185D60 -> 0x80185D88
        // Local variables
        class zEntSimpleObj * pEntSimp; // r0
    }
    {
        // Range: 0x80185D88 -> 0x80185FA8
        // Local variables
        class xMat4x3 positionMatrix; // r1+0x100
        class zProjectile * pProjB; // r23
        class zProjectile * pProjA; // r22

        {
            // Range: 0x80185DF4 -> 0x80185EA8
            // Local variables
            class hkVector4 bodyPos; // r1+0xD0
        }
        {
            // Range: 0x80185EA8 -> 0x80185F48
            // Local variables
            class hkVector4 bodyPos; // r1+0xC0
        }
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> float hkUFloat8_intToReal[256];
    // -> float hkInfinity;
}
// signature: ProjectileCollisionListener::contactProcessCallback(hkpContactProcessEvent &)
// Range: 0x801860E0 -> 0x801860F0
void ProjectileCollisionListener::contactProcessCallback() {
}
// signature: ProjectileCollisionListener::entityDeletedCallback(hkpEntity *)
// Range: 0x801860F0 -> 0x80186100
void ProjectileCollisionListener::entityDeletedCallback(class ProjectileCollisionListener * this /* r0 */) {
}
