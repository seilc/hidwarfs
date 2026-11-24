/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zCombatHitSpot.cpp
*/
// signature: zCombatHitSpot::Init(const Sext::HitSpot *, xEnt *)
// Range: 0x8009CED0 -> 0x8009D0E8
void zCombatHitSpot::Init(class zCombatHitSpot * this /* r30 */, class xEnt * spotOwner /* r31 */) {
    // Local variables
    class hkTransform identityTransform; // r1+0x40

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x8009D0F0 -> 0x8009D0F8
void zCombatHitSpot::Destroy() {
}
// Range: 0x8009D100 -> 0x8009D220
void zCombatHitSpot::Update(class zCombatHitSpot * this /* r29 */, unsigned char profile /* r30 */) {
    // Local variables
    class xMat4x3 boneMatrix; // r1+0x20
    class xOGModelRef & model; // r0
}
// Range: 0x8009D220 -> 0x8009D3A8
void zCombatHitSpot::ProcessPenetrations(class zCombatHitSpot * this /* r27 */) {
    // Local variables
    class hkpCombatCdBodyPairCollectorNoBSP collector; // r1+0x70

    {
        // Range: 0x8009D268 -> 0x8009D380
        // Local variables
        int i; // r29

        {
            // Range: 0x8009D268 -> 0x8009D380
            // Local variables
            class zProjectileHavok * obj; // r28
            class hkpRigidBody * hitRBB; // r0
            class hkpRigidBody * hitRBA; // r0
            class hkpRootCdBodyPair hit; // r1+0x30

            {
                // Range: 0x8009D2AC -> 0x8009D2CC
                // Local variables
                class xBase * temp; // r4
            }
            {
                // Range: 0x8009D2CC -> 0x8009D2E8
                // Local variables
                class xBase * temp; // r3
            }
            {
                // Range: 0x8009D2E8 -> 0x8009D380
                // Local variables
                class ProjectileCollisionDetails colInfo; // r1+0x40
                class hkVector4 hkHitNormal; // r1+0x10
                class hkVector4 hkHitPos; // r1+0x20
            }
        }
    }
}
// signature: zCombatHitSpot::IsActive(unsigned int, float, unsigned char)
// Range: 0x8009D3B0 -> 0x8009D45C
bool zCombatHitSpot::IsActive() {
}
