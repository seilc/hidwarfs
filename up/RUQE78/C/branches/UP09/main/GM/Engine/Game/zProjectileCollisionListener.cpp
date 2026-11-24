/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zProjectileCollisionListener.cpp
*/
// Range: 0x8021BDD0 -> 0x8021CD8C
void ProjectileCollisionListener::contactPointConfirmedCallback(class ProjectileCollisionListener * this /* r19 */, class hkpContactPointConfirmedEvent & event /* r20 */) {
    // Local variables
    class zProjectile * pProj; // r0
    class hkpRigidBody * bodyA; // r28
    class hkpRigidBody * bodyB; // r27
    class SurfaceGamePlay * surfaceA; // r26
    class SurfaceGamePlay * surfaceB; // r25
    bool bProjectileIsA; // r0
    class hkpRigidBody * rb; // r21
    class hkpPropertyValue projNormal; // r1+0xB0
    class hkVector4 & contactNormal; // r0
    class hkpPhantom * phantomA; // r0
    class hkpPhantom * phantomB; // r0
    class xBase * baseA; // r0
    class xBase * baseB; // r0

    {
        // Range: 0x8021BE4C -> 0x8021C990
        // Local variables
        class hkpRigidBodyCinfo infoNonProj; // r1+0x140
        class hkpRigidBody * pBody; // r21
        class zProjectile * pProj; // r0
        class xEnt * pEnt; // r5
        bool hitFrameProcessed; // r4
        bool pEntB_PlaySound; // r0
        bool pEntA_PlaySound; // r0
        class xEnt * pEntB; // r23
        class xEnt * pEntA; // r24
        class hkpRigidBodyCinfo infoB; // r1+0x200
        class hkpRigidBodyCinfo infoA; // r1+0x2C0
        class hkVector4 linearVelB; // r1+0xC0
        class hkVector4 linearVelA; // r1+0xD0

        {
            // Range: 0x8021C194 -> 0x8021C67C
            // Local variables
            class hkpRigidBody * obj; // r3
            float resultFriction; // f0
            float frictionB; // f2
            float frictionA; // f1
            bool usingTriSurfaceB; // r1+0x10
            bool usingTriSurfaceA; // r1+0x11
            unsigned int shapeKeyB; // r21
            class hkInplaceArray data; // r1+0x10C
            int numDatas; // r21
            unsigned int shapeKeyA; // r22
            int indexB; // r0
            int indexA; // r0

            {
                // Range: 0x8021C600 -> 0x8021C67C
                // Local variables
                class hkpPropertyValue val; // r1+0xB8
            }
        }
    }
    {
        // Range: 0x8021CC38 -> 0x8021CD70
        // Local variables
        class ProjectileCollisionDetails collisionInfo; // r1+0xE0
        class zProjectile * pProjB; // r21
        class zProjectile * pProjA; // r3
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> float hkInfinity;
}
// signature: ProjectileCollisionListener::contactProcessCallback(hkpContactProcessEvent &)
// Range: 0x8021CD90 -> 0x8021CDA0
void ProjectileCollisionListener::contactProcessCallback() {
}
// signature: ProjectileCollisionListener::entityDeletedCallback(hkpEntity *)
// Range: 0x8021CDA0 -> 0x8021CDB0
void ProjectileCollisionListener::entityDeletedCallback(class ProjectileCollisionListener * this /* r0 */) {
}
