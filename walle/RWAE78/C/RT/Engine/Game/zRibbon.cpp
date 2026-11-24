/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zRibbon.cpp
*/
class _OGRibbonSchema _OGRibbonschema; // size: 0x18, address: 0x80799928
class SchemaRegistrator _OGRibbonschemaReg; // size: 0x8, address: 0x80799940
// Range: 0x801AE050 -> 0x801AE060
void World::_OGRibbonEntity::Deactivate() {
}
// Range: 0x801AE060 -> 0x801AE0B0
void World::_OGRibbonEntity::Destroy(class _OGRibbonEntity * this /* r31 */) {
}
// signature: World::_OGRibbonSchema::Fix(World::Asset *, long, int)
// Range: 0x801AE110 -> 0x801AE118
void World::_OGRibbonSchema::Fix() {
}
// signature: World::_OGRibbonSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801AE120 -> 0x801AE16C
class EntityStub * World::_OGRibbonSchema::CreateStub(class _OGRibbonSchema * this /* r31 */) {
}
// signature: World::_OGRibbonSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x801AE170 -> 0x801AE188
void World::_OGRibbonSchema::DestroyStub() {
}
// signature: World::_OGRibbonSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801AE190 -> 0x801AE1F8
class Entity * World::_OGRibbonSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World15_OGRibbonEntity;
}
// signature: zRibbon::Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x801AE240 -> 0x801AE244
void zRibbon::Init() {
}
// signature: zRibbon::init(zRibbon::AssetType &)
// Range: 0x801AE250 -> 0x801AE470
void zRibbon::init(class zRibbon * this /* r30 */) {
    // Local variables
    int numCurves; // r31

    {
        // Range: 0x801AE2F4 -> 0x801AE354
        // Local variables
        int i; // r0
    }
}
// signature: zRibbon::setInitialProperties(xMat4x3 &, xVec3 &, xVec3 &, const xMat4x3 *)
// Range: 0x801AE470 -> 0x801AE748
void zRibbon::setInitialProperties(class zRibbon * this /* r29 */, class xVec3 * vel /* r30 */, class xMat4x3 * attachMat /* r31 */) {
    // Local variables
    float x; // f28
    float y; // f1
    float r2; // f0
    float len; // f0
    float r; // f27
    class xVec3 local; // r1+0x8
    class xMat3x3 rot; // r1+0x18
}
