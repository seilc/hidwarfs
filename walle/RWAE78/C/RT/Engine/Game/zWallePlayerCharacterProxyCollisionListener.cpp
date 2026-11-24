/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zWallePlayerCharacterProxyCollisionListener.cpp
*/
// Range: 0x801D8560 -> 0x801D91C0
void zWallePlayerCharacterProxyCollisionListener::processConstraintsCallback(class hkArray * manifold /* r30 */, class hkpSimplexSolverInput * input /* r31 */) {
    // Local variables
    class hkpSurfaceConstraintInfo * pConstraints; // r0
    class zWallePlayer * pPlayer; // r17
    class xVec3 surfaceDeltaSum; // r1+0x17C
    class xVec3 playerVelocityEngine; // r1+0x170
    float surfaceDeltaCount; // f22

    {
        // Range: 0x801D85D4 -> 0x801D90B0
        // Local variables
        int i; // r16

        {
            // Range: 0x801D85D4 -> 0x801D90B0
            // Local variables
            class xAnimVFX_Effect * vfx; // r0
            class xEnt * pEnt; // r15
            class zProjectile * projectile; // r15
            bool usingTriSurface; // r1+0x10
            class hkpRigidBodyCinfo info; // r1+0x200
            class xVec3 up; // r1+0x12C
            class xVec3 oldNormal; // r1+0x138
            class hkpPhantom * phantomA; // r0
            class hkpRigidBody * bodyB; // r18
            class xVec3 newNormal; // r1+0x150
            class hkVector4 newhkNormal; // r1+0x160
            class hkpRootCdPoint point; // r1+0x1D0

            {
                // Range: 0x801D85D4 -> 0x801D85D4
                // Local variables
                class xVec3 zero; // r1+0x144
            }
            {
                // Range: 0x801D85D4 -> 0x801D85D4
                // Local variables
                class hkpPropertyValue val; // r1+0xB8
            }
            {
                // Range: 0x801D85D4 -> 0x801D85D4
                // Local variables
                float speed; // f0

                {
                    // Range: 0x801D85D4 -> 0x801D85D4
                    // Local variables
                    class hkpPropertyValue projNormal; // r1+0xB0

                    {
                        // Range: 0x801D85D4 -> 0x801D85D4
                        // Local variables
                        class xMat4x3 collisionMatrix; // r1+0x188
                    }
                }
            }
            {
                // Range: 0x801D85D4 -> 0x801D909C
                // Local variables
                class hkVector4 * normalHavok; // r3
                class xVec3 normalEngine; // r1+0x114
                class xVec3 surfaceVelocityEngine; // r1+0x120
                class xMat4x3 * engineTransform; // r0

                {
                    // Range: 0x801D85D4 -> 0x801D85D4
                    // Local variables
                    class xVec3 materialModifier; // r1+0xF0
                    class xVec3 binormal; // r1+0xFC
                    class xVec3 forward; // r1+0x108
                    class TriangleInfo * pTriInfo; // r3
                }
            }
        }
    }

    // References
    // -> float hkInfinity;
}
