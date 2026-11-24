/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xEntCollisionListener.cpp
*/
// Range: 0x8002A3D0 -> 0x8002A500
void * EntCollisionListener::EntCollisionListener(class EntCollisionListener * this /* r29 */, class hkpRigidBody * rigidBody /* r30 */, float timerSoundInterval /* f30 */, float timerRippleInterval /* f31 */) {
    // References
    // -> double secondsPerTick;
    // -> struct {} __vt__20EntCollisionListener;
}
// Range: 0x8002A530 -> 0x8002A6B0
void EntCollisionListener::contactPointAddedCallback(class hkpContactPointAddedEvent & event /* r30 */) {
    // Local variables
    class hkpRigidBody * otherBody; // reg65535

    {
        // Range: 0x8002A544 -> 0x8002A578
        // Local variables
        class hkpRigidBody * bodyB; // r3
        class hkpRigidBody * bodyA; // r31
    }
    {
        // Range: 0x8002A578 -> 0x8002A698
        // Local variables
        class xEnt * otherEnt; // r4
        void * otherUserData; // r3

        {
            // Range: 0x8002A5A0 -> 0x8002A68C
            // Local variables
            class SurfaceGamePlay * surface; // r3
            class hkInplaceArray data; // r1+0x8
            unsigned int shapeKey; // r25
        }
    }
}
// Range: 0x8002A770 -> 0x8002AA18
void EntCollisionListener::contactPointConfirmedCallback(class EntCollisionListener * this /* r30 */, class hkpContactPointConfirmedEvent & event /* r31 */) {
    // Local variables
    class hkpRigidBody * bodyA; // r28
    class hkpRigidBody * bodyB; // r27

    {
        // Range: 0x8002A7D0 -> 0x8002A9E0
        // Local variables
        float resultFriction; // f1
        bool usingTriSurfaceB; // r1+0x10
        bool usingTriSurfaceA; // r1+0x11
        class SurfaceGamePlay * surfaceB; // r29
        class SurfaceGamePlay * surfaceA; // r25
        class hkInplaceArray data; // r1+0x40
        int numDatas; // r29
        unsigned int shapeKeyB; // r23
        unsigned int shapeKeyA; // r26
        float frictionB; // f30
        float frictionA; // f31
        class hkVector4 linearVelB; // r1+0x20
        class hkVector4 linearVelA; // r1+0x30
        class xEnt * pEntB; // r24
        class xEnt * pEntA; // r25
        class hkpRigidBodyCinfo infoB; // r1+0x70
        class hkpRigidBodyCinfo infoA; // r1+0x130
        void * userDataB; // r26
        void * userDataA; // r29
    }
}
// Range: 0x8002AB10 -> 0x8002AB80
void EntCollisionListener::entityDeletedCallback(class EntCollisionListener * this /* r30 */, class hkpEntity * entity /* r31 */) {
}
// Range: 0x8002AB80 -> 0x8002B1BC
void EntCollisionListener::contactProcessCallback(class EntCollisionListener * this /* r25 */, class hkpContactProcessEvent & event /* r26 */) {
    // Local variables
    class hkpRigidBody * pBodyA; // r31
    class hkpRigidBody * pBodyB; // r30
    class hkpProcessCollisionData * pCollisionData; // r29

    {
        // Range: 0x8002ABDC -> 0x8002AEA0
        // Local variables
        class xVec3 normalEngine; // r1+0xF0
        class hkVector4 & normalHavok; // r0
        class xVec3 velocityB; // r1+0xFC
        class xVec3 velocityA; // r1+0x108
        class SurfaceGamePlay * surfaceB; // r27
        class SurfaceGamePlay * surfaceA; // r21
        class hkInplaceArray data; // r1+0x140
        int numDatas; // r27
        unsigned int shapeKeyB; // r23
        unsigned int shapeKeyA; // r22
        class hkVector4 linearVelB; // r1+0x120
        class hkVector4 linearVelA; // r1+0x130
        class xEnt * pEntNotPlayer; // r0
        class xEnt * pEntB; // r28
        class xEnt * pEntA; // r24
        class hkpRigidBodyCinfo infoB; // r1+0x170
        class hkpRigidBodyCinfo infoA; // r1+0x230
        void * userDataB; // r23
        void * userDataA; // r22

        {
            // Range: 0x8002AD88 -> 0x8002AE10
            // Local variables
            class hkpDynamicsContactMgr * cm; // r21
            class hkVector4 surfaceVelocityHavok; // r1+0xE0
        }
        {
            // Range: 0x8002AE18 -> 0x8002AEA0
            // Local variables
            class hkpDynamicsContactMgr * cm; // r21
            class hkVector4 surfaceVelocityHavok; // r1+0xD0
        }
    }
    {
        // Range: 0x8002AEB0 -> 0x8002B180
        // Local variables
        bool bRollingSoundPlaying; // r28
        bool bSlidingSoundPlaying; // r27
        class FMOD_VECTOR soundPosition; // r1+0xC0
        float deltaRunInv; // f28
        float deltaRun; // f1
        class SoundPhysicsData & soundPhysicsData; // r0
        class xBase * pBaseB; // r0
        class xBase * pBaseA; // r0

        {
            // Range: 0x8002AEDC -> 0x8002B088
            // Local variables
            int i; // r21

            {
                // Range: 0x8002AEDC -> 0x8002B088
                // Local variables
                float velocityOffNormal; // f0
                class hkVector4 offNormalVelocityVector; // r1+0x70
                float velocityInNormalDir; // f0
                class hkVector4 worldRelativeVelocity; // r1+0x80
                class hkVector4 velPointOnB; // r1+0x90
                class hkVector4 velPointOnA; // r1+0xA0
                class hkVector4 normal; // r1+0xB0
                class hkVector4 & start; // r20
                class hkContactPoint & contactPoint; // reg65535

                {
                    // Range: 0x8002AEDC -> 0x8002B088
                    // Local variables
                    class hkVector4 velCOMNotInNormal; // r1+0x50
                    float relativeCOMVelocityInNormalDir; // f0
                    class hkVector4 relativeVelocityOfCOMs; // r1+0x60
                }
            }
        }
    }
}
// Range: 0x8002B380 -> 0x8002B52C
void EntCollisionListener::contactPointConfirmedCallback_Audio(class EntCollisionListener * this /* r23 */, class hkpContactPointConfirmedEvent & event /* r24 */, class SurfaceGamePlay * pSurfaceA /* r25 */, class SurfaceGamePlay * pSurfaceB /* r26 */) {
    // Local variables
    class hkpRigidBody * pBodyA; // r31
    class hkpRigidBody * pBodyB; // r30
    class xBase * pBaseA; // r29
    class xBase * pBaseB; // r28
    class xBase * pBaseMakingSound; // r27

    {
        // Range: 0x8002B408 -> 0x8002B48C
        // Local variables
        float volume; // f0
        float vel; // f0
        float invDeltaVel; // f4
        float deltaVel; // f4
    }
    {
        // Range: 0x8002B48C -> 0x8002B514
        // Local variables
        class hkpEntity * pHavokEntity; // r27
    }
}
// Range: 0x8002B5F0 -> 0x8002B6A0
void EntCollisionListener::PlayPhysicsSoundHit(class EntCollisionListener * this /* r31 */) {
    // Local variables
    float currentTime; // f0

    // References
    // -> double secondsPerTick;
}
// Range: 0x8002B6A0 -> 0x8002B6D4
void EntCollisionListener::PlayPhysicsSoundScrape() {
}
// Range: 0x8002B6E0 -> 0x8002B714
void EntCollisionListener::PlayPhysicsSoundRoll() {
}
// Range: 0x8002B720 -> 0x8002B74C
void EntCollisionListener::StopPhysicsSoundScrape() {
}
// Range: 0x8002B750 -> 0x8002B77C
void EntCollisionListener::StopPhysicsSoundRoll() {
}
// signature: EntCollisionListener::SFXEventPlay_Callback(zSoundAssetMultiple *, unsigned long long, Sext::SurfaceGamePlay *, const float, const FMOD_VECTOR *)
// Range: 0x8002B780 -> 0x8002B804
void EntCollisionListener::SFXEventPlay_Callback(class zSoundAssetMultiple * pSoundAsset /* r31 */, class SurfaceGamePlay * pSurface /* r9 */, float volume /* f31 */) {
    // References
    // -> bool gSysForceExit;
}
// signature: EntCollisionListener::SoundPlayData::InitFromWidget(xBase *, Sext::SurfaceGamePlay *)
// Range: 0x8002B810 -> 0x8002BA90
bool EntCollisionListener::SoundPlayData::InitFromWidget(class SoundPlayData * this /* r31 */) {
}
// signature: EntCollisionListener::SoundPlayData::ClampNearZerosToZero(xVec3 *)
// Range: 0x8002BB30 -> 0x8002BBB4
class xVec3 * EntCollisionListener::SoundPlayData::ClampNearZerosToZero() {
}
