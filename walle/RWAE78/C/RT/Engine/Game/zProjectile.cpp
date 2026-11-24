/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zProjectile.cpp
*/
static class zProjectileController gDefaultProjectileParameters; // size: 0x40, address: 0x80799028
class zProjectileController projectileController; // size: 0x40, address: 0x80799068
class zProjectileControllerBasic projectileControllerBasic; // size: 0x40, address: 0x807990A8
class zProjectileControllerHeavy projectileControllerHeavy; // size: 0x40, address: 0x807990E8
class zProjectileControllerSuperHeavy projectileControllerSuperHeavy; // size: 0x40, address: 0x80799128
class zProjectileControllerHeavyFlagBlue projectileControllerHeavyFlagBlue; // size: 0x40, address: 0x80799168
class zProjectileControllerHeavyFlagRed projectileControllerHeavyFlagRed; // size: 0x40, address: 0x807991A8
class zProjectileControllerHeavyMultiplayer projectileControllerHeavyMultiplayer; // size: 0x40, address: 0x807991E8
class zProjectileControllerMagneticAttract projectileControllerMagneticAttract; // size: 0x40, address: 0x80799228
class zProjectileControllerMagneticRepel projectileControllerMagneticRepel; // size: 0x40, address: 0x80799268
class zProjectileControllerEnergy projectileControllerEnergy; // size: 0x40, address: 0x807992A8
class zProjectileControllerSuperEnergy projectileControllerSuperEnergy; // size: 0x40, address: 0x807992E8
class zProjectileControllerSuperHeavyClusterBomb projectileControllerClusterBomb; // size: 0x40, address: 0x80799328
float timeoutThreshold; // size: 0x4, address: 0x80700164
float distanceThreshold; // size: 0x4, address: 0x80700168
int hitsPerFrame; // size: 0x4, address: 0x8070016C
// Range: 0x80182520 -> 0x801825CC
void * zProjectile::zProjectile(class zProjectile * this /* r31 */) {
}
// signature: zProjectile::SetupProjectile(zProjectileController *, zProjectileLaunchData *, xBase *)
// Range: 0x801825D0 -> 0x80183204
void zProjectile::SetupProjectile(class zProjectile * this /* r27 */, class zProjectileController * controller /* r28 */, class zProjectileLaunchData * launchData /* r29 */) {
    // Local variables
    class ProjectileAsset * projectileAsset; // r30

    {
        // Range: 0x8018296C -> 0x80182ABC
        // Local variables
        class xMat4x3 matrixCopy; // r1+0x8
    }

    // References
    // -> static class zQueue sPhysQueue;
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
    // -> static class zProjectileTrajectory * (* trajectoryBuilders[9])(class zFactory * factory);
    // -> static class xVec3 hintUp;
    // -> class zFactory factory;
    // -> static class zProjectileTypesTable gProjectileTypesTable[24];
}
// Range: 0x80183210 -> 0x8018362C
void zProjectile::Update(class zProjectile * this /* r31 */, float dt /* f31 */) {
    // Local variables
    float prevTime; // f0

    {
        // Range: 0x80183304 -> 0x801835EC
        // Local variables
        class xMat4x3 curMatrix; // r1+0xC0
        class xVec3 newDrivPos; // r1+0x14
        class xVec3 curPos; // r1+0x20

        {
            // Range: 0x80183350 -> 0x801833CC
            // Local variables
            class xVec3 delta; // r1+0x8
        }
    }
}
// Range: 0x80183650 -> 0x8018389C
void zProjectile::TriggerMuzzleFlash(class zProjectile * this /* r29 */, class xEnt * driver /* r27 */, int bone /* r28 */, class xMat4x3 * collmat /* r30 */) {
    {
        // Range: 0x80183664 -> 0x80183774
        // Local variables
        class zFXScriptSpawnPt * fxSpawn; // r31
    }
    {
        // Range: 0x80183798 -> 0x80183848
        // Local variables
        class xMat4x3 matrixCopy; // r1+0x8
    }
}
// Range: 0x801838A0 -> 0x801838E8
bool zProjectile::CheckProjectileDeath() {
}
// signature: zProjectile::SwitchTrajectory(eProjectileTrajectoryType, zProjectileController *, zProjectileLaunchData *, xBase *)
// Range: 0x801838F0 -> 0x80183A78
void zProjectile::SwitchTrajectory(class zProjectile * this /* r29 */, enum eProjectileTrajectoryType type /* r30 */, class zProjectileLaunchData * launchData /* r31 */) {
    // Local variables
    class ModelInstanceAsset * tab; // r0

    // References
    // -> static class xVec3 hintUp;
    // -> static class zProjectileTypesTable gProjectileTypesTable[24];
    // -> static class zProjectileTrajectory * (* trajectoryBuilders[9])(class zFactory * factory);
    // -> class zFactory factory;
}
// Range: 0x80183A80 -> 0x80183F28
void zProjectile::SwitchProjectileToHavok(class zProjectile * this /* r29 */, class zProjectileLaunchData * launchData /* r30 */, class zProjectileController * controller /* r31 */) {
    // Local variables
    class xVec3 startPosition; // r1+0x2C
    class xVec3 targetDirection; // r1+0x20
    float toHitDistance; // f0
    class xVec3 targetPosition; // r1+0x14
    class xVec3 targetVector; // r1+0x8

    {
        // Range: 0x80183E48 -> 0x80183EEC
        // Local variables
        class zProjectileLaunchData newLaunchData; // r1+0x38
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x80183F40 -> 0x80184160
void zProjectile::ProcessTimeout(class zProjectile * this /* r30 */) {
    // Local variables
    bool shouldEmitEffect; // r0
    bool shouldDie; // r31
    float timeToKillInAir; // f2
    float timeToKillAfterDrop; // f3
    float timeToKillAlive; // f4

    {
        // Range: 0x80184050 -> 0x80184108
        // Local variables
        class xMat4x3 projectileLocation; // r1+0x8
    }
}
// Range: 0x80184170 -> 0x80184418
void zProjectile::ProcessCollision(class zProjectile * this /* r29 */, class xMat4x3 * collisionLocation /* r30 */, class xBase * collidedBody /* r31 */) {
    // Local variables
    class xMat4x3 projectileLocation; // r1+0x10
}
// Range: 0x80184420 -> 0x80184694
void zProjectile::ProcessProjectileCollision(class zProjectile * this /* r29 */, class zProjectile * otherProjectile /* r30 */) {
    // Local variables
    enum eProjectileType otherType; // r31

    {
        // Range: 0x80184478 -> 0x80184528
        // Local variables
        class xMat4x3 projectileLocation; // r1+0x50
    }
    {
        // Range: 0x80184528 -> 0x80184608
        // Local variables
        class xMat4x3 projectileLocation; // r1+0x10
    }
}
// Range: 0x801846A0 -> 0x801848D4
void zProjectile::ProcessLaserCollision(class zProjectile * this /* r29 */, class zRunEntLaser * laser /* r30 */) {
    // Local variables
    enum eLaserType laserType; // r31

    {
        // Range: 0x801846F4 -> 0x801847A4
        // Local variables
        class xMat4x3 projectileLocation; // r1+0x50
    }
    {
        // Range: 0x801847A4 -> 0x80184884
        // Local variables
        class xMat4x3 projectileLocation; // r1+0x10
    }
}
// Range: 0x801848E0 -> 0x80184984
class xVec3 zProjectile::GetPosition() {
    // Local variables
    class xMat4x3 tempMatrix; // r1+0x8
}
// Range: 0x80184990 -> 0x80184AB4
class zFXScriptSpawnPt * zProjectile::EmitEffect(class zProjectile * this /* r28 */, class zFXScriptSpawnPt * fx /* r29 */, class xMat4x3 * location /* r30 */, bool enableFXVelocityScaling /* r27 */) {
    // Local variables
    class zFXScriptSpawnPt * fxSpawn; // r31
}
// Range: 0x80184AC0 -> 0x80184B20
void * zProjectileLaunchData::zProjectileLaunchData() {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x80184B20 -> 0x80184B3C
class xVec3 * zProjectile::GetPos() {
}
// Range: 0x80184B40 -> 0x80184B78
class zPlayer * zProjectile::GetPlayerOwner() {
}
