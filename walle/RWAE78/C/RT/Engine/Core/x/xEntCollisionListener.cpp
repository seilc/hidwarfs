/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xEntCollisionListener.cpp
*/
// signature: EntCollisionListener::HK_SetSurfaceVelocity(hkpDynamicsContactMgr *, hkpRigidBody *, xVec3, void *)
// Range: 0x80035B00 -> 0x80035B9C
void EntCollisionListener::HK_SetSurfaceVelocity(class hkpDynamicsContactMgr * manager /* r29 */, class hkpRigidBody * body /* r30 */) {
    // Local variables
    class hkVector4 vec4; // r1+0x10
    class hkpConstraintInstance * constraintInst; // r0
}
// signature: EntCollisionListener::EntCollisionListener(hkpRigidBody *, float)
// Range: 0x80035BB0 -> 0x80035C94
void * EntCollisionListener::EntCollisionListener(class EntCollisionListener * this /* r30 */, class hkpRigidBody * rigidBody /* r31 */) {
    // References
    // -> double secondsPerTick;
    // -> struct {} __vt__20EntCollisionListener;
}
// Range: 0x80035D20 -> 0x80036740
void EntCollisionListener::contactPointConfirmedCallback(class EntCollisionListener * this /* r22 */, class hkpContactPointConfirmedEvent * event /* r23 */) {
    // Local variables
    class hkpRigidBody * bodyA; // r29
    class hkpRigidBody * bodyB; // r0

    {
        // Range: 0x80035DD0 -> 0x800363E0
        // Local variables
        float resultFriction; // f1
        bool usingTriSurfaceB; // r1+0x10
        bool usingTriSurfaceA; // r1+0x11
        class SurfaceGamePlay * surfaceB; // r29
        class SurfaceGamePlay * surfaceA; // r24
        class hkInplaceArray data; // r1+0x40
        int numDatas; // r24
        unsigned int shapeKeyB; // r25
        unsigned int shapeKeyA; // r26
        int indexB; // r0
        int indexA; // r0
        float frictionB; // f30
        float frictionA; // f29
        class hkVector4 linearVelB; // r1+0x20
        class hkVector4 linearVelA; // r1+0x30
        class xEnt * pEntB; // r27
        class xEnt * pEntA; // r28
        class hkpRigidBodyCinfo infoB; // r1+0x70
        class hkpRigidBodyCinfo infoA; // r1+0x130
        void * userDataB; // r25
        void * userDataA; // r24
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> float hkUFloat8_intToReal[256];
}
// Range: 0x80036D10 -> 0x80036D88
void EntCollisionListener::entityDeletedCallback(class EntCollisionListener * this /* r30 */, class hkpEntity * entity /* r31 */) {
}
// Range: 0x80036DD0 -> 0x800376E4
void EntCollisionListener::contactProcessCallback(class EntCollisionListener * this /* r20 */, class hkpContactProcessEvent * event /* r21 */) {
    // Local variables
    class hkpRigidBody * pBodyA; // r30
    class hkpRigidBody * pBodyB; // r29
    class hkpProcessCollisionData * pCollisionData; // r28

    {
        // Range: 0x80036E34 -> 0x80037398
        // Local variables
        bool usingTriSurfaceB; // r1+0x10
        bool usingTriSurfaceA; // r1+0x11
        class SurfaceGamePlay * surfaceB; // r24
        class SurfaceGamePlay * surfaceA; // r25
        class hkInplaceArray data; // r1+0x1C0
        int numDatas; // r19
        unsigned int shapeKeyB; // r26
        unsigned int shapeKeyA; // r17
        class hkVector4 linearVelB; // r1+0x1A0
        class hkVector4 linearVelA; // r1+0x1B0
        class xEnt * pEntB; // r27
        class xEnt * pEntA; // r18
        class hkpRigidBodyCinfo infoB; // r1+0x1F0
        class hkpRigidBodyCinfo infoA; // r1+0x2B0
        void * userDataB; // r22
        void * userDataA; // r19

        {
            // Range: 0x80037000 -> 0x800371C8
            // Local variables
            class hkpDynamicsContactMgr * cm; // r0
            class hkVector4 surfaceVelocityHavok; // r1+0x150
            class hkVector4 * normalHavok; // r22
            class xVec3 surfaceVelocityEngine; // r1+0x190
            class xMat4x3 * engineTransform; // r23

            {
                // Range: 0x80037028 -> 0x80037128
                // Local variables
                class xVec3 materialModifier; // r1+0x160
                class xVec3 binormal; // r1+0x16C
                class xVec3 normalEngine; // r1+0x178
                class xVec3 forward; // r1+0x184
                class TriangleInfo * pTriInfo; // r3
            }
        }
        {
            // Range: 0x800371D0 -> 0x80037398
            // Local variables
            class hkpDynamicsContactMgr * cm; // r0
            class hkVector4 surfaceVelocityHavok; // r1+0x100
            class hkVector4 * normalHavok; // r18
            class xVec3 surfaceVelocityEngine; // r1+0x140
            class xMat4x3 * engineTransform; // r17

            {
                // Range: 0x800371F8 -> 0x800372F8
                // Local variables
                class xVec3 materialModifier; // r1+0x110
                class xVec3 binormal; // r1+0x11C
                class xVec3 normalEngine; // r1+0x128
                class xVec3 forward; // r1+0x134
                class TriangleInfo * pTriInfo; // r3
            }
        }
    }
    {
        // Range: 0x800373A4 -> 0x80037698
        // Local variables
        bool bRollingSoundPlaying; // r18
        bool bSlidingSoundPlaying; // r17
        class FMOD_VECTOR soundPosition; // r1+0xF0
        float deltaRunInv; // f28
        float deltaRun; // f1
        class SoundPhysicsData * soundPhysicsData; // r0

        {
            // Range: 0x80037404 -> 0x80037618
            // Local variables
            int i; // r19

            {
                // Range: 0x80037404 -> 0x80037618
                // Local variables
                float velocityOffNormal; // f0
                class hkVector4 offNormalVelocityVector; // r1+0xA0
                float velocityInNormalDir; // r1+0x20
                class hkVector4 worldRelativeVelocity; // r1+0xB0
                class hkVector4 velPointOnB; // r1+0xC0
                class hkVector4 velPointOnA; // r1+0xD0
                class hkVector4 normal; // r1+0xE0
                class hkVector4 * start; // r23
                class hkContactPoint * contactPoint; // r21

                {
                    // Range: 0x80037404 -> 0x80037618
                    // Local variables
                    class hkVector4 velCOMNotInNormal; // r1+0x80
                    float relativeCOMVelocityInNormalDir; // r1+0x1C
                    class hkVector4 relativeVelocityOfCOMs; // r1+0x90
                }
            }
        }
    }
}
// Range: 0x80037B90 -> 0x80037E98
void EntCollisionListener::contactPointConfirmedCallback_Audio(class EntCollisionListener * this /* r23 */, class hkpContactPointConfirmedEvent * event /* r24 */, class SurfaceGamePlay * pSurfaceA /* r25 */, class SurfaceGamePlay * pSurfaceB /* r26 */) {
    // Local variables
    class xBase * pBaseA; // r29
    class xBase * pBaseB; // r28
    class xBase * pBaseMakingSound; // r27

    {
        // Range: 0x80037C58 -> 0x80037DB8
        // Local variables
        float volume; // f0
        float vel; // f0
        float invDeltaVel; // f4
        float deltaVel; // f4
    }
    {
        // Range: 0x80037DB8 -> 0x80037E70
        // Local variables
        class hkpEntity * pHavokEntity; // r21
    }

    // References
    // -> double secondsPerTick;
}
// Range: 0x80037EA0 -> 0x80037F70
void EntCollisionListener::PlayPhysicsSoundScrape(class EntCollisionListener * this /* r29 */) {
}
// Range: 0x80037F70 -> 0x80038040
void EntCollisionListener::PlayPhysicsSoundRoll(class EntCollisionListener * this /* r29 */) {
}
// Range: 0x80038040 -> 0x8003806C
void EntCollisionListener::StopPhysicsSoundScrape() {
}
// Range: 0x80038070 -> 0x8003809C
void EntCollisionListener::StopPhysicsSoundRoll() {
}
// signature: EntCollisionListener::SoundPlayData::InitFromWidget(xBase *, Sext::SurfaceGamePlay *)
// Range: 0x800380B0 -> 0x80038604
bool EntCollisionListener::SoundPlayData::InitFromWidget(class SoundPlayData * this /* r31 */, class xBase * pBaseMakingSound /* r28 */) {
}
