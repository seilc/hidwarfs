/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zBiplanePlayerCharacterProxyCollisionListener.cpp
*/
// signature: zBiplanePlayerCharacterProxyCollisionListener::processConstraintsCallback(const hkArray<hkpRootCdPoint> &, hkpSimplexSolverInput &)
// Range: 0x800A9160 -> 0x800A98A8
void zBiplanePlayerCharacterProxyCollisionListener::processConstraintsCallback(class zBiplanePlayerCharacterProxyCollisionListener * this /* r15 */, class hkArray & manifold /* r16 */) {
    // Local variables
    class hkpSurfaceConstraintInfo * pConstraints; // r0
    class zBiplanePlayer * pPlayer; // r20
    bool collision; // r19

    {
        // Range: 0x800A91B0 -> 0x800A9760
        // Local variables
        int i; // r18

        {
            // Range: 0x800A91B0 -> 0x800A9760
            // Local variables
            float atXZDotProd; // f0
            float rightXZDotProd; // f0
            float atDotProd; // f0
            class xBase * baseB; // r7
            class xBase * baseA; // r5
            class hkpPhantom * phantomB; // r0
            class hkpPhantom * phantomA; // r0
            class hkpRigidBody * bodyB; // r0
            class hkpRigidBody * bodyA; // r0
            class hkpWorldObject * otherHavokObj; // r0
            class xBase * otherBase; // r17
            class xVec3 newNormal; // r1+0x1C
            class hkVector4 newhkNormal; // r1+0x30
            class hkpRootCdPoint point; // r1+0x40

            {
                // Range: 0x800A9728 -> 0x800A9760
                // Local variables
                float newDiff; // f0
            }
        }
    }
    {
        // Range: 0x800A9774 -> 0x800A985C
        // Local variables
        class EventActionVector collisionParams; // r1+0x10
    }

    // References
    // -> class zGlobals globals;
}
