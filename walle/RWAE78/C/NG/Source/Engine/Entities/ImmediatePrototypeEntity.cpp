/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\ImmediatePrototypeEntity.cpp
*/
class ImmediatePrototypeSchema immProtoSchema; // size: 0x18, address: 0x807FE8F0
class SchemaRegistrator schemaReg; // size: 0x8, address: 0x807FE908
class Schema * immediatePrototypeSchema; // size: 0x4, address: 0x80707A40
// signature: World::ImmediatePrototypeSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8023E350 -> 0x8023E39C
class EntityStub * World::ImmediatePrototypeSchema::CreateStub(class ImmediatePrototypeSchema * this /* r31 */) {
}
// signature: World::ImmediatePrototypeSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8023E39C -> 0x8023E3B4
void World::ImmediatePrototypeSchema::DestroyStub() {
}
// signature: World::ImmediatePrototypeSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8023E3B4 -> 0x8023E3CC
class Entity * World::ImmediatePrototypeSchema::ActivateEntity() {
}
// signature: World::ImmediatePrototypeSchema::Fix(World::Asset *, long, int)
// Range: 0x8023E3CC -> 0x8023E3D0
void World::ImmediatePrototypeSchema::Fix() {
}
// signature: World::ImmediatePrototypeEntity::Create(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8023E3D0 -> 0x8023E770
class ImmediatePrototypeEntity * World::ImmediatePrototypeEntity::Create(class EntityHandleBase * handle /* r17 */, class Asset * baseAsset /* r16 */) {
    // Local variables
    class ImmediatePrototypeAsset * asset; // r0
    int geomCount; // r28
    int memSize; // r15
    class StackAllocator allocator; // r1+0x18
    unsigned long long * geomIDs; // r0

    {
        // Range: 0x8023E450 -> 0x8023E740
        // Local variables
        int i; // r27
    }

    // References
    // -> static class ScadMgrModule scadMgrMod;
    // -> struct {} __vt__Q25World24ImmediatePrototypeEntity;
}
// Range: 0x8023E770 -> 0x8023E884
void World::ImmediatePrototypeEntity::Deactivate(class ImmediatePrototypeEntity * this /* r26 */) {
    // Local variables
    class EntityHandle * * geoment; // r0

    {
        // Range: 0x8023E788 -> 0x8023E790
        // Local variables
        int i; // r27
    }
}
// Range: 0x8023E884 -> 0x8023E8D4
void World::ImmediatePrototypeEntity::Destroy(class ImmediatePrototypeEntity * this /* r31 */) {
}
