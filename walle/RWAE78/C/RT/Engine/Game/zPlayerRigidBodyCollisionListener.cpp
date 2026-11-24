/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zPlayerRigidBodyCollisionListener.cpp
*/
// signature: zPlayerRigidBodyCollisionListener::zPlayerRigidBodyCollisionListener(hkpRigidBody *)
// Range: 0x80172FB0 -> 0x80173004
void * zPlayerRigidBodyCollisionListener::zPlayerRigidBodyCollisionListener(class zPlayerRigidBodyCollisionListener * this /* r31 */) {
    // References
    // -> struct {} __vt__33zPlayerRigidBodyCollisionListener;
}
// Range: 0x80173010 -> 0x80173620
void zPlayerRigidBodyCollisionListener::contactProcessCallback(class hkpContactProcessEvent * event /* r27 */) {
    // Local variables
    class hkpRigidBody * pBodyA; // r25
    class hkpRigidBody * pBodyB; // r31

    {
        // Range: 0x80173058 -> 0x801735E0
        // Local variables
        bool usingTriSurfaceB; // r1+0x10
        bool usingTriSurfaceA; // r1+0x11
        class SurfaceGamePlay * surfaceB; // r28
        class SurfaceGamePlay * surfaceA; // r22
        class hkInplaceArray data; // r1+0x100
        int numDatas; // r26
        unsigned int shapeKeyB; // r29
        unsigned int shapeKeyA; // r23
        class hkVector4 linearVelB; // r1+0xE0
        class hkVector4 linearVelA; // r1+0xF0
        class xEnt * pEntB; // r30
        class xEnt * pEntA; // r24
        class hkpRigidBodyCinfo infoB; // r1+0x130
        class hkpRigidBodyCinfo infoA; // r1+0x1F0
        void * userDataB; // r28
        void * userDataA; // r26

        {
            // Range: 0x80173238 -> 0x80173408
            // Local variables
            class hkpDynamicsContactMgr * cm; // r0
            class hkVector4 surfaceVelocityHavok; // r1+0x90
            class hkVector4 * normalHavok; // r20
            class xVec3 surfaceVelocityEngine; // r1+0xD0
            class xMat4x3 * engineTransform; // r21

            {
                // Range: 0x80173264 -> 0x80173364
                // Local variables
                class xVec3 materialModifier; // r1+0xA0
                class xVec3 binormal; // r1+0xAC
                class xVec3 normalEngine; // r1+0xB8
                class xVec3 forward; // r1+0xC4
                class TriangleInfo * pTriInfo; // r3
            }
        }
        {
            // Range: 0x80173410 -> 0x801735E0
            // Local variables
            class hkpDynamicsContactMgr * cm; // r0
            class hkVector4 surfaceVelocityHavok; // r1+0x40
            class hkVector4 * normalHavok; // r21
            class xVec3 surfaceVelocityEngine; // r1+0x80
            class xMat4x3 * engineTransform; // r20

            {
                // Range: 0x8017343C -> 0x8017353C
                // Local variables
                class xVec3 materialModifier; // r1+0x50
                class xVec3 binormal; // r1+0x5C
                class xVec3 normalEngine; // r1+0x68
                class xVec3 forward; // r1+0x74
                class TriangleInfo * pTriInfo; // r3
            }
        }
    }
}
// Range: 0x80173620 -> 0x80174580
void zPlayerRigidBodyCollisionListener::contactPointConfirmedCallback(class zPlayerRigidBodyCollisionListener * this /* r20 */, class hkpContactPointConfirmedEvent * event /* r21 */) {
    // Local variables
    class hkpRigidBody * bodyA; // r30
    class hkpRigidBody * bodyB; // r29

    {
        // Range: 0x801736A8 -> 0x80174234
        // Local variables
        class EventActionHit params; // r1+0xA0
        float resultFriction; // f0
        bool usingTriSurfaceB; // r1+0x10
        bool usingTriSurfaceA; // r1+0x11
        class SurfaceGamePlay * surfaceB; // r22
        class SurfaceGamePlay * surfaceA; // r23
        class hkInplaceArray data; // r1+0xB8
        int numDatas; // r23
        unsigned int shapeKeyB; // r24
        unsigned int shapeKeyA; // r25
        int indexB; // r0
        int indexA; // r0
        float frictionB; // f30
        float frictionA; // f29
        class hkVector4 linearVelB; // r1+0x80
        class hkVector4 linearVelA; // r1+0x90
        class xEnt * pEntNotPlayer; // r26
        class xEnt * pEntB; // r27
        class xEnt * pEntA; // r28
        class hkpRigidBodyCinfo infoB; // r1+0xF0
        class hkpRigidBodyCinfo infoA; // r1+0x1B0
        void * userDataB; // r23
        void * userDataA; // r22

        {
            // Range: 0x80173CF4 -> 0x80173DFC
            // Local variables
            class hkpRigidBody * obj; // r3

            {
                // Range: 0x80173D44 -> 0x80173DBC
                // Local variables
                class hkpPropertyValue val; // r1+0x60
            }
        }
        {
            // Range: 0x80173DFC -> 0x80173ED4
            // Local variables
            class hkpRigidBody * obj; // r3

            {
                // Range: 0x80173E18 -> 0x80173E94
                // Local variables
                class hkpPropertyValue val; // r1+0x58
            }
        }
        {
            // Range: 0x80173ED4 -> 0x80174070
            // Local variables
            float angle; // f1
            float dot; // f0
        }
        {
            // Range: 0x801740D0 -> 0x80174234
            // Local variables
            int surfaceVFXType; // r4

            {
                // Range: 0x80174108 -> 0x80174234
                // Local variables
                char * spawnPtUIDName; // r23

                {
                    // Range: 0x80174134 -> 0x80174234
                    // Local variables
                    class zFXScriptSpawnPt * spawnPt; // r0
                    class zFXScriptSpawnPt * sPt; // r22
                }
            }
        }
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
    // -> double secondsPerTick;
    // -> long long startupTicks;
    // -> float hkUFloat8_intToReal[256];
}
// signature: zPlayerRigidBodyCollisionListener::entityDeletedCallback(hkpEntity *)
// Range: 0x801745A0 -> 0x801745B0
void zPlayerRigidBodyCollisionListener::entityDeletedCallback(class zPlayerRigidBodyCollisionListener * this /* r0 */) {
}
// Range: 0x801745B0 -> 0x80174BC0
void zPlayerEveRigidBodyCollisionListener::contactProcessCallback(class hkpContactProcessEvent * event /* r27 */) {
    // Local variables
    class hkpRigidBody * pBodyA; // r25
    class hkpRigidBody * pBodyB; // r31

    {
        // Range: 0x801745F8 -> 0x80174B80
        // Local variables
        bool usingTriSurfaceB; // r1+0x10
        bool usingTriSurfaceA; // r1+0x11
        class SurfaceGamePlay * surfaceB; // r28
        class SurfaceGamePlay * surfaceA; // r22
        class hkInplaceArray data; // r1+0x100
        int numDatas; // r26
        unsigned int shapeKeyB; // r29
        unsigned int shapeKeyA; // r23
        class hkVector4 linearVelB; // r1+0xE0
        class hkVector4 linearVelA; // r1+0xF0
        class xEnt * pEntB; // r30
        class xEnt * pEntA; // r24
        class hkpRigidBodyCinfo infoB; // r1+0x130
        class hkpRigidBodyCinfo infoA; // r1+0x1F0
        void * userDataB; // r28
        void * userDataA; // r26

        {
            // Range: 0x801747D8 -> 0x801749A8
            // Local variables
            class hkpDynamicsContactMgr * cm; // r0
            class hkVector4 surfaceVelocityHavok; // r1+0x90
            class hkVector4 * normalHavok; // r20
            class xVec3 surfaceVelocityEngine; // r1+0xD0
            class xMat4x3 * engineTransform; // r21

            {
                // Range: 0x80174804 -> 0x80174904
                // Local variables
                class xVec3 materialModifier; // r1+0xA0
                class xVec3 binormal; // r1+0xAC
                class xVec3 normalEngine; // r1+0xB8
                class xVec3 forward; // r1+0xC4
                class TriangleInfo * pTriInfo; // r3
            }
        }
        {
            // Range: 0x801749B0 -> 0x80174B80
            // Local variables
            class hkpDynamicsContactMgr * cm; // r0
            class hkVector4 surfaceVelocityHavok; // r1+0x40
            class hkVector4 * normalHavok; // r21
            class xVec3 surfaceVelocityEngine; // r1+0x80
            class xMat4x3 * engineTransform; // r20

            {
                // Range: 0x801749DC -> 0x80174ADC
                // Local variables
                class xVec3 materialModifier; // r1+0x50
                class xVec3 binormal; // r1+0x5C
                class xVec3 normalEngine; // r1+0x68
                class xVec3 forward; // r1+0x74
                class TriangleInfo * pTriInfo; // r3
            }
        }
    }
}
// Range: 0x80174BC0 -> 0x80175810
void zPlayerEveRigidBodyCollisionListener::contactPointConfirmedCallback(class zPlayerEveRigidBodyCollisionListener * this /* r22 */, class hkpContactPointConfirmedEvent * event /* r23 */) {
    // Local variables
    class hkpRigidBody * bodyA; // r30
    class hkpRigidBody * bodyB; // r29

    {
        // Range: 0x80174C48 -> 0x801754C4
        // Local variables
        class EventActionHit params; // r1+0x60
        float resultFriction; // f0
        bool usingTriSurfaceB; // r1+0x10
        bool usingTriSurfaceA; // r1+0x11
        class SurfaceGamePlay * surfaceB; // r31
        class SurfaceGamePlay * surfaceA; // r24
        class hkInplaceArray data; // r1+0x78
        int numDatas; // r24
        unsigned int shapeKeyB; // r25
        unsigned int shapeKeyA; // r26
        int indexB; // r0
        int indexA; // r0
        float frictionB; // f30
        float frictionA; // f29
        class hkVector4 linearVelB; // r1+0x40
        class hkVector4 linearVelA; // r1+0x50
        class xEnt * pEntNotPlayer; // r0
        class xEnt * pEntB; // r27
        class xEnt * pEntA; // r28
        class hkpRigidBodyCinfo infoB; // r1+0xB0
        class hkpRigidBodyCinfo infoA; // r1+0x170
        void * userDataB; // r25
        void * userDataA; // r24

        {
            // Range: 0x80175280 -> 0x8017538C
            // Local variables
            class hkpRigidBody * obj; // r3

            {
                // Range: 0x801752D0 -> 0x8017534C
                // Local variables
                class hkpPropertyValue val; // r1+0x30
            }
        }
        {
            // Range: 0x8017538C -> 0x80175464
            // Local variables
            class hkpRigidBody * obj; // r3

            {
                // Range: 0x801753A8 -> 0x80175424
                // Local variables
                class hkpPropertyValue val; // r1+0x28
            }
        }
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> float hkUFloat8_intToReal[256];
}
// signature: zPlayerEveRigidBodyCollisionListener::entityDeletedCallback(hkpEntity *)
// Range: 0x80175810 -> 0x80175820
void zPlayerEveRigidBodyCollisionListener::entityDeletedCallback(class zPlayerEveRigidBodyCollisionListener * this /* r0 */) {
}
