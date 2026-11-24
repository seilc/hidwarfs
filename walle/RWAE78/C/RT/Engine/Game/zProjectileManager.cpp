/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zProjectileManager.cpp
*/
static class zProjectileManager gProjectileManager; // size: 0x98, address: 0x80799368
class zFactory factory; // size: 0x34, address: 0x80799400
// Range: 0x8018AAA0 -> 0x8018AAC8
void zProjectileManager_Startup() {
    // References
    // -> static class zProjectileManager gProjectileManager;
}
// Range: 0x8018AAD0 -> 0x8018AAD4
void zProjectileManager_Shutdown() {
}
// Range: 0x8018AAE0 -> 0x8018AAF4
void zProjectileManager::ModulePrepUse() {
}
// Range: 0x8018AB00 -> 0x8018ABC0
void zProjectileManager::ScenePrepare(class zProjectileManager * this /* r31 */) {
    {
        // Range: 0x8018AB44 -> 0x8018AB4C
        // Local variables
        unsigned int i; // r0
    }

    // References
    // -> class zFactory factory;
}
// Range: 0x8018ABC0 -> 0x8018ADCC
void zProjectileManager::SceneExit(class zProjectileManager * this /* r14 */) {
    {
        // Range: 0x8018ABD0 -> 0x8018AD98
        // Local variables
        unsigned int i; // r31

        {
            // Range: 0x8018ABD0 -> 0x8018AD98
            // Local variables
            class zProjectile * curProjectile; // r30

            {
                // Range: 0x8018ABE0 -> 0x8018AD90
                // Local variables
                class zProjectile * toDelete; // r29
            }
        }
    }

    // References
    // -> class zFactory factory;
    // -> bool gSysForceExit;
}
// Range: 0x8018ADD0 -> 0x8018AFD0
void zProjectileManager::SceneReset(class zProjectileManager * this /* r14 */) {
    {
        // Range: 0x8018ADE0 -> 0x8018AFA8
        // Local variables
        unsigned int i; // r31

        {
            // Range: 0x8018ADE0 -> 0x8018AFA8
            // Local variables
            class zProjectile * curProjectile; // r30

            {
                // Range: 0x8018ADF0 -> 0x8018AFA0
                // Local variables
                class zProjectile * toDelete; // r29
            }
        }
    }

    // References
    // -> class zFactory factory;
    // -> bool gSysForceExit;
}
// Range: 0x8018AFD0 -> 0x8018B0D0
unsigned int zProjectileManager::sEmit(class zProjectileController * controller /* r28 */, class zProjectileLaunchData * launchData /* r29 */, class xBase * owner /* r30 */) {
    // References
    // -> static class zProjectileManager gProjectileManager;
    // -> class zFactory factory;
}
// signature: zProjectileManager::sFindProjectileFromID(unsigned int)
// Range: 0x8018B0D0 -> 0x8018B138
class zProjectile * zProjectileManager::sFindProjectileFromID() {
    // References
    // -> static class zProjectileManager gProjectileManager;
}
// signature: zProjectileManager::FindClosestProjectileToPoint(const xVec3 &, const xVec3 &, float, eProjectileType *, unsigned int, zProjectile **, unsigned int)
// Range: 0x8018B140 -> 0x8018B4F8
unsigned int zProjectileManager::FindClosestProjectileToPoint(class zProjectileManager * this /* r22 */, class xVec3 * referencePoint /* r23 */, class xVec3 * referenceDirection /* r24 */, enum eProjectileType * projectileTypesAcceptList /* r25 */, unsigned int acceptListSize /* r26 */, class zProjectile * * projectileFilterList /* r27 */, unsigned int filterListSize /* r28 */) {
    // Local variables
    class xVec3 distanceVector; // r1+0x14
    float closestDistance2; // f27
    unsigned int closestID; // r31
    float coneThreshold; // f26

    {
        // Range: 0x8018B244 -> 0x8018B484
        // Local variables
        unsigned int i; // r30

        {
            // Range: 0x8018B244 -> 0x8018B484
            // Local variables
            class zProjectile * curProjectile; // r29

            {
                // Range: 0x8018B244 -> 0x8018B244
                // Local variables
                bool foundAccepted; // r4

                {
                    // Range: 0x8018B244 -> 0x8018B244
                    // Local variables
                    unsigned int j; // r0
                }
            }
            {
                // Range: 0x8018B244 -> 0x8018B47C
                // Local variables
                bool filtered; // r4

                {
                    // Range: 0x8018B244 -> 0x8018B244
                    // Local variables
                    unsigned int j; // r0
                }
                {
                    // Range: 0x8018B244 -> 0x8018B478
                    // Local variables
                    float tempDistance2; // f25

                    {
                        // Range: 0x8018B244 -> 0x8018B478
                        // Local variables
                        float tempDistanceInv; // f3
                    }
                }
            }
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x8018B540 -> 0x8018B8F8
void zProjectileManager::Timestep(class zProjectileManager * this /* r1+0x8 */, float dt /* f31 */) {
    // Local variables
    bool isPaused; // r16

    {
        // Range: 0x8018B56C -> 0x8018B5C8
        // Local variables
        unsigned int i; // r17

        {
            // Range: 0x8018B56C -> 0x8018B5C8
            // Local variables
            class zProjectile * curProjectile; // r18
        }
    }
    {
        // Range: 0x8018B5F4 -> 0x8018B8A8
        // Local variables
        unsigned int i; // r1+0x10

        {
            // Range: 0x8018B5F4 -> 0x8018B8A8
            // Local variables
            class zProjectile * curProjectile; // r31

            {
                // Range: 0x8018B600 -> 0x8018B898
                // Local variables
                class zProjectile * toDelete; // r30
            }
        }
    }

    // References
    // -> class zFactory factory;
    // -> bool gSysForceExit;
    // -> class zGlobals globals;
}
// Range: 0x8018B900 -> 0x8018B99C
void zProjectileManager::PostPlayerTimestep(class zProjectileManager * this /* r29 */, float dt /* f31 */) {
    {
        // Range: 0x8018B930 -> 0x8018B96C
        // Local variables
        unsigned int i; // r31

        {
            // Range: 0x8018B930 -> 0x8018B96C
            // Local variables
            class zProjectile * curProjectile; // r30
        }
    }
}
// Range: 0x8018B9A0 -> 0x8018BD60
void zProjectileManager::PostPhysicsTimestep(float dt /* f28 */) {
    {
        // Range: 0x8018B9DC -> 0x8018BD10
        // Local variables
        unsigned int i; // r26

        {
            // Range: 0x8018B9DC -> 0x8018BD10
            // Local variables
            class zProjectile * curProjectile; // r25
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> float timeoutThreshold;
    // -> float distanceThreshold;
    // -> int hitsPerFrame;
}
