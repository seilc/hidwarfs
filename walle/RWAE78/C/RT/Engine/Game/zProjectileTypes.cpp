/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zProjectileTypes.cpp
*/
class _OGProjectileAssetSchema _OGProjectileAssetschema; // size: 0x18, address: 0x80799438
class SchemaRegistrator _OGProjectileAssetschemaReg; // size: 0x8, address: 0x80799450
static class zProjectileTypesTable gProjectileTypesTable[24]; // size: 0x3C0, address: 0x80700230
// Range: 0x8018E840 -> 0x8018E850
void World::_OGProjectileAssetEntity::Deactivate() {
}
// Range: 0x8018E850 -> 0x8018E8A0
void World::_OGProjectileAssetEntity::Destroy(class _OGProjectileAssetEntity * this /* r31 */) {
}
// signature: World::_OGProjectileAssetSchema::Fix(World::Asset *, long, int)
// Range: 0x8018E900 -> 0x8018E908
void World::_OGProjectileAssetSchema::Fix() {
}
// signature: World::_OGProjectileAssetSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8018E910 -> 0x8018E95C
class EntityStub * World::_OGProjectileAssetSchema::CreateStub(class _OGProjectileAssetSchema * this /* r31 */) {
}
// signature: World::_OGProjectileAssetSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8018E960 -> 0x8018E978
void World::_OGProjectileAssetSchema::DestroyStub() {
}
// signature: World::_OGProjectileAssetSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8018E980 -> 0x8018E9E4
class Entity * World::_OGProjectileAssetSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World24_OGProjectileAssetEntity;
}
// Range: 0x8018EA30 -> 0x8018EAD0
void zProjectileTypes_Prepare() {
    // Local variables
    class zProjectileTypesTable * projectileTypesTableEntry; // r30

    // References
    // -> static class zProjectileTypesTable gProjectileTypesTable[24];
}
