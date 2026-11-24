/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zWalleProjectileManager.cpp
*/
// signature: zWalleProjectileManager::Init(zWallePlayer *)
// Range: 0x801D5230 -> 0x801D527C
void zWalleProjectileManager::Init() {
}
// Range: 0x801D5280 -> 0x801D5288
int zWalleProjectileManager::GetNumProjectiles() {
}
// Range: 0x801D5290 -> 0x801D52AC
bool zWalleProjectileManager::CanGenerateProjectile() {
}
// signature: zWalleProjectileManager::GenerateProjectile(eProjectileType, zTarget *)
// Range: 0x801D52B0 -> 0x801D5794
bool zWalleProjectileManager::GenerateProjectile(class zWalleProjectileManager * this /* r29 */, enum eProjectileType type /* r27 */) {
    // Local variables
    class xMat4x3 matrixJ; // r1+0x8

    {
        // Range: 0x801D53CC -> 0x801D5650
        {
            // Range: 0x801D5408 -> 0x801D5408
            // Local variables
            int i; // r6
        }
    }

    // References
    // -> static class zProjectileManager gProjectileManager;
    // -> class zFactory factory;
    // -> class xVec3 m_Null;
    // -> class zProjectileControllerSuperHeavyClusterBomb projectileControllerClusterBomb;
    // -> class zProjectileControllerBasic projectileControllerBasic;
    // -> class zProjectileControllerEnergy projectileControllerEnergy;
    // -> class zProjectileControllerSuperEnergy projectileControllerSuperEnergy;
    // -> class zProjectileControllerMagneticRepel projectileControllerMagneticRepel;
    // -> class zProjectileControllerMagneticAttract projectileControllerMagneticAttract;
    // -> class zProjectileControllerHeavyMultiplayer projectileControllerHeavyMultiplayer;
    // -> class zProjectileControllerHeavyFlagBlue projectileControllerHeavyFlagBlue;
    // -> class zProjectileControllerHeavyFlagRed projectileControllerHeavyFlagRed;
    // -> class zProjectileControllerSuperHeavy projectileControllerSuperHeavy;
    // -> class zProjectileControllerHeavy projectileControllerHeavy;
}
// Range: 0x801D57A0 -> 0x801D5964
bool zWalleProjectileManager::FinishGenerateProjectile(class zWalleProjectileManager * this /* r31 */) {
    {
        // Range: 0x801D57B8 -> 0x801D594C
        {
            // Range: 0x801D5884 -> 0x801D5884
            // Local variables
            int i; // r7
        }
    }

    // References
    // -> static class zProjectileManager gProjectileManager;
}
// Range: 0x801D5970 -> 0x801D5980
void zWalleProjectileManager::LockProjectileTarget() {
}
// Range: 0x801D5980 -> 0x801D5CE8
unsigned int zWalleProjectileManager::ThrowProjectile(class zWalleProjectileManager * this /* r28 */) {
    // Local variables
    class zProjectileLaunchData launchData; // r1+0x70
    class zTarget * target; // r29
    class xMat4x3 cubeBoneStartMat; // r1+0x30
    class xVec3 newTargetDirection; // r1+0x20

    {
        // Range: 0x801D5A24 -> 0x801D5A30
        // Local variables
        int i; // r6
    }
    {
        // Range: 0x801D5B84 -> 0x801D5C3C
        // Local variables
        class xVec3 priorityEntCenterPos; // r1+0x14
    }

    // References
    // -> class xVec3 m_Null;
    // -> static class zProjectileManager gProjectileManager;
}
// Range: 0x801D5CF0 -> 0x801D5CFC
void zWalleProjectileManager::PrepareProjectileToThrow() {
}
// signature: zWalleProjectileManager::DetachProjectileToThrow(zTarget *)
// Range: 0x801D5D00 -> 0x801D5FE8
void zWalleProjectileManager::DetachProjectileToThrow(class zWalleProjectileManager * this /* r31 */) {
    // Local variables
    class zProjectileLaunchData launchDataOldBase; // r1+0x44

    {
        // Range: 0x801D5E0C -> 0x801D5FD0
        // Local variables
        class zProjectileLaunchData launchDataNewBase; // r1+0x8

        {
            // Range: 0x801D5E38 -> 0x801D5E38
            // Local variables
            int i; // r4
        }
    }

    // References
    // -> class xVec3 m_Null;
    // -> static class zProjectileManager gProjectileManager;
}
// signature: zWalleProjectileManager::ReattachProjectileStack(zTarget *)
// Range: 0x801D5FF0 -> 0x801D6104
void zWalleProjectileManager::ReattachProjectileStack() {
    {
        // Range: 0x801D5FFC -> 0x801D60F4
        // Local variables
        class zProjectileLaunchData launchData; // r1+0x8
    }

    // References
    // -> class xVec3 m_Null;
    // -> static class zProjectileManager gProjectileManager;
}
// signature: zWalleProjectileManager::PickupCubes(zProjectile *, zTarget *)
// Range: 0x801D6110 -> 0x801D63A0
bool zWalleProjectileManager::PickupCubes(class zWalleProjectileManager * this /* r30 */, class zProjectile * projectile /* r31 */) {
    // Local variables
    class zProjectileLaunchData launchData; // r1+0x8

    {
        // Range: 0x801D6140 -> 0x801D6140
        // Local variables
        int i; // r6
    }
    {
        // Range: 0x801D6204 -> 0x801D62FC
        // Local variables
        class zProjectileLaunchData launchData; // r1+0x44
    }

    // References
    // -> class xVec3 m_Null;
    // -> static class zProjectileManager gProjectileManager;
}
// Range: 0x801D63A0 -> 0x801D660C
bool zWalleProjectileManager::PickupClosestCubeInRange(class zWalleProjectileManager * this /* r31 */, float distanceThreshold2 /* f31 */) {
    // References
    // -> static class zProjectileManager gProjectileManager;
}
// Range: 0x801D6610 -> 0x801D67D0
void zWalleProjectileManager::FinishPickupProjectiles(class zWalleProjectileManager * this /* r31 */) {
    {
        // Range: 0x801D6628 -> 0x801D67BC
        {
            // Range: 0x801D66F4 -> 0x801D66F4
            // Local variables
            int i; // r7
        }
    }

    // References
    // -> static class zProjectileManager gProjectileManager;
}
// Range: 0x801D67D0 -> 0x801D692C
bool zWalleProjectileManager::CheckReacquire(class zWalleProjectileManager * this /* r31 */) {
    {
        // Range: 0x801D67F0 -> 0x801D6908
        {
            // Range: 0x801D6860 -> 0x801D6908
            // Local variables
            class xMat4x3 * playerMatrix; // r0
        }
    }

    // References
    // -> static class zProjectileManager gProjectileManager;
}
// signature: zWalleProjectileManager::ReacquireProjectiles(zTarget *)
// Range: 0x801D6930 -> 0x801D6CF0
bool zWalleProjectileManager::ReacquireProjectiles(class zWalleProjectileManager * this /* r15 */) {
    // Local variables
    class xMat4x3 * playerMatrix; // r0
    class xVec3 checkPosition; // r1+0x20
    class xVec3 checkDirection; // r1+0x14
    class zProjectile * parentProjectiles[3]; // r1+0x8
    unsigned int parentProjectilesSize; // r17

    {
        // Range: 0x801D694C -> 0x801D6CA4
        // Local variables
        int i; // r16

        {
            // Range: 0x801D694C -> 0x801D6CA4
            {
                // Range: 0x801D694C -> 0x801D6CA4
                // Local variables
                unsigned int closestProjectileID; // r0
            }
        }
    }

    // References
    // -> static class zProjectileManager gProjectileManager;
}
// signature: zWalleProjectileManager::SwitchProjectiles(zTarget *)
// Range: 0x801D6CF0 -> 0x801D7070
unsigned int zWalleProjectileManager::SwitchProjectiles(class zWalleProjectileManager * this /* r28 */) {
    // Local variables
    class zProjectileLaunchData launchData; // r1+0x44
    class zProjectileLaunchData secondLaunchData; // r1+0x8

    {
        // Range: 0x801D6E08 -> 0x801D6E08
        // Local variables
        int i; // r4
    }
    {
        // Range: 0x801D6EA8 -> 0x801D6ED0
        // Local variables
        int i; // r6
    }

    // References
    // -> class xVec3 m_Null;
    // -> static class zProjectileManager gProjectileManager;
}
// Range: 0x801D7070 -> 0x801D71A4
void zWalleProjectileManager::FinishSwitchProjectiles(class zWalleProjectileManager * this /* r31 */) {
    // References
    // -> static class zProjectileManager gProjectileManager;
}
// Range: 0x801D71B0 -> 0x801D7574
void zWalleProjectileManager::DropProjectiles(class zWalleProjectileManager * this /* r15 */, float releaseVelocityModifier /* f31 */, class xVec3 * releaseVelocityOffset /* r16 */) {
    {
        // Range: 0x801D71FC -> 0x801D71FC
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x801D7204 -> 0x801D7500
        // Local variables
        int i; // r20

        {
            // Range: 0x801D7204 -> 0x801D7500
            // Local variables
            class zProjectileLaunchData launchData; // r1+0x6C
            class zProjectileLaunchData * launchDataPointer; // r18
            class zProjectile * projectile; // r19

            {
                // Range: 0x801D7238 -> 0x801D725C
                // Local variables
                class hkVector4 vel; // r1+0x20
            }
            {
                // Range: 0x801D725C -> 0x801D7460
                // Local variables
                int mowbotCount; // r0
                class zNPCBase * * mowbots; // r0

                {
                    // Range: 0x801D7438 -> 0x801D7444
                    // Local variables
                    int j; // r17
                }
            }
        }
    }

    // References
    // -> static class zProjectileManager gProjectileManager;
    // -> class xVec3 m_Null;
}
// Range: 0x801D7580 -> 0x801D7710
void zWalleProjectileManager::GenerateFilterList(class zWalleProjectileManager * this /* r27 */) {
    // Local variables
    class zProjectile * projectileCache[3]; // r1+0x20

    {
        // Range: 0x801D75A0 -> 0x801D7688
        // Local variables
        int i; // r28
    }

    // References
    // -> static class zProjectileManager gProjectileManager;
    // -> class xVec3 m_Null;
}
// Range: 0x801D7710 -> 0x801D7D40
void zWalleProjectileManager::UpdateReticle(class zWalleProjectileManager * this /* r28 */) {
    // Local variables
    class zTarget * target; // r29
    class xVec3 targetDirection; // r1+0x48
    class xVec3 launchVector; // r1+0x3C
    float toHitDistance; // r1+0x8
    bool hitDetected; // r0

    {
        // Range: 0x801D77A0 -> 0x801D7B1C
        {
            // Range: 0x801D7834 -> 0x801D7A5C
            // Local variables
            float angleCurrentMax; // f29
            float speed; // f0
            float dAngle; // f0

            {
                // Range: 0x801D79AC -> 0x801D7A5C
                // Local variables
                float arbitraryMaxSpeed; // f0
            }
        }
    }
    {
        // Range: 0x801D7B88 -> 0x801D7C98
        // Local variables
        float dist; // f0
        class xVec3 vecToTarget; // r1+0x30
    }

    // References
    // -> static class zProjectileManager gProjectileManager;
    // -> class zGlobals globals;
    // -> static float angleStopped;
    // -> static float angleFullSpeed;
}
// Range: 0x801D7D40 -> 0x801D8398
void zWalleProjectileManager::UpdateProjectiles(class zWalleProjectileManager * this /* r28 */, float dt /* f29 */) {
    // Local variables
    int i; // r31
    class zProjectile * botProjectile; // r9
    bool dropAllAbove; // r30
    int newNumProjectiles; // r1+0x13C

    {
        // Range: 0x801D7E48 -> 0x801D82EC
        // Local variables
        class hkpConstraintInstance * hasConstraint; // r17
        float dist; // f0
        class zProjectile * topProjectile; // r29

        {
            // Range: 0x801D7E48 -> 0x801D7E48
            // Local variables
            int mowbotCount; // r0
            class zNPCBase * * mowbots; // r0

            {
                // Range: 0x801D7E48 -> 0x801D7E48
                // Local variables
                int j; // r18
            }
        }
        {
            // Range: 0x801D7E48 -> 0x801D82E8
            // Local variables
            class zProjectileLaunchData launchData; // r1+0x100
            class zProjectileLaunchData * launchDataPointer; // r0
        }
    }

    // References
    // -> class xVec3 m_Null;
    // -> static class zProjectileManager gProjectileManager;
}
// signature: zWalleProjectileManager::CreateConstraint(zProjectileController *, zProjectile *, zProjectile *)
// Range: 0x801D83A0 -> 0x801D8560
class hkpConstraintInstance * zWalleProjectileManager::CreateConstraint(class zWalleProjectileManager * this /* r27 */, class zProjectile * pChildProjectile /* r28 */, class zProjectile * pParentProjectile /* r29 */) {
    // Local variables
    class hkpRagdollConstraintData * rdc; // r30
    float planeMin; // f31
    float planeMax; // f0
    float twistMin; // f0
    float twistMax; // f0
    class hkVector4 twistAxisA; // r1+0x60
    class hkVector4 planeAxisA; // r1+0x50
    class hkVector4 twistAxisB; // r1+0x40
    class hkVector4 planeAxisB; // r1+0x30
    class hkVector4 pivotA; // r1+0x20
    class hkVector4 pivotB; // r1+0x10
    class hkpConstraintInstance * instance; // r0

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
