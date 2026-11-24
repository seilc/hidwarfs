/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zProjectileSpawner.cpp
*/
float projectileSpawnRadius; // size: 0x4, address: 0x806C1D84
// Range: 0x8012B140 -> 0x8012B1BC
class Entity * Sext::ProjectileSpawner::Create(class EntityHandleBase * handle /* r29 */, class ProjectileSpawner * asset /* r30 */) {
    // References
    // -> struct {} __vt__18zProjectileSpawner;
}
// Range: 0x8012B1C0 -> 0x8012B288
void zProjectileSpawner::Init(class zProjectileSpawner * this /* r30 */, class ProjectileSpawner * asset /* r31 */) {
    {
        // Range: 0x8012B21C -> 0x8012B268
        // Local variables
        class xMat3x3 mat; // r1+0x10
    }
}
// Range: 0x8012B290 -> 0x8012B42C
void zProjectileSpawner::Reset(class zProjectileSpawner * this /* r29 */) {
    // References
    // -> float projectileSpawnRadius;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x8012B430 -> 0x8012B5EC
void zProjectileSpawner::Update(class zProjectileSpawner * this /* r31 */, float dt /* f31 */) {
    // Local variables
    float invSpawnRate; // f1

    {
        // Range: 0x8012B530 -> 0x8012B5D0
        // Local variables
        float launchSpeed; // f1
        class xVec3 normalizedLaunchDir; // r1+0x10
        class xMat4x3 launchTransform; // r1+0x60
        class zProjectileLaunchData launchData; // r1+0xA0
    }

    // References
    // -> class xMat4x3 g_I3;
    // -> struct {} __vt__28hkSpawnerCdBodyPairCollector;
    // -> struct {} __vt__22hkpCdBodyPairCollector;
}
// signature: zProjectileSpawner::StaticHandleEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8012B5F0 -> 0x8012B5F8
void zProjectileSpawner::StaticHandleEvent() {
}
// signature: zProjectileSpawner::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8012B600 -> 0x8012B754
void zProjectileSpawner::HandleEvent(class zProjectileSpawner * this /* r31 */) {
}
// signature: hkSpawnerCdBodyPairCollector::addCdBodyPair(const hkpCdBody &, const hkpCdBody &)
// Range: 0x8012B760 -> 0x8012B7F4
void hkSpawnerCdBodyPairCollector::addCdBodyPair(class hkSpawnerCdBodyPairCollector * this /* r29 */, class hkpCdBody & bodyB /* r30 */) {
    // Local variables
    class hkpPhantom * phantom1; // r31
    class hkpPhantom * phantom2; // r30
}
// Range: 0x8012B800 -> 0x8012B8CC
void zProjectileSpawner::SpawnProjectile(class zProjectileSpawner * this /* r29 */, class zProjectileLaunchData & launchData /* r30 */) {
    {
        // Range: 0x8012B824 -> 0x8012B880
        // Local variables
        class zFXSpawn * fxSpawn; // r0
        class zFXSpawn * fxAsset; // r31
    }

    // References
    // -> static class zProjectileManager gProjectileManager;
}
// Range: 0x8012B8D0 -> 0x8012BB40
void zProjectileSpawner::ProcessProjectileSpawnRequest(class zProjectileSpawner * this /* r29 */, class SpawnProjectile * params /* r30 */) {
    // Local variables
    class ProjectileAsset * projAsset; // r0
    class zProjectileLaunchData launchData; // r1+0x130
    class xMat4x3 launchTransform; // r1+0xF0

    {
        // Range: 0x8012B950 -> 0x8012BB14
        // Local variables
        class xVec3 launchDir; // r1+0x14
        class xVec3 targetPos; // r1+0x20
        class xOGEntity * target; // r27
        class InDirectionToTarget_Struct * dataDir; // r0
        class HitTargetWidget_Struct * dataHit; // r28

        {
            // Range: 0x8012BA14 -> 0x8012BAD8
            // Local variables
            float g; // f2

            {
                // Range: 0x8012BA28 -> 0x8012BA9C
                // Local variables
                float speed; // f1
            }
        }
    }

    // References
    // -> class xMat4x3 g_I3;
}
