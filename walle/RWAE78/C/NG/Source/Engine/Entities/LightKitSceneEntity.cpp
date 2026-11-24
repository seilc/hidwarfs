/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\LightKitSceneEntity.cpp
*/
class LightKitSceneSchema schema; // size: 0x18, address: 0x807FE930
class SchemaRegistrator schemaReg; // size: 0x8, address: 0x807FE948
class Schema * lightKitSceneSchema; // size: 0x4, address: 0x80707A90
// signature: World::LightKitSceneSchema::Fix(World::Asset *, long, int)
// Range: 0x8023EC00 -> 0x8023EC04
void World::LightKitSceneSchema::Fix() {
}
// signature: World::LightKitSceneSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8023EC04 -> 0x8023EC50
class EntityStub * World::LightKitSceneSchema::CreateStub(class LightKitSceneSchema * this /* r31 */) {
}
// signature: World::LightKitSceneSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8023EC50 -> 0x8023EC68
void World::LightKitSceneSchema::DestroyStub() {
}
// signature: World::LightKitSceneSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8023EC68 -> 0x8023EC80
class Entity * World::LightKitSceneSchema::ActivateEntity() {
}
// signature: World::LightKitSceneEntity::LightKitSceneEntity(World::EntityHandleBase *)
// Range: 0x8023EC80 -> 0x8023ECA4
void * World::LightKitSceneEntity::LightKitSceneEntity() {
    // References
    // -> struct {} __vt__Q25World19LightKitSceneEntity;
}
// signature: World::LightKitSceneEntity::ActivateOneKit(Overseer::Goodie *, int, unsigned long long)
// Range: 0x8023ECA4 -> 0x8023F200
void World::LightKitSceneEntity::ActivateOneKit(class Goodie * goodie /* r30 */, unsigned long long id /* r29:r28 */) {
    {
        // Range: 0x8023ED74 -> 0x8023F1E0
        // Local variables
        class EntityHandle * kitHandle; // r25
    }

    // References
    // -> static class ScadMgrModule scadMgrMod;
}
// signature: World::LightKitSceneEntity::Create(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8023F200 -> 0x8023F330
class LightKitSceneEntity * World::LightKitSceneEntity::Create(class EntityHandleBase * handle /* r28 */) {
    // Local variables
    class LightKitSceneAsset * asset; // r30
    class Goodie * goodie; // r29
    void * mem; // r0
}
// Range: 0x8023F374 -> 0x8023F48C
void World::LightKitSceneEntity::Deactivate(class LightKitSceneEntity * this /* r26 */) {
    // Local variables
    void * mem; // r0

    {
        // Range: 0x8023F388 -> 0x8023F43C
        // Local variables
        int i; // r27
    }
}
// signature: World::LightKitSceneEntity::SetNewLightkit(unsigned long long, bool, bool, bool, bool)
// Range: 0x8023F4E0 -> 0x8023F598
void World::LightKitSceneEntity::SetNewLightkit(class LightKitSceneEntity * this /* r26 */, unsigned long long id /* r28:r27 */, bool setPlayer /* r29 */, bool setObject /* r30 */, bool setEnvironment /* r31 */) {
}
// Range: 0x8023F598 -> 0x8023F640
void World::LightKitSceneEntity::Reset(class LightKitSceneEntity * this /* r31 */) {
}
