/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zProjectileSpawner.cpp
*/
class _OGProjectileSpawnerSchema _OGProjectileSpawnerschema; // size: 0x18, address: 0x80799458
class SchemaRegistrator _OGProjectileSpawnerschemaReg; // size: 0x8, address: 0x80799470
float projectileSpawnRadius; // size: 0x4, address: 0x807005F0
class SpawnerProjectileController basicProjectileController; // size: 0x40, address: 0x80799478
class SpawnerProjectileController heavyProjectileController; // size: 0x40, address: 0x807994B8
class SpawnerProjectileController heavyFlagBlueProjectileController; // size: 0x40, address: 0x807994F8
class SpawnerProjectileController heavyFlagRedProjectileController; // size: 0x40, address: 0x80799538
class SpawnerProjectileController heavyMultiplayerProjectileController; // size: 0x40, address: 0x80799578
class SpawnerProjectileController energyProjectileController; // size: 0x40, address: 0x807995B8
class SpawnerProjectileController superEnergyProjectileController; // size: 0x40, address: 0x807995F8
class SpawnerProjectileController magneticAttractProjectileController; // size: 0x40, address: 0x80799638
class SpawnerProjectileController magneticRepelProjectileController; // size: 0x40, address: 0x80799678
class SpawnerProjectileController superHeavyProjectileController; // size: 0x40, address: 0x807996B8
// Range: 0x8018EAD0 -> 0x8018EAE0
void World::_OGProjectileSpawnerEntity::Deactivate() {
}
// Range: 0x8018EAE0 -> 0x8018EB30
void World::_OGProjectileSpawnerEntity::Destroy(class _OGProjectileSpawnerEntity * this /* r31 */) {
}
// signature: World::_OGProjectileSpawnerSchema::Fix(World::Asset *, long, int)
// Range: 0x8018EB90 -> 0x8018EB98
void World::_OGProjectileSpawnerSchema::Fix() {
}
// signature: World::_OGProjectileSpawnerSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8018EBA0 -> 0x8018EBEC
class EntityStub * World::_OGProjectileSpawnerSchema::CreateStub(class _OGProjectileSpawnerSchema * this /* r31 */) {
}
// signature: World::_OGProjectileSpawnerSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8018EBF0 -> 0x8018EC08
void World::_OGProjectileSpawnerSchema::DestroyStub() {
}
// signature: World::_OGProjectileSpawnerSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8018EC10 -> 0x8018EC74
class Entity * World::_OGProjectileSpawnerSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World26_OGProjectileSpawnerEntity;
}
// Range: 0x8018ECC0 -> 0x8018EDD4
void zProjectileSpawner::Init(void * base /* r30 */, void * asset /* r31 */) {
    // References
    // -> struct {} __vt__18zProjectileSpawner;
}
// Range: 0x8018EDE0 -> 0x8018F02C
void zProjectileSpawner::Reset(class zProjectileSpawner * this /* r27 */) {
    // References
    // -> class SpawnerProjectileController basicProjectileController;
    // -> class SpawnerProjectileController superEnergyProjectileController;
    // -> class SpawnerProjectileController energyProjectileController;
    // -> class SpawnerProjectileController heavyMultiplayerProjectileController;
    // -> class SpawnerProjectileController heavyFlagBlueProjectileController;
    // -> class SpawnerProjectileController heavyFlagRedProjectileController;
    // -> class SpawnerProjectileController superHeavyProjectileController;
    // -> class SpawnerProjectileController heavyProjectileController;
    // -> class SpawnerProjectileController magneticRepelProjectileController;
    // -> class SpawnerProjectileController magneticAttractProjectileController;
    // -> float projectileSpawnRadius;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x8018F030 -> 0x8018F3FC
void zProjectileSpawner::Update(class zProjectileSpawner * this /* r30 */, float dt /* f31 */) {
    // Local variables
    float invSpawnRate; // f1

    {
        // Range: 0x8018F114 -> 0x8018F3D8
        // Local variables
        class zProjectileLaunchData launchData; // r1+0x10

        {
            // Range: 0x8018F12C -> 0x8018F268
            // Local variables
            class zFXScriptSpawnPt * fxSpawn; // r31
            class zFXScriptSpawnPt * fxAsset; // r0
        }
    }

    // References
    // -> static class zProjectileManager gProjectileManager;
    // -> class zFactory factory;
    // -> class xVec3 m_Null;
    // -> class xMat4x3 g_I3;
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
    // -> struct {} __vt__28hkSpawnerCdBodyPairCollector;
}
// signature: zProjectileSpawner::StaticHandleEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8018F720 -> 0x8018F728
void zProjectileSpawner::StaticHandleEvent() {
}
// signature: zProjectileSpawner::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8018F730 -> 0x8018F7E4
void zProjectileSpawner::HandleEvent(class zProjectileSpawner * this /* r31 */) {
}
// signature: hkSpawnerCdBodyPairCollector::addCdBodyPair(const hkpCdBody &, const hkpCdBody &)
// Range: 0x8018F7F0 -> 0x8018F930
void hkSpawnerCdBodyPairCollector::addCdBodyPair() {
    // Local variables
    class hkpPhantom * phantom1; // r0
    class hkpPhantom * phantom2; // r0
}
