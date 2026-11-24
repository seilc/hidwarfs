/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zProjectileTrajectory.cpp
*/
static class zProjectileTrajectory * (* trajectoryBuilders[9])(class zFactory * factory); // size: 0x24, address: 0x80700208
// signature: zProjectileTypes_GetTypeFromTrajectory(eProjectileTrajectoryType)
// Range: 0x8018BD60 -> 0x8018BDC8
enum eProjectileType zProjectileTypes_GetTypeFromTrajectory() {
}
// signature: zProjectileTrajectoryTypes_GetTrajectoryFromType(eProjectileType)
// Range: 0x8018BDD0 -> 0x8018BE48
enum eProjectileTrajectoryType zProjectileTrajectoryTypes_GetTrajectoryFromType() {
}
// Range: 0x8018BE50 -> 0x8018BED4
void zProjectileTrajectory::Cleanup(class zProjectileTrajectory * this /* r30 */) {
    // References
    // -> class zFactory factory;
}
// Range: 0x8018BEE0 -> 0x8018C190
void zProjectileTrajectory::Setup(class zProjectileTrajectory * this /* r27 */, class zProjectile * owner /* r28 */, class zProjectileLaunchData * launchData /* r29 */, unsigned long long id /* r31:r30 */) {
    {
        // Range: 0x8018C0E4 -> 0x8018C178
        // Local variables
        class ModelPrototypeEntity * proto; // r0
    }

    // References
    // -> struct {} __vt__16zProjectileHavok;
    // -> class zFactory factory;
    // -> class xMat4x3 g_I3;
}
// Range: 0x8018C190 -> 0x8018C2A4
void zProjectileTrajectory::ReapplyAllInputParameterForces() {
    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x8018C2B0 -> 0x8018C378
void zProjectileTrajectory::GetCurrentPositionAndLinearVelocity(class xVec3 * position /* r30 */, class xVec3 * linearVelocity /* r31 */) {
    // Local variables
    class xMat4x3 transform; // r1+0x70
}
// signature: zProjectileTrajectory::Update(float)
// Range: 0x8018C380 -> 0x8018C414
void zProjectileTrajectory::Update() {
}
// Range: 0x8018C420 -> 0x8018C5C8
void zProjectileTrajectory::PostPlayerUpdate(class zProjectileTrajectory * this /* r30 */, float dt /* f31 */) {
}
// signature: zProjectileTrajectory::PostPhysicsUpdate(float)
// Range: 0x8018C5D0 -> 0x8018C66C
void zProjectileTrajectory::PostPhysicsUpdate(class zProjectileTrajectory * this /* r31 */) {
}
// signature: zProjectileTrajectory::ApplyForce(xVec3 &, float)
// Range: 0x8018C670 -> 0x8018C790
void zProjectileTrajectory::ApplyForce(float dt /* f31 */) {
}
// signature: zProjectileTrajectory::ApplySoftKeyframe(const xVec3 &, float)
// Range: 0x8018C790 -> 0x8018C7F8
void zProjectileTrajectory::ApplySoftKeyframe() {
}
// signature: zProjectileTrajectory::ForceVelocities(const xVec3 &, const xVec3 &)
// Range: 0x8018C800 -> 0x8018C8CC
void zProjectileTrajectory::ForceVelocities(class xVec3 * linearVelocity /* r28 */) {
}
// signature: zProjectileTrajectory::SwitchHavokMode(zProjectileHavok::eHavok_Mode, zProjectileLaunchData *, zProjectileController *)
// Range: 0x8018C8D0 -> 0x8018C9A4
void zProjectileTrajectory::SwitchHavokMode(class zProjectileTrajectory * this /* r29 */, enum eHavok_Mode mode /* r31 */, class zProjectileController * controller /* r30 */) {
}
// signature: zProjectileTrajectory::CreateConstraint(zProjectileTrajectory *, void *, hkpRagdollConstraintData *)
// Range: 0x8018C9B0 -> 0x8018CA74
class hkpConstraintInstance * zProjectileTrajectory::CreateConstraint(void * userInfo /* r27 */, class hkpRagdollConstraintData * rcd /* r28 */) {
    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x8018CA80 -> 0x8018CA8C
int zProjectileTrajectory::GetNumConstraints() {
}
// Range: 0x8018CA90 -> 0x8018CACC
void zProjectileTrajectory::RemoveConstraint(class hkpConstraintInstance * constraint /* r31 */) {
}
// Range: 0x8018CAD0 -> 0x8018CB30
void zProjectileTrajectory::RemoveFromHavok() {
}
// signature: zProjectileTrajectory::IsHittable(const xVec3 &, const xVec3 &, float, xVec3 &)
// Range: 0x8018CB30 -> 0x8018CBA8
bool zProjectileTrajectory::IsHittable() {
    // Local variables
    class xVec3 targetPosition; // r1+0x8
}
// signature: zProjectileTrajectory::IsHittable(const xVec3 &, const xVec3 &, xVec3 &)
// Range: 0x8018CBB0 -> 0x8018CBD8
bool zProjectileTrajectory::IsHittable() {
}
// signature: zProjectileTrajWALLECubeMagnetic::Setup(zProjectile *, zProjectileLaunchData *, unsigned long long)
// Range: 0x8018CBE0 -> 0x8018CD30
void zProjectileTrajWALLECubeMagnetic::Setup(class zProjectileTrajWALLECubeMagnetic * this /* r31 */) {
    // Local variables
    class hkpRigidBody * childBody; // r3
    class xVec3 pos; // r1+0x40
    class hkVector4 min; // r1+0x30
    class hkVector4 max; // r1+0x20
    class hkAabb newAabb; // r1+0x50
    class hkpPropertyValue prop; // r1+0x18

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x8018CDA0 -> 0x8018CE3C
void zProjectileTrajWALLECubeMagnetic::Cleanup(class zProjectileTrajWALLECubeMagnetic * this /* r30 */) {
    // References
    // -> class zFactory factory;
}
// Range: 0x8018CE40 -> 0x8018CEC4
void zProjectileTrajWALLECubeMagnetic::RemoveFromHavok(class zProjectileTrajWALLECubeMagnetic * this /* r30 */) {
}
// signature: zProjectileTrajWALLECubeMagnetic::Update(float)
// Range: 0x8018CED0 -> 0x8018D024
void zProjectileTrajWALLECubeMagnetic::Update() {
    // Local variables
    class hkVector4 * hkPos; // r0
    class xVec3 pos; // r1+0x30
}
// Range: 0x8018D030 -> 0x8018D7B8
void zProjectileTrajWALLECubeMagnetic::PostPlayerUpdate(class zProjectileTrajWALLECubeMagnetic * this /* r27 */, float dt /* f29 */) {
    // Local variables
    class xVec3 forceVec; // r1+0xA0
    class hkVector4 * magnetPos; // r30
    class hkArray * overlaps; // r29
    float phantomRad2; // f30

    {
        // Range: 0x8018D0B0 -> 0x8018D734
        // Local variables
        int c; // r28

        {
            // Range: 0x8018D0B0 -> 0x8018D734
            // Local variables
            class hkpPhantom * phantom; // r24
            class hkpRigidBody * rBody; // r25
            class hkVector4 objDist; // r1+0x90

            {
                // Range: 0x8018D0B0 -> 0x8018D0B8
                // Local variables
                class xBase * bodyOwner; // r0

                {
                    // Range: 0x8018D0B0 -> 0x8018D0B8
                    // Local variables
                    int prop; // r0
                }
            }
            {
                // Range: 0x8018D0B8 -> 0x8018D734
                // Local variables
                class xBase * bodyOwner; // r25

                {
                    // Range: 0x8018D0B8 -> 0x8018D5AC
                    // Local variables
                    class xVec3 vel; // r1+0x80
                    class hkpCharacterProxyCinfo info; // r1+0x130
                    class hkpCharacterProxy * npcProxy; // r23
                    int prop; // r0
                    class zNPCEntity * npcEnt; // r25
                }
                {
                    // Range: 0x8018D5AC -> 0x8018D734
                    // Local variables
                    class hkpCharacterProxyCinfo info; // r1+0xB0
                    class hkVector4 vel; // r1+0x70
                    class hkpCharacterProxy * playerProxy; // r23
                }
            }
        }
    }
}
// signature: zProjectileTrajLinear::ComputeTrajectory(const xVec3 &, const xVec3 &, xVec3 &, float, float, float)
// Range: 0x8018D9A0 -> 0x8018DB74
bool zProjectileTrajLinear::ComputeTrajectory(class zProjectileTrajLinear * this /* r30 */, class xVec3 * targetVector /* r31 */) {
    // Local variables
    float len; // f0
}
// Range: 0x8018DB80 -> 0x8018DFA4
bool zProjectileTrajGravityParabola::ComputeTrajectory(class xVec3 * startPosition /* r29 */, class xVec3 * targetPosition /* r30 */, class xVec3 * targetVector /* r31 */, float maxLaunchAngle /* f29 */, float maxAllowedLaunchSpeed /* f30 */, float gravityDelta /* f31 */) {
    // Local variables
    float parabolaAngle; // f0
    class xParabola results; // r1+0x20
    class xVec3 velocityDirection; // r1+0x14
    class xVec3 xzProjectedUnitVector; // r1+0x8

    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zProjectileTrajEveLaser::Setup(zProjectile *, zProjectileLaunchData *, unsigned long long)
// Range: 0x8018DFB0 -> 0x8018DFE8
void zProjectileTrajEveLaser::Setup(class zProjectileTrajEveLaser * this /* r31 */) {
}
// signature: zProjectileTrajEveLaser::ComputeTrajectory(const xVec3 &, const xVec3 &, xVec3 &, float, float, float)
// Range: 0x8018DFF0 -> 0x8018E1CC
bool zProjectileTrajEveLaser::ComputeTrajectory(class zProjectileTrajEveLaser * this /* r30 */, class xVec3 * targetVector /* r31 */) {
    // Local variables
    class xVec3 distanceVector; // r1+0x8
}
// signature: zProjectileTrajEveLaser::SwitchHavokMode(zProjectileHavok::eHavok_Mode, zProjectileLaunchData *, zProjectileController *)
// Range: 0x8018E1D0 -> 0x8018E29C
void zProjectileTrajEveLaser::SwitchHavokMode(class zProjectileTrajEveLaser * this /* r29 */, class zProjectileController * controller /* r30 */) {
    {
        // Range: 0x8018E1D8 -> 0x8018E280
        // Local variables
        class zWallePlayer * wPlayer; // r3
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zProjectileTrajEveLaser::ProcessProjectileProjectileCollision(zProjectile *)
// Range: 0x8018E2A0 -> 0x8018E3CC
void zProjectileTrajEveLaser::ProcessProjectileProjectileCollision(class zProjectileTrajEveLaser * this /* r31 */) {
    // Local variables
    class hkTransform tempXform; // r1+0x10

    // References
    // -> class xGlobals * xglobals;
}
// signature: zProjectileTrajStraight::Setup(zProjectile *, zProjectileLaunchData *, unsigned long long)
// Range: 0x8018E3D0 -> 0x8018E414
void zProjectileTrajStraight::Setup() {
}
// signature: zProjectileTrajParabola::Setup(zProjectile *, zProjectileLaunchData *, unsigned long long)
// Range: 0x8018E420 -> 0x8018E49C
void zProjectileTrajParabola::Setup() {
}
// signature: zProjectileTrajTrackTarget::Setup(zProjectile *, zProjectileLaunchData *, unsigned long long)
// Range: 0x8018E4A0 -> 0x8018E4D4
void zProjectileTrajTrackTarget::Setup() {
}
// Range: 0x8018E4E0 -> 0x8018E684
void zProjectileTrajTrackTarget::Update(class zProjectileTrajTrackTarget * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 targetPos; // r1+0x8
}
// signature: zProjectileTrajHover::Setup(zProjectile *, zProjectileLaunchData *, unsigned long long)
// Range: 0x8018E690 -> 0x8018E6EC
void zProjectileTrajHover::Setup() {
}
// signature: zProjectileTrajHover::Update(float)
// Range: 0x8018E6F0 -> 0x8018E78C
void zProjectileTrajHover::Update() {
    // Local variables
    float yVel; // f0
    float newY; // f1
}
// signature: zProjectileTrajHover::Shift(xVec3 &)
// Range: 0x8018E790 -> 0x8018E83C
void zProjectileTrajHover::Shift() {
}
