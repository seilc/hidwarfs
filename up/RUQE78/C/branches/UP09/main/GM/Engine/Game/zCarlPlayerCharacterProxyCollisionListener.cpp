/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCarlPlayerCharacterProxyCollisionListener.cpp
*/
// Range: 0x8012D180 -> 0x8012DB98
void zUPPlayerCharacterProxyCollisionListener::processConstraintsCallback(class zUPPlayerCharacterProxyCollisionListener * this /* r15 */, class hkArray & manifold /* r16 */, class hkpSimplexSolverInput & input /* r17 */) {
    // Local variables
    class SurfaceGamePlay * playerSurface; // r0
    class hkpSurfaceConstraintInfo * pConstraints; // r0
    class zUPPlayer * pPlayer; // r24
    class xVec3 surfaceDeltaSum; // r1+0x11C
    class xVec3 playerVelocityEngine; // r1+0x110
    float surfaceDeltaCount; // f20

    {
        // Range: 0x8012D204 -> 0x8012DAF8
        // Local variables
        int i; // r23

        {
            // Range: 0x8012D204 -> 0x8012DAF8
            // Local variables
            class TriangleInfo * pTriInfo; // r0
            bool usingTriSurface; // r1+0x10
            class xEnt * pEnt; // r18
            class xVec3 oldNormal; // r1+0xE0
            class xBase * baseB; // r5
            class xBase * baseA; // r4
            class hkpPhantom * phantomB; // r7
            class hkpPhantom * phantomA; // r6
            class hkpRigidBody * bodyB; // r19
            class hkpRigidBody * bodyA; // r3
            class hkpWorldObject * otherHavokObj; // r20
            class xBase * otherBase; // r21
            class xVec3 newNormal; // r1+0xEC
            class hkVector4 newhkNormal; // r1+0x100
            class hkpRootCdPoint point; // r1+0x130
            class SurfaceGamePlay * surface; // r22

            {
                // Range: 0x8012D204 -> 0x8012D214
                // Local variables
                float temp_contact_y; // f0
                float temp_player_y; // f1

                {
                    // Range: 0x8012D214 -> 0x8012D214
                    // Local variables
                    float currentTime; // f0

                    {
                        // Range: 0x8012D214 -> 0x8012D214
                        // Local variables
                        class xVec3 vContactPoint; // r1+0xB8
                        class hkVector4 ContactPoint; // r1+0xD0
                    }
                }
            }
            {
                // Range: 0x8012D214 -> 0x8012DAF8
                // Local variables
                class hkVector4 & normalHavok; // r3
                class xVec3 normalEngine; // r1+0xA0
                class xVec3 surfaceVelocityEngine; // r1+0xAC
                class xMat4x3 * engineTransform; // r0

                {
                    // Range: 0x8012D214 -> 0x8012D214
                    // Local variables
                    class xVec3 materialModifier; // r1+0x7C
                    class xVec3 binormal; // r1+0x88
                    class xVec3 forward; // r1+0x94
                }
            }
        }
    }

    // References
    // -> double secondsPerTick;
    // -> class zTailTracker sSingleton;
    // -> class xVec3 m_Null;
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x8012DBB0 -> 0x8012E0A4
void zUPPlayerCharacterProxyCollisionListener::characterInteractionCallback(class zUPPlayerCharacterProxyCollisionListener * this /* r28 */, class hkpCharacterProxy * proxy /* r29 */, class hkpCharacterProxy * otherProxy /* r26 */, class hkContactPoint & contact /* r30 */) {
    // Local variables
    class xBase * otherBase; // reg65535

    {
        // Range: 0x8012DBF4 -> 0x8012E080
        // Local variables
        float projectedVelocity; // f0
        class hkVector4 pointVel; // r1+0x60
        class hkVector4 myVel; // r1+0x70
        class zUPPlayer * otherPlayer; // r31

        {
            // Range: 0x8012DC1C -> 0x8012DCD0
            // Local variables
            float cosAngle; // f0
        }
        {
            // Range: 0x8012DD64 -> 0x8012E080
            // Local variables
            class xVec3 push; // r1+0x20
            class hkVector4 hkPush; // r1+0x50

            {
                // Range: 0x8012DD78 -> 0x8012DE00
                // Local variables
                class hkVector4 hkPushNormComp; // r1+0x30
                class hkVector4 hkFloorNormal; // r1+0x40
                class xVec3 & floorNormal; // r0
            }
            {
                // Range: 0x8012E010 -> 0x8012E054
                // Local variables
                class zPlayerAIJump * aiJump; // r0
            }
        }
    }
}
