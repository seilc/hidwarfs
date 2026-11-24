/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zProjectileCollisionListener.cpp
*/
// signature: ProjectileCollisionListener::ProjectileCollisionListener(hkpRigidBody *, float)
// Range: 0x801298D0 -> 0x80129944
void * ProjectileCollisionListener::ProjectileCollisionListener(class ProjectileCollisionListener * this /* r31 */, float dampFactor /* f31 */) {
    // References
    // -> struct {} __vt__27ProjectileCollisionListener;
}
// Range: 0x80129950 -> 0x801299F0
void ProjectileCollisionListener::contactPointAddedCallback(class hkpContactPointAddedEvent & event /* r29 */) {
    // Local variables
    class zProjectileHavok * owner; // r31
    class hkpRigidBody * otherBody; // reg65535

    {
        // Range: 0x80129968 -> 0x8012999C
        // Local variables
        class hkpRigidBody * bodyB; // r3
        class hkpRigidBody * bodyA; // r30
    }
    {
        // Range: 0x8012999C -> 0x801299DC
        // Local variables
        class xBase * otherBase; // r4
    }
}
// Range: 0x801299F0 -> 0x8012A1AC
void ProjectileCollisionListener::contactPointConfirmedCallback(class ProjectileCollisionListener * this /* r23 */, class hkpContactPointConfirmedEvent & event /* r24 */) {
    // Local variables
    class zProjectile * pProj; // r0
    class hkpRigidBody * bodyA; // r30
    class hkpRigidBody * bodyB; // r29
    class SurfaceGamePlay * surfaceA; // r28
    class SurfaceGamePlay * surfaceB; // r27
    bool bProjectileIsA; // r0
    class hkpRigidBody * rb; // r21
    class hkpPropertyValue projNormal; // r1+0x88
    class hkVector4 & contactNormal; // r0
    class hkpPhantom * phantomA; // r0
    class hkpPhantom * phantomB; // r0
    class xBase * baseA; // r0
    class xBase * baseB; // r0

    {
        // Range: 0x80129A38 -> 0x80129E6C
        // Local variables
        class hkpRigidBodyCinfo infoNonProj; // r1+0x120
        class hkpRigidBody * pBody; // r22
        class zProjectile * pProj; // r0
        class xEnt * pEnt; // r5
        bool hitFrameProcessed; // r4
        bool pEntB_PlaySound; // r0
        bool pEntA_PlaySound; // r0
        class xEnt * pEntB; // r25
        class xEnt * pEntA; // r26
        class hkpRigidBodyCinfo infoB; // r1+0x1E0
        class hkpRigidBodyCinfo infoA; // r1+0x2A0
        class hkVector4 linearVelB; // r1+0xA0
        class hkVector4 linearVelA; // r1+0xB0

        {
            // Range: 0x80129CA0 -> 0x80129E5C
            // Local variables
            class hkpRigidBody * obj; // r21
            float resultFriction; // f0
            float frictionB; // f1
            float frictionA; // f0
            bool usingTriSurfaceB; // r1+0x10
            bool usingTriSurfaceA; // r1+0x11
            unsigned int shapeKeyB; // r21
            class hkInplaceArray data; // r1+0xF0
            int numDatas; // r21
            unsigned int shapeKeyA; // r22
            int indexB; // r0
            int indexA; // r0

            {
                // Range: 0x80129E14 -> 0x80129E5C
                // Local variables
                class hkpPropertyValue val; // r1+0x90
            }
        }
    }
    {
        // Range: 0x8012A064 -> 0x8012A190
        // Local variables
        class ProjectileCollisionDetails collisionInfo; // r1+0xC0
        class zProjectile * pProjB; // r22
        class zProjectile * pProjA; // r21
    }
}
// signature: ProjectileCollisionListener::contactProcessCallback(hkpContactProcessEvent &)
// Range: 0x8012A1B0 -> 0x8012A1C0
void ProjectileCollisionListener::contactProcessCallback() {
}
// signature: ProjectileCollisionListener::entityDeletedCallback(hkpEntity *)
// Range: 0x8012A1C0 -> 0x8012A1D0
void ProjectileCollisionListener::entityDeletedCallback(class ProjectileCollisionListener * this /* r0 */) {
}
