/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zProjectileSpawner.cpp
*/
float projectileSpawnRadius; // size: 0x4, address: 0x807B4F2C
// Range: 0x8021EE60 -> 0x8021F178
class Entity * Sext::ProjectileSpawner::Create(class EntityHandleBase * handle /* r29 */, class ProjectileSpawner * asset /* r28 */) {
    // Local variables
    class zProjectileSpawner * ent; // r27

    // References
    // -> float projectileSpawnRadius;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> struct {} __vt__18zProjectileSpawner;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x8021F180 -> 0x8021F320
void zProjectileSpawner::Reset(class zProjectileSpawner * this /* r27 */) {
    // References
    // -> float projectileSpawnRadius;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x8021F320 -> 0x8021F9FC
void zProjectileSpawner::Update(class zProjectileSpawner * this /* r27 */, float dt /* f31 */) {
    // Local variables
    float invSpawnRate; // f1

    {
        // Range: 0x8021F404 -> 0x8021F9DC
        // Local variables
        float launchSpeed; // f0
        class xVec3 normalizedLaunchDir; // r1+0x18
        class xMat4x3 launchTransform; // r1+0x68
        class zProjectileLaunchData launchData; // r1+0xA8

        {
            // Range: 0x8021F41C -> 0x8021F488
            // Local variables
            class zFXSpawn * fxSpawn; // r0
            class zFXSpawn * fxAsset; // r24
        }
    }

    // References
    // -> struct {} __vt__28zProjectileUPPlayerThrowable;
    // -> struct {} __vt__31zProjectileUPPlaygroundRollable;
    // -> struct {} __vt__33zProjectileUPPlaygroundLaunchable;
    // -> class zFactory factory;
    // -> static class zProjectileManager gProjectileManager;
    // -> class xMat4x3 g_I3;
    // -> struct {} __vt__28hkSpawnerCdBodyPairCollector;
}
// signature: zProjectileSpawner::StaticHandleEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8021FA10 -> 0x8021FA18
void zProjectileSpawner::StaticHandleEvent() {
}
// signature: zProjectileSpawner::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8021FA20 -> 0x8021FD74
void zProjectileSpawner::HandleEvent(class zProjectileSpawner * this /* r27 */) {
    // References
    // -> float projectileSpawnRadius;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: hkSpawnerCdBodyPairCollector::addCdBodyPair(const hkpCdBody &, const hkpCdBody &)
// Range: 0x8021FD80 -> 0x8021FEC0
void hkSpawnerCdBodyPairCollector::addCdBodyPair() {
    // Local variables
    class hkpPhantom * phantom1; // r0
    class hkpPhantom * phantom2; // r0
}
