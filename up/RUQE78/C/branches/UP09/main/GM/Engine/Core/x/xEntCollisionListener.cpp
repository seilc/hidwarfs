/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xEntCollisionListener.cpp
*/
// signature: EntCollisionListener::HK_SetSurfaceVelocity(hkpDynamicsContactMgr *, hkpRigidBody *, xVec3, void *)
// Range: 0x80052250 -> 0x800522EC
void EntCollisionListener::HK_SetSurfaceVelocity(class hkpDynamicsContactMgr * manager /* r29 */, class hkpRigidBody * body /* r30 */) {
    // Local variables
    class hkVector4 vec4; // r1+0x10
    class hkpConstraintInstance * constraintInst; // r0
}
// signature: EntCollisionListener::EntCollisionListener(hkpRigidBody *, float, float)
// Range: 0x80052300 -> 0x80052448
void * EntCollisionListener::EntCollisionListener(class EntCollisionListener * this /* r29 */, class hkpRigidBody * rigidBody /* r30 */, float timerRippleInterval /* f31 */) {
    // References
    // -> double secondsPerTick;
    // -> struct {} __vt__20EntCollisionListener;
}
// Range: 0x800524C0 -> 0x80052DB8
void EntCollisionListener::contactPointConfirmedCallback(class EntCollisionListener * this /* r21 */, class hkpContactPointConfirmedEvent & event /* r22 */) {
    // Local variables
    class hkpRigidBody * bodyA; // r29
    class hkpRigidBody * bodyB; // r28

    {
        // Range: 0x80052568 -> 0x80052A78
        // Local variables
        float resultFriction; // f1
        bool usingTriSurfaceB; // r1+0x10
        bool usingTriSurfaceA; // r1+0x11
        class SurfaceGamePlay * surfaceB; // r27
        class SurfaceGamePlay * surfaceA; // r23
        class hkInplaceArray data; // r1+0x40
        int numDatas; // r23
        unsigned int shapeKeyB; // r24
        unsigned int shapeKeyA; // r25
        int indexB; // r0
        int indexA; // r0
        float frictionB; // f30
        float frictionA; // f31
        class hkVector4 linearVelB; // r1+0x20
        class hkVector4 linearVelA; // r1+0x30
        class xEnt * pEntB; // r26
        class xEnt * pEntA; // r27
        class hkpRigidBodyCinfo infoB; // r1+0x70
        class hkpRigidBodyCinfo infoA; // r1+0x130
        void * userDataB; // r24
        void * userDataA; // r23
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x800531B0 -> 0x80053228
void EntCollisionListener::entityDeletedCallback(class EntCollisionListener * this /* r30 */, class hkpEntity * entity /* r31 */) {
}
// Range: 0x80053240 -> 0x80053A80
void EntCollisionListener::contactProcessCallback(class EntCollisionListener * this /* r23 */, class hkpContactProcessEvent & event /* r24 */) {
    // Local variables
    class hkpRigidBody * pBodyA; // r30
    class hkpRigidBody * pBodyB; // r29
    class hkpProcessCollisionData * pCollisionData; // r28

    {
        // Range: 0x800532A4 -> 0x800536B8
        // Local variables
        class xVec3 normalEngine; // r1+0x140
        class hkVector4 & normalHavok; // r20
        class xVec3 velocityB; // r1+0x14C
        class xVec3 velocityA; // r1+0x158
        class SurfaceGamePlay * surfaceB; // r26
        class SurfaceGamePlay * surfaceA; // r27
        class hkInplaceArray data; // r1+0x190
        int numDatas; // r20
        unsigned int shapeKeyB; // r19
        unsigned int shapeKeyA; // r21
        class hkVector4 linearVelB; // r1+0x170
        class hkVector4 linearVelA; // r1+0x180
        class xEnt * pEntB; // reg65535
        class xEnt * pEntA; // r22
        class hkpRigidBodyCinfo infoB; // r1+0x1C0
        class hkpRigidBodyCinfo infoA; // r1+0x280
        void * userDataB; // r21
        void * userDataA; // r20

        {
            // Range: 0x800534EC -> 0x80053608
            // Local variables
            float currentTime; // f0

            {
                // Range: 0x80053528 -> 0x80053608
                // Local variables
                class xBase * owner; // r25
                int numContactPoint; // r0

                {
                    // Range: 0x80053564 -> 0x800535F0
                    // Local variables
                    int i; // r19

                    {
                        // Range: 0x80053564 -> 0x800535F0
                        // Local variables
                        class xVec3 vContactPoint; // r1+0x120
                        class hkVector4 ContactPoint; // r1+0x130
                    }
                }
            }
        }
        {
            // Range: 0x80053610 -> 0x80053660
            // Local variables
            class hkpDynamicsContactMgr * cm; // r0
            class hkVector4 surfaceVelocityHavok; // r1+0x110
        }
        {
            // Range: 0x80053668 -> 0x800536B8
            // Local variables
            class hkpDynamicsContactMgr * cm; // r0
            class hkVector4 surfaceVelocityHavok; // r1+0x100
        }
    }
    {
        // Range: 0x800536C4 -> 0x80053A44
        // Local variables
        bool bRollingSoundPlaying; // r20
        bool bSlidingSoundPlaying; // r19
        class FMOD_VECTOR soundPosition; // r1+0xF0
        float deltaRunInv; // f28
        float deltaRun; // f1
        class SoundPhysicsData & soundPhysicsData; // r0

        {
            // Range: 0x80053724 -> 0x80053938
            // Local variables
            int i; // r21

            {
                // Range: 0x80053724 -> 0x80053938
                // Local variables
                float velocityOffNormal; // f0
                class hkVector4 offNormalVelocityVector; // r1+0xA0
                float velocityInNormalDir; // r1+0x14
                class hkVector4 worldRelativeVelocity; // r1+0xB0
                class hkVector4 velPointOnB; // r1+0xC0
                class hkVector4 velPointOnA; // r1+0xD0
                class hkVector4 normal; // r1+0xE0
                class hkVector4 & start; // r26
                class hkContactPoint & contactPoint; // r22

                {
                    // Range: 0x80053724 -> 0x80053938
                    // Local variables
                    class hkVector4 velCOMNotInNormal; // r1+0x80
                    float relativeCOMVelocityInNormalDir; // r1+0x10
                    class hkVector4 relativeVelocityOfCOMs; // r1+0x90
                }
            }
        }
    }
}
// Range: 0x80053DB0 -> 0x800540B8
void EntCollisionListener::contactPointConfirmedCallback_Audio(class EntCollisionListener * this /* r23 */, class hkpContactPointConfirmedEvent & event /* r24 */, class SurfaceGamePlay * pSurfaceA /* r25 */, class SurfaceGamePlay * pSurfaceB /* r26 */) {
    // Local variables
    class xBase * pBaseA; // r29
    class xBase * pBaseB; // r28
    class xBase * pBaseMakingSound; // r27

    {
        // Range: 0x80053E78 -> 0x80053FD8
        // Local variables
        float volume; // f0
        float vel; // f0
        float invDeltaVel; // f4
        float deltaVel; // f4
    }
    {
        // Range: 0x80053FD8 -> 0x80054090
        // Local variables
        class hkpEntity * pHavokEntity; // r21
    }

    // References
    // -> double secondsPerTick;
}
// Range: 0x800540C0 -> 0x80054190
void EntCollisionListener::PlayPhysicsSoundScrape(class EntCollisionListener * this /* r29 */) {
}
// Range: 0x80054190 -> 0x80054260
void EntCollisionListener::PlayPhysicsSoundRoll(class EntCollisionListener * this /* r29 */) {
}
// Range: 0x80054260 -> 0x8005428C
void EntCollisionListener::StopPhysicsSoundScrape() {
}
// Range: 0x80054290 -> 0x800542BC
void EntCollisionListener::StopPhysicsSoundRoll() {
}
// signature: EntCollisionListener::SoundPlayData::InitFromWidget(xBase *, Sext::SurfaceGamePlay *)
// Range: 0x800542C0 -> 0x800547FC
bool EntCollisionListener::SoundPlayData::InitFromWidget(class SoundPlayData * this /* r31 */, class xBase * pBaseMakingSound /* r28 */) {
}
