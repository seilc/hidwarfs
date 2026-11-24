/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zProjectile.cpp
*/
// Range: 0x80218700 -> 0x80218758
void * zProjectileLaunchData::zProjectileLaunchData(class zProjectileLaunchData * this /* r31 */) {
}
// signature: zProjectileLaunchData::SetupLaunchToDirection(const xMat4x3, const xVec3 &, float)
// Range: 0x80218760 -> 0x802188CC
void zProjectileLaunchData::SetupLaunchToDirection() {
}
// Range: 0x802188D0 -> 0x8021896C
void * zProjectile::zProjectile() {
    // References
    // -> struct {} __vt__16zProjectileHavok;
    // -> struct {} __vt__11zProjectile;
}
// Range: 0x80218980 -> 0x80218FC8
void zProjectile::Initialize(class zProjectile * this /* r28 */, class EntityHandleBase * projectileHandle /* r29 */, class zProjectileLaunchData & launchData /* r30 */, class xBase * owner /* r20 */) {
    // Local variables
    class ProjectileAsset * projectileAsset; // r0
    enum eProjectileType projType; // r0
    class xVec3 launchVector; // r1+0x38

    {
        // Range: 0x80218AD4 -> 0x80218C74
        // Local variables
        class zProjectileHavokCreateInfo havokCreateInfo; // r1+0x88
    }
    {
        // Range: 0x80218C74 -> 0x80218D60
        // Local variables
        class xVec3 acceleration; // r1+0x2C
    }
    {
        // Range: 0x80218D60 -> 0x80218F98
        // Local variables
        class zSoundSourcesPhysics * soundSourcePhys; // r0
    }

    // References
    // -> static class zQueue sPhysQueue;
}
// Range: 0x80218FD0 -> 0x80219164
void zProjectile::FindAssetFX(class zProjectile * this /* r31 */) {
}
// Range: 0x80219170 -> 0x8021929C
void zProjectile::Cleanup(class zProjectile * this /* r30 */) {
    // References
    // -> bool gSysForceExit;
    // -> bool gSoundReadyToExit;
}
// Range: 0x802192A0 -> 0x80219480
void zProjectile::Update(class zProjectile * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x80219304 -> 0x802193B8
        // Local variables
        class Finite_Lifetime_Struct & mortalityProps; // r0
    }
    {
        // Range: 0x802193FC -> 0x80219428
        // Local variables
        class hkpRigidBody * body; // r0
    }
    {
        // Range: 0x80219428 -> 0x80219464
        // Local variables
        class xMat4x3 curMatrix; // r1+0x8
    }
}
// Range: 0x802196F0 -> 0x802196F8
bool zProjectile::ReadyForCleanup() {
}
// Range: 0x80219700 -> 0x80219830
void zProjectile::Explode(class zProjectile * this /* r28 */) {
    // Local variables
    class xEnt * ownerIgnoresDamage; // r29
}
// Range: 0x80219840 -> 0x80219C6C
void zProjectile::ProcessCollision(class zProjectile * this /* r30 */, class ProjectileCollisionDetails & collisionInfo /* r31 */) {
    {
        // Range: 0x80219878 -> 0x80219970
        // Local variables
        class xMat4x3 collTransform; // r1+0x50
    }
    {
        // Range: 0x80219970 -> 0x80219C4C
        // Local variables
        float dotYAxis; // f0
        class xMat4x3 collTransform; // r1+0x10

        {
            // Range: 0x80219BEC -> 0x80219C2C
            // Local variables
            class xOGModel * hitModel; // r5
        }
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zProjectile::ComputeTargetLaunchVector(const xMat4x3, const xVec3 &, const xVec3 &, float, xVec3 &)
// Range: 0x80219C70 -> 0x80219FB4
bool zProjectile::ComputeTargetLaunchVector(float maxLaunchSpeed /* f31 */, class xVec3 & launchVector /* r31 */) {
    // Local variables
    float parabolaAngle; // f0
    class xParabola results; // r1+0x20
    class xVec3 velocityDirection; // r1+0x14
    class xVec3 xzProjectedUnitVector; // r1+0x8

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x80219FC0 -> 0x80219FC8
class xMat4x3 & zProjectile::GetTransform() {
}
// Range: 0x80219FD0 -> 0x80219FD8
class xVec3 & zProjectile::GetPos() {
}
// Range: 0x80219FE0 -> 0x8021A0A0
class zFXSpawn * zProjectile::EmitEffect(class zProjectile * this /* r27 */, class zFXSpawn * fx /* r28 */, class xMat4x3 & location /* r29 */, bool attachToEntity /* r30 */) {
    // Local variables
    class zFXSpawn * fxSpawn; // r31
}
// Range: 0x8021A0A0 -> 0x8021AE38
bool zProjectile::IsSpawnInProgress(class zProjectile * this /* r30 */) {
    // Local variables
    class hkMotionState * motionState; // r0
    class hkpWorld * havokWorld; // r28
    class hkpShape * projShape; // r0
    class hkpCollidable collA; // r1+0x8
    class hkpCollisionInput * input; // r0
    class hkpAllCdBodyPairCollector collector; // r1+0x54

    {
        // Range: 0x8021A170 -> 0x8021A170
        // Local variables
        int i; // r0

        {
            // Range: 0x8021A170 -> 0x8021A170
            // Local variables
            class xBase * hitObject; // r6
            class hkpRigidBody * hitRB; // r0
            class hkpPhantom * hitPhantom; // r0
        }
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> struct {} __vt__25hkpAllCdBodyPairCollector;
}
// signature: zProjectileUPPlaygroundLaunchable::Initialize(World::EntityHandleBase *, const zProjectileLaunchData &, xBase *)
// Range: 0x8021AE40 -> 0x8021AE78
void zProjectileUPPlaygroundLaunchable::Initialize(class zProjectileUPPlaygroundLaunchable * this /* r31 */) {
}
// Range: 0x8021AE80 -> 0x8021B070
void zProjectileUPPlaygroundLaunchable::Update(class zProjectileUPPlaygroundLaunchable * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x8021AEC4 -> 0x8021AF78
        // Local variables
        class Finite_Lifetime_Struct & mortalityProps; // r0
    }
    {
        // Range: 0x8021AFBC -> 0x8021AFE8
        // Local variables
        class hkpRigidBody * body; // r0
    }
    {
        // Range: 0x8021AFE8 -> 0x8021B054
        // Local variables
        class hkpRigidBody * body; // r3
        class xMat4x3 curMatrix; // r1+0x8
    }
}
// Range: 0x8021B090 -> 0x8021B1C4
void zProjectileUPPlaygroundLaunchable::ProcessCollision(class zProjectileUPPlaygroundLaunchable * this /* r31 */, class ProjectileCollisionDetails & collisionInfo /* r29 */) {
    // Local variables
    class hkpRigidBody * body; // r30

    {
        // Range: 0x8021B0F8 -> 0x8021B1A0
        // Local variables
        float linearDamping; // f1

        {
            // Range: 0x8021B128 -> 0x8021B198
            // Local variables
            class xEnt * hitObj; // r0

            {
                // Range: 0x8021B140 -> 0x8021B198
                // Local variables
                class EventActionHit params; // r1+0x8
            }
        }
    }
}
// signature: zProjectileUPPlaygroundLaunchable::LaunchAtTarget(const xVec3 &, zPlayer *)
// Range: 0x8021B1D0 -> 0x8021B3DC
void zProjectileUPPlaygroundLaunchable::LaunchAtTarget(class zProjectileUPPlaygroundLaunchable * this /* r31 */) {
    // Local variables
    class hkpRigidBody * body; // r29

    {
        // Range: 0x8021B200 -> 0x8021B35C
        // Local variables
        class xParabola result; // r1+0x20
        float relativeApexHeight; // f2
    }
}
// signature: zProjectileUPPlaygroundLaunchable::LaunchInDirection(const xVec3 &, zPlayer *)
// Range: 0x8021B3E0 -> 0x8021B510
void zProjectileUPPlaygroundLaunchable::LaunchInDirection(class zProjectileUPPlaygroundLaunchable * this /* r28 */, class xVec3 & dir /* r30 */) {
    // Local variables
    class hkpRigidBody * body; // r29
}
// Range: 0x8021B520 -> 0x8021B75C
void zProjectileUPPlaygroundRollable::Update(class zProjectileUPPlaygroundRollable * this /* r30 */, float dt /* f30 */) {
    // Local variables
    class xMat4x3 curMatrix; // r1+0x8
    class hkpRigidBody * body; // r31

    {
        // Range: 0x8021B570 -> 0x8021B624
        // Local variables
        class Finite_Lifetime_Struct & mortalityProps; // r0
    }
    {
        // Range: 0x8021B624 -> 0x8021B654
        // Local variables
        class hkpRigidBody * body; // r0
    }
    {
        // Range: 0x8021B690 -> 0x8021B708
        // Local variables
        float damping; // f31
    }
}
// Range: 0x8021B760 -> 0x8021B86C
void zProjectileUPPlaygroundRollable::ProcessCollision(class zProjectileUPPlaygroundRollable * this /* r30 */, class ProjectileCollisionDetails & collisionInfo /* r31 */) {
    // Local variables
    class hkpRigidBody * rigidBody; // r3
    float minHitSpeedSquared; // f1

    {
        // Range: 0x8021B7C8 -> 0x8021B854
        // Local variables
        class xEnt * hitObj; // r0

        {
            // Range: 0x8021B7F8 -> 0x8021B854
            // Local variables
            class HitByProjectile params; // r1+0x8
        }
    }
}
// Range: 0x8021B870 -> 0x8021B88C
bool zProjectileUPPlaygroundRollable::WasRecentlyLaunched() {
}
// signature: zProjectileUPPlaygroundRollable::LaunchAtTarget(const xVec3 &, zPlayer *)
// Range: 0x8021B890 -> 0x8021BA04
void zProjectileUPPlaygroundRollable::LaunchAtTarget() {
    // Local variables
    float linearDamping; // f1
    class xVec3 launchVector; // r1+0x8
    float finalVelocity; // f7
    float rollSpeed; // f5
}
// signature: zProjectileUPPlaygroundRollable::LaunchInDirection(const xVec3 &, zPlayer *, float)
// Range: 0x8021BA10 -> 0x8021BC50
void zProjectileUPPlaygroundRollable::LaunchInDirection(class zProjectileUPPlaygroundRollable * this /* r31 */, float damping /* f31 */) {
    // Local variables
    class xVec3 rollLaunchVector; // r1+0x20
    float launchSpeed; // f0
    class hkpRigidBody * body; // r29

    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zProjectileUPPlaygroundRollable::LaunchInDirection(const xVec3 &, zPlayer *)
// Range: 0x8021BC50 -> 0x8021BC68
void zProjectileUPPlaygroundRollable::LaunchInDirection() {
    // Local variables
    float linearDamping; // f1
}
// signature: zProjectileUPPlayerThrowable::Initialize(World::EntityHandleBase *, const zProjectileLaunchData &, xBase *)
// Range: 0x8021BC70 -> 0x8021BCDC
void zProjectileUPPlayerThrowable::Initialize(class zProjectileUPPlayerThrowable * this /* r30 */, class xBase * owner /* r31 */) {
}
// Range: 0x8021BCE0 -> 0x8021BDD0
void zProjectileUPPlayerThrowable::Update(class zProjectileUPPlayerThrowable * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x8021BD18 -> 0x8021BDB4
        // Local variables
        class xMat4x3 curMatrix; // r1+0x8
        class xMat4x3 rotHandMat; // r1+0x48
        class xMat4x3 handMat; // r1+0x88
    }
}
