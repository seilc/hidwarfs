/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zRuntimeEntity.cpp
*/
class _OGRuntimeEntityAssetSchema _OGRuntimeEntityAssetschema; // size: 0x18, address: 0x80799968
class SchemaRegistrator _OGRuntimeEntityAssetschemaReg; // size: 0x8, address: 0x80799980
// Range: 0x801AEE70 -> 0x801AEE80
void World::_OGRuntimeEntityAssetEntity::Deactivate() {
}
// Range: 0x801AEE80 -> 0x801AEED0
void World::_OGRuntimeEntityAssetEntity::Destroy(class _OGRuntimeEntityAssetEntity * this /* r31 */) {
}
// signature: World::_OGRuntimeEntityAssetSchema::Fix(World::Asset *, long, int)
// Range: 0x801AEF30 -> 0x801AEF38
void World::_OGRuntimeEntityAssetSchema::Fix() {
}
// signature: World::_OGRuntimeEntityAssetSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801AEF40 -> 0x801AEF8C
class EntityStub * World::_OGRuntimeEntityAssetSchema::CreateStub(class _OGRuntimeEntityAssetSchema * this /* r31 */) {
}
// signature: World::_OGRuntimeEntityAssetSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x801AEF90 -> 0x801AEFA8
void World::_OGRuntimeEntityAssetSchema::DestroyStub() {
}
// signature: World::_OGRuntimeEntityAssetSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801AEFB0 -> 0x801AF014
class Entity * World::_OGRuntimeEntityAssetSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World27_OGRuntimeEntityAssetEntity;
}
// signature: zRuntimeEntityCreateInfo::SetAssetFromUIDRef(char *)
// Range: 0x801AF060 -> 0x801AF0A0
void zRuntimeEntityCreateInfo::SetAssetFromUIDRef(class zRuntimeEntityCreateInfo * this /* r31 */) {
}
// Range: 0x801AF0A0 -> 0x801AF0F0
void * zRuntimeEntity::zRuntimeEntity() {
    // References
    // -> struct {} __vt__14zRuntimeEntity;
}
// Range: 0x801AF0F0 -> 0x801AF170
void zRuntimeEntity::_Create(class zRuntimeEntity * this /* r30 */, class zRuntimeEntityCreateInfo * ci /* r31 */) {
}
// Range: 0x801AF190 -> 0x801AF1EC
void zRuntimeEntity::DecRefCount(class zRuntimeEntity * this /* r31 */) {
}
// Range: 0x801AF220 -> 0x801AF248
void zRuntimeEntity::Spawn() {
}
