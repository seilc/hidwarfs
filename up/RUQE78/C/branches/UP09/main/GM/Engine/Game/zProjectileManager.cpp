/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zProjectileManager.cpp
*/
static class zProjectileManager gProjectileManager; // size: 0x3C, address: 0x808255DC
class zFactory factory; // size: 0x34, address: 0x80825618
// Range: 0x8021E740 -> 0x8021E768
void zProjectileManager_Startup() {
    // References
    // -> static class zProjectileManager gProjectileManager;
}
// Range: 0x8021E770 -> 0x8021E784
void zProjectileManager::ModulePrepUse() {
}
// Range: 0x8021E790 -> 0x8021E810
void zProjectileManager::ScenePostInit(class zProjectileManager * this /* r31 */) {
    // References
    // -> class zFactory factory;
}
// Range: 0x8021E810 -> 0x8021E8E4
void zProjectileManager::SceneExit(class zProjectileManager * this /* r24 */) {
    {
        // Range: 0x8021E824 -> 0x8021E8B0
        // Local variables
        unsigned int i; // r27

        {
            // Range: 0x8021E824 -> 0x8021E8B0
            // Local variables
            class zProjectile * curProjectile; // r26

            {
                // Range: 0x8021E830 -> 0x8021E8A8
                // Local variables
                class zProjectile * toDelete; // r25
            }
        }
    }

    // References
    // -> class zFactory factory;
}
// Range: 0x8021E8F0 -> 0x8021E9B8
void zProjectileManager::SceneReset(class zProjectileManager * this /* r24 */) {
    {
        // Range: 0x8021E904 -> 0x8021E990
        // Local variables
        unsigned int i; // r27

        {
            // Range: 0x8021E904 -> 0x8021E990
            // Local variables
            class zProjectile * curProjectile; // r26

            {
                // Range: 0x8021E910 -> 0x8021E988
                // Local variables
                class zProjectile * toDelete; // r25
            }
        }
    }

    // References
    // -> class zFactory factory;
}
// Range: 0x8021E9C0 -> 0x8021EC00
unsigned int zProjectileManager::sEmit(class EntityHandleBase * projectileHandle /* r26 */, class zProjectileLaunchData & launchData /* r27 */, class xBase * owner /* r28 */) {
    // References
    // -> struct {} __vt__28zProjectileUPPlayerThrowable;
    // -> struct {} __vt__31zProjectileUPPlaygroundRollable;
    // -> struct {} __vt__33zProjectileUPPlaygroundLaunchable;
    // -> class zFactory factory;
    // -> static class zProjectileManager gProjectileManager;
}
// signature: zProjectileManager::sFindProjectileFromID(unsigned int)
// Range: 0x8021EC00 -> 0x8021EC58
class zProjectile * zProjectileManager::sFindProjectileFromID() {
    // References
    // -> static class zProjectileManager gProjectileManager;
}
// Range: 0x8021ECA0 -> 0x8021EE44
void zProjectileManager::Timestep(class zProjectileManager * this /* r31 */, float dt /* f31 */) {
    // Local variables
    bool isPaused; // r27

    {
        // Range: 0x8021ECC4 -> 0x8021ED1C
        // Local variables
        unsigned int i; // r29

        {
            // Range: 0x8021ECC4 -> 0x8021ED1C
            // Local variables
            class zProjectile * curProjectile; // r30
        }
    }
    {
        // Range: 0x8021ED4C -> 0x8021EE18
        // Local variables
        unsigned int i; // r25

        {
            // Range: 0x8021ED4C -> 0x8021EE18
            // Local variables
            class zProjectile * curProjectile; // r24

            {
                // Range: 0x8021ED54 -> 0x8021EE08
                // Local variables
                class zProjectile * toDelete; // r23
            }
        }
    }

    // References
    // -> class zFactory factory;
    // -> class zGlobals globals;
}
