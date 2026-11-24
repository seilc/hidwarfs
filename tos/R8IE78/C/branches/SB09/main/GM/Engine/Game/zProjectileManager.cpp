/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zProjectileManager.cpp
*/
static class zProjectileManager gProjectileManager; // size: 0x44, address: 0x80754AA4
class Factory factory; // size: 0x3C, address: 0x80754AE8
// Range: 0x8012AAB0 -> 0x8012AABC
class zProjectileManager & zProjectileManager::GetManagerInstance() {
    // References
    // -> static class zProjectileManager gProjectileManager;
}
// Range: 0x8012AAC0 -> 0x8012AAE8
void zProjectileManager_Startup() {
    // References
    // -> static class zProjectileManager gProjectileManager;
}
// Range: 0x8012AAF0 -> 0x8012AB04
void zProjectileManager::ModulePrepUse() {
}
// Range: 0x8012AB10 -> 0x8012AB90
void zProjectileManager::ScenePostInit(class zProjectileManager * this /* r31 */) {
    {
        // Range: 0x8012AB58 -> 0x8012AB74
        // Local variables
        unsigned int i; // r5
    }

    // References
    // -> class Factory factory;
}
// Range: 0x8012AB90 -> 0x8012AC2C
void zProjectileManager::SceneExit(class zProjectileManager * this /* r26 */) {
    {
        // Range: 0x8012ABA4 -> 0x8012AC0C
        // Local variables
        unsigned int i; // r29

        {
            // Range: 0x8012ABA4 -> 0x8012AC0C
            // Local variables
            class zProjectile * curProjectile; // r28

            {
                // Range: 0x8012ABAC -> 0x8012AC0C
                // Local variables
                class zProjectile * toDelete; // r27
            }
        }
    }

    // References
    // -> class Factory factory;
}
// Range: 0x8012AC30 -> 0x8012ACC0
void zProjectileManager::SceneReset(class zProjectileManager * this /* r26 */) {
    {
        // Range: 0x8012AC44 -> 0x8012ACAC
        // Local variables
        unsigned int i; // r29

        {
            // Range: 0x8012AC44 -> 0x8012ACAC
            // Local variables
            class zProjectile * curProjectile; // r28

            {
                // Range: 0x8012AC4C -> 0x8012ACAC
                // Local variables
                class zProjectile * toDelete; // r27
            }
        }
    }

    // References
    // -> class Factory factory;
}
// signature: zProjectileManager::sEmit(World::EntityHandleBase *, const zProjectileLaunchData &, xBase *)
// Range: 0x8012ACC0 -> 0x8012ACE0
unsigned int zProjectileManager::sEmit(class EntityHandleBase * projectileHandle /* r7 */, class zProjectileLaunchData & launchData /* r0 */) {
    // References
    // -> static class zProjectileManager gProjectileManager;
}
// Range: 0x8012ACE0 -> 0x8012ADAC
unsigned int zProjectileManager::Emit(class zProjectileManager * this /* r25 */, class EntityHandleBase * projectileHandle /* r26 */, class zProjectileLaunchData & launchData /* r27 */, class xBase * owner /* r28 */) {
    // Local variables
    unsigned int projectileID; // r30
    class zProjectile * newProjectile; // r29

    // References
    // -> class Factory factory;
}
// signature: zProjectileManager::GenerateNextProjectileID(Sext::eProjectileType)
// Range: 0x8012ADB0 -> 0x8012ADE4
unsigned int zProjectileManager::GenerateNextProjectileID() {
    // Local variables
    unsigned int newID; // r7
}
// signature: zProjectileManager::GetTypeFromProjectileID(unsigned int)
// Range: 0x8012ADF0 -> 0x8012AE08
enum eProjectileType zProjectileManager::GetTypeFromProjectileID() {
    // Local variables
    enum eProjectileType type; // r0
}
// signature: zProjectileManager::sFindProjectileFromID(unsigned int)
// Range: 0x8012AE10 -> 0x8012AE20
class zProjectile * zProjectileManager::sFindProjectileFromID() {
    // References
    // -> static class zProjectileManager gProjectileManager;
}
// Range: 0x8012AE20 -> 0x8012AE80
class zProjectile * zProjectileManager::FindProjectileFromID(class zProjectileManager * this /* r30 */, unsigned int id /* r31 */) {
    // Local variables
    enum eProjectileType type; // r0
    class zProjectile * curProjectile; // r3
}
// signature: zProjectileManager::GetNumActiveProjectiles(Sext::eProjectileType)
// Range: 0x8012AE80 -> 0x8012AEAC
int zProjectileManager::GetNumActiveProjectiles() {
    // Local variables
    int count; // r4
    class zProjectile * curProjectile; // r3
}
// Range: 0x8012AEB0 -> 0x8012B01C
void zProjectileManager::Timestep(class zProjectileManager * this /* r31 */, float dt /* f31 */) {
    // Local variables
    bool isPaused; // r29

    {
        // Range: 0x8012AED4 -> 0x8012AF3C
        // Local variables
        unsigned int i; // r27

        {
            // Range: 0x8012AED4 -> 0x8012AF3C
            // Local variables
            class zProjectile * curProjectile; // r26
        }
    }
    {
        // Range: 0x8012AF58 -> 0x8012B004
        // Local variables
        unsigned int i; // r26

        {
            // Range: 0x8012AF58 -> 0x8012B004
            // Local variables
            class zProjectile * curProjectile; // r27

            {
                // Range: 0x8012AF60 -> 0x8012AFE4
                // Local variables
                class zProjectile * toDelete; // r25
            }
        }
    }

    // References
    // -> class Factory factory;
    // -> class zGlobals globals;
}
// signature: zProjectileManager::AddToActiveList(Sext::eProjectileType, zProjectile *)
// Range: 0x8012B020 -> 0x8012B038
void zProjectileManager::AddToActiveList() {
    // Local variables
    class zProjectile * nextProj; // r0
}
// signature: zProjectileManager::RemoveFromActiveList(Sext::eProjectileType, zProjectile *)
// Range: 0x8012B040 -> 0x8012B08C
void zProjectileManager::RemoveFromActiveList() {
    // Local variables
    class zProjectile * curProjectile; // r4
}
// Range: 0x8012B090 -> 0x8012B138
bool zProjectileManager::InEntityTrigger(class xBase * testingOwner /* r26 */, class zTrigger * trig /* r27 */) {
    {
        // Range: 0x8012B0A0 -> 0x8012B120
        // Local variables
        unsigned int i; // r29

        {
            // Range: 0x8012B0A0 -> 0x8012B120
            // Local variables
            class zProjectile * curProjectile; // r28

            {
                // Range: 0x8012B0C4 -> 0x8012B104
                // Local variables
                class xVec3 chkPos; // r1+0x8
            }
        }
    }

    // References
    // -> static class zProjectileManager gProjectileManager;
}
