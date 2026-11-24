/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zProjectileController.cpp
*/
// Range: 0x80186100 -> 0x80186194
void * zProjectileController::zProjectileController(class zProjectileController * this /* r31 */) {
    // References
    // -> struct {} __vt__21zProjectileController;
}
// signature: zProjectileController::ProjectileWasUpdated(zProjectile *)
// Range: 0x801861A0 -> 0x801861A4
void zProjectileController::ProjectileWasUpdated() {
}
// signature: zProjectileController::ProjectileWasSpawned(zProjectile *, zProjectileLaunchData *)
// Range: 0x801861B0 -> 0x801861D8
void zProjectileController::ProjectileWasSpawned() {
}
// Range: 0x801861E0 -> 0x801863F0
void zProjectileController::ProjectileWasThrown(class zProjectileController * this /* r25 */, class zProjectile * proj /* r31 */, class zProjectileLaunchData * launchData /* r24 */) {
    {
        // Range: 0x80186240 -> 0x801863D8
        // Local variables
        class xMat4x3 muzzleMat; // r1+0x48
    }
}
// signature: zProjectileController::ProjectileWasPickedUp(zProjectile *, zProjectileLaunchData *, zWallePlayer *)
// Range: 0x801863F0 -> 0x80186434
void zProjectileController::ProjectileWasPickedUp() {
}
// Range: 0x80186440 -> 0x8018661C
void zProjectileController::ProjectileWasDropped(class zProjectileController * this /* r29 */, class zProjectile * proj /* r30 */, class zProjectileLaunchData * launchData /* r31 */) {
    // Local variables
    class zProjectileLaunchData launchCopy; // r1+0x20
}
// signature: zProjectileController::ProjectileCollided(zProjectile *, zProjectileController::CollisionDataType, void *)
// Range: 0x80186620 -> 0x80186638
void zProjectileController::ProjectileCollided() {
}
// signature: zProjectileControllerBasic::ProjectileWasSpawned(zProjectile *, zProjectileLaunchData *)
// Range: 0x80186640 -> 0x80186650
void zProjectileControllerBasic::ProjectileWasSpawned() {
}
// signature: zProjectileControllerBasic::ProjectileWasUpdated(zProjectile *)
// Range: 0x80186650 -> 0x80186654
void zProjectileControllerBasic::ProjectileWasUpdated() {
}
// Range: 0x80186660 -> 0x80186894
void zProjectileControllerBasic::ProjectileWasThrown(class zProjectileControllerBasic * this /* r25 */, class zProjectile * proj /* r31 */, class zProjectileLaunchData * launchData /* r24 */) {
}
// signature: zProjectileControllerBasic::ProjectileCollided(zProjectile *, zProjectileController::CollisionDataType, void *)
// Range: 0x801868A0 -> 0x80186A94
void zProjectileControllerBasic::ProjectileCollided(class zProjectile * proj /* r30 */, enum CollisionDataType type /* r31 */) {
    {
        // Range: 0x801868FC -> 0x80186A5C
        // Local variables
        class xEnt * pEnt; // r0
    }

    // References
    // -> class xVec3 m_Null;
    // -> float hkInfinity;
}
// signature: zProjectileControllerHeavy::ProjectileWasUpdated(zProjectile *)
// Range: 0x80186AA0 -> 0x80186AA4
void zProjectileControllerHeavy::ProjectileWasUpdated() {
}
// Range: 0x80186AB0 -> 0x80186CE4
void zProjectileControllerHeavy::ProjectileWasThrown(class zProjectileControllerHeavy * this /* r25 */, class zProjectile * proj /* r31 */, class zProjectileLaunchData * launchData /* r24 */) {
}
// signature: zProjectileControllerHeavy::ProjectileCollided(zProjectile *, zProjectileController::CollisionDataType, void *)
// Range: 0x80186CF0 -> 0x80186E50
void zProjectileControllerHeavy::ProjectileCollided(class zProjectile * proj /* r31 */, enum CollisionDataType type /* r30 */) {
    {
        // Range: 0x80186D38 -> 0x80186E18
        // Local variables
        class xEnt * pEnt; // r0
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zProjectileControllerHeavyFlagBlue::ProjectileCollided(zProjectile *, zProjectileController::CollisionDataType, void *)
// Range: 0x80186E50 -> 0x80187000
void zProjectileControllerHeavyFlagBlue::ProjectileCollided(class zProjectile * proj /* r31 */) {
    {
        // Range: 0x80186E8C -> 0x80186FE0
        // Local variables
        class xEnt * pEnt; // r0
    }

    // References
    // -> class xVec3 m_Null;
    // -> float hkInfinity;
}
// signature: zProjectileControllerHeavyFlagRed::ProjectileCollided(zProjectile *, zProjectileController::CollisionDataType, void *)
// Range: 0x80187000 -> 0x801871B0
void zProjectileControllerHeavyFlagRed::ProjectileCollided(class zProjectile * proj /* r31 */) {
    {
        // Range: 0x8018703C -> 0x80187190
        // Local variables
        class xEnt * pEnt; // r0
    }

    // References
    // -> class xVec3 m_Null;
    // -> float hkInfinity;
}
// signature: zProjectileControllerSuperHeavy::ProjectileWasSpawned(zProjectile *, zProjectileLaunchData *)
// Range: 0x801871B0 -> 0x801871B4
void zProjectileControllerSuperHeavy::ProjectileWasSpawned() {
}
// Range: 0x801871C0 -> 0x80187400
void zProjectileControllerSuperHeavy::ProjectileWasThrown(class zProjectileControllerSuperHeavy * this /* r25 */, class zProjectile * proj /* r31 */, class zProjectileLaunchData * launchData /* r24 */) {
}
// signature: zProjectileControllerSuperHeavy::ProjectileWasUpdated(zProjectile *)
// Range: 0x80187400 -> 0x80187404
void zProjectileControllerSuperHeavy::ProjectileWasUpdated() {
}
// signature: zProjectileControllerSuperHeavy::SpawnBombs(zProjectile *, bool)
// Range: 0x80187410 -> 0x80187B20
void zProjectileControllerSuperHeavy::SpawnBombs(class zProjectile * proj /* r30 */) {
    // Local variables
    class zProjectileLaunchData launchData; // r1+0xC0
    class xRot rotation; // r1+0x80
    class xVec3 collisionNormal; // r1+0x70
    class xQuat quaternion; // r1+0x60
    class xMat3x3 mat; // r1+0x90
    class xEnt * pEnt; // r31

    {
        // Range: 0x801877AC -> 0x80187A74
        // Local variables
        int c; // r30

        {
            // Range: 0x801877AC -> 0x80187A74
            // Local variables
            float d; // f15
        }
    }

    // References
    // -> class zProjectileControllerSuperHeavyClusterBomb projectileControllerClusterBomb;
    // -> class zFactory factory;
    // -> static class zProjectileManager gProjectileManager;
    // -> class xVec3 m_Null;
}
// signature: zProjectileControllerSuperHeavy::ProjectileCollided(zProjectile *, zProjectileController::CollisionDataType, void *)
// Range: 0x80187B20 -> 0x80187BD8
void zProjectileControllerSuperHeavy::ProjectileCollided(class zProjectileControllerSuperHeavy * this /* r29 */, class zProjectile * proj /* r30 */, enum CollisionDataType type /* r31 */) {
}
// signature: zProjectileControllerSuperHeavyClusterBomb::ProjectileWasSpawned(zProjectile *, zProjectileLaunchData *)
// Range: 0x80187BE0 -> 0x80187CBC
void zProjectileControllerSuperHeavyClusterBomb::ProjectileWasSpawned(class zProjectile * proj /* r31 */) {
}
// signature: zProjectileControllerSuperHeavyClusterBomb::ProjectileCollided(zProjectile *, zProjectileController::CollisionDataType, void *)
// Range: 0x80187CC0 -> 0x80187E1C
void zProjectileControllerSuperHeavyClusterBomb::ProjectileCollided(class zProjectile * proj /* r31 */) {
    {
        // Range: 0x80187CE0 -> 0x80187E08
        // Local variables
        class xEnt * pEnt; // r3
    }

    // References
    // -> float hkInfinity;
}
// Range: 0x80187E20 -> 0x80187F78
void zProjectileControllerHeavyMultiplayer::ProjectileWasUpdated(class zProjectile * proj /* r31 */) {
    // Local variables
    class xVec3 distSinceThrow; // r1+0x8
}
// Range: 0x80187F80 -> 0x801881B4
void zProjectileControllerHeavyMultiplayer::ProjectileWasThrown(class zProjectileControllerHeavyMultiplayer * this /* r25 */, class zProjectile * proj /* r31 */, class zProjectileLaunchData * launchData /* r24 */) {
}
// Range: 0x801881C0 -> 0x801882BC
void zProjectileControllerHeavyMultiplayer::ProjectileWasDropped(class zProjectileControllerHeavyMultiplayer * this /* r29 */, class zProjectile * proj /* r30 */, class zProjectileLaunchData * launchData /* r31 */) {
}
// signature: zProjectileControllerHeavyMultiplayer::ProjectileCollided(zProjectile *, zProjectileController::CollisionDataType, void *)
// Range: 0x801882C0 -> 0x80188488
void zProjectileControllerHeavyMultiplayer::ProjectileCollided(class zProjectile * proj /* r30 */, void * data /* r31 */) {
    {
        // Range: 0x801882C8 -> 0x80188460
        // Local variables
        class xEnt * pEnt; // r0
    }

    // References
    // -> class xVec3 m_Null;
    // -> float hkInfinity;
}
// Range: 0x80188490 -> 0x80188704
void zProjectileControllerMagneticAttract::ProjectileWasUpdated(class zProjectile * proj /* r31 */) {
    // Local variables
    class xVec3 distSinceThrow; // r1+0x20
    class hkVector4 vel; // r1+0x10

    // References
    // -> float hkInfinity;
}
// Range: 0x80188710 -> 0x80188994
void zProjectileControllerMagneticAttract::ProjectileWasThrown(class zProjectileControllerMagneticAttract * this /* r25 */, class zProjectile * proj /* r31 */, class zProjectileLaunchData * launchData /* r24 */) {
}
// Range: 0x801889A0 -> 0x80188A9C
void zProjectileControllerMagneticAttract::ProjectileWasDropped(class zProjectileControllerMagneticAttract * this /* r29 */, class zProjectile * proj /* r30 */, class zProjectileLaunchData * launchData /* r31 */) {
}
// signature: zProjectileControllerMagneticAttract::ProjectileCollided(zProjectile *, zProjectileController::CollisionDataType, void *)
// Range: 0x80188AA0 -> 0x801890C4
void zProjectileControllerMagneticAttract::ProjectileCollided(class zProjectile * proj /* r29 */, enum CollisionDataType type /* r30 */) {
    {
        // Range: 0x80188AC0 -> 0x80188DE8
        // Local variables
        class xEnt * pEnt; // r0
        int rigidVal; // r10
        int proxyVal; // r9
        bool shouldFall; // r31

        {
            // Range: 0x80188BD8 -> 0x80188D70
            // Local variables
            class xEnt * obj; // r0
        }
        {
            // Range: 0x80188D70 -> 0x80188DE0
            // Local variables
            enum MotionType moType; // r0
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> class xVec3 m_Null;
    // -> float hkInfinity;
}
// signature: zProjectileControllerMagneticRepel::ProjectileWasSpawned(zProjectile *, zProjectileLaunchData *)
// Range: 0x801890D0 -> 0x80189104
void zProjectileControllerMagneticRepel::ProjectileWasSpawned() {
}
// Range: 0x80189110 -> 0x801893A0
void zProjectileControllerMagneticRepel::ProjectileWasThrown(class zProjectileControllerMagneticRepel * this /* r25 */, class zProjectile * proj /* r31 */, class zProjectileLaunchData * launchData /* r24 */) {
}
// signature: zProjectileControllerEnergy::ProjectileWasUpdated(zProjectile *)
// Range: 0x801893A0 -> 0x801893A4
void zProjectileControllerEnergy::ProjectileWasUpdated() {
}
// Range: 0x801893B0 -> 0x801895E4
void zProjectileControllerEnergy::ProjectileWasThrown(class zProjectileControllerEnergy * this /* r25 */, class zProjectile * proj /* r31 */, class zProjectileLaunchData * launchData /* r24 */) {
}
// Range: 0x801895F0 -> 0x801896F8
void zProjectileControllerEnergy::ProjectileWasDropped(class zProjectileControllerEnergy * this /* r29 */, class zProjectile * proj /* r30 */, class zProjectileLaunchData * launchData /* r31 */) {
}
// signature: zProjectileControllerEnergy::ProjectileCollided(zProjectile *, zProjectileController::CollisionDataType, void *)
// Range: 0x80189700 -> 0x80189A8C
void zProjectileControllerEnergy::ProjectileCollided(class zProjectile * proj /* r30 */, enum CollisionDataType type /* r31 */) {
    // Local variables
    float explosionRadius; // f31
    float explosionDamage; // f2

    {
        // Range: 0x80189784 -> 0x801898F8
        // Local variables
        class xEnt * pEnt; // r3
    }
    {
        // Range: 0x801898F8 -> 0x80189A60
        // Local variables
        class xEnt * pEnt; // r3
    }

    // References
    // -> class zGlobals globals;
    // -> float hkInfinity;
}
// signature: zProjectileControllerEnergy::ProjectileTimedOut(zProjectile *)
// Range: 0x80189A90 -> 0x80189B3C
void zProjectileControllerEnergy::ProjectileTimedOut() {
    // Local variables
    class xEnt * pEnt; // r3
    float explosionRadius; // f1
    float explosionDamage; // f2

    // References
    // -> class zGlobals globals;
}
// Range: 0x80189B40 -> 0x80189D74
void zProjectileControllerSuperEnergy::ProjectileWasThrown(class zProjectileControllerSuperEnergy * this /* r25 */, class zProjectile * proj /* r31 */, class zProjectileLaunchData * launchData /* r24 */) {
}
// signature: zProjectileControllerSuperEnergy::ProjectileCollided(zProjectile *, zProjectileController::CollisionDataType, void *)
// Range: 0x80189D80 -> 0x8018A094
void zProjectileControllerSuperEnergy::ProjectileCollided(class zProjectile * proj /* r30 */, enum CollisionDataType type /* r31 */) {
    // Local variables
    float explosionRadius; // f31
    float explosionDamage; // f2

    {
        // Range: 0x80189E04 -> 0x80189F3C
        // Local variables
        class xEnt * pEnt; // r3
    }
    {
        // Range: 0x80189F3C -> 0x8018A068
        // Local variables
        class xEnt * pEnt; // r3
    }

    // References
    // -> float hkInfinity;
}
// signature: zProjectileControllerSuperEnergy::ProjectileTimedOut(zProjectile *)
// Range: 0x8018A0A0 -> 0x8018A128
void zProjectileControllerSuperEnergy::ProjectileTimedOut() {
    // Local variables
    class xEnt * pEnt; // r0
    float explosionRadius; // f1
    float explosionDamage; // f2
}
