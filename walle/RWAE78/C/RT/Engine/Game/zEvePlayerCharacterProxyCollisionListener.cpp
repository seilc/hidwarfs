/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zEvePlayerCharacterProxyCollisionListener.cpp
*/
// signature: zEvePlayerCharacterProxyCollisionListener::contactPointAddedCallback(const hkpRootCdPoint &)
// Range: 0x800C8F30 -> 0x800C8F34
void zEvePlayerCharacterProxyCollisionListener::contactPointAddedCallback() {
}
// Range: 0x800C8F40 -> 0x800C93D4
void zEvePlayerCharacterProxyCollisionListener::processConstraintsCallback(class hkArray * manifold /* r15 */, class hkpSimplexSolverInput * input /* r16 */) {
    // Local variables
    class hkpSurfaceConstraintInfo * pConstraints; // r0
    class zEvePlayer * pPlayer; // r20

    {
        // Range: 0x800C8F9C -> 0x800C934C
        // Local variables
        int i; // r19

        {
            // Range: 0x800C8F9C -> 0x800C934C
            // Local variables
            class xEnt * pEnt; // r17
            class xBase * pBase; // r18
            class hkpRigidBodyCinfo info; // r1+0xC0
            class xVec3 up; // r1+0x28
            class xVec3 oldNormal; // r1+0x34
            class hkpPhantom * phantomA; // r0
            class hkpRigidBody * bodyB; // r17
            class xVec3 newNormal; // r1+0x4C
            class hkVector4 newhkNormal; // r1+0x60
            class hkpRootCdPoint point; // r1+0x90
            float impactVel; // f27

            {
                // Range: 0x800C8FB4 -> 0x800C8FBC
                // Local variables
                class xVec3 zero; // r1+0x40
            }
            {
                // Range: 0x800C8FBC -> 0x800C8FD0
                // Local variables
                class EventActionHit params; // r1+0x70
            }
            {
                // Range: 0x800C8FD0 -> 0x800C92EC
                // Local variables
                float damageRate; // f1
            }
            {
                // Range: 0x800C9300 -> 0x800C934C
                // Local variables
                float wallDamage; // f0
            }
        }
    }

    // References
    // -> float hkInfinity;
}
